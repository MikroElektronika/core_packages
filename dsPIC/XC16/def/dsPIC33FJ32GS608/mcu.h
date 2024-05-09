/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33FJ32GS608 processor header
 *
 * (c) Copyright 1999-2023 Microchip Technology, All rights reserved
 * Part support version 2.10.A(27-Mar-2023)
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution. Publication is not required when
 *         this file is used in an embedded application.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef __dsPIC33FJ32GS608__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __33FJ32GS608_H
#define __33FJ32GS608_H

#define __XC16_PART_SUPPORT_VERSION 2010
#define __XC16_PART_SUPPORT_UPDATE 'A'

#define __write_to_IEC(X) \
   ( (void)(X), \
     __builtin_nop() \
   )

#define WREG0 WREG0
extern volatile uint16_t WREG0 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG1 WREG1
extern volatile uint16_t WREG1 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG2 WREG2
extern volatile uint16_t WREG2 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG3 WREG3
extern volatile uint16_t WREG3 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG4 WREG4
extern volatile uint16_t WREG4 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG5 WREG5
extern volatile uint16_t WREG5 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG6 WREG6
extern volatile uint16_t WREG6 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG7 WREG7
extern volatile uint16_t WREG7 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG8 WREG8
extern volatile uint16_t WREG8 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG9 WREG9
extern volatile uint16_t WREG9 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG10 WREG10
extern volatile uint16_t WREG10 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG11 WREG11
extern volatile uint16_t WREG11 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG12 WREG12
extern volatile uint16_t WREG12 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG13 WREG13
extern volatile uint16_t WREG13 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG14 WREG14
extern volatile uint16_t WREG14 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG15 WREG15
extern volatile uint16_t WREG15 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define SPLIM SPLIM
extern volatile uint16_t SPLIM __attribute__((__sfr__));
#define ACCAL ACCAL
extern volatile uint16_t ACCAL __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCAH ACCAH
extern volatile uint16_t ACCAH __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCAU ACCAU
extern volatile uint8_t ACCAU __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCBL ACCBL
extern volatile uint16_t ACCBL __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCBH ACCBH
extern volatile uint16_t ACCBH __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCBU ACCBU
extern volatile uint8_t ACCBU __attribute__((__sfr__,__deprecated__,__unsafe__));
#define PCL PCL
extern volatile uint16_t PCL __attribute__((__sfr__));
#define PCH PCH
extern volatile uint8_t PCH __attribute__((__sfr__));
#define TBLPAG TBLPAG
extern volatile uint8_t TBLPAG __attribute__((__sfr__));
#define PSVPAG PSVPAG
extern volatile uint8_t PSVPAG __attribute__((__sfr__));
#define RCOUNT RCOUNT
extern volatile uint16_t RCOUNT __attribute__((__sfr__));
#define DCOUNT DCOUNT
extern volatile uint16_t DCOUNT __attribute__((__sfr__));
#define DOSTARTL DOSTARTL
extern volatile uint16_t DOSTARTL __attribute__((__sfr__));
#define DOSTARTH DOSTARTH
extern volatile uint16_t DOSTARTH __attribute__((__sfr__));
#define DOENDL DOENDL
extern volatile uint16_t DOENDL __attribute__((__sfr__));
#define DOENDH DOENDH
extern volatile uint16_t DOENDH __attribute__((__sfr__));
#define SR SR
extern volatile uint16_t SR __attribute__((__sfr__));
__extension__ typedef struct tagSRBITS {
  union {
    struct {
      uint16_t C:1;
      uint16_t Z:1;
      uint16_t OV:1;
      uint16_t N:1;
      uint16_t RA:1;
      uint16_t IPL:3;
      uint16_t DC:1;
      uint16_t DA:1;
      uint16_t SAB:1;
      uint16_t OAB:1;
      uint16_t SB:1;
      uint16_t SA:1;
      uint16_t OB:1;
      uint16_t OA:1;
    };
    struct {
      uint16_t :5;
      uint16_t IPL0:1;
      uint16_t IPL1:1;
      uint16_t IPL2:1;
    };
  };
} SRBITS;
extern volatile SRBITS SRbits __attribute__((__sfr__));

#define CORCON CORCON
extern volatile uint16_t CORCON __attribute__((__sfr__));
__extension__ typedef struct tagCORCONBITS {
  union {
    struct {
      uint16_t IF:1;
      uint16_t RND:1;
      uint16_t PSV:1;
      uint16_t IPL3:1;
      uint16_t ACCSAT:1;
      uint16_t SATDW:1;
      uint16_t SATB:1;
      uint16_t SATA:1;
      uint16_t DL:3;
      uint16_t EDT:1;
      uint16_t US:1;
    };
    struct {
      uint16_t :8;
      uint16_t DL0:1;
      uint16_t DL1:1;
      uint16_t DL2:1;
    };
  };
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define MODCON MODCON
extern volatile uint16_t MODCON __attribute__((__sfr__));
__extension__ typedef struct tagMODCONBITS {
  union {
    struct {
      uint16_t XWM:4;
      uint16_t YWM:4;
      uint16_t BWM:4;
      uint16_t :2;
      uint16_t YMODEN:1;
      uint16_t XMODEN:1;
    };
    struct {
      uint16_t XWM0:1;
      uint16_t XWM1:1;
      uint16_t XWM2:1;
      uint16_t XWM3:1;
      uint16_t YWM0:1;
      uint16_t YWM1:1;
      uint16_t YWM2:1;
      uint16_t YWM3:1;
      uint16_t BWM0:1;
      uint16_t BWM1:1;
      uint16_t BWM2:1;
      uint16_t BWM3:1;
    };
  };
} MODCONBITS;
extern volatile MODCONBITS MODCONbits __attribute__((__sfr__));

#define XMODSRT XMODSRT
extern volatile uint16_t XMODSRT __attribute__((__sfr__));
#define XMODEND XMODEND
extern volatile uint16_t XMODEND __attribute__((__sfr__));
#define YMODSRT YMODSRT
extern volatile uint16_t YMODSRT __attribute__((__sfr__));
#define YMODEND YMODEND
extern volatile uint16_t YMODEND __attribute__((__sfr__));
#define XBREV XBREV
extern volatile uint16_t XBREV __attribute__((__sfr__));
__extension__ typedef struct tagXBREVBITS {
  union {
    struct {
      uint16_t XB:15;
      uint16_t BREN:1;
    };
    struct {
      uint16_t XB0:1;
      uint16_t XB1:1;
      uint16_t XB2:1;
      uint16_t XB3:1;
      uint16_t XB4:1;
      uint16_t XB5:1;
      uint16_t XB6:1;
      uint16_t XB7:1;
      uint16_t XB8:1;
      uint16_t XB9:1;
      uint16_t XB10:1;
      uint16_t XB11:1;
      uint16_t XB12:1;
      uint16_t XB13:1;
      uint16_t XB14:1;
    };
  };
} XBREVBITS;
extern volatile XBREVBITS XBREVbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile uint16_t DISICNT __attribute__((__sfr__));
#define CNEN1 CNEN1
extern volatile uint16_t CNEN1 __attribute__((__sfr__));
typedef struct tagCNEN1BITS {
  uint16_t CN0IE:1;
  uint16_t CN1IE:1;
  uint16_t CN2IE:1;
  uint16_t CN3IE:1;
  uint16_t CN4IE:1;
  uint16_t CN5IE:1;
  uint16_t CN6IE:1;
  uint16_t CN7IE:1;
  uint16_t CN8IE:1;
  uint16_t CN9IE:1;
  uint16_t CN10IE:1;
  uint16_t CN11IE:1;
  uint16_t CN12IE:1;
  uint16_t CN13IE:1;
  uint16_t CN14IE:1;
  uint16_t CN15IE:1;
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

#define CNEN2 CNEN2
extern volatile uint16_t CNEN2 __attribute__((__sfr__));
typedef struct tagCNEN2BITS {
  uint16_t CN16IE:1;
  uint16_t CN17IE:1;
  uint16_t CN18IE:1;
  uint16_t CN19IE:1;
  uint16_t CN20IE:1;
  uint16_t CN21IE:1;
  uint16_t CN22IE:1;
  uint16_t CN23IE:1;
} CNEN2BITS;
extern volatile CNEN2BITS CNEN2bits __attribute__((__sfr__));

#define CNPU1 CNPU1
extern volatile uint16_t CNPU1 __attribute__((__sfr__));
typedef struct tagCNPU1BITS {
  uint16_t CN0PUE:1;
  uint16_t CN1PUE:1;
  uint16_t CN2PUE:1;
  uint16_t CN3PUE:1;
  uint16_t CN4PUE:1;
  uint16_t CN5PUE:1;
  uint16_t CN6PUE:1;
  uint16_t CN7PUE:1;
  uint16_t CN8PUE:1;
  uint16_t CN9PUE:1;
  uint16_t CN10PUE:1;
  uint16_t CN11PUE:1;
  uint16_t CN12PUE:1;
  uint16_t CN13PUE:1;
  uint16_t CN14PUE:1;
  uint16_t CN15PUE:1;
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

#define CNPU2 CNPU2
extern volatile uint16_t CNPU2 __attribute__((__sfr__));
typedef struct tagCNPU2BITS {
  uint16_t CN16PUE:1;
  uint16_t CN17PUE:1;
  uint16_t CN18PUE:1;
  uint16_t CN19PUE:1;
  uint16_t CN20PUE:1;
  uint16_t CN21PUE:1;
  uint16_t CN22PUE:1;
  uint16_t CN23PUE:1;
} CNPU2BITS;
extern volatile CNPU2BITS CNPU2bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile uint16_t INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  uint16_t :1;
  uint16_t OSCFAIL:1;
  uint16_t STKERR:1;
  uint16_t ADDRERR:1;
  uint16_t MATHERR:1;
  uint16_t :1;
  uint16_t DIV0ERR:1;
  uint16_t SFTACERR:1;
  uint16_t COVTE:1;
  uint16_t OVBTE:1;
  uint16_t OVATE:1;
  uint16_t COVBERR:1;
  uint16_t COVAERR:1;
  uint16_t OVBERR:1;
  uint16_t OVAERR:1;
  uint16_t NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile uint16_t INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  uint16_t INT0EP:1;
  uint16_t INT1EP:1;
  uint16_t INT2EP:1;
  uint16_t INT3EP:1;
  uint16_t INT4EP:1;
  uint16_t :9;
  uint16_t DISI:1;
  uint16_t ALTIVT:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

#define IFS0 IFS0
extern volatile uint16_t IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  uint16_t INT0IF:1;
  uint16_t IC1IF:1;
  uint16_t OC1IF:1;
  uint16_t T1IF:1;
  uint16_t :1;
  uint16_t IC2IF:1;
  uint16_t OC2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
  uint16_t SPI1EIF:1;
  uint16_t SPI1IF:1;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t ADIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  uint16_t SI2C1IF:1;
  uint16_t MI2C1IF:1;
  uint16_t AC1IF:1;
  uint16_t CNIF:1;
  uint16_t INT1IF:1;
  uint16_t :4;
  uint16_t OC3IF:1;
  uint16_t OC4IF:1;
  uint16_t T4IF:1;
  uint16_t T5IF:1;
  uint16_t INT2IF:1;
  uint16_t U2RXIF:1;
  uint16_t U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile uint16_t IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  uint16_t SPI2EIF:1;
  uint16_t SPI2IF:1;
  uint16_t :3;
  uint16_t IC3IF:1;
  uint16_t IC4IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  uint16_t :1;
  uint16_t SI2C2IF:1;
  uint16_t MI2C2IF:1;
  uint16_t :2;
  uint16_t INT3IF:1;
  uint16_t INT4IF:1;
  uint16_t :2;
  uint16_t PSEMIF:1;
  uint16_t QEI1IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile uint16_t IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  uint16_t :1;
  uint16_t U1EIF:1;
  uint16_t U2EIF:1;
  uint16_t :6;
  uint16_t PSESMIF:1;
  uint16_t :1;
  uint16_t QEI2IF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile uint16_t IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  uint16_t :1;
  uint16_t ADCP8IF:1;
  uint16_t :11;
  uint16_t ADCP12IF:1;
  uint16_t PWM1IF:1;
  uint16_t PWM2IF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile uint16_t IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  uint16_t PWM3IF:1;
  uint16_t PWM4IF:1;
  uint16_t PWM5IF:1;
  uint16_t PWM6IF:1;
  uint16_t PWM7IF:1;
  uint16_t PWM8IF:1;
  uint16_t :1;
  uint16_t AC2IF:1;
  uint16_t AC3IF:1;
  uint16_t AC4IF:1;
  uint16_t :4;
  uint16_t ADCP0IF:1;
  uint16_t ADCP1IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IFS7 IFS7
extern volatile uint16_t IFS7 __attribute__((__sfr__));
typedef struct tagIFS7BITS {
  uint16_t ADCP2IF:1;
  uint16_t ADCP3IF:1;
  uint16_t ADCP4IF:1;
  uint16_t ADCP5IF:1;
  uint16_t ADCP6IF:1;
  uint16_t ADCP7IF:1;
} IFS7BITS;
extern volatile IFS7BITS IFS7bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t IC1IE:1;
  uint16_t OC1IE:1;
  uint16_t T1IE:1;
  uint16_t :1;
  uint16_t IC2IE:1;
  uint16_t OC2IE:1;
  uint16_t T2IE:1;
  uint16_t T3IE:1;
  uint16_t SPI1EIE:1;
  uint16_t SPI1IE:1;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t ADIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  uint16_t SI2C1IE:1;
  uint16_t MI2C1IE:1;
  uint16_t AC1IE:1;
  uint16_t CNIE:1;
  uint16_t INT1IE:1;
  uint16_t :4;
  uint16_t OC3IE:1;
  uint16_t OC4IE:1;
  uint16_t T4IE:1;
  uint16_t T5IE:1;
  uint16_t INT2IE:1;
  uint16_t U2RXIE:1;
  uint16_t U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile uint16_t IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  uint16_t SPI2EIE:1;
  uint16_t SPI2IE:1;
  uint16_t :3;
  uint16_t IC3IE:1;
  uint16_t IC4IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  uint16_t :1;
  uint16_t SI2C2IE:1;
  uint16_t MI2C2IE:1;
  uint16_t :2;
  uint16_t INT3IE:1;
  uint16_t INT4IE:1;
  uint16_t :2;
  uint16_t PSEMIE:1;
  uint16_t QEI1IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile uint16_t IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  uint16_t :1;
  uint16_t U1EIE:1;
  uint16_t U2EIE:1;
  uint16_t :6;
  uint16_t PSESMIE:1;
  uint16_t :1;
  uint16_t QEI2IE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile uint16_t IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  uint16_t :1;
  uint16_t ADCP8IE:1;
  uint16_t :11;
  uint16_t ADCP12IE:1;
  uint16_t PWM1IE:1;
  uint16_t PWM2IE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile uint16_t IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  uint16_t PWM3IE:1;
  uint16_t PWM4IE:1;
  uint16_t PWM5IE:1;
  uint16_t PWM6IE:1;
  uint16_t PWM7IE:1;
  uint16_t PWM8IE:1;
  uint16_t :1;
  uint16_t AC2IE:1;
  uint16_t AC3IE:1;
  uint16_t AC4IE:1;
  uint16_t :4;
  uint16_t ADCP0IE:1;
  uint16_t ADCP1IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IEC7 IEC7
extern volatile uint16_t IEC7 __attribute__((__sfr__));
typedef struct tagIEC7BITS {
  uint16_t ADCP2IE:1;
  uint16_t ADCP3IE:1;
  uint16_t ADCP4IE:1;
  uint16_t ADCP5IE:1;
  uint16_t ADCP6IE:1;
  uint16_t ADCP7IE:1;
} IEC7BITS;
extern volatile IEC7BITS IEC7bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile uint16_t IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      uint16_t INT0IP:3;
      uint16_t :1;
      uint16_t IC1IP:3;
      uint16_t :1;
      uint16_t OC1IP:3;
      uint16_t :1;
      uint16_t T1IP:3;
    };
    struct {
      uint16_t INT0IP0:1;
      uint16_t INT0IP1:1;
      uint16_t INT0IP2:1;
      uint16_t :1;
      uint16_t IC1IP0:1;
      uint16_t IC1IP1:1;
      uint16_t IC1IP2:1;
      uint16_t :1;
      uint16_t OC1IP0:1;
      uint16_t OC1IP1:1;
      uint16_t OC1IP2:1;
      uint16_t :1;
      uint16_t T1IP0:1;
      uint16_t T1IP1:1;
      uint16_t T1IP2:1;
    };
  };
} IPC0BITS;
extern volatile IPC0BITS IPC0bits __attribute__((__sfr__));

#define IPC1 IPC1
extern volatile uint16_t IPC1 __attribute__((__sfr__));
__extension__ typedef struct tagIPC1BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t IC2IP:3;
      uint16_t :1;
      uint16_t OC2IP:3;
      uint16_t :1;
      uint16_t T2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t IC2IP0:1;
      uint16_t IC2IP1:1;
      uint16_t IC2IP2:1;
      uint16_t :1;
      uint16_t OC2IP0:1;
      uint16_t OC2IP1:1;
      uint16_t OC2IP2:1;
      uint16_t :1;
      uint16_t T2IP0:1;
      uint16_t T2IP1:1;
      uint16_t T2IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile uint16_t IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      uint16_t T3IP:3;
      uint16_t :1;
      uint16_t SPI1EIP:3;
      uint16_t :1;
      uint16_t SPI1IP:3;
      uint16_t :1;
      uint16_t U1RXIP:3;
    };
    struct {
      uint16_t T3IP0:1;
      uint16_t T3IP1:1;
      uint16_t T3IP2:1;
      uint16_t :1;
      uint16_t SPI1EIP0:1;
      uint16_t SPI1EIP1:1;
      uint16_t SPI1EIP2:1;
      uint16_t :1;
      uint16_t SPI1IP0:1;
      uint16_t SPI1IP1:1;
      uint16_t SPI1IP2:1;
      uint16_t :1;
      uint16_t U1RXIP0:1;
      uint16_t U1RXIP1:1;
      uint16_t U1RXIP2:1;
    };
  };
} IPC2BITS;
extern volatile IPC2BITS IPC2bits __attribute__((__sfr__));

#define IPC3 IPC3
extern volatile uint16_t IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      uint16_t U1TXIP:3;
      uint16_t :1;
      uint16_t ADIP:3;
    };
    struct {
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t ADIP0:1;
      uint16_t ADIP1:1;
      uint16_t ADIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile uint16_t IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      uint16_t SI2C1IP:3;
      uint16_t :1;
      uint16_t MI2C1IP:3;
      uint16_t :1;
      uint16_t AC1IP:3;
      uint16_t :1;
      uint16_t CNIP:3;
    };
    struct {
      uint16_t SI2C1IP0:1;
      uint16_t SI2C1IP1:1;
      uint16_t SI2C1IP2:1;
      uint16_t :1;
      uint16_t MI2C1IP0:1;
      uint16_t MI2C1IP1:1;
      uint16_t MI2C1IP2:1;
      uint16_t :1;
      uint16_t AC1IP0:1;
      uint16_t AC1IP1:1;
      uint16_t AC1IP2:1;
      uint16_t :1;
      uint16_t CNIP0:1;
      uint16_t CNIP1:1;
      uint16_t CNIP2:1;
    };
  };
} IPC4BITS;
extern volatile IPC4BITS IPC4bits __attribute__((__sfr__));

#define IPC5 IPC5
extern volatile uint16_t IPC5 __attribute__((__sfr__));
__extension__ typedef struct tagIPC5BITS {
  union {
    struct {
      uint16_t INT1IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile uint16_t IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t OC3IP:3;
      uint16_t :1;
      uint16_t OC4IP:3;
      uint16_t :1;
      uint16_t T4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t OC3IP0:1;
      uint16_t OC3IP1:1;
      uint16_t OC3IP2:1;
      uint16_t :1;
      uint16_t OC4IP0:1;
      uint16_t OC4IP1:1;
      uint16_t OC4IP2:1;
      uint16_t :1;
      uint16_t T4IP0:1;
      uint16_t T4IP1:1;
      uint16_t T4IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile uint16_t IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      uint16_t T5IP:3;
      uint16_t :1;
      uint16_t INT2IP:3;
      uint16_t :1;
      uint16_t U2RXIP:3;
      uint16_t :1;
      uint16_t U2TXIP:3;
    };
    struct {
      uint16_t T5IP0:1;
      uint16_t T5IP1:1;
      uint16_t T5IP2:1;
      uint16_t :1;
      uint16_t INT2IP0:1;
      uint16_t INT2IP1:1;
      uint16_t INT2IP2:1;
      uint16_t :1;
      uint16_t U2RXIP0:1;
      uint16_t U2RXIP1:1;
      uint16_t U2RXIP2:1;
      uint16_t :1;
      uint16_t U2TXIP0:1;
      uint16_t U2TXIP1:1;
      uint16_t U2TXIP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC8 IPC8
extern volatile uint16_t IPC8 __attribute__((__sfr__));
__extension__ typedef struct tagIPC8BITS {
  union {
    struct {
      uint16_t SPI2EIP:3;
      uint16_t :1;
      uint16_t SPI2IP:3;
    };
    struct {
      uint16_t SPI2EIP0:1;
      uint16_t SPI2EIP1:1;
      uint16_t SPI2EIP2:1;
      uint16_t :1;
      uint16_t SPI2IP0:1;
      uint16_t SPI2IP1:1;
      uint16_t SPI2IP2:1;
    };
  };
} IPC8BITS;
extern volatile IPC8BITS IPC8bits __attribute__((__sfr__));

#define IPC9 IPC9
extern volatile uint16_t IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t IC3IP:3;
      uint16_t :1;
      uint16_t IC4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t IC3IP0:1;
      uint16_t IC3IP1:1;
      uint16_t IC3IP2:1;
      uint16_t :1;
      uint16_t IC4IP0:1;
      uint16_t IC4IP1:1;
      uint16_t IC4IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile uint16_t IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t SI2C2IP:3;
      uint16_t :1;
      uint16_t MI2C2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t SI2C2IP0:1;
      uint16_t SI2C2IP1:1;
      uint16_t SI2C2IP2:1;
      uint16_t :1;
      uint16_t MI2C2IP0:1;
      uint16_t MI2C2IP1:1;
      uint16_t MI2C2IP2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC13 IPC13
extern volatile uint16_t IPC13 __attribute__((__sfr__));
__extension__ typedef struct tagIPC13BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t INT3IP:3;
      uint16_t :1;
      uint16_t INT4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t INT3IP0:1;
      uint16_t INT3IP1:1;
      uint16_t INT3IP2:1;
      uint16_t :1;
      uint16_t INT4IP0:1;
      uint16_t INT4IP1:1;
      uint16_t INT4IP2:1;
    };
  };
} IPC13BITS;
extern volatile IPC13BITS IPC13bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile uint16_t IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PSEMIP:3;
      uint16_t :1;
      uint16_t QEI1IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PSEMIP0:1;
      uint16_t PSEMIP1:1;
      uint16_t PSEMIP2:1;
      uint16_t :1;
      uint16_t QEI1IP0:1;
      uint16_t QEI1IP1:1;
      uint16_t QEI1IP2:1;
    };
  };
} IPC14BITS;
extern volatile IPC14BITS IPC14bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile uint16_t IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t U1EIP:3;
      uint16_t :1;
      uint16_t U2EIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t U1EIP0:1;
      uint16_t U1EIP1:1;
      uint16_t U1EIP2:1;
      uint16_t :1;
      uint16_t U2EIP0:1;
      uint16_t U2EIP1:1;
      uint16_t U2EIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile uint16_t IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PSESMIP:3;
      uint16_t :5;
      uint16_t QEI2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PSESMIP0:1;
      uint16_t PSESMIP1:1;
      uint16_t PSESMIP2:1;
      uint16_t :5;
      uint16_t QEI2IP0:1;
      uint16_t QEI2IP1:1;
      uint16_t QEI2IP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

#define IPC20 IPC20
extern volatile uint16_t IPC20 __attribute__((__sfr__));
__extension__ typedef struct tagIPC20BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t ADCP8IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t ADCP8IP0:1;
      uint16_t ADCP8IP1:1;
      uint16_t ADCP8IP2:1;
    };
  };
} IPC20BITS;
extern volatile IPC20BITS IPC20bits __attribute__((__sfr__));

#define IPC21 IPC21
extern volatile uint16_t IPC21 __attribute__((__sfr__));
__extension__ typedef struct tagIPC21BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t ADCP12IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t ADCP12IP0:1;
      uint16_t ADCP12IP1:1;
      uint16_t ADCP12IP2:1;
    };
  };
} IPC21BITS;
extern volatile IPC21BITS IPC21bits __attribute__((__sfr__));

#define IPC23 IPC23
extern volatile uint16_t IPC23 __attribute__((__sfr__));
__extension__ typedef struct tagIPC23BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t PWM1IP:3;
      uint16_t :1;
      uint16_t PWM2IP:3;
    };
    struct {
      uint16_t :8;
      uint16_t PWM1IP0:1;
      uint16_t PWM1IP1:1;
      uint16_t PWM1IP2:1;
      uint16_t :1;
      uint16_t PWM2IP0:1;
      uint16_t PWM2IP1:1;
      uint16_t PWM2IP2:1;
    };
  };
} IPC23BITS;
extern volatile IPC23BITS IPC23bits __attribute__((__sfr__));

#define IPC24 IPC24
extern volatile uint16_t IPC24 __attribute__((__sfr__));
__extension__ typedef struct tagIPC24BITS {
  union {
    struct {
      uint16_t PWM3IP:3;
      uint16_t :1;
      uint16_t PWM4IP:3;
      uint16_t :1;
      uint16_t PWM5IP:3;
      uint16_t :1;
      uint16_t PWM6IP:3;
    };
    struct {
      uint16_t PWM3IP0:1;
      uint16_t PWM3IP1:1;
      uint16_t PWM3IP2:1;
      uint16_t :1;
      uint16_t PWM4IP0:1;
      uint16_t PWM4IP1:1;
      uint16_t PWM4IP2:1;
      uint16_t :1;
      uint16_t PWM5IP0:1;
      uint16_t PWM5IP1:1;
      uint16_t PWM5IP2:1;
      uint16_t :1;
      uint16_t PWM6IP0:1;
      uint16_t PWM6IP1:1;
      uint16_t PWM6IP2:1;
    };
  };
} IPC24BITS;
extern volatile IPC24BITS IPC24bits __attribute__((__sfr__));

#define IPC25 IPC25
extern volatile uint16_t IPC25 __attribute__((__sfr__));
__extension__ typedef struct tagIPC25BITS {
  union {
    struct {
      uint16_t PWM7IP:3;
      uint16_t :1;
      uint16_t PWM8IP:3;
      uint16_t :5;
      uint16_t AC2IP:3;
    };
    struct {
      uint16_t PWM7IP0:1;
      uint16_t PWM7IP1:1;
      uint16_t PWM7IP2:1;
      uint16_t :1;
      uint16_t PWM8IP0:1;
      uint16_t PWM8IP1:1;
      uint16_t PWM8IP2:1;
      uint16_t :5;
      uint16_t AC2IP0:1;
      uint16_t AC2IP1:1;
      uint16_t AC2IP2:1;
    };
  };
} IPC25BITS;
extern volatile IPC25BITS IPC25bits __attribute__((__sfr__));

#define IPC26 IPC26
extern volatile uint16_t IPC26 __attribute__((__sfr__));
__extension__ typedef struct tagIPC26BITS {
  union {
    struct {
      uint16_t AC3IP:3;
      uint16_t :1;
      uint16_t AC4IP:3;
    };
    struct {
      uint16_t AC3IP0:1;
      uint16_t AC3IP1:1;
      uint16_t AC3IP2:1;
      uint16_t :1;
      uint16_t AC4IP0:1;
      uint16_t AC4IP1:1;
      uint16_t AC4IP2:1;
    };
  };
} IPC26BITS;
extern volatile IPC26BITS IPC26bits __attribute__((__sfr__));

#define IPC27 IPC27
extern volatile uint16_t IPC27 __attribute__((__sfr__));
__extension__ typedef struct tagIPC27BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t ADCP0IP:3;
      uint16_t :1;
      uint16_t ADCP1IP:3;
    };
    struct {
      uint16_t :8;
      uint16_t ADCP0IP0:1;
      uint16_t ADCP0IP1:1;
      uint16_t ADCP0IP2:1;
      uint16_t :1;
      uint16_t ADCP1IP0:1;
      uint16_t ADCP1IP1:1;
      uint16_t ADCP1IP2:1;
    };
  };
} IPC27BITS;
extern volatile IPC27BITS IPC27bits __attribute__((__sfr__));

#define IPC28 IPC28
extern volatile uint16_t IPC28 __attribute__((__sfr__));
__extension__ typedef struct tagIPC28BITS {
  union {
    struct {
      uint16_t ADCP2IP:3;
      uint16_t :1;
      uint16_t ADCP3IP:3;
      uint16_t :1;
      uint16_t ADCP4IP:3;
      uint16_t :1;
      uint16_t ADCP5IP:3;
    };
    struct {
      uint16_t ADCP2IP0:1;
      uint16_t ADCP2IP1:1;
      uint16_t ADCP2IP2:1;
      uint16_t :1;
      uint16_t ADCP3IP0:1;
      uint16_t ADCP3IP1:1;
      uint16_t ADCP3IP2:1;
      uint16_t :1;
      uint16_t ADCP4IP0:1;
      uint16_t ADCP4IP1:1;
      uint16_t ADCP4IP2:1;
      uint16_t :1;
      uint16_t ADCP5IP0:1;
      uint16_t ADCP5IP1:1;
      uint16_t ADCP5IP2:1;
    };
  };
} IPC28BITS;
extern volatile IPC28BITS IPC28bits __attribute__((__sfr__));

#define IPC29 IPC29
extern volatile uint16_t IPC29 __attribute__((__sfr__));
__extension__ typedef struct tagIPC29BITS {
  union {
    struct {
      uint16_t ADCP6IP:3;
      uint16_t :1;
      uint16_t ADCP7IP:3;
    };
    struct {
      uint16_t ADCP6IP0:1;
      uint16_t ADCP6IP1:1;
      uint16_t ADCP6IP2:1;
      uint16_t :1;
      uint16_t ADCP7IP0:1;
      uint16_t ADCP7IP1:1;
      uint16_t ADCP7IP2:1;
    };
  };
} IPC29BITS;
extern volatile IPC29BITS IPC29bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile uint16_t INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      uint16_t VECNUM:7;
      uint16_t :1;
      uint16_t ILR:4;
    };
    struct {
      uint16_t VECNUM0:1;
      uint16_t VECNUM1:1;
      uint16_t VECNUM2:1;
      uint16_t VECNUM3:1;
      uint16_t VECNUM4:1;
      uint16_t VECNUM5:1;
      uint16_t VECNUM6:1;
      uint16_t :1;
      uint16_t ILR0:1;
      uint16_t ILR1:1;
      uint16_t ILR2:1;
      uint16_t ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

#define TMR1 TMR1
extern volatile uint16_t TMR1 __attribute__((__sfr__));
#define PR1 PR1
extern volatile uint16_t PR1 __attribute__((__sfr__));
#define T1CON T1CON
extern volatile uint16_t T1CON __attribute__((__sfr__));
__extension__ typedef struct tagT1CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t TSYNC:1;
      uint16_t :1;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define TMR2 TMR2
extern volatile uint16_t TMR2 __attribute__((__sfr__));
#define TMR3HLD TMR3HLD
extern volatile uint16_t TMR3HLD __attribute__((__sfr__));
#define TMR3 TMR3
extern volatile uint16_t TMR3 __attribute__((__sfr__));
#define PR2 PR2
extern volatile uint16_t PR2 __attribute__((__sfr__));
#define PR3 PR3
extern volatile uint16_t PR3 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile uint16_t T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :1;
      uint16_t T32:1;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define T3CON T3CON
extern volatile uint16_t T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :2;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

#define TMR4 TMR4
extern volatile uint16_t TMR4 __attribute__((__sfr__));
#define TMR5HLD TMR5HLD
extern volatile uint16_t TMR5HLD __attribute__((__sfr__));
#define TMR5 TMR5
extern volatile uint16_t TMR5 __attribute__((__sfr__));
#define PR4 PR4
extern volatile uint16_t PR4 __attribute__((__sfr__));
#define PR5 PR5
extern volatile uint16_t PR5 __attribute__((__sfr__));
#define T4CON T4CON
extern volatile uint16_t T4CON __attribute__((__sfr__));
__extension__ typedef struct tagT4CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :1;
      uint16_t T32:1;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T4CONBITS;
extern volatile T4CONBITS T4CONbits __attribute__((__sfr__));

#define T5CON T5CON
extern volatile uint16_t T5CON __attribute__((__sfr__));
__extension__ typedef struct tagT5CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :2;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T5CONBITS;
extern volatile T5CONBITS T5CONbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Input Capture modules */
typedef struct tagIC {
        uint16_t icxbuf;
        uint16_t icxcon;
} IC, *PIC;

#define IC1 ACC1
extern volatile IC IC1 __attribute__((__sfr__));

#define IC1BUF IC1BUF
extern volatile uint16_t IC1BUF __attribute__((__sfr__));
#define IC1CON IC1CON
extern volatile uint16_t IC1CON __attribute__((__sfr__));
__extension__ typedef struct tagIC1CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC1CONBITS;
extern volatile IC1CONBITS IC1CONbits __attribute__((__sfr__));


#define IC2 ACC2
extern volatile IC IC2 __attribute__((__sfr__));

#define IC2BUF IC2BUF
extern volatile uint16_t IC2BUF __attribute__((__sfr__));
#define IC2CON IC2CON
extern volatile uint16_t IC2CON __attribute__((__sfr__));
__extension__ typedef struct tagIC2CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC2CONBITS;
extern volatile IC2CONBITS IC2CONbits __attribute__((__sfr__));


#define IC3 ACC3
extern volatile IC IC3 __attribute__((__sfr__));

#define IC3BUF IC3BUF
extern volatile uint16_t IC3BUF __attribute__((__sfr__));
#define IC3CON IC3CON
extern volatile uint16_t IC3CON __attribute__((__sfr__));
__extension__ typedef struct tagIC3CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC3CONBITS;
extern volatile IC3CONBITS IC3CONbits __attribute__((__sfr__));


#define IC4 ACC4
extern volatile IC IC4 __attribute__((__sfr__));

#define IC4BUF IC4BUF
extern volatile uint16_t IC4BUF __attribute__((__sfr__));
#define IC4CON IC4CON
extern volatile uint16_t IC4CON __attribute__((__sfr__));
__extension__ typedef struct tagIC4CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC4CONBITS;
extern volatile IC4CONBITS IC4CONbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Output Compare modules */
typedef struct tagOC {
        uint16_t ocxrs;
        uint16_t ocxr;
        uint16_t ocxcon;
} OC, *POC;

#define OC1 OC1
extern volatile OC OC1 __attribute__((__sfr__));

#define OC1RS OC1RS
extern volatile uint16_t OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile uint16_t OC1R __attribute__((__sfr__));
#define OC1CON OC1CON
extern volatile uint16_t OC1CON __attribute__((__sfr__));
__extension__ typedef struct tagOC1CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC1CONBITS;
extern volatile OC1CONBITS OC1CONbits __attribute__((__sfr__));


#define OC2RS OC2RS
extern volatile uint16_t OC2RS __attribute__((__sfr__));
#define OC2R OC2R
extern volatile uint16_t OC2R __attribute__((__sfr__));
#define OC2CON OC2CON
extern volatile uint16_t OC2CON __attribute__((__sfr__));
__extension__ typedef struct tagOC2CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC2CONBITS;
extern volatile OC2CONBITS OC2CONbits __attribute__((__sfr__));


#define OC3RS OC3RS
extern volatile uint16_t OC3RS __attribute__((__sfr__));
#define OC3R OC3R
extern volatile uint16_t OC3R __attribute__((__sfr__));
#define OC3CON OC3CON
extern volatile uint16_t OC3CON __attribute__((__sfr__));
__extension__ typedef struct tagOC3CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC3CONBITS;
extern volatile OC3CONBITS OC3CONbits __attribute__((__sfr__));


#define OC4RS OC4RS
extern volatile uint16_t OC4RS __attribute__((__sfr__));
#define OC4R OC4R
extern volatile uint16_t OC4R __attribute__((__sfr__));
#define OC4CON OC4CON
extern volatile uint16_t OC4CON __attribute__((__sfr__));
__extension__ typedef struct tagOC4CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC4CONBITS;
extern volatile OC4CONBITS OC4CONbits __attribute__((__sfr__));

#define QEI1CON QEI1CON
extern volatile uint16_t QEI1CON __attribute__((__sfr__));
__extension__ typedef struct tagQEI1CONBITS {
  union {
    struct {
      uint16_t UPDN_SRC:1;
      uint16_t TQCS:1;
      uint16_t POSRES:1;
      uint16_t TQCKPS:2;
      uint16_t TQGATE:1;
      uint16_t PCDOUT:1;
      uint16_t SWPAB:1;
      uint16_t QEIM:3;
      uint16_t UPDN:1;
      uint16_t INDX:1;
      uint16_t QEISIDL:1;
      uint16_t :1;
      uint16_t CNTERR:1;
    };
    struct {
      uint16_t :3;
      uint16_t TQCKPS0:1;
      uint16_t TQCKPS1:1;
      uint16_t :3;
      uint16_t QEIM0:1;
      uint16_t QEIM1:1;
      uint16_t QEIM2:1;
    };
  };
} QEI1CONBITS;
extern volatile QEI1CONBITS QEI1CONbits __attribute__((__sfr__));

#define DFLT1CON DFLT1CON
extern volatile uint16_t DFLT1CON __attribute__((__sfr__));
__extension__ typedef struct tagDFLT1CONBITS {
  union {
    struct {
      uint16_t :4;
      uint16_t QECK:3;
      uint16_t QEOUT:1;
      uint16_t CEID:1;
      uint16_t IMV:2;
    };
    struct {
      uint16_t :4;
      uint16_t QECK0:1;
      uint16_t QECK1:1;
      uint16_t QECK2:1;
      uint16_t :2;
      uint16_t IMV0:1;
      uint16_t IMV1:1;
    };
  };
} DFLT1CONBITS;
extern volatile DFLT1CONBITS DFLT1CONbits __attribute__((__sfr__));

#define POS1CNT POS1CNT
extern volatile uint16_t POS1CNT __attribute__((__sfr__));
#define MAX1CNT MAX1CNT
extern volatile uint16_t MAX1CNT __attribute__((__sfr__));
#define QEI2CON QEI2CON
extern volatile uint16_t QEI2CON __attribute__((__sfr__));
__extension__ typedef struct tagQEI2CONBITS {
  union {
    struct {
      uint16_t UPDN_SRC:1;
      uint16_t TQCS:1;
      uint16_t POSRES:1;
      uint16_t TQCKPS:2;
      uint16_t TQGATE:1;
      uint16_t PCDOUT:1;
      uint16_t SWPAB:1;
      uint16_t QEIM:3;
      uint16_t UPDN:1;
      uint16_t INDX:1;
      uint16_t QEISIDL:1;
      uint16_t :1;
      uint16_t CNTERR:1;
    };
    struct {
      uint16_t :3;
      uint16_t TQCKPS0:1;
      uint16_t TQCKPS1:1;
      uint16_t :3;
      uint16_t QEIM0:1;
      uint16_t QEIM1:1;
      uint16_t QEIM2:1;
    };
  };
} QEI2CONBITS;
extern volatile QEI2CONBITS QEI2CONbits __attribute__((__sfr__));

#define DFLT2CON DFLT2CON
extern volatile uint16_t DFLT2CON __attribute__((__sfr__));
__extension__ typedef struct tagDFLT2CONBITS {
  union {
    struct {
      uint16_t :4;
      uint16_t QECK:3;
      uint16_t QEOUT:1;
      uint16_t CEID:1;
      uint16_t IMV:2;
    };
    struct {
      uint16_t :4;
      uint16_t QECK0:1;
      uint16_t QECK1:1;
      uint16_t QECK2:1;
      uint16_t :2;
      uint16_t IMV0:1;
      uint16_t IMV1:1;
    };
  };
} DFLT2CONBITS;
extern volatile DFLT2CONBITS DFLT2CONbits __attribute__((__sfr__));

#define POS2CNT POS2CNT
extern volatile uint16_t POS2CNT __attribute__((__sfr__));
#define MAX2CNT MAX2CNT
extern volatile uint16_t MAX2CNT __attribute__((__sfr__));
#define I2C1RCV I2C1RCV
extern volatile uint16_t I2C1RCV __attribute__((__sfr__));
#define I2CRCV I2CRCV
extern volatile uint16_t I2CRCV __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile uint16_t I2C1TRN __attribute__((__sfr__));
#define I2CTRN I2CTRN
extern volatile uint16_t I2CTRN __attribute__((__sfr__));
#define I2C1BRG I2C1BRG
extern volatile uint16_t I2C1BRG __attribute__((__sfr__));
#define I2C1CON I2C1CON
extern volatile uint16_t I2C1CON __attribute__((__sfr__));
typedef struct tagI2C1CONBITS {
  uint16_t SEN:1;
  uint16_t RSEN:1;
  uint16_t PEN:1;
  uint16_t RCEN:1;
  uint16_t ACKEN:1;
  uint16_t ACKDT:1;
  uint16_t STREN:1;
  uint16_t GCEN:1;
  uint16_t SMEN:1;
  uint16_t DISSLW:1;
  uint16_t A10M:1;
  uint16_t IPMIEN:1;
  uint16_t SCLREL:1;
  uint16_t I2CSIDL:1;
  uint16_t :1;
  uint16_t I2CEN:1;
} I2C1CONBITS;
extern volatile I2C1CONBITS I2C1CONbits __attribute__((__sfr__));

#define I2CCON I2CCON
extern volatile uint16_t I2CCON __attribute__((__sfr__));
typedef struct tagI2CCONBITS {
  uint16_t SEN:1;
  uint16_t RSEN:1;
  uint16_t PEN:1;
  uint16_t RCEN:1;
  uint16_t ACKEN:1;
  uint16_t ACKDT:1;
  uint16_t STREN:1;
  uint16_t GCEN:1;
  uint16_t SMEN:1;
  uint16_t DISSLW:1;
  uint16_t A10M:1;
  uint16_t IPMIEN:1;
  uint16_t SCLREL:1;
  uint16_t I2CSIDL:1;
  uint16_t :1;
  uint16_t I2CEN:1;
} I2CCONBITS;
extern volatile I2CCONBITS I2CCONbits __attribute__((__sfr__));

#define I2C1STAT I2C1STAT
extern volatile uint16_t I2C1STAT __attribute__((__sfr__));
typedef struct tagI2C1STATBITS {
  uint16_t TBF:1;
  uint16_t RBF:1;
  uint16_t R_W:1;
  uint16_t S:1;
  uint16_t P:1;
  uint16_t D_A:1;
  uint16_t I2COV:1;
  uint16_t IWCOL:1;
  uint16_t ADD10:1;
  uint16_t GCSTAT:1;
  uint16_t BCL:1;
  uint16_t :3;
  uint16_t TRSTAT:1;
  uint16_t ACKSTAT:1;
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2CSTAT I2CSTAT
extern volatile uint16_t I2CSTAT __attribute__((__sfr__));
typedef struct tagI2CSTATBITS {
  uint16_t TBF:1;
  uint16_t RBF:1;
  uint16_t R_W:1;
  uint16_t S:1;
  uint16_t P:1;
  uint16_t D_A:1;
  uint16_t I2COV:1;
  uint16_t IWCOL:1;
  uint16_t ADD10:1;
  uint16_t GCSTAT:1;
  uint16_t BCL:1;
  uint16_t :3;
  uint16_t TRSTAT:1;
  uint16_t ACKSTAT:1;
} I2CSTATBITS;
extern volatile I2CSTATBITS I2CSTATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile uint16_t I2C1ADD __attribute__((__sfr__));
#define I2CADD I2CADD
extern volatile uint16_t I2CADD __attribute__((__sfr__));
#define I2C1MSK I2C1MSK
extern volatile uint16_t I2C1MSK __attribute__((__sfr__));
#define I2C2RCV I2C2RCV
extern volatile uint16_t I2C2RCV __attribute__((__sfr__));
#define I2C2TRN I2C2TRN
extern volatile uint16_t I2C2TRN __attribute__((__sfr__));
#define I2C2BRG I2C2BRG
extern volatile uint16_t I2C2BRG __attribute__((__sfr__));
#define I2C2CON I2C2CON
extern volatile uint16_t I2C2CON __attribute__((__sfr__));
typedef struct tagI2C2CONBITS {
  uint16_t SEN:1;
  uint16_t RSEN:1;
  uint16_t PEN:1;
  uint16_t RCEN:1;
  uint16_t ACKEN:1;
  uint16_t ACKDT:1;
  uint16_t STREN:1;
  uint16_t GCEN:1;
  uint16_t SMEN:1;
  uint16_t DISSLW:1;
  uint16_t A10M:1;
  uint16_t IPMIEN:1;
  uint16_t SCLREL:1;
  uint16_t I2CSIDL:1;
  uint16_t :1;
  uint16_t I2CEN:1;
} I2C2CONBITS;
extern volatile I2C2CONBITS I2C2CONbits __attribute__((__sfr__));

#define I2C2STAT I2C2STAT
extern volatile uint16_t I2C2STAT __attribute__((__sfr__));
typedef struct tagI2C2STATBITS {
  uint16_t TBF:1;
  uint16_t RBF:1;
  uint16_t R_W:1;
  uint16_t S:1;
  uint16_t P:1;
  uint16_t D_A:1;
  uint16_t I2COV:1;
  uint16_t IWCOL:1;
  uint16_t ADD10:1;
  uint16_t GCSTAT:1;
  uint16_t BCL:1;
  uint16_t :3;
  uint16_t TRSTAT:1;
  uint16_t ACKSTAT:1;
} I2C2STATBITS;
extern volatile I2C2STATBITS I2C2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile uint16_t I2C2ADD __attribute__((__sfr__));
#define I2C2MSK I2C2MSK
extern volatile uint16_t I2C2MSK __attribute__((__sfr__));

/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
        uint16_t uxmode;
        uint16_t uxsta;
        uint16_t uxtxreg;
        uint16_t uxrxreg;
        uint16_t uxbrg;
} UART, *PUART;

#define UxMODEBITS U1MODEBITS
#define UxSTABITS U1STABITS
#define UxTXREGBITS U1TXREGBITS
#define UxRXREGBITS U1RXREGBITS
#define UxBRGBITS U1BRGBITS

#define UART1 UART1
extern volatile UART UART1 __attribute__((__sfr__));

#define U1MODE U1MODE
extern volatile uint16_t U1MODE __attribute__((__sfr__));
__extension__ typedef struct tagU1MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t BRGH:1;
      uint16_t URXINV:1;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t UEN:2;
      uint16_t :1;
      uint16_t RTSMD:1;
      uint16_t IREN:1;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
      uint16_t :5;
      uint16_t UEN0:1;
      uint16_t UEN1:1;
    };
  };
} U1MODEBITS;
extern volatile U1MODEBITS U1MODEbits __attribute__((__sfr__));

#define U1STA U1STA
extern volatile uint16_t U1STA __attribute__((__sfr__));
__extension__ typedef struct tagU1STABITS {
  union {
    struct {
      uint16_t URXDA:1;
      uint16_t OERR:1;
      uint16_t FERR:1;
      uint16_t PERR:1;
      uint16_t RIDLE:1;
      uint16_t ADDEN:1;
      uint16_t URXISEL:2;
      uint16_t TRMT:1;
      uint16_t UTXBF:1;
      uint16_t UTXEN:1;
      uint16_t UTXBRK:1;
      uint16_t :1;
      uint16_t UTXISEL0:1;
      uint16_t UTXINV:1;
      uint16_t UTXISEL1:1;
    };
    struct {
      uint16_t :6;
      uint16_t URXISEL0:1;
      uint16_t URXISEL1:1;
    };
  };
} U1STABITS;
extern volatile U1STABITS U1STAbits __attribute__((__sfr__));

#define U1TXREG U1TXREG
extern volatile uint16_t U1TXREG __attribute__((__sfr__));
__extension__ typedef struct tagU1TXREGBITS {
  union {
    struct {
      uint16_t U1TXREG:9;
    };
    struct {
      uint16_t UTXREG0:1;
      uint16_t UTXREG1:1;
      uint16_t UTXREG2:1;
      uint16_t UTXREG3:1;
      uint16_t UTXREG4:1;
      uint16_t UTXREG5:1;
      uint16_t UTXREG6:1;
      uint16_t UTXREG7:1;
      uint16_t UTXREG8:1;
    };
  };
} U1TXREGBITS;
extern volatile U1TXREGBITS U1TXREGbits __attribute__((__sfr__));

#define U1RXREG U1RXREG
extern volatile uint16_t U1RXREG __attribute__((__sfr__));
__extension__ typedef struct tagU1RXREGBITS {
  union {
    struct {
      uint16_t U1RXREG:9;
    };
    struct {
      uint16_t URXREG0:1;
      uint16_t URXREG1:1;
      uint16_t URXREG2:1;
      uint16_t URXREG3:1;
      uint16_t URXREG4:1;
      uint16_t URXREG5:1;
      uint16_t URXREG6:1;
      uint16_t URXREG7:1;
      uint16_t URXREG8:1;
    };
  };
} U1RXREGBITS;
extern volatile U1RXREGBITS U1RXREGbits __attribute__((__sfr__));

#define U1BRG U1BRG
extern volatile uint16_t U1BRG __attribute__((__sfr__));

#define UART2 UART2
extern volatile UART UART2 __attribute__((__sfr__));

#define U2MODE U2MODE
extern volatile uint16_t U2MODE __attribute__((__sfr__));
__extension__ typedef struct tagU2MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t BRGH:1;
      uint16_t URXINV:1;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t UEN:2;
      uint16_t :1;
      uint16_t RTSMD:1;
      uint16_t IREN:1;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
      uint16_t :5;
      uint16_t UEN0:1;
      uint16_t UEN1:1;
    };
  };
} U2MODEBITS;
extern volatile U2MODEBITS U2MODEbits __attribute__((__sfr__));

#define U2STA U2STA
extern volatile uint16_t U2STA __attribute__((__sfr__));
__extension__ typedef struct tagU2STABITS {
  union {
    struct {
      uint16_t URXDA:1;
      uint16_t OERR:1;
      uint16_t FERR:1;
      uint16_t PERR:1;
      uint16_t RIDLE:1;
      uint16_t ADDEN:1;
      uint16_t URXISEL:2;
      uint16_t TRMT:1;
      uint16_t UTXBF:1;
      uint16_t UTXEN:1;
      uint16_t UTXBRK:1;
      uint16_t :1;
      uint16_t UTXISEL0:1;
      uint16_t UTXINV:1;
      uint16_t UTXISEL1:1;
    };
    struct {
      uint16_t :6;
      uint16_t URXISEL0:1;
      uint16_t URXISEL1:1;
    };
  };
} U2STABITS;
extern volatile U2STABITS U2STAbits __attribute__((__sfr__));

#define U2TXREG U2TXREG
extern volatile uint16_t U2TXREG __attribute__((__sfr__));
__extension__ typedef struct tagU2TXREGBITS {
  union {
    struct {
      uint16_t U2TXREG:9;
    };
    struct {
      uint16_t UTXREG0:1;
      uint16_t UTXREG1:1;
      uint16_t UTXREG2:1;
      uint16_t UTXREG3:1;
      uint16_t UTXREG4:1;
      uint16_t UTXREG5:1;
      uint16_t UTXREG6:1;
      uint16_t UTXREG7:1;
      uint16_t UTXREG8:1;
    };
  };
} U2TXREGBITS;
extern volatile U2TXREGBITS U2TXREGbits __attribute__((__sfr__));

#define U2RXREG U2RXREG
extern volatile uint16_t U2RXREG __attribute__((__sfr__));
__extension__ typedef struct tagU2RXREGBITS {
  union {
    struct {
      uint16_t U2RXREG:9;
    };
    struct {
      uint16_t URXREG0:1;
      uint16_t URXREG1:1;
      uint16_t URXREG2:1;
      uint16_t URXREG3:1;
      uint16_t URXREG4:1;
      uint16_t URXREG5:1;
      uint16_t URXREG6:1;
      uint16_t URXREG7:1;
      uint16_t URXREG8:1;
    };
  };
} U2RXREGBITS;
extern volatile U2RXREGBITS U2RXREGbits __attribute__((__sfr__));

#define U2BRG U2BRG
extern volatile uint16_t U2BRG __attribute__((__sfr__));

/* Generic structure of entire SFR area for each SPI module */
typedef struct tagSPI {
        uint16_t spixstat;
        uint16_t spixcon1;
        uint16_t spixcon2;
        uint16_t unused;
        uint16_t spixbuf;
} SPI, *PSPI;

#define SPIxSTATBITS SPI1STATBITS
#define SPIxCONBITS SPI1CONBITS

#define SPI1 SPI1
extern volatile SPI SPI1 __attribute__((__sfr__));

#define SPI1STAT SPI1STAT
extern volatile uint16_t SPI1STAT __attribute__((__sfr__));
typedef struct tagSPI1STATBITS {
  uint16_t SPIRBF:1;
  uint16_t SPITBF:1;
  uint16_t :4;
  uint16_t SPIROV:1;
  uint16_t :6;
  uint16_t SPISIDL:1;
  uint16_t :1;
  uint16_t SPIEN:1;
} SPI1STATBITS;
extern volatile SPI1STATBITS SPI1STATbits __attribute__((__sfr__));

#define SPI1CON1 SPI1CON1
extern volatile uint16_t SPI1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI1CON1BITS {
  union {
    struct {
      uint16_t PPRE:2;
      uint16_t SPRE:3;
      uint16_t MSTEN:1;
      uint16_t CKP:1;
      uint16_t SSEN:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
      uint16_t MODE16:1;
      uint16_t DISSDO:1;
      uint16_t DISSCK:1;
    };
    struct {
      uint16_t PPRE0:1;
      uint16_t PPRE1:1;
      uint16_t SPRE0:1;
      uint16_t SPRE1:1;
      uint16_t SPRE2:1;
    };
  };
} SPI1CON1BITS;
extern volatile SPI1CON1BITS SPI1CON1bits __attribute__((__sfr__));

#define SPI1CON2 SPI1CON2
extern volatile uint16_t SPI1CON2 __attribute__((__sfr__));
typedef struct tagSPI1CON2BITS {
  uint16_t :1;
  uint16_t FRMDLY:1;
  uint16_t :11;
  uint16_t FRMPOL:1;
  uint16_t SPIFSD:1;
  uint16_t FRMEN:1;
} SPI1CON2BITS;
extern volatile SPI1CON2BITS SPI1CON2bits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile uint16_t SPI1BUF __attribute__((__sfr__));

#define SPI2 SPI2
extern volatile SPI SPI2 __attribute__((__sfr__));

#define SPI2STAT SPI2STAT
extern volatile uint16_t SPI2STAT __attribute__((__sfr__));
typedef struct tagSPI2STATBITS {
  uint16_t SPIRBF:1;
  uint16_t SPITBF:1;
  uint16_t :4;
  uint16_t SPIROV:1;
  uint16_t :6;
  uint16_t SPISIDL:1;
  uint16_t :1;
  uint16_t SPIEN:1;
} SPI2STATBITS;
extern volatile SPI2STATBITS SPI2STATbits __attribute__((__sfr__));

#define SPI2CON1 SPI2CON1
extern volatile uint16_t SPI2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI2CON1BITS {
  union {
    struct {
      uint16_t PPRE:2;
      uint16_t SPRE:3;
      uint16_t MSTEN:1;
      uint16_t CKP:1;
      uint16_t SSEN:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
      uint16_t MODE16:1;
      uint16_t DISSDO:1;
      uint16_t DISSCK:1;
    };
    struct {
      uint16_t PPRE0:1;
      uint16_t PPRE1:1;
      uint16_t SPRE0:1;
      uint16_t SPRE1:1;
      uint16_t SPRE2:1;
    };
  };
} SPI2CON1BITS;
extern volatile SPI2CON1BITS SPI2CON1bits __attribute__((__sfr__));

#define SPI2CON2 SPI2CON2
extern volatile uint16_t SPI2CON2 __attribute__((__sfr__));
typedef struct tagSPI2CON2BITS {
  uint16_t :1;
  uint16_t FRMDLY:1;
  uint16_t :11;
  uint16_t FRMPOL:1;
  uint16_t SPIFSD:1;
  uint16_t FRMEN:1;
} SPI2CON2BITS;
extern volatile SPI2CON2BITS SPI2CON2bits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile uint16_t SPI2BUF __attribute__((__sfr__));
#define TRISA TRISA
extern volatile uint16_t TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  uint16_t :9;
  uint16_t TRISA9:1;
  uint16_t TRISA10:1;
  uint16_t :3;
  uint16_t TRISA14:1;
  uint16_t TRISA15:1;
} TRISABITS;
extern volatile TRISABITS TRISAbits __attribute__((__sfr__));

#define PORTA PORTA
extern volatile uint16_t PORTA __attribute__((__sfr__));
typedef struct tagPORTABITS {
  uint16_t :9;
  uint16_t RA9:1;
  uint16_t RA10:1;
  uint16_t :3;
  uint16_t RA14:1;
  uint16_t RA15:1;
} PORTABITS;
extern volatile PORTABITS PORTAbits __attribute__((__sfr__));

#define LATA LATA
extern volatile uint16_t LATA __attribute__((__sfr__));
typedef struct tagLATABITS {
  uint16_t :9;
  uint16_t LATA9:1;
  uint16_t LATA10:1;
  uint16_t :3;
  uint16_t LATA14:1;
  uint16_t LATA15:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

#define ODCA ODCA
extern volatile uint16_t ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  uint16_t :9;
  uint16_t ODCA9:1;
  uint16_t ODCA10:1;
  uint16_t :3;
  uint16_t ODCA14:1;
  uint16_t ODCA15:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

#define TRISB TRISB
extern volatile uint16_t TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  uint16_t TRISB0:1;
  uint16_t TRISB1:1;
  uint16_t TRISB2:1;
  uint16_t TRISB3:1;
  uint16_t TRISB4:1;
  uint16_t TRISB5:1;
  uint16_t TRISB6:1;
  uint16_t TRISB7:1;
  uint16_t TRISB8:1;
  uint16_t TRISB9:1;
  uint16_t TRISB10:1;
  uint16_t TRISB11:1;
  uint16_t TRISB12:1;
  uint16_t TRISB13:1;
  uint16_t TRISB14:1;
  uint16_t TRISB15:1;
} TRISBBITS;
extern volatile TRISBBITS TRISBbits __attribute__((__sfr__));

#define PORTB PORTB
extern volatile uint16_t PORTB __attribute__((__sfr__));
typedef struct tagPORTBBITS {
  uint16_t RB0:1;
  uint16_t RB1:1;
  uint16_t RB2:1;
  uint16_t RB3:1;
  uint16_t RB4:1;
  uint16_t RB5:1;
  uint16_t RB6:1;
  uint16_t RB7:1;
  uint16_t RB8:1;
  uint16_t RB9:1;
  uint16_t RB10:1;
  uint16_t RB11:1;
  uint16_t RB12:1;
  uint16_t RB13:1;
  uint16_t RB14:1;
  uint16_t RB15:1;
} PORTBBITS;
extern volatile PORTBBITS PORTBbits __attribute__((__sfr__));

#define LATB LATB
extern volatile uint16_t LATB __attribute__((__sfr__));
typedef struct tagLATBBITS {
  uint16_t LATB0:1;
  uint16_t LATB1:1;
  uint16_t LATB2:1;
  uint16_t LATB3:1;
  uint16_t LATB4:1;
  uint16_t LATB5:1;
  uint16_t LATB6:1;
  uint16_t LATB7:1;
  uint16_t LATB8:1;
  uint16_t LATB9:1;
  uint16_t LATB10:1;
  uint16_t LATB11:1;
  uint16_t LATB12:1;
  uint16_t LATB13:1;
  uint16_t LATB14:1;
  uint16_t LATB15:1;
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

#define TRISC TRISC
extern volatile uint16_t TRISC __attribute__((__sfr__));
typedef struct tagTRISCBITS {
  uint16_t :1;
  uint16_t TRISC1:1;
  uint16_t TRISC2:1;
  uint16_t :9;
  uint16_t TRISC12:1;
  uint16_t TRISC13:1;
  uint16_t TRISC14:1;
  uint16_t TRISC15:1;
} TRISCBITS;
extern volatile TRISCBITS TRISCbits __attribute__((__sfr__));

#define PORTC PORTC
extern volatile uint16_t PORTC __attribute__((__sfr__));
typedef struct tagPORTCBITS {
  uint16_t :1;
  uint16_t RC1:1;
  uint16_t RC2:1;
  uint16_t :9;
  uint16_t RC12:1;
  uint16_t RC13:1;
  uint16_t RC14:1;
  uint16_t RC15:1;
} PORTCBITS;
extern volatile PORTCBITS PORTCbits __attribute__((__sfr__));

#define LATC LATC
extern volatile uint16_t LATC __attribute__((__sfr__));
typedef struct tagLATCBITS {
  uint16_t :1;
  uint16_t LATC1:1;
  uint16_t LATC2:1;
  uint16_t :9;
  uint16_t LATC12:1;
  uint16_t LATC13:1;
  uint16_t LATC14:1;
  uint16_t LATC15:1;
} LATCBITS;
extern volatile LATCBITS LATCbits __attribute__((__sfr__));

#define TRISD TRISD
extern volatile uint16_t TRISD __attribute__((__sfr__));
typedef struct tagTRISDBITS {
  uint16_t TRISD0:1;
  uint16_t TRISD1:1;
  uint16_t TRISD2:1;
  uint16_t TRISD3:1;
  uint16_t TRISD4:1;
  uint16_t TRISD5:1;
  uint16_t TRISD6:1;
  uint16_t TRISD7:1;
  uint16_t TRISD8:1;
  uint16_t TRISD9:1;
  uint16_t TRISD10:1;
  uint16_t TRISD11:1;
  uint16_t TRISD12:1;
  uint16_t TRISD13:1;
  uint16_t TRISD14:1;
  uint16_t TRISD15:1;
} TRISDBITS;
extern volatile TRISDBITS TRISDbits __attribute__((__sfr__));

#define PORTD PORTD
extern volatile uint16_t PORTD __attribute__((__sfr__));
typedef struct tagPORTDBITS {
  uint16_t RD0:1;
  uint16_t RD1:1;
  uint16_t RD2:1;
  uint16_t RD3:1;
  uint16_t RD4:1;
  uint16_t RD5:1;
  uint16_t RD6:1;
  uint16_t RD7:1;
  uint16_t RD8:1;
  uint16_t RD9:1;
  uint16_t RD10:1;
  uint16_t RD11:1;
  uint16_t RD12:1;
  uint16_t RD13:1;
  uint16_t RD14:1;
  uint16_t RD15:1;
} PORTDBITS;
extern volatile PORTDBITS PORTDbits __attribute__((__sfr__));

#define LATD LATD
extern volatile uint16_t LATD __attribute__((__sfr__));
typedef struct tagLATDBITS {
  uint16_t LATD0:1;
  uint16_t LATD1:1;
  uint16_t LATD2:1;
  uint16_t LATD3:1;
  uint16_t LATD4:1;
  uint16_t LATD5:1;
  uint16_t LATD6:1;
  uint16_t LATD7:1;
  uint16_t LATD8:1;
  uint16_t LATD9:1;
  uint16_t LATD10:1;
  uint16_t LATD11:1;
  uint16_t LATD12:1;
  uint16_t LATD13:1;
  uint16_t LATD14:1;
  uint16_t LATD15:1;
} LATDBITS;
extern volatile LATDBITS LATDbits __attribute__((__sfr__));

#define ODCD ODCD
extern volatile uint16_t ODCD __attribute__((__sfr__));
typedef struct tagODCDBITS {
  uint16_t ODCD0:1;
  uint16_t ODCD1:1;
  uint16_t ODCD2:1;
  uint16_t ODCD3:1;
  uint16_t ODCD4:1;
  uint16_t ODCD5:1;
  uint16_t ODCD6:1;
  uint16_t ODCD7:1;
  uint16_t ODCD8:1;
  uint16_t ODCD9:1;
  uint16_t ODCD10:1;
  uint16_t ODCD11:1;
  uint16_t ODCD12:1;
  uint16_t ODCD13:1;
  uint16_t ODCD14:1;
  uint16_t ODCD15:1;
} ODCDBITS;
extern volatile ODCDBITS ODCDbits __attribute__((__sfr__));

#define TRISE TRISE
extern volatile uint16_t TRISE __attribute__((__sfr__));
typedef struct tagTRISEBITS {
  uint16_t TRISE0:1;
  uint16_t TRISE1:1;
  uint16_t TRISE2:1;
  uint16_t TRISE3:1;
  uint16_t TRISE4:1;
  uint16_t TRISE5:1;
  uint16_t TRISE6:1;
  uint16_t TRISE7:1;
  uint16_t TRISE8:1;
  uint16_t TRISE9:1;
} TRISEBITS;
extern volatile TRISEBITS TRISEbits __attribute__((__sfr__));

#define PORTE PORTE
extern volatile uint16_t PORTE __attribute__((__sfr__));
typedef struct tagPORTEBITS {
  uint16_t RE0:1;
  uint16_t RE1:1;
  uint16_t RE2:1;
  uint16_t RE3:1;
  uint16_t RE4:1;
  uint16_t RE5:1;
  uint16_t RE6:1;
  uint16_t RE7:1;
  uint16_t RE8:1;
  uint16_t RE9:1;
} PORTEBITS;
extern volatile PORTEBITS PORTEbits __attribute__((__sfr__));

#define LATE LATE
extern volatile uint16_t LATE __attribute__((__sfr__));
typedef struct tagLATEBITS {
  uint16_t LATE0:1;
  uint16_t LATE1:1;
  uint16_t LATE2:1;
  uint16_t LATE3:1;
  uint16_t LATE4:1;
  uint16_t LATE5:1;
  uint16_t LATE6:1;
  uint16_t LATE7:1;
  uint16_t LATE8:1;
  uint16_t LATE9:1;
} LATEBITS;
extern volatile LATEBITS LATEbits __attribute__((__sfr__));

#define ODCE ODCE
extern volatile uint16_t ODCE __attribute__((__sfr__));
typedef struct tagODCEBITS {
  uint16_t ODCE0:1;
  uint16_t ODCE1:1;
  uint16_t ODCE2:1;
  uint16_t ODCE3:1;
  uint16_t ODCE4:1;
  uint16_t ODCE5:1;
  uint16_t ODCE6:1;
  uint16_t ODCE7:1;
} ODCEBITS;
extern volatile ODCEBITS ODCEbits __attribute__((__sfr__));

#define TRISF TRISF
extern volatile uint16_t TRISF __attribute__((__sfr__));
typedef struct tagTRISFBITS {
  uint16_t TRISF0:1;
  uint16_t TRISF1:1;
  uint16_t TRISF2:1;
  uint16_t TRISF3:1;
  uint16_t TRISF4:1;
  uint16_t TRISF5:1;
  uint16_t TRISF6:1;
  uint16_t TRISF7:1;
  uint16_t TRISF8:1;
} TRISFBITS;
extern volatile TRISFBITS TRISFbits __attribute__((__sfr__));

#define PORTF PORTF
extern volatile uint16_t PORTF __attribute__((__sfr__));
typedef struct tagPORTFBITS {
  uint16_t RF0:1;
  uint16_t RF1:1;
  uint16_t RF2:1;
  uint16_t RF3:1;
  uint16_t RF4:1;
  uint16_t RF5:1;
  uint16_t RF6:1;
  uint16_t RF7:1;
  uint16_t RF8:1;
} PORTFBITS;
extern volatile PORTFBITS PORTFbits __attribute__((__sfr__));

#define LATF LATF
extern volatile uint16_t LATF __attribute__((__sfr__));
typedef struct tagLATFBITS {
  uint16_t LATF0:1;
  uint16_t LATF1:1;
  uint16_t LATF2:1;
  uint16_t LATF3:1;
  uint16_t LATF4:1;
  uint16_t LATF5:1;
  uint16_t LATF6:1;
  uint16_t LATF7:1;
  uint16_t LATF8:1;
} LATFBITS;
extern volatile LATFBITS LATFbits __attribute__((__sfr__));

#define ODCF ODCF
extern volatile uint16_t ODCF __attribute__((__sfr__));
typedef struct tagODCFBITS {
  uint16_t :1;
  uint16_t ODCF1:1;
  uint16_t ODCF2:1;
  uint16_t ODCF3:1;
  uint16_t :2;
  uint16_t ODCF6:1;
  uint16_t ODCF7:1;
  uint16_t ODCF8:1;
} ODCFBITS;
extern volatile ODCFBITS ODCFbits __attribute__((__sfr__));

#define TRISG TRISG
extern volatile uint16_t TRISG __attribute__((__sfr__));
typedef struct tagTRISGBITS {
  uint16_t TRISG0:1;
  uint16_t TRISG1:1;
  uint16_t TRISG2:1;
  uint16_t TRISG3:1;
  uint16_t :2;
  uint16_t TRISG6:1;
  uint16_t TRISG7:1;
  uint16_t TRISG8:1;
  uint16_t TRISG9:1;
} TRISGBITS;
extern volatile TRISGBITS TRISGbits __attribute__((__sfr__));

#define PORTG PORTG
extern volatile uint16_t PORTG __attribute__((__sfr__));
typedef struct tagPORTGBITS {
  uint16_t RG0:1;
  uint16_t RG1:1;
  uint16_t RG2:1;
  uint16_t RG3:1;
  uint16_t :2;
  uint16_t RG6:1;
  uint16_t RG7:1;
  uint16_t RG8:1;
  uint16_t RG9:1;
} PORTGBITS;
extern volatile PORTGBITS PORTGbits __attribute__((__sfr__));

#define LATG LATG
extern volatile uint16_t LATG __attribute__((__sfr__));
typedef struct tagLATGBITS {
  uint16_t LATG0:1;
  uint16_t LATG1:1;
  uint16_t LATG2:1;
  uint16_t LATG3:1;
  uint16_t :2;
  uint16_t LATG6:1;
  uint16_t LATG7:1;
  uint16_t LATG8:1;
  uint16_t LATG9:1;
} LATGBITS;
extern volatile LATGBITS LATGbits __attribute__((__sfr__));

#define ODCG ODCG
extern volatile uint16_t ODCG __attribute__((__sfr__));
typedef struct tagODCGBITS {
  uint16_t ODCG0:1;
  uint16_t ODCG1:1;
  uint16_t ODCG2:1;
  uint16_t ODCG3:1;
  uint16_t :2;
  uint16_t ODCG6:1;
  uint16_t ODCG7:1;
  uint16_t ODCG8:1;
  uint16_t ODCG9:1;
} ODCGBITS;
extern volatile ODCGBITS ODCGbits __attribute__((__sfr__));

#define ADCON ADCON
extern volatile uint16_t ADCON __attribute__((__sfr__));
__extension__ typedef struct tagADCONBITS {
  union {
    struct {
      uint16_t ADCS:3;
      uint16_t :1;
      uint16_t ASYNCSAMP:1;
      uint16_t SEQSAMP:1;
      uint16_t ORDER:1;
      uint16_t EIE:1;
      uint16_t FORM:1;
      uint16_t :1;
      uint16_t GSWTRG:1;
      uint16_t :1;
      uint16_t SLOWCLK:1;
      uint16_t ADSIDL:1;
      uint16_t :1;
      uint16_t ADON:1;
    };
    struct {
      uint16_t ADCS0:1;
      uint16_t ADCS1:1;
      uint16_t ADCS2:1;
    };
  };
} ADCONBITS;
extern volatile ADCONBITS ADCONbits __attribute__((__sfr__));

#define ADPCFG ADPCFG
extern volatile uint16_t ADPCFG __attribute__((__sfr__));
typedef struct tagADPCFGBITS {
  uint16_t PCFG0:1;
  uint16_t PCFG1:1;
  uint16_t PCFG2:1;
  uint16_t PCFG3:1;
  uint16_t PCFG4:1;
  uint16_t PCFG5:1;
  uint16_t PCFG6:1;
  uint16_t PCFG7:1;
  uint16_t PCFG8:1;
  uint16_t PCFG9:1;
  uint16_t PCFG10:1;
  uint16_t PCFG11:1;
  uint16_t PCFG12:1;
  uint16_t PCFG13:1;
  uint16_t PCFG14:1;
  uint16_t PCFG15:1;
} ADPCFGBITS;
extern volatile ADPCFGBITS ADPCFGbits __attribute__((__sfr__));

#define ADPCFG2 ADPCFG2
extern volatile uint16_t ADPCFG2 __attribute__((__sfr__));
typedef struct tagADPCFG2BITS {
  uint16_t PCFG16:1;
  uint16_t PCFG17:1;
} ADPCFG2BITS;
extern volatile ADPCFG2BITS ADPCFG2bits __attribute__((__sfr__));

#define ADSTAT ADSTAT
extern volatile uint16_t ADSTAT __attribute__((__sfr__));
typedef struct tagADSTATBITS {
  uint16_t P0RDY:1;
  uint16_t P1RDY:1;
  uint16_t P2RDY:1;
  uint16_t P3RDY:1;
  uint16_t P4RDY:1;
  uint16_t P5RDY:1;
  uint16_t P6RDY:1;
  uint16_t P7RDY:1;
  uint16_t P8RDY:1;
  uint16_t :3;
  uint16_t P12RDY:1;
} ADSTATBITS;
extern volatile ADSTATBITS ADSTATbits __attribute__((__sfr__));

#define ADBASE ADBASE
extern volatile uint16_t ADBASE __attribute__((__sfr__));
#define ADCPC0 ADCPC0
extern volatile uint16_t ADCPC0 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC0BITS {
  union {
    struct {
      uint16_t TRGSRC0:5;
      uint16_t SWTRG0:1;
      uint16_t PEND0:1;
      uint16_t IRQEN0:1;
      uint16_t TRGSRC1:5;
      uint16_t SWTRG1:1;
      uint16_t PEND1:1;
      uint16_t IRQEN1:1;
    };
    struct {
      uint16_t TRGSRC00:1;
      uint16_t TRGSRC01:1;
      uint16_t TRGSRC02:1;
      uint16_t TRGSRC03:1;
      uint16_t TRGSRC04:1;
      uint16_t :3;
      uint16_t TRGSRC10:1;
      uint16_t TRGSRC11:1;
      uint16_t TRGSRC12:1;
      uint16_t TRGSRC13:1;
      uint16_t TRGSRC14:1;
    };
  };
} ADCPC0BITS;
extern volatile ADCPC0BITS ADCPC0bits __attribute__((__sfr__));

#define ADCPC1 ADCPC1
extern volatile uint16_t ADCPC1 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC1BITS {
  union {
    struct {
      uint16_t TRGSRC2:5;
      uint16_t SWTRG2:1;
      uint16_t PEND2:1;
      uint16_t IRQEN2:1;
      uint16_t TRGSRC3:5;
      uint16_t SWTRG3:1;
      uint16_t PEND3:1;
      uint16_t IRQEN3:1;
    };
    struct {
      uint16_t TRGSRC20:1;
      uint16_t TRGSRC21:1;
      uint16_t TRGSRC22:1;
      uint16_t TRGSRC23:1;
      uint16_t TRGSRC24:1;
      uint16_t :3;
      uint16_t TRGSRC30:1;
      uint16_t TRGSRC31:1;
      uint16_t TRGSRC32:1;
      uint16_t TRGSRC33:1;
      uint16_t TRGSRC34:1;
    };
  };
} ADCPC1BITS;
extern volatile ADCPC1BITS ADCPC1bits __attribute__((__sfr__));

#define ADCPC2 ADCPC2
extern volatile uint16_t ADCPC2 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC2BITS {
  union {
    struct {
      uint16_t TRGSRC4:5;
      uint16_t SWTRG4:1;
      uint16_t PEND4:1;
      uint16_t IRQEN4:1;
      uint16_t TRGSRC5:5;
      uint16_t SWTRG5:1;
      uint16_t PEND5:1;
      uint16_t IRQEN5:1;
    };
    struct {
      uint16_t TRGSRC40:1;
      uint16_t TRGSRC41:1;
      uint16_t TRGSRC42:1;
      uint16_t TRGSRC43:1;
      uint16_t TRGSRC44:1;
      uint16_t :3;
      uint16_t TRGSRC50:1;
      uint16_t TRGSRC51:1;
      uint16_t TRGSRC52:1;
      uint16_t TRGSRC53:1;
      uint16_t TRGSRC54:1;
    };
  };
} ADCPC2BITS;
extern volatile ADCPC2BITS ADCPC2bits __attribute__((__sfr__));

#define ADCPC3 ADCPC3
extern volatile uint16_t ADCPC3 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC3BITS {
  union {
    struct {
      uint16_t TRGSRC6:5;
      uint16_t SWTRG6:1;
      uint16_t PEND6:1;
      uint16_t IRQEN6:1;
      uint16_t TRGSRC7:5;
      uint16_t SWTRG7:1;
      uint16_t PEND7:1;
      uint16_t IRQEN7:1;
    };
    struct {
      uint16_t TRGSRC60:1;
      uint16_t TRGSRC61:1;
      uint16_t TRGSRC62:1;
      uint16_t TRGSRC63:1;
      uint16_t TRGSRC64:1;
      uint16_t :3;
      uint16_t TRGSRC70:1;
      uint16_t TRGSRC71:1;
      uint16_t TRGSRC72:1;
      uint16_t TRGSRC73:1;
      uint16_t TRGSRC74:1;
    };
  };
} ADCPC3BITS;
extern volatile ADCPC3BITS ADCPC3bits __attribute__((__sfr__));

#define ADCPC4 ADCPC4
extern volatile uint16_t ADCPC4 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC4BITS {
  union {
    struct {
      uint16_t TRGSRC8:5;
      uint16_t SWTRG8:1;
      uint16_t PEND8:1;
      uint16_t IRQEN8:1;
    };
    struct {
      uint16_t TRGSRC80:1;
      uint16_t TRGSRC81:1;
      uint16_t TRGSRC82:1;
      uint16_t TRGSRC83:1;
      uint16_t TRGSRC84:1;
    };
  };
} ADCPC4BITS;
extern volatile ADCPC4BITS ADCPC4bits __attribute__((__sfr__));

#define ADCPC6 ADCPC6
extern volatile uint16_t ADCPC6 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC6BITS {
  union {
    struct {
      uint16_t TRGSRC12:5;
      uint16_t SWTRG12:1;
      uint16_t PEND12:1;
      uint16_t IRQEN12:1;
    };
    struct {
      uint16_t TRGSRC120:1;
      uint16_t TRGSRC121:1;
      uint16_t TRGSRC122:1;
      uint16_t TRGSRC123:1;
      uint16_t TRGSRC124:1;
    };
  };
} ADCPC6BITS;
extern volatile ADCPC6BITS ADCPC6bits __attribute__((__sfr__));

#define ADCBUF0 ADCBUF0
extern volatile uint16_t ADCBUF0 __attribute__((__sfr__));
#define ADCBUF1 ADCBUF1
extern volatile uint16_t ADCBUF1 __attribute__((__sfr__));
#define ADCBUF2 ADCBUF2
extern volatile uint16_t ADCBUF2 __attribute__((__sfr__));
#define ADCBUF3 ADCBUF3
extern volatile uint16_t ADCBUF3 __attribute__((__sfr__));
#define ADCBUF4 ADCBUF4
extern volatile uint16_t ADCBUF4 __attribute__((__sfr__));
#define ADCBUF5 ADCBUF5
extern volatile uint16_t ADCBUF5 __attribute__((__sfr__));
#define ADCBUF6 ADCBUF6
extern volatile uint16_t ADCBUF6 __attribute__((__sfr__));
#define ADCBUF7 ADCBUF7
extern volatile uint16_t ADCBUF7 __attribute__((__sfr__));
#define ADCBUF8 ADCBUF8
extern volatile uint16_t ADCBUF8 __attribute__((__sfr__));
#define ADCBUF9 ADCBUF9
extern volatile uint16_t ADCBUF9 __attribute__((__sfr__));
#define ADCBUF10 ADCBUF10
extern volatile uint16_t ADCBUF10 __attribute__((__sfr__));
#define ADCBUF11 ADCBUF11
extern volatile uint16_t ADCBUF11 __attribute__((__sfr__));
#define ADCBUF12 ADCBUF12
extern volatile uint16_t ADCBUF12 __attribute__((__sfr__));
#define ADCBUF13 ADCBUF13
extern volatile uint16_t ADCBUF13 __attribute__((__sfr__));
#define ADCBUF14 ADCBUF14
extern volatile uint16_t ADCBUF14 __attribute__((__sfr__));
#define ADCBUF15 ADCBUF15
extern volatile uint16_t ADCBUF15 __attribute__((__sfr__));
#define ADCBUF16 ADCBUF16
extern volatile uint16_t ADCBUF16 __attribute__((__sfr__));
#define ADCBUF17 ADCBUF17
extern volatile uint16_t ADCBUF17 __attribute__((__sfr__));
#define ADCBUF24 ADCBUF24
extern volatile uint16_t ADCBUF24 __attribute__((__sfr__));
#define ADCBUF25 ADCBUF25
extern volatile uint16_t ADCBUF25 __attribute__((__sfr__));
#define PTCON PTCON
extern volatile uint16_t PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      uint16_t SEVTPS:4;
      uint16_t SYNCSRC:3;
      uint16_t SYNCEN:1;
      uint16_t SYNCOEN:1;
      uint16_t SYNCPOL:1;
      uint16_t EIPU:1;
      uint16_t SEIEN:1;
      uint16_t SESTAT:1;
      uint16_t PTSIDL:1;
      uint16_t :1;
      uint16_t PTEN:1;
    };
    struct {
      uint16_t SEVTPS0:1;
      uint16_t SEVTPS1:1;
      uint16_t SEVTPS2:1;
      uint16_t SEVTPS3:1;
      uint16_t SYNCSRC0:1;
      uint16_t SYNCSRC1:1;
      uint16_t SYNCSRC2:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define PTCON2 PTCON2
extern volatile uint16_t PTCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPTCON2BITS {
  union {
    struct {
      uint16_t PCLKDIV:3;
    };
    struct {
      uint16_t PCLKDIV0:1;
      uint16_t PCLKDIV1:1;
      uint16_t PCLKDIV2:1;
    };
  };
} PTCON2BITS;
extern volatile PTCON2BITS PTCON2bits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile uint16_t PTPER __attribute__((__sfr__));
#define SEVTCMP SEVTCMP
extern volatile uint16_t SEVTCMP __attribute__((__sfr__));
#define MDC MDC
extern volatile uint16_t MDC __attribute__((__sfr__));
#define STCON STCON
extern volatile uint16_t STCON __attribute__((__sfr__));
__extension__ typedef struct tagSTCONBITS {
  union {
    struct {
      uint16_t SEVTPS:4;
      uint16_t SYNCSRC:3;
      uint16_t SYNCEN:1;
      uint16_t SYNCOEN:1;
      uint16_t SYNCPOL:1;
      uint16_t EIPU:1;
      uint16_t SEIEN:1;
      uint16_t SESTAT:1;
    };
    struct {
      uint16_t SEVTPS0:1;
      uint16_t SEVTPS1:1;
      uint16_t SEVTPS2:1;
      uint16_t SEVTPS3:1;
      uint16_t SYNCSRC0:1;
      uint16_t SYNCSRC1:1;
      uint16_t SYNCSRC2:1;
    };
  };
} STCONBITS;
extern volatile STCONBITS STCONbits __attribute__((__sfr__));

#define STCON2 STCON2
extern volatile uint16_t STCON2 __attribute__((__sfr__));
__extension__ typedef struct tagSTCON2BITS {
  union {
    struct {
      uint16_t PCLKDIV:3;
    };
    struct {
      uint16_t PCLKDIV0:1;
      uint16_t PCLKDIV1:1;
      uint16_t PCLKDIV2:1;
    };
  };
} STCON2BITS;
extern volatile STCON2BITS STCON2bits __attribute__((__sfr__));

#define STPER STPER
extern volatile uint16_t STPER __attribute__((__sfr__));
#define SSEVTCMP SSEVTCMP
extern volatile uint16_t SSEVTCMP __attribute__((__sfr__));
#define CHOP CHOP
extern volatile uint16_t CHOP __attribute__((__sfr__));
__extension__ typedef struct tagCHOPBITS {
  union {
    struct {
      uint16_t :3;
      uint16_t CHOPCLK:7;
      uint16_t :5;
      uint16_t CHPCLKEN:1;
    };
    struct {
      uint16_t :3;
      uint16_t CHOPCLK0:1;
      uint16_t CHOPCLK1:1;
      uint16_t CHOPCLK2:1;
      uint16_t CHOPCLK3:1;
      uint16_t CHOPCLK4:1;
      uint16_t CHOPCLK5:1;
      uint16_t CHOPCLK6:1;
    };
  };
} CHOPBITS;
extern volatile CHOPBITS CHOPbits __attribute__((__sfr__));

#define PWMCON1 PWMCON1
extern volatile uint16_t PWMCON1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON1BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define IOCON1 IOCON1
extern volatile uint16_t IOCON1 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON1BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON1BITS;
extern volatile IOCON1BITS IOCON1bits __attribute__((__sfr__));

#define FCLCON1 FCLCON1
extern volatile uint16_t FCLCON1 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON1BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON1BITS;
extern volatile FCLCON1BITS FCLCON1bits __attribute__((__sfr__));

#define PDC1 PDC1
extern volatile uint16_t PDC1 __attribute__((__sfr__));
#define PHASE1 PHASE1
extern volatile uint16_t PHASE1 __attribute__((__sfr__));
#define DTR1 DTR1
extern volatile uint16_t DTR1 __attribute__((__sfr__));
#define ALTDTR1 ALTDTR1
extern volatile uint16_t ALTDTR1 __attribute__((__sfr__));
#define SDC1 SDC1
extern volatile uint16_t SDC1 __attribute__((__sfr__));
#define SPHASE1 SPHASE1
extern volatile uint16_t SPHASE1 __attribute__((__sfr__));
#define TRIG1 TRIG1
extern volatile uint16_t TRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG1BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG1BITS;
extern volatile TRIG1BITS TRIG1bits __attribute__((__sfr__));

#define TRGCON1 TRGCON1
extern volatile uint16_t TRGCON1 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON1BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON1BITS;
extern volatile TRGCON1BITS TRGCON1bits __attribute__((__sfr__));

#define STRIG1 STRIG1
extern volatile uint16_t STRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG1BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG1BITS;
extern volatile STRIG1BITS STRIG1bits __attribute__((__sfr__));

#define PWMCAP1 PWMCAP1
extern volatile uint16_t PWMCAP1 __attribute__((__sfr__));
typedef struct tagPWMCAP1BITS {
  uint16_t :3;
  uint16_t PWMCAP10:1;
  uint16_t PWMCAP11:1;
  uint16_t PWMCAP12:1;
  uint16_t PWMCAP13:1;
  uint16_t PWMCAP14:1;
  uint16_t PWMCAP15:1;
  uint16_t PWMCAP16:1;
  uint16_t PWMCAP17:1;
  uint16_t PWMCAP18:1;
  uint16_t PWMCAP19:1;
  uint16_t PWMCAP110:1;
  uint16_t PWMCAP111:1;
  uint16_t PWMCAP112:1;
} PWMCAP1BITS;
extern volatile PWMCAP1BITS PWMCAP1bits __attribute__((__sfr__));

#define LEBCON1 LEBCON1
extern volatile uint16_t LEBCON1 __attribute__((__sfr__));
typedef struct tagLEBCON1BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON1BITS;
extern volatile LEBCON1BITS LEBCON1bits __attribute__((__sfr__));

#define LEBDLY1 LEBDLY1
extern volatile uint16_t LEBDLY1 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY1BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY1BITS;
extern volatile LEBDLY1BITS LEBDLY1bits __attribute__((__sfr__));

#define AUXCON1 AUXCON1
extern volatile uint16_t AUXCON1 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON1BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON1BITS;
extern volatile AUXCON1BITS AUXCON1bits __attribute__((__sfr__));

#define PWMCON2 PWMCON2
extern volatile uint16_t PWMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON2BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON2BITS;
extern volatile PWMCON2BITS PWMCON2bits __attribute__((__sfr__));

#define IOCON2 IOCON2
extern volatile uint16_t IOCON2 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON2BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON2BITS;
extern volatile IOCON2BITS IOCON2bits __attribute__((__sfr__));

#define FCLCON2 FCLCON2
extern volatile uint16_t FCLCON2 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON2BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON2BITS;
extern volatile FCLCON2BITS FCLCON2bits __attribute__((__sfr__));

#define PDC2 PDC2
extern volatile uint16_t PDC2 __attribute__((__sfr__));
#define PHASE2 PHASE2
extern volatile uint16_t PHASE2 __attribute__((__sfr__));
#define DTR2 DTR2
extern volatile uint16_t DTR2 __attribute__((__sfr__));
#define ALTDTR2 ALTDTR2
extern volatile uint16_t ALTDTR2 __attribute__((__sfr__));
#define SDC2 SDC2
extern volatile uint16_t SDC2 __attribute__((__sfr__));
#define SPHASE2 SPHASE2
extern volatile uint16_t SPHASE2 __attribute__((__sfr__));
#define TRIG2 TRIG2
extern volatile uint16_t TRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG2BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG2BITS;
extern volatile TRIG2BITS TRIG2bits __attribute__((__sfr__));

#define TRGCON2 TRGCON2
extern volatile uint16_t TRGCON2 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON2BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON2BITS;
extern volatile TRGCON2BITS TRGCON2bits __attribute__((__sfr__));

#define STRIG2 STRIG2
extern volatile uint16_t STRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG2BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG2BITS;
extern volatile STRIG2BITS STRIG2bits __attribute__((__sfr__));

#define PWMCAP2 PWMCAP2
extern volatile uint16_t PWMCAP2 __attribute__((__sfr__));
#define LEBCON2 LEBCON2
extern volatile uint16_t LEBCON2 __attribute__((__sfr__));
typedef struct tagLEBCON2BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON2BITS;
extern volatile LEBCON2BITS LEBCON2bits __attribute__((__sfr__));

#define LEBDLY2 LEBDLY2
extern volatile uint16_t LEBDLY2 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY2BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY2BITS;
extern volatile LEBDLY2BITS LEBDLY2bits __attribute__((__sfr__));

#define AUXCON2 AUXCON2
extern volatile uint16_t AUXCON2 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON2BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON2BITS;
extern volatile AUXCON2BITS AUXCON2bits __attribute__((__sfr__));

#define PWMCON3 PWMCON3
extern volatile uint16_t PWMCON3 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON3BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON3BITS;
extern volatile PWMCON3BITS PWMCON3bits __attribute__((__sfr__));

#define IOCON3 IOCON3
extern volatile uint16_t IOCON3 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON3BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON3BITS;
extern volatile IOCON3BITS IOCON3bits __attribute__((__sfr__));

#define FCLCON3 FCLCON3
extern volatile uint16_t FCLCON3 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON3BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON3BITS;
extern volatile FCLCON3BITS FCLCON3bits __attribute__((__sfr__));

#define PDC3 PDC3
extern volatile uint16_t PDC3 __attribute__((__sfr__));
#define PHASE3 PHASE3
extern volatile uint16_t PHASE3 __attribute__((__sfr__));
#define DTR3 DTR3
extern volatile uint16_t DTR3 __attribute__((__sfr__));
#define ALTDTR3 ALTDTR3
extern volatile uint16_t ALTDTR3 __attribute__((__sfr__));
#define SDC3 SDC3
extern volatile uint16_t SDC3 __attribute__((__sfr__));
#define SPHASE3 SPHASE3
extern volatile uint16_t SPHASE3 __attribute__((__sfr__));
#define TRIG3 TRIG3
extern volatile uint16_t TRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG3BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG3BITS;
extern volatile TRIG3BITS TRIG3bits __attribute__((__sfr__));

#define TRGCON3 TRGCON3
extern volatile uint16_t TRGCON3 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON3BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON3BITS;
extern volatile TRGCON3BITS TRGCON3bits __attribute__((__sfr__));

#define STRIG3 STRIG3
extern volatile uint16_t STRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG3BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG3BITS;
extern volatile STRIG3BITS STRIG3bits __attribute__((__sfr__));

#define PWMCAP3 PWMCAP3
extern volatile uint16_t PWMCAP3 __attribute__((__sfr__));
#define LEBCON3 LEBCON3
extern volatile uint16_t LEBCON3 __attribute__((__sfr__));
typedef struct tagLEBCON3BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON3BITS;
extern volatile LEBCON3BITS LEBCON3bits __attribute__((__sfr__));

#define LEBDLY3 LEBDLY3
extern volatile uint16_t LEBDLY3 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY3BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY3BITS;
extern volatile LEBDLY3BITS LEBDLY3bits __attribute__((__sfr__));

#define AUXCON3 AUXCON3
extern volatile uint16_t AUXCON3 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON3BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON3BITS;
extern volatile AUXCON3BITS AUXCON3bits __attribute__((__sfr__));

#define PWMCON4 PWMCON4
extern volatile uint16_t PWMCON4 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON4BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON4BITS;
extern volatile PWMCON4BITS PWMCON4bits __attribute__((__sfr__));

#define IOCON4 IOCON4
extern volatile uint16_t IOCON4 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON4BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON4BITS;
extern volatile IOCON4BITS IOCON4bits __attribute__((__sfr__));

#define FCLCON4 FCLCON4
extern volatile uint16_t FCLCON4 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON4BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON4BITS;
extern volatile FCLCON4BITS FCLCON4bits __attribute__((__sfr__));

#define PDC4 PDC4
extern volatile uint16_t PDC4 __attribute__((__sfr__));
#define PHASE4 PHASE4
extern volatile uint16_t PHASE4 __attribute__((__sfr__));
#define DTR4 DTR4
extern volatile uint16_t DTR4 __attribute__((__sfr__));
#define ALTDTR4 ALTDTR4
extern volatile uint16_t ALTDTR4 __attribute__((__sfr__));
#define SDC4 SDC4
extern volatile uint16_t SDC4 __attribute__((__sfr__));
#define SPHASE4 SPHASE4
extern volatile uint16_t SPHASE4 __attribute__((__sfr__));
#define TRIG4 TRIG4
extern volatile uint16_t TRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG4BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG4BITS;
extern volatile TRIG4BITS TRIG4bits __attribute__((__sfr__));

#define TRGCON4 TRGCON4
extern volatile uint16_t TRGCON4 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON4BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON4BITS;
extern volatile TRGCON4BITS TRGCON4bits __attribute__((__sfr__));

#define STRIG4 STRIG4
extern volatile uint16_t STRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG4BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG4BITS;
extern volatile STRIG4BITS STRIG4bits __attribute__((__sfr__));

#define PWMCAP4 PWMCAP4
extern volatile uint16_t PWMCAP4 __attribute__((__sfr__));
#define LEBCON4 LEBCON4
extern volatile uint16_t LEBCON4 __attribute__((__sfr__));
typedef struct tagLEBCON4BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON4BITS;
extern volatile LEBCON4BITS LEBCON4bits __attribute__((__sfr__));

#define LEBDLY4 LEBDLY4
extern volatile uint16_t LEBDLY4 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY4BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY4BITS;
extern volatile LEBDLY4BITS LEBDLY4bits __attribute__((__sfr__));

#define AUXCON4 AUXCON4
extern volatile uint16_t AUXCON4 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON4BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON4BITS;
extern volatile AUXCON4BITS AUXCON4bits __attribute__((__sfr__));

#define PWMCON5 PWMCON5
extern volatile uint16_t PWMCON5 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON5BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON5BITS;
extern volatile PWMCON5BITS PWMCON5bits __attribute__((__sfr__));

#define IOCON5 IOCON5
extern volatile uint16_t IOCON5 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON5BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON5BITS;
extern volatile IOCON5BITS IOCON5bits __attribute__((__sfr__));

#define FCLCON5 FCLCON5
extern volatile uint16_t FCLCON5 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON5BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON5BITS;
extern volatile FCLCON5BITS FCLCON5bits __attribute__((__sfr__));

#define PDC5 PDC5
extern volatile uint16_t PDC5 __attribute__((__sfr__));
#define PHASE5 PHASE5
extern volatile uint16_t PHASE5 __attribute__((__sfr__));
#define DTR5 DTR5
extern volatile uint16_t DTR5 __attribute__((__sfr__));
#define ALTDTR5 ALTDTR5
extern volatile uint16_t ALTDTR5 __attribute__((__sfr__));
#define SDC5 SDC5
extern volatile uint16_t SDC5 __attribute__((__sfr__));
#define SPHASE5 SPHASE5
extern volatile uint16_t SPHASE5 __attribute__((__sfr__));
#define TRIG5 TRIG5
extern volatile uint16_t TRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG5BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG5BITS;
extern volatile TRIG5BITS TRIG5bits __attribute__((__sfr__));

#define TRGCON5 TRGCON5
extern volatile uint16_t TRGCON5 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON5BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON5BITS;
extern volatile TRGCON5BITS TRGCON5bits __attribute__((__sfr__));

#define STRIG5 STRIG5
extern volatile uint16_t STRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG5BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG5BITS;
extern volatile STRIG5BITS STRIG5bits __attribute__((__sfr__));

#define PWMCAP5 PWMCAP5
extern volatile uint16_t PWMCAP5 __attribute__((__sfr__));
#define LEBCON5 LEBCON5
extern volatile uint16_t LEBCON5 __attribute__((__sfr__));
typedef struct tagLEBCON5BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON5BITS;
extern volatile LEBCON5BITS LEBCON5bits __attribute__((__sfr__));

#define LEBDLY5 LEBDLY5
extern volatile uint16_t LEBDLY5 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY5BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY5BITS;
extern volatile LEBDLY5BITS LEBDLY5bits __attribute__((__sfr__));

#define AUXCON5 AUXCON5
extern volatile uint16_t AUXCON5 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON5BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON5BITS;
extern volatile AUXCON5BITS AUXCON5bits __attribute__((__sfr__));

#define PWMCON6 PWMCON6
extern volatile uint16_t PWMCON6 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON6BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON6BITS;
extern volatile PWMCON6BITS PWMCON6bits __attribute__((__sfr__));

#define IOCON6 IOCON6
extern volatile uint16_t IOCON6 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON6BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON6BITS;
extern volatile IOCON6BITS IOCON6bits __attribute__((__sfr__));

#define FCLCON6 FCLCON6
extern volatile uint16_t FCLCON6 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON6BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON6BITS;
extern volatile FCLCON6BITS FCLCON6bits __attribute__((__sfr__));

#define PDC6 PDC6
extern volatile uint16_t PDC6 __attribute__((__sfr__));
#define PHASE6 PHASE6
extern volatile uint16_t PHASE6 __attribute__((__sfr__));
#define DTR6 DTR6
extern volatile uint16_t DTR6 __attribute__((__sfr__));
#define ALTDTR6 ALTDTR6
extern volatile uint16_t ALTDTR6 __attribute__((__sfr__));
#define SDC6 SDC6
extern volatile uint16_t SDC6 __attribute__((__sfr__));
#define SPHASE6 SPHASE6
extern volatile uint16_t SPHASE6 __attribute__((__sfr__));
#define TRIG6 TRIG6
extern volatile uint16_t TRIG6 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG6BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG6BITS;
extern volatile TRIG6BITS TRIG6bits __attribute__((__sfr__));

#define TRGCON6 TRGCON6
extern volatile uint16_t TRGCON6 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON6BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON6BITS;
extern volatile TRGCON6BITS TRGCON6bits __attribute__((__sfr__));

#define STRIG6 STRIG6
extern volatile uint16_t STRIG6 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG6BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG6BITS;
extern volatile STRIG6BITS STRIG6bits __attribute__((__sfr__));

#define PWMCAP6 PWMCAP6
extern volatile uint16_t PWMCAP6 __attribute__((__sfr__));
#define LEBCON6 LEBCON6
extern volatile uint16_t LEBCON6 __attribute__((__sfr__));
typedef struct tagLEBCON6BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON6BITS;
extern volatile LEBCON6BITS LEBCON6bits __attribute__((__sfr__));

#define LEBDLY6 LEBDLY6
extern volatile uint16_t LEBDLY6 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY6BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY6BITS;
extern volatile LEBDLY6BITS LEBDLY6bits __attribute__((__sfr__));

#define AUXCON6 AUXCON6
extern volatile uint16_t AUXCON6 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON6BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON6BITS;
extern volatile AUXCON6BITS AUXCON6bits __attribute__((__sfr__));

#define PWMCON7 PWMCON7
extern volatile uint16_t PWMCON7 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON7BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON7BITS;
extern volatile PWMCON7BITS PWMCON7bits __attribute__((__sfr__));

#define IOCON7 IOCON7
extern volatile uint16_t IOCON7 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON7BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON7BITS;
extern volatile IOCON7BITS IOCON7bits __attribute__((__sfr__));

#define FCLCON7 FCLCON7
extern volatile uint16_t FCLCON7 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON7BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON7BITS;
extern volatile FCLCON7BITS FCLCON7bits __attribute__((__sfr__));

#define PDC7 PDC7
extern volatile uint16_t PDC7 __attribute__((__sfr__));
#define PHASE7 PHASE7
extern volatile uint16_t PHASE7 __attribute__((__sfr__));
#define DTR7 DTR7
extern volatile uint16_t DTR7 __attribute__((__sfr__));
#define ALTDTR7 ALTDTR7
extern volatile uint16_t ALTDTR7 __attribute__((__sfr__));
#define SDC7 SDC7
extern volatile uint16_t SDC7 __attribute__((__sfr__));
#define SPHASE7 SPHASE7
extern volatile uint16_t SPHASE7 __attribute__((__sfr__));
#define TRIG7 TRIG7
extern volatile uint16_t TRIG7 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG7BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG7BITS;
extern volatile TRIG7BITS TRIG7bits __attribute__((__sfr__));

#define TRGCON7 TRGCON7
extern volatile uint16_t TRGCON7 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON7BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON7BITS;
extern volatile TRGCON7BITS TRGCON7bits __attribute__((__sfr__));

#define STRIG7 STRIG7
extern volatile uint16_t STRIG7 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG7BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG7BITS;
extern volatile STRIG7BITS STRIG7bits __attribute__((__sfr__));

#define PWMCAP7 PWMCAP7
extern volatile uint16_t PWMCAP7 __attribute__((__sfr__));
#define LEBCON7 LEBCON7
extern volatile uint16_t LEBCON7 __attribute__((__sfr__));
typedef struct tagLEBCON7BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON7BITS;
extern volatile LEBCON7BITS LEBCON7bits __attribute__((__sfr__));

#define LEBDLY7 LEBDLY7
extern volatile uint16_t LEBDLY7 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY7BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY7BITS;
extern volatile LEBDLY7BITS LEBDLY7bits __attribute__((__sfr__));

#define AUXCON7 AUXCON7
extern volatile uint16_t AUXCON7 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON7BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON7BITS;
extern volatile AUXCON7BITS AUXCON7bits __attribute__((__sfr__));

#define PWMCON8 PWMCON8
extern volatile uint16_t PWMCON8 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON8BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t MTBS:1;
      uint16_t :1;
      uint16_t DTCP:1;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON8BITS;
extern volatile PWMCON8BITS PWMCON8bits __attribute__((__sfr__));

#define IOCON8 IOCON8
extern volatile uint16_t IOCON8 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON8BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON8BITS;
extern volatile IOCON8BITS IOCON8bits __attribute__((__sfr__));

#define FCLCON8 FCLCON8
extern volatile uint16_t FCLCON8 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON8BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON8BITS;
extern volatile FCLCON8BITS FCLCON8bits __attribute__((__sfr__));

#define PDC8 PDC8
extern volatile uint16_t PDC8 __attribute__((__sfr__));
#define PHASE8 PHASE8
extern volatile uint16_t PHASE8 __attribute__((__sfr__));
#define DTR8 DTR8
extern volatile uint16_t DTR8 __attribute__((__sfr__));
#define ALTDTR8 ALTDTR8
extern volatile uint16_t ALTDTR8 __attribute__((__sfr__));
#define SDC8 SDC8
extern volatile uint16_t SDC8 __attribute__((__sfr__));
#define SPHASE8 SPHASE8
extern volatile uint16_t SPHASE8 __attribute__((__sfr__));
#define TRIG8 TRIG8
extern volatile uint16_t TRIG8 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG8BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG8BITS;
extern volatile TRIG8BITS TRIG8bits __attribute__((__sfr__));

#define TRGCON8 TRGCON8
extern volatile uint16_t TRGCON8 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON8BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON8BITS;
extern volatile TRGCON8BITS TRGCON8bits __attribute__((__sfr__));

#define STRIG8 STRIG8
extern volatile uint16_t STRIG8 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG8BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t STRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t STRGCMP0:1;
      uint16_t STRGCMP1:1;
      uint16_t STRGCMP2:1;
      uint16_t STRGCMP3:1;
      uint16_t STRGCMP4:1;
      uint16_t STRGCMP5:1;
      uint16_t STRGCMP6:1;
      uint16_t STRGCMP7:1;
      uint16_t STRGCMP8:1;
      uint16_t STRGCMP9:1;
      uint16_t STRGCMP10:1;
      uint16_t STRGCMP11:1;
      uint16_t STRGCMP12:1;
    };
  };
} STRIG8BITS;
extern volatile STRIG8BITS STRIG8bits __attribute__((__sfr__));

#define PWMCAP8 PWMCAP8
extern volatile uint16_t PWMCAP8 __attribute__((__sfr__));
#define LEBCON8 LEBCON8
extern volatile uint16_t LEBCON8 __attribute__((__sfr__));
typedef struct tagLEBCON8BITS {
  uint16_t BPLL:1;
  uint16_t BPLH:1;
  uint16_t BPHL:1;
  uint16_t BPHH:1;
  uint16_t BCL:1;
  uint16_t BCH:1;
  uint16_t :4;
  uint16_t CLLEBEN:1;
  uint16_t FLTLEBEN:1;
  uint16_t PLF:1;
  uint16_t PLR:1;
  uint16_t PHF:1;
  uint16_t PHR:1;
} LEBCON8BITS;
extern volatile LEBCON8BITS LEBCON8bits __attribute__((__sfr__));

#define LEBDLY8 LEBDLY8
extern volatile uint16_t LEBDLY8 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY8BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:9;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
      uint16_t LEB7:1;
      uint16_t LEB8:1;
    };
  };
} LEBDLY8BITS;
extern volatile LEBDLY8BITS LEBDLY8bits __attribute__((__sfr__));

#define AUXCON8 AUXCON8
extern volatile uint16_t AUXCON8 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON8BITS {
  union {
    struct {
      uint16_t CHOPLEN:1;
      uint16_t CHOPHEN:1;
      uint16_t CHOPSEL:4;
      uint16_t :2;
      uint16_t BLANKSEL:4;
      uint16_t :2;
      uint16_t HRDDIS:1;
      uint16_t HRPDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t CHOPSEL0:1;
      uint16_t CHOPSEL1:1;
      uint16_t CHOPSEL2:1;
      uint16_t CHOPSEL3:1;
      uint16_t :2;
      uint16_t BLANKSEL0:1;
      uint16_t BLANKSEL1:1;
      uint16_t BLANKSEL2:1;
      uint16_t BLANKSEL3:1;
    };
  };
} AUXCON8BITS;
extern volatile AUXCON8BITS AUXCON8bits __attribute__((__sfr__));

#define CMPCON1 CMPCON1
extern volatile uint16_t CMPCON1 __attribute__((__sfr__));
__extension__ typedef struct tagCMPCON1BITS {
  union {
    struct {
      uint16_t RANGE:1;
      uint16_t CMPPOL:1;
      uint16_t :1;
      uint16_t CMPSTAT:1;
      uint16_t :1;
      uint16_t EXTREF:1;
      uint16_t INSEL:2;
      uint16_t DACOE:1;
      uint16_t :4;
      uint16_t CMPSIDL:1;
      uint16_t :1;
      uint16_t CMPON:1;
    };
    struct {
      uint16_t :6;
      uint16_t INSEL0:1;
      uint16_t INSEL1:1;
    };
  };
} CMPCON1BITS;
extern volatile CMPCON1BITS CMPCON1bits __attribute__((__sfr__));

#define CMPDAC1 CMPDAC1
extern volatile uint16_t CMPDAC1 __attribute__((__sfr__));
__extension__ typedef struct tagCMPDAC1BITS {
  union {
    struct {
      uint16_t CMREF:10;
    };
    struct {
      uint16_t CMREF0:1;
      uint16_t CMREF1:1;
      uint16_t CMREF2:1;
      uint16_t CMREF3:1;
      uint16_t CMREF4:1;
      uint16_t CMREF5:1;
      uint16_t CMREF6:1;
      uint16_t CMREF7:1;
      uint16_t CMREF8:1;
      uint16_t CMREF9:1;
    };
  };
} CMPDAC1BITS;
extern volatile CMPDAC1BITS CMPDAC1bits __attribute__((__sfr__));

#define CMPCON2 CMPCON2
extern volatile uint16_t CMPCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCMPCON2BITS {
  union {
    struct {
      uint16_t RANGE:1;
      uint16_t CMPPOL:1;
      uint16_t :1;
      uint16_t CMPSTAT:1;
      uint16_t :1;
      uint16_t EXTREF:1;
      uint16_t INSEL:2;
      uint16_t DACOE:1;
      uint16_t :4;
      uint16_t CMPSIDL:1;
      uint16_t :1;
      uint16_t CMPON:1;
    };
    struct {
      uint16_t :6;
      uint16_t INSEL0:1;
      uint16_t INSEL1:1;
    };
  };
} CMPCON2BITS;
extern volatile CMPCON2BITS CMPCON2bits __attribute__((__sfr__));

#define CMPDAC2 CMPDAC2
extern volatile uint16_t CMPDAC2 __attribute__((__sfr__));
__extension__ typedef struct tagCMPDAC2BITS {
  union {
    struct {
      uint16_t CMREF:10;
    };
    struct {
      uint16_t CMREF0:1;
      uint16_t CMREF1:1;
      uint16_t CMREF2:1;
      uint16_t CMREF3:1;
      uint16_t CMREF4:1;
      uint16_t CMREF5:1;
      uint16_t CMREF6:1;
      uint16_t CMREF7:1;
      uint16_t CMREF8:1;
      uint16_t CMREF9:1;
    };
  };
} CMPDAC2BITS;
extern volatile CMPDAC2BITS CMPDAC2bits __attribute__((__sfr__));

#define CMPCON3 CMPCON3
extern volatile uint16_t CMPCON3 __attribute__((__sfr__));
__extension__ typedef struct tagCMPCON3BITS {
  union {
    struct {
      uint16_t RANGE:1;
      uint16_t CMPPOL:1;
      uint16_t :1;
      uint16_t CMPSTAT:1;
      uint16_t :1;
      uint16_t EXTREF:1;
      uint16_t INSEL:2;
      uint16_t DACOE:1;
      uint16_t :4;
      uint16_t CMPSIDL:1;
      uint16_t :1;
      uint16_t CMPON:1;
    };
    struct {
      uint16_t :6;
      uint16_t INSEL0:1;
      uint16_t INSEL1:1;
    };
  };
} CMPCON3BITS;
extern volatile CMPCON3BITS CMPCON3bits __attribute__((__sfr__));

#define CMPDAC3 CMPDAC3
extern volatile uint16_t CMPDAC3 __attribute__((__sfr__));
__extension__ typedef struct tagCMPDAC3BITS {
  union {
    struct {
      uint16_t CMREF:10;
    };
    struct {
      uint16_t CMREF0:1;
      uint16_t CMREF1:1;
      uint16_t CMREF2:1;
      uint16_t CMREF3:1;
      uint16_t CMREF4:1;
      uint16_t CMREF5:1;
      uint16_t CMREF6:1;
      uint16_t CMREF7:1;
      uint16_t CMREF8:1;
      uint16_t CMREF9:1;
    };
  };
} CMPDAC3BITS;
extern volatile CMPDAC3BITS CMPDAC3bits __attribute__((__sfr__));

#define CMPCON4 CMPCON4
extern volatile uint16_t CMPCON4 __attribute__((__sfr__));
__extension__ typedef struct tagCMPCON4BITS {
  union {
    struct {
      uint16_t RANGE:1;
      uint16_t CMPPOL:1;
      uint16_t :1;
      uint16_t CMPSTAT:1;
      uint16_t :1;
      uint16_t EXTREF:1;
      uint16_t INSEL:2;
      uint16_t DACOE:1;
      uint16_t :4;
      uint16_t CMPSIDL:1;
      uint16_t :1;
      uint16_t CMPON:1;
    };
    struct {
      uint16_t :6;
      uint16_t INSEL0:1;
      uint16_t INSEL1:1;
    };
  };
} CMPCON4BITS;
extern volatile CMPCON4BITS CMPCON4bits __attribute__((__sfr__));

#define CMPDAC4 CMPDAC4
extern volatile uint16_t CMPDAC4 __attribute__((__sfr__));
__extension__ typedef struct tagCMPDAC4BITS {
  union {
    struct {
      uint16_t CMREF:10;
    };
    struct {
      uint16_t CMREF0:1;
      uint16_t CMREF1:1;
      uint16_t CMREF2:1;
      uint16_t CMREF3:1;
      uint16_t CMREF4:1;
      uint16_t CMREF5:1;
      uint16_t CMREF6:1;
      uint16_t CMREF7:1;
      uint16_t CMREF8:1;
      uint16_t CMREF9:1;
    };
  };
} CMPDAC4BITS;
extern volatile CMPDAC4BITS CMPDAC4bits __attribute__((__sfr__));

#define RCON RCON
extern volatile uint16_t RCON __attribute__((__sfr__));
typedef struct tagRCONBITS {
  uint16_t POR:1;
  uint16_t BOR:1;
  uint16_t IDLE:1;
  uint16_t SLEEP:1;
  uint16_t WDTO:1;
  uint16_t SWDTEN:1;
  uint16_t SWR:1;
  uint16_t EXTR:1;
  uint16_t VREGS:1;
  uint16_t :5;
  uint16_t IOPUWR:1;
  uint16_t TRAPR:1;
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

#define OSCCON OSCCON
extern volatile uint16_t OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      uint16_t OSWEN:1;
      uint16_t LPOSCEN:1;
      uint16_t :1;
      uint16_t CF:1;
      uint16_t PRCDEN:1;
      uint16_t LOCK:1;
      uint16_t :1;
      uint16_t CLKLOCK:1;
      uint16_t NOSC:3;
      uint16_t :1;
      uint16_t COSC:3;
    };
    struct {
      uint16_t :8;
      uint16_t NOSC0:1;
      uint16_t NOSC1:1;
      uint16_t NOSC2:1;
      uint16_t :1;
      uint16_t COSC0:1;
      uint16_t COSC1:1;
      uint16_t COSC2:1;
    };
  };
} OSCCONBITS;
extern volatile OSCCONBITS OSCCONbits __attribute__((__sfr__));

#define OSCCONL OSCCONL
extern volatile uint8_t OSCCONL __attribute__((__sfr__));
#define OSCCONH OSCCONH
extern volatile uint8_t OSCCONH __attribute__((__sfr__));
#define CLKDIV CLKDIV
extern volatile uint16_t CLKDIV __attribute__((__sfr__));
__extension__ typedef struct tagCLKDIVBITS {
  union {
    struct {
      uint16_t PLLPRE:5;
      uint16_t :1;
      uint16_t PLLPOST:2;
      uint16_t FRCDIV:3;
      uint16_t DOZEN:1;
      uint16_t DOZE:3;
      uint16_t ROI:1;
    };
    struct {
      uint16_t PLLPRE0:1;
      uint16_t PLLPRE1:1;
      uint16_t PLLPRE2:1;
      uint16_t PLLPRE3:1;
      uint16_t PLLPRE4:1;
      uint16_t :1;
      uint16_t PLLPOST0:1;
      uint16_t PLLPOST1:1;
      uint16_t FRCDIV0:1;
      uint16_t FRCDIV1:1;
      uint16_t FRCDIV2:1;
      uint16_t :1;
      uint16_t DOZE0:1;
      uint16_t DOZE1:1;
      uint16_t DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

#define PLLFBD PLLFBD
extern volatile uint16_t PLLFBD __attribute__((__sfr__));
__extension__ typedef struct tagPLLFBDBITS {
  union {
    struct {
      uint16_t PLLDIV:9;
    };
    struct {
      uint16_t PLLDIV0:1;
      uint16_t PLLDIV1:1;
      uint16_t PLLDIV2:1;
      uint16_t PLLDIV3:1;
      uint16_t PLLDIV4:1;
      uint16_t PLLDIV5:1;
      uint16_t PLLDIV6:1;
      uint16_t PLLDIV7:1;
      uint16_t PLLDIV8:1;
    };
  };
} PLLFBDBITS;
extern volatile PLLFBDBITS PLLFBDbits __attribute__((__sfr__));

#define OSCTUN OSCTUN
extern volatile uint16_t OSCTUN __attribute__((__sfr__));
__extension__ typedef struct tagOSCTUNBITS {
  union {
    struct {
      uint16_t TUN:6;
    };
    struct {
      uint16_t TUN0:1;
      uint16_t TUN1:1;
      uint16_t TUN2:1;
      uint16_t TUN3:1;
      uint16_t TSEQ10:1;
      uint16_t TSEQ11:1;
      uint16_t TSEQ12:1;
      uint16_t TSEQ13:1;
      uint16_t TSEQ20:1;
      uint16_t TSEQ21:1;
      uint16_t TSEQ22:1;
      uint16_t TSEQ23:1;
      uint16_t TSEQ30:1;
      uint16_t TSEQ31:1;
      uint16_t TSEQ32:1;
      uint16_t TSEQ33:1;
    };
  };
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

#define OSCTUN2 OSCTUN2
extern volatile uint16_t OSCTUN2 __attribute__((__sfr__));
typedef struct tagOSCTUN2BITS {
  uint16_t TSEQ40:1;
  uint16_t TSEQ41:1;
  uint16_t TSEQ42:1;
  uint16_t TSEQ43:1;
  uint16_t TSEQ50:1;
  uint16_t TSEQ51:1;
  uint16_t TSEQ52:1;
  uint16_t TSEQ53:1;
  uint16_t TSEQ60:1;
  uint16_t TSEQ61:1;
  uint16_t TSEQ62:1;
  uint16_t TSEQ63:1;
  uint16_t TSEQ70:1;
  uint16_t TSEQ71:1;
  uint16_t TSEQ72:1;
  uint16_t TSEQ73:1;
} OSCTUN2BITS;
extern volatile OSCTUN2BITS OSCTUN2bits __attribute__((__sfr__));

#define LFSR LFSR
extern volatile uint16_t LFSR __attribute__((__sfr__));
#define REFOCON REFOCON
extern volatile uint16_t REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RODIV:4;
      uint16_t ROSEL:1;
      uint16_t ROSIDL:1;
      uint16_t :1;
      uint16_t ROON:1;
    };
    struct {
      uint16_t :8;
      uint16_t RODIV0:1;
      uint16_t RODIV1:1;
      uint16_t RODIV2:1;
      uint16_t RODIV3:1;
      uint16_t :1;
      uint16_t ROSSLP:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define ACLKCON ACLKCON
extern volatile uint16_t ACLKCON __attribute__((__sfr__));
__extension__ typedef struct tagACLKCONBITS {
  union {
    struct {
      uint16_t :6;
      uint16_t FRCSEL:1;
      uint16_t ASRCSEL:1;
      uint16_t APSTSCLR:3;
      uint16_t :2;
      uint16_t SELACLK:1;
      uint16_t APLLCK:1;
      uint16_t ENAPLL:1;
    };
    struct {
      uint16_t :8;
      uint16_t APSTSCLR0:1;
      uint16_t APSTSCLR1:1;
      uint16_t APSTSCLR2:1;
    };
  };
} ACLKCONBITS;
extern volatile ACLKCONBITS ACLKCONbits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile uint16_t NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      uint16_t NVMOP:4;
      uint16_t :2;
      uint16_t ERASE:1;
      uint16_t :6;
      uint16_t WRERR:1;
      uint16_t WREN:1;
      uint16_t WR:1;
    };
    struct {
      uint16_t NVMOP0:1;
      uint16_t NVMOP1:1;
      uint16_t NVMOP2:1;
      uint16_t NVMOP3:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile uint16_t NVMKEY __attribute__((__sfr__));
#define PMD1 PMD1
extern volatile uint16_t PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  uint16_t ADCMD:1;
  uint16_t C1MD:1;
  uint16_t :1;
  uint16_t SPI1MD:1;
  uint16_t SPI2MD:1;
  uint16_t U1MD:1;
  uint16_t U2MD:1;
  uint16_t I2C1MD:1;
  uint16_t :1;
  uint16_t PWMMD:1;
  uint16_t QEI1MD:1;
  uint16_t T1MD:1;
  uint16_t T2MD:1;
  uint16_t T3MD:1;
  uint16_t T4MD:1;
  uint16_t T5MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile uint16_t PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  uint16_t OC1MD:1;
  uint16_t OC2MD:1;
  uint16_t OC3MD:1;
  uint16_t OC4MD:1;
  uint16_t :4;
  uint16_t IC1MD:1;
  uint16_t IC2MD:1;
  uint16_t IC3MD:1;
  uint16_t IC4MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  uint16_t :1;
  uint16_t I2C2MD:1;
  uint16_t :3;
  uint16_t QEI2MD:1;
  uint16_t :4;
  uint16_t CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile uint16_t PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  uint16_t :3;
  uint16_t REFOMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile uint16_t PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  uint16_t :8;
  uint16_t PWM1MD:1;
  uint16_t PWM2MD:1;
  uint16_t PWM3MD:1;
  uint16_t PWM4MD:1;
  uint16_t PWM5MD:1;
  uint16_t PWM6MD:1;
  uint16_t PWM7MD:1;
  uint16_t PWM8MD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));

#define PMD7 PMD7
extern volatile uint16_t PMD7 __attribute__((__sfr__));
typedef struct tagPMD7BITS {
  uint16_t :8;
  uint16_t CMP1MD:1;
  uint16_t CMP2MD:1;
  uint16_t CMP3MD:1;
  uint16_t CMP4MD:1;
} PMD7BITS;
extern volatile PMD7BITS PMD7bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _DA SRbits.DA
#define _SAB SRbits.SAB
#define _OAB SRbits.OAB
#define _SB SRbits.SB
#define _SA SRbits.SA
#define _OB SRbits.OB
#define _OA SRbits.OA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IF CORCONbits.IF
#define _RND CORCONbits.RND
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3
#define _ACCSAT CORCONbits.ACCSAT
#define _SATDW CORCONbits.SATDW
#define _SATB CORCONbits.SATB
#define _SATA CORCONbits.SATA
#define _DL CORCONbits.DL
#define _EDT CORCONbits.EDT
#define _US CORCONbits.US
#define _DL0 CORCONbits.DL0
#define _DL1 CORCONbits.DL1
#define _DL2 CORCONbits.DL2

/* MODCON */
#define _XWM MODCONbits.XWM
#define _YWM MODCONbits.YWM
#define _BWM MODCONbits.BWM
#define _YMODEN MODCONbits.YMODEN
#define _XMODEN MODCONbits.XMODEN
#define _XWM0 MODCONbits.XWM0
#define _XWM1 MODCONbits.XWM1
#define _XWM2 MODCONbits.XWM2
#define _XWM3 MODCONbits.XWM3
#define _YWM0 MODCONbits.YWM0
#define _YWM1 MODCONbits.YWM1
#define _YWM2 MODCONbits.YWM2
#define _YWM3 MODCONbits.YWM3
#define _BWM0 MODCONbits.BWM0
#define _BWM1 MODCONbits.BWM1
#define _BWM2 MODCONbits.BWM2
#define _BWM3 MODCONbits.BWM3

/* XBREV */
#define _XB XBREVbits.XB
#define _BREN XBREVbits.BREN
#define _XB0 XBREVbits.XB0
#define _XB1 XBREVbits.XB1
#define _XB2 XBREVbits.XB2
#define _XB3 XBREVbits.XB3
#define _XB4 XBREVbits.XB4
#define _XB5 XBREVbits.XB5
#define _XB6 XBREVbits.XB6
#define _XB7 XBREVbits.XB7
#define _XB8 XBREVbits.XB8
#define _XB9 XBREVbits.XB9
#define _XB10 XBREVbits.XB10
#define _XB11 XBREVbits.XB11
#define _XB12 XBREVbits.XB12
#define _XB13 XBREVbits.XB13
#define _XB14 XBREVbits.XB14

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE
#define _CN8IE CNEN1bits.CN8IE
#define _CN9IE CNEN1bits.CN9IE
#define _CN10IE CNEN1bits.CN10IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN17IE CNEN2bits.CN17IE
#define _CN18IE CNEN2bits.CN18IE
#define _CN19IE CNEN2bits.CN19IE
#define _CN20IE CNEN2bits.CN20IE
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
#define _CN8PUE CNPU1bits.CN8PUE
#define _CN9PUE CNPU1bits.CN9PUE
#define _CN10PUE CNPU1bits.CN10PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN17PUE CNPU2bits.CN17PUE
#define _CN18PUE CNPU2bits.CN18PUE
#define _CN19PUE CNPU2bits.CN19PUE
#define _CN20PUE CNPU2bits.CN20PUE
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DIV0ERR INTCON1bits.DIV0ERR
#define _SFTACERR INTCON1bits.SFTACERR
#define _COVTE INTCON1bits.COVTE
#define _OVBTE INTCON1bits.OVBTE
#define _OVATE INTCON1bits.OVATE
#define _COVBERR INTCON1bits.COVBERR
#define _COVAERR INTCON1bits.COVAERR
#define _OVBERR INTCON1bits.OVBERR
#define _OVAERR INTCON1bits.OVAERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _INT3EP INTCON2bits.INT3EP
#define _INT4EP INTCON2bits.INT4EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1EIF IFS0bits.SPI1EIF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _ADIF IFS0bits.ADIF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _AC1IF IFS1bits.AC1IF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _SPI2EIF IFS2bits.SPI2EIF
#define _SPI2IF IFS2bits.SPI2IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _INT3IF IFS3bits.INT3IF
#define _INT4IF IFS3bits.INT4IF
#define _PSEMIF IFS3bits.PSEMIF
#define _QEI1IF IFS3bits.QEI1IF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _PSESMIF IFS4bits.PSESMIF
#define _QEI2IF IFS4bits.QEI2IF

/* IFS5 */
#define _ADCP8IF IFS5bits.ADCP8IF
#define _ADCP12IF IFS5bits.ADCP12IF
#define _PWM1IF IFS5bits.PWM1IF
#define _PWM2IF IFS5bits.PWM2IF

/* IFS6 */
#define _PWM3IF IFS6bits.PWM3IF
#define _PWM4IF IFS6bits.PWM4IF
#define _PWM5IF IFS6bits.PWM5IF
#define _PWM6IF IFS6bits.PWM6IF
#define _PWM7IF IFS6bits.PWM7IF
#define _PWM8IF IFS6bits.PWM8IF
#define _AC2IF IFS6bits.AC2IF
#define _AC3IF IFS6bits.AC3IF
#define _AC4IF IFS6bits.AC4IF
#define _ADCP0IF IFS6bits.ADCP0IF
#define _ADCP1IF IFS6bits.ADCP1IF

/* IFS7 */
#define _ADCP2IF IFS7bits.ADCP2IF
#define _ADCP3IF IFS7bits.ADCP3IF
#define _ADCP4IF IFS7bits.ADCP4IF
#define _ADCP5IF IFS7bits.ADCP5IF
#define _ADCP6IF IFS7bits.ADCP6IF
#define _ADCP7IF IFS7bits.ADCP7IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1EIE IEC0bits.SPI1EIE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _ADIE IEC0bits.ADIE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _AC1IE IEC1bits.AC1IE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _SPI2EIE IEC2bits.SPI2EIE
#define _SPI2IE IEC2bits.SPI2IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _INT3IE IEC3bits.INT3IE
#define _INT4IE IEC3bits.INT4IE
#define _PSEMIE IEC3bits.PSEMIE
#define _QEI1IE IEC3bits.QEI1IE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _PSESMIE IEC4bits.PSESMIE
#define _QEI2IE IEC4bits.QEI2IE

/* IEC5 */
#define _ADCP8IE IEC5bits.ADCP8IE
#define _ADCP12IE IEC5bits.ADCP12IE
#define _PWM1IE IEC5bits.PWM1IE
#define _PWM2IE IEC5bits.PWM2IE

/* IEC6 */
#define _PWM3IE IEC6bits.PWM3IE
#define _PWM4IE IEC6bits.PWM4IE
#define _PWM5IE IEC6bits.PWM5IE
#define _PWM6IE IEC6bits.PWM6IE
#define _PWM7IE IEC6bits.PWM7IE
#define _PWM8IE IEC6bits.PWM8IE
#define _AC2IE IEC6bits.AC2IE
#define _AC3IE IEC6bits.AC3IE
#define _AC4IE IEC6bits.AC4IE
#define _ADCP0IE IEC6bits.ADCP0IE
#define _ADCP1IE IEC6bits.ADCP1IE

/* IEC7 */
#define _ADCP2IE IEC7bits.ADCP2IE
#define _ADCP3IE IEC7bits.ADCP3IE
#define _ADCP4IE IEC7bits.ADCP4IE
#define _ADCP5IE IEC7bits.ADCP5IE
#define _ADCP6IE IEC7bits.ADCP6IE
#define _ADCP7IE IEC7bits.ADCP7IE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _IC1IP IPC0bits.IC1IP
#define _OC1IP IPC0bits.OC1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _IC1IP0 IPC0bits.IC1IP0
#define _IC1IP1 IPC0bits.IC1IP1
#define _IC1IP2 IPC0bits.IC1IP2
#define _OC1IP0 IPC0bits.OC1IP0
#define _OC1IP1 IPC0bits.OC1IP1
#define _OC1IP2 IPC0bits.OC1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _IC2IP0 IPC1bits.IC2IP0
#define _IC2IP1 IPC1bits.IC2IP1
#define _IC2IP2 IPC1bits.IC2IP2
#define _OC2IP0 IPC1bits.OC2IP0
#define _OC2IP1 IPC1bits.OC2IP1
#define _OC2IP2 IPC1bits.OC2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _SPI1EIP IPC2bits.SPI1EIP
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _SPI1EIP0 IPC2bits.SPI1EIP0
#define _SPI1EIP1 IPC2bits.SPI1EIP1
#define _SPI1EIP2 IPC2bits.SPI1EIP2
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _ADIP IPC3bits.ADIP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _ADIP0 IPC3bits.ADIP0
#define _ADIP1 IPC3bits.ADIP1
#define _ADIP2 IPC3bits.ADIP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _AC1IP IPC4bits.AC1IP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _AC1IP0 IPC4bits.AC1IP0
#define _AC1IP1 IPC4bits.AC1IP1
#define _AC1IP2 IPC4bits.AC1IP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC6 */
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
#define _OC3IP0 IPC6bits.OC3IP0
#define _OC3IP1 IPC6bits.OC3IP1
#define _OC3IP2 IPC6bits.OC3IP2
#define _OC4IP0 IPC6bits.OC4IP0
#define _OC4IP1 IPC6bits.OC4IP1
#define _OC4IP2 IPC6bits.OC4IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _T5IP IPC7bits.T5IP
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _T5IP0 IPC7bits.T5IP0
#define _T5IP1 IPC7bits.T5IP1
#define _T5IP2 IPC7bits.T5IP2
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC8 */
#define _SPI2EIP IPC8bits.SPI2EIP
#define _SPI2IP IPC8bits.SPI2IP
#define _SPI2EIP0 IPC8bits.SPI2EIP0
#define _SPI2EIP1 IPC8bits.SPI2EIP1
#define _SPI2EIP2 IPC8bits.SPI2EIP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2

/* IPC9 */
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2

/* IPC12 */
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2

/* IPC13 */
#define _INT3IP IPC13bits.INT3IP
#define _INT4IP IPC13bits.INT4IP
#define _INT3IP0 IPC13bits.INT3IP0
#define _INT3IP1 IPC13bits.INT3IP1
#define _INT3IP2 IPC13bits.INT3IP2
#define _INT4IP0 IPC13bits.INT4IP0
#define _INT4IP1 IPC13bits.INT4IP1
#define _INT4IP2 IPC13bits.INT4IP2

/* IPC14 */
#define _PSEMIP IPC14bits.PSEMIP
#define _QEI1IP IPC14bits.QEI1IP
#define _PSEMIP0 IPC14bits.PSEMIP0
#define _PSEMIP1 IPC14bits.PSEMIP1
#define _PSEMIP2 IPC14bits.PSEMIP2
#define _QEI1IP0 IPC14bits.QEI1IP0
#define _QEI1IP1 IPC14bits.QEI1IP1
#define _QEI1IP2 IPC14bits.QEI1IP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2

/* IPC18 */
#define _PSESMIP IPC18bits.PSESMIP
#define _QEI2IP IPC18bits.QEI2IP
#define _PSESMIP0 IPC18bits.PSESMIP0
#define _PSESMIP1 IPC18bits.PSESMIP1
#define _PSESMIP2 IPC18bits.PSESMIP2
#define _QEI2IP0 IPC18bits.QEI2IP0
#define _QEI2IP1 IPC18bits.QEI2IP1
#define _QEI2IP2 IPC18bits.QEI2IP2

/* IPC20 */
#define _ADCP8IP IPC20bits.ADCP8IP
#define _ADCP8IP0 IPC20bits.ADCP8IP0
#define _ADCP8IP1 IPC20bits.ADCP8IP1
#define _ADCP8IP2 IPC20bits.ADCP8IP2

/* IPC21 */
#define _ADCP12IP IPC21bits.ADCP12IP
#define _ADCP12IP0 IPC21bits.ADCP12IP0
#define _ADCP12IP1 IPC21bits.ADCP12IP1
#define _ADCP12IP2 IPC21bits.ADCP12IP2

/* IPC23 */
#define _PWM1IP IPC23bits.PWM1IP
#define _PWM2IP IPC23bits.PWM2IP
#define _PWM1IP0 IPC23bits.PWM1IP0
#define _PWM1IP1 IPC23bits.PWM1IP1
#define _PWM1IP2 IPC23bits.PWM1IP2
#define _PWM2IP0 IPC23bits.PWM2IP0
#define _PWM2IP1 IPC23bits.PWM2IP1
#define _PWM2IP2 IPC23bits.PWM2IP2

/* IPC24 */
#define _PWM3IP IPC24bits.PWM3IP
#define _PWM4IP IPC24bits.PWM4IP
#define _PWM5IP IPC24bits.PWM5IP
#define _PWM6IP IPC24bits.PWM6IP
#define _PWM3IP0 IPC24bits.PWM3IP0
#define _PWM3IP1 IPC24bits.PWM3IP1
#define _PWM3IP2 IPC24bits.PWM3IP2
#define _PWM4IP0 IPC24bits.PWM4IP0
#define _PWM4IP1 IPC24bits.PWM4IP1
#define _PWM4IP2 IPC24bits.PWM4IP2
#define _PWM5IP0 IPC24bits.PWM5IP0
#define _PWM5IP1 IPC24bits.PWM5IP1
#define _PWM5IP2 IPC24bits.PWM5IP2
#define _PWM6IP0 IPC24bits.PWM6IP0
#define _PWM6IP1 IPC24bits.PWM6IP1
#define _PWM6IP2 IPC24bits.PWM6IP2

/* IPC25 */
#define _PWM7IP IPC25bits.PWM7IP
#define _PWM8IP IPC25bits.PWM8IP
#define _AC2IP IPC25bits.AC2IP
#define _PWM7IP0 IPC25bits.PWM7IP0
#define _PWM7IP1 IPC25bits.PWM7IP1
#define _PWM7IP2 IPC25bits.PWM7IP2
#define _PWM8IP0 IPC25bits.PWM8IP0
#define _PWM8IP1 IPC25bits.PWM8IP1
#define _PWM8IP2 IPC25bits.PWM8IP2
#define _AC2IP0 IPC25bits.AC2IP0
#define _AC2IP1 IPC25bits.AC2IP1
#define _AC2IP2 IPC25bits.AC2IP2

/* IPC26 */
#define _AC3IP IPC26bits.AC3IP
#define _AC4IP IPC26bits.AC4IP
#define _AC3IP0 IPC26bits.AC3IP0
#define _AC3IP1 IPC26bits.AC3IP1
#define _AC3IP2 IPC26bits.AC3IP2
#define _AC4IP0 IPC26bits.AC4IP0
#define _AC4IP1 IPC26bits.AC4IP1
#define _AC4IP2 IPC26bits.AC4IP2

/* IPC27 */
#define _ADCP0IP IPC27bits.ADCP0IP
#define _ADCP1IP IPC27bits.ADCP1IP
#define _ADCP0IP0 IPC27bits.ADCP0IP0
#define _ADCP0IP1 IPC27bits.ADCP0IP1
#define _ADCP0IP2 IPC27bits.ADCP0IP2
#define _ADCP1IP0 IPC27bits.ADCP1IP0
#define _ADCP1IP1 IPC27bits.ADCP1IP1
#define _ADCP1IP2 IPC27bits.ADCP1IP2

/* IPC28 */
#define _ADCP2IP IPC28bits.ADCP2IP
#define _ADCP3IP IPC28bits.ADCP3IP
#define _ADCP4IP IPC28bits.ADCP4IP
#define _ADCP5IP IPC28bits.ADCP5IP
#define _ADCP2IP0 IPC28bits.ADCP2IP0
#define _ADCP2IP1 IPC28bits.ADCP2IP1
#define _ADCP2IP2 IPC28bits.ADCP2IP2
#define _ADCP3IP0 IPC28bits.ADCP3IP0
#define _ADCP3IP1 IPC28bits.ADCP3IP1
#define _ADCP3IP2 IPC28bits.ADCP3IP2
#define _ADCP4IP0 IPC28bits.ADCP4IP0
#define _ADCP4IP1 IPC28bits.ADCP4IP1
#define _ADCP4IP2 IPC28bits.ADCP4IP2
#define _ADCP5IP0 IPC28bits.ADCP5IP0
#define _ADCP5IP1 IPC28bits.ADCP5IP1
#define _ADCP5IP2 IPC28bits.ADCP5IP2

/* IPC29 */
#define _ADCP6IP IPC29bits.ADCP6IP
#define _ADCP7IP IPC29bits.ADCP7IP
#define _ADCP6IP0 IPC29bits.ADCP6IP0
#define _ADCP6IP1 IPC29bits.ADCP6IP1
#define _ADCP6IP2 IPC29bits.ADCP6IP2
#define _ADCP7IP0 IPC29bits.ADCP7IP0
#define _ADCP7IP1 IPC29bits.ADCP7IP1
#define _ADCP7IP2 IPC29bits.ADCP7IP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _VECNUM6 INTTREGbits.VECNUM6
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

/* T1CON */
#define _TCS T1CONbits.TCS
#define _TSYNC T1CONbits.TSYNC
#define _TCKPS T1CONbits.TCKPS
#define _TGATE T1CONbits.TGATE
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1

/* T2CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T3CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T4CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T5CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* IC1CON */
#define _ICM IC1CONbits.ICM
#define _ICBNE IC1CONbits.ICBNE
#define _ICOV IC1CONbits.ICOV
#define _ICI IC1CONbits.ICI
#define _ICTMR IC1CONbits.ICTMR
#define _ICSIDL IC1CONbits.ICSIDL
#define _ICM0 IC1CONbits.ICM0
#define _ICM1 IC1CONbits.ICM1
#define _ICM2 IC1CONbits.ICM2
#define _ICI0 IC1CONbits.ICI0
#define _ICI1 IC1CONbits.ICI1

/* IC2CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* IC3CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* IC4CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* OC1CON */
#define _OCM OC1CONbits.OCM
#define _OCTSEL OC1CONbits.OCTSEL
#define _OCFLT OC1CONbits.OCFLT
#define _OCSIDL OC1CONbits.OCSIDL
#define _OCM0 OC1CONbits.OCM0
#define _OCM1 OC1CONbits.OCM1
#define _OCM2 OC1CONbits.OCM2

/* OC2CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC3CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC4CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* QEI1CON */
#define _UPDN_SRC QEI1CONbits.UPDN_SRC
#define _TQCS QEI1CONbits.TQCS
#define _POSRES QEI1CONbits.POSRES
#define _TQCKPS QEI1CONbits.TQCKPS
#define _TQGATE QEI1CONbits.TQGATE
#define _PCDOUT QEI1CONbits.PCDOUT
#define _SWPAB QEI1CONbits.SWPAB
#define _QEIM QEI1CONbits.QEIM
#define _UPDN QEI1CONbits.UPDN
#define _INDX QEI1CONbits.INDX
#define _QEISIDL QEI1CONbits.QEISIDL
#define _CNTERR QEI1CONbits.CNTERR
#define _TQCKPS0 QEI1CONbits.TQCKPS0
#define _TQCKPS1 QEI1CONbits.TQCKPS1
#define _QEIM0 QEI1CONbits.QEIM0
#define _QEIM1 QEI1CONbits.QEIM1
#define _QEIM2 QEI1CONbits.QEIM2

/* DFLT1CON */
#define _QECK DFLT1CONbits.QECK
#define _QEOUT DFLT1CONbits.QEOUT
#define _CEID DFLT1CONbits.CEID
#define _IMV DFLT1CONbits.IMV
#define _QECK0 DFLT1CONbits.QECK0
#define _QECK1 DFLT1CONbits.QECK1
#define _QECK2 DFLT1CONbits.QECK2
#define _IMV0 DFLT1CONbits.IMV0
#define _IMV1 DFLT1CONbits.IMV1

/* QEI2CON */
/* Bitname _UPDN_SRC cannot be defined because it is used by more than one SFR */
/* Bitname _TQCS cannot be defined because it is used by more than one SFR */
/* Bitname _POSRES cannot be defined because it is used by more than one SFR */
/* Bitname _TQCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TQGATE cannot be defined because it is used by more than one SFR */
/* Bitname _PCDOUT cannot be defined because it is used by more than one SFR */
/* Bitname _SWPAB cannot be defined because it is used by more than one SFR */
/* Bitname _QEIM cannot be defined because it is used by more than one SFR */
/* Bitname _UPDN cannot be defined because it is used by more than one SFR */
/* Bitname _INDX cannot be defined because it is used by more than one SFR */
/* Bitname _QEISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CNTERR cannot be defined because it is used by more than one SFR */
/* Bitname _TQCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TQCKPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _QEIM0 cannot be defined because it is used by more than one SFR */
/* Bitname _QEIM1 cannot be defined because it is used by more than one SFR */
/* Bitname _QEIM2 cannot be defined because it is used by more than one SFR */

/* DFLT2CON */
/* Bitname _QECK cannot be defined because it is used by more than one SFR */
/* Bitname _QEOUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEID cannot be defined because it is used by more than one SFR */
/* Bitname _IMV cannot be defined because it is used by more than one SFR */
/* Bitname _QECK0 cannot be defined because it is used by more than one SFR */
/* Bitname _QECK1 cannot be defined because it is used by more than one SFR */
/* Bitname _QECK2 cannot be defined because it is used by more than one SFR */
/* Bitname _IMV0 cannot be defined because it is used by more than one SFR */
/* Bitname _IMV1 cannot be defined because it is used by more than one SFR */

/* I2C1CON */
#define _SEN I2C1CONbits.SEN
#define _RSEN I2C1CONbits.RSEN
#define _PEN I2C1CONbits.PEN
#define _RCEN I2C1CONbits.RCEN
#define _ACKEN I2C1CONbits.ACKEN
#define _ACKDT I2C1CONbits.ACKDT
#define _STREN I2C1CONbits.STREN
#define _GCEN I2C1CONbits.GCEN
#define _SMEN I2C1CONbits.SMEN
#define _DISSLW I2C1CONbits.DISSLW
#define _A10M I2C1CONbits.A10M
#define _IPMIEN I2C1CONbits.IPMIEN
#define _SCLREL I2C1CONbits.SCLREL
#define _I2CSIDL I2C1CONbits.I2CSIDL
#define _I2CEN I2C1CONbits.I2CEN

/* I2C1STAT */
#define _TBF I2C1STATbits.TBF
#define _RBF I2C1STATbits.RBF
#define _R_W I2C1STATbits.R_W
#define _S I2C1STATbits.S
#define _P I2C1STATbits.P
#define _D_A I2C1STATbits.D_A
#define _I2COV I2C1STATbits.I2COV
#define _IWCOL I2C1STATbits.IWCOL
#define _ADD10 I2C1STATbits.ADD10
#define _GCSTAT I2C1STATbits.GCSTAT
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

/* I2C2CON */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _STREN cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SMEN cannot be defined because it is used by more than one SFR */
/* Bitname _DISSLW cannot be defined because it is used by more than one SFR */
/* Bitname _A10M cannot be defined because it is used by more than one SFR */
/* Bitname _IPMIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C2STAT */
/* Bitname _TBF cannot be defined because it is used by more than one SFR */
/* Bitname _RBF cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _I2COV cannot be defined because it is used by more than one SFR */
/* Bitname _IWCOL cannot be defined because it is used by more than one SFR */
/* Bitname _ADD10 cannot be defined because it is used by more than one SFR */
/* Bitname _GCSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _TRSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _BRGH U1MODEbits.BRGH
#define _URXINV U1MODEbits.URXINV
#define _ABAUD U1MODEbits.ABAUD
#define _LPBACK U1MODEbits.LPBACK
#define _WAKE U1MODEbits.WAKE
#define _UEN U1MODEbits.UEN
#define _RTSMD U1MODEbits.RTSMD
#define _IREN U1MODEbits.IREN
#define _USIDL U1MODEbits.USIDL
#define _UARTEN U1MODEbits.UARTEN
#define _PDSEL0 U1MODEbits.PDSEL0
#define _PDSEL1 U1MODEbits.PDSEL1
#define _UEN0 U1MODEbits.UEN0
#define _UEN1 U1MODEbits.UEN1

/* U1STA */
#define _URXDA U1STAbits.URXDA
#define _OERR U1STAbits.OERR
#define _FERR U1STAbits.FERR
#define _PERR U1STAbits.PERR
#define _RIDLE U1STAbits.RIDLE
#define _ADDEN U1STAbits.ADDEN
#define _URXISEL U1STAbits.URXISEL
#define _TRMT U1STAbits.TRMT
#define _UTXBF U1STAbits.UTXBF
#define _UTXEN U1STAbits.UTXEN
#define _UTXBRK U1STAbits.UTXBRK
#define _UTXISEL0 U1STAbits.UTXISEL0
#define _UTXINV U1STAbits.UTXINV
#define _UTXISEL1 U1STAbits.UTXISEL1
#define _URXISEL0 U1STAbits.URXISEL0
#define _URXISEL1 U1STAbits.URXISEL1

/* U1TXREG */
#define _U1TXREG U1TXREGbits.U1TXREG
#define _UTXREG0 U1TXREGbits.UTXREG0
#define _UTXREG1 U1TXREGbits.UTXREG1
#define _UTXREG2 U1TXREGbits.UTXREG2
#define _UTXREG3 U1TXREGbits.UTXREG3
#define _UTXREG4 U1TXREGbits.UTXREG4
#define _UTXREG5 U1TXREGbits.UTXREG5
#define _UTXREG6 U1TXREGbits.UTXREG6
#define _UTXREG7 U1TXREGbits.UTXREG7
#define _UTXREG8 U1TXREGbits.UTXREG8

/* U1RXREG */
#define _U1RXREG U1RXREGbits.U1RXREG
#define _URXREG0 U1RXREGbits.URXREG0
#define _URXREG1 U1RXREGbits.URXREG1
#define _URXREG2 U1RXREGbits.URXREG2
#define _URXREG3 U1RXREGbits.URXREG3
#define _URXREG4 U1RXREGbits.URXREG4
#define _URXREG5 U1RXREGbits.URXREG5
#define _URXREG6 U1RXREGbits.URXREG6
#define _URXREG7 U1RXREGbits.URXREG7
#define _URXREG8 U1RXREGbits.URXREG8

/* U2MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _URXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U2STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */

/* U2TXREG */
#define _U2TXREG U2TXREGbits.U2TXREG
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U2RXREG */
#define _U2RXREG U2RXREGbits.U2RXREG
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SPIROV SPI1STATbits.SPIROV
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN

/* SPI1CON1 */
#define _PPRE SPI1CON1bits.PPRE
#define _SPRE SPI1CON1bits.SPRE
#define _MSTEN SPI1CON1bits.MSTEN
#define _CKP SPI1CON1bits.CKP
#define _SSEN SPI1CON1bits.SSEN
#define _CKE SPI1CON1bits.CKE
#define _SMP SPI1CON1bits.SMP
#define _MODE16 SPI1CON1bits.MODE16
#define _DISSDO SPI1CON1bits.DISSDO
#define _DISSCK SPI1CON1bits.DISSCK
#define _PPRE0 SPI1CON1bits.PPRE0
#define _PPRE1 SPI1CON1bits.PPRE1
#define _SPRE0 SPI1CON1bits.SPRE0
#define _SPRE1 SPI1CON1bits.SPRE1
#define _SPRE2 SPI1CON1bits.SPRE2

/* SPI1CON2 */
#define _FRMDLY SPI1CON2bits.FRMDLY
#define _FRMPOL SPI1CON2bits.FRMPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */

/* SPI2CON1 */
/* Bitname _PPRE cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE cannot be defined because it is used by more than one SFR */
/* Bitname _MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname _DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname _DISSCK cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE2 cannot be defined because it is used by more than one SFR */

/* SPI2CON2 */
/* Bitname _FRMDLY cannot be defined because it is used by more than one SFR */
/* Bitname _FRMPOL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */

/* TRISA */
#define _TRISA9 TRISAbits.TRISA9
#define _TRISA10 TRISAbits.TRISA10
#define _TRISA14 TRISAbits.TRISA14
#define _TRISA15 TRISAbits.TRISA15

/* PORTA */
#define _RA9 PORTAbits.RA9
#define _RA10 PORTAbits.RA10
#define _RA14 PORTAbits.RA14
#define _RA15 PORTAbits.RA15

/* LATA */
#define _LATA9 LATAbits.LATA9
#define _LATA10 LATAbits.LATA10
#define _LATA14 LATAbits.LATA14
#define _LATA15 LATAbits.LATA15

/* ODCA */
#define _ODCA9 ODCAbits.ODCA9
#define _ODCA10 ODCAbits.ODCA10
#define _ODCA14 ODCAbits.ODCA14
#define _ODCA15 ODCAbits.ODCA15

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB10 TRISBbits.TRISB10
#define _TRISB11 TRISBbits.TRISB11
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB10 PORTBbits.RB10
#define _RB11 PORTBbits.RB11
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB10 LATBbits.LATB10
#define _LATB11 LATBbits.LATB11
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* TRISC */
#define _TRISC1 TRISCbits.TRISC1
#define _TRISC2 TRISCbits.TRISC2
#define _TRISC12 TRISCbits.TRISC12
#define _TRISC13 TRISCbits.TRISC13
#define _TRISC14 TRISCbits.TRISC14
#define _TRISC15 TRISCbits.TRISC15

/* PORTC */
#define _RC1 PORTCbits.RC1
#define _RC2 PORTCbits.RC2
#define _RC12 PORTCbits.RC12
#define _RC13 PORTCbits.RC13
#define _RC14 PORTCbits.RC14
#define _RC15 PORTCbits.RC15

/* LATC */
#define _LATC1 LATCbits.LATC1
#define _LATC2 LATCbits.LATC2
#define _LATC12 LATCbits.LATC12
#define _LATC13 LATCbits.LATC13
#define _LATC14 LATCbits.LATC14
#define _LATC15 LATCbits.LATC15

/* TRISD */
#define _TRISD0 TRISDbits.TRISD0
#define _TRISD1 TRISDbits.TRISD1
#define _TRISD2 TRISDbits.TRISD2
#define _TRISD3 TRISDbits.TRISD3
#define _TRISD4 TRISDbits.TRISD4
#define _TRISD5 TRISDbits.TRISD5
#define _TRISD6 TRISDbits.TRISD6
#define _TRISD7 TRISDbits.TRISD7
#define _TRISD8 TRISDbits.TRISD8
#define _TRISD9 TRISDbits.TRISD9
#define _TRISD10 TRISDbits.TRISD10
#define _TRISD11 TRISDbits.TRISD11
#define _TRISD12 TRISDbits.TRISD12
#define _TRISD13 TRISDbits.TRISD13
#define _TRISD14 TRISDbits.TRISD14
#define _TRISD15 TRISDbits.TRISD15

/* PORTD */
#define _RD0 PORTDbits.RD0
#define _RD1 PORTDbits.RD1
#define _RD2 PORTDbits.RD2
#define _RD3 PORTDbits.RD3
#define _RD4 PORTDbits.RD4
#define _RD5 PORTDbits.RD5
#define _RD6 PORTDbits.RD6
#define _RD7 PORTDbits.RD7
#define _RD8 PORTDbits.RD8
#define _RD9 PORTDbits.RD9
#define _RD10 PORTDbits.RD10
#define _RD11 PORTDbits.RD11
#define _RD12 PORTDbits.RD12
#define _RD13 PORTDbits.RD13
#define _RD14 PORTDbits.RD14
#define _RD15 PORTDbits.RD15

/* LATD */
#define _LATD0 LATDbits.LATD0
#define _LATD1 LATDbits.LATD1
#define _LATD2 LATDbits.LATD2
#define _LATD3 LATDbits.LATD3
#define _LATD4 LATDbits.LATD4
#define _LATD5 LATDbits.LATD5
#define _LATD6 LATDbits.LATD6
#define _LATD7 LATDbits.LATD7
#define _LATD8 LATDbits.LATD8
#define _LATD9 LATDbits.LATD9
#define _LATD10 LATDbits.LATD10
#define _LATD11 LATDbits.LATD11
#define _LATD12 LATDbits.LATD12
#define _LATD13 LATDbits.LATD13
#define _LATD14 LATDbits.LATD14
#define _LATD15 LATDbits.LATD15

/* ODCD */
#define _ODCD0 ODCDbits.ODCD0
#define _ODCD1 ODCDbits.ODCD1
#define _ODCD2 ODCDbits.ODCD2
#define _ODCD3 ODCDbits.ODCD3
#define _ODCD4 ODCDbits.ODCD4
#define _ODCD5 ODCDbits.ODCD5
#define _ODCD6 ODCDbits.ODCD6
#define _ODCD7 ODCDbits.ODCD7
#define _ODCD8 ODCDbits.ODCD8
#define _ODCD9 ODCDbits.ODCD9
#define _ODCD10 ODCDbits.ODCD10
#define _ODCD11 ODCDbits.ODCD11
#define _ODCD12 ODCDbits.ODCD12
#define _ODCD13 ODCDbits.ODCD13
#define _ODCD14 ODCDbits.ODCD14
#define _ODCD15 ODCDbits.ODCD15

/* TRISE */
#define _TRISE0 TRISEbits.TRISE0
#define _TRISE1 TRISEbits.TRISE1
#define _TRISE2 TRISEbits.TRISE2
#define _TRISE3 TRISEbits.TRISE3
#define _TRISE4 TRISEbits.TRISE4
#define _TRISE5 TRISEbits.TRISE5
#define _TRISE6 TRISEbits.TRISE6
#define _TRISE7 TRISEbits.TRISE7
#define _TRISE8 TRISEbits.TRISE8
#define _TRISE9 TRISEbits.TRISE9

/* PORTE */
#define _RE0 PORTEbits.RE0
#define _RE1 PORTEbits.RE1
#define _RE2 PORTEbits.RE2
#define _RE3 PORTEbits.RE3
#define _RE4 PORTEbits.RE4
#define _RE5 PORTEbits.RE5
#define _RE6 PORTEbits.RE6
#define _RE7 PORTEbits.RE7
#define _RE8 PORTEbits.RE8
#define _RE9 PORTEbits.RE9

/* LATE */
#define _LATE0 LATEbits.LATE0
#define _LATE1 LATEbits.LATE1
#define _LATE2 LATEbits.LATE2
#define _LATE3 LATEbits.LATE3
#define _LATE4 LATEbits.LATE4
#define _LATE5 LATEbits.LATE5
#define _LATE6 LATEbits.LATE6
#define _LATE7 LATEbits.LATE7
#define _LATE8 LATEbits.LATE8
#define _LATE9 LATEbits.LATE9

/* ODCE */
#define _ODCE0 ODCEbits.ODCE0
#define _ODCE1 ODCEbits.ODCE1
#define _ODCE2 ODCEbits.ODCE2
#define _ODCE3 ODCEbits.ODCE3
#define _ODCE4 ODCEbits.ODCE4
#define _ODCE5 ODCEbits.ODCE5
#define _ODCE6 ODCEbits.ODCE6
#define _ODCE7 ODCEbits.ODCE7

/* TRISF */
#define _TRISF0 TRISFbits.TRISF0
#define _TRISF1 TRISFbits.TRISF1
#define _TRISF2 TRISFbits.TRISF2
#define _TRISF3 TRISFbits.TRISF3
#define _TRISF4 TRISFbits.TRISF4
#define _TRISF5 TRISFbits.TRISF5
#define _TRISF6 TRISFbits.TRISF6
#define _TRISF7 TRISFbits.TRISF7
#define _TRISF8 TRISFbits.TRISF8

/* PORTF */
#define _RF0 PORTFbits.RF0
#define _RF1 PORTFbits.RF1
#define _RF2 PORTFbits.RF2
#define _RF3 PORTFbits.RF3
#define _RF4 PORTFbits.RF4
#define _RF5 PORTFbits.RF5
#define _RF6 PORTFbits.RF6
#define _RF7 PORTFbits.RF7
#define _RF8 PORTFbits.RF8

/* LATF */
#define _LATF0 LATFbits.LATF0
#define _LATF1 LATFbits.LATF1
#define _LATF2 LATFbits.LATF2
#define _LATF3 LATFbits.LATF3
#define _LATF4 LATFbits.LATF4
#define _LATF5 LATFbits.LATF5
#define _LATF6 LATFbits.LATF6
#define _LATF7 LATFbits.LATF7
#define _LATF8 LATFbits.LATF8

/* ODCF */
#define _ODCF1 ODCFbits.ODCF1
#define _ODCF2 ODCFbits.ODCF2
#define _ODCF3 ODCFbits.ODCF3
#define _ODCF6 ODCFbits.ODCF6
#define _ODCF7 ODCFbits.ODCF7
#define _ODCF8 ODCFbits.ODCF8

/* TRISG */
#define _TRISG0 TRISGbits.TRISG0
#define _TRISG1 TRISGbits.TRISG1
#define _TRISG2 TRISGbits.TRISG2
#define _TRISG3 TRISGbits.TRISG3
#define _TRISG6 TRISGbits.TRISG6
#define _TRISG7 TRISGbits.TRISG7
#define _TRISG8 TRISGbits.TRISG8
#define _TRISG9 TRISGbits.TRISG9

/* PORTG */
#define _RG0 PORTGbits.RG0
#define _RG1 PORTGbits.RG1
#define _RG2 PORTGbits.RG2
#define _RG3 PORTGbits.RG3
#define _RG6 PORTGbits.RG6
#define _RG7 PORTGbits.RG7
#define _RG8 PORTGbits.RG8
#define _RG9 PORTGbits.RG9

/* LATG */
#define _LATG0 LATGbits.LATG0
#define _LATG1 LATGbits.LATG1
#define _LATG2 LATGbits.LATG2
#define _LATG3 LATGbits.LATG3
#define _LATG6 LATGbits.LATG6
#define _LATG7 LATGbits.LATG7
#define _LATG8 LATGbits.LATG8
#define _LATG9 LATGbits.LATG9

/* ODCG */
#define _ODCG0 ODCGbits.ODCG0
#define _ODCG1 ODCGbits.ODCG1
#define _ODCG2 ODCGbits.ODCG2
#define _ODCG3 ODCGbits.ODCG3
#define _ODCG6 ODCGbits.ODCG6
#define _ODCG7 ODCGbits.ODCG7
#define _ODCG8 ODCGbits.ODCG8
#define _ODCG9 ODCGbits.ODCG9

/* ADCON */
#define _ADCS ADCONbits.ADCS
#define _ASYNCSAMP ADCONbits.ASYNCSAMP
#define _SEQSAMP ADCONbits.SEQSAMP
#define _ORDER ADCONbits.ORDER
#define _EIE ADCONbits.EIE
#define _FORM ADCONbits.FORM
#define _GSWTRG ADCONbits.GSWTRG
#define _SLOWCLK ADCONbits.SLOWCLK
#define _ADSIDL ADCONbits.ADSIDL
#define _ADON ADCONbits.ADON
#define _ADCS0 ADCONbits.ADCS0
#define _ADCS1 ADCONbits.ADCS1
#define _ADCS2 ADCONbits.ADCS2

/* ADPCFG */
#define _PCFG0 ADPCFGbits.PCFG0
#define _PCFG1 ADPCFGbits.PCFG1
#define _PCFG2 ADPCFGbits.PCFG2
#define _PCFG3 ADPCFGbits.PCFG3
#define _PCFG4 ADPCFGbits.PCFG4
#define _PCFG5 ADPCFGbits.PCFG5
#define _PCFG6 ADPCFGbits.PCFG6
#define _PCFG7 ADPCFGbits.PCFG7
#define _PCFG8 ADPCFGbits.PCFG8
#define _PCFG9 ADPCFGbits.PCFG9
#define _PCFG10 ADPCFGbits.PCFG10
#define _PCFG11 ADPCFGbits.PCFG11
#define _PCFG12 ADPCFGbits.PCFG12
#define _PCFG13 ADPCFGbits.PCFG13
#define _PCFG14 ADPCFGbits.PCFG14
#define _PCFG15 ADPCFGbits.PCFG15

/* ADPCFG2 */
#define _PCFG16 ADPCFG2bits.PCFG16
#define _PCFG17 ADPCFG2bits.PCFG17

/* ADSTAT */
#define _P0RDY ADSTATbits.P0RDY
#define _P1RDY ADSTATbits.P1RDY
#define _P2RDY ADSTATbits.P2RDY
#define _P3RDY ADSTATbits.P3RDY
#define _P4RDY ADSTATbits.P4RDY
#define _P5RDY ADSTATbits.P5RDY
#define _P6RDY ADSTATbits.P6RDY
#define _P7RDY ADSTATbits.P7RDY
#define _P8RDY ADSTATbits.P8RDY
#define _P12RDY ADSTATbits.P12RDY

/* ADCPC0 */
#define _TRGSRC0 ADCPC0bits.TRGSRC0
#define _SWTRG0 ADCPC0bits.SWTRG0
#define _PEND0 ADCPC0bits.PEND0
#define _IRQEN0 ADCPC0bits.IRQEN0
#define _TRGSRC1 ADCPC0bits.TRGSRC1
#define _SWTRG1 ADCPC0bits.SWTRG1
#define _PEND1 ADCPC0bits.PEND1
#define _IRQEN1 ADCPC0bits.IRQEN1
#define _TRGSRC00 ADCPC0bits.TRGSRC00
#define _TRGSRC01 ADCPC0bits.TRGSRC01
#define _TRGSRC02 ADCPC0bits.TRGSRC02
#define _TRGSRC03 ADCPC0bits.TRGSRC03
#define _TRGSRC04 ADCPC0bits.TRGSRC04
#define _TRGSRC10 ADCPC0bits.TRGSRC10
#define _TRGSRC11 ADCPC0bits.TRGSRC11
/* Bitname _TRGSRC12 cannot be defined because it is used by more than one SFR */
#define _TRGSRC13 ADCPC0bits.TRGSRC13
#define _TRGSRC14 ADCPC0bits.TRGSRC14

/* ADCPC1 */
#define _TRGSRC2 ADCPC1bits.TRGSRC2
#define _SWTRG2 ADCPC1bits.SWTRG2
#define _PEND2 ADCPC1bits.PEND2
#define _IRQEN2 ADCPC1bits.IRQEN2
#define _TRGSRC3 ADCPC1bits.TRGSRC3
#define _SWTRG3 ADCPC1bits.SWTRG3
#define _PEND3 ADCPC1bits.PEND3
#define _IRQEN3 ADCPC1bits.IRQEN3
#define _TRGSRC20 ADCPC1bits.TRGSRC20
#define _TRGSRC21 ADCPC1bits.TRGSRC21
#define _TRGSRC22 ADCPC1bits.TRGSRC22
#define _TRGSRC23 ADCPC1bits.TRGSRC23
#define _TRGSRC24 ADCPC1bits.TRGSRC24
#define _TRGSRC30 ADCPC1bits.TRGSRC30
#define _TRGSRC31 ADCPC1bits.TRGSRC31
#define _TRGSRC32 ADCPC1bits.TRGSRC32
#define _TRGSRC33 ADCPC1bits.TRGSRC33
#define _TRGSRC34 ADCPC1bits.TRGSRC34

/* ADCPC2 */
#define _TRGSRC4 ADCPC2bits.TRGSRC4
#define _SWTRG4 ADCPC2bits.SWTRG4
#define _PEND4 ADCPC2bits.PEND4
#define _IRQEN4 ADCPC2bits.IRQEN4
#define _TRGSRC5 ADCPC2bits.TRGSRC5
#define _SWTRG5 ADCPC2bits.SWTRG5
#define _PEND5 ADCPC2bits.PEND5
#define _IRQEN5 ADCPC2bits.IRQEN5
#define _TRGSRC40 ADCPC2bits.TRGSRC40
#define _TRGSRC41 ADCPC2bits.TRGSRC41
#define _TRGSRC42 ADCPC2bits.TRGSRC42
#define _TRGSRC43 ADCPC2bits.TRGSRC43
#define _TRGSRC44 ADCPC2bits.TRGSRC44
#define _TRGSRC50 ADCPC2bits.TRGSRC50
#define _TRGSRC51 ADCPC2bits.TRGSRC51
#define _TRGSRC52 ADCPC2bits.TRGSRC52
#define _TRGSRC53 ADCPC2bits.TRGSRC53
#define _TRGSRC54 ADCPC2bits.TRGSRC54

/* ADCPC3 */
#define _TRGSRC6 ADCPC3bits.TRGSRC6
#define _SWTRG6 ADCPC3bits.SWTRG6
#define _PEND6 ADCPC3bits.PEND6
#define _IRQEN6 ADCPC3bits.IRQEN6
#define _TRGSRC7 ADCPC3bits.TRGSRC7
#define _SWTRG7 ADCPC3bits.SWTRG7
#define _PEND7 ADCPC3bits.PEND7
#define _IRQEN7 ADCPC3bits.IRQEN7
#define _TRGSRC60 ADCPC3bits.TRGSRC60
#define _TRGSRC61 ADCPC3bits.TRGSRC61
#define _TRGSRC62 ADCPC3bits.TRGSRC62
#define _TRGSRC63 ADCPC3bits.TRGSRC63
#define _TRGSRC64 ADCPC3bits.TRGSRC64
#define _TRGSRC70 ADCPC3bits.TRGSRC70
#define _TRGSRC71 ADCPC3bits.TRGSRC71
#define _TRGSRC72 ADCPC3bits.TRGSRC72
#define _TRGSRC73 ADCPC3bits.TRGSRC73
#define _TRGSRC74 ADCPC3bits.TRGSRC74

/* ADCPC4 */
#define _TRGSRC8 ADCPC4bits.TRGSRC8
#define _SWTRG8 ADCPC4bits.SWTRG8
#define _PEND8 ADCPC4bits.PEND8
#define _IRQEN8 ADCPC4bits.IRQEN8
#define _TRGSRC80 ADCPC4bits.TRGSRC80
#define _TRGSRC81 ADCPC4bits.TRGSRC81
#define _TRGSRC82 ADCPC4bits.TRGSRC82
#define _TRGSRC83 ADCPC4bits.TRGSRC83
#define _TRGSRC84 ADCPC4bits.TRGSRC84

/* ADCPC6 */
/* Bitname _TRGSRC12 cannot be defined because it is used by more than one SFR */
#define _SWTRG12 ADCPC6bits.SWTRG12
#define _PEND12 ADCPC6bits.PEND12
#define _IRQEN12 ADCPC6bits.IRQEN12
#define _TRGSRC120 ADCPC6bits.TRGSRC120
#define _TRGSRC121 ADCPC6bits.TRGSRC121
#define _TRGSRC122 ADCPC6bits.TRGSRC122
#define _TRGSRC123 ADCPC6bits.TRGSRC123
#define _TRGSRC124 ADCPC6bits.TRGSRC124

/* PTCON */
/* Bitname _SEVTPS cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EIPU cannot be defined because it is used by more than one SFR */
/* Bitname _SEIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SESTAT cannot be defined because it is used by more than one SFR */
#define _PTSIDL PTCONbits.PTSIDL
#define _PTEN PTCONbits.PTEN
/* Bitname _SEVTPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC2 cannot be defined because it is used by more than one SFR */

/* PTCON2 */
/* Bitname _PCLKDIV cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV2 cannot be defined because it is used by more than one SFR */

/* STCON */
/* Bitname _SEVTPS cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EIPU cannot be defined because it is used by more than one SFR */
/* Bitname _SEIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SESTAT cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC2 cannot be defined because it is used by more than one SFR */

/* STCON2 */
/* Bitname _PCLKDIV cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV2 cannot be defined because it is used by more than one SFR */

/* CHOP */
#define _CHOPCLK CHOPbits.CHOPCLK
#define _CHPCLKEN CHOPbits.CHPCLKEN
#define _CHOPCLK0 CHOPbits.CHOPCLK0
#define _CHOPCLK1 CHOPbits.CHOPCLK1
#define _CHOPCLK2 CHOPbits.CHOPCLK2
#define _CHOPCLK3 CHOPbits.CHOPCLK3
#define _CHOPCLK4 CHOPbits.CHOPCLK4
#define _CHOPCLK5 CHOPbits.CHOPCLK5
#define _CHOPCLK6 CHOPbits.CHOPCLK6

/* PWMCON1 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON1 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON1 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG1 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON1 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG1 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP1 */
#define _PWMCAP10 PWMCAP1bits.PWMCAP10
#define _PWMCAP11 PWMCAP1bits.PWMCAP11
#define _PWMCAP12 PWMCAP1bits.PWMCAP12
#define _PWMCAP13 PWMCAP1bits.PWMCAP13
#define _PWMCAP14 PWMCAP1bits.PWMCAP14
#define _PWMCAP15 PWMCAP1bits.PWMCAP15
#define _PWMCAP16 PWMCAP1bits.PWMCAP16
#define _PWMCAP17 PWMCAP1bits.PWMCAP17
#define _PWMCAP18 PWMCAP1bits.PWMCAP18
#define _PWMCAP19 PWMCAP1bits.PWMCAP19
#define _PWMCAP110 PWMCAP1bits.PWMCAP110
#define _PWMCAP111 PWMCAP1bits.PWMCAP111
#define _PWMCAP112 PWMCAP1bits.PWMCAP112

/* LEBCON1 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY1 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON1 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON2 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON2 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON2 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG2 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON2 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG2 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON2 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY2 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON2 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON3 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON3 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON3 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG3 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON3 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG3 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON3 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY3 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON3 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON4 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON4 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON4 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG4 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON4 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG4 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON4 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY4 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON4 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON5 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON5 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON5 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG5 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON5 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG5 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON5 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY5 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON5 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON6 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON6 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON6 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG6 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON6 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG6 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON6 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY6 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON6 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON7 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON7 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON7 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG7 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON7 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG7 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON7 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY7 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON7 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON8 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON8 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON8 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG8 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON8 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG8 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON8 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY8 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON8 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* CMPCON1 */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */

/* CMPDAC1 */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */

/* CMPCON2 */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */

/* CMPDAC2 */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */

/* CMPCON3 */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */

/* CMPDAC3 */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */

/* CMPCON4 */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */

/* CMPDAC4 */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _VREGS RCONbits.VREGS
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _CF OSCCONbits.CF
#define _PRCDEN OSCCONbits.PRCDEN
#define _LOCK OSCCONbits.LOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _PLLPRE CLKDIVbits.PLLPRE
#define _PLLPOST CLKDIVbits.PLLPOST
#define _FRCDIV CLKDIVbits.FRCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _PLLPRE0 CLKDIVbits.PLLPRE0
#define _PLLPRE1 CLKDIVbits.PLLPRE1
#define _PLLPRE2 CLKDIVbits.PLLPRE2
#define _PLLPRE3 CLKDIVbits.PLLPRE3
#define _PLLPRE4 CLKDIVbits.PLLPRE4
#define _PLLPOST0 CLKDIVbits.PLLPOST0
#define _PLLPOST1 CLKDIVbits.PLLPOST1
#define _FRCDIV0 CLKDIVbits.FRCDIV0
#define _FRCDIV1 CLKDIVbits.FRCDIV1
#define _FRCDIV2 CLKDIVbits.FRCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* PLLFBD */
#define _PLLDIV PLLFBDbits.PLLDIV
#define _PLLDIV0 PLLFBDbits.PLLDIV0
#define _PLLDIV1 PLLFBDbits.PLLDIV1
#define _PLLDIV2 PLLFBDbits.PLLDIV2
#define _PLLDIV3 PLLFBDbits.PLLDIV3
#define _PLLDIV4 PLLFBDbits.PLLDIV4
#define _PLLDIV5 PLLFBDbits.PLLDIV5
#define _PLLDIV6 PLLFBDbits.PLLDIV6
#define _PLLDIV7 PLLFBDbits.PLLDIV7
#define _PLLDIV8 PLLFBDbits.PLLDIV8

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TSEQ10 OSCTUNbits.TSEQ10
#define _TSEQ11 OSCTUNbits.TSEQ11
#define _TSEQ12 OSCTUNbits.TSEQ12
#define _TSEQ13 OSCTUNbits.TSEQ13
#define _TSEQ20 OSCTUNbits.TSEQ20
#define _TSEQ21 OSCTUNbits.TSEQ21
#define _TSEQ22 OSCTUNbits.TSEQ22
#define _TSEQ23 OSCTUNbits.TSEQ23
#define _TSEQ30 OSCTUNbits.TSEQ30
#define _TSEQ31 OSCTUNbits.TSEQ31
#define _TSEQ32 OSCTUNbits.TSEQ32
#define _TSEQ33 OSCTUNbits.TSEQ33

/* OSCTUN2 */
#define _TSEQ40 OSCTUN2bits.TSEQ40
#define _TSEQ41 OSCTUN2bits.TSEQ41
#define _TSEQ42 OSCTUN2bits.TSEQ42
#define _TSEQ43 OSCTUN2bits.TSEQ43
#define _TSEQ50 OSCTUN2bits.TSEQ50
#define _TSEQ51 OSCTUN2bits.TSEQ51
#define _TSEQ52 OSCTUN2bits.TSEQ52
#define _TSEQ53 OSCTUN2bits.TSEQ53
#define _TSEQ60 OSCTUN2bits.TSEQ60
#define _TSEQ61 OSCTUN2bits.TSEQ61
#define _TSEQ62 OSCTUN2bits.TSEQ62
#define _TSEQ63 OSCTUN2bits.TSEQ63
#define _TSEQ70 OSCTUN2bits.TSEQ70
#define _TSEQ71 OSCTUN2bits.TSEQ71
#define _TSEQ72 OSCTUN2bits.TSEQ72
#define _TSEQ73 OSCTUN2bits.TSEQ73

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSIDL REFOCONbits.ROSIDL
#define _ROON REFOCONbits.ROON
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3
#define _ROSSLP REFOCONbits.ROSSLP

/* ACLKCON */
#define _FRCSEL ACLKCONbits.FRCSEL
#define _ASRCSEL ACLKCONbits.ASRCSEL
#define _APSTSCLR ACLKCONbits.APSTSCLR
#define _SELACLK ACLKCONbits.SELACLK
#define _APLLCK ACLKCONbits.APLLCK
#define _ENAPLL ACLKCONbits.ENAPLL
#define _APSTSCLR0 ACLKCONbits.APSTSCLR0
#define _APSTSCLR1 ACLKCONbits.APSTSCLR1
#define _APSTSCLR2 ACLKCONbits.APSTSCLR2

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* PMD1 */
#define _ADCMD PMD1bits.ADCMD
#define _C1MD PMD1bits.C1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWMMD PMD1bits.PWMMD
#define _QEI1MD PMD1bits.QEI1MD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _T5MD PMD1bits.T5MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _OC2MD PMD2bits.OC2MD
#define _OC3MD PMD2bits.OC3MD
#define _OC4MD PMD2bits.OC4MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _QEI2MD PMD3bits.QEI2MD
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _REFOMD PMD4bits.REFOMD

/* PMD6 */
#define _PWM1MD PMD6bits.PWM1MD
#define _PWM2MD PMD6bits.PWM2MD
#define _PWM3MD PMD6bits.PWM3MD
#define _PWM4MD PMD6bits.PWM4MD
#define _PWM5MD PMD6bits.PWM5MD
#define _PWM6MD PMD6bits.PWM6MD
#define _PWM7MD PMD6bits.PWM7MD
#define _PWM8MD PMD6bits.PWM8MD

/* PMD7 */
#define _CMP1MD PMD7bits.CMP1MD
#define _CMP2MD PMD7bits.CMP2MD
#define _CMP3MD PMD7bits.CMP3MD
#define _CMP4MD PMD7bits.CMP4MD


/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array in X memory */
/* that is aligned to a 32 byte address:                      */
/*                                                            */
/* int _XBSS(32) xbuf[16];                                    */
/*                                                            */
#define _XBSS(N)    __attribute__((space(xmemory),aligned(N)))
#define _XDATA(N)   __attribute__((space(xmemory),aligned(N)))
#define _YBSS(N)    __attribute__((space(ymemory),aligned(N)))
#define _YDATA(N)   __attribute__((space(ymemory),aligned(N)))

/* The following macros do not require an argument. They can  */
/* be used to locate a variable in persistent data memory or  */
/* in near data memory. For example, to declare two variables */
/* that retain their values across a device reset:            */
/*                                                            */
/* int _PERSISTENT var1,var2;                                 */
/*                                                            */
#define _PERSISTENT __attribute__((persistent))
#define _NEAR       __attribute__((near))

/* ---------------------------------------------------------- */
/* Some useful macros for declaring functions                 */
/* ---------------------------------------------------------- */

/* The following macros can be used to declare interrupt      */
/* service routines (ISRs). For example, to declare an ISR    */
/* for the timer1 interrupt:                                  */
/*                                                            */
/* void _ISR _T1Interrupt(void);                              */
/*                                                            */
/* To declare an ISR for the SPI1 interrupt with fast         */
/* context save:                                              */
/*                                                            */
/* void _ISRFAST _SPI1Interrupt(void);                        */
/*                                                            */
/* Note: ISRs will be installed into the interrupt vector     */
/* tables automatically if the reserved names listed in the   */
/* MPLAB C30 Compiler User's Guide (DS51284) are used.        */
/*                                                            */
#define _ISR __attribute__((interrupt))
#define _ISRFAST __attribute__((interrupt, shadow))

/* ---------------------------------------------------------- */
/* Some useful macros for changing the CPU IPL                */
/* ---------------------------------------------------------- */

/* The following macros can be used to modify the current CPU */
/* IPL. The definition of the macro may vary from device to   */
/* device.                                                    */
/*                                                            */
/* To safely set the CPU IPL, use SET_CPU_IPL(ipl); the       */
/* valid range of ipl is 0-7, it may be any expression.       */
/*                                                            */
/* SET_CPU_IPL(7);                                            */
/*                                                            */
/* To preserve the current IPL and save it use                */
/* SET_AND_SAVE_CPU_IPL(save_to, ipl); the valid range of ipl */
/* is 0-7 and may be any expression, save_to should denote    */
/* some temporary storage.                                    */
/*                                                            */
/* uint16_t old_ipl;                                      */
/*                                                            */
/* SET_AND_SAVE_CPU_IPL(old_ipl, 7);                          */
/*                                                            */
/* The IPL can be restored with RESTORE_CPU_IPL(saved_to)     */
/*                                                            */
/* RESTORE_CPU_IPL(old_ipl);                                  */

#define SET_CPU_IPL(ipl) {       \
  SRbits.IPL = ipl;              \
  __builtin_nop();               \
} (void) 0

#define SET_AND_SAVE_CPU_IPL(save_to, ipl) { \
  save_to = SRbits.IPL; \
  SET_CPU_IPL(ipl); } (void) 0;

#define RESTORE_CPU_IPL(saved_to) SET_CPU_IPL(saved_to)

#define _SR_C_POSITION                           0x00000000
#define _SR_C_MASK                               0x00000001
#define _SR_C_LENGTH                             0x00000001

#define _SR_Z_POSITION                           0x00000001
#define _SR_Z_MASK                               0x00000002
#define _SR_Z_LENGTH                             0x00000001

#define _SR_OV_POSITION                          0x00000002
#define _SR_OV_MASK                              0x00000004
#define _SR_OV_LENGTH                            0x00000001

#define _SR_N_POSITION                           0x00000003
#define _SR_N_MASK                               0x00000008
#define _SR_N_LENGTH                             0x00000001

#define _SR_RA_POSITION                          0x00000004
#define _SR_RA_MASK                              0x00000010
#define _SR_RA_LENGTH                            0x00000001

#define _SR_IPL_POSITION                         0x00000005
#define _SR_IPL_MASK                             0x000000E0
#define _SR_IPL_LENGTH                           0x00000003

#define _SR_DC_POSITION                          0x00000008
#define _SR_DC_MASK                              0x00000100
#define _SR_DC_LENGTH                            0x00000001

#define _SR_DA_POSITION                          0x00000009
#define _SR_DA_MASK                              0x00000200
#define _SR_DA_LENGTH                            0x00000001

#define _SR_SAB_POSITION                         0x0000000A
#define _SR_SAB_MASK                             0x00000400
#define _SR_SAB_LENGTH                           0x00000001

#define _SR_OAB_POSITION                         0x0000000B
#define _SR_OAB_MASK                             0x00000800
#define _SR_OAB_LENGTH                           0x00000001

#define _SR_SB_POSITION                          0x0000000C
#define _SR_SB_MASK                              0x00001000
#define _SR_SB_LENGTH                            0x00000001

#define _SR_SA_POSITION                          0x0000000D
#define _SR_SA_MASK                              0x00002000
#define _SR_SA_LENGTH                            0x00000001

#define _SR_OB_POSITION                          0x0000000E
#define _SR_OB_MASK                              0x00004000
#define _SR_OB_LENGTH                            0x00000001

#define _SR_OA_POSITION                          0x0000000F
#define _SR_OA_MASK                              0x00008000
#define _SR_OA_LENGTH                            0x00000001

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_IF_POSITION                      0x00000000
#define _CORCON_IF_MASK                          0x00000001
#define _CORCON_IF_LENGTH                        0x00000001

#define _CORCON_RND_POSITION                     0x00000001
#define _CORCON_RND_MASK                         0x00000002
#define _CORCON_RND_LENGTH                       0x00000001

#define _CORCON_PSV_POSITION                     0x00000002
#define _CORCON_PSV_MASK                         0x00000004
#define _CORCON_PSV_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _CORCON_ACCSAT_POSITION                  0x00000004
#define _CORCON_ACCSAT_MASK                      0x00000010
#define _CORCON_ACCSAT_LENGTH                    0x00000001

#define _CORCON_SATDW_POSITION                   0x00000005
#define _CORCON_SATDW_MASK                       0x00000020
#define _CORCON_SATDW_LENGTH                     0x00000001

#define _CORCON_SATB_POSITION                    0x00000006
#define _CORCON_SATB_MASK                        0x00000040
#define _CORCON_SATB_LENGTH                      0x00000001

#define _CORCON_SATA_POSITION                    0x00000007
#define _CORCON_SATA_MASK                        0x00000080
#define _CORCON_SATA_LENGTH                      0x00000001

#define _CORCON_DL_POSITION                      0x00000008
#define _CORCON_DL_MASK                          0x00000700
#define _CORCON_DL_LENGTH                        0x00000003

#define _CORCON_EDT_POSITION                     0x0000000B
#define _CORCON_EDT_MASK                         0x00000800
#define _CORCON_EDT_LENGTH                       0x00000001

#define _CORCON_US_POSITION                      0x0000000C
#define _CORCON_US_MASK                          0x00001000
#define _CORCON_US_LENGTH                        0x00000001

#define _CORCON_DL0_POSITION                     0x00000008
#define _CORCON_DL0_MASK                         0x00000100
#define _CORCON_DL0_LENGTH                       0x00000001

#define _CORCON_DL1_POSITION                     0x00000009
#define _CORCON_DL1_MASK                         0x00000200
#define _CORCON_DL1_LENGTH                       0x00000001

#define _CORCON_DL2_POSITION                     0x0000000A
#define _CORCON_DL2_MASK                         0x00000400
#define _CORCON_DL2_LENGTH                       0x00000001

#define _MODCON_XWM_POSITION                     0x00000000
#define _MODCON_XWM_MASK                         0x0000000F
#define _MODCON_XWM_LENGTH                       0x00000004

#define _MODCON_YWM_POSITION                     0x00000004
#define _MODCON_YWM_MASK                         0x000000F0
#define _MODCON_YWM_LENGTH                       0x00000004

#define _MODCON_BWM_POSITION                     0x00000008
#define _MODCON_BWM_MASK                         0x00000F00
#define _MODCON_BWM_LENGTH                       0x00000004

#define _MODCON_YMODEN_POSITION                  0x0000000E
#define _MODCON_YMODEN_MASK                      0x00004000
#define _MODCON_YMODEN_LENGTH                    0x00000001

#define _MODCON_XMODEN_POSITION                  0x0000000F
#define _MODCON_XMODEN_MASK                      0x00008000
#define _MODCON_XMODEN_LENGTH                    0x00000001

#define _MODCON_XWM0_POSITION                    0x00000000
#define _MODCON_XWM0_MASK                        0x00000001
#define _MODCON_XWM0_LENGTH                      0x00000001

#define _MODCON_XWM1_POSITION                    0x00000001
#define _MODCON_XWM1_MASK                        0x00000002
#define _MODCON_XWM1_LENGTH                      0x00000001

#define _MODCON_XWM2_POSITION                    0x00000002
#define _MODCON_XWM2_MASK                        0x00000004
#define _MODCON_XWM2_LENGTH                      0x00000001

#define _MODCON_XWM3_POSITION                    0x00000003
#define _MODCON_XWM3_MASK                        0x00000008
#define _MODCON_XWM3_LENGTH                      0x00000001

#define _MODCON_YWM0_POSITION                    0x00000004
#define _MODCON_YWM0_MASK                        0x00000010
#define _MODCON_YWM0_LENGTH                      0x00000001

#define _MODCON_YWM1_POSITION                    0x00000005
#define _MODCON_YWM1_MASK                        0x00000020
#define _MODCON_YWM1_LENGTH                      0x00000001

#define _MODCON_YWM2_POSITION                    0x00000006
#define _MODCON_YWM2_MASK                        0x00000040
#define _MODCON_YWM2_LENGTH                      0x00000001

#define _MODCON_YWM3_POSITION                    0x00000007
#define _MODCON_YWM3_MASK                        0x00000080
#define _MODCON_YWM3_LENGTH                      0x00000001

#define _MODCON_BWM0_POSITION                    0x00000008
#define _MODCON_BWM0_MASK                        0x00000100
#define _MODCON_BWM0_LENGTH                      0x00000001

#define _MODCON_BWM1_POSITION                    0x00000009
#define _MODCON_BWM1_MASK                        0x00000200
#define _MODCON_BWM1_LENGTH                      0x00000001

#define _MODCON_BWM2_POSITION                    0x0000000A
#define _MODCON_BWM2_MASK                        0x00000400
#define _MODCON_BWM2_LENGTH                      0x00000001

#define _MODCON_BWM3_POSITION                    0x0000000B
#define _MODCON_BWM3_MASK                        0x00000800
#define _MODCON_BWM3_LENGTH                      0x00000001

#define _XBREV_XB_POSITION                       0x00000000
#define _XBREV_XB_MASK                           0x00007FFF
#define _XBREV_XB_LENGTH                         0x0000000F

#define _XBREV_BREN_POSITION                     0x0000000F
#define _XBREV_BREN_MASK                         0x00008000
#define _XBREV_BREN_LENGTH                       0x00000001

#define _XBREV_XB0_POSITION                      0x00000000
#define _XBREV_XB0_MASK                          0x00000001
#define _XBREV_XB0_LENGTH                        0x00000001

#define _XBREV_XB1_POSITION                      0x00000001
#define _XBREV_XB1_MASK                          0x00000002
#define _XBREV_XB1_LENGTH                        0x00000001

#define _XBREV_XB2_POSITION                      0x00000002
#define _XBREV_XB2_MASK                          0x00000004
#define _XBREV_XB2_LENGTH                        0x00000001

#define _XBREV_XB3_POSITION                      0x00000003
#define _XBREV_XB3_MASK                          0x00000008
#define _XBREV_XB3_LENGTH                        0x00000001

#define _XBREV_XB4_POSITION                      0x00000004
#define _XBREV_XB4_MASK                          0x00000010
#define _XBREV_XB4_LENGTH                        0x00000001

#define _XBREV_XB5_POSITION                      0x00000005
#define _XBREV_XB5_MASK                          0x00000020
#define _XBREV_XB5_LENGTH                        0x00000001

#define _XBREV_XB6_POSITION                      0x00000006
#define _XBREV_XB6_MASK                          0x00000040
#define _XBREV_XB6_LENGTH                        0x00000001

#define _XBREV_XB7_POSITION                      0x00000007
#define _XBREV_XB7_MASK                          0x00000080
#define _XBREV_XB7_LENGTH                        0x00000001

#define _XBREV_XB8_POSITION                      0x00000008
#define _XBREV_XB8_MASK                          0x00000100
#define _XBREV_XB8_LENGTH                        0x00000001

#define _XBREV_XB9_POSITION                      0x00000009
#define _XBREV_XB9_MASK                          0x00000200
#define _XBREV_XB9_LENGTH                        0x00000001

#define _XBREV_XB10_POSITION                     0x0000000A
#define _XBREV_XB10_MASK                         0x00000400
#define _XBREV_XB10_LENGTH                       0x00000001

#define _XBREV_XB11_POSITION                     0x0000000B
#define _XBREV_XB11_MASK                         0x00000800
#define _XBREV_XB11_LENGTH                       0x00000001

#define _XBREV_XB12_POSITION                     0x0000000C
#define _XBREV_XB12_MASK                         0x00001000
#define _XBREV_XB12_LENGTH                       0x00000001

#define _XBREV_XB13_POSITION                     0x0000000D
#define _XBREV_XB13_MASK                         0x00002000
#define _XBREV_XB13_LENGTH                       0x00000001

#define _XBREV_XB14_POSITION                     0x0000000E
#define _XBREV_XB14_MASK                         0x00004000
#define _XBREV_XB14_LENGTH                       0x00000001

#define _CNEN1_CN0IE_POSITION                    0x00000000
#define _CNEN1_CN0IE_MASK                        0x00000001
#define _CNEN1_CN0IE_LENGTH                      0x00000001

#define _CNEN1_CN1IE_POSITION                    0x00000001
#define _CNEN1_CN1IE_MASK                        0x00000002
#define _CNEN1_CN1IE_LENGTH                      0x00000001

#define _CNEN1_CN2IE_POSITION                    0x00000002
#define _CNEN1_CN2IE_MASK                        0x00000004
#define _CNEN1_CN2IE_LENGTH                      0x00000001

#define _CNEN1_CN3IE_POSITION                    0x00000003
#define _CNEN1_CN3IE_MASK                        0x00000008
#define _CNEN1_CN3IE_LENGTH                      0x00000001

#define _CNEN1_CN4IE_POSITION                    0x00000004
#define _CNEN1_CN4IE_MASK                        0x00000010
#define _CNEN1_CN4IE_LENGTH                      0x00000001

#define _CNEN1_CN5IE_POSITION                    0x00000005
#define _CNEN1_CN5IE_MASK                        0x00000020
#define _CNEN1_CN5IE_LENGTH                      0x00000001

#define _CNEN1_CN6IE_POSITION                    0x00000006
#define _CNEN1_CN6IE_MASK                        0x00000040
#define _CNEN1_CN6IE_LENGTH                      0x00000001

#define _CNEN1_CN7IE_POSITION                    0x00000007
#define _CNEN1_CN7IE_MASK                        0x00000080
#define _CNEN1_CN7IE_LENGTH                      0x00000001

#define _CNEN1_CN8IE_POSITION                    0x00000008
#define _CNEN1_CN8IE_MASK                        0x00000100
#define _CNEN1_CN8IE_LENGTH                      0x00000001

#define _CNEN1_CN9IE_POSITION                    0x00000009
#define _CNEN1_CN9IE_MASK                        0x00000200
#define _CNEN1_CN9IE_LENGTH                      0x00000001

#define _CNEN1_CN10IE_POSITION                   0x0000000A
#define _CNEN1_CN10IE_MASK                       0x00000400
#define _CNEN1_CN10IE_LENGTH                     0x00000001

#define _CNEN1_CN11IE_POSITION                   0x0000000B
#define _CNEN1_CN11IE_MASK                       0x00000800
#define _CNEN1_CN11IE_LENGTH                     0x00000001

#define _CNEN1_CN12IE_POSITION                   0x0000000C
#define _CNEN1_CN12IE_MASK                       0x00001000
#define _CNEN1_CN12IE_LENGTH                     0x00000001

#define _CNEN1_CN13IE_POSITION                   0x0000000D
#define _CNEN1_CN13IE_MASK                       0x00002000
#define _CNEN1_CN13IE_LENGTH                     0x00000001

#define _CNEN1_CN14IE_POSITION                   0x0000000E
#define _CNEN1_CN14IE_MASK                       0x00004000
#define _CNEN1_CN14IE_LENGTH                     0x00000001

#define _CNEN1_CN15IE_POSITION                   0x0000000F
#define _CNEN1_CN15IE_MASK                       0x00008000
#define _CNEN1_CN15IE_LENGTH                     0x00000001

#define _CNEN2_CN16IE_POSITION                   0x00000000
#define _CNEN2_CN16IE_MASK                       0x00000001
#define _CNEN2_CN16IE_LENGTH                     0x00000001

#define _CNEN2_CN17IE_POSITION                   0x00000001
#define _CNEN2_CN17IE_MASK                       0x00000002
#define _CNEN2_CN17IE_LENGTH                     0x00000001

#define _CNEN2_CN18IE_POSITION                   0x00000002
#define _CNEN2_CN18IE_MASK                       0x00000004
#define _CNEN2_CN18IE_LENGTH                     0x00000001

#define _CNEN2_CN19IE_POSITION                   0x00000003
#define _CNEN2_CN19IE_MASK                       0x00000008
#define _CNEN2_CN19IE_LENGTH                     0x00000001

#define _CNEN2_CN20IE_POSITION                   0x00000004
#define _CNEN2_CN20IE_MASK                       0x00000010
#define _CNEN2_CN20IE_LENGTH                     0x00000001

#define _CNEN2_CN21IE_POSITION                   0x00000005
#define _CNEN2_CN21IE_MASK                       0x00000020
#define _CNEN2_CN21IE_LENGTH                     0x00000001

#define _CNEN2_CN22IE_POSITION                   0x00000006
#define _CNEN2_CN22IE_MASK                       0x00000040
#define _CNEN2_CN22IE_LENGTH                     0x00000001

#define _CNEN2_CN23IE_POSITION                   0x00000007
#define _CNEN2_CN23IE_MASK                       0x00000080
#define _CNEN2_CN23IE_LENGTH                     0x00000001

#define _CNPU1_CN0PUE_POSITION                   0x00000000
#define _CNPU1_CN0PUE_MASK                       0x00000001
#define _CNPU1_CN0PUE_LENGTH                     0x00000001

#define _CNPU1_CN1PUE_POSITION                   0x00000001
#define _CNPU1_CN1PUE_MASK                       0x00000002
#define _CNPU1_CN1PUE_LENGTH                     0x00000001

#define _CNPU1_CN2PUE_POSITION                   0x00000002
#define _CNPU1_CN2PUE_MASK                       0x00000004
#define _CNPU1_CN2PUE_LENGTH                     0x00000001

#define _CNPU1_CN3PUE_POSITION                   0x00000003
#define _CNPU1_CN3PUE_MASK                       0x00000008
#define _CNPU1_CN3PUE_LENGTH                     0x00000001

#define _CNPU1_CN4PUE_POSITION                   0x00000004
#define _CNPU1_CN4PUE_MASK                       0x00000010
#define _CNPU1_CN4PUE_LENGTH                     0x00000001

#define _CNPU1_CN5PUE_POSITION                   0x00000005
#define _CNPU1_CN5PUE_MASK                       0x00000020
#define _CNPU1_CN5PUE_LENGTH                     0x00000001

#define _CNPU1_CN6PUE_POSITION                   0x00000006
#define _CNPU1_CN6PUE_MASK                       0x00000040
#define _CNPU1_CN6PUE_LENGTH                     0x00000001

#define _CNPU1_CN7PUE_POSITION                   0x00000007
#define _CNPU1_CN7PUE_MASK                       0x00000080
#define _CNPU1_CN7PUE_LENGTH                     0x00000001

#define _CNPU1_CN8PUE_POSITION                   0x00000008
#define _CNPU1_CN8PUE_MASK                       0x00000100
#define _CNPU1_CN8PUE_LENGTH                     0x00000001

#define _CNPU1_CN9PUE_POSITION                   0x00000009
#define _CNPU1_CN9PUE_MASK                       0x00000200
#define _CNPU1_CN9PUE_LENGTH                     0x00000001

#define _CNPU1_CN10PUE_POSITION                  0x0000000A
#define _CNPU1_CN10PUE_MASK                      0x00000400
#define _CNPU1_CN10PUE_LENGTH                    0x00000001

#define _CNPU1_CN11PUE_POSITION                  0x0000000B
#define _CNPU1_CN11PUE_MASK                      0x00000800
#define _CNPU1_CN11PUE_LENGTH                    0x00000001

#define _CNPU1_CN12PUE_POSITION                  0x0000000C
#define _CNPU1_CN12PUE_MASK                      0x00001000
#define _CNPU1_CN12PUE_LENGTH                    0x00000001

#define _CNPU1_CN13PUE_POSITION                  0x0000000D
#define _CNPU1_CN13PUE_MASK                      0x00002000
#define _CNPU1_CN13PUE_LENGTH                    0x00000001

#define _CNPU1_CN14PUE_POSITION                  0x0000000E
#define _CNPU1_CN14PUE_MASK                      0x00004000
#define _CNPU1_CN14PUE_LENGTH                    0x00000001

#define _CNPU1_CN15PUE_POSITION                  0x0000000F
#define _CNPU1_CN15PUE_MASK                      0x00008000
#define _CNPU1_CN15PUE_LENGTH                    0x00000001

#define _CNPU2_CN16PUE_POSITION                  0x00000000
#define _CNPU2_CN16PUE_MASK                      0x00000001
#define _CNPU2_CN16PUE_LENGTH                    0x00000001

#define _CNPU2_CN17PUE_POSITION                  0x00000001
#define _CNPU2_CN17PUE_MASK                      0x00000002
#define _CNPU2_CN17PUE_LENGTH                    0x00000001

#define _CNPU2_CN18PUE_POSITION                  0x00000002
#define _CNPU2_CN18PUE_MASK                      0x00000004
#define _CNPU2_CN18PUE_LENGTH                    0x00000001

#define _CNPU2_CN19PUE_POSITION                  0x00000003
#define _CNPU2_CN19PUE_MASK                      0x00000008
#define _CNPU2_CN19PUE_LENGTH                    0x00000001

#define _CNPU2_CN20PUE_POSITION                  0x00000004
#define _CNPU2_CN20PUE_MASK                      0x00000010
#define _CNPU2_CN20PUE_LENGTH                    0x00000001

#define _CNPU2_CN21PUE_POSITION                  0x00000005
#define _CNPU2_CN21PUE_MASK                      0x00000020
#define _CNPU2_CN21PUE_LENGTH                    0x00000001

#define _CNPU2_CN22PUE_POSITION                  0x00000006
#define _CNPU2_CN22PUE_MASK                      0x00000040
#define _CNPU2_CN22PUE_LENGTH                    0x00000001

#define _CNPU2_CN23PUE_POSITION                  0x00000007
#define _CNPU2_CN23PUE_MASK                      0x00000080
#define _CNPU2_CN23PUE_LENGTH                    0x00000001

#define _INTCON1_OSCFAIL_POSITION                0x00000001
#define _INTCON1_OSCFAIL_MASK                    0x00000002
#define _INTCON1_OSCFAIL_LENGTH                  0x00000001

#define _INTCON1_STKERR_POSITION                 0x00000002
#define _INTCON1_STKERR_MASK                     0x00000004
#define _INTCON1_STKERR_LENGTH                   0x00000001

#define _INTCON1_ADDRERR_POSITION                0x00000003
#define _INTCON1_ADDRERR_MASK                    0x00000008
#define _INTCON1_ADDRERR_LENGTH                  0x00000001

#define _INTCON1_MATHERR_POSITION                0x00000004
#define _INTCON1_MATHERR_MASK                    0x00000010
#define _INTCON1_MATHERR_LENGTH                  0x00000001

#define _INTCON1_DIV0ERR_POSITION                0x00000006
#define _INTCON1_DIV0ERR_MASK                    0x00000040
#define _INTCON1_DIV0ERR_LENGTH                  0x00000001

#define _INTCON1_SFTACERR_POSITION               0x00000007
#define _INTCON1_SFTACERR_MASK                   0x00000080
#define _INTCON1_SFTACERR_LENGTH                 0x00000001

#define _INTCON1_COVTE_POSITION                  0x00000008
#define _INTCON1_COVTE_MASK                      0x00000100
#define _INTCON1_COVTE_LENGTH                    0x00000001

#define _INTCON1_OVBTE_POSITION                  0x00000009
#define _INTCON1_OVBTE_MASK                      0x00000200
#define _INTCON1_OVBTE_LENGTH                    0x00000001

#define _INTCON1_OVATE_POSITION                  0x0000000A
#define _INTCON1_OVATE_MASK                      0x00000400
#define _INTCON1_OVATE_LENGTH                    0x00000001

#define _INTCON1_COVBERR_POSITION                0x0000000B
#define _INTCON1_COVBERR_MASK                    0x00000800
#define _INTCON1_COVBERR_LENGTH                  0x00000001

#define _INTCON1_COVAERR_POSITION                0x0000000C
#define _INTCON1_COVAERR_MASK                    0x00001000
#define _INTCON1_COVAERR_LENGTH                  0x00000001

#define _INTCON1_OVBERR_POSITION                 0x0000000D
#define _INTCON1_OVBERR_MASK                     0x00002000
#define _INTCON1_OVBERR_LENGTH                   0x00000001

#define _INTCON1_OVAERR_POSITION                 0x0000000E
#define _INTCON1_OVAERR_MASK                     0x00004000
#define _INTCON1_OVAERR_LENGTH                   0x00000001

#define _INTCON1_NSTDIS_POSITION                 0x0000000F
#define _INTCON1_NSTDIS_MASK                     0x00008000
#define _INTCON1_NSTDIS_LENGTH                   0x00000001

#define _INTCON2_INT0EP_POSITION                 0x00000000
#define _INTCON2_INT0EP_MASK                     0x00000001
#define _INTCON2_INT0EP_LENGTH                   0x00000001

#define _INTCON2_INT1EP_POSITION                 0x00000001
#define _INTCON2_INT1EP_MASK                     0x00000002
#define _INTCON2_INT1EP_LENGTH                   0x00000001

#define _INTCON2_INT2EP_POSITION                 0x00000002
#define _INTCON2_INT2EP_MASK                     0x00000004
#define _INTCON2_INT2EP_LENGTH                   0x00000001

#define _INTCON2_INT3EP_POSITION                 0x00000003
#define _INTCON2_INT3EP_MASK                     0x00000008
#define _INTCON2_INT3EP_LENGTH                   0x00000001

#define _INTCON2_INT4EP_POSITION                 0x00000004
#define _INTCON2_INT4EP_MASK                     0x00000010
#define _INTCON2_INT4EP_LENGTH                   0x00000001

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_ALTIVT_POSITION                 0x0000000F
#define _INTCON2_ALTIVT_MASK                     0x00008000
#define _INTCON2_ALTIVT_LENGTH                   0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000000
#define _IFS0_INT0IF_MASK                        0x00000001
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000001
#define _IFS0_IC1IF_MASK                         0x00000002
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000002
#define _IFS0_OC1IF_MASK                         0x00000004
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_IC2IF_POSITION                     0x00000005
#define _IFS0_IC2IF_MASK                         0x00000020
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x00000006
#define _IFS0_OC2IF_MASK                         0x00000040
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000008
#define _IFS0_T3IF_MASK                          0x00000100
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_SPI1EIF_POSITION                   0x00000009
#define _IFS0_SPI1EIF_MASK                       0x00000200
#define _IFS0_SPI1EIF_LENGTH                     0x00000001

#define _IFS0_SPI1IF_POSITION                    0x0000000A
#define _IFS0_SPI1IF_MASK                        0x00000400
#define _IFS0_SPI1IF_LENGTH                      0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000000B
#define _IFS0_U1RXIF_MASK                        0x00000800
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000C
#define _IFS0_U1TXIF_MASK                        0x00001000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_ADIF_POSITION                      0x0000000D
#define _IFS0_ADIF_MASK                          0x00002000
#define _IFS0_ADIF_LENGTH                        0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_AC1IF_POSITION                     0x00000002
#define _IFS1_AC1IF_MASK                         0x00000004
#define _IFS1_AC1IF_LENGTH                       0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_OC3IF_POSITION                     0x00000009
#define _IFS1_OC3IF_MASK                         0x00000200
#define _IFS1_OC3IF_LENGTH                       0x00000001

#define _IFS1_OC4IF_POSITION                     0x0000000A
#define _IFS1_OC4IF_MASK                         0x00000400
#define _IFS1_OC4IF_LENGTH                       0x00000001

#define _IFS1_T4IF_POSITION                      0x0000000B
#define _IFS1_T4IF_MASK                          0x00000800
#define _IFS1_T4IF_LENGTH                        0x00000001

#define _IFS1_T5IF_POSITION                      0x0000000C
#define _IFS1_T5IF_MASK                          0x00001000
#define _IFS1_T5IF_LENGTH                        0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_U2RXIF_POSITION                    0x0000000E
#define _IFS1_U2RXIF_MASK                        0x00004000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000F
#define _IFS1_U2TXIF_MASK                        0x00008000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS2_SPI2EIF_POSITION                   0x00000000
#define _IFS2_SPI2EIF_MASK                       0x00000001
#define _IFS2_SPI2EIF_LENGTH                     0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS2_IC4IF_POSITION                     0x00000006
#define _IFS2_IC4IF_MASK                         0x00000040
#define _IFS2_IC4IF_LENGTH                       0x00000001

#define _IFS3_SI2C2IF_POSITION                   0x00000001
#define _IFS3_SI2C2IF_MASK                       0x00000002
#define _IFS3_SI2C2IF_LENGTH                     0x00000001

#define _IFS3_MI2C2IF_POSITION                   0x00000002
#define _IFS3_MI2C2IF_MASK                       0x00000004
#define _IFS3_MI2C2IF_LENGTH                     0x00000001

#define _IFS3_INT3IF_POSITION                    0x00000005
#define _IFS3_INT3IF_MASK                        0x00000020
#define _IFS3_INT3IF_LENGTH                      0x00000001

#define _IFS3_INT4IF_POSITION                    0x00000006
#define _IFS3_INT4IF_MASK                        0x00000040
#define _IFS3_INT4IF_LENGTH                      0x00000001

#define _IFS3_PSEMIF_POSITION                    0x00000009
#define _IFS3_PSEMIF_MASK                        0x00000200
#define _IFS3_PSEMIF_LENGTH                      0x00000001

#define _IFS3_QEI1IF_POSITION                    0x0000000A
#define _IFS3_QEI1IF_MASK                        0x00000400
#define _IFS3_QEI1IF_LENGTH                      0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_U2EIF_POSITION                     0x00000002
#define _IFS4_U2EIF_MASK                         0x00000004
#define _IFS4_U2EIF_LENGTH                       0x00000001

#define _IFS4_PSESMIF_POSITION                   0x00000009
#define _IFS4_PSESMIF_MASK                       0x00000200
#define _IFS4_PSESMIF_LENGTH                     0x00000001

#define _IFS4_QEI2IF_POSITION                    0x0000000B
#define _IFS4_QEI2IF_MASK                        0x00000800
#define _IFS4_QEI2IF_LENGTH                      0x00000001

#define _IFS5_ADCP8IF_POSITION                   0x00000001
#define _IFS5_ADCP8IF_MASK                       0x00000002
#define _IFS5_ADCP8IF_LENGTH                     0x00000001

#define _IFS5_ADCP12IF_POSITION                  0x0000000D
#define _IFS5_ADCP12IF_MASK                      0x00002000
#define _IFS5_ADCP12IF_LENGTH                    0x00000001

#define _IFS5_PWM1IF_POSITION                    0x0000000E
#define _IFS5_PWM1IF_MASK                        0x00004000
#define _IFS5_PWM1IF_LENGTH                      0x00000001

#define _IFS5_PWM2IF_POSITION                    0x0000000F
#define _IFS5_PWM2IF_MASK                        0x00008000
#define _IFS5_PWM2IF_LENGTH                      0x00000001

#define _IFS6_PWM3IF_POSITION                    0x00000000
#define _IFS6_PWM3IF_MASK                        0x00000001
#define _IFS6_PWM3IF_LENGTH                      0x00000001

#define _IFS6_PWM4IF_POSITION                    0x00000001
#define _IFS6_PWM4IF_MASK                        0x00000002
#define _IFS6_PWM4IF_LENGTH                      0x00000001

#define _IFS6_PWM5IF_POSITION                    0x00000002
#define _IFS6_PWM5IF_MASK                        0x00000004
#define _IFS6_PWM5IF_LENGTH                      0x00000001

#define _IFS6_PWM6IF_POSITION                    0x00000003
#define _IFS6_PWM6IF_MASK                        0x00000008
#define _IFS6_PWM6IF_LENGTH                      0x00000001

#define _IFS6_PWM7IF_POSITION                    0x00000004
#define _IFS6_PWM7IF_MASK                        0x00000010
#define _IFS6_PWM7IF_LENGTH                      0x00000001

#define _IFS6_PWM8IF_POSITION                    0x00000005
#define _IFS6_PWM8IF_MASK                        0x00000020
#define _IFS6_PWM8IF_LENGTH                      0x00000001

#define _IFS6_AC2IF_POSITION                     0x00000007
#define _IFS6_AC2IF_MASK                         0x00000080
#define _IFS6_AC2IF_LENGTH                       0x00000001

#define _IFS6_AC3IF_POSITION                     0x00000008
#define _IFS6_AC3IF_MASK                         0x00000100
#define _IFS6_AC3IF_LENGTH                       0x00000001

#define _IFS6_AC4IF_POSITION                     0x00000009
#define _IFS6_AC4IF_MASK                         0x00000200
#define _IFS6_AC4IF_LENGTH                       0x00000001

#define _IFS6_ADCP0IF_POSITION                   0x0000000E
#define _IFS6_ADCP0IF_MASK                       0x00004000
#define _IFS6_ADCP0IF_LENGTH                     0x00000001

#define _IFS6_ADCP1IF_POSITION                   0x0000000F
#define _IFS6_ADCP1IF_MASK                       0x00008000
#define _IFS6_ADCP1IF_LENGTH                     0x00000001

#define _IFS7_ADCP2IF_POSITION                   0x00000000
#define _IFS7_ADCP2IF_MASK                       0x00000001
#define _IFS7_ADCP2IF_LENGTH                     0x00000001

#define _IFS7_ADCP3IF_POSITION                   0x00000001
#define _IFS7_ADCP3IF_MASK                       0x00000002
#define _IFS7_ADCP3IF_LENGTH                     0x00000001

#define _IFS7_ADCP4IF_POSITION                   0x00000002
#define _IFS7_ADCP4IF_MASK                       0x00000004
#define _IFS7_ADCP4IF_LENGTH                     0x00000001

#define _IFS7_ADCP5IF_POSITION                   0x00000003
#define _IFS7_ADCP5IF_MASK                       0x00000008
#define _IFS7_ADCP5IF_LENGTH                     0x00000001

#define _IFS7_ADCP6IF_POSITION                   0x00000004
#define _IFS7_ADCP6IF_MASK                       0x00000010
#define _IFS7_ADCP6IF_LENGTH                     0x00000001

#define _IFS7_ADCP7IF_POSITION                   0x00000005
#define _IFS7_ADCP7IF_MASK                       0x00000020
#define _IFS7_ADCP7IF_LENGTH                     0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000001
#define _IEC0_IC1IE_MASK                         0x00000002
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000002
#define _IEC0_OC1IE_MASK                         0x00000004
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_IC2IE_POSITION                     0x00000005
#define _IEC0_IC2IE_MASK                         0x00000020
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x00000006
#define _IEC0_OC2IE_MASK                         0x00000040
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000008
#define _IEC0_T3IE_MASK                          0x00000100
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_SPI1EIE_POSITION                   0x00000009
#define _IEC0_SPI1EIE_MASK                       0x00000200
#define _IEC0_SPI1EIE_LENGTH                     0x00000001

#define _IEC0_SPI1IE_POSITION                    0x0000000A
#define _IEC0_SPI1IE_MASK                        0x00000400
#define _IEC0_SPI1IE_LENGTH                      0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000000B
#define _IEC0_U1RXIE_MASK                        0x00000800
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000C
#define _IEC0_U1TXIE_MASK                        0x00001000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_ADIE_POSITION                      0x0000000D
#define _IEC0_ADIE_MASK                          0x00002000
#define _IEC0_ADIE_LENGTH                        0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_AC1IE_POSITION                     0x00000002
#define _IEC1_AC1IE_MASK                         0x00000004
#define _IEC1_AC1IE_LENGTH                       0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_OC3IE_POSITION                     0x00000009
#define _IEC1_OC3IE_MASK                         0x00000200
#define _IEC1_OC3IE_LENGTH                       0x00000001

#define _IEC1_OC4IE_POSITION                     0x0000000A
#define _IEC1_OC4IE_MASK                         0x00000400
#define _IEC1_OC4IE_LENGTH                       0x00000001

#define _IEC1_T4IE_POSITION                      0x0000000B
#define _IEC1_T4IE_MASK                          0x00000800
#define _IEC1_T4IE_LENGTH                        0x00000001

#define _IEC1_T5IE_POSITION                      0x0000000C
#define _IEC1_T5IE_MASK                          0x00001000
#define _IEC1_T5IE_LENGTH                        0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_U2RXIE_POSITION                    0x0000000E
#define _IEC1_U2RXIE_MASK                        0x00004000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000F
#define _IEC1_U2TXIE_MASK                        0x00008000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC2_SPI2EIE_POSITION                   0x00000000
#define _IEC2_SPI2EIE_MASK                       0x00000001
#define _IEC2_SPI2EIE_LENGTH                     0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC2_IC4IE_POSITION                     0x00000006
#define _IEC2_IC4IE_MASK                         0x00000040
#define _IEC2_IC4IE_LENGTH                       0x00000001

#define _IEC3_SI2C2IE_POSITION                   0x00000001
#define _IEC3_SI2C2IE_MASK                       0x00000002
#define _IEC3_SI2C2IE_LENGTH                     0x00000001

#define _IEC3_MI2C2IE_POSITION                   0x00000002
#define _IEC3_MI2C2IE_MASK                       0x00000004
#define _IEC3_MI2C2IE_LENGTH                     0x00000001

#define _IEC3_INT3IE_POSITION                    0x00000005
#define _IEC3_INT3IE_MASK                        0x00000020
#define _IEC3_INT3IE_LENGTH                      0x00000001

#define _IEC3_INT4IE_POSITION                    0x00000006
#define _IEC3_INT4IE_MASK                        0x00000040
#define _IEC3_INT4IE_LENGTH                      0x00000001

#define _IEC3_PSEMIE_POSITION                    0x00000009
#define _IEC3_PSEMIE_MASK                        0x00000200
#define _IEC3_PSEMIE_LENGTH                      0x00000001

#define _IEC3_QEI1IE_POSITION                    0x0000000A
#define _IEC3_QEI1IE_MASK                        0x00000400
#define _IEC3_QEI1IE_LENGTH                      0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_U2EIE_POSITION                     0x00000002
#define _IEC4_U2EIE_MASK                         0x00000004
#define _IEC4_U2EIE_LENGTH                       0x00000001

#define _IEC4_PSESMIE_POSITION                   0x00000009
#define _IEC4_PSESMIE_MASK                       0x00000200
#define _IEC4_PSESMIE_LENGTH                     0x00000001

#define _IEC4_QEI2IE_POSITION                    0x0000000B
#define _IEC4_QEI2IE_MASK                        0x00000800
#define _IEC4_QEI2IE_LENGTH                      0x00000001

#define _IEC5_ADCP8IE_POSITION                   0x00000001
#define _IEC5_ADCP8IE_MASK                       0x00000002
#define _IEC5_ADCP8IE_LENGTH                     0x00000001

#define _IEC5_ADCP12IE_POSITION                  0x0000000D
#define _IEC5_ADCP12IE_MASK                      0x00002000
#define _IEC5_ADCP12IE_LENGTH                    0x00000001

#define _IEC5_PWM1IE_POSITION                    0x0000000E
#define _IEC5_PWM1IE_MASK                        0x00004000
#define _IEC5_PWM1IE_LENGTH                      0x00000001

#define _IEC5_PWM2IE_POSITION                    0x0000000F
#define _IEC5_PWM2IE_MASK                        0x00008000
#define _IEC5_PWM2IE_LENGTH                      0x00000001

#define _IEC6_PWM3IE_POSITION                    0x00000000
#define _IEC6_PWM3IE_MASK                        0x00000001
#define _IEC6_PWM3IE_LENGTH                      0x00000001

#define _IEC6_PWM4IE_POSITION                    0x00000001
#define _IEC6_PWM4IE_MASK                        0x00000002
#define _IEC6_PWM4IE_LENGTH                      0x00000001

#define _IEC6_PWM5IE_POSITION                    0x00000002
#define _IEC6_PWM5IE_MASK                        0x00000004
#define _IEC6_PWM5IE_LENGTH                      0x00000001

#define _IEC6_PWM6IE_POSITION                    0x00000003
#define _IEC6_PWM6IE_MASK                        0x00000008
#define _IEC6_PWM6IE_LENGTH                      0x00000001

#define _IEC6_PWM7IE_POSITION                    0x00000004
#define _IEC6_PWM7IE_MASK                        0x00000010
#define _IEC6_PWM7IE_LENGTH                      0x00000001

#define _IEC6_PWM8IE_POSITION                    0x00000005
#define _IEC6_PWM8IE_MASK                        0x00000020
#define _IEC6_PWM8IE_LENGTH                      0x00000001

#define _IEC6_AC2IE_POSITION                     0x00000007
#define _IEC6_AC2IE_MASK                         0x00000080
#define _IEC6_AC2IE_LENGTH                       0x00000001

#define _IEC6_AC3IE_POSITION                     0x00000008
#define _IEC6_AC3IE_MASK                         0x00000100
#define _IEC6_AC3IE_LENGTH                       0x00000001

#define _IEC6_AC4IE_POSITION                     0x00000009
#define _IEC6_AC4IE_MASK                         0x00000200
#define _IEC6_AC4IE_LENGTH                       0x00000001

#define _IEC6_ADCP0IE_POSITION                   0x0000000E
#define _IEC6_ADCP0IE_MASK                       0x00004000
#define _IEC6_ADCP0IE_LENGTH                     0x00000001

#define _IEC6_ADCP1IE_POSITION                   0x0000000F
#define _IEC6_ADCP1IE_MASK                       0x00008000
#define _IEC6_ADCP1IE_LENGTH                     0x00000001

#define _IEC7_ADCP2IE_POSITION                   0x00000000
#define _IEC7_ADCP2IE_MASK                       0x00000001
#define _IEC7_ADCP2IE_LENGTH                     0x00000001

#define _IEC7_ADCP3IE_POSITION                   0x00000001
#define _IEC7_ADCP3IE_MASK                       0x00000002
#define _IEC7_ADCP3IE_LENGTH                     0x00000001

#define _IEC7_ADCP4IE_POSITION                   0x00000002
#define _IEC7_ADCP4IE_MASK                       0x00000004
#define _IEC7_ADCP4IE_LENGTH                     0x00000001

#define _IEC7_ADCP5IE_POSITION                   0x00000003
#define _IEC7_ADCP5IE_MASK                       0x00000008
#define _IEC7_ADCP5IE_LENGTH                     0x00000001

#define _IEC7_ADCP6IE_POSITION                   0x00000004
#define _IEC7_ADCP6IE_MASK                       0x00000010
#define _IEC7_ADCP6IE_LENGTH                     0x00000001

#define _IEC7_ADCP7IE_POSITION                   0x00000005
#define _IEC7_ADCP7IE_MASK                       0x00000020
#define _IEC7_ADCP7IE_LENGTH                     0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_IC1IP_POSITION                     0x00000004
#define _IPC0_IC1IP_MASK                         0x00000070
#define _IPC0_IC1IP_LENGTH                       0x00000003

#define _IPC0_OC1IP_POSITION                     0x00000008
#define _IPC0_OC1IP_MASK                         0x00000700
#define _IPC0_OC1IP_LENGTH                       0x00000003

#define _IPC0_T1IP_POSITION                      0x0000000C
#define _IPC0_T1IP_MASK                          0x00007000
#define _IPC0_T1IP_LENGTH                        0x00000003

#define _IPC0_INT0IP0_POSITION                   0x00000000
#define _IPC0_INT0IP0_MASK                       0x00000001
#define _IPC0_INT0IP0_LENGTH                     0x00000001

#define _IPC0_INT0IP1_POSITION                   0x00000001
#define _IPC0_INT0IP1_MASK                       0x00000002
#define _IPC0_INT0IP1_LENGTH                     0x00000001

#define _IPC0_INT0IP2_POSITION                   0x00000002
#define _IPC0_INT0IP2_MASK                       0x00000004
#define _IPC0_INT0IP2_LENGTH                     0x00000001

#define _IPC0_IC1IP0_POSITION                    0x00000004
#define _IPC0_IC1IP0_MASK                        0x00000010
#define _IPC0_IC1IP0_LENGTH                      0x00000001

#define _IPC0_IC1IP1_POSITION                    0x00000005
#define _IPC0_IC1IP1_MASK                        0x00000020
#define _IPC0_IC1IP1_LENGTH                      0x00000001

#define _IPC0_IC1IP2_POSITION                    0x00000006
#define _IPC0_IC1IP2_MASK                        0x00000040
#define _IPC0_IC1IP2_LENGTH                      0x00000001

#define _IPC0_OC1IP0_POSITION                    0x00000008
#define _IPC0_OC1IP0_MASK                        0x00000100
#define _IPC0_OC1IP0_LENGTH                      0x00000001

#define _IPC0_OC1IP1_POSITION                    0x00000009
#define _IPC0_OC1IP1_MASK                        0x00000200
#define _IPC0_OC1IP1_LENGTH                      0x00000001

#define _IPC0_OC1IP2_POSITION                    0x0000000A
#define _IPC0_OC1IP2_MASK                        0x00000400
#define _IPC0_OC1IP2_LENGTH                      0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_IC2IP0_POSITION                    0x00000004
#define _IPC1_IC2IP0_MASK                        0x00000010
#define _IPC1_IC2IP0_LENGTH                      0x00000001

#define _IPC1_IC2IP1_POSITION                    0x00000005
#define _IPC1_IC2IP1_MASK                        0x00000020
#define _IPC1_IC2IP1_LENGTH                      0x00000001

#define _IPC1_IC2IP2_POSITION                    0x00000006
#define _IPC1_IC2IP2_MASK                        0x00000040
#define _IPC1_IC2IP2_LENGTH                      0x00000001

#define _IPC1_OC2IP0_POSITION                    0x00000008
#define _IPC1_OC2IP0_MASK                        0x00000100
#define _IPC1_OC2IP0_LENGTH                      0x00000001

#define _IPC1_OC2IP1_POSITION                    0x00000009
#define _IPC1_OC2IP1_MASK                        0x00000200
#define _IPC1_OC2IP1_LENGTH                      0x00000001

#define _IPC1_OC2IP2_POSITION                    0x0000000A
#define _IPC1_OC2IP2_MASK                        0x00000400
#define _IPC1_OC2IP2_LENGTH                      0x00000001

#define _IPC1_T2IP0_POSITION                     0x0000000C
#define _IPC1_T2IP0_MASK                         0x00001000
#define _IPC1_T2IP0_LENGTH                       0x00000001

#define _IPC1_T2IP1_POSITION                     0x0000000D
#define _IPC1_T2IP1_MASK                         0x00002000
#define _IPC1_T2IP1_LENGTH                       0x00000001

#define _IPC1_T2IP2_POSITION                     0x0000000E
#define _IPC1_T2IP2_MASK                         0x00004000
#define _IPC1_T2IP2_LENGTH                       0x00000001

#define _IPC2_T3IP_POSITION                      0x00000000
#define _IPC2_T3IP_MASK                          0x00000007
#define _IPC2_T3IP_LENGTH                        0x00000003

#define _IPC2_SPI1EIP_POSITION                   0x00000004
#define _IPC2_SPI1EIP_MASK                       0x00000070
#define _IPC2_SPI1EIP_LENGTH                     0x00000003

#define _IPC2_SPI1IP_POSITION                    0x00000008
#define _IPC2_SPI1IP_MASK                        0x00000700
#define _IPC2_SPI1IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x0000000C
#define _IPC2_U1RXIP_MASK                        0x00007000
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_T3IP0_POSITION                     0x00000000
#define _IPC2_T3IP0_MASK                         0x00000001
#define _IPC2_T3IP0_LENGTH                       0x00000001

#define _IPC2_T3IP1_POSITION                     0x00000001
#define _IPC2_T3IP1_MASK                         0x00000002
#define _IPC2_T3IP1_LENGTH                       0x00000001

#define _IPC2_T3IP2_POSITION                     0x00000002
#define _IPC2_T3IP2_MASK                         0x00000004
#define _IPC2_T3IP2_LENGTH                       0x00000001

#define _IPC2_SPI1EIP0_POSITION                  0x00000004
#define _IPC2_SPI1EIP0_MASK                      0x00000010
#define _IPC2_SPI1EIP0_LENGTH                    0x00000001

#define _IPC2_SPI1EIP1_POSITION                  0x00000005
#define _IPC2_SPI1EIP1_MASK                      0x00000020
#define _IPC2_SPI1EIP1_LENGTH                    0x00000001

#define _IPC2_SPI1EIP2_POSITION                  0x00000006
#define _IPC2_SPI1EIP2_MASK                      0x00000040
#define _IPC2_SPI1EIP2_LENGTH                    0x00000001

#define _IPC2_SPI1IP0_POSITION                   0x00000008
#define _IPC2_SPI1IP0_MASK                       0x00000100
#define _IPC2_SPI1IP0_LENGTH                     0x00000001

#define _IPC2_SPI1IP1_POSITION                   0x00000009
#define _IPC2_SPI1IP1_MASK                       0x00000200
#define _IPC2_SPI1IP1_LENGTH                     0x00000001

#define _IPC2_SPI1IP2_POSITION                   0x0000000A
#define _IPC2_SPI1IP2_MASK                       0x00000400
#define _IPC2_SPI1IP2_LENGTH                     0x00000001

#define _IPC2_U1RXIP0_POSITION                   0x0000000C
#define _IPC2_U1RXIP0_MASK                       0x00001000
#define _IPC2_U1RXIP0_LENGTH                     0x00000001

#define _IPC2_U1RXIP1_POSITION                   0x0000000D
#define _IPC2_U1RXIP1_MASK                       0x00002000
#define _IPC2_U1RXIP1_LENGTH                     0x00000001

#define _IPC2_U1RXIP2_POSITION                   0x0000000E
#define _IPC2_U1RXIP2_MASK                       0x00004000
#define _IPC2_U1RXIP2_LENGTH                     0x00000001

#define _IPC3_U1TXIP_POSITION                    0x00000000
#define _IPC3_U1TXIP_MASK                        0x00000007
#define _IPC3_U1TXIP_LENGTH                      0x00000003

#define _IPC3_ADIP_POSITION                      0x00000004
#define _IPC3_ADIP_MASK                          0x00000070
#define _IPC3_ADIP_LENGTH                        0x00000003

#define _IPC3_U1TXIP0_POSITION                   0x00000000
#define _IPC3_U1TXIP0_MASK                       0x00000001
#define _IPC3_U1TXIP0_LENGTH                     0x00000001

#define _IPC3_U1TXIP1_POSITION                   0x00000001
#define _IPC3_U1TXIP1_MASK                       0x00000002
#define _IPC3_U1TXIP1_LENGTH                     0x00000001

#define _IPC3_U1TXIP2_POSITION                   0x00000002
#define _IPC3_U1TXIP2_MASK                       0x00000004
#define _IPC3_U1TXIP2_LENGTH                     0x00000001

#define _IPC3_ADIP0_POSITION                     0x00000004
#define _IPC3_ADIP0_MASK                         0x00000010
#define _IPC3_ADIP0_LENGTH                       0x00000001

#define _IPC3_ADIP1_POSITION                     0x00000005
#define _IPC3_ADIP1_MASK                         0x00000020
#define _IPC3_ADIP1_LENGTH                       0x00000001

#define _IPC3_ADIP2_POSITION                     0x00000006
#define _IPC3_ADIP2_MASK                         0x00000040
#define _IPC3_ADIP2_LENGTH                       0x00000001

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

#define _IPC4_AC1IP_POSITION                     0x00000008
#define _IPC4_AC1IP_MASK                         0x00000700
#define _IPC4_AC1IP_LENGTH                       0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SI2C1IP0_POSITION                  0x00000000
#define _IPC4_SI2C1IP0_MASK                      0x00000001
#define _IPC4_SI2C1IP0_LENGTH                    0x00000001

#define _IPC4_SI2C1IP1_POSITION                  0x00000001
#define _IPC4_SI2C1IP1_MASK                      0x00000002
#define _IPC4_SI2C1IP1_LENGTH                    0x00000001

#define _IPC4_SI2C1IP2_POSITION                  0x00000002
#define _IPC4_SI2C1IP2_MASK                      0x00000004
#define _IPC4_SI2C1IP2_LENGTH                    0x00000001

#define _IPC4_MI2C1IP0_POSITION                  0x00000004
#define _IPC4_MI2C1IP0_MASK                      0x00000010
#define _IPC4_MI2C1IP0_LENGTH                    0x00000001

#define _IPC4_MI2C1IP1_POSITION                  0x00000005
#define _IPC4_MI2C1IP1_MASK                      0x00000020
#define _IPC4_MI2C1IP1_LENGTH                    0x00000001

#define _IPC4_MI2C1IP2_POSITION                  0x00000006
#define _IPC4_MI2C1IP2_MASK                      0x00000040
#define _IPC4_MI2C1IP2_LENGTH                    0x00000001

#define _IPC4_AC1IP0_POSITION                    0x00000008
#define _IPC4_AC1IP0_MASK                        0x00000100
#define _IPC4_AC1IP0_LENGTH                      0x00000001

#define _IPC4_AC1IP1_POSITION                    0x00000009
#define _IPC4_AC1IP1_MASK                        0x00000200
#define _IPC4_AC1IP1_LENGTH                      0x00000001

#define _IPC4_AC1IP2_POSITION                    0x0000000A
#define _IPC4_AC1IP2_MASK                        0x00000400
#define _IPC4_AC1IP2_LENGTH                      0x00000001

#define _IPC4_CNIP0_POSITION                     0x0000000C
#define _IPC4_CNIP0_MASK                         0x00001000
#define _IPC4_CNIP0_LENGTH                       0x00000001

#define _IPC4_CNIP1_POSITION                     0x0000000D
#define _IPC4_CNIP1_MASK                         0x00002000
#define _IPC4_CNIP1_LENGTH                       0x00000001

#define _IPC4_CNIP2_POSITION                     0x0000000E
#define _IPC4_CNIP2_MASK                         0x00004000
#define _IPC4_CNIP2_LENGTH                       0x00000001

#define _IPC5_INT1IP_POSITION                    0x00000000
#define _IPC5_INT1IP_MASK                        0x00000007
#define _IPC5_INT1IP_LENGTH                      0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

#define _IPC6_OC3IP0_POSITION                    0x00000004
#define _IPC6_OC3IP0_MASK                        0x00000010
#define _IPC6_OC3IP0_LENGTH                      0x00000001

#define _IPC6_OC3IP1_POSITION                    0x00000005
#define _IPC6_OC3IP1_MASK                        0x00000020
#define _IPC6_OC3IP1_LENGTH                      0x00000001

#define _IPC6_OC3IP2_POSITION                    0x00000006
#define _IPC6_OC3IP2_MASK                        0x00000040
#define _IPC6_OC3IP2_LENGTH                      0x00000001

#define _IPC6_OC4IP0_POSITION                    0x00000008
#define _IPC6_OC4IP0_MASK                        0x00000100
#define _IPC6_OC4IP0_LENGTH                      0x00000001

#define _IPC6_OC4IP1_POSITION                    0x00000009
#define _IPC6_OC4IP1_MASK                        0x00000200
#define _IPC6_OC4IP1_LENGTH                      0x00000001

#define _IPC6_OC4IP2_POSITION                    0x0000000A
#define _IPC6_OC4IP2_MASK                        0x00000400
#define _IPC6_OC4IP2_LENGTH                      0x00000001

#define _IPC6_T4IP0_POSITION                     0x0000000C
#define _IPC6_T4IP0_MASK                         0x00001000
#define _IPC6_T4IP0_LENGTH                       0x00000001

#define _IPC6_T4IP1_POSITION                     0x0000000D
#define _IPC6_T4IP1_MASK                         0x00002000
#define _IPC6_T4IP1_LENGTH                       0x00000001

#define _IPC6_T4IP2_POSITION                     0x0000000E
#define _IPC6_T4IP2_MASK                         0x00004000
#define _IPC6_T4IP2_LENGTH                       0x00000001

#define _IPC7_T5IP_POSITION                      0x00000000
#define _IPC7_T5IP_MASK                          0x00000007
#define _IPC7_T5IP_LENGTH                        0x00000003

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_U2RXIP_POSITION                    0x00000008
#define _IPC7_U2RXIP_MASK                        0x00000700
#define _IPC7_U2RXIP_LENGTH                      0x00000003

#define _IPC7_U2TXIP_POSITION                    0x0000000C
#define _IPC7_U2TXIP_MASK                        0x00007000
#define _IPC7_U2TXIP_LENGTH                      0x00000003

#define _IPC7_T5IP0_POSITION                     0x00000000
#define _IPC7_T5IP0_MASK                         0x00000001
#define _IPC7_T5IP0_LENGTH                       0x00000001

#define _IPC7_T5IP1_POSITION                     0x00000001
#define _IPC7_T5IP1_MASK                         0x00000002
#define _IPC7_T5IP1_LENGTH                       0x00000001

#define _IPC7_T5IP2_POSITION                     0x00000002
#define _IPC7_T5IP2_MASK                         0x00000004
#define _IPC7_T5IP2_LENGTH                       0x00000001

#define _IPC7_INT2IP0_POSITION                   0x00000004
#define _IPC7_INT2IP0_MASK                       0x00000010
#define _IPC7_INT2IP0_LENGTH                     0x00000001

#define _IPC7_INT2IP1_POSITION                   0x00000005
#define _IPC7_INT2IP1_MASK                       0x00000020
#define _IPC7_INT2IP1_LENGTH                     0x00000001

#define _IPC7_INT2IP2_POSITION                   0x00000006
#define _IPC7_INT2IP2_MASK                       0x00000040
#define _IPC7_INT2IP2_LENGTH                     0x00000001

#define _IPC7_U2RXIP0_POSITION                   0x00000008
#define _IPC7_U2RXIP0_MASK                       0x00000100
#define _IPC7_U2RXIP0_LENGTH                     0x00000001

#define _IPC7_U2RXIP1_POSITION                   0x00000009
#define _IPC7_U2RXIP1_MASK                       0x00000200
#define _IPC7_U2RXIP1_LENGTH                     0x00000001

#define _IPC7_U2RXIP2_POSITION                   0x0000000A
#define _IPC7_U2RXIP2_MASK                       0x00000400
#define _IPC7_U2RXIP2_LENGTH                     0x00000001

#define _IPC7_U2TXIP0_POSITION                   0x0000000C
#define _IPC7_U2TXIP0_MASK                       0x00001000
#define _IPC7_U2TXIP0_LENGTH                     0x00000001

#define _IPC7_U2TXIP1_POSITION                   0x0000000D
#define _IPC7_U2TXIP1_MASK                       0x00002000
#define _IPC7_U2TXIP1_LENGTH                     0x00000001

#define _IPC7_U2TXIP2_POSITION                   0x0000000E
#define _IPC7_U2TXIP2_MASK                       0x00004000
#define _IPC7_U2TXIP2_LENGTH                     0x00000001

#define _IPC8_SPI2EIP_POSITION                   0x00000000
#define _IPC8_SPI2EIP_MASK                       0x00000007
#define _IPC8_SPI2EIP_LENGTH                     0x00000003

#define _IPC8_SPI2IP_POSITION                    0x00000004
#define _IPC8_SPI2IP_MASK                        0x00000070
#define _IPC8_SPI2IP_LENGTH                      0x00000003

#define _IPC8_SPI2EIP0_POSITION                  0x00000000
#define _IPC8_SPI2EIP0_MASK                      0x00000001
#define _IPC8_SPI2EIP0_LENGTH                    0x00000001

#define _IPC8_SPI2EIP1_POSITION                  0x00000001
#define _IPC8_SPI2EIP1_MASK                      0x00000002
#define _IPC8_SPI2EIP1_LENGTH                    0x00000001

#define _IPC8_SPI2EIP2_POSITION                  0x00000002
#define _IPC8_SPI2EIP2_MASK                      0x00000004
#define _IPC8_SPI2EIP2_LENGTH                    0x00000001

#define _IPC8_SPI2IP0_POSITION                   0x00000004
#define _IPC8_SPI2IP0_MASK                       0x00000010
#define _IPC8_SPI2IP0_LENGTH                     0x00000001

#define _IPC8_SPI2IP1_POSITION                   0x00000005
#define _IPC8_SPI2IP1_MASK                       0x00000020
#define _IPC8_SPI2IP1_LENGTH                     0x00000001

#define _IPC8_SPI2IP2_POSITION                   0x00000006
#define _IPC8_SPI2IP2_MASK                       0x00000040
#define _IPC8_SPI2IP2_LENGTH                     0x00000001

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

#define _IPC9_IC3IP0_POSITION                    0x00000004
#define _IPC9_IC3IP0_MASK                        0x00000010
#define _IPC9_IC3IP0_LENGTH                      0x00000001

#define _IPC9_IC3IP1_POSITION                    0x00000005
#define _IPC9_IC3IP1_MASK                        0x00000020
#define _IPC9_IC3IP1_LENGTH                      0x00000001

#define _IPC9_IC3IP2_POSITION                    0x00000006
#define _IPC9_IC3IP2_MASK                        0x00000040
#define _IPC9_IC3IP2_LENGTH                      0x00000001

#define _IPC9_IC4IP0_POSITION                    0x00000008
#define _IPC9_IC4IP0_MASK                        0x00000100
#define _IPC9_IC4IP0_LENGTH                      0x00000001

#define _IPC9_IC4IP1_POSITION                    0x00000009
#define _IPC9_IC4IP1_MASK                        0x00000200
#define _IPC9_IC4IP1_LENGTH                      0x00000001

#define _IPC9_IC4IP2_POSITION                    0x0000000A
#define _IPC9_IC4IP2_MASK                        0x00000400
#define _IPC9_IC4IP2_LENGTH                      0x00000001

#define _IPC12_SI2C2IP_POSITION                  0x00000004
#define _IPC12_SI2C2IP_MASK                      0x00000070
#define _IPC12_SI2C2IP_LENGTH                    0x00000003

#define _IPC12_MI2C2IP_POSITION                  0x00000008
#define _IPC12_MI2C2IP_MASK                      0x00000700
#define _IPC12_MI2C2IP_LENGTH                    0x00000003

#define _IPC12_SI2C2IP0_POSITION                 0x00000004
#define _IPC12_SI2C2IP0_MASK                     0x00000010
#define _IPC12_SI2C2IP0_LENGTH                   0x00000001

#define _IPC12_SI2C2IP1_POSITION                 0x00000005
#define _IPC12_SI2C2IP1_MASK                     0x00000020
#define _IPC12_SI2C2IP1_LENGTH                   0x00000001

#define _IPC12_SI2C2IP2_POSITION                 0x00000006
#define _IPC12_SI2C2IP2_MASK                     0x00000040
#define _IPC12_SI2C2IP2_LENGTH                   0x00000001

#define _IPC12_MI2C2IP0_POSITION                 0x00000008
#define _IPC12_MI2C2IP0_MASK                     0x00000100
#define _IPC12_MI2C2IP0_LENGTH                   0x00000001

#define _IPC12_MI2C2IP1_POSITION                 0x00000009
#define _IPC12_MI2C2IP1_MASK                     0x00000200
#define _IPC12_MI2C2IP1_LENGTH                   0x00000001

#define _IPC12_MI2C2IP2_POSITION                 0x0000000A
#define _IPC12_MI2C2IP2_MASK                     0x00000400
#define _IPC12_MI2C2IP2_LENGTH                   0x00000001

#define _IPC13_INT3IP_POSITION                   0x00000004
#define _IPC13_INT3IP_MASK                       0x00000070
#define _IPC13_INT3IP_LENGTH                     0x00000003

#define _IPC13_INT4IP_POSITION                   0x00000008
#define _IPC13_INT4IP_MASK                       0x00000700
#define _IPC13_INT4IP_LENGTH                     0x00000003

#define _IPC13_INT3IP0_POSITION                  0x00000004
#define _IPC13_INT3IP0_MASK                      0x00000010
#define _IPC13_INT3IP0_LENGTH                    0x00000001

#define _IPC13_INT3IP1_POSITION                  0x00000005
#define _IPC13_INT3IP1_MASK                      0x00000020
#define _IPC13_INT3IP1_LENGTH                    0x00000001

#define _IPC13_INT3IP2_POSITION                  0x00000006
#define _IPC13_INT3IP2_MASK                      0x00000040
#define _IPC13_INT3IP2_LENGTH                    0x00000001

#define _IPC13_INT4IP0_POSITION                  0x00000008
#define _IPC13_INT4IP0_MASK                      0x00000100
#define _IPC13_INT4IP0_LENGTH                    0x00000001

#define _IPC13_INT4IP1_POSITION                  0x00000009
#define _IPC13_INT4IP1_MASK                      0x00000200
#define _IPC13_INT4IP1_LENGTH                    0x00000001

#define _IPC13_INT4IP2_POSITION                  0x0000000A
#define _IPC13_INT4IP2_MASK                      0x00000400
#define _IPC13_INT4IP2_LENGTH                    0x00000001

#define _IPC14_PSEMIP_POSITION                   0x00000004
#define _IPC14_PSEMIP_MASK                       0x00000070
#define _IPC14_PSEMIP_LENGTH                     0x00000003

#define _IPC14_QEI1IP_POSITION                   0x00000008
#define _IPC14_QEI1IP_MASK                       0x00000700
#define _IPC14_QEI1IP_LENGTH                     0x00000003

#define _IPC14_PSEMIP0_POSITION                  0x00000004
#define _IPC14_PSEMIP0_MASK                      0x00000010
#define _IPC14_PSEMIP0_LENGTH                    0x00000001

#define _IPC14_PSEMIP1_POSITION                  0x00000005
#define _IPC14_PSEMIP1_MASK                      0x00000020
#define _IPC14_PSEMIP1_LENGTH                    0x00000001

#define _IPC14_PSEMIP2_POSITION                  0x00000006
#define _IPC14_PSEMIP2_MASK                      0x00000040
#define _IPC14_PSEMIP2_LENGTH                    0x00000001

#define _IPC14_QEI1IP0_POSITION                  0x00000008
#define _IPC14_QEI1IP0_MASK                      0x00000100
#define _IPC14_QEI1IP0_LENGTH                    0x00000001

#define _IPC14_QEI1IP1_POSITION                  0x00000009
#define _IPC14_QEI1IP1_MASK                      0x00000200
#define _IPC14_QEI1IP1_LENGTH                    0x00000001

#define _IPC14_QEI1IP2_POSITION                  0x0000000A
#define _IPC14_QEI1IP2_MASK                      0x00000400
#define _IPC14_QEI1IP2_LENGTH                    0x00000001

#define _IPC16_U1EIP_POSITION                    0x00000004
#define _IPC16_U1EIP_MASK                        0x00000070
#define _IPC16_U1EIP_LENGTH                      0x00000003

#define _IPC16_U2EIP_POSITION                    0x00000008
#define _IPC16_U2EIP_MASK                        0x00000700
#define _IPC16_U2EIP_LENGTH                      0x00000003

#define _IPC16_U1EIP0_POSITION                   0x00000004
#define _IPC16_U1EIP0_MASK                       0x00000010
#define _IPC16_U1EIP0_LENGTH                     0x00000001

#define _IPC16_U1EIP1_POSITION                   0x00000005
#define _IPC16_U1EIP1_MASK                       0x00000020
#define _IPC16_U1EIP1_LENGTH                     0x00000001

#define _IPC16_U1EIP2_POSITION                   0x00000006
#define _IPC16_U1EIP2_MASK                       0x00000040
#define _IPC16_U1EIP2_LENGTH                     0x00000001

#define _IPC16_U2EIP0_POSITION                   0x00000008
#define _IPC16_U2EIP0_MASK                       0x00000100
#define _IPC16_U2EIP0_LENGTH                     0x00000001

#define _IPC16_U2EIP1_POSITION                   0x00000009
#define _IPC16_U2EIP1_MASK                       0x00000200
#define _IPC16_U2EIP1_LENGTH                     0x00000001

#define _IPC16_U2EIP2_POSITION                   0x0000000A
#define _IPC16_U2EIP2_MASK                       0x00000400
#define _IPC16_U2EIP2_LENGTH                     0x00000001

#define _IPC18_PSESMIP_POSITION                  0x00000004
#define _IPC18_PSESMIP_MASK                      0x00000070
#define _IPC18_PSESMIP_LENGTH                    0x00000003

#define _IPC18_QEI2IP_POSITION                   0x0000000C
#define _IPC18_QEI2IP_MASK                       0x00007000
#define _IPC18_QEI2IP_LENGTH                     0x00000003

#define _IPC18_PSESMIP0_POSITION                 0x00000004
#define _IPC18_PSESMIP0_MASK                     0x00000010
#define _IPC18_PSESMIP0_LENGTH                   0x00000001

#define _IPC18_PSESMIP1_POSITION                 0x00000005
#define _IPC18_PSESMIP1_MASK                     0x00000020
#define _IPC18_PSESMIP1_LENGTH                   0x00000001

#define _IPC18_PSESMIP2_POSITION                 0x00000006
#define _IPC18_PSESMIP2_MASK                     0x00000040
#define _IPC18_PSESMIP2_LENGTH                   0x00000001

#define _IPC18_QEI2IP0_POSITION                  0x0000000C
#define _IPC18_QEI2IP0_MASK                      0x00001000
#define _IPC18_QEI2IP0_LENGTH                    0x00000001

#define _IPC18_QEI2IP1_POSITION                  0x0000000D
#define _IPC18_QEI2IP1_MASK                      0x00002000
#define _IPC18_QEI2IP1_LENGTH                    0x00000001

#define _IPC18_QEI2IP2_POSITION                  0x0000000E
#define _IPC18_QEI2IP2_MASK                      0x00004000
#define _IPC18_QEI2IP2_LENGTH                    0x00000001

#define _IPC20_ADCP8IP_POSITION                  0x00000004
#define _IPC20_ADCP8IP_MASK                      0x00000070
#define _IPC20_ADCP8IP_LENGTH                    0x00000003

#define _IPC20_ADCP8IP0_POSITION                 0x00000004
#define _IPC20_ADCP8IP0_MASK                     0x00000010
#define _IPC20_ADCP8IP0_LENGTH                   0x00000001

#define _IPC20_ADCP8IP1_POSITION                 0x00000005
#define _IPC20_ADCP8IP1_MASK                     0x00000020
#define _IPC20_ADCP8IP1_LENGTH                   0x00000001

#define _IPC20_ADCP8IP2_POSITION                 0x00000006
#define _IPC20_ADCP8IP2_MASK                     0x00000040
#define _IPC20_ADCP8IP2_LENGTH                   0x00000001

#define _IPC21_ADCP12IP_POSITION                 0x00000004
#define _IPC21_ADCP12IP_MASK                     0x00000070
#define _IPC21_ADCP12IP_LENGTH                   0x00000003

#define _IPC21_ADCP12IP0_POSITION                0x00000004
#define _IPC21_ADCP12IP0_MASK                    0x00000010
#define _IPC21_ADCP12IP0_LENGTH                  0x00000001

#define _IPC21_ADCP12IP1_POSITION                0x00000005
#define _IPC21_ADCP12IP1_MASK                    0x00000020
#define _IPC21_ADCP12IP1_LENGTH                  0x00000001

#define _IPC21_ADCP12IP2_POSITION                0x00000006
#define _IPC21_ADCP12IP2_MASK                    0x00000040
#define _IPC21_ADCP12IP2_LENGTH                  0x00000001

#define _IPC23_PWM1IP_POSITION                   0x00000008
#define _IPC23_PWM1IP_MASK                       0x00000700
#define _IPC23_PWM1IP_LENGTH                     0x00000003

#define _IPC23_PWM2IP_POSITION                   0x0000000C
#define _IPC23_PWM2IP_MASK                       0x00007000
#define _IPC23_PWM2IP_LENGTH                     0x00000003

#define _IPC23_PWM1IP0_POSITION                  0x00000008
#define _IPC23_PWM1IP0_MASK                      0x00000100
#define _IPC23_PWM1IP0_LENGTH                    0x00000001

#define _IPC23_PWM1IP1_POSITION                  0x00000009
#define _IPC23_PWM1IP1_MASK                      0x00000200
#define _IPC23_PWM1IP1_LENGTH                    0x00000001

#define _IPC23_PWM1IP2_POSITION                  0x0000000A
#define _IPC23_PWM1IP2_MASK                      0x00000400
#define _IPC23_PWM1IP2_LENGTH                    0x00000001

#define _IPC23_PWM2IP0_POSITION                  0x0000000C
#define _IPC23_PWM2IP0_MASK                      0x00001000
#define _IPC23_PWM2IP0_LENGTH                    0x00000001

#define _IPC23_PWM2IP1_POSITION                  0x0000000D
#define _IPC23_PWM2IP1_MASK                      0x00002000
#define _IPC23_PWM2IP1_LENGTH                    0x00000001

#define _IPC23_PWM2IP2_POSITION                  0x0000000E
#define _IPC23_PWM2IP2_MASK                      0x00004000
#define _IPC23_PWM2IP2_LENGTH                    0x00000001

#define _IPC24_PWM3IP_POSITION                   0x00000000
#define _IPC24_PWM3IP_MASK                       0x00000007
#define _IPC24_PWM3IP_LENGTH                     0x00000003

#define _IPC24_PWM4IP_POSITION                   0x00000004
#define _IPC24_PWM4IP_MASK                       0x00000070
#define _IPC24_PWM4IP_LENGTH                     0x00000003

#define _IPC24_PWM5IP_POSITION                   0x00000008
#define _IPC24_PWM5IP_MASK                       0x00000700
#define _IPC24_PWM5IP_LENGTH                     0x00000003

#define _IPC24_PWM6IP_POSITION                   0x0000000C
#define _IPC24_PWM6IP_MASK                       0x00007000
#define _IPC24_PWM6IP_LENGTH                     0x00000003

#define _IPC24_PWM3IP0_POSITION                  0x00000000
#define _IPC24_PWM3IP0_MASK                      0x00000001
#define _IPC24_PWM3IP0_LENGTH                    0x00000001

#define _IPC24_PWM3IP1_POSITION                  0x00000001
#define _IPC24_PWM3IP1_MASK                      0x00000002
#define _IPC24_PWM3IP1_LENGTH                    0x00000001

#define _IPC24_PWM3IP2_POSITION                  0x00000002
#define _IPC24_PWM3IP2_MASK                      0x00000004
#define _IPC24_PWM3IP2_LENGTH                    0x00000001

#define _IPC24_PWM4IP0_POSITION                  0x00000004
#define _IPC24_PWM4IP0_MASK                      0x00000010
#define _IPC24_PWM4IP0_LENGTH                    0x00000001

#define _IPC24_PWM4IP1_POSITION                  0x00000005
#define _IPC24_PWM4IP1_MASK                      0x00000020
#define _IPC24_PWM4IP1_LENGTH                    0x00000001

#define _IPC24_PWM4IP2_POSITION                  0x00000006
#define _IPC24_PWM4IP2_MASK                      0x00000040
#define _IPC24_PWM4IP2_LENGTH                    0x00000001

#define _IPC24_PWM5IP0_POSITION                  0x00000008
#define _IPC24_PWM5IP0_MASK                      0x00000100
#define _IPC24_PWM5IP0_LENGTH                    0x00000001

#define _IPC24_PWM5IP1_POSITION                  0x00000009
#define _IPC24_PWM5IP1_MASK                      0x00000200
#define _IPC24_PWM5IP1_LENGTH                    0x00000001

#define _IPC24_PWM5IP2_POSITION                  0x0000000A
#define _IPC24_PWM5IP2_MASK                      0x00000400
#define _IPC24_PWM5IP2_LENGTH                    0x00000001

#define _IPC24_PWM6IP0_POSITION                  0x0000000C
#define _IPC24_PWM6IP0_MASK                      0x00001000
#define _IPC24_PWM6IP0_LENGTH                    0x00000001

#define _IPC24_PWM6IP1_POSITION                  0x0000000D
#define _IPC24_PWM6IP1_MASK                      0x00002000
#define _IPC24_PWM6IP1_LENGTH                    0x00000001

#define _IPC24_PWM6IP2_POSITION                  0x0000000E
#define _IPC24_PWM6IP2_MASK                      0x00004000
#define _IPC24_PWM6IP2_LENGTH                    0x00000001

#define _IPC25_PWM7IP_POSITION                   0x00000000
#define _IPC25_PWM7IP_MASK                       0x00000007
#define _IPC25_PWM7IP_LENGTH                     0x00000003

#define _IPC25_PWM8IP_POSITION                   0x00000004
#define _IPC25_PWM8IP_MASK                       0x00000070
#define _IPC25_PWM8IP_LENGTH                     0x00000003

#define _IPC25_AC2IP_POSITION                    0x0000000C
#define _IPC25_AC2IP_MASK                        0x00007000
#define _IPC25_AC2IP_LENGTH                      0x00000003

#define _IPC25_PWM7IP0_POSITION                  0x00000000
#define _IPC25_PWM7IP0_MASK                      0x00000001
#define _IPC25_PWM7IP0_LENGTH                    0x00000001

#define _IPC25_PWM7IP1_POSITION                  0x00000001
#define _IPC25_PWM7IP1_MASK                      0x00000002
#define _IPC25_PWM7IP1_LENGTH                    0x00000001

#define _IPC25_PWM7IP2_POSITION                  0x00000002
#define _IPC25_PWM7IP2_MASK                      0x00000004
#define _IPC25_PWM7IP2_LENGTH                    0x00000001

#define _IPC25_PWM8IP0_POSITION                  0x00000004
#define _IPC25_PWM8IP0_MASK                      0x00000010
#define _IPC25_PWM8IP0_LENGTH                    0x00000001

#define _IPC25_PWM8IP1_POSITION                  0x00000005
#define _IPC25_PWM8IP1_MASK                      0x00000020
#define _IPC25_PWM8IP1_LENGTH                    0x00000001

#define _IPC25_PWM8IP2_POSITION                  0x00000006
#define _IPC25_PWM8IP2_MASK                      0x00000040
#define _IPC25_PWM8IP2_LENGTH                    0x00000001

#define _IPC25_AC2IP0_POSITION                   0x0000000C
#define _IPC25_AC2IP0_MASK                       0x00001000
#define _IPC25_AC2IP0_LENGTH                     0x00000001

#define _IPC25_AC2IP1_POSITION                   0x0000000D
#define _IPC25_AC2IP1_MASK                       0x00002000
#define _IPC25_AC2IP1_LENGTH                     0x00000001

#define _IPC25_AC2IP2_POSITION                   0x0000000E
#define _IPC25_AC2IP2_MASK                       0x00004000
#define _IPC25_AC2IP2_LENGTH                     0x00000001

#define _IPC26_AC3IP_POSITION                    0x00000000
#define _IPC26_AC3IP_MASK                        0x00000007
#define _IPC26_AC3IP_LENGTH                      0x00000003

#define _IPC26_AC4IP_POSITION                    0x00000004
#define _IPC26_AC4IP_MASK                        0x00000070
#define _IPC26_AC4IP_LENGTH                      0x00000003

#define _IPC26_AC3IP0_POSITION                   0x00000000
#define _IPC26_AC3IP0_MASK                       0x00000001
#define _IPC26_AC3IP0_LENGTH                     0x00000001

#define _IPC26_AC3IP1_POSITION                   0x00000001
#define _IPC26_AC3IP1_MASK                       0x00000002
#define _IPC26_AC3IP1_LENGTH                     0x00000001

#define _IPC26_AC3IP2_POSITION                   0x00000002
#define _IPC26_AC3IP2_MASK                       0x00000004
#define _IPC26_AC3IP2_LENGTH                     0x00000001

#define _IPC26_AC4IP0_POSITION                   0x00000004
#define _IPC26_AC4IP0_MASK                       0x00000010
#define _IPC26_AC4IP0_LENGTH                     0x00000001

#define _IPC26_AC4IP1_POSITION                   0x00000005
#define _IPC26_AC4IP1_MASK                       0x00000020
#define _IPC26_AC4IP1_LENGTH                     0x00000001

#define _IPC26_AC4IP2_POSITION                   0x00000006
#define _IPC26_AC4IP2_MASK                       0x00000040
#define _IPC26_AC4IP2_LENGTH                     0x00000001

#define _IPC27_ADCP0IP_POSITION                  0x00000008
#define _IPC27_ADCP0IP_MASK                      0x00000700
#define _IPC27_ADCP0IP_LENGTH                    0x00000003

#define _IPC27_ADCP1IP_POSITION                  0x0000000C
#define _IPC27_ADCP1IP_MASK                      0x00007000
#define _IPC27_ADCP1IP_LENGTH                    0x00000003

#define _IPC27_ADCP0IP0_POSITION                 0x00000008
#define _IPC27_ADCP0IP0_MASK                     0x00000100
#define _IPC27_ADCP0IP0_LENGTH                   0x00000001

#define _IPC27_ADCP0IP1_POSITION                 0x00000009
#define _IPC27_ADCP0IP1_MASK                     0x00000200
#define _IPC27_ADCP0IP1_LENGTH                   0x00000001

#define _IPC27_ADCP0IP2_POSITION                 0x0000000A
#define _IPC27_ADCP0IP2_MASK                     0x00000400
#define _IPC27_ADCP0IP2_LENGTH                   0x00000001

#define _IPC27_ADCP1IP0_POSITION                 0x0000000C
#define _IPC27_ADCP1IP0_MASK                     0x00001000
#define _IPC27_ADCP1IP0_LENGTH                   0x00000001

#define _IPC27_ADCP1IP1_POSITION                 0x0000000D
#define _IPC27_ADCP1IP1_MASK                     0x00002000
#define _IPC27_ADCP1IP1_LENGTH                   0x00000001

#define _IPC27_ADCP1IP2_POSITION                 0x0000000E
#define _IPC27_ADCP1IP2_MASK                     0x00004000
#define _IPC27_ADCP1IP2_LENGTH                   0x00000001

#define _IPC28_ADCP2IP_POSITION                  0x00000000
#define _IPC28_ADCP2IP_MASK                      0x00000007
#define _IPC28_ADCP2IP_LENGTH                    0x00000003

#define _IPC28_ADCP3IP_POSITION                  0x00000004
#define _IPC28_ADCP3IP_MASK                      0x00000070
#define _IPC28_ADCP3IP_LENGTH                    0x00000003

#define _IPC28_ADCP4IP_POSITION                  0x00000008
#define _IPC28_ADCP4IP_MASK                      0x00000700
#define _IPC28_ADCP4IP_LENGTH                    0x00000003

#define _IPC28_ADCP5IP_POSITION                  0x0000000C
#define _IPC28_ADCP5IP_MASK                      0x00007000
#define _IPC28_ADCP5IP_LENGTH                    0x00000003

#define _IPC28_ADCP2IP0_POSITION                 0x00000000
#define _IPC28_ADCP2IP0_MASK                     0x00000001
#define _IPC28_ADCP2IP0_LENGTH                   0x00000001

#define _IPC28_ADCP2IP1_POSITION                 0x00000001
#define _IPC28_ADCP2IP1_MASK                     0x00000002
#define _IPC28_ADCP2IP1_LENGTH                   0x00000001

#define _IPC28_ADCP2IP2_POSITION                 0x00000002
#define _IPC28_ADCP2IP2_MASK                     0x00000004
#define _IPC28_ADCP2IP2_LENGTH                   0x00000001

#define _IPC28_ADCP3IP0_POSITION                 0x00000004
#define _IPC28_ADCP3IP0_MASK                     0x00000010
#define _IPC28_ADCP3IP0_LENGTH                   0x00000001

#define _IPC28_ADCP3IP1_POSITION                 0x00000005
#define _IPC28_ADCP3IP1_MASK                     0x00000020
#define _IPC28_ADCP3IP1_LENGTH                   0x00000001

#define _IPC28_ADCP3IP2_POSITION                 0x00000006
#define _IPC28_ADCP3IP2_MASK                     0x00000040
#define _IPC28_ADCP3IP2_LENGTH                   0x00000001

#define _IPC28_ADCP4IP0_POSITION                 0x00000008
#define _IPC28_ADCP4IP0_MASK                     0x00000100
#define _IPC28_ADCP4IP0_LENGTH                   0x00000001

#define _IPC28_ADCP4IP1_POSITION                 0x00000009
#define _IPC28_ADCP4IP1_MASK                     0x00000200
#define _IPC28_ADCP4IP1_LENGTH                   0x00000001

#define _IPC28_ADCP4IP2_POSITION                 0x0000000A
#define _IPC28_ADCP4IP2_MASK                     0x00000400
#define _IPC28_ADCP4IP2_LENGTH                   0x00000001

#define _IPC28_ADCP5IP0_POSITION                 0x0000000C
#define _IPC28_ADCP5IP0_MASK                     0x00001000
#define _IPC28_ADCP5IP0_LENGTH                   0x00000001

#define _IPC28_ADCP5IP1_POSITION                 0x0000000D
#define _IPC28_ADCP5IP1_MASK                     0x00002000
#define _IPC28_ADCP5IP1_LENGTH                   0x00000001

#define _IPC28_ADCP5IP2_POSITION                 0x0000000E
#define _IPC28_ADCP5IP2_MASK                     0x00004000
#define _IPC28_ADCP5IP2_LENGTH                   0x00000001

#define _IPC29_ADCP6IP_POSITION                  0x00000000
#define _IPC29_ADCP6IP_MASK                      0x00000007
#define _IPC29_ADCP6IP_LENGTH                    0x00000003

#define _IPC29_ADCP7IP_POSITION                  0x00000004
#define _IPC29_ADCP7IP_MASK                      0x00000070
#define _IPC29_ADCP7IP_LENGTH                    0x00000003

#define _IPC29_ADCP6IP0_POSITION                 0x00000000
#define _IPC29_ADCP6IP0_MASK                     0x00000001
#define _IPC29_ADCP6IP0_LENGTH                   0x00000001

#define _IPC29_ADCP6IP1_POSITION                 0x00000001
#define _IPC29_ADCP6IP1_MASK                     0x00000002
#define _IPC29_ADCP6IP1_LENGTH                   0x00000001

#define _IPC29_ADCP6IP2_POSITION                 0x00000002
#define _IPC29_ADCP6IP2_MASK                     0x00000004
#define _IPC29_ADCP6IP2_LENGTH                   0x00000001

#define _IPC29_ADCP7IP0_POSITION                 0x00000004
#define _IPC29_ADCP7IP0_MASK                     0x00000010
#define _IPC29_ADCP7IP0_LENGTH                   0x00000001

#define _IPC29_ADCP7IP1_POSITION                 0x00000005
#define _IPC29_ADCP7IP1_MASK                     0x00000020
#define _IPC29_ADCP7IP1_LENGTH                   0x00000001

#define _IPC29_ADCP7IP2_POSITION                 0x00000006
#define _IPC29_ADCP7IP2_MASK                     0x00000040
#define _IPC29_ADCP7IP2_LENGTH                   0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000007F
#define _INTTREG_VECNUM_LENGTH                   0x00000007

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VECNUM0_POSITION                0x00000000
#define _INTTREG_VECNUM0_MASK                    0x00000001
#define _INTTREG_VECNUM0_LENGTH                  0x00000001

#define _INTTREG_VECNUM1_POSITION                0x00000001
#define _INTTREG_VECNUM1_MASK                    0x00000002
#define _INTTREG_VECNUM1_LENGTH                  0x00000001

#define _INTTREG_VECNUM2_POSITION                0x00000002
#define _INTTREG_VECNUM2_MASK                    0x00000004
#define _INTTREG_VECNUM2_LENGTH                  0x00000001

#define _INTTREG_VECNUM3_POSITION                0x00000003
#define _INTTREG_VECNUM3_MASK                    0x00000008
#define _INTTREG_VECNUM3_LENGTH                  0x00000001

#define _INTTREG_VECNUM4_POSITION                0x00000004
#define _INTTREG_VECNUM4_MASK                    0x00000010
#define _INTTREG_VECNUM4_LENGTH                  0x00000001

#define _INTTREG_VECNUM5_POSITION                0x00000005
#define _INTTREG_VECNUM5_MASK                    0x00000020
#define _INTTREG_VECNUM5_LENGTH                  0x00000001

#define _INTTREG_VECNUM6_POSITION                0x00000006
#define _INTTREG_VECNUM6_MASK                    0x00000040
#define _INTTREG_VECNUM6_LENGTH                  0x00000001

#define _INTTREG_ILR0_POSITION                   0x00000008
#define _INTTREG_ILR0_MASK                       0x00000100
#define _INTTREG_ILR0_LENGTH                     0x00000001

#define _INTTREG_ILR1_POSITION                   0x00000009
#define _INTTREG_ILR1_MASK                       0x00000200
#define _INTTREG_ILR1_LENGTH                     0x00000001

#define _INTTREG_ILR2_POSITION                   0x0000000A
#define _INTTREG_ILR2_MASK                       0x00000400
#define _INTTREG_ILR2_LENGTH                     0x00000001

#define _INTTREG_ILR3_POSITION                   0x0000000B
#define _INTTREG_ILR3_MASK                       0x00000800
#define _INTTREG_ILR3_LENGTH                     0x00000001

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000006
#define _T1CON_TGATE_MASK                        0x00000040
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000030
#define _T2CON_TCKPS_LENGTH                      0x00000002

#define _T2CON_TGATE_POSITION                    0x00000006
#define _T2CON_TGATE_MASK                        0x00000040
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000030
#define _T3CON_TCKPS_LENGTH                      0x00000002

#define _T3CON_TGATE_POSITION                    0x00000006
#define _T3CON_TGATE_MASK                        0x00000040
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000030
#define _T4CON_TCKPS_LENGTH                      0x00000002

#define _T4CON_TGATE_POSITION                    0x00000006
#define _T4CON_TGATE_MASK                        0x00000040
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000030
#define _T5CON_TCKPS_LENGTH                      0x00000002

#define _T5CON_TGATE_POSITION                    0x00000006
#define _T5CON_TGATE_MASK                        0x00000040
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

#define _IC1CON_ICM_POSITION                     0x00000000
#define _IC1CON_ICM_MASK                         0x00000007
#define _IC1CON_ICM_LENGTH                       0x00000003

#define _IC1CON_ICBNE_POSITION                   0x00000003
#define _IC1CON_ICBNE_MASK                       0x00000008
#define _IC1CON_ICBNE_LENGTH                     0x00000001

#define _IC1CON_ICOV_POSITION                    0x00000004
#define _IC1CON_ICOV_MASK                        0x00000010
#define _IC1CON_ICOV_LENGTH                      0x00000001

#define _IC1CON_ICI_POSITION                     0x00000005
#define _IC1CON_ICI_MASK                         0x00000060
#define _IC1CON_ICI_LENGTH                       0x00000002

#define _IC1CON_ICTMR_POSITION                   0x00000007
#define _IC1CON_ICTMR_MASK                       0x00000080
#define _IC1CON_ICTMR_LENGTH                     0x00000001

#define _IC1CON_ICSIDL_POSITION                  0x0000000D
#define _IC1CON_ICSIDL_MASK                      0x00002000
#define _IC1CON_ICSIDL_LENGTH                    0x00000001

#define _IC1CON_ICM0_POSITION                    0x00000000
#define _IC1CON_ICM0_MASK                        0x00000001
#define _IC1CON_ICM0_LENGTH                      0x00000001

#define _IC1CON_ICM1_POSITION                    0x00000001
#define _IC1CON_ICM1_MASK                        0x00000002
#define _IC1CON_ICM1_LENGTH                      0x00000001

#define _IC1CON_ICM2_POSITION                    0x00000002
#define _IC1CON_ICM2_MASK                        0x00000004
#define _IC1CON_ICM2_LENGTH                      0x00000001

#define _IC1CON_ICI0_POSITION                    0x00000005
#define _IC1CON_ICI0_MASK                        0x00000020
#define _IC1CON_ICI0_LENGTH                      0x00000001

#define _IC1CON_ICI1_POSITION                    0x00000006
#define _IC1CON_ICI1_MASK                        0x00000040
#define _IC1CON_ICI1_LENGTH                      0x00000001

#define _IC2CON_ICM_POSITION                     0x00000000
#define _IC2CON_ICM_MASK                         0x00000007
#define _IC2CON_ICM_LENGTH                       0x00000003

#define _IC2CON_ICBNE_POSITION                   0x00000003
#define _IC2CON_ICBNE_MASK                       0x00000008
#define _IC2CON_ICBNE_LENGTH                     0x00000001

#define _IC2CON_ICOV_POSITION                    0x00000004
#define _IC2CON_ICOV_MASK                        0x00000010
#define _IC2CON_ICOV_LENGTH                      0x00000001

#define _IC2CON_ICI_POSITION                     0x00000005
#define _IC2CON_ICI_MASK                         0x00000060
#define _IC2CON_ICI_LENGTH                       0x00000002

#define _IC2CON_ICTMR_POSITION                   0x00000007
#define _IC2CON_ICTMR_MASK                       0x00000080
#define _IC2CON_ICTMR_LENGTH                     0x00000001

#define _IC2CON_ICSIDL_POSITION                  0x0000000D
#define _IC2CON_ICSIDL_MASK                      0x00002000
#define _IC2CON_ICSIDL_LENGTH                    0x00000001

#define _IC2CON_ICM0_POSITION                    0x00000000
#define _IC2CON_ICM0_MASK                        0x00000001
#define _IC2CON_ICM0_LENGTH                      0x00000001

#define _IC2CON_ICM1_POSITION                    0x00000001
#define _IC2CON_ICM1_MASK                        0x00000002
#define _IC2CON_ICM1_LENGTH                      0x00000001

#define _IC2CON_ICM2_POSITION                    0x00000002
#define _IC2CON_ICM2_MASK                        0x00000004
#define _IC2CON_ICM2_LENGTH                      0x00000001

#define _IC2CON_ICI0_POSITION                    0x00000005
#define _IC2CON_ICI0_MASK                        0x00000020
#define _IC2CON_ICI0_LENGTH                      0x00000001

#define _IC2CON_ICI1_POSITION                    0x00000006
#define _IC2CON_ICI1_MASK                        0x00000040
#define _IC2CON_ICI1_LENGTH                      0x00000001

#define _IC3CON_ICM_POSITION                     0x00000000
#define _IC3CON_ICM_MASK                         0x00000007
#define _IC3CON_ICM_LENGTH                       0x00000003

#define _IC3CON_ICBNE_POSITION                   0x00000003
#define _IC3CON_ICBNE_MASK                       0x00000008
#define _IC3CON_ICBNE_LENGTH                     0x00000001

#define _IC3CON_ICOV_POSITION                    0x00000004
#define _IC3CON_ICOV_MASK                        0x00000010
#define _IC3CON_ICOV_LENGTH                      0x00000001

#define _IC3CON_ICI_POSITION                     0x00000005
#define _IC3CON_ICI_MASK                         0x00000060
#define _IC3CON_ICI_LENGTH                       0x00000002

#define _IC3CON_ICTMR_POSITION                   0x00000007
#define _IC3CON_ICTMR_MASK                       0x00000080
#define _IC3CON_ICTMR_LENGTH                     0x00000001

#define _IC3CON_ICSIDL_POSITION                  0x0000000D
#define _IC3CON_ICSIDL_MASK                      0x00002000
#define _IC3CON_ICSIDL_LENGTH                    0x00000001

#define _IC3CON_ICM0_POSITION                    0x00000000
#define _IC3CON_ICM0_MASK                        0x00000001
#define _IC3CON_ICM0_LENGTH                      0x00000001

#define _IC3CON_ICM1_POSITION                    0x00000001
#define _IC3CON_ICM1_MASK                        0x00000002
#define _IC3CON_ICM1_LENGTH                      0x00000001

#define _IC3CON_ICM2_POSITION                    0x00000002
#define _IC3CON_ICM2_MASK                        0x00000004
#define _IC3CON_ICM2_LENGTH                      0x00000001

#define _IC3CON_ICI0_POSITION                    0x00000005
#define _IC3CON_ICI0_MASK                        0x00000020
#define _IC3CON_ICI0_LENGTH                      0x00000001

#define _IC3CON_ICI1_POSITION                    0x00000006
#define _IC3CON_ICI1_MASK                        0x00000040
#define _IC3CON_ICI1_LENGTH                      0x00000001

#define _IC4CON_ICM_POSITION                     0x00000000
#define _IC4CON_ICM_MASK                         0x00000007
#define _IC4CON_ICM_LENGTH                       0x00000003

#define _IC4CON_ICBNE_POSITION                   0x00000003
#define _IC4CON_ICBNE_MASK                       0x00000008
#define _IC4CON_ICBNE_LENGTH                     0x00000001

#define _IC4CON_ICOV_POSITION                    0x00000004
#define _IC4CON_ICOV_MASK                        0x00000010
#define _IC4CON_ICOV_LENGTH                      0x00000001

#define _IC4CON_ICI_POSITION                     0x00000005
#define _IC4CON_ICI_MASK                         0x00000060
#define _IC4CON_ICI_LENGTH                       0x00000002

#define _IC4CON_ICTMR_POSITION                   0x00000007
#define _IC4CON_ICTMR_MASK                       0x00000080
#define _IC4CON_ICTMR_LENGTH                     0x00000001

#define _IC4CON_ICSIDL_POSITION                  0x0000000D
#define _IC4CON_ICSIDL_MASK                      0x00002000
#define _IC4CON_ICSIDL_LENGTH                    0x00000001

#define _IC4CON_ICM0_POSITION                    0x00000000
#define _IC4CON_ICM0_MASK                        0x00000001
#define _IC4CON_ICM0_LENGTH                      0x00000001

#define _IC4CON_ICM1_POSITION                    0x00000001
#define _IC4CON_ICM1_MASK                        0x00000002
#define _IC4CON_ICM1_LENGTH                      0x00000001

#define _IC4CON_ICM2_POSITION                    0x00000002
#define _IC4CON_ICM2_MASK                        0x00000004
#define _IC4CON_ICM2_LENGTH                      0x00000001

#define _IC4CON_ICI0_POSITION                    0x00000005
#define _IC4CON_ICI0_MASK                        0x00000020
#define _IC4CON_ICI0_LENGTH                      0x00000001

#define _IC4CON_ICI1_POSITION                    0x00000006
#define _IC4CON_ICI1_MASK                        0x00000040
#define _IC4CON_ICI1_LENGTH                      0x00000001

#define _OC1CON_OCM_POSITION                     0x00000000
#define _OC1CON_OCM_MASK                         0x00000007
#define _OC1CON_OCM_LENGTH                       0x00000003

#define _OC1CON_OCTSEL_POSITION                  0x00000003
#define _OC1CON_OCTSEL_MASK                      0x00000008
#define _OC1CON_OCTSEL_LENGTH                    0x00000001

#define _OC1CON_OCFLT_POSITION                   0x00000004
#define _OC1CON_OCFLT_MASK                       0x00000010
#define _OC1CON_OCFLT_LENGTH                     0x00000001

#define _OC1CON_OCSIDL_POSITION                  0x0000000D
#define _OC1CON_OCSIDL_MASK                      0x00002000
#define _OC1CON_OCSIDL_LENGTH                    0x00000001

#define _OC1CON_OCM0_POSITION                    0x00000000
#define _OC1CON_OCM0_MASK                        0x00000001
#define _OC1CON_OCM0_LENGTH                      0x00000001

#define _OC1CON_OCM1_POSITION                    0x00000001
#define _OC1CON_OCM1_MASK                        0x00000002
#define _OC1CON_OCM1_LENGTH                      0x00000001

#define _OC1CON_OCM2_POSITION                    0x00000002
#define _OC1CON_OCM2_MASK                        0x00000004
#define _OC1CON_OCM2_LENGTH                      0x00000001

#define _OC2CON_OCM_POSITION                     0x00000000
#define _OC2CON_OCM_MASK                         0x00000007
#define _OC2CON_OCM_LENGTH                       0x00000003

#define _OC2CON_OCTSEL_POSITION                  0x00000003
#define _OC2CON_OCTSEL_MASK                      0x00000008
#define _OC2CON_OCTSEL_LENGTH                    0x00000001

#define _OC2CON_OCFLT_POSITION                   0x00000004
#define _OC2CON_OCFLT_MASK                       0x00000010
#define _OC2CON_OCFLT_LENGTH                     0x00000001

#define _OC2CON_OCSIDL_POSITION                  0x0000000D
#define _OC2CON_OCSIDL_MASK                      0x00002000
#define _OC2CON_OCSIDL_LENGTH                    0x00000001

#define _OC2CON_OCM0_POSITION                    0x00000000
#define _OC2CON_OCM0_MASK                        0x00000001
#define _OC2CON_OCM0_LENGTH                      0x00000001

#define _OC2CON_OCM1_POSITION                    0x00000001
#define _OC2CON_OCM1_MASK                        0x00000002
#define _OC2CON_OCM1_LENGTH                      0x00000001

#define _OC2CON_OCM2_POSITION                    0x00000002
#define _OC2CON_OCM2_MASK                        0x00000004
#define _OC2CON_OCM2_LENGTH                      0x00000001

#define _OC3CON_OCM_POSITION                     0x00000000
#define _OC3CON_OCM_MASK                         0x00000007
#define _OC3CON_OCM_LENGTH                       0x00000003

#define _OC3CON_OCTSEL_POSITION                  0x00000003
#define _OC3CON_OCTSEL_MASK                      0x00000008
#define _OC3CON_OCTSEL_LENGTH                    0x00000001

#define _OC3CON_OCFLT_POSITION                   0x00000004
#define _OC3CON_OCFLT_MASK                       0x00000010
#define _OC3CON_OCFLT_LENGTH                     0x00000001

#define _OC3CON_OCSIDL_POSITION                  0x0000000D
#define _OC3CON_OCSIDL_MASK                      0x00002000
#define _OC3CON_OCSIDL_LENGTH                    0x00000001

#define _OC3CON_OCM0_POSITION                    0x00000000
#define _OC3CON_OCM0_MASK                        0x00000001
#define _OC3CON_OCM0_LENGTH                      0x00000001

#define _OC3CON_OCM1_POSITION                    0x00000001
#define _OC3CON_OCM1_MASK                        0x00000002
#define _OC3CON_OCM1_LENGTH                      0x00000001

#define _OC3CON_OCM2_POSITION                    0x00000002
#define _OC3CON_OCM2_MASK                        0x00000004
#define _OC3CON_OCM2_LENGTH                      0x00000001

#define _OC4CON_OCM_POSITION                     0x00000000
#define _OC4CON_OCM_MASK                         0x00000007
#define _OC4CON_OCM_LENGTH                       0x00000003

#define _OC4CON_OCTSEL_POSITION                  0x00000003
#define _OC4CON_OCTSEL_MASK                      0x00000008
#define _OC4CON_OCTSEL_LENGTH                    0x00000001

#define _OC4CON_OCFLT_POSITION                   0x00000004
#define _OC4CON_OCFLT_MASK                       0x00000010
#define _OC4CON_OCFLT_LENGTH                     0x00000001

#define _OC4CON_OCSIDL_POSITION                  0x0000000D
#define _OC4CON_OCSIDL_MASK                      0x00002000
#define _OC4CON_OCSIDL_LENGTH                    0x00000001

#define _OC4CON_OCM0_POSITION                    0x00000000
#define _OC4CON_OCM0_MASK                        0x00000001
#define _OC4CON_OCM0_LENGTH                      0x00000001

#define _OC4CON_OCM1_POSITION                    0x00000001
#define _OC4CON_OCM1_MASK                        0x00000002
#define _OC4CON_OCM1_LENGTH                      0x00000001

#define _OC4CON_OCM2_POSITION                    0x00000002
#define _OC4CON_OCM2_MASK                        0x00000004
#define _OC4CON_OCM2_LENGTH                      0x00000001

#define _QEI1CON_UPDN_SRC_POSITION               0x00000000
#define _QEI1CON_UPDN_SRC_MASK                   0x00000001
#define _QEI1CON_UPDN_SRC_LENGTH                 0x00000001

#define _QEI1CON_TQCS_POSITION                   0x00000001
#define _QEI1CON_TQCS_MASK                       0x00000002
#define _QEI1CON_TQCS_LENGTH                     0x00000001

#define _QEI1CON_POSRES_POSITION                 0x00000002
#define _QEI1CON_POSRES_MASK                     0x00000004
#define _QEI1CON_POSRES_LENGTH                   0x00000001

#define _QEI1CON_TQCKPS_POSITION                 0x00000003
#define _QEI1CON_TQCKPS_MASK                     0x00000018
#define _QEI1CON_TQCKPS_LENGTH                   0x00000002

#define _QEI1CON_TQGATE_POSITION                 0x00000005
#define _QEI1CON_TQGATE_MASK                     0x00000020
#define _QEI1CON_TQGATE_LENGTH                   0x00000001

#define _QEI1CON_PCDOUT_POSITION                 0x00000006
#define _QEI1CON_PCDOUT_MASK                     0x00000040
#define _QEI1CON_PCDOUT_LENGTH                   0x00000001

#define _QEI1CON_SWPAB_POSITION                  0x00000007
#define _QEI1CON_SWPAB_MASK                      0x00000080
#define _QEI1CON_SWPAB_LENGTH                    0x00000001

#define _QEI1CON_QEIM_POSITION                   0x00000008
#define _QEI1CON_QEIM_MASK                       0x00000700
#define _QEI1CON_QEIM_LENGTH                     0x00000003

#define _QEI1CON_UPDN_POSITION                   0x0000000B
#define _QEI1CON_UPDN_MASK                       0x00000800
#define _QEI1CON_UPDN_LENGTH                     0x00000001

#define _QEI1CON_INDX_POSITION                   0x0000000C
#define _QEI1CON_INDX_MASK                       0x00001000
#define _QEI1CON_INDX_LENGTH                     0x00000001

#define _QEI1CON_QEISIDL_POSITION                0x0000000D
#define _QEI1CON_QEISIDL_MASK                    0x00002000
#define _QEI1CON_QEISIDL_LENGTH                  0x00000001

#define _QEI1CON_CNTERR_POSITION                 0x0000000F
#define _QEI1CON_CNTERR_MASK                     0x00008000
#define _QEI1CON_CNTERR_LENGTH                   0x00000001

#define _QEI1CON_TQCKPS0_POSITION                0x00000003
#define _QEI1CON_TQCKPS0_MASK                    0x00000008
#define _QEI1CON_TQCKPS0_LENGTH                  0x00000001

#define _QEI1CON_TQCKPS1_POSITION                0x00000004
#define _QEI1CON_TQCKPS1_MASK                    0x00000010
#define _QEI1CON_TQCKPS1_LENGTH                  0x00000001

#define _QEI1CON_QEIM0_POSITION                  0x00000008
#define _QEI1CON_QEIM0_MASK                      0x00000100
#define _QEI1CON_QEIM0_LENGTH                    0x00000001

#define _QEI1CON_QEIM1_POSITION                  0x00000009
#define _QEI1CON_QEIM1_MASK                      0x00000200
#define _QEI1CON_QEIM1_LENGTH                    0x00000001

#define _QEI1CON_QEIM2_POSITION                  0x0000000A
#define _QEI1CON_QEIM2_MASK                      0x00000400
#define _QEI1CON_QEIM2_LENGTH                    0x00000001

#define _DFLT1CON_QECK_POSITION                  0x00000004
#define _DFLT1CON_QECK_MASK                      0x00000070
#define _DFLT1CON_QECK_LENGTH                    0x00000003

#define _DFLT1CON_QEOUT_POSITION                 0x00000007
#define _DFLT1CON_QEOUT_MASK                     0x00000080
#define _DFLT1CON_QEOUT_LENGTH                   0x00000001

#define _DFLT1CON_CEID_POSITION                  0x00000008
#define _DFLT1CON_CEID_MASK                      0x00000100
#define _DFLT1CON_CEID_LENGTH                    0x00000001

#define _DFLT1CON_IMV_POSITION                   0x00000009
#define _DFLT1CON_IMV_MASK                       0x00000600
#define _DFLT1CON_IMV_LENGTH                     0x00000002

#define _DFLT1CON_QECK0_POSITION                 0x00000004
#define _DFLT1CON_QECK0_MASK                     0x00000010
#define _DFLT1CON_QECK0_LENGTH                   0x00000001

#define _DFLT1CON_QECK1_POSITION                 0x00000005
#define _DFLT1CON_QECK1_MASK                     0x00000020
#define _DFLT1CON_QECK1_LENGTH                   0x00000001

#define _DFLT1CON_QECK2_POSITION                 0x00000006
#define _DFLT1CON_QECK2_MASK                     0x00000040
#define _DFLT1CON_QECK2_LENGTH                   0x00000001

#define _DFLT1CON_IMV0_POSITION                  0x00000009
#define _DFLT1CON_IMV0_MASK                      0x00000200
#define _DFLT1CON_IMV0_LENGTH                    0x00000001

#define _DFLT1CON_IMV1_POSITION                  0x0000000A
#define _DFLT1CON_IMV1_MASK                      0x00000400
#define _DFLT1CON_IMV1_LENGTH                    0x00000001

#define _QEI2CON_UPDN_SRC_POSITION               0x00000000
#define _QEI2CON_UPDN_SRC_MASK                   0x00000001
#define _QEI2CON_UPDN_SRC_LENGTH                 0x00000001

#define _QEI2CON_TQCS_POSITION                   0x00000001
#define _QEI2CON_TQCS_MASK                       0x00000002
#define _QEI2CON_TQCS_LENGTH                     0x00000001

#define _QEI2CON_POSRES_POSITION                 0x00000002
#define _QEI2CON_POSRES_MASK                     0x00000004
#define _QEI2CON_POSRES_LENGTH                   0x00000001

#define _QEI2CON_TQCKPS_POSITION                 0x00000003
#define _QEI2CON_TQCKPS_MASK                     0x00000018
#define _QEI2CON_TQCKPS_LENGTH                   0x00000002

#define _QEI2CON_TQGATE_POSITION                 0x00000005
#define _QEI2CON_TQGATE_MASK                     0x00000020
#define _QEI2CON_TQGATE_LENGTH                   0x00000001

#define _QEI2CON_PCDOUT_POSITION                 0x00000006
#define _QEI2CON_PCDOUT_MASK                     0x00000040
#define _QEI2CON_PCDOUT_LENGTH                   0x00000001

#define _QEI2CON_SWPAB_POSITION                  0x00000007
#define _QEI2CON_SWPAB_MASK                      0x00000080
#define _QEI2CON_SWPAB_LENGTH                    0x00000001

#define _QEI2CON_QEIM_POSITION                   0x00000008
#define _QEI2CON_QEIM_MASK                       0x00000700
#define _QEI2CON_QEIM_LENGTH                     0x00000003

#define _QEI2CON_UPDN_POSITION                   0x0000000B
#define _QEI2CON_UPDN_MASK                       0x00000800
#define _QEI2CON_UPDN_LENGTH                     0x00000001

#define _QEI2CON_INDX_POSITION                   0x0000000C
#define _QEI2CON_INDX_MASK                       0x00001000
#define _QEI2CON_INDX_LENGTH                     0x00000001

#define _QEI2CON_QEISIDL_POSITION                0x0000000D
#define _QEI2CON_QEISIDL_MASK                    0x00002000
#define _QEI2CON_QEISIDL_LENGTH                  0x00000001

#define _QEI2CON_CNTERR_POSITION                 0x0000000F
#define _QEI2CON_CNTERR_MASK                     0x00008000
#define _QEI2CON_CNTERR_LENGTH                   0x00000001

#define _QEI2CON_TQCKPS0_POSITION                0x00000003
#define _QEI2CON_TQCKPS0_MASK                    0x00000008
#define _QEI2CON_TQCKPS0_LENGTH                  0x00000001

#define _QEI2CON_TQCKPS1_POSITION                0x00000004
#define _QEI2CON_TQCKPS1_MASK                    0x00000010
#define _QEI2CON_TQCKPS1_LENGTH                  0x00000001

#define _QEI2CON_QEIM0_POSITION                  0x00000008
#define _QEI2CON_QEIM0_MASK                      0x00000100
#define _QEI2CON_QEIM0_LENGTH                    0x00000001

#define _QEI2CON_QEIM1_POSITION                  0x00000009
#define _QEI2CON_QEIM1_MASK                      0x00000200
#define _QEI2CON_QEIM1_LENGTH                    0x00000001

#define _QEI2CON_QEIM2_POSITION                  0x0000000A
#define _QEI2CON_QEIM2_MASK                      0x00000400
#define _QEI2CON_QEIM2_LENGTH                    0x00000001

#define _DFLT2CON_QECK_POSITION                  0x00000004
#define _DFLT2CON_QECK_MASK                      0x00000070
#define _DFLT2CON_QECK_LENGTH                    0x00000003

#define _DFLT2CON_QEOUT_POSITION                 0x00000007
#define _DFLT2CON_QEOUT_MASK                     0x00000080
#define _DFLT2CON_QEOUT_LENGTH                   0x00000001

#define _DFLT2CON_CEID_POSITION                  0x00000008
#define _DFLT2CON_CEID_MASK                      0x00000100
#define _DFLT2CON_CEID_LENGTH                    0x00000001

#define _DFLT2CON_IMV_POSITION                   0x00000009
#define _DFLT2CON_IMV_MASK                       0x00000600
#define _DFLT2CON_IMV_LENGTH                     0x00000002

#define _DFLT2CON_QECK0_POSITION                 0x00000004
#define _DFLT2CON_QECK0_MASK                     0x00000010
#define _DFLT2CON_QECK0_LENGTH                   0x00000001

#define _DFLT2CON_QECK1_POSITION                 0x00000005
#define _DFLT2CON_QECK1_MASK                     0x00000020
#define _DFLT2CON_QECK1_LENGTH                   0x00000001

#define _DFLT2CON_QECK2_POSITION                 0x00000006
#define _DFLT2CON_QECK2_MASK                     0x00000040
#define _DFLT2CON_QECK2_LENGTH                   0x00000001

#define _DFLT2CON_IMV0_POSITION                  0x00000009
#define _DFLT2CON_IMV0_MASK                      0x00000200
#define _DFLT2CON_IMV0_LENGTH                    0x00000001

#define _DFLT2CON_IMV1_POSITION                  0x0000000A
#define _DFLT2CON_IMV1_MASK                      0x00000400
#define _DFLT2CON_IMV1_LENGTH                    0x00000001

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

#define _I2CCON_SEN_POSITION                     0x00000000
#define _I2CCON_SEN_MASK                         0x00000001
#define _I2CCON_SEN_LENGTH                       0x00000001

#define _I2CCON_RSEN_POSITION                    0x00000001
#define _I2CCON_RSEN_MASK                        0x00000002
#define _I2CCON_RSEN_LENGTH                      0x00000001

#define _I2CCON_PEN_POSITION                     0x00000002
#define _I2CCON_PEN_MASK                         0x00000004
#define _I2CCON_PEN_LENGTH                       0x00000001

#define _I2CCON_RCEN_POSITION                    0x00000003
#define _I2CCON_RCEN_MASK                        0x00000008
#define _I2CCON_RCEN_LENGTH                      0x00000001

#define _I2CCON_ACKEN_POSITION                   0x00000004
#define _I2CCON_ACKEN_MASK                       0x00000010
#define _I2CCON_ACKEN_LENGTH                     0x00000001

#define _I2CCON_ACKDT_POSITION                   0x00000005
#define _I2CCON_ACKDT_MASK                       0x00000020
#define _I2CCON_ACKDT_LENGTH                     0x00000001

#define _I2CCON_STREN_POSITION                   0x00000006
#define _I2CCON_STREN_MASK                       0x00000040
#define _I2CCON_STREN_LENGTH                     0x00000001

#define _I2CCON_GCEN_POSITION                    0x00000007
#define _I2CCON_GCEN_MASK                        0x00000080
#define _I2CCON_GCEN_LENGTH                      0x00000001

#define _I2CCON_SMEN_POSITION                    0x00000008
#define _I2CCON_SMEN_MASK                        0x00000100
#define _I2CCON_SMEN_LENGTH                      0x00000001

#define _I2CCON_DISSLW_POSITION                  0x00000009
#define _I2CCON_DISSLW_MASK                      0x00000200
#define _I2CCON_DISSLW_LENGTH                    0x00000001

#define _I2CCON_A10M_POSITION                    0x0000000A
#define _I2CCON_A10M_MASK                        0x00000400
#define _I2CCON_A10M_LENGTH                      0x00000001

#define _I2CCON_IPMIEN_POSITION                  0x0000000B
#define _I2CCON_IPMIEN_MASK                      0x00000800
#define _I2CCON_IPMIEN_LENGTH                    0x00000001

#define _I2CCON_SCLREL_POSITION                  0x0000000C
#define _I2CCON_SCLREL_MASK                      0x00001000
#define _I2CCON_SCLREL_LENGTH                    0x00000001

#define _I2CCON_I2CSIDL_POSITION                 0x0000000D
#define _I2CCON_I2CSIDL_MASK                     0x00002000
#define _I2CCON_I2CSIDL_LENGTH                   0x00000001

#define _I2CCON_I2CEN_POSITION                   0x0000000F
#define _I2CCON_I2CEN_MASK                       0x00008000
#define _I2CCON_I2CEN_LENGTH                     0x00000001

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2CSTAT_TBF_POSITION                    0x00000000
#define _I2CSTAT_TBF_MASK                        0x00000001
#define _I2CSTAT_TBF_LENGTH                      0x00000001

#define _I2CSTAT_RBF_POSITION                    0x00000001
#define _I2CSTAT_RBF_MASK                        0x00000002
#define _I2CSTAT_RBF_LENGTH                      0x00000001

#define _I2CSTAT_R_W_POSITION                    0x00000002
#define _I2CSTAT_R_W_MASK                        0x00000004
#define _I2CSTAT_R_W_LENGTH                      0x00000001

#define _I2CSTAT_S_POSITION                      0x00000003
#define _I2CSTAT_S_MASK                          0x00000008
#define _I2CSTAT_S_LENGTH                        0x00000001

#define _I2CSTAT_P_POSITION                      0x00000004
#define _I2CSTAT_P_MASK                          0x00000010
#define _I2CSTAT_P_LENGTH                        0x00000001

#define _I2CSTAT_D_A_POSITION                    0x00000005
#define _I2CSTAT_D_A_MASK                        0x00000020
#define _I2CSTAT_D_A_LENGTH                      0x00000001

#define _I2CSTAT_I2COV_POSITION                  0x00000006
#define _I2CSTAT_I2COV_MASK                      0x00000040
#define _I2CSTAT_I2COV_LENGTH                    0x00000001

#define _I2CSTAT_IWCOL_POSITION                  0x00000007
#define _I2CSTAT_IWCOL_MASK                      0x00000080
#define _I2CSTAT_IWCOL_LENGTH                    0x00000001

#define _I2CSTAT_ADD10_POSITION                  0x00000008
#define _I2CSTAT_ADD10_MASK                      0x00000100
#define _I2CSTAT_ADD10_LENGTH                    0x00000001

#define _I2CSTAT_GCSTAT_POSITION                 0x00000009
#define _I2CSTAT_GCSTAT_MASK                     0x00000200
#define _I2CSTAT_GCSTAT_LENGTH                   0x00000001

#define _I2CSTAT_BCL_POSITION                    0x0000000A
#define _I2CSTAT_BCL_MASK                        0x00000400
#define _I2CSTAT_BCL_LENGTH                      0x00000001

#define _I2CSTAT_TRSTAT_POSITION                 0x0000000E
#define _I2CSTAT_TRSTAT_MASK                     0x00004000
#define _I2CSTAT_TRSTAT_LENGTH                   0x00000001

#define _I2CSTAT_ACKSTAT_POSITION                0x0000000F
#define _I2CSTAT_ACKSTAT_MASK                    0x00008000
#define _I2CSTAT_ACKSTAT_LENGTH                  0x00000001

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_URXINV_POSITION                  0x00000004
#define _U1MODE_URXINV_MASK                      0x00000010
#define _U1MODE_URXINV_LENGTH                    0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000D
#define _U1STA_UTXISEL0_MASK                     0x00002000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000E
#define _U1STA_UTXINV_MASK                       0x00004000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1TXREG_U1TXREG_POSITION                0x00000000
#define _U1TXREG_U1TXREG_MASK                    0x000001FF
#define _U1TXREG_U1TXREG_LENGTH                  0x00000009

#define _U1TXREG_UTXREG0_POSITION                0x00000000
#define _U1TXREG_UTXREG0_MASK                    0x00000001
#define _U1TXREG_UTXREG0_LENGTH                  0x00000001

#define _U1TXREG_UTXREG1_POSITION                0x00000001
#define _U1TXREG_UTXREG1_MASK                    0x00000002
#define _U1TXREG_UTXREG1_LENGTH                  0x00000001

#define _U1TXREG_UTXREG2_POSITION                0x00000002
#define _U1TXREG_UTXREG2_MASK                    0x00000004
#define _U1TXREG_UTXREG2_LENGTH                  0x00000001

#define _U1TXREG_UTXREG3_POSITION                0x00000003
#define _U1TXREG_UTXREG3_MASK                    0x00000008
#define _U1TXREG_UTXREG3_LENGTH                  0x00000001

#define _U1TXREG_UTXREG4_POSITION                0x00000004
#define _U1TXREG_UTXREG4_MASK                    0x00000010
#define _U1TXREG_UTXREG4_LENGTH                  0x00000001

#define _U1TXREG_UTXREG5_POSITION                0x00000005
#define _U1TXREG_UTXREG5_MASK                    0x00000020
#define _U1TXREG_UTXREG5_LENGTH                  0x00000001

#define _U1TXREG_UTXREG6_POSITION                0x00000006
#define _U1TXREG_UTXREG6_MASK                    0x00000040
#define _U1TXREG_UTXREG6_LENGTH                  0x00000001

#define _U1TXREG_UTXREG7_POSITION                0x00000007
#define _U1TXREG_UTXREG7_MASK                    0x00000080
#define _U1TXREG_UTXREG7_LENGTH                  0x00000001

#define _U1TXREG_UTXREG8_POSITION                0x00000008
#define _U1TXREG_UTXREG8_MASK                    0x00000100
#define _U1TXREG_UTXREG8_LENGTH                  0x00000001

#define _U1RXREG_U1RXREG_POSITION                0x00000000
#define _U1RXREG_U1RXREG_MASK                    0x000001FF
#define _U1RXREG_U1RXREG_LENGTH                  0x00000009

#define _U1RXREG_URXREG0_POSITION                0x00000000
#define _U1RXREG_URXREG0_MASK                    0x00000001
#define _U1RXREG_URXREG0_LENGTH                  0x00000001

#define _U1RXREG_URXREG1_POSITION                0x00000001
#define _U1RXREG_URXREG1_MASK                    0x00000002
#define _U1RXREG_URXREG1_LENGTH                  0x00000001

#define _U1RXREG_URXREG2_POSITION                0x00000002
#define _U1RXREG_URXREG2_MASK                    0x00000004
#define _U1RXREG_URXREG2_LENGTH                  0x00000001

#define _U1RXREG_URXREG3_POSITION                0x00000003
#define _U1RXREG_URXREG3_MASK                    0x00000008
#define _U1RXREG_URXREG3_LENGTH                  0x00000001

#define _U1RXREG_URXREG4_POSITION                0x00000004
#define _U1RXREG_URXREG4_MASK                    0x00000010
#define _U1RXREG_URXREG4_LENGTH                  0x00000001

#define _U1RXREG_URXREG5_POSITION                0x00000005
#define _U1RXREG_URXREG5_MASK                    0x00000020
#define _U1RXREG_URXREG5_LENGTH                  0x00000001

#define _U1RXREG_URXREG6_POSITION                0x00000006
#define _U1RXREG_URXREG6_MASK                    0x00000040
#define _U1RXREG_URXREG6_LENGTH                  0x00000001

#define _U1RXREG_URXREG7_POSITION                0x00000007
#define _U1RXREG_URXREG7_MASK                    0x00000080
#define _U1RXREG_URXREG7_LENGTH                  0x00000001

#define _U1RXREG_URXREG8_POSITION                0x00000008
#define _U1RXREG_URXREG8_MASK                    0x00000100
#define _U1RXREG_URXREG8_LENGTH                  0x00000001

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_URXINV_POSITION                  0x00000004
#define _U2MODE_URXINV_MASK                      0x00000010
#define _U2MODE_URXINV_LENGTH                    0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000D
#define _U2STA_UTXISEL0_MASK                     0x00002000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000E
#define _U2STA_UTXINV_MASK                       0x00004000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2TXREG_U2TXREG_POSITION                0x00000000
#define _U2TXREG_U2TXREG_MASK                    0x000001FF
#define _U2TXREG_U2TXREG_LENGTH                  0x00000009

#define _U2TXREG_UTXREG0_POSITION                0x00000000
#define _U2TXREG_UTXREG0_MASK                    0x00000001
#define _U2TXREG_UTXREG0_LENGTH                  0x00000001

#define _U2TXREG_UTXREG1_POSITION                0x00000001
#define _U2TXREG_UTXREG1_MASK                    0x00000002
#define _U2TXREG_UTXREG1_LENGTH                  0x00000001

#define _U2TXREG_UTXREG2_POSITION                0x00000002
#define _U2TXREG_UTXREG2_MASK                    0x00000004
#define _U2TXREG_UTXREG2_LENGTH                  0x00000001

#define _U2TXREG_UTXREG3_POSITION                0x00000003
#define _U2TXREG_UTXREG3_MASK                    0x00000008
#define _U2TXREG_UTXREG3_LENGTH                  0x00000001

#define _U2TXREG_UTXREG4_POSITION                0x00000004
#define _U2TXREG_UTXREG4_MASK                    0x00000010
#define _U2TXREG_UTXREG4_LENGTH                  0x00000001

#define _U2TXREG_UTXREG5_POSITION                0x00000005
#define _U2TXREG_UTXREG5_MASK                    0x00000020
#define _U2TXREG_UTXREG5_LENGTH                  0x00000001

#define _U2TXREG_UTXREG6_POSITION                0x00000006
#define _U2TXREG_UTXREG6_MASK                    0x00000040
#define _U2TXREG_UTXREG6_LENGTH                  0x00000001

#define _U2TXREG_UTXREG7_POSITION                0x00000007
#define _U2TXREG_UTXREG7_MASK                    0x00000080
#define _U2TXREG_UTXREG7_LENGTH                  0x00000001

#define _U2TXREG_UTXREG8_POSITION                0x00000008
#define _U2TXREG_UTXREG8_MASK                    0x00000100
#define _U2TXREG_UTXREG8_LENGTH                  0x00000001

#define _U2RXREG_U2RXREG_POSITION                0x00000000
#define _U2RXREG_U2RXREG_MASK                    0x000001FF
#define _U2RXREG_U2RXREG_LENGTH                  0x00000009

#define _U2RXREG_URXREG0_POSITION                0x00000000
#define _U2RXREG_URXREG0_MASK                    0x00000001
#define _U2RXREG_URXREG0_LENGTH                  0x00000001

#define _U2RXREG_URXREG1_POSITION                0x00000001
#define _U2RXREG_URXREG1_MASK                    0x00000002
#define _U2RXREG_URXREG1_LENGTH                  0x00000001

#define _U2RXREG_URXREG2_POSITION                0x00000002
#define _U2RXREG_URXREG2_MASK                    0x00000004
#define _U2RXREG_URXREG2_LENGTH                  0x00000001

#define _U2RXREG_URXREG3_POSITION                0x00000003
#define _U2RXREG_URXREG3_MASK                    0x00000008
#define _U2RXREG_URXREG3_LENGTH                  0x00000001

#define _U2RXREG_URXREG4_POSITION                0x00000004
#define _U2RXREG_URXREG4_MASK                    0x00000010
#define _U2RXREG_URXREG4_LENGTH                  0x00000001

#define _U2RXREG_URXREG5_POSITION                0x00000005
#define _U2RXREG_URXREG5_MASK                    0x00000020
#define _U2RXREG_URXREG5_LENGTH                  0x00000001

#define _U2RXREG_URXREG6_POSITION                0x00000006
#define _U2RXREG_URXREG6_MASK                    0x00000040
#define _U2RXREG_URXREG6_LENGTH                  0x00000001

#define _U2RXREG_URXREG7_POSITION                0x00000007
#define _U2RXREG_URXREG7_MASK                    0x00000080
#define _U2RXREG_URXREG7_LENGTH                  0x00000001

#define _U2RXREG_URXREG8_POSITION                0x00000008
#define _U2RXREG_URXREG8_MASK                    0x00000100
#define _U2RXREG_URXREG8_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

#define _SPI1CON1_PPRE_POSITION                  0x00000000
#define _SPI1CON1_PPRE_MASK                      0x00000003
#define _SPI1CON1_PPRE_LENGTH                    0x00000002

#define _SPI1CON1_SPRE_POSITION                  0x00000002
#define _SPI1CON1_SPRE_MASK                      0x0000001C
#define _SPI1CON1_SPRE_LENGTH                    0x00000003

#define _SPI1CON1_MSTEN_POSITION                 0x00000005
#define _SPI1CON1_MSTEN_MASK                     0x00000020
#define _SPI1CON1_MSTEN_LENGTH                   0x00000001

#define _SPI1CON1_CKP_POSITION                   0x00000006
#define _SPI1CON1_CKP_MASK                       0x00000040
#define _SPI1CON1_CKP_LENGTH                     0x00000001

#define _SPI1CON1_SSEN_POSITION                  0x00000007
#define _SPI1CON1_SSEN_MASK                      0x00000080
#define _SPI1CON1_SSEN_LENGTH                    0x00000001

#define _SPI1CON1_CKE_POSITION                   0x00000008
#define _SPI1CON1_CKE_MASK                       0x00000100
#define _SPI1CON1_CKE_LENGTH                     0x00000001

#define _SPI1CON1_SMP_POSITION                   0x00000009
#define _SPI1CON1_SMP_MASK                       0x00000200
#define _SPI1CON1_SMP_LENGTH                     0x00000001

#define _SPI1CON1_MODE16_POSITION                0x0000000A
#define _SPI1CON1_MODE16_MASK                    0x00000400
#define _SPI1CON1_MODE16_LENGTH                  0x00000001

#define _SPI1CON1_DISSDO_POSITION                0x0000000B
#define _SPI1CON1_DISSDO_MASK                    0x00000800
#define _SPI1CON1_DISSDO_LENGTH                  0x00000001

#define _SPI1CON1_DISSCK_POSITION                0x0000000C
#define _SPI1CON1_DISSCK_MASK                    0x00001000
#define _SPI1CON1_DISSCK_LENGTH                  0x00000001

#define _SPI1CON1_PPRE0_POSITION                 0x00000000
#define _SPI1CON1_PPRE0_MASK                     0x00000001
#define _SPI1CON1_PPRE0_LENGTH                   0x00000001

#define _SPI1CON1_PPRE1_POSITION                 0x00000001
#define _SPI1CON1_PPRE1_MASK                     0x00000002
#define _SPI1CON1_PPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE0_POSITION                 0x00000002
#define _SPI1CON1_SPRE0_MASK                     0x00000004
#define _SPI1CON1_SPRE0_LENGTH                   0x00000001

#define _SPI1CON1_SPRE1_POSITION                 0x00000003
#define _SPI1CON1_SPRE1_MASK                     0x00000008
#define _SPI1CON1_SPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE2_POSITION                 0x00000004
#define _SPI1CON1_SPRE2_MASK                     0x00000010
#define _SPI1CON1_SPRE2_LENGTH                   0x00000001

#define _SPI1CON2_FRMDLY_POSITION                0x00000001
#define _SPI1CON2_FRMDLY_MASK                    0x00000002
#define _SPI1CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI1CON2_FRMPOL_POSITION                0x0000000D
#define _SPI1CON2_FRMPOL_MASK                    0x00002000
#define _SPI1CON2_FRMPOL_LENGTH                  0x00000001

#define _SPI1CON2_SPIFSD_POSITION                0x0000000E
#define _SPI1CON2_SPIFSD_MASK                    0x00004000
#define _SPI1CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI1CON2_FRMEN_POSITION                 0x0000000F
#define _SPI1CON2_FRMEN_MASK                     0x00008000
#define _SPI1CON2_FRMEN_LENGTH                   0x00000001

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

#define _SPI2CON1_PPRE_POSITION                  0x00000000
#define _SPI2CON1_PPRE_MASK                      0x00000003
#define _SPI2CON1_PPRE_LENGTH                    0x00000002

#define _SPI2CON1_SPRE_POSITION                  0x00000002
#define _SPI2CON1_SPRE_MASK                      0x0000001C
#define _SPI2CON1_SPRE_LENGTH                    0x00000003

#define _SPI2CON1_MSTEN_POSITION                 0x00000005
#define _SPI2CON1_MSTEN_MASK                     0x00000020
#define _SPI2CON1_MSTEN_LENGTH                   0x00000001

#define _SPI2CON1_CKP_POSITION                   0x00000006
#define _SPI2CON1_CKP_MASK                       0x00000040
#define _SPI2CON1_CKP_LENGTH                     0x00000001

#define _SPI2CON1_SSEN_POSITION                  0x00000007
#define _SPI2CON1_SSEN_MASK                      0x00000080
#define _SPI2CON1_SSEN_LENGTH                    0x00000001

#define _SPI2CON1_CKE_POSITION                   0x00000008
#define _SPI2CON1_CKE_MASK                       0x00000100
#define _SPI2CON1_CKE_LENGTH                     0x00000001

#define _SPI2CON1_SMP_POSITION                   0x00000009
#define _SPI2CON1_SMP_MASK                       0x00000200
#define _SPI2CON1_SMP_LENGTH                     0x00000001

#define _SPI2CON1_MODE16_POSITION                0x0000000A
#define _SPI2CON1_MODE16_MASK                    0x00000400
#define _SPI2CON1_MODE16_LENGTH                  0x00000001

#define _SPI2CON1_DISSDO_POSITION                0x0000000B
#define _SPI2CON1_DISSDO_MASK                    0x00000800
#define _SPI2CON1_DISSDO_LENGTH                  0x00000001

#define _SPI2CON1_DISSCK_POSITION                0x0000000C
#define _SPI2CON1_DISSCK_MASK                    0x00001000
#define _SPI2CON1_DISSCK_LENGTH                  0x00000001

#define _SPI2CON1_PPRE0_POSITION                 0x00000000
#define _SPI2CON1_PPRE0_MASK                     0x00000001
#define _SPI2CON1_PPRE0_LENGTH                   0x00000001

#define _SPI2CON1_PPRE1_POSITION                 0x00000001
#define _SPI2CON1_PPRE1_MASK                     0x00000002
#define _SPI2CON1_PPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE0_POSITION                 0x00000002
#define _SPI2CON1_SPRE0_MASK                     0x00000004
#define _SPI2CON1_SPRE0_LENGTH                   0x00000001

#define _SPI2CON1_SPRE1_POSITION                 0x00000003
#define _SPI2CON1_SPRE1_MASK                     0x00000008
#define _SPI2CON1_SPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE2_POSITION                 0x00000004
#define _SPI2CON1_SPRE2_MASK                     0x00000010
#define _SPI2CON1_SPRE2_LENGTH                   0x00000001

#define _SPI2CON2_FRMDLY_POSITION                0x00000001
#define _SPI2CON2_FRMDLY_MASK                    0x00000002
#define _SPI2CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI2CON2_FRMPOL_POSITION                0x0000000D
#define _SPI2CON2_FRMPOL_MASK                    0x00002000
#define _SPI2CON2_FRMPOL_LENGTH                  0x00000001

#define _SPI2CON2_SPIFSD_POSITION                0x0000000E
#define _SPI2CON2_SPIFSD_MASK                    0x00004000
#define _SPI2CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI2CON2_FRMEN_POSITION                 0x0000000F
#define _SPI2CON2_FRMEN_MASK                     0x00008000
#define _SPI2CON2_FRMEN_LENGTH                   0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_TRISA10_POSITION                  0x0000000A
#define _TRISA_TRISA10_MASK                      0x00000400
#define _TRISA_TRISA10_LENGTH                    0x00000001

#define _TRISA_TRISA14_POSITION                  0x0000000E
#define _TRISA_TRISA14_MASK                      0x00004000
#define _TRISA_TRISA14_LENGTH                    0x00000001

#define _TRISA_TRISA15_POSITION                  0x0000000F
#define _TRISA_TRISA15_MASK                      0x00008000
#define _TRISA_TRISA15_LENGTH                    0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_RA10_POSITION                     0x0000000A
#define _PORTA_RA10_MASK                         0x00000400
#define _PORTA_RA10_LENGTH                       0x00000001

#define _PORTA_RA14_POSITION                     0x0000000E
#define _PORTA_RA14_MASK                         0x00004000
#define _PORTA_RA14_LENGTH                       0x00000001

#define _PORTA_RA15_POSITION                     0x0000000F
#define _PORTA_RA15_MASK                         0x00008000
#define _PORTA_RA15_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_LATA10_POSITION                    0x0000000A
#define _LATA_LATA10_MASK                        0x00000400
#define _LATA_LATA10_LENGTH                      0x00000001

#define _LATA_LATA14_POSITION                    0x0000000E
#define _LATA_LATA14_MASK                        0x00004000
#define _LATA_LATA14_LENGTH                      0x00000001

#define _LATA_LATA15_POSITION                    0x0000000F
#define _LATA_LATA15_MASK                        0x00008000
#define _LATA_LATA15_LENGTH                      0x00000001

#define _ODCA_ODCA9_POSITION                     0x00000009
#define _ODCA_ODCA9_MASK                         0x00000200
#define _ODCA_ODCA9_LENGTH                       0x00000001

#define _ODCA_ODCA10_POSITION                    0x0000000A
#define _ODCA_ODCA10_MASK                        0x00000400
#define _ODCA_ODCA10_LENGTH                      0x00000001

#define _ODCA_ODCA14_POSITION                    0x0000000E
#define _ODCA_ODCA14_MASK                        0x00004000
#define _ODCA_ODCA14_LENGTH                      0x00000001

#define _ODCA_ODCA15_POSITION                    0x0000000F
#define _ODCA_ODCA15_MASK                        0x00008000
#define _ODCA_ODCA15_LENGTH                      0x00000001

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC12_POSITION                  0x0000000C
#define _TRISC_TRISC12_MASK                      0x00001000
#define _TRISC_TRISC12_LENGTH                    0x00000001

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _TRISC_TRISC14_POSITION                  0x0000000E
#define _TRISC_TRISC14_MASK                      0x00004000
#define _TRISC_TRISC14_LENGTH                    0x00000001

#define _TRISC_TRISC15_POSITION                  0x0000000F
#define _TRISC_TRISC15_MASK                      0x00008000
#define _TRISC_TRISC15_LENGTH                    0x00000001

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC12_POSITION                     0x0000000C
#define _PORTC_RC12_MASK                         0x00001000
#define _PORTC_RC12_LENGTH                       0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _PORTC_RC14_POSITION                     0x0000000E
#define _PORTC_RC14_MASK                         0x00004000
#define _PORTC_RC14_LENGTH                       0x00000001

#define _PORTC_RC15_POSITION                     0x0000000F
#define _PORTC_RC15_MASK                         0x00008000
#define _PORTC_RC15_LENGTH                       0x00000001

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC12_POSITION                    0x0000000C
#define _LATC_LATC12_MASK                        0x00001000
#define _LATC_LATC12_LENGTH                      0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _LATC_LATC14_POSITION                    0x0000000E
#define _LATC_LATC14_MASK                        0x00004000
#define _LATC_LATC14_LENGTH                      0x00000001

#define _LATC_LATC15_POSITION                    0x0000000F
#define _LATC_LATC15_MASK                        0x00008000
#define _LATC_LATC15_LENGTH                      0x00000001

#define _TRISD_TRISD0_POSITION                   0x00000000
#define _TRISD_TRISD0_MASK                       0x00000001
#define _TRISD_TRISD0_LENGTH                     0x00000001

#define _TRISD_TRISD1_POSITION                   0x00000001
#define _TRISD_TRISD1_MASK                       0x00000002
#define _TRISD_TRISD1_LENGTH                     0x00000001

#define _TRISD_TRISD2_POSITION                   0x00000002
#define _TRISD_TRISD2_MASK                       0x00000004
#define _TRISD_TRISD2_LENGTH                     0x00000001

#define _TRISD_TRISD3_POSITION                   0x00000003
#define _TRISD_TRISD3_MASK                       0x00000008
#define _TRISD_TRISD3_LENGTH                     0x00000001

#define _TRISD_TRISD4_POSITION                   0x00000004
#define _TRISD_TRISD4_MASK                       0x00000010
#define _TRISD_TRISD4_LENGTH                     0x00000001

#define _TRISD_TRISD5_POSITION                   0x00000005
#define _TRISD_TRISD5_MASK                       0x00000020
#define _TRISD_TRISD5_LENGTH                     0x00000001

#define _TRISD_TRISD6_POSITION                   0x00000006
#define _TRISD_TRISD6_MASK                       0x00000040
#define _TRISD_TRISD6_LENGTH                     0x00000001

#define _TRISD_TRISD7_POSITION                   0x00000007
#define _TRISD_TRISD7_MASK                       0x00000080
#define _TRISD_TRISD7_LENGTH                     0x00000001

#define _TRISD_TRISD8_POSITION                   0x00000008
#define _TRISD_TRISD8_MASK                       0x00000100
#define _TRISD_TRISD8_LENGTH                     0x00000001

#define _TRISD_TRISD9_POSITION                   0x00000009
#define _TRISD_TRISD9_MASK                       0x00000200
#define _TRISD_TRISD9_LENGTH                     0x00000001

#define _TRISD_TRISD10_POSITION                  0x0000000A
#define _TRISD_TRISD10_MASK                      0x00000400
#define _TRISD_TRISD10_LENGTH                    0x00000001

#define _TRISD_TRISD11_POSITION                  0x0000000B
#define _TRISD_TRISD11_MASK                      0x00000800
#define _TRISD_TRISD11_LENGTH                    0x00000001

#define _TRISD_TRISD12_POSITION                  0x0000000C
#define _TRISD_TRISD12_MASK                      0x00001000
#define _TRISD_TRISD12_LENGTH                    0x00000001

#define _TRISD_TRISD13_POSITION                  0x0000000D
#define _TRISD_TRISD13_MASK                      0x00002000
#define _TRISD_TRISD13_LENGTH                    0x00000001

#define _TRISD_TRISD14_POSITION                  0x0000000E
#define _TRISD_TRISD14_MASK                      0x00004000
#define _TRISD_TRISD14_LENGTH                    0x00000001

#define _TRISD_TRISD15_POSITION                  0x0000000F
#define _TRISD_TRISD15_MASK                      0x00008000
#define _TRISD_TRISD15_LENGTH                    0x00000001

#define _PORTD_RD0_POSITION                      0x00000000
#define _PORTD_RD0_MASK                          0x00000001
#define _PORTD_RD0_LENGTH                        0x00000001

#define _PORTD_RD1_POSITION                      0x00000001
#define _PORTD_RD1_MASK                          0x00000002
#define _PORTD_RD1_LENGTH                        0x00000001

#define _PORTD_RD2_POSITION                      0x00000002
#define _PORTD_RD2_MASK                          0x00000004
#define _PORTD_RD2_LENGTH                        0x00000001

#define _PORTD_RD3_POSITION                      0x00000003
#define _PORTD_RD3_MASK                          0x00000008
#define _PORTD_RD3_LENGTH                        0x00000001

#define _PORTD_RD4_POSITION                      0x00000004
#define _PORTD_RD4_MASK                          0x00000010
#define _PORTD_RD4_LENGTH                        0x00000001

#define _PORTD_RD5_POSITION                      0x00000005
#define _PORTD_RD5_MASK                          0x00000020
#define _PORTD_RD5_LENGTH                        0x00000001

#define _PORTD_RD6_POSITION                      0x00000006
#define _PORTD_RD6_MASK                          0x00000040
#define _PORTD_RD6_LENGTH                        0x00000001

#define _PORTD_RD7_POSITION                      0x00000007
#define _PORTD_RD7_MASK                          0x00000080
#define _PORTD_RD7_LENGTH                        0x00000001

#define _PORTD_RD8_POSITION                      0x00000008
#define _PORTD_RD8_MASK                          0x00000100
#define _PORTD_RD8_LENGTH                        0x00000001

#define _PORTD_RD9_POSITION                      0x00000009
#define _PORTD_RD9_MASK                          0x00000200
#define _PORTD_RD9_LENGTH                        0x00000001

#define _PORTD_RD10_POSITION                     0x0000000A
#define _PORTD_RD10_MASK                         0x00000400
#define _PORTD_RD10_LENGTH                       0x00000001

#define _PORTD_RD11_POSITION                     0x0000000B
#define _PORTD_RD11_MASK                         0x00000800
#define _PORTD_RD11_LENGTH                       0x00000001

#define _PORTD_RD12_POSITION                     0x0000000C
#define _PORTD_RD12_MASK                         0x00001000
#define _PORTD_RD12_LENGTH                       0x00000001

#define _PORTD_RD13_POSITION                     0x0000000D
#define _PORTD_RD13_MASK                         0x00002000
#define _PORTD_RD13_LENGTH                       0x00000001

#define _PORTD_RD14_POSITION                     0x0000000E
#define _PORTD_RD14_MASK                         0x00004000
#define _PORTD_RD14_LENGTH                       0x00000001

#define _PORTD_RD15_POSITION                     0x0000000F
#define _PORTD_RD15_MASK                         0x00008000
#define _PORTD_RD15_LENGTH                       0x00000001

#define _LATD_LATD0_POSITION                     0x00000000
#define _LATD_LATD0_MASK                         0x00000001
#define _LATD_LATD0_LENGTH                       0x00000001

#define _LATD_LATD1_POSITION                     0x00000001
#define _LATD_LATD1_MASK                         0x00000002
#define _LATD_LATD1_LENGTH                       0x00000001

#define _LATD_LATD2_POSITION                     0x00000002
#define _LATD_LATD2_MASK                         0x00000004
#define _LATD_LATD2_LENGTH                       0x00000001

#define _LATD_LATD3_POSITION                     0x00000003
#define _LATD_LATD3_MASK                         0x00000008
#define _LATD_LATD3_LENGTH                       0x00000001

#define _LATD_LATD4_POSITION                     0x00000004
#define _LATD_LATD4_MASK                         0x00000010
#define _LATD_LATD4_LENGTH                       0x00000001

#define _LATD_LATD5_POSITION                     0x00000005
#define _LATD_LATD5_MASK                         0x00000020
#define _LATD_LATD5_LENGTH                       0x00000001

#define _LATD_LATD6_POSITION                     0x00000006
#define _LATD_LATD6_MASK                         0x00000040
#define _LATD_LATD6_LENGTH                       0x00000001

#define _LATD_LATD7_POSITION                     0x00000007
#define _LATD_LATD7_MASK                         0x00000080
#define _LATD_LATD7_LENGTH                       0x00000001

#define _LATD_LATD8_POSITION                     0x00000008
#define _LATD_LATD8_MASK                         0x00000100
#define _LATD_LATD8_LENGTH                       0x00000001

#define _LATD_LATD9_POSITION                     0x00000009
#define _LATD_LATD9_MASK                         0x00000200
#define _LATD_LATD9_LENGTH                       0x00000001

#define _LATD_LATD10_POSITION                    0x0000000A
#define _LATD_LATD10_MASK                        0x00000400
#define _LATD_LATD10_LENGTH                      0x00000001

#define _LATD_LATD11_POSITION                    0x0000000B
#define _LATD_LATD11_MASK                        0x00000800
#define _LATD_LATD11_LENGTH                      0x00000001

#define _LATD_LATD12_POSITION                    0x0000000C
#define _LATD_LATD12_MASK                        0x00001000
#define _LATD_LATD12_LENGTH                      0x00000001

#define _LATD_LATD13_POSITION                    0x0000000D
#define _LATD_LATD13_MASK                        0x00002000
#define _LATD_LATD13_LENGTH                      0x00000001

#define _LATD_LATD14_POSITION                    0x0000000E
#define _LATD_LATD14_MASK                        0x00004000
#define _LATD_LATD14_LENGTH                      0x00000001

#define _LATD_LATD15_POSITION                    0x0000000F
#define _LATD_LATD15_MASK                        0x00008000
#define _LATD_LATD15_LENGTH                      0x00000001

#define _ODCD_ODCD0_POSITION                     0x00000000
#define _ODCD_ODCD0_MASK                         0x00000001
#define _ODCD_ODCD0_LENGTH                       0x00000001

#define _ODCD_ODCD1_POSITION                     0x00000001
#define _ODCD_ODCD1_MASK                         0x00000002
#define _ODCD_ODCD1_LENGTH                       0x00000001

#define _ODCD_ODCD2_POSITION                     0x00000002
#define _ODCD_ODCD2_MASK                         0x00000004
#define _ODCD_ODCD2_LENGTH                       0x00000001

#define _ODCD_ODCD3_POSITION                     0x00000003
#define _ODCD_ODCD3_MASK                         0x00000008
#define _ODCD_ODCD3_LENGTH                       0x00000001

#define _ODCD_ODCD4_POSITION                     0x00000004
#define _ODCD_ODCD4_MASK                         0x00000010
#define _ODCD_ODCD4_LENGTH                       0x00000001

#define _ODCD_ODCD5_POSITION                     0x00000005
#define _ODCD_ODCD5_MASK                         0x00000020
#define _ODCD_ODCD5_LENGTH                       0x00000001

#define _ODCD_ODCD6_POSITION                     0x00000006
#define _ODCD_ODCD6_MASK                         0x00000040
#define _ODCD_ODCD6_LENGTH                       0x00000001

#define _ODCD_ODCD7_POSITION                     0x00000007
#define _ODCD_ODCD7_MASK                         0x00000080
#define _ODCD_ODCD7_LENGTH                       0x00000001

#define _ODCD_ODCD8_POSITION                     0x00000008
#define _ODCD_ODCD8_MASK                         0x00000100
#define _ODCD_ODCD8_LENGTH                       0x00000001

#define _ODCD_ODCD9_POSITION                     0x00000009
#define _ODCD_ODCD9_MASK                         0x00000200
#define _ODCD_ODCD9_LENGTH                       0x00000001

#define _ODCD_ODCD10_POSITION                    0x0000000A
#define _ODCD_ODCD10_MASK                        0x00000400
#define _ODCD_ODCD10_LENGTH                      0x00000001

#define _ODCD_ODCD11_POSITION                    0x0000000B
#define _ODCD_ODCD11_MASK                        0x00000800
#define _ODCD_ODCD11_LENGTH                      0x00000001

#define _ODCD_ODCD12_POSITION                    0x0000000C
#define _ODCD_ODCD12_MASK                        0x00001000
#define _ODCD_ODCD12_LENGTH                      0x00000001

#define _ODCD_ODCD13_POSITION                    0x0000000D
#define _ODCD_ODCD13_MASK                        0x00002000
#define _ODCD_ODCD13_LENGTH                      0x00000001

#define _ODCD_ODCD14_POSITION                    0x0000000E
#define _ODCD_ODCD14_MASK                        0x00004000
#define _ODCD_ODCD14_LENGTH                      0x00000001

#define _ODCD_ODCD15_POSITION                    0x0000000F
#define _ODCD_ODCD15_MASK                        0x00008000
#define _ODCD_ODCD15_LENGTH                      0x00000001

#define _TRISE_TRISE0_POSITION                   0x00000000
#define _TRISE_TRISE0_MASK                       0x00000001
#define _TRISE_TRISE0_LENGTH                     0x00000001

#define _TRISE_TRISE1_POSITION                   0x00000001
#define _TRISE_TRISE1_MASK                       0x00000002
#define _TRISE_TRISE1_LENGTH                     0x00000001

#define _TRISE_TRISE2_POSITION                   0x00000002
#define _TRISE_TRISE2_MASK                       0x00000004
#define _TRISE_TRISE2_LENGTH                     0x00000001

#define _TRISE_TRISE3_POSITION                   0x00000003
#define _TRISE_TRISE3_MASK                       0x00000008
#define _TRISE_TRISE3_LENGTH                     0x00000001

#define _TRISE_TRISE4_POSITION                   0x00000004
#define _TRISE_TRISE4_MASK                       0x00000010
#define _TRISE_TRISE4_LENGTH                     0x00000001

#define _TRISE_TRISE5_POSITION                   0x00000005
#define _TRISE_TRISE5_MASK                       0x00000020
#define _TRISE_TRISE5_LENGTH                     0x00000001

#define _TRISE_TRISE6_POSITION                   0x00000006
#define _TRISE_TRISE6_MASK                       0x00000040
#define _TRISE_TRISE6_LENGTH                     0x00000001

#define _TRISE_TRISE7_POSITION                   0x00000007
#define _TRISE_TRISE7_MASK                       0x00000080
#define _TRISE_TRISE7_LENGTH                     0x00000001

#define _TRISE_TRISE8_POSITION                   0x00000008
#define _TRISE_TRISE8_MASK                       0x00000100
#define _TRISE_TRISE8_LENGTH                     0x00000001

#define _TRISE_TRISE9_POSITION                   0x00000009
#define _TRISE_TRISE9_MASK                       0x00000200
#define _TRISE_TRISE9_LENGTH                     0x00000001

#define _PORTE_RE0_POSITION                      0x00000000
#define _PORTE_RE0_MASK                          0x00000001
#define _PORTE_RE0_LENGTH                        0x00000001

#define _PORTE_RE1_POSITION                      0x00000001
#define _PORTE_RE1_MASK                          0x00000002
#define _PORTE_RE1_LENGTH                        0x00000001

#define _PORTE_RE2_POSITION                      0x00000002
#define _PORTE_RE2_MASK                          0x00000004
#define _PORTE_RE2_LENGTH                        0x00000001

#define _PORTE_RE3_POSITION                      0x00000003
#define _PORTE_RE3_MASK                          0x00000008
#define _PORTE_RE3_LENGTH                        0x00000001

#define _PORTE_RE4_POSITION                      0x00000004
#define _PORTE_RE4_MASK                          0x00000010
#define _PORTE_RE4_LENGTH                        0x00000001

#define _PORTE_RE5_POSITION                      0x00000005
#define _PORTE_RE5_MASK                          0x00000020
#define _PORTE_RE5_LENGTH                        0x00000001

#define _PORTE_RE6_POSITION                      0x00000006
#define _PORTE_RE6_MASK                          0x00000040
#define _PORTE_RE6_LENGTH                        0x00000001

#define _PORTE_RE7_POSITION                      0x00000007
#define _PORTE_RE7_MASK                          0x00000080
#define _PORTE_RE7_LENGTH                        0x00000001

#define _PORTE_RE8_POSITION                      0x00000008
#define _PORTE_RE8_MASK                          0x00000100
#define _PORTE_RE8_LENGTH                        0x00000001

#define _PORTE_RE9_POSITION                      0x00000009
#define _PORTE_RE9_MASK                          0x00000200
#define _PORTE_RE9_LENGTH                        0x00000001

#define _LATE_LATE0_POSITION                     0x00000000
#define _LATE_LATE0_MASK                         0x00000001
#define _LATE_LATE0_LENGTH                       0x00000001

#define _LATE_LATE1_POSITION                     0x00000001
#define _LATE_LATE1_MASK                         0x00000002
#define _LATE_LATE1_LENGTH                       0x00000001

#define _LATE_LATE2_POSITION                     0x00000002
#define _LATE_LATE2_MASK                         0x00000004
#define _LATE_LATE2_LENGTH                       0x00000001

#define _LATE_LATE3_POSITION                     0x00000003
#define _LATE_LATE3_MASK                         0x00000008
#define _LATE_LATE3_LENGTH                       0x00000001

#define _LATE_LATE4_POSITION                     0x00000004
#define _LATE_LATE4_MASK                         0x00000010
#define _LATE_LATE4_LENGTH                       0x00000001

#define _LATE_LATE5_POSITION                     0x00000005
#define _LATE_LATE5_MASK                         0x00000020
#define _LATE_LATE5_LENGTH                       0x00000001

#define _LATE_LATE6_POSITION                     0x00000006
#define _LATE_LATE6_MASK                         0x00000040
#define _LATE_LATE6_LENGTH                       0x00000001

#define _LATE_LATE7_POSITION                     0x00000007
#define _LATE_LATE7_MASK                         0x00000080
#define _LATE_LATE7_LENGTH                       0x00000001

#define _LATE_LATE8_POSITION                     0x00000008
#define _LATE_LATE8_MASK                         0x00000100
#define _LATE_LATE8_LENGTH                       0x00000001

#define _LATE_LATE9_POSITION                     0x00000009
#define _LATE_LATE9_MASK                         0x00000200
#define _LATE_LATE9_LENGTH                       0x00000001

#define _ODCE_ODCE0_POSITION                     0x00000000
#define _ODCE_ODCE0_MASK                         0x00000001
#define _ODCE_ODCE0_LENGTH                       0x00000001

#define _ODCE_ODCE1_POSITION                     0x00000001
#define _ODCE_ODCE1_MASK                         0x00000002
#define _ODCE_ODCE1_LENGTH                       0x00000001

#define _ODCE_ODCE2_POSITION                     0x00000002
#define _ODCE_ODCE2_MASK                         0x00000004
#define _ODCE_ODCE2_LENGTH                       0x00000001

#define _ODCE_ODCE3_POSITION                     0x00000003
#define _ODCE_ODCE3_MASK                         0x00000008
#define _ODCE_ODCE3_LENGTH                       0x00000001

#define _ODCE_ODCE4_POSITION                     0x00000004
#define _ODCE_ODCE4_MASK                         0x00000010
#define _ODCE_ODCE4_LENGTH                       0x00000001

#define _ODCE_ODCE5_POSITION                     0x00000005
#define _ODCE_ODCE5_MASK                         0x00000020
#define _ODCE_ODCE5_LENGTH                       0x00000001

#define _ODCE_ODCE6_POSITION                     0x00000006
#define _ODCE_ODCE6_MASK                         0x00000040
#define _ODCE_ODCE6_LENGTH                       0x00000001

#define _ODCE_ODCE7_POSITION                     0x00000007
#define _ODCE_ODCE7_MASK                         0x00000080
#define _ODCE_ODCE7_LENGTH                       0x00000001

#define _TRISF_TRISF0_POSITION                   0x00000000
#define _TRISF_TRISF0_MASK                       0x00000001
#define _TRISF_TRISF0_LENGTH                     0x00000001

#define _TRISF_TRISF1_POSITION                   0x00000001
#define _TRISF_TRISF1_MASK                       0x00000002
#define _TRISF_TRISF1_LENGTH                     0x00000001

#define _TRISF_TRISF2_POSITION                   0x00000002
#define _TRISF_TRISF2_MASK                       0x00000004
#define _TRISF_TRISF2_LENGTH                     0x00000001

#define _TRISF_TRISF3_POSITION                   0x00000003
#define _TRISF_TRISF3_MASK                       0x00000008
#define _TRISF_TRISF3_LENGTH                     0x00000001

#define _TRISF_TRISF4_POSITION                   0x00000004
#define _TRISF_TRISF4_MASK                       0x00000010
#define _TRISF_TRISF4_LENGTH                     0x00000001

#define _TRISF_TRISF5_POSITION                   0x00000005
#define _TRISF_TRISF5_MASK                       0x00000020
#define _TRISF_TRISF5_LENGTH                     0x00000001

#define _TRISF_TRISF6_POSITION                   0x00000006
#define _TRISF_TRISF6_MASK                       0x00000040
#define _TRISF_TRISF6_LENGTH                     0x00000001

#define _TRISF_TRISF7_POSITION                   0x00000007
#define _TRISF_TRISF7_MASK                       0x00000080
#define _TRISF_TRISF7_LENGTH                     0x00000001

#define _TRISF_TRISF8_POSITION                   0x00000008
#define _TRISF_TRISF8_MASK                       0x00000100
#define _TRISF_TRISF8_LENGTH                     0x00000001

#define _PORTF_RF0_POSITION                      0x00000000
#define _PORTF_RF0_MASK                          0x00000001
#define _PORTF_RF0_LENGTH                        0x00000001

#define _PORTF_RF1_POSITION                      0x00000001
#define _PORTF_RF1_MASK                          0x00000002
#define _PORTF_RF1_LENGTH                        0x00000001

#define _PORTF_RF2_POSITION                      0x00000002
#define _PORTF_RF2_MASK                          0x00000004
#define _PORTF_RF2_LENGTH                        0x00000001

#define _PORTF_RF3_POSITION                      0x00000003
#define _PORTF_RF3_MASK                          0x00000008
#define _PORTF_RF3_LENGTH                        0x00000001

#define _PORTF_RF4_POSITION                      0x00000004
#define _PORTF_RF4_MASK                          0x00000010
#define _PORTF_RF4_LENGTH                        0x00000001

#define _PORTF_RF5_POSITION                      0x00000005
#define _PORTF_RF5_MASK                          0x00000020
#define _PORTF_RF5_LENGTH                        0x00000001

#define _PORTF_RF6_POSITION                      0x00000006
#define _PORTF_RF6_MASK                          0x00000040
#define _PORTF_RF6_LENGTH                        0x00000001

#define _PORTF_RF7_POSITION                      0x00000007
#define _PORTF_RF7_MASK                          0x00000080
#define _PORTF_RF7_LENGTH                        0x00000001

#define _PORTF_RF8_POSITION                      0x00000008
#define _PORTF_RF8_MASK                          0x00000100
#define _PORTF_RF8_LENGTH                        0x00000001

#define _LATF_LATF0_POSITION                     0x00000000
#define _LATF_LATF0_MASK                         0x00000001
#define _LATF_LATF0_LENGTH                       0x00000001

#define _LATF_LATF1_POSITION                     0x00000001
#define _LATF_LATF1_MASK                         0x00000002
#define _LATF_LATF1_LENGTH                       0x00000001

#define _LATF_LATF2_POSITION                     0x00000002
#define _LATF_LATF2_MASK                         0x00000004
#define _LATF_LATF2_LENGTH                       0x00000001

#define _LATF_LATF3_POSITION                     0x00000003
#define _LATF_LATF3_MASK                         0x00000008
#define _LATF_LATF3_LENGTH                       0x00000001

#define _LATF_LATF4_POSITION                     0x00000004
#define _LATF_LATF4_MASK                         0x00000010
#define _LATF_LATF4_LENGTH                       0x00000001

#define _LATF_LATF5_POSITION                     0x00000005
#define _LATF_LATF5_MASK                         0x00000020
#define _LATF_LATF5_LENGTH                       0x00000001

#define _LATF_LATF6_POSITION                     0x00000006
#define _LATF_LATF6_MASK                         0x00000040
#define _LATF_LATF6_LENGTH                       0x00000001

#define _LATF_LATF7_POSITION                     0x00000007
#define _LATF_LATF7_MASK                         0x00000080
#define _LATF_LATF7_LENGTH                       0x00000001

#define _LATF_LATF8_POSITION                     0x00000008
#define _LATF_LATF8_MASK                         0x00000100
#define _LATF_LATF8_LENGTH                       0x00000001

#define _ODCF_ODCF1_POSITION                     0x00000001
#define _ODCF_ODCF1_MASK                         0x00000002
#define _ODCF_ODCF1_LENGTH                       0x00000001

#define _ODCF_ODCF2_POSITION                     0x00000002
#define _ODCF_ODCF2_MASK                         0x00000004
#define _ODCF_ODCF2_LENGTH                       0x00000001

#define _ODCF_ODCF3_POSITION                     0x00000003
#define _ODCF_ODCF3_MASK                         0x00000008
#define _ODCF_ODCF3_LENGTH                       0x00000001

#define _ODCF_ODCF6_POSITION                     0x00000006
#define _ODCF_ODCF6_MASK                         0x00000040
#define _ODCF_ODCF6_LENGTH                       0x00000001

#define _ODCF_ODCF7_POSITION                     0x00000007
#define _ODCF_ODCF7_MASK                         0x00000080
#define _ODCF_ODCF7_LENGTH                       0x00000001

#define _ODCF_ODCF8_POSITION                     0x00000008
#define _ODCF_ODCF8_MASK                         0x00000100
#define _ODCF_ODCF8_LENGTH                       0x00000001

#define _TRISG_TRISG0_POSITION                   0x00000000
#define _TRISG_TRISG0_MASK                       0x00000001
#define _TRISG_TRISG0_LENGTH                     0x00000001

#define _TRISG_TRISG1_POSITION                   0x00000001
#define _TRISG_TRISG1_MASK                       0x00000002
#define _TRISG_TRISG1_LENGTH                     0x00000001

#define _TRISG_TRISG2_POSITION                   0x00000002
#define _TRISG_TRISG2_MASK                       0x00000004
#define _TRISG_TRISG2_LENGTH                     0x00000001

#define _TRISG_TRISG3_POSITION                   0x00000003
#define _TRISG_TRISG3_MASK                       0x00000008
#define _TRISG_TRISG3_LENGTH                     0x00000001

#define _TRISG_TRISG6_POSITION                   0x00000006
#define _TRISG_TRISG6_MASK                       0x00000040
#define _TRISG_TRISG6_LENGTH                     0x00000001

#define _TRISG_TRISG7_POSITION                   0x00000007
#define _TRISG_TRISG7_MASK                       0x00000080
#define _TRISG_TRISG7_LENGTH                     0x00000001

#define _TRISG_TRISG8_POSITION                   0x00000008
#define _TRISG_TRISG8_MASK                       0x00000100
#define _TRISG_TRISG8_LENGTH                     0x00000001

#define _TRISG_TRISG9_POSITION                   0x00000009
#define _TRISG_TRISG9_MASK                       0x00000200
#define _TRISG_TRISG9_LENGTH                     0x00000001

#define _PORTG_RG0_POSITION                      0x00000000
#define _PORTG_RG0_MASK                          0x00000001
#define _PORTG_RG0_LENGTH                        0x00000001

#define _PORTG_RG1_POSITION                      0x00000001
#define _PORTG_RG1_MASK                          0x00000002
#define _PORTG_RG1_LENGTH                        0x00000001

#define _PORTG_RG2_POSITION                      0x00000002
#define _PORTG_RG2_MASK                          0x00000004
#define _PORTG_RG2_LENGTH                        0x00000001

#define _PORTG_RG3_POSITION                      0x00000003
#define _PORTG_RG3_MASK                          0x00000008
#define _PORTG_RG3_LENGTH                        0x00000001

#define _PORTG_RG6_POSITION                      0x00000006
#define _PORTG_RG6_MASK                          0x00000040
#define _PORTG_RG6_LENGTH                        0x00000001

#define _PORTG_RG7_POSITION                      0x00000007
#define _PORTG_RG7_MASK                          0x00000080
#define _PORTG_RG7_LENGTH                        0x00000001

#define _PORTG_RG8_POSITION                      0x00000008
#define _PORTG_RG8_MASK                          0x00000100
#define _PORTG_RG8_LENGTH                        0x00000001

#define _PORTG_RG9_POSITION                      0x00000009
#define _PORTG_RG9_MASK                          0x00000200
#define _PORTG_RG9_LENGTH                        0x00000001

#define _LATG_LATG0_POSITION                     0x00000000
#define _LATG_LATG0_MASK                         0x00000001
#define _LATG_LATG0_LENGTH                       0x00000001

#define _LATG_LATG1_POSITION                     0x00000001
#define _LATG_LATG1_MASK                         0x00000002
#define _LATG_LATG1_LENGTH                       0x00000001

#define _LATG_LATG2_POSITION                     0x00000002
#define _LATG_LATG2_MASK                         0x00000004
#define _LATG_LATG2_LENGTH                       0x00000001

#define _LATG_LATG3_POSITION                     0x00000003
#define _LATG_LATG3_MASK                         0x00000008
#define _LATG_LATG3_LENGTH                       0x00000001

#define _LATG_LATG6_POSITION                     0x00000006
#define _LATG_LATG6_MASK                         0x00000040
#define _LATG_LATG6_LENGTH                       0x00000001

#define _LATG_LATG7_POSITION                     0x00000007
#define _LATG_LATG7_MASK                         0x00000080
#define _LATG_LATG7_LENGTH                       0x00000001

#define _LATG_LATG8_POSITION                     0x00000008
#define _LATG_LATG8_MASK                         0x00000100
#define _LATG_LATG8_LENGTH                       0x00000001

#define _LATG_LATG9_POSITION                     0x00000009
#define _LATG_LATG9_MASK                         0x00000200
#define _LATG_LATG9_LENGTH                       0x00000001

#define _ODCG_ODCG0_POSITION                     0x00000000
#define _ODCG_ODCG0_MASK                         0x00000001
#define _ODCG_ODCG0_LENGTH                       0x00000001

#define _ODCG_ODCG1_POSITION                     0x00000001
#define _ODCG_ODCG1_MASK                         0x00000002
#define _ODCG_ODCG1_LENGTH                       0x00000001

#define _ODCG_ODCG2_POSITION                     0x00000002
#define _ODCG_ODCG2_MASK                         0x00000004
#define _ODCG_ODCG2_LENGTH                       0x00000001

#define _ODCG_ODCG3_POSITION                     0x00000003
#define _ODCG_ODCG3_MASK                         0x00000008
#define _ODCG_ODCG3_LENGTH                       0x00000001

#define _ODCG_ODCG6_POSITION                     0x00000006
#define _ODCG_ODCG6_MASK                         0x00000040
#define _ODCG_ODCG6_LENGTH                       0x00000001

#define _ODCG_ODCG7_POSITION                     0x00000007
#define _ODCG_ODCG7_MASK                         0x00000080
#define _ODCG_ODCG7_LENGTH                       0x00000001

#define _ODCG_ODCG8_POSITION                     0x00000008
#define _ODCG_ODCG8_MASK                         0x00000100
#define _ODCG_ODCG8_LENGTH                       0x00000001

#define _ODCG_ODCG9_POSITION                     0x00000009
#define _ODCG_ODCG9_MASK                         0x00000200
#define _ODCG_ODCG9_LENGTH                       0x00000001

#define _ADCON_ADCS_POSITION                     0x00000000
#define _ADCON_ADCS_MASK                         0x00000007
#define _ADCON_ADCS_LENGTH                       0x00000003

#define _ADCON_ASYNCSAMP_POSITION                0x00000004
#define _ADCON_ASYNCSAMP_MASK                    0x00000010
#define _ADCON_ASYNCSAMP_LENGTH                  0x00000001

#define _ADCON_SEQSAMP_POSITION                  0x00000005
#define _ADCON_SEQSAMP_MASK                      0x00000020
#define _ADCON_SEQSAMP_LENGTH                    0x00000001

#define _ADCON_ORDER_POSITION                    0x00000006
#define _ADCON_ORDER_MASK                        0x00000040
#define _ADCON_ORDER_LENGTH                      0x00000001

#define _ADCON_EIE_POSITION                      0x00000007
#define _ADCON_EIE_MASK                          0x00000080
#define _ADCON_EIE_LENGTH                        0x00000001

#define _ADCON_FORM_POSITION                     0x00000008
#define _ADCON_FORM_MASK                         0x00000100
#define _ADCON_FORM_LENGTH                       0x00000001

#define _ADCON_GSWTRG_POSITION                   0x0000000A
#define _ADCON_GSWTRG_MASK                       0x00000400
#define _ADCON_GSWTRG_LENGTH                     0x00000001

#define _ADCON_SLOWCLK_POSITION                  0x0000000C
#define _ADCON_SLOWCLK_MASK                      0x00001000
#define _ADCON_SLOWCLK_LENGTH                    0x00000001

#define _ADCON_ADSIDL_POSITION                   0x0000000D
#define _ADCON_ADSIDL_MASK                       0x00002000
#define _ADCON_ADSIDL_LENGTH                     0x00000001

#define _ADCON_ADON_POSITION                     0x0000000F
#define _ADCON_ADON_MASK                         0x00008000
#define _ADCON_ADON_LENGTH                       0x00000001

#define _ADCON_ADCS0_POSITION                    0x00000000
#define _ADCON_ADCS0_MASK                        0x00000001
#define _ADCON_ADCS0_LENGTH                      0x00000001

#define _ADCON_ADCS1_POSITION                    0x00000001
#define _ADCON_ADCS1_MASK                        0x00000002
#define _ADCON_ADCS1_LENGTH                      0x00000001

#define _ADCON_ADCS2_POSITION                    0x00000002
#define _ADCON_ADCS2_MASK                        0x00000004
#define _ADCON_ADCS2_LENGTH                      0x00000001

#define _ADPCFG_PCFG0_POSITION                   0x00000000
#define _ADPCFG_PCFG0_MASK                       0x00000001
#define _ADPCFG_PCFG0_LENGTH                     0x00000001

#define _ADPCFG_PCFG1_POSITION                   0x00000001
#define _ADPCFG_PCFG1_MASK                       0x00000002
#define _ADPCFG_PCFG1_LENGTH                     0x00000001

#define _ADPCFG_PCFG2_POSITION                   0x00000002
#define _ADPCFG_PCFG2_MASK                       0x00000004
#define _ADPCFG_PCFG2_LENGTH                     0x00000001

#define _ADPCFG_PCFG3_POSITION                   0x00000003
#define _ADPCFG_PCFG3_MASK                       0x00000008
#define _ADPCFG_PCFG3_LENGTH                     0x00000001

#define _ADPCFG_PCFG4_POSITION                   0x00000004
#define _ADPCFG_PCFG4_MASK                       0x00000010
#define _ADPCFG_PCFG4_LENGTH                     0x00000001

#define _ADPCFG_PCFG5_POSITION                   0x00000005
#define _ADPCFG_PCFG5_MASK                       0x00000020
#define _ADPCFG_PCFG5_LENGTH                     0x00000001

#define _ADPCFG_PCFG6_POSITION                   0x00000006
#define _ADPCFG_PCFG6_MASK                       0x00000040
#define _ADPCFG_PCFG6_LENGTH                     0x00000001

#define _ADPCFG_PCFG7_POSITION                   0x00000007
#define _ADPCFG_PCFG7_MASK                       0x00000080
#define _ADPCFG_PCFG7_LENGTH                     0x00000001

#define _ADPCFG_PCFG8_POSITION                   0x00000008
#define _ADPCFG_PCFG8_MASK                       0x00000100
#define _ADPCFG_PCFG8_LENGTH                     0x00000001

#define _ADPCFG_PCFG9_POSITION                   0x00000009
#define _ADPCFG_PCFG9_MASK                       0x00000200
#define _ADPCFG_PCFG9_LENGTH                     0x00000001

#define _ADPCFG_PCFG10_POSITION                  0x0000000A
#define _ADPCFG_PCFG10_MASK                      0x00000400
#define _ADPCFG_PCFG10_LENGTH                    0x00000001

#define _ADPCFG_PCFG11_POSITION                  0x0000000B
#define _ADPCFG_PCFG11_MASK                      0x00000800
#define _ADPCFG_PCFG11_LENGTH                    0x00000001

#define _ADPCFG_PCFG12_POSITION                  0x0000000C
#define _ADPCFG_PCFG12_MASK                      0x00001000
#define _ADPCFG_PCFG12_LENGTH                    0x00000001

#define _ADPCFG_PCFG13_POSITION                  0x0000000D
#define _ADPCFG_PCFG13_MASK                      0x00002000
#define _ADPCFG_PCFG13_LENGTH                    0x00000001

#define _ADPCFG_PCFG14_POSITION                  0x0000000E
#define _ADPCFG_PCFG14_MASK                      0x00004000
#define _ADPCFG_PCFG14_LENGTH                    0x00000001

#define _ADPCFG_PCFG15_POSITION                  0x0000000F
#define _ADPCFG_PCFG15_MASK                      0x00008000
#define _ADPCFG_PCFG15_LENGTH                    0x00000001

#define _ADPCFG2_PCFG16_POSITION                 0x00000000
#define _ADPCFG2_PCFG16_MASK                     0x00000001
#define _ADPCFG2_PCFG16_LENGTH                   0x00000001

#define _ADPCFG2_PCFG17_POSITION                 0x00000001
#define _ADPCFG2_PCFG17_MASK                     0x00000002
#define _ADPCFG2_PCFG17_LENGTH                   0x00000001

#define _ADSTAT_P0RDY_POSITION                   0x00000000
#define _ADSTAT_P0RDY_MASK                       0x00000001
#define _ADSTAT_P0RDY_LENGTH                     0x00000001

#define _ADSTAT_P1RDY_POSITION                   0x00000001
#define _ADSTAT_P1RDY_MASK                       0x00000002
#define _ADSTAT_P1RDY_LENGTH                     0x00000001

#define _ADSTAT_P2RDY_POSITION                   0x00000002
#define _ADSTAT_P2RDY_MASK                       0x00000004
#define _ADSTAT_P2RDY_LENGTH                     0x00000001

#define _ADSTAT_P3RDY_POSITION                   0x00000003
#define _ADSTAT_P3RDY_MASK                       0x00000008
#define _ADSTAT_P3RDY_LENGTH                     0x00000001

#define _ADSTAT_P4RDY_POSITION                   0x00000004
#define _ADSTAT_P4RDY_MASK                       0x00000010
#define _ADSTAT_P4RDY_LENGTH                     0x00000001

#define _ADSTAT_P5RDY_POSITION                   0x00000005
#define _ADSTAT_P5RDY_MASK                       0x00000020
#define _ADSTAT_P5RDY_LENGTH                     0x00000001

#define _ADSTAT_P6RDY_POSITION                   0x00000006
#define _ADSTAT_P6RDY_MASK                       0x00000040
#define _ADSTAT_P6RDY_LENGTH                     0x00000001

#define _ADSTAT_P7RDY_POSITION                   0x00000007
#define _ADSTAT_P7RDY_MASK                       0x00000080
#define _ADSTAT_P7RDY_LENGTH                     0x00000001

#define _ADSTAT_P8RDY_POSITION                   0x00000008
#define _ADSTAT_P8RDY_MASK                       0x00000100
#define _ADSTAT_P8RDY_LENGTH                     0x00000001

#define _ADSTAT_P12RDY_POSITION                  0x0000000C
#define _ADSTAT_P12RDY_MASK                      0x00001000
#define _ADSTAT_P12RDY_LENGTH                    0x00000001

#define _ADCPC0_TRGSRC0_POSITION                 0x00000000
#define _ADCPC0_TRGSRC0_MASK                     0x0000001F
#define _ADCPC0_TRGSRC0_LENGTH                   0x00000005

#define _ADCPC0_SWTRG0_POSITION                  0x00000005
#define _ADCPC0_SWTRG0_MASK                      0x00000020
#define _ADCPC0_SWTRG0_LENGTH                    0x00000001

#define _ADCPC0_PEND0_POSITION                   0x00000006
#define _ADCPC0_PEND0_MASK                       0x00000040
#define _ADCPC0_PEND0_LENGTH                     0x00000001

#define _ADCPC0_IRQEN0_POSITION                  0x00000007
#define _ADCPC0_IRQEN0_MASK                      0x00000080
#define _ADCPC0_IRQEN0_LENGTH                    0x00000001

#define _ADCPC0_TRGSRC1_POSITION                 0x00000008
#define _ADCPC0_TRGSRC1_MASK                     0x00001F00
#define _ADCPC0_TRGSRC1_LENGTH                   0x00000005

#define _ADCPC0_SWTRG1_POSITION                  0x0000000D
#define _ADCPC0_SWTRG1_MASK                      0x00002000
#define _ADCPC0_SWTRG1_LENGTH                    0x00000001

#define _ADCPC0_PEND1_POSITION                   0x0000000E
#define _ADCPC0_PEND1_MASK                       0x00004000
#define _ADCPC0_PEND1_LENGTH                     0x00000001

#define _ADCPC0_IRQEN1_POSITION                  0x0000000F
#define _ADCPC0_IRQEN1_MASK                      0x00008000
#define _ADCPC0_IRQEN1_LENGTH                    0x00000001

#define _ADCPC0_TRGSRC00_POSITION                0x00000000
#define _ADCPC0_TRGSRC00_MASK                    0x00000001
#define _ADCPC0_TRGSRC00_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC01_POSITION                0x00000001
#define _ADCPC0_TRGSRC01_MASK                    0x00000002
#define _ADCPC0_TRGSRC01_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC02_POSITION                0x00000002
#define _ADCPC0_TRGSRC02_MASK                    0x00000004
#define _ADCPC0_TRGSRC02_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC03_POSITION                0x00000003
#define _ADCPC0_TRGSRC03_MASK                    0x00000008
#define _ADCPC0_TRGSRC03_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC04_POSITION                0x00000004
#define _ADCPC0_TRGSRC04_MASK                    0x00000010
#define _ADCPC0_TRGSRC04_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC10_POSITION                0x00000008
#define _ADCPC0_TRGSRC10_MASK                    0x00000100
#define _ADCPC0_TRGSRC10_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC11_POSITION                0x00000009
#define _ADCPC0_TRGSRC11_MASK                    0x00000200
#define _ADCPC0_TRGSRC11_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC12_POSITION                0x0000000A
#define _ADCPC0_TRGSRC12_MASK                    0x00000400
#define _ADCPC0_TRGSRC12_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC13_POSITION                0x0000000B
#define _ADCPC0_TRGSRC13_MASK                    0x00000800
#define _ADCPC0_TRGSRC13_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC14_POSITION                0x0000000C
#define _ADCPC0_TRGSRC14_MASK                    0x00001000
#define _ADCPC0_TRGSRC14_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC2_POSITION                 0x00000000
#define _ADCPC1_TRGSRC2_MASK                     0x0000001F
#define _ADCPC1_TRGSRC2_LENGTH                   0x00000005

#define _ADCPC1_SWTRG2_POSITION                  0x00000005
#define _ADCPC1_SWTRG2_MASK                      0x00000020
#define _ADCPC1_SWTRG2_LENGTH                    0x00000001

#define _ADCPC1_PEND2_POSITION                   0x00000006
#define _ADCPC1_PEND2_MASK                       0x00000040
#define _ADCPC1_PEND2_LENGTH                     0x00000001

#define _ADCPC1_IRQEN2_POSITION                  0x00000007
#define _ADCPC1_IRQEN2_MASK                      0x00000080
#define _ADCPC1_IRQEN2_LENGTH                    0x00000001

#define _ADCPC1_TRGSRC3_POSITION                 0x00000008
#define _ADCPC1_TRGSRC3_MASK                     0x00001F00
#define _ADCPC1_TRGSRC3_LENGTH                   0x00000005

#define _ADCPC1_SWTRG3_POSITION                  0x0000000D
#define _ADCPC1_SWTRG3_MASK                      0x00002000
#define _ADCPC1_SWTRG3_LENGTH                    0x00000001

#define _ADCPC1_PEND3_POSITION                   0x0000000E
#define _ADCPC1_PEND3_MASK                       0x00004000
#define _ADCPC1_PEND3_LENGTH                     0x00000001

#define _ADCPC1_IRQEN3_POSITION                  0x0000000F
#define _ADCPC1_IRQEN3_MASK                      0x00008000
#define _ADCPC1_IRQEN3_LENGTH                    0x00000001

#define _ADCPC1_TRGSRC20_POSITION                0x00000000
#define _ADCPC1_TRGSRC20_MASK                    0x00000001
#define _ADCPC1_TRGSRC20_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC21_POSITION                0x00000001
#define _ADCPC1_TRGSRC21_MASK                    0x00000002
#define _ADCPC1_TRGSRC21_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC22_POSITION                0x00000002
#define _ADCPC1_TRGSRC22_MASK                    0x00000004
#define _ADCPC1_TRGSRC22_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC23_POSITION                0x00000003
#define _ADCPC1_TRGSRC23_MASK                    0x00000008
#define _ADCPC1_TRGSRC23_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC24_POSITION                0x00000004
#define _ADCPC1_TRGSRC24_MASK                    0x00000010
#define _ADCPC1_TRGSRC24_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC30_POSITION                0x00000008
#define _ADCPC1_TRGSRC30_MASK                    0x00000100
#define _ADCPC1_TRGSRC30_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC31_POSITION                0x00000009
#define _ADCPC1_TRGSRC31_MASK                    0x00000200
#define _ADCPC1_TRGSRC31_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC32_POSITION                0x0000000A
#define _ADCPC1_TRGSRC32_MASK                    0x00000400
#define _ADCPC1_TRGSRC32_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC33_POSITION                0x0000000B
#define _ADCPC1_TRGSRC33_MASK                    0x00000800
#define _ADCPC1_TRGSRC33_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC34_POSITION                0x0000000C
#define _ADCPC1_TRGSRC34_MASK                    0x00001000
#define _ADCPC1_TRGSRC34_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC4_POSITION                 0x00000000
#define _ADCPC2_TRGSRC4_MASK                     0x0000001F
#define _ADCPC2_TRGSRC4_LENGTH                   0x00000005

#define _ADCPC2_SWTRG4_POSITION                  0x00000005
#define _ADCPC2_SWTRG4_MASK                      0x00000020
#define _ADCPC2_SWTRG4_LENGTH                    0x00000001

#define _ADCPC2_PEND4_POSITION                   0x00000006
#define _ADCPC2_PEND4_MASK                       0x00000040
#define _ADCPC2_PEND4_LENGTH                     0x00000001

#define _ADCPC2_IRQEN4_POSITION                  0x00000007
#define _ADCPC2_IRQEN4_MASK                      0x00000080
#define _ADCPC2_IRQEN4_LENGTH                    0x00000001

#define _ADCPC2_TRGSRC5_POSITION                 0x00000008
#define _ADCPC2_TRGSRC5_MASK                     0x00001F00
#define _ADCPC2_TRGSRC5_LENGTH                   0x00000005

#define _ADCPC2_SWTRG5_POSITION                  0x0000000D
#define _ADCPC2_SWTRG5_MASK                      0x00002000
#define _ADCPC2_SWTRG5_LENGTH                    0x00000001

#define _ADCPC2_PEND5_POSITION                   0x0000000E
#define _ADCPC2_PEND5_MASK                       0x00004000
#define _ADCPC2_PEND5_LENGTH                     0x00000001

#define _ADCPC2_IRQEN5_POSITION                  0x0000000F
#define _ADCPC2_IRQEN5_MASK                      0x00008000
#define _ADCPC2_IRQEN5_LENGTH                    0x00000001

#define _ADCPC2_TRGSRC40_POSITION                0x00000000
#define _ADCPC2_TRGSRC40_MASK                    0x00000001
#define _ADCPC2_TRGSRC40_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC41_POSITION                0x00000001
#define _ADCPC2_TRGSRC41_MASK                    0x00000002
#define _ADCPC2_TRGSRC41_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC42_POSITION                0x00000002
#define _ADCPC2_TRGSRC42_MASK                    0x00000004
#define _ADCPC2_TRGSRC42_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC43_POSITION                0x00000003
#define _ADCPC2_TRGSRC43_MASK                    0x00000008
#define _ADCPC2_TRGSRC43_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC44_POSITION                0x00000004
#define _ADCPC2_TRGSRC44_MASK                    0x00000010
#define _ADCPC2_TRGSRC44_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC50_POSITION                0x00000008
#define _ADCPC2_TRGSRC50_MASK                    0x00000100
#define _ADCPC2_TRGSRC50_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC51_POSITION                0x00000009
#define _ADCPC2_TRGSRC51_MASK                    0x00000200
#define _ADCPC2_TRGSRC51_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC52_POSITION                0x0000000A
#define _ADCPC2_TRGSRC52_MASK                    0x00000400
#define _ADCPC2_TRGSRC52_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC53_POSITION                0x0000000B
#define _ADCPC2_TRGSRC53_MASK                    0x00000800
#define _ADCPC2_TRGSRC53_LENGTH                  0x00000001

#define _ADCPC2_TRGSRC54_POSITION                0x0000000C
#define _ADCPC2_TRGSRC54_MASK                    0x00001000
#define _ADCPC2_TRGSRC54_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC6_POSITION                 0x00000000
#define _ADCPC3_TRGSRC6_MASK                     0x0000001F
#define _ADCPC3_TRGSRC6_LENGTH                   0x00000005

#define _ADCPC3_SWTRG6_POSITION                  0x00000005
#define _ADCPC3_SWTRG6_MASK                      0x00000020
#define _ADCPC3_SWTRG6_LENGTH                    0x00000001

#define _ADCPC3_PEND6_POSITION                   0x00000006
#define _ADCPC3_PEND6_MASK                       0x00000040
#define _ADCPC3_PEND6_LENGTH                     0x00000001

#define _ADCPC3_IRQEN6_POSITION                  0x00000007
#define _ADCPC3_IRQEN6_MASK                      0x00000080
#define _ADCPC3_IRQEN6_LENGTH                    0x00000001

#define _ADCPC3_TRGSRC7_POSITION                 0x00000008
#define _ADCPC3_TRGSRC7_MASK                     0x00001F00
#define _ADCPC3_TRGSRC7_LENGTH                   0x00000005

#define _ADCPC3_SWTRG7_POSITION                  0x0000000D
#define _ADCPC3_SWTRG7_MASK                      0x00002000
#define _ADCPC3_SWTRG7_LENGTH                    0x00000001

#define _ADCPC3_PEND7_POSITION                   0x0000000E
#define _ADCPC3_PEND7_MASK                       0x00004000
#define _ADCPC3_PEND7_LENGTH                     0x00000001

#define _ADCPC3_IRQEN7_POSITION                  0x0000000F
#define _ADCPC3_IRQEN7_MASK                      0x00008000
#define _ADCPC3_IRQEN7_LENGTH                    0x00000001

#define _ADCPC3_TRGSRC60_POSITION                0x00000000
#define _ADCPC3_TRGSRC60_MASK                    0x00000001
#define _ADCPC3_TRGSRC60_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC61_POSITION                0x00000001
#define _ADCPC3_TRGSRC61_MASK                    0x00000002
#define _ADCPC3_TRGSRC61_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC62_POSITION                0x00000002
#define _ADCPC3_TRGSRC62_MASK                    0x00000004
#define _ADCPC3_TRGSRC62_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC63_POSITION                0x00000003
#define _ADCPC3_TRGSRC63_MASK                    0x00000008
#define _ADCPC3_TRGSRC63_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC64_POSITION                0x00000004
#define _ADCPC3_TRGSRC64_MASK                    0x00000010
#define _ADCPC3_TRGSRC64_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC70_POSITION                0x00000008
#define _ADCPC3_TRGSRC70_MASK                    0x00000100
#define _ADCPC3_TRGSRC70_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC71_POSITION                0x00000009
#define _ADCPC3_TRGSRC71_MASK                    0x00000200
#define _ADCPC3_TRGSRC71_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC72_POSITION                0x0000000A
#define _ADCPC3_TRGSRC72_MASK                    0x00000400
#define _ADCPC3_TRGSRC72_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC73_POSITION                0x0000000B
#define _ADCPC3_TRGSRC73_MASK                    0x00000800
#define _ADCPC3_TRGSRC73_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC74_POSITION                0x0000000C
#define _ADCPC3_TRGSRC74_MASK                    0x00001000
#define _ADCPC3_TRGSRC74_LENGTH                  0x00000001

#define _ADCPC4_TRGSRC8_POSITION                 0x00000000
#define _ADCPC4_TRGSRC8_MASK                     0x0000001F
#define _ADCPC4_TRGSRC8_LENGTH                   0x00000005

#define _ADCPC4_SWTRG8_POSITION                  0x00000005
#define _ADCPC4_SWTRG8_MASK                      0x00000020
#define _ADCPC4_SWTRG8_LENGTH                    0x00000001

#define _ADCPC4_PEND8_POSITION                   0x00000006
#define _ADCPC4_PEND8_MASK                       0x00000040
#define _ADCPC4_PEND8_LENGTH                     0x00000001

#define _ADCPC4_IRQEN8_POSITION                  0x00000007
#define _ADCPC4_IRQEN8_MASK                      0x00000080
#define _ADCPC4_IRQEN8_LENGTH                    0x00000001

#define _ADCPC4_TRGSRC80_POSITION                0x00000000
#define _ADCPC4_TRGSRC80_MASK                    0x00000001
#define _ADCPC4_TRGSRC80_LENGTH                  0x00000001

#define _ADCPC4_TRGSRC81_POSITION                0x00000001
#define _ADCPC4_TRGSRC81_MASK                    0x00000002
#define _ADCPC4_TRGSRC81_LENGTH                  0x00000001

#define _ADCPC4_TRGSRC82_POSITION                0x00000002
#define _ADCPC4_TRGSRC82_MASK                    0x00000004
#define _ADCPC4_TRGSRC82_LENGTH                  0x00000001

#define _ADCPC4_TRGSRC83_POSITION                0x00000003
#define _ADCPC4_TRGSRC83_MASK                    0x00000008
#define _ADCPC4_TRGSRC83_LENGTH                  0x00000001

#define _ADCPC4_TRGSRC84_POSITION                0x00000004
#define _ADCPC4_TRGSRC84_MASK                    0x00000010
#define _ADCPC4_TRGSRC84_LENGTH                  0x00000001

#define _ADCPC6_TRGSRC12_POSITION                0x00000000
#define _ADCPC6_TRGSRC12_MASK                    0x0000001F
#define _ADCPC6_TRGSRC12_LENGTH                  0x00000005

#define _ADCPC6_SWTRG12_POSITION                 0x00000005
#define _ADCPC6_SWTRG12_MASK                     0x00000020
#define _ADCPC6_SWTRG12_LENGTH                   0x00000001

#define _ADCPC6_PEND12_POSITION                  0x00000006
#define _ADCPC6_PEND12_MASK                      0x00000040
#define _ADCPC6_PEND12_LENGTH                    0x00000001

#define _ADCPC6_IRQEN12_POSITION                 0x00000007
#define _ADCPC6_IRQEN12_MASK                     0x00000080
#define _ADCPC6_IRQEN12_LENGTH                   0x00000001

#define _ADCPC6_TRGSRC120_POSITION               0x00000000
#define _ADCPC6_TRGSRC120_MASK                   0x00000001
#define _ADCPC6_TRGSRC120_LENGTH                 0x00000001

#define _ADCPC6_TRGSRC121_POSITION               0x00000001
#define _ADCPC6_TRGSRC121_MASK                   0x00000002
#define _ADCPC6_TRGSRC121_LENGTH                 0x00000001

#define _ADCPC6_TRGSRC122_POSITION               0x00000002
#define _ADCPC6_TRGSRC122_MASK                   0x00000004
#define _ADCPC6_TRGSRC122_LENGTH                 0x00000001

#define _ADCPC6_TRGSRC123_POSITION               0x00000003
#define _ADCPC6_TRGSRC123_MASK                   0x00000008
#define _ADCPC6_TRGSRC123_LENGTH                 0x00000001

#define _ADCPC6_TRGSRC124_POSITION               0x00000004
#define _ADCPC6_TRGSRC124_MASK                   0x00000010
#define _ADCPC6_TRGSRC124_LENGTH                 0x00000001

#define _PTCON_SEVTPS_POSITION                   0x00000000
#define _PTCON_SEVTPS_MASK                       0x0000000F
#define _PTCON_SEVTPS_LENGTH                     0x00000004

#define _PTCON_SYNCSRC_POSITION                  0x00000004
#define _PTCON_SYNCSRC_MASK                      0x00000070
#define _PTCON_SYNCSRC_LENGTH                    0x00000003

#define _PTCON_SYNCEN_POSITION                   0x00000007
#define _PTCON_SYNCEN_MASK                       0x00000080
#define _PTCON_SYNCEN_LENGTH                     0x00000001

#define _PTCON_SYNCOEN_POSITION                  0x00000008
#define _PTCON_SYNCOEN_MASK                      0x00000100
#define _PTCON_SYNCOEN_LENGTH                    0x00000001

#define _PTCON_SYNCPOL_POSITION                  0x00000009
#define _PTCON_SYNCPOL_MASK                      0x00000200
#define _PTCON_SYNCPOL_LENGTH                    0x00000001

#define _PTCON_EIPU_POSITION                     0x0000000A
#define _PTCON_EIPU_MASK                         0x00000400
#define _PTCON_EIPU_LENGTH                       0x00000001

#define _PTCON_SEIEN_POSITION                    0x0000000B
#define _PTCON_SEIEN_MASK                        0x00000800
#define _PTCON_SEIEN_LENGTH                      0x00000001

#define _PTCON_SESTAT_POSITION                   0x0000000C
#define _PTCON_SESTAT_MASK                       0x00001000
#define _PTCON_SESTAT_LENGTH                     0x00000001

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_SEVTPS0_POSITION                  0x00000000
#define _PTCON_SEVTPS0_MASK                      0x00000001
#define _PTCON_SEVTPS0_LENGTH                    0x00000001

#define _PTCON_SEVTPS1_POSITION                  0x00000001
#define _PTCON_SEVTPS1_MASK                      0x00000002
#define _PTCON_SEVTPS1_LENGTH                    0x00000001

#define _PTCON_SEVTPS2_POSITION                  0x00000002
#define _PTCON_SEVTPS2_MASK                      0x00000004
#define _PTCON_SEVTPS2_LENGTH                    0x00000001

#define _PTCON_SEVTPS3_POSITION                  0x00000003
#define _PTCON_SEVTPS3_MASK                      0x00000008
#define _PTCON_SEVTPS3_LENGTH                    0x00000001

#define _PTCON_SYNCSRC0_POSITION                 0x00000004
#define _PTCON_SYNCSRC0_MASK                     0x00000010
#define _PTCON_SYNCSRC0_LENGTH                   0x00000001

#define _PTCON_SYNCSRC1_POSITION                 0x00000005
#define _PTCON_SYNCSRC1_MASK                     0x00000020
#define _PTCON_SYNCSRC1_LENGTH                   0x00000001

#define _PTCON_SYNCSRC2_POSITION                 0x00000006
#define _PTCON_SYNCSRC2_MASK                     0x00000040
#define _PTCON_SYNCSRC2_LENGTH                   0x00000001

#define _PTCON2_PCLKDIV_POSITION                 0x00000000
#define _PTCON2_PCLKDIV_MASK                     0x00000007
#define _PTCON2_PCLKDIV_LENGTH                   0x00000003

#define _PTCON2_PCLKDIV0_POSITION                0x00000000
#define _PTCON2_PCLKDIV0_MASK                    0x00000001
#define _PTCON2_PCLKDIV0_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV1_POSITION                0x00000001
#define _PTCON2_PCLKDIV1_MASK                    0x00000002
#define _PTCON2_PCLKDIV1_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV2_POSITION                0x00000002
#define _PTCON2_PCLKDIV2_MASK                    0x00000004
#define _PTCON2_PCLKDIV2_LENGTH                  0x00000001

#define _STCON_SEVTPS_POSITION                   0x00000000
#define _STCON_SEVTPS_MASK                       0x0000000F
#define _STCON_SEVTPS_LENGTH                     0x00000004

#define _STCON_SYNCSRC_POSITION                  0x00000004
#define _STCON_SYNCSRC_MASK                      0x00000070
#define _STCON_SYNCSRC_LENGTH                    0x00000003

#define _STCON_SYNCEN_POSITION                   0x00000007
#define _STCON_SYNCEN_MASK                       0x00000080
#define _STCON_SYNCEN_LENGTH                     0x00000001

#define _STCON_SYNCOEN_POSITION                  0x00000008
#define _STCON_SYNCOEN_MASK                      0x00000100
#define _STCON_SYNCOEN_LENGTH                    0x00000001

#define _STCON_SYNCPOL_POSITION                  0x00000009
#define _STCON_SYNCPOL_MASK                      0x00000200
#define _STCON_SYNCPOL_LENGTH                    0x00000001

#define _STCON_EIPU_POSITION                     0x0000000A
#define _STCON_EIPU_MASK                         0x00000400
#define _STCON_EIPU_LENGTH                       0x00000001

#define _STCON_SEIEN_POSITION                    0x0000000B
#define _STCON_SEIEN_MASK                        0x00000800
#define _STCON_SEIEN_LENGTH                      0x00000001

#define _STCON_SESTAT_POSITION                   0x0000000C
#define _STCON_SESTAT_MASK                       0x00001000
#define _STCON_SESTAT_LENGTH                     0x00000001

#define _STCON_SEVTPS0_POSITION                  0x00000000
#define _STCON_SEVTPS0_MASK                      0x00000001
#define _STCON_SEVTPS0_LENGTH                    0x00000001

#define _STCON_SEVTPS1_POSITION                  0x00000001
#define _STCON_SEVTPS1_MASK                      0x00000002
#define _STCON_SEVTPS1_LENGTH                    0x00000001

#define _STCON_SEVTPS2_POSITION                  0x00000002
#define _STCON_SEVTPS2_MASK                      0x00000004
#define _STCON_SEVTPS2_LENGTH                    0x00000001

#define _STCON_SEVTPS3_POSITION                  0x00000003
#define _STCON_SEVTPS3_MASK                      0x00000008
#define _STCON_SEVTPS3_LENGTH                    0x00000001

#define _STCON_SYNCSRC0_POSITION                 0x00000004
#define _STCON_SYNCSRC0_MASK                     0x00000010
#define _STCON_SYNCSRC0_LENGTH                   0x00000001

#define _STCON_SYNCSRC1_POSITION                 0x00000005
#define _STCON_SYNCSRC1_MASK                     0x00000020
#define _STCON_SYNCSRC1_LENGTH                   0x00000001

#define _STCON_SYNCSRC2_POSITION                 0x00000006
#define _STCON_SYNCSRC2_MASK                     0x00000040
#define _STCON_SYNCSRC2_LENGTH                   0x00000001

#define _STCON2_PCLKDIV_POSITION                 0x00000000
#define _STCON2_PCLKDIV_MASK                     0x00000007
#define _STCON2_PCLKDIV_LENGTH                   0x00000003

#define _STCON2_PCLKDIV0_POSITION                0x00000000
#define _STCON2_PCLKDIV0_MASK                    0x00000001
#define _STCON2_PCLKDIV0_LENGTH                  0x00000001

#define _STCON2_PCLKDIV1_POSITION                0x00000001
#define _STCON2_PCLKDIV1_MASK                    0x00000002
#define _STCON2_PCLKDIV1_LENGTH                  0x00000001

#define _STCON2_PCLKDIV2_POSITION                0x00000002
#define _STCON2_PCLKDIV2_MASK                    0x00000004
#define _STCON2_PCLKDIV2_LENGTH                  0x00000001

#define _CHOP_CHOPCLK_POSITION                   0x00000003
#define _CHOP_CHOPCLK_MASK                       0x000003F8
#define _CHOP_CHOPCLK_LENGTH                     0x00000007

#define _CHOP_CHPCLKEN_POSITION                  0x0000000F
#define _CHOP_CHPCLKEN_MASK                      0x00008000
#define _CHOP_CHPCLKEN_LENGTH                    0x00000001

#define _CHOP_CHOPCLK0_POSITION                  0x00000003
#define _CHOP_CHOPCLK0_MASK                      0x00000008
#define _CHOP_CHOPCLK0_LENGTH                    0x00000001

#define _CHOP_CHOPCLK1_POSITION                  0x00000004
#define _CHOP_CHOPCLK1_MASK                      0x00000010
#define _CHOP_CHOPCLK1_LENGTH                    0x00000001

#define _CHOP_CHOPCLK2_POSITION                  0x00000005
#define _CHOP_CHOPCLK2_MASK                      0x00000020
#define _CHOP_CHOPCLK2_LENGTH                    0x00000001

#define _CHOP_CHOPCLK3_POSITION                  0x00000006
#define _CHOP_CHOPCLK3_MASK                      0x00000040
#define _CHOP_CHOPCLK3_LENGTH                    0x00000001

#define _CHOP_CHOPCLK4_POSITION                  0x00000007
#define _CHOP_CHOPCLK4_MASK                      0x00000080
#define _CHOP_CHOPCLK4_LENGTH                    0x00000001

#define _CHOP_CHOPCLK5_POSITION                  0x00000008
#define _CHOP_CHOPCLK5_MASK                      0x00000100
#define _CHOP_CHOPCLK5_LENGTH                    0x00000001

#define _CHOP_CHOPCLK6_POSITION                  0x00000009
#define _CHOP_CHOPCLK6_MASK                      0x00000200
#define _CHOP_CHOPCLK6_LENGTH                    0x00000001

#define _PWMCON1_IUE_POSITION                    0x00000000
#define _PWMCON1_IUE_MASK                        0x00000001
#define _PWMCON1_IUE_LENGTH                      0x00000001

#define _PWMCON1_XPRES_POSITION                  0x00000001
#define _PWMCON1_XPRES_MASK                      0x00000002
#define _PWMCON1_XPRES_LENGTH                    0x00000001

#define _PWMCON1_CAM_POSITION                    0x00000002
#define _PWMCON1_CAM_MASK                        0x00000004
#define _PWMCON1_CAM_LENGTH                      0x00000001

#define _PWMCON1_MTBS_POSITION                   0x00000003
#define _PWMCON1_MTBS_MASK                       0x00000008
#define _PWMCON1_MTBS_LENGTH                     0x00000001

#define _PWMCON1_DTCP_POSITION                   0x00000005
#define _PWMCON1_DTCP_MASK                       0x00000020
#define _PWMCON1_DTCP_LENGTH                     0x00000001

#define _PWMCON1_DTC_POSITION                    0x00000006
#define _PWMCON1_DTC_MASK                        0x000000C0
#define _PWMCON1_DTC_LENGTH                      0x00000002

#define _PWMCON1_MDCS_POSITION                   0x00000008
#define _PWMCON1_MDCS_MASK                       0x00000100
#define _PWMCON1_MDCS_LENGTH                     0x00000001

#define _PWMCON1_ITB_POSITION                    0x00000009
#define _PWMCON1_ITB_MASK                        0x00000200
#define _PWMCON1_ITB_LENGTH                      0x00000001

#define _PWMCON1_TRGIEN_POSITION                 0x0000000A
#define _PWMCON1_TRGIEN_MASK                     0x00000400
#define _PWMCON1_TRGIEN_LENGTH                   0x00000001

#define _PWMCON1_CLIEN_POSITION                  0x0000000B
#define _PWMCON1_CLIEN_MASK                      0x00000800
#define _PWMCON1_CLIEN_LENGTH                    0x00000001

#define _PWMCON1_FLTIEN_POSITION                 0x0000000C
#define _PWMCON1_FLTIEN_MASK                     0x00001000
#define _PWMCON1_FLTIEN_LENGTH                   0x00000001

#define _PWMCON1_TRGSTAT_POSITION                0x0000000D
#define _PWMCON1_TRGSTAT_MASK                    0x00002000
#define _PWMCON1_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON1_CLSTAT_POSITION                 0x0000000E
#define _PWMCON1_CLSTAT_MASK                     0x00004000
#define _PWMCON1_CLSTAT_LENGTH                   0x00000001

#define _PWMCON1_FLTSTAT_POSITION                0x0000000F
#define _PWMCON1_FLTSTAT_MASK                    0x00008000
#define _PWMCON1_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON1_DTC0_POSITION                   0x00000006
#define _PWMCON1_DTC0_MASK                       0x00000040
#define _PWMCON1_DTC0_LENGTH                     0x00000001

#define _PWMCON1_DTC1_POSITION                   0x00000007
#define _PWMCON1_DTC1_MASK                       0x00000080
#define _PWMCON1_DTC1_LENGTH                     0x00000001

#define _IOCON1_OSYNC_POSITION                   0x00000000
#define _IOCON1_OSYNC_MASK                       0x00000001
#define _IOCON1_OSYNC_LENGTH                     0x00000001

#define _IOCON1_SWAP_POSITION                    0x00000001
#define _IOCON1_SWAP_MASK                        0x00000002
#define _IOCON1_SWAP_LENGTH                      0x00000001

#define _IOCON1_CLDAT_POSITION                   0x00000002
#define _IOCON1_CLDAT_MASK                       0x0000000C
#define _IOCON1_CLDAT_LENGTH                     0x00000002

#define _IOCON1_FLTDAT_POSITION                  0x00000004
#define _IOCON1_FLTDAT_MASK                      0x00000030
#define _IOCON1_FLTDAT_LENGTH                    0x00000002

#define _IOCON1_OVRDAT_POSITION                  0x00000006
#define _IOCON1_OVRDAT_MASK                      0x000000C0
#define _IOCON1_OVRDAT_LENGTH                    0x00000002

#define _IOCON1_OVRENL_POSITION                  0x00000008
#define _IOCON1_OVRENL_MASK                      0x00000100
#define _IOCON1_OVRENL_LENGTH                    0x00000001

#define _IOCON1_OVRENH_POSITION                  0x00000009
#define _IOCON1_OVRENH_MASK                      0x00000200
#define _IOCON1_OVRENH_LENGTH                    0x00000001

#define _IOCON1_PMOD_POSITION                    0x0000000A
#define _IOCON1_PMOD_MASK                        0x00000C00
#define _IOCON1_PMOD_LENGTH                      0x00000002

#define _IOCON1_POLL_POSITION                    0x0000000C
#define _IOCON1_POLL_MASK                        0x00001000
#define _IOCON1_POLL_LENGTH                      0x00000001

#define _IOCON1_POLH_POSITION                    0x0000000D
#define _IOCON1_POLH_MASK                        0x00002000
#define _IOCON1_POLH_LENGTH                      0x00000001

#define _IOCON1_PENL_POSITION                    0x0000000E
#define _IOCON1_PENL_MASK                        0x00004000
#define _IOCON1_PENL_LENGTH                      0x00000001

#define _IOCON1_PENH_POSITION                    0x0000000F
#define _IOCON1_PENH_MASK                        0x00008000
#define _IOCON1_PENH_LENGTH                      0x00000001

#define _IOCON1_CLDAT0_POSITION                  0x00000002
#define _IOCON1_CLDAT0_MASK                      0x00000004
#define _IOCON1_CLDAT0_LENGTH                    0x00000001

#define _IOCON1_CLDAT1_POSITION                  0x00000003
#define _IOCON1_CLDAT1_MASK                      0x00000008
#define _IOCON1_CLDAT1_LENGTH                    0x00000001

#define _IOCON1_FLTDAT0_POSITION                 0x00000004
#define _IOCON1_FLTDAT0_MASK                     0x00000010
#define _IOCON1_FLTDAT0_LENGTH                   0x00000001

#define _IOCON1_FLTDAT1_POSITION                 0x00000005
#define _IOCON1_FLTDAT1_MASK                     0x00000020
#define _IOCON1_FLTDAT1_LENGTH                   0x00000001

#define _IOCON1_OVRDAT0_POSITION                 0x00000006
#define _IOCON1_OVRDAT0_MASK                     0x00000040
#define _IOCON1_OVRDAT0_LENGTH                   0x00000001

#define _IOCON1_OVRDAT1_POSITION                 0x00000007
#define _IOCON1_OVRDAT1_MASK                     0x00000080
#define _IOCON1_OVRDAT1_LENGTH                   0x00000001

#define _IOCON1_PMOD0_POSITION                   0x0000000A
#define _IOCON1_PMOD0_MASK                       0x00000400
#define _IOCON1_PMOD0_LENGTH                     0x00000001

#define _IOCON1_PMOD1_POSITION                   0x0000000B
#define _IOCON1_PMOD1_MASK                       0x00000800
#define _IOCON1_PMOD1_LENGTH                     0x00000001

#define _FCLCON1_FLTMOD_POSITION                 0x00000000
#define _FCLCON1_FLTMOD_MASK                     0x00000003
#define _FCLCON1_FLTMOD_LENGTH                   0x00000002

#define _FCLCON1_FLTPOL_POSITION                 0x00000002
#define _FCLCON1_FLTPOL_MASK                     0x00000004
#define _FCLCON1_FLTPOL_LENGTH                   0x00000001

#define _FCLCON1_FLTSRC_POSITION                 0x00000003
#define _FCLCON1_FLTSRC_MASK                     0x000000F8
#define _FCLCON1_FLTSRC_LENGTH                   0x00000005

#define _FCLCON1_CLMOD_POSITION                  0x00000008
#define _FCLCON1_CLMOD_MASK                      0x00000100
#define _FCLCON1_CLMOD_LENGTH                    0x00000001

#define _FCLCON1_CLPOL_POSITION                  0x00000009
#define _FCLCON1_CLPOL_MASK                      0x00000200
#define _FCLCON1_CLPOL_LENGTH                    0x00000001

#define _FCLCON1_CLSRC_POSITION                  0x0000000A
#define _FCLCON1_CLSRC_MASK                      0x00007C00
#define _FCLCON1_CLSRC_LENGTH                    0x00000005

#define _FCLCON1_IFLTMOD_POSITION                0x0000000F
#define _FCLCON1_IFLTMOD_MASK                    0x00008000
#define _FCLCON1_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD0_POSITION                0x00000000
#define _FCLCON1_FLTMOD0_MASK                    0x00000001
#define _FCLCON1_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD1_POSITION                0x00000001
#define _FCLCON1_FLTMOD1_MASK                    0x00000002
#define _FCLCON1_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC0_POSITION                0x00000003
#define _FCLCON1_FLTSRC0_MASK                    0x00000008
#define _FCLCON1_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC1_POSITION                0x00000004
#define _FCLCON1_FLTSRC1_MASK                    0x00000010
#define _FCLCON1_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC2_POSITION                0x00000005
#define _FCLCON1_FLTSRC2_MASK                    0x00000020
#define _FCLCON1_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC3_POSITION                0x00000006
#define _FCLCON1_FLTSRC3_MASK                    0x00000040
#define _FCLCON1_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC4_POSITION                0x00000007
#define _FCLCON1_FLTSRC4_MASK                    0x00000080
#define _FCLCON1_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON1_CLSRC0_POSITION                 0x0000000A
#define _FCLCON1_CLSRC0_MASK                     0x00000400
#define _FCLCON1_CLSRC0_LENGTH                   0x00000001

#define _FCLCON1_CLSRC1_POSITION                 0x0000000B
#define _FCLCON1_CLSRC1_MASK                     0x00000800
#define _FCLCON1_CLSRC1_LENGTH                   0x00000001

#define _FCLCON1_CLSRC2_POSITION                 0x0000000C
#define _FCLCON1_CLSRC2_MASK                     0x00001000
#define _FCLCON1_CLSRC2_LENGTH                   0x00000001

#define _FCLCON1_CLSRC3_POSITION                 0x0000000D
#define _FCLCON1_CLSRC3_MASK                     0x00002000
#define _FCLCON1_CLSRC3_LENGTH                   0x00000001

#define _FCLCON1_CLSRC4_POSITION                 0x0000000E
#define _FCLCON1_CLSRC4_MASK                     0x00004000
#define _FCLCON1_CLSRC4_LENGTH                   0x00000001

#define _TRIG1_TRGCMP_POSITION                   0x00000003
#define _TRIG1_TRGCMP_MASK                       0x0000FFF8
#define _TRIG1_TRGCMP_LENGTH                     0x0000000D

#define _TRIG1_TRGCMP0_POSITION                  0x00000003
#define _TRIG1_TRGCMP0_MASK                      0x00000008
#define _TRIG1_TRGCMP0_LENGTH                    0x00000001

#define _TRIG1_TRGCMP1_POSITION                  0x00000004
#define _TRIG1_TRGCMP1_MASK                      0x00000010
#define _TRIG1_TRGCMP1_LENGTH                    0x00000001

#define _TRIG1_TRGCMP2_POSITION                  0x00000005
#define _TRIG1_TRGCMP2_MASK                      0x00000020
#define _TRIG1_TRGCMP2_LENGTH                    0x00000001

#define _TRIG1_TRGCMP3_POSITION                  0x00000006
#define _TRIG1_TRGCMP3_MASK                      0x00000040
#define _TRIG1_TRGCMP3_LENGTH                    0x00000001

#define _TRIG1_TRGCMP4_POSITION                  0x00000007
#define _TRIG1_TRGCMP4_MASK                      0x00000080
#define _TRIG1_TRGCMP4_LENGTH                    0x00000001

#define _TRIG1_TRGCMP5_POSITION                  0x00000008
#define _TRIG1_TRGCMP5_MASK                      0x00000100
#define _TRIG1_TRGCMP5_LENGTH                    0x00000001

#define _TRIG1_TRGCMP6_POSITION                  0x00000009
#define _TRIG1_TRGCMP6_MASK                      0x00000200
#define _TRIG1_TRGCMP6_LENGTH                    0x00000001

#define _TRIG1_TRGCMP7_POSITION                  0x0000000A
#define _TRIG1_TRGCMP7_MASK                      0x00000400
#define _TRIG1_TRGCMP7_LENGTH                    0x00000001

#define _TRIG1_TRGCMP8_POSITION                  0x0000000B
#define _TRIG1_TRGCMP8_MASK                      0x00000800
#define _TRIG1_TRGCMP8_LENGTH                    0x00000001

#define _TRIG1_TRGCMP9_POSITION                  0x0000000C
#define _TRIG1_TRGCMP9_MASK                      0x00001000
#define _TRIG1_TRGCMP9_LENGTH                    0x00000001

#define _TRIG1_TRGCMP10_POSITION                 0x0000000D
#define _TRIG1_TRGCMP10_MASK                     0x00002000
#define _TRIG1_TRGCMP10_LENGTH                   0x00000001

#define _TRIG1_TRGCMP11_POSITION                 0x0000000E
#define _TRIG1_TRGCMP11_MASK                     0x00004000
#define _TRIG1_TRGCMP11_LENGTH                   0x00000001

#define _TRIG1_TRGCMP12_POSITION                 0x0000000F
#define _TRIG1_TRGCMP12_MASK                     0x00008000
#define _TRIG1_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON1_TRGSTRT_POSITION                0x00000000
#define _TRGCON1_TRGSTRT_MASK                    0x0000003F
#define _TRGCON1_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON1_DTM_POSITION                    0x00000007
#define _TRGCON1_DTM_MASK                        0x00000080
#define _TRGCON1_DTM_LENGTH                      0x00000001

#define _TRGCON1_TRGDIV_POSITION                 0x0000000C
#define _TRGCON1_TRGDIV_MASK                     0x0000F000
#define _TRGCON1_TRGDIV_LENGTH                   0x00000004

#define _TRGCON1_TRGSTRT0_POSITION               0x00000000
#define _TRGCON1_TRGSTRT0_MASK                   0x00000001
#define _TRGCON1_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT1_POSITION               0x00000001
#define _TRGCON1_TRGSTRT1_MASK                   0x00000002
#define _TRGCON1_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT2_POSITION               0x00000002
#define _TRGCON1_TRGSTRT2_MASK                   0x00000004
#define _TRGCON1_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT3_POSITION               0x00000003
#define _TRGCON1_TRGSTRT3_MASK                   0x00000008
#define _TRGCON1_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT4_POSITION               0x00000004
#define _TRGCON1_TRGSTRT4_MASK                   0x00000010
#define _TRGCON1_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT5_POSITION               0x00000005
#define _TRGCON1_TRGSTRT5_MASK                   0x00000020
#define _TRGCON1_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON1_TRGDIV0_POSITION                0x0000000C
#define _TRGCON1_TRGDIV0_MASK                    0x00001000
#define _TRGCON1_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV1_POSITION                0x0000000D
#define _TRGCON1_TRGDIV1_MASK                    0x00002000
#define _TRGCON1_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV2_POSITION                0x0000000E
#define _TRGCON1_TRGDIV2_MASK                    0x00004000
#define _TRGCON1_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV3_POSITION                0x0000000F
#define _TRGCON1_TRGDIV3_MASK                    0x00008000
#define _TRGCON1_TRGDIV3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP_POSITION                 0x00000003
#define _STRIG1_STRGCMP_MASK                     0x0000FFF8
#define _STRIG1_STRGCMP_LENGTH                   0x0000000D

#define _STRIG1_STRGCMP0_POSITION                0x00000003
#define _STRIG1_STRGCMP0_MASK                    0x00000008
#define _STRIG1_STRGCMP0_LENGTH                  0x00000001

#define _STRIG1_STRGCMP1_POSITION                0x00000004
#define _STRIG1_STRGCMP1_MASK                    0x00000010
#define _STRIG1_STRGCMP1_LENGTH                  0x00000001

#define _STRIG1_STRGCMP2_POSITION                0x00000005
#define _STRIG1_STRGCMP2_MASK                    0x00000020
#define _STRIG1_STRGCMP2_LENGTH                  0x00000001

#define _STRIG1_STRGCMP3_POSITION                0x00000006
#define _STRIG1_STRGCMP3_MASK                    0x00000040
#define _STRIG1_STRGCMP3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP4_POSITION                0x00000007
#define _STRIG1_STRGCMP4_MASK                    0x00000080
#define _STRIG1_STRGCMP4_LENGTH                  0x00000001

#define _STRIG1_STRGCMP5_POSITION                0x00000008
#define _STRIG1_STRGCMP5_MASK                    0x00000100
#define _STRIG1_STRGCMP5_LENGTH                  0x00000001

#define _STRIG1_STRGCMP6_POSITION                0x00000009
#define _STRIG1_STRGCMP6_MASK                    0x00000200
#define _STRIG1_STRGCMP6_LENGTH                  0x00000001

#define _STRIG1_STRGCMP7_POSITION                0x0000000A
#define _STRIG1_STRGCMP7_MASK                    0x00000400
#define _STRIG1_STRGCMP7_LENGTH                  0x00000001

#define _STRIG1_STRGCMP8_POSITION                0x0000000B
#define _STRIG1_STRGCMP8_MASK                    0x00000800
#define _STRIG1_STRGCMP8_LENGTH                  0x00000001

#define _STRIG1_STRGCMP9_POSITION                0x0000000C
#define _STRIG1_STRGCMP9_MASK                    0x00001000
#define _STRIG1_STRGCMP9_LENGTH                  0x00000001

#define _STRIG1_STRGCMP10_POSITION               0x0000000D
#define _STRIG1_STRGCMP10_MASK                   0x00002000
#define _STRIG1_STRGCMP10_LENGTH                 0x00000001

#define _STRIG1_STRGCMP11_POSITION               0x0000000E
#define _STRIG1_STRGCMP11_MASK                   0x00004000
#define _STRIG1_STRGCMP11_LENGTH                 0x00000001

#define _STRIG1_STRGCMP12_POSITION               0x0000000F
#define _STRIG1_STRGCMP12_MASK                   0x00008000
#define _STRIG1_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP10_POSITION               0x00000003
#define _PWMCAP1_PWMCAP10_MASK                   0x00000008
#define _PWMCAP1_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP11_POSITION               0x00000004
#define _PWMCAP1_PWMCAP11_MASK                   0x00000010
#define _PWMCAP1_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP12_POSITION               0x00000005
#define _PWMCAP1_PWMCAP12_MASK                   0x00000020
#define _PWMCAP1_PWMCAP12_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP13_POSITION               0x00000006
#define _PWMCAP1_PWMCAP13_MASK                   0x00000040
#define _PWMCAP1_PWMCAP13_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP14_POSITION               0x00000007
#define _PWMCAP1_PWMCAP14_MASK                   0x00000080
#define _PWMCAP1_PWMCAP14_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP15_POSITION               0x00000008
#define _PWMCAP1_PWMCAP15_MASK                   0x00000100
#define _PWMCAP1_PWMCAP15_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP16_POSITION               0x00000009
#define _PWMCAP1_PWMCAP16_MASK                   0x00000200
#define _PWMCAP1_PWMCAP16_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP17_POSITION               0x0000000A
#define _PWMCAP1_PWMCAP17_MASK                   0x00000400
#define _PWMCAP1_PWMCAP17_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP18_POSITION               0x0000000B
#define _PWMCAP1_PWMCAP18_MASK                   0x00000800
#define _PWMCAP1_PWMCAP18_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP19_POSITION               0x0000000C
#define _PWMCAP1_PWMCAP19_MASK                   0x00001000
#define _PWMCAP1_PWMCAP19_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP110_POSITION              0x0000000D
#define _PWMCAP1_PWMCAP110_MASK                  0x00002000
#define _PWMCAP1_PWMCAP110_LENGTH                0x00000001

#define _PWMCAP1_PWMCAP111_POSITION              0x0000000E
#define _PWMCAP1_PWMCAP111_MASK                  0x00004000
#define _PWMCAP1_PWMCAP111_LENGTH                0x00000001

#define _PWMCAP1_PWMCAP112_POSITION              0x0000000F
#define _PWMCAP1_PWMCAP112_MASK                  0x00008000
#define _PWMCAP1_PWMCAP112_LENGTH                0x00000001

#define _LEBCON1_BPLL_POSITION                   0x00000000
#define _LEBCON1_BPLL_MASK                       0x00000001
#define _LEBCON1_BPLL_LENGTH                     0x00000001

#define _LEBCON1_BPLH_POSITION                   0x00000001
#define _LEBCON1_BPLH_MASK                       0x00000002
#define _LEBCON1_BPLH_LENGTH                     0x00000001

#define _LEBCON1_BPHL_POSITION                   0x00000002
#define _LEBCON1_BPHL_MASK                       0x00000004
#define _LEBCON1_BPHL_LENGTH                     0x00000001

#define _LEBCON1_BPHH_POSITION                   0x00000003
#define _LEBCON1_BPHH_MASK                       0x00000008
#define _LEBCON1_BPHH_LENGTH                     0x00000001

#define _LEBCON1_BCL_POSITION                    0x00000004
#define _LEBCON1_BCL_MASK                        0x00000010
#define _LEBCON1_BCL_LENGTH                      0x00000001

#define _LEBCON1_BCH_POSITION                    0x00000005
#define _LEBCON1_BCH_MASK                        0x00000020
#define _LEBCON1_BCH_LENGTH                      0x00000001

#define _LEBCON1_CLLEBEN_POSITION                0x0000000A
#define _LEBCON1_CLLEBEN_MASK                    0x00000400
#define _LEBCON1_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON1_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON1_FLTLEBEN_MASK                   0x00000800
#define _LEBCON1_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON1_PLF_POSITION                    0x0000000C
#define _LEBCON1_PLF_MASK                        0x00001000
#define _LEBCON1_PLF_LENGTH                      0x00000001

#define _LEBCON1_PLR_POSITION                    0x0000000D
#define _LEBCON1_PLR_MASK                        0x00002000
#define _LEBCON1_PLR_LENGTH                      0x00000001

#define _LEBCON1_PHF_POSITION                    0x0000000E
#define _LEBCON1_PHF_MASK                        0x00004000
#define _LEBCON1_PHF_LENGTH                      0x00000001

#define _LEBCON1_PHR_POSITION                    0x0000000F
#define _LEBCON1_PHR_MASK                        0x00008000
#define _LEBCON1_PHR_LENGTH                      0x00000001

#define _LEBDLY1_LEB_POSITION                    0x00000003
#define _LEBDLY1_LEB_MASK                        0x00000FF8
#define _LEBDLY1_LEB_LENGTH                      0x00000009

#define _LEBDLY1_LEB0_POSITION                   0x00000003
#define _LEBDLY1_LEB0_MASK                       0x00000008
#define _LEBDLY1_LEB0_LENGTH                     0x00000001

#define _LEBDLY1_LEB1_POSITION                   0x00000004
#define _LEBDLY1_LEB1_MASK                       0x00000010
#define _LEBDLY1_LEB1_LENGTH                     0x00000001

#define _LEBDLY1_LEB2_POSITION                   0x00000005
#define _LEBDLY1_LEB2_MASK                       0x00000020
#define _LEBDLY1_LEB2_LENGTH                     0x00000001

#define _LEBDLY1_LEB3_POSITION                   0x00000006
#define _LEBDLY1_LEB3_MASK                       0x00000040
#define _LEBDLY1_LEB3_LENGTH                     0x00000001

#define _LEBDLY1_LEB4_POSITION                   0x00000007
#define _LEBDLY1_LEB4_MASK                       0x00000080
#define _LEBDLY1_LEB4_LENGTH                     0x00000001

#define _LEBDLY1_LEB5_POSITION                   0x00000008
#define _LEBDLY1_LEB5_MASK                       0x00000100
#define _LEBDLY1_LEB5_LENGTH                     0x00000001

#define _LEBDLY1_LEB6_POSITION                   0x00000009
#define _LEBDLY1_LEB6_MASK                       0x00000200
#define _LEBDLY1_LEB6_LENGTH                     0x00000001

#define _LEBDLY1_LEB7_POSITION                   0x0000000A
#define _LEBDLY1_LEB7_MASK                       0x00000400
#define _LEBDLY1_LEB7_LENGTH                     0x00000001

#define _LEBDLY1_LEB8_POSITION                   0x0000000B
#define _LEBDLY1_LEB8_MASK                       0x00000800
#define _LEBDLY1_LEB8_LENGTH                     0x00000001

#define _AUXCON1_CHOPLEN_POSITION                0x00000000
#define _AUXCON1_CHOPLEN_MASK                    0x00000001
#define _AUXCON1_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPHEN_POSITION                0x00000001
#define _AUXCON1_CHOPHEN_MASK                    0x00000002
#define _AUXCON1_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPSEL_POSITION                0x00000002
#define _AUXCON1_CHOPSEL_MASK                    0x0000003C
#define _AUXCON1_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON1_BLANKSEL_POSITION               0x00000008
#define _AUXCON1_BLANKSEL_MASK                   0x00000F00
#define _AUXCON1_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON1_HRDDIS_POSITION                 0x0000000E
#define _AUXCON1_HRDDIS_MASK                     0x00004000
#define _AUXCON1_HRDDIS_LENGTH                   0x00000001

#define _AUXCON1_HRPDIS_POSITION                 0x0000000F
#define _AUXCON1_HRPDIS_MASK                     0x00008000
#define _AUXCON1_HRPDIS_LENGTH                   0x00000001

#define _AUXCON1_CHOPSEL0_POSITION               0x00000002
#define _AUXCON1_CHOPSEL0_MASK                   0x00000004
#define _AUXCON1_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL1_POSITION               0x00000003
#define _AUXCON1_CHOPSEL1_MASK                   0x00000008
#define _AUXCON1_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL2_POSITION               0x00000004
#define _AUXCON1_CHOPSEL2_MASK                   0x00000010
#define _AUXCON1_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL3_POSITION               0x00000005
#define _AUXCON1_CHOPSEL3_MASK                   0x00000020
#define _AUXCON1_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON1_BLANKSEL0_POSITION              0x00000008
#define _AUXCON1_BLANKSEL0_MASK                  0x00000100
#define _AUXCON1_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL1_POSITION              0x00000009
#define _AUXCON1_BLANKSEL1_MASK                  0x00000200
#define _AUXCON1_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON1_BLANKSEL2_MASK                  0x00000400
#define _AUXCON1_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON1_BLANKSEL3_MASK                  0x00000800
#define _AUXCON1_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON2_IUE_POSITION                    0x00000000
#define _PWMCON2_IUE_MASK                        0x00000001
#define _PWMCON2_IUE_LENGTH                      0x00000001

#define _PWMCON2_XPRES_POSITION                  0x00000001
#define _PWMCON2_XPRES_MASK                      0x00000002
#define _PWMCON2_XPRES_LENGTH                    0x00000001

#define _PWMCON2_CAM_POSITION                    0x00000002
#define _PWMCON2_CAM_MASK                        0x00000004
#define _PWMCON2_CAM_LENGTH                      0x00000001

#define _PWMCON2_MTBS_POSITION                   0x00000003
#define _PWMCON2_MTBS_MASK                       0x00000008
#define _PWMCON2_MTBS_LENGTH                     0x00000001

#define _PWMCON2_DTCP_POSITION                   0x00000005
#define _PWMCON2_DTCP_MASK                       0x00000020
#define _PWMCON2_DTCP_LENGTH                     0x00000001

#define _PWMCON2_DTC_POSITION                    0x00000006
#define _PWMCON2_DTC_MASK                        0x000000C0
#define _PWMCON2_DTC_LENGTH                      0x00000002

#define _PWMCON2_MDCS_POSITION                   0x00000008
#define _PWMCON2_MDCS_MASK                       0x00000100
#define _PWMCON2_MDCS_LENGTH                     0x00000001

#define _PWMCON2_ITB_POSITION                    0x00000009
#define _PWMCON2_ITB_MASK                        0x00000200
#define _PWMCON2_ITB_LENGTH                      0x00000001

#define _PWMCON2_TRGIEN_POSITION                 0x0000000A
#define _PWMCON2_TRGIEN_MASK                     0x00000400
#define _PWMCON2_TRGIEN_LENGTH                   0x00000001

#define _PWMCON2_CLIEN_POSITION                  0x0000000B
#define _PWMCON2_CLIEN_MASK                      0x00000800
#define _PWMCON2_CLIEN_LENGTH                    0x00000001

#define _PWMCON2_FLTIEN_POSITION                 0x0000000C
#define _PWMCON2_FLTIEN_MASK                     0x00001000
#define _PWMCON2_FLTIEN_LENGTH                   0x00000001

#define _PWMCON2_TRGSTAT_POSITION                0x0000000D
#define _PWMCON2_TRGSTAT_MASK                    0x00002000
#define _PWMCON2_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON2_CLSTAT_POSITION                 0x0000000E
#define _PWMCON2_CLSTAT_MASK                     0x00004000
#define _PWMCON2_CLSTAT_LENGTH                   0x00000001

#define _PWMCON2_FLTSTAT_POSITION                0x0000000F
#define _PWMCON2_FLTSTAT_MASK                    0x00008000
#define _PWMCON2_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON2_DTC0_POSITION                   0x00000006
#define _PWMCON2_DTC0_MASK                       0x00000040
#define _PWMCON2_DTC0_LENGTH                     0x00000001

#define _PWMCON2_DTC1_POSITION                   0x00000007
#define _PWMCON2_DTC1_MASK                       0x00000080
#define _PWMCON2_DTC1_LENGTH                     0x00000001

#define _IOCON2_OSYNC_POSITION                   0x00000000
#define _IOCON2_OSYNC_MASK                       0x00000001
#define _IOCON2_OSYNC_LENGTH                     0x00000001

#define _IOCON2_SWAP_POSITION                    0x00000001
#define _IOCON2_SWAP_MASK                        0x00000002
#define _IOCON2_SWAP_LENGTH                      0x00000001

#define _IOCON2_CLDAT_POSITION                   0x00000002
#define _IOCON2_CLDAT_MASK                       0x0000000C
#define _IOCON2_CLDAT_LENGTH                     0x00000002

#define _IOCON2_FLTDAT_POSITION                  0x00000004
#define _IOCON2_FLTDAT_MASK                      0x00000030
#define _IOCON2_FLTDAT_LENGTH                    0x00000002

#define _IOCON2_OVRDAT_POSITION                  0x00000006
#define _IOCON2_OVRDAT_MASK                      0x000000C0
#define _IOCON2_OVRDAT_LENGTH                    0x00000002

#define _IOCON2_OVRENL_POSITION                  0x00000008
#define _IOCON2_OVRENL_MASK                      0x00000100
#define _IOCON2_OVRENL_LENGTH                    0x00000001

#define _IOCON2_OVRENH_POSITION                  0x00000009
#define _IOCON2_OVRENH_MASK                      0x00000200
#define _IOCON2_OVRENH_LENGTH                    0x00000001

#define _IOCON2_PMOD_POSITION                    0x0000000A
#define _IOCON2_PMOD_MASK                        0x00000C00
#define _IOCON2_PMOD_LENGTH                      0x00000002

#define _IOCON2_POLL_POSITION                    0x0000000C
#define _IOCON2_POLL_MASK                        0x00001000
#define _IOCON2_POLL_LENGTH                      0x00000001

#define _IOCON2_POLH_POSITION                    0x0000000D
#define _IOCON2_POLH_MASK                        0x00002000
#define _IOCON2_POLH_LENGTH                      0x00000001

#define _IOCON2_PENL_POSITION                    0x0000000E
#define _IOCON2_PENL_MASK                        0x00004000
#define _IOCON2_PENL_LENGTH                      0x00000001

#define _IOCON2_PENH_POSITION                    0x0000000F
#define _IOCON2_PENH_MASK                        0x00008000
#define _IOCON2_PENH_LENGTH                      0x00000001

#define _IOCON2_CLDAT0_POSITION                  0x00000002
#define _IOCON2_CLDAT0_MASK                      0x00000004
#define _IOCON2_CLDAT0_LENGTH                    0x00000001

#define _IOCON2_CLDAT1_POSITION                  0x00000003
#define _IOCON2_CLDAT1_MASK                      0x00000008
#define _IOCON2_CLDAT1_LENGTH                    0x00000001

#define _IOCON2_FLTDAT0_POSITION                 0x00000004
#define _IOCON2_FLTDAT0_MASK                     0x00000010
#define _IOCON2_FLTDAT0_LENGTH                   0x00000001

#define _IOCON2_FLTDAT1_POSITION                 0x00000005
#define _IOCON2_FLTDAT1_MASK                     0x00000020
#define _IOCON2_FLTDAT1_LENGTH                   0x00000001

#define _IOCON2_OVRDAT0_POSITION                 0x00000006
#define _IOCON2_OVRDAT0_MASK                     0x00000040
#define _IOCON2_OVRDAT0_LENGTH                   0x00000001

#define _IOCON2_OVRDAT1_POSITION                 0x00000007
#define _IOCON2_OVRDAT1_MASK                     0x00000080
#define _IOCON2_OVRDAT1_LENGTH                   0x00000001

#define _IOCON2_PMOD0_POSITION                   0x0000000A
#define _IOCON2_PMOD0_MASK                       0x00000400
#define _IOCON2_PMOD0_LENGTH                     0x00000001

#define _IOCON2_PMOD1_POSITION                   0x0000000B
#define _IOCON2_PMOD1_MASK                       0x00000800
#define _IOCON2_PMOD1_LENGTH                     0x00000001

#define _FCLCON2_FLTMOD_POSITION                 0x00000000
#define _FCLCON2_FLTMOD_MASK                     0x00000003
#define _FCLCON2_FLTMOD_LENGTH                   0x00000002

#define _FCLCON2_FLTPOL_POSITION                 0x00000002
#define _FCLCON2_FLTPOL_MASK                     0x00000004
#define _FCLCON2_FLTPOL_LENGTH                   0x00000001

#define _FCLCON2_FLTSRC_POSITION                 0x00000003
#define _FCLCON2_FLTSRC_MASK                     0x000000F8
#define _FCLCON2_FLTSRC_LENGTH                   0x00000005

#define _FCLCON2_CLMOD_POSITION                  0x00000008
#define _FCLCON2_CLMOD_MASK                      0x00000100
#define _FCLCON2_CLMOD_LENGTH                    0x00000001

#define _FCLCON2_CLPOL_POSITION                  0x00000009
#define _FCLCON2_CLPOL_MASK                      0x00000200
#define _FCLCON2_CLPOL_LENGTH                    0x00000001

#define _FCLCON2_CLSRC_POSITION                  0x0000000A
#define _FCLCON2_CLSRC_MASK                      0x00007C00
#define _FCLCON2_CLSRC_LENGTH                    0x00000005

#define _FCLCON2_IFLTMOD_POSITION                0x0000000F
#define _FCLCON2_IFLTMOD_MASK                    0x00008000
#define _FCLCON2_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON2_FLTMOD0_POSITION                0x00000000
#define _FCLCON2_FLTMOD0_MASK                    0x00000001
#define _FCLCON2_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON2_FLTMOD1_POSITION                0x00000001
#define _FCLCON2_FLTMOD1_MASK                    0x00000002
#define _FCLCON2_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC0_POSITION                0x00000003
#define _FCLCON2_FLTSRC0_MASK                    0x00000008
#define _FCLCON2_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC1_POSITION                0x00000004
#define _FCLCON2_FLTSRC1_MASK                    0x00000010
#define _FCLCON2_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC2_POSITION                0x00000005
#define _FCLCON2_FLTSRC2_MASK                    0x00000020
#define _FCLCON2_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC3_POSITION                0x00000006
#define _FCLCON2_FLTSRC3_MASK                    0x00000040
#define _FCLCON2_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC4_POSITION                0x00000007
#define _FCLCON2_FLTSRC4_MASK                    0x00000080
#define _FCLCON2_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON2_CLSRC0_POSITION                 0x0000000A
#define _FCLCON2_CLSRC0_MASK                     0x00000400
#define _FCLCON2_CLSRC0_LENGTH                   0x00000001

#define _FCLCON2_CLSRC1_POSITION                 0x0000000B
#define _FCLCON2_CLSRC1_MASK                     0x00000800
#define _FCLCON2_CLSRC1_LENGTH                   0x00000001

#define _FCLCON2_CLSRC2_POSITION                 0x0000000C
#define _FCLCON2_CLSRC2_MASK                     0x00001000
#define _FCLCON2_CLSRC2_LENGTH                   0x00000001

#define _FCLCON2_CLSRC3_POSITION                 0x0000000D
#define _FCLCON2_CLSRC3_MASK                     0x00002000
#define _FCLCON2_CLSRC3_LENGTH                   0x00000001

#define _FCLCON2_CLSRC4_POSITION                 0x0000000E
#define _FCLCON2_CLSRC4_MASK                     0x00004000
#define _FCLCON2_CLSRC4_LENGTH                   0x00000001

#define _TRIG2_TRGCMP_POSITION                   0x00000003
#define _TRIG2_TRGCMP_MASK                       0x0000FFF8
#define _TRIG2_TRGCMP_LENGTH                     0x0000000D

#define _TRIG2_TRGCMP0_POSITION                  0x00000003
#define _TRIG2_TRGCMP0_MASK                      0x00000008
#define _TRIG2_TRGCMP0_LENGTH                    0x00000001

#define _TRIG2_TRGCMP1_POSITION                  0x00000004
#define _TRIG2_TRGCMP1_MASK                      0x00000010
#define _TRIG2_TRGCMP1_LENGTH                    0x00000001

#define _TRIG2_TRGCMP2_POSITION                  0x00000005
#define _TRIG2_TRGCMP2_MASK                      0x00000020
#define _TRIG2_TRGCMP2_LENGTH                    0x00000001

#define _TRIG2_TRGCMP3_POSITION                  0x00000006
#define _TRIG2_TRGCMP3_MASK                      0x00000040
#define _TRIG2_TRGCMP3_LENGTH                    0x00000001

#define _TRIG2_TRGCMP4_POSITION                  0x00000007
#define _TRIG2_TRGCMP4_MASK                      0x00000080
#define _TRIG2_TRGCMP4_LENGTH                    0x00000001

#define _TRIG2_TRGCMP5_POSITION                  0x00000008
#define _TRIG2_TRGCMP5_MASK                      0x00000100
#define _TRIG2_TRGCMP5_LENGTH                    0x00000001

#define _TRIG2_TRGCMP6_POSITION                  0x00000009
#define _TRIG2_TRGCMP6_MASK                      0x00000200
#define _TRIG2_TRGCMP6_LENGTH                    0x00000001

#define _TRIG2_TRGCMP7_POSITION                  0x0000000A
#define _TRIG2_TRGCMP7_MASK                      0x00000400
#define _TRIG2_TRGCMP7_LENGTH                    0x00000001

#define _TRIG2_TRGCMP8_POSITION                  0x0000000B
#define _TRIG2_TRGCMP8_MASK                      0x00000800
#define _TRIG2_TRGCMP8_LENGTH                    0x00000001

#define _TRIG2_TRGCMP9_POSITION                  0x0000000C
#define _TRIG2_TRGCMP9_MASK                      0x00001000
#define _TRIG2_TRGCMP9_LENGTH                    0x00000001

#define _TRIG2_TRGCMP10_POSITION                 0x0000000D
#define _TRIG2_TRGCMP10_MASK                     0x00002000
#define _TRIG2_TRGCMP10_LENGTH                   0x00000001

#define _TRIG2_TRGCMP11_POSITION                 0x0000000E
#define _TRIG2_TRGCMP11_MASK                     0x00004000
#define _TRIG2_TRGCMP11_LENGTH                   0x00000001

#define _TRIG2_TRGCMP12_POSITION                 0x0000000F
#define _TRIG2_TRGCMP12_MASK                     0x00008000
#define _TRIG2_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON2_TRGSTRT_POSITION                0x00000000
#define _TRGCON2_TRGSTRT_MASK                    0x0000003F
#define _TRGCON2_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON2_DTM_POSITION                    0x00000007
#define _TRGCON2_DTM_MASK                        0x00000080
#define _TRGCON2_DTM_LENGTH                      0x00000001

#define _TRGCON2_TRGDIV_POSITION                 0x0000000C
#define _TRGCON2_TRGDIV_MASK                     0x0000F000
#define _TRGCON2_TRGDIV_LENGTH                   0x00000004

#define _TRGCON2_TRGSTRT0_POSITION               0x00000000
#define _TRGCON2_TRGSTRT0_MASK                   0x00000001
#define _TRGCON2_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT1_POSITION               0x00000001
#define _TRGCON2_TRGSTRT1_MASK                   0x00000002
#define _TRGCON2_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT2_POSITION               0x00000002
#define _TRGCON2_TRGSTRT2_MASK                   0x00000004
#define _TRGCON2_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT3_POSITION               0x00000003
#define _TRGCON2_TRGSTRT3_MASK                   0x00000008
#define _TRGCON2_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT4_POSITION               0x00000004
#define _TRGCON2_TRGSTRT4_MASK                   0x00000010
#define _TRGCON2_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT5_POSITION               0x00000005
#define _TRGCON2_TRGSTRT5_MASK                   0x00000020
#define _TRGCON2_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON2_TRGDIV0_POSITION                0x0000000C
#define _TRGCON2_TRGDIV0_MASK                    0x00001000
#define _TRGCON2_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV1_POSITION                0x0000000D
#define _TRGCON2_TRGDIV1_MASK                    0x00002000
#define _TRGCON2_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV2_POSITION                0x0000000E
#define _TRGCON2_TRGDIV2_MASK                    0x00004000
#define _TRGCON2_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV3_POSITION                0x0000000F
#define _TRGCON2_TRGDIV3_MASK                    0x00008000
#define _TRGCON2_TRGDIV3_LENGTH                  0x00000001

#define _STRIG2_STRGCMP_POSITION                 0x00000003
#define _STRIG2_STRGCMP_MASK                     0x0000FFF8
#define _STRIG2_STRGCMP_LENGTH                   0x0000000D

#define _STRIG2_STRGCMP0_POSITION                0x00000003
#define _STRIG2_STRGCMP0_MASK                    0x00000008
#define _STRIG2_STRGCMP0_LENGTH                  0x00000001

#define _STRIG2_STRGCMP1_POSITION                0x00000004
#define _STRIG2_STRGCMP1_MASK                    0x00000010
#define _STRIG2_STRGCMP1_LENGTH                  0x00000001

#define _STRIG2_STRGCMP2_POSITION                0x00000005
#define _STRIG2_STRGCMP2_MASK                    0x00000020
#define _STRIG2_STRGCMP2_LENGTH                  0x00000001

#define _STRIG2_STRGCMP3_POSITION                0x00000006
#define _STRIG2_STRGCMP3_MASK                    0x00000040
#define _STRIG2_STRGCMP3_LENGTH                  0x00000001

#define _STRIG2_STRGCMP4_POSITION                0x00000007
#define _STRIG2_STRGCMP4_MASK                    0x00000080
#define _STRIG2_STRGCMP4_LENGTH                  0x00000001

#define _STRIG2_STRGCMP5_POSITION                0x00000008
#define _STRIG2_STRGCMP5_MASK                    0x00000100
#define _STRIG2_STRGCMP5_LENGTH                  0x00000001

#define _STRIG2_STRGCMP6_POSITION                0x00000009
#define _STRIG2_STRGCMP6_MASK                    0x00000200
#define _STRIG2_STRGCMP6_LENGTH                  0x00000001

#define _STRIG2_STRGCMP7_POSITION                0x0000000A
#define _STRIG2_STRGCMP7_MASK                    0x00000400
#define _STRIG2_STRGCMP7_LENGTH                  0x00000001

#define _STRIG2_STRGCMP8_POSITION                0x0000000B
#define _STRIG2_STRGCMP8_MASK                    0x00000800
#define _STRIG2_STRGCMP8_LENGTH                  0x00000001

#define _STRIG2_STRGCMP9_POSITION                0x0000000C
#define _STRIG2_STRGCMP9_MASK                    0x00001000
#define _STRIG2_STRGCMP9_LENGTH                  0x00000001

#define _STRIG2_STRGCMP10_POSITION               0x0000000D
#define _STRIG2_STRGCMP10_MASK                   0x00002000
#define _STRIG2_STRGCMP10_LENGTH                 0x00000001

#define _STRIG2_STRGCMP11_POSITION               0x0000000E
#define _STRIG2_STRGCMP11_MASK                   0x00004000
#define _STRIG2_STRGCMP11_LENGTH                 0x00000001

#define _STRIG2_STRGCMP12_POSITION               0x0000000F
#define _STRIG2_STRGCMP12_MASK                   0x00008000
#define _STRIG2_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON2_BPLL_POSITION                   0x00000000
#define _LEBCON2_BPLL_MASK                       0x00000001
#define _LEBCON2_BPLL_LENGTH                     0x00000001

#define _LEBCON2_BPLH_POSITION                   0x00000001
#define _LEBCON2_BPLH_MASK                       0x00000002
#define _LEBCON2_BPLH_LENGTH                     0x00000001

#define _LEBCON2_BPHL_POSITION                   0x00000002
#define _LEBCON2_BPHL_MASK                       0x00000004
#define _LEBCON2_BPHL_LENGTH                     0x00000001

#define _LEBCON2_BPHH_POSITION                   0x00000003
#define _LEBCON2_BPHH_MASK                       0x00000008
#define _LEBCON2_BPHH_LENGTH                     0x00000001

#define _LEBCON2_BCL_POSITION                    0x00000004
#define _LEBCON2_BCL_MASK                        0x00000010
#define _LEBCON2_BCL_LENGTH                      0x00000001

#define _LEBCON2_BCH_POSITION                    0x00000005
#define _LEBCON2_BCH_MASK                        0x00000020
#define _LEBCON2_BCH_LENGTH                      0x00000001

#define _LEBCON2_CLLEBEN_POSITION                0x0000000A
#define _LEBCON2_CLLEBEN_MASK                    0x00000400
#define _LEBCON2_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON2_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON2_FLTLEBEN_MASK                   0x00000800
#define _LEBCON2_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON2_PLF_POSITION                    0x0000000C
#define _LEBCON2_PLF_MASK                        0x00001000
#define _LEBCON2_PLF_LENGTH                      0x00000001

#define _LEBCON2_PLR_POSITION                    0x0000000D
#define _LEBCON2_PLR_MASK                        0x00002000
#define _LEBCON2_PLR_LENGTH                      0x00000001

#define _LEBCON2_PHF_POSITION                    0x0000000E
#define _LEBCON2_PHF_MASK                        0x00004000
#define _LEBCON2_PHF_LENGTH                      0x00000001

#define _LEBCON2_PHR_POSITION                    0x0000000F
#define _LEBCON2_PHR_MASK                        0x00008000
#define _LEBCON2_PHR_LENGTH                      0x00000001

#define _LEBDLY2_LEB_POSITION                    0x00000003
#define _LEBDLY2_LEB_MASK                        0x00000FF8
#define _LEBDLY2_LEB_LENGTH                      0x00000009

#define _LEBDLY2_LEB0_POSITION                   0x00000003
#define _LEBDLY2_LEB0_MASK                       0x00000008
#define _LEBDLY2_LEB0_LENGTH                     0x00000001

#define _LEBDLY2_LEB1_POSITION                   0x00000004
#define _LEBDLY2_LEB1_MASK                       0x00000010
#define _LEBDLY2_LEB1_LENGTH                     0x00000001

#define _LEBDLY2_LEB2_POSITION                   0x00000005
#define _LEBDLY2_LEB2_MASK                       0x00000020
#define _LEBDLY2_LEB2_LENGTH                     0x00000001

#define _LEBDLY2_LEB3_POSITION                   0x00000006
#define _LEBDLY2_LEB3_MASK                       0x00000040
#define _LEBDLY2_LEB3_LENGTH                     0x00000001

#define _LEBDLY2_LEB4_POSITION                   0x00000007
#define _LEBDLY2_LEB4_MASK                       0x00000080
#define _LEBDLY2_LEB4_LENGTH                     0x00000001

#define _LEBDLY2_LEB5_POSITION                   0x00000008
#define _LEBDLY2_LEB5_MASK                       0x00000100
#define _LEBDLY2_LEB5_LENGTH                     0x00000001

#define _LEBDLY2_LEB6_POSITION                   0x00000009
#define _LEBDLY2_LEB6_MASK                       0x00000200
#define _LEBDLY2_LEB6_LENGTH                     0x00000001

#define _LEBDLY2_LEB7_POSITION                   0x0000000A
#define _LEBDLY2_LEB7_MASK                       0x00000400
#define _LEBDLY2_LEB7_LENGTH                     0x00000001

#define _LEBDLY2_LEB8_POSITION                   0x0000000B
#define _LEBDLY2_LEB8_MASK                       0x00000800
#define _LEBDLY2_LEB8_LENGTH                     0x00000001

#define _AUXCON2_CHOPLEN_POSITION                0x00000000
#define _AUXCON2_CHOPLEN_MASK                    0x00000001
#define _AUXCON2_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON2_CHOPHEN_POSITION                0x00000001
#define _AUXCON2_CHOPHEN_MASK                    0x00000002
#define _AUXCON2_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON2_CHOPSEL_POSITION                0x00000002
#define _AUXCON2_CHOPSEL_MASK                    0x0000003C
#define _AUXCON2_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON2_BLANKSEL_POSITION               0x00000008
#define _AUXCON2_BLANKSEL_MASK                   0x00000F00
#define _AUXCON2_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON2_HRDDIS_POSITION                 0x0000000E
#define _AUXCON2_HRDDIS_MASK                     0x00004000
#define _AUXCON2_HRDDIS_LENGTH                   0x00000001

#define _AUXCON2_HRPDIS_POSITION                 0x0000000F
#define _AUXCON2_HRPDIS_MASK                     0x00008000
#define _AUXCON2_HRPDIS_LENGTH                   0x00000001

#define _AUXCON2_CHOPSEL0_POSITION               0x00000002
#define _AUXCON2_CHOPSEL0_MASK                   0x00000004
#define _AUXCON2_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL1_POSITION               0x00000003
#define _AUXCON2_CHOPSEL1_MASK                   0x00000008
#define _AUXCON2_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL2_POSITION               0x00000004
#define _AUXCON2_CHOPSEL2_MASK                   0x00000010
#define _AUXCON2_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL3_POSITION               0x00000005
#define _AUXCON2_CHOPSEL3_MASK                   0x00000020
#define _AUXCON2_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON2_BLANKSEL0_POSITION              0x00000008
#define _AUXCON2_BLANKSEL0_MASK                  0x00000100
#define _AUXCON2_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL1_POSITION              0x00000009
#define _AUXCON2_BLANKSEL1_MASK                  0x00000200
#define _AUXCON2_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON2_BLANKSEL2_MASK                  0x00000400
#define _AUXCON2_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON2_BLANKSEL3_MASK                  0x00000800
#define _AUXCON2_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON3_IUE_POSITION                    0x00000000
#define _PWMCON3_IUE_MASK                        0x00000001
#define _PWMCON3_IUE_LENGTH                      0x00000001

#define _PWMCON3_XPRES_POSITION                  0x00000001
#define _PWMCON3_XPRES_MASK                      0x00000002
#define _PWMCON3_XPRES_LENGTH                    0x00000001

#define _PWMCON3_CAM_POSITION                    0x00000002
#define _PWMCON3_CAM_MASK                        0x00000004
#define _PWMCON3_CAM_LENGTH                      0x00000001

#define _PWMCON3_MTBS_POSITION                   0x00000003
#define _PWMCON3_MTBS_MASK                       0x00000008
#define _PWMCON3_MTBS_LENGTH                     0x00000001

#define _PWMCON3_DTCP_POSITION                   0x00000005
#define _PWMCON3_DTCP_MASK                       0x00000020
#define _PWMCON3_DTCP_LENGTH                     0x00000001

#define _PWMCON3_DTC_POSITION                    0x00000006
#define _PWMCON3_DTC_MASK                        0x000000C0
#define _PWMCON3_DTC_LENGTH                      0x00000002

#define _PWMCON3_MDCS_POSITION                   0x00000008
#define _PWMCON3_MDCS_MASK                       0x00000100
#define _PWMCON3_MDCS_LENGTH                     0x00000001

#define _PWMCON3_ITB_POSITION                    0x00000009
#define _PWMCON3_ITB_MASK                        0x00000200
#define _PWMCON3_ITB_LENGTH                      0x00000001

#define _PWMCON3_TRGIEN_POSITION                 0x0000000A
#define _PWMCON3_TRGIEN_MASK                     0x00000400
#define _PWMCON3_TRGIEN_LENGTH                   0x00000001

#define _PWMCON3_CLIEN_POSITION                  0x0000000B
#define _PWMCON3_CLIEN_MASK                      0x00000800
#define _PWMCON3_CLIEN_LENGTH                    0x00000001

#define _PWMCON3_FLTIEN_POSITION                 0x0000000C
#define _PWMCON3_FLTIEN_MASK                     0x00001000
#define _PWMCON3_FLTIEN_LENGTH                   0x00000001

#define _PWMCON3_TRGSTAT_POSITION                0x0000000D
#define _PWMCON3_TRGSTAT_MASK                    0x00002000
#define _PWMCON3_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON3_CLSTAT_POSITION                 0x0000000E
#define _PWMCON3_CLSTAT_MASK                     0x00004000
#define _PWMCON3_CLSTAT_LENGTH                   0x00000001

#define _PWMCON3_FLTSTAT_POSITION                0x0000000F
#define _PWMCON3_FLTSTAT_MASK                    0x00008000
#define _PWMCON3_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON3_DTC0_POSITION                   0x00000006
#define _PWMCON3_DTC0_MASK                       0x00000040
#define _PWMCON3_DTC0_LENGTH                     0x00000001

#define _PWMCON3_DTC1_POSITION                   0x00000007
#define _PWMCON3_DTC1_MASK                       0x00000080
#define _PWMCON3_DTC1_LENGTH                     0x00000001

#define _IOCON3_OSYNC_POSITION                   0x00000000
#define _IOCON3_OSYNC_MASK                       0x00000001
#define _IOCON3_OSYNC_LENGTH                     0x00000001

#define _IOCON3_SWAP_POSITION                    0x00000001
#define _IOCON3_SWAP_MASK                        0x00000002
#define _IOCON3_SWAP_LENGTH                      0x00000001

#define _IOCON3_CLDAT_POSITION                   0x00000002
#define _IOCON3_CLDAT_MASK                       0x0000000C
#define _IOCON3_CLDAT_LENGTH                     0x00000002

#define _IOCON3_FLTDAT_POSITION                  0x00000004
#define _IOCON3_FLTDAT_MASK                      0x00000030
#define _IOCON3_FLTDAT_LENGTH                    0x00000002

#define _IOCON3_OVRDAT_POSITION                  0x00000006
#define _IOCON3_OVRDAT_MASK                      0x000000C0
#define _IOCON3_OVRDAT_LENGTH                    0x00000002

#define _IOCON3_OVRENL_POSITION                  0x00000008
#define _IOCON3_OVRENL_MASK                      0x00000100
#define _IOCON3_OVRENL_LENGTH                    0x00000001

#define _IOCON3_OVRENH_POSITION                  0x00000009
#define _IOCON3_OVRENH_MASK                      0x00000200
#define _IOCON3_OVRENH_LENGTH                    0x00000001

#define _IOCON3_PMOD_POSITION                    0x0000000A
#define _IOCON3_PMOD_MASK                        0x00000C00
#define _IOCON3_PMOD_LENGTH                      0x00000002

#define _IOCON3_POLL_POSITION                    0x0000000C
#define _IOCON3_POLL_MASK                        0x00001000
#define _IOCON3_POLL_LENGTH                      0x00000001

#define _IOCON3_POLH_POSITION                    0x0000000D
#define _IOCON3_POLH_MASK                        0x00002000
#define _IOCON3_POLH_LENGTH                      0x00000001

#define _IOCON3_PENL_POSITION                    0x0000000E
#define _IOCON3_PENL_MASK                        0x00004000
#define _IOCON3_PENL_LENGTH                      0x00000001

#define _IOCON3_PENH_POSITION                    0x0000000F
#define _IOCON3_PENH_MASK                        0x00008000
#define _IOCON3_PENH_LENGTH                      0x00000001

#define _IOCON3_CLDAT0_POSITION                  0x00000002
#define _IOCON3_CLDAT0_MASK                      0x00000004
#define _IOCON3_CLDAT0_LENGTH                    0x00000001

#define _IOCON3_CLDAT1_POSITION                  0x00000003
#define _IOCON3_CLDAT1_MASK                      0x00000008
#define _IOCON3_CLDAT1_LENGTH                    0x00000001

#define _IOCON3_FLTDAT0_POSITION                 0x00000004
#define _IOCON3_FLTDAT0_MASK                     0x00000010
#define _IOCON3_FLTDAT0_LENGTH                   0x00000001

#define _IOCON3_FLTDAT1_POSITION                 0x00000005
#define _IOCON3_FLTDAT1_MASK                     0x00000020
#define _IOCON3_FLTDAT1_LENGTH                   0x00000001

#define _IOCON3_OVRDAT0_POSITION                 0x00000006
#define _IOCON3_OVRDAT0_MASK                     0x00000040
#define _IOCON3_OVRDAT0_LENGTH                   0x00000001

#define _IOCON3_OVRDAT1_POSITION                 0x00000007
#define _IOCON3_OVRDAT1_MASK                     0x00000080
#define _IOCON3_OVRDAT1_LENGTH                   0x00000001

#define _IOCON3_PMOD0_POSITION                   0x0000000A
#define _IOCON3_PMOD0_MASK                       0x00000400
#define _IOCON3_PMOD0_LENGTH                     0x00000001

#define _IOCON3_PMOD1_POSITION                   0x0000000B
#define _IOCON3_PMOD1_MASK                       0x00000800
#define _IOCON3_PMOD1_LENGTH                     0x00000001

#define _FCLCON3_FLTMOD_POSITION                 0x00000000
#define _FCLCON3_FLTMOD_MASK                     0x00000003
#define _FCLCON3_FLTMOD_LENGTH                   0x00000002

#define _FCLCON3_FLTPOL_POSITION                 0x00000002
#define _FCLCON3_FLTPOL_MASK                     0x00000004
#define _FCLCON3_FLTPOL_LENGTH                   0x00000001

#define _FCLCON3_FLTSRC_POSITION                 0x00000003
#define _FCLCON3_FLTSRC_MASK                     0x000000F8
#define _FCLCON3_FLTSRC_LENGTH                   0x00000005

#define _FCLCON3_CLMOD_POSITION                  0x00000008
#define _FCLCON3_CLMOD_MASK                      0x00000100
#define _FCLCON3_CLMOD_LENGTH                    0x00000001

#define _FCLCON3_CLPOL_POSITION                  0x00000009
#define _FCLCON3_CLPOL_MASK                      0x00000200
#define _FCLCON3_CLPOL_LENGTH                    0x00000001

#define _FCLCON3_CLSRC_POSITION                  0x0000000A
#define _FCLCON3_CLSRC_MASK                      0x00007C00
#define _FCLCON3_CLSRC_LENGTH                    0x00000005

#define _FCLCON3_IFLTMOD_POSITION                0x0000000F
#define _FCLCON3_IFLTMOD_MASK                    0x00008000
#define _FCLCON3_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON3_FLTMOD0_POSITION                0x00000000
#define _FCLCON3_FLTMOD0_MASK                    0x00000001
#define _FCLCON3_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON3_FLTMOD1_POSITION                0x00000001
#define _FCLCON3_FLTMOD1_MASK                    0x00000002
#define _FCLCON3_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC0_POSITION                0x00000003
#define _FCLCON3_FLTSRC0_MASK                    0x00000008
#define _FCLCON3_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC1_POSITION                0x00000004
#define _FCLCON3_FLTSRC1_MASK                    0x00000010
#define _FCLCON3_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC2_POSITION                0x00000005
#define _FCLCON3_FLTSRC2_MASK                    0x00000020
#define _FCLCON3_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC3_POSITION                0x00000006
#define _FCLCON3_FLTSRC3_MASK                    0x00000040
#define _FCLCON3_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC4_POSITION                0x00000007
#define _FCLCON3_FLTSRC4_MASK                    0x00000080
#define _FCLCON3_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON3_CLSRC0_POSITION                 0x0000000A
#define _FCLCON3_CLSRC0_MASK                     0x00000400
#define _FCLCON3_CLSRC0_LENGTH                   0x00000001

#define _FCLCON3_CLSRC1_POSITION                 0x0000000B
#define _FCLCON3_CLSRC1_MASK                     0x00000800
#define _FCLCON3_CLSRC1_LENGTH                   0x00000001

#define _FCLCON3_CLSRC2_POSITION                 0x0000000C
#define _FCLCON3_CLSRC2_MASK                     0x00001000
#define _FCLCON3_CLSRC2_LENGTH                   0x00000001

#define _FCLCON3_CLSRC3_POSITION                 0x0000000D
#define _FCLCON3_CLSRC3_MASK                     0x00002000
#define _FCLCON3_CLSRC3_LENGTH                   0x00000001

#define _FCLCON3_CLSRC4_POSITION                 0x0000000E
#define _FCLCON3_CLSRC4_MASK                     0x00004000
#define _FCLCON3_CLSRC4_LENGTH                   0x00000001

#define _TRIG3_TRGCMP_POSITION                   0x00000003
#define _TRIG3_TRGCMP_MASK                       0x0000FFF8
#define _TRIG3_TRGCMP_LENGTH                     0x0000000D

#define _TRIG3_TRGCMP0_POSITION                  0x00000003
#define _TRIG3_TRGCMP0_MASK                      0x00000008
#define _TRIG3_TRGCMP0_LENGTH                    0x00000001

#define _TRIG3_TRGCMP1_POSITION                  0x00000004
#define _TRIG3_TRGCMP1_MASK                      0x00000010
#define _TRIG3_TRGCMP1_LENGTH                    0x00000001

#define _TRIG3_TRGCMP2_POSITION                  0x00000005
#define _TRIG3_TRGCMP2_MASK                      0x00000020
#define _TRIG3_TRGCMP2_LENGTH                    0x00000001

#define _TRIG3_TRGCMP3_POSITION                  0x00000006
#define _TRIG3_TRGCMP3_MASK                      0x00000040
#define _TRIG3_TRGCMP3_LENGTH                    0x00000001

#define _TRIG3_TRGCMP4_POSITION                  0x00000007
#define _TRIG3_TRGCMP4_MASK                      0x00000080
#define _TRIG3_TRGCMP4_LENGTH                    0x00000001

#define _TRIG3_TRGCMP5_POSITION                  0x00000008
#define _TRIG3_TRGCMP5_MASK                      0x00000100
#define _TRIG3_TRGCMP5_LENGTH                    0x00000001

#define _TRIG3_TRGCMP6_POSITION                  0x00000009
#define _TRIG3_TRGCMP6_MASK                      0x00000200
#define _TRIG3_TRGCMP6_LENGTH                    0x00000001

#define _TRIG3_TRGCMP7_POSITION                  0x0000000A
#define _TRIG3_TRGCMP7_MASK                      0x00000400
#define _TRIG3_TRGCMP7_LENGTH                    0x00000001

#define _TRIG3_TRGCMP8_POSITION                  0x0000000B
#define _TRIG3_TRGCMP8_MASK                      0x00000800
#define _TRIG3_TRGCMP8_LENGTH                    0x00000001

#define _TRIG3_TRGCMP9_POSITION                  0x0000000C
#define _TRIG3_TRGCMP9_MASK                      0x00001000
#define _TRIG3_TRGCMP9_LENGTH                    0x00000001

#define _TRIG3_TRGCMP10_POSITION                 0x0000000D
#define _TRIG3_TRGCMP10_MASK                     0x00002000
#define _TRIG3_TRGCMP10_LENGTH                   0x00000001

#define _TRIG3_TRGCMP11_POSITION                 0x0000000E
#define _TRIG3_TRGCMP11_MASK                     0x00004000
#define _TRIG3_TRGCMP11_LENGTH                   0x00000001

#define _TRIG3_TRGCMP12_POSITION                 0x0000000F
#define _TRIG3_TRGCMP12_MASK                     0x00008000
#define _TRIG3_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON3_TRGSTRT_POSITION                0x00000000
#define _TRGCON3_TRGSTRT_MASK                    0x0000003F
#define _TRGCON3_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON3_DTM_POSITION                    0x00000007
#define _TRGCON3_DTM_MASK                        0x00000080
#define _TRGCON3_DTM_LENGTH                      0x00000001

#define _TRGCON3_TRGDIV_POSITION                 0x0000000C
#define _TRGCON3_TRGDIV_MASK                     0x0000F000
#define _TRGCON3_TRGDIV_LENGTH                   0x00000004

#define _TRGCON3_TRGSTRT0_POSITION               0x00000000
#define _TRGCON3_TRGSTRT0_MASK                   0x00000001
#define _TRGCON3_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT1_POSITION               0x00000001
#define _TRGCON3_TRGSTRT1_MASK                   0x00000002
#define _TRGCON3_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT2_POSITION               0x00000002
#define _TRGCON3_TRGSTRT2_MASK                   0x00000004
#define _TRGCON3_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT3_POSITION               0x00000003
#define _TRGCON3_TRGSTRT3_MASK                   0x00000008
#define _TRGCON3_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT4_POSITION               0x00000004
#define _TRGCON3_TRGSTRT4_MASK                   0x00000010
#define _TRGCON3_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT5_POSITION               0x00000005
#define _TRGCON3_TRGSTRT5_MASK                   0x00000020
#define _TRGCON3_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON3_TRGDIV0_POSITION                0x0000000C
#define _TRGCON3_TRGDIV0_MASK                    0x00001000
#define _TRGCON3_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV1_POSITION                0x0000000D
#define _TRGCON3_TRGDIV1_MASK                    0x00002000
#define _TRGCON3_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV2_POSITION                0x0000000E
#define _TRGCON3_TRGDIV2_MASK                    0x00004000
#define _TRGCON3_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV3_POSITION                0x0000000F
#define _TRGCON3_TRGDIV3_MASK                    0x00008000
#define _TRGCON3_TRGDIV3_LENGTH                  0x00000001

#define _STRIG3_STRGCMP_POSITION                 0x00000003
#define _STRIG3_STRGCMP_MASK                     0x0000FFF8
#define _STRIG3_STRGCMP_LENGTH                   0x0000000D

#define _STRIG3_STRGCMP0_POSITION                0x00000003
#define _STRIG3_STRGCMP0_MASK                    0x00000008
#define _STRIG3_STRGCMP0_LENGTH                  0x00000001

#define _STRIG3_STRGCMP1_POSITION                0x00000004
#define _STRIG3_STRGCMP1_MASK                    0x00000010
#define _STRIG3_STRGCMP1_LENGTH                  0x00000001

#define _STRIG3_STRGCMP2_POSITION                0x00000005
#define _STRIG3_STRGCMP2_MASK                    0x00000020
#define _STRIG3_STRGCMP2_LENGTH                  0x00000001

#define _STRIG3_STRGCMP3_POSITION                0x00000006
#define _STRIG3_STRGCMP3_MASK                    0x00000040
#define _STRIG3_STRGCMP3_LENGTH                  0x00000001

#define _STRIG3_STRGCMP4_POSITION                0x00000007
#define _STRIG3_STRGCMP4_MASK                    0x00000080
#define _STRIG3_STRGCMP4_LENGTH                  0x00000001

#define _STRIG3_STRGCMP5_POSITION                0x00000008
#define _STRIG3_STRGCMP5_MASK                    0x00000100
#define _STRIG3_STRGCMP5_LENGTH                  0x00000001

#define _STRIG3_STRGCMP6_POSITION                0x00000009
#define _STRIG3_STRGCMP6_MASK                    0x00000200
#define _STRIG3_STRGCMP6_LENGTH                  0x00000001

#define _STRIG3_STRGCMP7_POSITION                0x0000000A
#define _STRIG3_STRGCMP7_MASK                    0x00000400
#define _STRIG3_STRGCMP7_LENGTH                  0x00000001

#define _STRIG3_STRGCMP8_POSITION                0x0000000B
#define _STRIG3_STRGCMP8_MASK                    0x00000800
#define _STRIG3_STRGCMP8_LENGTH                  0x00000001

#define _STRIG3_STRGCMP9_POSITION                0x0000000C
#define _STRIG3_STRGCMP9_MASK                    0x00001000
#define _STRIG3_STRGCMP9_LENGTH                  0x00000001

#define _STRIG3_STRGCMP10_POSITION               0x0000000D
#define _STRIG3_STRGCMP10_MASK                   0x00002000
#define _STRIG3_STRGCMP10_LENGTH                 0x00000001

#define _STRIG3_STRGCMP11_POSITION               0x0000000E
#define _STRIG3_STRGCMP11_MASK                   0x00004000
#define _STRIG3_STRGCMP11_LENGTH                 0x00000001

#define _STRIG3_STRGCMP12_POSITION               0x0000000F
#define _STRIG3_STRGCMP12_MASK                   0x00008000
#define _STRIG3_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON3_BPLL_POSITION                   0x00000000
#define _LEBCON3_BPLL_MASK                       0x00000001
#define _LEBCON3_BPLL_LENGTH                     0x00000001

#define _LEBCON3_BPLH_POSITION                   0x00000001
#define _LEBCON3_BPLH_MASK                       0x00000002
#define _LEBCON3_BPLH_LENGTH                     0x00000001

#define _LEBCON3_BPHL_POSITION                   0x00000002
#define _LEBCON3_BPHL_MASK                       0x00000004
#define _LEBCON3_BPHL_LENGTH                     0x00000001

#define _LEBCON3_BPHH_POSITION                   0x00000003
#define _LEBCON3_BPHH_MASK                       0x00000008
#define _LEBCON3_BPHH_LENGTH                     0x00000001

#define _LEBCON3_BCL_POSITION                    0x00000004
#define _LEBCON3_BCL_MASK                        0x00000010
#define _LEBCON3_BCL_LENGTH                      0x00000001

#define _LEBCON3_BCH_POSITION                    0x00000005
#define _LEBCON3_BCH_MASK                        0x00000020
#define _LEBCON3_BCH_LENGTH                      0x00000001

#define _LEBCON3_CLLEBEN_POSITION                0x0000000A
#define _LEBCON3_CLLEBEN_MASK                    0x00000400
#define _LEBCON3_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON3_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON3_FLTLEBEN_MASK                   0x00000800
#define _LEBCON3_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON3_PLF_POSITION                    0x0000000C
#define _LEBCON3_PLF_MASK                        0x00001000
#define _LEBCON3_PLF_LENGTH                      0x00000001

#define _LEBCON3_PLR_POSITION                    0x0000000D
#define _LEBCON3_PLR_MASK                        0x00002000
#define _LEBCON3_PLR_LENGTH                      0x00000001

#define _LEBCON3_PHF_POSITION                    0x0000000E
#define _LEBCON3_PHF_MASK                        0x00004000
#define _LEBCON3_PHF_LENGTH                      0x00000001

#define _LEBCON3_PHR_POSITION                    0x0000000F
#define _LEBCON3_PHR_MASK                        0x00008000
#define _LEBCON3_PHR_LENGTH                      0x00000001

#define _LEBDLY3_LEB_POSITION                    0x00000003
#define _LEBDLY3_LEB_MASK                        0x00000FF8
#define _LEBDLY3_LEB_LENGTH                      0x00000009

#define _LEBDLY3_LEB0_POSITION                   0x00000003
#define _LEBDLY3_LEB0_MASK                       0x00000008
#define _LEBDLY3_LEB0_LENGTH                     0x00000001

#define _LEBDLY3_LEB1_POSITION                   0x00000004
#define _LEBDLY3_LEB1_MASK                       0x00000010
#define _LEBDLY3_LEB1_LENGTH                     0x00000001

#define _LEBDLY3_LEB2_POSITION                   0x00000005
#define _LEBDLY3_LEB2_MASK                       0x00000020
#define _LEBDLY3_LEB2_LENGTH                     0x00000001

#define _LEBDLY3_LEB3_POSITION                   0x00000006
#define _LEBDLY3_LEB3_MASK                       0x00000040
#define _LEBDLY3_LEB3_LENGTH                     0x00000001

#define _LEBDLY3_LEB4_POSITION                   0x00000007
#define _LEBDLY3_LEB4_MASK                       0x00000080
#define _LEBDLY3_LEB4_LENGTH                     0x00000001

#define _LEBDLY3_LEB5_POSITION                   0x00000008
#define _LEBDLY3_LEB5_MASK                       0x00000100
#define _LEBDLY3_LEB5_LENGTH                     0x00000001

#define _LEBDLY3_LEB6_POSITION                   0x00000009
#define _LEBDLY3_LEB6_MASK                       0x00000200
#define _LEBDLY3_LEB6_LENGTH                     0x00000001

#define _LEBDLY3_LEB7_POSITION                   0x0000000A
#define _LEBDLY3_LEB7_MASK                       0x00000400
#define _LEBDLY3_LEB7_LENGTH                     0x00000001

#define _LEBDLY3_LEB8_POSITION                   0x0000000B
#define _LEBDLY3_LEB8_MASK                       0x00000800
#define _LEBDLY3_LEB8_LENGTH                     0x00000001

#define _AUXCON3_CHOPLEN_POSITION                0x00000000
#define _AUXCON3_CHOPLEN_MASK                    0x00000001
#define _AUXCON3_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON3_CHOPHEN_POSITION                0x00000001
#define _AUXCON3_CHOPHEN_MASK                    0x00000002
#define _AUXCON3_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON3_CHOPSEL_POSITION                0x00000002
#define _AUXCON3_CHOPSEL_MASK                    0x0000003C
#define _AUXCON3_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON3_BLANKSEL_POSITION               0x00000008
#define _AUXCON3_BLANKSEL_MASK                   0x00000F00
#define _AUXCON3_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON3_HRDDIS_POSITION                 0x0000000E
#define _AUXCON3_HRDDIS_MASK                     0x00004000
#define _AUXCON3_HRDDIS_LENGTH                   0x00000001

#define _AUXCON3_HRPDIS_POSITION                 0x0000000F
#define _AUXCON3_HRPDIS_MASK                     0x00008000
#define _AUXCON3_HRPDIS_LENGTH                   0x00000001

#define _AUXCON3_CHOPSEL0_POSITION               0x00000002
#define _AUXCON3_CHOPSEL0_MASK                   0x00000004
#define _AUXCON3_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL1_POSITION               0x00000003
#define _AUXCON3_CHOPSEL1_MASK                   0x00000008
#define _AUXCON3_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL2_POSITION               0x00000004
#define _AUXCON3_CHOPSEL2_MASK                   0x00000010
#define _AUXCON3_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL3_POSITION               0x00000005
#define _AUXCON3_CHOPSEL3_MASK                   0x00000020
#define _AUXCON3_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON3_BLANKSEL0_POSITION              0x00000008
#define _AUXCON3_BLANKSEL0_MASK                  0x00000100
#define _AUXCON3_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL1_POSITION              0x00000009
#define _AUXCON3_BLANKSEL1_MASK                  0x00000200
#define _AUXCON3_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON3_BLANKSEL2_MASK                  0x00000400
#define _AUXCON3_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON3_BLANKSEL3_MASK                  0x00000800
#define _AUXCON3_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON4_IUE_POSITION                    0x00000000
#define _PWMCON4_IUE_MASK                        0x00000001
#define _PWMCON4_IUE_LENGTH                      0x00000001

#define _PWMCON4_XPRES_POSITION                  0x00000001
#define _PWMCON4_XPRES_MASK                      0x00000002
#define _PWMCON4_XPRES_LENGTH                    0x00000001

#define _PWMCON4_CAM_POSITION                    0x00000002
#define _PWMCON4_CAM_MASK                        0x00000004
#define _PWMCON4_CAM_LENGTH                      0x00000001

#define _PWMCON4_MTBS_POSITION                   0x00000003
#define _PWMCON4_MTBS_MASK                       0x00000008
#define _PWMCON4_MTBS_LENGTH                     0x00000001

#define _PWMCON4_DTCP_POSITION                   0x00000005
#define _PWMCON4_DTCP_MASK                       0x00000020
#define _PWMCON4_DTCP_LENGTH                     0x00000001

#define _PWMCON4_DTC_POSITION                    0x00000006
#define _PWMCON4_DTC_MASK                        0x000000C0
#define _PWMCON4_DTC_LENGTH                      0x00000002

#define _PWMCON4_MDCS_POSITION                   0x00000008
#define _PWMCON4_MDCS_MASK                       0x00000100
#define _PWMCON4_MDCS_LENGTH                     0x00000001

#define _PWMCON4_ITB_POSITION                    0x00000009
#define _PWMCON4_ITB_MASK                        0x00000200
#define _PWMCON4_ITB_LENGTH                      0x00000001

#define _PWMCON4_TRGIEN_POSITION                 0x0000000A
#define _PWMCON4_TRGIEN_MASK                     0x00000400
#define _PWMCON4_TRGIEN_LENGTH                   0x00000001

#define _PWMCON4_CLIEN_POSITION                  0x0000000B
#define _PWMCON4_CLIEN_MASK                      0x00000800
#define _PWMCON4_CLIEN_LENGTH                    0x00000001

#define _PWMCON4_FLTIEN_POSITION                 0x0000000C
#define _PWMCON4_FLTIEN_MASK                     0x00001000
#define _PWMCON4_FLTIEN_LENGTH                   0x00000001

#define _PWMCON4_TRGSTAT_POSITION                0x0000000D
#define _PWMCON4_TRGSTAT_MASK                    0x00002000
#define _PWMCON4_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON4_CLSTAT_POSITION                 0x0000000E
#define _PWMCON4_CLSTAT_MASK                     0x00004000
#define _PWMCON4_CLSTAT_LENGTH                   0x00000001

#define _PWMCON4_FLTSTAT_POSITION                0x0000000F
#define _PWMCON4_FLTSTAT_MASK                    0x00008000
#define _PWMCON4_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON4_DTC0_POSITION                   0x00000006
#define _PWMCON4_DTC0_MASK                       0x00000040
#define _PWMCON4_DTC0_LENGTH                     0x00000001

#define _PWMCON4_DTC1_POSITION                   0x00000007
#define _PWMCON4_DTC1_MASK                       0x00000080
#define _PWMCON4_DTC1_LENGTH                     0x00000001

#define _IOCON4_OSYNC_POSITION                   0x00000000
#define _IOCON4_OSYNC_MASK                       0x00000001
#define _IOCON4_OSYNC_LENGTH                     0x00000001

#define _IOCON4_SWAP_POSITION                    0x00000001
#define _IOCON4_SWAP_MASK                        0x00000002
#define _IOCON4_SWAP_LENGTH                      0x00000001

#define _IOCON4_CLDAT_POSITION                   0x00000002
#define _IOCON4_CLDAT_MASK                       0x0000000C
#define _IOCON4_CLDAT_LENGTH                     0x00000002

#define _IOCON4_FLTDAT_POSITION                  0x00000004
#define _IOCON4_FLTDAT_MASK                      0x00000030
#define _IOCON4_FLTDAT_LENGTH                    0x00000002

#define _IOCON4_OVRDAT_POSITION                  0x00000006
#define _IOCON4_OVRDAT_MASK                      0x000000C0
#define _IOCON4_OVRDAT_LENGTH                    0x00000002

#define _IOCON4_OVRENL_POSITION                  0x00000008
#define _IOCON4_OVRENL_MASK                      0x00000100
#define _IOCON4_OVRENL_LENGTH                    0x00000001

#define _IOCON4_OVRENH_POSITION                  0x00000009
#define _IOCON4_OVRENH_MASK                      0x00000200
#define _IOCON4_OVRENH_LENGTH                    0x00000001

#define _IOCON4_PMOD_POSITION                    0x0000000A
#define _IOCON4_PMOD_MASK                        0x00000C00
#define _IOCON4_PMOD_LENGTH                      0x00000002

#define _IOCON4_POLL_POSITION                    0x0000000C
#define _IOCON4_POLL_MASK                        0x00001000
#define _IOCON4_POLL_LENGTH                      0x00000001

#define _IOCON4_POLH_POSITION                    0x0000000D
#define _IOCON4_POLH_MASK                        0x00002000
#define _IOCON4_POLH_LENGTH                      0x00000001

#define _IOCON4_PENL_POSITION                    0x0000000E
#define _IOCON4_PENL_MASK                        0x00004000
#define _IOCON4_PENL_LENGTH                      0x00000001

#define _IOCON4_PENH_POSITION                    0x0000000F
#define _IOCON4_PENH_MASK                        0x00008000
#define _IOCON4_PENH_LENGTH                      0x00000001

#define _IOCON4_CLDAT0_POSITION                  0x00000002
#define _IOCON4_CLDAT0_MASK                      0x00000004
#define _IOCON4_CLDAT0_LENGTH                    0x00000001

#define _IOCON4_CLDAT1_POSITION                  0x00000003
#define _IOCON4_CLDAT1_MASK                      0x00000008
#define _IOCON4_CLDAT1_LENGTH                    0x00000001

#define _IOCON4_FLTDAT0_POSITION                 0x00000004
#define _IOCON4_FLTDAT0_MASK                     0x00000010
#define _IOCON4_FLTDAT0_LENGTH                   0x00000001

#define _IOCON4_FLTDAT1_POSITION                 0x00000005
#define _IOCON4_FLTDAT1_MASK                     0x00000020
#define _IOCON4_FLTDAT1_LENGTH                   0x00000001

#define _IOCON4_OVRDAT0_POSITION                 0x00000006
#define _IOCON4_OVRDAT0_MASK                     0x00000040
#define _IOCON4_OVRDAT0_LENGTH                   0x00000001

#define _IOCON4_OVRDAT1_POSITION                 0x00000007
#define _IOCON4_OVRDAT1_MASK                     0x00000080
#define _IOCON4_OVRDAT1_LENGTH                   0x00000001

#define _IOCON4_PMOD0_POSITION                   0x0000000A
#define _IOCON4_PMOD0_MASK                       0x00000400
#define _IOCON4_PMOD0_LENGTH                     0x00000001

#define _IOCON4_PMOD1_POSITION                   0x0000000B
#define _IOCON4_PMOD1_MASK                       0x00000800
#define _IOCON4_PMOD1_LENGTH                     0x00000001

#define _FCLCON4_FLTMOD_POSITION                 0x00000000
#define _FCLCON4_FLTMOD_MASK                     0x00000003
#define _FCLCON4_FLTMOD_LENGTH                   0x00000002

#define _FCLCON4_FLTPOL_POSITION                 0x00000002
#define _FCLCON4_FLTPOL_MASK                     0x00000004
#define _FCLCON4_FLTPOL_LENGTH                   0x00000001

#define _FCLCON4_FLTSRC_POSITION                 0x00000003
#define _FCLCON4_FLTSRC_MASK                     0x000000F8
#define _FCLCON4_FLTSRC_LENGTH                   0x00000005

#define _FCLCON4_CLMOD_POSITION                  0x00000008
#define _FCLCON4_CLMOD_MASK                      0x00000100
#define _FCLCON4_CLMOD_LENGTH                    0x00000001

#define _FCLCON4_CLPOL_POSITION                  0x00000009
#define _FCLCON4_CLPOL_MASK                      0x00000200
#define _FCLCON4_CLPOL_LENGTH                    0x00000001

#define _FCLCON4_CLSRC_POSITION                  0x0000000A
#define _FCLCON4_CLSRC_MASK                      0x00007C00
#define _FCLCON4_CLSRC_LENGTH                    0x00000005

#define _FCLCON4_IFLTMOD_POSITION                0x0000000F
#define _FCLCON4_IFLTMOD_MASK                    0x00008000
#define _FCLCON4_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD0_POSITION                0x00000000
#define _FCLCON4_FLTMOD0_MASK                    0x00000001
#define _FCLCON4_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD1_POSITION                0x00000001
#define _FCLCON4_FLTMOD1_MASK                    0x00000002
#define _FCLCON4_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC0_POSITION                0x00000003
#define _FCLCON4_FLTSRC0_MASK                    0x00000008
#define _FCLCON4_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC1_POSITION                0x00000004
#define _FCLCON4_FLTSRC1_MASK                    0x00000010
#define _FCLCON4_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC2_POSITION                0x00000005
#define _FCLCON4_FLTSRC2_MASK                    0x00000020
#define _FCLCON4_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC3_POSITION                0x00000006
#define _FCLCON4_FLTSRC3_MASK                    0x00000040
#define _FCLCON4_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC4_POSITION                0x00000007
#define _FCLCON4_FLTSRC4_MASK                    0x00000080
#define _FCLCON4_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON4_CLSRC0_POSITION                 0x0000000A
#define _FCLCON4_CLSRC0_MASK                     0x00000400
#define _FCLCON4_CLSRC0_LENGTH                   0x00000001

#define _FCLCON4_CLSRC1_POSITION                 0x0000000B
#define _FCLCON4_CLSRC1_MASK                     0x00000800
#define _FCLCON4_CLSRC1_LENGTH                   0x00000001

#define _FCLCON4_CLSRC2_POSITION                 0x0000000C
#define _FCLCON4_CLSRC2_MASK                     0x00001000
#define _FCLCON4_CLSRC2_LENGTH                   0x00000001

#define _FCLCON4_CLSRC3_POSITION                 0x0000000D
#define _FCLCON4_CLSRC3_MASK                     0x00002000
#define _FCLCON4_CLSRC3_LENGTH                   0x00000001

#define _FCLCON4_CLSRC4_POSITION                 0x0000000E
#define _FCLCON4_CLSRC4_MASK                     0x00004000
#define _FCLCON4_CLSRC4_LENGTH                   0x00000001

#define _TRIG4_TRGCMP_POSITION                   0x00000003
#define _TRIG4_TRGCMP_MASK                       0x0000FFF8
#define _TRIG4_TRGCMP_LENGTH                     0x0000000D

#define _TRIG4_TRGCMP0_POSITION                  0x00000003
#define _TRIG4_TRGCMP0_MASK                      0x00000008
#define _TRIG4_TRGCMP0_LENGTH                    0x00000001

#define _TRIG4_TRGCMP1_POSITION                  0x00000004
#define _TRIG4_TRGCMP1_MASK                      0x00000010
#define _TRIG4_TRGCMP1_LENGTH                    0x00000001

#define _TRIG4_TRGCMP2_POSITION                  0x00000005
#define _TRIG4_TRGCMP2_MASK                      0x00000020
#define _TRIG4_TRGCMP2_LENGTH                    0x00000001

#define _TRIG4_TRGCMP3_POSITION                  0x00000006
#define _TRIG4_TRGCMP3_MASK                      0x00000040
#define _TRIG4_TRGCMP3_LENGTH                    0x00000001

#define _TRIG4_TRGCMP4_POSITION                  0x00000007
#define _TRIG4_TRGCMP4_MASK                      0x00000080
#define _TRIG4_TRGCMP4_LENGTH                    0x00000001

#define _TRIG4_TRGCMP5_POSITION                  0x00000008
#define _TRIG4_TRGCMP5_MASK                      0x00000100
#define _TRIG4_TRGCMP5_LENGTH                    0x00000001

#define _TRIG4_TRGCMP6_POSITION                  0x00000009
#define _TRIG4_TRGCMP6_MASK                      0x00000200
#define _TRIG4_TRGCMP6_LENGTH                    0x00000001

#define _TRIG4_TRGCMP7_POSITION                  0x0000000A
#define _TRIG4_TRGCMP7_MASK                      0x00000400
#define _TRIG4_TRGCMP7_LENGTH                    0x00000001

#define _TRIG4_TRGCMP8_POSITION                  0x0000000B
#define _TRIG4_TRGCMP8_MASK                      0x00000800
#define _TRIG4_TRGCMP8_LENGTH                    0x00000001

#define _TRIG4_TRGCMP9_POSITION                  0x0000000C
#define _TRIG4_TRGCMP9_MASK                      0x00001000
#define _TRIG4_TRGCMP9_LENGTH                    0x00000001

#define _TRIG4_TRGCMP10_POSITION                 0x0000000D
#define _TRIG4_TRGCMP10_MASK                     0x00002000
#define _TRIG4_TRGCMP10_LENGTH                   0x00000001

#define _TRIG4_TRGCMP11_POSITION                 0x0000000E
#define _TRIG4_TRGCMP11_MASK                     0x00004000
#define _TRIG4_TRGCMP11_LENGTH                   0x00000001

#define _TRIG4_TRGCMP12_POSITION                 0x0000000F
#define _TRIG4_TRGCMP12_MASK                     0x00008000
#define _TRIG4_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON4_TRGSTRT_POSITION                0x00000000
#define _TRGCON4_TRGSTRT_MASK                    0x0000003F
#define _TRGCON4_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON4_DTM_POSITION                    0x00000007
#define _TRGCON4_DTM_MASK                        0x00000080
#define _TRGCON4_DTM_LENGTH                      0x00000001

#define _TRGCON4_TRGDIV_POSITION                 0x0000000C
#define _TRGCON4_TRGDIV_MASK                     0x0000F000
#define _TRGCON4_TRGDIV_LENGTH                   0x00000004

#define _TRGCON4_TRGSTRT0_POSITION               0x00000000
#define _TRGCON4_TRGSTRT0_MASK                   0x00000001
#define _TRGCON4_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT1_POSITION               0x00000001
#define _TRGCON4_TRGSTRT1_MASK                   0x00000002
#define _TRGCON4_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT2_POSITION               0x00000002
#define _TRGCON4_TRGSTRT2_MASK                   0x00000004
#define _TRGCON4_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT3_POSITION               0x00000003
#define _TRGCON4_TRGSTRT3_MASK                   0x00000008
#define _TRGCON4_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT4_POSITION               0x00000004
#define _TRGCON4_TRGSTRT4_MASK                   0x00000010
#define _TRGCON4_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT5_POSITION               0x00000005
#define _TRGCON4_TRGSTRT5_MASK                   0x00000020
#define _TRGCON4_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON4_TRGDIV0_POSITION                0x0000000C
#define _TRGCON4_TRGDIV0_MASK                    0x00001000
#define _TRGCON4_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV1_POSITION                0x0000000D
#define _TRGCON4_TRGDIV1_MASK                    0x00002000
#define _TRGCON4_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV2_POSITION                0x0000000E
#define _TRGCON4_TRGDIV2_MASK                    0x00004000
#define _TRGCON4_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV3_POSITION                0x0000000F
#define _TRGCON4_TRGDIV3_MASK                    0x00008000
#define _TRGCON4_TRGDIV3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP_POSITION                 0x00000003
#define _STRIG4_STRGCMP_MASK                     0x0000FFF8
#define _STRIG4_STRGCMP_LENGTH                   0x0000000D

#define _STRIG4_STRGCMP0_POSITION                0x00000003
#define _STRIG4_STRGCMP0_MASK                    0x00000008
#define _STRIG4_STRGCMP0_LENGTH                  0x00000001

#define _STRIG4_STRGCMP1_POSITION                0x00000004
#define _STRIG4_STRGCMP1_MASK                    0x00000010
#define _STRIG4_STRGCMP1_LENGTH                  0x00000001

#define _STRIG4_STRGCMP2_POSITION                0x00000005
#define _STRIG4_STRGCMP2_MASK                    0x00000020
#define _STRIG4_STRGCMP2_LENGTH                  0x00000001

#define _STRIG4_STRGCMP3_POSITION                0x00000006
#define _STRIG4_STRGCMP3_MASK                    0x00000040
#define _STRIG4_STRGCMP3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP4_POSITION                0x00000007
#define _STRIG4_STRGCMP4_MASK                    0x00000080
#define _STRIG4_STRGCMP4_LENGTH                  0x00000001

#define _STRIG4_STRGCMP5_POSITION                0x00000008
#define _STRIG4_STRGCMP5_MASK                    0x00000100
#define _STRIG4_STRGCMP5_LENGTH                  0x00000001

#define _STRIG4_STRGCMP6_POSITION                0x00000009
#define _STRIG4_STRGCMP6_MASK                    0x00000200
#define _STRIG4_STRGCMP6_LENGTH                  0x00000001

#define _STRIG4_STRGCMP7_POSITION                0x0000000A
#define _STRIG4_STRGCMP7_MASK                    0x00000400
#define _STRIG4_STRGCMP7_LENGTH                  0x00000001

#define _STRIG4_STRGCMP8_POSITION                0x0000000B
#define _STRIG4_STRGCMP8_MASK                    0x00000800
#define _STRIG4_STRGCMP8_LENGTH                  0x00000001

#define _STRIG4_STRGCMP9_POSITION                0x0000000C
#define _STRIG4_STRGCMP9_MASK                    0x00001000
#define _STRIG4_STRGCMP9_LENGTH                  0x00000001

#define _STRIG4_STRGCMP10_POSITION               0x0000000D
#define _STRIG4_STRGCMP10_MASK                   0x00002000
#define _STRIG4_STRGCMP10_LENGTH                 0x00000001

#define _STRIG4_STRGCMP11_POSITION               0x0000000E
#define _STRIG4_STRGCMP11_MASK                   0x00004000
#define _STRIG4_STRGCMP11_LENGTH                 0x00000001

#define _STRIG4_STRGCMP12_POSITION               0x0000000F
#define _STRIG4_STRGCMP12_MASK                   0x00008000
#define _STRIG4_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON4_BPLL_POSITION                   0x00000000
#define _LEBCON4_BPLL_MASK                       0x00000001
#define _LEBCON4_BPLL_LENGTH                     0x00000001

#define _LEBCON4_BPLH_POSITION                   0x00000001
#define _LEBCON4_BPLH_MASK                       0x00000002
#define _LEBCON4_BPLH_LENGTH                     0x00000001

#define _LEBCON4_BPHL_POSITION                   0x00000002
#define _LEBCON4_BPHL_MASK                       0x00000004
#define _LEBCON4_BPHL_LENGTH                     0x00000001

#define _LEBCON4_BPHH_POSITION                   0x00000003
#define _LEBCON4_BPHH_MASK                       0x00000008
#define _LEBCON4_BPHH_LENGTH                     0x00000001

#define _LEBCON4_BCL_POSITION                    0x00000004
#define _LEBCON4_BCL_MASK                        0x00000010
#define _LEBCON4_BCL_LENGTH                      0x00000001

#define _LEBCON4_BCH_POSITION                    0x00000005
#define _LEBCON4_BCH_MASK                        0x00000020
#define _LEBCON4_BCH_LENGTH                      0x00000001

#define _LEBCON4_CLLEBEN_POSITION                0x0000000A
#define _LEBCON4_CLLEBEN_MASK                    0x00000400
#define _LEBCON4_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON4_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON4_FLTLEBEN_MASK                   0x00000800
#define _LEBCON4_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON4_PLF_POSITION                    0x0000000C
#define _LEBCON4_PLF_MASK                        0x00001000
#define _LEBCON4_PLF_LENGTH                      0x00000001

#define _LEBCON4_PLR_POSITION                    0x0000000D
#define _LEBCON4_PLR_MASK                        0x00002000
#define _LEBCON4_PLR_LENGTH                      0x00000001

#define _LEBCON4_PHF_POSITION                    0x0000000E
#define _LEBCON4_PHF_MASK                        0x00004000
#define _LEBCON4_PHF_LENGTH                      0x00000001

#define _LEBCON4_PHR_POSITION                    0x0000000F
#define _LEBCON4_PHR_MASK                        0x00008000
#define _LEBCON4_PHR_LENGTH                      0x00000001

#define _LEBDLY4_LEB_POSITION                    0x00000003
#define _LEBDLY4_LEB_MASK                        0x00000FF8
#define _LEBDLY4_LEB_LENGTH                      0x00000009

#define _LEBDLY4_LEB0_POSITION                   0x00000003
#define _LEBDLY4_LEB0_MASK                       0x00000008
#define _LEBDLY4_LEB0_LENGTH                     0x00000001

#define _LEBDLY4_LEB1_POSITION                   0x00000004
#define _LEBDLY4_LEB1_MASK                       0x00000010
#define _LEBDLY4_LEB1_LENGTH                     0x00000001

#define _LEBDLY4_LEB2_POSITION                   0x00000005
#define _LEBDLY4_LEB2_MASK                       0x00000020
#define _LEBDLY4_LEB2_LENGTH                     0x00000001

#define _LEBDLY4_LEB3_POSITION                   0x00000006
#define _LEBDLY4_LEB3_MASK                       0x00000040
#define _LEBDLY4_LEB3_LENGTH                     0x00000001

#define _LEBDLY4_LEB4_POSITION                   0x00000007
#define _LEBDLY4_LEB4_MASK                       0x00000080
#define _LEBDLY4_LEB4_LENGTH                     0x00000001

#define _LEBDLY4_LEB5_POSITION                   0x00000008
#define _LEBDLY4_LEB5_MASK                       0x00000100
#define _LEBDLY4_LEB5_LENGTH                     0x00000001

#define _LEBDLY4_LEB6_POSITION                   0x00000009
#define _LEBDLY4_LEB6_MASK                       0x00000200
#define _LEBDLY4_LEB6_LENGTH                     0x00000001

#define _LEBDLY4_LEB7_POSITION                   0x0000000A
#define _LEBDLY4_LEB7_MASK                       0x00000400
#define _LEBDLY4_LEB7_LENGTH                     0x00000001

#define _LEBDLY4_LEB8_POSITION                   0x0000000B
#define _LEBDLY4_LEB8_MASK                       0x00000800
#define _LEBDLY4_LEB8_LENGTH                     0x00000001

#define _AUXCON4_CHOPLEN_POSITION                0x00000000
#define _AUXCON4_CHOPLEN_MASK                    0x00000001
#define _AUXCON4_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPHEN_POSITION                0x00000001
#define _AUXCON4_CHOPHEN_MASK                    0x00000002
#define _AUXCON4_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPSEL_POSITION                0x00000002
#define _AUXCON4_CHOPSEL_MASK                    0x0000003C
#define _AUXCON4_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON4_BLANKSEL_POSITION               0x00000008
#define _AUXCON4_BLANKSEL_MASK                   0x00000F00
#define _AUXCON4_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON4_HRDDIS_POSITION                 0x0000000E
#define _AUXCON4_HRDDIS_MASK                     0x00004000
#define _AUXCON4_HRDDIS_LENGTH                   0x00000001

#define _AUXCON4_HRPDIS_POSITION                 0x0000000F
#define _AUXCON4_HRPDIS_MASK                     0x00008000
#define _AUXCON4_HRPDIS_LENGTH                   0x00000001

#define _AUXCON4_CHOPSEL0_POSITION               0x00000002
#define _AUXCON4_CHOPSEL0_MASK                   0x00000004
#define _AUXCON4_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL1_POSITION               0x00000003
#define _AUXCON4_CHOPSEL1_MASK                   0x00000008
#define _AUXCON4_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL2_POSITION               0x00000004
#define _AUXCON4_CHOPSEL2_MASK                   0x00000010
#define _AUXCON4_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL3_POSITION               0x00000005
#define _AUXCON4_CHOPSEL3_MASK                   0x00000020
#define _AUXCON4_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON4_BLANKSEL0_POSITION              0x00000008
#define _AUXCON4_BLANKSEL0_MASK                  0x00000100
#define _AUXCON4_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL1_POSITION              0x00000009
#define _AUXCON4_BLANKSEL1_MASK                  0x00000200
#define _AUXCON4_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON4_BLANKSEL2_MASK                  0x00000400
#define _AUXCON4_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON4_BLANKSEL3_MASK                  0x00000800
#define _AUXCON4_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON5_IUE_POSITION                    0x00000000
#define _PWMCON5_IUE_MASK                        0x00000001
#define _PWMCON5_IUE_LENGTH                      0x00000001

#define _PWMCON5_XPRES_POSITION                  0x00000001
#define _PWMCON5_XPRES_MASK                      0x00000002
#define _PWMCON5_XPRES_LENGTH                    0x00000001

#define _PWMCON5_CAM_POSITION                    0x00000002
#define _PWMCON5_CAM_MASK                        0x00000004
#define _PWMCON5_CAM_LENGTH                      0x00000001

#define _PWMCON5_MTBS_POSITION                   0x00000003
#define _PWMCON5_MTBS_MASK                       0x00000008
#define _PWMCON5_MTBS_LENGTH                     0x00000001

#define _PWMCON5_DTCP_POSITION                   0x00000005
#define _PWMCON5_DTCP_MASK                       0x00000020
#define _PWMCON5_DTCP_LENGTH                     0x00000001

#define _PWMCON5_DTC_POSITION                    0x00000006
#define _PWMCON5_DTC_MASK                        0x000000C0
#define _PWMCON5_DTC_LENGTH                      0x00000002

#define _PWMCON5_MDCS_POSITION                   0x00000008
#define _PWMCON5_MDCS_MASK                       0x00000100
#define _PWMCON5_MDCS_LENGTH                     0x00000001

#define _PWMCON5_ITB_POSITION                    0x00000009
#define _PWMCON5_ITB_MASK                        0x00000200
#define _PWMCON5_ITB_LENGTH                      0x00000001

#define _PWMCON5_TRGIEN_POSITION                 0x0000000A
#define _PWMCON5_TRGIEN_MASK                     0x00000400
#define _PWMCON5_TRGIEN_LENGTH                   0x00000001

#define _PWMCON5_CLIEN_POSITION                  0x0000000B
#define _PWMCON5_CLIEN_MASK                      0x00000800
#define _PWMCON5_CLIEN_LENGTH                    0x00000001

#define _PWMCON5_FLTIEN_POSITION                 0x0000000C
#define _PWMCON5_FLTIEN_MASK                     0x00001000
#define _PWMCON5_FLTIEN_LENGTH                   0x00000001

#define _PWMCON5_TRGSTAT_POSITION                0x0000000D
#define _PWMCON5_TRGSTAT_MASK                    0x00002000
#define _PWMCON5_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON5_CLSTAT_POSITION                 0x0000000E
#define _PWMCON5_CLSTAT_MASK                     0x00004000
#define _PWMCON5_CLSTAT_LENGTH                   0x00000001

#define _PWMCON5_FLTSTAT_POSITION                0x0000000F
#define _PWMCON5_FLTSTAT_MASK                    0x00008000
#define _PWMCON5_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON5_DTC0_POSITION                   0x00000006
#define _PWMCON5_DTC0_MASK                       0x00000040
#define _PWMCON5_DTC0_LENGTH                     0x00000001

#define _PWMCON5_DTC1_POSITION                   0x00000007
#define _PWMCON5_DTC1_MASK                       0x00000080
#define _PWMCON5_DTC1_LENGTH                     0x00000001

#define _IOCON5_OSYNC_POSITION                   0x00000000
#define _IOCON5_OSYNC_MASK                       0x00000001
#define _IOCON5_OSYNC_LENGTH                     0x00000001

#define _IOCON5_SWAP_POSITION                    0x00000001
#define _IOCON5_SWAP_MASK                        0x00000002
#define _IOCON5_SWAP_LENGTH                      0x00000001

#define _IOCON5_CLDAT_POSITION                   0x00000002
#define _IOCON5_CLDAT_MASK                       0x0000000C
#define _IOCON5_CLDAT_LENGTH                     0x00000002

#define _IOCON5_FLTDAT_POSITION                  0x00000004
#define _IOCON5_FLTDAT_MASK                      0x00000030
#define _IOCON5_FLTDAT_LENGTH                    0x00000002

#define _IOCON5_OVRDAT_POSITION                  0x00000006
#define _IOCON5_OVRDAT_MASK                      0x000000C0
#define _IOCON5_OVRDAT_LENGTH                    0x00000002

#define _IOCON5_OVRENL_POSITION                  0x00000008
#define _IOCON5_OVRENL_MASK                      0x00000100
#define _IOCON5_OVRENL_LENGTH                    0x00000001

#define _IOCON5_OVRENH_POSITION                  0x00000009
#define _IOCON5_OVRENH_MASK                      0x00000200
#define _IOCON5_OVRENH_LENGTH                    0x00000001

#define _IOCON5_PMOD_POSITION                    0x0000000A
#define _IOCON5_PMOD_MASK                        0x00000C00
#define _IOCON5_PMOD_LENGTH                      0x00000002

#define _IOCON5_POLL_POSITION                    0x0000000C
#define _IOCON5_POLL_MASK                        0x00001000
#define _IOCON5_POLL_LENGTH                      0x00000001

#define _IOCON5_POLH_POSITION                    0x0000000D
#define _IOCON5_POLH_MASK                        0x00002000
#define _IOCON5_POLH_LENGTH                      0x00000001

#define _IOCON5_PENL_POSITION                    0x0000000E
#define _IOCON5_PENL_MASK                        0x00004000
#define _IOCON5_PENL_LENGTH                      0x00000001

#define _IOCON5_PENH_POSITION                    0x0000000F
#define _IOCON5_PENH_MASK                        0x00008000
#define _IOCON5_PENH_LENGTH                      0x00000001

#define _IOCON5_CLDAT0_POSITION                  0x00000002
#define _IOCON5_CLDAT0_MASK                      0x00000004
#define _IOCON5_CLDAT0_LENGTH                    0x00000001

#define _IOCON5_CLDAT1_POSITION                  0x00000003
#define _IOCON5_CLDAT1_MASK                      0x00000008
#define _IOCON5_CLDAT1_LENGTH                    0x00000001

#define _IOCON5_FLTDAT0_POSITION                 0x00000004
#define _IOCON5_FLTDAT0_MASK                     0x00000010
#define _IOCON5_FLTDAT0_LENGTH                   0x00000001

#define _IOCON5_FLTDAT1_POSITION                 0x00000005
#define _IOCON5_FLTDAT1_MASK                     0x00000020
#define _IOCON5_FLTDAT1_LENGTH                   0x00000001

#define _IOCON5_OVRDAT0_POSITION                 0x00000006
#define _IOCON5_OVRDAT0_MASK                     0x00000040
#define _IOCON5_OVRDAT0_LENGTH                   0x00000001

#define _IOCON5_OVRDAT1_POSITION                 0x00000007
#define _IOCON5_OVRDAT1_MASK                     0x00000080
#define _IOCON5_OVRDAT1_LENGTH                   0x00000001

#define _IOCON5_PMOD0_POSITION                   0x0000000A
#define _IOCON5_PMOD0_MASK                       0x00000400
#define _IOCON5_PMOD0_LENGTH                     0x00000001

#define _IOCON5_PMOD1_POSITION                   0x0000000B
#define _IOCON5_PMOD1_MASK                       0x00000800
#define _IOCON5_PMOD1_LENGTH                     0x00000001

#define _FCLCON5_FLTMOD_POSITION                 0x00000000
#define _FCLCON5_FLTMOD_MASK                     0x00000003
#define _FCLCON5_FLTMOD_LENGTH                   0x00000002

#define _FCLCON5_FLTPOL_POSITION                 0x00000002
#define _FCLCON5_FLTPOL_MASK                     0x00000004
#define _FCLCON5_FLTPOL_LENGTH                   0x00000001

#define _FCLCON5_FLTSRC_POSITION                 0x00000003
#define _FCLCON5_FLTSRC_MASK                     0x000000F8
#define _FCLCON5_FLTSRC_LENGTH                   0x00000005

#define _FCLCON5_CLMOD_POSITION                  0x00000008
#define _FCLCON5_CLMOD_MASK                      0x00000100
#define _FCLCON5_CLMOD_LENGTH                    0x00000001

#define _FCLCON5_CLPOL_POSITION                  0x00000009
#define _FCLCON5_CLPOL_MASK                      0x00000200
#define _FCLCON5_CLPOL_LENGTH                    0x00000001

#define _FCLCON5_CLSRC_POSITION                  0x0000000A
#define _FCLCON5_CLSRC_MASK                      0x00007C00
#define _FCLCON5_CLSRC_LENGTH                    0x00000005

#define _FCLCON5_IFLTMOD_POSITION                0x0000000F
#define _FCLCON5_IFLTMOD_MASK                    0x00008000
#define _FCLCON5_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON5_FLTMOD0_POSITION                0x00000000
#define _FCLCON5_FLTMOD0_MASK                    0x00000001
#define _FCLCON5_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON5_FLTMOD1_POSITION                0x00000001
#define _FCLCON5_FLTMOD1_MASK                    0x00000002
#define _FCLCON5_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC0_POSITION                0x00000003
#define _FCLCON5_FLTSRC0_MASK                    0x00000008
#define _FCLCON5_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC1_POSITION                0x00000004
#define _FCLCON5_FLTSRC1_MASK                    0x00000010
#define _FCLCON5_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC2_POSITION                0x00000005
#define _FCLCON5_FLTSRC2_MASK                    0x00000020
#define _FCLCON5_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC3_POSITION                0x00000006
#define _FCLCON5_FLTSRC3_MASK                    0x00000040
#define _FCLCON5_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC4_POSITION                0x00000007
#define _FCLCON5_FLTSRC4_MASK                    0x00000080
#define _FCLCON5_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON5_CLSRC0_POSITION                 0x0000000A
#define _FCLCON5_CLSRC0_MASK                     0x00000400
#define _FCLCON5_CLSRC0_LENGTH                   0x00000001

#define _FCLCON5_CLSRC1_POSITION                 0x0000000B
#define _FCLCON5_CLSRC1_MASK                     0x00000800
#define _FCLCON5_CLSRC1_LENGTH                   0x00000001

#define _FCLCON5_CLSRC2_POSITION                 0x0000000C
#define _FCLCON5_CLSRC2_MASK                     0x00001000
#define _FCLCON5_CLSRC2_LENGTH                   0x00000001

#define _FCLCON5_CLSRC3_POSITION                 0x0000000D
#define _FCLCON5_CLSRC3_MASK                     0x00002000
#define _FCLCON5_CLSRC3_LENGTH                   0x00000001

#define _FCLCON5_CLSRC4_POSITION                 0x0000000E
#define _FCLCON5_CLSRC4_MASK                     0x00004000
#define _FCLCON5_CLSRC4_LENGTH                   0x00000001

#define _TRIG5_TRGCMP_POSITION                   0x00000003
#define _TRIG5_TRGCMP_MASK                       0x0000FFF8
#define _TRIG5_TRGCMP_LENGTH                     0x0000000D

#define _TRIG5_TRGCMP0_POSITION                  0x00000003
#define _TRIG5_TRGCMP0_MASK                      0x00000008
#define _TRIG5_TRGCMP0_LENGTH                    0x00000001

#define _TRIG5_TRGCMP1_POSITION                  0x00000004
#define _TRIG5_TRGCMP1_MASK                      0x00000010
#define _TRIG5_TRGCMP1_LENGTH                    0x00000001

#define _TRIG5_TRGCMP2_POSITION                  0x00000005
#define _TRIG5_TRGCMP2_MASK                      0x00000020
#define _TRIG5_TRGCMP2_LENGTH                    0x00000001

#define _TRIG5_TRGCMP3_POSITION                  0x00000006
#define _TRIG5_TRGCMP3_MASK                      0x00000040
#define _TRIG5_TRGCMP3_LENGTH                    0x00000001

#define _TRIG5_TRGCMP4_POSITION                  0x00000007
#define _TRIG5_TRGCMP4_MASK                      0x00000080
#define _TRIG5_TRGCMP4_LENGTH                    0x00000001

#define _TRIG5_TRGCMP5_POSITION                  0x00000008
#define _TRIG5_TRGCMP5_MASK                      0x00000100
#define _TRIG5_TRGCMP5_LENGTH                    0x00000001

#define _TRIG5_TRGCMP6_POSITION                  0x00000009
#define _TRIG5_TRGCMP6_MASK                      0x00000200
#define _TRIG5_TRGCMP6_LENGTH                    0x00000001

#define _TRIG5_TRGCMP7_POSITION                  0x0000000A
#define _TRIG5_TRGCMP7_MASK                      0x00000400
#define _TRIG5_TRGCMP7_LENGTH                    0x00000001

#define _TRIG5_TRGCMP8_POSITION                  0x0000000B
#define _TRIG5_TRGCMP8_MASK                      0x00000800
#define _TRIG5_TRGCMP8_LENGTH                    0x00000001

#define _TRIG5_TRGCMP9_POSITION                  0x0000000C
#define _TRIG5_TRGCMP9_MASK                      0x00001000
#define _TRIG5_TRGCMP9_LENGTH                    0x00000001

#define _TRIG5_TRGCMP10_POSITION                 0x0000000D
#define _TRIG5_TRGCMP10_MASK                     0x00002000
#define _TRIG5_TRGCMP10_LENGTH                   0x00000001

#define _TRIG5_TRGCMP11_POSITION                 0x0000000E
#define _TRIG5_TRGCMP11_MASK                     0x00004000
#define _TRIG5_TRGCMP11_LENGTH                   0x00000001

#define _TRIG5_TRGCMP12_POSITION                 0x0000000F
#define _TRIG5_TRGCMP12_MASK                     0x00008000
#define _TRIG5_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON5_TRGSTRT_POSITION                0x00000000
#define _TRGCON5_TRGSTRT_MASK                    0x0000003F
#define _TRGCON5_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON5_DTM_POSITION                    0x00000007
#define _TRGCON5_DTM_MASK                        0x00000080
#define _TRGCON5_DTM_LENGTH                      0x00000001

#define _TRGCON5_TRGDIV_POSITION                 0x0000000C
#define _TRGCON5_TRGDIV_MASK                     0x0000F000
#define _TRGCON5_TRGDIV_LENGTH                   0x00000004

#define _TRGCON5_TRGSTRT0_POSITION               0x00000000
#define _TRGCON5_TRGSTRT0_MASK                   0x00000001
#define _TRGCON5_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT1_POSITION               0x00000001
#define _TRGCON5_TRGSTRT1_MASK                   0x00000002
#define _TRGCON5_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT2_POSITION               0x00000002
#define _TRGCON5_TRGSTRT2_MASK                   0x00000004
#define _TRGCON5_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT3_POSITION               0x00000003
#define _TRGCON5_TRGSTRT3_MASK                   0x00000008
#define _TRGCON5_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT4_POSITION               0x00000004
#define _TRGCON5_TRGSTRT4_MASK                   0x00000010
#define _TRGCON5_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT5_POSITION               0x00000005
#define _TRGCON5_TRGSTRT5_MASK                   0x00000020
#define _TRGCON5_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON5_TRGDIV0_POSITION                0x0000000C
#define _TRGCON5_TRGDIV0_MASK                    0x00001000
#define _TRGCON5_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV1_POSITION                0x0000000D
#define _TRGCON5_TRGDIV1_MASK                    0x00002000
#define _TRGCON5_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV2_POSITION                0x0000000E
#define _TRGCON5_TRGDIV2_MASK                    0x00004000
#define _TRGCON5_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV3_POSITION                0x0000000F
#define _TRGCON5_TRGDIV3_MASK                    0x00008000
#define _TRGCON5_TRGDIV3_LENGTH                  0x00000001

#define _STRIG5_STRGCMP_POSITION                 0x00000003
#define _STRIG5_STRGCMP_MASK                     0x0000FFF8
#define _STRIG5_STRGCMP_LENGTH                   0x0000000D

#define _STRIG5_STRGCMP0_POSITION                0x00000003
#define _STRIG5_STRGCMP0_MASK                    0x00000008
#define _STRIG5_STRGCMP0_LENGTH                  0x00000001

#define _STRIG5_STRGCMP1_POSITION                0x00000004
#define _STRIG5_STRGCMP1_MASK                    0x00000010
#define _STRIG5_STRGCMP1_LENGTH                  0x00000001

#define _STRIG5_STRGCMP2_POSITION                0x00000005
#define _STRIG5_STRGCMP2_MASK                    0x00000020
#define _STRIG5_STRGCMP2_LENGTH                  0x00000001

#define _STRIG5_STRGCMP3_POSITION                0x00000006
#define _STRIG5_STRGCMP3_MASK                    0x00000040
#define _STRIG5_STRGCMP3_LENGTH                  0x00000001

#define _STRIG5_STRGCMP4_POSITION                0x00000007
#define _STRIG5_STRGCMP4_MASK                    0x00000080
#define _STRIG5_STRGCMP4_LENGTH                  0x00000001

#define _STRIG5_STRGCMP5_POSITION                0x00000008
#define _STRIG5_STRGCMP5_MASK                    0x00000100
#define _STRIG5_STRGCMP5_LENGTH                  0x00000001

#define _STRIG5_STRGCMP6_POSITION                0x00000009
#define _STRIG5_STRGCMP6_MASK                    0x00000200
#define _STRIG5_STRGCMP6_LENGTH                  0x00000001

#define _STRIG5_STRGCMP7_POSITION                0x0000000A
#define _STRIG5_STRGCMP7_MASK                    0x00000400
#define _STRIG5_STRGCMP7_LENGTH                  0x00000001

#define _STRIG5_STRGCMP8_POSITION                0x0000000B
#define _STRIG5_STRGCMP8_MASK                    0x00000800
#define _STRIG5_STRGCMP8_LENGTH                  0x00000001

#define _STRIG5_STRGCMP9_POSITION                0x0000000C
#define _STRIG5_STRGCMP9_MASK                    0x00001000
#define _STRIG5_STRGCMP9_LENGTH                  0x00000001

#define _STRIG5_STRGCMP10_POSITION               0x0000000D
#define _STRIG5_STRGCMP10_MASK                   0x00002000
#define _STRIG5_STRGCMP10_LENGTH                 0x00000001

#define _STRIG5_STRGCMP11_POSITION               0x0000000E
#define _STRIG5_STRGCMP11_MASK                   0x00004000
#define _STRIG5_STRGCMP11_LENGTH                 0x00000001

#define _STRIG5_STRGCMP12_POSITION               0x0000000F
#define _STRIG5_STRGCMP12_MASK                   0x00008000
#define _STRIG5_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON5_BPLL_POSITION                   0x00000000
#define _LEBCON5_BPLL_MASK                       0x00000001
#define _LEBCON5_BPLL_LENGTH                     0x00000001

#define _LEBCON5_BPLH_POSITION                   0x00000001
#define _LEBCON5_BPLH_MASK                       0x00000002
#define _LEBCON5_BPLH_LENGTH                     0x00000001

#define _LEBCON5_BPHL_POSITION                   0x00000002
#define _LEBCON5_BPHL_MASK                       0x00000004
#define _LEBCON5_BPHL_LENGTH                     0x00000001

#define _LEBCON5_BPHH_POSITION                   0x00000003
#define _LEBCON5_BPHH_MASK                       0x00000008
#define _LEBCON5_BPHH_LENGTH                     0x00000001

#define _LEBCON5_BCL_POSITION                    0x00000004
#define _LEBCON5_BCL_MASK                        0x00000010
#define _LEBCON5_BCL_LENGTH                      0x00000001

#define _LEBCON5_BCH_POSITION                    0x00000005
#define _LEBCON5_BCH_MASK                        0x00000020
#define _LEBCON5_BCH_LENGTH                      0x00000001

#define _LEBCON5_CLLEBEN_POSITION                0x0000000A
#define _LEBCON5_CLLEBEN_MASK                    0x00000400
#define _LEBCON5_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON5_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON5_FLTLEBEN_MASK                   0x00000800
#define _LEBCON5_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON5_PLF_POSITION                    0x0000000C
#define _LEBCON5_PLF_MASK                        0x00001000
#define _LEBCON5_PLF_LENGTH                      0x00000001

#define _LEBCON5_PLR_POSITION                    0x0000000D
#define _LEBCON5_PLR_MASK                        0x00002000
#define _LEBCON5_PLR_LENGTH                      0x00000001

#define _LEBCON5_PHF_POSITION                    0x0000000E
#define _LEBCON5_PHF_MASK                        0x00004000
#define _LEBCON5_PHF_LENGTH                      0x00000001

#define _LEBCON5_PHR_POSITION                    0x0000000F
#define _LEBCON5_PHR_MASK                        0x00008000
#define _LEBCON5_PHR_LENGTH                      0x00000001

#define _LEBDLY5_LEB_POSITION                    0x00000003
#define _LEBDLY5_LEB_MASK                        0x00000FF8
#define _LEBDLY5_LEB_LENGTH                      0x00000009

#define _LEBDLY5_LEB0_POSITION                   0x00000003
#define _LEBDLY5_LEB0_MASK                       0x00000008
#define _LEBDLY5_LEB0_LENGTH                     0x00000001

#define _LEBDLY5_LEB1_POSITION                   0x00000004
#define _LEBDLY5_LEB1_MASK                       0x00000010
#define _LEBDLY5_LEB1_LENGTH                     0x00000001

#define _LEBDLY5_LEB2_POSITION                   0x00000005
#define _LEBDLY5_LEB2_MASK                       0x00000020
#define _LEBDLY5_LEB2_LENGTH                     0x00000001

#define _LEBDLY5_LEB3_POSITION                   0x00000006
#define _LEBDLY5_LEB3_MASK                       0x00000040
#define _LEBDLY5_LEB3_LENGTH                     0x00000001

#define _LEBDLY5_LEB4_POSITION                   0x00000007
#define _LEBDLY5_LEB4_MASK                       0x00000080
#define _LEBDLY5_LEB4_LENGTH                     0x00000001

#define _LEBDLY5_LEB5_POSITION                   0x00000008
#define _LEBDLY5_LEB5_MASK                       0x00000100
#define _LEBDLY5_LEB5_LENGTH                     0x00000001

#define _LEBDLY5_LEB6_POSITION                   0x00000009
#define _LEBDLY5_LEB6_MASK                       0x00000200
#define _LEBDLY5_LEB6_LENGTH                     0x00000001

#define _LEBDLY5_LEB7_POSITION                   0x0000000A
#define _LEBDLY5_LEB7_MASK                       0x00000400
#define _LEBDLY5_LEB7_LENGTH                     0x00000001

#define _LEBDLY5_LEB8_POSITION                   0x0000000B
#define _LEBDLY5_LEB8_MASK                       0x00000800
#define _LEBDLY5_LEB8_LENGTH                     0x00000001

#define _AUXCON5_CHOPLEN_POSITION                0x00000000
#define _AUXCON5_CHOPLEN_MASK                    0x00000001
#define _AUXCON5_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON5_CHOPHEN_POSITION                0x00000001
#define _AUXCON5_CHOPHEN_MASK                    0x00000002
#define _AUXCON5_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON5_CHOPSEL_POSITION                0x00000002
#define _AUXCON5_CHOPSEL_MASK                    0x0000003C
#define _AUXCON5_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON5_BLANKSEL_POSITION               0x00000008
#define _AUXCON5_BLANKSEL_MASK                   0x00000F00
#define _AUXCON5_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON5_HRDDIS_POSITION                 0x0000000E
#define _AUXCON5_HRDDIS_MASK                     0x00004000
#define _AUXCON5_HRDDIS_LENGTH                   0x00000001

#define _AUXCON5_HRPDIS_POSITION                 0x0000000F
#define _AUXCON5_HRPDIS_MASK                     0x00008000
#define _AUXCON5_HRPDIS_LENGTH                   0x00000001

#define _AUXCON5_CHOPSEL0_POSITION               0x00000002
#define _AUXCON5_CHOPSEL0_MASK                   0x00000004
#define _AUXCON5_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL1_POSITION               0x00000003
#define _AUXCON5_CHOPSEL1_MASK                   0x00000008
#define _AUXCON5_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL2_POSITION               0x00000004
#define _AUXCON5_CHOPSEL2_MASK                   0x00000010
#define _AUXCON5_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL3_POSITION               0x00000005
#define _AUXCON5_CHOPSEL3_MASK                   0x00000020
#define _AUXCON5_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON5_BLANKSEL0_POSITION              0x00000008
#define _AUXCON5_BLANKSEL0_MASK                  0x00000100
#define _AUXCON5_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL1_POSITION              0x00000009
#define _AUXCON5_BLANKSEL1_MASK                  0x00000200
#define _AUXCON5_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON5_BLANKSEL2_MASK                  0x00000400
#define _AUXCON5_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON5_BLANKSEL3_MASK                  0x00000800
#define _AUXCON5_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON6_IUE_POSITION                    0x00000000
#define _PWMCON6_IUE_MASK                        0x00000001
#define _PWMCON6_IUE_LENGTH                      0x00000001

#define _PWMCON6_XPRES_POSITION                  0x00000001
#define _PWMCON6_XPRES_MASK                      0x00000002
#define _PWMCON6_XPRES_LENGTH                    0x00000001

#define _PWMCON6_CAM_POSITION                    0x00000002
#define _PWMCON6_CAM_MASK                        0x00000004
#define _PWMCON6_CAM_LENGTH                      0x00000001

#define _PWMCON6_MTBS_POSITION                   0x00000003
#define _PWMCON6_MTBS_MASK                       0x00000008
#define _PWMCON6_MTBS_LENGTH                     0x00000001

#define _PWMCON6_DTCP_POSITION                   0x00000005
#define _PWMCON6_DTCP_MASK                       0x00000020
#define _PWMCON6_DTCP_LENGTH                     0x00000001

#define _PWMCON6_DTC_POSITION                    0x00000006
#define _PWMCON6_DTC_MASK                        0x000000C0
#define _PWMCON6_DTC_LENGTH                      0x00000002

#define _PWMCON6_MDCS_POSITION                   0x00000008
#define _PWMCON6_MDCS_MASK                       0x00000100
#define _PWMCON6_MDCS_LENGTH                     0x00000001

#define _PWMCON6_ITB_POSITION                    0x00000009
#define _PWMCON6_ITB_MASK                        0x00000200
#define _PWMCON6_ITB_LENGTH                      0x00000001

#define _PWMCON6_TRGIEN_POSITION                 0x0000000A
#define _PWMCON6_TRGIEN_MASK                     0x00000400
#define _PWMCON6_TRGIEN_LENGTH                   0x00000001

#define _PWMCON6_CLIEN_POSITION                  0x0000000B
#define _PWMCON6_CLIEN_MASK                      0x00000800
#define _PWMCON6_CLIEN_LENGTH                    0x00000001

#define _PWMCON6_FLTIEN_POSITION                 0x0000000C
#define _PWMCON6_FLTIEN_MASK                     0x00001000
#define _PWMCON6_FLTIEN_LENGTH                   0x00000001

#define _PWMCON6_TRGSTAT_POSITION                0x0000000D
#define _PWMCON6_TRGSTAT_MASK                    0x00002000
#define _PWMCON6_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON6_CLSTAT_POSITION                 0x0000000E
#define _PWMCON6_CLSTAT_MASK                     0x00004000
#define _PWMCON6_CLSTAT_LENGTH                   0x00000001

#define _PWMCON6_FLTSTAT_POSITION                0x0000000F
#define _PWMCON6_FLTSTAT_MASK                    0x00008000
#define _PWMCON6_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON6_DTC0_POSITION                   0x00000006
#define _PWMCON6_DTC0_MASK                       0x00000040
#define _PWMCON6_DTC0_LENGTH                     0x00000001

#define _PWMCON6_DTC1_POSITION                   0x00000007
#define _PWMCON6_DTC1_MASK                       0x00000080
#define _PWMCON6_DTC1_LENGTH                     0x00000001

#define _IOCON6_OSYNC_POSITION                   0x00000000
#define _IOCON6_OSYNC_MASK                       0x00000001
#define _IOCON6_OSYNC_LENGTH                     0x00000001

#define _IOCON6_SWAP_POSITION                    0x00000001
#define _IOCON6_SWAP_MASK                        0x00000002
#define _IOCON6_SWAP_LENGTH                      0x00000001

#define _IOCON6_CLDAT_POSITION                   0x00000002
#define _IOCON6_CLDAT_MASK                       0x0000000C
#define _IOCON6_CLDAT_LENGTH                     0x00000002

#define _IOCON6_FLTDAT_POSITION                  0x00000004
#define _IOCON6_FLTDAT_MASK                      0x00000030
#define _IOCON6_FLTDAT_LENGTH                    0x00000002

#define _IOCON6_OVRDAT_POSITION                  0x00000006
#define _IOCON6_OVRDAT_MASK                      0x000000C0
#define _IOCON6_OVRDAT_LENGTH                    0x00000002

#define _IOCON6_OVRENL_POSITION                  0x00000008
#define _IOCON6_OVRENL_MASK                      0x00000100
#define _IOCON6_OVRENL_LENGTH                    0x00000001

#define _IOCON6_OVRENH_POSITION                  0x00000009
#define _IOCON6_OVRENH_MASK                      0x00000200
#define _IOCON6_OVRENH_LENGTH                    0x00000001

#define _IOCON6_PMOD_POSITION                    0x0000000A
#define _IOCON6_PMOD_MASK                        0x00000C00
#define _IOCON6_PMOD_LENGTH                      0x00000002

#define _IOCON6_POLL_POSITION                    0x0000000C
#define _IOCON6_POLL_MASK                        0x00001000
#define _IOCON6_POLL_LENGTH                      0x00000001

#define _IOCON6_POLH_POSITION                    0x0000000D
#define _IOCON6_POLH_MASK                        0x00002000
#define _IOCON6_POLH_LENGTH                      0x00000001

#define _IOCON6_PENL_POSITION                    0x0000000E
#define _IOCON6_PENL_MASK                        0x00004000
#define _IOCON6_PENL_LENGTH                      0x00000001

#define _IOCON6_PENH_POSITION                    0x0000000F
#define _IOCON6_PENH_MASK                        0x00008000
#define _IOCON6_PENH_LENGTH                      0x00000001

#define _IOCON6_CLDAT0_POSITION                  0x00000002
#define _IOCON6_CLDAT0_MASK                      0x00000004
#define _IOCON6_CLDAT0_LENGTH                    0x00000001

#define _IOCON6_CLDAT1_POSITION                  0x00000003
#define _IOCON6_CLDAT1_MASK                      0x00000008
#define _IOCON6_CLDAT1_LENGTH                    0x00000001

#define _IOCON6_FLTDAT0_POSITION                 0x00000004
#define _IOCON6_FLTDAT0_MASK                     0x00000010
#define _IOCON6_FLTDAT0_LENGTH                   0x00000001

#define _IOCON6_FLTDAT1_POSITION                 0x00000005
#define _IOCON6_FLTDAT1_MASK                     0x00000020
#define _IOCON6_FLTDAT1_LENGTH                   0x00000001

#define _IOCON6_OVRDAT0_POSITION                 0x00000006
#define _IOCON6_OVRDAT0_MASK                     0x00000040
#define _IOCON6_OVRDAT0_LENGTH                   0x00000001

#define _IOCON6_OVRDAT1_POSITION                 0x00000007
#define _IOCON6_OVRDAT1_MASK                     0x00000080
#define _IOCON6_OVRDAT1_LENGTH                   0x00000001

#define _IOCON6_PMOD0_POSITION                   0x0000000A
#define _IOCON6_PMOD0_MASK                       0x00000400
#define _IOCON6_PMOD0_LENGTH                     0x00000001

#define _IOCON6_PMOD1_POSITION                   0x0000000B
#define _IOCON6_PMOD1_MASK                       0x00000800
#define _IOCON6_PMOD1_LENGTH                     0x00000001

#define _FCLCON6_FLTMOD_POSITION                 0x00000000
#define _FCLCON6_FLTMOD_MASK                     0x00000003
#define _FCLCON6_FLTMOD_LENGTH                   0x00000002

#define _FCLCON6_FLTPOL_POSITION                 0x00000002
#define _FCLCON6_FLTPOL_MASK                     0x00000004
#define _FCLCON6_FLTPOL_LENGTH                   0x00000001

#define _FCLCON6_FLTSRC_POSITION                 0x00000003
#define _FCLCON6_FLTSRC_MASK                     0x000000F8
#define _FCLCON6_FLTSRC_LENGTH                   0x00000005

#define _FCLCON6_CLMOD_POSITION                  0x00000008
#define _FCLCON6_CLMOD_MASK                      0x00000100
#define _FCLCON6_CLMOD_LENGTH                    0x00000001

#define _FCLCON6_CLPOL_POSITION                  0x00000009
#define _FCLCON6_CLPOL_MASK                      0x00000200
#define _FCLCON6_CLPOL_LENGTH                    0x00000001

#define _FCLCON6_CLSRC_POSITION                  0x0000000A
#define _FCLCON6_CLSRC_MASK                      0x00007C00
#define _FCLCON6_CLSRC_LENGTH                    0x00000005

#define _FCLCON6_IFLTMOD_POSITION                0x0000000F
#define _FCLCON6_IFLTMOD_MASK                    0x00008000
#define _FCLCON6_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON6_FLTMOD0_POSITION                0x00000000
#define _FCLCON6_FLTMOD0_MASK                    0x00000001
#define _FCLCON6_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON6_FLTMOD1_POSITION                0x00000001
#define _FCLCON6_FLTMOD1_MASK                    0x00000002
#define _FCLCON6_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON6_FLTSRC0_POSITION                0x00000003
#define _FCLCON6_FLTSRC0_MASK                    0x00000008
#define _FCLCON6_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON6_FLTSRC1_POSITION                0x00000004
#define _FCLCON6_FLTSRC1_MASK                    0x00000010
#define _FCLCON6_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON6_FLTSRC2_POSITION                0x00000005
#define _FCLCON6_FLTSRC2_MASK                    0x00000020
#define _FCLCON6_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON6_FLTSRC3_POSITION                0x00000006
#define _FCLCON6_FLTSRC3_MASK                    0x00000040
#define _FCLCON6_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON6_FLTSRC4_POSITION                0x00000007
#define _FCLCON6_FLTSRC4_MASK                    0x00000080
#define _FCLCON6_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON6_CLSRC0_POSITION                 0x0000000A
#define _FCLCON6_CLSRC0_MASK                     0x00000400
#define _FCLCON6_CLSRC0_LENGTH                   0x00000001

#define _FCLCON6_CLSRC1_POSITION                 0x0000000B
#define _FCLCON6_CLSRC1_MASK                     0x00000800
#define _FCLCON6_CLSRC1_LENGTH                   0x00000001

#define _FCLCON6_CLSRC2_POSITION                 0x0000000C
#define _FCLCON6_CLSRC2_MASK                     0x00001000
#define _FCLCON6_CLSRC2_LENGTH                   0x00000001

#define _FCLCON6_CLSRC3_POSITION                 0x0000000D
#define _FCLCON6_CLSRC3_MASK                     0x00002000
#define _FCLCON6_CLSRC3_LENGTH                   0x00000001

#define _FCLCON6_CLSRC4_POSITION                 0x0000000E
#define _FCLCON6_CLSRC4_MASK                     0x00004000
#define _FCLCON6_CLSRC4_LENGTH                   0x00000001

#define _TRIG6_TRGCMP_POSITION                   0x00000003
#define _TRIG6_TRGCMP_MASK                       0x0000FFF8
#define _TRIG6_TRGCMP_LENGTH                     0x0000000D

#define _TRIG6_TRGCMP0_POSITION                  0x00000003
#define _TRIG6_TRGCMP0_MASK                      0x00000008
#define _TRIG6_TRGCMP0_LENGTH                    0x00000001

#define _TRIG6_TRGCMP1_POSITION                  0x00000004
#define _TRIG6_TRGCMP1_MASK                      0x00000010
#define _TRIG6_TRGCMP1_LENGTH                    0x00000001

#define _TRIG6_TRGCMP2_POSITION                  0x00000005
#define _TRIG6_TRGCMP2_MASK                      0x00000020
#define _TRIG6_TRGCMP2_LENGTH                    0x00000001

#define _TRIG6_TRGCMP3_POSITION                  0x00000006
#define _TRIG6_TRGCMP3_MASK                      0x00000040
#define _TRIG6_TRGCMP3_LENGTH                    0x00000001

#define _TRIG6_TRGCMP4_POSITION                  0x00000007
#define _TRIG6_TRGCMP4_MASK                      0x00000080
#define _TRIG6_TRGCMP4_LENGTH                    0x00000001

#define _TRIG6_TRGCMP5_POSITION                  0x00000008
#define _TRIG6_TRGCMP5_MASK                      0x00000100
#define _TRIG6_TRGCMP5_LENGTH                    0x00000001

#define _TRIG6_TRGCMP6_POSITION                  0x00000009
#define _TRIG6_TRGCMP6_MASK                      0x00000200
#define _TRIG6_TRGCMP6_LENGTH                    0x00000001

#define _TRIG6_TRGCMP7_POSITION                  0x0000000A
#define _TRIG6_TRGCMP7_MASK                      0x00000400
#define _TRIG6_TRGCMP7_LENGTH                    0x00000001

#define _TRIG6_TRGCMP8_POSITION                  0x0000000B
#define _TRIG6_TRGCMP8_MASK                      0x00000800
#define _TRIG6_TRGCMP8_LENGTH                    0x00000001

#define _TRIG6_TRGCMP9_POSITION                  0x0000000C
#define _TRIG6_TRGCMP9_MASK                      0x00001000
#define _TRIG6_TRGCMP9_LENGTH                    0x00000001

#define _TRIG6_TRGCMP10_POSITION                 0x0000000D
#define _TRIG6_TRGCMP10_MASK                     0x00002000
#define _TRIG6_TRGCMP10_LENGTH                   0x00000001

#define _TRIG6_TRGCMP11_POSITION                 0x0000000E
#define _TRIG6_TRGCMP11_MASK                     0x00004000
#define _TRIG6_TRGCMP11_LENGTH                   0x00000001

#define _TRIG6_TRGCMP12_POSITION                 0x0000000F
#define _TRIG6_TRGCMP12_MASK                     0x00008000
#define _TRIG6_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON6_TRGSTRT_POSITION                0x00000000
#define _TRGCON6_TRGSTRT_MASK                    0x0000003F
#define _TRGCON6_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON6_DTM_POSITION                    0x00000007
#define _TRGCON6_DTM_MASK                        0x00000080
#define _TRGCON6_DTM_LENGTH                      0x00000001

#define _TRGCON6_TRGDIV_POSITION                 0x0000000C
#define _TRGCON6_TRGDIV_MASK                     0x0000F000
#define _TRGCON6_TRGDIV_LENGTH                   0x00000004

#define _TRGCON6_TRGSTRT0_POSITION               0x00000000
#define _TRGCON6_TRGSTRT0_MASK                   0x00000001
#define _TRGCON6_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON6_TRGSTRT1_POSITION               0x00000001
#define _TRGCON6_TRGSTRT1_MASK                   0x00000002
#define _TRGCON6_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON6_TRGSTRT2_POSITION               0x00000002
#define _TRGCON6_TRGSTRT2_MASK                   0x00000004
#define _TRGCON6_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON6_TRGSTRT3_POSITION               0x00000003
#define _TRGCON6_TRGSTRT3_MASK                   0x00000008
#define _TRGCON6_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON6_TRGSTRT4_POSITION               0x00000004
#define _TRGCON6_TRGSTRT4_MASK                   0x00000010
#define _TRGCON6_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON6_TRGSTRT5_POSITION               0x00000005
#define _TRGCON6_TRGSTRT5_MASK                   0x00000020
#define _TRGCON6_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON6_TRGDIV0_POSITION                0x0000000C
#define _TRGCON6_TRGDIV0_MASK                    0x00001000
#define _TRGCON6_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON6_TRGDIV1_POSITION                0x0000000D
#define _TRGCON6_TRGDIV1_MASK                    0x00002000
#define _TRGCON6_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON6_TRGDIV2_POSITION                0x0000000E
#define _TRGCON6_TRGDIV2_MASK                    0x00004000
#define _TRGCON6_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON6_TRGDIV3_POSITION                0x0000000F
#define _TRGCON6_TRGDIV3_MASK                    0x00008000
#define _TRGCON6_TRGDIV3_LENGTH                  0x00000001

#define _STRIG6_STRGCMP_POSITION                 0x00000003
#define _STRIG6_STRGCMP_MASK                     0x0000FFF8
#define _STRIG6_STRGCMP_LENGTH                   0x0000000D

#define _STRIG6_STRGCMP0_POSITION                0x00000003
#define _STRIG6_STRGCMP0_MASK                    0x00000008
#define _STRIG6_STRGCMP0_LENGTH                  0x00000001

#define _STRIG6_STRGCMP1_POSITION                0x00000004
#define _STRIG6_STRGCMP1_MASK                    0x00000010
#define _STRIG6_STRGCMP1_LENGTH                  0x00000001

#define _STRIG6_STRGCMP2_POSITION                0x00000005
#define _STRIG6_STRGCMP2_MASK                    0x00000020
#define _STRIG6_STRGCMP2_LENGTH                  0x00000001

#define _STRIG6_STRGCMP3_POSITION                0x00000006
#define _STRIG6_STRGCMP3_MASK                    0x00000040
#define _STRIG6_STRGCMP3_LENGTH                  0x00000001

#define _STRIG6_STRGCMP4_POSITION                0x00000007
#define _STRIG6_STRGCMP4_MASK                    0x00000080
#define _STRIG6_STRGCMP4_LENGTH                  0x00000001

#define _STRIG6_STRGCMP5_POSITION                0x00000008
#define _STRIG6_STRGCMP5_MASK                    0x00000100
#define _STRIG6_STRGCMP5_LENGTH                  0x00000001

#define _STRIG6_STRGCMP6_POSITION                0x00000009
#define _STRIG6_STRGCMP6_MASK                    0x00000200
#define _STRIG6_STRGCMP6_LENGTH                  0x00000001

#define _STRIG6_STRGCMP7_POSITION                0x0000000A
#define _STRIG6_STRGCMP7_MASK                    0x00000400
#define _STRIG6_STRGCMP7_LENGTH                  0x00000001

#define _STRIG6_STRGCMP8_POSITION                0x0000000B
#define _STRIG6_STRGCMP8_MASK                    0x00000800
#define _STRIG6_STRGCMP8_LENGTH                  0x00000001

#define _STRIG6_STRGCMP9_POSITION                0x0000000C
#define _STRIG6_STRGCMP9_MASK                    0x00001000
#define _STRIG6_STRGCMP9_LENGTH                  0x00000001

#define _STRIG6_STRGCMP10_POSITION               0x0000000D
#define _STRIG6_STRGCMP10_MASK                   0x00002000
#define _STRIG6_STRGCMP10_LENGTH                 0x00000001

#define _STRIG6_STRGCMP11_POSITION               0x0000000E
#define _STRIG6_STRGCMP11_MASK                   0x00004000
#define _STRIG6_STRGCMP11_LENGTH                 0x00000001

#define _STRIG6_STRGCMP12_POSITION               0x0000000F
#define _STRIG6_STRGCMP12_MASK                   0x00008000
#define _STRIG6_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON6_BPLL_POSITION                   0x00000000
#define _LEBCON6_BPLL_MASK                       0x00000001
#define _LEBCON6_BPLL_LENGTH                     0x00000001

#define _LEBCON6_BPLH_POSITION                   0x00000001
#define _LEBCON6_BPLH_MASK                       0x00000002
#define _LEBCON6_BPLH_LENGTH                     0x00000001

#define _LEBCON6_BPHL_POSITION                   0x00000002
#define _LEBCON6_BPHL_MASK                       0x00000004
#define _LEBCON6_BPHL_LENGTH                     0x00000001

#define _LEBCON6_BPHH_POSITION                   0x00000003
#define _LEBCON6_BPHH_MASK                       0x00000008
#define _LEBCON6_BPHH_LENGTH                     0x00000001

#define _LEBCON6_BCL_POSITION                    0x00000004
#define _LEBCON6_BCL_MASK                        0x00000010
#define _LEBCON6_BCL_LENGTH                      0x00000001

#define _LEBCON6_BCH_POSITION                    0x00000005
#define _LEBCON6_BCH_MASK                        0x00000020
#define _LEBCON6_BCH_LENGTH                      0x00000001

#define _LEBCON6_CLLEBEN_POSITION                0x0000000A
#define _LEBCON6_CLLEBEN_MASK                    0x00000400
#define _LEBCON6_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON6_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON6_FLTLEBEN_MASK                   0x00000800
#define _LEBCON6_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON6_PLF_POSITION                    0x0000000C
#define _LEBCON6_PLF_MASK                        0x00001000
#define _LEBCON6_PLF_LENGTH                      0x00000001

#define _LEBCON6_PLR_POSITION                    0x0000000D
#define _LEBCON6_PLR_MASK                        0x00002000
#define _LEBCON6_PLR_LENGTH                      0x00000001

#define _LEBCON6_PHF_POSITION                    0x0000000E
#define _LEBCON6_PHF_MASK                        0x00004000
#define _LEBCON6_PHF_LENGTH                      0x00000001

#define _LEBCON6_PHR_POSITION                    0x0000000F
#define _LEBCON6_PHR_MASK                        0x00008000
#define _LEBCON6_PHR_LENGTH                      0x00000001

#define _LEBDLY6_LEB_POSITION                    0x00000003
#define _LEBDLY6_LEB_MASK                        0x00000FF8
#define _LEBDLY6_LEB_LENGTH                      0x00000009

#define _LEBDLY6_LEB0_POSITION                   0x00000003
#define _LEBDLY6_LEB0_MASK                       0x00000008
#define _LEBDLY6_LEB0_LENGTH                     0x00000001

#define _LEBDLY6_LEB1_POSITION                   0x00000004
#define _LEBDLY6_LEB1_MASK                       0x00000010
#define _LEBDLY6_LEB1_LENGTH                     0x00000001

#define _LEBDLY6_LEB2_POSITION                   0x00000005
#define _LEBDLY6_LEB2_MASK                       0x00000020
#define _LEBDLY6_LEB2_LENGTH                     0x00000001

#define _LEBDLY6_LEB3_POSITION                   0x00000006
#define _LEBDLY6_LEB3_MASK                       0x00000040
#define _LEBDLY6_LEB3_LENGTH                     0x00000001

#define _LEBDLY6_LEB4_POSITION                   0x00000007
#define _LEBDLY6_LEB4_MASK                       0x00000080
#define _LEBDLY6_LEB4_LENGTH                     0x00000001

#define _LEBDLY6_LEB5_POSITION                   0x00000008
#define _LEBDLY6_LEB5_MASK                       0x00000100
#define _LEBDLY6_LEB5_LENGTH                     0x00000001

#define _LEBDLY6_LEB6_POSITION                   0x00000009
#define _LEBDLY6_LEB6_MASK                       0x00000200
#define _LEBDLY6_LEB6_LENGTH                     0x00000001

#define _LEBDLY6_LEB7_POSITION                   0x0000000A
#define _LEBDLY6_LEB7_MASK                       0x00000400
#define _LEBDLY6_LEB7_LENGTH                     0x00000001

#define _LEBDLY6_LEB8_POSITION                   0x0000000B
#define _LEBDLY6_LEB8_MASK                       0x00000800
#define _LEBDLY6_LEB8_LENGTH                     0x00000001

#define _AUXCON6_CHOPLEN_POSITION                0x00000000
#define _AUXCON6_CHOPLEN_MASK                    0x00000001
#define _AUXCON6_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON6_CHOPHEN_POSITION                0x00000001
#define _AUXCON6_CHOPHEN_MASK                    0x00000002
#define _AUXCON6_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON6_CHOPSEL_POSITION                0x00000002
#define _AUXCON6_CHOPSEL_MASK                    0x0000003C
#define _AUXCON6_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON6_BLANKSEL_POSITION               0x00000008
#define _AUXCON6_BLANKSEL_MASK                   0x00000F00
#define _AUXCON6_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON6_HRDDIS_POSITION                 0x0000000E
#define _AUXCON6_HRDDIS_MASK                     0x00004000
#define _AUXCON6_HRDDIS_LENGTH                   0x00000001

#define _AUXCON6_HRPDIS_POSITION                 0x0000000F
#define _AUXCON6_HRPDIS_MASK                     0x00008000
#define _AUXCON6_HRPDIS_LENGTH                   0x00000001

#define _AUXCON6_CHOPSEL0_POSITION               0x00000002
#define _AUXCON6_CHOPSEL0_MASK                   0x00000004
#define _AUXCON6_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON6_CHOPSEL1_POSITION               0x00000003
#define _AUXCON6_CHOPSEL1_MASK                   0x00000008
#define _AUXCON6_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON6_CHOPSEL2_POSITION               0x00000004
#define _AUXCON6_CHOPSEL2_MASK                   0x00000010
#define _AUXCON6_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON6_CHOPSEL3_POSITION               0x00000005
#define _AUXCON6_CHOPSEL3_MASK                   0x00000020
#define _AUXCON6_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON6_BLANKSEL0_POSITION              0x00000008
#define _AUXCON6_BLANKSEL0_MASK                  0x00000100
#define _AUXCON6_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON6_BLANKSEL1_POSITION              0x00000009
#define _AUXCON6_BLANKSEL1_MASK                  0x00000200
#define _AUXCON6_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON6_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON6_BLANKSEL2_MASK                  0x00000400
#define _AUXCON6_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON6_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON6_BLANKSEL3_MASK                  0x00000800
#define _AUXCON6_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON7_IUE_POSITION                    0x00000000
#define _PWMCON7_IUE_MASK                        0x00000001
#define _PWMCON7_IUE_LENGTH                      0x00000001

#define _PWMCON7_XPRES_POSITION                  0x00000001
#define _PWMCON7_XPRES_MASK                      0x00000002
#define _PWMCON7_XPRES_LENGTH                    0x00000001

#define _PWMCON7_CAM_POSITION                    0x00000002
#define _PWMCON7_CAM_MASK                        0x00000004
#define _PWMCON7_CAM_LENGTH                      0x00000001

#define _PWMCON7_MTBS_POSITION                   0x00000003
#define _PWMCON7_MTBS_MASK                       0x00000008
#define _PWMCON7_MTBS_LENGTH                     0x00000001

#define _PWMCON7_DTCP_POSITION                   0x00000005
#define _PWMCON7_DTCP_MASK                       0x00000020
#define _PWMCON7_DTCP_LENGTH                     0x00000001

#define _PWMCON7_DTC_POSITION                    0x00000006
#define _PWMCON7_DTC_MASK                        0x000000C0
#define _PWMCON7_DTC_LENGTH                      0x00000002

#define _PWMCON7_MDCS_POSITION                   0x00000008
#define _PWMCON7_MDCS_MASK                       0x00000100
#define _PWMCON7_MDCS_LENGTH                     0x00000001

#define _PWMCON7_ITB_POSITION                    0x00000009
#define _PWMCON7_ITB_MASK                        0x00000200
#define _PWMCON7_ITB_LENGTH                      0x00000001

#define _PWMCON7_TRGIEN_POSITION                 0x0000000A
#define _PWMCON7_TRGIEN_MASK                     0x00000400
#define _PWMCON7_TRGIEN_LENGTH                   0x00000001

#define _PWMCON7_CLIEN_POSITION                  0x0000000B
#define _PWMCON7_CLIEN_MASK                      0x00000800
#define _PWMCON7_CLIEN_LENGTH                    0x00000001

#define _PWMCON7_FLTIEN_POSITION                 0x0000000C
#define _PWMCON7_FLTIEN_MASK                     0x00001000
#define _PWMCON7_FLTIEN_LENGTH                   0x00000001

#define _PWMCON7_TRGSTAT_POSITION                0x0000000D
#define _PWMCON7_TRGSTAT_MASK                    0x00002000
#define _PWMCON7_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON7_CLSTAT_POSITION                 0x0000000E
#define _PWMCON7_CLSTAT_MASK                     0x00004000
#define _PWMCON7_CLSTAT_LENGTH                   0x00000001

#define _PWMCON7_FLTSTAT_POSITION                0x0000000F
#define _PWMCON7_FLTSTAT_MASK                    0x00008000
#define _PWMCON7_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON7_DTC0_POSITION                   0x00000006
#define _PWMCON7_DTC0_MASK                       0x00000040
#define _PWMCON7_DTC0_LENGTH                     0x00000001

#define _PWMCON7_DTC1_POSITION                   0x00000007
#define _PWMCON7_DTC1_MASK                       0x00000080
#define _PWMCON7_DTC1_LENGTH                     0x00000001

#define _IOCON7_OSYNC_POSITION                   0x00000000
#define _IOCON7_OSYNC_MASK                       0x00000001
#define _IOCON7_OSYNC_LENGTH                     0x00000001

#define _IOCON7_SWAP_POSITION                    0x00000001
#define _IOCON7_SWAP_MASK                        0x00000002
#define _IOCON7_SWAP_LENGTH                      0x00000001

#define _IOCON7_CLDAT_POSITION                   0x00000002
#define _IOCON7_CLDAT_MASK                       0x0000000C
#define _IOCON7_CLDAT_LENGTH                     0x00000002

#define _IOCON7_FLTDAT_POSITION                  0x00000004
#define _IOCON7_FLTDAT_MASK                      0x00000030
#define _IOCON7_FLTDAT_LENGTH                    0x00000002

#define _IOCON7_OVRDAT_POSITION                  0x00000006
#define _IOCON7_OVRDAT_MASK                      0x000000C0
#define _IOCON7_OVRDAT_LENGTH                    0x00000002

#define _IOCON7_OVRENL_POSITION                  0x00000008
#define _IOCON7_OVRENL_MASK                      0x00000100
#define _IOCON7_OVRENL_LENGTH                    0x00000001

#define _IOCON7_OVRENH_POSITION                  0x00000009
#define _IOCON7_OVRENH_MASK                      0x00000200
#define _IOCON7_OVRENH_LENGTH                    0x00000001

#define _IOCON7_PMOD_POSITION                    0x0000000A
#define _IOCON7_PMOD_MASK                        0x00000C00
#define _IOCON7_PMOD_LENGTH                      0x00000002

#define _IOCON7_POLL_POSITION                    0x0000000C
#define _IOCON7_POLL_MASK                        0x00001000
#define _IOCON7_POLL_LENGTH                      0x00000001

#define _IOCON7_POLH_POSITION                    0x0000000D
#define _IOCON7_POLH_MASK                        0x00002000
#define _IOCON7_POLH_LENGTH                      0x00000001

#define _IOCON7_PENL_POSITION                    0x0000000E
#define _IOCON7_PENL_MASK                        0x00004000
#define _IOCON7_PENL_LENGTH                      0x00000001

#define _IOCON7_PENH_POSITION                    0x0000000F
#define _IOCON7_PENH_MASK                        0x00008000
#define _IOCON7_PENH_LENGTH                      0x00000001

#define _IOCON7_CLDAT0_POSITION                  0x00000002
#define _IOCON7_CLDAT0_MASK                      0x00000004
#define _IOCON7_CLDAT0_LENGTH                    0x00000001

#define _IOCON7_CLDAT1_POSITION                  0x00000003
#define _IOCON7_CLDAT1_MASK                      0x00000008
#define _IOCON7_CLDAT1_LENGTH                    0x00000001

#define _IOCON7_FLTDAT0_POSITION                 0x00000004
#define _IOCON7_FLTDAT0_MASK                     0x00000010
#define _IOCON7_FLTDAT0_LENGTH                   0x00000001

#define _IOCON7_FLTDAT1_POSITION                 0x00000005
#define _IOCON7_FLTDAT1_MASK                     0x00000020
#define _IOCON7_FLTDAT1_LENGTH                   0x00000001

#define _IOCON7_OVRDAT0_POSITION                 0x00000006
#define _IOCON7_OVRDAT0_MASK                     0x00000040
#define _IOCON7_OVRDAT0_LENGTH                   0x00000001

#define _IOCON7_OVRDAT1_POSITION                 0x00000007
#define _IOCON7_OVRDAT1_MASK                     0x00000080
#define _IOCON7_OVRDAT1_LENGTH                   0x00000001

#define _IOCON7_PMOD0_POSITION                   0x0000000A
#define _IOCON7_PMOD0_MASK                       0x00000400
#define _IOCON7_PMOD0_LENGTH                     0x00000001

#define _IOCON7_PMOD1_POSITION                   0x0000000B
#define _IOCON7_PMOD1_MASK                       0x00000800
#define _IOCON7_PMOD1_LENGTH                     0x00000001

#define _FCLCON7_FLTMOD_POSITION                 0x00000000
#define _FCLCON7_FLTMOD_MASK                     0x00000003
#define _FCLCON7_FLTMOD_LENGTH                   0x00000002

#define _FCLCON7_FLTPOL_POSITION                 0x00000002
#define _FCLCON7_FLTPOL_MASK                     0x00000004
#define _FCLCON7_FLTPOL_LENGTH                   0x00000001

#define _FCLCON7_FLTSRC_POSITION                 0x00000003
#define _FCLCON7_FLTSRC_MASK                     0x000000F8
#define _FCLCON7_FLTSRC_LENGTH                   0x00000005

#define _FCLCON7_CLMOD_POSITION                  0x00000008
#define _FCLCON7_CLMOD_MASK                      0x00000100
#define _FCLCON7_CLMOD_LENGTH                    0x00000001

#define _FCLCON7_CLPOL_POSITION                  0x00000009
#define _FCLCON7_CLPOL_MASK                      0x00000200
#define _FCLCON7_CLPOL_LENGTH                    0x00000001

#define _FCLCON7_CLSRC_POSITION                  0x0000000A
#define _FCLCON7_CLSRC_MASK                      0x00007C00
#define _FCLCON7_CLSRC_LENGTH                    0x00000005

#define _FCLCON7_IFLTMOD_POSITION                0x0000000F
#define _FCLCON7_IFLTMOD_MASK                    0x00008000
#define _FCLCON7_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON7_FLTMOD0_POSITION                0x00000000
#define _FCLCON7_FLTMOD0_MASK                    0x00000001
#define _FCLCON7_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON7_FLTMOD1_POSITION                0x00000001
#define _FCLCON7_FLTMOD1_MASK                    0x00000002
#define _FCLCON7_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON7_FLTSRC0_POSITION                0x00000003
#define _FCLCON7_FLTSRC0_MASK                    0x00000008
#define _FCLCON7_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON7_FLTSRC1_POSITION                0x00000004
#define _FCLCON7_FLTSRC1_MASK                    0x00000010
#define _FCLCON7_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON7_FLTSRC2_POSITION                0x00000005
#define _FCLCON7_FLTSRC2_MASK                    0x00000020
#define _FCLCON7_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON7_FLTSRC3_POSITION                0x00000006
#define _FCLCON7_FLTSRC3_MASK                    0x00000040
#define _FCLCON7_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON7_FLTSRC4_POSITION                0x00000007
#define _FCLCON7_FLTSRC4_MASK                    0x00000080
#define _FCLCON7_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON7_CLSRC0_POSITION                 0x0000000A
#define _FCLCON7_CLSRC0_MASK                     0x00000400
#define _FCLCON7_CLSRC0_LENGTH                   0x00000001

#define _FCLCON7_CLSRC1_POSITION                 0x0000000B
#define _FCLCON7_CLSRC1_MASK                     0x00000800
#define _FCLCON7_CLSRC1_LENGTH                   0x00000001

#define _FCLCON7_CLSRC2_POSITION                 0x0000000C
#define _FCLCON7_CLSRC2_MASK                     0x00001000
#define _FCLCON7_CLSRC2_LENGTH                   0x00000001

#define _FCLCON7_CLSRC3_POSITION                 0x0000000D
#define _FCLCON7_CLSRC3_MASK                     0x00002000
#define _FCLCON7_CLSRC3_LENGTH                   0x00000001

#define _FCLCON7_CLSRC4_POSITION                 0x0000000E
#define _FCLCON7_CLSRC4_MASK                     0x00004000
#define _FCLCON7_CLSRC4_LENGTH                   0x00000001

#define _TRIG7_TRGCMP_POSITION                   0x00000003
#define _TRIG7_TRGCMP_MASK                       0x0000FFF8
#define _TRIG7_TRGCMP_LENGTH                     0x0000000D

#define _TRIG7_TRGCMP0_POSITION                  0x00000003
#define _TRIG7_TRGCMP0_MASK                      0x00000008
#define _TRIG7_TRGCMP0_LENGTH                    0x00000001

#define _TRIG7_TRGCMP1_POSITION                  0x00000004
#define _TRIG7_TRGCMP1_MASK                      0x00000010
#define _TRIG7_TRGCMP1_LENGTH                    0x00000001

#define _TRIG7_TRGCMP2_POSITION                  0x00000005
#define _TRIG7_TRGCMP2_MASK                      0x00000020
#define _TRIG7_TRGCMP2_LENGTH                    0x00000001

#define _TRIG7_TRGCMP3_POSITION                  0x00000006
#define _TRIG7_TRGCMP3_MASK                      0x00000040
#define _TRIG7_TRGCMP3_LENGTH                    0x00000001

#define _TRIG7_TRGCMP4_POSITION                  0x00000007
#define _TRIG7_TRGCMP4_MASK                      0x00000080
#define _TRIG7_TRGCMP4_LENGTH                    0x00000001

#define _TRIG7_TRGCMP5_POSITION                  0x00000008
#define _TRIG7_TRGCMP5_MASK                      0x00000100
#define _TRIG7_TRGCMP5_LENGTH                    0x00000001

#define _TRIG7_TRGCMP6_POSITION                  0x00000009
#define _TRIG7_TRGCMP6_MASK                      0x00000200
#define _TRIG7_TRGCMP6_LENGTH                    0x00000001

#define _TRIG7_TRGCMP7_POSITION                  0x0000000A
#define _TRIG7_TRGCMP7_MASK                      0x00000400
#define _TRIG7_TRGCMP7_LENGTH                    0x00000001

#define _TRIG7_TRGCMP8_POSITION                  0x0000000B
#define _TRIG7_TRGCMP8_MASK                      0x00000800
#define _TRIG7_TRGCMP8_LENGTH                    0x00000001

#define _TRIG7_TRGCMP9_POSITION                  0x0000000C
#define _TRIG7_TRGCMP9_MASK                      0x00001000
#define _TRIG7_TRGCMP9_LENGTH                    0x00000001

#define _TRIG7_TRGCMP10_POSITION                 0x0000000D
#define _TRIG7_TRGCMP10_MASK                     0x00002000
#define _TRIG7_TRGCMP10_LENGTH                   0x00000001

#define _TRIG7_TRGCMP11_POSITION                 0x0000000E
#define _TRIG7_TRGCMP11_MASK                     0x00004000
#define _TRIG7_TRGCMP11_LENGTH                   0x00000001

#define _TRIG7_TRGCMP12_POSITION                 0x0000000F
#define _TRIG7_TRGCMP12_MASK                     0x00008000
#define _TRIG7_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON7_TRGSTRT_POSITION                0x00000000
#define _TRGCON7_TRGSTRT_MASK                    0x0000003F
#define _TRGCON7_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON7_DTM_POSITION                    0x00000007
#define _TRGCON7_DTM_MASK                        0x00000080
#define _TRGCON7_DTM_LENGTH                      0x00000001

#define _TRGCON7_TRGDIV_POSITION                 0x0000000C
#define _TRGCON7_TRGDIV_MASK                     0x0000F000
#define _TRGCON7_TRGDIV_LENGTH                   0x00000004

#define _TRGCON7_TRGSTRT0_POSITION               0x00000000
#define _TRGCON7_TRGSTRT0_MASK                   0x00000001
#define _TRGCON7_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON7_TRGSTRT1_POSITION               0x00000001
#define _TRGCON7_TRGSTRT1_MASK                   0x00000002
#define _TRGCON7_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON7_TRGSTRT2_POSITION               0x00000002
#define _TRGCON7_TRGSTRT2_MASK                   0x00000004
#define _TRGCON7_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON7_TRGSTRT3_POSITION               0x00000003
#define _TRGCON7_TRGSTRT3_MASK                   0x00000008
#define _TRGCON7_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON7_TRGSTRT4_POSITION               0x00000004
#define _TRGCON7_TRGSTRT4_MASK                   0x00000010
#define _TRGCON7_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON7_TRGSTRT5_POSITION               0x00000005
#define _TRGCON7_TRGSTRT5_MASK                   0x00000020
#define _TRGCON7_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON7_TRGDIV0_POSITION                0x0000000C
#define _TRGCON7_TRGDIV0_MASK                    0x00001000
#define _TRGCON7_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON7_TRGDIV1_POSITION                0x0000000D
#define _TRGCON7_TRGDIV1_MASK                    0x00002000
#define _TRGCON7_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON7_TRGDIV2_POSITION                0x0000000E
#define _TRGCON7_TRGDIV2_MASK                    0x00004000
#define _TRGCON7_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON7_TRGDIV3_POSITION                0x0000000F
#define _TRGCON7_TRGDIV3_MASK                    0x00008000
#define _TRGCON7_TRGDIV3_LENGTH                  0x00000001

#define _STRIG7_STRGCMP_POSITION                 0x00000003
#define _STRIG7_STRGCMP_MASK                     0x0000FFF8
#define _STRIG7_STRGCMP_LENGTH                   0x0000000D

#define _STRIG7_STRGCMP0_POSITION                0x00000003
#define _STRIG7_STRGCMP0_MASK                    0x00000008
#define _STRIG7_STRGCMP0_LENGTH                  0x00000001

#define _STRIG7_STRGCMP1_POSITION                0x00000004
#define _STRIG7_STRGCMP1_MASK                    0x00000010
#define _STRIG7_STRGCMP1_LENGTH                  0x00000001

#define _STRIG7_STRGCMP2_POSITION                0x00000005
#define _STRIG7_STRGCMP2_MASK                    0x00000020
#define _STRIG7_STRGCMP2_LENGTH                  0x00000001

#define _STRIG7_STRGCMP3_POSITION                0x00000006
#define _STRIG7_STRGCMP3_MASK                    0x00000040
#define _STRIG7_STRGCMP3_LENGTH                  0x00000001

#define _STRIG7_STRGCMP4_POSITION                0x00000007
#define _STRIG7_STRGCMP4_MASK                    0x00000080
#define _STRIG7_STRGCMP4_LENGTH                  0x00000001

#define _STRIG7_STRGCMP5_POSITION                0x00000008
#define _STRIG7_STRGCMP5_MASK                    0x00000100
#define _STRIG7_STRGCMP5_LENGTH                  0x00000001

#define _STRIG7_STRGCMP6_POSITION                0x00000009
#define _STRIG7_STRGCMP6_MASK                    0x00000200
#define _STRIG7_STRGCMP6_LENGTH                  0x00000001

#define _STRIG7_STRGCMP7_POSITION                0x0000000A
#define _STRIG7_STRGCMP7_MASK                    0x00000400
#define _STRIG7_STRGCMP7_LENGTH                  0x00000001

#define _STRIG7_STRGCMP8_POSITION                0x0000000B
#define _STRIG7_STRGCMP8_MASK                    0x00000800
#define _STRIG7_STRGCMP8_LENGTH                  0x00000001

#define _STRIG7_STRGCMP9_POSITION                0x0000000C
#define _STRIG7_STRGCMP9_MASK                    0x00001000
#define _STRIG7_STRGCMP9_LENGTH                  0x00000001

#define _STRIG7_STRGCMP10_POSITION               0x0000000D
#define _STRIG7_STRGCMP10_MASK                   0x00002000
#define _STRIG7_STRGCMP10_LENGTH                 0x00000001

#define _STRIG7_STRGCMP11_POSITION               0x0000000E
#define _STRIG7_STRGCMP11_MASK                   0x00004000
#define _STRIG7_STRGCMP11_LENGTH                 0x00000001

#define _STRIG7_STRGCMP12_POSITION               0x0000000F
#define _STRIG7_STRGCMP12_MASK                   0x00008000
#define _STRIG7_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON7_BPLL_POSITION                   0x00000000
#define _LEBCON7_BPLL_MASK                       0x00000001
#define _LEBCON7_BPLL_LENGTH                     0x00000001

#define _LEBCON7_BPLH_POSITION                   0x00000001
#define _LEBCON7_BPLH_MASK                       0x00000002
#define _LEBCON7_BPLH_LENGTH                     0x00000001

#define _LEBCON7_BPHL_POSITION                   0x00000002
#define _LEBCON7_BPHL_MASK                       0x00000004
#define _LEBCON7_BPHL_LENGTH                     0x00000001

#define _LEBCON7_BPHH_POSITION                   0x00000003
#define _LEBCON7_BPHH_MASK                       0x00000008
#define _LEBCON7_BPHH_LENGTH                     0x00000001

#define _LEBCON7_BCL_POSITION                    0x00000004
#define _LEBCON7_BCL_MASK                        0x00000010
#define _LEBCON7_BCL_LENGTH                      0x00000001

#define _LEBCON7_BCH_POSITION                    0x00000005
#define _LEBCON7_BCH_MASK                        0x00000020
#define _LEBCON7_BCH_LENGTH                      0x00000001

#define _LEBCON7_CLLEBEN_POSITION                0x0000000A
#define _LEBCON7_CLLEBEN_MASK                    0x00000400
#define _LEBCON7_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON7_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON7_FLTLEBEN_MASK                   0x00000800
#define _LEBCON7_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON7_PLF_POSITION                    0x0000000C
#define _LEBCON7_PLF_MASK                        0x00001000
#define _LEBCON7_PLF_LENGTH                      0x00000001

#define _LEBCON7_PLR_POSITION                    0x0000000D
#define _LEBCON7_PLR_MASK                        0x00002000
#define _LEBCON7_PLR_LENGTH                      0x00000001

#define _LEBCON7_PHF_POSITION                    0x0000000E
#define _LEBCON7_PHF_MASK                        0x00004000
#define _LEBCON7_PHF_LENGTH                      0x00000001

#define _LEBCON7_PHR_POSITION                    0x0000000F
#define _LEBCON7_PHR_MASK                        0x00008000
#define _LEBCON7_PHR_LENGTH                      0x00000001

#define _LEBDLY7_LEB_POSITION                    0x00000003
#define _LEBDLY7_LEB_MASK                        0x00000FF8
#define _LEBDLY7_LEB_LENGTH                      0x00000009

#define _LEBDLY7_LEB0_POSITION                   0x00000003
#define _LEBDLY7_LEB0_MASK                       0x00000008
#define _LEBDLY7_LEB0_LENGTH                     0x00000001

#define _LEBDLY7_LEB1_POSITION                   0x00000004
#define _LEBDLY7_LEB1_MASK                       0x00000010
#define _LEBDLY7_LEB1_LENGTH                     0x00000001

#define _LEBDLY7_LEB2_POSITION                   0x00000005
#define _LEBDLY7_LEB2_MASK                       0x00000020
#define _LEBDLY7_LEB2_LENGTH                     0x00000001

#define _LEBDLY7_LEB3_POSITION                   0x00000006
#define _LEBDLY7_LEB3_MASK                       0x00000040
#define _LEBDLY7_LEB3_LENGTH                     0x00000001

#define _LEBDLY7_LEB4_POSITION                   0x00000007
#define _LEBDLY7_LEB4_MASK                       0x00000080
#define _LEBDLY7_LEB4_LENGTH                     0x00000001

#define _LEBDLY7_LEB5_POSITION                   0x00000008
#define _LEBDLY7_LEB5_MASK                       0x00000100
#define _LEBDLY7_LEB5_LENGTH                     0x00000001

#define _LEBDLY7_LEB6_POSITION                   0x00000009
#define _LEBDLY7_LEB6_MASK                       0x00000200
#define _LEBDLY7_LEB6_LENGTH                     0x00000001

#define _LEBDLY7_LEB7_POSITION                   0x0000000A
#define _LEBDLY7_LEB7_MASK                       0x00000400
#define _LEBDLY7_LEB7_LENGTH                     0x00000001

#define _LEBDLY7_LEB8_POSITION                   0x0000000B
#define _LEBDLY7_LEB8_MASK                       0x00000800
#define _LEBDLY7_LEB8_LENGTH                     0x00000001

#define _AUXCON7_CHOPLEN_POSITION                0x00000000
#define _AUXCON7_CHOPLEN_MASK                    0x00000001
#define _AUXCON7_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON7_CHOPHEN_POSITION                0x00000001
#define _AUXCON7_CHOPHEN_MASK                    0x00000002
#define _AUXCON7_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON7_CHOPSEL_POSITION                0x00000002
#define _AUXCON7_CHOPSEL_MASK                    0x0000003C
#define _AUXCON7_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON7_BLANKSEL_POSITION               0x00000008
#define _AUXCON7_BLANKSEL_MASK                   0x00000F00
#define _AUXCON7_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON7_HRDDIS_POSITION                 0x0000000E
#define _AUXCON7_HRDDIS_MASK                     0x00004000
#define _AUXCON7_HRDDIS_LENGTH                   0x00000001

#define _AUXCON7_HRPDIS_POSITION                 0x0000000F
#define _AUXCON7_HRPDIS_MASK                     0x00008000
#define _AUXCON7_HRPDIS_LENGTH                   0x00000001

#define _AUXCON7_CHOPSEL0_POSITION               0x00000002
#define _AUXCON7_CHOPSEL0_MASK                   0x00000004
#define _AUXCON7_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON7_CHOPSEL1_POSITION               0x00000003
#define _AUXCON7_CHOPSEL1_MASK                   0x00000008
#define _AUXCON7_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON7_CHOPSEL2_POSITION               0x00000004
#define _AUXCON7_CHOPSEL2_MASK                   0x00000010
#define _AUXCON7_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON7_CHOPSEL3_POSITION               0x00000005
#define _AUXCON7_CHOPSEL3_MASK                   0x00000020
#define _AUXCON7_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON7_BLANKSEL0_POSITION              0x00000008
#define _AUXCON7_BLANKSEL0_MASK                  0x00000100
#define _AUXCON7_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON7_BLANKSEL1_POSITION              0x00000009
#define _AUXCON7_BLANKSEL1_MASK                  0x00000200
#define _AUXCON7_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON7_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON7_BLANKSEL2_MASK                  0x00000400
#define _AUXCON7_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON7_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON7_BLANKSEL3_MASK                  0x00000800
#define _AUXCON7_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON8_IUE_POSITION                    0x00000000
#define _PWMCON8_IUE_MASK                        0x00000001
#define _PWMCON8_IUE_LENGTH                      0x00000001

#define _PWMCON8_XPRES_POSITION                  0x00000001
#define _PWMCON8_XPRES_MASK                      0x00000002
#define _PWMCON8_XPRES_LENGTH                    0x00000001

#define _PWMCON8_CAM_POSITION                    0x00000002
#define _PWMCON8_CAM_MASK                        0x00000004
#define _PWMCON8_CAM_LENGTH                      0x00000001

#define _PWMCON8_MTBS_POSITION                   0x00000003
#define _PWMCON8_MTBS_MASK                       0x00000008
#define _PWMCON8_MTBS_LENGTH                     0x00000001

#define _PWMCON8_DTCP_POSITION                   0x00000005
#define _PWMCON8_DTCP_MASK                       0x00000020
#define _PWMCON8_DTCP_LENGTH                     0x00000001

#define _PWMCON8_DTC_POSITION                    0x00000006
#define _PWMCON8_DTC_MASK                        0x000000C0
#define _PWMCON8_DTC_LENGTH                      0x00000002

#define _PWMCON8_MDCS_POSITION                   0x00000008
#define _PWMCON8_MDCS_MASK                       0x00000100
#define _PWMCON8_MDCS_LENGTH                     0x00000001

#define _PWMCON8_ITB_POSITION                    0x00000009
#define _PWMCON8_ITB_MASK                        0x00000200
#define _PWMCON8_ITB_LENGTH                      0x00000001

#define _PWMCON8_TRGIEN_POSITION                 0x0000000A
#define _PWMCON8_TRGIEN_MASK                     0x00000400
#define _PWMCON8_TRGIEN_LENGTH                   0x00000001

#define _PWMCON8_CLIEN_POSITION                  0x0000000B
#define _PWMCON8_CLIEN_MASK                      0x00000800
#define _PWMCON8_CLIEN_LENGTH                    0x00000001

#define _PWMCON8_FLTIEN_POSITION                 0x0000000C
#define _PWMCON8_FLTIEN_MASK                     0x00001000
#define _PWMCON8_FLTIEN_LENGTH                   0x00000001

#define _PWMCON8_TRGSTAT_POSITION                0x0000000D
#define _PWMCON8_TRGSTAT_MASK                    0x00002000
#define _PWMCON8_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON8_CLSTAT_POSITION                 0x0000000E
#define _PWMCON8_CLSTAT_MASK                     0x00004000
#define _PWMCON8_CLSTAT_LENGTH                   0x00000001

#define _PWMCON8_FLTSTAT_POSITION                0x0000000F
#define _PWMCON8_FLTSTAT_MASK                    0x00008000
#define _PWMCON8_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON8_DTC0_POSITION                   0x00000006
#define _PWMCON8_DTC0_MASK                       0x00000040
#define _PWMCON8_DTC0_LENGTH                     0x00000001

#define _PWMCON8_DTC1_POSITION                   0x00000007
#define _PWMCON8_DTC1_MASK                       0x00000080
#define _PWMCON8_DTC1_LENGTH                     0x00000001

#define _IOCON8_OSYNC_POSITION                   0x00000000
#define _IOCON8_OSYNC_MASK                       0x00000001
#define _IOCON8_OSYNC_LENGTH                     0x00000001

#define _IOCON8_SWAP_POSITION                    0x00000001
#define _IOCON8_SWAP_MASK                        0x00000002
#define _IOCON8_SWAP_LENGTH                      0x00000001

#define _IOCON8_CLDAT_POSITION                   0x00000002
#define _IOCON8_CLDAT_MASK                       0x0000000C
#define _IOCON8_CLDAT_LENGTH                     0x00000002

#define _IOCON8_FLTDAT_POSITION                  0x00000004
#define _IOCON8_FLTDAT_MASK                      0x00000030
#define _IOCON8_FLTDAT_LENGTH                    0x00000002

#define _IOCON8_OVRDAT_POSITION                  0x00000006
#define _IOCON8_OVRDAT_MASK                      0x000000C0
#define _IOCON8_OVRDAT_LENGTH                    0x00000002

#define _IOCON8_OVRENL_POSITION                  0x00000008
#define _IOCON8_OVRENL_MASK                      0x00000100
#define _IOCON8_OVRENL_LENGTH                    0x00000001

#define _IOCON8_OVRENH_POSITION                  0x00000009
#define _IOCON8_OVRENH_MASK                      0x00000200
#define _IOCON8_OVRENH_LENGTH                    0x00000001

#define _IOCON8_PMOD_POSITION                    0x0000000A
#define _IOCON8_PMOD_MASK                        0x00000C00
#define _IOCON8_PMOD_LENGTH                      0x00000002

#define _IOCON8_POLL_POSITION                    0x0000000C
#define _IOCON8_POLL_MASK                        0x00001000
#define _IOCON8_POLL_LENGTH                      0x00000001

#define _IOCON8_POLH_POSITION                    0x0000000D
#define _IOCON8_POLH_MASK                        0x00002000
#define _IOCON8_POLH_LENGTH                      0x00000001

#define _IOCON8_PENL_POSITION                    0x0000000E
#define _IOCON8_PENL_MASK                        0x00004000
#define _IOCON8_PENL_LENGTH                      0x00000001

#define _IOCON8_PENH_POSITION                    0x0000000F
#define _IOCON8_PENH_MASK                        0x00008000
#define _IOCON8_PENH_LENGTH                      0x00000001

#define _IOCON8_CLDAT0_POSITION                  0x00000002
#define _IOCON8_CLDAT0_MASK                      0x00000004
#define _IOCON8_CLDAT0_LENGTH                    0x00000001

#define _IOCON8_CLDAT1_POSITION                  0x00000003
#define _IOCON8_CLDAT1_MASK                      0x00000008
#define _IOCON8_CLDAT1_LENGTH                    0x00000001

#define _IOCON8_FLTDAT0_POSITION                 0x00000004
#define _IOCON8_FLTDAT0_MASK                     0x00000010
#define _IOCON8_FLTDAT0_LENGTH                   0x00000001

#define _IOCON8_FLTDAT1_POSITION                 0x00000005
#define _IOCON8_FLTDAT1_MASK                     0x00000020
#define _IOCON8_FLTDAT1_LENGTH                   0x00000001

#define _IOCON8_OVRDAT0_POSITION                 0x00000006
#define _IOCON8_OVRDAT0_MASK                     0x00000040
#define _IOCON8_OVRDAT0_LENGTH                   0x00000001

#define _IOCON8_OVRDAT1_POSITION                 0x00000007
#define _IOCON8_OVRDAT1_MASK                     0x00000080
#define _IOCON8_OVRDAT1_LENGTH                   0x00000001

#define _IOCON8_PMOD0_POSITION                   0x0000000A
#define _IOCON8_PMOD0_MASK                       0x00000400
#define _IOCON8_PMOD0_LENGTH                     0x00000001

#define _IOCON8_PMOD1_POSITION                   0x0000000B
#define _IOCON8_PMOD1_MASK                       0x00000800
#define _IOCON8_PMOD1_LENGTH                     0x00000001

#define _FCLCON8_FLTMOD_POSITION                 0x00000000
#define _FCLCON8_FLTMOD_MASK                     0x00000003
#define _FCLCON8_FLTMOD_LENGTH                   0x00000002

#define _FCLCON8_FLTPOL_POSITION                 0x00000002
#define _FCLCON8_FLTPOL_MASK                     0x00000004
#define _FCLCON8_FLTPOL_LENGTH                   0x00000001

#define _FCLCON8_FLTSRC_POSITION                 0x00000003
#define _FCLCON8_FLTSRC_MASK                     0x000000F8
#define _FCLCON8_FLTSRC_LENGTH                   0x00000005

#define _FCLCON8_CLMOD_POSITION                  0x00000008
#define _FCLCON8_CLMOD_MASK                      0x00000100
#define _FCLCON8_CLMOD_LENGTH                    0x00000001

#define _FCLCON8_CLPOL_POSITION                  0x00000009
#define _FCLCON8_CLPOL_MASK                      0x00000200
#define _FCLCON8_CLPOL_LENGTH                    0x00000001

#define _FCLCON8_CLSRC_POSITION                  0x0000000A
#define _FCLCON8_CLSRC_MASK                      0x00007C00
#define _FCLCON8_CLSRC_LENGTH                    0x00000005

#define _FCLCON8_IFLTMOD_POSITION                0x0000000F
#define _FCLCON8_IFLTMOD_MASK                    0x00008000
#define _FCLCON8_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON8_FLTMOD0_POSITION                0x00000000
#define _FCLCON8_FLTMOD0_MASK                    0x00000001
#define _FCLCON8_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON8_FLTMOD1_POSITION                0x00000001
#define _FCLCON8_FLTMOD1_MASK                    0x00000002
#define _FCLCON8_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON8_FLTSRC0_POSITION                0x00000003
#define _FCLCON8_FLTSRC0_MASK                    0x00000008
#define _FCLCON8_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON8_FLTSRC1_POSITION                0x00000004
#define _FCLCON8_FLTSRC1_MASK                    0x00000010
#define _FCLCON8_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON8_FLTSRC2_POSITION                0x00000005
#define _FCLCON8_FLTSRC2_MASK                    0x00000020
#define _FCLCON8_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON8_FLTSRC3_POSITION                0x00000006
#define _FCLCON8_FLTSRC3_MASK                    0x00000040
#define _FCLCON8_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON8_FLTSRC4_POSITION                0x00000007
#define _FCLCON8_FLTSRC4_MASK                    0x00000080
#define _FCLCON8_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON8_CLSRC0_POSITION                 0x0000000A
#define _FCLCON8_CLSRC0_MASK                     0x00000400
#define _FCLCON8_CLSRC0_LENGTH                   0x00000001

#define _FCLCON8_CLSRC1_POSITION                 0x0000000B
#define _FCLCON8_CLSRC1_MASK                     0x00000800
#define _FCLCON8_CLSRC1_LENGTH                   0x00000001

#define _FCLCON8_CLSRC2_POSITION                 0x0000000C
#define _FCLCON8_CLSRC2_MASK                     0x00001000
#define _FCLCON8_CLSRC2_LENGTH                   0x00000001

#define _FCLCON8_CLSRC3_POSITION                 0x0000000D
#define _FCLCON8_CLSRC3_MASK                     0x00002000
#define _FCLCON8_CLSRC3_LENGTH                   0x00000001

#define _FCLCON8_CLSRC4_POSITION                 0x0000000E
#define _FCLCON8_CLSRC4_MASK                     0x00004000
#define _FCLCON8_CLSRC4_LENGTH                   0x00000001

#define _TRIG8_TRGCMP_POSITION                   0x00000003
#define _TRIG8_TRGCMP_MASK                       0x0000FFF8
#define _TRIG8_TRGCMP_LENGTH                     0x0000000D

#define _TRIG8_TRGCMP0_POSITION                  0x00000003
#define _TRIG8_TRGCMP0_MASK                      0x00000008
#define _TRIG8_TRGCMP0_LENGTH                    0x00000001

#define _TRIG8_TRGCMP1_POSITION                  0x00000004
#define _TRIG8_TRGCMP1_MASK                      0x00000010
#define _TRIG8_TRGCMP1_LENGTH                    0x00000001

#define _TRIG8_TRGCMP2_POSITION                  0x00000005
#define _TRIG8_TRGCMP2_MASK                      0x00000020
#define _TRIG8_TRGCMP2_LENGTH                    0x00000001

#define _TRIG8_TRGCMP3_POSITION                  0x00000006
#define _TRIG8_TRGCMP3_MASK                      0x00000040
#define _TRIG8_TRGCMP3_LENGTH                    0x00000001

#define _TRIG8_TRGCMP4_POSITION                  0x00000007
#define _TRIG8_TRGCMP4_MASK                      0x00000080
#define _TRIG8_TRGCMP4_LENGTH                    0x00000001

#define _TRIG8_TRGCMP5_POSITION                  0x00000008
#define _TRIG8_TRGCMP5_MASK                      0x00000100
#define _TRIG8_TRGCMP5_LENGTH                    0x00000001

#define _TRIG8_TRGCMP6_POSITION                  0x00000009
#define _TRIG8_TRGCMP6_MASK                      0x00000200
#define _TRIG8_TRGCMP6_LENGTH                    0x00000001

#define _TRIG8_TRGCMP7_POSITION                  0x0000000A
#define _TRIG8_TRGCMP7_MASK                      0x00000400
#define _TRIG8_TRGCMP7_LENGTH                    0x00000001

#define _TRIG8_TRGCMP8_POSITION                  0x0000000B
#define _TRIG8_TRGCMP8_MASK                      0x00000800
#define _TRIG8_TRGCMP8_LENGTH                    0x00000001

#define _TRIG8_TRGCMP9_POSITION                  0x0000000C
#define _TRIG8_TRGCMP9_MASK                      0x00001000
#define _TRIG8_TRGCMP9_LENGTH                    0x00000001

#define _TRIG8_TRGCMP10_POSITION                 0x0000000D
#define _TRIG8_TRGCMP10_MASK                     0x00002000
#define _TRIG8_TRGCMP10_LENGTH                   0x00000001

#define _TRIG8_TRGCMP11_POSITION                 0x0000000E
#define _TRIG8_TRGCMP11_MASK                     0x00004000
#define _TRIG8_TRGCMP11_LENGTH                   0x00000001

#define _TRIG8_TRGCMP12_POSITION                 0x0000000F
#define _TRIG8_TRGCMP12_MASK                     0x00008000
#define _TRIG8_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON8_TRGSTRT_POSITION                0x00000000
#define _TRGCON8_TRGSTRT_MASK                    0x0000003F
#define _TRGCON8_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON8_DTM_POSITION                    0x00000007
#define _TRGCON8_DTM_MASK                        0x00000080
#define _TRGCON8_DTM_LENGTH                      0x00000001

#define _TRGCON8_TRGDIV_POSITION                 0x0000000C
#define _TRGCON8_TRGDIV_MASK                     0x0000F000
#define _TRGCON8_TRGDIV_LENGTH                   0x00000004

#define _TRGCON8_TRGSTRT0_POSITION               0x00000000
#define _TRGCON8_TRGSTRT0_MASK                   0x00000001
#define _TRGCON8_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON8_TRGSTRT1_POSITION               0x00000001
#define _TRGCON8_TRGSTRT1_MASK                   0x00000002
#define _TRGCON8_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON8_TRGSTRT2_POSITION               0x00000002
#define _TRGCON8_TRGSTRT2_MASK                   0x00000004
#define _TRGCON8_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON8_TRGSTRT3_POSITION               0x00000003
#define _TRGCON8_TRGSTRT3_MASK                   0x00000008
#define _TRGCON8_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON8_TRGSTRT4_POSITION               0x00000004
#define _TRGCON8_TRGSTRT4_MASK                   0x00000010
#define _TRGCON8_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON8_TRGSTRT5_POSITION               0x00000005
#define _TRGCON8_TRGSTRT5_MASK                   0x00000020
#define _TRGCON8_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON8_TRGDIV0_POSITION                0x0000000C
#define _TRGCON8_TRGDIV0_MASK                    0x00001000
#define _TRGCON8_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON8_TRGDIV1_POSITION                0x0000000D
#define _TRGCON8_TRGDIV1_MASK                    0x00002000
#define _TRGCON8_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON8_TRGDIV2_POSITION                0x0000000E
#define _TRGCON8_TRGDIV2_MASK                    0x00004000
#define _TRGCON8_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON8_TRGDIV3_POSITION                0x0000000F
#define _TRGCON8_TRGDIV3_MASK                    0x00008000
#define _TRGCON8_TRGDIV3_LENGTH                  0x00000001

#define _STRIG8_STRGCMP_POSITION                 0x00000003
#define _STRIG8_STRGCMP_MASK                     0x0000FFF8
#define _STRIG8_STRGCMP_LENGTH                   0x0000000D

#define _STRIG8_STRGCMP0_POSITION                0x00000003
#define _STRIG8_STRGCMP0_MASK                    0x00000008
#define _STRIG8_STRGCMP0_LENGTH                  0x00000001

#define _STRIG8_STRGCMP1_POSITION                0x00000004
#define _STRIG8_STRGCMP1_MASK                    0x00000010
#define _STRIG8_STRGCMP1_LENGTH                  0x00000001

#define _STRIG8_STRGCMP2_POSITION                0x00000005
#define _STRIG8_STRGCMP2_MASK                    0x00000020
#define _STRIG8_STRGCMP2_LENGTH                  0x00000001

#define _STRIG8_STRGCMP3_POSITION                0x00000006
#define _STRIG8_STRGCMP3_MASK                    0x00000040
#define _STRIG8_STRGCMP3_LENGTH                  0x00000001

#define _STRIG8_STRGCMP4_POSITION                0x00000007
#define _STRIG8_STRGCMP4_MASK                    0x00000080
#define _STRIG8_STRGCMP4_LENGTH                  0x00000001

#define _STRIG8_STRGCMP5_POSITION                0x00000008
#define _STRIG8_STRGCMP5_MASK                    0x00000100
#define _STRIG8_STRGCMP5_LENGTH                  0x00000001

#define _STRIG8_STRGCMP6_POSITION                0x00000009
#define _STRIG8_STRGCMP6_MASK                    0x00000200
#define _STRIG8_STRGCMP6_LENGTH                  0x00000001

#define _STRIG8_STRGCMP7_POSITION                0x0000000A
#define _STRIG8_STRGCMP7_MASK                    0x00000400
#define _STRIG8_STRGCMP7_LENGTH                  0x00000001

#define _STRIG8_STRGCMP8_POSITION                0x0000000B
#define _STRIG8_STRGCMP8_MASK                    0x00000800
#define _STRIG8_STRGCMP8_LENGTH                  0x00000001

#define _STRIG8_STRGCMP9_POSITION                0x0000000C
#define _STRIG8_STRGCMP9_MASK                    0x00001000
#define _STRIG8_STRGCMP9_LENGTH                  0x00000001

#define _STRIG8_STRGCMP10_POSITION               0x0000000D
#define _STRIG8_STRGCMP10_MASK                   0x00002000
#define _STRIG8_STRGCMP10_LENGTH                 0x00000001

#define _STRIG8_STRGCMP11_POSITION               0x0000000E
#define _STRIG8_STRGCMP11_MASK                   0x00004000
#define _STRIG8_STRGCMP11_LENGTH                 0x00000001

#define _STRIG8_STRGCMP12_POSITION               0x0000000F
#define _STRIG8_STRGCMP12_MASK                   0x00008000
#define _STRIG8_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON8_BPLL_POSITION                   0x00000000
#define _LEBCON8_BPLL_MASK                       0x00000001
#define _LEBCON8_BPLL_LENGTH                     0x00000001

#define _LEBCON8_BPLH_POSITION                   0x00000001
#define _LEBCON8_BPLH_MASK                       0x00000002
#define _LEBCON8_BPLH_LENGTH                     0x00000001

#define _LEBCON8_BPHL_POSITION                   0x00000002
#define _LEBCON8_BPHL_MASK                       0x00000004
#define _LEBCON8_BPHL_LENGTH                     0x00000001

#define _LEBCON8_BPHH_POSITION                   0x00000003
#define _LEBCON8_BPHH_MASK                       0x00000008
#define _LEBCON8_BPHH_LENGTH                     0x00000001

#define _LEBCON8_BCL_POSITION                    0x00000004
#define _LEBCON8_BCL_MASK                        0x00000010
#define _LEBCON8_BCL_LENGTH                      0x00000001

#define _LEBCON8_BCH_POSITION                    0x00000005
#define _LEBCON8_BCH_MASK                        0x00000020
#define _LEBCON8_BCH_LENGTH                      0x00000001

#define _LEBCON8_CLLEBEN_POSITION                0x0000000A
#define _LEBCON8_CLLEBEN_MASK                    0x00000400
#define _LEBCON8_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON8_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON8_FLTLEBEN_MASK                   0x00000800
#define _LEBCON8_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON8_PLF_POSITION                    0x0000000C
#define _LEBCON8_PLF_MASK                        0x00001000
#define _LEBCON8_PLF_LENGTH                      0x00000001

#define _LEBCON8_PLR_POSITION                    0x0000000D
#define _LEBCON8_PLR_MASK                        0x00002000
#define _LEBCON8_PLR_LENGTH                      0x00000001

#define _LEBCON8_PHF_POSITION                    0x0000000E
#define _LEBCON8_PHF_MASK                        0x00004000
#define _LEBCON8_PHF_LENGTH                      0x00000001

#define _LEBCON8_PHR_POSITION                    0x0000000F
#define _LEBCON8_PHR_MASK                        0x00008000
#define _LEBCON8_PHR_LENGTH                      0x00000001

#define _LEBDLY8_LEB_POSITION                    0x00000003
#define _LEBDLY8_LEB_MASK                        0x00000FF8
#define _LEBDLY8_LEB_LENGTH                      0x00000009

#define _LEBDLY8_LEB0_POSITION                   0x00000003
#define _LEBDLY8_LEB0_MASK                       0x00000008
#define _LEBDLY8_LEB0_LENGTH                     0x00000001

#define _LEBDLY8_LEB1_POSITION                   0x00000004
#define _LEBDLY8_LEB1_MASK                       0x00000010
#define _LEBDLY8_LEB1_LENGTH                     0x00000001

#define _LEBDLY8_LEB2_POSITION                   0x00000005
#define _LEBDLY8_LEB2_MASK                       0x00000020
#define _LEBDLY8_LEB2_LENGTH                     0x00000001

#define _LEBDLY8_LEB3_POSITION                   0x00000006
#define _LEBDLY8_LEB3_MASK                       0x00000040
#define _LEBDLY8_LEB3_LENGTH                     0x00000001

#define _LEBDLY8_LEB4_POSITION                   0x00000007
#define _LEBDLY8_LEB4_MASK                       0x00000080
#define _LEBDLY8_LEB4_LENGTH                     0x00000001

#define _LEBDLY8_LEB5_POSITION                   0x00000008
#define _LEBDLY8_LEB5_MASK                       0x00000100
#define _LEBDLY8_LEB5_LENGTH                     0x00000001

#define _LEBDLY8_LEB6_POSITION                   0x00000009
#define _LEBDLY8_LEB6_MASK                       0x00000200
#define _LEBDLY8_LEB6_LENGTH                     0x00000001

#define _LEBDLY8_LEB7_POSITION                   0x0000000A
#define _LEBDLY8_LEB7_MASK                       0x00000400
#define _LEBDLY8_LEB7_LENGTH                     0x00000001

#define _LEBDLY8_LEB8_POSITION                   0x0000000B
#define _LEBDLY8_LEB8_MASK                       0x00000800
#define _LEBDLY8_LEB8_LENGTH                     0x00000001

#define _AUXCON8_CHOPLEN_POSITION                0x00000000
#define _AUXCON8_CHOPLEN_MASK                    0x00000001
#define _AUXCON8_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON8_CHOPHEN_POSITION                0x00000001
#define _AUXCON8_CHOPHEN_MASK                    0x00000002
#define _AUXCON8_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON8_CHOPSEL_POSITION                0x00000002
#define _AUXCON8_CHOPSEL_MASK                    0x0000003C
#define _AUXCON8_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON8_BLANKSEL_POSITION               0x00000008
#define _AUXCON8_BLANKSEL_MASK                   0x00000F00
#define _AUXCON8_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON8_HRDDIS_POSITION                 0x0000000E
#define _AUXCON8_HRDDIS_MASK                     0x00004000
#define _AUXCON8_HRDDIS_LENGTH                   0x00000001

#define _AUXCON8_HRPDIS_POSITION                 0x0000000F
#define _AUXCON8_HRPDIS_MASK                     0x00008000
#define _AUXCON8_HRPDIS_LENGTH                   0x00000001

#define _AUXCON8_CHOPSEL0_POSITION               0x00000002
#define _AUXCON8_CHOPSEL0_MASK                   0x00000004
#define _AUXCON8_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON8_CHOPSEL1_POSITION               0x00000003
#define _AUXCON8_CHOPSEL1_MASK                   0x00000008
#define _AUXCON8_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON8_CHOPSEL2_POSITION               0x00000004
#define _AUXCON8_CHOPSEL2_MASK                   0x00000010
#define _AUXCON8_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON8_CHOPSEL3_POSITION               0x00000005
#define _AUXCON8_CHOPSEL3_MASK                   0x00000020
#define _AUXCON8_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON8_BLANKSEL0_POSITION              0x00000008
#define _AUXCON8_BLANKSEL0_MASK                  0x00000100
#define _AUXCON8_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON8_BLANKSEL1_POSITION              0x00000009
#define _AUXCON8_BLANKSEL1_MASK                  0x00000200
#define _AUXCON8_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON8_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON8_BLANKSEL2_MASK                  0x00000400
#define _AUXCON8_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON8_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON8_BLANKSEL3_MASK                  0x00000800
#define _AUXCON8_BLANKSEL3_LENGTH                0x00000001

#define _CMPCON1_RANGE_POSITION                  0x00000000
#define _CMPCON1_RANGE_MASK                      0x00000001
#define _CMPCON1_RANGE_LENGTH                    0x00000001

#define _CMPCON1_CMPPOL_POSITION                 0x00000001
#define _CMPCON1_CMPPOL_MASK                     0x00000002
#define _CMPCON1_CMPPOL_LENGTH                   0x00000001

#define _CMPCON1_CMPSTAT_POSITION                0x00000003
#define _CMPCON1_CMPSTAT_MASK                    0x00000008
#define _CMPCON1_CMPSTAT_LENGTH                  0x00000001

#define _CMPCON1_EXTREF_POSITION                 0x00000005
#define _CMPCON1_EXTREF_MASK                     0x00000020
#define _CMPCON1_EXTREF_LENGTH                   0x00000001

#define _CMPCON1_INSEL_POSITION                  0x00000006
#define _CMPCON1_INSEL_MASK                      0x000000C0
#define _CMPCON1_INSEL_LENGTH                    0x00000002

#define _CMPCON1_DACOE_POSITION                  0x00000008
#define _CMPCON1_DACOE_MASK                      0x00000100
#define _CMPCON1_DACOE_LENGTH                    0x00000001

#define _CMPCON1_CMPSIDL_POSITION                0x0000000D
#define _CMPCON1_CMPSIDL_MASK                    0x00002000
#define _CMPCON1_CMPSIDL_LENGTH                  0x00000001

#define _CMPCON1_CMPON_POSITION                  0x0000000F
#define _CMPCON1_CMPON_MASK                      0x00008000
#define _CMPCON1_CMPON_LENGTH                    0x00000001

#define _CMPCON1_INSEL0_POSITION                 0x00000006
#define _CMPCON1_INSEL0_MASK                     0x00000040
#define _CMPCON1_INSEL0_LENGTH                   0x00000001

#define _CMPCON1_INSEL1_POSITION                 0x00000007
#define _CMPCON1_INSEL1_MASK                     0x00000080
#define _CMPCON1_INSEL1_LENGTH                   0x00000001

#define _CMPDAC1_CMREF_POSITION                  0x00000000
#define _CMPDAC1_CMREF_MASK                      0x000003FF
#define _CMPDAC1_CMREF_LENGTH                    0x0000000A

#define _CMPDAC1_CMREF0_POSITION                 0x00000000
#define _CMPDAC1_CMREF0_MASK                     0x00000001
#define _CMPDAC1_CMREF0_LENGTH                   0x00000001

#define _CMPDAC1_CMREF1_POSITION                 0x00000001
#define _CMPDAC1_CMREF1_MASK                     0x00000002
#define _CMPDAC1_CMREF1_LENGTH                   0x00000001

#define _CMPDAC1_CMREF2_POSITION                 0x00000002
#define _CMPDAC1_CMREF2_MASK                     0x00000004
#define _CMPDAC1_CMREF2_LENGTH                   0x00000001

#define _CMPDAC1_CMREF3_POSITION                 0x00000003
#define _CMPDAC1_CMREF3_MASK                     0x00000008
#define _CMPDAC1_CMREF3_LENGTH                   0x00000001

#define _CMPDAC1_CMREF4_POSITION                 0x00000004
#define _CMPDAC1_CMREF4_MASK                     0x00000010
#define _CMPDAC1_CMREF4_LENGTH                   0x00000001

#define _CMPDAC1_CMREF5_POSITION                 0x00000005
#define _CMPDAC1_CMREF5_MASK                     0x00000020
#define _CMPDAC1_CMREF5_LENGTH                   0x00000001

#define _CMPDAC1_CMREF6_POSITION                 0x00000006
#define _CMPDAC1_CMREF6_MASK                     0x00000040
#define _CMPDAC1_CMREF6_LENGTH                   0x00000001

#define _CMPDAC1_CMREF7_POSITION                 0x00000007
#define _CMPDAC1_CMREF7_MASK                     0x00000080
#define _CMPDAC1_CMREF7_LENGTH                   0x00000001

#define _CMPDAC1_CMREF8_POSITION                 0x00000008
#define _CMPDAC1_CMREF8_MASK                     0x00000100
#define _CMPDAC1_CMREF8_LENGTH                   0x00000001

#define _CMPDAC1_CMREF9_POSITION                 0x00000009
#define _CMPDAC1_CMREF9_MASK                     0x00000200
#define _CMPDAC1_CMREF9_LENGTH                   0x00000001

#define _CMPCON2_RANGE_POSITION                  0x00000000
#define _CMPCON2_RANGE_MASK                      0x00000001
#define _CMPCON2_RANGE_LENGTH                    0x00000001

#define _CMPCON2_CMPPOL_POSITION                 0x00000001
#define _CMPCON2_CMPPOL_MASK                     0x00000002
#define _CMPCON2_CMPPOL_LENGTH                   0x00000001

#define _CMPCON2_CMPSTAT_POSITION                0x00000003
#define _CMPCON2_CMPSTAT_MASK                    0x00000008
#define _CMPCON2_CMPSTAT_LENGTH                  0x00000001

#define _CMPCON2_EXTREF_POSITION                 0x00000005
#define _CMPCON2_EXTREF_MASK                     0x00000020
#define _CMPCON2_EXTREF_LENGTH                   0x00000001

#define _CMPCON2_INSEL_POSITION                  0x00000006
#define _CMPCON2_INSEL_MASK                      0x000000C0
#define _CMPCON2_INSEL_LENGTH                    0x00000002

#define _CMPCON2_DACOE_POSITION                  0x00000008
#define _CMPCON2_DACOE_MASK                      0x00000100
#define _CMPCON2_DACOE_LENGTH                    0x00000001

#define _CMPCON2_CMPSIDL_POSITION                0x0000000D
#define _CMPCON2_CMPSIDL_MASK                    0x00002000
#define _CMPCON2_CMPSIDL_LENGTH                  0x00000001

#define _CMPCON2_CMPON_POSITION                  0x0000000F
#define _CMPCON2_CMPON_MASK                      0x00008000
#define _CMPCON2_CMPON_LENGTH                    0x00000001

#define _CMPCON2_INSEL0_POSITION                 0x00000006
#define _CMPCON2_INSEL0_MASK                     0x00000040
#define _CMPCON2_INSEL0_LENGTH                   0x00000001

#define _CMPCON2_INSEL1_POSITION                 0x00000007
#define _CMPCON2_INSEL1_MASK                     0x00000080
#define _CMPCON2_INSEL1_LENGTH                   0x00000001

#define _CMPDAC2_CMREF_POSITION                  0x00000000
#define _CMPDAC2_CMREF_MASK                      0x000003FF
#define _CMPDAC2_CMREF_LENGTH                    0x0000000A

#define _CMPDAC2_CMREF0_POSITION                 0x00000000
#define _CMPDAC2_CMREF0_MASK                     0x00000001
#define _CMPDAC2_CMREF0_LENGTH                   0x00000001

#define _CMPDAC2_CMREF1_POSITION                 0x00000001
#define _CMPDAC2_CMREF1_MASK                     0x00000002
#define _CMPDAC2_CMREF1_LENGTH                   0x00000001

#define _CMPDAC2_CMREF2_POSITION                 0x00000002
#define _CMPDAC2_CMREF2_MASK                     0x00000004
#define _CMPDAC2_CMREF2_LENGTH                   0x00000001

#define _CMPDAC2_CMREF3_POSITION                 0x00000003
#define _CMPDAC2_CMREF3_MASK                     0x00000008
#define _CMPDAC2_CMREF3_LENGTH                   0x00000001

#define _CMPDAC2_CMREF4_POSITION                 0x00000004
#define _CMPDAC2_CMREF4_MASK                     0x00000010
#define _CMPDAC2_CMREF4_LENGTH                   0x00000001

#define _CMPDAC2_CMREF5_POSITION                 0x00000005
#define _CMPDAC2_CMREF5_MASK                     0x00000020
#define _CMPDAC2_CMREF5_LENGTH                   0x00000001

#define _CMPDAC2_CMREF6_POSITION                 0x00000006
#define _CMPDAC2_CMREF6_MASK                     0x00000040
#define _CMPDAC2_CMREF6_LENGTH                   0x00000001

#define _CMPDAC2_CMREF7_POSITION                 0x00000007
#define _CMPDAC2_CMREF7_MASK                     0x00000080
#define _CMPDAC2_CMREF7_LENGTH                   0x00000001

#define _CMPDAC2_CMREF8_POSITION                 0x00000008
#define _CMPDAC2_CMREF8_MASK                     0x00000100
#define _CMPDAC2_CMREF8_LENGTH                   0x00000001

#define _CMPDAC2_CMREF9_POSITION                 0x00000009
#define _CMPDAC2_CMREF9_MASK                     0x00000200
#define _CMPDAC2_CMREF9_LENGTH                   0x00000001

#define _CMPCON3_RANGE_POSITION                  0x00000000
#define _CMPCON3_RANGE_MASK                      0x00000001
#define _CMPCON3_RANGE_LENGTH                    0x00000001

#define _CMPCON3_CMPPOL_POSITION                 0x00000001
#define _CMPCON3_CMPPOL_MASK                     0x00000002
#define _CMPCON3_CMPPOL_LENGTH                   0x00000001

#define _CMPCON3_CMPSTAT_POSITION                0x00000003
#define _CMPCON3_CMPSTAT_MASK                    0x00000008
#define _CMPCON3_CMPSTAT_LENGTH                  0x00000001

#define _CMPCON3_EXTREF_POSITION                 0x00000005
#define _CMPCON3_EXTREF_MASK                     0x00000020
#define _CMPCON3_EXTREF_LENGTH                   0x00000001

#define _CMPCON3_INSEL_POSITION                  0x00000006
#define _CMPCON3_INSEL_MASK                      0x000000C0
#define _CMPCON3_INSEL_LENGTH                    0x00000002

#define _CMPCON3_DACOE_POSITION                  0x00000008
#define _CMPCON3_DACOE_MASK                      0x00000100
#define _CMPCON3_DACOE_LENGTH                    0x00000001

#define _CMPCON3_CMPSIDL_POSITION                0x0000000D
#define _CMPCON3_CMPSIDL_MASK                    0x00002000
#define _CMPCON3_CMPSIDL_LENGTH                  0x00000001

#define _CMPCON3_CMPON_POSITION                  0x0000000F
#define _CMPCON3_CMPON_MASK                      0x00008000
#define _CMPCON3_CMPON_LENGTH                    0x00000001

#define _CMPCON3_INSEL0_POSITION                 0x00000006
#define _CMPCON3_INSEL0_MASK                     0x00000040
#define _CMPCON3_INSEL0_LENGTH                   0x00000001

#define _CMPCON3_INSEL1_POSITION                 0x00000007
#define _CMPCON3_INSEL1_MASK                     0x00000080
#define _CMPCON3_INSEL1_LENGTH                   0x00000001

#define _CMPDAC3_CMREF_POSITION                  0x00000000
#define _CMPDAC3_CMREF_MASK                      0x000003FF
#define _CMPDAC3_CMREF_LENGTH                    0x0000000A

#define _CMPDAC3_CMREF0_POSITION                 0x00000000
#define _CMPDAC3_CMREF0_MASK                     0x00000001
#define _CMPDAC3_CMREF0_LENGTH                   0x00000001

#define _CMPDAC3_CMREF1_POSITION                 0x00000001
#define _CMPDAC3_CMREF1_MASK                     0x00000002
#define _CMPDAC3_CMREF1_LENGTH                   0x00000001

#define _CMPDAC3_CMREF2_POSITION                 0x00000002
#define _CMPDAC3_CMREF2_MASK                     0x00000004
#define _CMPDAC3_CMREF2_LENGTH                   0x00000001

#define _CMPDAC3_CMREF3_POSITION                 0x00000003
#define _CMPDAC3_CMREF3_MASK                     0x00000008
#define _CMPDAC3_CMREF3_LENGTH                   0x00000001

#define _CMPDAC3_CMREF4_POSITION                 0x00000004
#define _CMPDAC3_CMREF4_MASK                     0x00000010
#define _CMPDAC3_CMREF4_LENGTH                   0x00000001

#define _CMPDAC3_CMREF5_POSITION                 0x00000005
#define _CMPDAC3_CMREF5_MASK                     0x00000020
#define _CMPDAC3_CMREF5_LENGTH                   0x00000001

#define _CMPDAC3_CMREF6_POSITION                 0x00000006
#define _CMPDAC3_CMREF6_MASK                     0x00000040
#define _CMPDAC3_CMREF6_LENGTH                   0x00000001

#define _CMPDAC3_CMREF7_POSITION                 0x00000007
#define _CMPDAC3_CMREF7_MASK                     0x00000080
#define _CMPDAC3_CMREF7_LENGTH                   0x00000001

#define _CMPDAC3_CMREF8_POSITION                 0x00000008
#define _CMPDAC3_CMREF8_MASK                     0x00000100
#define _CMPDAC3_CMREF8_LENGTH                   0x00000001

#define _CMPDAC3_CMREF9_POSITION                 0x00000009
#define _CMPDAC3_CMREF9_MASK                     0x00000200
#define _CMPDAC3_CMREF9_LENGTH                   0x00000001

#define _CMPCON4_RANGE_POSITION                  0x00000000
#define _CMPCON4_RANGE_MASK                      0x00000001
#define _CMPCON4_RANGE_LENGTH                    0x00000001

#define _CMPCON4_CMPPOL_POSITION                 0x00000001
#define _CMPCON4_CMPPOL_MASK                     0x00000002
#define _CMPCON4_CMPPOL_LENGTH                   0x00000001

#define _CMPCON4_CMPSTAT_POSITION                0x00000003
#define _CMPCON4_CMPSTAT_MASK                    0x00000008
#define _CMPCON4_CMPSTAT_LENGTH                  0x00000001

#define _CMPCON4_EXTREF_POSITION                 0x00000005
#define _CMPCON4_EXTREF_MASK                     0x00000020
#define _CMPCON4_EXTREF_LENGTH                   0x00000001

#define _CMPCON4_INSEL_POSITION                  0x00000006
#define _CMPCON4_INSEL_MASK                      0x000000C0
#define _CMPCON4_INSEL_LENGTH                    0x00000002

#define _CMPCON4_DACOE_POSITION                  0x00000008
#define _CMPCON4_DACOE_MASK                      0x00000100
#define _CMPCON4_DACOE_LENGTH                    0x00000001

#define _CMPCON4_CMPSIDL_POSITION                0x0000000D
#define _CMPCON4_CMPSIDL_MASK                    0x00002000
#define _CMPCON4_CMPSIDL_LENGTH                  0x00000001

#define _CMPCON4_CMPON_POSITION                  0x0000000F
#define _CMPCON4_CMPON_MASK                      0x00008000
#define _CMPCON4_CMPON_LENGTH                    0x00000001

#define _CMPCON4_INSEL0_POSITION                 0x00000006
#define _CMPCON4_INSEL0_MASK                     0x00000040
#define _CMPCON4_INSEL0_LENGTH                   0x00000001

#define _CMPCON4_INSEL1_POSITION                 0x00000007
#define _CMPCON4_INSEL1_MASK                     0x00000080
#define _CMPCON4_INSEL1_LENGTH                   0x00000001

#define _CMPDAC4_CMREF_POSITION                  0x00000000
#define _CMPDAC4_CMREF_MASK                      0x000003FF
#define _CMPDAC4_CMREF_LENGTH                    0x0000000A

#define _CMPDAC4_CMREF0_POSITION                 0x00000000
#define _CMPDAC4_CMREF0_MASK                     0x00000001
#define _CMPDAC4_CMREF0_LENGTH                   0x00000001

#define _CMPDAC4_CMREF1_POSITION                 0x00000001
#define _CMPDAC4_CMREF1_MASK                     0x00000002
#define _CMPDAC4_CMREF1_LENGTH                   0x00000001

#define _CMPDAC4_CMREF2_POSITION                 0x00000002
#define _CMPDAC4_CMREF2_MASK                     0x00000004
#define _CMPDAC4_CMREF2_LENGTH                   0x00000001

#define _CMPDAC4_CMREF3_POSITION                 0x00000003
#define _CMPDAC4_CMREF3_MASK                     0x00000008
#define _CMPDAC4_CMREF3_LENGTH                   0x00000001

#define _CMPDAC4_CMREF4_POSITION                 0x00000004
#define _CMPDAC4_CMREF4_MASK                     0x00000010
#define _CMPDAC4_CMREF4_LENGTH                   0x00000001

#define _CMPDAC4_CMREF5_POSITION                 0x00000005
#define _CMPDAC4_CMREF5_MASK                     0x00000020
#define _CMPDAC4_CMREF5_LENGTH                   0x00000001

#define _CMPDAC4_CMREF6_POSITION                 0x00000006
#define _CMPDAC4_CMREF6_MASK                     0x00000040
#define _CMPDAC4_CMREF6_LENGTH                   0x00000001

#define _CMPDAC4_CMREF7_POSITION                 0x00000007
#define _CMPDAC4_CMREF7_MASK                     0x00000080
#define _CMPDAC4_CMREF7_LENGTH                   0x00000001

#define _CMPDAC4_CMREF8_POSITION                 0x00000008
#define _CMPDAC4_CMREF8_MASK                     0x00000100
#define _CMPDAC4_CMREF8_LENGTH                   0x00000001

#define _CMPDAC4_CMREF9_POSITION                 0x00000009
#define _CMPDAC4_CMREF9_MASK                     0x00000200
#define _CMPDAC4_CMREF9_LENGTH                   0x00000001

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWDTEN_POSITION                    0x00000005
#define _RCON_SWDTEN_MASK                        0x00000020
#define _RCON_SWDTEN_LENGTH                      0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_LPOSCEN_POSITION                 0x00000001
#define _OSCCON_LPOSCEN_MASK                     0x00000002
#define _OSCCON_LPOSCEN_LENGTH                   0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_PRCDEN_POSITION                  0x00000004
#define _OSCCON_PRCDEN_MASK                      0x00000010
#define _OSCCON_PRCDEN_LENGTH                    0x00000001

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _CLKDIV_PLLPRE_POSITION                  0x00000000
#define _CLKDIV_PLLPRE_MASK                      0x0000001F
#define _CLKDIV_PLLPRE_LENGTH                    0x00000005

#define _CLKDIV_PLLPOST_POSITION                 0x00000006
#define _CLKDIV_PLLPOST_MASK                     0x000000C0
#define _CLKDIV_PLLPOST_LENGTH                   0x00000002

#define _CLKDIV_FRCDIV_POSITION                  0x00000008
#define _CLKDIV_FRCDIV_MASK                      0x00000700
#define _CLKDIV_FRCDIV_LENGTH                    0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_PLLPRE0_POSITION                 0x00000000
#define _CLKDIV_PLLPRE0_MASK                     0x00000001
#define _CLKDIV_PLLPRE0_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE1_POSITION                 0x00000001
#define _CLKDIV_PLLPRE1_MASK                     0x00000002
#define _CLKDIV_PLLPRE1_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE2_POSITION                 0x00000002
#define _CLKDIV_PLLPRE2_MASK                     0x00000004
#define _CLKDIV_PLLPRE2_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE3_POSITION                 0x00000003
#define _CLKDIV_PLLPRE3_MASK                     0x00000008
#define _CLKDIV_PLLPRE3_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE4_POSITION                 0x00000004
#define _CLKDIV_PLLPRE4_MASK                     0x00000010
#define _CLKDIV_PLLPRE4_LENGTH                   0x00000001

#define _CLKDIV_PLLPOST0_POSITION                0x00000006
#define _CLKDIV_PLLPOST0_MASK                    0x00000040
#define _CLKDIV_PLLPOST0_LENGTH                  0x00000001

#define _CLKDIV_PLLPOST1_POSITION                0x00000007
#define _CLKDIV_PLLPOST1_MASK                    0x00000080
#define _CLKDIV_PLLPOST1_LENGTH                  0x00000001

#define _CLKDIV_FRCDIV0_POSITION                 0x00000008
#define _CLKDIV_FRCDIV0_MASK                     0x00000100
#define _CLKDIV_FRCDIV0_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV1_POSITION                 0x00000009
#define _CLKDIV_FRCDIV1_MASK                     0x00000200
#define _CLKDIV_FRCDIV1_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV2_POSITION                 0x0000000A
#define _CLKDIV_FRCDIV2_MASK                     0x00000400
#define _CLKDIV_FRCDIV2_LENGTH                   0x00000001

#define _CLKDIV_DOZE0_POSITION                   0x0000000C
#define _CLKDIV_DOZE0_MASK                       0x00001000
#define _CLKDIV_DOZE0_LENGTH                     0x00000001

#define _CLKDIV_DOZE1_POSITION                   0x0000000D
#define _CLKDIV_DOZE1_MASK                       0x00002000
#define _CLKDIV_DOZE1_LENGTH                     0x00000001

#define _CLKDIV_DOZE2_POSITION                   0x0000000E
#define _CLKDIV_DOZE2_MASK                       0x00004000
#define _CLKDIV_DOZE2_LENGTH                     0x00000001

#define _PLLFBD_PLLDIV_POSITION                  0x00000000
#define _PLLFBD_PLLDIV_MASK                      0x000001FF
#define _PLLFBD_PLLDIV_LENGTH                    0x00000009

#define _PLLFBD_PLLDIV0_POSITION                 0x00000000
#define _PLLFBD_PLLDIV0_MASK                     0x00000001
#define _PLLFBD_PLLDIV0_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV1_POSITION                 0x00000001
#define _PLLFBD_PLLDIV1_MASK                     0x00000002
#define _PLLFBD_PLLDIV1_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV2_POSITION                 0x00000002
#define _PLLFBD_PLLDIV2_MASK                     0x00000004
#define _PLLFBD_PLLDIV2_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV3_POSITION                 0x00000003
#define _PLLFBD_PLLDIV3_MASK                     0x00000008
#define _PLLFBD_PLLDIV3_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV4_POSITION                 0x00000004
#define _PLLFBD_PLLDIV4_MASK                     0x00000010
#define _PLLFBD_PLLDIV4_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV5_POSITION                 0x00000005
#define _PLLFBD_PLLDIV5_MASK                     0x00000020
#define _PLLFBD_PLLDIV5_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV6_POSITION                 0x00000006
#define _PLLFBD_PLLDIV6_MASK                     0x00000040
#define _PLLFBD_PLLDIV6_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV7_POSITION                 0x00000007
#define _PLLFBD_PLLDIV7_MASK                     0x00000080
#define _PLLFBD_PLLDIV7_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV8_POSITION                 0x00000008
#define _PLLFBD_PLLDIV8_MASK                     0x00000100
#define _PLLFBD_PLLDIV8_LENGTH                   0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _OSCTUN_TSEQ10_POSITION                  0x00000004
#define _OSCTUN_TSEQ10_MASK                      0x00000010
#define _OSCTUN_TSEQ10_LENGTH                    0x00000001

#define _OSCTUN_TSEQ11_POSITION                  0x00000005
#define _OSCTUN_TSEQ11_MASK                      0x00000020
#define _OSCTUN_TSEQ11_LENGTH                    0x00000001

#define _OSCTUN_TSEQ12_POSITION                  0x00000006
#define _OSCTUN_TSEQ12_MASK                      0x00000040
#define _OSCTUN_TSEQ12_LENGTH                    0x00000001

#define _OSCTUN_TSEQ13_POSITION                  0x00000007
#define _OSCTUN_TSEQ13_MASK                      0x00000080
#define _OSCTUN_TSEQ13_LENGTH                    0x00000001

#define _OSCTUN_TSEQ20_POSITION                  0x00000008
#define _OSCTUN_TSEQ20_MASK                      0x00000100
#define _OSCTUN_TSEQ20_LENGTH                    0x00000001

#define _OSCTUN_TSEQ21_POSITION                  0x00000009
#define _OSCTUN_TSEQ21_MASK                      0x00000200
#define _OSCTUN_TSEQ21_LENGTH                    0x00000001

#define _OSCTUN_TSEQ22_POSITION                  0x0000000A
#define _OSCTUN_TSEQ22_MASK                      0x00000400
#define _OSCTUN_TSEQ22_LENGTH                    0x00000001

#define _OSCTUN_TSEQ23_POSITION                  0x0000000B
#define _OSCTUN_TSEQ23_MASK                      0x00000800
#define _OSCTUN_TSEQ23_LENGTH                    0x00000001

#define _OSCTUN_TSEQ30_POSITION                  0x0000000C
#define _OSCTUN_TSEQ30_MASK                      0x00001000
#define _OSCTUN_TSEQ30_LENGTH                    0x00000001

#define _OSCTUN_TSEQ31_POSITION                  0x0000000D
#define _OSCTUN_TSEQ31_MASK                      0x00002000
#define _OSCTUN_TSEQ31_LENGTH                    0x00000001

#define _OSCTUN_TSEQ32_POSITION                  0x0000000E
#define _OSCTUN_TSEQ32_MASK                      0x00004000
#define _OSCTUN_TSEQ32_LENGTH                    0x00000001

#define _OSCTUN_TSEQ33_POSITION                  0x0000000F
#define _OSCTUN_TSEQ33_MASK                      0x00008000
#define _OSCTUN_TSEQ33_LENGTH                    0x00000001

#define _OSCTUN2_TSEQ40_POSITION                 0x00000000
#define _OSCTUN2_TSEQ40_MASK                     0x00000001
#define _OSCTUN2_TSEQ40_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ41_POSITION                 0x00000001
#define _OSCTUN2_TSEQ41_MASK                     0x00000002
#define _OSCTUN2_TSEQ41_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ42_POSITION                 0x00000002
#define _OSCTUN2_TSEQ42_MASK                     0x00000004
#define _OSCTUN2_TSEQ42_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ43_POSITION                 0x00000003
#define _OSCTUN2_TSEQ43_MASK                     0x00000008
#define _OSCTUN2_TSEQ43_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ50_POSITION                 0x00000004
#define _OSCTUN2_TSEQ50_MASK                     0x00000010
#define _OSCTUN2_TSEQ50_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ51_POSITION                 0x00000005
#define _OSCTUN2_TSEQ51_MASK                     0x00000020
#define _OSCTUN2_TSEQ51_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ52_POSITION                 0x00000006
#define _OSCTUN2_TSEQ52_MASK                     0x00000040
#define _OSCTUN2_TSEQ52_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ53_POSITION                 0x00000007
#define _OSCTUN2_TSEQ53_MASK                     0x00000080
#define _OSCTUN2_TSEQ53_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ60_POSITION                 0x00000008
#define _OSCTUN2_TSEQ60_MASK                     0x00000100
#define _OSCTUN2_TSEQ60_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ61_POSITION                 0x00000009
#define _OSCTUN2_TSEQ61_MASK                     0x00000200
#define _OSCTUN2_TSEQ61_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ62_POSITION                 0x0000000A
#define _OSCTUN2_TSEQ62_MASK                     0x00000400
#define _OSCTUN2_TSEQ62_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ63_POSITION                 0x0000000B
#define _OSCTUN2_TSEQ63_MASK                     0x00000800
#define _OSCTUN2_TSEQ63_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ70_POSITION                 0x0000000C
#define _OSCTUN2_TSEQ70_MASK                     0x00001000
#define _OSCTUN2_TSEQ70_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ71_POSITION                 0x0000000D
#define _OSCTUN2_TSEQ71_MASK                     0x00002000
#define _OSCTUN2_TSEQ71_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ72_POSITION                 0x0000000E
#define _OSCTUN2_TSEQ72_MASK                     0x00004000
#define _OSCTUN2_TSEQ72_LENGTH                   0x00000001

#define _OSCTUN2_TSEQ73_POSITION                 0x0000000F
#define _OSCTUN2_TSEQ73_MASK                     0x00008000
#define _OSCTUN2_TSEQ73_LENGTH                   0x00000001

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSIDL_POSITION                 0x0000000D
#define _REFOCON_ROSIDL_MASK                     0x00002000
#define _REFOCON_ROSIDL_LENGTH                   0x00000001

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _REFOCON_RODIV0_POSITION                 0x00000008
#define _REFOCON_RODIV0_MASK                     0x00000100
#define _REFOCON_RODIV0_LENGTH                   0x00000001

#define _REFOCON_RODIV1_POSITION                 0x00000009
#define _REFOCON_RODIV1_MASK                     0x00000200
#define _REFOCON_RODIV1_LENGTH                   0x00000001

#define _REFOCON_RODIV2_POSITION                 0x0000000A
#define _REFOCON_RODIV2_MASK                     0x00000400
#define _REFOCON_RODIV2_LENGTH                   0x00000001

#define _REFOCON_RODIV3_POSITION                 0x0000000B
#define _REFOCON_RODIV3_MASK                     0x00000800
#define _REFOCON_RODIV3_LENGTH                   0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _ACLKCON_FRCSEL_POSITION                 0x00000006
#define _ACLKCON_FRCSEL_MASK                     0x00000040
#define _ACLKCON_FRCSEL_LENGTH                   0x00000001

#define _ACLKCON_ASRCSEL_POSITION                0x00000007
#define _ACLKCON_ASRCSEL_MASK                    0x00000080
#define _ACLKCON_ASRCSEL_LENGTH                  0x00000001

#define _ACLKCON_APSTSCLR_POSITION               0x00000008
#define _ACLKCON_APSTSCLR_MASK                   0x00000700
#define _ACLKCON_APSTSCLR_LENGTH                 0x00000003

#define _ACLKCON_SELACLK_POSITION                0x0000000D
#define _ACLKCON_SELACLK_MASK                    0x00002000
#define _ACLKCON_SELACLK_LENGTH                  0x00000001

#define _ACLKCON_APLLCK_POSITION                 0x0000000E
#define _ACLKCON_APLLCK_MASK                     0x00004000
#define _ACLKCON_APLLCK_LENGTH                   0x00000001

#define _ACLKCON_ENAPLL_POSITION                 0x0000000F
#define _ACLKCON_ENAPLL_MASK                     0x00008000
#define _ACLKCON_ENAPLL_LENGTH                   0x00000001

#define _ACLKCON_APSTSCLR0_POSITION              0x00000008
#define _ACLKCON_APSTSCLR0_MASK                  0x00000100
#define _ACLKCON_APSTSCLR0_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR1_POSITION              0x00000009
#define _ACLKCON_APSTSCLR1_MASK                  0x00000200
#define _ACLKCON_APSTSCLR1_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR2_POSITION              0x0000000A
#define _ACLKCON_APSTSCLR2_MASK                  0x00000400
#define _ACLKCON_APSTSCLR2_LENGTH                0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_ERASE_POSITION                   0x00000006
#define _NVMCON_ERASE_MASK                       0x00000040
#define _NVMCON_ERASE_LENGTH                     0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_C1MD_POSITION                      0x00000001
#define _PMD1_C1MD_MASK                          0x00000002
#define _PMD1_C1MD_LENGTH                        0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_SPI2MD_POSITION                    0x00000004
#define _PMD1_SPI2MD_MASK                        0x00000010
#define _PMD1_SPI2MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_U2MD_POSITION                      0x00000006
#define _PMD1_U2MD_MASK                          0x00000040
#define _PMD1_U2MD_LENGTH                        0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_PWMMD_POSITION                     0x00000009
#define _PMD1_PWMMD_MASK                         0x00000200
#define _PMD1_PWMMD_LENGTH                       0x00000001

#define _PMD1_QEI1MD_POSITION                    0x0000000A
#define _PMD1_QEI1MD_MASK                        0x00000400
#define _PMD1_QEI1MD_LENGTH                      0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD1_T3MD_POSITION                      0x0000000D
#define _PMD1_T3MD_MASK                          0x00002000
#define _PMD1_T3MD_LENGTH                        0x00000001

#define _PMD1_T4MD_POSITION                      0x0000000E
#define _PMD1_T4MD_MASK                          0x00004000
#define _PMD1_T4MD_LENGTH                        0x00000001

#define _PMD1_T5MD_POSITION                      0x0000000F
#define _PMD1_T5MD_MASK                          0x00008000
#define _PMD1_T5MD_LENGTH                        0x00000001

#define _PMD2_OC1MD_POSITION                     0x00000000
#define _PMD2_OC1MD_MASK                         0x00000001
#define _PMD2_OC1MD_LENGTH                       0x00000001

#define _PMD2_OC2MD_POSITION                     0x00000001
#define _PMD2_OC2MD_MASK                         0x00000002
#define _PMD2_OC2MD_LENGTH                       0x00000001

#define _PMD2_OC3MD_POSITION                     0x00000002
#define _PMD2_OC3MD_MASK                         0x00000004
#define _PMD2_OC3MD_LENGTH                       0x00000001

#define _PMD2_OC4MD_POSITION                     0x00000003
#define _PMD2_OC4MD_MASK                         0x00000008
#define _PMD2_OC4MD_LENGTH                       0x00000001

#define _PMD2_IC1MD_POSITION                     0x00000008
#define _PMD2_IC1MD_MASK                         0x00000100
#define _PMD2_IC1MD_LENGTH                       0x00000001

#define _PMD2_IC2MD_POSITION                     0x00000009
#define _PMD2_IC2MD_MASK                         0x00000200
#define _PMD2_IC2MD_LENGTH                       0x00000001

#define _PMD2_IC3MD_POSITION                     0x0000000A
#define _PMD2_IC3MD_MASK                         0x00000400
#define _PMD2_IC3MD_LENGTH                       0x00000001

#define _PMD2_IC4MD_POSITION                     0x0000000B
#define _PMD2_IC4MD_MASK                         0x00000800
#define _PMD2_IC4MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_QEI2MD_POSITION                    0x00000005
#define _PMD3_QEI2MD_MASK                        0x00000020
#define _PMD3_QEI2MD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD6_PWM1MD_POSITION                    0x00000008
#define _PMD6_PWM1MD_MASK                        0x00000100
#define _PMD6_PWM1MD_LENGTH                      0x00000001

#define _PMD6_PWM2MD_POSITION                    0x00000009
#define _PMD6_PWM2MD_MASK                        0x00000200
#define _PMD6_PWM2MD_LENGTH                      0x00000001

#define _PMD6_PWM3MD_POSITION                    0x0000000A
#define _PMD6_PWM3MD_MASK                        0x00000400
#define _PMD6_PWM3MD_LENGTH                      0x00000001

#define _PMD6_PWM4MD_POSITION                    0x0000000B
#define _PMD6_PWM4MD_MASK                        0x00000800
#define _PMD6_PWM4MD_LENGTH                      0x00000001

#define _PMD6_PWM5MD_POSITION                    0x0000000C
#define _PMD6_PWM5MD_MASK                        0x00001000
#define _PMD6_PWM5MD_LENGTH                      0x00000001

#define _PMD6_PWM6MD_POSITION                    0x0000000D
#define _PMD6_PWM6MD_MASK                        0x00002000
#define _PMD6_PWM6MD_LENGTH                      0x00000001

#define _PMD6_PWM7MD_POSITION                    0x0000000E
#define _PMD6_PWM7MD_MASK                        0x00004000
#define _PMD6_PWM7MD_LENGTH                      0x00000001

#define _PMD6_PWM8MD_POSITION                    0x0000000F
#define _PMD6_PWM8MD_MASK                        0x00008000
#define _PMD6_PWM8MD_LENGTH                      0x00000001

#define _PMD7_CMP1MD_POSITION                    0x00000008
#define _PMD7_CMP1MD_MASK                        0x00000100
#define _PMD7_CMP1MD_LENGTH                      0x00000001

#define _PMD7_CMP2MD_POSITION                    0x00000009
#define _PMD7_CMP2MD_MASK                        0x00000200
#define _PMD7_CMP2MD_LENGTH                      0x00000001

#define _PMD7_CMP3MD_POSITION                    0x0000000A
#define _PMD7_CMP3MD_MASK                        0x00000400
#define _PMD7_CMP3MD_LENGTH                      0x00000001

#define _PMD7_CMP4MD_POSITION                    0x0000000B
#define _PMD7_CMP4MD_MASK                        0x00000800
#define _PMD7_CMP4MD_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FBS (0xf80000)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FBS;
#define _FBS(x) __attribute__((address(0xf80000),deprecated_definition("consider migrating to #pragma config"),section("__FBS.sec"),space(prog))) __prog__ uint16_t _FBS = (x);

/*
** Only one invocation of FBS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBS.
** Multiple options may be combined, as shown:
**
** _FBS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Write Protect:
**     BWRP_WRPROTECT_ON    Boot Segment is write protected
**     BWRP_WRPROTECT_OFF   Boot Segment may be written
**
**   Boot Segment Program Flash Code Protection:
**     BSS_LARGE_FLASH_HIGH High Security, Large-sized Boot Flash
**     BSS_HIGH_LARGE_BOOT_CODEHigh Security, Large-sized Boot Flash
**     BSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Boot Flash
**     BSS_HIGH_MEDIUM_BOOT_CODEHigh Security, Medium-sized Boot Flash
**     BSS_SMALL_FLASH_HIGH High Security, Small-sized Boot Flash
**     BSS_HIGH_SMALL_BOOT_CODEHigh Security, Small-sized Boot Flash
**     BSS_LARGE_FLASH_STD  Standard Security, Large-sized Boot Flash
**     BSS_STRD_LARGE_BOOT_CODEStandard Security, Large-sized Boot Flash
**     BSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Boot Flash
**     BSS_STRD_MEDIUM_BOOT_CODEStandard Security, Medium-sized Boot Flash
**     BSS_SMALL_FLASH_STD  Standard Security, Small-sized Boot Flash
**     BSS_STRD_SMALL_BOOT_CODEStandard Security, Small-sized Boot Flash
**     BSS_NO_FLASH         No Boot program Flash segment
**     BSS_NO_BOOT_CODE     No Boot program Flash segment
**
*/

#define BWRP_WRPROTECT_ON    0x000E
#define BWRP_WRPROTECT_OFF   0x000F

#define BSS_LARGE_FLASH_HIGH 0x0001
#define BSS_HIGH_LARGE_BOOT_CODE 0x0001
#define BSS_MEDIUM_FLASH_HIGH 0x0003
#define BSS_HIGH_MEDIUM_BOOT_CODE 0x0003
#define BSS_SMALL_FLASH_HIGH 0x0005
#define BSS_HIGH_SMALL_BOOT_CODE 0x0005
#define BSS_LARGE_FLASH_STD  0x0009
#define BSS_STRD_LARGE_BOOT_CODE 0x0009
#define BSS_MEDIUM_FLASH_STD 0x000B
#define BSS_STRD_MEDIUM_BOOT_CODE 0x000B
#define BSS_SMALL_FLASH_STD  0x000D
#define BSS_STRD_SMALL_BOOT_CODE 0x000D
#define BSS_NO_FLASH         0x000F
#define BSS_NO_BOOT_CODE     0x000F

/* Register FGS (0xf80004)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FGS;
#define _FGS(x) __attribute__((address(0xf80004),deprecated_definition("consider migrating to #pragma config"),section("__FGS.sec"),space(prog))) __prog__ uint16_t _FGS = (x);

/*
** Only one invocation of FGS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FGS.
** Multiple options may be combined, as shown:
**
** _FGS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   General Code Segment Write Protect:
**     GWRP_ON              General Segment is write protected
**     GWRP_OFF             General Segment may be written
**
**   General Segment Code Protection:
**     GSS_HIGH             High Security Code Protection Enabled
**     GSS_STD              Standard Security Code protection Enabled
**     GCP_ON               Standard Security Code protection Enabled
**     GSS_OFF              General Segment Code protect is disabled
**     GCP_OFF              General Segment Code protect is disabled
**
*/

#define GWRP_ON              0x0006
#define GWRP_OFF             0x0007

#define GSS_HIGH             0x0003
#define GSS_STD              0x0005
#define GCP_ON               0x0005
#define GSS_OFF              0x0007
#define GCP_OFF              0x0007

/* Register FOSCSEL (0xf80006)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FOSCSEL;
#define _FOSCSEL(x) __attribute__((address(0xf80006),deprecated_definition("consider migrating to #pragma config"),section("__FOSCSEL.sec"),space(prog))) __prog__ uint16_t _FOSCSEL = (x);

/*
** Only one invocation of FOSCSEL should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSCSEL.
** Multiple options may be combined, as shown:
**
** _FOSCSEL( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Oscillator Source Selection:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Internal Fast RC with PLL (FRCPLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator (XT, HS, EC) with PLL
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV16       Internal Fast RC (FRC) Oscillator with divide-by-16
**     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
**
**   Internal External Switch Over Mode:
**     IESO_OFF             Start up with user-selected oscillator source
**     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
**
*/

#define FNOSC_FRC            0x0080
#define FNOSC_FRCPLL         0x0081
#define FNOSC_PRI            0x0082
#define FNOSC_PRIPLL         0x0083
#define FNOSC_SOSC           0x0084
#define FNOSC_LPRC           0x0085
#define FNOSC_FRCDIV16       0x0086
#define FNOSC_FRCDIVN        0x0087

#define IESO_OFF             0x0007
#define IESO_ON              0x0087

/* Register FOSC (0xf80008)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FOSC;
#define _FOSC(x) __attribute__((address(0xf80008),deprecated_definition("consider migrating to #pragma config"),section("__FOSC.sec"),space(prog))) __prog__ uint16_t _FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** _FOSC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Source:
**     POSCMD_EC            EC (External Clock) Mode
**     POSCMD_XT            XT Crystal Oscillator Mode
**     POSCMD_HS            HS Crystal Oscillator Mode
**     POSCMD_NONE          Primary Oscillator disabled
**
**   OSC2 Pin Function:
**     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
**     OSCIOFNC_OFF         OSC2 is clock output
**
**   Clock Switching Mode bits:
**     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
**
*/

#define POSCMD_EC            0x00C4
#define POSCMD_XT            0x00C5
#define POSCMD_HS            0x00C6
#define POSCMD_NONE          0x00C7

#define OSCIOFNC_ON          0x00C3
#define OSCIOFNC_OFF         0x00C7

#define FCKSM_CSECME         0x0007
#define FCKSM_CSECMD         0x0047
#define FCKSM_CSDCMD         0x0087

/* Register FWDT (0xf8000a)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FWDT;
#define _FWDT(x) __attribute__((address(0xf8000a),deprecated_definition("consider migrating to #pragma config"),section("__FWDT.sec"),space(prog))) __prog__ uint16_t _FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** _FWDT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler:
**     WDTPOST_PS1          1:1
**     WDTPOST_PS2          1:2
**     WDTPOST_PS4          1:4
**     WDTPOST_PS8          1:8
**     WDTPOST_PS16         1:16
**     WDTPOST_PS32         1:32
**     WDTPOST_PS64         1:64
**     WDTPOST_PS128        1:128
**     WDTPOST_PS256        1:256
**     WDTPOST_PS512        1:512
**     WDTPOST_PS1024       1:1,024
**     WDTPOST_PS2048       1:2,048
**     WDTPOST_PS4096       1:4,096
**     WDTPOST_PS8192       1:8,192
**     WDTPOST_PS16384      1:16,384
**     WDTPOST_PS32768      1:32,768
**
**   WDT Prescaler:
**     WDTPRE_PR32          1:32
**     WDTPRE_PR128         1:128
**
**   Watchdog Timer Window:
**     WINDIS_ON            Watchdog Timer in Window mode
**     WINDIS_OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Enable:
**     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
**     FWDTEN_ON            Watchdog timer always enabled
**
*/

#define WDTPOST_PS1          0x00D0
#define WDTPOST_PS2          0x00D1
#define WDTPOST_PS4          0x00D2
#define WDTPOST_PS8          0x00D3
#define WDTPOST_PS16         0x00D4
#define WDTPOST_PS32         0x00D5
#define WDTPOST_PS64         0x00D6
#define WDTPOST_PS128        0x00D7
#define WDTPOST_PS256        0x00D8
#define WDTPOST_PS512        0x00D9
#define WDTPOST_PS1024       0x00DA
#define WDTPOST_PS2048       0x00DB
#define WDTPOST_PS4096       0x00DC
#define WDTPOST_PS8192       0x00DD
#define WDTPOST_PS16384      0x00DE
#define WDTPOST_PS32768      0x00DF

#define WDTPRE_PR32          0x00CF
#define WDTPRE_PR128         0x00DF

#define WINDIS_ON            0x009F
#define WINDIS_OFF           0x00DF

#define FWDTEN_OFF           0x005F
#define FWDTEN_ON            0x00DF

/* Register FPOR (0xf8000c)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FPOR;
#define _FPOR(x) __attribute__((address(0xf8000c),deprecated_definition("consider migrating to #pragma config"),section("__FPOR.sec"),space(prog))) __prog__ uint16_t _FPOR = (x);

/*
** Only one invocation of FPOR should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FPOR.
** Multiple options may be combined, as shown:
**
** _FPOR( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   POR Timer Value:
**     FPWRT_PWR1           Disabled
**     FPWRT_PWR2           2ms
**     FPWRT_PWR4           4ms
**     FPWRT_PWR8           8ms
**     FPWRT_PWR16          16ms
**     FPWRT_PWR32          32ms
**     FPWRT_PWR64          64ms
**     FPWRT_PWR128         128ms
**
**   Enable Alternate SS1 pin bit:
**     ALTSS1_OFF           SS1 is selected as the I/O pin for SPI1
**     ALTSS1_ON            SS1A is selected as the I/O pin for SPI1
**
**   Enable Alternate QEI1 pin bit:
**     ALTQIO_ON            AQEA1, AQEB1, and AINDX1 are selected as inputs to QEI1
**     ALTQIO_OFF           QEA1, QEB1, INDX1 are selected as inputs to QEI1
**
*/

#define FPWRT_PWR1           0x0060
#define FPWRT_PWR2           0x0061
#define FPWRT_PWR4           0x0062
#define FPWRT_PWR8           0x0063
#define FPWRT_PWR16          0x0064
#define FPWRT_PWR32          0x0065
#define FPWRT_PWR64          0x0066
#define FPWRT_PWR128         0x0067

#define ALTSS1_OFF           0x0047
#define ALTSS1_ON            0x0067

#define ALTQIO_ON            0x0027
#define ALTQIO_OFF           0x0067

/* Register FICD (0xf8000e)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FICD;
#define _FICD(x) __attribute__((address(0xf8000e),deprecated_definition("consider migrating to #pragma config"),section("__FICD.sec"),space(prog))) __prog__ uint16_t _FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** _FICD( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Comm Channel Select:
**     ICS_NONE             Reserved, do not use
**     ICS_PGD3             Communicate on PGC3/EMUC3 and PGD3/EMUD3
**     ICS_PGD2             Communicate on PGC2/EMUC2 and PGD2/EMUD2
**     ICS_PGD1             Communicate on PGC1/EMUC1 and PGD1/EMUD1
**
**   JTAG Port Enable:
**     JTAGEN_OFF           JTAG is disabled
**     JTAGEN_ON            JTAG is enabled
**
*/

#define ICS_NONE             0x00E0
#define ICS_PGD3             0x00E1
#define ICS_PGD2             0x00E2
#define ICS_PGD1             0x00E3

#define JTAGEN_OFF           0x00C3
#define JTAGEN_ON            0x00E3

/* Register FCMP (0xf80010)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FCMP;
#define _FCMP(x) __attribute__((address(0xf80010),deprecated_definition("consider migrating to #pragma config"),section("__FCMP.sec"),space(prog))) __prog__ uint16_t _FCMP = (x);

/*
** Only one invocation of FCMP should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FCMP.
** Multiple options may be combined, as shown:
**
** _FCMP( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Even Comparator Hysteresis Select:
**     HYST0_HYST0          No Hysteresis
**     HYST0_HYST15         15 mV Hysteresis
**     HYST0_HYST30         30 mV Hysteresis
**     HYST0_HYST45         45 mV Hysteresis
**
**   Comparator Hysteresis Polarity (for even numbered comparators):
**     CMPPOL0_POL_RISE     Hysteresis is applied to rising edge
**     CMPPOL0_POL_FALL     Hysteresis is applied to falling edge
**
**   Odd Comparator Hysteresis Select:
**     HYST1_HYST0          No Hysteresis
**     HYST1_HYST15         15 mV Hysteresis
**     HYST1_HYST30         30 mV Hysteresis
**     HYST1_HYST45         45 mV Hysteresis
**
**   Comparator Hysteresis Polarity (for odd numbered comparators):
**     CMPPOL1_POL_RISE     Hysteresis is applied to rising edge
**     CMPPOL1_POL_FALL     Hysteresis is applied to falling edge
**
*/

#define HYST0_HYST0          0x003C
#define HYST0_HYST15         0x003D
#define HYST0_HYST30         0x003E
#define HYST0_HYST45         0x003F

#define CMPPOL0_POL_RISE     0x003B
#define CMPPOL0_POL_FALL     0x003F

#define HYST1_HYST0          0x0027
#define HYST1_HYST15         0x002F
#define HYST1_HYST30         0x0037
#define HYST1_HYST45         0x003F

#define CMPPOL1_POL_RISE     0x001F
#define CMPPOL1_POL_FALL     0x003F



/*
 * Memory Segments Sizes
 */

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0xfc

#define ___RESERVED_BASE 0x100
#define ___RESERVED_LENGTH 0x4

#define __AIVT_BASE 0x104
#define __AIVT_LENGTH 0xfc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0x5600

#define __FBS_BASE 0xf80000
#define __FBS_LENGTH 0x2

#define __FGS_BASE 0xf80004
#define __FGS_LENGTH 0x2

#define __FOSCSEL_BASE 0xf80006
#define __FOSCSEL_LENGTH 0x2

#define __FOSC_BASE 0xf80008
#define __FOSC_LENGTH 0x2

#define __FWDT_BASE 0xf8000a
#define __FWDT_LENGTH 0x2

#define __FPOR_BASE 0xf8000c
#define __FPOR_LENGTH 0x2

#define __FICD_BASE 0xf8000e
#define __FICD_LENGTH 0x2

#define __FCMP_BASE 0xf80010
#define __FCMP_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x1000

#define __YDATA_BASE 0x1000
#define __YDATA_LENGTH 0x1000
#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x1000

#define __YDATA_BASE 0x1000
#define __YDATA_LENGTH 0x1000
#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x1000

#define __YDATA_BASE 0x1000
#define __YDATA_LENGTH 0x1000


#endif
