/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33FJ128MC802 processor header
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

#ifndef __dsPIC33FJ128MC802__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __33FJ128MC802_H
#define __33FJ128MC802_H

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
  uint16_t :3;
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
  uint16_t :4;
  uint16_t CN21IE:1;
  uint16_t CN22IE:1;
  uint16_t CN23IE:1;
  uint16_t CN24IE:1;
  uint16_t :2;
  uint16_t CN27IE:1;
  uint16_t :1;
  uint16_t CN29IE:1;
  uint16_t CN30IE:1;
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
  uint16_t :3;
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
  uint16_t :4;
  uint16_t CN21PUE:1;
  uint16_t CN22PUE:1;
  uint16_t CN23PUE:1;
  uint16_t CN24PUE:1;
  uint16_t :2;
  uint16_t CN27PUE:1;
  uint16_t :1;
  uint16_t CN29PUE:1;
  uint16_t CN30PUE:1;
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
  uint16_t DMACERR:1;
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
  uint16_t :11;
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
  uint16_t DMA0IF:1;
  uint16_t IC2IF:1;
  uint16_t OC2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
  uint16_t SPI1EIF:1;
  uint16_t SPI1IF:1;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t AD1IF:1;
  uint16_t DMA1IF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
__extension__ typedef struct tagIFS1BITS {
  union {
    struct {
      uint16_t SI2C1IF:1;
      uint16_t MI2C1IF:1;
      uint16_t CMIF:1;
      uint16_t CNIF:1;
      uint16_t INT1IF:1;
      uint16_t :1;
      uint16_t IC7IF:1;
      uint16_t IC8IF:1;
      uint16_t DMA2IF:1;
      uint16_t OC3IF:1;
      uint16_t OC4IF:1;
      uint16_t T4IF:1;
      uint16_t T5IF:1;
      uint16_t INT2IF:1;
      uint16_t U2RXIF:1;
      uint16_t U2TXIF:1;
    };
    struct {
      uint16_t SI2CIF:1;
    };
  };
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile uint16_t IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  uint16_t SPI2EIF:1;
  uint16_t SPI2IF:1;
  uint16_t C1RXIF:1;
  uint16_t C1IF:1;
  uint16_t DMA3IF:1;
  uint16_t :8;
  uint16_t PMPIF:1;
  uint16_t DMA4IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  uint16_t :9;
  uint16_t PWM1IF:1;
  uint16_t QEI1IF:1;
  uint16_t :2;
  uint16_t DMA5IF:1;
  uint16_t RTCIF:1;
  uint16_t FLTA1IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile uint16_t IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  uint16_t :1;
  uint16_t U1EIF:1;
  uint16_t U2EIF:1;
  uint16_t CRCIF:1;
  uint16_t DMA6IF:1;
  uint16_t DMA7IF:1;
  uint16_t C1TXIF:1;
  uint16_t :2;
  uint16_t PWM2IF:1;
  uint16_t FLTA2IF:1;
  uint16_t QEI2IF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t IC1IE:1;
  uint16_t OC1IE:1;
  uint16_t T1IE:1;
  uint16_t DMA0IE:1;
  uint16_t IC2IE:1;
  uint16_t OC2IE:1;
  uint16_t T2IE:1;
  uint16_t T3IE:1;
  uint16_t SPI1EIE:1;
  uint16_t SPI1IE:1;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t AD1IE:1;
  uint16_t DMA1IE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
__extension__ typedef struct tagIEC1BITS {
  union {
    struct {
      uint16_t SI2C1IE:1;
      uint16_t MI2C1IE:1;
      uint16_t CMIE:1;
      uint16_t CNIE:1;
      uint16_t INT1IE:1;
      uint16_t :1;
      uint16_t IC7IE:1;
      uint16_t IC8IE:1;
      uint16_t DMA2IE:1;
      uint16_t OC3IE:1;
      uint16_t OC4IE:1;
      uint16_t T4IE:1;
      uint16_t T5IE:1;
      uint16_t INT2IE:1;
      uint16_t U2RXIE:1;
      uint16_t U2TXIE:1;
    };
    struct {
      uint16_t SI2CIE:1;
    };
  };
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile uint16_t IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  uint16_t SPI2EIE:1;
  uint16_t SPI2IE:1;
  uint16_t C1RXIE:1;
  uint16_t C1IE:1;
  uint16_t DMA3IE:1;
  uint16_t :8;
  uint16_t PMPIE:1;
  uint16_t DMA4IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  uint16_t :9;
  uint16_t PWM1IE:1;
  uint16_t QEI1IE:1;
  uint16_t :2;
  uint16_t DMA5IE:1;
  uint16_t RTCIE:1;
  uint16_t FLTA1IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile uint16_t IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  uint16_t :1;
  uint16_t U1EIE:1;
  uint16_t U2EIE:1;
  uint16_t CRCIE:1;
  uint16_t DMA6IE:1;
  uint16_t DMA7IE:1;
  uint16_t C1TXIE:1;
  uint16_t :2;
  uint16_t PWM2IE:1;
  uint16_t FLTA2IE:1;
  uint16_t QEI2IE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

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
      uint16_t DMA0IP:3;
      uint16_t :1;
      uint16_t IC2IP:3;
      uint16_t :1;
      uint16_t OC2IP:3;
      uint16_t :1;
      uint16_t T2IP:3;
    };
    struct {
      uint16_t DMA0IP0:1;
      uint16_t DMA0IP1:1;
      uint16_t DMA0IP2:1;
      uint16_t :1;
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
      uint16_t AD1IP:3;
      uint16_t :1;
      uint16_t DMA1IP:3;
    };
    struct {
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t AD1IP0:1;
      uint16_t AD1IP1:1;
      uint16_t AD1IP2:1;
      uint16_t :1;
      uint16_t DMA1IP0:1;
      uint16_t DMA1IP1:1;
      uint16_t DMA1IP2:1;
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
      uint16_t CMIP:3;
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
      uint16_t CMIP0:1;
      uint16_t CMIP1:1;
      uint16_t CMIP2:1;
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
      uint16_t :5;
      uint16_t IC7IP:3;
      uint16_t :1;
      uint16_t IC8IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
      uint16_t :5;
      uint16_t IC7IP0:1;
      uint16_t IC7IP1:1;
      uint16_t IC7IP2:1;
      uint16_t :1;
      uint16_t IC8IP0:1;
      uint16_t IC8IP1:1;
      uint16_t IC8IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile uint16_t IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      uint16_t DMA2IP:3;
      uint16_t :1;
      uint16_t OC3IP:3;
      uint16_t :1;
      uint16_t OC4IP:3;
      uint16_t :1;
      uint16_t T4IP:3;
    };
    struct {
      uint16_t DMA2IP0:1;
      uint16_t DMA2IP1:1;
      uint16_t DMA2IP2:1;
      uint16_t :1;
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
      uint16_t :1;
      uint16_t C1RXIP:3;
      uint16_t :1;
      uint16_t C1IP:3;
    };
    struct {
      uint16_t SPI2EIP0:1;
      uint16_t SPI2EIP1:1;
      uint16_t SPI2EIP2:1;
      uint16_t :1;
      uint16_t SPI2IP0:1;
      uint16_t SPI2IP1:1;
      uint16_t SPI2IP2:1;
      uint16_t :1;
      uint16_t C1RXIP0:1;
      uint16_t C1RXIP1:1;
      uint16_t C1RXIP2:1;
      uint16_t :1;
      uint16_t C1IP0:1;
      uint16_t C1IP1:1;
      uint16_t C1IP2:1;
    };
  };
} IPC8BITS;
extern volatile IPC8BITS IPC8bits __attribute__((__sfr__));

#define IPC9 IPC9
extern volatile uint16_t IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      uint16_t DMA3IP:3;
    };
    struct {
      uint16_t DMA3IP0:1;
      uint16_t DMA3IP1:1;
      uint16_t DMA3IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC11 IPC11
extern volatile uint16_t IPC11 __attribute__((__sfr__));
__extension__ typedef struct tagIPC11BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PMPIP:3;
      uint16_t :1;
      uint16_t DMA4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PMPIP0:1;
      uint16_t PMPIP1:1;
      uint16_t PMPIP2:1;
      uint16_t :1;
      uint16_t DMA4IP0:1;
      uint16_t DMA4IP1:1;
      uint16_t DMA4IP2:1;
    };
  };
} IPC11BITS;
extern volatile IPC11BITS IPC11bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile uint16_t IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PWM1IP:3;
      uint16_t :1;
      uint16_t QEI1IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PWM1IP0:1;
      uint16_t PWM1IP1:1;
      uint16_t PWM1IP2:1;
      uint16_t :1;
      uint16_t QEI1IP0:1;
      uint16_t QEI1IP1:1;
      uint16_t QEI1IP2:1;
    };
  };
} IPC14BITS;
extern volatile IPC14BITS IPC14bits __attribute__((__sfr__));

#define IPC15 IPC15
extern volatile uint16_t IPC15 __attribute__((__sfr__));
__extension__ typedef struct tagIPC15BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t DMA5IP:3;
      uint16_t :1;
      uint16_t RTCIP:3;
      uint16_t :1;
      uint16_t FLTA1IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t DMA5IP0:1;
      uint16_t DMA5IP1:1;
      uint16_t DMA5IP2:1;
      uint16_t :1;
      uint16_t RTCIP0:1;
      uint16_t RTCIP1:1;
      uint16_t RTCIP2:1;
      uint16_t :1;
      uint16_t FLTA1IP0:1;
      uint16_t FLTA1IP1:1;
      uint16_t FLTA1IP2:1;
    };
  };
} IPC15BITS;
extern volatile IPC15BITS IPC15bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile uint16_t IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t U1EIP:3;
      uint16_t :1;
      uint16_t U2EIP:3;
      uint16_t :1;
      uint16_t CRCIP:3;
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
      uint16_t :1;
      uint16_t CRCIP0:1;
      uint16_t CRCIP1:1;
      uint16_t CRCIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC17 IPC17
extern volatile uint16_t IPC17 __attribute__((__sfr__));
__extension__ typedef struct tagIPC17BITS {
  union {
    struct {
      uint16_t DMA6IP:3;
      uint16_t :1;
      uint16_t DMA7IP:3;
      uint16_t :1;
      uint16_t C1TXIP:3;
    };
    struct {
      uint16_t DMA6IP0:1;
      uint16_t DMA6IP1:1;
      uint16_t DMA6IP2:1;
      uint16_t :1;
      uint16_t DMA7IP0:1;
      uint16_t DMA7IP1:1;
      uint16_t DMA7IP2:1;
      uint16_t :1;
      uint16_t C1TXIP0:1;
      uint16_t C1TXIP1:1;
      uint16_t C1TXIP2:1;
    };
  };
} IPC17BITS;
extern volatile IPC17BITS IPC17bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile uint16_t IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PWM2IP:3;
      uint16_t :1;
      uint16_t FLTA2IP:3;
      uint16_t :1;
      uint16_t QEI2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PWM2IP0:1;
      uint16_t PWM2IP1:1;
      uint16_t PWM2IP2:1;
      uint16_t :1;
      uint16_t FLTA2IP0:1;
      uint16_t FLTA2IP1:1;
      uint16_t FLTA2IP2:1;
      uint16_t :1;
      uint16_t QEI2IP0:1;
      uint16_t QEI2IP1:1;
      uint16_t QEI2IP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

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


#define IC7 ACC7
extern volatile IC IC7 __attribute__((__sfr__));

#define IC7BUF IC7BUF
extern volatile uint16_t IC7BUF __attribute__((__sfr__));
#define IC7CON IC7CON
extern volatile uint16_t IC7CON __attribute__((__sfr__));
__extension__ typedef struct tagIC7CONBITS {
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
} IC7CONBITS;
extern volatile IC7CONBITS IC7CONbits __attribute__((__sfr__));


#define IC8 ACC8
extern volatile IC IC8 __attribute__((__sfr__));

#define IC8BUF IC8BUF
extern volatile uint16_t IC8BUF __attribute__((__sfr__));
#define IC8CON IC8CON
extern volatile uint16_t IC8CON __attribute__((__sfr__));
__extension__ typedef struct tagIC8CONBITS {
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
} IC8CONBITS;
extern volatile IC8CONBITS IC8CONbits __attribute__((__sfr__));


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

#define P1TCON P1TCON
extern volatile uint16_t P1TCON __attribute__((__sfr__));
__extension__ typedef struct tagP1TCONBITS {
  union {
    struct {
      uint16_t PTMOD:2;
      uint16_t PTCKPS:2;
      uint16_t PTOPS:4;
      uint16_t :5;
      uint16_t PTSIDL:1;
      uint16_t :1;
      uint16_t PTEN:1;
    };
    struct {
      uint16_t PTMOD0:1;
      uint16_t PTMOD1:1;
      uint16_t PTCKPS0:1;
      uint16_t PTCKPS1:1;
      uint16_t PTOPS0:1;
      uint16_t PTOPS1:1;
      uint16_t PTOPS2:1;
      uint16_t PTOPS3:1;
    };
  };
} P1TCONBITS;
extern volatile P1TCONBITS P1TCONbits __attribute__((__sfr__));

#define PTCON PTCON
extern volatile uint16_t PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      uint16_t PTMOD:2;
      uint16_t PTCKPS:2;
      uint16_t PTOPS:4;
      uint16_t :5;
      uint16_t PTSIDL:1;
      uint16_t :1;
      uint16_t PTEN:1;
    };
    struct {
      uint16_t PTMOD0:1;
      uint16_t PTMOD1:1;
      uint16_t PTCKPS0:1;
      uint16_t PTCKPS1:1;
      uint16_t PTOPS0:1;
      uint16_t PTOPS1:1;
      uint16_t PTOPS2:1;
      uint16_t PTOPS3:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define P1TMR P1TMR
extern volatile uint16_t P1TMR __attribute__((__sfr__));
typedef struct tagP1TMRBITS {
  uint16_t PTMR:15;
  uint16_t PTDIR:1;
} P1TMRBITS;
extern volatile P1TMRBITS P1TMRbits __attribute__((__sfr__));

#define PTMR PTMR
extern volatile uint16_t PTMR __attribute__((__sfr__));
typedef struct tagPTMRBITS {
  uint16_t PTMR:15;
  uint16_t PTDIR:1;
} PTMRBITS;
extern volatile PTMRBITS PTMRbits __attribute__((__sfr__));

#define P1TPER P1TPER
extern volatile uint16_t P1TPER __attribute__((__sfr__));
typedef struct tagP1TPERBITS {
  uint16_t PTPER:15;
} P1TPERBITS;
extern volatile P1TPERBITS P1TPERbits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile uint16_t PTPER __attribute__((__sfr__));
typedef struct tagPTPERBITS {
  uint16_t PTPER:15;
} PTPERBITS;
extern volatile PTPERBITS PTPERbits __attribute__((__sfr__));

#define P1SECMP P1SECMP
extern volatile uint16_t P1SECMP __attribute__((__sfr__));
typedef struct tagP1SECMPBITS {
  uint16_t SEVTCMP:15;
  uint16_t SEVTDIR:1;
} P1SECMPBITS;
extern volatile P1SECMPBITS P1SECMPbits __attribute__((__sfr__));

#define SEVTCMP SEVTCMP
extern volatile uint16_t SEVTCMP __attribute__((__sfr__));
typedef struct tagSEVTCMPBITS {
  uint16_t SEVTCMP:15;
  uint16_t SEVTDIR:1;
} SEVTCMPBITS;
extern volatile SEVTCMPBITS SEVTCMPbits __attribute__((__sfr__));

#define PWM1CON1 PWM1CON1
extern volatile uint16_t PWM1CON1 __attribute__((__sfr__));
typedef struct tagPWM1CON1BITS {
  uint16_t PEN1L:1;
  uint16_t PEN2L:1;
  uint16_t PEN3L:1;
  uint16_t :1;
  uint16_t PEN1H:1;
  uint16_t PEN2H:1;
  uint16_t PEN3H:1;
  uint16_t :1;
  uint16_t PMOD1:1;
  uint16_t PMOD2:1;
  uint16_t PMOD3:1;
} PWM1CON1BITS;
extern volatile PWM1CON1BITS PWM1CON1bits __attribute__((__sfr__));

#define PWMCON1 PWMCON1
extern volatile uint16_t PWMCON1 __attribute__((__sfr__));
typedef struct tagPWMCON1BITS {
  uint16_t PEN1L:1;
  uint16_t PEN2L:1;
  uint16_t PEN3L:1;
  uint16_t :1;
  uint16_t PEN1H:1;
  uint16_t PEN2H:1;
  uint16_t PEN3H:1;
  uint16_t :1;
  uint16_t PMOD1:1;
  uint16_t PMOD2:1;
  uint16_t PMOD3:1;
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define PWM1CON2 PWM1CON2
extern volatile uint16_t PWM1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWM1CON2BITS {
  union {
    struct {
      uint16_t UDIS:1;
      uint16_t OSYNC:1;
      uint16_t IUE:1;
      uint16_t :5;
      uint16_t SEVOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t SEVOPS0:1;
      uint16_t SEVOPS1:1;
      uint16_t SEVOPS2:1;
      uint16_t SEVOPS3:1;
    };
  };
} PWM1CON2BITS;
extern volatile PWM1CON2BITS PWM1CON2bits __attribute__((__sfr__));

#define PWMCON2 PWMCON2
extern volatile uint16_t PWMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON2BITS {
  union {
    struct {
      uint16_t UDIS:1;
      uint16_t OSYNC:1;
      uint16_t IUE:1;
      uint16_t :5;
      uint16_t SEVOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t SEVOPS0:1;
      uint16_t SEVOPS1:1;
      uint16_t SEVOPS2:1;
      uint16_t SEVOPS3:1;
    };
  };
} PWMCON2BITS;
extern volatile PWMCON2BITS PWMCON2bits __attribute__((__sfr__));

#define DTCON1 DTCON1
extern volatile uint16_t DTCON1 __attribute__((__sfr__));
__extension__ typedef struct tagDTCON1BITS {
  union {
    struct {
      uint16_t DTA:6;
      uint16_t DTAPS:2;
      uint16_t DTB:6;
      uint16_t DTBPS:2;
    };
    struct {
      uint16_t DTA0:1;
      uint16_t DTA1:1;
      uint16_t DTA2:1;
      uint16_t DTA3:1;
      uint16_t DTA4:1;
      uint16_t DTA5:1;
      uint16_t DTAPS0:1;
      uint16_t DTAPS1:1;
      uint16_t DTB0:1;
      uint16_t DTB1:1;
      uint16_t DTB2:1;
      uint16_t DTB3:1;
      uint16_t DTB4:1;
      uint16_t DTB5:1;
      uint16_t DTBPS0:1;
      uint16_t DTBPS1:1;
    };
  };
} DTCON1BITS;
extern volatile DTCON1BITS DTCON1bits __attribute__((__sfr__));

#define P1DTCON1 P1DTCON1
extern volatile uint16_t P1DTCON1 __attribute__((__sfr__));
__extension__ typedef struct tagP1DTCON1BITS {
  union {
    struct {
      uint16_t DTA:6;
      uint16_t DTAPS:2;
      uint16_t DTB:6;
      uint16_t DTBPS:2;
    };
    struct {
      uint16_t DTA0:1;
      uint16_t DTA1:1;
      uint16_t DTA2:1;
      uint16_t DTA3:1;
      uint16_t DTA4:1;
      uint16_t DTA5:1;
      uint16_t DTAPS0:1;
      uint16_t DTAPS1:1;
      uint16_t DTB0:1;
      uint16_t DTB1:1;
      uint16_t DTB2:1;
      uint16_t DTB3:1;
      uint16_t DTB4:1;
      uint16_t DTB5:1;
      uint16_t DTBPS0:1;
      uint16_t DTBPS1:1;
    };
  };
} P1DTCON1BITS;
extern volatile P1DTCON1BITS P1DTCON1bits __attribute__((__sfr__));

#define DTCON2 DTCON2
extern volatile uint16_t DTCON2 __attribute__((__sfr__));
typedef struct tagDTCON2BITS {
  uint16_t DTS1I:1;
  uint16_t DTS1A:1;
  uint16_t DTS2I:1;
  uint16_t DTS2A:1;
  uint16_t DTS3I:1;
  uint16_t DTS3A:1;
} DTCON2BITS;
extern volatile DTCON2BITS DTCON2bits __attribute__((__sfr__));

#define P1DTCON2 P1DTCON2
extern volatile uint16_t P1DTCON2 __attribute__((__sfr__));
typedef struct tagP1DTCON2BITS {
  uint16_t DTS1I:1;
  uint16_t DTS1A:1;
  uint16_t DTS2I:1;
  uint16_t DTS2A:1;
  uint16_t DTS3I:1;
  uint16_t DTS3A:1;
} P1DTCON2BITS;
extern volatile P1DTCON2BITS P1DTCON2bits __attribute__((__sfr__));

#define FLTACON FLTACON
extern volatile uint16_t FLTACON __attribute__((__sfr__));
typedef struct tagFLTACONBITS {
  uint16_t FAEN1:1;
  uint16_t FAEN2:1;
  uint16_t FAEN3:1;
  uint16_t :4;
  uint16_t FLTAM:1;
  uint16_t FAOV1L:1;
  uint16_t FAOV1H:1;
  uint16_t FAOV2L:1;
  uint16_t FAOV2H:1;
  uint16_t FAOV3L:1;
  uint16_t FAOV3H:1;
} FLTACONBITS;
extern volatile FLTACONBITS FLTACONbits __attribute__((__sfr__));

#define P1FLTACON P1FLTACON
extern volatile uint16_t P1FLTACON __attribute__((__sfr__));
typedef struct tagP1FLTACONBITS {
  uint16_t FAEN1:1;
  uint16_t FAEN2:1;
  uint16_t FAEN3:1;
  uint16_t :4;
  uint16_t FLTAM:1;
  uint16_t FAOV1L:1;
  uint16_t FAOV1H:1;
  uint16_t FAOV2L:1;
  uint16_t FAOV2H:1;
  uint16_t FAOV3L:1;
  uint16_t FAOV3H:1;
} P1FLTACONBITS;
extern volatile P1FLTACONBITS P1FLTACONbits __attribute__((__sfr__));

#define OVDCON OVDCON
extern volatile uint16_t OVDCON __attribute__((__sfr__));
typedef struct tagOVDCONBITS {
  uint16_t POUT1L:1;
  uint16_t POUT1H:1;
  uint16_t POUT2L:1;
  uint16_t POUT2H:1;
  uint16_t POUT3L:1;
  uint16_t POUT3H:1;
  uint16_t :2;
  uint16_t POVD1L:1;
  uint16_t POVD1H:1;
  uint16_t POVD2L:1;
  uint16_t POVD2H:1;
  uint16_t POVD3L:1;
  uint16_t POVD3H:1;
} OVDCONBITS;
extern volatile OVDCONBITS OVDCONbits __attribute__((__sfr__));

#define P1OVDCON P1OVDCON
extern volatile uint16_t P1OVDCON __attribute__((__sfr__));
typedef struct tagP1OVDCONBITS {
  uint16_t POUT1L:1;
  uint16_t POUT1H:1;
  uint16_t POUT2L:1;
  uint16_t POUT2H:1;
  uint16_t POUT3L:1;
  uint16_t POUT3H:1;
  uint16_t :2;
  uint16_t POVD1L:1;
  uint16_t POVD1H:1;
  uint16_t POVD2L:1;
  uint16_t POVD2H:1;
  uint16_t POVD3L:1;
  uint16_t POVD3H:1;
} P1OVDCONBITS;
extern volatile P1OVDCONBITS P1OVDCONbits __attribute__((__sfr__));

#define P1DC1 P1DC1
extern volatile uint16_t P1DC1 __attribute__((__sfr__));
#define PDC1 PDC1
extern volatile uint16_t PDC1 __attribute__((__sfr__));
#define P1DC2 P1DC2
extern volatile uint16_t P1DC2 __attribute__((__sfr__));
#define PDC2 PDC2
extern volatile uint16_t PDC2 __attribute__((__sfr__));
#define P1DC3 P1DC3
extern volatile uint16_t P1DC3 __attribute__((__sfr__));
#define PDC3 PDC3
extern volatile uint16_t PDC3 __attribute__((__sfr__));
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

#define QEICON QEICON
extern volatile uint16_t QEICON __attribute__((__sfr__));
__extension__ typedef struct tagQEICONBITS {
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
} QEICONBITS;
extern volatile QEICONBITS QEICONbits __attribute__((__sfr__));

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

#define DFLTCON DFLTCON
extern volatile uint16_t DFLTCON __attribute__((__sfr__));
__extension__ typedef struct tagDFLTCONBITS {
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
} DFLTCONBITS;
extern volatile DFLTCONBITS DFLTCONbits __attribute__((__sfr__));

#define POS1CNT POS1CNT
extern volatile uint16_t POS1CNT __attribute__((__sfr__));
#define POSCNT POSCNT
extern volatile uint16_t POSCNT __attribute__((__sfr__));
#define MAX1CNT MAX1CNT
extern volatile uint16_t MAX1CNT __attribute__((__sfr__));
#define MAXCNT MAXCNT
extern volatile uint16_t MAXCNT __attribute__((__sfr__));
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
typedef struct tagU1TXREGBITS {
  uint16_t UTXREG0:1;
  uint16_t UTXREG1:1;
  uint16_t UTXREG2:1;
  uint16_t UTXREG3:1;
  uint16_t UTXREG4:1;
  uint16_t UTXREG5:1;
  uint16_t UTXREG6:1;
  uint16_t UTXREG7:1;
  uint16_t UTXREG8:1;
} U1TXREGBITS;
extern volatile U1TXREGBITS U1TXREGbits __attribute__((__sfr__));

#define U1RXREG U1RXREG
extern volatile uint16_t U1RXREG __attribute__((__sfr__));
typedef struct tagU1RXREGBITS {
  uint16_t URXREG0:1;
  uint16_t URXREG1:1;
  uint16_t URXREG2:1;
  uint16_t URXREG3:1;
  uint16_t URXREG4:1;
  uint16_t URXREG5:1;
  uint16_t URXREG6:1;
  uint16_t URXREG7:1;
  uint16_t URXREG8:1;
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
typedef struct tagU2TXREGBITS {
  uint16_t UTXREG0:1;
  uint16_t UTXREG1:1;
  uint16_t UTXREG2:1;
  uint16_t UTXREG3:1;
  uint16_t UTXREG4:1;
  uint16_t UTXREG5:1;
  uint16_t UTXREG6:1;
  uint16_t UTXREG7:1;
  uint16_t UTXREG8:1;
} U2TXREGBITS;
extern volatile U2TXREGBITS U2TXREGbits __attribute__((__sfr__));

#define U2RXREG U2RXREG
extern volatile uint16_t U2RXREG __attribute__((__sfr__));
typedef struct tagU2RXREGBITS {
  uint16_t URXREG0:1;
  uint16_t URXREG1:1;
  uint16_t URXREG2:1;
  uint16_t URXREG3:1;
  uint16_t URXREG4:1;
  uint16_t URXREG5:1;
  uint16_t URXREG6:1;
  uint16_t URXREG7:1;
  uint16_t URXREG8:1;
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
  uint16_t TRISA0:1;
  uint16_t TRISA1:1;
  uint16_t TRISA2:1;
  uint16_t TRISA3:1;
  uint16_t TRISA4:1;
} TRISABITS;
extern volatile TRISABITS TRISAbits __attribute__((__sfr__));

#define PORTA PORTA
extern volatile uint16_t PORTA __attribute__((__sfr__));
typedef struct tagPORTABITS {
  uint16_t RA0:1;
  uint16_t RA1:1;
  uint16_t RA2:1;
  uint16_t RA3:1;
  uint16_t RA4:1;
} PORTABITS;
extern volatile PORTABITS PORTAbits __attribute__((__sfr__));

#define LATA LATA
extern volatile uint16_t LATA __attribute__((__sfr__));
typedef struct tagLATABITS {
  uint16_t LATA0:1;
  uint16_t LATA1:1;
  uint16_t LATA2:1;
  uint16_t LATA3:1;
  uint16_t LATA4:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

#define ODCA ODCA
extern volatile uint16_t ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  uint16_t ODCA0:1;
  uint16_t ODCA1:1;
  uint16_t ODCA2:1;
  uint16_t ODCA3:1;
  uint16_t ODCA4:1;
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

#define ODCB ODCB
extern volatile uint16_t ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  uint16_t ODCB0:1;
  uint16_t ODCB1:1;
  uint16_t ODCB2:1;
  uint16_t ODCB3:1;
  uint16_t ODCB4:1;
  uint16_t ODCB5:1;
  uint16_t ODCB6:1;
  uint16_t ODCB7:1;
  uint16_t ODCB8:1;
  uint16_t ODCB9:1;
  uint16_t ODCB10:1;
  uint16_t ODCB11:1;
  uint16_t ODCB12:1;
  uint16_t ODCB13:1;
  uint16_t ODCB14:1;
  uint16_t ODCB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile uint16_t PADCFG1 __attribute__((__sfr__));
typedef struct tagPADCFG1BITS {
  uint16_t PMPTTL:1;
  uint16_t RTSECSEL:1;
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

#define ADC1BUF0 ADC1BUF0
extern volatile uint16_t ADC1BUF0 __attribute__((__sfr__));
#define ADCBUF0 ADCBUF0
extern volatile uint16_t ADCBUF0 __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile uint16_t AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      uint16_t DONE:1;
      uint16_t SAMP:1;
      uint16_t ASAM:1;
      uint16_t SIMSAM:1;
      uint16_t :1;
      uint16_t SSRC:3;
      uint16_t FORM:2;
      uint16_t AD12B:1;
      uint16_t :1;
      uint16_t ADDMABM:1;
      uint16_t ADSIDL:1;
      uint16_t :1;
      uint16_t ADON:1;
    };
    struct {
      uint16_t :5;
      uint16_t SSRC0:1;
      uint16_t SSRC1:1;
      uint16_t SSRC2:1;
      uint16_t FORM0:1;
      uint16_t FORM1:1;
    };
  };
} AD1CON1BITS;
extern volatile AD1CON1BITS AD1CON1bits __attribute__((__sfr__));

#define AD1CON2 AD1CON2
extern volatile uint16_t AD1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON2BITS {
  union {
    struct {
      uint16_t ALTS:1;
      uint16_t BUFM:1;
      uint16_t SMPI:4;
      uint16_t :1;
      uint16_t BUFS:1;
      uint16_t CHPS:2;
      uint16_t CSCNA:1;
      uint16_t :2;
      uint16_t VCFG:3;
    };
    struct {
      uint16_t :2;
      uint16_t SMPI0:1;
      uint16_t SMPI1:1;
      uint16_t SMPI2:1;
      uint16_t SMPI3:1;
      uint16_t :2;
      uint16_t CHPS0:1;
      uint16_t CHPS1:1;
      uint16_t :3;
      uint16_t VCFG0:1;
      uint16_t VCFG1:1;
      uint16_t VCFG2:1;
    };
  };
} AD1CON2BITS;
extern volatile AD1CON2BITS AD1CON2bits __attribute__((__sfr__));

#define AD1CON3 AD1CON3
extern volatile uint16_t AD1CON3 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON3BITS {
  union {
    struct {
      uint16_t ADCS:8;
      uint16_t SAMC:5;
      uint16_t :2;
      uint16_t ADRC:1;
    };
    struct {
      uint16_t ADCS0:1;
      uint16_t ADCS1:1;
      uint16_t ADCS2:1;
      uint16_t ADCS3:1;
      uint16_t ADCS4:1;
      uint16_t ADCS5:1;
      uint16_t ADCS6:1;
      uint16_t ADCS7:1;
      uint16_t SAMC0:1;
      uint16_t SAMC1:1;
      uint16_t SAMC2:1;
      uint16_t SAMC3:1;
      uint16_t SAMC4:1;
    };
  };
} AD1CON3BITS;
extern volatile AD1CON3BITS AD1CON3bits __attribute__((__sfr__));

#define AD1CHS123 AD1CHS123
extern volatile uint16_t AD1CHS123 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS123BITS {
  union {
    struct {
      uint16_t CH123SA:1;
      uint16_t CH123NA:2;
      uint16_t :5;
      uint16_t CH123SB:1;
      uint16_t CH123NB:2;
    };
    struct {
      uint16_t :1;
      uint16_t CH123NA0:1;
      uint16_t CH123NA1:1;
      uint16_t :6;
      uint16_t CH123NB0:1;
      uint16_t CH123NB1:1;
    };
  };
} AD1CHS123BITS;
extern volatile AD1CHS123BITS AD1CHS123bits __attribute__((__sfr__));

#define AD1CHS0 AD1CHS0
extern volatile uint16_t AD1CHS0 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS0BITS {
  union {
    struct {
      uint16_t CH0SA:5;
      uint16_t :2;
      uint16_t CH0NA:1;
      uint16_t CH0SB:5;
      uint16_t :2;
      uint16_t CH0NB:1;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t :3;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
    };
  };
} AD1CHS0BITS;
extern volatile AD1CHS0BITS AD1CHS0bits __attribute__((__sfr__));

#define AD1PCFGL AD1PCFGL
extern volatile uint16_t AD1PCFGL __attribute__((__sfr__));
typedef struct tagAD1PCFGLBITS {
  uint16_t PCFG0:1;
  uint16_t PCFG1:1;
  uint16_t PCFG2:1;
  uint16_t PCFG3:1;
  uint16_t PCFG4:1;
  uint16_t PCFG5:1;
} AD1PCFGLBITS;
extern volatile AD1PCFGLBITS AD1PCFGLbits __attribute__((__sfr__));

#define ADPCFG ADPCFG
extern volatile uint16_t ADPCFG __attribute__((__sfr__));
typedef struct tagADPCFGBITS {
  uint16_t PCFG0:1;
  uint16_t PCFG1:1;
  uint16_t PCFG2:1;
  uint16_t PCFG3:1;
  uint16_t PCFG4:1;
  uint16_t PCFG5:1;
} ADPCFGBITS;
extern volatile ADPCFGBITS ADPCFGbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile uint16_t AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  uint16_t CSS0:1;
  uint16_t CSS1:1;
  uint16_t CSS2:1;
  uint16_t CSS3:1;
  uint16_t CSS4:1;
  uint16_t CSS5:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define AD1CON4 AD1CON4
extern volatile uint16_t AD1CON4 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON4BITS {
  union {
    struct {
      uint16_t DMABL:3;
    };
    struct {
      uint16_t DMABL0:1;
      uint16_t DMABL1:1;
      uint16_t DMABL2:1;
    };
  };
} AD1CON4BITS;
extern volatile AD1CON4BITS AD1CON4bits __attribute__((__sfr__));

#define DMA0CON DMA0CON
extern volatile uint16_t DMA0CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA0CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA0CONBITS;
extern volatile DMA0CONBITS DMA0CONbits __attribute__((__sfr__));

#define DMA0REQ DMA0REQ
extern volatile uint16_t DMA0REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA0REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA0REQBITS;
extern volatile DMA0REQBITS DMA0REQbits __attribute__((__sfr__));

#define DMA0STA DMA0STA
extern volatile uint16_t DMA0STA __attribute__((__sfr__));
#define DMA0STB DMA0STB
extern volatile uint16_t DMA0STB __attribute__((__sfr__));
#define DMA0PAD DMA0PAD
extern volatile uint16_t DMA0PAD __attribute__((__sfr__));
#define DMA0CNT DMA0CNT
extern volatile uint16_t DMA0CNT __attribute__((__sfr__));
#define DMA1CON DMA1CON
extern volatile uint16_t DMA1CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA1CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA1CONBITS;
extern volatile DMA1CONBITS DMA1CONbits __attribute__((__sfr__));

#define DMA1REQ DMA1REQ
extern volatile uint16_t DMA1REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA1REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA1REQBITS;
extern volatile DMA1REQBITS DMA1REQbits __attribute__((__sfr__));

#define DMA1STA DMA1STA
extern volatile uint16_t DMA1STA __attribute__((__sfr__));
#define DMA1STB DMA1STB
extern volatile uint16_t DMA1STB __attribute__((__sfr__));
#define DMA1PAD DMA1PAD
extern volatile uint16_t DMA1PAD __attribute__((__sfr__));
#define DMA1CNT DMA1CNT
extern volatile uint16_t DMA1CNT __attribute__((__sfr__));
#define DMA2CON DMA2CON
extern volatile uint16_t DMA2CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA2CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA2CONBITS;
extern volatile DMA2CONBITS DMA2CONbits __attribute__((__sfr__));

#define DMA2REQ DMA2REQ
extern volatile uint16_t DMA2REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA2REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA2REQBITS;
extern volatile DMA2REQBITS DMA2REQbits __attribute__((__sfr__));

#define DMA2STA DMA2STA
extern volatile uint16_t DMA2STA __attribute__((__sfr__));
#define DMA2STB DMA2STB
extern volatile uint16_t DMA2STB __attribute__((__sfr__));
#define DMA2PAD DMA2PAD
extern volatile uint16_t DMA2PAD __attribute__((__sfr__));
#define DMA2CNT DMA2CNT
extern volatile uint16_t DMA2CNT __attribute__((__sfr__));
#define DMA3CON DMA3CON
extern volatile uint16_t DMA3CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA3CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA3CONBITS;
extern volatile DMA3CONBITS DMA3CONbits __attribute__((__sfr__));

#define DMA3REQ DMA3REQ
extern volatile uint16_t DMA3REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA3REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA3REQBITS;
extern volatile DMA3REQBITS DMA3REQbits __attribute__((__sfr__));

#define DMA3STA DMA3STA
extern volatile uint16_t DMA3STA __attribute__((__sfr__));
#define DMA3STB DMA3STB
extern volatile uint16_t DMA3STB __attribute__((__sfr__));
#define DMA3PAD DMA3PAD
extern volatile uint16_t DMA3PAD __attribute__((__sfr__));
#define DMA3CNT DMA3CNT
extern volatile uint16_t DMA3CNT __attribute__((__sfr__));
#define DMA4CON DMA4CON
extern volatile uint16_t DMA4CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA4CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA4CONBITS;
extern volatile DMA4CONBITS DMA4CONbits __attribute__((__sfr__));

#define DMA4REQ DMA4REQ
extern volatile uint16_t DMA4REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA4REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA4REQBITS;
extern volatile DMA4REQBITS DMA4REQbits __attribute__((__sfr__));

#define DMA4STA DMA4STA
extern volatile uint16_t DMA4STA __attribute__((__sfr__));
#define DMA4STB DMA4STB
extern volatile uint16_t DMA4STB __attribute__((__sfr__));
#define DMA4PAD DMA4PAD
extern volatile uint16_t DMA4PAD __attribute__((__sfr__));
#define DMA4CNT DMA4CNT
extern volatile uint16_t DMA4CNT __attribute__((__sfr__));
#define DMA5CON DMA5CON
extern volatile uint16_t DMA5CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA5CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA5CONBITS;
extern volatile DMA5CONBITS DMA5CONbits __attribute__((__sfr__));

#define DMA5REQ DMA5REQ
extern volatile uint16_t DMA5REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA5REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA5REQBITS;
extern volatile DMA5REQBITS DMA5REQbits __attribute__((__sfr__));

#define DMA5STA DMA5STA
extern volatile uint16_t DMA5STA __attribute__((__sfr__));
#define DMA5STB DMA5STB
extern volatile uint16_t DMA5STB __attribute__((__sfr__));
#define DMA5PAD DMA5PAD
extern volatile uint16_t DMA5PAD __attribute__((__sfr__));
#define DMA5CNT DMA5CNT
extern volatile uint16_t DMA5CNT __attribute__((__sfr__));
#define DMA6CON DMA6CON
extern volatile uint16_t DMA6CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA6CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA6CONBITS;
extern volatile DMA6CONBITS DMA6CONbits __attribute__((__sfr__));

#define DMA6REQ DMA6REQ
extern volatile uint16_t DMA6REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA6REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA6REQBITS;
extern volatile DMA6REQBITS DMA6REQbits __attribute__((__sfr__));

#define DMA6STA DMA6STA
extern volatile uint16_t DMA6STA __attribute__((__sfr__));
#define DMA6STB DMA6STB
extern volatile uint16_t DMA6STB __attribute__((__sfr__));
#define DMA6PAD DMA6PAD
extern volatile uint16_t DMA6PAD __attribute__((__sfr__));
#define DMA6CNT DMA6CNT
extern volatile uint16_t DMA6CNT __attribute__((__sfr__));
#define DMA7CON DMA7CON
extern volatile uint16_t DMA7CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA7CONBITS {
  union {
    struct {
      uint16_t MODE:2;
      uint16_t :2;
      uint16_t AMODE:2;
      uint16_t :5;
      uint16_t NULLW:1;
      uint16_t HALF:1;
      uint16_t DIR:1;
      uint16_t SIZE:1;
      uint16_t CHEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :2;
      uint16_t AMODE0:1;
      uint16_t AMODE1:1;
    };
  };
} DMA7CONBITS;
extern volatile DMA7CONBITS DMA7CONbits __attribute__((__sfr__));

#define DMA7REQ DMA7REQ
extern volatile uint16_t DMA7REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA7REQBITS {
  union {
    struct {
      uint16_t IRQSEL:7;
      uint16_t :8;
      uint16_t FORCE:1;
    };
    struct {
      uint16_t IRQSEL0:1;
      uint16_t IRQSEL1:1;
      uint16_t IRQSEL2:1;
      uint16_t IRQSEL3:1;
      uint16_t IRQSEL4:1;
      uint16_t IRQSEL5:1;
      uint16_t IRQSEL6:1;
    };
  };
} DMA7REQBITS;
extern volatile DMA7REQBITS DMA7REQbits __attribute__((__sfr__));

#define DMA7STA DMA7STA
extern volatile uint16_t DMA7STA __attribute__((__sfr__));
#define DMA7STB DMA7STB
extern volatile uint16_t DMA7STB __attribute__((__sfr__));
#define DMA7PAD DMA7PAD
extern volatile uint16_t DMA7PAD __attribute__((__sfr__));
#define DMA7CNT DMA7CNT
extern volatile uint16_t DMA7CNT __attribute__((__sfr__));
#define DMACS0 DMACS0
extern volatile uint16_t DMACS0 __attribute__((__sfr__));
__extension__ typedef struct tagDMACS0BITS {
  union {
    struct {
      uint16_t XWCOL:8;
      uint16_t PWCOL:8;
    };
    struct {
      uint16_t XWCOL0:1;
      uint16_t XWCOL1:1;
      uint16_t XWCOL2:1;
      uint16_t XWCOL3:1;
      uint16_t XWCOL4:1;
      uint16_t XWCOL5:1;
      uint16_t XWCOL6:1;
      uint16_t XWCOL7:1;
      uint16_t PWCOL0:1;
      uint16_t PWCOL1:1;
      uint16_t PWCOL2:1;
      uint16_t PWCOL3:1;
      uint16_t PWCOL4:1;
      uint16_t PWCOL5:1;
      uint16_t PWCOL6:1;
      uint16_t PWCOL7:1;
    };
  };
} DMACS0BITS;
extern volatile DMACS0BITS DMACS0bits __attribute__((__sfr__));

#define DMACS1 DMACS1
extern volatile uint16_t DMACS1 __attribute__((__sfr__));
__extension__ typedef struct tagDMACS1BITS {
  union {
    struct {
      uint16_t PPST0:1;
      uint16_t PPST1:1;
      uint16_t PPST2:1;
      uint16_t PPST3:1;
      uint16_t PPST4:1;
      uint16_t PPST5:1;
      uint16_t PPST6:1;
      uint16_t PPST7:1;
      uint16_t LSTCH:4;
    };
    struct {
      uint16_t PPST:8;
      uint16_t LSTCH0:1;
      uint16_t LSTCH1:1;
      uint16_t LSTCH2:1;
      uint16_t LSTCH3:1;
    };
  };
} DMACS1BITS;
extern volatile DMACS1BITS DMACS1bits __attribute__((__sfr__));

#define DSADR DSADR
extern volatile uint16_t DSADR __attribute__((__sfr__));
#define C1CTRL1 C1CTRL1
extern volatile uint16_t C1CTRL1 __attribute__((__sfr__));
__extension__ typedef struct tagC1CTRL1BITS {
  union {
    struct {
      uint16_t WIN:1;
      uint16_t :2;
      uint16_t CANCAP:1;
      uint16_t :1;
      uint16_t OPMODE:3;
      uint16_t REQOP:3;
      uint16_t CANCKS:1;
      uint16_t ABAT:1;
      uint16_t CSIDL:1;
    };
    struct {
      uint16_t :5;
      uint16_t OPMODE0:1;
      uint16_t OPMODE1:1;
      uint16_t OPMODE2:1;
      uint16_t REQOP0:1;
      uint16_t REQOP1:1;
      uint16_t REQOP2:1;
    };
  };
} C1CTRL1BITS;
extern volatile C1CTRL1BITS C1CTRL1bits __attribute__((__sfr__));

#define C1CTRL2 C1CTRL2
extern volatile uint16_t C1CTRL2 __attribute__((__sfr__));
__extension__ typedef struct tagC1CTRL2BITS {
  union {
    struct {
      uint16_t DNCNT:5;
    };
    struct {
      uint16_t DNCNT0:1;
      uint16_t DNCNT1:1;
      uint16_t DNCNT2:1;
      uint16_t DNCNT3:1;
      uint16_t DNCNT4:1;
    };
  };
} C1CTRL2BITS;
extern volatile C1CTRL2BITS C1CTRL2bits __attribute__((__sfr__));

#define C1VEC C1VEC
extern volatile uint16_t C1VEC __attribute__((__sfr__));
__extension__ typedef struct tagC1VECBITS {
  union {
    struct {
      uint16_t ICODE:7;
      uint16_t :1;
      uint16_t FILHIT:5;
    };
    struct {
      uint16_t ICODE0:1;
      uint16_t ICODE1:1;
      uint16_t ICODE2:1;
      uint16_t ICODE3:1;
      uint16_t ICODE4:1;
      uint16_t ICODE5:1;
      uint16_t ICODE6:1;
      uint16_t :1;
      uint16_t FILHIT0:1;
      uint16_t FILHIT1:1;
      uint16_t FILHIT2:1;
      uint16_t FILHIT3:1;
      uint16_t FILHIT4:1;
    };
  };
} C1VECBITS;
extern volatile C1VECBITS C1VECbits __attribute__((__sfr__));

#define C1FCTRL C1FCTRL
extern volatile uint16_t C1FCTRL __attribute__((__sfr__));
__extension__ typedef struct tagC1FCTRLBITS {
  union {
    struct {
      uint16_t FSA:5;
      uint16_t :8;
      uint16_t DMABS:3;
    };
    struct {
      uint16_t FSA0:1;
      uint16_t FSA1:1;
      uint16_t FSA2:1;
      uint16_t FSA3:1;
      uint16_t FSA4:1;
      uint16_t :8;
      uint16_t DMABS0:1;
      uint16_t DMABS1:1;
      uint16_t DMABS2:1;
    };
  };
} C1FCTRLBITS;
extern volatile C1FCTRLBITS C1FCTRLbits __attribute__((__sfr__));

#define C1FIFO C1FIFO
extern volatile uint16_t C1FIFO __attribute__((__sfr__));
__extension__ typedef struct tagC1FIFOBITS {
  union {
    struct {
      uint16_t FNRB:6;
      uint16_t :2;
      uint16_t FBP:6;
    };
    struct {
      uint16_t FNRB0:1;
      uint16_t FNRB1:1;
      uint16_t FNRB2:1;
      uint16_t FNRB3:1;
      uint16_t FNRB4:1;
      uint16_t FNRB5:1;
      uint16_t :2;
      uint16_t FBP0:1;
      uint16_t FBP1:1;
      uint16_t FBP2:1;
      uint16_t FBP3:1;
      uint16_t FBP4:1;
      uint16_t FBP5:1;
    };
  };
} C1FIFOBITS;
extern volatile C1FIFOBITS C1FIFObits __attribute__((__sfr__));

#define C1INTF C1INTF
extern volatile uint16_t C1INTF __attribute__((__sfr__));
typedef struct tagC1INTFBITS {
  uint16_t TBIF:1;
  uint16_t RBIF:1;
  uint16_t RBOVIF:1;
  uint16_t FIFOIF:1;
  uint16_t :1;
  uint16_t ERRIF:1;
  uint16_t WAKIF:1;
  uint16_t IVRIF:1;
  uint16_t EWARN:1;
  uint16_t RXWAR:1;
  uint16_t TXWAR:1;
  uint16_t RXBP:1;
  uint16_t TXBP:1;
  uint16_t TXBO:1;
} C1INTFBITS;
extern volatile C1INTFBITS C1INTFbits __attribute__((__sfr__));

#define C1INTE C1INTE
extern volatile uint16_t C1INTE __attribute__((__sfr__));
typedef struct tagC1INTEBITS {
  uint16_t TBIE:1;
  uint16_t RBIE:1;
  uint16_t RBOVIE:1;
  uint16_t FIFOIE:1;
  uint16_t :1;
  uint16_t ERRIE:1;
  uint16_t WAKIE:1;
  uint16_t IVRIE:1;
} C1INTEBITS;
extern volatile C1INTEBITS C1INTEbits __attribute__((__sfr__));

#define C1EC C1EC
extern volatile uint16_t C1EC __attribute__((__sfr__));
__extension__ typedef struct tagC1ECBITS {
  union {
    struct {
      uint16_t RERRCNT:8;
      uint16_t TERRCNT:8;
    };
    struct {
      uint16_t RERRCNT0:1;
      uint16_t RERRCNT1:1;
      uint16_t RERRCNT2:1;
      uint16_t RERRCNT3:1;
      uint16_t RERRCNT4:1;
      uint16_t RERRCNT5:1;
      uint16_t RERRCNT6:1;
      uint16_t RERRCNT7:1;
      uint16_t TERRCNT0:1;
      uint16_t TERRCNT1:1;
      uint16_t TERRCNT2:1;
      uint16_t TERRCNT3:1;
      uint16_t TERRCNT4:1;
      uint16_t TERRCNT5:1;
      uint16_t TERRCNT6:1;
      uint16_t TERRCNT7:1;
    };
  };
} C1ECBITS;
extern volatile C1ECBITS C1ECbits __attribute__((__sfr__));

#define C1RERRCNT C1RERRCNT
extern volatile uint8_t C1RERRCNT __attribute__((__sfr__));
#define C1TERRCNT C1TERRCNT
extern volatile uint8_t C1TERRCNT __attribute__((__sfr__));
#define C1CFG1 C1CFG1
extern volatile uint16_t C1CFG1 __attribute__((__sfr__));
__extension__ typedef struct tagC1CFG1BITS {
  union {
    struct {
      uint16_t BRP:6;
      uint16_t SJW:2;
    };
    struct {
      uint16_t BRP0:1;
      uint16_t BRP1:1;
      uint16_t BRP2:1;
      uint16_t BRP3:1;
      uint16_t BRP4:1;
      uint16_t BRP5:1;
      uint16_t SJW0:1;
      uint16_t SJW1:1;
    };
  };
} C1CFG1BITS;
extern volatile C1CFG1BITS C1CFG1bits __attribute__((__sfr__));

#define C1CFG2 C1CFG2
extern volatile uint16_t C1CFG2 __attribute__((__sfr__));
__extension__ typedef struct tagC1CFG2BITS {
  union {
    struct {
      uint16_t PRSEG:3;
      uint16_t SEG1PH:3;
      uint16_t SAM:1;
      uint16_t SEG2PHTS:1;
      uint16_t SEG2PH:3;
      uint16_t :3;
      uint16_t WAKFIL:1;
    };
    struct {
      uint16_t PRSEG0:1;
      uint16_t PRSEG1:1;
      uint16_t PRSEG2:1;
      uint16_t SEG1PH0:1;
      uint16_t SEG1PH1:1;
      uint16_t SEG1PH2:1;
      uint16_t :2;
      uint16_t SEG2PH0:1;
      uint16_t SEG2PH1:1;
      uint16_t SEG2PH2:1;
    };
  };
} C1CFG2BITS;
extern volatile C1CFG2BITS C1CFG2bits __attribute__((__sfr__));

#define C1FEN1 C1FEN1
extern volatile uint16_t C1FEN1 __attribute__((__sfr__));
__extension__ typedef struct tagC1FEN1BITS {
  union {
    struct {
      uint16_t FLTEN:16;
    };
    struct {
      uint16_t FLTEN0:1;
      uint16_t FLTEN1:1;
      uint16_t FLTEN2:1;
      uint16_t FLTEN3:1;
      uint16_t FLTEN4:1;
      uint16_t FLTEN5:1;
      uint16_t FLTEN6:1;
      uint16_t FLTEN7:1;
      uint16_t FLTEN8:1;
      uint16_t FLTEN9:1;
      uint16_t FLTEN10:1;
      uint16_t FLTEN11:1;
      uint16_t FLTEN12:1;
      uint16_t FLTEN13:1;
      uint16_t FLTEN14:1;
      uint16_t FLTEN15:1;
    };
  };
} C1FEN1BITS;
extern volatile C1FEN1BITS C1FEN1bits __attribute__((__sfr__));

#define C1FMSKSEL1 C1FMSKSEL1
extern volatile uint16_t C1FMSKSEL1 __attribute__((__sfr__));
__extension__ typedef struct tagC1FMSKSEL1BITS {
  union {
    struct {
      uint16_t F0MSK:2;
      uint16_t F1MSK:2;
      uint16_t F2MSK:2;
      uint16_t F3MSK:2;
      uint16_t F4MSK:2;
      uint16_t F5MSK:2;
      uint16_t F6MSK:2;
      uint16_t F7MSK:2;
    };
    struct {
      uint16_t F0MSK0:1;
      uint16_t F0MSK1:1;
      uint16_t F1MSK0:1;
      uint16_t F1MSK1:1;
      uint16_t F2MSK0:1;
      uint16_t F2MSK1:1;
      uint16_t F3MSK0:1;
      uint16_t F3MSK1:1;
      uint16_t F4MSK0:1;
      uint16_t F4MSK1:1;
      uint16_t F5MSK0:1;
      uint16_t F5MSK1:1;
      uint16_t F6MSK0:1;
      uint16_t F6MSK1:1;
      uint16_t F7MSK0:1;
      uint16_t F7MSK1:1;
    };
  };
} C1FMSKSEL1BITS;
extern volatile C1FMSKSEL1BITS C1FMSKSEL1bits __attribute__((__sfr__));

#define C1FMSKSEL2 C1FMSKSEL2
extern volatile uint16_t C1FMSKSEL2 __attribute__((__sfr__));
__extension__ typedef struct tagC1FMSKSEL2BITS {
  union {
    struct {
      uint16_t F8MSK:2;
      uint16_t F9MSK:2;
      uint16_t F10MSK:2;
      uint16_t F11MSK:2;
      uint16_t F12MSK:2;
      uint16_t F13MSK:2;
      uint16_t F14MSK:2;
      uint16_t F15MSK:2;
    };
    struct {
      uint16_t F8MSK0:1;
      uint16_t F8MSK1:1;
      uint16_t F9MSK0:1;
      uint16_t F9MSK1:1;
      uint16_t F10MSK0:1;
      uint16_t F10MSK1:1;
      uint16_t F11MSK0:1;
      uint16_t F11MSK1:1;
      uint16_t F12MSK0:1;
      uint16_t F12MSK1:1;
      uint16_t F13MSK0:1;
      uint16_t F13MSK1:1;
      uint16_t F14MSK0:1;
      uint16_t F14MSK1:1;
      uint16_t F15MSK0:1;
      uint16_t F15MSK1:1;
    };
  };
} C1FMSKSEL2BITS;
extern volatile C1FMSKSEL2BITS C1FMSKSEL2bits __attribute__((__sfr__));

#define C1BUFPNT1 C1BUFPNT1
extern volatile uint16_t C1BUFPNT1 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT1BITS {
  union {
    struct {
      uint16_t F0BP:4;
      uint16_t F1BP:4;
      uint16_t F2BP:4;
      uint16_t F3BP:4;
    };
    struct {
      uint16_t F0BP0:1;
      uint16_t F0BP1:1;
      uint16_t F0BP2:1;
      uint16_t F0BP3:1;
      uint16_t F1BP0:1;
      uint16_t F1BP1:1;
      uint16_t F1BP2:1;
      uint16_t F1BP3:1;
      uint16_t F2BP0:1;
      uint16_t F2BP1:1;
      uint16_t F2BP2:1;
      uint16_t F2BP3:1;
      uint16_t F3BP0:1;
      uint16_t F3BP1:1;
      uint16_t F3BP2:1;
      uint16_t F3BP3:1;
    };
  };
} C1BUFPNT1BITS;
extern volatile C1BUFPNT1BITS C1BUFPNT1bits __attribute__((__sfr__));

#define C1RXFUL1 C1RXFUL1
extern volatile uint16_t C1RXFUL1 __attribute__((__sfr__));
typedef struct tagC1RXFUL1BITS {
  uint16_t RXFUL0:1;
  uint16_t RXFUL1:1;
  uint16_t RXFUL2:1;
  uint16_t RXFUL3:1;
  uint16_t RXFUL4:1;
  uint16_t RXFUL5:1;
  uint16_t RXFUL6:1;
  uint16_t RXFUL7:1;
  uint16_t RXFUL8:1;
  uint16_t RXFUL9:1;
  uint16_t RXFUL10:1;
  uint16_t RXFUL11:1;
  uint16_t RXFUL12:1;
  uint16_t RXFUL13:1;
  uint16_t RXFUL14:1;
  uint16_t RXFUL15:1;
} C1RXFUL1BITS;
extern volatile C1RXFUL1BITS C1RXFUL1bits __attribute__((__sfr__));

#define C1BUFPNT2 C1BUFPNT2
extern volatile uint16_t C1BUFPNT2 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT2BITS {
  union {
    struct {
      uint16_t F4BP:4;
      uint16_t F5BP:4;
      uint16_t F6BP:4;
      uint16_t F7BP:4;
    };
    struct {
      uint16_t F4BP0:1;
      uint16_t F4BP1:1;
      uint16_t F4BP2:1;
      uint16_t F4BP3:1;
      uint16_t F5BP0:1;
      uint16_t F5BP1:1;
      uint16_t F5BP2:1;
      uint16_t F5BP3:1;
      uint16_t F6BP0:1;
      uint16_t F6BP1:1;
      uint16_t F6BP2:1;
      uint16_t F6BP3:1;
      uint16_t F7BP0:1;
      uint16_t F7BP1:1;
      uint16_t F7BP2:1;
      uint16_t F7BP3:1;
    };
  };
} C1BUFPNT2BITS;
extern volatile C1BUFPNT2BITS C1BUFPNT2bits __attribute__((__sfr__));

#define C1RXFUL2 C1RXFUL2
extern volatile uint16_t C1RXFUL2 __attribute__((__sfr__));
typedef struct tagC1RXFUL2BITS {
  uint16_t RXFUL16:1;
  uint16_t RXFUL17:1;
  uint16_t RXFUL18:1;
  uint16_t RXFUL19:1;
  uint16_t RXFUL20:1;
  uint16_t RXFUL21:1;
  uint16_t RXFUL22:1;
  uint16_t RXFUL23:1;
  uint16_t RXFUL24:1;
  uint16_t RXFUL25:1;
  uint16_t RXFUL26:1;
  uint16_t RXFUL27:1;
  uint16_t RXFUL28:1;
  uint16_t RXFUL29:1;
  uint16_t RXFUL30:1;
  uint16_t RXFUL31:1;
} C1RXFUL2BITS;
extern volatile C1RXFUL2BITS C1RXFUL2bits __attribute__((__sfr__));

#define C1BUFPNT3 C1BUFPNT3
extern volatile uint16_t C1BUFPNT3 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT3BITS {
  union {
    struct {
      uint16_t F8BP:4;
      uint16_t F9BP:4;
      uint16_t F10BP:4;
      uint16_t F11BP:4;
    };
    struct {
      uint16_t F8BP0:1;
      uint16_t F8BP1:1;
      uint16_t F8BP2:1;
      uint16_t F8BP3:1;
      uint16_t F9BP0:1;
      uint16_t F9BP1:1;
      uint16_t F9BP2:1;
      uint16_t F9BP3:1;
      uint16_t F10BP0:1;
      uint16_t F10BP1:1;
      uint16_t F10BP2:1;
      uint16_t F10BP3:1;
      uint16_t F11BP0:1;
      uint16_t F11BP1:1;
      uint16_t F11BP2:1;
      uint16_t F11BP3:1;
    };
  };
} C1BUFPNT3BITS;
extern volatile C1BUFPNT3BITS C1BUFPNT3bits __attribute__((__sfr__));

#define C1BUFPNT4 C1BUFPNT4
extern volatile uint16_t C1BUFPNT4 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT4BITS {
  union {
    struct {
      uint16_t F12BP:4;
      uint16_t F13BP:4;
      uint16_t F14BP:4;
      uint16_t F15BP:4;
    };
    struct {
      uint16_t F12BP0:1;
      uint16_t F12BP1:1;
      uint16_t F12BP2:1;
      uint16_t F12BP3:1;
      uint16_t F13BP0:1;
      uint16_t F13BP1:1;
      uint16_t F13BP2:1;
      uint16_t F13BP3:1;
      uint16_t F14BP0:1;
      uint16_t F14BP1:1;
      uint16_t F14BP2:1;
      uint16_t F14BP3:1;
      uint16_t F15BP0:1;
      uint16_t F15BP1:1;
      uint16_t F15BP2:1;
      uint16_t F15BP3:1;
    };
  };
} C1BUFPNT4BITS;
extern volatile C1BUFPNT4BITS C1BUFPNT4bits __attribute__((__sfr__));

#define C1RXOVF1 C1RXOVF1
extern volatile uint16_t C1RXOVF1 __attribute__((__sfr__));
typedef struct tagC1RXOVF1BITS {
  uint16_t RXOVF0:1;
  uint16_t RXOVF1:1;
  uint16_t RXOVF2:1;
  uint16_t RXOVF3:1;
  uint16_t RXOVF4:1;
  uint16_t RXOVF5:1;
  uint16_t RXOVF6:1;
  uint16_t RXOVF7:1;
  uint16_t RXOVF8:1;
  uint16_t RXOVF9:1;
  uint16_t RXOVF10:1;
  uint16_t RXOVF11:1;
  uint16_t RXOVF12:1;
  uint16_t RXOVF13:1;
  uint16_t RXOVF14:1;
  uint16_t RXOVF15:1;
} C1RXOVF1BITS;
extern volatile C1RXOVF1BITS C1RXOVF1bits __attribute__((__sfr__));

#define C1RXOVF2 C1RXOVF2
extern volatile uint16_t C1RXOVF2 __attribute__((__sfr__));
typedef struct tagC1RXOVF2BITS {
  uint16_t RXOVF16:1;
  uint16_t RXOVF17:1;
  uint16_t RXOVF18:1;
  uint16_t RXOVF19:1;
  uint16_t RXOVF20:1;
  uint16_t RXOVF21:1;
  uint16_t RXOVF22:1;
  uint16_t RXOVF23:1;
  uint16_t RXOVF24:1;
  uint16_t RXOVF25:1;
  uint16_t RXOVF26:1;
  uint16_t RXOVF27:1;
  uint16_t RXOVF28:1;
  uint16_t RXOVF29:1;
  uint16_t RXOVF30:1;
  uint16_t RXOVF31:1;
} C1RXOVF2BITS;
extern volatile C1RXOVF2BITS C1RXOVF2bits __attribute__((__sfr__));

#define C1RXM0SID C1RXM0SID
extern volatile uint16_t C1RXM0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM0SIDBITS {
  union {
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :1;
      uint16_t MIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t EID:2;
      uint16_t :3;
      uint16_t SID:11;
    };
  };
} C1RXM0SIDBITS;
extern volatile C1RXM0SIDBITS C1RXM0SIDbits __attribute__((__sfr__));

#define C1TR01CON C1TR01CON
extern volatile uint16_t C1TR01CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR01CONBITS {
  union {
    struct {
      uint16_t TX0PRI:2;
      uint16_t RTREN0:1;
      uint16_t TXREQ0:1;
      uint16_t TXERR0:1;
      uint16_t TXLARB0:1;
      uint16_t TXABT0:1;
      uint16_t TXEN0:1;
      uint16_t TX1PRI:2;
      uint16_t RTREN1:1;
      uint16_t TXREQ1:1;
      uint16_t TXERR1:1;
      uint16_t TXLARB1:1;
      uint16_t TXABT1:1;
      uint16_t TXEN1:1;
    };
    struct {
      uint16_t TX0PRI0:1;
      uint16_t TX0PRI1:1;
      uint16_t :6;
      uint16_t TX1PRI0:1;
      uint16_t TX1PRI1:1;
    };
  };
} C1TR01CONBITS;
extern volatile C1TR01CONBITS C1TR01CONbits __attribute__((__sfr__));

#define C1RXM0EID C1RXM0EID
extern volatile uint16_t C1RXM0EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM0EIDBITS {
  union {
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
    struct {
      uint16_t EID:16;
    };
  };
} C1RXM0EIDBITS;
extern volatile C1RXM0EIDBITS C1RXM0EIDbits __attribute__((__sfr__));

#define C1TR23CON C1TR23CON
extern volatile uint16_t C1TR23CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR23CONBITS {
  union {
    struct {
      uint16_t TX2PRI:2;
      uint16_t RTREN2:1;
      uint16_t TXREQ2:1;
      uint16_t TXERR2:1;
      uint16_t TXLARB2:1;
      uint16_t TXABT2:1;
      uint16_t TXEN2:1;
      uint16_t TX3PRI:2;
      uint16_t RTREN3:1;
      uint16_t TXREQ3:1;
      uint16_t TXERR3:1;
      uint16_t TXLARB3:1;
      uint16_t TXABT3:1;
      uint16_t TXEN3:1;
    };
    struct {
      uint16_t TX2PRI0:1;
      uint16_t TX2PRI1:1;
      uint16_t :6;
      uint16_t TX3PRI0:1;
      uint16_t TX3PRI1:1;
    };
  };
} C1TR23CONBITS;
extern volatile C1TR23CONBITS C1TR23CONbits __attribute__((__sfr__));

#define C1RXM1SID C1RXM1SID
extern volatile uint16_t C1RXM1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM1SIDBITS {
  union {
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :1;
      uint16_t MIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t EID:2;
      uint16_t :3;
      uint16_t SID:11;
    };
  };
} C1RXM1SIDBITS;
extern volatile C1RXM1SIDBITS C1RXM1SIDbits __attribute__((__sfr__));

#define C1TR45CON C1TR45CON
extern volatile uint16_t C1TR45CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR45CONBITS {
  union {
    struct {
      uint16_t TX4PRI:2;
      uint16_t RTREN4:1;
      uint16_t TXREQ4:1;
      uint16_t TXERR4:1;
      uint16_t TXLARB4:1;
      uint16_t TXABT4:1;
      uint16_t TXEN4:1;
      uint16_t TX5PRI:2;
      uint16_t RTREN5:1;
      uint16_t TXREQ5:1;
      uint16_t TXERR5:1;
      uint16_t TXLARB5:1;
      uint16_t TXABT5:1;
      uint16_t TXEN5:1;
    };
    struct {
      uint16_t TX4PRI0:1;
      uint16_t TX4PRI1:1;
      uint16_t :6;
      uint16_t TX5PRI0:1;
      uint16_t TX5PRI1:1;
    };
  };
} C1TR45CONBITS;
extern volatile C1TR45CONBITS C1TR45CONbits __attribute__((__sfr__));

#define C1RXM1EID C1RXM1EID
extern volatile uint16_t C1RXM1EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM1EIDBITS {
  union {
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
    struct {
      uint16_t EID:16;
    };
  };
} C1RXM1EIDBITS;
extern volatile C1RXM1EIDBITS C1RXM1EIDbits __attribute__((__sfr__));

#define C1TR67CON C1TR67CON
extern volatile uint16_t C1TR67CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR67CONBITS {
  union {
    struct {
      uint16_t TX6PRI:2;
      uint16_t RTREN6:1;
      uint16_t TXREQ6:1;
      uint16_t TXERR6:1;
      uint16_t TXLARB6:1;
      uint16_t TXABT6:1;
      uint16_t TXEN6:1;
      uint16_t TX7PRI:2;
      uint16_t RTREN7:1;
      uint16_t TXREQ7:1;
      uint16_t TXERR7:1;
      uint16_t TXLARB7:1;
      uint16_t TXABT7:1;
      uint16_t TXEN7:1;
    };
    struct {
      uint16_t TX6PRI0:1;
      uint16_t TX6PRI1:1;
      uint16_t :6;
      uint16_t TX7PRI0:1;
      uint16_t TX7PRI1:1;
    };
  };
} C1TR67CONBITS;
extern volatile C1TR67CONBITS C1TR67CONbits __attribute__((__sfr__));

#define C1RXM2SID C1RXM2SID
extern volatile uint16_t C1RXM2SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM2SIDBITS {
  union {
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :1;
      uint16_t MIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t EID:2;
      uint16_t :3;
      uint16_t SID:11;
    };
  };
} C1RXM2SIDBITS;
extern volatile C1RXM2SIDBITS C1RXM2SIDbits __attribute__((__sfr__));

#define C1RXM2EID C1RXM2EID
extern volatile uint16_t C1RXM2EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM2EIDBITS {
  union {
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
    struct {
      uint16_t EID:16;
    };
  };
} C1RXM2EIDBITS;
extern volatile C1RXM2EIDBITS C1RXM2EIDbits __attribute__((__sfr__));

#define C1RXD C1RXD
extern volatile uint16_t C1RXD __attribute__((__sfr__));

/* Generic structure of entire SFR area for each CAN module */
typedef struct tagCAN {
} CAN, *PCAN;


/* SFR blocks for each CAN module */
#define CAN1 CAN1
extern volatile CAN CAN1 __attribute__((__sfr__));

#define C1RXF0SID C1RXF0SID
extern volatile uint16_t C1RXF0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF0SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF0SIDBITS;
extern volatile C1RXF0SIDBITS C1RXF0SIDbits __attribute__((__sfr__));

#define C1RXF0EID C1RXF0EID
extern volatile uint16_t C1RXF0EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF0EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF0EIDBITS;
extern volatile C1RXF0EIDBITS C1RXF0EIDbits __attribute__((__sfr__));

#define C1TXD C1TXD
extern volatile uint16_t C1TXD __attribute__((__sfr__));
#define C1RXF1SID C1RXF1SID
extern volatile uint16_t C1RXF1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF1SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF1SIDBITS;
extern volatile C1RXF1SIDBITS C1RXF1SIDbits __attribute__((__sfr__));

#define C1RXF1EID C1RXF1EID
extern volatile uint16_t C1RXF1EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF1EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF1EIDBITS;
extern volatile C1RXF1EIDBITS C1RXF1EIDbits __attribute__((__sfr__));

#define C1RXF2SID C1RXF2SID
extern volatile uint16_t C1RXF2SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF2SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF2SIDBITS;
extern volatile C1RXF2SIDBITS C1RXF2SIDbits __attribute__((__sfr__));

#define C1RXF2EID C1RXF2EID
extern volatile uint16_t C1RXF2EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF2EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF2EIDBITS;
extern volatile C1RXF2EIDBITS C1RXF2EIDbits __attribute__((__sfr__));

#define C1RXF3SID C1RXF3SID
extern volatile uint16_t C1RXF3SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF3SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF3SIDBITS;
extern volatile C1RXF3SIDBITS C1RXF3SIDbits __attribute__((__sfr__));

#define C1RXF3EID C1RXF3EID
extern volatile uint16_t C1RXF3EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF3EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF3EIDBITS;
extern volatile C1RXF3EIDBITS C1RXF3EIDbits __attribute__((__sfr__));

#define C1RXF4SID C1RXF4SID
extern volatile uint16_t C1RXF4SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF4SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF4SIDBITS;
extern volatile C1RXF4SIDBITS C1RXF4SIDbits __attribute__((__sfr__));

#define C1RXF4EID C1RXF4EID
extern volatile uint16_t C1RXF4EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF4EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF4EIDBITS;
extern volatile C1RXF4EIDBITS C1RXF4EIDbits __attribute__((__sfr__));

#define C1RXF5SID C1RXF5SID
extern volatile uint16_t C1RXF5SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF5SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF5SIDBITS;
extern volatile C1RXF5SIDBITS C1RXF5SIDbits __attribute__((__sfr__));

#define C1RXF5EID C1RXF5EID
extern volatile uint16_t C1RXF5EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF5EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF5EIDBITS;
extern volatile C1RXF5EIDBITS C1RXF5EIDbits __attribute__((__sfr__));

#define C1RXF6SID C1RXF6SID
extern volatile uint16_t C1RXF6SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF6SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF6SIDBITS;
extern volatile C1RXF6SIDBITS C1RXF6SIDbits __attribute__((__sfr__));

#define C1RXF6EID C1RXF6EID
extern volatile uint16_t C1RXF6EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF6EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF6EIDBITS;
extern volatile C1RXF6EIDBITS C1RXF6EIDbits __attribute__((__sfr__));

#define C1RXF7SID C1RXF7SID
extern volatile uint16_t C1RXF7SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF7SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF7SIDBITS;
extern volatile C1RXF7SIDBITS C1RXF7SIDbits __attribute__((__sfr__));

#define C1RXF7EID C1RXF7EID
extern volatile uint16_t C1RXF7EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF7EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF7EIDBITS;
extern volatile C1RXF7EIDBITS C1RXF7EIDbits __attribute__((__sfr__));

#define C1RXF8SID C1RXF8SID
extern volatile uint16_t C1RXF8SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF8SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF8SIDBITS;
extern volatile C1RXF8SIDBITS C1RXF8SIDbits __attribute__((__sfr__));

#define C1RXF8EID C1RXF8EID
extern volatile uint16_t C1RXF8EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF8EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF8EIDBITS;
extern volatile C1RXF8EIDBITS C1RXF8EIDbits __attribute__((__sfr__));

#define C1RXF9SID C1RXF9SID
extern volatile uint16_t C1RXF9SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF9SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF9SIDBITS;
extern volatile C1RXF9SIDBITS C1RXF9SIDbits __attribute__((__sfr__));

#define C1RXF9EID C1RXF9EID
extern volatile uint16_t C1RXF9EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF9EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF9EIDBITS;
extern volatile C1RXF9EIDBITS C1RXF9EIDbits __attribute__((__sfr__));

#define C1RXF10SID C1RXF10SID
extern volatile uint16_t C1RXF10SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF10SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF10SIDBITS;
extern volatile C1RXF10SIDBITS C1RXF10SIDbits __attribute__((__sfr__));

#define C1RXF10EID C1RXF10EID
extern volatile uint16_t C1RXF10EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF10EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF10EIDBITS;
extern volatile C1RXF10EIDBITS C1RXF10EIDbits __attribute__((__sfr__));

#define C1RXF11SID C1RXF11SID
extern volatile uint16_t C1RXF11SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF11SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF11SIDBITS;
extern volatile C1RXF11SIDBITS C1RXF11SIDbits __attribute__((__sfr__));

#define C1RXF11EID C1RXF11EID
extern volatile uint16_t C1RXF11EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF11EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF11EIDBITS;
extern volatile C1RXF11EIDBITS C1RXF11EIDbits __attribute__((__sfr__));

#define C1RXF12SID C1RXF12SID
extern volatile uint16_t C1RXF12SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF12SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF12SIDBITS;
extern volatile C1RXF12SIDBITS C1RXF12SIDbits __attribute__((__sfr__));

#define C1RXF12EID C1RXF12EID
extern volatile uint16_t C1RXF12EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF12EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF12EIDBITS;
extern volatile C1RXF12EIDBITS C1RXF12EIDbits __attribute__((__sfr__));

#define C1RXF13SID C1RXF13SID
extern volatile uint16_t C1RXF13SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF13SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF13SIDBITS;
extern volatile C1RXF13SIDBITS C1RXF13SIDbits __attribute__((__sfr__));

#define C1RXF13EID C1RXF13EID
extern volatile uint16_t C1RXF13EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF13EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF13EIDBITS;
extern volatile C1RXF13EIDBITS C1RXF13EIDbits __attribute__((__sfr__));

#define C1RXF14SID C1RXF14SID
extern volatile uint16_t C1RXF14SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF14SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF14SIDBITS;
extern volatile C1RXF14SIDBITS C1RXF14SIDbits __attribute__((__sfr__));

#define C1RXF14EID C1RXF14EID
extern volatile uint16_t C1RXF14EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF14EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF14EIDBITS;
extern volatile C1RXF14EIDBITS C1RXF14EIDbits __attribute__((__sfr__));

#define C1RXF15SID C1RXF15SID
extern volatile uint16_t C1RXF15SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF15SIDBITS {
  union {
    struct {
      uint16_t EID:2;
      uint16_t :1;
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID:11;
    };
    struct {
      uint16_t EID16:1;
      uint16_t EID17:1;
      uint16_t :3;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
  };
} C1RXF15SIDBITS;
extern volatile C1RXF15SIDBITS C1RXF15SIDbits __attribute__((__sfr__));

#define C1RXF15EID C1RXF15EID
extern volatile uint16_t C1RXF15EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF15EIDBITS {
  union {
    struct {
      uint16_t EID:16;
    };
    struct {
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t EID14:1;
      uint16_t EID15:1;
    };
  };
} C1RXF15EIDBITS;
extern volatile C1RXF15EIDBITS C1RXF15EIDbits __attribute__((__sfr__));

#define P2TCON P2TCON
extern volatile uint16_t P2TCON __attribute__((__sfr__));
__extension__ typedef struct tagP2TCONBITS {
  union {
    struct {
      uint16_t PTMOD:2;
      uint16_t PTCKPS:2;
      uint16_t PTOPS:4;
      uint16_t :5;
      uint16_t PTSIDL:1;
      uint16_t :1;
      uint16_t PTEN:1;
    };
    struct {
      uint16_t PTMOD0:1;
      uint16_t PTMOD1:1;
      uint16_t PTCKPS0:1;
      uint16_t PTCKPS1:1;
      uint16_t PTOPS0:1;
      uint16_t PTOPS1:1;
      uint16_t PTOPS2:1;
      uint16_t PTOPS3:1;
    };
  };
} P2TCONBITS;
extern volatile P2TCONBITS P2TCONbits __attribute__((__sfr__));

#define P2TMR P2TMR
extern volatile uint16_t P2TMR __attribute__((__sfr__));
typedef struct tagP2TMRBITS {
  uint16_t PTMR:15;
  uint16_t PTDIR:1;
} P2TMRBITS;
extern volatile P2TMRBITS P2TMRbits __attribute__((__sfr__));

#define P2TPER P2TPER
extern volatile uint16_t P2TPER __attribute__((__sfr__));
typedef struct tagP2TPERBITS {
  uint16_t PTPER:15;
} P2TPERBITS;
extern volatile P2TPERBITS P2TPERbits __attribute__((__sfr__));

#define P2SECMP P2SECMP
extern volatile uint16_t P2SECMP __attribute__((__sfr__));
typedef struct tagP2SECMPBITS {
  uint16_t SEVTCMP:15;
  uint16_t SEVTDIR:1;
} P2SECMPBITS;
extern volatile P2SECMPBITS P2SECMPbits __attribute__((__sfr__));

#define PWM2CON1 PWM2CON1
extern volatile uint16_t PWM2CON1 __attribute__((__sfr__));
typedef struct tagPWM2CON1BITS {
  uint16_t PEN1L:1;
  uint16_t :3;
  uint16_t PEN1H:1;
  uint16_t :3;
  uint16_t PMOD1:1;
} PWM2CON1BITS;
extern volatile PWM2CON1BITS PWM2CON1bits __attribute__((__sfr__));

#define PWM2CON2 PWM2CON2
extern volatile uint16_t PWM2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWM2CON2BITS {
  union {
    struct {
      uint16_t UDIS:1;
      uint16_t OSYNC:1;
      uint16_t IUE:1;
      uint16_t :5;
      uint16_t SEVOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t SEVOPS0:1;
      uint16_t SEVOPS1:1;
      uint16_t SEVOPS2:1;
      uint16_t SEVOPS3:1;
    };
  };
} PWM2CON2BITS;
extern volatile PWM2CON2BITS PWM2CON2bits __attribute__((__sfr__));

#define P2DTCON1 P2DTCON1
extern volatile uint16_t P2DTCON1 __attribute__((__sfr__));
__extension__ typedef struct tagP2DTCON1BITS {
  union {
    struct {
      uint16_t DTA:6;
      uint16_t DTAPS:2;
      uint16_t DTB:6;
      uint16_t DTBPS:2;
    };
    struct {
      uint16_t DTA0:1;
      uint16_t DTA1:1;
      uint16_t DTA2:1;
      uint16_t DTA3:1;
      uint16_t DTA4:1;
      uint16_t DTA5:1;
      uint16_t DTAPS0:1;
      uint16_t DTAPS1:1;
      uint16_t DTB0:1;
      uint16_t DTB1:1;
      uint16_t DTB2:1;
      uint16_t DTB3:1;
      uint16_t DTB4:1;
      uint16_t DTB5:1;
      uint16_t DTBPS0:1;
      uint16_t DTBPS1:1;
    };
  };
} P2DTCON1BITS;
extern volatile P2DTCON1BITS P2DTCON1bits __attribute__((__sfr__));

#define P2DTCON2 P2DTCON2
extern volatile uint16_t P2DTCON2 __attribute__((__sfr__));
typedef struct tagP2DTCON2BITS {
  uint16_t DTS1I:1;
  uint16_t DTS1A:1;
} P2DTCON2BITS;
extern volatile P2DTCON2BITS P2DTCON2bits __attribute__((__sfr__));

#define P2FLTACON P2FLTACON
extern volatile uint16_t P2FLTACON __attribute__((__sfr__));
typedef struct tagP2FLTACONBITS {
  uint16_t FAEN1:1;
  uint16_t :6;
  uint16_t FLTAM:1;
  uint16_t FAOV1L:1;
  uint16_t FAOV1H:1;
} P2FLTACONBITS;
extern volatile P2FLTACONBITS P2FLTACONbits __attribute__((__sfr__));

#define P2OVDCON P2OVDCON
extern volatile uint16_t P2OVDCON __attribute__((__sfr__));
typedef struct tagP2OVDCONBITS {
  uint16_t POUT1L:1;
  uint16_t POUT1H:1;
  uint16_t :6;
  uint16_t POVD1L:1;
  uint16_t POVD1H:1;
} P2OVDCONBITS;
extern volatile P2OVDCONBITS P2OVDCONbits __attribute__((__sfr__));

#define P2DC1 P2DC1
extern volatile uint16_t P2DC1 __attribute__((__sfr__));
#define PMCON PMCON
extern volatile uint16_t PMCON __attribute__((__sfr__));
__extension__ typedef struct tagPMCONBITS {
  union {
    struct {
      uint16_t RDSP:1;
      uint16_t WRSP:1;
      uint16_t BEP:1;
      uint16_t CS1P:1;
      uint16_t :1;
      uint16_t ALP:1;
      uint16_t CSF:2;
      uint16_t PTRDEN:1;
      uint16_t PTWREN:1;
      uint16_t PTBEEN:1;
      uint16_t ADRMUX:2;
      uint16_t PSIDL:1;
      uint16_t :1;
      uint16_t PMPEN:1;
    };
    struct {
      uint16_t :6;
      uint16_t CSF0:1;
      uint16_t CSF1:1;
      uint16_t :3;
      uint16_t ADRMUX0:1;
      uint16_t ADRMUX1:1;
    };
  };
} PMCONBITS;
extern volatile PMCONBITS PMCONbits __attribute__((__sfr__));

#define PMMODE PMMODE
extern volatile uint16_t PMMODE __attribute__((__sfr__));
__extension__ typedef struct tagPMMODEBITS {
  union {
    struct {
      uint16_t WAITE:2;
      uint16_t WAITM:4;
      uint16_t WAITB:2;
      uint16_t MODE:2;
      uint16_t MODE16:1;
      uint16_t INCM:2;
      uint16_t IRQM:2;
      uint16_t BUSY:1;
    };
    struct {
      uint16_t WAITE0:1;
      uint16_t WAITE1:1;
      uint16_t WAITM0:1;
      uint16_t WAITM1:1;
      uint16_t WAITM2:1;
      uint16_t WAITM3:1;
      uint16_t WAITB0:1;
      uint16_t WAITB1:1;
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :1;
      uint16_t INCM0:1;
      uint16_t INCM1:1;
      uint16_t IRQM0:1;
      uint16_t IRQM1:1;
    };
  };
} PMMODEBITS;
extern volatile PMMODEBITS PMMODEbits __attribute__((__sfr__));

#define PMADDR PMADDR
extern volatile uint16_t PMADDR __attribute__((__sfr__));
__extension__ typedef struct tagPMADDRBITS {
  union {
    struct {
      uint16_t ADDR:14;
      uint16_t CS1:1;
      uint16_t ADDR15:1;
    };
    struct {
      uint16_t ADDR0:1;
      uint16_t ADDR1:1;
      uint16_t ADDR2:1;
      uint16_t ADDR3:1;
      uint16_t ADDR4:1;
      uint16_t ADDR5:1;
      uint16_t ADDR6:1;
      uint16_t ADDR7:1;
      uint16_t ADDR8:1;
      uint16_t ADDR9:1;
      uint16_t ADDR10:1;
      uint16_t ADDR11:1;
      uint16_t ADDR12:1;
      uint16_t ADDR13:1;
    };
  };
} PMADDRBITS;
extern volatile PMADDRBITS PMADDRbits __attribute__((__sfr__));

#define PMDOUT1 PMDOUT1
extern volatile uint16_t PMDOUT1 __attribute__((__sfr__));
#define PMDOUT2 PMDOUT2
extern volatile uint16_t PMDOUT2 __attribute__((__sfr__));
#define PMDIN1 PMDIN1
extern volatile uint16_t PMDIN1 __attribute__((__sfr__));
#define PMDIN2 PMDIN2
extern volatile uint16_t PMDIN2 __attribute__((__sfr__));
#define PMAEN PMAEN
extern volatile uint16_t PMAEN __attribute__((__sfr__));
__extension__ typedef struct tagPMAENBITS {
  union {
    struct {
      uint16_t PTEN:2;
      uint16_t :12;
      uint16_t PTEN14:1;
    };
    struct {
      uint16_t PTEN0:1;
      uint16_t PTEN1:1;
    };
  };
} PMAENBITS;
extern volatile PMAENBITS PMAENbits __attribute__((__sfr__));

#define PMSTAT PMSTAT
extern volatile uint16_t PMSTAT __attribute__((__sfr__));
typedef struct tagPMSTATBITS {
  uint16_t OB0E:1;
  uint16_t OB1E:1;
  uint16_t OB2E:1;
  uint16_t OB3E:1;
  uint16_t :2;
  uint16_t OBUF:1;
  uint16_t OBE:1;
  uint16_t IB0F:1;
  uint16_t IB1F:1;
  uint16_t IB2F:1;
  uint16_t IB3F:1;
  uint16_t :2;
  uint16_t IBOV:1;
  uint16_t IBF:1;
} PMSTATBITS;
extern volatile PMSTATBITS PMSTATbits __attribute__((__sfr__));

#define ALRMVAL ALRMVAL
extern volatile uint16_t ALRMVAL __attribute__((__sfr__));
#define ALCFGRPT ALCFGRPT
extern volatile uint16_t ALCFGRPT __attribute__((__sfr__));
__extension__ typedef struct tagALCFGRPTBITS {
  union {
    struct {
      uint16_t ARPT:8;
      uint16_t ALRMPTR:2;
      uint16_t AMASK:4;
      uint16_t CHIME:1;
      uint16_t ALRMEN:1;
    };
    struct {
      uint16_t ARPT0:1;
      uint16_t ARPT1:1;
      uint16_t ARPT2:1;
      uint16_t ARPT3:1;
      uint16_t ARPT4:1;
      uint16_t ARPT5:1;
      uint16_t ARPT6:1;
      uint16_t ARPT7:1;
      uint16_t ALRMPTR0:1;
      uint16_t ALRMPTR1:1;
      uint16_t AMASK0:1;
      uint16_t AMASK1:1;
      uint16_t AMASK2:1;
      uint16_t AMASK3:1;
    };
  };
} ALCFGRPTBITS;
extern volatile ALCFGRPTBITS ALCFGRPTbits __attribute__((__sfr__));

#define RTCVAL RTCVAL
extern volatile uint16_t RTCVAL __attribute__((__sfr__));
#define RCFGCAL RCFGCAL
extern volatile uint16_t RCFGCAL __attribute__((__sfr__));
__extension__ typedef struct tagRCFGCALBITS {
  union {
    struct {
      uint16_t CAL:8;
      uint16_t RTCPTR:2;
      uint16_t RTCOE:1;
      uint16_t HALFSEC:1;
      uint16_t RTCSYNC:1;
      uint16_t RTCWREN:1;
      uint16_t :1;
      uint16_t RTCEN:1;
    };
    struct {
      uint16_t CAL0:1;
      uint16_t CAL1:1;
      uint16_t CAL2:1;
      uint16_t CAL3:1;
      uint16_t CAL4:1;
      uint16_t CAL5:1;
      uint16_t CAL6:1;
      uint16_t CAL7:1;
      uint16_t RTCPTR0:1;
      uint16_t RTCPTR1:1;
    };
  };
} RCFGCALBITS;
extern volatile RCFGCALBITS RCFGCALbits __attribute__((__sfr__));

#define CMCON CMCON
extern volatile uint16_t CMCON __attribute__((__sfr__));
typedef struct tagCMCONBITS {
  uint16_t C1POS:1;
  uint16_t C1NEG:1;
  uint16_t C2POS:1;
  uint16_t C2NEG:1;
  uint16_t C1INV:1;
  uint16_t C2INV:1;
  uint16_t C1OUT:1;
  uint16_t C2OUT:1;
  uint16_t C1OUTEN:1;
  uint16_t C2OUTEN:1;
  uint16_t C1EN:1;
  uint16_t C2EN:1;
  uint16_t C1EVT:1;
  uint16_t C2EVT:1;
  uint16_t :1;
  uint16_t CMIDL:1;
} CMCONBITS;
extern volatile CMCONBITS CMCONbits __attribute__((__sfr__));

#define CVRCON CVRCON
extern volatile uint16_t CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      uint16_t CVR:4;
      uint16_t CVRSS:1;
      uint16_t CVRR:1;
      uint16_t CVROE:1;
      uint16_t CVREN:1;
    };
    struct {
      uint16_t CVR0:1;
      uint16_t CVR1:1;
      uint16_t CVR2:1;
      uint16_t CVR3:1;
    };
  };
} CVRCONBITS;
extern volatile CVRCONBITS CVRCONbits __attribute__((__sfr__));

#define CRCCON CRCCON
extern volatile uint16_t CRCCON __attribute__((__sfr__));
__extension__ typedef struct tagCRCCONBITS {
  union {
    struct {
      uint16_t PLEN:4;
      uint16_t CRCGO:1;
      uint16_t :1;
      uint16_t CRCMPT:1;
      uint16_t CRCFUL:1;
      uint16_t VWORD:5;
      uint16_t CSIDL:1;
    };
    struct {
      uint16_t PLEN0:1;
      uint16_t PLEN1:1;
      uint16_t PLEN2:1;
      uint16_t PLEN3:1;
      uint16_t :4;
      uint16_t VWORD0:1;
      uint16_t VWORD1:1;
      uint16_t VWORD2:1;
      uint16_t VWORD3:1;
      uint16_t VWORD4:1;
    };
  };
} CRCCONBITS;
extern volatile CRCCONBITS CRCCONbits __attribute__((__sfr__));

#define CRCXOR CRCXOR
extern volatile uint16_t CRCXOR __attribute__((__sfr__));
#define CRCDAT CRCDAT
extern volatile uint16_t CRCDAT __attribute__((__sfr__));
#define CRCWDAT CRCWDAT
extern volatile uint16_t CRCWDAT __attribute__((__sfr__));
#define RPINR0 RPINR0
extern volatile uint16_t RPINR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR0BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t INT1R:5;
    };
    struct {
      uint16_t :8;
      uint16_t INT1R0:1;
      uint16_t INT1R1:1;
      uint16_t INT1R2:1;
      uint16_t INT1R3:1;
      uint16_t INT1R4:1;
    };
  };
} RPINR0BITS;
extern volatile RPINR0BITS RPINR0bits __attribute__((__sfr__));

#define RPINR1 RPINR1
extern volatile uint16_t RPINR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR1BITS {
  union {
    struct {
      uint16_t INT2R:5;
    };
    struct {
      uint16_t INT2R0:1;
      uint16_t INT2R1:1;
      uint16_t INT2R2:1;
      uint16_t INT2R3:1;
      uint16_t INT2R4:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR3 RPINR3
extern volatile uint16_t RPINR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR3BITS {
  union {
    struct {
      uint16_t T2CKR:5;
      uint16_t :3;
      uint16_t T3CKR:5;
    };
    struct {
      uint16_t T2CKR0:1;
      uint16_t T2CKR1:1;
      uint16_t T2CKR2:1;
      uint16_t T2CKR3:1;
      uint16_t T2CKR4:1;
      uint16_t :3;
      uint16_t T3CKR0:1;
      uint16_t T3CKR1:1;
      uint16_t T3CKR2:1;
      uint16_t T3CKR3:1;
      uint16_t T3CKR4:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR4 RPINR4
extern volatile uint16_t RPINR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR4BITS {
  union {
    struct {
      uint16_t T4CKR:5;
      uint16_t :3;
      uint16_t T5CKR:5;
    };
    struct {
      uint16_t T4CKR0:1;
      uint16_t T4CKR1:1;
      uint16_t T4CKR2:1;
      uint16_t T4CKR3:1;
      uint16_t T4CKR4:1;
      uint16_t :3;
      uint16_t T5CKR0:1;
      uint16_t T5CKR1:1;
      uint16_t T5CKR2:1;
      uint16_t T5CKR3:1;
      uint16_t T5CKR4:1;
    };
  };
} RPINR4BITS;
extern volatile RPINR4BITS RPINR4bits __attribute__((__sfr__));

#define RPINR7 RPINR7
extern volatile uint16_t RPINR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR7BITS {
  union {
    struct {
      uint16_t IC1R:5;
      uint16_t :3;
      uint16_t IC2R:5;
    };
    struct {
      uint16_t IC1R0:1;
      uint16_t IC1R1:1;
      uint16_t IC1R2:1;
      uint16_t IC1R3:1;
      uint16_t IC1R4:1;
      uint16_t :3;
      uint16_t IC2R0:1;
      uint16_t IC2R1:1;
      uint16_t IC2R2:1;
      uint16_t IC2R3:1;
      uint16_t IC2R4:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR10 RPINR10
extern volatile uint16_t RPINR10 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR10BITS {
  union {
    struct {
      uint16_t IC7R:5;
      uint16_t :3;
      uint16_t IC8R:5;
    };
    struct {
      uint16_t IC7R0:1;
      uint16_t IC7R1:1;
      uint16_t IC7R2:1;
      uint16_t IC7R3:1;
      uint16_t IC7R4:1;
      uint16_t :3;
      uint16_t IC8R0:1;
      uint16_t IC8R1:1;
      uint16_t IC8R2:1;
      uint16_t IC8R3:1;
      uint16_t IC8R4:1;
    };
  };
} RPINR10BITS;
extern volatile RPINR10BITS RPINR10bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile uint16_t RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      uint16_t OCFAR:5;
    };
    struct {
      uint16_t OCFAR0:1;
      uint16_t OCFAR1:1;
      uint16_t OCFAR2:1;
      uint16_t OCFAR3:1;
      uint16_t OCFAR4:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

#define RPINR12 RPINR12
extern volatile uint16_t RPINR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR12BITS {
  union {
    struct {
      uint16_t FLTA1R:5;
    };
    struct {
      uint16_t FLTA1R0:1;
      uint16_t FLTA1R1:1;
      uint16_t FLTA1R2:1;
      uint16_t FLTA1R3:1;
      uint16_t FLTA1R4:1;
    };
  };
} RPINR12BITS;
extern volatile RPINR12BITS RPINR12bits __attribute__((__sfr__));

#define RPINR13 RPINR13
extern volatile uint16_t RPINR13 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR13BITS {
  union {
    struct {
      uint16_t FLTA2R:5;
    };
    struct {
      uint16_t FLTA2R0:1;
      uint16_t FLTA2R1:1;
      uint16_t FLTA2R2:1;
      uint16_t FLTA2R3:1;
      uint16_t FLTA2R4:1;
    };
  };
} RPINR13BITS;
extern volatile RPINR13BITS RPINR13bits __attribute__((__sfr__));

#define RPINR14 RPINR14
extern volatile uint16_t RPINR14 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR14BITS {
  union {
    struct {
      uint16_t QEA1R:5;
      uint16_t :3;
      uint16_t QEB1R:5;
    };
    struct {
      uint16_t QEA1R0:1;
      uint16_t QEA1R1:1;
      uint16_t QEA1R2:1;
      uint16_t QEA1R3:1;
      uint16_t QEA1R4:1;
      uint16_t :3;
      uint16_t QEB1R0:1;
      uint16_t QEB1R1:1;
      uint16_t QEB1R2:1;
      uint16_t QEB1R3:1;
      uint16_t QEB1R4:1;
    };
  };
} RPINR14BITS;
extern volatile RPINR14BITS RPINR14bits __attribute__((__sfr__));

#define RPINR15 RPINR15
extern volatile uint16_t RPINR15 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR15BITS {
  union {
    struct {
      uint16_t INDX1R:5;
    };
    struct {
      uint16_t INDX1R0:1;
      uint16_t INDX1R1:1;
      uint16_t INDX1R2:1;
      uint16_t INDX1R3:1;
      uint16_t INDX1R4:1;
    };
  };
} RPINR15BITS;
extern volatile RPINR15BITS RPINR15bits __attribute__((__sfr__));

#define RPINR16 RPINR16
extern volatile uint16_t RPINR16 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR16BITS {
  union {
    struct {
      uint16_t QEA2R:5;
      uint16_t :3;
      uint16_t QEB2R:5;
    };
    struct {
      uint16_t QEA2R0:1;
      uint16_t QEA2R1:1;
      uint16_t QEA2R2:1;
      uint16_t QEA2R3:1;
      uint16_t QEA2R4:1;
      uint16_t :3;
      uint16_t QEB2R0:1;
      uint16_t QEB2R1:1;
      uint16_t QEB2R2:1;
      uint16_t QEB2R3:1;
      uint16_t QEB2R4:1;
    };
  };
} RPINR16BITS;
extern volatile RPINR16BITS RPINR16bits __attribute__((__sfr__));

#define RPINR17 RPINR17
extern volatile uint16_t RPINR17 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR17BITS {
  union {
    struct {
      uint16_t INDX2R:5;
    };
    struct {
      uint16_t INDX2R0:1;
      uint16_t INDX2R1:1;
      uint16_t INDX2R2:1;
      uint16_t INDX2R3:1;
      uint16_t INDX2R4:1;
    };
  };
} RPINR17BITS;
extern volatile RPINR17BITS RPINR17bits __attribute__((__sfr__));

#define RPINR18 RPINR18
extern volatile uint16_t RPINR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR18BITS {
  union {
    struct {
      uint16_t U1RXR:5;
      uint16_t :3;
      uint16_t U1CTSR:5;
    };
    struct {
      uint16_t U1RXR0:1;
      uint16_t U1RXR1:1;
      uint16_t U1RXR2:1;
      uint16_t U1RXR3:1;
      uint16_t U1RXR4:1;
      uint16_t :3;
      uint16_t U1CTSR0:1;
      uint16_t U1CTSR1:1;
      uint16_t U1CTSR2:1;
      uint16_t U1CTSR3:1;
      uint16_t U1CTSR4:1;
    };
  };
} RPINR18BITS;
extern volatile RPINR18BITS RPINR18bits __attribute__((__sfr__));

#define RPINR19 RPINR19
extern volatile uint16_t RPINR19 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR19BITS {
  union {
    struct {
      uint16_t U2RXR:5;
      uint16_t :3;
      uint16_t U2CTSR:5;
    };
    struct {
      uint16_t U2RXR0:1;
      uint16_t U2RXR1:1;
      uint16_t U2RXR2:1;
      uint16_t U2RXR3:1;
      uint16_t U2RXR4:1;
      uint16_t :3;
      uint16_t U2CTSR0:1;
      uint16_t U2CTSR1:1;
      uint16_t U2CTSR2:1;
      uint16_t U2CTSR3:1;
      uint16_t U2CTSR4:1;
    };
  };
} RPINR19BITS;
extern volatile RPINR19BITS RPINR19bits __attribute__((__sfr__));

#define RPINR20 RPINR20
extern volatile uint16_t RPINR20 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR20BITS {
  union {
    struct {
      uint16_t SDI1R:5;
      uint16_t :3;
      uint16_t SCK1R:5;
    };
    struct {
      uint16_t SDI1R0:1;
      uint16_t SDI1R1:1;
      uint16_t SDI1R2:1;
      uint16_t SDI1R3:1;
      uint16_t SDI1R4:1;
      uint16_t :3;
      uint16_t SCK1R0:1;
      uint16_t SCK1R1:1;
      uint16_t SCK1R2:1;
      uint16_t SCK1R3:1;
      uint16_t SCK1R4:1;
    };
  };
} RPINR20BITS;
extern volatile RPINR20BITS RPINR20bits __attribute__((__sfr__));

#define RPINR21 RPINR21
extern volatile uint16_t RPINR21 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR21BITS {
  union {
    struct {
      uint16_t SS1R:5;
    };
    struct {
      uint16_t SS1R0:1;
      uint16_t SS1R1:1;
      uint16_t SS1R2:1;
      uint16_t SS1R3:1;
      uint16_t SS1R4:1;
    };
  };
} RPINR21BITS;
extern volatile RPINR21BITS RPINR21bits __attribute__((__sfr__));

#define RPINR22 RPINR22
extern volatile uint16_t RPINR22 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR22BITS {
  union {
    struct {
      uint16_t SDI2R:5;
      uint16_t :3;
      uint16_t SCK2R:5;
    };
    struct {
      uint16_t SDI2R0:1;
      uint16_t SDI2R1:1;
      uint16_t SDI2R2:1;
      uint16_t SDI2R3:1;
      uint16_t SDI2R4:1;
      uint16_t :3;
      uint16_t SCK2R0:1;
      uint16_t SCK2R1:1;
      uint16_t SCK2R2:1;
      uint16_t SCK2R3:1;
      uint16_t SCK2R4:1;
    };
  };
} RPINR22BITS;
extern volatile RPINR22BITS RPINR22bits __attribute__((__sfr__));

#define RPINR23 RPINR23
extern volatile uint16_t RPINR23 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR23BITS {
  union {
    struct {
      uint16_t SS2R:5;
    };
    struct {
      uint16_t SS2R0:1;
      uint16_t SS2R1:1;
      uint16_t SS2R2:1;
      uint16_t SS2R3:1;
      uint16_t SS2R4:1;
    };
  };
} RPINR23BITS;
extern volatile RPINR23BITS RPINR23bits __attribute__((__sfr__));

#define RPINR26 RPINR26
extern volatile uint16_t RPINR26 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR26BITS {
  union {
    struct {
      uint16_t C1RXR:5;
    };
    struct {
      uint16_t C1RXR0:1;
      uint16_t C1RXR1:1;
      uint16_t C1RXR2:1;
      uint16_t C1RXR3:1;
      uint16_t C1RXR4:1;
    };
  };
} RPINR26BITS;
extern volatile RPINR26BITS RPINR26bits __attribute__((__sfr__));

#define RPOR0 RPOR0
extern volatile uint16_t RPOR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR0BITS {
  union {
    struct {
      uint16_t RP0R:5;
      uint16_t :3;
      uint16_t RP1R:5;
    };
    struct {
      uint16_t RP0R0:1;
      uint16_t RP0R1:1;
      uint16_t RP0R2:1;
      uint16_t RP0R3:1;
      uint16_t RP0R4:1;
      uint16_t :3;
      uint16_t RP1R0:1;
      uint16_t RP1R1:1;
      uint16_t RP1R2:1;
      uint16_t RP1R3:1;
      uint16_t RP1R4:1;
    };
  };
} RPOR0BITS;
extern volatile RPOR0BITS RPOR0bits __attribute__((__sfr__));

#define RPOR1 RPOR1
extern volatile uint16_t RPOR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR1BITS {
  union {
    struct {
      uint16_t RP2R:5;
      uint16_t :3;
      uint16_t RP3R:5;
    };
    struct {
      uint16_t RP2R0:1;
      uint16_t RP2R1:1;
      uint16_t RP2R2:1;
      uint16_t RP2R3:1;
      uint16_t RP2R4:1;
      uint16_t :3;
      uint16_t RP3R0:1;
      uint16_t RP3R1:1;
      uint16_t RP3R2:1;
      uint16_t RP3R3:1;
      uint16_t RP3R4:1;
    };
  };
} RPOR1BITS;
extern volatile RPOR1BITS RPOR1bits __attribute__((__sfr__));

#define RPOR2 RPOR2
extern volatile uint16_t RPOR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR2BITS {
  union {
    struct {
      uint16_t RP4R:5;
      uint16_t :3;
      uint16_t RP5R:5;
    };
    struct {
      uint16_t RP4R0:1;
      uint16_t RP4R1:1;
      uint16_t RP4R2:1;
      uint16_t RP4R3:1;
      uint16_t RP4R4:1;
      uint16_t :3;
      uint16_t RP5R0:1;
      uint16_t RP5R1:1;
      uint16_t RP5R2:1;
      uint16_t RP5R3:1;
      uint16_t RP5R4:1;
    };
  };
} RPOR2BITS;
extern volatile RPOR2BITS RPOR2bits __attribute__((__sfr__));

#define RPOR3 RPOR3
extern volatile uint16_t RPOR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR3BITS {
  union {
    struct {
      uint16_t RP6R:5;
      uint16_t :3;
      uint16_t RP7R:5;
    };
    struct {
      uint16_t RP6R0:1;
      uint16_t RP6R1:1;
      uint16_t RP6R2:1;
      uint16_t RP6R3:1;
      uint16_t RP6R4:1;
      uint16_t :3;
      uint16_t RP7R0:1;
      uint16_t RP7R1:1;
      uint16_t RP7R2:1;
      uint16_t RP7R3:1;
      uint16_t RP7R4:1;
    };
  };
} RPOR3BITS;
extern volatile RPOR3BITS RPOR3bits __attribute__((__sfr__));

#define RPOR4 RPOR4
extern volatile uint16_t RPOR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR4BITS {
  union {
    struct {
      uint16_t RP8R:5;
      uint16_t :3;
      uint16_t RP9R:5;
    };
    struct {
      uint16_t RP8R0:1;
      uint16_t RP8R1:1;
      uint16_t RP8R2:1;
      uint16_t RP8R3:1;
      uint16_t RP8R4:1;
      uint16_t :3;
      uint16_t RP9R0:1;
      uint16_t RP9R1:1;
      uint16_t RP9R2:1;
      uint16_t RP9R3:1;
      uint16_t RP9R4:1;
    };
  };
} RPOR4BITS;
extern volatile RPOR4BITS RPOR4bits __attribute__((__sfr__));

#define RPOR5 RPOR5
extern volatile uint16_t RPOR5 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR5BITS {
  union {
    struct {
      uint16_t RP10R:5;
      uint16_t :3;
      uint16_t RP11R:5;
    };
    struct {
      uint16_t RP10R0:1;
      uint16_t RP10R1:1;
      uint16_t RP10R2:1;
      uint16_t RP10R3:1;
      uint16_t RP10R4:1;
      uint16_t :3;
      uint16_t RP11R0:1;
      uint16_t RP11R1:1;
      uint16_t RP11R2:1;
      uint16_t RP11R3:1;
      uint16_t RP11R4:1;
    };
  };
} RPOR5BITS;
extern volatile RPOR5BITS RPOR5bits __attribute__((__sfr__));

#define RPOR6 RPOR6
extern volatile uint16_t RPOR6 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR6BITS {
  union {
    struct {
      uint16_t RP12R:5;
      uint16_t :3;
      uint16_t RP13R:5;
    };
    struct {
      uint16_t RP12R0:1;
      uint16_t RP12R1:1;
      uint16_t RP12R2:1;
      uint16_t RP12R3:1;
      uint16_t RP12R4:1;
      uint16_t :3;
      uint16_t RP13R0:1;
      uint16_t RP13R1:1;
      uint16_t RP13R2:1;
      uint16_t RP13R3:1;
      uint16_t RP13R4:1;
    };
  };
} RPOR6BITS;
extern volatile RPOR6BITS RPOR6bits __attribute__((__sfr__));

#define RPOR7 RPOR7
extern volatile uint16_t RPOR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR7BITS {
  union {
    struct {
      uint16_t RP14R:5;
      uint16_t :3;
      uint16_t RP15R:5;
    };
    struct {
      uint16_t RP14R0:1;
      uint16_t RP14R1:1;
      uint16_t RP14R2:1;
      uint16_t RP14R3:1;
      uint16_t RP14R4:1;
      uint16_t :3;
      uint16_t RP15R0:1;
      uint16_t RP15R1:1;
      uint16_t RP15R2:1;
      uint16_t RP15R3:1;
      uint16_t RP15R4:1;
    };
  };
} RPOR7BITS;
extern volatile RPOR7BITS RPOR7bits __attribute__((__sfr__));

#define RPOR8 RPOR8
extern volatile uint16_t RPOR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR8BITS {
  union {
    struct {
      uint16_t RP16R:5;
      uint16_t :3;
      uint16_t RP17R:5;
    };
    struct {
      uint16_t RP16R0:1;
      uint16_t RP16R1:1;
      uint16_t RP16R2:1;
      uint16_t RP16R3:1;
      uint16_t RP16R4:1;
      uint16_t :3;
      uint16_t RP17R0:1;
      uint16_t RP17R1:1;
      uint16_t RP17R2:1;
      uint16_t RP17R3:1;
      uint16_t RP17R4:1;
    };
  };
} RPOR8BITS;
extern volatile RPOR8BITS RPOR8bits __attribute__((__sfr__));

#define RPOR9 RPOR9
extern volatile uint16_t RPOR9 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR9BITS {
  union {
    struct {
      uint16_t RP18R:5;
      uint16_t :3;
      uint16_t RP19R:5;
    };
    struct {
      uint16_t RP18R0:1;
      uint16_t RP18R1:1;
      uint16_t RP18R2:1;
      uint16_t RP18R3:1;
      uint16_t RP18R4:1;
      uint16_t :3;
      uint16_t RP19R0:1;
      uint16_t RP19R1:1;
      uint16_t RP19R2:1;
      uint16_t RP19R3:1;
      uint16_t RP19R4:1;
    };
  };
} RPOR9BITS;
extern volatile RPOR9BITS RPOR9bits __attribute__((__sfr__));

#define RPOR10 RPOR10
extern volatile uint16_t RPOR10 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR10BITS {
  union {
    struct {
      uint16_t RP20R:5;
      uint16_t :3;
      uint16_t RP21R:5;
    };
    struct {
      uint16_t RP20R0:1;
      uint16_t RP20R1:1;
      uint16_t RP20R2:1;
      uint16_t RP20R3:1;
      uint16_t RP20R4:1;
      uint16_t :3;
      uint16_t RP21R0:1;
      uint16_t RP21R1:1;
      uint16_t RP21R2:1;
      uint16_t RP21R3:1;
      uint16_t RP21R4:1;
    };
  };
} RPOR10BITS;
extern volatile RPOR10BITS RPOR10bits __attribute__((__sfr__));

#define RPOR11 RPOR11
extern volatile uint16_t RPOR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR11BITS {
  union {
    struct {
      uint16_t RP22R:5;
      uint16_t :3;
      uint16_t RP23R:5;
    };
    struct {
      uint16_t RP22R0:1;
      uint16_t RP22R1:1;
      uint16_t RP22R2:1;
      uint16_t RP22R3:1;
      uint16_t RP22R4:1;
      uint16_t :3;
      uint16_t RP23R0:1;
      uint16_t RP23R1:1;
      uint16_t RP23R2:1;
      uint16_t RP23R3:1;
      uint16_t RP23R4:1;
    };
  };
} RPOR11BITS;
extern volatile RPOR11BITS RPOR11bits __attribute__((__sfr__));

#define RPOR12 RPOR12
extern volatile uint16_t RPOR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR12BITS {
  union {
    struct {
      uint16_t RP24R:5;
      uint16_t :3;
      uint16_t RP25R:5;
    };
    struct {
      uint16_t RP24R0:1;
      uint16_t RP24R1:1;
      uint16_t RP24R2:1;
      uint16_t RP24R3:1;
      uint16_t RP24R4:1;
      uint16_t :3;
      uint16_t RP25R0:1;
      uint16_t RP25R1:1;
      uint16_t RP25R2:1;
      uint16_t RP25R3:1;
      uint16_t RP25R4:1;
    };
  };
} RPOR12BITS;
extern volatile RPOR12BITS RPOR12bits __attribute__((__sfr__));

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
  uint16_t CM:1;
  uint16_t :4;
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
      uint16_t :1;
      uint16_t LOCK:1;
      uint16_t IOLOCK:1;
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
      uint16_t TUN4:1;
      uint16_t TUN5:1;
    };
  };
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

#define ACLKCON ACLKCON
extern volatile uint16_t ACLKCON __attribute__((__sfr__));
__extension__ typedef struct tagACLKCONBITS {
  union {
    struct {
      uint16_t :7;
      uint16_t ASRCSEL:1;
      uint16_t APSTSCLR:3;
      uint16_t AOSCMD:2;
      uint16_t SELACLK:1;
    };
    struct {
      uint16_t :8;
      uint16_t APSTSCLR0:1;
      uint16_t APSTSCLR1:1;
      uint16_t APSTSCLR2:1;
      uint16_t AOSCMD0:1;
      uint16_t AOSCMD1:1;
    };
  };
} ACLKCONBITS;
extern volatile ACLKCONBITS ACLKCONbits __attribute__((__sfr__));

#define BSRAM BSRAM
extern volatile uint16_t BSRAM __attribute__((__sfr__));
typedef struct tagBSRAMBITS {
  uint16_t RL_BSR:1;
  uint16_t IR_BSR:1;
  uint16_t IW_BSR:1;
} BSRAMBITS;
extern volatile BSRAMBITS BSRAMbits __attribute__((__sfr__));

#define SSRAM SSRAM
extern volatile uint16_t SSRAM __attribute__((__sfr__));
typedef struct tagSSRAMBITS {
  uint16_t RL_SSR:1;
  uint16_t IR_SSR:1;
  uint16_t IW_SSR:1;
} SSRAMBITS;
extern volatile SSRAMBITS SSRAMbits __attribute__((__sfr__));

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
  uint16_t AD1MD:1;
  uint16_t C1MD:1;
  uint16_t :1;
  uint16_t SPI1MD:1;
  uint16_t SPI2MD:1;
  uint16_t U1MD:1;
  uint16_t U2MD:1;
  uint16_t I2C1MD:1;
  uint16_t :1;
  uint16_t PWM1MD:1;
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
  uint16_t :4;
  uint16_t IC7MD:1;
  uint16_t IC8MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  uint16_t :4;
  uint16_t PWM2MD:1;
  uint16_t QEI2MD:1;
  uint16_t :1;
  uint16_t CRCMD:1;
  uint16_t PMPMD:1;
  uint16_t RTCCMD:1;
  uint16_t CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));



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
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE
#define _CN24IE CNEN2bits.CN24IE
#define _CN27IE CNEN2bits.CN27IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE
#define _CN24PUE CNPU2bits.CN24PUE
#define _CN27PUE CNPU2bits.CN27PUE
#define _CN29PUE CNPU2bits.CN29PUE
#define _CN30PUE CNPU2bits.CN30PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DMACERR INTCON1bits.DMACERR
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
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _DMA0IF IFS0bits.DMA0IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1EIF IFS0bits.SPI1EIF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF
#define _DMA1IF IFS0bits.DMA1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _IC7IF IFS1bits.IC7IF
#define _IC8IF IFS1bits.IC8IF
#define _DMA2IF IFS1bits.DMA2IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF
#define _SI2CIF IFS1bits.SI2CIF

/* IFS2 */
#define _SPI2EIF IFS2bits.SPI2EIF
#define _SPI2IF IFS2bits.SPI2IF
#define _C1RXIF IFS2bits.C1RXIF
#define _C1IF IFS2bits.C1IF
#define _DMA3IF IFS2bits.DMA3IF
#define _PMPIF IFS2bits.PMPIF
#define _DMA4IF IFS2bits.DMA4IF

/* IFS3 */
#define _PWM1IF IFS3bits.PWM1IF
#define _QEI1IF IFS3bits.QEI1IF
#define _DMA5IF IFS3bits.DMA5IF
#define _RTCIF IFS3bits.RTCIF
#define _FLTA1IF IFS3bits.FLTA1IF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _CRCIF IFS4bits.CRCIF
#define _DMA6IF IFS4bits.DMA6IF
#define _DMA7IF IFS4bits.DMA7IF
#define _C1TXIF IFS4bits.C1TXIF
#define _PWM2IF IFS4bits.PWM2IF
#define _FLTA2IF IFS4bits.FLTA2IF
#define _QEI2IF IFS4bits.QEI2IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _DMA0IE IEC0bits.DMA0IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1EIE IEC0bits.SPI1EIE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE
#define _DMA1IE IEC0bits.DMA1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _IC7IE IEC1bits.IC7IE
#define _IC8IE IEC1bits.IC8IE
#define _DMA2IE IEC1bits.DMA2IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE
#define _SI2CIE IEC1bits.SI2CIE

/* IEC2 */
#define _SPI2EIE IEC2bits.SPI2EIE
#define _SPI2IE IEC2bits.SPI2IE
#define _C1RXIE IEC2bits.C1RXIE
#define _C1IE IEC2bits.C1IE
#define _DMA3IE IEC2bits.DMA3IE
#define _PMPIE IEC2bits.PMPIE
#define _DMA4IE IEC2bits.DMA4IE

/* IEC3 */
#define _PWM1IE IEC3bits.PWM1IE
#define _QEI1IE IEC3bits.QEI1IE
#define _DMA5IE IEC3bits.DMA5IE
#define _RTCIE IEC3bits.RTCIE
#define _FLTA1IE IEC3bits.FLTA1IE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _CRCIE IEC4bits.CRCIE
#define _DMA6IE IEC4bits.DMA6IE
#define _DMA7IE IEC4bits.DMA7IE
#define _C1TXIE IEC4bits.C1TXIE
#define _PWM2IE IEC4bits.PWM2IE
#define _FLTA2IE IEC4bits.FLTA2IE
#define _QEI2IE IEC4bits.QEI2IE

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
#define _DMA0IP IPC1bits.DMA0IP
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _DMA0IP0 IPC1bits.DMA0IP0
#define _DMA0IP1 IPC1bits.DMA0IP1
#define _DMA0IP2 IPC1bits.DMA0IP2
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
#define _AD1IP IPC3bits.AD1IP
#define _DMA1IP IPC3bits.DMA1IP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _DMA1IP0 IPC3bits.DMA1IP0
#define _DMA1IP1 IPC3bits.DMA1IP1
#define _DMA1IP2 IPC3bits.DMA1IP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _CMIP0 IPC4bits.CMIP0
#define _CMIP1 IPC4bits.CMIP1
#define _CMIP2 IPC4bits.CMIP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _IC7IP IPC5bits.IC7IP
#define _IC8IP IPC5bits.IC8IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2
#define _IC7IP0 IPC5bits.IC7IP0
#define _IC7IP1 IPC5bits.IC7IP1
#define _IC7IP2 IPC5bits.IC7IP2
#define _IC8IP0 IPC5bits.IC8IP0
#define _IC8IP1 IPC5bits.IC8IP1
#define _IC8IP2 IPC5bits.IC8IP2

/* IPC6 */
#define _DMA2IP IPC6bits.DMA2IP
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
#define _DMA2IP0 IPC6bits.DMA2IP0
#define _DMA2IP1 IPC6bits.DMA2IP1
#define _DMA2IP2 IPC6bits.DMA2IP2
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
#define _C1RXIP IPC8bits.C1RXIP
#define _C1IP IPC8bits.C1IP
#define _SPI2EIP0 IPC8bits.SPI2EIP0
#define _SPI2EIP1 IPC8bits.SPI2EIP1
#define _SPI2EIP2 IPC8bits.SPI2EIP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2
#define _C1RXIP0 IPC8bits.C1RXIP0
#define _C1RXIP1 IPC8bits.C1RXIP1
#define _C1RXIP2 IPC8bits.C1RXIP2
#define _C1IP0 IPC8bits.C1IP0
#define _C1IP1 IPC8bits.C1IP1
#define _C1IP2 IPC8bits.C1IP2

/* IPC9 */
#define _DMA3IP IPC9bits.DMA3IP
#define _DMA3IP0 IPC9bits.DMA3IP0
#define _DMA3IP1 IPC9bits.DMA3IP1
#define _DMA3IP2 IPC9bits.DMA3IP2

/* IPC11 */
#define _PMPIP IPC11bits.PMPIP
#define _DMA4IP IPC11bits.DMA4IP
#define _PMPIP0 IPC11bits.PMPIP0
#define _PMPIP1 IPC11bits.PMPIP1
#define _PMPIP2 IPC11bits.PMPIP2
#define _DMA4IP0 IPC11bits.DMA4IP0
#define _DMA4IP1 IPC11bits.DMA4IP1
#define _DMA4IP2 IPC11bits.DMA4IP2

/* IPC14 */
#define _PWM1IP IPC14bits.PWM1IP
#define _QEI1IP IPC14bits.QEI1IP
#define _PWM1IP0 IPC14bits.PWM1IP0
#define _PWM1IP1 IPC14bits.PWM1IP1
#define _PWM1IP2 IPC14bits.PWM1IP2
#define _QEI1IP0 IPC14bits.QEI1IP0
#define _QEI1IP1 IPC14bits.QEI1IP1
#define _QEI1IP2 IPC14bits.QEI1IP2

/* IPC15 */
#define _DMA5IP IPC15bits.DMA5IP
#define _RTCIP IPC15bits.RTCIP
#define _FLTA1IP IPC15bits.FLTA1IP
#define _DMA5IP0 IPC15bits.DMA5IP0
#define _DMA5IP1 IPC15bits.DMA5IP1
#define _DMA5IP2 IPC15bits.DMA5IP2
#define _RTCIP0 IPC15bits.RTCIP0
#define _RTCIP1 IPC15bits.RTCIP1
#define _RTCIP2 IPC15bits.RTCIP2
#define _FLTA1IP0 IPC15bits.FLTA1IP0
#define _FLTA1IP1 IPC15bits.FLTA1IP1
#define _FLTA1IP2 IPC15bits.FLTA1IP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _CRCIP IPC16bits.CRCIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2
#define _CRCIP0 IPC16bits.CRCIP0
#define _CRCIP1 IPC16bits.CRCIP1
#define _CRCIP2 IPC16bits.CRCIP2

/* IPC17 */
#define _DMA6IP IPC17bits.DMA6IP
#define _DMA7IP IPC17bits.DMA7IP
#define _C1TXIP IPC17bits.C1TXIP
#define _DMA6IP0 IPC17bits.DMA6IP0
#define _DMA6IP1 IPC17bits.DMA6IP1
#define _DMA6IP2 IPC17bits.DMA6IP2
#define _DMA7IP0 IPC17bits.DMA7IP0
#define _DMA7IP1 IPC17bits.DMA7IP1
#define _DMA7IP2 IPC17bits.DMA7IP2
#define _C1TXIP0 IPC17bits.C1TXIP0
#define _C1TXIP1 IPC17bits.C1TXIP1
#define _C1TXIP2 IPC17bits.C1TXIP2

/* IPC18 */
#define _PWM2IP IPC18bits.PWM2IP
#define _FLTA2IP IPC18bits.FLTA2IP
#define _QEI2IP IPC18bits.QEI2IP
#define _PWM2IP0 IPC18bits.PWM2IP0
#define _PWM2IP1 IPC18bits.PWM2IP1
#define _PWM2IP2 IPC18bits.PWM2IP2
#define _FLTA2IP0 IPC18bits.FLTA2IP0
#define _FLTA2IP1 IPC18bits.FLTA2IP1
#define _FLTA2IP2 IPC18bits.FLTA2IP2
#define _QEI2IP0 IPC18bits.QEI2IP0
#define _QEI2IP1 IPC18bits.QEI2IP1
#define _QEI2IP2 IPC18bits.QEI2IP2

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

/* IC7CON */
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

/* IC8CON */
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

/* P1TCON */
#define _PTMOD P1TCONbits.PTMOD
#define _PTCKPS P1TCONbits.PTCKPS
#define _PTOPS P1TCONbits.PTOPS
#define _PTSIDL P1TCONbits.PTSIDL
/* Bitname _PTEN cannot be defined because it is used by more than one SFR */
#define _PTMOD0 P1TCONbits.PTMOD0
#define _PTMOD1 P1TCONbits.PTMOD1
#define _PTCKPS0 P1TCONbits.PTCKPS0
#define _PTCKPS1 P1TCONbits.PTCKPS1
#define _PTOPS0 P1TCONbits.PTOPS0
#define _PTOPS1 P1TCONbits.PTOPS1
#define _PTOPS2 P1TCONbits.PTOPS2
#define _PTOPS3 P1TCONbits.PTOPS3

/* P1TMR */
#define _PTMR P1TMRbits.PTMR
#define _PTDIR P1TMRbits.PTDIR

/* P1TPER */
#define _PTPER P1TPERbits.PTPER

/* P1SECMP */
#define _SEVTCMP P1SECMPbits.SEVTCMP
#define _SEVTDIR P1SECMPbits.SEVTDIR

/* PWM1CON1 */
#define _PEN1L PWM1CON1bits.PEN1L
#define _PEN2L PWM1CON1bits.PEN2L
#define _PEN3L PWM1CON1bits.PEN3L
#define _PEN1H PWM1CON1bits.PEN1H
#define _PEN2H PWM1CON1bits.PEN2H
#define _PEN3H PWM1CON1bits.PEN3H
#define _PMOD1 PWM1CON1bits.PMOD1
#define _PMOD2 PWM1CON1bits.PMOD2
#define _PMOD3 PWM1CON1bits.PMOD3

/* PWM1CON2 */
#define _UDIS PWM1CON2bits.UDIS
#define _OSYNC PWM1CON2bits.OSYNC
#define _IUE PWM1CON2bits.IUE
#define _SEVOPS PWM1CON2bits.SEVOPS
#define _SEVOPS0 PWM1CON2bits.SEVOPS0
#define _SEVOPS1 PWM1CON2bits.SEVOPS1
#define _SEVOPS2 PWM1CON2bits.SEVOPS2
#define _SEVOPS3 PWM1CON2bits.SEVOPS3

/* DTCON1 */
/* Bitname _DTA cannot be defined because it is used by more than one SFR */
/* Bitname _DTAPS cannot be defined because it is used by more than one SFR */
/* Bitname _DTB cannot be defined because it is used by more than one SFR */
/* Bitname _DTBPS cannot be defined because it is used by more than one SFR */
/* Bitname _DTA0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA1 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA2 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA3 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA4 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA5 cannot be defined because it is used by more than one SFR */
/* Bitname _DTAPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTAPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB1 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB2 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB3 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB4 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB5 cannot be defined because it is used by more than one SFR */
/* Bitname _DTBPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTBPS1 cannot be defined because it is used by more than one SFR */

/* DTCON2 */
/* Bitname _DTS1I cannot be defined because it is used by more than one SFR */
/* Bitname _DTS1A cannot be defined because it is used by more than one SFR */
#define _DTS2I DTCON2bits.DTS2I
#define _DTS2A DTCON2bits.DTS2A
#define _DTS3I DTCON2bits.DTS3I
#define _DTS3A DTCON2bits.DTS3A

/* FLTACON */
/* Bitname _FAEN1 cannot be defined because it is used by more than one SFR */
#define _FAEN2 FLTACONbits.FAEN2
#define _FAEN3 FLTACONbits.FAEN3
/* Bitname _FLTAM cannot be defined because it is used by more than one SFR */
/* Bitname _FAOV1L cannot be defined because it is used by more than one SFR */
/* Bitname _FAOV1H cannot be defined because it is used by more than one SFR */
#define _FAOV2L FLTACONbits.FAOV2L
#define _FAOV2H FLTACONbits.FAOV2H
#define _FAOV3L FLTACONbits.FAOV3L
#define _FAOV3H FLTACONbits.FAOV3H

/* OVDCON */
/* Bitname _POUT1L cannot be defined because it is used by more than one SFR */
/* Bitname _POUT1H cannot be defined because it is used by more than one SFR */
#define _POUT2L OVDCONbits.POUT2L
#define _POUT2H OVDCONbits.POUT2H
#define _POUT3L OVDCONbits.POUT3L
#define _POUT3H OVDCONbits.POUT3H
/* Bitname _POVD1L cannot be defined because it is used by more than one SFR */
/* Bitname _POVD1H cannot be defined because it is used by more than one SFR */
#define _POVD2L OVDCONbits.POVD2L
#define _POVD2H OVDCONbits.POVD2H
#define _POVD3L OVDCONbits.POVD3L
#define _POVD3H OVDCONbits.POVD3H

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
#define _BCL I2C1STATbits.BCL
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

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
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
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
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4

/* ODCA */
#define _ODCA0 ODCAbits.ODCA0
#define _ODCA1 ODCAbits.ODCA1
#define _ODCA2 ODCAbits.ODCA2
#define _ODCA3 ODCAbits.ODCA3
#define _ODCA4 ODCAbits.ODCA4

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

/* ODCB */
#define _ODCB0 ODCBbits.ODCB0
#define _ODCB1 ODCBbits.ODCB1
#define _ODCB2 ODCBbits.ODCB2
#define _ODCB3 ODCBbits.ODCB3
#define _ODCB4 ODCBbits.ODCB4
#define _ODCB5 ODCBbits.ODCB5
#define _ODCB6 ODCBbits.ODCB6
#define _ODCB7 ODCBbits.ODCB7
#define _ODCB8 ODCBbits.ODCB8
#define _ODCB9 ODCBbits.ODCB9
#define _ODCB10 ODCBbits.ODCB10
#define _ODCB11 ODCBbits.ODCB11
#define _ODCB12 ODCBbits.ODCB12
#define _ODCB13 ODCBbits.ODCB13
#define _ODCB14 ODCBbits.ODCB14
#define _ODCB15 ODCBbits.ODCB15

/* PADCFG1 */
#define _PMPTTL PADCFG1bits.PMPTTL
#define _RTSECSEL PADCFG1bits.RTSECSEL

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SIMSAM AD1CON1bits.SIMSAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
#define _AD12B AD1CON1bits.AD12B
#define _ADDMABM AD1CON1bits.ADDMABM
#define _ADSIDL AD1CON1bits.ADSIDL
#define _ADON AD1CON1bits.ADON
#define _SSRC0 AD1CON1bits.SSRC0
#define _SSRC1 AD1CON1bits.SSRC1
#define _SSRC2 AD1CON1bits.SSRC2
#define _FORM0 AD1CON1bits.FORM0
#define _FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define _ALTS AD1CON2bits.ALTS
#define _BUFM AD1CON2bits.BUFM
#define _SMPI AD1CON2bits.SMPI
#define _BUFS AD1CON2bits.BUFS
#define _CHPS AD1CON2bits.CHPS
#define _CSCNA AD1CON2bits.CSCNA
#define _VCFG AD1CON2bits.VCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _CHPS0 AD1CON2bits.CHPS0
#define _CHPS1 AD1CON2bits.CHPS1
#define _VCFG0 AD1CON2bits.VCFG0
#define _VCFG1 AD1CON2bits.VCFG1
#define _VCFG2 AD1CON2bits.VCFG2

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
#define _ADRC AD1CON3bits.ADRC
#define _ADCS0 AD1CON3bits.ADCS0
#define _ADCS1 AD1CON3bits.ADCS1
#define _ADCS2 AD1CON3bits.ADCS2
#define _ADCS3 AD1CON3bits.ADCS3
#define _ADCS4 AD1CON3bits.ADCS4
#define _ADCS5 AD1CON3bits.ADCS5
#define _ADCS6 AD1CON3bits.ADCS6
#define _ADCS7 AD1CON3bits.ADCS7
#define _SAMC0 AD1CON3bits.SAMC0
#define _SAMC1 AD1CON3bits.SAMC1
#define _SAMC2 AD1CON3bits.SAMC2
#define _SAMC3 AD1CON3bits.SAMC3
#define _SAMC4 AD1CON3bits.SAMC4

/* AD1CHS123 */
#define _CH123SA AD1CHS123bits.CH123SA
#define _CH123NA AD1CHS123bits.CH123NA
#define _CH123SB AD1CHS123bits.CH123SB
#define _CH123NB AD1CHS123bits.CH123NB
#define _CH123NA0 AD1CHS123bits.CH123NA0
#define _CH123NA1 AD1CHS123bits.CH123NA1
#define _CH123NB0 AD1CHS123bits.CH123NB0
#define _CH123NB1 AD1CHS123bits.CH123NB1

/* AD1CHS0 */
#define _CH0SA AD1CHS0bits.CH0SA
#define _CH0NA AD1CHS0bits.CH0NA
#define _CH0SB AD1CHS0bits.CH0SB
#define _CH0NB AD1CHS0bits.CH0NB
#define _CH0SA0 AD1CHS0bits.CH0SA0
#define _CH0SA1 AD1CHS0bits.CH0SA1
#define _CH0SA2 AD1CHS0bits.CH0SA2
#define _CH0SA3 AD1CHS0bits.CH0SA3
#define _CH0SA4 AD1CHS0bits.CH0SA4
#define _CH0SB0 AD1CHS0bits.CH0SB0
#define _CH0SB1 AD1CHS0bits.CH0SB1
#define _CH0SB2 AD1CHS0bits.CH0SB2
#define _CH0SB3 AD1CHS0bits.CH0SB3
#define _CH0SB4 AD1CHS0bits.CH0SB4

/* AD1PCFGL */
#define _PCFG0 AD1PCFGLbits.PCFG0
#define _PCFG1 AD1PCFGLbits.PCFG1
#define _PCFG2 AD1PCFGLbits.PCFG2
#define _PCFG3 AD1PCFGLbits.PCFG3
#define _PCFG4 AD1PCFGLbits.PCFG4
#define _PCFG5 AD1PCFGLbits.PCFG5

/* AD1CSSL */
#define _CSS0 AD1CSSLbits.CSS0
#define _CSS1 AD1CSSLbits.CSS1
#define _CSS2 AD1CSSLbits.CSS2
#define _CSS3 AD1CSSLbits.CSS3
#define _CSS4 AD1CSSLbits.CSS4
#define _CSS5 AD1CSSLbits.CSS5

/* AD1CON4 */
#define _DMABL AD1CON4bits.DMABL
#define _DMABL0 AD1CON4bits.DMABL0
#define _DMABL1 AD1CON4bits.DMABL1
#define _DMABL2 AD1CON4bits.DMABL2

/* DMA0CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
#define _AMODE DMA0CONbits.AMODE
#define _NULLW DMA0CONbits.NULLW
#define _HALF DMA0CONbits.HALF
#define _DIR DMA0CONbits.DIR
#define _SIZE DMA0CONbits.SIZE
#define _CHEN DMA0CONbits.CHEN
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
#define _AMODE0 DMA0CONbits.AMODE0
#define _AMODE1 DMA0CONbits.AMODE1

/* DMA0REQ */
#define _IRQSEL DMA0REQbits.IRQSEL
#define _FORCE DMA0REQbits.FORCE
#define _IRQSEL0 DMA0REQbits.IRQSEL0
#define _IRQSEL1 DMA0REQbits.IRQSEL1
#define _IRQSEL2 DMA0REQbits.IRQSEL2
#define _IRQSEL3 DMA0REQbits.IRQSEL3
#define _IRQSEL4 DMA0REQbits.IRQSEL4
#define _IRQSEL5 DMA0REQbits.IRQSEL5
#define _IRQSEL6 DMA0REQbits.IRQSEL6

/* DMA1CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA1REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA2CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA2REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA3CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA3REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA4CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA4REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA5CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA5REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA6CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA6REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA7CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA7REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMACS0 */
#define _XWCOL DMACS0bits.XWCOL
#define _PWCOL DMACS0bits.PWCOL
#define _XWCOL0 DMACS0bits.XWCOL0
#define _XWCOL1 DMACS0bits.XWCOL1
#define _XWCOL2 DMACS0bits.XWCOL2
#define _XWCOL3 DMACS0bits.XWCOL3
#define _XWCOL4 DMACS0bits.XWCOL4
#define _XWCOL5 DMACS0bits.XWCOL5
#define _XWCOL6 DMACS0bits.XWCOL6
#define _XWCOL7 DMACS0bits.XWCOL7
#define _PWCOL0 DMACS0bits.PWCOL0
#define _PWCOL1 DMACS0bits.PWCOL1
#define _PWCOL2 DMACS0bits.PWCOL2
#define _PWCOL3 DMACS0bits.PWCOL3
#define _PWCOL4 DMACS0bits.PWCOL4
#define _PWCOL5 DMACS0bits.PWCOL5
#define _PWCOL6 DMACS0bits.PWCOL6
#define _PWCOL7 DMACS0bits.PWCOL7

/* DMACS1 */
#define _PPST0 DMACS1bits.PPST0
#define _PPST1 DMACS1bits.PPST1
#define _PPST2 DMACS1bits.PPST2
#define _PPST3 DMACS1bits.PPST3
#define _PPST4 DMACS1bits.PPST4
#define _PPST5 DMACS1bits.PPST5
#define _PPST6 DMACS1bits.PPST6
#define _PPST7 DMACS1bits.PPST7
#define _LSTCH DMACS1bits.LSTCH
#define _PPST DMACS1bits.PPST
#define _LSTCH0 DMACS1bits.LSTCH0
#define _LSTCH1 DMACS1bits.LSTCH1
#define _LSTCH2 DMACS1bits.LSTCH2
#define _LSTCH3 DMACS1bits.LSTCH3

/* C1CTRL1 */
#define _WIN C1CTRL1bits.WIN
#define _CANCAP C1CTRL1bits.CANCAP
#define _OPMODE C1CTRL1bits.OPMODE
#define _REQOP C1CTRL1bits.REQOP
#define _CANCKS C1CTRL1bits.CANCKS
#define _ABAT C1CTRL1bits.ABAT
/* Bitname _CSIDL cannot be defined because it is used by more than one SFR */
#define _OPMODE0 C1CTRL1bits.OPMODE0
#define _OPMODE1 C1CTRL1bits.OPMODE1
#define _OPMODE2 C1CTRL1bits.OPMODE2
#define _REQOP0 C1CTRL1bits.REQOP0
#define _REQOP1 C1CTRL1bits.REQOP1
#define _REQOP2 C1CTRL1bits.REQOP2

/* C1CTRL2 */
#define _DNCNT C1CTRL2bits.DNCNT
#define _DNCNT0 C1CTRL2bits.DNCNT0
#define _DNCNT1 C1CTRL2bits.DNCNT1
#define _DNCNT2 C1CTRL2bits.DNCNT2
#define _DNCNT3 C1CTRL2bits.DNCNT3
#define _DNCNT4 C1CTRL2bits.DNCNT4

/* C1VEC */
#define _ICODE C1VECbits.ICODE
#define _FILHIT C1VECbits.FILHIT
#define _ICODE0 C1VECbits.ICODE0
#define _ICODE1 C1VECbits.ICODE1
#define _ICODE2 C1VECbits.ICODE2
#define _ICODE3 C1VECbits.ICODE3
#define _ICODE4 C1VECbits.ICODE4
#define _ICODE5 C1VECbits.ICODE5
#define _ICODE6 C1VECbits.ICODE6
#define _FILHIT0 C1VECbits.FILHIT0
#define _FILHIT1 C1VECbits.FILHIT1
#define _FILHIT2 C1VECbits.FILHIT2
#define _FILHIT3 C1VECbits.FILHIT3
#define _FILHIT4 C1VECbits.FILHIT4

/* C1FCTRL */
#define _FSA C1FCTRLbits.FSA
#define _DMABS C1FCTRLbits.DMABS
#define _FSA0 C1FCTRLbits.FSA0
#define _FSA1 C1FCTRLbits.FSA1
#define _FSA2 C1FCTRLbits.FSA2
#define _FSA3 C1FCTRLbits.FSA3
#define _FSA4 C1FCTRLbits.FSA4
#define _DMABS0 C1FCTRLbits.DMABS0
#define _DMABS1 C1FCTRLbits.DMABS1
#define _DMABS2 C1FCTRLbits.DMABS2

/* C1FIFO */
#define _FNRB C1FIFObits.FNRB
#define _FBP C1FIFObits.FBP
#define _FNRB0 C1FIFObits.FNRB0
#define _FNRB1 C1FIFObits.FNRB1
#define _FNRB2 C1FIFObits.FNRB2
#define _FNRB3 C1FIFObits.FNRB3
#define _FNRB4 C1FIFObits.FNRB4
#define _FNRB5 C1FIFObits.FNRB5
#define _FBP0 C1FIFObits.FBP0
#define _FBP1 C1FIFObits.FBP1
#define _FBP2 C1FIFObits.FBP2
#define _FBP3 C1FIFObits.FBP3
#define _FBP4 C1FIFObits.FBP4
#define _FBP5 C1FIFObits.FBP5

/* C1INTF */
#define _TBIF C1INTFbits.TBIF
#define _RBIF C1INTFbits.RBIF
#define _RBOVIF C1INTFbits.RBOVIF
#define _FIFOIF C1INTFbits.FIFOIF
#define _ERRIF C1INTFbits.ERRIF
#define _WAKIF C1INTFbits.WAKIF
#define _IVRIF C1INTFbits.IVRIF
#define _EWARN C1INTFbits.EWARN
#define _RXWAR C1INTFbits.RXWAR
#define _TXWAR C1INTFbits.TXWAR
#define _RXBP C1INTFbits.RXBP
#define _TXBP C1INTFbits.TXBP
#define _TXBO C1INTFbits.TXBO

/* C1INTE */
#define _TBIE C1INTEbits.TBIE
#define _RBIE C1INTEbits.RBIE
#define _RBOVIE C1INTEbits.RBOVIE
#define _FIFOIE C1INTEbits.FIFOIE
#define _ERRIE C1INTEbits.ERRIE
#define _WAKIE C1INTEbits.WAKIE
#define _IVRIE C1INTEbits.IVRIE

/* C1EC */
#define _RERRCNT C1ECbits.RERRCNT
#define _TERRCNT C1ECbits.TERRCNT
#define _RERRCNT0 C1ECbits.RERRCNT0
#define _RERRCNT1 C1ECbits.RERRCNT1
#define _RERRCNT2 C1ECbits.RERRCNT2
#define _RERRCNT3 C1ECbits.RERRCNT3
#define _RERRCNT4 C1ECbits.RERRCNT4
#define _RERRCNT5 C1ECbits.RERRCNT5
#define _RERRCNT6 C1ECbits.RERRCNT6
#define _RERRCNT7 C1ECbits.RERRCNT7
#define _TERRCNT0 C1ECbits.TERRCNT0
#define _TERRCNT1 C1ECbits.TERRCNT1
#define _TERRCNT2 C1ECbits.TERRCNT2
#define _TERRCNT3 C1ECbits.TERRCNT3
#define _TERRCNT4 C1ECbits.TERRCNT4
#define _TERRCNT5 C1ECbits.TERRCNT5
#define _TERRCNT6 C1ECbits.TERRCNT6
#define _TERRCNT7 C1ECbits.TERRCNT7

/* C1CFG1 */
#define _BRP C1CFG1bits.BRP
#define _SJW C1CFG1bits.SJW
#define _BRP0 C1CFG1bits.BRP0
#define _BRP1 C1CFG1bits.BRP1
#define _BRP2 C1CFG1bits.BRP2
#define _BRP3 C1CFG1bits.BRP3
#define _BRP4 C1CFG1bits.BRP4
#define _BRP5 C1CFG1bits.BRP5
#define _SJW0 C1CFG1bits.SJW0
#define _SJW1 C1CFG1bits.SJW1

/* C1CFG2 */
#define _PRSEG C1CFG2bits.PRSEG
#define _SEG1PH C1CFG2bits.SEG1PH
#define _SAM C1CFG2bits.SAM
#define _SEG2PHTS C1CFG2bits.SEG2PHTS
#define _SEG2PH C1CFG2bits.SEG2PH
#define _WAKFIL C1CFG2bits.WAKFIL
#define _PRSEG0 C1CFG2bits.PRSEG0
#define _PRSEG1 C1CFG2bits.PRSEG1
#define _PRSEG2 C1CFG2bits.PRSEG2
#define _SEG1PH0 C1CFG2bits.SEG1PH0
#define _SEG1PH1 C1CFG2bits.SEG1PH1
#define _SEG1PH2 C1CFG2bits.SEG1PH2
#define _SEG2PH0 C1CFG2bits.SEG2PH0
#define _SEG2PH1 C1CFG2bits.SEG2PH1
#define _SEG2PH2 C1CFG2bits.SEG2PH2

/* C1FEN1 */
#define _FLTEN C1FEN1bits.FLTEN
#define _FLTEN0 C1FEN1bits.FLTEN0
#define _FLTEN1 C1FEN1bits.FLTEN1
#define _FLTEN2 C1FEN1bits.FLTEN2
#define _FLTEN3 C1FEN1bits.FLTEN3
#define _FLTEN4 C1FEN1bits.FLTEN4
#define _FLTEN5 C1FEN1bits.FLTEN5
#define _FLTEN6 C1FEN1bits.FLTEN6
#define _FLTEN7 C1FEN1bits.FLTEN7
#define _FLTEN8 C1FEN1bits.FLTEN8
#define _FLTEN9 C1FEN1bits.FLTEN9
#define _FLTEN10 C1FEN1bits.FLTEN10
#define _FLTEN11 C1FEN1bits.FLTEN11
#define _FLTEN12 C1FEN1bits.FLTEN12
#define _FLTEN13 C1FEN1bits.FLTEN13
#define _FLTEN14 C1FEN1bits.FLTEN14
#define _FLTEN15 C1FEN1bits.FLTEN15

/* C1FMSKSEL1 */
#define _F0MSK C1FMSKSEL1bits.F0MSK
#define _F1MSK C1FMSKSEL1bits.F1MSK
#define _F2MSK C1FMSKSEL1bits.F2MSK
#define _F3MSK C1FMSKSEL1bits.F3MSK
#define _F4MSK C1FMSKSEL1bits.F4MSK
#define _F5MSK C1FMSKSEL1bits.F5MSK
#define _F6MSK C1FMSKSEL1bits.F6MSK
#define _F7MSK C1FMSKSEL1bits.F7MSK
#define _F0MSK0 C1FMSKSEL1bits.F0MSK0
#define _F0MSK1 C1FMSKSEL1bits.F0MSK1
#define _F1MSK0 C1FMSKSEL1bits.F1MSK0
#define _F1MSK1 C1FMSKSEL1bits.F1MSK1
#define _F2MSK0 C1FMSKSEL1bits.F2MSK0
#define _F2MSK1 C1FMSKSEL1bits.F2MSK1
#define _F3MSK0 C1FMSKSEL1bits.F3MSK0
#define _F3MSK1 C1FMSKSEL1bits.F3MSK1
#define _F4MSK0 C1FMSKSEL1bits.F4MSK0
#define _F4MSK1 C1FMSKSEL1bits.F4MSK1
#define _F5MSK0 C1FMSKSEL1bits.F5MSK0
#define _F5MSK1 C1FMSKSEL1bits.F5MSK1
#define _F6MSK0 C1FMSKSEL1bits.F6MSK0
#define _F6MSK1 C1FMSKSEL1bits.F6MSK1
#define _F7MSK0 C1FMSKSEL1bits.F7MSK0
#define _F7MSK1 C1FMSKSEL1bits.F7MSK1

/* C1FMSKSEL2 */
#define _F8MSK C1FMSKSEL2bits.F8MSK
#define _F9MSK C1FMSKSEL2bits.F9MSK
#define _F10MSK C1FMSKSEL2bits.F10MSK
#define _F11MSK C1FMSKSEL2bits.F11MSK
#define _F12MSK C1FMSKSEL2bits.F12MSK
#define _F13MSK C1FMSKSEL2bits.F13MSK
#define _F14MSK C1FMSKSEL2bits.F14MSK
#define _F15MSK C1FMSKSEL2bits.F15MSK
#define _F8MSK0 C1FMSKSEL2bits.F8MSK0
#define _F8MSK1 C1FMSKSEL2bits.F8MSK1
#define _F9MSK0 C1FMSKSEL2bits.F9MSK0
#define _F9MSK1 C1FMSKSEL2bits.F9MSK1
#define _F10MSK0 C1FMSKSEL2bits.F10MSK0
#define _F10MSK1 C1FMSKSEL2bits.F10MSK1
#define _F11MSK0 C1FMSKSEL2bits.F11MSK0
#define _F11MSK1 C1FMSKSEL2bits.F11MSK1
#define _F12MSK0 C1FMSKSEL2bits.F12MSK0
#define _F12MSK1 C1FMSKSEL2bits.F12MSK1
#define _F13MSK0 C1FMSKSEL2bits.F13MSK0
#define _F13MSK1 C1FMSKSEL2bits.F13MSK1
#define _F14MSK0 C1FMSKSEL2bits.F14MSK0
#define _F14MSK1 C1FMSKSEL2bits.F14MSK1
#define _F15MSK0 C1FMSKSEL2bits.F15MSK0
#define _F15MSK1 C1FMSKSEL2bits.F15MSK1

/* C1BUFPNT1 */
#define _F0BP C1BUFPNT1bits.F0BP
#define _F1BP C1BUFPNT1bits.F1BP
#define _F2BP C1BUFPNT1bits.F2BP
#define _F3BP C1BUFPNT1bits.F3BP
#define _F0BP0 C1BUFPNT1bits.F0BP0
#define _F0BP1 C1BUFPNT1bits.F0BP1
#define _F0BP2 C1BUFPNT1bits.F0BP2
#define _F0BP3 C1BUFPNT1bits.F0BP3
#define _F1BP0 C1BUFPNT1bits.F1BP0
#define _F1BP1 C1BUFPNT1bits.F1BP1
#define _F1BP2 C1BUFPNT1bits.F1BP2
#define _F1BP3 C1BUFPNT1bits.F1BP3
#define _F2BP0 C1BUFPNT1bits.F2BP0
#define _F2BP1 C1BUFPNT1bits.F2BP1
#define _F2BP2 C1BUFPNT1bits.F2BP2
#define _F2BP3 C1BUFPNT1bits.F2BP3
#define _F3BP0 C1BUFPNT1bits.F3BP0
#define _F3BP1 C1BUFPNT1bits.F3BP1
#define _F3BP2 C1BUFPNT1bits.F3BP2
#define _F3BP3 C1BUFPNT1bits.F3BP3

/* C1RXFUL1 */
#define _RXFUL0 C1RXFUL1bits.RXFUL0
#define _RXFUL1 C1RXFUL1bits.RXFUL1
#define _RXFUL2 C1RXFUL1bits.RXFUL2
#define _RXFUL3 C1RXFUL1bits.RXFUL3
#define _RXFUL4 C1RXFUL1bits.RXFUL4
#define _RXFUL5 C1RXFUL1bits.RXFUL5
#define _RXFUL6 C1RXFUL1bits.RXFUL6
#define _RXFUL7 C1RXFUL1bits.RXFUL7
#define _RXFUL8 C1RXFUL1bits.RXFUL8
#define _RXFUL9 C1RXFUL1bits.RXFUL9
#define _RXFUL10 C1RXFUL1bits.RXFUL10
#define _RXFUL11 C1RXFUL1bits.RXFUL11
#define _RXFUL12 C1RXFUL1bits.RXFUL12
#define _RXFUL13 C1RXFUL1bits.RXFUL13
#define _RXFUL14 C1RXFUL1bits.RXFUL14
#define _RXFUL15 C1RXFUL1bits.RXFUL15

/* C1BUFPNT2 */
#define _F4BP C1BUFPNT2bits.F4BP
#define _F5BP C1BUFPNT2bits.F5BP
#define _F6BP C1BUFPNT2bits.F6BP
#define _F7BP C1BUFPNT2bits.F7BP
#define _F4BP0 C1BUFPNT2bits.F4BP0
#define _F4BP1 C1BUFPNT2bits.F4BP1
#define _F4BP2 C1BUFPNT2bits.F4BP2
#define _F4BP3 C1BUFPNT2bits.F4BP3
#define _F5BP0 C1BUFPNT2bits.F5BP0
#define _F5BP1 C1BUFPNT2bits.F5BP1
#define _F5BP2 C1BUFPNT2bits.F5BP2
#define _F5BP3 C1BUFPNT2bits.F5BP3
#define _F6BP0 C1BUFPNT2bits.F6BP0
#define _F6BP1 C1BUFPNT2bits.F6BP1
#define _F6BP2 C1BUFPNT2bits.F6BP2
#define _F6BP3 C1BUFPNT2bits.F6BP3
#define _F7BP0 C1BUFPNT2bits.F7BP0
#define _F7BP1 C1BUFPNT2bits.F7BP1
#define _F7BP2 C1BUFPNT2bits.F7BP2
#define _F7BP3 C1BUFPNT2bits.F7BP3

/* C1RXFUL2 */
#define _RXFUL16 C1RXFUL2bits.RXFUL16
#define _RXFUL17 C1RXFUL2bits.RXFUL17
#define _RXFUL18 C1RXFUL2bits.RXFUL18
#define _RXFUL19 C1RXFUL2bits.RXFUL19
#define _RXFUL20 C1RXFUL2bits.RXFUL20
#define _RXFUL21 C1RXFUL2bits.RXFUL21
#define _RXFUL22 C1RXFUL2bits.RXFUL22
#define _RXFUL23 C1RXFUL2bits.RXFUL23
#define _RXFUL24 C1RXFUL2bits.RXFUL24
#define _RXFUL25 C1RXFUL2bits.RXFUL25
#define _RXFUL26 C1RXFUL2bits.RXFUL26
#define _RXFUL27 C1RXFUL2bits.RXFUL27
#define _RXFUL28 C1RXFUL2bits.RXFUL28
#define _RXFUL29 C1RXFUL2bits.RXFUL29
#define _RXFUL30 C1RXFUL2bits.RXFUL30
#define _RXFUL31 C1RXFUL2bits.RXFUL31

/* C1BUFPNT3 */
#define _F8BP C1BUFPNT3bits.F8BP
#define _F9BP C1BUFPNT3bits.F9BP
#define _F10BP C1BUFPNT3bits.F10BP
#define _F11BP C1BUFPNT3bits.F11BP
#define _F8BP0 C1BUFPNT3bits.F8BP0
#define _F8BP1 C1BUFPNT3bits.F8BP1
#define _F8BP2 C1BUFPNT3bits.F8BP2
#define _F8BP3 C1BUFPNT3bits.F8BP3
#define _F9BP0 C1BUFPNT3bits.F9BP0
#define _F9BP1 C1BUFPNT3bits.F9BP1
#define _F9BP2 C1BUFPNT3bits.F9BP2
#define _F9BP3 C1BUFPNT3bits.F9BP3
#define _F10BP0 C1BUFPNT3bits.F10BP0
#define _F10BP1 C1BUFPNT3bits.F10BP1
#define _F10BP2 C1BUFPNT3bits.F10BP2
#define _F10BP3 C1BUFPNT3bits.F10BP3
#define _F11BP0 C1BUFPNT3bits.F11BP0
#define _F11BP1 C1BUFPNT3bits.F11BP1
#define _F11BP2 C1BUFPNT3bits.F11BP2
#define _F11BP3 C1BUFPNT3bits.F11BP3

/* C1BUFPNT4 */
#define _F12BP C1BUFPNT4bits.F12BP
#define _F13BP C1BUFPNT4bits.F13BP
#define _F14BP C1BUFPNT4bits.F14BP
#define _F15BP C1BUFPNT4bits.F15BP
#define _F12BP0 C1BUFPNT4bits.F12BP0
#define _F12BP1 C1BUFPNT4bits.F12BP1
#define _F12BP2 C1BUFPNT4bits.F12BP2
#define _F12BP3 C1BUFPNT4bits.F12BP3
#define _F13BP0 C1BUFPNT4bits.F13BP0
#define _F13BP1 C1BUFPNT4bits.F13BP1
#define _F13BP2 C1BUFPNT4bits.F13BP2
#define _F13BP3 C1BUFPNT4bits.F13BP3
#define _F14BP0 C1BUFPNT4bits.F14BP0
#define _F14BP1 C1BUFPNT4bits.F14BP1
#define _F14BP2 C1BUFPNT4bits.F14BP2
#define _F14BP3 C1BUFPNT4bits.F14BP3
#define _F15BP0 C1BUFPNT4bits.F15BP0
#define _F15BP1 C1BUFPNT4bits.F15BP1
#define _F15BP2 C1BUFPNT4bits.F15BP2
#define _F15BP3 C1BUFPNT4bits.F15BP3

/* C1RXOVF1 */
#define _RXOVF0 C1RXOVF1bits.RXOVF0
#define _RXOVF1 C1RXOVF1bits.RXOVF1
#define _RXOVF2 C1RXOVF1bits.RXOVF2
#define _RXOVF3 C1RXOVF1bits.RXOVF3
#define _RXOVF4 C1RXOVF1bits.RXOVF4
#define _RXOVF5 C1RXOVF1bits.RXOVF5
#define _RXOVF6 C1RXOVF1bits.RXOVF6
#define _RXOVF7 C1RXOVF1bits.RXOVF7
#define _RXOVF8 C1RXOVF1bits.RXOVF8
#define _RXOVF9 C1RXOVF1bits.RXOVF9
#define _RXOVF10 C1RXOVF1bits.RXOVF10
#define _RXOVF11 C1RXOVF1bits.RXOVF11
#define _RXOVF12 C1RXOVF1bits.RXOVF12
#define _RXOVF13 C1RXOVF1bits.RXOVF13
#define _RXOVF14 C1RXOVF1bits.RXOVF14
#define _RXOVF15 C1RXOVF1bits.RXOVF15

/* C1RXOVF2 */
#define _RXOVF16 C1RXOVF2bits.RXOVF16
#define _RXOVF17 C1RXOVF2bits.RXOVF17
#define _RXOVF18 C1RXOVF2bits.RXOVF18
#define _RXOVF19 C1RXOVF2bits.RXOVF19
#define _RXOVF20 C1RXOVF2bits.RXOVF20
#define _RXOVF21 C1RXOVF2bits.RXOVF21
#define _RXOVF22 C1RXOVF2bits.RXOVF22
#define _RXOVF23 C1RXOVF2bits.RXOVF23
#define _RXOVF24 C1RXOVF2bits.RXOVF24
#define _RXOVF25 C1RXOVF2bits.RXOVF25
#define _RXOVF26 C1RXOVF2bits.RXOVF26
#define _RXOVF27 C1RXOVF2bits.RXOVF27
#define _RXOVF28 C1RXOVF2bits.RXOVF28
#define _RXOVF29 C1RXOVF2bits.RXOVF29
#define _RXOVF30 C1RXOVF2bits.RXOVF30
#define _RXOVF31 C1RXOVF2bits.RXOVF31

/* C1RXM0SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1TR01CON */
#define _TX0PRI C1TR01CONbits.TX0PRI
#define _RTREN0 C1TR01CONbits.RTREN0
#define _TXREQ0 C1TR01CONbits.TXREQ0
#define _TXERR0 C1TR01CONbits.TXERR0
#define _TXLARB0 C1TR01CONbits.TXLARB0
#define _TXABT0 C1TR01CONbits.TXABT0
#define _TXEN0 C1TR01CONbits.TXEN0
#define _TX1PRI C1TR01CONbits.TX1PRI
#define _RTREN1 C1TR01CONbits.RTREN1
#define _TXREQ1 C1TR01CONbits.TXREQ1
#define _TXERR1 C1TR01CONbits.TXERR1
#define _TXLARB1 C1TR01CONbits.TXLARB1
#define _TXABT1 C1TR01CONbits.TXABT1
#define _TXEN1 C1TR01CONbits.TXEN1
#define _TX0PRI0 C1TR01CONbits.TX0PRI0
#define _TX0PRI1 C1TR01CONbits.TX0PRI1
#define _TX1PRI0 C1TR01CONbits.TX1PRI0
#define _TX1PRI1 C1TR01CONbits.TX1PRI1

/* C1RXM0EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */

/* C1TR23CON */
#define _TX2PRI C1TR23CONbits.TX2PRI
#define _RTREN2 C1TR23CONbits.RTREN2
#define _TXREQ2 C1TR23CONbits.TXREQ2
#define _TXERR2 C1TR23CONbits.TXERR2
#define _TXLARB2 C1TR23CONbits.TXLARB2
#define _TXABT2 C1TR23CONbits.TXABT2
#define _TXEN2 C1TR23CONbits.TXEN2
#define _TX3PRI C1TR23CONbits.TX3PRI
#define _RTREN3 C1TR23CONbits.RTREN3
#define _TXREQ3 C1TR23CONbits.TXREQ3
#define _TXERR3 C1TR23CONbits.TXERR3
#define _TXLARB3 C1TR23CONbits.TXLARB3
#define _TXABT3 C1TR23CONbits.TXABT3
#define _TXEN3 C1TR23CONbits.TXEN3
#define _TX2PRI0 C1TR23CONbits.TX2PRI0
#define _TX2PRI1 C1TR23CONbits.TX2PRI1
#define _TX3PRI0 C1TR23CONbits.TX3PRI0
#define _TX3PRI1 C1TR23CONbits.TX3PRI1

/* C1RXM1SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1TR45CON */
#define _TX4PRI C1TR45CONbits.TX4PRI
#define _RTREN4 C1TR45CONbits.RTREN4
#define _TXREQ4 C1TR45CONbits.TXREQ4
#define _TXERR4 C1TR45CONbits.TXERR4
#define _TXLARB4 C1TR45CONbits.TXLARB4
#define _TXABT4 C1TR45CONbits.TXABT4
#define _TXEN4 C1TR45CONbits.TXEN4
#define _TX5PRI C1TR45CONbits.TX5PRI
#define _RTREN5 C1TR45CONbits.RTREN5
#define _TXREQ5 C1TR45CONbits.TXREQ5
#define _TXERR5 C1TR45CONbits.TXERR5
#define _TXLARB5 C1TR45CONbits.TXLARB5
#define _TXABT5 C1TR45CONbits.TXABT5
#define _TXEN5 C1TR45CONbits.TXEN5
#define _TX4PRI0 C1TR45CONbits.TX4PRI0
#define _TX4PRI1 C1TR45CONbits.TX4PRI1
#define _TX5PRI0 C1TR45CONbits.TX5PRI0
#define _TX5PRI1 C1TR45CONbits.TX5PRI1

/* C1RXM1EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */

/* C1TR67CON */
#define _TX6PRI C1TR67CONbits.TX6PRI
#define _RTREN6 C1TR67CONbits.RTREN6
#define _TXREQ6 C1TR67CONbits.TXREQ6
#define _TXERR6 C1TR67CONbits.TXERR6
#define _TXLARB6 C1TR67CONbits.TXLARB6
#define _TXABT6 C1TR67CONbits.TXABT6
#define _TXEN6 C1TR67CONbits.TXEN6
#define _TX7PRI C1TR67CONbits.TX7PRI
#define _RTREN7 C1TR67CONbits.RTREN7
#define _TXREQ7 C1TR67CONbits.TXREQ7
#define _TXERR7 C1TR67CONbits.TXERR7
#define _TXLARB7 C1TR67CONbits.TXLARB7
#define _TXABT7 C1TR67CONbits.TXABT7
#define _TXEN7 C1TR67CONbits.TXEN7
#define _TX6PRI0 C1TR67CONbits.TX6PRI0
#define _TX6PRI1 C1TR67CONbits.TX6PRI1
#define _TX7PRI0 C1TR67CONbits.TX7PRI0
#define _TX7PRI1 C1TR67CONbits.TX7PRI1

/* C1RXM2SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXM2EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */

/* C1RXF0SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF0EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF1SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF1EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF2SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF2EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF3SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF3EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF4SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF4EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF5SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF5EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF6SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF6EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF7SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF7EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF8SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF8EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF9SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF9EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF10SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF10EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF11SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF11EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF12SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF12EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF13SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF13EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF14SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF14EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF15SID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF15EID */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* P2TCON */
/* Bitname _PTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _PTCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _PTOPS cannot be defined because it is used by more than one SFR */
/* Bitname _PTSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _PTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _PTCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _PTCKPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _PTOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _PTOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _PTOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _PTOPS3 cannot be defined because it is used by more than one SFR */

/* P2TMR */
/* Bitname _PTMR cannot be defined because it is used by more than one SFR */
/* Bitname _PTDIR cannot be defined because it is used by more than one SFR */

/* P2TPER */
/* Bitname _PTPER cannot be defined because it is used by more than one SFR */

/* P2SECMP */
/* Bitname _SEVTCMP cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTDIR cannot be defined because it is used by more than one SFR */

/* PWM2CON1 */
/* Bitname _PEN1L cannot be defined because it is used by more than one SFR */
/* Bitname _PEN1H cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* PWM2CON2 */
/* Bitname _UDIS cannot be defined because it is used by more than one SFR */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _SEVOPS cannot be defined because it is used by more than one SFR */
/* Bitname _SEVOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVOPS3 cannot be defined because it is used by more than one SFR */

/* P2DTCON1 */
/* Bitname _DTA cannot be defined because it is used by more than one SFR */
/* Bitname _DTAPS cannot be defined because it is used by more than one SFR */
/* Bitname _DTB cannot be defined because it is used by more than one SFR */
/* Bitname _DTBPS cannot be defined because it is used by more than one SFR */
/* Bitname _DTA0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA1 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA2 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA3 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA4 cannot be defined because it is used by more than one SFR */
/* Bitname _DTA5 cannot be defined because it is used by more than one SFR */
/* Bitname _DTAPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTAPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB1 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB2 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB3 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB4 cannot be defined because it is used by more than one SFR */
/* Bitname _DTB5 cannot be defined because it is used by more than one SFR */
/* Bitname _DTBPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTBPS1 cannot be defined because it is used by more than one SFR */

/* P2DTCON2 */
/* Bitname _DTS1I cannot be defined because it is used by more than one SFR */
/* Bitname _DTS1A cannot be defined because it is used by more than one SFR */

/* P2FLTACON */
/* Bitname _FAEN1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTAM cannot be defined because it is used by more than one SFR */
/* Bitname _FAOV1L cannot be defined because it is used by more than one SFR */
/* Bitname _FAOV1H cannot be defined because it is used by more than one SFR */

/* P2OVDCON */
/* Bitname _POUT1L cannot be defined because it is used by more than one SFR */
/* Bitname _POUT1H cannot be defined because it is used by more than one SFR */
/* Bitname _POVD1L cannot be defined because it is used by more than one SFR */
/* Bitname _POVD1H cannot be defined because it is used by more than one SFR */

/* PMCON */
#define _RDSP PMCONbits.RDSP
#define _WRSP PMCONbits.WRSP
#define _BEP PMCONbits.BEP
#define _CS1P PMCONbits.CS1P
#define _ALP PMCONbits.ALP
#define _CSF PMCONbits.CSF
#define _PTRDEN PMCONbits.PTRDEN
#define _PTWREN PMCONbits.PTWREN
#define _PTBEEN PMCONbits.PTBEEN
#define _ADRMUX PMCONbits.ADRMUX
#define _PSIDL PMCONbits.PSIDL
#define _PMPEN PMCONbits.PMPEN
#define _CSF0 PMCONbits.CSF0
#define _CSF1 PMCONbits.CSF1
#define _ADRMUX0 PMCONbits.ADRMUX0
#define _ADRMUX1 PMCONbits.ADRMUX1

/* PMMODE */
#define _WAITE PMMODEbits.WAITE
#define _WAITM PMMODEbits.WAITM
#define _WAITB PMMODEbits.WAITB
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
#define _INCM PMMODEbits.INCM
#define _IRQM PMMODEbits.IRQM
#define _BUSY PMMODEbits.BUSY
#define _WAITE0 PMMODEbits.WAITE0
#define _WAITE1 PMMODEbits.WAITE1
#define _WAITM0 PMMODEbits.WAITM0
#define _WAITM1 PMMODEbits.WAITM1
#define _WAITM2 PMMODEbits.WAITM2
#define _WAITM3 PMMODEbits.WAITM3
#define _WAITB0 PMMODEbits.WAITB0
#define _WAITB1 PMMODEbits.WAITB1
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
#define _INCM0 PMMODEbits.INCM0
#define _INCM1 PMMODEbits.INCM1
#define _IRQM0 PMMODEbits.IRQM0
#define _IRQM1 PMMODEbits.IRQM1

/* PMADDR */
#define _ADDR PMADDRbits.ADDR
#define _CS1 PMADDRbits.CS1
#define _ADDR15 PMADDRbits.ADDR15
#define _ADDR0 PMADDRbits.ADDR0
#define _ADDR1 PMADDRbits.ADDR1
#define _ADDR2 PMADDRbits.ADDR2
#define _ADDR3 PMADDRbits.ADDR3
#define _ADDR4 PMADDRbits.ADDR4
#define _ADDR5 PMADDRbits.ADDR5
#define _ADDR6 PMADDRbits.ADDR6
#define _ADDR7 PMADDRbits.ADDR7
#define _ADDR8 PMADDRbits.ADDR8
#define _ADDR9 PMADDRbits.ADDR9
#define _ADDR10 PMADDRbits.ADDR10
#define _ADDR11 PMADDRbits.ADDR11
#define _ADDR12 PMADDRbits.ADDR12
#define _ADDR13 PMADDRbits.ADDR13

/* PMAEN */
/* Bitname _PTEN cannot be defined because it is used by more than one SFR */
#define _PTEN14 PMAENbits.PTEN14
#define _PTEN0 PMAENbits.PTEN0
#define _PTEN1 PMAENbits.PTEN1

/* PMSTAT */
#define _OB0E PMSTATbits.OB0E
#define _OB1E PMSTATbits.OB1E
#define _OB2E PMSTATbits.OB2E
#define _OB3E PMSTATbits.OB3E
#define _OBUF PMSTATbits.OBUF
#define _OBE PMSTATbits.OBE
#define _IB0F PMSTATbits.IB0F
#define _IB1F PMSTATbits.IB1F
#define _IB2F PMSTATbits.IB2F
#define _IB3F PMSTATbits.IB3F
#define _IBOV PMSTATbits.IBOV
#define _IBF PMSTATbits.IBF

/* ALCFGRPT */
#define _ARPT ALCFGRPTbits.ARPT
#define _ALRMPTR ALCFGRPTbits.ALRMPTR
#define _AMASK ALCFGRPTbits.AMASK
#define _CHIME ALCFGRPTbits.CHIME
#define _ALRMEN ALCFGRPTbits.ALRMEN
#define _ARPT0 ALCFGRPTbits.ARPT0
#define _ARPT1 ALCFGRPTbits.ARPT1
#define _ARPT2 ALCFGRPTbits.ARPT2
#define _ARPT3 ALCFGRPTbits.ARPT3
#define _ARPT4 ALCFGRPTbits.ARPT4
#define _ARPT5 ALCFGRPTbits.ARPT5
#define _ARPT6 ALCFGRPTbits.ARPT6
#define _ARPT7 ALCFGRPTbits.ARPT7
#define _ALRMPTR0 ALCFGRPTbits.ALRMPTR0
#define _ALRMPTR1 ALCFGRPTbits.ALRMPTR1
#define _AMASK0 ALCFGRPTbits.AMASK0
#define _AMASK1 ALCFGRPTbits.AMASK1
#define _AMASK2 ALCFGRPTbits.AMASK2
#define _AMASK3 ALCFGRPTbits.AMASK3

/* RCFGCAL */
#define _CAL RCFGCALbits.CAL
#define _RTCPTR RCFGCALbits.RTCPTR
#define _RTCOE RCFGCALbits.RTCOE
#define _HALFSEC RCFGCALbits.HALFSEC
#define _RTCSYNC RCFGCALbits.RTCSYNC
#define _RTCWREN RCFGCALbits.RTCWREN
#define _RTCEN RCFGCALbits.RTCEN
#define _CAL0 RCFGCALbits.CAL0
#define _CAL1 RCFGCALbits.CAL1
#define _CAL2 RCFGCALbits.CAL2
#define _CAL3 RCFGCALbits.CAL3
#define _CAL4 RCFGCALbits.CAL4
#define _CAL5 RCFGCALbits.CAL5
#define _CAL6 RCFGCALbits.CAL6
#define _CAL7 RCFGCALbits.CAL7
#define _RTCPTR0 RCFGCALbits.RTCPTR0
#define _RTCPTR1 RCFGCALbits.RTCPTR1

/* CMCON */
#define _C1POS CMCONbits.C1POS
#define _C1NEG CMCONbits.C1NEG
#define _C2POS CMCONbits.C2POS
#define _C2NEG CMCONbits.C2NEG
#define _C1INV CMCONbits.C1INV
#define _C2INV CMCONbits.C2INV
#define _C1OUT CMCONbits.C1OUT
#define _C2OUT CMCONbits.C2OUT
#define _C1OUTEN CMCONbits.C1OUTEN
#define _C2OUTEN CMCONbits.C2OUTEN
#define _C1EN CMCONbits.C1EN
#define _C2EN CMCONbits.C2EN
#define _C1EVT CMCONbits.C1EVT
#define _C2EVT CMCONbits.C2EVT
#define _CMIDL CMCONbits.CMIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRSS CVRCONbits.CVRSS
#define _CVRR CVRCONbits.CVRR
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3

/* CRCCON */
#define _PLEN CRCCONbits.PLEN
#define _CRCGO CRCCONbits.CRCGO
#define _CRCMPT CRCCONbits.CRCMPT
#define _CRCFUL CRCCONbits.CRCFUL
#define _VWORD CRCCONbits.VWORD
/* Bitname _CSIDL cannot be defined because it is used by more than one SFR */
#define _PLEN0 CRCCONbits.PLEN0
#define _PLEN1 CRCCONbits.PLEN1
#define _PLEN2 CRCCONbits.PLEN2
#define _PLEN3 CRCCONbits.PLEN3
#define _VWORD0 CRCCONbits.VWORD0
#define _VWORD1 CRCCONbits.VWORD1
#define _VWORD2 CRCCONbits.VWORD2
#define _VWORD3 CRCCONbits.VWORD3
#define _VWORD4 CRCCONbits.VWORD4

/* RPINR0 */
#define _INT1R RPINR0bits.INT1R
#define _INT1R0 RPINR0bits.INT1R0
#define _INT1R1 RPINR0bits.INT1R1
#define _INT1R2 RPINR0bits.INT1R2
#define _INT1R3 RPINR0bits.INT1R3
#define _INT1R4 RPINR0bits.INT1R4

/* RPINR1 */
#define _INT2R RPINR1bits.INT2R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T3CKR RPINR3bits.T3CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T3CKR0 RPINR3bits.T3CKR0
#define _T3CKR1 RPINR3bits.T3CKR1
#define _T3CKR2 RPINR3bits.T3CKR2
#define _T3CKR3 RPINR3bits.T3CKR3
#define _T3CKR4 RPINR3bits.T3CKR4

/* RPINR4 */
#define _T4CKR RPINR4bits.T4CKR
#define _T5CKR RPINR4bits.T5CKR
#define _T4CKR0 RPINR4bits.T4CKR0
#define _T4CKR1 RPINR4bits.T4CKR1
#define _T4CKR2 RPINR4bits.T4CKR2
#define _T4CKR3 RPINR4bits.T4CKR3
#define _T4CKR4 RPINR4bits.T4CKR4
#define _T5CKR0 RPINR4bits.T5CKR0
#define _T5CKR1 RPINR4bits.T5CKR1
#define _T5CKR2 RPINR4bits.T5CKR2
#define _T5CKR3 RPINR4bits.T5CKR3
#define _T5CKR4 RPINR4bits.T5CKR4

/* RPINR7 */
#define _IC1R RPINR7bits.IC1R
#define _IC2R RPINR7bits.IC2R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC2R0 RPINR7bits.IC2R0
#define _IC2R1 RPINR7bits.IC2R1
#define _IC2R2 RPINR7bits.IC2R2
#define _IC2R3 RPINR7bits.IC2R3
#define _IC2R4 RPINR7bits.IC2R4

/* RPINR10 */
#define _IC7R RPINR10bits.IC7R
#define _IC8R RPINR10bits.IC8R
#define _IC7R0 RPINR10bits.IC7R0
#define _IC7R1 RPINR10bits.IC7R1
#define _IC7R2 RPINR10bits.IC7R2
#define _IC7R3 RPINR10bits.IC7R3
#define _IC7R4 RPINR10bits.IC7R4
#define _IC8R0 RPINR10bits.IC8R0
#define _IC8R1 RPINR10bits.IC8R1
#define _IC8R2 RPINR10bits.IC8R2
#define _IC8R3 RPINR10bits.IC8R3
#define _IC8R4 RPINR10bits.IC8R4

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4

/* RPINR12 */
#define _FLTA1R RPINR12bits.FLTA1R
#define _FLTA1R0 RPINR12bits.FLTA1R0
#define _FLTA1R1 RPINR12bits.FLTA1R1
#define _FLTA1R2 RPINR12bits.FLTA1R2
#define _FLTA1R3 RPINR12bits.FLTA1R3
#define _FLTA1R4 RPINR12bits.FLTA1R4

/* RPINR13 */
#define _FLTA2R RPINR13bits.FLTA2R
#define _FLTA2R0 RPINR13bits.FLTA2R0
#define _FLTA2R1 RPINR13bits.FLTA2R1
#define _FLTA2R2 RPINR13bits.FLTA2R2
#define _FLTA2R3 RPINR13bits.FLTA2R3
#define _FLTA2R4 RPINR13bits.FLTA2R4

/* RPINR14 */
#define _QEA1R RPINR14bits.QEA1R
#define _QEB1R RPINR14bits.QEB1R
#define _QEA1R0 RPINR14bits.QEA1R0
#define _QEA1R1 RPINR14bits.QEA1R1
#define _QEA1R2 RPINR14bits.QEA1R2
#define _QEA1R3 RPINR14bits.QEA1R3
#define _QEA1R4 RPINR14bits.QEA1R4
#define _QEB1R0 RPINR14bits.QEB1R0
#define _QEB1R1 RPINR14bits.QEB1R1
#define _QEB1R2 RPINR14bits.QEB1R2
#define _QEB1R3 RPINR14bits.QEB1R3
#define _QEB1R4 RPINR14bits.QEB1R4

/* RPINR15 */
#define _INDX1R RPINR15bits.INDX1R
#define _INDX1R0 RPINR15bits.INDX1R0
#define _INDX1R1 RPINR15bits.INDX1R1
#define _INDX1R2 RPINR15bits.INDX1R2
#define _INDX1R3 RPINR15bits.INDX1R3
#define _INDX1R4 RPINR15bits.INDX1R4

/* RPINR16 */
#define _QEA2R RPINR16bits.QEA2R
#define _QEB2R RPINR16bits.QEB2R
#define _QEA2R0 RPINR16bits.QEA2R0
#define _QEA2R1 RPINR16bits.QEA2R1
#define _QEA2R2 RPINR16bits.QEA2R2
#define _QEA2R3 RPINR16bits.QEA2R3
#define _QEA2R4 RPINR16bits.QEA2R4
#define _QEB2R0 RPINR16bits.QEB2R0
#define _QEB2R1 RPINR16bits.QEB2R1
#define _QEB2R2 RPINR16bits.QEB2R2
#define _QEB2R3 RPINR16bits.QEB2R3
#define _QEB2R4 RPINR16bits.QEB2R4

/* RPINR17 */
#define _INDX2R RPINR17bits.INDX2R
#define _INDX2R0 RPINR17bits.INDX2R0
#define _INDX2R1 RPINR17bits.INDX2R1
#define _INDX2R2 RPINR17bits.INDX2R2
#define _INDX2R3 RPINR17bits.INDX2R3
#define _INDX2R4 RPINR17bits.INDX2R4

/* RPINR18 */
#define _U1RXR RPINR18bits.U1RXR
#define _U1CTSR RPINR18bits.U1CTSR
#define _U1RXR0 RPINR18bits.U1RXR0
#define _U1RXR1 RPINR18bits.U1RXR1
#define _U1RXR2 RPINR18bits.U1RXR2
#define _U1RXR3 RPINR18bits.U1RXR3
#define _U1RXR4 RPINR18bits.U1RXR4
#define _U1CTSR0 RPINR18bits.U1CTSR0
#define _U1CTSR1 RPINR18bits.U1CTSR1
#define _U1CTSR2 RPINR18bits.U1CTSR2
#define _U1CTSR3 RPINR18bits.U1CTSR3
#define _U1CTSR4 RPINR18bits.U1CTSR4

/* RPINR19 */
#define _U2RXR RPINR19bits.U2RXR
#define _U2CTSR RPINR19bits.U2CTSR
#define _U2RXR0 RPINR19bits.U2RXR0
#define _U2RXR1 RPINR19bits.U2RXR1
#define _U2RXR2 RPINR19bits.U2RXR2
#define _U2RXR3 RPINR19bits.U2RXR3
#define _U2RXR4 RPINR19bits.U2RXR4
#define _U2CTSR0 RPINR19bits.U2CTSR0
#define _U2CTSR1 RPINR19bits.U2CTSR1
#define _U2CTSR2 RPINR19bits.U2CTSR2
#define _U2CTSR3 RPINR19bits.U2CTSR3
#define _U2CTSR4 RPINR19bits.U2CTSR4

/* RPINR20 */
#define _SDI1R RPINR20bits.SDI1R
#define _SCK1R RPINR20bits.SCK1R
#define _SDI1R0 RPINR20bits.SDI1R0
#define _SDI1R1 RPINR20bits.SDI1R1
#define _SDI1R2 RPINR20bits.SDI1R2
#define _SDI1R3 RPINR20bits.SDI1R3
#define _SDI1R4 RPINR20bits.SDI1R4
#define _SCK1R0 RPINR20bits.SCK1R0
#define _SCK1R1 RPINR20bits.SCK1R1
#define _SCK1R2 RPINR20bits.SCK1R2
#define _SCK1R3 RPINR20bits.SCK1R3
#define _SCK1R4 RPINR20bits.SCK1R4

/* RPINR21 */
#define _SS1R RPINR21bits.SS1R
#define _SS1R0 RPINR21bits.SS1R0
#define _SS1R1 RPINR21bits.SS1R1
#define _SS1R2 RPINR21bits.SS1R2
#define _SS1R3 RPINR21bits.SS1R3
#define _SS1R4 RPINR21bits.SS1R4

/* RPINR22 */
#define _SDI2R RPINR22bits.SDI2R
#define _SCK2R RPINR22bits.SCK2R
#define _SDI2R0 RPINR22bits.SDI2R0
#define _SDI2R1 RPINR22bits.SDI2R1
#define _SDI2R2 RPINR22bits.SDI2R2
#define _SDI2R3 RPINR22bits.SDI2R3
#define _SDI2R4 RPINR22bits.SDI2R4
#define _SCK2R0 RPINR22bits.SCK2R0
#define _SCK2R1 RPINR22bits.SCK2R1
#define _SCK2R2 RPINR22bits.SCK2R2
#define _SCK2R3 RPINR22bits.SCK2R3
#define _SCK2R4 RPINR22bits.SCK2R4

/* RPINR23 */
#define _SS2R RPINR23bits.SS2R
#define _SS2R0 RPINR23bits.SS2R0
#define _SS2R1 RPINR23bits.SS2R1
#define _SS2R2 RPINR23bits.SS2R2
#define _SS2R3 RPINR23bits.SS2R3
#define _SS2R4 RPINR23bits.SS2R4

/* RPINR26 */
#define _C1RXR RPINR26bits.C1RXR
#define _C1RXR0 RPINR26bits.C1RXR0
#define _C1RXR1 RPINR26bits.C1RXR1
#define _C1RXR2 RPINR26bits.C1RXR2
#define _C1RXR3 RPINR26bits.C1RXR3
#define _C1RXR4 RPINR26bits.C1RXR4

/* RPOR0 */
#define _RP0R RPOR0bits.RP0R
#define _RP1R RPOR0bits.RP1R
#define _RP0R0 RPOR0bits.RP0R0
#define _RP0R1 RPOR0bits.RP0R1
#define _RP0R2 RPOR0bits.RP0R2
#define _RP0R3 RPOR0bits.RP0R3
#define _RP0R4 RPOR0bits.RP0R4
#define _RP1R0 RPOR0bits.RP1R0
#define _RP1R1 RPOR0bits.RP1R1
#define _RP1R2 RPOR0bits.RP1R2
#define _RP1R3 RPOR0bits.RP1R3
#define _RP1R4 RPOR0bits.RP1R4

/* RPOR1 */
#define _RP2R RPOR1bits.RP2R
#define _RP3R RPOR1bits.RP3R
#define _RP2R0 RPOR1bits.RP2R0
#define _RP2R1 RPOR1bits.RP2R1
#define _RP2R2 RPOR1bits.RP2R2
#define _RP2R3 RPOR1bits.RP2R3
#define _RP2R4 RPOR1bits.RP2R4
#define _RP3R0 RPOR1bits.RP3R0
#define _RP3R1 RPOR1bits.RP3R1
#define _RP3R2 RPOR1bits.RP3R2
#define _RP3R3 RPOR1bits.RP3R3
#define _RP3R4 RPOR1bits.RP3R4

/* RPOR2 */
#define _RP4R RPOR2bits.RP4R
#define _RP5R RPOR2bits.RP5R
#define _RP4R0 RPOR2bits.RP4R0
#define _RP4R1 RPOR2bits.RP4R1
#define _RP4R2 RPOR2bits.RP4R2
#define _RP4R3 RPOR2bits.RP4R3
#define _RP4R4 RPOR2bits.RP4R4
#define _RP5R0 RPOR2bits.RP5R0
#define _RP5R1 RPOR2bits.RP5R1
#define _RP5R2 RPOR2bits.RP5R2
#define _RP5R3 RPOR2bits.RP5R3
#define _RP5R4 RPOR2bits.RP5R4

/* RPOR3 */
#define _RP6R RPOR3bits.RP6R
#define _RP7R RPOR3bits.RP7R
#define _RP6R0 RPOR3bits.RP6R0
#define _RP6R1 RPOR3bits.RP6R1
#define _RP6R2 RPOR3bits.RP6R2
#define _RP6R3 RPOR3bits.RP6R3
#define _RP6R4 RPOR3bits.RP6R4
#define _RP7R0 RPOR3bits.RP7R0
#define _RP7R1 RPOR3bits.RP7R1
#define _RP7R2 RPOR3bits.RP7R2
#define _RP7R3 RPOR3bits.RP7R3
#define _RP7R4 RPOR3bits.RP7R4

/* RPOR4 */
#define _RP8R RPOR4bits.RP8R
#define _RP9R RPOR4bits.RP9R
#define _RP8R0 RPOR4bits.RP8R0
#define _RP8R1 RPOR4bits.RP8R1
#define _RP8R2 RPOR4bits.RP8R2
#define _RP8R3 RPOR4bits.RP8R3
#define _RP8R4 RPOR4bits.RP8R4
#define _RP9R0 RPOR4bits.RP9R0
#define _RP9R1 RPOR4bits.RP9R1
#define _RP9R2 RPOR4bits.RP9R2
#define _RP9R3 RPOR4bits.RP9R3
#define _RP9R4 RPOR4bits.RP9R4

/* RPOR5 */
#define _RP10R RPOR5bits.RP10R
#define _RP11R RPOR5bits.RP11R
#define _RP10R0 RPOR5bits.RP10R0
#define _RP10R1 RPOR5bits.RP10R1
#define _RP10R2 RPOR5bits.RP10R2
#define _RP10R3 RPOR5bits.RP10R3
#define _RP10R4 RPOR5bits.RP10R4
#define _RP11R0 RPOR5bits.RP11R0
#define _RP11R1 RPOR5bits.RP11R1
#define _RP11R2 RPOR5bits.RP11R2
#define _RP11R3 RPOR5bits.RP11R3
#define _RP11R4 RPOR5bits.RP11R4

/* RPOR6 */
#define _RP12R RPOR6bits.RP12R
#define _RP13R RPOR6bits.RP13R
#define _RP12R0 RPOR6bits.RP12R0
#define _RP12R1 RPOR6bits.RP12R1
#define _RP12R2 RPOR6bits.RP12R2
#define _RP12R3 RPOR6bits.RP12R3
#define _RP12R4 RPOR6bits.RP12R4
#define _RP13R0 RPOR6bits.RP13R0
#define _RP13R1 RPOR6bits.RP13R1
#define _RP13R2 RPOR6bits.RP13R2
#define _RP13R3 RPOR6bits.RP13R3
#define _RP13R4 RPOR6bits.RP13R4

/* RPOR7 */
#define _RP14R RPOR7bits.RP14R
#define _RP15R RPOR7bits.RP15R
#define _RP14R0 RPOR7bits.RP14R0
#define _RP14R1 RPOR7bits.RP14R1
#define _RP14R2 RPOR7bits.RP14R2
#define _RP14R3 RPOR7bits.RP14R3
#define _RP14R4 RPOR7bits.RP14R4
#define _RP15R0 RPOR7bits.RP15R0
#define _RP15R1 RPOR7bits.RP15R1
#define _RP15R2 RPOR7bits.RP15R2
#define _RP15R3 RPOR7bits.RP15R3
#define _RP15R4 RPOR7bits.RP15R4

/* RPOR8 */
#define _RP16R RPOR8bits.RP16R
#define _RP17R RPOR8bits.RP17R
#define _RP16R0 RPOR8bits.RP16R0
#define _RP16R1 RPOR8bits.RP16R1
#define _RP16R2 RPOR8bits.RP16R2
#define _RP16R3 RPOR8bits.RP16R3
#define _RP16R4 RPOR8bits.RP16R4
#define _RP17R0 RPOR8bits.RP17R0
#define _RP17R1 RPOR8bits.RP17R1
#define _RP17R2 RPOR8bits.RP17R2
#define _RP17R3 RPOR8bits.RP17R3
#define _RP17R4 RPOR8bits.RP17R4

/* RPOR9 */
#define _RP18R RPOR9bits.RP18R
#define _RP19R RPOR9bits.RP19R
#define _RP18R0 RPOR9bits.RP18R0
#define _RP18R1 RPOR9bits.RP18R1
#define _RP18R2 RPOR9bits.RP18R2
#define _RP18R3 RPOR9bits.RP18R3
#define _RP18R4 RPOR9bits.RP18R4
#define _RP19R0 RPOR9bits.RP19R0
#define _RP19R1 RPOR9bits.RP19R1
#define _RP19R2 RPOR9bits.RP19R2
#define _RP19R3 RPOR9bits.RP19R3
#define _RP19R4 RPOR9bits.RP19R4

/* RPOR10 */
#define _RP20R RPOR10bits.RP20R
#define _RP21R RPOR10bits.RP21R
#define _RP20R0 RPOR10bits.RP20R0
#define _RP20R1 RPOR10bits.RP20R1
#define _RP20R2 RPOR10bits.RP20R2
#define _RP20R3 RPOR10bits.RP20R3
#define _RP20R4 RPOR10bits.RP20R4
#define _RP21R0 RPOR10bits.RP21R0
#define _RP21R1 RPOR10bits.RP21R1
#define _RP21R2 RPOR10bits.RP21R2
#define _RP21R3 RPOR10bits.RP21R3
#define _RP21R4 RPOR10bits.RP21R4

/* RPOR11 */
#define _RP22R RPOR11bits.RP22R
#define _RP23R RPOR11bits.RP23R
#define _RP22R0 RPOR11bits.RP22R0
#define _RP22R1 RPOR11bits.RP22R1
#define _RP22R2 RPOR11bits.RP22R2
#define _RP22R3 RPOR11bits.RP22R3
#define _RP22R4 RPOR11bits.RP22R4
#define _RP23R0 RPOR11bits.RP23R0
#define _RP23R1 RPOR11bits.RP23R1
#define _RP23R2 RPOR11bits.RP23R2
#define _RP23R3 RPOR11bits.RP23R3
#define _RP23R4 RPOR11bits.RP23R4

/* RPOR12 */
#define _RP24R RPOR12bits.RP24R
#define _RP25R RPOR12bits.RP25R
#define _RP24R0 RPOR12bits.RP24R0
#define _RP24R1 RPOR12bits.RP24R1
#define _RP24R2 RPOR12bits.RP24R2
#define _RP24R3 RPOR12bits.RP24R3
#define _RP24R4 RPOR12bits.RP24R4
#define _RP25R0 RPOR12bits.RP25R0
#define _RP25R1 RPOR12bits.RP25R1
#define _RP25R2 RPOR12bits.RP25R2
#define _RP25R3 RPOR12bits.RP25R3
#define _RP25R4 RPOR12bits.RP25R4

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
#define _CM RCONbits.CM
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _IOLOCK OSCCONbits.IOLOCK
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
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* ACLKCON */
#define _ASRCSEL ACLKCONbits.ASRCSEL
#define _APSTSCLR ACLKCONbits.APSTSCLR
#define _AOSCMD ACLKCONbits.AOSCMD
#define _SELACLK ACLKCONbits.SELACLK
#define _APSTSCLR0 ACLKCONbits.APSTSCLR0
#define _APSTSCLR1 ACLKCONbits.APSTSCLR1
#define _APSTSCLR2 ACLKCONbits.APSTSCLR2
#define _AOSCMD0 ACLKCONbits.AOSCMD0
#define _AOSCMD1 ACLKCONbits.AOSCMD1

/* BSRAM */
#define _RL_BSR BSRAMbits.RL_BSR
#define _IR_BSR BSRAMbits.IR_BSR
#define _IW_BSR BSRAMbits.IW_BSR

/* SSRAM */
#define _RL_SSR SSRAMbits.RL_SSR
#define _IR_SSR SSRAMbits.IR_SSR
#define _IW_SSR SSRAMbits.IW_SSR

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
#define _AD1MD PMD1bits.AD1MD
#define _C1MD PMD1bits.C1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWM1MD PMD1bits.PWM1MD
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
#define _IC7MD PMD2bits.IC7MD
#define _IC8MD PMD2bits.IC8MD

/* PMD3 */
#define _PWM2MD PMD3bits.PWM2MD
#define _QEI2MD PMD3bits.QEI2MD
#define _CRCMD PMD3bits.CRCMD
#define _PMPMD PMD3bits.PMPMD
#define _RTCCMD PMD3bits.RTCCMD
#define _CMPMD PMD3bits.CMPMD


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
#define _XBSS(N)    __attribute__((space(xmemory),far,aligned(N)))
#define _XDATA(N)   __attribute__((space(xmemory),far,aligned(N)))
#define _YBSS(N)    __attribute__((space(ymemory),far,aligned(N)))
#define _YDATA(N)   __attribute__((space(ymemory),far,aligned(N)))

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

#define _CNEN2_CN21IE_POSITION                   0x00000005
#define _CNEN2_CN21IE_MASK                       0x00000020
#define _CNEN2_CN21IE_LENGTH                     0x00000001

#define _CNEN2_CN22IE_POSITION                   0x00000006
#define _CNEN2_CN22IE_MASK                       0x00000040
#define _CNEN2_CN22IE_LENGTH                     0x00000001

#define _CNEN2_CN23IE_POSITION                   0x00000007
#define _CNEN2_CN23IE_MASK                       0x00000080
#define _CNEN2_CN23IE_LENGTH                     0x00000001

#define _CNEN2_CN24IE_POSITION                   0x00000008
#define _CNEN2_CN24IE_MASK                       0x00000100
#define _CNEN2_CN24IE_LENGTH                     0x00000001

#define _CNEN2_CN27IE_POSITION                   0x0000000B
#define _CNEN2_CN27IE_MASK                       0x00000800
#define _CNEN2_CN27IE_LENGTH                     0x00000001

#define _CNEN2_CN29IE_POSITION                   0x0000000D
#define _CNEN2_CN29IE_MASK                       0x00002000
#define _CNEN2_CN29IE_LENGTH                     0x00000001

#define _CNEN2_CN30IE_POSITION                   0x0000000E
#define _CNEN2_CN30IE_MASK                       0x00004000
#define _CNEN2_CN30IE_LENGTH                     0x00000001

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

#define _CNPU2_CN21PUE_POSITION                  0x00000005
#define _CNPU2_CN21PUE_MASK                      0x00000020
#define _CNPU2_CN21PUE_LENGTH                    0x00000001

#define _CNPU2_CN22PUE_POSITION                  0x00000006
#define _CNPU2_CN22PUE_MASK                      0x00000040
#define _CNPU2_CN22PUE_LENGTH                    0x00000001

#define _CNPU2_CN23PUE_POSITION                  0x00000007
#define _CNPU2_CN23PUE_MASK                      0x00000080
#define _CNPU2_CN23PUE_LENGTH                    0x00000001

#define _CNPU2_CN24PUE_POSITION                  0x00000008
#define _CNPU2_CN24PUE_MASK                      0x00000100
#define _CNPU2_CN24PUE_LENGTH                    0x00000001

#define _CNPU2_CN27PUE_POSITION                  0x0000000B
#define _CNPU2_CN27PUE_MASK                      0x00000800
#define _CNPU2_CN27PUE_LENGTH                    0x00000001

#define _CNPU2_CN29PUE_POSITION                  0x0000000D
#define _CNPU2_CN29PUE_MASK                      0x00002000
#define _CNPU2_CN29PUE_LENGTH                    0x00000001

#define _CNPU2_CN30PUE_POSITION                  0x0000000E
#define _CNPU2_CN30PUE_MASK                      0x00004000
#define _CNPU2_CN30PUE_LENGTH                    0x00000001

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

#define _INTCON1_DMACERR_POSITION                0x00000005
#define _INTCON1_DMACERR_MASK                    0x00000020
#define _INTCON1_DMACERR_LENGTH                  0x00000001

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

#define _IFS0_DMA0IF_POSITION                    0x00000004
#define _IFS0_DMA0IF_MASK                        0x00000010
#define _IFS0_DMA0IF_LENGTH                      0x00000001

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

#define _IFS0_AD1IF_POSITION                     0x0000000D
#define _IFS0_AD1IF_MASK                         0x00002000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_DMA1IF_POSITION                    0x0000000E
#define _IFS0_DMA1IF_MASK                        0x00004000
#define _IFS0_DMA1IF_LENGTH                      0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_CMIF_POSITION                      0x00000002
#define _IFS1_CMIF_MASK                          0x00000004
#define _IFS1_CMIF_LENGTH                        0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_IC7IF_POSITION                     0x00000006
#define _IFS1_IC7IF_MASK                         0x00000040
#define _IFS1_IC7IF_LENGTH                       0x00000001

#define _IFS1_IC8IF_POSITION                     0x00000007
#define _IFS1_IC8IF_MASK                         0x00000080
#define _IFS1_IC8IF_LENGTH                       0x00000001

#define _IFS1_DMA2IF_POSITION                    0x00000008
#define _IFS1_DMA2IF_MASK                        0x00000100
#define _IFS1_DMA2IF_LENGTH                      0x00000001

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

#define _IFS1_SI2CIF_POSITION                    0x00000000
#define _IFS1_SI2CIF_MASK                        0x00000001
#define _IFS1_SI2CIF_LENGTH                      0x00000001

#define _IFS2_SPI2EIF_POSITION                   0x00000000
#define _IFS2_SPI2EIF_MASK                       0x00000001
#define _IFS2_SPI2EIF_LENGTH                     0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_C1RXIF_POSITION                    0x00000002
#define _IFS2_C1RXIF_MASK                        0x00000004
#define _IFS2_C1RXIF_LENGTH                      0x00000001

#define _IFS2_C1IF_POSITION                      0x00000003
#define _IFS2_C1IF_MASK                          0x00000008
#define _IFS2_C1IF_LENGTH                        0x00000001

#define _IFS2_DMA3IF_POSITION                    0x00000004
#define _IFS2_DMA3IF_MASK                        0x00000010
#define _IFS2_DMA3IF_LENGTH                      0x00000001

#define _IFS2_PMPIF_POSITION                     0x0000000D
#define _IFS2_PMPIF_MASK                         0x00002000
#define _IFS2_PMPIF_LENGTH                       0x00000001

#define _IFS2_DMA4IF_POSITION                    0x0000000E
#define _IFS2_DMA4IF_MASK                        0x00004000
#define _IFS2_DMA4IF_LENGTH                      0x00000001

#define _IFS3_PWM1IF_POSITION                    0x00000009
#define _IFS3_PWM1IF_MASK                        0x00000200
#define _IFS3_PWM1IF_LENGTH                      0x00000001

#define _IFS3_QEI1IF_POSITION                    0x0000000A
#define _IFS3_QEI1IF_MASK                        0x00000400
#define _IFS3_QEI1IF_LENGTH                      0x00000001

#define _IFS3_DMA5IF_POSITION                    0x0000000D
#define _IFS3_DMA5IF_MASK                        0x00002000
#define _IFS3_DMA5IF_LENGTH                      0x00000001

#define _IFS3_RTCIF_POSITION                     0x0000000E
#define _IFS3_RTCIF_MASK                         0x00004000
#define _IFS3_RTCIF_LENGTH                       0x00000001

#define _IFS3_FLTA1IF_POSITION                   0x0000000F
#define _IFS3_FLTA1IF_MASK                       0x00008000
#define _IFS3_FLTA1IF_LENGTH                     0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_U2EIF_POSITION                     0x00000002
#define _IFS4_U2EIF_MASK                         0x00000004
#define _IFS4_U2EIF_LENGTH                       0x00000001

#define _IFS4_CRCIF_POSITION                     0x00000003
#define _IFS4_CRCIF_MASK                         0x00000008
#define _IFS4_CRCIF_LENGTH                       0x00000001

#define _IFS4_DMA6IF_POSITION                    0x00000004
#define _IFS4_DMA6IF_MASK                        0x00000010
#define _IFS4_DMA6IF_LENGTH                      0x00000001

#define _IFS4_DMA7IF_POSITION                    0x00000005
#define _IFS4_DMA7IF_MASK                        0x00000020
#define _IFS4_DMA7IF_LENGTH                      0x00000001

#define _IFS4_C1TXIF_POSITION                    0x00000006
#define _IFS4_C1TXIF_MASK                        0x00000040
#define _IFS4_C1TXIF_LENGTH                      0x00000001

#define _IFS4_PWM2IF_POSITION                    0x00000009
#define _IFS4_PWM2IF_MASK                        0x00000200
#define _IFS4_PWM2IF_LENGTH                      0x00000001

#define _IFS4_FLTA2IF_POSITION                   0x0000000A
#define _IFS4_FLTA2IF_MASK                       0x00000400
#define _IFS4_FLTA2IF_LENGTH                     0x00000001

#define _IFS4_QEI2IF_POSITION                    0x0000000B
#define _IFS4_QEI2IF_MASK                        0x00000800
#define _IFS4_QEI2IF_LENGTH                      0x00000001

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

#define _IEC0_DMA0IE_POSITION                    0x00000004
#define _IEC0_DMA0IE_MASK                        0x00000010
#define _IEC0_DMA0IE_LENGTH                      0x00000001

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

#define _IEC0_AD1IE_POSITION                     0x0000000D
#define _IEC0_AD1IE_MASK                         0x00002000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_DMA1IE_POSITION                    0x0000000E
#define _IEC0_DMA1IE_MASK                        0x00004000
#define _IEC0_DMA1IE_LENGTH                      0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_CMIE_POSITION                      0x00000002
#define _IEC1_CMIE_MASK                          0x00000004
#define _IEC1_CMIE_LENGTH                        0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_IC7IE_POSITION                     0x00000006
#define _IEC1_IC7IE_MASK                         0x00000040
#define _IEC1_IC7IE_LENGTH                       0x00000001

#define _IEC1_IC8IE_POSITION                     0x00000007
#define _IEC1_IC8IE_MASK                         0x00000080
#define _IEC1_IC8IE_LENGTH                       0x00000001

#define _IEC1_DMA2IE_POSITION                    0x00000008
#define _IEC1_DMA2IE_MASK                        0x00000100
#define _IEC1_DMA2IE_LENGTH                      0x00000001

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

#define _IEC1_SI2CIE_POSITION                    0x00000000
#define _IEC1_SI2CIE_MASK                        0x00000001
#define _IEC1_SI2CIE_LENGTH                      0x00000001

#define _IEC2_SPI2EIE_POSITION                   0x00000000
#define _IEC2_SPI2EIE_MASK                       0x00000001
#define _IEC2_SPI2EIE_LENGTH                     0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_C1RXIE_POSITION                    0x00000002
#define _IEC2_C1RXIE_MASK                        0x00000004
#define _IEC2_C1RXIE_LENGTH                      0x00000001

#define _IEC2_C1IE_POSITION                      0x00000003
#define _IEC2_C1IE_MASK                          0x00000008
#define _IEC2_C1IE_LENGTH                        0x00000001

#define _IEC2_DMA3IE_POSITION                    0x00000004
#define _IEC2_DMA3IE_MASK                        0x00000010
#define _IEC2_DMA3IE_LENGTH                      0x00000001

#define _IEC2_PMPIE_POSITION                     0x0000000D
#define _IEC2_PMPIE_MASK                         0x00002000
#define _IEC2_PMPIE_LENGTH                       0x00000001

#define _IEC2_DMA4IE_POSITION                    0x0000000E
#define _IEC2_DMA4IE_MASK                        0x00004000
#define _IEC2_DMA4IE_LENGTH                      0x00000001

#define _IEC3_PWM1IE_POSITION                    0x00000009
#define _IEC3_PWM1IE_MASK                        0x00000200
#define _IEC3_PWM1IE_LENGTH                      0x00000001

#define _IEC3_QEI1IE_POSITION                    0x0000000A
#define _IEC3_QEI1IE_MASK                        0x00000400
#define _IEC3_QEI1IE_LENGTH                      0x00000001

#define _IEC3_DMA5IE_POSITION                    0x0000000D
#define _IEC3_DMA5IE_MASK                        0x00002000
#define _IEC3_DMA5IE_LENGTH                      0x00000001

#define _IEC3_RTCIE_POSITION                     0x0000000E
#define _IEC3_RTCIE_MASK                         0x00004000
#define _IEC3_RTCIE_LENGTH                       0x00000001

#define _IEC3_FLTA1IE_POSITION                   0x0000000F
#define _IEC3_FLTA1IE_MASK                       0x00008000
#define _IEC3_FLTA1IE_LENGTH                     0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_U2EIE_POSITION                     0x00000002
#define _IEC4_U2EIE_MASK                         0x00000004
#define _IEC4_U2EIE_LENGTH                       0x00000001

#define _IEC4_CRCIE_POSITION                     0x00000003
#define _IEC4_CRCIE_MASK                         0x00000008
#define _IEC4_CRCIE_LENGTH                       0x00000001

#define _IEC4_DMA6IE_POSITION                    0x00000004
#define _IEC4_DMA6IE_MASK                        0x00000010
#define _IEC4_DMA6IE_LENGTH                      0x00000001

#define _IEC4_DMA7IE_POSITION                    0x00000005
#define _IEC4_DMA7IE_MASK                        0x00000020
#define _IEC4_DMA7IE_LENGTH                      0x00000001

#define _IEC4_C1TXIE_POSITION                    0x00000006
#define _IEC4_C1TXIE_MASK                        0x00000040
#define _IEC4_C1TXIE_LENGTH                      0x00000001

#define _IEC4_PWM2IE_POSITION                    0x00000009
#define _IEC4_PWM2IE_MASK                        0x00000200
#define _IEC4_PWM2IE_LENGTH                      0x00000001

#define _IEC4_FLTA2IE_POSITION                   0x0000000A
#define _IEC4_FLTA2IE_MASK                       0x00000400
#define _IEC4_FLTA2IE_LENGTH                     0x00000001

#define _IEC4_QEI2IE_POSITION                    0x0000000B
#define _IEC4_QEI2IE_MASK                        0x00000800
#define _IEC4_QEI2IE_LENGTH                      0x00000001

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

#define _IPC1_DMA0IP_POSITION                    0x00000000
#define _IPC1_DMA0IP_MASK                        0x00000007
#define _IPC1_DMA0IP_LENGTH                      0x00000003

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_DMA0IP0_POSITION                   0x00000000
#define _IPC1_DMA0IP0_MASK                       0x00000001
#define _IPC1_DMA0IP0_LENGTH                     0x00000001

#define _IPC1_DMA0IP1_POSITION                   0x00000001
#define _IPC1_DMA0IP1_MASK                       0x00000002
#define _IPC1_DMA0IP1_LENGTH                     0x00000001

#define _IPC1_DMA0IP2_POSITION                   0x00000002
#define _IPC1_DMA0IP2_MASK                       0x00000004
#define _IPC1_DMA0IP2_LENGTH                     0x00000001

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

#define _IPC3_AD1IP_POSITION                     0x00000004
#define _IPC3_AD1IP_MASK                         0x00000070
#define _IPC3_AD1IP_LENGTH                       0x00000003

#define _IPC3_DMA1IP_POSITION                    0x00000008
#define _IPC3_DMA1IP_MASK                        0x00000700
#define _IPC3_DMA1IP_LENGTH                      0x00000003

#define _IPC3_U1TXIP0_POSITION                   0x00000000
#define _IPC3_U1TXIP0_MASK                       0x00000001
#define _IPC3_U1TXIP0_LENGTH                     0x00000001

#define _IPC3_U1TXIP1_POSITION                   0x00000001
#define _IPC3_U1TXIP1_MASK                       0x00000002
#define _IPC3_U1TXIP1_LENGTH                     0x00000001

#define _IPC3_U1TXIP2_POSITION                   0x00000002
#define _IPC3_U1TXIP2_MASK                       0x00000004
#define _IPC3_U1TXIP2_LENGTH                     0x00000001

#define _IPC3_AD1IP0_POSITION                    0x00000004
#define _IPC3_AD1IP0_MASK                        0x00000010
#define _IPC3_AD1IP0_LENGTH                      0x00000001

#define _IPC3_AD1IP1_POSITION                    0x00000005
#define _IPC3_AD1IP1_MASK                        0x00000020
#define _IPC3_AD1IP1_LENGTH                      0x00000001

#define _IPC3_AD1IP2_POSITION                    0x00000006
#define _IPC3_AD1IP2_MASK                        0x00000040
#define _IPC3_AD1IP2_LENGTH                      0x00000001

#define _IPC3_DMA1IP0_POSITION                   0x00000008
#define _IPC3_DMA1IP0_MASK                       0x00000100
#define _IPC3_DMA1IP0_LENGTH                     0x00000001

#define _IPC3_DMA1IP1_POSITION                   0x00000009
#define _IPC3_DMA1IP1_MASK                       0x00000200
#define _IPC3_DMA1IP1_LENGTH                     0x00000001

#define _IPC3_DMA1IP2_POSITION                   0x0000000A
#define _IPC3_DMA1IP2_MASK                       0x00000400
#define _IPC3_DMA1IP2_LENGTH                     0x00000001

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

#define _IPC4_CMIP_POSITION                      0x00000008
#define _IPC4_CMIP_MASK                          0x00000700
#define _IPC4_CMIP_LENGTH                        0x00000003

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

#define _IPC4_CMIP0_POSITION                     0x00000008
#define _IPC4_CMIP0_MASK                         0x00000100
#define _IPC4_CMIP0_LENGTH                       0x00000001

#define _IPC4_CMIP1_POSITION                     0x00000009
#define _IPC4_CMIP1_MASK                         0x00000200
#define _IPC4_CMIP1_LENGTH                       0x00000001

#define _IPC4_CMIP2_POSITION                     0x0000000A
#define _IPC4_CMIP2_MASK                         0x00000400
#define _IPC4_CMIP2_LENGTH                       0x00000001

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

#define _IPC5_IC7IP_POSITION                     0x00000008
#define _IPC5_IC7IP_MASK                         0x00000700
#define _IPC5_IC7IP_LENGTH                       0x00000003

#define _IPC5_IC8IP_POSITION                     0x0000000C
#define _IPC5_IC8IP_MASK                         0x00007000
#define _IPC5_IC8IP_LENGTH                       0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC5_IC7IP0_POSITION                    0x00000008
#define _IPC5_IC7IP0_MASK                        0x00000100
#define _IPC5_IC7IP0_LENGTH                      0x00000001

#define _IPC5_IC7IP1_POSITION                    0x00000009
#define _IPC5_IC7IP1_MASK                        0x00000200
#define _IPC5_IC7IP1_LENGTH                      0x00000001

#define _IPC5_IC7IP2_POSITION                    0x0000000A
#define _IPC5_IC7IP2_MASK                        0x00000400
#define _IPC5_IC7IP2_LENGTH                      0x00000001

#define _IPC5_IC8IP0_POSITION                    0x0000000C
#define _IPC5_IC8IP0_MASK                        0x00001000
#define _IPC5_IC8IP0_LENGTH                      0x00000001

#define _IPC5_IC8IP1_POSITION                    0x0000000D
#define _IPC5_IC8IP1_MASK                        0x00002000
#define _IPC5_IC8IP1_LENGTH                      0x00000001

#define _IPC5_IC8IP2_POSITION                    0x0000000E
#define _IPC5_IC8IP2_MASK                        0x00004000
#define _IPC5_IC8IP2_LENGTH                      0x00000001

#define _IPC6_DMA2IP_POSITION                    0x00000000
#define _IPC6_DMA2IP_MASK                        0x00000007
#define _IPC6_DMA2IP_LENGTH                      0x00000003

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

#define _IPC6_DMA2IP0_POSITION                   0x00000000
#define _IPC6_DMA2IP0_MASK                       0x00000001
#define _IPC6_DMA2IP0_LENGTH                     0x00000001

#define _IPC6_DMA2IP1_POSITION                   0x00000001
#define _IPC6_DMA2IP1_MASK                       0x00000002
#define _IPC6_DMA2IP1_LENGTH                     0x00000001

#define _IPC6_DMA2IP2_POSITION                   0x00000002
#define _IPC6_DMA2IP2_MASK                       0x00000004
#define _IPC6_DMA2IP2_LENGTH                     0x00000001

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

#define _IPC8_C1RXIP_POSITION                    0x00000008
#define _IPC8_C1RXIP_MASK                        0x00000700
#define _IPC8_C1RXIP_LENGTH                      0x00000003

#define _IPC8_C1IP_POSITION                      0x0000000C
#define _IPC8_C1IP_MASK                          0x00007000
#define _IPC8_C1IP_LENGTH                        0x00000003

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

#define _IPC8_C1RXIP0_POSITION                   0x00000008
#define _IPC8_C1RXIP0_MASK                       0x00000100
#define _IPC8_C1RXIP0_LENGTH                     0x00000001

#define _IPC8_C1RXIP1_POSITION                   0x00000009
#define _IPC8_C1RXIP1_MASK                       0x00000200
#define _IPC8_C1RXIP1_LENGTH                     0x00000001

#define _IPC8_C1RXIP2_POSITION                   0x0000000A
#define _IPC8_C1RXIP2_MASK                       0x00000400
#define _IPC8_C1RXIP2_LENGTH                     0x00000001

#define _IPC8_C1IP0_POSITION                     0x0000000C
#define _IPC8_C1IP0_MASK                         0x00001000
#define _IPC8_C1IP0_LENGTH                       0x00000001

#define _IPC8_C1IP1_POSITION                     0x0000000D
#define _IPC8_C1IP1_MASK                         0x00002000
#define _IPC8_C1IP1_LENGTH                       0x00000001

#define _IPC8_C1IP2_POSITION                     0x0000000E
#define _IPC8_C1IP2_MASK                         0x00004000
#define _IPC8_C1IP2_LENGTH                       0x00000001

#define _IPC9_DMA3IP_POSITION                    0x00000000
#define _IPC9_DMA3IP_MASK                        0x00000007
#define _IPC9_DMA3IP_LENGTH                      0x00000003

#define _IPC9_DMA3IP0_POSITION                   0x00000000
#define _IPC9_DMA3IP0_MASK                       0x00000001
#define _IPC9_DMA3IP0_LENGTH                     0x00000001

#define _IPC9_DMA3IP1_POSITION                   0x00000001
#define _IPC9_DMA3IP1_MASK                       0x00000002
#define _IPC9_DMA3IP1_LENGTH                     0x00000001

#define _IPC9_DMA3IP2_POSITION                   0x00000002
#define _IPC9_DMA3IP2_MASK                       0x00000004
#define _IPC9_DMA3IP2_LENGTH                     0x00000001

#define _IPC11_PMPIP_POSITION                    0x00000004
#define _IPC11_PMPIP_MASK                        0x00000070
#define _IPC11_PMPIP_LENGTH                      0x00000003

#define _IPC11_DMA4IP_POSITION                   0x00000008
#define _IPC11_DMA4IP_MASK                       0x00000700
#define _IPC11_DMA4IP_LENGTH                     0x00000003

#define _IPC11_PMPIP0_POSITION                   0x00000004
#define _IPC11_PMPIP0_MASK                       0x00000010
#define _IPC11_PMPIP0_LENGTH                     0x00000001

#define _IPC11_PMPIP1_POSITION                   0x00000005
#define _IPC11_PMPIP1_MASK                       0x00000020
#define _IPC11_PMPIP1_LENGTH                     0x00000001

#define _IPC11_PMPIP2_POSITION                   0x00000006
#define _IPC11_PMPIP2_MASK                       0x00000040
#define _IPC11_PMPIP2_LENGTH                     0x00000001

#define _IPC11_DMA4IP0_POSITION                  0x00000008
#define _IPC11_DMA4IP0_MASK                      0x00000100
#define _IPC11_DMA4IP0_LENGTH                    0x00000001

#define _IPC11_DMA4IP1_POSITION                  0x00000009
#define _IPC11_DMA4IP1_MASK                      0x00000200
#define _IPC11_DMA4IP1_LENGTH                    0x00000001

#define _IPC11_DMA4IP2_POSITION                  0x0000000A
#define _IPC11_DMA4IP2_MASK                      0x00000400
#define _IPC11_DMA4IP2_LENGTH                    0x00000001

#define _IPC14_PWM1IP_POSITION                   0x00000004
#define _IPC14_PWM1IP_MASK                       0x00000070
#define _IPC14_PWM1IP_LENGTH                     0x00000003

#define _IPC14_QEI1IP_POSITION                   0x00000008
#define _IPC14_QEI1IP_MASK                       0x00000700
#define _IPC14_QEI1IP_LENGTH                     0x00000003

#define _IPC14_PWM1IP0_POSITION                  0x00000004
#define _IPC14_PWM1IP0_MASK                      0x00000010
#define _IPC14_PWM1IP0_LENGTH                    0x00000001

#define _IPC14_PWM1IP1_POSITION                  0x00000005
#define _IPC14_PWM1IP1_MASK                      0x00000020
#define _IPC14_PWM1IP1_LENGTH                    0x00000001

#define _IPC14_PWM1IP2_POSITION                  0x00000006
#define _IPC14_PWM1IP2_MASK                      0x00000040
#define _IPC14_PWM1IP2_LENGTH                    0x00000001

#define _IPC14_QEI1IP0_POSITION                  0x00000008
#define _IPC14_QEI1IP0_MASK                      0x00000100
#define _IPC14_QEI1IP0_LENGTH                    0x00000001

#define _IPC14_QEI1IP1_POSITION                  0x00000009
#define _IPC14_QEI1IP1_MASK                      0x00000200
#define _IPC14_QEI1IP1_LENGTH                    0x00000001

#define _IPC14_QEI1IP2_POSITION                  0x0000000A
#define _IPC14_QEI1IP2_MASK                      0x00000400
#define _IPC14_QEI1IP2_LENGTH                    0x00000001

#define _IPC15_DMA5IP_POSITION                   0x00000004
#define _IPC15_DMA5IP_MASK                       0x00000070
#define _IPC15_DMA5IP_LENGTH                     0x00000003

#define _IPC15_RTCIP_POSITION                    0x00000008
#define _IPC15_RTCIP_MASK                        0x00000700
#define _IPC15_RTCIP_LENGTH                      0x00000003

#define _IPC15_FLTA1IP_POSITION                  0x0000000C
#define _IPC15_FLTA1IP_MASK                      0x00007000
#define _IPC15_FLTA1IP_LENGTH                    0x00000003

#define _IPC15_DMA5IP0_POSITION                  0x00000004
#define _IPC15_DMA5IP0_MASK                      0x00000010
#define _IPC15_DMA5IP0_LENGTH                    0x00000001

#define _IPC15_DMA5IP1_POSITION                  0x00000005
#define _IPC15_DMA5IP1_MASK                      0x00000020
#define _IPC15_DMA5IP1_LENGTH                    0x00000001

#define _IPC15_DMA5IP2_POSITION                  0x00000006
#define _IPC15_DMA5IP2_MASK                      0x00000040
#define _IPC15_DMA5IP2_LENGTH                    0x00000001

#define _IPC15_RTCIP0_POSITION                   0x00000008
#define _IPC15_RTCIP0_MASK                       0x00000100
#define _IPC15_RTCIP0_LENGTH                     0x00000001

#define _IPC15_RTCIP1_POSITION                   0x00000009
#define _IPC15_RTCIP1_MASK                       0x00000200
#define _IPC15_RTCIP1_LENGTH                     0x00000001

#define _IPC15_RTCIP2_POSITION                   0x0000000A
#define _IPC15_RTCIP2_MASK                       0x00000400
#define _IPC15_RTCIP2_LENGTH                     0x00000001

#define _IPC15_FLTA1IP0_POSITION                 0x0000000C
#define _IPC15_FLTA1IP0_MASK                     0x00001000
#define _IPC15_FLTA1IP0_LENGTH                   0x00000001

#define _IPC15_FLTA1IP1_POSITION                 0x0000000D
#define _IPC15_FLTA1IP1_MASK                     0x00002000
#define _IPC15_FLTA1IP1_LENGTH                   0x00000001

#define _IPC15_FLTA1IP2_POSITION                 0x0000000E
#define _IPC15_FLTA1IP2_MASK                     0x00004000
#define _IPC15_FLTA1IP2_LENGTH                   0x00000001

#define _IPC16_U1EIP_POSITION                    0x00000004
#define _IPC16_U1EIP_MASK                        0x00000070
#define _IPC16_U1EIP_LENGTH                      0x00000003

#define _IPC16_U2EIP_POSITION                    0x00000008
#define _IPC16_U2EIP_MASK                        0x00000700
#define _IPC16_U2EIP_LENGTH                      0x00000003

#define _IPC16_CRCIP_POSITION                    0x0000000C
#define _IPC16_CRCIP_MASK                        0x00007000
#define _IPC16_CRCIP_LENGTH                      0x00000003

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

#define _IPC16_CRCIP0_POSITION                   0x0000000C
#define _IPC16_CRCIP0_MASK                       0x00001000
#define _IPC16_CRCIP0_LENGTH                     0x00000001

#define _IPC16_CRCIP1_POSITION                   0x0000000D
#define _IPC16_CRCIP1_MASK                       0x00002000
#define _IPC16_CRCIP1_LENGTH                     0x00000001

#define _IPC16_CRCIP2_POSITION                   0x0000000E
#define _IPC16_CRCIP2_MASK                       0x00004000
#define _IPC16_CRCIP2_LENGTH                     0x00000001

#define _IPC17_DMA6IP_POSITION                   0x00000000
#define _IPC17_DMA6IP_MASK                       0x00000007
#define _IPC17_DMA6IP_LENGTH                     0x00000003

#define _IPC17_DMA7IP_POSITION                   0x00000004
#define _IPC17_DMA7IP_MASK                       0x00000070
#define _IPC17_DMA7IP_LENGTH                     0x00000003

#define _IPC17_C1TXIP_POSITION                   0x00000008
#define _IPC17_C1TXIP_MASK                       0x00000700
#define _IPC17_C1TXIP_LENGTH                     0x00000003

#define _IPC17_DMA6IP0_POSITION                  0x00000000
#define _IPC17_DMA6IP0_MASK                      0x00000001
#define _IPC17_DMA6IP0_LENGTH                    0x00000001

#define _IPC17_DMA6IP1_POSITION                  0x00000001
#define _IPC17_DMA6IP1_MASK                      0x00000002
#define _IPC17_DMA6IP1_LENGTH                    0x00000001

#define _IPC17_DMA6IP2_POSITION                  0x00000002
#define _IPC17_DMA6IP2_MASK                      0x00000004
#define _IPC17_DMA6IP2_LENGTH                    0x00000001

#define _IPC17_DMA7IP0_POSITION                  0x00000004
#define _IPC17_DMA7IP0_MASK                      0x00000010
#define _IPC17_DMA7IP0_LENGTH                    0x00000001

#define _IPC17_DMA7IP1_POSITION                  0x00000005
#define _IPC17_DMA7IP1_MASK                      0x00000020
#define _IPC17_DMA7IP1_LENGTH                    0x00000001

#define _IPC17_DMA7IP2_POSITION                  0x00000006
#define _IPC17_DMA7IP2_MASK                      0x00000040
#define _IPC17_DMA7IP2_LENGTH                    0x00000001

#define _IPC17_C1TXIP0_POSITION                  0x00000008
#define _IPC17_C1TXIP0_MASK                      0x00000100
#define _IPC17_C1TXIP0_LENGTH                    0x00000001

#define _IPC17_C1TXIP1_POSITION                  0x00000009
#define _IPC17_C1TXIP1_MASK                      0x00000200
#define _IPC17_C1TXIP1_LENGTH                    0x00000001

#define _IPC17_C1TXIP2_POSITION                  0x0000000A
#define _IPC17_C1TXIP2_MASK                      0x00000400
#define _IPC17_C1TXIP2_LENGTH                    0x00000001

#define _IPC18_PWM2IP_POSITION                   0x00000004
#define _IPC18_PWM2IP_MASK                       0x00000070
#define _IPC18_PWM2IP_LENGTH                     0x00000003

#define _IPC18_FLTA2IP_POSITION                  0x00000008
#define _IPC18_FLTA2IP_MASK                      0x00000700
#define _IPC18_FLTA2IP_LENGTH                    0x00000003

#define _IPC18_QEI2IP_POSITION                   0x0000000C
#define _IPC18_QEI2IP_MASK                       0x00007000
#define _IPC18_QEI2IP_LENGTH                     0x00000003

#define _IPC18_PWM2IP0_POSITION                  0x00000004
#define _IPC18_PWM2IP0_MASK                      0x00000010
#define _IPC18_PWM2IP0_LENGTH                    0x00000001

#define _IPC18_PWM2IP1_POSITION                  0x00000005
#define _IPC18_PWM2IP1_MASK                      0x00000020
#define _IPC18_PWM2IP1_LENGTH                    0x00000001

#define _IPC18_PWM2IP2_POSITION                  0x00000006
#define _IPC18_PWM2IP2_MASK                      0x00000040
#define _IPC18_PWM2IP2_LENGTH                    0x00000001

#define _IPC18_FLTA2IP0_POSITION                 0x00000008
#define _IPC18_FLTA2IP0_MASK                     0x00000100
#define _IPC18_FLTA2IP0_LENGTH                   0x00000001

#define _IPC18_FLTA2IP1_POSITION                 0x00000009
#define _IPC18_FLTA2IP1_MASK                     0x00000200
#define _IPC18_FLTA2IP1_LENGTH                   0x00000001

#define _IPC18_FLTA2IP2_POSITION                 0x0000000A
#define _IPC18_FLTA2IP2_MASK                     0x00000400
#define _IPC18_FLTA2IP2_LENGTH                   0x00000001

#define _IPC18_QEI2IP0_POSITION                  0x0000000C
#define _IPC18_QEI2IP0_MASK                      0x00001000
#define _IPC18_QEI2IP0_LENGTH                    0x00000001

#define _IPC18_QEI2IP1_POSITION                  0x0000000D
#define _IPC18_QEI2IP1_MASK                      0x00002000
#define _IPC18_QEI2IP1_LENGTH                    0x00000001

#define _IPC18_QEI2IP2_POSITION                  0x0000000E
#define _IPC18_QEI2IP2_MASK                      0x00004000
#define _IPC18_QEI2IP2_LENGTH                    0x00000001

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

#define _IC7CON_ICM_POSITION                     0x00000000
#define _IC7CON_ICM_MASK                         0x00000007
#define _IC7CON_ICM_LENGTH                       0x00000003

#define _IC7CON_ICBNE_POSITION                   0x00000003
#define _IC7CON_ICBNE_MASK                       0x00000008
#define _IC7CON_ICBNE_LENGTH                     0x00000001

#define _IC7CON_ICOV_POSITION                    0x00000004
#define _IC7CON_ICOV_MASK                        0x00000010
#define _IC7CON_ICOV_LENGTH                      0x00000001

#define _IC7CON_ICI_POSITION                     0x00000005
#define _IC7CON_ICI_MASK                         0x00000060
#define _IC7CON_ICI_LENGTH                       0x00000002

#define _IC7CON_ICTMR_POSITION                   0x00000007
#define _IC7CON_ICTMR_MASK                       0x00000080
#define _IC7CON_ICTMR_LENGTH                     0x00000001

#define _IC7CON_ICSIDL_POSITION                  0x0000000D
#define _IC7CON_ICSIDL_MASK                      0x00002000
#define _IC7CON_ICSIDL_LENGTH                    0x00000001

#define _IC7CON_ICM0_POSITION                    0x00000000
#define _IC7CON_ICM0_MASK                        0x00000001
#define _IC7CON_ICM0_LENGTH                      0x00000001

#define _IC7CON_ICM1_POSITION                    0x00000001
#define _IC7CON_ICM1_MASK                        0x00000002
#define _IC7CON_ICM1_LENGTH                      0x00000001

#define _IC7CON_ICM2_POSITION                    0x00000002
#define _IC7CON_ICM2_MASK                        0x00000004
#define _IC7CON_ICM2_LENGTH                      0x00000001

#define _IC7CON_ICI0_POSITION                    0x00000005
#define _IC7CON_ICI0_MASK                        0x00000020
#define _IC7CON_ICI0_LENGTH                      0x00000001

#define _IC7CON_ICI1_POSITION                    0x00000006
#define _IC7CON_ICI1_MASK                        0x00000040
#define _IC7CON_ICI1_LENGTH                      0x00000001

#define _IC8CON_ICM_POSITION                     0x00000000
#define _IC8CON_ICM_MASK                         0x00000007
#define _IC8CON_ICM_LENGTH                       0x00000003

#define _IC8CON_ICBNE_POSITION                   0x00000003
#define _IC8CON_ICBNE_MASK                       0x00000008
#define _IC8CON_ICBNE_LENGTH                     0x00000001

#define _IC8CON_ICOV_POSITION                    0x00000004
#define _IC8CON_ICOV_MASK                        0x00000010
#define _IC8CON_ICOV_LENGTH                      0x00000001

#define _IC8CON_ICI_POSITION                     0x00000005
#define _IC8CON_ICI_MASK                         0x00000060
#define _IC8CON_ICI_LENGTH                       0x00000002

#define _IC8CON_ICTMR_POSITION                   0x00000007
#define _IC8CON_ICTMR_MASK                       0x00000080
#define _IC8CON_ICTMR_LENGTH                     0x00000001

#define _IC8CON_ICSIDL_POSITION                  0x0000000D
#define _IC8CON_ICSIDL_MASK                      0x00002000
#define _IC8CON_ICSIDL_LENGTH                    0x00000001

#define _IC8CON_ICM0_POSITION                    0x00000000
#define _IC8CON_ICM0_MASK                        0x00000001
#define _IC8CON_ICM0_LENGTH                      0x00000001

#define _IC8CON_ICM1_POSITION                    0x00000001
#define _IC8CON_ICM1_MASK                        0x00000002
#define _IC8CON_ICM1_LENGTH                      0x00000001

#define _IC8CON_ICM2_POSITION                    0x00000002
#define _IC8CON_ICM2_MASK                        0x00000004
#define _IC8CON_ICM2_LENGTH                      0x00000001

#define _IC8CON_ICI0_POSITION                    0x00000005
#define _IC8CON_ICI0_MASK                        0x00000020
#define _IC8CON_ICI0_LENGTH                      0x00000001

#define _IC8CON_ICI1_POSITION                    0x00000006
#define _IC8CON_ICI1_MASK                        0x00000040
#define _IC8CON_ICI1_LENGTH                      0x00000001

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

#define _P1TCON_PTMOD_POSITION                   0x00000000
#define _P1TCON_PTMOD_MASK                       0x00000003
#define _P1TCON_PTMOD_LENGTH                     0x00000002

#define _P1TCON_PTCKPS_POSITION                  0x00000002
#define _P1TCON_PTCKPS_MASK                      0x0000000C
#define _P1TCON_PTCKPS_LENGTH                    0x00000002

#define _P1TCON_PTOPS_POSITION                   0x00000004
#define _P1TCON_PTOPS_MASK                       0x000000F0
#define _P1TCON_PTOPS_LENGTH                     0x00000004

#define _P1TCON_PTSIDL_POSITION                  0x0000000D
#define _P1TCON_PTSIDL_MASK                      0x00002000
#define _P1TCON_PTSIDL_LENGTH                    0x00000001

#define _P1TCON_PTEN_POSITION                    0x0000000F
#define _P1TCON_PTEN_MASK                        0x00008000
#define _P1TCON_PTEN_LENGTH                      0x00000001

#define _P1TCON_PTMOD0_POSITION                  0x00000000
#define _P1TCON_PTMOD0_MASK                      0x00000001
#define _P1TCON_PTMOD0_LENGTH                    0x00000001

#define _P1TCON_PTMOD1_POSITION                  0x00000001
#define _P1TCON_PTMOD1_MASK                      0x00000002
#define _P1TCON_PTMOD1_LENGTH                    0x00000001

#define _P1TCON_PTCKPS0_POSITION                 0x00000002
#define _P1TCON_PTCKPS0_MASK                     0x00000004
#define _P1TCON_PTCKPS0_LENGTH                   0x00000001

#define _P1TCON_PTCKPS1_POSITION                 0x00000003
#define _P1TCON_PTCKPS1_MASK                     0x00000008
#define _P1TCON_PTCKPS1_LENGTH                   0x00000001

#define _P1TCON_PTOPS0_POSITION                  0x00000004
#define _P1TCON_PTOPS0_MASK                      0x00000010
#define _P1TCON_PTOPS0_LENGTH                    0x00000001

#define _P1TCON_PTOPS1_POSITION                  0x00000005
#define _P1TCON_PTOPS1_MASK                      0x00000020
#define _P1TCON_PTOPS1_LENGTH                    0x00000001

#define _P1TCON_PTOPS2_POSITION                  0x00000006
#define _P1TCON_PTOPS2_MASK                      0x00000040
#define _P1TCON_PTOPS2_LENGTH                    0x00000001

#define _P1TCON_PTOPS3_POSITION                  0x00000007
#define _P1TCON_PTOPS3_MASK                      0x00000080
#define _P1TCON_PTOPS3_LENGTH                    0x00000001

#define _PTCON_PTMOD_POSITION                    0x00000000
#define _PTCON_PTMOD_MASK                        0x00000003
#define _PTCON_PTMOD_LENGTH                      0x00000002

#define _PTCON_PTCKPS_POSITION                   0x00000002
#define _PTCON_PTCKPS_MASK                       0x0000000C
#define _PTCON_PTCKPS_LENGTH                     0x00000002

#define _PTCON_PTOPS_POSITION                    0x00000004
#define _PTCON_PTOPS_MASK                        0x000000F0
#define _PTCON_PTOPS_LENGTH                      0x00000004

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_PTMOD0_POSITION                   0x00000000
#define _PTCON_PTMOD0_MASK                       0x00000001
#define _PTCON_PTMOD0_LENGTH                     0x00000001

#define _PTCON_PTMOD1_POSITION                   0x00000001
#define _PTCON_PTMOD1_MASK                       0x00000002
#define _PTCON_PTMOD1_LENGTH                     0x00000001

#define _PTCON_PTCKPS0_POSITION                  0x00000002
#define _PTCON_PTCKPS0_MASK                      0x00000004
#define _PTCON_PTCKPS0_LENGTH                    0x00000001

#define _PTCON_PTCKPS1_POSITION                  0x00000003
#define _PTCON_PTCKPS1_MASK                      0x00000008
#define _PTCON_PTCKPS1_LENGTH                    0x00000001

#define _PTCON_PTOPS0_POSITION                   0x00000004
#define _PTCON_PTOPS0_MASK                       0x00000010
#define _PTCON_PTOPS0_LENGTH                     0x00000001

#define _PTCON_PTOPS1_POSITION                   0x00000005
#define _PTCON_PTOPS1_MASK                       0x00000020
#define _PTCON_PTOPS1_LENGTH                     0x00000001

#define _PTCON_PTOPS2_POSITION                   0x00000006
#define _PTCON_PTOPS2_MASK                       0x00000040
#define _PTCON_PTOPS2_LENGTH                     0x00000001

#define _PTCON_PTOPS3_POSITION                   0x00000007
#define _PTCON_PTOPS3_MASK                       0x00000080
#define _PTCON_PTOPS3_LENGTH                     0x00000001

#define _P1TMR_PTMR_POSITION                     0x00000000
#define _P1TMR_PTMR_MASK                         0x00007FFF
#define _P1TMR_PTMR_LENGTH                       0x0000000F

#define _P1TMR_PTDIR_POSITION                    0x0000000F
#define _P1TMR_PTDIR_MASK                        0x00008000
#define _P1TMR_PTDIR_LENGTH                      0x00000001

#define _PTMR_PTMR_POSITION                      0x00000000
#define _PTMR_PTMR_MASK                          0x00007FFF
#define _PTMR_PTMR_LENGTH                        0x0000000F

#define _PTMR_PTDIR_POSITION                     0x0000000F
#define _PTMR_PTDIR_MASK                         0x00008000
#define _PTMR_PTDIR_LENGTH                       0x00000001

#define _P1TPER_PTPER_POSITION                   0x00000000
#define _P1TPER_PTPER_MASK                       0x00007FFF
#define _P1TPER_PTPER_LENGTH                     0x0000000F

#define _PTPER_PTPER_POSITION                    0x00000000
#define _PTPER_PTPER_MASK                        0x00007FFF
#define _PTPER_PTPER_LENGTH                      0x0000000F

#define _P1SECMP_SEVTCMP_POSITION                0x00000000
#define _P1SECMP_SEVTCMP_MASK                    0x00007FFF
#define _P1SECMP_SEVTCMP_LENGTH                  0x0000000F

#define _P1SECMP_SEVTDIR_POSITION                0x0000000F
#define _P1SECMP_SEVTDIR_MASK                    0x00008000
#define _P1SECMP_SEVTDIR_LENGTH                  0x00000001

#define _SEVTCMP_SEVTCMP_POSITION                0x00000000
#define _SEVTCMP_SEVTCMP_MASK                    0x00007FFF
#define _SEVTCMP_SEVTCMP_LENGTH                  0x0000000F

#define _SEVTCMP_SEVTDIR_POSITION                0x0000000F
#define _SEVTCMP_SEVTDIR_MASK                    0x00008000
#define _SEVTCMP_SEVTDIR_LENGTH                  0x00000001

#define _PWM1CON1_PEN1L_POSITION                 0x00000000
#define _PWM1CON1_PEN1L_MASK                     0x00000001
#define _PWM1CON1_PEN1L_LENGTH                   0x00000001

#define _PWM1CON1_PEN2L_POSITION                 0x00000001
#define _PWM1CON1_PEN2L_MASK                     0x00000002
#define _PWM1CON1_PEN2L_LENGTH                   0x00000001

#define _PWM1CON1_PEN3L_POSITION                 0x00000002
#define _PWM1CON1_PEN3L_MASK                     0x00000004
#define _PWM1CON1_PEN3L_LENGTH                   0x00000001

#define _PWM1CON1_PEN1H_POSITION                 0x00000004
#define _PWM1CON1_PEN1H_MASK                     0x00000010
#define _PWM1CON1_PEN1H_LENGTH                   0x00000001

#define _PWM1CON1_PEN2H_POSITION                 0x00000005
#define _PWM1CON1_PEN2H_MASK                     0x00000020
#define _PWM1CON1_PEN2H_LENGTH                   0x00000001

#define _PWM1CON1_PEN3H_POSITION                 0x00000006
#define _PWM1CON1_PEN3H_MASK                     0x00000040
#define _PWM1CON1_PEN3H_LENGTH                   0x00000001

#define _PWM1CON1_PMOD1_POSITION                 0x00000008
#define _PWM1CON1_PMOD1_MASK                     0x00000100
#define _PWM1CON1_PMOD1_LENGTH                   0x00000001

#define _PWM1CON1_PMOD2_POSITION                 0x00000009
#define _PWM1CON1_PMOD2_MASK                     0x00000200
#define _PWM1CON1_PMOD2_LENGTH                   0x00000001

#define _PWM1CON1_PMOD3_POSITION                 0x0000000A
#define _PWM1CON1_PMOD3_MASK                     0x00000400
#define _PWM1CON1_PMOD3_LENGTH                   0x00000001

#define _PWMCON1_PEN1L_POSITION                  0x00000000
#define _PWMCON1_PEN1L_MASK                      0x00000001
#define _PWMCON1_PEN1L_LENGTH                    0x00000001

#define _PWMCON1_PEN2L_POSITION                  0x00000001
#define _PWMCON1_PEN2L_MASK                      0x00000002
#define _PWMCON1_PEN2L_LENGTH                    0x00000001

#define _PWMCON1_PEN3L_POSITION                  0x00000002
#define _PWMCON1_PEN3L_MASK                      0x00000004
#define _PWMCON1_PEN3L_LENGTH                    0x00000001

#define _PWMCON1_PEN1H_POSITION                  0x00000004
#define _PWMCON1_PEN1H_MASK                      0x00000010
#define _PWMCON1_PEN1H_LENGTH                    0x00000001

#define _PWMCON1_PEN2H_POSITION                  0x00000005
#define _PWMCON1_PEN2H_MASK                      0x00000020
#define _PWMCON1_PEN2H_LENGTH                    0x00000001

#define _PWMCON1_PEN3H_POSITION                  0x00000006
#define _PWMCON1_PEN3H_MASK                      0x00000040
#define _PWMCON1_PEN3H_LENGTH                    0x00000001

#define _PWMCON1_PMOD1_POSITION                  0x00000008
#define _PWMCON1_PMOD1_MASK                      0x00000100
#define _PWMCON1_PMOD1_LENGTH                    0x00000001

#define _PWMCON1_PMOD2_POSITION                  0x00000009
#define _PWMCON1_PMOD2_MASK                      0x00000200
#define _PWMCON1_PMOD2_LENGTH                    0x00000001

#define _PWMCON1_PMOD3_POSITION                  0x0000000A
#define _PWMCON1_PMOD3_MASK                      0x00000400
#define _PWMCON1_PMOD3_LENGTH                    0x00000001

#define _PWM1CON2_UDIS_POSITION                  0x00000000
#define _PWM1CON2_UDIS_MASK                      0x00000001
#define _PWM1CON2_UDIS_LENGTH                    0x00000001

#define _PWM1CON2_OSYNC_POSITION                 0x00000001
#define _PWM1CON2_OSYNC_MASK                     0x00000002
#define _PWM1CON2_OSYNC_LENGTH                   0x00000001

#define _PWM1CON2_IUE_POSITION                   0x00000002
#define _PWM1CON2_IUE_MASK                       0x00000004
#define _PWM1CON2_IUE_LENGTH                     0x00000001

#define _PWM1CON2_SEVOPS_POSITION                0x00000008
#define _PWM1CON2_SEVOPS_MASK                    0x00000F00
#define _PWM1CON2_SEVOPS_LENGTH                  0x00000004

#define _PWM1CON2_SEVOPS0_POSITION               0x00000008
#define _PWM1CON2_SEVOPS0_MASK                   0x00000100
#define _PWM1CON2_SEVOPS0_LENGTH                 0x00000001

#define _PWM1CON2_SEVOPS1_POSITION               0x00000009
#define _PWM1CON2_SEVOPS1_MASK                   0x00000200
#define _PWM1CON2_SEVOPS1_LENGTH                 0x00000001

#define _PWM1CON2_SEVOPS2_POSITION               0x0000000A
#define _PWM1CON2_SEVOPS2_MASK                   0x00000400
#define _PWM1CON2_SEVOPS2_LENGTH                 0x00000001

#define _PWM1CON2_SEVOPS3_POSITION               0x0000000B
#define _PWM1CON2_SEVOPS3_MASK                   0x00000800
#define _PWM1CON2_SEVOPS3_LENGTH                 0x00000001

#define _PWMCON2_UDIS_POSITION                   0x00000000
#define _PWMCON2_UDIS_MASK                       0x00000001
#define _PWMCON2_UDIS_LENGTH                     0x00000001

#define _PWMCON2_OSYNC_POSITION                  0x00000001
#define _PWMCON2_OSYNC_MASK                      0x00000002
#define _PWMCON2_OSYNC_LENGTH                    0x00000001

#define _PWMCON2_IUE_POSITION                    0x00000002
#define _PWMCON2_IUE_MASK                        0x00000004
#define _PWMCON2_IUE_LENGTH                      0x00000001

#define _PWMCON2_SEVOPS_POSITION                 0x00000008
#define _PWMCON2_SEVOPS_MASK                     0x00000F00
#define _PWMCON2_SEVOPS_LENGTH                   0x00000004

#define _PWMCON2_SEVOPS0_POSITION                0x00000008
#define _PWMCON2_SEVOPS0_MASK                    0x00000100
#define _PWMCON2_SEVOPS0_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS1_POSITION                0x00000009
#define _PWMCON2_SEVOPS1_MASK                    0x00000200
#define _PWMCON2_SEVOPS1_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS2_POSITION                0x0000000A
#define _PWMCON2_SEVOPS2_MASK                    0x00000400
#define _PWMCON2_SEVOPS2_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS3_POSITION                0x0000000B
#define _PWMCON2_SEVOPS3_MASK                    0x00000800
#define _PWMCON2_SEVOPS3_LENGTH                  0x00000001

#define _DTCON1_DTA_POSITION                     0x00000000
#define _DTCON1_DTA_MASK                         0x0000003F
#define _DTCON1_DTA_LENGTH                       0x00000006

#define _DTCON1_DTAPS_POSITION                   0x00000006
#define _DTCON1_DTAPS_MASK                       0x000000C0
#define _DTCON1_DTAPS_LENGTH                     0x00000002

#define _DTCON1_DTB_POSITION                     0x00000008
#define _DTCON1_DTB_MASK                         0x00003F00
#define _DTCON1_DTB_LENGTH                       0x00000006

#define _DTCON1_DTBPS_POSITION                   0x0000000E
#define _DTCON1_DTBPS_MASK                       0x0000C000
#define _DTCON1_DTBPS_LENGTH                     0x00000002

#define _DTCON1_DTA0_POSITION                    0x00000000
#define _DTCON1_DTA0_MASK                        0x00000001
#define _DTCON1_DTA0_LENGTH                      0x00000001

#define _DTCON1_DTA1_POSITION                    0x00000001
#define _DTCON1_DTA1_MASK                        0x00000002
#define _DTCON1_DTA1_LENGTH                      0x00000001

#define _DTCON1_DTA2_POSITION                    0x00000002
#define _DTCON1_DTA2_MASK                        0x00000004
#define _DTCON1_DTA2_LENGTH                      0x00000001

#define _DTCON1_DTA3_POSITION                    0x00000003
#define _DTCON1_DTA3_MASK                        0x00000008
#define _DTCON1_DTA3_LENGTH                      0x00000001

#define _DTCON1_DTA4_POSITION                    0x00000004
#define _DTCON1_DTA4_MASK                        0x00000010
#define _DTCON1_DTA4_LENGTH                      0x00000001

#define _DTCON1_DTA5_POSITION                    0x00000005
#define _DTCON1_DTA5_MASK                        0x00000020
#define _DTCON1_DTA5_LENGTH                      0x00000001

#define _DTCON1_DTAPS0_POSITION                  0x00000006
#define _DTCON1_DTAPS0_MASK                      0x00000040
#define _DTCON1_DTAPS0_LENGTH                    0x00000001

#define _DTCON1_DTAPS1_POSITION                  0x00000007
#define _DTCON1_DTAPS1_MASK                      0x00000080
#define _DTCON1_DTAPS1_LENGTH                    0x00000001

#define _DTCON1_DTB0_POSITION                    0x00000008
#define _DTCON1_DTB0_MASK                        0x00000100
#define _DTCON1_DTB0_LENGTH                      0x00000001

#define _DTCON1_DTB1_POSITION                    0x00000009
#define _DTCON1_DTB1_MASK                        0x00000200
#define _DTCON1_DTB1_LENGTH                      0x00000001

#define _DTCON1_DTB2_POSITION                    0x0000000A
#define _DTCON1_DTB2_MASK                        0x00000400
#define _DTCON1_DTB2_LENGTH                      0x00000001

#define _DTCON1_DTB3_POSITION                    0x0000000B
#define _DTCON1_DTB3_MASK                        0x00000800
#define _DTCON1_DTB3_LENGTH                      0x00000001

#define _DTCON1_DTB4_POSITION                    0x0000000C
#define _DTCON1_DTB4_MASK                        0x00001000
#define _DTCON1_DTB4_LENGTH                      0x00000001

#define _DTCON1_DTB5_POSITION                    0x0000000D
#define _DTCON1_DTB5_MASK                        0x00002000
#define _DTCON1_DTB5_LENGTH                      0x00000001

#define _DTCON1_DTBPS0_POSITION                  0x0000000E
#define _DTCON1_DTBPS0_MASK                      0x00004000
#define _DTCON1_DTBPS0_LENGTH                    0x00000001

#define _DTCON1_DTBPS1_POSITION                  0x0000000F
#define _DTCON1_DTBPS1_MASK                      0x00008000
#define _DTCON1_DTBPS1_LENGTH                    0x00000001

#define _P1DTCON1_DTA_POSITION                   0x00000000
#define _P1DTCON1_DTA_MASK                       0x0000003F
#define _P1DTCON1_DTA_LENGTH                     0x00000006

#define _P1DTCON1_DTAPS_POSITION                 0x00000006
#define _P1DTCON1_DTAPS_MASK                     0x000000C0
#define _P1DTCON1_DTAPS_LENGTH                   0x00000002

#define _P1DTCON1_DTB_POSITION                   0x00000008
#define _P1DTCON1_DTB_MASK                       0x00003F00
#define _P1DTCON1_DTB_LENGTH                     0x00000006

#define _P1DTCON1_DTBPS_POSITION                 0x0000000E
#define _P1DTCON1_DTBPS_MASK                     0x0000C000
#define _P1DTCON1_DTBPS_LENGTH                   0x00000002

#define _P1DTCON1_DTA0_POSITION                  0x00000000
#define _P1DTCON1_DTA0_MASK                      0x00000001
#define _P1DTCON1_DTA0_LENGTH                    0x00000001

#define _P1DTCON1_DTA1_POSITION                  0x00000001
#define _P1DTCON1_DTA1_MASK                      0x00000002
#define _P1DTCON1_DTA1_LENGTH                    0x00000001

#define _P1DTCON1_DTA2_POSITION                  0x00000002
#define _P1DTCON1_DTA2_MASK                      0x00000004
#define _P1DTCON1_DTA2_LENGTH                    0x00000001

#define _P1DTCON1_DTA3_POSITION                  0x00000003
#define _P1DTCON1_DTA3_MASK                      0x00000008
#define _P1DTCON1_DTA3_LENGTH                    0x00000001

#define _P1DTCON1_DTA4_POSITION                  0x00000004
#define _P1DTCON1_DTA4_MASK                      0x00000010
#define _P1DTCON1_DTA4_LENGTH                    0x00000001

#define _P1DTCON1_DTA5_POSITION                  0x00000005
#define _P1DTCON1_DTA5_MASK                      0x00000020
#define _P1DTCON1_DTA5_LENGTH                    0x00000001

#define _P1DTCON1_DTAPS0_POSITION                0x00000006
#define _P1DTCON1_DTAPS0_MASK                    0x00000040
#define _P1DTCON1_DTAPS0_LENGTH                  0x00000001

#define _P1DTCON1_DTAPS1_POSITION                0x00000007
#define _P1DTCON1_DTAPS1_MASK                    0x00000080
#define _P1DTCON1_DTAPS1_LENGTH                  0x00000001

#define _P1DTCON1_DTB0_POSITION                  0x00000008
#define _P1DTCON1_DTB0_MASK                      0x00000100
#define _P1DTCON1_DTB0_LENGTH                    0x00000001

#define _P1DTCON1_DTB1_POSITION                  0x00000009
#define _P1DTCON1_DTB1_MASK                      0x00000200
#define _P1DTCON1_DTB1_LENGTH                    0x00000001

#define _P1DTCON1_DTB2_POSITION                  0x0000000A
#define _P1DTCON1_DTB2_MASK                      0x00000400
#define _P1DTCON1_DTB2_LENGTH                    0x00000001

#define _P1DTCON1_DTB3_POSITION                  0x0000000B
#define _P1DTCON1_DTB3_MASK                      0x00000800
#define _P1DTCON1_DTB3_LENGTH                    0x00000001

#define _P1DTCON1_DTB4_POSITION                  0x0000000C
#define _P1DTCON1_DTB4_MASK                      0x00001000
#define _P1DTCON1_DTB4_LENGTH                    0x00000001

#define _P1DTCON1_DTB5_POSITION                  0x0000000D
#define _P1DTCON1_DTB5_MASK                      0x00002000
#define _P1DTCON1_DTB5_LENGTH                    0x00000001

#define _P1DTCON1_DTBPS0_POSITION                0x0000000E
#define _P1DTCON1_DTBPS0_MASK                    0x00004000
#define _P1DTCON1_DTBPS0_LENGTH                  0x00000001

#define _P1DTCON1_DTBPS1_POSITION                0x0000000F
#define _P1DTCON1_DTBPS1_MASK                    0x00008000
#define _P1DTCON1_DTBPS1_LENGTH                  0x00000001

#define _DTCON2_DTS1I_POSITION                   0x00000000
#define _DTCON2_DTS1I_MASK                       0x00000001
#define _DTCON2_DTS1I_LENGTH                     0x00000001

#define _DTCON2_DTS1A_POSITION                   0x00000001
#define _DTCON2_DTS1A_MASK                       0x00000002
#define _DTCON2_DTS1A_LENGTH                     0x00000001

#define _DTCON2_DTS2I_POSITION                   0x00000002
#define _DTCON2_DTS2I_MASK                       0x00000004
#define _DTCON2_DTS2I_LENGTH                     0x00000001

#define _DTCON2_DTS2A_POSITION                   0x00000003
#define _DTCON2_DTS2A_MASK                       0x00000008
#define _DTCON2_DTS2A_LENGTH                     0x00000001

#define _DTCON2_DTS3I_POSITION                   0x00000004
#define _DTCON2_DTS3I_MASK                       0x00000010
#define _DTCON2_DTS3I_LENGTH                     0x00000001

#define _DTCON2_DTS3A_POSITION                   0x00000005
#define _DTCON2_DTS3A_MASK                       0x00000020
#define _DTCON2_DTS3A_LENGTH                     0x00000001

#define _P1DTCON2_DTS1I_POSITION                 0x00000000
#define _P1DTCON2_DTS1I_MASK                     0x00000001
#define _P1DTCON2_DTS1I_LENGTH                   0x00000001

#define _P1DTCON2_DTS1A_POSITION                 0x00000001
#define _P1DTCON2_DTS1A_MASK                     0x00000002
#define _P1DTCON2_DTS1A_LENGTH                   0x00000001

#define _P1DTCON2_DTS2I_POSITION                 0x00000002
#define _P1DTCON2_DTS2I_MASK                     0x00000004
#define _P1DTCON2_DTS2I_LENGTH                   0x00000001

#define _P1DTCON2_DTS2A_POSITION                 0x00000003
#define _P1DTCON2_DTS2A_MASK                     0x00000008
#define _P1DTCON2_DTS2A_LENGTH                   0x00000001

#define _P1DTCON2_DTS3I_POSITION                 0x00000004
#define _P1DTCON2_DTS3I_MASK                     0x00000010
#define _P1DTCON2_DTS3I_LENGTH                   0x00000001

#define _P1DTCON2_DTS3A_POSITION                 0x00000005
#define _P1DTCON2_DTS3A_MASK                     0x00000020
#define _P1DTCON2_DTS3A_LENGTH                   0x00000001

#define _FLTACON_FAEN1_POSITION                  0x00000000
#define _FLTACON_FAEN1_MASK                      0x00000001
#define _FLTACON_FAEN1_LENGTH                    0x00000001

#define _FLTACON_FAEN2_POSITION                  0x00000001
#define _FLTACON_FAEN2_MASK                      0x00000002
#define _FLTACON_FAEN2_LENGTH                    0x00000001

#define _FLTACON_FAEN3_POSITION                  0x00000002
#define _FLTACON_FAEN3_MASK                      0x00000004
#define _FLTACON_FAEN3_LENGTH                    0x00000001

#define _FLTACON_FLTAM_POSITION                  0x00000007
#define _FLTACON_FLTAM_MASK                      0x00000080
#define _FLTACON_FLTAM_LENGTH                    0x00000001

#define _FLTACON_FAOV1L_POSITION                 0x00000008
#define _FLTACON_FAOV1L_MASK                     0x00000100
#define _FLTACON_FAOV1L_LENGTH                   0x00000001

#define _FLTACON_FAOV1H_POSITION                 0x00000009
#define _FLTACON_FAOV1H_MASK                     0x00000200
#define _FLTACON_FAOV1H_LENGTH                   0x00000001

#define _FLTACON_FAOV2L_POSITION                 0x0000000A
#define _FLTACON_FAOV2L_MASK                     0x00000400
#define _FLTACON_FAOV2L_LENGTH                   0x00000001

#define _FLTACON_FAOV2H_POSITION                 0x0000000B
#define _FLTACON_FAOV2H_MASK                     0x00000800
#define _FLTACON_FAOV2H_LENGTH                   0x00000001

#define _FLTACON_FAOV3L_POSITION                 0x0000000C
#define _FLTACON_FAOV3L_MASK                     0x00001000
#define _FLTACON_FAOV3L_LENGTH                   0x00000001

#define _FLTACON_FAOV3H_POSITION                 0x0000000D
#define _FLTACON_FAOV3H_MASK                     0x00002000
#define _FLTACON_FAOV3H_LENGTH                   0x00000001

#define _P1FLTACON_FAEN1_POSITION                0x00000000
#define _P1FLTACON_FAEN1_MASK                    0x00000001
#define _P1FLTACON_FAEN1_LENGTH                  0x00000001

#define _P1FLTACON_FAEN2_POSITION                0x00000001
#define _P1FLTACON_FAEN2_MASK                    0x00000002
#define _P1FLTACON_FAEN2_LENGTH                  0x00000001

#define _P1FLTACON_FAEN3_POSITION                0x00000002
#define _P1FLTACON_FAEN3_MASK                    0x00000004
#define _P1FLTACON_FAEN3_LENGTH                  0x00000001

#define _P1FLTACON_FLTAM_POSITION                0x00000007
#define _P1FLTACON_FLTAM_MASK                    0x00000080
#define _P1FLTACON_FLTAM_LENGTH                  0x00000001

#define _P1FLTACON_FAOV1L_POSITION               0x00000008
#define _P1FLTACON_FAOV1L_MASK                   0x00000100
#define _P1FLTACON_FAOV1L_LENGTH                 0x00000001

#define _P1FLTACON_FAOV1H_POSITION               0x00000009
#define _P1FLTACON_FAOV1H_MASK                   0x00000200
#define _P1FLTACON_FAOV1H_LENGTH                 0x00000001

#define _P1FLTACON_FAOV2L_POSITION               0x0000000A
#define _P1FLTACON_FAOV2L_MASK                   0x00000400
#define _P1FLTACON_FAOV2L_LENGTH                 0x00000001

#define _P1FLTACON_FAOV2H_POSITION               0x0000000B
#define _P1FLTACON_FAOV2H_MASK                   0x00000800
#define _P1FLTACON_FAOV2H_LENGTH                 0x00000001

#define _P1FLTACON_FAOV3L_POSITION               0x0000000C
#define _P1FLTACON_FAOV3L_MASK                   0x00001000
#define _P1FLTACON_FAOV3L_LENGTH                 0x00000001

#define _P1FLTACON_FAOV3H_POSITION               0x0000000D
#define _P1FLTACON_FAOV3H_MASK                   0x00002000
#define _P1FLTACON_FAOV3H_LENGTH                 0x00000001

#define _OVDCON_POUT1L_POSITION                  0x00000000
#define _OVDCON_POUT1L_MASK                      0x00000001
#define _OVDCON_POUT1L_LENGTH                    0x00000001

#define _OVDCON_POUT1H_POSITION                  0x00000001
#define _OVDCON_POUT1H_MASK                      0x00000002
#define _OVDCON_POUT1H_LENGTH                    0x00000001

#define _OVDCON_POUT2L_POSITION                  0x00000002
#define _OVDCON_POUT2L_MASK                      0x00000004
#define _OVDCON_POUT2L_LENGTH                    0x00000001

#define _OVDCON_POUT2H_POSITION                  0x00000003
#define _OVDCON_POUT2H_MASK                      0x00000008
#define _OVDCON_POUT2H_LENGTH                    0x00000001

#define _OVDCON_POUT3L_POSITION                  0x00000004
#define _OVDCON_POUT3L_MASK                      0x00000010
#define _OVDCON_POUT3L_LENGTH                    0x00000001

#define _OVDCON_POUT3H_POSITION                  0x00000005
#define _OVDCON_POUT3H_MASK                      0x00000020
#define _OVDCON_POUT3H_LENGTH                    0x00000001

#define _OVDCON_POVD1L_POSITION                  0x00000008
#define _OVDCON_POVD1L_MASK                      0x00000100
#define _OVDCON_POVD1L_LENGTH                    0x00000001

#define _OVDCON_POVD1H_POSITION                  0x00000009
#define _OVDCON_POVD1H_MASK                      0x00000200
#define _OVDCON_POVD1H_LENGTH                    0x00000001

#define _OVDCON_POVD2L_POSITION                  0x0000000A
#define _OVDCON_POVD2L_MASK                      0x00000400
#define _OVDCON_POVD2L_LENGTH                    0x00000001

#define _OVDCON_POVD2H_POSITION                  0x0000000B
#define _OVDCON_POVD2H_MASK                      0x00000800
#define _OVDCON_POVD2H_LENGTH                    0x00000001

#define _OVDCON_POVD3L_POSITION                  0x0000000C
#define _OVDCON_POVD3L_MASK                      0x00001000
#define _OVDCON_POVD3L_LENGTH                    0x00000001

#define _OVDCON_POVD3H_POSITION                  0x0000000D
#define _OVDCON_POVD3H_MASK                      0x00002000
#define _OVDCON_POVD3H_LENGTH                    0x00000001

#define _P1OVDCON_POUT1L_POSITION                0x00000000
#define _P1OVDCON_POUT1L_MASK                    0x00000001
#define _P1OVDCON_POUT1L_LENGTH                  0x00000001

#define _P1OVDCON_POUT1H_POSITION                0x00000001
#define _P1OVDCON_POUT1H_MASK                    0x00000002
#define _P1OVDCON_POUT1H_LENGTH                  0x00000001

#define _P1OVDCON_POUT2L_POSITION                0x00000002
#define _P1OVDCON_POUT2L_MASK                    0x00000004
#define _P1OVDCON_POUT2L_LENGTH                  0x00000001

#define _P1OVDCON_POUT2H_POSITION                0x00000003
#define _P1OVDCON_POUT2H_MASK                    0x00000008
#define _P1OVDCON_POUT2H_LENGTH                  0x00000001

#define _P1OVDCON_POUT3L_POSITION                0x00000004
#define _P1OVDCON_POUT3L_MASK                    0x00000010
#define _P1OVDCON_POUT3L_LENGTH                  0x00000001

#define _P1OVDCON_POUT3H_POSITION                0x00000005
#define _P1OVDCON_POUT3H_MASK                    0x00000020
#define _P1OVDCON_POUT3H_LENGTH                  0x00000001

#define _P1OVDCON_POVD1L_POSITION                0x00000008
#define _P1OVDCON_POVD1L_MASK                    0x00000100
#define _P1OVDCON_POVD1L_LENGTH                  0x00000001

#define _P1OVDCON_POVD1H_POSITION                0x00000009
#define _P1OVDCON_POVD1H_MASK                    0x00000200
#define _P1OVDCON_POVD1H_LENGTH                  0x00000001

#define _P1OVDCON_POVD2L_POSITION                0x0000000A
#define _P1OVDCON_POVD2L_MASK                    0x00000400
#define _P1OVDCON_POVD2L_LENGTH                  0x00000001

#define _P1OVDCON_POVD2H_POSITION                0x0000000B
#define _P1OVDCON_POVD2H_MASK                    0x00000800
#define _P1OVDCON_POVD2H_LENGTH                  0x00000001

#define _P1OVDCON_POVD3L_POSITION                0x0000000C
#define _P1OVDCON_POVD3L_MASK                    0x00001000
#define _P1OVDCON_POVD3L_LENGTH                  0x00000001

#define _P1OVDCON_POVD3H_POSITION                0x0000000D
#define _P1OVDCON_POVD3H_MASK                    0x00002000
#define _P1OVDCON_POVD3H_LENGTH                  0x00000001

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

#define _QEICON_UPDN_SRC_POSITION                0x00000000
#define _QEICON_UPDN_SRC_MASK                    0x00000001
#define _QEICON_UPDN_SRC_LENGTH                  0x00000001

#define _QEICON_TQCS_POSITION                    0x00000001
#define _QEICON_TQCS_MASK                        0x00000002
#define _QEICON_TQCS_LENGTH                      0x00000001

#define _QEICON_POSRES_POSITION                  0x00000002
#define _QEICON_POSRES_MASK                      0x00000004
#define _QEICON_POSRES_LENGTH                    0x00000001

#define _QEICON_TQCKPS_POSITION                  0x00000003
#define _QEICON_TQCKPS_MASK                      0x00000018
#define _QEICON_TQCKPS_LENGTH                    0x00000002

#define _QEICON_TQGATE_POSITION                  0x00000005
#define _QEICON_TQGATE_MASK                      0x00000020
#define _QEICON_TQGATE_LENGTH                    0x00000001

#define _QEICON_PCDOUT_POSITION                  0x00000006
#define _QEICON_PCDOUT_MASK                      0x00000040
#define _QEICON_PCDOUT_LENGTH                    0x00000001

#define _QEICON_SWPAB_POSITION                   0x00000007
#define _QEICON_SWPAB_MASK                       0x00000080
#define _QEICON_SWPAB_LENGTH                     0x00000001

#define _QEICON_QEIM_POSITION                    0x00000008
#define _QEICON_QEIM_MASK                        0x00000700
#define _QEICON_QEIM_LENGTH                      0x00000003

#define _QEICON_UPDN_POSITION                    0x0000000B
#define _QEICON_UPDN_MASK                        0x00000800
#define _QEICON_UPDN_LENGTH                      0x00000001

#define _QEICON_INDX_POSITION                    0x0000000C
#define _QEICON_INDX_MASK                        0x00001000
#define _QEICON_INDX_LENGTH                      0x00000001

#define _QEICON_QEISIDL_POSITION                 0x0000000D
#define _QEICON_QEISIDL_MASK                     0x00002000
#define _QEICON_QEISIDL_LENGTH                   0x00000001

#define _QEICON_CNTERR_POSITION                  0x0000000F
#define _QEICON_CNTERR_MASK                      0x00008000
#define _QEICON_CNTERR_LENGTH                    0x00000001

#define _QEICON_TQCKPS0_POSITION                 0x00000003
#define _QEICON_TQCKPS0_MASK                     0x00000008
#define _QEICON_TQCKPS0_LENGTH                   0x00000001

#define _QEICON_TQCKPS1_POSITION                 0x00000004
#define _QEICON_TQCKPS1_MASK                     0x00000010
#define _QEICON_TQCKPS1_LENGTH                   0x00000001

#define _QEICON_QEIM0_POSITION                   0x00000008
#define _QEICON_QEIM0_MASK                       0x00000100
#define _QEICON_QEIM0_LENGTH                     0x00000001

#define _QEICON_QEIM1_POSITION                   0x00000009
#define _QEICON_QEIM1_MASK                       0x00000200
#define _QEICON_QEIM1_LENGTH                     0x00000001

#define _QEICON_QEIM2_POSITION                   0x0000000A
#define _QEICON_QEIM2_MASK                       0x00000400
#define _QEICON_QEIM2_LENGTH                     0x00000001

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

#define _DFLTCON_QECK_POSITION                   0x00000004
#define _DFLTCON_QECK_MASK                       0x00000070
#define _DFLTCON_QECK_LENGTH                     0x00000003

#define _DFLTCON_QEOUT_POSITION                  0x00000007
#define _DFLTCON_QEOUT_MASK                      0x00000080
#define _DFLTCON_QEOUT_LENGTH                    0x00000001

#define _DFLTCON_CEID_POSITION                   0x00000008
#define _DFLTCON_CEID_MASK                       0x00000100
#define _DFLTCON_CEID_LENGTH                     0x00000001

#define _DFLTCON_IMV_POSITION                    0x00000009
#define _DFLTCON_IMV_MASK                        0x00000600
#define _DFLTCON_IMV_LENGTH                      0x00000002

#define _DFLTCON_QECK0_POSITION                  0x00000004
#define _DFLTCON_QECK0_MASK                      0x00000010
#define _DFLTCON_QECK0_LENGTH                    0x00000001

#define _DFLTCON_QECK1_POSITION                  0x00000005
#define _DFLTCON_QECK1_MASK                      0x00000020
#define _DFLTCON_QECK1_LENGTH                    0x00000001

#define _DFLTCON_QECK2_POSITION                  0x00000006
#define _DFLTCON_QECK2_MASK                      0x00000040
#define _DFLTCON_QECK2_LENGTH                    0x00000001

#define _DFLTCON_IMV0_POSITION                   0x00000009
#define _DFLTCON_IMV0_MASK                       0x00000200
#define _DFLTCON_IMV0_LENGTH                     0x00000001

#define _DFLTCON_IMV1_POSITION                   0x0000000A
#define _DFLTCON_IMV1_MASK                       0x00000400
#define _DFLTCON_IMV1_LENGTH                     0x00000001

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

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

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

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _PADCFG1_PMPTTL_POSITION                 0x00000000
#define _PADCFG1_PMPTTL_MASK                     0x00000001
#define _PADCFG1_PMPTTL_LENGTH                   0x00000001

#define _PADCFG1_RTSECSEL_POSITION               0x00000001
#define _PADCFG1_RTSECSEL_MASK                   0x00000002
#define _PADCFG1_RTSECSEL_LENGTH                 0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SIMSAM_POSITION                 0x00000003
#define _AD1CON1_SIMSAM_MASK                     0x00000008
#define _AD1CON1_SIMSAM_LENGTH                   0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

#define _AD1CON1_AD12B_POSITION                  0x0000000A
#define _AD1CON1_AD12B_MASK                      0x00000400
#define _AD1CON1_AD12B_LENGTH                    0x00000001

#define _AD1CON1_ADDMABM_POSITION                0x0000000C
#define _AD1CON1_ADDMABM_MASK                    0x00001000
#define _AD1CON1_ADDMABM_LENGTH                  0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000005
#define _AD1CON1_SSRC0_MASK                      0x00000020
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000006
#define _AD1CON1_SSRC1_MASK                      0x00000040
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000007
#define _AD1CON1_SSRC2_MASK                      0x00000080
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_FORM0_POSITION                  0x00000008
#define _AD1CON1_FORM0_MASK                      0x00000100
#define _AD1CON1_FORM0_LENGTH                    0x00000001

#define _AD1CON1_FORM1_POSITION                  0x00000009
#define _AD1CON1_FORM1_MASK                      0x00000200
#define _AD1CON1_FORM1_LENGTH                    0x00000001

#define _AD1CON2_ALTS_POSITION                   0x00000000
#define _AD1CON2_ALTS_MASK                       0x00000001
#define _AD1CON2_ALTS_LENGTH                     0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000003C
#define _AD1CON2_SMPI_LENGTH                     0x00000004

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CHPS_POSITION                   0x00000008
#define _AD1CON2_CHPS_MASK                       0x00000300
#define _AD1CON2_CHPS_LENGTH                     0x00000002

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON2_SMPI0_POSITION                  0x00000002
#define _AD1CON2_SMPI0_MASK                      0x00000004
#define _AD1CON2_SMPI0_LENGTH                    0x00000001

#define _AD1CON2_SMPI1_POSITION                  0x00000003
#define _AD1CON2_SMPI1_MASK                      0x00000008
#define _AD1CON2_SMPI1_LENGTH                    0x00000001

#define _AD1CON2_SMPI2_POSITION                  0x00000004
#define _AD1CON2_SMPI2_MASK                      0x00000010
#define _AD1CON2_SMPI2_LENGTH                    0x00000001

#define _AD1CON2_SMPI3_POSITION                  0x00000005
#define _AD1CON2_SMPI3_MASK                      0x00000020
#define _AD1CON2_SMPI3_LENGTH                    0x00000001

#define _AD1CON2_CHPS0_POSITION                  0x00000008
#define _AD1CON2_CHPS0_MASK                      0x00000100
#define _AD1CON2_CHPS0_LENGTH                    0x00000001

#define _AD1CON2_CHPS1_POSITION                  0x00000009
#define _AD1CON2_CHPS1_MASK                      0x00000200
#define _AD1CON2_CHPS1_LENGTH                    0x00000001

#define _AD1CON2_VCFG0_POSITION                  0x0000000D
#define _AD1CON2_VCFG0_MASK                      0x00002000
#define _AD1CON2_VCFG0_LENGTH                    0x00000001

#define _AD1CON2_VCFG1_POSITION                  0x0000000E
#define _AD1CON2_VCFG1_MASK                      0x00004000
#define _AD1CON2_VCFG1_LENGTH                    0x00000001

#define _AD1CON2_VCFG2_POSITION                  0x0000000F
#define _AD1CON2_VCFG2_MASK                      0x00008000
#define _AD1CON2_VCFG2_LENGTH                    0x00000001

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CON3_ADCS0_POSITION                  0x00000000
#define _AD1CON3_ADCS0_MASK                      0x00000001
#define _AD1CON3_ADCS0_LENGTH                    0x00000001

#define _AD1CON3_ADCS1_POSITION                  0x00000001
#define _AD1CON3_ADCS1_MASK                      0x00000002
#define _AD1CON3_ADCS1_LENGTH                    0x00000001

#define _AD1CON3_ADCS2_POSITION                  0x00000002
#define _AD1CON3_ADCS2_MASK                      0x00000004
#define _AD1CON3_ADCS2_LENGTH                    0x00000001

#define _AD1CON3_ADCS3_POSITION                  0x00000003
#define _AD1CON3_ADCS3_MASK                      0x00000008
#define _AD1CON3_ADCS3_LENGTH                    0x00000001

#define _AD1CON3_ADCS4_POSITION                  0x00000004
#define _AD1CON3_ADCS4_MASK                      0x00000010
#define _AD1CON3_ADCS4_LENGTH                    0x00000001

#define _AD1CON3_ADCS5_POSITION                  0x00000005
#define _AD1CON3_ADCS5_MASK                      0x00000020
#define _AD1CON3_ADCS5_LENGTH                    0x00000001

#define _AD1CON3_ADCS6_POSITION                  0x00000006
#define _AD1CON3_ADCS6_MASK                      0x00000040
#define _AD1CON3_ADCS6_LENGTH                    0x00000001

#define _AD1CON3_ADCS7_POSITION                  0x00000007
#define _AD1CON3_ADCS7_MASK                      0x00000080
#define _AD1CON3_ADCS7_LENGTH                    0x00000001

#define _AD1CON3_SAMC0_POSITION                  0x00000008
#define _AD1CON3_SAMC0_MASK                      0x00000100
#define _AD1CON3_SAMC0_LENGTH                    0x00000001

#define _AD1CON3_SAMC1_POSITION                  0x00000009
#define _AD1CON3_SAMC1_MASK                      0x00000200
#define _AD1CON3_SAMC1_LENGTH                    0x00000001

#define _AD1CON3_SAMC2_POSITION                  0x0000000A
#define _AD1CON3_SAMC2_MASK                      0x00000400
#define _AD1CON3_SAMC2_LENGTH                    0x00000001

#define _AD1CON3_SAMC3_POSITION                  0x0000000B
#define _AD1CON3_SAMC3_MASK                      0x00000800
#define _AD1CON3_SAMC3_LENGTH                    0x00000001

#define _AD1CON3_SAMC4_POSITION                  0x0000000C
#define _AD1CON3_SAMC4_MASK                      0x00001000
#define _AD1CON3_SAMC4_LENGTH                    0x00000001

#define _AD1CHS123_CH123SA_POSITION              0x00000000
#define _AD1CHS123_CH123SA_MASK                  0x00000001
#define _AD1CHS123_CH123SA_LENGTH                0x00000001

#define _AD1CHS123_CH123NA_POSITION              0x00000001
#define _AD1CHS123_CH123NA_MASK                  0x00000006
#define _AD1CHS123_CH123NA_LENGTH                0x00000002

#define _AD1CHS123_CH123SB_POSITION              0x00000008
#define _AD1CHS123_CH123SB_MASK                  0x00000100
#define _AD1CHS123_CH123SB_LENGTH                0x00000001

#define _AD1CHS123_CH123NB_POSITION              0x00000009
#define _AD1CHS123_CH123NB_MASK                  0x00000600
#define _AD1CHS123_CH123NB_LENGTH                0x00000002

#define _AD1CHS123_CH123NA0_POSITION             0x00000001
#define _AD1CHS123_CH123NA0_MASK                 0x00000002
#define _AD1CHS123_CH123NA0_LENGTH               0x00000001

#define _AD1CHS123_CH123NA1_POSITION             0x00000002
#define _AD1CHS123_CH123NA1_MASK                 0x00000004
#define _AD1CHS123_CH123NA1_LENGTH               0x00000001

#define _AD1CHS123_CH123NB0_POSITION             0x00000009
#define _AD1CHS123_CH123NB0_MASK                 0x00000200
#define _AD1CHS123_CH123NB0_LENGTH               0x00000001

#define _AD1CHS123_CH123NB1_POSITION             0x0000000A
#define _AD1CHS123_CH123NB1_MASK                 0x00000400
#define _AD1CHS123_CH123NB1_LENGTH               0x00000001

#define _AD1CHS0_CH0SA_POSITION                  0x00000000
#define _AD1CHS0_CH0SA_MASK                      0x0000001F
#define _AD1CHS0_CH0SA_LENGTH                    0x00000005

#define _AD1CHS0_CH0NA_POSITION                  0x00000007
#define _AD1CHS0_CH0NA_MASK                      0x00000080
#define _AD1CHS0_CH0NA_LENGTH                    0x00000001

#define _AD1CHS0_CH0SB_POSITION                  0x00000008
#define _AD1CHS0_CH0SB_MASK                      0x00001F00
#define _AD1CHS0_CH0SB_LENGTH                    0x00000005

#define _AD1CHS0_CH0NB_POSITION                  0x0000000F
#define _AD1CHS0_CH0NB_MASK                      0x00008000
#define _AD1CHS0_CH0NB_LENGTH                    0x00000001

#define _AD1CHS0_CH0SA0_POSITION                 0x00000000
#define _AD1CHS0_CH0SA0_MASK                     0x00000001
#define _AD1CHS0_CH0SA0_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA1_POSITION                 0x00000001
#define _AD1CHS0_CH0SA1_MASK                     0x00000002
#define _AD1CHS0_CH0SA1_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA2_POSITION                 0x00000002
#define _AD1CHS0_CH0SA2_MASK                     0x00000004
#define _AD1CHS0_CH0SA2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA3_POSITION                 0x00000003
#define _AD1CHS0_CH0SA3_MASK                     0x00000008
#define _AD1CHS0_CH0SA3_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA4_POSITION                 0x00000004
#define _AD1CHS0_CH0SA4_MASK                     0x00000010
#define _AD1CHS0_CH0SA4_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB0_POSITION                 0x00000008
#define _AD1CHS0_CH0SB0_MASK                     0x00000100
#define _AD1CHS0_CH0SB0_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB1_POSITION                 0x00000009
#define _AD1CHS0_CH0SB1_MASK                     0x00000200
#define _AD1CHS0_CH0SB1_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB2_POSITION                 0x0000000A
#define _AD1CHS0_CH0SB2_MASK                     0x00000400
#define _AD1CHS0_CH0SB2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB3_POSITION                 0x0000000B
#define _AD1CHS0_CH0SB3_MASK                     0x00000800
#define _AD1CHS0_CH0SB3_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB4_POSITION                 0x0000000C
#define _AD1CHS0_CH0SB4_MASK                     0x00001000
#define _AD1CHS0_CH0SB4_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG0_POSITION                 0x00000000
#define _AD1PCFGL_PCFG0_MASK                     0x00000001
#define _AD1PCFGL_PCFG0_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG1_POSITION                 0x00000001
#define _AD1PCFGL_PCFG1_MASK                     0x00000002
#define _AD1PCFGL_PCFG1_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG2_POSITION                 0x00000002
#define _AD1PCFGL_PCFG2_MASK                     0x00000004
#define _AD1PCFGL_PCFG2_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG3_POSITION                 0x00000003
#define _AD1PCFGL_PCFG3_MASK                     0x00000008
#define _AD1PCFGL_PCFG3_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG4_POSITION                 0x00000004
#define _AD1PCFGL_PCFG4_MASK                     0x00000010
#define _AD1PCFGL_PCFG4_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG5_POSITION                 0x00000005
#define _AD1PCFGL_PCFG5_MASK                     0x00000020
#define _AD1PCFGL_PCFG5_LENGTH                   0x00000001

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

#define _AD1CSSL_CSS0_POSITION                   0x00000000
#define _AD1CSSL_CSS0_MASK                       0x00000001
#define _AD1CSSL_CSS0_LENGTH                     0x00000001

#define _AD1CSSL_CSS1_POSITION                   0x00000001
#define _AD1CSSL_CSS1_MASK                       0x00000002
#define _AD1CSSL_CSS1_LENGTH                     0x00000001

#define _AD1CSSL_CSS2_POSITION                   0x00000002
#define _AD1CSSL_CSS2_MASK                       0x00000004
#define _AD1CSSL_CSS2_LENGTH                     0x00000001

#define _AD1CSSL_CSS3_POSITION                   0x00000003
#define _AD1CSSL_CSS3_MASK                       0x00000008
#define _AD1CSSL_CSS3_LENGTH                     0x00000001

#define _AD1CSSL_CSS4_POSITION                   0x00000004
#define _AD1CSSL_CSS4_MASK                       0x00000010
#define _AD1CSSL_CSS4_LENGTH                     0x00000001

#define _AD1CSSL_CSS5_POSITION                   0x00000005
#define _AD1CSSL_CSS5_MASK                       0x00000020
#define _AD1CSSL_CSS5_LENGTH                     0x00000001

#define _AD1CON4_DMABL_POSITION                  0x00000000
#define _AD1CON4_DMABL_MASK                      0x00000007
#define _AD1CON4_DMABL_LENGTH                    0x00000003

#define _AD1CON4_DMABL0_POSITION                 0x00000000
#define _AD1CON4_DMABL0_MASK                     0x00000001
#define _AD1CON4_DMABL0_LENGTH                   0x00000001

#define _AD1CON4_DMABL1_POSITION                 0x00000001
#define _AD1CON4_DMABL1_MASK                     0x00000002
#define _AD1CON4_DMABL1_LENGTH                   0x00000001

#define _AD1CON4_DMABL2_POSITION                 0x00000002
#define _AD1CON4_DMABL2_MASK                     0x00000004
#define _AD1CON4_DMABL2_LENGTH                   0x00000001

#define _DMA0CON_MODE_POSITION                   0x00000000
#define _DMA0CON_MODE_MASK                       0x00000003
#define _DMA0CON_MODE_LENGTH                     0x00000002

#define _DMA0CON_AMODE_POSITION                  0x00000004
#define _DMA0CON_AMODE_MASK                      0x00000030
#define _DMA0CON_AMODE_LENGTH                    0x00000002

#define _DMA0CON_NULLW_POSITION                  0x0000000B
#define _DMA0CON_NULLW_MASK                      0x00000800
#define _DMA0CON_NULLW_LENGTH                    0x00000001

#define _DMA0CON_HALF_POSITION                   0x0000000C
#define _DMA0CON_HALF_MASK                       0x00001000
#define _DMA0CON_HALF_LENGTH                     0x00000001

#define _DMA0CON_DIR_POSITION                    0x0000000D
#define _DMA0CON_DIR_MASK                        0x00002000
#define _DMA0CON_DIR_LENGTH                      0x00000001

#define _DMA0CON_SIZE_POSITION                   0x0000000E
#define _DMA0CON_SIZE_MASK                       0x00004000
#define _DMA0CON_SIZE_LENGTH                     0x00000001

#define _DMA0CON_CHEN_POSITION                   0x0000000F
#define _DMA0CON_CHEN_MASK                       0x00008000
#define _DMA0CON_CHEN_LENGTH                     0x00000001

#define _DMA0CON_MODE0_POSITION                  0x00000000
#define _DMA0CON_MODE0_MASK                      0x00000001
#define _DMA0CON_MODE0_LENGTH                    0x00000001

#define _DMA0CON_MODE1_POSITION                  0x00000001
#define _DMA0CON_MODE1_MASK                      0x00000002
#define _DMA0CON_MODE1_LENGTH                    0x00000001

#define _DMA0CON_AMODE0_POSITION                 0x00000004
#define _DMA0CON_AMODE0_MASK                     0x00000010
#define _DMA0CON_AMODE0_LENGTH                   0x00000001

#define _DMA0CON_AMODE1_POSITION                 0x00000005
#define _DMA0CON_AMODE1_MASK                     0x00000020
#define _DMA0CON_AMODE1_LENGTH                   0x00000001

#define _DMA0REQ_IRQSEL_POSITION                 0x00000000
#define _DMA0REQ_IRQSEL_MASK                     0x0000007F
#define _DMA0REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA0REQ_FORCE_POSITION                  0x0000000F
#define _DMA0REQ_FORCE_MASK                      0x00008000
#define _DMA0REQ_FORCE_LENGTH                    0x00000001

#define _DMA0REQ_IRQSEL0_POSITION                0x00000000
#define _DMA0REQ_IRQSEL0_MASK                    0x00000001
#define _DMA0REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL1_POSITION                0x00000001
#define _DMA0REQ_IRQSEL1_MASK                    0x00000002
#define _DMA0REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL2_POSITION                0x00000002
#define _DMA0REQ_IRQSEL2_MASK                    0x00000004
#define _DMA0REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL3_POSITION                0x00000003
#define _DMA0REQ_IRQSEL3_MASK                    0x00000008
#define _DMA0REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL4_POSITION                0x00000004
#define _DMA0REQ_IRQSEL4_MASK                    0x00000010
#define _DMA0REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL5_POSITION                0x00000005
#define _DMA0REQ_IRQSEL5_MASK                    0x00000020
#define _DMA0REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL6_POSITION                0x00000006
#define _DMA0REQ_IRQSEL6_MASK                    0x00000040
#define _DMA0REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA1CON_MODE_POSITION                   0x00000000
#define _DMA1CON_MODE_MASK                       0x00000003
#define _DMA1CON_MODE_LENGTH                     0x00000002

#define _DMA1CON_AMODE_POSITION                  0x00000004
#define _DMA1CON_AMODE_MASK                      0x00000030
#define _DMA1CON_AMODE_LENGTH                    0x00000002

#define _DMA1CON_NULLW_POSITION                  0x0000000B
#define _DMA1CON_NULLW_MASK                      0x00000800
#define _DMA1CON_NULLW_LENGTH                    0x00000001

#define _DMA1CON_HALF_POSITION                   0x0000000C
#define _DMA1CON_HALF_MASK                       0x00001000
#define _DMA1CON_HALF_LENGTH                     0x00000001

#define _DMA1CON_DIR_POSITION                    0x0000000D
#define _DMA1CON_DIR_MASK                        0x00002000
#define _DMA1CON_DIR_LENGTH                      0x00000001

#define _DMA1CON_SIZE_POSITION                   0x0000000E
#define _DMA1CON_SIZE_MASK                       0x00004000
#define _DMA1CON_SIZE_LENGTH                     0x00000001

#define _DMA1CON_CHEN_POSITION                   0x0000000F
#define _DMA1CON_CHEN_MASK                       0x00008000
#define _DMA1CON_CHEN_LENGTH                     0x00000001

#define _DMA1CON_MODE0_POSITION                  0x00000000
#define _DMA1CON_MODE0_MASK                      0x00000001
#define _DMA1CON_MODE0_LENGTH                    0x00000001

#define _DMA1CON_MODE1_POSITION                  0x00000001
#define _DMA1CON_MODE1_MASK                      0x00000002
#define _DMA1CON_MODE1_LENGTH                    0x00000001

#define _DMA1CON_AMODE0_POSITION                 0x00000004
#define _DMA1CON_AMODE0_MASK                     0x00000010
#define _DMA1CON_AMODE0_LENGTH                   0x00000001

#define _DMA1CON_AMODE1_POSITION                 0x00000005
#define _DMA1CON_AMODE1_MASK                     0x00000020
#define _DMA1CON_AMODE1_LENGTH                   0x00000001

#define _DMA1REQ_IRQSEL_POSITION                 0x00000000
#define _DMA1REQ_IRQSEL_MASK                     0x0000007F
#define _DMA1REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA1REQ_FORCE_POSITION                  0x0000000F
#define _DMA1REQ_FORCE_MASK                      0x00008000
#define _DMA1REQ_FORCE_LENGTH                    0x00000001

#define _DMA1REQ_IRQSEL0_POSITION                0x00000000
#define _DMA1REQ_IRQSEL0_MASK                    0x00000001
#define _DMA1REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL1_POSITION                0x00000001
#define _DMA1REQ_IRQSEL1_MASK                    0x00000002
#define _DMA1REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL2_POSITION                0x00000002
#define _DMA1REQ_IRQSEL2_MASK                    0x00000004
#define _DMA1REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL3_POSITION                0x00000003
#define _DMA1REQ_IRQSEL3_MASK                    0x00000008
#define _DMA1REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL4_POSITION                0x00000004
#define _DMA1REQ_IRQSEL4_MASK                    0x00000010
#define _DMA1REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL5_POSITION                0x00000005
#define _DMA1REQ_IRQSEL5_MASK                    0x00000020
#define _DMA1REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL6_POSITION                0x00000006
#define _DMA1REQ_IRQSEL6_MASK                    0x00000040
#define _DMA1REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA2CON_MODE_POSITION                   0x00000000
#define _DMA2CON_MODE_MASK                       0x00000003
#define _DMA2CON_MODE_LENGTH                     0x00000002

#define _DMA2CON_AMODE_POSITION                  0x00000004
#define _DMA2CON_AMODE_MASK                      0x00000030
#define _DMA2CON_AMODE_LENGTH                    0x00000002

#define _DMA2CON_NULLW_POSITION                  0x0000000B
#define _DMA2CON_NULLW_MASK                      0x00000800
#define _DMA2CON_NULLW_LENGTH                    0x00000001

#define _DMA2CON_HALF_POSITION                   0x0000000C
#define _DMA2CON_HALF_MASK                       0x00001000
#define _DMA2CON_HALF_LENGTH                     0x00000001

#define _DMA2CON_DIR_POSITION                    0x0000000D
#define _DMA2CON_DIR_MASK                        0x00002000
#define _DMA2CON_DIR_LENGTH                      0x00000001

#define _DMA2CON_SIZE_POSITION                   0x0000000E
#define _DMA2CON_SIZE_MASK                       0x00004000
#define _DMA2CON_SIZE_LENGTH                     0x00000001

#define _DMA2CON_CHEN_POSITION                   0x0000000F
#define _DMA2CON_CHEN_MASK                       0x00008000
#define _DMA2CON_CHEN_LENGTH                     0x00000001

#define _DMA2CON_MODE0_POSITION                  0x00000000
#define _DMA2CON_MODE0_MASK                      0x00000001
#define _DMA2CON_MODE0_LENGTH                    0x00000001

#define _DMA2CON_MODE1_POSITION                  0x00000001
#define _DMA2CON_MODE1_MASK                      0x00000002
#define _DMA2CON_MODE1_LENGTH                    0x00000001

#define _DMA2CON_AMODE0_POSITION                 0x00000004
#define _DMA2CON_AMODE0_MASK                     0x00000010
#define _DMA2CON_AMODE0_LENGTH                   0x00000001

#define _DMA2CON_AMODE1_POSITION                 0x00000005
#define _DMA2CON_AMODE1_MASK                     0x00000020
#define _DMA2CON_AMODE1_LENGTH                   0x00000001

#define _DMA2REQ_IRQSEL_POSITION                 0x00000000
#define _DMA2REQ_IRQSEL_MASK                     0x0000007F
#define _DMA2REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA2REQ_FORCE_POSITION                  0x0000000F
#define _DMA2REQ_FORCE_MASK                      0x00008000
#define _DMA2REQ_FORCE_LENGTH                    0x00000001

#define _DMA2REQ_IRQSEL0_POSITION                0x00000000
#define _DMA2REQ_IRQSEL0_MASK                    0x00000001
#define _DMA2REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL1_POSITION                0x00000001
#define _DMA2REQ_IRQSEL1_MASK                    0x00000002
#define _DMA2REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL2_POSITION                0x00000002
#define _DMA2REQ_IRQSEL2_MASK                    0x00000004
#define _DMA2REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL3_POSITION                0x00000003
#define _DMA2REQ_IRQSEL3_MASK                    0x00000008
#define _DMA2REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL4_POSITION                0x00000004
#define _DMA2REQ_IRQSEL4_MASK                    0x00000010
#define _DMA2REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL5_POSITION                0x00000005
#define _DMA2REQ_IRQSEL5_MASK                    0x00000020
#define _DMA2REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL6_POSITION                0x00000006
#define _DMA2REQ_IRQSEL6_MASK                    0x00000040
#define _DMA2REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA3CON_MODE_POSITION                   0x00000000
#define _DMA3CON_MODE_MASK                       0x00000003
#define _DMA3CON_MODE_LENGTH                     0x00000002

#define _DMA3CON_AMODE_POSITION                  0x00000004
#define _DMA3CON_AMODE_MASK                      0x00000030
#define _DMA3CON_AMODE_LENGTH                    0x00000002

#define _DMA3CON_NULLW_POSITION                  0x0000000B
#define _DMA3CON_NULLW_MASK                      0x00000800
#define _DMA3CON_NULLW_LENGTH                    0x00000001

#define _DMA3CON_HALF_POSITION                   0x0000000C
#define _DMA3CON_HALF_MASK                       0x00001000
#define _DMA3CON_HALF_LENGTH                     0x00000001

#define _DMA3CON_DIR_POSITION                    0x0000000D
#define _DMA3CON_DIR_MASK                        0x00002000
#define _DMA3CON_DIR_LENGTH                      0x00000001

#define _DMA3CON_SIZE_POSITION                   0x0000000E
#define _DMA3CON_SIZE_MASK                       0x00004000
#define _DMA3CON_SIZE_LENGTH                     0x00000001

#define _DMA3CON_CHEN_POSITION                   0x0000000F
#define _DMA3CON_CHEN_MASK                       0x00008000
#define _DMA3CON_CHEN_LENGTH                     0x00000001

#define _DMA3CON_MODE0_POSITION                  0x00000000
#define _DMA3CON_MODE0_MASK                      0x00000001
#define _DMA3CON_MODE0_LENGTH                    0x00000001

#define _DMA3CON_MODE1_POSITION                  0x00000001
#define _DMA3CON_MODE1_MASK                      0x00000002
#define _DMA3CON_MODE1_LENGTH                    0x00000001

#define _DMA3CON_AMODE0_POSITION                 0x00000004
#define _DMA3CON_AMODE0_MASK                     0x00000010
#define _DMA3CON_AMODE0_LENGTH                   0x00000001

#define _DMA3CON_AMODE1_POSITION                 0x00000005
#define _DMA3CON_AMODE1_MASK                     0x00000020
#define _DMA3CON_AMODE1_LENGTH                   0x00000001

#define _DMA3REQ_IRQSEL_POSITION                 0x00000000
#define _DMA3REQ_IRQSEL_MASK                     0x0000007F
#define _DMA3REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA3REQ_FORCE_POSITION                  0x0000000F
#define _DMA3REQ_FORCE_MASK                      0x00008000
#define _DMA3REQ_FORCE_LENGTH                    0x00000001

#define _DMA3REQ_IRQSEL0_POSITION                0x00000000
#define _DMA3REQ_IRQSEL0_MASK                    0x00000001
#define _DMA3REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL1_POSITION                0x00000001
#define _DMA3REQ_IRQSEL1_MASK                    0x00000002
#define _DMA3REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL2_POSITION                0x00000002
#define _DMA3REQ_IRQSEL2_MASK                    0x00000004
#define _DMA3REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL3_POSITION                0x00000003
#define _DMA3REQ_IRQSEL3_MASK                    0x00000008
#define _DMA3REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL4_POSITION                0x00000004
#define _DMA3REQ_IRQSEL4_MASK                    0x00000010
#define _DMA3REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL5_POSITION                0x00000005
#define _DMA3REQ_IRQSEL5_MASK                    0x00000020
#define _DMA3REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL6_POSITION                0x00000006
#define _DMA3REQ_IRQSEL6_MASK                    0x00000040
#define _DMA3REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA4CON_MODE_POSITION                   0x00000000
#define _DMA4CON_MODE_MASK                       0x00000003
#define _DMA4CON_MODE_LENGTH                     0x00000002

#define _DMA4CON_AMODE_POSITION                  0x00000004
#define _DMA4CON_AMODE_MASK                      0x00000030
#define _DMA4CON_AMODE_LENGTH                    0x00000002

#define _DMA4CON_NULLW_POSITION                  0x0000000B
#define _DMA4CON_NULLW_MASK                      0x00000800
#define _DMA4CON_NULLW_LENGTH                    0x00000001

#define _DMA4CON_HALF_POSITION                   0x0000000C
#define _DMA4CON_HALF_MASK                       0x00001000
#define _DMA4CON_HALF_LENGTH                     0x00000001

#define _DMA4CON_DIR_POSITION                    0x0000000D
#define _DMA4CON_DIR_MASK                        0x00002000
#define _DMA4CON_DIR_LENGTH                      0x00000001

#define _DMA4CON_SIZE_POSITION                   0x0000000E
#define _DMA4CON_SIZE_MASK                       0x00004000
#define _DMA4CON_SIZE_LENGTH                     0x00000001

#define _DMA4CON_CHEN_POSITION                   0x0000000F
#define _DMA4CON_CHEN_MASK                       0x00008000
#define _DMA4CON_CHEN_LENGTH                     0x00000001

#define _DMA4CON_MODE0_POSITION                  0x00000000
#define _DMA4CON_MODE0_MASK                      0x00000001
#define _DMA4CON_MODE0_LENGTH                    0x00000001

#define _DMA4CON_MODE1_POSITION                  0x00000001
#define _DMA4CON_MODE1_MASK                      0x00000002
#define _DMA4CON_MODE1_LENGTH                    0x00000001

#define _DMA4CON_AMODE0_POSITION                 0x00000004
#define _DMA4CON_AMODE0_MASK                     0x00000010
#define _DMA4CON_AMODE0_LENGTH                   0x00000001

#define _DMA4CON_AMODE1_POSITION                 0x00000005
#define _DMA4CON_AMODE1_MASK                     0x00000020
#define _DMA4CON_AMODE1_LENGTH                   0x00000001

#define _DMA4REQ_IRQSEL_POSITION                 0x00000000
#define _DMA4REQ_IRQSEL_MASK                     0x0000007F
#define _DMA4REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA4REQ_FORCE_POSITION                  0x0000000F
#define _DMA4REQ_FORCE_MASK                      0x00008000
#define _DMA4REQ_FORCE_LENGTH                    0x00000001

#define _DMA4REQ_IRQSEL0_POSITION                0x00000000
#define _DMA4REQ_IRQSEL0_MASK                    0x00000001
#define _DMA4REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL1_POSITION                0x00000001
#define _DMA4REQ_IRQSEL1_MASK                    0x00000002
#define _DMA4REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL2_POSITION                0x00000002
#define _DMA4REQ_IRQSEL2_MASK                    0x00000004
#define _DMA4REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL3_POSITION                0x00000003
#define _DMA4REQ_IRQSEL3_MASK                    0x00000008
#define _DMA4REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL4_POSITION                0x00000004
#define _DMA4REQ_IRQSEL4_MASK                    0x00000010
#define _DMA4REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL5_POSITION                0x00000005
#define _DMA4REQ_IRQSEL5_MASK                    0x00000020
#define _DMA4REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL6_POSITION                0x00000006
#define _DMA4REQ_IRQSEL6_MASK                    0x00000040
#define _DMA4REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA5CON_MODE_POSITION                   0x00000000
#define _DMA5CON_MODE_MASK                       0x00000003
#define _DMA5CON_MODE_LENGTH                     0x00000002

#define _DMA5CON_AMODE_POSITION                  0x00000004
#define _DMA5CON_AMODE_MASK                      0x00000030
#define _DMA5CON_AMODE_LENGTH                    0x00000002

#define _DMA5CON_NULLW_POSITION                  0x0000000B
#define _DMA5CON_NULLW_MASK                      0x00000800
#define _DMA5CON_NULLW_LENGTH                    0x00000001

#define _DMA5CON_HALF_POSITION                   0x0000000C
#define _DMA5CON_HALF_MASK                       0x00001000
#define _DMA5CON_HALF_LENGTH                     0x00000001

#define _DMA5CON_DIR_POSITION                    0x0000000D
#define _DMA5CON_DIR_MASK                        0x00002000
#define _DMA5CON_DIR_LENGTH                      0x00000001

#define _DMA5CON_SIZE_POSITION                   0x0000000E
#define _DMA5CON_SIZE_MASK                       0x00004000
#define _DMA5CON_SIZE_LENGTH                     0x00000001

#define _DMA5CON_CHEN_POSITION                   0x0000000F
#define _DMA5CON_CHEN_MASK                       0x00008000
#define _DMA5CON_CHEN_LENGTH                     0x00000001

#define _DMA5CON_MODE0_POSITION                  0x00000000
#define _DMA5CON_MODE0_MASK                      0x00000001
#define _DMA5CON_MODE0_LENGTH                    0x00000001

#define _DMA5CON_MODE1_POSITION                  0x00000001
#define _DMA5CON_MODE1_MASK                      0x00000002
#define _DMA5CON_MODE1_LENGTH                    0x00000001

#define _DMA5CON_AMODE0_POSITION                 0x00000004
#define _DMA5CON_AMODE0_MASK                     0x00000010
#define _DMA5CON_AMODE0_LENGTH                   0x00000001

#define _DMA5CON_AMODE1_POSITION                 0x00000005
#define _DMA5CON_AMODE1_MASK                     0x00000020
#define _DMA5CON_AMODE1_LENGTH                   0x00000001

#define _DMA5REQ_IRQSEL_POSITION                 0x00000000
#define _DMA5REQ_IRQSEL_MASK                     0x0000007F
#define _DMA5REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA5REQ_FORCE_POSITION                  0x0000000F
#define _DMA5REQ_FORCE_MASK                      0x00008000
#define _DMA5REQ_FORCE_LENGTH                    0x00000001

#define _DMA5REQ_IRQSEL0_POSITION                0x00000000
#define _DMA5REQ_IRQSEL0_MASK                    0x00000001
#define _DMA5REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL1_POSITION                0x00000001
#define _DMA5REQ_IRQSEL1_MASK                    0x00000002
#define _DMA5REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL2_POSITION                0x00000002
#define _DMA5REQ_IRQSEL2_MASK                    0x00000004
#define _DMA5REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL3_POSITION                0x00000003
#define _DMA5REQ_IRQSEL3_MASK                    0x00000008
#define _DMA5REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL4_POSITION                0x00000004
#define _DMA5REQ_IRQSEL4_MASK                    0x00000010
#define _DMA5REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL5_POSITION                0x00000005
#define _DMA5REQ_IRQSEL5_MASK                    0x00000020
#define _DMA5REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL6_POSITION                0x00000006
#define _DMA5REQ_IRQSEL6_MASK                    0x00000040
#define _DMA5REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA6CON_MODE_POSITION                   0x00000000
#define _DMA6CON_MODE_MASK                       0x00000003
#define _DMA6CON_MODE_LENGTH                     0x00000002

#define _DMA6CON_AMODE_POSITION                  0x00000004
#define _DMA6CON_AMODE_MASK                      0x00000030
#define _DMA6CON_AMODE_LENGTH                    0x00000002

#define _DMA6CON_NULLW_POSITION                  0x0000000B
#define _DMA6CON_NULLW_MASK                      0x00000800
#define _DMA6CON_NULLW_LENGTH                    0x00000001

#define _DMA6CON_HALF_POSITION                   0x0000000C
#define _DMA6CON_HALF_MASK                       0x00001000
#define _DMA6CON_HALF_LENGTH                     0x00000001

#define _DMA6CON_DIR_POSITION                    0x0000000D
#define _DMA6CON_DIR_MASK                        0x00002000
#define _DMA6CON_DIR_LENGTH                      0x00000001

#define _DMA6CON_SIZE_POSITION                   0x0000000E
#define _DMA6CON_SIZE_MASK                       0x00004000
#define _DMA6CON_SIZE_LENGTH                     0x00000001

#define _DMA6CON_CHEN_POSITION                   0x0000000F
#define _DMA6CON_CHEN_MASK                       0x00008000
#define _DMA6CON_CHEN_LENGTH                     0x00000001

#define _DMA6CON_MODE0_POSITION                  0x00000000
#define _DMA6CON_MODE0_MASK                      0x00000001
#define _DMA6CON_MODE0_LENGTH                    0x00000001

#define _DMA6CON_MODE1_POSITION                  0x00000001
#define _DMA6CON_MODE1_MASK                      0x00000002
#define _DMA6CON_MODE1_LENGTH                    0x00000001

#define _DMA6CON_AMODE0_POSITION                 0x00000004
#define _DMA6CON_AMODE0_MASK                     0x00000010
#define _DMA6CON_AMODE0_LENGTH                   0x00000001

#define _DMA6CON_AMODE1_POSITION                 0x00000005
#define _DMA6CON_AMODE1_MASK                     0x00000020
#define _DMA6CON_AMODE1_LENGTH                   0x00000001

#define _DMA6REQ_IRQSEL_POSITION                 0x00000000
#define _DMA6REQ_IRQSEL_MASK                     0x0000007F
#define _DMA6REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA6REQ_FORCE_POSITION                  0x0000000F
#define _DMA6REQ_FORCE_MASK                      0x00008000
#define _DMA6REQ_FORCE_LENGTH                    0x00000001

#define _DMA6REQ_IRQSEL0_POSITION                0x00000000
#define _DMA6REQ_IRQSEL0_MASK                    0x00000001
#define _DMA6REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL1_POSITION                0x00000001
#define _DMA6REQ_IRQSEL1_MASK                    0x00000002
#define _DMA6REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL2_POSITION                0x00000002
#define _DMA6REQ_IRQSEL2_MASK                    0x00000004
#define _DMA6REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL3_POSITION                0x00000003
#define _DMA6REQ_IRQSEL3_MASK                    0x00000008
#define _DMA6REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL4_POSITION                0x00000004
#define _DMA6REQ_IRQSEL4_MASK                    0x00000010
#define _DMA6REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL5_POSITION                0x00000005
#define _DMA6REQ_IRQSEL5_MASK                    0x00000020
#define _DMA6REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL6_POSITION                0x00000006
#define _DMA6REQ_IRQSEL6_MASK                    0x00000040
#define _DMA6REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA7CON_MODE_POSITION                   0x00000000
#define _DMA7CON_MODE_MASK                       0x00000003
#define _DMA7CON_MODE_LENGTH                     0x00000002

#define _DMA7CON_AMODE_POSITION                  0x00000004
#define _DMA7CON_AMODE_MASK                      0x00000030
#define _DMA7CON_AMODE_LENGTH                    0x00000002

#define _DMA7CON_NULLW_POSITION                  0x0000000B
#define _DMA7CON_NULLW_MASK                      0x00000800
#define _DMA7CON_NULLW_LENGTH                    0x00000001

#define _DMA7CON_HALF_POSITION                   0x0000000C
#define _DMA7CON_HALF_MASK                       0x00001000
#define _DMA7CON_HALF_LENGTH                     0x00000001

#define _DMA7CON_DIR_POSITION                    0x0000000D
#define _DMA7CON_DIR_MASK                        0x00002000
#define _DMA7CON_DIR_LENGTH                      0x00000001

#define _DMA7CON_SIZE_POSITION                   0x0000000E
#define _DMA7CON_SIZE_MASK                       0x00004000
#define _DMA7CON_SIZE_LENGTH                     0x00000001

#define _DMA7CON_CHEN_POSITION                   0x0000000F
#define _DMA7CON_CHEN_MASK                       0x00008000
#define _DMA7CON_CHEN_LENGTH                     0x00000001

#define _DMA7CON_MODE0_POSITION                  0x00000000
#define _DMA7CON_MODE0_MASK                      0x00000001
#define _DMA7CON_MODE0_LENGTH                    0x00000001

#define _DMA7CON_MODE1_POSITION                  0x00000001
#define _DMA7CON_MODE1_MASK                      0x00000002
#define _DMA7CON_MODE1_LENGTH                    0x00000001

#define _DMA7CON_AMODE0_POSITION                 0x00000004
#define _DMA7CON_AMODE0_MASK                     0x00000010
#define _DMA7CON_AMODE0_LENGTH                   0x00000001

#define _DMA7CON_AMODE1_POSITION                 0x00000005
#define _DMA7CON_AMODE1_MASK                     0x00000020
#define _DMA7CON_AMODE1_LENGTH                   0x00000001

#define _DMA7REQ_IRQSEL_POSITION                 0x00000000
#define _DMA7REQ_IRQSEL_MASK                     0x0000007F
#define _DMA7REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA7REQ_FORCE_POSITION                  0x0000000F
#define _DMA7REQ_FORCE_MASK                      0x00008000
#define _DMA7REQ_FORCE_LENGTH                    0x00000001

#define _DMA7REQ_IRQSEL0_POSITION                0x00000000
#define _DMA7REQ_IRQSEL0_MASK                    0x00000001
#define _DMA7REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL1_POSITION                0x00000001
#define _DMA7REQ_IRQSEL1_MASK                    0x00000002
#define _DMA7REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL2_POSITION                0x00000002
#define _DMA7REQ_IRQSEL2_MASK                    0x00000004
#define _DMA7REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL3_POSITION                0x00000003
#define _DMA7REQ_IRQSEL3_MASK                    0x00000008
#define _DMA7REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL4_POSITION                0x00000004
#define _DMA7REQ_IRQSEL4_MASK                    0x00000010
#define _DMA7REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL5_POSITION                0x00000005
#define _DMA7REQ_IRQSEL5_MASK                    0x00000020
#define _DMA7REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL6_POSITION                0x00000006
#define _DMA7REQ_IRQSEL6_MASK                    0x00000040
#define _DMA7REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMACS0_XWCOL_POSITION                   0x00000000
#define _DMACS0_XWCOL_MASK                       0x000000FF
#define _DMACS0_XWCOL_LENGTH                     0x00000008

#define _DMACS0_PWCOL_POSITION                   0x00000008
#define _DMACS0_PWCOL_MASK                       0x0000FF00
#define _DMACS0_PWCOL_LENGTH                     0x00000008

#define _DMACS0_XWCOL0_POSITION                  0x00000000
#define _DMACS0_XWCOL0_MASK                      0x00000001
#define _DMACS0_XWCOL0_LENGTH                    0x00000001

#define _DMACS0_XWCOL1_POSITION                  0x00000001
#define _DMACS0_XWCOL1_MASK                      0x00000002
#define _DMACS0_XWCOL1_LENGTH                    0x00000001

#define _DMACS0_XWCOL2_POSITION                  0x00000002
#define _DMACS0_XWCOL2_MASK                      0x00000004
#define _DMACS0_XWCOL2_LENGTH                    0x00000001

#define _DMACS0_XWCOL3_POSITION                  0x00000003
#define _DMACS0_XWCOL3_MASK                      0x00000008
#define _DMACS0_XWCOL3_LENGTH                    0x00000001

#define _DMACS0_XWCOL4_POSITION                  0x00000004
#define _DMACS0_XWCOL4_MASK                      0x00000010
#define _DMACS0_XWCOL4_LENGTH                    0x00000001

#define _DMACS0_XWCOL5_POSITION                  0x00000005
#define _DMACS0_XWCOL5_MASK                      0x00000020
#define _DMACS0_XWCOL5_LENGTH                    0x00000001

#define _DMACS0_XWCOL6_POSITION                  0x00000006
#define _DMACS0_XWCOL6_MASK                      0x00000040
#define _DMACS0_XWCOL6_LENGTH                    0x00000001

#define _DMACS0_XWCOL7_POSITION                  0x00000007
#define _DMACS0_XWCOL7_MASK                      0x00000080
#define _DMACS0_XWCOL7_LENGTH                    0x00000001

#define _DMACS0_PWCOL0_POSITION                  0x00000008
#define _DMACS0_PWCOL0_MASK                      0x00000100
#define _DMACS0_PWCOL0_LENGTH                    0x00000001

#define _DMACS0_PWCOL1_POSITION                  0x00000009
#define _DMACS0_PWCOL1_MASK                      0x00000200
#define _DMACS0_PWCOL1_LENGTH                    0x00000001

#define _DMACS0_PWCOL2_POSITION                  0x0000000A
#define _DMACS0_PWCOL2_MASK                      0x00000400
#define _DMACS0_PWCOL2_LENGTH                    0x00000001

#define _DMACS0_PWCOL3_POSITION                  0x0000000B
#define _DMACS0_PWCOL3_MASK                      0x00000800
#define _DMACS0_PWCOL3_LENGTH                    0x00000001

#define _DMACS0_PWCOL4_POSITION                  0x0000000C
#define _DMACS0_PWCOL4_MASK                      0x00001000
#define _DMACS0_PWCOL4_LENGTH                    0x00000001

#define _DMACS0_PWCOL5_POSITION                  0x0000000D
#define _DMACS0_PWCOL5_MASK                      0x00002000
#define _DMACS0_PWCOL5_LENGTH                    0x00000001

#define _DMACS0_PWCOL6_POSITION                  0x0000000E
#define _DMACS0_PWCOL6_MASK                      0x00004000
#define _DMACS0_PWCOL6_LENGTH                    0x00000001

#define _DMACS0_PWCOL7_POSITION                  0x0000000F
#define _DMACS0_PWCOL7_MASK                      0x00008000
#define _DMACS0_PWCOL7_LENGTH                    0x00000001

#define _DMACS1_PPST0_POSITION                   0x00000000
#define _DMACS1_PPST0_MASK                       0x00000001
#define _DMACS1_PPST0_LENGTH                     0x00000001

#define _DMACS1_PPST1_POSITION                   0x00000001
#define _DMACS1_PPST1_MASK                       0x00000002
#define _DMACS1_PPST1_LENGTH                     0x00000001

#define _DMACS1_PPST2_POSITION                   0x00000002
#define _DMACS1_PPST2_MASK                       0x00000004
#define _DMACS1_PPST2_LENGTH                     0x00000001

#define _DMACS1_PPST3_POSITION                   0x00000003
#define _DMACS1_PPST3_MASK                       0x00000008
#define _DMACS1_PPST3_LENGTH                     0x00000001

#define _DMACS1_PPST4_POSITION                   0x00000004
#define _DMACS1_PPST4_MASK                       0x00000010
#define _DMACS1_PPST4_LENGTH                     0x00000001

#define _DMACS1_PPST5_POSITION                   0x00000005
#define _DMACS1_PPST5_MASK                       0x00000020
#define _DMACS1_PPST5_LENGTH                     0x00000001

#define _DMACS1_PPST6_POSITION                   0x00000006
#define _DMACS1_PPST6_MASK                       0x00000040
#define _DMACS1_PPST6_LENGTH                     0x00000001

#define _DMACS1_PPST7_POSITION                   0x00000007
#define _DMACS1_PPST7_MASK                       0x00000080
#define _DMACS1_PPST7_LENGTH                     0x00000001

#define _DMACS1_LSTCH_POSITION                   0x00000008
#define _DMACS1_LSTCH_MASK                       0x00000F00
#define _DMACS1_LSTCH_LENGTH                     0x00000004

#define _DMACS1_PPST_POSITION                    0x00000000
#define _DMACS1_PPST_MASK                        0x000000FF
#define _DMACS1_PPST_LENGTH                      0x00000008

#define _DMACS1_LSTCH0_POSITION                  0x00000008
#define _DMACS1_LSTCH0_MASK                      0x00000100
#define _DMACS1_LSTCH0_LENGTH                    0x00000001

#define _DMACS1_LSTCH1_POSITION                  0x00000009
#define _DMACS1_LSTCH1_MASK                      0x00000200
#define _DMACS1_LSTCH1_LENGTH                    0x00000001

#define _DMACS1_LSTCH2_POSITION                  0x0000000A
#define _DMACS1_LSTCH2_MASK                      0x00000400
#define _DMACS1_LSTCH2_LENGTH                    0x00000001

#define _DMACS1_LSTCH3_POSITION                  0x0000000B
#define _DMACS1_LSTCH3_MASK                      0x00000800
#define _DMACS1_LSTCH3_LENGTH                    0x00000001

#define _C1CTRL1_WIN_POSITION                    0x00000000
#define _C1CTRL1_WIN_MASK                        0x00000001
#define _C1CTRL1_WIN_LENGTH                      0x00000001

#define _C1CTRL1_CANCAP_POSITION                 0x00000003
#define _C1CTRL1_CANCAP_MASK                     0x00000008
#define _C1CTRL1_CANCAP_LENGTH                   0x00000001

#define _C1CTRL1_OPMODE_POSITION                 0x00000005
#define _C1CTRL1_OPMODE_MASK                     0x000000E0
#define _C1CTRL1_OPMODE_LENGTH                   0x00000003

#define _C1CTRL1_REQOP_POSITION                  0x00000008
#define _C1CTRL1_REQOP_MASK                      0x00000700
#define _C1CTRL1_REQOP_LENGTH                    0x00000003

#define _C1CTRL1_CANCKS_POSITION                 0x0000000B
#define _C1CTRL1_CANCKS_MASK                     0x00000800
#define _C1CTRL1_CANCKS_LENGTH                   0x00000001

#define _C1CTRL1_ABAT_POSITION                   0x0000000C
#define _C1CTRL1_ABAT_MASK                       0x00001000
#define _C1CTRL1_ABAT_LENGTH                     0x00000001

#define _C1CTRL1_CSIDL_POSITION                  0x0000000D
#define _C1CTRL1_CSIDL_MASK                      0x00002000
#define _C1CTRL1_CSIDL_LENGTH                    0x00000001

#define _C1CTRL1_OPMODE0_POSITION                0x00000005
#define _C1CTRL1_OPMODE0_MASK                    0x00000020
#define _C1CTRL1_OPMODE0_LENGTH                  0x00000001

#define _C1CTRL1_OPMODE1_POSITION                0x00000006
#define _C1CTRL1_OPMODE1_MASK                    0x00000040
#define _C1CTRL1_OPMODE1_LENGTH                  0x00000001

#define _C1CTRL1_OPMODE2_POSITION                0x00000007
#define _C1CTRL1_OPMODE2_MASK                    0x00000080
#define _C1CTRL1_OPMODE2_LENGTH                  0x00000001

#define _C1CTRL1_REQOP0_POSITION                 0x00000008
#define _C1CTRL1_REQOP0_MASK                     0x00000100
#define _C1CTRL1_REQOP0_LENGTH                   0x00000001

#define _C1CTRL1_REQOP1_POSITION                 0x00000009
#define _C1CTRL1_REQOP1_MASK                     0x00000200
#define _C1CTRL1_REQOP1_LENGTH                   0x00000001

#define _C1CTRL1_REQOP2_POSITION                 0x0000000A
#define _C1CTRL1_REQOP2_MASK                     0x00000400
#define _C1CTRL1_REQOP2_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT_POSITION                  0x00000000
#define _C1CTRL2_DNCNT_MASK                      0x0000001F
#define _C1CTRL2_DNCNT_LENGTH                    0x00000005

#define _C1CTRL2_DNCNT0_POSITION                 0x00000000
#define _C1CTRL2_DNCNT0_MASK                     0x00000001
#define _C1CTRL2_DNCNT0_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT1_POSITION                 0x00000001
#define _C1CTRL2_DNCNT1_MASK                     0x00000002
#define _C1CTRL2_DNCNT1_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT2_POSITION                 0x00000002
#define _C1CTRL2_DNCNT2_MASK                     0x00000004
#define _C1CTRL2_DNCNT2_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT3_POSITION                 0x00000003
#define _C1CTRL2_DNCNT3_MASK                     0x00000008
#define _C1CTRL2_DNCNT3_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT4_POSITION                 0x00000004
#define _C1CTRL2_DNCNT4_MASK                     0x00000010
#define _C1CTRL2_DNCNT4_LENGTH                   0x00000001

#define _C1VEC_ICODE_POSITION                    0x00000000
#define _C1VEC_ICODE_MASK                        0x0000007F
#define _C1VEC_ICODE_LENGTH                      0x00000007

#define _C1VEC_FILHIT_POSITION                   0x00000008
#define _C1VEC_FILHIT_MASK                       0x00001F00
#define _C1VEC_FILHIT_LENGTH                     0x00000005

#define _C1VEC_ICODE0_POSITION                   0x00000000
#define _C1VEC_ICODE0_MASK                       0x00000001
#define _C1VEC_ICODE0_LENGTH                     0x00000001

#define _C1VEC_ICODE1_POSITION                   0x00000001
#define _C1VEC_ICODE1_MASK                       0x00000002
#define _C1VEC_ICODE1_LENGTH                     0x00000001

#define _C1VEC_ICODE2_POSITION                   0x00000002
#define _C1VEC_ICODE2_MASK                       0x00000004
#define _C1VEC_ICODE2_LENGTH                     0x00000001

#define _C1VEC_ICODE3_POSITION                   0x00000003
#define _C1VEC_ICODE3_MASK                       0x00000008
#define _C1VEC_ICODE3_LENGTH                     0x00000001

#define _C1VEC_ICODE4_POSITION                   0x00000004
#define _C1VEC_ICODE4_MASK                       0x00000010
#define _C1VEC_ICODE4_LENGTH                     0x00000001

#define _C1VEC_ICODE5_POSITION                   0x00000005
#define _C1VEC_ICODE5_MASK                       0x00000020
#define _C1VEC_ICODE5_LENGTH                     0x00000001

#define _C1VEC_ICODE6_POSITION                   0x00000006
#define _C1VEC_ICODE6_MASK                       0x00000040
#define _C1VEC_ICODE6_LENGTH                     0x00000001

#define _C1VEC_FILHIT0_POSITION                  0x00000008
#define _C1VEC_FILHIT0_MASK                      0x00000100
#define _C1VEC_FILHIT0_LENGTH                    0x00000001

#define _C1VEC_FILHIT1_POSITION                  0x00000009
#define _C1VEC_FILHIT1_MASK                      0x00000200
#define _C1VEC_FILHIT1_LENGTH                    0x00000001

#define _C1VEC_FILHIT2_POSITION                  0x0000000A
#define _C1VEC_FILHIT2_MASK                      0x00000400
#define _C1VEC_FILHIT2_LENGTH                    0x00000001

#define _C1VEC_FILHIT3_POSITION                  0x0000000B
#define _C1VEC_FILHIT3_MASK                      0x00000800
#define _C1VEC_FILHIT3_LENGTH                    0x00000001

#define _C1VEC_FILHIT4_POSITION                  0x0000000C
#define _C1VEC_FILHIT4_MASK                      0x00001000
#define _C1VEC_FILHIT4_LENGTH                    0x00000001

#define _C1FCTRL_FSA_POSITION                    0x00000000
#define _C1FCTRL_FSA_MASK                        0x0000001F
#define _C1FCTRL_FSA_LENGTH                      0x00000005

#define _C1FCTRL_DMABS_POSITION                  0x0000000D
#define _C1FCTRL_DMABS_MASK                      0x0000E000
#define _C1FCTRL_DMABS_LENGTH                    0x00000003

#define _C1FCTRL_FSA0_POSITION                   0x00000000
#define _C1FCTRL_FSA0_MASK                       0x00000001
#define _C1FCTRL_FSA0_LENGTH                     0x00000001

#define _C1FCTRL_FSA1_POSITION                   0x00000001
#define _C1FCTRL_FSA1_MASK                       0x00000002
#define _C1FCTRL_FSA1_LENGTH                     0x00000001

#define _C1FCTRL_FSA2_POSITION                   0x00000002
#define _C1FCTRL_FSA2_MASK                       0x00000004
#define _C1FCTRL_FSA2_LENGTH                     0x00000001

#define _C1FCTRL_FSA3_POSITION                   0x00000003
#define _C1FCTRL_FSA3_MASK                       0x00000008
#define _C1FCTRL_FSA3_LENGTH                     0x00000001

#define _C1FCTRL_FSA4_POSITION                   0x00000004
#define _C1FCTRL_FSA4_MASK                       0x00000010
#define _C1FCTRL_FSA4_LENGTH                     0x00000001

#define _C1FCTRL_DMABS0_POSITION                 0x0000000D
#define _C1FCTRL_DMABS0_MASK                     0x00002000
#define _C1FCTRL_DMABS0_LENGTH                   0x00000001

#define _C1FCTRL_DMABS1_POSITION                 0x0000000E
#define _C1FCTRL_DMABS1_MASK                     0x00004000
#define _C1FCTRL_DMABS1_LENGTH                   0x00000001

#define _C1FCTRL_DMABS2_POSITION                 0x0000000F
#define _C1FCTRL_DMABS2_MASK                     0x00008000
#define _C1FCTRL_DMABS2_LENGTH                   0x00000001

#define _C1FIFO_FNRB_POSITION                    0x00000000
#define _C1FIFO_FNRB_MASK                        0x0000003F
#define _C1FIFO_FNRB_LENGTH                      0x00000006

#define _C1FIFO_FBP_POSITION                     0x00000008
#define _C1FIFO_FBP_MASK                         0x00003F00
#define _C1FIFO_FBP_LENGTH                       0x00000006

#define _C1FIFO_FNRB0_POSITION                   0x00000000
#define _C1FIFO_FNRB0_MASK                       0x00000001
#define _C1FIFO_FNRB0_LENGTH                     0x00000001

#define _C1FIFO_FNRB1_POSITION                   0x00000001
#define _C1FIFO_FNRB1_MASK                       0x00000002
#define _C1FIFO_FNRB1_LENGTH                     0x00000001

#define _C1FIFO_FNRB2_POSITION                   0x00000002
#define _C1FIFO_FNRB2_MASK                       0x00000004
#define _C1FIFO_FNRB2_LENGTH                     0x00000001

#define _C1FIFO_FNRB3_POSITION                   0x00000003
#define _C1FIFO_FNRB3_MASK                       0x00000008
#define _C1FIFO_FNRB3_LENGTH                     0x00000001

#define _C1FIFO_FNRB4_POSITION                   0x00000004
#define _C1FIFO_FNRB4_MASK                       0x00000010
#define _C1FIFO_FNRB4_LENGTH                     0x00000001

#define _C1FIFO_FNRB5_POSITION                   0x00000005
#define _C1FIFO_FNRB5_MASK                       0x00000020
#define _C1FIFO_FNRB5_LENGTH                     0x00000001

#define _C1FIFO_FBP0_POSITION                    0x00000008
#define _C1FIFO_FBP0_MASK                        0x00000100
#define _C1FIFO_FBP0_LENGTH                      0x00000001

#define _C1FIFO_FBP1_POSITION                    0x00000009
#define _C1FIFO_FBP1_MASK                        0x00000200
#define _C1FIFO_FBP1_LENGTH                      0x00000001

#define _C1FIFO_FBP2_POSITION                    0x0000000A
#define _C1FIFO_FBP2_MASK                        0x00000400
#define _C1FIFO_FBP2_LENGTH                      0x00000001

#define _C1FIFO_FBP3_POSITION                    0x0000000B
#define _C1FIFO_FBP3_MASK                        0x00000800
#define _C1FIFO_FBP3_LENGTH                      0x00000001

#define _C1FIFO_FBP4_POSITION                    0x0000000C
#define _C1FIFO_FBP4_MASK                        0x00001000
#define _C1FIFO_FBP4_LENGTH                      0x00000001

#define _C1FIFO_FBP5_POSITION                    0x0000000D
#define _C1FIFO_FBP5_MASK                        0x00002000
#define _C1FIFO_FBP5_LENGTH                      0x00000001

#define _C1INTF_TBIF_POSITION                    0x00000000
#define _C1INTF_TBIF_MASK                        0x00000001
#define _C1INTF_TBIF_LENGTH                      0x00000001

#define _C1INTF_RBIF_POSITION                    0x00000001
#define _C1INTF_RBIF_MASK                        0x00000002
#define _C1INTF_RBIF_LENGTH                      0x00000001

#define _C1INTF_RBOVIF_POSITION                  0x00000002
#define _C1INTF_RBOVIF_MASK                      0x00000004
#define _C1INTF_RBOVIF_LENGTH                    0x00000001

#define _C1INTF_FIFOIF_POSITION                  0x00000003
#define _C1INTF_FIFOIF_MASK                      0x00000008
#define _C1INTF_FIFOIF_LENGTH                    0x00000001

#define _C1INTF_ERRIF_POSITION                   0x00000005
#define _C1INTF_ERRIF_MASK                       0x00000020
#define _C1INTF_ERRIF_LENGTH                     0x00000001

#define _C1INTF_WAKIF_POSITION                   0x00000006
#define _C1INTF_WAKIF_MASK                       0x00000040
#define _C1INTF_WAKIF_LENGTH                     0x00000001

#define _C1INTF_IVRIF_POSITION                   0x00000007
#define _C1INTF_IVRIF_MASK                       0x00000080
#define _C1INTF_IVRIF_LENGTH                     0x00000001

#define _C1INTF_EWARN_POSITION                   0x00000008
#define _C1INTF_EWARN_MASK                       0x00000100
#define _C1INTF_EWARN_LENGTH                     0x00000001

#define _C1INTF_RXWAR_POSITION                   0x00000009
#define _C1INTF_RXWAR_MASK                       0x00000200
#define _C1INTF_RXWAR_LENGTH                     0x00000001

#define _C1INTF_TXWAR_POSITION                   0x0000000A
#define _C1INTF_TXWAR_MASK                       0x00000400
#define _C1INTF_TXWAR_LENGTH                     0x00000001

#define _C1INTF_RXBP_POSITION                    0x0000000B
#define _C1INTF_RXBP_MASK                        0x00000800
#define _C1INTF_RXBP_LENGTH                      0x00000001

#define _C1INTF_TXBP_POSITION                    0x0000000C
#define _C1INTF_TXBP_MASK                        0x00001000
#define _C1INTF_TXBP_LENGTH                      0x00000001

#define _C1INTF_TXBO_POSITION                    0x0000000D
#define _C1INTF_TXBO_MASK                        0x00002000
#define _C1INTF_TXBO_LENGTH                      0x00000001

#define _C1INTE_TBIE_POSITION                    0x00000000
#define _C1INTE_TBIE_MASK                        0x00000001
#define _C1INTE_TBIE_LENGTH                      0x00000001

#define _C1INTE_RBIE_POSITION                    0x00000001
#define _C1INTE_RBIE_MASK                        0x00000002
#define _C1INTE_RBIE_LENGTH                      0x00000001

#define _C1INTE_RBOVIE_POSITION                  0x00000002
#define _C1INTE_RBOVIE_MASK                      0x00000004
#define _C1INTE_RBOVIE_LENGTH                    0x00000001

#define _C1INTE_FIFOIE_POSITION                  0x00000003
#define _C1INTE_FIFOIE_MASK                      0x00000008
#define _C1INTE_FIFOIE_LENGTH                    0x00000001

#define _C1INTE_ERRIE_POSITION                   0x00000005
#define _C1INTE_ERRIE_MASK                       0x00000020
#define _C1INTE_ERRIE_LENGTH                     0x00000001

#define _C1INTE_WAKIE_POSITION                   0x00000006
#define _C1INTE_WAKIE_MASK                       0x00000040
#define _C1INTE_WAKIE_LENGTH                     0x00000001

#define _C1INTE_IVRIE_POSITION                   0x00000007
#define _C1INTE_IVRIE_MASK                       0x00000080
#define _C1INTE_IVRIE_LENGTH                     0x00000001

#define _C1EC_RERRCNT_POSITION                   0x00000000
#define _C1EC_RERRCNT_MASK                       0x000000FF
#define _C1EC_RERRCNT_LENGTH                     0x00000008

#define _C1EC_TERRCNT_POSITION                   0x00000008
#define _C1EC_TERRCNT_MASK                       0x0000FF00
#define _C1EC_TERRCNT_LENGTH                     0x00000008

#define _C1EC_RERRCNT0_POSITION                  0x00000000
#define _C1EC_RERRCNT0_MASK                      0x00000001
#define _C1EC_RERRCNT0_LENGTH                    0x00000001

#define _C1EC_RERRCNT1_POSITION                  0x00000001
#define _C1EC_RERRCNT1_MASK                      0x00000002
#define _C1EC_RERRCNT1_LENGTH                    0x00000001

#define _C1EC_RERRCNT2_POSITION                  0x00000002
#define _C1EC_RERRCNT2_MASK                      0x00000004
#define _C1EC_RERRCNT2_LENGTH                    0x00000001

#define _C1EC_RERRCNT3_POSITION                  0x00000003
#define _C1EC_RERRCNT3_MASK                      0x00000008
#define _C1EC_RERRCNT3_LENGTH                    0x00000001

#define _C1EC_RERRCNT4_POSITION                  0x00000004
#define _C1EC_RERRCNT4_MASK                      0x00000010
#define _C1EC_RERRCNT4_LENGTH                    0x00000001

#define _C1EC_RERRCNT5_POSITION                  0x00000005
#define _C1EC_RERRCNT5_MASK                      0x00000020
#define _C1EC_RERRCNT5_LENGTH                    0x00000001

#define _C1EC_RERRCNT6_POSITION                  0x00000006
#define _C1EC_RERRCNT6_MASK                      0x00000040
#define _C1EC_RERRCNT6_LENGTH                    0x00000001

#define _C1EC_RERRCNT7_POSITION                  0x00000007
#define _C1EC_RERRCNT7_MASK                      0x00000080
#define _C1EC_RERRCNT7_LENGTH                    0x00000001

#define _C1EC_TERRCNT0_POSITION                  0x00000008
#define _C1EC_TERRCNT0_MASK                      0x00000100
#define _C1EC_TERRCNT0_LENGTH                    0x00000001

#define _C1EC_TERRCNT1_POSITION                  0x00000009
#define _C1EC_TERRCNT1_MASK                      0x00000200
#define _C1EC_TERRCNT1_LENGTH                    0x00000001

#define _C1EC_TERRCNT2_POSITION                  0x0000000A
#define _C1EC_TERRCNT2_MASK                      0x00000400
#define _C1EC_TERRCNT2_LENGTH                    0x00000001

#define _C1EC_TERRCNT3_POSITION                  0x0000000B
#define _C1EC_TERRCNT3_MASK                      0x00000800
#define _C1EC_TERRCNT3_LENGTH                    0x00000001

#define _C1EC_TERRCNT4_POSITION                  0x0000000C
#define _C1EC_TERRCNT4_MASK                      0x00001000
#define _C1EC_TERRCNT4_LENGTH                    0x00000001

#define _C1EC_TERRCNT5_POSITION                  0x0000000D
#define _C1EC_TERRCNT5_MASK                      0x00002000
#define _C1EC_TERRCNT5_LENGTH                    0x00000001

#define _C1EC_TERRCNT6_POSITION                  0x0000000E
#define _C1EC_TERRCNT6_MASK                      0x00004000
#define _C1EC_TERRCNT6_LENGTH                    0x00000001

#define _C1EC_TERRCNT7_POSITION                  0x0000000F
#define _C1EC_TERRCNT7_MASK                      0x00008000
#define _C1EC_TERRCNT7_LENGTH                    0x00000001

#define _C1CFG1_BRP_POSITION                     0x00000000
#define _C1CFG1_BRP_MASK                         0x0000003F
#define _C1CFG1_BRP_LENGTH                       0x00000006

#define _C1CFG1_SJW_POSITION                     0x00000006
#define _C1CFG1_SJW_MASK                         0x000000C0
#define _C1CFG1_SJW_LENGTH                       0x00000002

#define _C1CFG1_BRP0_POSITION                    0x00000000
#define _C1CFG1_BRP0_MASK                        0x00000001
#define _C1CFG1_BRP0_LENGTH                      0x00000001

#define _C1CFG1_BRP1_POSITION                    0x00000001
#define _C1CFG1_BRP1_MASK                        0x00000002
#define _C1CFG1_BRP1_LENGTH                      0x00000001

#define _C1CFG1_BRP2_POSITION                    0x00000002
#define _C1CFG1_BRP2_MASK                        0x00000004
#define _C1CFG1_BRP2_LENGTH                      0x00000001

#define _C1CFG1_BRP3_POSITION                    0x00000003
#define _C1CFG1_BRP3_MASK                        0x00000008
#define _C1CFG1_BRP3_LENGTH                      0x00000001

#define _C1CFG1_BRP4_POSITION                    0x00000004
#define _C1CFG1_BRP4_MASK                        0x00000010
#define _C1CFG1_BRP4_LENGTH                      0x00000001

#define _C1CFG1_BRP5_POSITION                    0x00000005
#define _C1CFG1_BRP5_MASK                        0x00000020
#define _C1CFG1_BRP5_LENGTH                      0x00000001

#define _C1CFG1_SJW0_POSITION                    0x00000006
#define _C1CFG1_SJW0_MASK                        0x00000040
#define _C1CFG1_SJW0_LENGTH                      0x00000001

#define _C1CFG1_SJW1_POSITION                    0x00000007
#define _C1CFG1_SJW1_MASK                        0x00000080
#define _C1CFG1_SJW1_LENGTH                      0x00000001

#define _C1CFG2_PRSEG_POSITION                   0x00000000
#define _C1CFG2_PRSEG_MASK                       0x00000007
#define _C1CFG2_PRSEG_LENGTH                     0x00000003

#define _C1CFG2_SEG1PH_POSITION                  0x00000003
#define _C1CFG2_SEG1PH_MASK                      0x00000038
#define _C1CFG2_SEG1PH_LENGTH                    0x00000003

#define _C1CFG2_SAM_POSITION                     0x00000006
#define _C1CFG2_SAM_MASK                         0x00000040
#define _C1CFG2_SAM_LENGTH                       0x00000001

#define _C1CFG2_SEG2PHTS_POSITION                0x00000007
#define _C1CFG2_SEG2PHTS_MASK                    0x00000080
#define _C1CFG2_SEG2PHTS_LENGTH                  0x00000001

#define _C1CFG2_SEG2PH_POSITION                  0x00000008
#define _C1CFG2_SEG2PH_MASK                      0x00000700
#define _C1CFG2_SEG2PH_LENGTH                    0x00000003

#define _C1CFG2_WAKFIL_POSITION                  0x0000000E
#define _C1CFG2_WAKFIL_MASK                      0x00004000
#define _C1CFG2_WAKFIL_LENGTH                    0x00000001

#define _C1CFG2_PRSEG0_POSITION                  0x00000000
#define _C1CFG2_PRSEG0_MASK                      0x00000001
#define _C1CFG2_PRSEG0_LENGTH                    0x00000001

#define _C1CFG2_PRSEG1_POSITION                  0x00000001
#define _C1CFG2_PRSEG1_MASK                      0x00000002
#define _C1CFG2_PRSEG1_LENGTH                    0x00000001

#define _C1CFG2_PRSEG2_POSITION                  0x00000002
#define _C1CFG2_PRSEG2_MASK                      0x00000004
#define _C1CFG2_PRSEG2_LENGTH                    0x00000001

#define _C1CFG2_SEG1PH0_POSITION                 0x00000003
#define _C1CFG2_SEG1PH0_MASK                     0x00000008
#define _C1CFG2_SEG1PH0_LENGTH                   0x00000001

#define _C1CFG2_SEG1PH1_POSITION                 0x00000004
#define _C1CFG2_SEG1PH1_MASK                     0x00000010
#define _C1CFG2_SEG1PH1_LENGTH                   0x00000001

#define _C1CFG2_SEG1PH2_POSITION                 0x00000005
#define _C1CFG2_SEG1PH2_MASK                     0x00000020
#define _C1CFG2_SEG1PH2_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH0_POSITION                 0x00000008
#define _C1CFG2_SEG2PH0_MASK                     0x00000100
#define _C1CFG2_SEG2PH0_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH1_POSITION                 0x00000009
#define _C1CFG2_SEG2PH1_MASK                     0x00000200
#define _C1CFG2_SEG2PH1_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH2_POSITION                 0x0000000A
#define _C1CFG2_SEG2PH2_MASK                     0x00000400
#define _C1CFG2_SEG2PH2_LENGTH                   0x00000001

#define _C1FEN1_FLTEN_POSITION                   0x00000000
#define _C1FEN1_FLTEN_MASK                       0x0000FFFF
#define _C1FEN1_FLTEN_LENGTH                     0x00000010

#define _C1FEN1_FLTEN0_POSITION                  0x00000000
#define _C1FEN1_FLTEN0_MASK                      0x00000001
#define _C1FEN1_FLTEN0_LENGTH                    0x00000001

#define _C1FEN1_FLTEN1_POSITION                  0x00000001
#define _C1FEN1_FLTEN1_MASK                      0x00000002
#define _C1FEN1_FLTEN1_LENGTH                    0x00000001

#define _C1FEN1_FLTEN2_POSITION                  0x00000002
#define _C1FEN1_FLTEN2_MASK                      0x00000004
#define _C1FEN1_FLTEN2_LENGTH                    0x00000001

#define _C1FEN1_FLTEN3_POSITION                  0x00000003
#define _C1FEN1_FLTEN3_MASK                      0x00000008
#define _C1FEN1_FLTEN3_LENGTH                    0x00000001

#define _C1FEN1_FLTEN4_POSITION                  0x00000004
#define _C1FEN1_FLTEN4_MASK                      0x00000010
#define _C1FEN1_FLTEN4_LENGTH                    0x00000001

#define _C1FEN1_FLTEN5_POSITION                  0x00000005
#define _C1FEN1_FLTEN5_MASK                      0x00000020
#define _C1FEN1_FLTEN5_LENGTH                    0x00000001

#define _C1FEN1_FLTEN6_POSITION                  0x00000006
#define _C1FEN1_FLTEN6_MASK                      0x00000040
#define _C1FEN1_FLTEN6_LENGTH                    0x00000001

#define _C1FEN1_FLTEN7_POSITION                  0x00000007
#define _C1FEN1_FLTEN7_MASK                      0x00000080
#define _C1FEN1_FLTEN7_LENGTH                    0x00000001

#define _C1FEN1_FLTEN8_POSITION                  0x00000008
#define _C1FEN1_FLTEN8_MASK                      0x00000100
#define _C1FEN1_FLTEN8_LENGTH                    0x00000001

#define _C1FEN1_FLTEN9_POSITION                  0x00000009
#define _C1FEN1_FLTEN9_MASK                      0x00000200
#define _C1FEN1_FLTEN9_LENGTH                    0x00000001

#define _C1FEN1_FLTEN10_POSITION                 0x0000000A
#define _C1FEN1_FLTEN10_MASK                     0x00000400
#define _C1FEN1_FLTEN10_LENGTH                   0x00000001

#define _C1FEN1_FLTEN11_POSITION                 0x0000000B
#define _C1FEN1_FLTEN11_MASK                     0x00000800
#define _C1FEN1_FLTEN11_LENGTH                   0x00000001

#define _C1FEN1_FLTEN12_POSITION                 0x0000000C
#define _C1FEN1_FLTEN12_MASK                     0x00001000
#define _C1FEN1_FLTEN12_LENGTH                   0x00000001

#define _C1FEN1_FLTEN13_POSITION                 0x0000000D
#define _C1FEN1_FLTEN13_MASK                     0x00002000
#define _C1FEN1_FLTEN13_LENGTH                   0x00000001

#define _C1FEN1_FLTEN14_POSITION                 0x0000000E
#define _C1FEN1_FLTEN14_MASK                     0x00004000
#define _C1FEN1_FLTEN14_LENGTH                   0x00000001

#define _C1FEN1_FLTEN15_POSITION                 0x0000000F
#define _C1FEN1_FLTEN15_MASK                     0x00008000
#define _C1FEN1_FLTEN15_LENGTH                   0x00000001

#define _C1FMSKSEL1_F0MSK_POSITION               0x00000000
#define _C1FMSKSEL1_F0MSK_MASK                   0x00000003
#define _C1FMSKSEL1_F0MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F1MSK_POSITION               0x00000002
#define _C1FMSKSEL1_F1MSK_MASK                   0x0000000C
#define _C1FMSKSEL1_F1MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F2MSK_POSITION               0x00000004
#define _C1FMSKSEL1_F2MSK_MASK                   0x00000030
#define _C1FMSKSEL1_F2MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F3MSK_POSITION               0x00000006
#define _C1FMSKSEL1_F3MSK_MASK                   0x000000C0
#define _C1FMSKSEL1_F3MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F4MSK_POSITION               0x00000008
#define _C1FMSKSEL1_F4MSK_MASK                   0x00000300
#define _C1FMSKSEL1_F4MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F5MSK_POSITION               0x0000000A
#define _C1FMSKSEL1_F5MSK_MASK                   0x00000C00
#define _C1FMSKSEL1_F5MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F6MSK_POSITION               0x0000000C
#define _C1FMSKSEL1_F6MSK_MASK                   0x00003000
#define _C1FMSKSEL1_F6MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F7MSK_POSITION               0x0000000E
#define _C1FMSKSEL1_F7MSK_MASK                   0x0000C000
#define _C1FMSKSEL1_F7MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F0MSK0_POSITION              0x00000000
#define _C1FMSKSEL1_F0MSK0_MASK                  0x00000001
#define _C1FMSKSEL1_F0MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F0MSK1_POSITION              0x00000001
#define _C1FMSKSEL1_F0MSK1_MASK                  0x00000002
#define _C1FMSKSEL1_F0MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F1MSK0_POSITION              0x00000002
#define _C1FMSKSEL1_F1MSK0_MASK                  0x00000004
#define _C1FMSKSEL1_F1MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F1MSK1_POSITION              0x00000003
#define _C1FMSKSEL1_F1MSK1_MASK                  0x00000008
#define _C1FMSKSEL1_F1MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F2MSK0_POSITION              0x00000004
#define _C1FMSKSEL1_F2MSK0_MASK                  0x00000010
#define _C1FMSKSEL1_F2MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F2MSK1_POSITION              0x00000005
#define _C1FMSKSEL1_F2MSK1_MASK                  0x00000020
#define _C1FMSKSEL1_F2MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F3MSK0_POSITION              0x00000006
#define _C1FMSKSEL1_F3MSK0_MASK                  0x00000040
#define _C1FMSKSEL1_F3MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F3MSK1_POSITION              0x00000007
#define _C1FMSKSEL1_F3MSK1_MASK                  0x00000080
#define _C1FMSKSEL1_F3MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F4MSK0_POSITION              0x00000008
#define _C1FMSKSEL1_F4MSK0_MASK                  0x00000100
#define _C1FMSKSEL1_F4MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F4MSK1_POSITION              0x00000009
#define _C1FMSKSEL1_F4MSK1_MASK                  0x00000200
#define _C1FMSKSEL1_F4MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F5MSK0_POSITION              0x0000000A
#define _C1FMSKSEL1_F5MSK0_MASK                  0x00000400
#define _C1FMSKSEL1_F5MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F5MSK1_POSITION              0x0000000B
#define _C1FMSKSEL1_F5MSK1_MASK                  0x00000800
#define _C1FMSKSEL1_F5MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F6MSK0_POSITION              0x0000000C
#define _C1FMSKSEL1_F6MSK0_MASK                  0x00001000
#define _C1FMSKSEL1_F6MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F6MSK1_POSITION              0x0000000D
#define _C1FMSKSEL1_F6MSK1_MASK                  0x00002000
#define _C1FMSKSEL1_F6MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F7MSK0_POSITION              0x0000000E
#define _C1FMSKSEL1_F7MSK0_MASK                  0x00004000
#define _C1FMSKSEL1_F7MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F7MSK1_POSITION              0x0000000F
#define _C1FMSKSEL1_F7MSK1_MASK                  0x00008000
#define _C1FMSKSEL1_F7MSK1_LENGTH                0x00000001

#define _C1FMSKSEL2_F8MSK_POSITION               0x00000000
#define _C1FMSKSEL2_F8MSK_MASK                   0x00000003
#define _C1FMSKSEL2_F8MSK_LENGTH                 0x00000002

#define _C1FMSKSEL2_F9MSK_POSITION               0x00000002
#define _C1FMSKSEL2_F9MSK_MASK                   0x0000000C
#define _C1FMSKSEL2_F9MSK_LENGTH                 0x00000002

#define _C1FMSKSEL2_F10MSK_POSITION              0x00000004
#define _C1FMSKSEL2_F10MSK_MASK                  0x00000030
#define _C1FMSKSEL2_F10MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F11MSK_POSITION              0x00000006
#define _C1FMSKSEL2_F11MSK_MASK                  0x000000C0
#define _C1FMSKSEL2_F11MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F12MSK_POSITION              0x00000008
#define _C1FMSKSEL2_F12MSK_MASK                  0x00000300
#define _C1FMSKSEL2_F12MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F13MSK_POSITION              0x0000000A
#define _C1FMSKSEL2_F13MSK_MASK                  0x00000C00
#define _C1FMSKSEL2_F13MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F14MSK_POSITION              0x0000000C
#define _C1FMSKSEL2_F14MSK_MASK                  0x00003000
#define _C1FMSKSEL2_F14MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F15MSK_POSITION              0x0000000E
#define _C1FMSKSEL2_F15MSK_MASK                  0x0000C000
#define _C1FMSKSEL2_F15MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F8MSK0_POSITION              0x00000000
#define _C1FMSKSEL2_F8MSK0_MASK                  0x00000001
#define _C1FMSKSEL2_F8MSK0_LENGTH                0x00000001

#define _C1FMSKSEL2_F8MSK1_POSITION              0x00000001
#define _C1FMSKSEL2_F8MSK1_MASK                  0x00000002
#define _C1FMSKSEL2_F8MSK1_LENGTH                0x00000001

#define _C1FMSKSEL2_F9MSK0_POSITION              0x00000002
#define _C1FMSKSEL2_F9MSK0_MASK                  0x00000004
#define _C1FMSKSEL2_F9MSK0_LENGTH                0x00000001

#define _C1FMSKSEL2_F9MSK1_POSITION              0x00000003
#define _C1FMSKSEL2_F9MSK1_MASK                  0x00000008
#define _C1FMSKSEL2_F9MSK1_LENGTH                0x00000001

#define _C1FMSKSEL2_F10MSK0_POSITION             0x00000004
#define _C1FMSKSEL2_F10MSK0_MASK                 0x00000010
#define _C1FMSKSEL2_F10MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F10MSK1_POSITION             0x00000005
#define _C1FMSKSEL2_F10MSK1_MASK                 0x00000020
#define _C1FMSKSEL2_F10MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F11MSK0_POSITION             0x00000006
#define _C1FMSKSEL2_F11MSK0_MASK                 0x00000040
#define _C1FMSKSEL2_F11MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F11MSK1_POSITION             0x00000007
#define _C1FMSKSEL2_F11MSK1_MASK                 0x00000080
#define _C1FMSKSEL2_F11MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F12MSK0_POSITION             0x00000008
#define _C1FMSKSEL2_F12MSK0_MASK                 0x00000100
#define _C1FMSKSEL2_F12MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F12MSK1_POSITION             0x00000009
#define _C1FMSKSEL2_F12MSK1_MASK                 0x00000200
#define _C1FMSKSEL2_F12MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F13MSK0_POSITION             0x0000000A
#define _C1FMSKSEL2_F13MSK0_MASK                 0x00000400
#define _C1FMSKSEL2_F13MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F13MSK1_POSITION             0x0000000B
#define _C1FMSKSEL2_F13MSK1_MASK                 0x00000800
#define _C1FMSKSEL2_F13MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F14MSK0_POSITION             0x0000000C
#define _C1FMSKSEL2_F14MSK0_MASK                 0x00001000
#define _C1FMSKSEL2_F14MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F14MSK1_POSITION             0x0000000D
#define _C1FMSKSEL2_F14MSK1_MASK                 0x00002000
#define _C1FMSKSEL2_F14MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F15MSK0_POSITION             0x0000000E
#define _C1FMSKSEL2_F15MSK0_MASK                 0x00004000
#define _C1FMSKSEL2_F15MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F15MSK1_POSITION             0x0000000F
#define _C1FMSKSEL2_F15MSK1_MASK                 0x00008000
#define _C1FMSKSEL2_F15MSK1_LENGTH               0x00000001

#define _C1BUFPNT1_F0BP_POSITION                 0x00000000
#define _C1BUFPNT1_F0BP_MASK                     0x0000000F
#define _C1BUFPNT1_F0BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F1BP_POSITION                 0x00000004
#define _C1BUFPNT1_F1BP_MASK                     0x000000F0
#define _C1BUFPNT1_F1BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F2BP_POSITION                 0x00000008
#define _C1BUFPNT1_F2BP_MASK                     0x00000F00
#define _C1BUFPNT1_F2BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F3BP_POSITION                 0x0000000C
#define _C1BUFPNT1_F3BP_MASK                     0x0000F000
#define _C1BUFPNT1_F3BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F0BP0_POSITION                0x00000000
#define _C1BUFPNT1_F0BP0_MASK                    0x00000001
#define _C1BUFPNT1_F0BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F0BP1_POSITION                0x00000001
#define _C1BUFPNT1_F0BP1_MASK                    0x00000002
#define _C1BUFPNT1_F0BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F0BP2_POSITION                0x00000002
#define _C1BUFPNT1_F0BP2_MASK                    0x00000004
#define _C1BUFPNT1_F0BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F0BP3_POSITION                0x00000003
#define _C1BUFPNT1_F0BP3_MASK                    0x00000008
#define _C1BUFPNT1_F0BP3_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP0_POSITION                0x00000004
#define _C1BUFPNT1_F1BP0_MASK                    0x00000010
#define _C1BUFPNT1_F1BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP1_POSITION                0x00000005
#define _C1BUFPNT1_F1BP1_MASK                    0x00000020
#define _C1BUFPNT1_F1BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP2_POSITION                0x00000006
#define _C1BUFPNT1_F1BP2_MASK                    0x00000040
#define _C1BUFPNT1_F1BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP3_POSITION                0x00000007
#define _C1BUFPNT1_F1BP3_MASK                    0x00000080
#define _C1BUFPNT1_F1BP3_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP0_POSITION                0x00000008
#define _C1BUFPNT1_F2BP0_MASK                    0x00000100
#define _C1BUFPNT1_F2BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP1_POSITION                0x00000009
#define _C1BUFPNT1_F2BP1_MASK                    0x00000200
#define _C1BUFPNT1_F2BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP2_POSITION                0x0000000A
#define _C1BUFPNT1_F2BP2_MASK                    0x00000400
#define _C1BUFPNT1_F2BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP3_POSITION                0x0000000B
#define _C1BUFPNT1_F2BP3_MASK                    0x00000800
#define _C1BUFPNT1_F2BP3_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP0_POSITION                0x0000000C
#define _C1BUFPNT1_F3BP0_MASK                    0x00001000
#define _C1BUFPNT1_F3BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP1_POSITION                0x0000000D
#define _C1BUFPNT1_F3BP1_MASK                    0x00002000
#define _C1BUFPNT1_F3BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP2_POSITION                0x0000000E
#define _C1BUFPNT1_F3BP2_MASK                    0x00004000
#define _C1BUFPNT1_F3BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP3_POSITION                0x0000000F
#define _C1BUFPNT1_F3BP3_MASK                    0x00008000
#define _C1BUFPNT1_F3BP3_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL0_POSITION                0x00000000
#define _C1RXFUL1_RXFUL0_MASK                    0x00000001
#define _C1RXFUL1_RXFUL0_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL1_POSITION                0x00000001
#define _C1RXFUL1_RXFUL1_MASK                    0x00000002
#define _C1RXFUL1_RXFUL1_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL2_POSITION                0x00000002
#define _C1RXFUL1_RXFUL2_MASK                    0x00000004
#define _C1RXFUL1_RXFUL2_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL3_POSITION                0x00000003
#define _C1RXFUL1_RXFUL3_MASK                    0x00000008
#define _C1RXFUL1_RXFUL3_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL4_POSITION                0x00000004
#define _C1RXFUL1_RXFUL4_MASK                    0x00000010
#define _C1RXFUL1_RXFUL4_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL5_POSITION                0x00000005
#define _C1RXFUL1_RXFUL5_MASK                    0x00000020
#define _C1RXFUL1_RXFUL5_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL6_POSITION                0x00000006
#define _C1RXFUL1_RXFUL6_MASK                    0x00000040
#define _C1RXFUL1_RXFUL6_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL7_POSITION                0x00000007
#define _C1RXFUL1_RXFUL7_MASK                    0x00000080
#define _C1RXFUL1_RXFUL7_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL8_POSITION                0x00000008
#define _C1RXFUL1_RXFUL8_MASK                    0x00000100
#define _C1RXFUL1_RXFUL8_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL9_POSITION                0x00000009
#define _C1RXFUL1_RXFUL9_MASK                    0x00000200
#define _C1RXFUL1_RXFUL9_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL10_POSITION               0x0000000A
#define _C1RXFUL1_RXFUL10_MASK                   0x00000400
#define _C1RXFUL1_RXFUL10_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL11_POSITION               0x0000000B
#define _C1RXFUL1_RXFUL11_MASK                   0x00000800
#define _C1RXFUL1_RXFUL11_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL12_POSITION               0x0000000C
#define _C1RXFUL1_RXFUL12_MASK                   0x00001000
#define _C1RXFUL1_RXFUL12_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL13_POSITION               0x0000000D
#define _C1RXFUL1_RXFUL13_MASK                   0x00002000
#define _C1RXFUL1_RXFUL13_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL14_POSITION               0x0000000E
#define _C1RXFUL1_RXFUL14_MASK                   0x00004000
#define _C1RXFUL1_RXFUL14_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL15_POSITION               0x0000000F
#define _C1RXFUL1_RXFUL15_MASK                   0x00008000
#define _C1RXFUL1_RXFUL15_LENGTH                 0x00000001

#define _C1BUFPNT2_F4BP_POSITION                 0x00000000
#define _C1BUFPNT2_F4BP_MASK                     0x0000000F
#define _C1BUFPNT2_F4BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F5BP_POSITION                 0x00000004
#define _C1BUFPNT2_F5BP_MASK                     0x000000F0
#define _C1BUFPNT2_F5BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F6BP_POSITION                 0x00000008
#define _C1BUFPNT2_F6BP_MASK                     0x00000F00
#define _C1BUFPNT2_F6BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F7BP_POSITION                 0x0000000C
#define _C1BUFPNT2_F7BP_MASK                     0x0000F000
#define _C1BUFPNT2_F7BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F4BP0_POSITION                0x00000000
#define _C1BUFPNT2_F4BP0_MASK                    0x00000001
#define _C1BUFPNT2_F4BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F4BP1_POSITION                0x00000001
#define _C1BUFPNT2_F4BP1_MASK                    0x00000002
#define _C1BUFPNT2_F4BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F4BP2_POSITION                0x00000002
#define _C1BUFPNT2_F4BP2_MASK                    0x00000004
#define _C1BUFPNT2_F4BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F4BP3_POSITION                0x00000003
#define _C1BUFPNT2_F4BP3_MASK                    0x00000008
#define _C1BUFPNT2_F4BP3_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP0_POSITION                0x00000004
#define _C1BUFPNT2_F5BP0_MASK                    0x00000010
#define _C1BUFPNT2_F5BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP1_POSITION                0x00000005
#define _C1BUFPNT2_F5BP1_MASK                    0x00000020
#define _C1BUFPNT2_F5BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP2_POSITION                0x00000006
#define _C1BUFPNT2_F5BP2_MASK                    0x00000040
#define _C1BUFPNT2_F5BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP3_POSITION                0x00000007
#define _C1BUFPNT2_F5BP3_MASK                    0x00000080
#define _C1BUFPNT2_F5BP3_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP0_POSITION                0x00000008
#define _C1BUFPNT2_F6BP0_MASK                    0x00000100
#define _C1BUFPNT2_F6BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP1_POSITION                0x00000009
#define _C1BUFPNT2_F6BP1_MASK                    0x00000200
#define _C1BUFPNT2_F6BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP2_POSITION                0x0000000A
#define _C1BUFPNT2_F6BP2_MASK                    0x00000400
#define _C1BUFPNT2_F6BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP3_POSITION                0x0000000B
#define _C1BUFPNT2_F6BP3_MASK                    0x00000800
#define _C1BUFPNT2_F6BP3_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP0_POSITION                0x0000000C
#define _C1BUFPNT2_F7BP0_MASK                    0x00001000
#define _C1BUFPNT2_F7BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP1_POSITION                0x0000000D
#define _C1BUFPNT2_F7BP1_MASK                    0x00002000
#define _C1BUFPNT2_F7BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP2_POSITION                0x0000000E
#define _C1BUFPNT2_F7BP2_MASK                    0x00004000
#define _C1BUFPNT2_F7BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP3_POSITION                0x0000000F
#define _C1BUFPNT2_F7BP3_MASK                    0x00008000
#define _C1BUFPNT2_F7BP3_LENGTH                  0x00000001

#define _C1RXFUL2_RXFUL16_POSITION               0x00000000
#define _C1RXFUL2_RXFUL16_MASK                   0x00000001
#define _C1RXFUL2_RXFUL16_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL17_POSITION               0x00000001
#define _C1RXFUL2_RXFUL17_MASK                   0x00000002
#define _C1RXFUL2_RXFUL17_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL18_POSITION               0x00000002
#define _C1RXFUL2_RXFUL18_MASK                   0x00000004
#define _C1RXFUL2_RXFUL18_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL19_POSITION               0x00000003
#define _C1RXFUL2_RXFUL19_MASK                   0x00000008
#define _C1RXFUL2_RXFUL19_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL20_POSITION               0x00000004
#define _C1RXFUL2_RXFUL20_MASK                   0x00000010
#define _C1RXFUL2_RXFUL20_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL21_POSITION               0x00000005
#define _C1RXFUL2_RXFUL21_MASK                   0x00000020
#define _C1RXFUL2_RXFUL21_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL22_POSITION               0x00000006
#define _C1RXFUL2_RXFUL22_MASK                   0x00000040
#define _C1RXFUL2_RXFUL22_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL23_POSITION               0x00000007
#define _C1RXFUL2_RXFUL23_MASK                   0x00000080
#define _C1RXFUL2_RXFUL23_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL24_POSITION               0x00000008
#define _C1RXFUL2_RXFUL24_MASK                   0x00000100
#define _C1RXFUL2_RXFUL24_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL25_POSITION               0x00000009
#define _C1RXFUL2_RXFUL25_MASK                   0x00000200
#define _C1RXFUL2_RXFUL25_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL26_POSITION               0x0000000A
#define _C1RXFUL2_RXFUL26_MASK                   0x00000400
#define _C1RXFUL2_RXFUL26_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL27_POSITION               0x0000000B
#define _C1RXFUL2_RXFUL27_MASK                   0x00000800
#define _C1RXFUL2_RXFUL27_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL28_POSITION               0x0000000C
#define _C1RXFUL2_RXFUL28_MASK                   0x00001000
#define _C1RXFUL2_RXFUL28_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL29_POSITION               0x0000000D
#define _C1RXFUL2_RXFUL29_MASK                   0x00002000
#define _C1RXFUL2_RXFUL29_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL30_POSITION               0x0000000E
#define _C1RXFUL2_RXFUL30_MASK                   0x00004000
#define _C1RXFUL2_RXFUL30_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL31_POSITION               0x0000000F
#define _C1RXFUL2_RXFUL31_MASK                   0x00008000
#define _C1RXFUL2_RXFUL31_LENGTH                 0x00000001

#define _C1BUFPNT3_F8BP_POSITION                 0x00000000
#define _C1BUFPNT3_F8BP_MASK                     0x0000000F
#define _C1BUFPNT3_F8BP_LENGTH                   0x00000004

#define _C1BUFPNT3_F9BP_POSITION                 0x00000004
#define _C1BUFPNT3_F9BP_MASK                     0x000000F0
#define _C1BUFPNT3_F9BP_LENGTH                   0x00000004

#define _C1BUFPNT3_F10BP_POSITION                0x00000008
#define _C1BUFPNT3_F10BP_MASK                    0x00000F00
#define _C1BUFPNT3_F10BP_LENGTH                  0x00000004

#define _C1BUFPNT3_F11BP_POSITION                0x0000000C
#define _C1BUFPNT3_F11BP_MASK                    0x0000F000
#define _C1BUFPNT3_F11BP_LENGTH                  0x00000004

#define _C1BUFPNT3_F8BP0_POSITION                0x00000000
#define _C1BUFPNT3_F8BP0_MASK                    0x00000001
#define _C1BUFPNT3_F8BP0_LENGTH                  0x00000001

#define _C1BUFPNT3_F8BP1_POSITION                0x00000001
#define _C1BUFPNT3_F8BP1_MASK                    0x00000002
#define _C1BUFPNT3_F8BP1_LENGTH                  0x00000001

#define _C1BUFPNT3_F8BP2_POSITION                0x00000002
#define _C1BUFPNT3_F8BP2_MASK                    0x00000004
#define _C1BUFPNT3_F8BP2_LENGTH                  0x00000001

#define _C1BUFPNT3_F8BP3_POSITION                0x00000003
#define _C1BUFPNT3_F8BP3_MASK                    0x00000008
#define _C1BUFPNT3_F8BP3_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP0_POSITION                0x00000004
#define _C1BUFPNT3_F9BP0_MASK                    0x00000010
#define _C1BUFPNT3_F9BP0_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP1_POSITION                0x00000005
#define _C1BUFPNT3_F9BP1_MASK                    0x00000020
#define _C1BUFPNT3_F9BP1_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP2_POSITION                0x00000006
#define _C1BUFPNT3_F9BP2_MASK                    0x00000040
#define _C1BUFPNT3_F9BP2_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP3_POSITION                0x00000007
#define _C1BUFPNT3_F9BP3_MASK                    0x00000080
#define _C1BUFPNT3_F9BP3_LENGTH                  0x00000001

#define _C1BUFPNT3_F10BP0_POSITION               0x00000008
#define _C1BUFPNT3_F10BP0_MASK                   0x00000100
#define _C1BUFPNT3_F10BP0_LENGTH                 0x00000001

#define _C1BUFPNT3_F10BP1_POSITION               0x00000009
#define _C1BUFPNT3_F10BP1_MASK                   0x00000200
#define _C1BUFPNT3_F10BP1_LENGTH                 0x00000001

#define _C1BUFPNT3_F10BP2_POSITION               0x0000000A
#define _C1BUFPNT3_F10BP2_MASK                   0x00000400
#define _C1BUFPNT3_F10BP2_LENGTH                 0x00000001

#define _C1BUFPNT3_F10BP3_POSITION               0x0000000B
#define _C1BUFPNT3_F10BP3_MASK                   0x00000800
#define _C1BUFPNT3_F10BP3_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP0_POSITION               0x0000000C
#define _C1BUFPNT3_F11BP0_MASK                   0x00001000
#define _C1BUFPNT3_F11BP0_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP1_POSITION               0x0000000D
#define _C1BUFPNT3_F11BP1_MASK                   0x00002000
#define _C1BUFPNT3_F11BP1_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP2_POSITION               0x0000000E
#define _C1BUFPNT3_F11BP2_MASK                   0x00004000
#define _C1BUFPNT3_F11BP2_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP3_POSITION               0x0000000F
#define _C1BUFPNT3_F11BP3_MASK                   0x00008000
#define _C1BUFPNT3_F11BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP_POSITION                0x00000000
#define _C1BUFPNT4_F12BP_MASK                    0x0000000F
#define _C1BUFPNT4_F12BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F13BP_POSITION                0x00000004
#define _C1BUFPNT4_F13BP_MASK                    0x000000F0
#define _C1BUFPNT4_F13BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F14BP_POSITION                0x00000008
#define _C1BUFPNT4_F14BP_MASK                    0x00000F00
#define _C1BUFPNT4_F14BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F15BP_POSITION                0x0000000C
#define _C1BUFPNT4_F15BP_MASK                    0x0000F000
#define _C1BUFPNT4_F15BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F12BP0_POSITION               0x00000000
#define _C1BUFPNT4_F12BP0_MASK                   0x00000001
#define _C1BUFPNT4_F12BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP1_POSITION               0x00000001
#define _C1BUFPNT4_F12BP1_MASK                   0x00000002
#define _C1BUFPNT4_F12BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP2_POSITION               0x00000002
#define _C1BUFPNT4_F12BP2_MASK                   0x00000004
#define _C1BUFPNT4_F12BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP3_POSITION               0x00000003
#define _C1BUFPNT4_F12BP3_MASK                   0x00000008
#define _C1BUFPNT4_F12BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP0_POSITION               0x00000004
#define _C1BUFPNT4_F13BP0_MASK                   0x00000010
#define _C1BUFPNT4_F13BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP1_POSITION               0x00000005
#define _C1BUFPNT4_F13BP1_MASK                   0x00000020
#define _C1BUFPNT4_F13BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP2_POSITION               0x00000006
#define _C1BUFPNT4_F13BP2_MASK                   0x00000040
#define _C1BUFPNT4_F13BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP3_POSITION               0x00000007
#define _C1BUFPNT4_F13BP3_MASK                   0x00000080
#define _C1BUFPNT4_F13BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP0_POSITION               0x00000008
#define _C1BUFPNT4_F14BP0_MASK                   0x00000100
#define _C1BUFPNT4_F14BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP1_POSITION               0x00000009
#define _C1BUFPNT4_F14BP1_MASK                   0x00000200
#define _C1BUFPNT4_F14BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP2_POSITION               0x0000000A
#define _C1BUFPNT4_F14BP2_MASK                   0x00000400
#define _C1BUFPNT4_F14BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP3_POSITION               0x0000000B
#define _C1BUFPNT4_F14BP3_MASK                   0x00000800
#define _C1BUFPNT4_F14BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP0_POSITION               0x0000000C
#define _C1BUFPNT4_F15BP0_MASK                   0x00001000
#define _C1BUFPNT4_F15BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP1_POSITION               0x0000000D
#define _C1BUFPNT4_F15BP1_MASK                   0x00002000
#define _C1BUFPNT4_F15BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP2_POSITION               0x0000000E
#define _C1BUFPNT4_F15BP2_MASK                   0x00004000
#define _C1BUFPNT4_F15BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP3_POSITION               0x0000000F
#define _C1BUFPNT4_F15BP3_MASK                   0x00008000
#define _C1BUFPNT4_F15BP3_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF0_POSITION                0x00000000
#define _C1RXOVF1_RXOVF0_MASK                    0x00000001
#define _C1RXOVF1_RXOVF0_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF1_POSITION                0x00000001
#define _C1RXOVF1_RXOVF1_MASK                    0x00000002
#define _C1RXOVF1_RXOVF1_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF2_POSITION                0x00000002
#define _C1RXOVF1_RXOVF2_MASK                    0x00000004
#define _C1RXOVF1_RXOVF2_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF3_POSITION                0x00000003
#define _C1RXOVF1_RXOVF3_MASK                    0x00000008
#define _C1RXOVF1_RXOVF3_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF4_POSITION                0x00000004
#define _C1RXOVF1_RXOVF4_MASK                    0x00000010
#define _C1RXOVF1_RXOVF4_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF5_POSITION                0x00000005
#define _C1RXOVF1_RXOVF5_MASK                    0x00000020
#define _C1RXOVF1_RXOVF5_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF6_POSITION                0x00000006
#define _C1RXOVF1_RXOVF6_MASK                    0x00000040
#define _C1RXOVF1_RXOVF6_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF7_POSITION                0x00000007
#define _C1RXOVF1_RXOVF7_MASK                    0x00000080
#define _C1RXOVF1_RXOVF7_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF8_POSITION                0x00000008
#define _C1RXOVF1_RXOVF8_MASK                    0x00000100
#define _C1RXOVF1_RXOVF8_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF9_POSITION                0x00000009
#define _C1RXOVF1_RXOVF9_MASK                    0x00000200
#define _C1RXOVF1_RXOVF9_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF10_POSITION               0x0000000A
#define _C1RXOVF1_RXOVF10_MASK                   0x00000400
#define _C1RXOVF1_RXOVF10_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF11_POSITION               0x0000000B
#define _C1RXOVF1_RXOVF11_MASK                   0x00000800
#define _C1RXOVF1_RXOVF11_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF12_POSITION               0x0000000C
#define _C1RXOVF1_RXOVF12_MASK                   0x00001000
#define _C1RXOVF1_RXOVF12_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF13_POSITION               0x0000000D
#define _C1RXOVF1_RXOVF13_MASK                   0x00002000
#define _C1RXOVF1_RXOVF13_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF14_POSITION               0x0000000E
#define _C1RXOVF1_RXOVF14_MASK                   0x00004000
#define _C1RXOVF1_RXOVF14_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF15_POSITION               0x0000000F
#define _C1RXOVF1_RXOVF15_MASK                   0x00008000
#define _C1RXOVF1_RXOVF15_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF16_POSITION               0x00000000
#define _C1RXOVF2_RXOVF16_MASK                   0x00000001
#define _C1RXOVF2_RXOVF16_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF17_POSITION               0x00000001
#define _C1RXOVF2_RXOVF17_MASK                   0x00000002
#define _C1RXOVF2_RXOVF17_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF18_POSITION               0x00000002
#define _C1RXOVF2_RXOVF18_MASK                   0x00000004
#define _C1RXOVF2_RXOVF18_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF19_POSITION               0x00000003
#define _C1RXOVF2_RXOVF19_MASK                   0x00000008
#define _C1RXOVF2_RXOVF19_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF20_POSITION               0x00000004
#define _C1RXOVF2_RXOVF20_MASK                   0x00000010
#define _C1RXOVF2_RXOVF20_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF21_POSITION               0x00000005
#define _C1RXOVF2_RXOVF21_MASK                   0x00000020
#define _C1RXOVF2_RXOVF21_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF22_POSITION               0x00000006
#define _C1RXOVF2_RXOVF22_MASK                   0x00000040
#define _C1RXOVF2_RXOVF22_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF23_POSITION               0x00000007
#define _C1RXOVF2_RXOVF23_MASK                   0x00000080
#define _C1RXOVF2_RXOVF23_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF24_POSITION               0x00000008
#define _C1RXOVF2_RXOVF24_MASK                   0x00000100
#define _C1RXOVF2_RXOVF24_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF25_POSITION               0x00000009
#define _C1RXOVF2_RXOVF25_MASK                   0x00000200
#define _C1RXOVF2_RXOVF25_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF26_POSITION               0x0000000A
#define _C1RXOVF2_RXOVF26_MASK                   0x00000400
#define _C1RXOVF2_RXOVF26_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF27_POSITION               0x0000000B
#define _C1RXOVF2_RXOVF27_MASK                   0x00000800
#define _C1RXOVF2_RXOVF27_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF28_POSITION               0x0000000C
#define _C1RXOVF2_RXOVF28_MASK                   0x00001000
#define _C1RXOVF2_RXOVF28_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF29_POSITION               0x0000000D
#define _C1RXOVF2_RXOVF29_MASK                   0x00002000
#define _C1RXOVF2_RXOVF29_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF30_POSITION               0x0000000E
#define _C1RXOVF2_RXOVF30_MASK                   0x00004000
#define _C1RXOVF2_RXOVF30_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF31_POSITION               0x0000000F
#define _C1RXOVF2_RXOVF31_MASK                   0x00008000
#define _C1RXOVF2_RXOVF31_LENGTH                 0x00000001

#define _C1RXM0SID_EID16_POSITION                0x00000000
#define _C1RXM0SID_EID16_MASK                    0x00000001
#define _C1RXM0SID_EID16_LENGTH                  0x00000001

#define _C1RXM0SID_EID17_POSITION                0x00000001
#define _C1RXM0SID_EID17_MASK                    0x00000002
#define _C1RXM0SID_EID17_LENGTH                  0x00000001

#define _C1RXM0SID_MIDE_POSITION                 0x00000003
#define _C1RXM0SID_MIDE_MASK                     0x00000008
#define _C1RXM0SID_MIDE_LENGTH                   0x00000001

#define _C1RXM0SID_SID0_POSITION                 0x00000005
#define _C1RXM0SID_SID0_MASK                     0x00000020
#define _C1RXM0SID_SID0_LENGTH                   0x00000001

#define _C1RXM0SID_SID1_POSITION                 0x00000006
#define _C1RXM0SID_SID1_MASK                     0x00000040
#define _C1RXM0SID_SID1_LENGTH                   0x00000001

#define _C1RXM0SID_SID2_POSITION                 0x00000007
#define _C1RXM0SID_SID2_MASK                     0x00000080
#define _C1RXM0SID_SID2_LENGTH                   0x00000001

#define _C1RXM0SID_SID3_POSITION                 0x00000008
#define _C1RXM0SID_SID3_MASK                     0x00000100
#define _C1RXM0SID_SID3_LENGTH                   0x00000001

#define _C1RXM0SID_SID4_POSITION                 0x00000009
#define _C1RXM0SID_SID4_MASK                     0x00000200
#define _C1RXM0SID_SID4_LENGTH                   0x00000001

#define _C1RXM0SID_SID5_POSITION                 0x0000000A
#define _C1RXM0SID_SID5_MASK                     0x00000400
#define _C1RXM0SID_SID5_LENGTH                   0x00000001

#define _C1RXM0SID_SID6_POSITION                 0x0000000B
#define _C1RXM0SID_SID6_MASK                     0x00000800
#define _C1RXM0SID_SID6_LENGTH                   0x00000001

#define _C1RXM0SID_SID7_POSITION                 0x0000000C
#define _C1RXM0SID_SID7_MASK                     0x00001000
#define _C1RXM0SID_SID7_LENGTH                   0x00000001

#define _C1RXM0SID_SID8_POSITION                 0x0000000D
#define _C1RXM0SID_SID8_MASK                     0x00002000
#define _C1RXM0SID_SID8_LENGTH                   0x00000001

#define _C1RXM0SID_SID9_POSITION                 0x0000000E
#define _C1RXM0SID_SID9_MASK                     0x00004000
#define _C1RXM0SID_SID9_LENGTH                   0x00000001

#define _C1RXM0SID_SID10_POSITION                0x0000000F
#define _C1RXM0SID_SID10_MASK                    0x00008000
#define _C1RXM0SID_SID10_LENGTH                  0x00000001

#define _C1RXM0SID_EID_POSITION                  0x00000000
#define _C1RXM0SID_EID_MASK                      0x00000003
#define _C1RXM0SID_EID_LENGTH                    0x00000002

#define _C1RXM0SID_SID_POSITION                  0x00000005
#define _C1RXM0SID_SID_MASK                      0x0000FFE0
#define _C1RXM0SID_SID_LENGTH                    0x0000000B

#define _C1TR01CON_TX0PRI_POSITION               0x00000000
#define _C1TR01CON_TX0PRI_MASK                   0x00000003
#define _C1TR01CON_TX0PRI_LENGTH                 0x00000002

#define _C1TR01CON_RTREN0_POSITION               0x00000002
#define _C1TR01CON_RTREN0_MASK                   0x00000004
#define _C1TR01CON_RTREN0_LENGTH                 0x00000001

#define _C1TR01CON_TXREQ0_POSITION               0x00000003
#define _C1TR01CON_TXREQ0_MASK                   0x00000008
#define _C1TR01CON_TXREQ0_LENGTH                 0x00000001

#define _C1TR01CON_TXERR0_POSITION               0x00000004
#define _C1TR01CON_TXERR0_MASK                   0x00000010
#define _C1TR01CON_TXERR0_LENGTH                 0x00000001

#define _C1TR01CON_TXLARB0_POSITION              0x00000005
#define _C1TR01CON_TXLARB0_MASK                  0x00000020
#define _C1TR01CON_TXLARB0_LENGTH                0x00000001

#define _C1TR01CON_TXABT0_POSITION               0x00000006
#define _C1TR01CON_TXABT0_MASK                   0x00000040
#define _C1TR01CON_TXABT0_LENGTH                 0x00000001

#define _C1TR01CON_TXEN0_POSITION                0x00000007
#define _C1TR01CON_TXEN0_MASK                    0x00000080
#define _C1TR01CON_TXEN0_LENGTH                  0x00000001

#define _C1TR01CON_TX1PRI_POSITION               0x00000008
#define _C1TR01CON_TX1PRI_MASK                   0x00000300
#define _C1TR01CON_TX1PRI_LENGTH                 0x00000002

#define _C1TR01CON_RTREN1_POSITION               0x0000000A
#define _C1TR01CON_RTREN1_MASK                   0x00000400
#define _C1TR01CON_RTREN1_LENGTH                 0x00000001

#define _C1TR01CON_TXREQ1_POSITION               0x0000000B
#define _C1TR01CON_TXREQ1_MASK                   0x00000800
#define _C1TR01CON_TXREQ1_LENGTH                 0x00000001

#define _C1TR01CON_TXERR1_POSITION               0x0000000C
#define _C1TR01CON_TXERR1_MASK                   0x00001000
#define _C1TR01CON_TXERR1_LENGTH                 0x00000001

#define _C1TR01CON_TXLARB1_POSITION              0x0000000D
#define _C1TR01CON_TXLARB1_MASK                  0x00002000
#define _C1TR01CON_TXLARB1_LENGTH                0x00000001

#define _C1TR01CON_TXABT1_POSITION               0x0000000E
#define _C1TR01CON_TXABT1_MASK                   0x00004000
#define _C1TR01CON_TXABT1_LENGTH                 0x00000001

#define _C1TR01CON_TXEN1_POSITION                0x0000000F
#define _C1TR01CON_TXEN1_MASK                    0x00008000
#define _C1TR01CON_TXEN1_LENGTH                  0x00000001

#define _C1TR01CON_TX0PRI0_POSITION              0x00000000
#define _C1TR01CON_TX0PRI0_MASK                  0x00000001
#define _C1TR01CON_TX0PRI0_LENGTH                0x00000001

#define _C1TR01CON_TX0PRI1_POSITION              0x00000001
#define _C1TR01CON_TX0PRI1_MASK                  0x00000002
#define _C1TR01CON_TX0PRI1_LENGTH                0x00000001

#define _C1TR01CON_TX1PRI0_POSITION              0x00000008
#define _C1TR01CON_TX1PRI0_MASK                  0x00000100
#define _C1TR01CON_TX1PRI0_LENGTH                0x00000001

#define _C1TR01CON_TX1PRI1_POSITION              0x00000009
#define _C1TR01CON_TX1PRI1_MASK                  0x00000200
#define _C1TR01CON_TX1PRI1_LENGTH                0x00000001

#define _C1RXM0EID_EID0_POSITION                 0x00000000
#define _C1RXM0EID_EID0_MASK                     0x00000001
#define _C1RXM0EID_EID0_LENGTH                   0x00000001

#define _C1RXM0EID_EID1_POSITION                 0x00000001
#define _C1RXM0EID_EID1_MASK                     0x00000002
#define _C1RXM0EID_EID1_LENGTH                   0x00000001

#define _C1RXM0EID_EID2_POSITION                 0x00000002
#define _C1RXM0EID_EID2_MASK                     0x00000004
#define _C1RXM0EID_EID2_LENGTH                   0x00000001

#define _C1RXM0EID_EID3_POSITION                 0x00000003
#define _C1RXM0EID_EID3_MASK                     0x00000008
#define _C1RXM0EID_EID3_LENGTH                   0x00000001

#define _C1RXM0EID_EID4_POSITION                 0x00000004
#define _C1RXM0EID_EID4_MASK                     0x00000010
#define _C1RXM0EID_EID4_LENGTH                   0x00000001

#define _C1RXM0EID_EID5_POSITION                 0x00000005
#define _C1RXM0EID_EID5_MASK                     0x00000020
#define _C1RXM0EID_EID5_LENGTH                   0x00000001

#define _C1RXM0EID_EID6_POSITION                 0x00000006
#define _C1RXM0EID_EID6_MASK                     0x00000040
#define _C1RXM0EID_EID6_LENGTH                   0x00000001

#define _C1RXM0EID_EID7_POSITION                 0x00000007
#define _C1RXM0EID_EID7_MASK                     0x00000080
#define _C1RXM0EID_EID7_LENGTH                   0x00000001

#define _C1RXM0EID_EID8_POSITION                 0x00000008
#define _C1RXM0EID_EID8_MASK                     0x00000100
#define _C1RXM0EID_EID8_LENGTH                   0x00000001

#define _C1RXM0EID_EID9_POSITION                 0x00000009
#define _C1RXM0EID_EID9_MASK                     0x00000200
#define _C1RXM0EID_EID9_LENGTH                   0x00000001

#define _C1RXM0EID_EID10_POSITION                0x0000000A
#define _C1RXM0EID_EID10_MASK                    0x00000400
#define _C1RXM0EID_EID10_LENGTH                  0x00000001

#define _C1RXM0EID_EID11_POSITION                0x0000000B
#define _C1RXM0EID_EID11_MASK                    0x00000800
#define _C1RXM0EID_EID11_LENGTH                  0x00000001

#define _C1RXM0EID_EID12_POSITION                0x0000000C
#define _C1RXM0EID_EID12_MASK                    0x00001000
#define _C1RXM0EID_EID12_LENGTH                  0x00000001

#define _C1RXM0EID_EID13_POSITION                0x0000000D
#define _C1RXM0EID_EID13_MASK                    0x00002000
#define _C1RXM0EID_EID13_LENGTH                  0x00000001

#define _C1RXM0EID_EID14_POSITION                0x0000000E
#define _C1RXM0EID_EID14_MASK                    0x00004000
#define _C1RXM0EID_EID14_LENGTH                  0x00000001

#define _C1RXM0EID_EID15_POSITION                0x0000000F
#define _C1RXM0EID_EID15_MASK                    0x00008000
#define _C1RXM0EID_EID15_LENGTH                  0x00000001

#define _C1RXM0EID_EID_POSITION                  0x00000000
#define _C1RXM0EID_EID_MASK                      0x0000FFFF
#define _C1RXM0EID_EID_LENGTH                    0x00000010

#define _C1TR23CON_TX2PRI_POSITION               0x00000000
#define _C1TR23CON_TX2PRI_MASK                   0x00000003
#define _C1TR23CON_TX2PRI_LENGTH                 0x00000002

#define _C1TR23CON_RTREN2_POSITION               0x00000002
#define _C1TR23CON_RTREN2_MASK                   0x00000004
#define _C1TR23CON_RTREN2_LENGTH                 0x00000001

#define _C1TR23CON_TXREQ2_POSITION               0x00000003
#define _C1TR23CON_TXREQ2_MASK                   0x00000008
#define _C1TR23CON_TXREQ2_LENGTH                 0x00000001

#define _C1TR23CON_TXERR2_POSITION               0x00000004
#define _C1TR23CON_TXERR2_MASK                   0x00000010
#define _C1TR23CON_TXERR2_LENGTH                 0x00000001

#define _C1TR23CON_TXLARB2_POSITION              0x00000005
#define _C1TR23CON_TXLARB2_MASK                  0x00000020
#define _C1TR23CON_TXLARB2_LENGTH                0x00000001

#define _C1TR23CON_TXABT2_POSITION               0x00000006
#define _C1TR23CON_TXABT2_MASK                   0x00000040
#define _C1TR23CON_TXABT2_LENGTH                 0x00000001

#define _C1TR23CON_TXEN2_POSITION                0x00000007
#define _C1TR23CON_TXEN2_MASK                    0x00000080
#define _C1TR23CON_TXEN2_LENGTH                  0x00000001

#define _C1TR23CON_TX3PRI_POSITION               0x00000008
#define _C1TR23CON_TX3PRI_MASK                   0x00000300
#define _C1TR23CON_TX3PRI_LENGTH                 0x00000002

#define _C1TR23CON_RTREN3_POSITION               0x0000000A
#define _C1TR23CON_RTREN3_MASK                   0x00000400
#define _C1TR23CON_RTREN3_LENGTH                 0x00000001

#define _C1TR23CON_TXREQ3_POSITION               0x0000000B
#define _C1TR23CON_TXREQ3_MASK                   0x00000800
#define _C1TR23CON_TXREQ3_LENGTH                 0x00000001

#define _C1TR23CON_TXERR3_POSITION               0x0000000C
#define _C1TR23CON_TXERR3_MASK                   0x00001000
#define _C1TR23CON_TXERR3_LENGTH                 0x00000001

#define _C1TR23CON_TXLARB3_POSITION              0x0000000D
#define _C1TR23CON_TXLARB3_MASK                  0x00002000
#define _C1TR23CON_TXLARB3_LENGTH                0x00000001

#define _C1TR23CON_TXABT3_POSITION               0x0000000E
#define _C1TR23CON_TXABT3_MASK                   0x00004000
#define _C1TR23CON_TXABT3_LENGTH                 0x00000001

#define _C1TR23CON_TXEN3_POSITION                0x0000000F
#define _C1TR23CON_TXEN3_MASK                    0x00008000
#define _C1TR23CON_TXEN3_LENGTH                  0x00000001

#define _C1TR23CON_TX2PRI0_POSITION              0x00000000
#define _C1TR23CON_TX2PRI0_MASK                  0x00000001
#define _C1TR23CON_TX2PRI0_LENGTH                0x00000001

#define _C1TR23CON_TX2PRI1_POSITION              0x00000001
#define _C1TR23CON_TX2PRI1_MASK                  0x00000002
#define _C1TR23CON_TX2PRI1_LENGTH                0x00000001

#define _C1TR23CON_TX3PRI0_POSITION              0x00000008
#define _C1TR23CON_TX3PRI0_MASK                  0x00000100
#define _C1TR23CON_TX3PRI0_LENGTH                0x00000001

#define _C1TR23CON_TX3PRI1_POSITION              0x00000009
#define _C1TR23CON_TX3PRI1_MASK                  0x00000200
#define _C1TR23CON_TX3PRI1_LENGTH                0x00000001

#define _C1RXM1SID_EID16_POSITION                0x00000000
#define _C1RXM1SID_EID16_MASK                    0x00000001
#define _C1RXM1SID_EID16_LENGTH                  0x00000001

#define _C1RXM1SID_EID17_POSITION                0x00000001
#define _C1RXM1SID_EID17_MASK                    0x00000002
#define _C1RXM1SID_EID17_LENGTH                  0x00000001

#define _C1RXM1SID_MIDE_POSITION                 0x00000003
#define _C1RXM1SID_MIDE_MASK                     0x00000008
#define _C1RXM1SID_MIDE_LENGTH                   0x00000001

#define _C1RXM1SID_SID0_POSITION                 0x00000005
#define _C1RXM1SID_SID0_MASK                     0x00000020
#define _C1RXM1SID_SID0_LENGTH                   0x00000001

#define _C1RXM1SID_SID1_POSITION                 0x00000006
#define _C1RXM1SID_SID1_MASK                     0x00000040
#define _C1RXM1SID_SID1_LENGTH                   0x00000001

#define _C1RXM1SID_SID2_POSITION                 0x00000007
#define _C1RXM1SID_SID2_MASK                     0x00000080
#define _C1RXM1SID_SID2_LENGTH                   0x00000001

#define _C1RXM1SID_SID3_POSITION                 0x00000008
#define _C1RXM1SID_SID3_MASK                     0x00000100
#define _C1RXM1SID_SID3_LENGTH                   0x00000001

#define _C1RXM1SID_SID4_POSITION                 0x00000009
#define _C1RXM1SID_SID4_MASK                     0x00000200
#define _C1RXM1SID_SID4_LENGTH                   0x00000001

#define _C1RXM1SID_SID5_POSITION                 0x0000000A
#define _C1RXM1SID_SID5_MASK                     0x00000400
#define _C1RXM1SID_SID5_LENGTH                   0x00000001

#define _C1RXM1SID_SID6_POSITION                 0x0000000B
#define _C1RXM1SID_SID6_MASK                     0x00000800
#define _C1RXM1SID_SID6_LENGTH                   0x00000001

#define _C1RXM1SID_SID7_POSITION                 0x0000000C
#define _C1RXM1SID_SID7_MASK                     0x00001000
#define _C1RXM1SID_SID7_LENGTH                   0x00000001

#define _C1RXM1SID_SID8_POSITION                 0x0000000D
#define _C1RXM1SID_SID8_MASK                     0x00002000
#define _C1RXM1SID_SID8_LENGTH                   0x00000001

#define _C1RXM1SID_SID9_POSITION                 0x0000000E
#define _C1RXM1SID_SID9_MASK                     0x00004000
#define _C1RXM1SID_SID9_LENGTH                   0x00000001

#define _C1RXM1SID_SID10_POSITION                0x0000000F
#define _C1RXM1SID_SID10_MASK                    0x00008000
#define _C1RXM1SID_SID10_LENGTH                  0x00000001

#define _C1RXM1SID_EID_POSITION                  0x00000000
#define _C1RXM1SID_EID_MASK                      0x00000003
#define _C1RXM1SID_EID_LENGTH                    0x00000002

#define _C1RXM1SID_SID_POSITION                  0x00000005
#define _C1RXM1SID_SID_MASK                      0x0000FFE0
#define _C1RXM1SID_SID_LENGTH                    0x0000000B

#define _C1TR45CON_TX4PRI_POSITION               0x00000000
#define _C1TR45CON_TX4PRI_MASK                   0x00000003
#define _C1TR45CON_TX4PRI_LENGTH                 0x00000002

#define _C1TR45CON_RTREN4_POSITION               0x00000002
#define _C1TR45CON_RTREN4_MASK                   0x00000004
#define _C1TR45CON_RTREN4_LENGTH                 0x00000001

#define _C1TR45CON_TXREQ4_POSITION               0x00000003
#define _C1TR45CON_TXREQ4_MASK                   0x00000008
#define _C1TR45CON_TXREQ4_LENGTH                 0x00000001

#define _C1TR45CON_TXERR4_POSITION               0x00000004
#define _C1TR45CON_TXERR4_MASK                   0x00000010
#define _C1TR45CON_TXERR4_LENGTH                 0x00000001

#define _C1TR45CON_TXLARB4_POSITION              0x00000005
#define _C1TR45CON_TXLARB4_MASK                  0x00000020
#define _C1TR45CON_TXLARB4_LENGTH                0x00000001

#define _C1TR45CON_TXABT4_POSITION               0x00000006
#define _C1TR45CON_TXABT4_MASK                   0x00000040
#define _C1TR45CON_TXABT4_LENGTH                 0x00000001

#define _C1TR45CON_TXEN4_POSITION                0x00000007
#define _C1TR45CON_TXEN4_MASK                    0x00000080
#define _C1TR45CON_TXEN4_LENGTH                  0x00000001

#define _C1TR45CON_TX5PRI_POSITION               0x00000008
#define _C1TR45CON_TX5PRI_MASK                   0x00000300
#define _C1TR45CON_TX5PRI_LENGTH                 0x00000002

#define _C1TR45CON_RTREN5_POSITION               0x0000000A
#define _C1TR45CON_RTREN5_MASK                   0x00000400
#define _C1TR45CON_RTREN5_LENGTH                 0x00000001

#define _C1TR45CON_TXREQ5_POSITION               0x0000000B
#define _C1TR45CON_TXREQ5_MASK                   0x00000800
#define _C1TR45CON_TXREQ5_LENGTH                 0x00000001

#define _C1TR45CON_TXERR5_POSITION               0x0000000C
#define _C1TR45CON_TXERR5_MASK                   0x00001000
#define _C1TR45CON_TXERR5_LENGTH                 0x00000001

#define _C1TR45CON_TXLARB5_POSITION              0x0000000D
#define _C1TR45CON_TXLARB5_MASK                  0x00002000
#define _C1TR45CON_TXLARB5_LENGTH                0x00000001

#define _C1TR45CON_TXABT5_POSITION               0x0000000E
#define _C1TR45CON_TXABT5_MASK                   0x00004000
#define _C1TR45CON_TXABT5_LENGTH                 0x00000001

#define _C1TR45CON_TXEN5_POSITION                0x0000000F
#define _C1TR45CON_TXEN5_MASK                    0x00008000
#define _C1TR45CON_TXEN5_LENGTH                  0x00000001

#define _C1TR45CON_TX4PRI0_POSITION              0x00000000
#define _C1TR45CON_TX4PRI0_MASK                  0x00000001
#define _C1TR45CON_TX4PRI0_LENGTH                0x00000001

#define _C1TR45CON_TX4PRI1_POSITION              0x00000001
#define _C1TR45CON_TX4PRI1_MASK                  0x00000002
#define _C1TR45CON_TX4PRI1_LENGTH                0x00000001

#define _C1TR45CON_TX5PRI0_POSITION              0x00000008
#define _C1TR45CON_TX5PRI0_MASK                  0x00000100
#define _C1TR45CON_TX5PRI0_LENGTH                0x00000001

#define _C1TR45CON_TX5PRI1_POSITION              0x00000009
#define _C1TR45CON_TX5PRI1_MASK                  0x00000200
#define _C1TR45CON_TX5PRI1_LENGTH                0x00000001

#define _C1RXM1EID_EID0_POSITION                 0x00000000
#define _C1RXM1EID_EID0_MASK                     0x00000001
#define _C1RXM1EID_EID0_LENGTH                   0x00000001

#define _C1RXM1EID_EID1_POSITION                 0x00000001
#define _C1RXM1EID_EID1_MASK                     0x00000002
#define _C1RXM1EID_EID1_LENGTH                   0x00000001

#define _C1RXM1EID_EID2_POSITION                 0x00000002
#define _C1RXM1EID_EID2_MASK                     0x00000004
#define _C1RXM1EID_EID2_LENGTH                   0x00000001

#define _C1RXM1EID_EID3_POSITION                 0x00000003
#define _C1RXM1EID_EID3_MASK                     0x00000008
#define _C1RXM1EID_EID3_LENGTH                   0x00000001

#define _C1RXM1EID_EID4_POSITION                 0x00000004
#define _C1RXM1EID_EID4_MASK                     0x00000010
#define _C1RXM1EID_EID4_LENGTH                   0x00000001

#define _C1RXM1EID_EID5_POSITION                 0x00000005
#define _C1RXM1EID_EID5_MASK                     0x00000020
#define _C1RXM1EID_EID5_LENGTH                   0x00000001

#define _C1RXM1EID_EID6_POSITION                 0x00000006
#define _C1RXM1EID_EID6_MASK                     0x00000040
#define _C1RXM1EID_EID6_LENGTH                   0x00000001

#define _C1RXM1EID_EID7_POSITION                 0x00000007
#define _C1RXM1EID_EID7_MASK                     0x00000080
#define _C1RXM1EID_EID7_LENGTH                   0x00000001

#define _C1RXM1EID_EID8_POSITION                 0x00000008
#define _C1RXM1EID_EID8_MASK                     0x00000100
#define _C1RXM1EID_EID8_LENGTH                   0x00000001

#define _C1RXM1EID_EID9_POSITION                 0x00000009
#define _C1RXM1EID_EID9_MASK                     0x00000200
#define _C1RXM1EID_EID9_LENGTH                   0x00000001

#define _C1RXM1EID_EID10_POSITION                0x0000000A
#define _C1RXM1EID_EID10_MASK                    0x00000400
#define _C1RXM1EID_EID10_LENGTH                  0x00000001

#define _C1RXM1EID_EID11_POSITION                0x0000000B
#define _C1RXM1EID_EID11_MASK                    0x00000800
#define _C1RXM1EID_EID11_LENGTH                  0x00000001

#define _C1RXM1EID_EID12_POSITION                0x0000000C
#define _C1RXM1EID_EID12_MASK                    0x00001000
#define _C1RXM1EID_EID12_LENGTH                  0x00000001

#define _C1RXM1EID_EID13_POSITION                0x0000000D
#define _C1RXM1EID_EID13_MASK                    0x00002000
#define _C1RXM1EID_EID13_LENGTH                  0x00000001

#define _C1RXM1EID_EID14_POSITION                0x0000000E
#define _C1RXM1EID_EID14_MASK                    0x00004000
#define _C1RXM1EID_EID14_LENGTH                  0x00000001

#define _C1RXM1EID_EID15_POSITION                0x0000000F
#define _C1RXM1EID_EID15_MASK                    0x00008000
#define _C1RXM1EID_EID15_LENGTH                  0x00000001

#define _C1RXM1EID_EID_POSITION                  0x00000000
#define _C1RXM1EID_EID_MASK                      0x0000FFFF
#define _C1RXM1EID_EID_LENGTH                    0x00000010

#define _C1TR67CON_TX6PRI_POSITION               0x00000000
#define _C1TR67CON_TX6PRI_MASK                   0x00000003
#define _C1TR67CON_TX6PRI_LENGTH                 0x00000002

#define _C1TR67CON_RTREN6_POSITION               0x00000002
#define _C1TR67CON_RTREN6_MASK                   0x00000004
#define _C1TR67CON_RTREN6_LENGTH                 0x00000001

#define _C1TR67CON_TXREQ6_POSITION               0x00000003
#define _C1TR67CON_TXREQ6_MASK                   0x00000008
#define _C1TR67CON_TXREQ6_LENGTH                 0x00000001

#define _C1TR67CON_TXERR6_POSITION               0x00000004
#define _C1TR67CON_TXERR6_MASK                   0x00000010
#define _C1TR67CON_TXERR6_LENGTH                 0x00000001

#define _C1TR67CON_TXLARB6_POSITION              0x00000005
#define _C1TR67CON_TXLARB6_MASK                  0x00000020
#define _C1TR67CON_TXLARB6_LENGTH                0x00000001

#define _C1TR67CON_TXABT6_POSITION               0x00000006
#define _C1TR67CON_TXABT6_MASK                   0x00000040
#define _C1TR67CON_TXABT6_LENGTH                 0x00000001

#define _C1TR67CON_TXEN6_POSITION                0x00000007
#define _C1TR67CON_TXEN6_MASK                    0x00000080
#define _C1TR67CON_TXEN6_LENGTH                  0x00000001

#define _C1TR67CON_TX7PRI_POSITION               0x00000008
#define _C1TR67CON_TX7PRI_MASK                   0x00000300
#define _C1TR67CON_TX7PRI_LENGTH                 0x00000002

#define _C1TR67CON_RTREN7_POSITION               0x0000000A
#define _C1TR67CON_RTREN7_MASK                   0x00000400
#define _C1TR67CON_RTREN7_LENGTH                 0x00000001

#define _C1TR67CON_TXREQ7_POSITION               0x0000000B
#define _C1TR67CON_TXREQ7_MASK                   0x00000800
#define _C1TR67CON_TXREQ7_LENGTH                 0x00000001

#define _C1TR67CON_TXERR7_POSITION               0x0000000C
#define _C1TR67CON_TXERR7_MASK                   0x00001000
#define _C1TR67CON_TXERR7_LENGTH                 0x00000001

#define _C1TR67CON_TXLARB7_POSITION              0x0000000D
#define _C1TR67CON_TXLARB7_MASK                  0x00002000
#define _C1TR67CON_TXLARB7_LENGTH                0x00000001

#define _C1TR67CON_TXABT7_POSITION               0x0000000E
#define _C1TR67CON_TXABT7_MASK                   0x00004000
#define _C1TR67CON_TXABT7_LENGTH                 0x00000001

#define _C1TR67CON_TXEN7_POSITION                0x0000000F
#define _C1TR67CON_TXEN7_MASK                    0x00008000
#define _C1TR67CON_TXEN7_LENGTH                  0x00000001

#define _C1TR67CON_TX6PRI0_POSITION              0x00000000
#define _C1TR67CON_TX6PRI0_MASK                  0x00000001
#define _C1TR67CON_TX6PRI0_LENGTH                0x00000001

#define _C1TR67CON_TX6PRI1_POSITION              0x00000001
#define _C1TR67CON_TX6PRI1_MASK                  0x00000002
#define _C1TR67CON_TX6PRI1_LENGTH                0x00000001

#define _C1TR67CON_TX7PRI0_POSITION              0x00000008
#define _C1TR67CON_TX7PRI0_MASK                  0x00000100
#define _C1TR67CON_TX7PRI0_LENGTH                0x00000001

#define _C1TR67CON_TX7PRI1_POSITION              0x00000009
#define _C1TR67CON_TX7PRI1_MASK                  0x00000200
#define _C1TR67CON_TX7PRI1_LENGTH                0x00000001

#define _C1RXM2SID_EID16_POSITION                0x00000000
#define _C1RXM2SID_EID16_MASK                    0x00000001
#define _C1RXM2SID_EID16_LENGTH                  0x00000001

#define _C1RXM2SID_EID17_POSITION                0x00000001
#define _C1RXM2SID_EID17_MASK                    0x00000002
#define _C1RXM2SID_EID17_LENGTH                  0x00000001

#define _C1RXM2SID_MIDE_POSITION                 0x00000003
#define _C1RXM2SID_MIDE_MASK                     0x00000008
#define _C1RXM2SID_MIDE_LENGTH                   0x00000001

#define _C1RXM2SID_SID0_POSITION                 0x00000005
#define _C1RXM2SID_SID0_MASK                     0x00000020
#define _C1RXM2SID_SID0_LENGTH                   0x00000001

#define _C1RXM2SID_SID1_POSITION                 0x00000006
#define _C1RXM2SID_SID1_MASK                     0x00000040
#define _C1RXM2SID_SID1_LENGTH                   0x00000001

#define _C1RXM2SID_SID2_POSITION                 0x00000007
#define _C1RXM2SID_SID2_MASK                     0x00000080
#define _C1RXM2SID_SID2_LENGTH                   0x00000001

#define _C1RXM2SID_SID3_POSITION                 0x00000008
#define _C1RXM2SID_SID3_MASK                     0x00000100
#define _C1RXM2SID_SID3_LENGTH                   0x00000001

#define _C1RXM2SID_SID4_POSITION                 0x00000009
#define _C1RXM2SID_SID4_MASK                     0x00000200
#define _C1RXM2SID_SID4_LENGTH                   0x00000001

#define _C1RXM2SID_SID5_POSITION                 0x0000000A
#define _C1RXM2SID_SID5_MASK                     0x00000400
#define _C1RXM2SID_SID5_LENGTH                   0x00000001

#define _C1RXM2SID_SID6_POSITION                 0x0000000B
#define _C1RXM2SID_SID6_MASK                     0x00000800
#define _C1RXM2SID_SID6_LENGTH                   0x00000001

#define _C1RXM2SID_SID7_POSITION                 0x0000000C
#define _C1RXM2SID_SID7_MASK                     0x00001000
#define _C1RXM2SID_SID7_LENGTH                   0x00000001

#define _C1RXM2SID_SID8_POSITION                 0x0000000D
#define _C1RXM2SID_SID8_MASK                     0x00002000
#define _C1RXM2SID_SID8_LENGTH                   0x00000001

#define _C1RXM2SID_SID9_POSITION                 0x0000000E
#define _C1RXM2SID_SID9_MASK                     0x00004000
#define _C1RXM2SID_SID9_LENGTH                   0x00000001

#define _C1RXM2SID_SID10_POSITION                0x0000000F
#define _C1RXM2SID_SID10_MASK                    0x00008000
#define _C1RXM2SID_SID10_LENGTH                  0x00000001

#define _C1RXM2SID_EID_POSITION                  0x00000000
#define _C1RXM2SID_EID_MASK                      0x00000003
#define _C1RXM2SID_EID_LENGTH                    0x00000002

#define _C1RXM2SID_SID_POSITION                  0x00000005
#define _C1RXM2SID_SID_MASK                      0x0000FFE0
#define _C1RXM2SID_SID_LENGTH                    0x0000000B

#define _C1RXM2EID_EID0_POSITION                 0x00000000
#define _C1RXM2EID_EID0_MASK                     0x00000001
#define _C1RXM2EID_EID0_LENGTH                   0x00000001

#define _C1RXM2EID_EID1_POSITION                 0x00000001
#define _C1RXM2EID_EID1_MASK                     0x00000002
#define _C1RXM2EID_EID1_LENGTH                   0x00000001

#define _C1RXM2EID_EID2_POSITION                 0x00000002
#define _C1RXM2EID_EID2_MASK                     0x00000004
#define _C1RXM2EID_EID2_LENGTH                   0x00000001

#define _C1RXM2EID_EID3_POSITION                 0x00000003
#define _C1RXM2EID_EID3_MASK                     0x00000008
#define _C1RXM2EID_EID3_LENGTH                   0x00000001

#define _C1RXM2EID_EID4_POSITION                 0x00000004
#define _C1RXM2EID_EID4_MASK                     0x00000010
#define _C1RXM2EID_EID4_LENGTH                   0x00000001

#define _C1RXM2EID_EID5_POSITION                 0x00000005
#define _C1RXM2EID_EID5_MASK                     0x00000020
#define _C1RXM2EID_EID5_LENGTH                   0x00000001

#define _C1RXM2EID_EID6_POSITION                 0x00000006
#define _C1RXM2EID_EID6_MASK                     0x00000040
#define _C1RXM2EID_EID6_LENGTH                   0x00000001

#define _C1RXM2EID_EID7_POSITION                 0x00000007
#define _C1RXM2EID_EID7_MASK                     0x00000080
#define _C1RXM2EID_EID7_LENGTH                   0x00000001

#define _C1RXM2EID_EID8_POSITION                 0x00000008
#define _C1RXM2EID_EID8_MASK                     0x00000100
#define _C1RXM2EID_EID8_LENGTH                   0x00000001

#define _C1RXM2EID_EID9_POSITION                 0x00000009
#define _C1RXM2EID_EID9_MASK                     0x00000200
#define _C1RXM2EID_EID9_LENGTH                   0x00000001

#define _C1RXM2EID_EID10_POSITION                0x0000000A
#define _C1RXM2EID_EID10_MASK                    0x00000400
#define _C1RXM2EID_EID10_LENGTH                  0x00000001

#define _C1RXM2EID_EID11_POSITION                0x0000000B
#define _C1RXM2EID_EID11_MASK                    0x00000800
#define _C1RXM2EID_EID11_LENGTH                  0x00000001

#define _C1RXM2EID_EID12_POSITION                0x0000000C
#define _C1RXM2EID_EID12_MASK                    0x00001000
#define _C1RXM2EID_EID12_LENGTH                  0x00000001

#define _C1RXM2EID_EID13_POSITION                0x0000000D
#define _C1RXM2EID_EID13_MASK                    0x00002000
#define _C1RXM2EID_EID13_LENGTH                  0x00000001

#define _C1RXM2EID_EID14_POSITION                0x0000000E
#define _C1RXM2EID_EID14_MASK                    0x00004000
#define _C1RXM2EID_EID14_LENGTH                  0x00000001

#define _C1RXM2EID_EID15_POSITION                0x0000000F
#define _C1RXM2EID_EID15_MASK                    0x00008000
#define _C1RXM2EID_EID15_LENGTH                  0x00000001

#define _C1RXM2EID_EID_POSITION                  0x00000000
#define _C1RXM2EID_EID_MASK                      0x0000FFFF
#define _C1RXM2EID_EID_LENGTH                    0x00000010

#define _C1RXF0SID_EID_POSITION                  0x00000000
#define _C1RXF0SID_EID_MASK                      0x00000003
#define _C1RXF0SID_EID_LENGTH                    0x00000002

#define _C1RXF0SID_EXIDE_POSITION                0x00000003
#define _C1RXF0SID_EXIDE_MASK                    0x00000008
#define _C1RXF0SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF0SID_SID_POSITION                  0x00000005
#define _C1RXF0SID_SID_MASK                      0x0000FFE0
#define _C1RXF0SID_SID_LENGTH                    0x0000000B

#define _C1RXF0SID_EID16_POSITION                0x00000000
#define _C1RXF0SID_EID16_MASK                    0x00000001
#define _C1RXF0SID_EID16_LENGTH                  0x00000001

#define _C1RXF0SID_EID17_POSITION                0x00000001
#define _C1RXF0SID_EID17_MASK                    0x00000002
#define _C1RXF0SID_EID17_LENGTH                  0x00000001

#define _C1RXF0SID_SID0_POSITION                 0x00000005
#define _C1RXF0SID_SID0_MASK                     0x00000020
#define _C1RXF0SID_SID0_LENGTH                   0x00000001

#define _C1RXF0SID_SID1_POSITION                 0x00000006
#define _C1RXF0SID_SID1_MASK                     0x00000040
#define _C1RXF0SID_SID1_LENGTH                   0x00000001

#define _C1RXF0SID_SID2_POSITION                 0x00000007
#define _C1RXF0SID_SID2_MASK                     0x00000080
#define _C1RXF0SID_SID2_LENGTH                   0x00000001

#define _C1RXF0SID_SID3_POSITION                 0x00000008
#define _C1RXF0SID_SID3_MASK                     0x00000100
#define _C1RXF0SID_SID3_LENGTH                   0x00000001

#define _C1RXF0SID_SID4_POSITION                 0x00000009
#define _C1RXF0SID_SID4_MASK                     0x00000200
#define _C1RXF0SID_SID4_LENGTH                   0x00000001

#define _C1RXF0SID_SID5_POSITION                 0x0000000A
#define _C1RXF0SID_SID5_MASK                     0x00000400
#define _C1RXF0SID_SID5_LENGTH                   0x00000001

#define _C1RXF0SID_SID6_POSITION                 0x0000000B
#define _C1RXF0SID_SID6_MASK                     0x00000800
#define _C1RXF0SID_SID6_LENGTH                   0x00000001

#define _C1RXF0SID_SID7_POSITION                 0x0000000C
#define _C1RXF0SID_SID7_MASK                     0x00001000
#define _C1RXF0SID_SID7_LENGTH                   0x00000001

#define _C1RXF0SID_SID8_POSITION                 0x0000000D
#define _C1RXF0SID_SID8_MASK                     0x00002000
#define _C1RXF0SID_SID8_LENGTH                   0x00000001

#define _C1RXF0SID_SID9_POSITION                 0x0000000E
#define _C1RXF0SID_SID9_MASK                     0x00004000
#define _C1RXF0SID_SID9_LENGTH                   0x00000001

#define _C1RXF0SID_SID10_POSITION                0x0000000F
#define _C1RXF0SID_SID10_MASK                    0x00008000
#define _C1RXF0SID_SID10_LENGTH                  0x00000001

#define _C1RXF0EID_EID_POSITION                  0x00000000
#define _C1RXF0EID_EID_MASK                      0x0000FFFF
#define _C1RXF0EID_EID_LENGTH                    0x00000010

#define _C1RXF0EID_EID0_POSITION                 0x00000000
#define _C1RXF0EID_EID0_MASK                     0x00000001
#define _C1RXF0EID_EID0_LENGTH                   0x00000001

#define _C1RXF0EID_EID1_POSITION                 0x00000001
#define _C1RXF0EID_EID1_MASK                     0x00000002
#define _C1RXF0EID_EID1_LENGTH                   0x00000001

#define _C1RXF0EID_EID2_POSITION                 0x00000002
#define _C1RXF0EID_EID2_MASK                     0x00000004
#define _C1RXF0EID_EID2_LENGTH                   0x00000001

#define _C1RXF0EID_EID3_POSITION                 0x00000003
#define _C1RXF0EID_EID3_MASK                     0x00000008
#define _C1RXF0EID_EID3_LENGTH                   0x00000001

#define _C1RXF0EID_EID4_POSITION                 0x00000004
#define _C1RXF0EID_EID4_MASK                     0x00000010
#define _C1RXF0EID_EID4_LENGTH                   0x00000001

#define _C1RXF0EID_EID5_POSITION                 0x00000005
#define _C1RXF0EID_EID5_MASK                     0x00000020
#define _C1RXF0EID_EID5_LENGTH                   0x00000001

#define _C1RXF0EID_EID6_POSITION                 0x00000006
#define _C1RXF0EID_EID6_MASK                     0x00000040
#define _C1RXF0EID_EID6_LENGTH                   0x00000001

#define _C1RXF0EID_EID7_POSITION                 0x00000007
#define _C1RXF0EID_EID7_MASK                     0x00000080
#define _C1RXF0EID_EID7_LENGTH                   0x00000001

#define _C1RXF0EID_EID8_POSITION                 0x00000008
#define _C1RXF0EID_EID8_MASK                     0x00000100
#define _C1RXF0EID_EID8_LENGTH                   0x00000001

#define _C1RXF0EID_EID9_POSITION                 0x00000009
#define _C1RXF0EID_EID9_MASK                     0x00000200
#define _C1RXF0EID_EID9_LENGTH                   0x00000001

#define _C1RXF0EID_EID10_POSITION                0x0000000A
#define _C1RXF0EID_EID10_MASK                    0x00000400
#define _C1RXF0EID_EID10_LENGTH                  0x00000001

#define _C1RXF0EID_EID11_POSITION                0x0000000B
#define _C1RXF0EID_EID11_MASK                    0x00000800
#define _C1RXF0EID_EID11_LENGTH                  0x00000001

#define _C1RXF0EID_EID12_POSITION                0x0000000C
#define _C1RXF0EID_EID12_MASK                    0x00001000
#define _C1RXF0EID_EID12_LENGTH                  0x00000001

#define _C1RXF0EID_EID13_POSITION                0x0000000D
#define _C1RXF0EID_EID13_MASK                    0x00002000
#define _C1RXF0EID_EID13_LENGTH                  0x00000001

#define _C1RXF0EID_EID14_POSITION                0x0000000E
#define _C1RXF0EID_EID14_MASK                    0x00004000
#define _C1RXF0EID_EID14_LENGTH                  0x00000001

#define _C1RXF0EID_EID15_POSITION                0x0000000F
#define _C1RXF0EID_EID15_MASK                    0x00008000
#define _C1RXF0EID_EID15_LENGTH                  0x00000001

#define _C1RXF1SID_EID_POSITION                  0x00000000
#define _C1RXF1SID_EID_MASK                      0x00000003
#define _C1RXF1SID_EID_LENGTH                    0x00000002

#define _C1RXF1SID_EXIDE_POSITION                0x00000003
#define _C1RXF1SID_EXIDE_MASK                    0x00000008
#define _C1RXF1SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF1SID_SID_POSITION                  0x00000005
#define _C1RXF1SID_SID_MASK                      0x0000FFE0
#define _C1RXF1SID_SID_LENGTH                    0x0000000B

#define _C1RXF1SID_EID16_POSITION                0x00000000
#define _C1RXF1SID_EID16_MASK                    0x00000001
#define _C1RXF1SID_EID16_LENGTH                  0x00000001

#define _C1RXF1SID_EID17_POSITION                0x00000001
#define _C1RXF1SID_EID17_MASK                    0x00000002
#define _C1RXF1SID_EID17_LENGTH                  0x00000001

#define _C1RXF1SID_SID0_POSITION                 0x00000005
#define _C1RXF1SID_SID0_MASK                     0x00000020
#define _C1RXF1SID_SID0_LENGTH                   0x00000001

#define _C1RXF1SID_SID1_POSITION                 0x00000006
#define _C1RXF1SID_SID1_MASK                     0x00000040
#define _C1RXF1SID_SID1_LENGTH                   0x00000001

#define _C1RXF1SID_SID2_POSITION                 0x00000007
#define _C1RXF1SID_SID2_MASK                     0x00000080
#define _C1RXF1SID_SID2_LENGTH                   0x00000001

#define _C1RXF1SID_SID3_POSITION                 0x00000008
#define _C1RXF1SID_SID3_MASK                     0x00000100
#define _C1RXF1SID_SID3_LENGTH                   0x00000001

#define _C1RXF1SID_SID4_POSITION                 0x00000009
#define _C1RXF1SID_SID4_MASK                     0x00000200
#define _C1RXF1SID_SID4_LENGTH                   0x00000001

#define _C1RXF1SID_SID5_POSITION                 0x0000000A
#define _C1RXF1SID_SID5_MASK                     0x00000400
#define _C1RXF1SID_SID5_LENGTH                   0x00000001

#define _C1RXF1SID_SID6_POSITION                 0x0000000B
#define _C1RXF1SID_SID6_MASK                     0x00000800
#define _C1RXF1SID_SID6_LENGTH                   0x00000001

#define _C1RXF1SID_SID7_POSITION                 0x0000000C
#define _C1RXF1SID_SID7_MASK                     0x00001000
#define _C1RXF1SID_SID7_LENGTH                   0x00000001

#define _C1RXF1SID_SID8_POSITION                 0x0000000D
#define _C1RXF1SID_SID8_MASK                     0x00002000
#define _C1RXF1SID_SID8_LENGTH                   0x00000001

#define _C1RXF1SID_SID9_POSITION                 0x0000000E
#define _C1RXF1SID_SID9_MASK                     0x00004000
#define _C1RXF1SID_SID9_LENGTH                   0x00000001

#define _C1RXF1SID_SID10_POSITION                0x0000000F
#define _C1RXF1SID_SID10_MASK                    0x00008000
#define _C1RXF1SID_SID10_LENGTH                  0x00000001

#define _C1RXF1EID_EID_POSITION                  0x00000000
#define _C1RXF1EID_EID_MASK                      0x0000FFFF
#define _C1RXF1EID_EID_LENGTH                    0x00000010

#define _C1RXF1EID_EID0_POSITION                 0x00000000
#define _C1RXF1EID_EID0_MASK                     0x00000001
#define _C1RXF1EID_EID0_LENGTH                   0x00000001

#define _C1RXF1EID_EID1_POSITION                 0x00000001
#define _C1RXF1EID_EID1_MASK                     0x00000002
#define _C1RXF1EID_EID1_LENGTH                   0x00000001

#define _C1RXF1EID_EID2_POSITION                 0x00000002
#define _C1RXF1EID_EID2_MASK                     0x00000004
#define _C1RXF1EID_EID2_LENGTH                   0x00000001

#define _C1RXF1EID_EID3_POSITION                 0x00000003
#define _C1RXF1EID_EID3_MASK                     0x00000008
#define _C1RXF1EID_EID3_LENGTH                   0x00000001

#define _C1RXF1EID_EID4_POSITION                 0x00000004
#define _C1RXF1EID_EID4_MASK                     0x00000010
#define _C1RXF1EID_EID4_LENGTH                   0x00000001

#define _C1RXF1EID_EID5_POSITION                 0x00000005
#define _C1RXF1EID_EID5_MASK                     0x00000020
#define _C1RXF1EID_EID5_LENGTH                   0x00000001

#define _C1RXF1EID_EID6_POSITION                 0x00000006
#define _C1RXF1EID_EID6_MASK                     0x00000040
#define _C1RXF1EID_EID6_LENGTH                   0x00000001

#define _C1RXF1EID_EID7_POSITION                 0x00000007
#define _C1RXF1EID_EID7_MASK                     0x00000080
#define _C1RXF1EID_EID7_LENGTH                   0x00000001

#define _C1RXF1EID_EID8_POSITION                 0x00000008
#define _C1RXF1EID_EID8_MASK                     0x00000100
#define _C1RXF1EID_EID8_LENGTH                   0x00000001

#define _C1RXF1EID_EID9_POSITION                 0x00000009
#define _C1RXF1EID_EID9_MASK                     0x00000200
#define _C1RXF1EID_EID9_LENGTH                   0x00000001

#define _C1RXF1EID_EID10_POSITION                0x0000000A
#define _C1RXF1EID_EID10_MASK                    0x00000400
#define _C1RXF1EID_EID10_LENGTH                  0x00000001

#define _C1RXF1EID_EID11_POSITION                0x0000000B
#define _C1RXF1EID_EID11_MASK                    0x00000800
#define _C1RXF1EID_EID11_LENGTH                  0x00000001

#define _C1RXF1EID_EID12_POSITION                0x0000000C
#define _C1RXF1EID_EID12_MASK                    0x00001000
#define _C1RXF1EID_EID12_LENGTH                  0x00000001

#define _C1RXF1EID_EID13_POSITION                0x0000000D
#define _C1RXF1EID_EID13_MASK                    0x00002000
#define _C1RXF1EID_EID13_LENGTH                  0x00000001

#define _C1RXF1EID_EID14_POSITION                0x0000000E
#define _C1RXF1EID_EID14_MASK                    0x00004000
#define _C1RXF1EID_EID14_LENGTH                  0x00000001

#define _C1RXF1EID_EID15_POSITION                0x0000000F
#define _C1RXF1EID_EID15_MASK                    0x00008000
#define _C1RXF1EID_EID15_LENGTH                  0x00000001

#define _C1RXF2SID_EID_POSITION                  0x00000000
#define _C1RXF2SID_EID_MASK                      0x00000003
#define _C1RXF2SID_EID_LENGTH                    0x00000002

#define _C1RXF2SID_EXIDE_POSITION                0x00000003
#define _C1RXF2SID_EXIDE_MASK                    0x00000008
#define _C1RXF2SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF2SID_SID_POSITION                  0x00000005
#define _C1RXF2SID_SID_MASK                      0x0000FFE0
#define _C1RXF2SID_SID_LENGTH                    0x0000000B

#define _C1RXF2SID_EID16_POSITION                0x00000000
#define _C1RXF2SID_EID16_MASK                    0x00000001
#define _C1RXF2SID_EID16_LENGTH                  0x00000001

#define _C1RXF2SID_EID17_POSITION                0x00000001
#define _C1RXF2SID_EID17_MASK                    0x00000002
#define _C1RXF2SID_EID17_LENGTH                  0x00000001

#define _C1RXF2SID_SID0_POSITION                 0x00000005
#define _C1RXF2SID_SID0_MASK                     0x00000020
#define _C1RXF2SID_SID0_LENGTH                   0x00000001

#define _C1RXF2SID_SID1_POSITION                 0x00000006
#define _C1RXF2SID_SID1_MASK                     0x00000040
#define _C1RXF2SID_SID1_LENGTH                   0x00000001

#define _C1RXF2SID_SID2_POSITION                 0x00000007
#define _C1RXF2SID_SID2_MASK                     0x00000080
#define _C1RXF2SID_SID2_LENGTH                   0x00000001

#define _C1RXF2SID_SID3_POSITION                 0x00000008
#define _C1RXF2SID_SID3_MASK                     0x00000100
#define _C1RXF2SID_SID3_LENGTH                   0x00000001

#define _C1RXF2SID_SID4_POSITION                 0x00000009
#define _C1RXF2SID_SID4_MASK                     0x00000200
#define _C1RXF2SID_SID4_LENGTH                   0x00000001

#define _C1RXF2SID_SID5_POSITION                 0x0000000A
#define _C1RXF2SID_SID5_MASK                     0x00000400
#define _C1RXF2SID_SID5_LENGTH                   0x00000001

#define _C1RXF2SID_SID6_POSITION                 0x0000000B
#define _C1RXF2SID_SID6_MASK                     0x00000800
#define _C1RXF2SID_SID6_LENGTH                   0x00000001

#define _C1RXF2SID_SID7_POSITION                 0x0000000C
#define _C1RXF2SID_SID7_MASK                     0x00001000
#define _C1RXF2SID_SID7_LENGTH                   0x00000001

#define _C1RXF2SID_SID8_POSITION                 0x0000000D
#define _C1RXF2SID_SID8_MASK                     0x00002000
#define _C1RXF2SID_SID8_LENGTH                   0x00000001

#define _C1RXF2SID_SID9_POSITION                 0x0000000E
#define _C1RXF2SID_SID9_MASK                     0x00004000
#define _C1RXF2SID_SID9_LENGTH                   0x00000001

#define _C1RXF2SID_SID10_POSITION                0x0000000F
#define _C1RXF2SID_SID10_MASK                    0x00008000
#define _C1RXF2SID_SID10_LENGTH                  0x00000001

#define _C1RXF2EID_EID_POSITION                  0x00000000
#define _C1RXF2EID_EID_MASK                      0x0000FFFF
#define _C1RXF2EID_EID_LENGTH                    0x00000010

#define _C1RXF2EID_EID0_POSITION                 0x00000000
#define _C1RXF2EID_EID0_MASK                     0x00000001
#define _C1RXF2EID_EID0_LENGTH                   0x00000001

#define _C1RXF2EID_EID1_POSITION                 0x00000001
#define _C1RXF2EID_EID1_MASK                     0x00000002
#define _C1RXF2EID_EID1_LENGTH                   0x00000001

#define _C1RXF2EID_EID2_POSITION                 0x00000002
#define _C1RXF2EID_EID2_MASK                     0x00000004
#define _C1RXF2EID_EID2_LENGTH                   0x00000001

#define _C1RXF2EID_EID3_POSITION                 0x00000003
#define _C1RXF2EID_EID3_MASK                     0x00000008
#define _C1RXF2EID_EID3_LENGTH                   0x00000001

#define _C1RXF2EID_EID4_POSITION                 0x00000004
#define _C1RXF2EID_EID4_MASK                     0x00000010
#define _C1RXF2EID_EID4_LENGTH                   0x00000001

#define _C1RXF2EID_EID5_POSITION                 0x00000005
#define _C1RXF2EID_EID5_MASK                     0x00000020
#define _C1RXF2EID_EID5_LENGTH                   0x00000001

#define _C1RXF2EID_EID6_POSITION                 0x00000006
#define _C1RXF2EID_EID6_MASK                     0x00000040
#define _C1RXF2EID_EID6_LENGTH                   0x00000001

#define _C1RXF2EID_EID7_POSITION                 0x00000007
#define _C1RXF2EID_EID7_MASK                     0x00000080
#define _C1RXF2EID_EID7_LENGTH                   0x00000001

#define _C1RXF2EID_EID8_POSITION                 0x00000008
#define _C1RXF2EID_EID8_MASK                     0x00000100
#define _C1RXF2EID_EID8_LENGTH                   0x00000001

#define _C1RXF2EID_EID9_POSITION                 0x00000009
#define _C1RXF2EID_EID9_MASK                     0x00000200
#define _C1RXF2EID_EID9_LENGTH                   0x00000001

#define _C1RXF2EID_EID10_POSITION                0x0000000A
#define _C1RXF2EID_EID10_MASK                    0x00000400
#define _C1RXF2EID_EID10_LENGTH                  0x00000001

#define _C1RXF2EID_EID11_POSITION                0x0000000B
#define _C1RXF2EID_EID11_MASK                    0x00000800
#define _C1RXF2EID_EID11_LENGTH                  0x00000001

#define _C1RXF2EID_EID12_POSITION                0x0000000C
#define _C1RXF2EID_EID12_MASK                    0x00001000
#define _C1RXF2EID_EID12_LENGTH                  0x00000001

#define _C1RXF2EID_EID13_POSITION                0x0000000D
#define _C1RXF2EID_EID13_MASK                    0x00002000
#define _C1RXF2EID_EID13_LENGTH                  0x00000001

#define _C1RXF2EID_EID14_POSITION                0x0000000E
#define _C1RXF2EID_EID14_MASK                    0x00004000
#define _C1RXF2EID_EID14_LENGTH                  0x00000001

#define _C1RXF2EID_EID15_POSITION                0x0000000F
#define _C1RXF2EID_EID15_MASK                    0x00008000
#define _C1RXF2EID_EID15_LENGTH                  0x00000001

#define _C1RXF3SID_EID_POSITION                  0x00000000
#define _C1RXF3SID_EID_MASK                      0x00000003
#define _C1RXF3SID_EID_LENGTH                    0x00000002

#define _C1RXF3SID_EXIDE_POSITION                0x00000003
#define _C1RXF3SID_EXIDE_MASK                    0x00000008
#define _C1RXF3SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF3SID_SID_POSITION                  0x00000005
#define _C1RXF3SID_SID_MASK                      0x0000FFE0
#define _C1RXF3SID_SID_LENGTH                    0x0000000B

#define _C1RXF3SID_EID16_POSITION                0x00000000
#define _C1RXF3SID_EID16_MASK                    0x00000001
#define _C1RXF3SID_EID16_LENGTH                  0x00000001

#define _C1RXF3SID_EID17_POSITION                0x00000001
#define _C1RXF3SID_EID17_MASK                    0x00000002
#define _C1RXF3SID_EID17_LENGTH                  0x00000001

#define _C1RXF3SID_SID0_POSITION                 0x00000005
#define _C1RXF3SID_SID0_MASK                     0x00000020
#define _C1RXF3SID_SID0_LENGTH                   0x00000001

#define _C1RXF3SID_SID1_POSITION                 0x00000006
#define _C1RXF3SID_SID1_MASK                     0x00000040
#define _C1RXF3SID_SID1_LENGTH                   0x00000001

#define _C1RXF3SID_SID2_POSITION                 0x00000007
#define _C1RXF3SID_SID2_MASK                     0x00000080
#define _C1RXF3SID_SID2_LENGTH                   0x00000001

#define _C1RXF3SID_SID3_POSITION                 0x00000008
#define _C1RXF3SID_SID3_MASK                     0x00000100
#define _C1RXF3SID_SID3_LENGTH                   0x00000001

#define _C1RXF3SID_SID4_POSITION                 0x00000009
#define _C1RXF3SID_SID4_MASK                     0x00000200
#define _C1RXF3SID_SID4_LENGTH                   0x00000001

#define _C1RXF3SID_SID5_POSITION                 0x0000000A
#define _C1RXF3SID_SID5_MASK                     0x00000400
#define _C1RXF3SID_SID5_LENGTH                   0x00000001

#define _C1RXF3SID_SID6_POSITION                 0x0000000B
#define _C1RXF3SID_SID6_MASK                     0x00000800
#define _C1RXF3SID_SID6_LENGTH                   0x00000001

#define _C1RXF3SID_SID7_POSITION                 0x0000000C
#define _C1RXF3SID_SID7_MASK                     0x00001000
#define _C1RXF3SID_SID7_LENGTH                   0x00000001

#define _C1RXF3SID_SID8_POSITION                 0x0000000D
#define _C1RXF3SID_SID8_MASK                     0x00002000
#define _C1RXF3SID_SID8_LENGTH                   0x00000001

#define _C1RXF3SID_SID9_POSITION                 0x0000000E
#define _C1RXF3SID_SID9_MASK                     0x00004000
#define _C1RXF3SID_SID9_LENGTH                   0x00000001

#define _C1RXF3SID_SID10_POSITION                0x0000000F
#define _C1RXF3SID_SID10_MASK                    0x00008000
#define _C1RXF3SID_SID10_LENGTH                  0x00000001

#define _C1RXF3EID_EID_POSITION                  0x00000000
#define _C1RXF3EID_EID_MASK                      0x0000FFFF
#define _C1RXF3EID_EID_LENGTH                    0x00000010

#define _C1RXF3EID_EID0_POSITION                 0x00000000
#define _C1RXF3EID_EID0_MASK                     0x00000001
#define _C1RXF3EID_EID0_LENGTH                   0x00000001

#define _C1RXF3EID_EID1_POSITION                 0x00000001
#define _C1RXF3EID_EID1_MASK                     0x00000002
#define _C1RXF3EID_EID1_LENGTH                   0x00000001

#define _C1RXF3EID_EID2_POSITION                 0x00000002
#define _C1RXF3EID_EID2_MASK                     0x00000004
#define _C1RXF3EID_EID2_LENGTH                   0x00000001

#define _C1RXF3EID_EID3_POSITION                 0x00000003
#define _C1RXF3EID_EID3_MASK                     0x00000008
#define _C1RXF3EID_EID3_LENGTH                   0x00000001

#define _C1RXF3EID_EID4_POSITION                 0x00000004
#define _C1RXF3EID_EID4_MASK                     0x00000010
#define _C1RXF3EID_EID4_LENGTH                   0x00000001

#define _C1RXF3EID_EID5_POSITION                 0x00000005
#define _C1RXF3EID_EID5_MASK                     0x00000020
#define _C1RXF3EID_EID5_LENGTH                   0x00000001

#define _C1RXF3EID_EID6_POSITION                 0x00000006
#define _C1RXF3EID_EID6_MASK                     0x00000040
#define _C1RXF3EID_EID6_LENGTH                   0x00000001

#define _C1RXF3EID_EID7_POSITION                 0x00000007
#define _C1RXF3EID_EID7_MASK                     0x00000080
#define _C1RXF3EID_EID7_LENGTH                   0x00000001

#define _C1RXF3EID_EID8_POSITION                 0x00000008
#define _C1RXF3EID_EID8_MASK                     0x00000100
#define _C1RXF3EID_EID8_LENGTH                   0x00000001

#define _C1RXF3EID_EID9_POSITION                 0x00000009
#define _C1RXF3EID_EID9_MASK                     0x00000200
#define _C1RXF3EID_EID9_LENGTH                   0x00000001

#define _C1RXF3EID_EID10_POSITION                0x0000000A
#define _C1RXF3EID_EID10_MASK                    0x00000400
#define _C1RXF3EID_EID10_LENGTH                  0x00000001

#define _C1RXF3EID_EID11_POSITION                0x0000000B
#define _C1RXF3EID_EID11_MASK                    0x00000800
#define _C1RXF3EID_EID11_LENGTH                  0x00000001

#define _C1RXF3EID_EID12_POSITION                0x0000000C
#define _C1RXF3EID_EID12_MASK                    0x00001000
#define _C1RXF3EID_EID12_LENGTH                  0x00000001

#define _C1RXF3EID_EID13_POSITION                0x0000000D
#define _C1RXF3EID_EID13_MASK                    0x00002000
#define _C1RXF3EID_EID13_LENGTH                  0x00000001

#define _C1RXF3EID_EID14_POSITION                0x0000000E
#define _C1RXF3EID_EID14_MASK                    0x00004000
#define _C1RXF3EID_EID14_LENGTH                  0x00000001

#define _C1RXF3EID_EID15_POSITION                0x0000000F
#define _C1RXF3EID_EID15_MASK                    0x00008000
#define _C1RXF3EID_EID15_LENGTH                  0x00000001

#define _C1RXF4SID_EID_POSITION                  0x00000000
#define _C1RXF4SID_EID_MASK                      0x00000003
#define _C1RXF4SID_EID_LENGTH                    0x00000002

#define _C1RXF4SID_EXIDE_POSITION                0x00000003
#define _C1RXF4SID_EXIDE_MASK                    0x00000008
#define _C1RXF4SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF4SID_SID_POSITION                  0x00000005
#define _C1RXF4SID_SID_MASK                      0x0000FFE0
#define _C1RXF4SID_SID_LENGTH                    0x0000000B

#define _C1RXF4SID_EID16_POSITION                0x00000000
#define _C1RXF4SID_EID16_MASK                    0x00000001
#define _C1RXF4SID_EID16_LENGTH                  0x00000001

#define _C1RXF4SID_EID17_POSITION                0x00000001
#define _C1RXF4SID_EID17_MASK                    0x00000002
#define _C1RXF4SID_EID17_LENGTH                  0x00000001

#define _C1RXF4SID_SID0_POSITION                 0x00000005
#define _C1RXF4SID_SID0_MASK                     0x00000020
#define _C1RXF4SID_SID0_LENGTH                   0x00000001

#define _C1RXF4SID_SID1_POSITION                 0x00000006
#define _C1RXF4SID_SID1_MASK                     0x00000040
#define _C1RXF4SID_SID1_LENGTH                   0x00000001

#define _C1RXF4SID_SID2_POSITION                 0x00000007
#define _C1RXF4SID_SID2_MASK                     0x00000080
#define _C1RXF4SID_SID2_LENGTH                   0x00000001

#define _C1RXF4SID_SID3_POSITION                 0x00000008
#define _C1RXF4SID_SID3_MASK                     0x00000100
#define _C1RXF4SID_SID3_LENGTH                   0x00000001

#define _C1RXF4SID_SID4_POSITION                 0x00000009
#define _C1RXF4SID_SID4_MASK                     0x00000200
#define _C1RXF4SID_SID4_LENGTH                   0x00000001

#define _C1RXF4SID_SID5_POSITION                 0x0000000A
#define _C1RXF4SID_SID5_MASK                     0x00000400
#define _C1RXF4SID_SID5_LENGTH                   0x00000001

#define _C1RXF4SID_SID6_POSITION                 0x0000000B
#define _C1RXF4SID_SID6_MASK                     0x00000800
#define _C1RXF4SID_SID6_LENGTH                   0x00000001

#define _C1RXF4SID_SID7_POSITION                 0x0000000C
#define _C1RXF4SID_SID7_MASK                     0x00001000
#define _C1RXF4SID_SID7_LENGTH                   0x00000001

#define _C1RXF4SID_SID8_POSITION                 0x0000000D
#define _C1RXF4SID_SID8_MASK                     0x00002000
#define _C1RXF4SID_SID8_LENGTH                   0x00000001

#define _C1RXF4SID_SID9_POSITION                 0x0000000E
#define _C1RXF4SID_SID9_MASK                     0x00004000
#define _C1RXF4SID_SID9_LENGTH                   0x00000001

#define _C1RXF4SID_SID10_POSITION                0x0000000F
#define _C1RXF4SID_SID10_MASK                    0x00008000
#define _C1RXF4SID_SID10_LENGTH                  0x00000001

#define _C1RXF4EID_EID_POSITION                  0x00000000
#define _C1RXF4EID_EID_MASK                      0x0000FFFF
#define _C1RXF4EID_EID_LENGTH                    0x00000010

#define _C1RXF4EID_EID0_POSITION                 0x00000000
#define _C1RXF4EID_EID0_MASK                     0x00000001
#define _C1RXF4EID_EID0_LENGTH                   0x00000001

#define _C1RXF4EID_EID1_POSITION                 0x00000001
#define _C1RXF4EID_EID1_MASK                     0x00000002
#define _C1RXF4EID_EID1_LENGTH                   0x00000001

#define _C1RXF4EID_EID2_POSITION                 0x00000002
#define _C1RXF4EID_EID2_MASK                     0x00000004
#define _C1RXF4EID_EID2_LENGTH                   0x00000001

#define _C1RXF4EID_EID3_POSITION                 0x00000003
#define _C1RXF4EID_EID3_MASK                     0x00000008
#define _C1RXF4EID_EID3_LENGTH                   0x00000001

#define _C1RXF4EID_EID4_POSITION                 0x00000004
#define _C1RXF4EID_EID4_MASK                     0x00000010
#define _C1RXF4EID_EID4_LENGTH                   0x00000001

#define _C1RXF4EID_EID5_POSITION                 0x00000005
#define _C1RXF4EID_EID5_MASK                     0x00000020
#define _C1RXF4EID_EID5_LENGTH                   0x00000001

#define _C1RXF4EID_EID6_POSITION                 0x00000006
#define _C1RXF4EID_EID6_MASK                     0x00000040
#define _C1RXF4EID_EID6_LENGTH                   0x00000001

#define _C1RXF4EID_EID7_POSITION                 0x00000007
#define _C1RXF4EID_EID7_MASK                     0x00000080
#define _C1RXF4EID_EID7_LENGTH                   0x00000001

#define _C1RXF4EID_EID8_POSITION                 0x00000008
#define _C1RXF4EID_EID8_MASK                     0x00000100
#define _C1RXF4EID_EID8_LENGTH                   0x00000001

#define _C1RXF4EID_EID9_POSITION                 0x00000009
#define _C1RXF4EID_EID9_MASK                     0x00000200
#define _C1RXF4EID_EID9_LENGTH                   0x00000001

#define _C1RXF4EID_EID10_POSITION                0x0000000A
#define _C1RXF4EID_EID10_MASK                    0x00000400
#define _C1RXF4EID_EID10_LENGTH                  0x00000001

#define _C1RXF4EID_EID11_POSITION                0x0000000B
#define _C1RXF4EID_EID11_MASK                    0x00000800
#define _C1RXF4EID_EID11_LENGTH                  0x00000001

#define _C1RXF4EID_EID12_POSITION                0x0000000C
#define _C1RXF4EID_EID12_MASK                    0x00001000
#define _C1RXF4EID_EID12_LENGTH                  0x00000001

#define _C1RXF4EID_EID13_POSITION                0x0000000D
#define _C1RXF4EID_EID13_MASK                    0x00002000
#define _C1RXF4EID_EID13_LENGTH                  0x00000001

#define _C1RXF4EID_EID14_POSITION                0x0000000E
#define _C1RXF4EID_EID14_MASK                    0x00004000
#define _C1RXF4EID_EID14_LENGTH                  0x00000001

#define _C1RXF4EID_EID15_POSITION                0x0000000F
#define _C1RXF4EID_EID15_MASK                    0x00008000
#define _C1RXF4EID_EID15_LENGTH                  0x00000001

#define _C1RXF5SID_EID_POSITION                  0x00000000
#define _C1RXF5SID_EID_MASK                      0x00000003
#define _C1RXF5SID_EID_LENGTH                    0x00000002

#define _C1RXF5SID_EXIDE_POSITION                0x00000003
#define _C1RXF5SID_EXIDE_MASK                    0x00000008
#define _C1RXF5SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF5SID_SID_POSITION                  0x00000005
#define _C1RXF5SID_SID_MASK                      0x0000FFE0
#define _C1RXF5SID_SID_LENGTH                    0x0000000B

#define _C1RXF5SID_EID16_POSITION                0x00000000
#define _C1RXF5SID_EID16_MASK                    0x00000001
#define _C1RXF5SID_EID16_LENGTH                  0x00000001

#define _C1RXF5SID_EID17_POSITION                0x00000001
#define _C1RXF5SID_EID17_MASK                    0x00000002
#define _C1RXF5SID_EID17_LENGTH                  0x00000001

#define _C1RXF5SID_SID0_POSITION                 0x00000005
#define _C1RXF5SID_SID0_MASK                     0x00000020
#define _C1RXF5SID_SID0_LENGTH                   0x00000001

#define _C1RXF5SID_SID1_POSITION                 0x00000006
#define _C1RXF5SID_SID1_MASK                     0x00000040
#define _C1RXF5SID_SID1_LENGTH                   0x00000001

#define _C1RXF5SID_SID2_POSITION                 0x00000007
#define _C1RXF5SID_SID2_MASK                     0x00000080
#define _C1RXF5SID_SID2_LENGTH                   0x00000001

#define _C1RXF5SID_SID3_POSITION                 0x00000008
#define _C1RXF5SID_SID3_MASK                     0x00000100
#define _C1RXF5SID_SID3_LENGTH                   0x00000001

#define _C1RXF5SID_SID4_POSITION                 0x00000009
#define _C1RXF5SID_SID4_MASK                     0x00000200
#define _C1RXF5SID_SID4_LENGTH                   0x00000001

#define _C1RXF5SID_SID5_POSITION                 0x0000000A
#define _C1RXF5SID_SID5_MASK                     0x00000400
#define _C1RXF5SID_SID5_LENGTH                   0x00000001

#define _C1RXF5SID_SID6_POSITION                 0x0000000B
#define _C1RXF5SID_SID6_MASK                     0x00000800
#define _C1RXF5SID_SID6_LENGTH                   0x00000001

#define _C1RXF5SID_SID7_POSITION                 0x0000000C
#define _C1RXF5SID_SID7_MASK                     0x00001000
#define _C1RXF5SID_SID7_LENGTH                   0x00000001

#define _C1RXF5SID_SID8_POSITION                 0x0000000D
#define _C1RXF5SID_SID8_MASK                     0x00002000
#define _C1RXF5SID_SID8_LENGTH                   0x00000001

#define _C1RXF5SID_SID9_POSITION                 0x0000000E
#define _C1RXF5SID_SID9_MASK                     0x00004000
#define _C1RXF5SID_SID9_LENGTH                   0x00000001

#define _C1RXF5SID_SID10_POSITION                0x0000000F
#define _C1RXF5SID_SID10_MASK                    0x00008000
#define _C1RXF5SID_SID10_LENGTH                  0x00000001

#define _C1RXF5EID_EID_POSITION                  0x00000000
#define _C1RXF5EID_EID_MASK                      0x0000FFFF
#define _C1RXF5EID_EID_LENGTH                    0x00000010

#define _C1RXF5EID_EID0_POSITION                 0x00000000
#define _C1RXF5EID_EID0_MASK                     0x00000001
#define _C1RXF5EID_EID0_LENGTH                   0x00000001

#define _C1RXF5EID_EID1_POSITION                 0x00000001
#define _C1RXF5EID_EID1_MASK                     0x00000002
#define _C1RXF5EID_EID1_LENGTH                   0x00000001

#define _C1RXF5EID_EID2_POSITION                 0x00000002
#define _C1RXF5EID_EID2_MASK                     0x00000004
#define _C1RXF5EID_EID2_LENGTH                   0x00000001

#define _C1RXF5EID_EID3_POSITION                 0x00000003
#define _C1RXF5EID_EID3_MASK                     0x00000008
#define _C1RXF5EID_EID3_LENGTH                   0x00000001

#define _C1RXF5EID_EID4_POSITION                 0x00000004
#define _C1RXF5EID_EID4_MASK                     0x00000010
#define _C1RXF5EID_EID4_LENGTH                   0x00000001

#define _C1RXF5EID_EID5_POSITION                 0x00000005
#define _C1RXF5EID_EID5_MASK                     0x00000020
#define _C1RXF5EID_EID5_LENGTH                   0x00000001

#define _C1RXF5EID_EID6_POSITION                 0x00000006
#define _C1RXF5EID_EID6_MASK                     0x00000040
#define _C1RXF5EID_EID6_LENGTH                   0x00000001

#define _C1RXF5EID_EID7_POSITION                 0x00000007
#define _C1RXF5EID_EID7_MASK                     0x00000080
#define _C1RXF5EID_EID7_LENGTH                   0x00000001

#define _C1RXF5EID_EID8_POSITION                 0x00000008
#define _C1RXF5EID_EID8_MASK                     0x00000100
#define _C1RXF5EID_EID8_LENGTH                   0x00000001

#define _C1RXF5EID_EID9_POSITION                 0x00000009
#define _C1RXF5EID_EID9_MASK                     0x00000200
#define _C1RXF5EID_EID9_LENGTH                   0x00000001

#define _C1RXF5EID_EID10_POSITION                0x0000000A
#define _C1RXF5EID_EID10_MASK                    0x00000400
#define _C1RXF5EID_EID10_LENGTH                  0x00000001

#define _C1RXF5EID_EID11_POSITION                0x0000000B
#define _C1RXF5EID_EID11_MASK                    0x00000800
#define _C1RXF5EID_EID11_LENGTH                  0x00000001

#define _C1RXF5EID_EID12_POSITION                0x0000000C
#define _C1RXF5EID_EID12_MASK                    0x00001000
#define _C1RXF5EID_EID12_LENGTH                  0x00000001

#define _C1RXF5EID_EID13_POSITION                0x0000000D
#define _C1RXF5EID_EID13_MASK                    0x00002000
#define _C1RXF5EID_EID13_LENGTH                  0x00000001

#define _C1RXF5EID_EID14_POSITION                0x0000000E
#define _C1RXF5EID_EID14_MASK                    0x00004000
#define _C1RXF5EID_EID14_LENGTH                  0x00000001

#define _C1RXF5EID_EID15_POSITION                0x0000000F
#define _C1RXF5EID_EID15_MASK                    0x00008000
#define _C1RXF5EID_EID15_LENGTH                  0x00000001

#define _C1RXF6SID_EID_POSITION                  0x00000000
#define _C1RXF6SID_EID_MASK                      0x00000003
#define _C1RXF6SID_EID_LENGTH                    0x00000002

#define _C1RXF6SID_EXIDE_POSITION                0x00000003
#define _C1RXF6SID_EXIDE_MASK                    0x00000008
#define _C1RXF6SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF6SID_SID_POSITION                  0x00000005
#define _C1RXF6SID_SID_MASK                      0x0000FFE0
#define _C1RXF6SID_SID_LENGTH                    0x0000000B

#define _C1RXF6SID_EID16_POSITION                0x00000000
#define _C1RXF6SID_EID16_MASK                    0x00000001
#define _C1RXF6SID_EID16_LENGTH                  0x00000001

#define _C1RXF6SID_EID17_POSITION                0x00000001
#define _C1RXF6SID_EID17_MASK                    0x00000002
#define _C1RXF6SID_EID17_LENGTH                  0x00000001

#define _C1RXF6SID_SID0_POSITION                 0x00000005
#define _C1RXF6SID_SID0_MASK                     0x00000020
#define _C1RXF6SID_SID0_LENGTH                   0x00000001

#define _C1RXF6SID_SID1_POSITION                 0x00000006
#define _C1RXF6SID_SID1_MASK                     0x00000040
#define _C1RXF6SID_SID1_LENGTH                   0x00000001

#define _C1RXF6SID_SID2_POSITION                 0x00000007
#define _C1RXF6SID_SID2_MASK                     0x00000080
#define _C1RXF6SID_SID2_LENGTH                   0x00000001

#define _C1RXF6SID_SID3_POSITION                 0x00000008
#define _C1RXF6SID_SID3_MASK                     0x00000100
#define _C1RXF6SID_SID3_LENGTH                   0x00000001

#define _C1RXF6SID_SID4_POSITION                 0x00000009
#define _C1RXF6SID_SID4_MASK                     0x00000200
#define _C1RXF6SID_SID4_LENGTH                   0x00000001

#define _C1RXF6SID_SID5_POSITION                 0x0000000A
#define _C1RXF6SID_SID5_MASK                     0x00000400
#define _C1RXF6SID_SID5_LENGTH                   0x00000001

#define _C1RXF6SID_SID6_POSITION                 0x0000000B
#define _C1RXF6SID_SID6_MASK                     0x00000800
#define _C1RXF6SID_SID6_LENGTH                   0x00000001

#define _C1RXF6SID_SID7_POSITION                 0x0000000C
#define _C1RXF6SID_SID7_MASK                     0x00001000
#define _C1RXF6SID_SID7_LENGTH                   0x00000001

#define _C1RXF6SID_SID8_POSITION                 0x0000000D
#define _C1RXF6SID_SID8_MASK                     0x00002000
#define _C1RXF6SID_SID8_LENGTH                   0x00000001

#define _C1RXF6SID_SID9_POSITION                 0x0000000E
#define _C1RXF6SID_SID9_MASK                     0x00004000
#define _C1RXF6SID_SID9_LENGTH                   0x00000001

#define _C1RXF6SID_SID10_POSITION                0x0000000F
#define _C1RXF6SID_SID10_MASK                    0x00008000
#define _C1RXF6SID_SID10_LENGTH                  0x00000001

#define _C1RXF6EID_EID_POSITION                  0x00000000
#define _C1RXF6EID_EID_MASK                      0x0000FFFF
#define _C1RXF6EID_EID_LENGTH                    0x00000010

#define _C1RXF6EID_EID0_POSITION                 0x00000000
#define _C1RXF6EID_EID0_MASK                     0x00000001
#define _C1RXF6EID_EID0_LENGTH                   0x00000001

#define _C1RXF6EID_EID1_POSITION                 0x00000001
#define _C1RXF6EID_EID1_MASK                     0x00000002
#define _C1RXF6EID_EID1_LENGTH                   0x00000001

#define _C1RXF6EID_EID2_POSITION                 0x00000002
#define _C1RXF6EID_EID2_MASK                     0x00000004
#define _C1RXF6EID_EID2_LENGTH                   0x00000001

#define _C1RXF6EID_EID3_POSITION                 0x00000003
#define _C1RXF6EID_EID3_MASK                     0x00000008
#define _C1RXF6EID_EID3_LENGTH                   0x00000001

#define _C1RXF6EID_EID4_POSITION                 0x00000004
#define _C1RXF6EID_EID4_MASK                     0x00000010
#define _C1RXF6EID_EID4_LENGTH                   0x00000001

#define _C1RXF6EID_EID5_POSITION                 0x00000005
#define _C1RXF6EID_EID5_MASK                     0x00000020
#define _C1RXF6EID_EID5_LENGTH                   0x00000001

#define _C1RXF6EID_EID6_POSITION                 0x00000006
#define _C1RXF6EID_EID6_MASK                     0x00000040
#define _C1RXF6EID_EID6_LENGTH                   0x00000001

#define _C1RXF6EID_EID7_POSITION                 0x00000007
#define _C1RXF6EID_EID7_MASK                     0x00000080
#define _C1RXF6EID_EID7_LENGTH                   0x00000001

#define _C1RXF6EID_EID8_POSITION                 0x00000008
#define _C1RXF6EID_EID8_MASK                     0x00000100
#define _C1RXF6EID_EID8_LENGTH                   0x00000001

#define _C1RXF6EID_EID9_POSITION                 0x00000009
#define _C1RXF6EID_EID9_MASK                     0x00000200
#define _C1RXF6EID_EID9_LENGTH                   0x00000001

#define _C1RXF6EID_EID10_POSITION                0x0000000A
#define _C1RXF6EID_EID10_MASK                    0x00000400
#define _C1RXF6EID_EID10_LENGTH                  0x00000001

#define _C1RXF6EID_EID11_POSITION                0x0000000B
#define _C1RXF6EID_EID11_MASK                    0x00000800
#define _C1RXF6EID_EID11_LENGTH                  0x00000001

#define _C1RXF6EID_EID12_POSITION                0x0000000C
#define _C1RXF6EID_EID12_MASK                    0x00001000
#define _C1RXF6EID_EID12_LENGTH                  0x00000001

#define _C1RXF6EID_EID13_POSITION                0x0000000D
#define _C1RXF6EID_EID13_MASK                    0x00002000
#define _C1RXF6EID_EID13_LENGTH                  0x00000001

#define _C1RXF6EID_EID14_POSITION                0x0000000E
#define _C1RXF6EID_EID14_MASK                    0x00004000
#define _C1RXF6EID_EID14_LENGTH                  0x00000001

#define _C1RXF6EID_EID15_POSITION                0x0000000F
#define _C1RXF6EID_EID15_MASK                    0x00008000
#define _C1RXF6EID_EID15_LENGTH                  0x00000001

#define _C1RXF7SID_EID_POSITION                  0x00000000
#define _C1RXF7SID_EID_MASK                      0x00000003
#define _C1RXF7SID_EID_LENGTH                    0x00000002

#define _C1RXF7SID_EXIDE_POSITION                0x00000003
#define _C1RXF7SID_EXIDE_MASK                    0x00000008
#define _C1RXF7SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF7SID_SID_POSITION                  0x00000005
#define _C1RXF7SID_SID_MASK                      0x0000FFE0
#define _C1RXF7SID_SID_LENGTH                    0x0000000B

#define _C1RXF7SID_EID16_POSITION                0x00000000
#define _C1RXF7SID_EID16_MASK                    0x00000001
#define _C1RXF7SID_EID16_LENGTH                  0x00000001

#define _C1RXF7SID_EID17_POSITION                0x00000001
#define _C1RXF7SID_EID17_MASK                    0x00000002
#define _C1RXF7SID_EID17_LENGTH                  0x00000001

#define _C1RXF7SID_SID0_POSITION                 0x00000005
#define _C1RXF7SID_SID0_MASK                     0x00000020
#define _C1RXF7SID_SID0_LENGTH                   0x00000001

#define _C1RXF7SID_SID1_POSITION                 0x00000006
#define _C1RXF7SID_SID1_MASK                     0x00000040
#define _C1RXF7SID_SID1_LENGTH                   0x00000001

#define _C1RXF7SID_SID2_POSITION                 0x00000007
#define _C1RXF7SID_SID2_MASK                     0x00000080
#define _C1RXF7SID_SID2_LENGTH                   0x00000001

#define _C1RXF7SID_SID3_POSITION                 0x00000008
#define _C1RXF7SID_SID3_MASK                     0x00000100
#define _C1RXF7SID_SID3_LENGTH                   0x00000001

#define _C1RXF7SID_SID4_POSITION                 0x00000009
#define _C1RXF7SID_SID4_MASK                     0x00000200
#define _C1RXF7SID_SID4_LENGTH                   0x00000001

#define _C1RXF7SID_SID5_POSITION                 0x0000000A
#define _C1RXF7SID_SID5_MASK                     0x00000400
#define _C1RXF7SID_SID5_LENGTH                   0x00000001

#define _C1RXF7SID_SID6_POSITION                 0x0000000B
#define _C1RXF7SID_SID6_MASK                     0x00000800
#define _C1RXF7SID_SID6_LENGTH                   0x00000001

#define _C1RXF7SID_SID7_POSITION                 0x0000000C
#define _C1RXF7SID_SID7_MASK                     0x00001000
#define _C1RXF7SID_SID7_LENGTH                   0x00000001

#define _C1RXF7SID_SID8_POSITION                 0x0000000D
#define _C1RXF7SID_SID8_MASK                     0x00002000
#define _C1RXF7SID_SID8_LENGTH                   0x00000001

#define _C1RXF7SID_SID9_POSITION                 0x0000000E
#define _C1RXF7SID_SID9_MASK                     0x00004000
#define _C1RXF7SID_SID9_LENGTH                   0x00000001

#define _C1RXF7SID_SID10_POSITION                0x0000000F
#define _C1RXF7SID_SID10_MASK                    0x00008000
#define _C1RXF7SID_SID10_LENGTH                  0x00000001

#define _C1RXF7EID_EID_POSITION                  0x00000000
#define _C1RXF7EID_EID_MASK                      0x0000FFFF
#define _C1RXF7EID_EID_LENGTH                    0x00000010

#define _C1RXF7EID_EID0_POSITION                 0x00000000
#define _C1RXF7EID_EID0_MASK                     0x00000001
#define _C1RXF7EID_EID0_LENGTH                   0x00000001

#define _C1RXF7EID_EID1_POSITION                 0x00000001
#define _C1RXF7EID_EID1_MASK                     0x00000002
#define _C1RXF7EID_EID1_LENGTH                   0x00000001

#define _C1RXF7EID_EID2_POSITION                 0x00000002
#define _C1RXF7EID_EID2_MASK                     0x00000004
#define _C1RXF7EID_EID2_LENGTH                   0x00000001

#define _C1RXF7EID_EID3_POSITION                 0x00000003
#define _C1RXF7EID_EID3_MASK                     0x00000008
#define _C1RXF7EID_EID3_LENGTH                   0x00000001

#define _C1RXF7EID_EID4_POSITION                 0x00000004
#define _C1RXF7EID_EID4_MASK                     0x00000010
#define _C1RXF7EID_EID4_LENGTH                   0x00000001

#define _C1RXF7EID_EID5_POSITION                 0x00000005
#define _C1RXF7EID_EID5_MASK                     0x00000020
#define _C1RXF7EID_EID5_LENGTH                   0x00000001

#define _C1RXF7EID_EID6_POSITION                 0x00000006
#define _C1RXF7EID_EID6_MASK                     0x00000040
#define _C1RXF7EID_EID6_LENGTH                   0x00000001

#define _C1RXF7EID_EID7_POSITION                 0x00000007
#define _C1RXF7EID_EID7_MASK                     0x00000080
#define _C1RXF7EID_EID7_LENGTH                   0x00000001

#define _C1RXF7EID_EID8_POSITION                 0x00000008
#define _C1RXF7EID_EID8_MASK                     0x00000100
#define _C1RXF7EID_EID8_LENGTH                   0x00000001

#define _C1RXF7EID_EID9_POSITION                 0x00000009
#define _C1RXF7EID_EID9_MASK                     0x00000200
#define _C1RXF7EID_EID9_LENGTH                   0x00000001

#define _C1RXF7EID_EID10_POSITION                0x0000000A
#define _C1RXF7EID_EID10_MASK                    0x00000400
#define _C1RXF7EID_EID10_LENGTH                  0x00000001

#define _C1RXF7EID_EID11_POSITION                0x0000000B
#define _C1RXF7EID_EID11_MASK                    0x00000800
#define _C1RXF7EID_EID11_LENGTH                  0x00000001

#define _C1RXF7EID_EID12_POSITION                0x0000000C
#define _C1RXF7EID_EID12_MASK                    0x00001000
#define _C1RXF7EID_EID12_LENGTH                  0x00000001

#define _C1RXF7EID_EID13_POSITION                0x0000000D
#define _C1RXF7EID_EID13_MASK                    0x00002000
#define _C1RXF7EID_EID13_LENGTH                  0x00000001

#define _C1RXF7EID_EID14_POSITION                0x0000000E
#define _C1RXF7EID_EID14_MASK                    0x00004000
#define _C1RXF7EID_EID14_LENGTH                  0x00000001

#define _C1RXF7EID_EID15_POSITION                0x0000000F
#define _C1RXF7EID_EID15_MASK                    0x00008000
#define _C1RXF7EID_EID15_LENGTH                  0x00000001

#define _C1RXF8SID_EID_POSITION                  0x00000000
#define _C1RXF8SID_EID_MASK                      0x00000003
#define _C1RXF8SID_EID_LENGTH                    0x00000002

#define _C1RXF8SID_EXIDE_POSITION                0x00000003
#define _C1RXF8SID_EXIDE_MASK                    0x00000008
#define _C1RXF8SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF8SID_SID_POSITION                  0x00000005
#define _C1RXF8SID_SID_MASK                      0x0000FFE0
#define _C1RXF8SID_SID_LENGTH                    0x0000000B

#define _C1RXF8SID_EID16_POSITION                0x00000000
#define _C1RXF8SID_EID16_MASK                    0x00000001
#define _C1RXF8SID_EID16_LENGTH                  0x00000001

#define _C1RXF8SID_EID17_POSITION                0x00000001
#define _C1RXF8SID_EID17_MASK                    0x00000002
#define _C1RXF8SID_EID17_LENGTH                  0x00000001

#define _C1RXF8SID_SID0_POSITION                 0x00000005
#define _C1RXF8SID_SID0_MASK                     0x00000020
#define _C1RXF8SID_SID0_LENGTH                   0x00000001

#define _C1RXF8SID_SID1_POSITION                 0x00000006
#define _C1RXF8SID_SID1_MASK                     0x00000040
#define _C1RXF8SID_SID1_LENGTH                   0x00000001

#define _C1RXF8SID_SID2_POSITION                 0x00000007
#define _C1RXF8SID_SID2_MASK                     0x00000080
#define _C1RXF8SID_SID2_LENGTH                   0x00000001

#define _C1RXF8SID_SID3_POSITION                 0x00000008
#define _C1RXF8SID_SID3_MASK                     0x00000100
#define _C1RXF8SID_SID3_LENGTH                   0x00000001

#define _C1RXF8SID_SID4_POSITION                 0x00000009
#define _C1RXF8SID_SID4_MASK                     0x00000200
#define _C1RXF8SID_SID4_LENGTH                   0x00000001

#define _C1RXF8SID_SID5_POSITION                 0x0000000A
#define _C1RXF8SID_SID5_MASK                     0x00000400
#define _C1RXF8SID_SID5_LENGTH                   0x00000001

#define _C1RXF8SID_SID6_POSITION                 0x0000000B
#define _C1RXF8SID_SID6_MASK                     0x00000800
#define _C1RXF8SID_SID6_LENGTH                   0x00000001

#define _C1RXF8SID_SID7_POSITION                 0x0000000C
#define _C1RXF8SID_SID7_MASK                     0x00001000
#define _C1RXF8SID_SID7_LENGTH                   0x00000001

#define _C1RXF8SID_SID8_POSITION                 0x0000000D
#define _C1RXF8SID_SID8_MASK                     0x00002000
#define _C1RXF8SID_SID8_LENGTH                   0x00000001

#define _C1RXF8SID_SID9_POSITION                 0x0000000E
#define _C1RXF8SID_SID9_MASK                     0x00004000
#define _C1RXF8SID_SID9_LENGTH                   0x00000001

#define _C1RXF8SID_SID10_POSITION                0x0000000F
#define _C1RXF8SID_SID10_MASK                    0x00008000
#define _C1RXF8SID_SID10_LENGTH                  0x00000001

#define _C1RXF8EID_EID_POSITION                  0x00000000
#define _C1RXF8EID_EID_MASK                      0x0000FFFF
#define _C1RXF8EID_EID_LENGTH                    0x00000010

#define _C1RXF8EID_EID0_POSITION                 0x00000000
#define _C1RXF8EID_EID0_MASK                     0x00000001
#define _C1RXF8EID_EID0_LENGTH                   0x00000001

#define _C1RXF8EID_EID1_POSITION                 0x00000001
#define _C1RXF8EID_EID1_MASK                     0x00000002
#define _C1RXF8EID_EID1_LENGTH                   0x00000001

#define _C1RXF8EID_EID2_POSITION                 0x00000002
#define _C1RXF8EID_EID2_MASK                     0x00000004
#define _C1RXF8EID_EID2_LENGTH                   0x00000001

#define _C1RXF8EID_EID3_POSITION                 0x00000003
#define _C1RXF8EID_EID3_MASK                     0x00000008
#define _C1RXF8EID_EID3_LENGTH                   0x00000001

#define _C1RXF8EID_EID4_POSITION                 0x00000004
#define _C1RXF8EID_EID4_MASK                     0x00000010
#define _C1RXF8EID_EID4_LENGTH                   0x00000001

#define _C1RXF8EID_EID5_POSITION                 0x00000005
#define _C1RXF8EID_EID5_MASK                     0x00000020
#define _C1RXF8EID_EID5_LENGTH                   0x00000001

#define _C1RXF8EID_EID6_POSITION                 0x00000006
#define _C1RXF8EID_EID6_MASK                     0x00000040
#define _C1RXF8EID_EID6_LENGTH                   0x00000001

#define _C1RXF8EID_EID7_POSITION                 0x00000007
#define _C1RXF8EID_EID7_MASK                     0x00000080
#define _C1RXF8EID_EID7_LENGTH                   0x00000001

#define _C1RXF8EID_EID8_POSITION                 0x00000008
#define _C1RXF8EID_EID8_MASK                     0x00000100
#define _C1RXF8EID_EID8_LENGTH                   0x00000001

#define _C1RXF8EID_EID9_POSITION                 0x00000009
#define _C1RXF8EID_EID9_MASK                     0x00000200
#define _C1RXF8EID_EID9_LENGTH                   0x00000001

#define _C1RXF8EID_EID10_POSITION                0x0000000A
#define _C1RXF8EID_EID10_MASK                    0x00000400
#define _C1RXF8EID_EID10_LENGTH                  0x00000001

#define _C1RXF8EID_EID11_POSITION                0x0000000B
#define _C1RXF8EID_EID11_MASK                    0x00000800
#define _C1RXF8EID_EID11_LENGTH                  0x00000001

#define _C1RXF8EID_EID12_POSITION                0x0000000C
#define _C1RXF8EID_EID12_MASK                    0x00001000
#define _C1RXF8EID_EID12_LENGTH                  0x00000001

#define _C1RXF8EID_EID13_POSITION                0x0000000D
#define _C1RXF8EID_EID13_MASK                    0x00002000
#define _C1RXF8EID_EID13_LENGTH                  0x00000001

#define _C1RXF8EID_EID14_POSITION                0x0000000E
#define _C1RXF8EID_EID14_MASK                    0x00004000
#define _C1RXF8EID_EID14_LENGTH                  0x00000001

#define _C1RXF8EID_EID15_POSITION                0x0000000F
#define _C1RXF8EID_EID15_MASK                    0x00008000
#define _C1RXF8EID_EID15_LENGTH                  0x00000001

#define _C1RXF9SID_EID_POSITION                  0x00000000
#define _C1RXF9SID_EID_MASK                      0x00000003
#define _C1RXF9SID_EID_LENGTH                    0x00000002

#define _C1RXF9SID_EXIDE_POSITION                0x00000003
#define _C1RXF9SID_EXIDE_MASK                    0x00000008
#define _C1RXF9SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF9SID_SID_POSITION                  0x00000005
#define _C1RXF9SID_SID_MASK                      0x0000FFE0
#define _C1RXF9SID_SID_LENGTH                    0x0000000B

#define _C1RXF9SID_EID16_POSITION                0x00000000
#define _C1RXF9SID_EID16_MASK                    0x00000001
#define _C1RXF9SID_EID16_LENGTH                  0x00000001

#define _C1RXF9SID_EID17_POSITION                0x00000001
#define _C1RXF9SID_EID17_MASK                    0x00000002
#define _C1RXF9SID_EID17_LENGTH                  0x00000001

#define _C1RXF9SID_SID0_POSITION                 0x00000005
#define _C1RXF9SID_SID0_MASK                     0x00000020
#define _C1RXF9SID_SID0_LENGTH                   0x00000001

#define _C1RXF9SID_SID1_POSITION                 0x00000006
#define _C1RXF9SID_SID1_MASK                     0x00000040
#define _C1RXF9SID_SID1_LENGTH                   0x00000001

#define _C1RXF9SID_SID2_POSITION                 0x00000007
#define _C1RXF9SID_SID2_MASK                     0x00000080
#define _C1RXF9SID_SID2_LENGTH                   0x00000001

#define _C1RXF9SID_SID3_POSITION                 0x00000008
#define _C1RXF9SID_SID3_MASK                     0x00000100
#define _C1RXF9SID_SID3_LENGTH                   0x00000001

#define _C1RXF9SID_SID4_POSITION                 0x00000009
#define _C1RXF9SID_SID4_MASK                     0x00000200
#define _C1RXF9SID_SID4_LENGTH                   0x00000001

#define _C1RXF9SID_SID5_POSITION                 0x0000000A
#define _C1RXF9SID_SID5_MASK                     0x00000400
#define _C1RXF9SID_SID5_LENGTH                   0x00000001

#define _C1RXF9SID_SID6_POSITION                 0x0000000B
#define _C1RXF9SID_SID6_MASK                     0x00000800
#define _C1RXF9SID_SID6_LENGTH                   0x00000001

#define _C1RXF9SID_SID7_POSITION                 0x0000000C
#define _C1RXF9SID_SID7_MASK                     0x00001000
#define _C1RXF9SID_SID7_LENGTH                   0x00000001

#define _C1RXF9SID_SID8_POSITION                 0x0000000D
#define _C1RXF9SID_SID8_MASK                     0x00002000
#define _C1RXF9SID_SID8_LENGTH                   0x00000001

#define _C1RXF9SID_SID9_POSITION                 0x0000000E
#define _C1RXF9SID_SID9_MASK                     0x00004000
#define _C1RXF9SID_SID9_LENGTH                   0x00000001

#define _C1RXF9SID_SID10_POSITION                0x0000000F
#define _C1RXF9SID_SID10_MASK                    0x00008000
#define _C1RXF9SID_SID10_LENGTH                  0x00000001

#define _C1RXF9EID_EID_POSITION                  0x00000000
#define _C1RXF9EID_EID_MASK                      0x0000FFFF
#define _C1RXF9EID_EID_LENGTH                    0x00000010

#define _C1RXF9EID_EID0_POSITION                 0x00000000
#define _C1RXF9EID_EID0_MASK                     0x00000001
#define _C1RXF9EID_EID0_LENGTH                   0x00000001

#define _C1RXF9EID_EID1_POSITION                 0x00000001
#define _C1RXF9EID_EID1_MASK                     0x00000002
#define _C1RXF9EID_EID1_LENGTH                   0x00000001

#define _C1RXF9EID_EID2_POSITION                 0x00000002
#define _C1RXF9EID_EID2_MASK                     0x00000004
#define _C1RXF9EID_EID2_LENGTH                   0x00000001

#define _C1RXF9EID_EID3_POSITION                 0x00000003
#define _C1RXF9EID_EID3_MASK                     0x00000008
#define _C1RXF9EID_EID3_LENGTH                   0x00000001

#define _C1RXF9EID_EID4_POSITION                 0x00000004
#define _C1RXF9EID_EID4_MASK                     0x00000010
#define _C1RXF9EID_EID4_LENGTH                   0x00000001

#define _C1RXF9EID_EID5_POSITION                 0x00000005
#define _C1RXF9EID_EID5_MASK                     0x00000020
#define _C1RXF9EID_EID5_LENGTH                   0x00000001

#define _C1RXF9EID_EID6_POSITION                 0x00000006
#define _C1RXF9EID_EID6_MASK                     0x00000040
#define _C1RXF9EID_EID6_LENGTH                   0x00000001

#define _C1RXF9EID_EID7_POSITION                 0x00000007
#define _C1RXF9EID_EID7_MASK                     0x00000080
#define _C1RXF9EID_EID7_LENGTH                   0x00000001

#define _C1RXF9EID_EID8_POSITION                 0x00000008
#define _C1RXF9EID_EID8_MASK                     0x00000100
#define _C1RXF9EID_EID8_LENGTH                   0x00000001

#define _C1RXF9EID_EID9_POSITION                 0x00000009
#define _C1RXF9EID_EID9_MASK                     0x00000200
#define _C1RXF9EID_EID9_LENGTH                   0x00000001

#define _C1RXF9EID_EID10_POSITION                0x0000000A
#define _C1RXF9EID_EID10_MASK                    0x00000400
#define _C1RXF9EID_EID10_LENGTH                  0x00000001

#define _C1RXF9EID_EID11_POSITION                0x0000000B
#define _C1RXF9EID_EID11_MASK                    0x00000800
#define _C1RXF9EID_EID11_LENGTH                  0x00000001

#define _C1RXF9EID_EID12_POSITION                0x0000000C
#define _C1RXF9EID_EID12_MASK                    0x00001000
#define _C1RXF9EID_EID12_LENGTH                  0x00000001

#define _C1RXF9EID_EID13_POSITION                0x0000000D
#define _C1RXF9EID_EID13_MASK                    0x00002000
#define _C1RXF9EID_EID13_LENGTH                  0x00000001

#define _C1RXF9EID_EID14_POSITION                0x0000000E
#define _C1RXF9EID_EID14_MASK                    0x00004000
#define _C1RXF9EID_EID14_LENGTH                  0x00000001

#define _C1RXF9EID_EID15_POSITION                0x0000000F
#define _C1RXF9EID_EID15_MASK                    0x00008000
#define _C1RXF9EID_EID15_LENGTH                  0x00000001

#define _C1RXF10SID_EID_POSITION                 0x00000000
#define _C1RXF10SID_EID_MASK                     0x00000003
#define _C1RXF10SID_EID_LENGTH                   0x00000002

#define _C1RXF10SID_EXIDE_POSITION               0x00000003
#define _C1RXF10SID_EXIDE_MASK                   0x00000008
#define _C1RXF10SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF10SID_SID_POSITION                 0x00000005
#define _C1RXF10SID_SID_MASK                     0x0000FFE0
#define _C1RXF10SID_SID_LENGTH                   0x0000000B

#define _C1RXF10SID_EID16_POSITION               0x00000000
#define _C1RXF10SID_EID16_MASK                   0x00000001
#define _C1RXF10SID_EID16_LENGTH                 0x00000001

#define _C1RXF10SID_EID17_POSITION               0x00000001
#define _C1RXF10SID_EID17_MASK                   0x00000002
#define _C1RXF10SID_EID17_LENGTH                 0x00000001

#define _C1RXF10SID_SID0_POSITION                0x00000005
#define _C1RXF10SID_SID0_MASK                    0x00000020
#define _C1RXF10SID_SID0_LENGTH                  0x00000001

#define _C1RXF10SID_SID1_POSITION                0x00000006
#define _C1RXF10SID_SID1_MASK                    0x00000040
#define _C1RXF10SID_SID1_LENGTH                  0x00000001

#define _C1RXF10SID_SID2_POSITION                0x00000007
#define _C1RXF10SID_SID2_MASK                    0x00000080
#define _C1RXF10SID_SID2_LENGTH                  0x00000001

#define _C1RXF10SID_SID3_POSITION                0x00000008
#define _C1RXF10SID_SID3_MASK                    0x00000100
#define _C1RXF10SID_SID3_LENGTH                  0x00000001

#define _C1RXF10SID_SID4_POSITION                0x00000009
#define _C1RXF10SID_SID4_MASK                    0x00000200
#define _C1RXF10SID_SID4_LENGTH                  0x00000001

#define _C1RXF10SID_SID5_POSITION                0x0000000A
#define _C1RXF10SID_SID5_MASK                    0x00000400
#define _C1RXF10SID_SID5_LENGTH                  0x00000001

#define _C1RXF10SID_SID6_POSITION                0x0000000B
#define _C1RXF10SID_SID6_MASK                    0x00000800
#define _C1RXF10SID_SID6_LENGTH                  0x00000001

#define _C1RXF10SID_SID7_POSITION                0x0000000C
#define _C1RXF10SID_SID7_MASK                    0x00001000
#define _C1RXF10SID_SID7_LENGTH                  0x00000001

#define _C1RXF10SID_SID8_POSITION                0x0000000D
#define _C1RXF10SID_SID8_MASK                    0x00002000
#define _C1RXF10SID_SID8_LENGTH                  0x00000001

#define _C1RXF10SID_SID9_POSITION                0x0000000E
#define _C1RXF10SID_SID9_MASK                    0x00004000
#define _C1RXF10SID_SID9_LENGTH                  0x00000001

#define _C1RXF10SID_SID10_POSITION               0x0000000F
#define _C1RXF10SID_SID10_MASK                   0x00008000
#define _C1RXF10SID_SID10_LENGTH                 0x00000001

#define _C1RXF10EID_EID_POSITION                 0x00000000
#define _C1RXF10EID_EID_MASK                     0x0000FFFF
#define _C1RXF10EID_EID_LENGTH                   0x00000010

#define _C1RXF10EID_EID0_POSITION                0x00000000
#define _C1RXF10EID_EID0_MASK                    0x00000001
#define _C1RXF10EID_EID0_LENGTH                  0x00000001

#define _C1RXF10EID_EID1_POSITION                0x00000001
#define _C1RXF10EID_EID1_MASK                    0x00000002
#define _C1RXF10EID_EID1_LENGTH                  0x00000001

#define _C1RXF10EID_EID2_POSITION                0x00000002
#define _C1RXF10EID_EID2_MASK                    0x00000004
#define _C1RXF10EID_EID2_LENGTH                  0x00000001

#define _C1RXF10EID_EID3_POSITION                0x00000003
#define _C1RXF10EID_EID3_MASK                    0x00000008
#define _C1RXF10EID_EID3_LENGTH                  0x00000001

#define _C1RXF10EID_EID4_POSITION                0x00000004
#define _C1RXF10EID_EID4_MASK                    0x00000010
#define _C1RXF10EID_EID4_LENGTH                  0x00000001

#define _C1RXF10EID_EID5_POSITION                0x00000005
#define _C1RXF10EID_EID5_MASK                    0x00000020
#define _C1RXF10EID_EID5_LENGTH                  0x00000001

#define _C1RXF10EID_EID6_POSITION                0x00000006
#define _C1RXF10EID_EID6_MASK                    0x00000040
#define _C1RXF10EID_EID6_LENGTH                  0x00000001

#define _C1RXF10EID_EID7_POSITION                0x00000007
#define _C1RXF10EID_EID7_MASK                    0x00000080
#define _C1RXF10EID_EID7_LENGTH                  0x00000001

#define _C1RXF10EID_EID8_POSITION                0x00000008
#define _C1RXF10EID_EID8_MASK                    0x00000100
#define _C1RXF10EID_EID8_LENGTH                  0x00000001

#define _C1RXF10EID_EID9_POSITION                0x00000009
#define _C1RXF10EID_EID9_MASK                    0x00000200
#define _C1RXF10EID_EID9_LENGTH                  0x00000001

#define _C1RXF10EID_EID10_POSITION               0x0000000A
#define _C1RXF10EID_EID10_MASK                   0x00000400
#define _C1RXF10EID_EID10_LENGTH                 0x00000001

#define _C1RXF10EID_EID11_POSITION               0x0000000B
#define _C1RXF10EID_EID11_MASK                   0x00000800
#define _C1RXF10EID_EID11_LENGTH                 0x00000001

#define _C1RXF10EID_EID12_POSITION               0x0000000C
#define _C1RXF10EID_EID12_MASK                   0x00001000
#define _C1RXF10EID_EID12_LENGTH                 0x00000001

#define _C1RXF10EID_EID13_POSITION               0x0000000D
#define _C1RXF10EID_EID13_MASK                   0x00002000
#define _C1RXF10EID_EID13_LENGTH                 0x00000001

#define _C1RXF10EID_EID14_POSITION               0x0000000E
#define _C1RXF10EID_EID14_MASK                   0x00004000
#define _C1RXF10EID_EID14_LENGTH                 0x00000001

#define _C1RXF10EID_EID15_POSITION               0x0000000F
#define _C1RXF10EID_EID15_MASK                   0x00008000
#define _C1RXF10EID_EID15_LENGTH                 0x00000001

#define _C1RXF11SID_EID_POSITION                 0x00000000
#define _C1RXF11SID_EID_MASK                     0x00000003
#define _C1RXF11SID_EID_LENGTH                   0x00000002

#define _C1RXF11SID_EXIDE_POSITION               0x00000003
#define _C1RXF11SID_EXIDE_MASK                   0x00000008
#define _C1RXF11SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF11SID_SID_POSITION                 0x00000005
#define _C1RXF11SID_SID_MASK                     0x0000FFE0
#define _C1RXF11SID_SID_LENGTH                   0x0000000B

#define _C1RXF11SID_EID16_POSITION               0x00000000
#define _C1RXF11SID_EID16_MASK                   0x00000001
#define _C1RXF11SID_EID16_LENGTH                 0x00000001

#define _C1RXF11SID_EID17_POSITION               0x00000001
#define _C1RXF11SID_EID17_MASK                   0x00000002
#define _C1RXF11SID_EID17_LENGTH                 0x00000001

#define _C1RXF11SID_SID0_POSITION                0x00000005
#define _C1RXF11SID_SID0_MASK                    0x00000020
#define _C1RXF11SID_SID0_LENGTH                  0x00000001

#define _C1RXF11SID_SID1_POSITION                0x00000006
#define _C1RXF11SID_SID1_MASK                    0x00000040
#define _C1RXF11SID_SID1_LENGTH                  0x00000001

#define _C1RXF11SID_SID2_POSITION                0x00000007
#define _C1RXF11SID_SID2_MASK                    0x00000080
#define _C1RXF11SID_SID2_LENGTH                  0x00000001

#define _C1RXF11SID_SID3_POSITION                0x00000008
#define _C1RXF11SID_SID3_MASK                    0x00000100
#define _C1RXF11SID_SID3_LENGTH                  0x00000001

#define _C1RXF11SID_SID4_POSITION                0x00000009
#define _C1RXF11SID_SID4_MASK                    0x00000200
#define _C1RXF11SID_SID4_LENGTH                  0x00000001

#define _C1RXF11SID_SID5_POSITION                0x0000000A
#define _C1RXF11SID_SID5_MASK                    0x00000400
#define _C1RXF11SID_SID5_LENGTH                  0x00000001

#define _C1RXF11SID_SID6_POSITION                0x0000000B
#define _C1RXF11SID_SID6_MASK                    0x00000800
#define _C1RXF11SID_SID6_LENGTH                  0x00000001

#define _C1RXF11SID_SID7_POSITION                0x0000000C
#define _C1RXF11SID_SID7_MASK                    0x00001000
#define _C1RXF11SID_SID7_LENGTH                  0x00000001

#define _C1RXF11SID_SID8_POSITION                0x0000000D
#define _C1RXF11SID_SID8_MASK                    0x00002000
#define _C1RXF11SID_SID8_LENGTH                  0x00000001

#define _C1RXF11SID_SID9_POSITION                0x0000000E
#define _C1RXF11SID_SID9_MASK                    0x00004000
#define _C1RXF11SID_SID9_LENGTH                  0x00000001

#define _C1RXF11SID_SID10_POSITION               0x0000000F
#define _C1RXF11SID_SID10_MASK                   0x00008000
#define _C1RXF11SID_SID10_LENGTH                 0x00000001

#define _C1RXF11EID_EID_POSITION                 0x00000000
#define _C1RXF11EID_EID_MASK                     0x0000FFFF
#define _C1RXF11EID_EID_LENGTH                   0x00000010

#define _C1RXF11EID_EID0_POSITION                0x00000000
#define _C1RXF11EID_EID0_MASK                    0x00000001
#define _C1RXF11EID_EID0_LENGTH                  0x00000001

#define _C1RXF11EID_EID1_POSITION                0x00000001
#define _C1RXF11EID_EID1_MASK                    0x00000002
#define _C1RXF11EID_EID1_LENGTH                  0x00000001

#define _C1RXF11EID_EID2_POSITION                0x00000002
#define _C1RXF11EID_EID2_MASK                    0x00000004
#define _C1RXF11EID_EID2_LENGTH                  0x00000001

#define _C1RXF11EID_EID3_POSITION                0x00000003
#define _C1RXF11EID_EID3_MASK                    0x00000008
#define _C1RXF11EID_EID3_LENGTH                  0x00000001

#define _C1RXF11EID_EID4_POSITION                0x00000004
#define _C1RXF11EID_EID4_MASK                    0x00000010
#define _C1RXF11EID_EID4_LENGTH                  0x00000001

#define _C1RXF11EID_EID5_POSITION                0x00000005
#define _C1RXF11EID_EID5_MASK                    0x00000020
#define _C1RXF11EID_EID5_LENGTH                  0x00000001

#define _C1RXF11EID_EID6_POSITION                0x00000006
#define _C1RXF11EID_EID6_MASK                    0x00000040
#define _C1RXF11EID_EID6_LENGTH                  0x00000001

#define _C1RXF11EID_EID7_POSITION                0x00000007
#define _C1RXF11EID_EID7_MASK                    0x00000080
#define _C1RXF11EID_EID7_LENGTH                  0x00000001

#define _C1RXF11EID_EID8_POSITION                0x00000008
#define _C1RXF11EID_EID8_MASK                    0x00000100
#define _C1RXF11EID_EID8_LENGTH                  0x00000001

#define _C1RXF11EID_EID9_POSITION                0x00000009
#define _C1RXF11EID_EID9_MASK                    0x00000200
#define _C1RXF11EID_EID9_LENGTH                  0x00000001

#define _C1RXF11EID_EID10_POSITION               0x0000000A
#define _C1RXF11EID_EID10_MASK                   0x00000400
#define _C1RXF11EID_EID10_LENGTH                 0x00000001

#define _C1RXF11EID_EID11_POSITION               0x0000000B
#define _C1RXF11EID_EID11_MASK                   0x00000800
#define _C1RXF11EID_EID11_LENGTH                 0x00000001

#define _C1RXF11EID_EID12_POSITION               0x0000000C
#define _C1RXF11EID_EID12_MASK                   0x00001000
#define _C1RXF11EID_EID12_LENGTH                 0x00000001

#define _C1RXF11EID_EID13_POSITION               0x0000000D
#define _C1RXF11EID_EID13_MASK                   0x00002000
#define _C1RXF11EID_EID13_LENGTH                 0x00000001

#define _C1RXF11EID_EID14_POSITION               0x0000000E
#define _C1RXF11EID_EID14_MASK                   0x00004000
#define _C1RXF11EID_EID14_LENGTH                 0x00000001

#define _C1RXF11EID_EID15_POSITION               0x0000000F
#define _C1RXF11EID_EID15_MASK                   0x00008000
#define _C1RXF11EID_EID15_LENGTH                 0x00000001

#define _C1RXF12SID_EID_POSITION                 0x00000000
#define _C1RXF12SID_EID_MASK                     0x00000003
#define _C1RXF12SID_EID_LENGTH                   0x00000002

#define _C1RXF12SID_EXIDE_POSITION               0x00000003
#define _C1RXF12SID_EXIDE_MASK                   0x00000008
#define _C1RXF12SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF12SID_SID_POSITION                 0x00000005
#define _C1RXF12SID_SID_MASK                     0x0000FFE0
#define _C1RXF12SID_SID_LENGTH                   0x0000000B

#define _C1RXF12SID_EID16_POSITION               0x00000000
#define _C1RXF12SID_EID16_MASK                   0x00000001
#define _C1RXF12SID_EID16_LENGTH                 0x00000001

#define _C1RXF12SID_EID17_POSITION               0x00000001
#define _C1RXF12SID_EID17_MASK                   0x00000002
#define _C1RXF12SID_EID17_LENGTH                 0x00000001

#define _C1RXF12SID_SID0_POSITION                0x00000005
#define _C1RXF12SID_SID0_MASK                    0x00000020
#define _C1RXF12SID_SID0_LENGTH                  0x00000001

#define _C1RXF12SID_SID1_POSITION                0x00000006
#define _C1RXF12SID_SID1_MASK                    0x00000040
#define _C1RXF12SID_SID1_LENGTH                  0x00000001

#define _C1RXF12SID_SID2_POSITION                0x00000007
#define _C1RXF12SID_SID2_MASK                    0x00000080
#define _C1RXF12SID_SID2_LENGTH                  0x00000001

#define _C1RXF12SID_SID3_POSITION                0x00000008
#define _C1RXF12SID_SID3_MASK                    0x00000100
#define _C1RXF12SID_SID3_LENGTH                  0x00000001

#define _C1RXF12SID_SID4_POSITION                0x00000009
#define _C1RXF12SID_SID4_MASK                    0x00000200
#define _C1RXF12SID_SID4_LENGTH                  0x00000001

#define _C1RXF12SID_SID5_POSITION                0x0000000A
#define _C1RXF12SID_SID5_MASK                    0x00000400
#define _C1RXF12SID_SID5_LENGTH                  0x00000001

#define _C1RXF12SID_SID6_POSITION                0x0000000B
#define _C1RXF12SID_SID6_MASK                    0x00000800
#define _C1RXF12SID_SID6_LENGTH                  0x00000001

#define _C1RXF12SID_SID7_POSITION                0x0000000C
#define _C1RXF12SID_SID7_MASK                    0x00001000
#define _C1RXF12SID_SID7_LENGTH                  0x00000001

#define _C1RXF12SID_SID8_POSITION                0x0000000D
#define _C1RXF12SID_SID8_MASK                    0x00002000
#define _C1RXF12SID_SID8_LENGTH                  0x00000001

#define _C1RXF12SID_SID9_POSITION                0x0000000E
#define _C1RXF12SID_SID9_MASK                    0x00004000
#define _C1RXF12SID_SID9_LENGTH                  0x00000001

#define _C1RXF12SID_SID10_POSITION               0x0000000F
#define _C1RXF12SID_SID10_MASK                   0x00008000
#define _C1RXF12SID_SID10_LENGTH                 0x00000001

#define _C1RXF12EID_EID_POSITION                 0x00000000
#define _C1RXF12EID_EID_MASK                     0x0000FFFF
#define _C1RXF12EID_EID_LENGTH                   0x00000010

#define _C1RXF12EID_EID0_POSITION                0x00000000
#define _C1RXF12EID_EID0_MASK                    0x00000001
#define _C1RXF12EID_EID0_LENGTH                  0x00000001

#define _C1RXF12EID_EID1_POSITION                0x00000001
#define _C1RXF12EID_EID1_MASK                    0x00000002
#define _C1RXF12EID_EID1_LENGTH                  0x00000001

#define _C1RXF12EID_EID2_POSITION                0x00000002
#define _C1RXF12EID_EID2_MASK                    0x00000004
#define _C1RXF12EID_EID2_LENGTH                  0x00000001

#define _C1RXF12EID_EID3_POSITION                0x00000003
#define _C1RXF12EID_EID3_MASK                    0x00000008
#define _C1RXF12EID_EID3_LENGTH                  0x00000001

#define _C1RXF12EID_EID4_POSITION                0x00000004
#define _C1RXF12EID_EID4_MASK                    0x00000010
#define _C1RXF12EID_EID4_LENGTH                  0x00000001

#define _C1RXF12EID_EID5_POSITION                0x00000005
#define _C1RXF12EID_EID5_MASK                    0x00000020
#define _C1RXF12EID_EID5_LENGTH                  0x00000001

#define _C1RXF12EID_EID6_POSITION                0x00000006
#define _C1RXF12EID_EID6_MASK                    0x00000040
#define _C1RXF12EID_EID6_LENGTH                  0x00000001

#define _C1RXF12EID_EID7_POSITION                0x00000007
#define _C1RXF12EID_EID7_MASK                    0x00000080
#define _C1RXF12EID_EID7_LENGTH                  0x00000001

#define _C1RXF12EID_EID8_POSITION                0x00000008
#define _C1RXF12EID_EID8_MASK                    0x00000100
#define _C1RXF12EID_EID8_LENGTH                  0x00000001

#define _C1RXF12EID_EID9_POSITION                0x00000009
#define _C1RXF12EID_EID9_MASK                    0x00000200
#define _C1RXF12EID_EID9_LENGTH                  0x00000001

#define _C1RXF12EID_EID10_POSITION               0x0000000A
#define _C1RXF12EID_EID10_MASK                   0x00000400
#define _C1RXF12EID_EID10_LENGTH                 0x00000001

#define _C1RXF12EID_EID11_POSITION               0x0000000B
#define _C1RXF12EID_EID11_MASK                   0x00000800
#define _C1RXF12EID_EID11_LENGTH                 0x00000001

#define _C1RXF12EID_EID12_POSITION               0x0000000C
#define _C1RXF12EID_EID12_MASK                   0x00001000
#define _C1RXF12EID_EID12_LENGTH                 0x00000001

#define _C1RXF12EID_EID13_POSITION               0x0000000D
#define _C1RXF12EID_EID13_MASK                   0x00002000
#define _C1RXF12EID_EID13_LENGTH                 0x00000001

#define _C1RXF12EID_EID14_POSITION               0x0000000E
#define _C1RXF12EID_EID14_MASK                   0x00004000
#define _C1RXF12EID_EID14_LENGTH                 0x00000001

#define _C1RXF12EID_EID15_POSITION               0x0000000F
#define _C1RXF12EID_EID15_MASK                   0x00008000
#define _C1RXF12EID_EID15_LENGTH                 0x00000001

#define _C1RXF13SID_EID_POSITION                 0x00000000
#define _C1RXF13SID_EID_MASK                     0x00000003
#define _C1RXF13SID_EID_LENGTH                   0x00000002

#define _C1RXF13SID_EXIDE_POSITION               0x00000003
#define _C1RXF13SID_EXIDE_MASK                   0x00000008
#define _C1RXF13SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF13SID_SID_POSITION                 0x00000005
#define _C1RXF13SID_SID_MASK                     0x0000FFE0
#define _C1RXF13SID_SID_LENGTH                   0x0000000B

#define _C1RXF13SID_EID16_POSITION               0x00000000
#define _C1RXF13SID_EID16_MASK                   0x00000001
#define _C1RXF13SID_EID16_LENGTH                 0x00000001

#define _C1RXF13SID_EID17_POSITION               0x00000001
#define _C1RXF13SID_EID17_MASK                   0x00000002
#define _C1RXF13SID_EID17_LENGTH                 0x00000001

#define _C1RXF13SID_SID0_POSITION                0x00000005
#define _C1RXF13SID_SID0_MASK                    0x00000020
#define _C1RXF13SID_SID0_LENGTH                  0x00000001

#define _C1RXF13SID_SID1_POSITION                0x00000006
#define _C1RXF13SID_SID1_MASK                    0x00000040
#define _C1RXF13SID_SID1_LENGTH                  0x00000001

#define _C1RXF13SID_SID2_POSITION                0x00000007
#define _C1RXF13SID_SID2_MASK                    0x00000080
#define _C1RXF13SID_SID2_LENGTH                  0x00000001

#define _C1RXF13SID_SID3_POSITION                0x00000008
#define _C1RXF13SID_SID3_MASK                    0x00000100
#define _C1RXF13SID_SID3_LENGTH                  0x00000001

#define _C1RXF13SID_SID4_POSITION                0x00000009
#define _C1RXF13SID_SID4_MASK                    0x00000200
#define _C1RXF13SID_SID4_LENGTH                  0x00000001

#define _C1RXF13SID_SID5_POSITION                0x0000000A
#define _C1RXF13SID_SID5_MASK                    0x00000400
#define _C1RXF13SID_SID5_LENGTH                  0x00000001

#define _C1RXF13SID_SID6_POSITION                0x0000000B
#define _C1RXF13SID_SID6_MASK                    0x00000800
#define _C1RXF13SID_SID6_LENGTH                  0x00000001

#define _C1RXF13SID_SID7_POSITION                0x0000000C
#define _C1RXF13SID_SID7_MASK                    0x00001000
#define _C1RXF13SID_SID7_LENGTH                  0x00000001

#define _C1RXF13SID_SID8_POSITION                0x0000000D
#define _C1RXF13SID_SID8_MASK                    0x00002000
#define _C1RXF13SID_SID8_LENGTH                  0x00000001

#define _C1RXF13SID_SID9_POSITION                0x0000000E
#define _C1RXF13SID_SID9_MASK                    0x00004000
#define _C1RXF13SID_SID9_LENGTH                  0x00000001

#define _C1RXF13SID_SID10_POSITION               0x0000000F
#define _C1RXF13SID_SID10_MASK                   0x00008000
#define _C1RXF13SID_SID10_LENGTH                 0x00000001

#define _C1RXF13EID_EID_POSITION                 0x00000000
#define _C1RXF13EID_EID_MASK                     0x0000FFFF
#define _C1RXF13EID_EID_LENGTH                   0x00000010

#define _C1RXF13EID_EID0_POSITION                0x00000000
#define _C1RXF13EID_EID0_MASK                    0x00000001
#define _C1RXF13EID_EID0_LENGTH                  0x00000001

#define _C1RXF13EID_EID1_POSITION                0x00000001
#define _C1RXF13EID_EID1_MASK                    0x00000002
#define _C1RXF13EID_EID1_LENGTH                  0x00000001

#define _C1RXF13EID_EID2_POSITION                0x00000002
#define _C1RXF13EID_EID2_MASK                    0x00000004
#define _C1RXF13EID_EID2_LENGTH                  0x00000001

#define _C1RXF13EID_EID3_POSITION                0x00000003
#define _C1RXF13EID_EID3_MASK                    0x00000008
#define _C1RXF13EID_EID3_LENGTH                  0x00000001

#define _C1RXF13EID_EID4_POSITION                0x00000004
#define _C1RXF13EID_EID4_MASK                    0x00000010
#define _C1RXF13EID_EID4_LENGTH                  0x00000001

#define _C1RXF13EID_EID5_POSITION                0x00000005
#define _C1RXF13EID_EID5_MASK                    0x00000020
#define _C1RXF13EID_EID5_LENGTH                  0x00000001

#define _C1RXF13EID_EID6_POSITION                0x00000006
#define _C1RXF13EID_EID6_MASK                    0x00000040
#define _C1RXF13EID_EID6_LENGTH                  0x00000001

#define _C1RXF13EID_EID7_POSITION                0x00000007
#define _C1RXF13EID_EID7_MASK                    0x00000080
#define _C1RXF13EID_EID7_LENGTH                  0x00000001

#define _C1RXF13EID_EID8_POSITION                0x00000008
#define _C1RXF13EID_EID8_MASK                    0x00000100
#define _C1RXF13EID_EID8_LENGTH                  0x00000001

#define _C1RXF13EID_EID9_POSITION                0x00000009
#define _C1RXF13EID_EID9_MASK                    0x00000200
#define _C1RXF13EID_EID9_LENGTH                  0x00000001

#define _C1RXF13EID_EID10_POSITION               0x0000000A
#define _C1RXF13EID_EID10_MASK                   0x00000400
#define _C1RXF13EID_EID10_LENGTH                 0x00000001

#define _C1RXF13EID_EID11_POSITION               0x0000000B
#define _C1RXF13EID_EID11_MASK                   0x00000800
#define _C1RXF13EID_EID11_LENGTH                 0x00000001

#define _C1RXF13EID_EID12_POSITION               0x0000000C
#define _C1RXF13EID_EID12_MASK                   0x00001000
#define _C1RXF13EID_EID12_LENGTH                 0x00000001

#define _C1RXF13EID_EID13_POSITION               0x0000000D
#define _C1RXF13EID_EID13_MASK                   0x00002000
#define _C1RXF13EID_EID13_LENGTH                 0x00000001

#define _C1RXF13EID_EID14_POSITION               0x0000000E
#define _C1RXF13EID_EID14_MASK                   0x00004000
#define _C1RXF13EID_EID14_LENGTH                 0x00000001

#define _C1RXF13EID_EID15_POSITION               0x0000000F
#define _C1RXF13EID_EID15_MASK                   0x00008000
#define _C1RXF13EID_EID15_LENGTH                 0x00000001

#define _C1RXF14SID_EID_POSITION                 0x00000000
#define _C1RXF14SID_EID_MASK                     0x00000003
#define _C1RXF14SID_EID_LENGTH                   0x00000002

#define _C1RXF14SID_EXIDE_POSITION               0x00000003
#define _C1RXF14SID_EXIDE_MASK                   0x00000008
#define _C1RXF14SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF14SID_SID_POSITION                 0x00000005
#define _C1RXF14SID_SID_MASK                     0x0000FFE0
#define _C1RXF14SID_SID_LENGTH                   0x0000000B

#define _C1RXF14SID_EID16_POSITION               0x00000000
#define _C1RXF14SID_EID16_MASK                   0x00000001
#define _C1RXF14SID_EID16_LENGTH                 0x00000001

#define _C1RXF14SID_EID17_POSITION               0x00000001
#define _C1RXF14SID_EID17_MASK                   0x00000002
#define _C1RXF14SID_EID17_LENGTH                 0x00000001

#define _C1RXF14SID_SID0_POSITION                0x00000005
#define _C1RXF14SID_SID0_MASK                    0x00000020
#define _C1RXF14SID_SID0_LENGTH                  0x00000001

#define _C1RXF14SID_SID1_POSITION                0x00000006
#define _C1RXF14SID_SID1_MASK                    0x00000040
#define _C1RXF14SID_SID1_LENGTH                  0x00000001

#define _C1RXF14SID_SID2_POSITION                0x00000007
#define _C1RXF14SID_SID2_MASK                    0x00000080
#define _C1RXF14SID_SID2_LENGTH                  0x00000001

#define _C1RXF14SID_SID3_POSITION                0x00000008
#define _C1RXF14SID_SID3_MASK                    0x00000100
#define _C1RXF14SID_SID3_LENGTH                  0x00000001

#define _C1RXF14SID_SID4_POSITION                0x00000009
#define _C1RXF14SID_SID4_MASK                    0x00000200
#define _C1RXF14SID_SID4_LENGTH                  0x00000001

#define _C1RXF14SID_SID5_POSITION                0x0000000A
#define _C1RXF14SID_SID5_MASK                    0x00000400
#define _C1RXF14SID_SID5_LENGTH                  0x00000001

#define _C1RXF14SID_SID6_POSITION                0x0000000B
#define _C1RXF14SID_SID6_MASK                    0x00000800
#define _C1RXF14SID_SID6_LENGTH                  0x00000001

#define _C1RXF14SID_SID7_POSITION                0x0000000C
#define _C1RXF14SID_SID7_MASK                    0x00001000
#define _C1RXF14SID_SID7_LENGTH                  0x00000001

#define _C1RXF14SID_SID8_POSITION                0x0000000D
#define _C1RXF14SID_SID8_MASK                    0x00002000
#define _C1RXF14SID_SID8_LENGTH                  0x00000001

#define _C1RXF14SID_SID9_POSITION                0x0000000E
#define _C1RXF14SID_SID9_MASK                    0x00004000
#define _C1RXF14SID_SID9_LENGTH                  0x00000001

#define _C1RXF14SID_SID10_POSITION               0x0000000F
#define _C1RXF14SID_SID10_MASK                   0x00008000
#define _C1RXF14SID_SID10_LENGTH                 0x00000001

#define _C1RXF14EID_EID_POSITION                 0x00000000
#define _C1RXF14EID_EID_MASK                     0x0000FFFF
#define _C1RXF14EID_EID_LENGTH                   0x00000010

#define _C1RXF14EID_EID0_POSITION                0x00000000
#define _C1RXF14EID_EID0_MASK                    0x00000001
#define _C1RXF14EID_EID0_LENGTH                  0x00000001

#define _C1RXF14EID_EID1_POSITION                0x00000001
#define _C1RXF14EID_EID1_MASK                    0x00000002
#define _C1RXF14EID_EID1_LENGTH                  0x00000001

#define _C1RXF14EID_EID2_POSITION                0x00000002
#define _C1RXF14EID_EID2_MASK                    0x00000004
#define _C1RXF14EID_EID2_LENGTH                  0x00000001

#define _C1RXF14EID_EID3_POSITION                0x00000003
#define _C1RXF14EID_EID3_MASK                    0x00000008
#define _C1RXF14EID_EID3_LENGTH                  0x00000001

#define _C1RXF14EID_EID4_POSITION                0x00000004
#define _C1RXF14EID_EID4_MASK                    0x00000010
#define _C1RXF14EID_EID4_LENGTH                  0x00000001

#define _C1RXF14EID_EID5_POSITION                0x00000005
#define _C1RXF14EID_EID5_MASK                    0x00000020
#define _C1RXF14EID_EID5_LENGTH                  0x00000001

#define _C1RXF14EID_EID6_POSITION                0x00000006
#define _C1RXF14EID_EID6_MASK                    0x00000040
#define _C1RXF14EID_EID6_LENGTH                  0x00000001

#define _C1RXF14EID_EID7_POSITION                0x00000007
#define _C1RXF14EID_EID7_MASK                    0x00000080
#define _C1RXF14EID_EID7_LENGTH                  0x00000001

#define _C1RXF14EID_EID8_POSITION                0x00000008
#define _C1RXF14EID_EID8_MASK                    0x00000100
#define _C1RXF14EID_EID8_LENGTH                  0x00000001

#define _C1RXF14EID_EID9_POSITION                0x00000009
#define _C1RXF14EID_EID9_MASK                    0x00000200
#define _C1RXF14EID_EID9_LENGTH                  0x00000001

#define _C1RXF14EID_EID10_POSITION               0x0000000A
#define _C1RXF14EID_EID10_MASK                   0x00000400
#define _C1RXF14EID_EID10_LENGTH                 0x00000001

#define _C1RXF14EID_EID11_POSITION               0x0000000B
#define _C1RXF14EID_EID11_MASK                   0x00000800
#define _C1RXF14EID_EID11_LENGTH                 0x00000001

#define _C1RXF14EID_EID12_POSITION               0x0000000C
#define _C1RXF14EID_EID12_MASK                   0x00001000
#define _C1RXF14EID_EID12_LENGTH                 0x00000001

#define _C1RXF14EID_EID13_POSITION               0x0000000D
#define _C1RXF14EID_EID13_MASK                   0x00002000
#define _C1RXF14EID_EID13_LENGTH                 0x00000001

#define _C1RXF14EID_EID14_POSITION               0x0000000E
#define _C1RXF14EID_EID14_MASK                   0x00004000
#define _C1RXF14EID_EID14_LENGTH                 0x00000001

#define _C1RXF14EID_EID15_POSITION               0x0000000F
#define _C1RXF14EID_EID15_MASK                   0x00008000
#define _C1RXF14EID_EID15_LENGTH                 0x00000001

#define _C1RXF15SID_EID_POSITION                 0x00000000
#define _C1RXF15SID_EID_MASK                     0x00000003
#define _C1RXF15SID_EID_LENGTH                   0x00000002

#define _C1RXF15SID_EXIDE_POSITION               0x00000003
#define _C1RXF15SID_EXIDE_MASK                   0x00000008
#define _C1RXF15SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF15SID_SID_POSITION                 0x00000005
#define _C1RXF15SID_SID_MASK                     0x0000FFE0
#define _C1RXF15SID_SID_LENGTH                   0x0000000B

#define _C1RXF15SID_EID16_POSITION               0x00000000
#define _C1RXF15SID_EID16_MASK                   0x00000001
#define _C1RXF15SID_EID16_LENGTH                 0x00000001

#define _C1RXF15SID_EID17_POSITION               0x00000001
#define _C1RXF15SID_EID17_MASK                   0x00000002
#define _C1RXF15SID_EID17_LENGTH                 0x00000001

#define _C1RXF15SID_SID0_POSITION                0x00000005
#define _C1RXF15SID_SID0_MASK                    0x00000020
#define _C1RXF15SID_SID0_LENGTH                  0x00000001

#define _C1RXF15SID_SID1_POSITION                0x00000006
#define _C1RXF15SID_SID1_MASK                    0x00000040
#define _C1RXF15SID_SID1_LENGTH                  0x00000001

#define _C1RXF15SID_SID2_POSITION                0x00000007
#define _C1RXF15SID_SID2_MASK                    0x00000080
#define _C1RXF15SID_SID2_LENGTH                  0x00000001

#define _C1RXF15SID_SID3_POSITION                0x00000008
#define _C1RXF15SID_SID3_MASK                    0x00000100
#define _C1RXF15SID_SID3_LENGTH                  0x00000001

#define _C1RXF15SID_SID4_POSITION                0x00000009
#define _C1RXF15SID_SID4_MASK                    0x00000200
#define _C1RXF15SID_SID4_LENGTH                  0x00000001

#define _C1RXF15SID_SID5_POSITION                0x0000000A
#define _C1RXF15SID_SID5_MASK                    0x00000400
#define _C1RXF15SID_SID5_LENGTH                  0x00000001

#define _C1RXF15SID_SID6_POSITION                0x0000000B
#define _C1RXF15SID_SID6_MASK                    0x00000800
#define _C1RXF15SID_SID6_LENGTH                  0x00000001

#define _C1RXF15SID_SID7_POSITION                0x0000000C
#define _C1RXF15SID_SID7_MASK                    0x00001000
#define _C1RXF15SID_SID7_LENGTH                  0x00000001

#define _C1RXF15SID_SID8_POSITION                0x0000000D
#define _C1RXF15SID_SID8_MASK                    0x00002000
#define _C1RXF15SID_SID8_LENGTH                  0x00000001

#define _C1RXF15SID_SID9_POSITION                0x0000000E
#define _C1RXF15SID_SID9_MASK                    0x00004000
#define _C1RXF15SID_SID9_LENGTH                  0x00000001

#define _C1RXF15SID_SID10_POSITION               0x0000000F
#define _C1RXF15SID_SID10_MASK                   0x00008000
#define _C1RXF15SID_SID10_LENGTH                 0x00000001

#define _C1RXF15EID_EID_POSITION                 0x00000000
#define _C1RXF15EID_EID_MASK                     0x0000FFFF
#define _C1RXF15EID_EID_LENGTH                   0x00000010

#define _C1RXF15EID_EID0_POSITION                0x00000000
#define _C1RXF15EID_EID0_MASK                    0x00000001
#define _C1RXF15EID_EID0_LENGTH                  0x00000001

#define _C1RXF15EID_EID1_POSITION                0x00000001
#define _C1RXF15EID_EID1_MASK                    0x00000002
#define _C1RXF15EID_EID1_LENGTH                  0x00000001

#define _C1RXF15EID_EID2_POSITION                0x00000002
#define _C1RXF15EID_EID2_MASK                    0x00000004
#define _C1RXF15EID_EID2_LENGTH                  0x00000001

#define _C1RXF15EID_EID3_POSITION                0x00000003
#define _C1RXF15EID_EID3_MASK                    0x00000008
#define _C1RXF15EID_EID3_LENGTH                  0x00000001

#define _C1RXF15EID_EID4_POSITION                0x00000004
#define _C1RXF15EID_EID4_MASK                    0x00000010
#define _C1RXF15EID_EID4_LENGTH                  0x00000001

#define _C1RXF15EID_EID5_POSITION                0x00000005
#define _C1RXF15EID_EID5_MASK                    0x00000020
#define _C1RXF15EID_EID5_LENGTH                  0x00000001

#define _C1RXF15EID_EID6_POSITION                0x00000006
#define _C1RXF15EID_EID6_MASK                    0x00000040
#define _C1RXF15EID_EID6_LENGTH                  0x00000001

#define _C1RXF15EID_EID7_POSITION                0x00000007
#define _C1RXF15EID_EID7_MASK                    0x00000080
#define _C1RXF15EID_EID7_LENGTH                  0x00000001

#define _C1RXF15EID_EID8_POSITION                0x00000008
#define _C1RXF15EID_EID8_MASK                    0x00000100
#define _C1RXF15EID_EID8_LENGTH                  0x00000001

#define _C1RXF15EID_EID9_POSITION                0x00000009
#define _C1RXF15EID_EID9_MASK                    0x00000200
#define _C1RXF15EID_EID9_LENGTH                  0x00000001

#define _C1RXF15EID_EID10_POSITION               0x0000000A
#define _C1RXF15EID_EID10_MASK                   0x00000400
#define _C1RXF15EID_EID10_LENGTH                 0x00000001

#define _C1RXF15EID_EID11_POSITION               0x0000000B
#define _C1RXF15EID_EID11_MASK                   0x00000800
#define _C1RXF15EID_EID11_LENGTH                 0x00000001

#define _C1RXF15EID_EID12_POSITION               0x0000000C
#define _C1RXF15EID_EID12_MASK                   0x00001000
#define _C1RXF15EID_EID12_LENGTH                 0x00000001

#define _C1RXF15EID_EID13_POSITION               0x0000000D
#define _C1RXF15EID_EID13_MASK                   0x00002000
#define _C1RXF15EID_EID13_LENGTH                 0x00000001

#define _C1RXF15EID_EID14_POSITION               0x0000000E
#define _C1RXF15EID_EID14_MASK                   0x00004000
#define _C1RXF15EID_EID14_LENGTH                 0x00000001

#define _C1RXF15EID_EID15_POSITION               0x0000000F
#define _C1RXF15EID_EID15_MASK                   0x00008000
#define _C1RXF15EID_EID15_LENGTH                 0x00000001

#define _P2TCON_PTMOD_POSITION                   0x00000000
#define _P2TCON_PTMOD_MASK                       0x00000003
#define _P2TCON_PTMOD_LENGTH                     0x00000002

#define _P2TCON_PTCKPS_POSITION                  0x00000002
#define _P2TCON_PTCKPS_MASK                      0x0000000C
#define _P2TCON_PTCKPS_LENGTH                    0x00000002

#define _P2TCON_PTOPS_POSITION                   0x00000004
#define _P2TCON_PTOPS_MASK                       0x000000F0
#define _P2TCON_PTOPS_LENGTH                     0x00000004

#define _P2TCON_PTSIDL_POSITION                  0x0000000D
#define _P2TCON_PTSIDL_MASK                      0x00002000
#define _P2TCON_PTSIDL_LENGTH                    0x00000001

#define _P2TCON_PTEN_POSITION                    0x0000000F
#define _P2TCON_PTEN_MASK                        0x00008000
#define _P2TCON_PTEN_LENGTH                      0x00000001

#define _P2TCON_PTMOD0_POSITION                  0x00000000
#define _P2TCON_PTMOD0_MASK                      0x00000001
#define _P2TCON_PTMOD0_LENGTH                    0x00000001

#define _P2TCON_PTMOD1_POSITION                  0x00000001
#define _P2TCON_PTMOD1_MASK                      0x00000002
#define _P2TCON_PTMOD1_LENGTH                    0x00000001

#define _P2TCON_PTCKPS0_POSITION                 0x00000002
#define _P2TCON_PTCKPS0_MASK                     0x00000004
#define _P2TCON_PTCKPS0_LENGTH                   0x00000001

#define _P2TCON_PTCKPS1_POSITION                 0x00000003
#define _P2TCON_PTCKPS1_MASK                     0x00000008
#define _P2TCON_PTCKPS1_LENGTH                   0x00000001

#define _P2TCON_PTOPS0_POSITION                  0x00000004
#define _P2TCON_PTOPS0_MASK                      0x00000010
#define _P2TCON_PTOPS0_LENGTH                    0x00000001

#define _P2TCON_PTOPS1_POSITION                  0x00000005
#define _P2TCON_PTOPS1_MASK                      0x00000020
#define _P2TCON_PTOPS1_LENGTH                    0x00000001

#define _P2TCON_PTOPS2_POSITION                  0x00000006
#define _P2TCON_PTOPS2_MASK                      0x00000040
#define _P2TCON_PTOPS2_LENGTH                    0x00000001

#define _P2TCON_PTOPS3_POSITION                  0x00000007
#define _P2TCON_PTOPS3_MASK                      0x00000080
#define _P2TCON_PTOPS3_LENGTH                    0x00000001

#define _P2TMR_PTMR_POSITION                     0x00000000
#define _P2TMR_PTMR_MASK                         0x00007FFF
#define _P2TMR_PTMR_LENGTH                       0x0000000F

#define _P2TMR_PTDIR_POSITION                    0x0000000F
#define _P2TMR_PTDIR_MASK                        0x00008000
#define _P2TMR_PTDIR_LENGTH                      0x00000001

#define _P2TPER_PTPER_POSITION                   0x00000000
#define _P2TPER_PTPER_MASK                       0x00007FFF
#define _P2TPER_PTPER_LENGTH                     0x0000000F

#define _P2SECMP_SEVTCMP_POSITION                0x00000000
#define _P2SECMP_SEVTCMP_MASK                    0x00007FFF
#define _P2SECMP_SEVTCMP_LENGTH                  0x0000000F

#define _P2SECMP_SEVTDIR_POSITION                0x0000000F
#define _P2SECMP_SEVTDIR_MASK                    0x00008000
#define _P2SECMP_SEVTDIR_LENGTH                  0x00000001

#define _PWM2CON1_PEN1L_POSITION                 0x00000000
#define _PWM2CON1_PEN1L_MASK                     0x00000001
#define _PWM2CON1_PEN1L_LENGTH                   0x00000001

#define _PWM2CON1_PEN1H_POSITION                 0x00000004
#define _PWM2CON1_PEN1H_MASK                     0x00000010
#define _PWM2CON1_PEN1H_LENGTH                   0x00000001

#define _PWM2CON1_PMOD1_POSITION                 0x00000008
#define _PWM2CON1_PMOD1_MASK                     0x00000100
#define _PWM2CON1_PMOD1_LENGTH                   0x00000001

#define _PWM2CON2_UDIS_POSITION                  0x00000000
#define _PWM2CON2_UDIS_MASK                      0x00000001
#define _PWM2CON2_UDIS_LENGTH                    0x00000001

#define _PWM2CON2_OSYNC_POSITION                 0x00000001
#define _PWM2CON2_OSYNC_MASK                     0x00000002
#define _PWM2CON2_OSYNC_LENGTH                   0x00000001

#define _PWM2CON2_IUE_POSITION                   0x00000002
#define _PWM2CON2_IUE_MASK                       0x00000004
#define _PWM2CON2_IUE_LENGTH                     0x00000001

#define _PWM2CON2_SEVOPS_POSITION                0x00000008
#define _PWM2CON2_SEVOPS_MASK                    0x00000F00
#define _PWM2CON2_SEVOPS_LENGTH                  0x00000004

#define _PWM2CON2_SEVOPS0_POSITION               0x00000008
#define _PWM2CON2_SEVOPS0_MASK                   0x00000100
#define _PWM2CON2_SEVOPS0_LENGTH                 0x00000001

#define _PWM2CON2_SEVOPS1_POSITION               0x00000009
#define _PWM2CON2_SEVOPS1_MASK                   0x00000200
#define _PWM2CON2_SEVOPS1_LENGTH                 0x00000001

#define _PWM2CON2_SEVOPS2_POSITION               0x0000000A
#define _PWM2CON2_SEVOPS2_MASK                   0x00000400
#define _PWM2CON2_SEVOPS2_LENGTH                 0x00000001

#define _PWM2CON2_SEVOPS3_POSITION               0x0000000B
#define _PWM2CON2_SEVOPS3_MASK                   0x00000800
#define _PWM2CON2_SEVOPS3_LENGTH                 0x00000001

#define _P2DTCON1_DTA_POSITION                   0x00000000
#define _P2DTCON1_DTA_MASK                       0x0000003F
#define _P2DTCON1_DTA_LENGTH                     0x00000006

#define _P2DTCON1_DTAPS_POSITION                 0x00000006
#define _P2DTCON1_DTAPS_MASK                     0x000000C0
#define _P2DTCON1_DTAPS_LENGTH                   0x00000002

#define _P2DTCON1_DTB_POSITION                   0x00000008
#define _P2DTCON1_DTB_MASK                       0x00003F00
#define _P2DTCON1_DTB_LENGTH                     0x00000006

#define _P2DTCON1_DTBPS_POSITION                 0x0000000E
#define _P2DTCON1_DTBPS_MASK                     0x0000C000
#define _P2DTCON1_DTBPS_LENGTH                   0x00000002

#define _P2DTCON1_DTA0_POSITION                  0x00000000
#define _P2DTCON1_DTA0_MASK                      0x00000001
#define _P2DTCON1_DTA0_LENGTH                    0x00000001

#define _P2DTCON1_DTA1_POSITION                  0x00000001
#define _P2DTCON1_DTA1_MASK                      0x00000002
#define _P2DTCON1_DTA1_LENGTH                    0x00000001

#define _P2DTCON1_DTA2_POSITION                  0x00000002
#define _P2DTCON1_DTA2_MASK                      0x00000004
#define _P2DTCON1_DTA2_LENGTH                    0x00000001

#define _P2DTCON1_DTA3_POSITION                  0x00000003
#define _P2DTCON1_DTA3_MASK                      0x00000008
#define _P2DTCON1_DTA3_LENGTH                    0x00000001

#define _P2DTCON1_DTA4_POSITION                  0x00000004
#define _P2DTCON1_DTA4_MASK                      0x00000010
#define _P2DTCON1_DTA4_LENGTH                    0x00000001

#define _P2DTCON1_DTA5_POSITION                  0x00000005
#define _P2DTCON1_DTA5_MASK                      0x00000020
#define _P2DTCON1_DTA5_LENGTH                    0x00000001

#define _P2DTCON1_DTAPS0_POSITION                0x00000006
#define _P2DTCON1_DTAPS0_MASK                    0x00000040
#define _P2DTCON1_DTAPS0_LENGTH                  0x00000001

#define _P2DTCON1_DTAPS1_POSITION                0x00000007
#define _P2DTCON1_DTAPS1_MASK                    0x00000080
#define _P2DTCON1_DTAPS1_LENGTH                  0x00000001

#define _P2DTCON1_DTB0_POSITION                  0x00000008
#define _P2DTCON1_DTB0_MASK                      0x00000100
#define _P2DTCON1_DTB0_LENGTH                    0x00000001

#define _P2DTCON1_DTB1_POSITION                  0x00000009
#define _P2DTCON1_DTB1_MASK                      0x00000200
#define _P2DTCON1_DTB1_LENGTH                    0x00000001

#define _P2DTCON1_DTB2_POSITION                  0x0000000A
#define _P2DTCON1_DTB2_MASK                      0x00000400
#define _P2DTCON1_DTB2_LENGTH                    0x00000001

#define _P2DTCON1_DTB3_POSITION                  0x0000000B
#define _P2DTCON1_DTB3_MASK                      0x00000800
#define _P2DTCON1_DTB3_LENGTH                    0x00000001

#define _P2DTCON1_DTB4_POSITION                  0x0000000C
#define _P2DTCON1_DTB4_MASK                      0x00001000
#define _P2DTCON1_DTB4_LENGTH                    0x00000001

#define _P2DTCON1_DTB5_POSITION                  0x0000000D
#define _P2DTCON1_DTB5_MASK                      0x00002000
#define _P2DTCON1_DTB5_LENGTH                    0x00000001

#define _P2DTCON1_DTBPS0_POSITION                0x0000000E
#define _P2DTCON1_DTBPS0_MASK                    0x00004000
#define _P2DTCON1_DTBPS0_LENGTH                  0x00000001

#define _P2DTCON1_DTBPS1_POSITION                0x0000000F
#define _P2DTCON1_DTBPS1_MASK                    0x00008000
#define _P2DTCON1_DTBPS1_LENGTH                  0x00000001

#define _P2DTCON2_DTS1I_POSITION                 0x00000000
#define _P2DTCON2_DTS1I_MASK                     0x00000001
#define _P2DTCON2_DTS1I_LENGTH                   0x00000001

#define _P2DTCON2_DTS1A_POSITION                 0x00000001
#define _P2DTCON2_DTS1A_MASK                     0x00000002
#define _P2DTCON2_DTS1A_LENGTH                   0x00000001

#define _P2FLTACON_FAEN1_POSITION                0x00000000
#define _P2FLTACON_FAEN1_MASK                    0x00000001
#define _P2FLTACON_FAEN1_LENGTH                  0x00000001

#define _P2FLTACON_FLTAM_POSITION                0x00000007
#define _P2FLTACON_FLTAM_MASK                    0x00000080
#define _P2FLTACON_FLTAM_LENGTH                  0x00000001

#define _P2FLTACON_FAOV1L_POSITION               0x00000008
#define _P2FLTACON_FAOV1L_MASK                   0x00000100
#define _P2FLTACON_FAOV1L_LENGTH                 0x00000001

#define _P2FLTACON_FAOV1H_POSITION               0x00000009
#define _P2FLTACON_FAOV1H_MASK                   0x00000200
#define _P2FLTACON_FAOV1H_LENGTH                 0x00000001

#define _P2OVDCON_POUT1L_POSITION                0x00000000
#define _P2OVDCON_POUT1L_MASK                    0x00000001
#define _P2OVDCON_POUT1L_LENGTH                  0x00000001

#define _P2OVDCON_POUT1H_POSITION                0x00000001
#define _P2OVDCON_POUT1H_MASK                    0x00000002
#define _P2OVDCON_POUT1H_LENGTH                  0x00000001

#define _P2OVDCON_POVD1L_POSITION                0x00000008
#define _P2OVDCON_POVD1L_MASK                    0x00000100
#define _P2OVDCON_POVD1L_LENGTH                  0x00000001

#define _P2OVDCON_POVD1H_POSITION                0x00000009
#define _P2OVDCON_POVD1H_MASK                    0x00000200
#define _P2OVDCON_POVD1H_LENGTH                  0x00000001

#define _PMCON_RDSP_POSITION                     0x00000000
#define _PMCON_RDSP_MASK                         0x00000001
#define _PMCON_RDSP_LENGTH                       0x00000001

#define _PMCON_WRSP_POSITION                     0x00000001
#define _PMCON_WRSP_MASK                         0x00000002
#define _PMCON_WRSP_LENGTH                       0x00000001

#define _PMCON_BEP_POSITION                      0x00000002
#define _PMCON_BEP_MASK                          0x00000004
#define _PMCON_BEP_LENGTH                        0x00000001

#define _PMCON_CS1P_POSITION                     0x00000003
#define _PMCON_CS1P_MASK                         0x00000008
#define _PMCON_CS1P_LENGTH                       0x00000001

#define _PMCON_ALP_POSITION                      0x00000005
#define _PMCON_ALP_MASK                          0x00000020
#define _PMCON_ALP_LENGTH                        0x00000001

#define _PMCON_CSF_POSITION                      0x00000006
#define _PMCON_CSF_MASK                          0x000000C0
#define _PMCON_CSF_LENGTH                        0x00000002

#define _PMCON_PTRDEN_POSITION                   0x00000008
#define _PMCON_PTRDEN_MASK                       0x00000100
#define _PMCON_PTRDEN_LENGTH                     0x00000001

#define _PMCON_PTWREN_POSITION                   0x00000009
#define _PMCON_PTWREN_MASK                       0x00000200
#define _PMCON_PTWREN_LENGTH                     0x00000001

#define _PMCON_PTBEEN_POSITION                   0x0000000A
#define _PMCON_PTBEEN_MASK                       0x00000400
#define _PMCON_PTBEEN_LENGTH                     0x00000001

#define _PMCON_ADRMUX_POSITION                   0x0000000B
#define _PMCON_ADRMUX_MASK                       0x00001800
#define _PMCON_ADRMUX_LENGTH                     0x00000002

#define _PMCON_PSIDL_POSITION                    0x0000000D
#define _PMCON_PSIDL_MASK                        0x00002000
#define _PMCON_PSIDL_LENGTH                      0x00000001

#define _PMCON_PMPEN_POSITION                    0x0000000F
#define _PMCON_PMPEN_MASK                        0x00008000
#define _PMCON_PMPEN_LENGTH                      0x00000001

#define _PMCON_CSF0_POSITION                     0x00000006
#define _PMCON_CSF0_MASK                         0x00000040
#define _PMCON_CSF0_LENGTH                       0x00000001

#define _PMCON_CSF1_POSITION                     0x00000007
#define _PMCON_CSF1_MASK                         0x00000080
#define _PMCON_CSF1_LENGTH                       0x00000001

#define _PMCON_ADRMUX0_POSITION                  0x0000000B
#define _PMCON_ADRMUX0_MASK                      0x00000800
#define _PMCON_ADRMUX0_LENGTH                    0x00000001

#define _PMCON_ADRMUX1_POSITION                  0x0000000C
#define _PMCON_ADRMUX1_MASK                      0x00001000
#define _PMCON_ADRMUX1_LENGTH                    0x00000001

#define _PMMODE_WAITE_POSITION                   0x00000000
#define _PMMODE_WAITE_MASK                       0x00000003
#define _PMMODE_WAITE_LENGTH                     0x00000002

#define _PMMODE_WAITM_POSITION                   0x00000002
#define _PMMODE_WAITM_MASK                       0x0000003C
#define _PMMODE_WAITM_LENGTH                     0x00000004

#define _PMMODE_WAITB_POSITION                   0x00000006
#define _PMMODE_WAITB_MASK                       0x000000C0
#define _PMMODE_WAITB_LENGTH                     0x00000002

#define _PMMODE_MODE_POSITION                    0x00000008
#define _PMMODE_MODE_MASK                        0x00000300
#define _PMMODE_MODE_LENGTH                      0x00000002

#define _PMMODE_MODE16_POSITION                  0x0000000A
#define _PMMODE_MODE16_MASK                      0x00000400
#define _PMMODE_MODE16_LENGTH                    0x00000001

#define _PMMODE_INCM_POSITION                    0x0000000B
#define _PMMODE_INCM_MASK                        0x00001800
#define _PMMODE_INCM_LENGTH                      0x00000002

#define _PMMODE_IRQM_POSITION                    0x0000000D
#define _PMMODE_IRQM_MASK                        0x00006000
#define _PMMODE_IRQM_LENGTH                      0x00000002

#define _PMMODE_BUSY_POSITION                    0x0000000F
#define _PMMODE_BUSY_MASK                        0x00008000
#define _PMMODE_BUSY_LENGTH                      0x00000001

#define _PMMODE_WAITE0_POSITION                  0x00000000
#define _PMMODE_WAITE0_MASK                      0x00000001
#define _PMMODE_WAITE0_LENGTH                    0x00000001

#define _PMMODE_WAITE1_POSITION                  0x00000001
#define _PMMODE_WAITE1_MASK                      0x00000002
#define _PMMODE_WAITE1_LENGTH                    0x00000001

#define _PMMODE_WAITM0_POSITION                  0x00000002
#define _PMMODE_WAITM0_MASK                      0x00000004
#define _PMMODE_WAITM0_LENGTH                    0x00000001

#define _PMMODE_WAITM1_POSITION                  0x00000003
#define _PMMODE_WAITM1_MASK                      0x00000008
#define _PMMODE_WAITM1_LENGTH                    0x00000001

#define _PMMODE_WAITM2_POSITION                  0x00000004
#define _PMMODE_WAITM2_MASK                      0x00000010
#define _PMMODE_WAITM2_LENGTH                    0x00000001

#define _PMMODE_WAITM3_POSITION                  0x00000005
#define _PMMODE_WAITM3_MASK                      0x00000020
#define _PMMODE_WAITM3_LENGTH                    0x00000001

#define _PMMODE_WAITB0_POSITION                  0x00000006
#define _PMMODE_WAITB0_MASK                      0x00000040
#define _PMMODE_WAITB0_LENGTH                    0x00000001

#define _PMMODE_WAITB1_POSITION                  0x00000007
#define _PMMODE_WAITB1_MASK                      0x00000080
#define _PMMODE_WAITB1_LENGTH                    0x00000001

#define _PMMODE_MODE0_POSITION                   0x00000008
#define _PMMODE_MODE0_MASK                       0x00000100
#define _PMMODE_MODE0_LENGTH                     0x00000001

#define _PMMODE_MODE1_POSITION                   0x00000009
#define _PMMODE_MODE1_MASK                       0x00000200
#define _PMMODE_MODE1_LENGTH                     0x00000001

#define _PMMODE_INCM0_POSITION                   0x0000000B
#define _PMMODE_INCM0_MASK                       0x00000800
#define _PMMODE_INCM0_LENGTH                     0x00000001

#define _PMMODE_INCM1_POSITION                   0x0000000C
#define _PMMODE_INCM1_MASK                       0x00001000
#define _PMMODE_INCM1_LENGTH                     0x00000001

#define _PMMODE_IRQM0_POSITION                   0x0000000D
#define _PMMODE_IRQM0_MASK                       0x00002000
#define _PMMODE_IRQM0_LENGTH                     0x00000001

#define _PMMODE_IRQM1_POSITION                   0x0000000E
#define _PMMODE_IRQM1_MASK                       0x00004000
#define _PMMODE_IRQM1_LENGTH                     0x00000001

#define _PMADDR_ADDR_POSITION                    0x00000000
#define _PMADDR_ADDR_MASK                        0x00003FFF
#define _PMADDR_ADDR_LENGTH                      0x0000000E

#define _PMADDR_CS1_POSITION                     0x0000000E
#define _PMADDR_CS1_MASK                         0x00004000
#define _PMADDR_CS1_LENGTH                       0x00000001

#define _PMADDR_ADDR15_POSITION                  0x0000000F
#define _PMADDR_ADDR15_MASK                      0x00008000
#define _PMADDR_ADDR15_LENGTH                    0x00000001

#define _PMADDR_ADDR0_POSITION                   0x00000000
#define _PMADDR_ADDR0_MASK                       0x00000001
#define _PMADDR_ADDR0_LENGTH                     0x00000001

#define _PMADDR_ADDR1_POSITION                   0x00000001
#define _PMADDR_ADDR1_MASK                       0x00000002
#define _PMADDR_ADDR1_LENGTH                     0x00000001

#define _PMADDR_ADDR2_POSITION                   0x00000002
#define _PMADDR_ADDR2_MASK                       0x00000004
#define _PMADDR_ADDR2_LENGTH                     0x00000001

#define _PMADDR_ADDR3_POSITION                   0x00000003
#define _PMADDR_ADDR3_MASK                       0x00000008
#define _PMADDR_ADDR3_LENGTH                     0x00000001

#define _PMADDR_ADDR4_POSITION                   0x00000004
#define _PMADDR_ADDR4_MASK                       0x00000010
#define _PMADDR_ADDR4_LENGTH                     0x00000001

#define _PMADDR_ADDR5_POSITION                   0x00000005
#define _PMADDR_ADDR5_MASK                       0x00000020
#define _PMADDR_ADDR5_LENGTH                     0x00000001

#define _PMADDR_ADDR6_POSITION                   0x00000006
#define _PMADDR_ADDR6_MASK                       0x00000040
#define _PMADDR_ADDR6_LENGTH                     0x00000001

#define _PMADDR_ADDR7_POSITION                   0x00000007
#define _PMADDR_ADDR7_MASK                       0x00000080
#define _PMADDR_ADDR7_LENGTH                     0x00000001

#define _PMADDR_ADDR8_POSITION                   0x00000008
#define _PMADDR_ADDR8_MASK                       0x00000100
#define _PMADDR_ADDR8_LENGTH                     0x00000001

#define _PMADDR_ADDR9_POSITION                   0x00000009
#define _PMADDR_ADDR9_MASK                       0x00000200
#define _PMADDR_ADDR9_LENGTH                     0x00000001

#define _PMADDR_ADDR10_POSITION                  0x0000000A
#define _PMADDR_ADDR10_MASK                      0x00000400
#define _PMADDR_ADDR10_LENGTH                    0x00000001

#define _PMADDR_ADDR11_POSITION                  0x0000000B
#define _PMADDR_ADDR11_MASK                      0x00000800
#define _PMADDR_ADDR11_LENGTH                    0x00000001

#define _PMADDR_ADDR12_POSITION                  0x0000000C
#define _PMADDR_ADDR12_MASK                      0x00001000
#define _PMADDR_ADDR12_LENGTH                    0x00000001

#define _PMADDR_ADDR13_POSITION                  0x0000000D
#define _PMADDR_ADDR13_MASK                      0x00002000
#define _PMADDR_ADDR13_LENGTH                    0x00000001

#define _PMAEN_PTEN_POSITION                     0x00000000
#define _PMAEN_PTEN_MASK                         0x00000003
#define _PMAEN_PTEN_LENGTH                       0x00000002

#define _PMAEN_PTEN14_POSITION                   0x0000000E
#define _PMAEN_PTEN14_MASK                       0x00004000
#define _PMAEN_PTEN14_LENGTH                     0x00000001

#define _PMAEN_PTEN0_POSITION                    0x00000000
#define _PMAEN_PTEN0_MASK                        0x00000001
#define _PMAEN_PTEN0_LENGTH                      0x00000001

#define _PMAEN_PTEN1_POSITION                    0x00000001
#define _PMAEN_PTEN1_MASK                        0x00000002
#define _PMAEN_PTEN1_LENGTH                      0x00000001

#define _PMSTAT_OB0E_POSITION                    0x00000000
#define _PMSTAT_OB0E_MASK                        0x00000001
#define _PMSTAT_OB0E_LENGTH                      0x00000001

#define _PMSTAT_OB1E_POSITION                    0x00000001
#define _PMSTAT_OB1E_MASK                        0x00000002
#define _PMSTAT_OB1E_LENGTH                      0x00000001

#define _PMSTAT_OB2E_POSITION                    0x00000002
#define _PMSTAT_OB2E_MASK                        0x00000004
#define _PMSTAT_OB2E_LENGTH                      0x00000001

#define _PMSTAT_OB3E_POSITION                    0x00000003
#define _PMSTAT_OB3E_MASK                        0x00000008
#define _PMSTAT_OB3E_LENGTH                      0x00000001

#define _PMSTAT_OBUF_POSITION                    0x00000006
#define _PMSTAT_OBUF_MASK                        0x00000040
#define _PMSTAT_OBUF_LENGTH                      0x00000001

#define _PMSTAT_OBE_POSITION                     0x00000007
#define _PMSTAT_OBE_MASK                         0x00000080
#define _PMSTAT_OBE_LENGTH                       0x00000001

#define _PMSTAT_IB0F_POSITION                    0x00000008
#define _PMSTAT_IB0F_MASK                        0x00000100
#define _PMSTAT_IB0F_LENGTH                      0x00000001

#define _PMSTAT_IB1F_POSITION                    0x00000009
#define _PMSTAT_IB1F_MASK                        0x00000200
#define _PMSTAT_IB1F_LENGTH                      0x00000001

#define _PMSTAT_IB2F_POSITION                    0x0000000A
#define _PMSTAT_IB2F_MASK                        0x00000400
#define _PMSTAT_IB2F_LENGTH                      0x00000001

#define _PMSTAT_IB3F_POSITION                    0x0000000B
#define _PMSTAT_IB3F_MASK                        0x00000800
#define _PMSTAT_IB3F_LENGTH                      0x00000001

#define _PMSTAT_IBOV_POSITION                    0x0000000E
#define _PMSTAT_IBOV_MASK                        0x00004000
#define _PMSTAT_IBOV_LENGTH                      0x00000001

#define _PMSTAT_IBF_POSITION                     0x0000000F
#define _PMSTAT_IBF_MASK                         0x00008000
#define _PMSTAT_IBF_LENGTH                       0x00000001

#define _ALCFGRPT_ARPT_POSITION                  0x00000000
#define _ALCFGRPT_ARPT_MASK                      0x000000FF
#define _ALCFGRPT_ARPT_LENGTH                    0x00000008

#define _ALCFGRPT_ALRMPTR_POSITION               0x00000008
#define _ALCFGRPT_ALRMPTR_MASK                   0x00000300
#define _ALCFGRPT_ALRMPTR_LENGTH                 0x00000002

#define _ALCFGRPT_AMASK_POSITION                 0x0000000A
#define _ALCFGRPT_AMASK_MASK                     0x00003C00
#define _ALCFGRPT_AMASK_LENGTH                   0x00000004

#define _ALCFGRPT_CHIME_POSITION                 0x0000000E
#define _ALCFGRPT_CHIME_MASK                     0x00004000
#define _ALCFGRPT_CHIME_LENGTH                   0x00000001

#define _ALCFGRPT_ALRMEN_POSITION                0x0000000F
#define _ALCFGRPT_ALRMEN_MASK                    0x00008000
#define _ALCFGRPT_ALRMEN_LENGTH                  0x00000001

#define _ALCFGRPT_ARPT0_POSITION                 0x00000000
#define _ALCFGRPT_ARPT0_MASK                     0x00000001
#define _ALCFGRPT_ARPT0_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT1_POSITION                 0x00000001
#define _ALCFGRPT_ARPT1_MASK                     0x00000002
#define _ALCFGRPT_ARPT1_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT2_POSITION                 0x00000002
#define _ALCFGRPT_ARPT2_MASK                     0x00000004
#define _ALCFGRPT_ARPT2_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT3_POSITION                 0x00000003
#define _ALCFGRPT_ARPT3_MASK                     0x00000008
#define _ALCFGRPT_ARPT3_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT4_POSITION                 0x00000004
#define _ALCFGRPT_ARPT4_MASK                     0x00000010
#define _ALCFGRPT_ARPT4_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT5_POSITION                 0x00000005
#define _ALCFGRPT_ARPT5_MASK                     0x00000020
#define _ALCFGRPT_ARPT5_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT6_POSITION                 0x00000006
#define _ALCFGRPT_ARPT6_MASK                     0x00000040
#define _ALCFGRPT_ARPT6_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT7_POSITION                 0x00000007
#define _ALCFGRPT_ARPT7_MASK                     0x00000080
#define _ALCFGRPT_ARPT7_LENGTH                   0x00000001

#define _ALCFGRPT_ALRMPTR0_POSITION              0x00000008
#define _ALCFGRPT_ALRMPTR0_MASK                  0x00000100
#define _ALCFGRPT_ALRMPTR0_LENGTH                0x00000001

#define _ALCFGRPT_ALRMPTR1_POSITION              0x00000009
#define _ALCFGRPT_ALRMPTR1_MASK                  0x00000200
#define _ALCFGRPT_ALRMPTR1_LENGTH                0x00000001

#define _ALCFGRPT_AMASK0_POSITION                0x0000000A
#define _ALCFGRPT_AMASK0_MASK                    0x00000400
#define _ALCFGRPT_AMASK0_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK1_POSITION                0x0000000B
#define _ALCFGRPT_AMASK1_MASK                    0x00000800
#define _ALCFGRPT_AMASK1_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK2_POSITION                0x0000000C
#define _ALCFGRPT_AMASK2_MASK                    0x00001000
#define _ALCFGRPT_AMASK2_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK3_POSITION                0x0000000D
#define _ALCFGRPT_AMASK3_MASK                    0x00002000
#define _ALCFGRPT_AMASK3_LENGTH                  0x00000001

#define _RCFGCAL_CAL_POSITION                    0x00000000
#define _RCFGCAL_CAL_MASK                        0x000000FF
#define _RCFGCAL_CAL_LENGTH                      0x00000008

#define _RCFGCAL_RTCPTR_POSITION                 0x00000008
#define _RCFGCAL_RTCPTR_MASK                     0x00000300
#define _RCFGCAL_RTCPTR_LENGTH                   0x00000002

#define _RCFGCAL_RTCOE_POSITION                  0x0000000A
#define _RCFGCAL_RTCOE_MASK                      0x00000400
#define _RCFGCAL_RTCOE_LENGTH                    0x00000001

#define _RCFGCAL_HALFSEC_POSITION                0x0000000B
#define _RCFGCAL_HALFSEC_MASK                    0x00000800
#define _RCFGCAL_HALFSEC_LENGTH                  0x00000001

#define _RCFGCAL_RTCSYNC_POSITION                0x0000000C
#define _RCFGCAL_RTCSYNC_MASK                    0x00001000
#define _RCFGCAL_RTCSYNC_LENGTH                  0x00000001

#define _RCFGCAL_RTCWREN_POSITION                0x0000000D
#define _RCFGCAL_RTCWREN_MASK                    0x00002000
#define _RCFGCAL_RTCWREN_LENGTH                  0x00000001

#define _RCFGCAL_RTCEN_POSITION                  0x0000000F
#define _RCFGCAL_RTCEN_MASK                      0x00008000
#define _RCFGCAL_RTCEN_LENGTH                    0x00000001

#define _RCFGCAL_CAL0_POSITION                   0x00000000
#define _RCFGCAL_CAL0_MASK                       0x00000001
#define _RCFGCAL_CAL0_LENGTH                     0x00000001

#define _RCFGCAL_CAL1_POSITION                   0x00000001
#define _RCFGCAL_CAL1_MASK                       0x00000002
#define _RCFGCAL_CAL1_LENGTH                     0x00000001

#define _RCFGCAL_CAL2_POSITION                   0x00000002
#define _RCFGCAL_CAL2_MASK                       0x00000004
#define _RCFGCAL_CAL2_LENGTH                     0x00000001

#define _RCFGCAL_CAL3_POSITION                   0x00000003
#define _RCFGCAL_CAL3_MASK                       0x00000008
#define _RCFGCAL_CAL3_LENGTH                     0x00000001

#define _RCFGCAL_CAL4_POSITION                   0x00000004
#define _RCFGCAL_CAL4_MASK                       0x00000010
#define _RCFGCAL_CAL4_LENGTH                     0x00000001

#define _RCFGCAL_CAL5_POSITION                   0x00000005
#define _RCFGCAL_CAL5_MASK                       0x00000020
#define _RCFGCAL_CAL5_LENGTH                     0x00000001

#define _RCFGCAL_CAL6_POSITION                   0x00000006
#define _RCFGCAL_CAL6_MASK                       0x00000040
#define _RCFGCAL_CAL6_LENGTH                     0x00000001

#define _RCFGCAL_CAL7_POSITION                   0x00000007
#define _RCFGCAL_CAL7_MASK                       0x00000080
#define _RCFGCAL_CAL7_LENGTH                     0x00000001

#define _RCFGCAL_RTCPTR0_POSITION                0x00000008
#define _RCFGCAL_RTCPTR0_MASK                    0x00000100
#define _RCFGCAL_RTCPTR0_LENGTH                  0x00000001

#define _RCFGCAL_RTCPTR1_POSITION                0x00000009
#define _RCFGCAL_RTCPTR1_MASK                    0x00000200
#define _RCFGCAL_RTCPTR1_LENGTH                  0x00000001

#define _CMCON_C1POS_POSITION                    0x00000000
#define _CMCON_C1POS_MASK                        0x00000001
#define _CMCON_C1POS_LENGTH                      0x00000001

#define _CMCON_C1NEG_POSITION                    0x00000001
#define _CMCON_C1NEG_MASK                        0x00000002
#define _CMCON_C1NEG_LENGTH                      0x00000001

#define _CMCON_C2POS_POSITION                    0x00000002
#define _CMCON_C2POS_MASK                        0x00000004
#define _CMCON_C2POS_LENGTH                      0x00000001

#define _CMCON_C2NEG_POSITION                    0x00000003
#define _CMCON_C2NEG_MASK                        0x00000008
#define _CMCON_C2NEG_LENGTH                      0x00000001

#define _CMCON_C1INV_POSITION                    0x00000004
#define _CMCON_C1INV_MASK                        0x00000010
#define _CMCON_C1INV_LENGTH                      0x00000001

#define _CMCON_C2INV_POSITION                    0x00000005
#define _CMCON_C2INV_MASK                        0x00000020
#define _CMCON_C2INV_LENGTH                      0x00000001

#define _CMCON_C1OUT_POSITION                    0x00000006
#define _CMCON_C1OUT_MASK                        0x00000040
#define _CMCON_C1OUT_LENGTH                      0x00000001

#define _CMCON_C2OUT_POSITION                    0x00000007
#define _CMCON_C2OUT_MASK                        0x00000080
#define _CMCON_C2OUT_LENGTH                      0x00000001

#define _CMCON_C1OUTEN_POSITION                  0x00000008
#define _CMCON_C1OUTEN_MASK                      0x00000100
#define _CMCON_C1OUTEN_LENGTH                    0x00000001

#define _CMCON_C2OUTEN_POSITION                  0x00000009
#define _CMCON_C2OUTEN_MASK                      0x00000200
#define _CMCON_C2OUTEN_LENGTH                    0x00000001

#define _CMCON_C1EN_POSITION                     0x0000000A
#define _CMCON_C1EN_MASK                         0x00000400
#define _CMCON_C1EN_LENGTH                       0x00000001

#define _CMCON_C2EN_POSITION                     0x0000000B
#define _CMCON_C2EN_MASK                         0x00000800
#define _CMCON_C2EN_LENGTH                       0x00000001

#define _CMCON_C1EVT_POSITION                    0x0000000C
#define _CMCON_C1EVT_MASK                        0x00001000
#define _CMCON_C1EVT_LENGTH                      0x00000001

#define _CMCON_C2EVT_POSITION                    0x0000000D
#define _CMCON_C2EVT_MASK                        0x00002000
#define _CMCON_C2EVT_LENGTH                      0x00000001

#define _CMCON_CMIDL_POSITION                    0x0000000F
#define _CMCON_CMIDL_MASK                        0x00008000
#define _CMCON_CMIDL_LENGTH                      0x00000001

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000000F
#define _CVRCON_CVR_LENGTH                       0x00000004

#define _CVRCON_CVRSS_POSITION                   0x00000004
#define _CVRCON_CVRSS_MASK                       0x00000010
#define _CVRCON_CVRSS_LENGTH                     0x00000001

#define _CVRCON_CVRR_POSITION                    0x00000005
#define _CVRCON_CVRR_MASK                        0x00000020
#define _CVRCON_CVRR_LENGTH                      0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_CVREN_POSITION                   0x00000007
#define _CVRCON_CVREN_MASK                       0x00000080
#define _CVRCON_CVREN_LENGTH                     0x00000001

#define _CVRCON_CVR0_POSITION                    0x00000000
#define _CVRCON_CVR0_MASK                        0x00000001
#define _CVRCON_CVR0_LENGTH                      0x00000001

#define _CVRCON_CVR1_POSITION                    0x00000001
#define _CVRCON_CVR1_MASK                        0x00000002
#define _CVRCON_CVR1_LENGTH                      0x00000001

#define _CVRCON_CVR2_POSITION                    0x00000002
#define _CVRCON_CVR2_MASK                        0x00000004
#define _CVRCON_CVR2_LENGTH                      0x00000001

#define _CVRCON_CVR3_POSITION                    0x00000003
#define _CVRCON_CVR3_MASK                        0x00000008
#define _CVRCON_CVR3_LENGTH                      0x00000001

#define _CRCCON_PLEN_POSITION                    0x00000000
#define _CRCCON_PLEN_MASK                        0x0000000F
#define _CRCCON_PLEN_LENGTH                      0x00000004

#define _CRCCON_CRCGO_POSITION                   0x00000004
#define _CRCCON_CRCGO_MASK                       0x00000010
#define _CRCCON_CRCGO_LENGTH                     0x00000001

#define _CRCCON_CRCMPT_POSITION                  0x00000006
#define _CRCCON_CRCMPT_MASK                      0x00000040
#define _CRCCON_CRCMPT_LENGTH                    0x00000001

#define _CRCCON_CRCFUL_POSITION                  0x00000007
#define _CRCCON_CRCFUL_MASK                      0x00000080
#define _CRCCON_CRCFUL_LENGTH                    0x00000001

#define _CRCCON_VWORD_POSITION                   0x00000008
#define _CRCCON_VWORD_MASK                       0x00001F00
#define _CRCCON_VWORD_LENGTH                     0x00000005

#define _CRCCON_CSIDL_POSITION                   0x0000000D
#define _CRCCON_CSIDL_MASK                       0x00002000
#define _CRCCON_CSIDL_LENGTH                     0x00000001

#define _CRCCON_PLEN0_POSITION                   0x00000000
#define _CRCCON_PLEN0_MASK                       0x00000001
#define _CRCCON_PLEN0_LENGTH                     0x00000001

#define _CRCCON_PLEN1_POSITION                   0x00000001
#define _CRCCON_PLEN1_MASK                       0x00000002
#define _CRCCON_PLEN1_LENGTH                     0x00000001

#define _CRCCON_PLEN2_POSITION                   0x00000002
#define _CRCCON_PLEN2_MASK                       0x00000004
#define _CRCCON_PLEN2_LENGTH                     0x00000001

#define _CRCCON_PLEN3_POSITION                   0x00000003
#define _CRCCON_PLEN3_MASK                       0x00000008
#define _CRCCON_PLEN3_LENGTH                     0x00000001

#define _CRCCON_VWORD0_POSITION                  0x00000008
#define _CRCCON_VWORD0_MASK                      0x00000100
#define _CRCCON_VWORD0_LENGTH                    0x00000001

#define _CRCCON_VWORD1_POSITION                  0x00000009
#define _CRCCON_VWORD1_MASK                      0x00000200
#define _CRCCON_VWORD1_LENGTH                    0x00000001

#define _CRCCON_VWORD2_POSITION                  0x0000000A
#define _CRCCON_VWORD2_MASK                      0x00000400
#define _CRCCON_VWORD2_LENGTH                    0x00000001

#define _CRCCON_VWORD3_POSITION                  0x0000000B
#define _CRCCON_VWORD3_MASK                      0x00000800
#define _CRCCON_VWORD3_LENGTH                    0x00000001

#define _CRCCON_VWORD4_POSITION                  0x0000000C
#define _CRCCON_VWORD4_MASK                      0x00001000
#define _CRCCON_VWORD4_LENGTH                    0x00000001

#define _RPINR0_INT1R_POSITION                   0x00000008
#define _RPINR0_INT1R_MASK                       0x00001F00
#define _RPINR0_INT1R_LENGTH                     0x00000005

#define _RPINR0_INT1R0_POSITION                  0x00000008
#define _RPINR0_INT1R0_MASK                      0x00000100
#define _RPINR0_INT1R0_LENGTH                    0x00000001

#define _RPINR0_INT1R1_POSITION                  0x00000009
#define _RPINR0_INT1R1_MASK                      0x00000200
#define _RPINR0_INT1R1_LENGTH                    0x00000001

#define _RPINR0_INT1R2_POSITION                  0x0000000A
#define _RPINR0_INT1R2_MASK                      0x00000400
#define _RPINR0_INT1R2_LENGTH                    0x00000001

#define _RPINR0_INT1R3_POSITION                  0x0000000B
#define _RPINR0_INT1R3_MASK                      0x00000800
#define _RPINR0_INT1R3_LENGTH                    0x00000001

#define _RPINR0_INT1R4_POSITION                  0x0000000C
#define _RPINR0_INT1R4_MASK                      0x00001000
#define _RPINR0_INT1R4_LENGTH                    0x00000001

#define _RPINR1_INT2R_POSITION                   0x00000000
#define _RPINR1_INT2R_MASK                       0x0000001F
#define _RPINR1_INT2R_LENGTH                     0x00000005

#define _RPINR1_INT2R0_POSITION                  0x00000000
#define _RPINR1_INT2R0_MASK                      0x00000001
#define _RPINR1_INT2R0_LENGTH                    0x00000001

#define _RPINR1_INT2R1_POSITION                  0x00000001
#define _RPINR1_INT2R1_MASK                      0x00000002
#define _RPINR1_INT2R1_LENGTH                    0x00000001

#define _RPINR1_INT2R2_POSITION                  0x00000002
#define _RPINR1_INT2R2_MASK                      0x00000004
#define _RPINR1_INT2R2_LENGTH                    0x00000001

#define _RPINR1_INT2R3_POSITION                  0x00000003
#define _RPINR1_INT2R3_MASK                      0x00000008
#define _RPINR1_INT2R3_LENGTH                    0x00000001

#define _RPINR1_INT2R4_POSITION                  0x00000004
#define _RPINR1_INT2R4_MASK                      0x00000010
#define _RPINR1_INT2R4_LENGTH                    0x00000001

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x0000001F
#define _RPINR3_T2CKR_LENGTH                     0x00000005

#define _RPINR3_T3CKR_POSITION                   0x00000008
#define _RPINR3_T3CKR_MASK                       0x00001F00
#define _RPINR3_T3CKR_LENGTH                     0x00000005

#define _RPINR3_T2CKR0_POSITION                  0x00000000
#define _RPINR3_T2CKR0_MASK                      0x00000001
#define _RPINR3_T2CKR0_LENGTH                    0x00000001

#define _RPINR3_T2CKR1_POSITION                  0x00000001
#define _RPINR3_T2CKR1_MASK                      0x00000002
#define _RPINR3_T2CKR1_LENGTH                    0x00000001

#define _RPINR3_T2CKR2_POSITION                  0x00000002
#define _RPINR3_T2CKR2_MASK                      0x00000004
#define _RPINR3_T2CKR2_LENGTH                    0x00000001

#define _RPINR3_T2CKR3_POSITION                  0x00000003
#define _RPINR3_T2CKR3_MASK                      0x00000008
#define _RPINR3_T2CKR3_LENGTH                    0x00000001

#define _RPINR3_T2CKR4_POSITION                  0x00000004
#define _RPINR3_T2CKR4_MASK                      0x00000010
#define _RPINR3_T2CKR4_LENGTH                    0x00000001

#define _RPINR3_T3CKR0_POSITION                  0x00000008
#define _RPINR3_T3CKR0_MASK                      0x00000100
#define _RPINR3_T3CKR0_LENGTH                    0x00000001

#define _RPINR3_T3CKR1_POSITION                  0x00000009
#define _RPINR3_T3CKR1_MASK                      0x00000200
#define _RPINR3_T3CKR1_LENGTH                    0x00000001

#define _RPINR3_T3CKR2_POSITION                  0x0000000A
#define _RPINR3_T3CKR2_MASK                      0x00000400
#define _RPINR3_T3CKR2_LENGTH                    0x00000001

#define _RPINR3_T3CKR3_POSITION                  0x0000000B
#define _RPINR3_T3CKR3_MASK                      0x00000800
#define _RPINR3_T3CKR3_LENGTH                    0x00000001

#define _RPINR3_T3CKR4_POSITION                  0x0000000C
#define _RPINR3_T3CKR4_MASK                      0x00001000
#define _RPINR3_T3CKR4_LENGTH                    0x00000001

#define _RPINR4_T4CKR_POSITION                   0x00000000
#define _RPINR4_T4CKR_MASK                       0x0000001F
#define _RPINR4_T4CKR_LENGTH                     0x00000005

#define _RPINR4_T5CKR_POSITION                   0x00000008
#define _RPINR4_T5CKR_MASK                       0x00001F00
#define _RPINR4_T5CKR_LENGTH                     0x00000005

#define _RPINR4_T4CKR0_POSITION                  0x00000000
#define _RPINR4_T4CKR0_MASK                      0x00000001
#define _RPINR4_T4CKR0_LENGTH                    0x00000001

#define _RPINR4_T4CKR1_POSITION                  0x00000001
#define _RPINR4_T4CKR1_MASK                      0x00000002
#define _RPINR4_T4CKR1_LENGTH                    0x00000001

#define _RPINR4_T4CKR2_POSITION                  0x00000002
#define _RPINR4_T4CKR2_MASK                      0x00000004
#define _RPINR4_T4CKR2_LENGTH                    0x00000001

#define _RPINR4_T4CKR3_POSITION                  0x00000003
#define _RPINR4_T4CKR3_MASK                      0x00000008
#define _RPINR4_T4CKR3_LENGTH                    0x00000001

#define _RPINR4_T4CKR4_POSITION                  0x00000004
#define _RPINR4_T4CKR4_MASK                      0x00000010
#define _RPINR4_T4CKR4_LENGTH                    0x00000001

#define _RPINR4_T5CKR0_POSITION                  0x00000008
#define _RPINR4_T5CKR0_MASK                      0x00000100
#define _RPINR4_T5CKR0_LENGTH                    0x00000001

#define _RPINR4_T5CKR1_POSITION                  0x00000009
#define _RPINR4_T5CKR1_MASK                      0x00000200
#define _RPINR4_T5CKR1_LENGTH                    0x00000001

#define _RPINR4_T5CKR2_POSITION                  0x0000000A
#define _RPINR4_T5CKR2_MASK                      0x00000400
#define _RPINR4_T5CKR2_LENGTH                    0x00000001

#define _RPINR4_T5CKR3_POSITION                  0x0000000B
#define _RPINR4_T5CKR3_MASK                      0x00000800
#define _RPINR4_T5CKR3_LENGTH                    0x00000001

#define _RPINR4_T5CKR4_POSITION                  0x0000000C
#define _RPINR4_T5CKR4_MASK                      0x00001000
#define _RPINR4_T5CKR4_LENGTH                    0x00000001

#define _RPINR7_IC1R_POSITION                    0x00000000
#define _RPINR7_IC1R_MASK                        0x0000001F
#define _RPINR7_IC1R_LENGTH                      0x00000005

#define _RPINR7_IC2R_POSITION                    0x00000008
#define _RPINR7_IC2R_MASK                        0x00001F00
#define _RPINR7_IC2R_LENGTH                      0x00000005

#define _RPINR7_IC1R0_POSITION                   0x00000000
#define _RPINR7_IC1R0_MASK                       0x00000001
#define _RPINR7_IC1R0_LENGTH                     0x00000001

#define _RPINR7_IC1R1_POSITION                   0x00000001
#define _RPINR7_IC1R1_MASK                       0x00000002
#define _RPINR7_IC1R1_LENGTH                     0x00000001

#define _RPINR7_IC1R2_POSITION                   0x00000002
#define _RPINR7_IC1R2_MASK                       0x00000004
#define _RPINR7_IC1R2_LENGTH                     0x00000001

#define _RPINR7_IC1R3_POSITION                   0x00000003
#define _RPINR7_IC1R3_MASK                       0x00000008
#define _RPINR7_IC1R3_LENGTH                     0x00000001

#define _RPINR7_IC1R4_POSITION                   0x00000004
#define _RPINR7_IC1R4_MASK                       0x00000010
#define _RPINR7_IC1R4_LENGTH                     0x00000001

#define _RPINR7_IC2R0_POSITION                   0x00000008
#define _RPINR7_IC2R0_MASK                       0x00000100
#define _RPINR7_IC2R0_LENGTH                     0x00000001

#define _RPINR7_IC2R1_POSITION                   0x00000009
#define _RPINR7_IC2R1_MASK                       0x00000200
#define _RPINR7_IC2R1_LENGTH                     0x00000001

#define _RPINR7_IC2R2_POSITION                   0x0000000A
#define _RPINR7_IC2R2_MASK                       0x00000400
#define _RPINR7_IC2R2_LENGTH                     0x00000001

#define _RPINR7_IC2R3_POSITION                   0x0000000B
#define _RPINR7_IC2R3_MASK                       0x00000800
#define _RPINR7_IC2R3_LENGTH                     0x00000001

#define _RPINR7_IC2R4_POSITION                   0x0000000C
#define _RPINR7_IC2R4_MASK                       0x00001000
#define _RPINR7_IC2R4_LENGTH                     0x00000001

#define _RPINR10_IC7R_POSITION                   0x00000000
#define _RPINR10_IC7R_MASK                       0x0000001F
#define _RPINR10_IC7R_LENGTH                     0x00000005

#define _RPINR10_IC8R_POSITION                   0x00000008
#define _RPINR10_IC8R_MASK                       0x00001F00
#define _RPINR10_IC8R_LENGTH                     0x00000005

#define _RPINR10_IC7R0_POSITION                  0x00000000
#define _RPINR10_IC7R0_MASK                      0x00000001
#define _RPINR10_IC7R0_LENGTH                    0x00000001

#define _RPINR10_IC7R1_POSITION                  0x00000001
#define _RPINR10_IC7R1_MASK                      0x00000002
#define _RPINR10_IC7R1_LENGTH                    0x00000001

#define _RPINR10_IC7R2_POSITION                  0x00000002
#define _RPINR10_IC7R2_MASK                      0x00000004
#define _RPINR10_IC7R2_LENGTH                    0x00000001

#define _RPINR10_IC7R3_POSITION                  0x00000003
#define _RPINR10_IC7R3_MASK                      0x00000008
#define _RPINR10_IC7R3_LENGTH                    0x00000001

#define _RPINR10_IC7R4_POSITION                  0x00000004
#define _RPINR10_IC7R4_MASK                      0x00000010
#define _RPINR10_IC7R4_LENGTH                    0x00000001

#define _RPINR10_IC8R0_POSITION                  0x00000008
#define _RPINR10_IC8R0_MASK                      0x00000100
#define _RPINR10_IC8R0_LENGTH                    0x00000001

#define _RPINR10_IC8R1_POSITION                  0x00000009
#define _RPINR10_IC8R1_MASK                      0x00000200
#define _RPINR10_IC8R1_LENGTH                    0x00000001

#define _RPINR10_IC8R2_POSITION                  0x0000000A
#define _RPINR10_IC8R2_MASK                      0x00000400
#define _RPINR10_IC8R2_LENGTH                    0x00000001

#define _RPINR10_IC8R3_POSITION                  0x0000000B
#define _RPINR10_IC8R3_MASK                      0x00000800
#define _RPINR10_IC8R3_LENGTH                    0x00000001

#define _RPINR10_IC8R4_POSITION                  0x0000000C
#define _RPINR10_IC8R4_MASK                      0x00001000
#define _RPINR10_IC8R4_LENGTH                    0x00000001

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x0000001F
#define _RPINR11_OCFAR_LENGTH                    0x00000005

#define _RPINR11_OCFAR0_POSITION                 0x00000000
#define _RPINR11_OCFAR0_MASK                     0x00000001
#define _RPINR11_OCFAR0_LENGTH                   0x00000001

#define _RPINR11_OCFAR1_POSITION                 0x00000001
#define _RPINR11_OCFAR1_MASK                     0x00000002
#define _RPINR11_OCFAR1_LENGTH                   0x00000001

#define _RPINR11_OCFAR2_POSITION                 0x00000002
#define _RPINR11_OCFAR2_MASK                     0x00000004
#define _RPINR11_OCFAR2_LENGTH                   0x00000001

#define _RPINR11_OCFAR3_POSITION                 0x00000003
#define _RPINR11_OCFAR3_MASK                     0x00000008
#define _RPINR11_OCFAR3_LENGTH                   0x00000001

#define _RPINR11_OCFAR4_POSITION                 0x00000004
#define _RPINR11_OCFAR4_MASK                     0x00000010
#define _RPINR11_OCFAR4_LENGTH                   0x00000001

#define _RPINR12_FLTA1R_POSITION                 0x00000000
#define _RPINR12_FLTA1R_MASK                     0x0000001F
#define _RPINR12_FLTA1R_LENGTH                   0x00000005

#define _RPINR12_FLTA1R0_POSITION                0x00000000
#define _RPINR12_FLTA1R0_MASK                    0x00000001
#define _RPINR12_FLTA1R0_LENGTH                  0x00000001

#define _RPINR12_FLTA1R1_POSITION                0x00000001
#define _RPINR12_FLTA1R1_MASK                    0x00000002
#define _RPINR12_FLTA1R1_LENGTH                  0x00000001

#define _RPINR12_FLTA1R2_POSITION                0x00000002
#define _RPINR12_FLTA1R2_MASK                    0x00000004
#define _RPINR12_FLTA1R2_LENGTH                  0x00000001

#define _RPINR12_FLTA1R3_POSITION                0x00000003
#define _RPINR12_FLTA1R3_MASK                    0x00000008
#define _RPINR12_FLTA1R3_LENGTH                  0x00000001

#define _RPINR12_FLTA1R4_POSITION                0x00000004
#define _RPINR12_FLTA1R4_MASK                    0x00000010
#define _RPINR12_FLTA1R4_LENGTH                  0x00000001

#define _RPINR13_FLTA2R_POSITION                 0x00000000
#define _RPINR13_FLTA2R_MASK                     0x0000001F
#define _RPINR13_FLTA2R_LENGTH                   0x00000005

#define _RPINR13_FLTA2R0_POSITION                0x00000000
#define _RPINR13_FLTA2R0_MASK                    0x00000001
#define _RPINR13_FLTA2R0_LENGTH                  0x00000001

#define _RPINR13_FLTA2R1_POSITION                0x00000001
#define _RPINR13_FLTA2R1_MASK                    0x00000002
#define _RPINR13_FLTA2R1_LENGTH                  0x00000001

#define _RPINR13_FLTA2R2_POSITION                0x00000002
#define _RPINR13_FLTA2R2_MASK                    0x00000004
#define _RPINR13_FLTA2R2_LENGTH                  0x00000001

#define _RPINR13_FLTA2R3_POSITION                0x00000003
#define _RPINR13_FLTA2R3_MASK                    0x00000008
#define _RPINR13_FLTA2R3_LENGTH                  0x00000001

#define _RPINR13_FLTA2R4_POSITION                0x00000004
#define _RPINR13_FLTA2R4_MASK                    0x00000010
#define _RPINR13_FLTA2R4_LENGTH                  0x00000001

#define _RPINR14_QEA1R_POSITION                  0x00000000
#define _RPINR14_QEA1R_MASK                      0x0000001F
#define _RPINR14_QEA1R_LENGTH                    0x00000005

#define _RPINR14_QEB1R_POSITION                  0x00000008
#define _RPINR14_QEB1R_MASK                      0x00001F00
#define _RPINR14_QEB1R_LENGTH                    0x00000005

#define _RPINR14_QEA1R0_POSITION                 0x00000000
#define _RPINR14_QEA1R0_MASK                     0x00000001
#define _RPINR14_QEA1R0_LENGTH                   0x00000001

#define _RPINR14_QEA1R1_POSITION                 0x00000001
#define _RPINR14_QEA1R1_MASK                     0x00000002
#define _RPINR14_QEA1R1_LENGTH                   0x00000001

#define _RPINR14_QEA1R2_POSITION                 0x00000002
#define _RPINR14_QEA1R2_MASK                     0x00000004
#define _RPINR14_QEA1R2_LENGTH                   0x00000001

#define _RPINR14_QEA1R3_POSITION                 0x00000003
#define _RPINR14_QEA1R3_MASK                     0x00000008
#define _RPINR14_QEA1R3_LENGTH                   0x00000001

#define _RPINR14_QEA1R4_POSITION                 0x00000004
#define _RPINR14_QEA1R4_MASK                     0x00000010
#define _RPINR14_QEA1R4_LENGTH                   0x00000001

#define _RPINR14_QEB1R0_POSITION                 0x00000008
#define _RPINR14_QEB1R0_MASK                     0x00000100
#define _RPINR14_QEB1R0_LENGTH                   0x00000001

#define _RPINR14_QEB1R1_POSITION                 0x00000009
#define _RPINR14_QEB1R1_MASK                     0x00000200
#define _RPINR14_QEB1R1_LENGTH                   0x00000001

#define _RPINR14_QEB1R2_POSITION                 0x0000000A
#define _RPINR14_QEB1R2_MASK                     0x00000400
#define _RPINR14_QEB1R2_LENGTH                   0x00000001

#define _RPINR14_QEB1R3_POSITION                 0x0000000B
#define _RPINR14_QEB1R3_MASK                     0x00000800
#define _RPINR14_QEB1R3_LENGTH                   0x00000001

#define _RPINR14_QEB1R4_POSITION                 0x0000000C
#define _RPINR14_QEB1R4_MASK                     0x00001000
#define _RPINR14_QEB1R4_LENGTH                   0x00000001

#define _RPINR15_INDX1R_POSITION                 0x00000000
#define _RPINR15_INDX1R_MASK                     0x0000001F
#define _RPINR15_INDX1R_LENGTH                   0x00000005

#define _RPINR15_INDX1R0_POSITION                0x00000000
#define _RPINR15_INDX1R0_MASK                    0x00000001
#define _RPINR15_INDX1R0_LENGTH                  0x00000001

#define _RPINR15_INDX1R1_POSITION                0x00000001
#define _RPINR15_INDX1R1_MASK                    0x00000002
#define _RPINR15_INDX1R1_LENGTH                  0x00000001

#define _RPINR15_INDX1R2_POSITION                0x00000002
#define _RPINR15_INDX1R2_MASK                    0x00000004
#define _RPINR15_INDX1R2_LENGTH                  0x00000001

#define _RPINR15_INDX1R3_POSITION                0x00000003
#define _RPINR15_INDX1R3_MASK                    0x00000008
#define _RPINR15_INDX1R3_LENGTH                  0x00000001

#define _RPINR15_INDX1R4_POSITION                0x00000004
#define _RPINR15_INDX1R4_MASK                    0x00000010
#define _RPINR15_INDX1R4_LENGTH                  0x00000001

#define _RPINR16_QEA2R_POSITION                  0x00000000
#define _RPINR16_QEA2R_MASK                      0x0000001F
#define _RPINR16_QEA2R_LENGTH                    0x00000005

#define _RPINR16_QEB2R_POSITION                  0x00000008
#define _RPINR16_QEB2R_MASK                      0x00001F00
#define _RPINR16_QEB2R_LENGTH                    0x00000005

#define _RPINR16_QEA2R0_POSITION                 0x00000000
#define _RPINR16_QEA2R0_MASK                     0x00000001
#define _RPINR16_QEA2R0_LENGTH                   0x00000001

#define _RPINR16_QEA2R1_POSITION                 0x00000001
#define _RPINR16_QEA2R1_MASK                     0x00000002
#define _RPINR16_QEA2R1_LENGTH                   0x00000001

#define _RPINR16_QEA2R2_POSITION                 0x00000002
#define _RPINR16_QEA2R2_MASK                     0x00000004
#define _RPINR16_QEA2R2_LENGTH                   0x00000001

#define _RPINR16_QEA2R3_POSITION                 0x00000003
#define _RPINR16_QEA2R3_MASK                     0x00000008
#define _RPINR16_QEA2R3_LENGTH                   0x00000001

#define _RPINR16_QEA2R4_POSITION                 0x00000004
#define _RPINR16_QEA2R4_MASK                     0x00000010
#define _RPINR16_QEA2R4_LENGTH                   0x00000001

#define _RPINR16_QEB2R0_POSITION                 0x00000008
#define _RPINR16_QEB2R0_MASK                     0x00000100
#define _RPINR16_QEB2R0_LENGTH                   0x00000001

#define _RPINR16_QEB2R1_POSITION                 0x00000009
#define _RPINR16_QEB2R1_MASK                     0x00000200
#define _RPINR16_QEB2R1_LENGTH                   0x00000001

#define _RPINR16_QEB2R2_POSITION                 0x0000000A
#define _RPINR16_QEB2R2_MASK                     0x00000400
#define _RPINR16_QEB2R2_LENGTH                   0x00000001

#define _RPINR16_QEB2R3_POSITION                 0x0000000B
#define _RPINR16_QEB2R3_MASK                     0x00000800
#define _RPINR16_QEB2R3_LENGTH                   0x00000001

#define _RPINR16_QEB2R4_POSITION                 0x0000000C
#define _RPINR16_QEB2R4_MASK                     0x00001000
#define _RPINR16_QEB2R4_LENGTH                   0x00000001

#define _RPINR17_INDX2R_POSITION                 0x00000000
#define _RPINR17_INDX2R_MASK                     0x0000001F
#define _RPINR17_INDX2R_LENGTH                   0x00000005

#define _RPINR17_INDX2R0_POSITION                0x00000000
#define _RPINR17_INDX2R0_MASK                    0x00000001
#define _RPINR17_INDX2R0_LENGTH                  0x00000001

#define _RPINR17_INDX2R1_POSITION                0x00000001
#define _RPINR17_INDX2R1_MASK                    0x00000002
#define _RPINR17_INDX2R1_LENGTH                  0x00000001

#define _RPINR17_INDX2R2_POSITION                0x00000002
#define _RPINR17_INDX2R2_MASK                    0x00000004
#define _RPINR17_INDX2R2_LENGTH                  0x00000001

#define _RPINR17_INDX2R3_POSITION                0x00000003
#define _RPINR17_INDX2R3_MASK                    0x00000008
#define _RPINR17_INDX2R3_LENGTH                  0x00000001

#define _RPINR17_INDX2R4_POSITION                0x00000004
#define _RPINR17_INDX2R4_MASK                    0x00000010
#define _RPINR17_INDX2R4_LENGTH                  0x00000001

#define _RPINR18_U1RXR_POSITION                  0x00000000
#define _RPINR18_U1RXR_MASK                      0x0000001F
#define _RPINR18_U1RXR_LENGTH                    0x00000005

#define _RPINR18_U1CTSR_POSITION                 0x00000008
#define _RPINR18_U1CTSR_MASK                     0x00001F00
#define _RPINR18_U1CTSR_LENGTH                   0x00000005

#define _RPINR18_U1RXR0_POSITION                 0x00000000
#define _RPINR18_U1RXR0_MASK                     0x00000001
#define _RPINR18_U1RXR0_LENGTH                   0x00000001

#define _RPINR18_U1RXR1_POSITION                 0x00000001
#define _RPINR18_U1RXR1_MASK                     0x00000002
#define _RPINR18_U1RXR1_LENGTH                   0x00000001

#define _RPINR18_U1RXR2_POSITION                 0x00000002
#define _RPINR18_U1RXR2_MASK                     0x00000004
#define _RPINR18_U1RXR2_LENGTH                   0x00000001

#define _RPINR18_U1RXR3_POSITION                 0x00000003
#define _RPINR18_U1RXR3_MASK                     0x00000008
#define _RPINR18_U1RXR3_LENGTH                   0x00000001

#define _RPINR18_U1RXR4_POSITION                 0x00000004
#define _RPINR18_U1RXR4_MASK                     0x00000010
#define _RPINR18_U1RXR4_LENGTH                   0x00000001

#define _RPINR18_U1CTSR0_POSITION                0x00000008
#define _RPINR18_U1CTSR0_MASK                    0x00000100
#define _RPINR18_U1CTSR0_LENGTH                  0x00000001

#define _RPINR18_U1CTSR1_POSITION                0x00000009
#define _RPINR18_U1CTSR1_MASK                    0x00000200
#define _RPINR18_U1CTSR1_LENGTH                  0x00000001

#define _RPINR18_U1CTSR2_POSITION                0x0000000A
#define _RPINR18_U1CTSR2_MASK                    0x00000400
#define _RPINR18_U1CTSR2_LENGTH                  0x00000001

#define _RPINR18_U1CTSR3_POSITION                0x0000000B
#define _RPINR18_U1CTSR3_MASK                    0x00000800
#define _RPINR18_U1CTSR3_LENGTH                  0x00000001

#define _RPINR18_U1CTSR4_POSITION                0x0000000C
#define _RPINR18_U1CTSR4_MASK                    0x00001000
#define _RPINR18_U1CTSR4_LENGTH                  0x00000001

#define _RPINR19_U2RXR_POSITION                  0x00000000
#define _RPINR19_U2RXR_MASK                      0x0000001F
#define _RPINR19_U2RXR_LENGTH                    0x00000005

#define _RPINR19_U2CTSR_POSITION                 0x00000008
#define _RPINR19_U2CTSR_MASK                     0x00001F00
#define _RPINR19_U2CTSR_LENGTH                   0x00000005

#define _RPINR19_U2RXR0_POSITION                 0x00000000
#define _RPINR19_U2RXR0_MASK                     0x00000001
#define _RPINR19_U2RXR0_LENGTH                   0x00000001

#define _RPINR19_U2RXR1_POSITION                 0x00000001
#define _RPINR19_U2RXR1_MASK                     0x00000002
#define _RPINR19_U2RXR1_LENGTH                   0x00000001

#define _RPINR19_U2RXR2_POSITION                 0x00000002
#define _RPINR19_U2RXR2_MASK                     0x00000004
#define _RPINR19_U2RXR2_LENGTH                   0x00000001

#define _RPINR19_U2RXR3_POSITION                 0x00000003
#define _RPINR19_U2RXR3_MASK                     0x00000008
#define _RPINR19_U2RXR3_LENGTH                   0x00000001

#define _RPINR19_U2RXR4_POSITION                 0x00000004
#define _RPINR19_U2RXR4_MASK                     0x00000010
#define _RPINR19_U2RXR4_LENGTH                   0x00000001

#define _RPINR19_U2CTSR0_POSITION                0x00000008
#define _RPINR19_U2CTSR0_MASK                    0x00000100
#define _RPINR19_U2CTSR0_LENGTH                  0x00000001

#define _RPINR19_U2CTSR1_POSITION                0x00000009
#define _RPINR19_U2CTSR1_MASK                    0x00000200
#define _RPINR19_U2CTSR1_LENGTH                  0x00000001

#define _RPINR19_U2CTSR2_POSITION                0x0000000A
#define _RPINR19_U2CTSR2_MASK                    0x00000400
#define _RPINR19_U2CTSR2_LENGTH                  0x00000001

#define _RPINR19_U2CTSR3_POSITION                0x0000000B
#define _RPINR19_U2CTSR3_MASK                    0x00000800
#define _RPINR19_U2CTSR3_LENGTH                  0x00000001

#define _RPINR19_U2CTSR4_POSITION                0x0000000C
#define _RPINR19_U2CTSR4_MASK                    0x00001000
#define _RPINR19_U2CTSR4_LENGTH                  0x00000001

#define _RPINR20_SDI1R_POSITION                  0x00000000
#define _RPINR20_SDI1R_MASK                      0x0000001F
#define _RPINR20_SDI1R_LENGTH                    0x00000005

#define _RPINR20_SCK1R_POSITION                  0x00000008
#define _RPINR20_SCK1R_MASK                      0x00001F00
#define _RPINR20_SCK1R_LENGTH                    0x00000005

#define _RPINR20_SDI1R0_POSITION                 0x00000000
#define _RPINR20_SDI1R0_MASK                     0x00000001
#define _RPINR20_SDI1R0_LENGTH                   0x00000001

#define _RPINR20_SDI1R1_POSITION                 0x00000001
#define _RPINR20_SDI1R1_MASK                     0x00000002
#define _RPINR20_SDI1R1_LENGTH                   0x00000001

#define _RPINR20_SDI1R2_POSITION                 0x00000002
#define _RPINR20_SDI1R2_MASK                     0x00000004
#define _RPINR20_SDI1R2_LENGTH                   0x00000001

#define _RPINR20_SDI1R3_POSITION                 0x00000003
#define _RPINR20_SDI1R3_MASK                     0x00000008
#define _RPINR20_SDI1R3_LENGTH                   0x00000001

#define _RPINR20_SDI1R4_POSITION                 0x00000004
#define _RPINR20_SDI1R4_MASK                     0x00000010
#define _RPINR20_SDI1R4_LENGTH                   0x00000001

#define _RPINR20_SCK1R0_POSITION                 0x00000008
#define _RPINR20_SCK1R0_MASK                     0x00000100
#define _RPINR20_SCK1R0_LENGTH                   0x00000001

#define _RPINR20_SCK1R1_POSITION                 0x00000009
#define _RPINR20_SCK1R1_MASK                     0x00000200
#define _RPINR20_SCK1R1_LENGTH                   0x00000001

#define _RPINR20_SCK1R2_POSITION                 0x0000000A
#define _RPINR20_SCK1R2_MASK                     0x00000400
#define _RPINR20_SCK1R2_LENGTH                   0x00000001

#define _RPINR20_SCK1R3_POSITION                 0x0000000B
#define _RPINR20_SCK1R3_MASK                     0x00000800
#define _RPINR20_SCK1R3_LENGTH                   0x00000001

#define _RPINR20_SCK1R4_POSITION                 0x0000000C
#define _RPINR20_SCK1R4_MASK                     0x00001000
#define _RPINR20_SCK1R4_LENGTH                   0x00000001

#define _RPINR21_SS1R_POSITION                   0x00000000
#define _RPINR21_SS1R_MASK                       0x0000001F
#define _RPINR21_SS1R_LENGTH                     0x00000005

#define _RPINR21_SS1R0_POSITION                  0x00000000
#define _RPINR21_SS1R0_MASK                      0x00000001
#define _RPINR21_SS1R0_LENGTH                    0x00000001

#define _RPINR21_SS1R1_POSITION                  0x00000001
#define _RPINR21_SS1R1_MASK                      0x00000002
#define _RPINR21_SS1R1_LENGTH                    0x00000001

#define _RPINR21_SS1R2_POSITION                  0x00000002
#define _RPINR21_SS1R2_MASK                      0x00000004
#define _RPINR21_SS1R2_LENGTH                    0x00000001

#define _RPINR21_SS1R3_POSITION                  0x00000003
#define _RPINR21_SS1R3_MASK                      0x00000008
#define _RPINR21_SS1R3_LENGTH                    0x00000001

#define _RPINR21_SS1R4_POSITION                  0x00000004
#define _RPINR21_SS1R4_MASK                      0x00000010
#define _RPINR21_SS1R4_LENGTH                    0x00000001

#define _RPINR22_SDI2R_POSITION                  0x00000000
#define _RPINR22_SDI2R_MASK                      0x0000001F
#define _RPINR22_SDI2R_LENGTH                    0x00000005

#define _RPINR22_SCK2R_POSITION                  0x00000008
#define _RPINR22_SCK2R_MASK                      0x00001F00
#define _RPINR22_SCK2R_LENGTH                    0x00000005

#define _RPINR22_SDI2R0_POSITION                 0x00000000
#define _RPINR22_SDI2R0_MASK                     0x00000001
#define _RPINR22_SDI2R0_LENGTH                   0x00000001

#define _RPINR22_SDI2R1_POSITION                 0x00000001
#define _RPINR22_SDI2R1_MASK                     0x00000002
#define _RPINR22_SDI2R1_LENGTH                   0x00000001

#define _RPINR22_SDI2R2_POSITION                 0x00000002
#define _RPINR22_SDI2R2_MASK                     0x00000004
#define _RPINR22_SDI2R2_LENGTH                   0x00000001

#define _RPINR22_SDI2R3_POSITION                 0x00000003
#define _RPINR22_SDI2R3_MASK                     0x00000008
#define _RPINR22_SDI2R3_LENGTH                   0x00000001

#define _RPINR22_SDI2R4_POSITION                 0x00000004
#define _RPINR22_SDI2R4_MASK                     0x00000010
#define _RPINR22_SDI2R4_LENGTH                   0x00000001

#define _RPINR22_SCK2R0_POSITION                 0x00000008
#define _RPINR22_SCK2R0_MASK                     0x00000100
#define _RPINR22_SCK2R0_LENGTH                   0x00000001

#define _RPINR22_SCK2R1_POSITION                 0x00000009
#define _RPINR22_SCK2R1_MASK                     0x00000200
#define _RPINR22_SCK2R1_LENGTH                   0x00000001

#define _RPINR22_SCK2R2_POSITION                 0x0000000A
#define _RPINR22_SCK2R2_MASK                     0x00000400
#define _RPINR22_SCK2R2_LENGTH                   0x00000001

#define _RPINR22_SCK2R3_POSITION                 0x0000000B
#define _RPINR22_SCK2R3_MASK                     0x00000800
#define _RPINR22_SCK2R3_LENGTH                   0x00000001

#define _RPINR22_SCK2R4_POSITION                 0x0000000C
#define _RPINR22_SCK2R4_MASK                     0x00001000
#define _RPINR22_SCK2R4_LENGTH                   0x00000001

#define _RPINR23_SS2R_POSITION                   0x00000000
#define _RPINR23_SS2R_MASK                       0x0000001F
#define _RPINR23_SS2R_LENGTH                     0x00000005

#define _RPINR23_SS2R0_POSITION                  0x00000000
#define _RPINR23_SS2R0_MASK                      0x00000001
#define _RPINR23_SS2R0_LENGTH                    0x00000001

#define _RPINR23_SS2R1_POSITION                  0x00000001
#define _RPINR23_SS2R1_MASK                      0x00000002
#define _RPINR23_SS2R1_LENGTH                    0x00000001

#define _RPINR23_SS2R2_POSITION                  0x00000002
#define _RPINR23_SS2R2_MASK                      0x00000004
#define _RPINR23_SS2R2_LENGTH                    0x00000001

#define _RPINR23_SS2R3_POSITION                  0x00000003
#define _RPINR23_SS2R3_MASK                      0x00000008
#define _RPINR23_SS2R3_LENGTH                    0x00000001

#define _RPINR23_SS2R4_POSITION                  0x00000004
#define _RPINR23_SS2R4_MASK                      0x00000010
#define _RPINR23_SS2R4_LENGTH                    0x00000001

#define _RPINR26_C1RXR_POSITION                  0x00000000
#define _RPINR26_C1RXR_MASK                      0x0000001F
#define _RPINR26_C1RXR_LENGTH                    0x00000005

#define _RPINR26_C1RXR0_POSITION                 0x00000000
#define _RPINR26_C1RXR0_MASK                     0x00000001
#define _RPINR26_C1RXR0_LENGTH                   0x00000001

#define _RPINR26_C1RXR1_POSITION                 0x00000001
#define _RPINR26_C1RXR1_MASK                     0x00000002
#define _RPINR26_C1RXR1_LENGTH                   0x00000001

#define _RPINR26_C1RXR2_POSITION                 0x00000002
#define _RPINR26_C1RXR2_MASK                     0x00000004
#define _RPINR26_C1RXR2_LENGTH                   0x00000001

#define _RPINR26_C1RXR3_POSITION                 0x00000003
#define _RPINR26_C1RXR3_MASK                     0x00000008
#define _RPINR26_C1RXR3_LENGTH                   0x00000001

#define _RPINR26_C1RXR4_POSITION                 0x00000004
#define _RPINR26_C1RXR4_MASK                     0x00000010
#define _RPINR26_C1RXR4_LENGTH                   0x00000001

#define _RPOR0_RP0R_POSITION                     0x00000000
#define _RPOR0_RP0R_MASK                         0x0000001F
#define _RPOR0_RP0R_LENGTH                       0x00000005

#define _RPOR0_RP1R_POSITION                     0x00000008
#define _RPOR0_RP1R_MASK                         0x00001F00
#define _RPOR0_RP1R_LENGTH                       0x00000005

#define _RPOR0_RP0R0_POSITION                    0x00000000
#define _RPOR0_RP0R0_MASK                        0x00000001
#define _RPOR0_RP0R0_LENGTH                      0x00000001

#define _RPOR0_RP0R1_POSITION                    0x00000001
#define _RPOR0_RP0R1_MASK                        0x00000002
#define _RPOR0_RP0R1_LENGTH                      0x00000001

#define _RPOR0_RP0R2_POSITION                    0x00000002
#define _RPOR0_RP0R2_MASK                        0x00000004
#define _RPOR0_RP0R2_LENGTH                      0x00000001

#define _RPOR0_RP0R3_POSITION                    0x00000003
#define _RPOR0_RP0R3_MASK                        0x00000008
#define _RPOR0_RP0R3_LENGTH                      0x00000001

#define _RPOR0_RP0R4_POSITION                    0x00000004
#define _RPOR0_RP0R4_MASK                        0x00000010
#define _RPOR0_RP0R4_LENGTH                      0x00000001

#define _RPOR0_RP1R0_POSITION                    0x00000008
#define _RPOR0_RP1R0_MASK                        0x00000100
#define _RPOR0_RP1R0_LENGTH                      0x00000001

#define _RPOR0_RP1R1_POSITION                    0x00000009
#define _RPOR0_RP1R1_MASK                        0x00000200
#define _RPOR0_RP1R1_LENGTH                      0x00000001

#define _RPOR0_RP1R2_POSITION                    0x0000000A
#define _RPOR0_RP1R2_MASK                        0x00000400
#define _RPOR0_RP1R2_LENGTH                      0x00000001

#define _RPOR0_RP1R3_POSITION                    0x0000000B
#define _RPOR0_RP1R3_MASK                        0x00000800
#define _RPOR0_RP1R3_LENGTH                      0x00000001

#define _RPOR0_RP1R4_POSITION                    0x0000000C
#define _RPOR0_RP1R4_MASK                        0x00001000
#define _RPOR0_RP1R4_LENGTH                      0x00000001

#define _RPOR1_RP2R_POSITION                     0x00000000
#define _RPOR1_RP2R_MASK                         0x0000001F
#define _RPOR1_RP2R_LENGTH                       0x00000005

#define _RPOR1_RP3R_POSITION                     0x00000008
#define _RPOR1_RP3R_MASK                         0x00001F00
#define _RPOR1_RP3R_LENGTH                       0x00000005

#define _RPOR1_RP2R0_POSITION                    0x00000000
#define _RPOR1_RP2R0_MASK                        0x00000001
#define _RPOR1_RP2R0_LENGTH                      0x00000001

#define _RPOR1_RP2R1_POSITION                    0x00000001
#define _RPOR1_RP2R1_MASK                        0x00000002
#define _RPOR1_RP2R1_LENGTH                      0x00000001

#define _RPOR1_RP2R2_POSITION                    0x00000002
#define _RPOR1_RP2R2_MASK                        0x00000004
#define _RPOR1_RP2R2_LENGTH                      0x00000001

#define _RPOR1_RP2R3_POSITION                    0x00000003
#define _RPOR1_RP2R3_MASK                        0x00000008
#define _RPOR1_RP2R3_LENGTH                      0x00000001

#define _RPOR1_RP2R4_POSITION                    0x00000004
#define _RPOR1_RP2R4_MASK                        0x00000010
#define _RPOR1_RP2R4_LENGTH                      0x00000001

#define _RPOR1_RP3R0_POSITION                    0x00000008
#define _RPOR1_RP3R0_MASK                        0x00000100
#define _RPOR1_RP3R0_LENGTH                      0x00000001

#define _RPOR1_RP3R1_POSITION                    0x00000009
#define _RPOR1_RP3R1_MASK                        0x00000200
#define _RPOR1_RP3R1_LENGTH                      0x00000001

#define _RPOR1_RP3R2_POSITION                    0x0000000A
#define _RPOR1_RP3R2_MASK                        0x00000400
#define _RPOR1_RP3R2_LENGTH                      0x00000001

#define _RPOR1_RP3R3_POSITION                    0x0000000B
#define _RPOR1_RP3R3_MASK                        0x00000800
#define _RPOR1_RP3R3_LENGTH                      0x00000001

#define _RPOR1_RP3R4_POSITION                    0x0000000C
#define _RPOR1_RP3R4_MASK                        0x00001000
#define _RPOR1_RP3R4_LENGTH                      0x00000001

#define _RPOR2_RP4R_POSITION                     0x00000000
#define _RPOR2_RP4R_MASK                         0x0000001F
#define _RPOR2_RP4R_LENGTH                       0x00000005

#define _RPOR2_RP5R_POSITION                     0x00000008
#define _RPOR2_RP5R_MASK                         0x00001F00
#define _RPOR2_RP5R_LENGTH                       0x00000005

#define _RPOR2_RP4R0_POSITION                    0x00000000
#define _RPOR2_RP4R0_MASK                        0x00000001
#define _RPOR2_RP4R0_LENGTH                      0x00000001

#define _RPOR2_RP4R1_POSITION                    0x00000001
#define _RPOR2_RP4R1_MASK                        0x00000002
#define _RPOR2_RP4R1_LENGTH                      0x00000001

#define _RPOR2_RP4R2_POSITION                    0x00000002
#define _RPOR2_RP4R2_MASK                        0x00000004
#define _RPOR2_RP4R2_LENGTH                      0x00000001

#define _RPOR2_RP4R3_POSITION                    0x00000003
#define _RPOR2_RP4R3_MASK                        0x00000008
#define _RPOR2_RP4R3_LENGTH                      0x00000001

#define _RPOR2_RP4R4_POSITION                    0x00000004
#define _RPOR2_RP4R4_MASK                        0x00000010
#define _RPOR2_RP4R4_LENGTH                      0x00000001

#define _RPOR2_RP5R0_POSITION                    0x00000008
#define _RPOR2_RP5R0_MASK                        0x00000100
#define _RPOR2_RP5R0_LENGTH                      0x00000001

#define _RPOR2_RP5R1_POSITION                    0x00000009
#define _RPOR2_RP5R1_MASK                        0x00000200
#define _RPOR2_RP5R1_LENGTH                      0x00000001

#define _RPOR2_RP5R2_POSITION                    0x0000000A
#define _RPOR2_RP5R2_MASK                        0x00000400
#define _RPOR2_RP5R2_LENGTH                      0x00000001

#define _RPOR2_RP5R3_POSITION                    0x0000000B
#define _RPOR2_RP5R3_MASK                        0x00000800
#define _RPOR2_RP5R3_LENGTH                      0x00000001

#define _RPOR2_RP5R4_POSITION                    0x0000000C
#define _RPOR2_RP5R4_MASK                        0x00001000
#define _RPOR2_RP5R4_LENGTH                      0x00000001

#define _RPOR3_RP6R_POSITION                     0x00000000
#define _RPOR3_RP6R_MASK                         0x0000001F
#define _RPOR3_RP6R_LENGTH                       0x00000005

#define _RPOR3_RP7R_POSITION                     0x00000008
#define _RPOR3_RP7R_MASK                         0x00001F00
#define _RPOR3_RP7R_LENGTH                       0x00000005

#define _RPOR3_RP6R0_POSITION                    0x00000000
#define _RPOR3_RP6R0_MASK                        0x00000001
#define _RPOR3_RP6R0_LENGTH                      0x00000001

#define _RPOR3_RP6R1_POSITION                    0x00000001
#define _RPOR3_RP6R1_MASK                        0x00000002
#define _RPOR3_RP6R1_LENGTH                      0x00000001

#define _RPOR3_RP6R2_POSITION                    0x00000002
#define _RPOR3_RP6R2_MASK                        0x00000004
#define _RPOR3_RP6R2_LENGTH                      0x00000001

#define _RPOR3_RP6R3_POSITION                    0x00000003
#define _RPOR3_RP6R3_MASK                        0x00000008
#define _RPOR3_RP6R3_LENGTH                      0x00000001

#define _RPOR3_RP6R4_POSITION                    0x00000004
#define _RPOR3_RP6R4_MASK                        0x00000010
#define _RPOR3_RP6R4_LENGTH                      0x00000001

#define _RPOR3_RP7R0_POSITION                    0x00000008
#define _RPOR3_RP7R0_MASK                        0x00000100
#define _RPOR3_RP7R0_LENGTH                      0x00000001

#define _RPOR3_RP7R1_POSITION                    0x00000009
#define _RPOR3_RP7R1_MASK                        0x00000200
#define _RPOR3_RP7R1_LENGTH                      0x00000001

#define _RPOR3_RP7R2_POSITION                    0x0000000A
#define _RPOR3_RP7R2_MASK                        0x00000400
#define _RPOR3_RP7R2_LENGTH                      0x00000001

#define _RPOR3_RP7R3_POSITION                    0x0000000B
#define _RPOR3_RP7R3_MASK                        0x00000800
#define _RPOR3_RP7R3_LENGTH                      0x00000001

#define _RPOR3_RP7R4_POSITION                    0x0000000C
#define _RPOR3_RP7R4_MASK                        0x00001000
#define _RPOR3_RP7R4_LENGTH                      0x00000001

#define _RPOR4_RP8R_POSITION                     0x00000000
#define _RPOR4_RP8R_MASK                         0x0000001F
#define _RPOR4_RP8R_LENGTH                       0x00000005

#define _RPOR4_RP9R_POSITION                     0x00000008
#define _RPOR4_RP9R_MASK                         0x00001F00
#define _RPOR4_RP9R_LENGTH                       0x00000005

#define _RPOR4_RP8R0_POSITION                    0x00000000
#define _RPOR4_RP8R0_MASK                        0x00000001
#define _RPOR4_RP8R0_LENGTH                      0x00000001

#define _RPOR4_RP8R1_POSITION                    0x00000001
#define _RPOR4_RP8R1_MASK                        0x00000002
#define _RPOR4_RP8R1_LENGTH                      0x00000001

#define _RPOR4_RP8R2_POSITION                    0x00000002
#define _RPOR4_RP8R2_MASK                        0x00000004
#define _RPOR4_RP8R2_LENGTH                      0x00000001

#define _RPOR4_RP8R3_POSITION                    0x00000003
#define _RPOR4_RP8R3_MASK                        0x00000008
#define _RPOR4_RP8R3_LENGTH                      0x00000001

#define _RPOR4_RP8R4_POSITION                    0x00000004
#define _RPOR4_RP8R4_MASK                        0x00000010
#define _RPOR4_RP8R4_LENGTH                      0x00000001

#define _RPOR4_RP9R0_POSITION                    0x00000008
#define _RPOR4_RP9R0_MASK                        0x00000100
#define _RPOR4_RP9R0_LENGTH                      0x00000001

#define _RPOR4_RP9R1_POSITION                    0x00000009
#define _RPOR4_RP9R1_MASK                        0x00000200
#define _RPOR4_RP9R1_LENGTH                      0x00000001

#define _RPOR4_RP9R2_POSITION                    0x0000000A
#define _RPOR4_RP9R2_MASK                        0x00000400
#define _RPOR4_RP9R2_LENGTH                      0x00000001

#define _RPOR4_RP9R3_POSITION                    0x0000000B
#define _RPOR4_RP9R3_MASK                        0x00000800
#define _RPOR4_RP9R3_LENGTH                      0x00000001

#define _RPOR4_RP9R4_POSITION                    0x0000000C
#define _RPOR4_RP9R4_MASK                        0x00001000
#define _RPOR4_RP9R4_LENGTH                      0x00000001

#define _RPOR5_RP10R_POSITION                    0x00000000
#define _RPOR5_RP10R_MASK                        0x0000001F
#define _RPOR5_RP10R_LENGTH                      0x00000005

#define _RPOR5_RP11R_POSITION                    0x00000008
#define _RPOR5_RP11R_MASK                        0x00001F00
#define _RPOR5_RP11R_LENGTH                      0x00000005

#define _RPOR5_RP10R0_POSITION                   0x00000000
#define _RPOR5_RP10R0_MASK                       0x00000001
#define _RPOR5_RP10R0_LENGTH                     0x00000001

#define _RPOR5_RP10R1_POSITION                   0x00000001
#define _RPOR5_RP10R1_MASK                       0x00000002
#define _RPOR5_RP10R1_LENGTH                     0x00000001

#define _RPOR5_RP10R2_POSITION                   0x00000002
#define _RPOR5_RP10R2_MASK                       0x00000004
#define _RPOR5_RP10R2_LENGTH                     0x00000001

#define _RPOR5_RP10R3_POSITION                   0x00000003
#define _RPOR5_RP10R3_MASK                       0x00000008
#define _RPOR5_RP10R3_LENGTH                     0x00000001

#define _RPOR5_RP10R4_POSITION                   0x00000004
#define _RPOR5_RP10R4_MASK                       0x00000010
#define _RPOR5_RP10R4_LENGTH                     0x00000001

#define _RPOR5_RP11R0_POSITION                   0x00000008
#define _RPOR5_RP11R0_MASK                       0x00000100
#define _RPOR5_RP11R0_LENGTH                     0x00000001

#define _RPOR5_RP11R1_POSITION                   0x00000009
#define _RPOR5_RP11R1_MASK                       0x00000200
#define _RPOR5_RP11R1_LENGTH                     0x00000001

#define _RPOR5_RP11R2_POSITION                   0x0000000A
#define _RPOR5_RP11R2_MASK                       0x00000400
#define _RPOR5_RP11R2_LENGTH                     0x00000001

#define _RPOR5_RP11R3_POSITION                   0x0000000B
#define _RPOR5_RP11R3_MASK                       0x00000800
#define _RPOR5_RP11R3_LENGTH                     0x00000001

#define _RPOR5_RP11R4_POSITION                   0x0000000C
#define _RPOR5_RP11R4_MASK                       0x00001000
#define _RPOR5_RP11R4_LENGTH                     0x00000001

#define _RPOR6_RP12R_POSITION                    0x00000000
#define _RPOR6_RP12R_MASK                        0x0000001F
#define _RPOR6_RP12R_LENGTH                      0x00000005

#define _RPOR6_RP13R_POSITION                    0x00000008
#define _RPOR6_RP13R_MASK                        0x00001F00
#define _RPOR6_RP13R_LENGTH                      0x00000005

#define _RPOR6_RP12R0_POSITION                   0x00000000
#define _RPOR6_RP12R0_MASK                       0x00000001
#define _RPOR6_RP12R0_LENGTH                     0x00000001

#define _RPOR6_RP12R1_POSITION                   0x00000001
#define _RPOR6_RP12R1_MASK                       0x00000002
#define _RPOR6_RP12R1_LENGTH                     0x00000001

#define _RPOR6_RP12R2_POSITION                   0x00000002
#define _RPOR6_RP12R2_MASK                       0x00000004
#define _RPOR6_RP12R2_LENGTH                     0x00000001

#define _RPOR6_RP12R3_POSITION                   0x00000003
#define _RPOR6_RP12R3_MASK                       0x00000008
#define _RPOR6_RP12R3_LENGTH                     0x00000001

#define _RPOR6_RP12R4_POSITION                   0x00000004
#define _RPOR6_RP12R4_MASK                       0x00000010
#define _RPOR6_RP12R4_LENGTH                     0x00000001

#define _RPOR6_RP13R0_POSITION                   0x00000008
#define _RPOR6_RP13R0_MASK                       0x00000100
#define _RPOR6_RP13R0_LENGTH                     0x00000001

#define _RPOR6_RP13R1_POSITION                   0x00000009
#define _RPOR6_RP13R1_MASK                       0x00000200
#define _RPOR6_RP13R1_LENGTH                     0x00000001

#define _RPOR6_RP13R2_POSITION                   0x0000000A
#define _RPOR6_RP13R2_MASK                       0x00000400
#define _RPOR6_RP13R2_LENGTH                     0x00000001

#define _RPOR6_RP13R3_POSITION                   0x0000000B
#define _RPOR6_RP13R3_MASK                       0x00000800
#define _RPOR6_RP13R3_LENGTH                     0x00000001

#define _RPOR6_RP13R4_POSITION                   0x0000000C
#define _RPOR6_RP13R4_MASK                       0x00001000
#define _RPOR6_RP13R4_LENGTH                     0x00000001

#define _RPOR7_RP14R_POSITION                    0x00000000
#define _RPOR7_RP14R_MASK                        0x0000001F
#define _RPOR7_RP14R_LENGTH                      0x00000005

#define _RPOR7_RP15R_POSITION                    0x00000008
#define _RPOR7_RP15R_MASK                        0x00001F00
#define _RPOR7_RP15R_LENGTH                      0x00000005

#define _RPOR7_RP14R0_POSITION                   0x00000000
#define _RPOR7_RP14R0_MASK                       0x00000001
#define _RPOR7_RP14R0_LENGTH                     0x00000001

#define _RPOR7_RP14R1_POSITION                   0x00000001
#define _RPOR7_RP14R1_MASK                       0x00000002
#define _RPOR7_RP14R1_LENGTH                     0x00000001

#define _RPOR7_RP14R2_POSITION                   0x00000002
#define _RPOR7_RP14R2_MASK                       0x00000004
#define _RPOR7_RP14R2_LENGTH                     0x00000001

#define _RPOR7_RP14R3_POSITION                   0x00000003
#define _RPOR7_RP14R3_MASK                       0x00000008
#define _RPOR7_RP14R3_LENGTH                     0x00000001

#define _RPOR7_RP14R4_POSITION                   0x00000004
#define _RPOR7_RP14R4_MASK                       0x00000010
#define _RPOR7_RP14R4_LENGTH                     0x00000001

#define _RPOR7_RP15R0_POSITION                   0x00000008
#define _RPOR7_RP15R0_MASK                       0x00000100
#define _RPOR7_RP15R0_LENGTH                     0x00000001

#define _RPOR7_RP15R1_POSITION                   0x00000009
#define _RPOR7_RP15R1_MASK                       0x00000200
#define _RPOR7_RP15R1_LENGTH                     0x00000001

#define _RPOR7_RP15R2_POSITION                   0x0000000A
#define _RPOR7_RP15R2_MASK                       0x00000400
#define _RPOR7_RP15R2_LENGTH                     0x00000001

#define _RPOR7_RP15R3_POSITION                   0x0000000B
#define _RPOR7_RP15R3_MASK                       0x00000800
#define _RPOR7_RP15R3_LENGTH                     0x00000001

#define _RPOR7_RP15R4_POSITION                   0x0000000C
#define _RPOR7_RP15R4_MASK                       0x00001000
#define _RPOR7_RP15R4_LENGTH                     0x00000001

#define _RPOR8_RP16R_POSITION                    0x00000000
#define _RPOR8_RP16R_MASK                        0x0000001F
#define _RPOR8_RP16R_LENGTH                      0x00000005

#define _RPOR8_RP17R_POSITION                    0x00000008
#define _RPOR8_RP17R_MASK                        0x00001F00
#define _RPOR8_RP17R_LENGTH                      0x00000005

#define _RPOR8_RP16R0_POSITION                   0x00000000
#define _RPOR8_RP16R0_MASK                       0x00000001
#define _RPOR8_RP16R0_LENGTH                     0x00000001

#define _RPOR8_RP16R1_POSITION                   0x00000001
#define _RPOR8_RP16R1_MASK                       0x00000002
#define _RPOR8_RP16R1_LENGTH                     0x00000001

#define _RPOR8_RP16R2_POSITION                   0x00000002
#define _RPOR8_RP16R2_MASK                       0x00000004
#define _RPOR8_RP16R2_LENGTH                     0x00000001

#define _RPOR8_RP16R3_POSITION                   0x00000003
#define _RPOR8_RP16R3_MASK                       0x00000008
#define _RPOR8_RP16R3_LENGTH                     0x00000001

#define _RPOR8_RP16R4_POSITION                   0x00000004
#define _RPOR8_RP16R4_MASK                       0x00000010
#define _RPOR8_RP16R4_LENGTH                     0x00000001

#define _RPOR8_RP17R0_POSITION                   0x00000008
#define _RPOR8_RP17R0_MASK                       0x00000100
#define _RPOR8_RP17R0_LENGTH                     0x00000001

#define _RPOR8_RP17R1_POSITION                   0x00000009
#define _RPOR8_RP17R1_MASK                       0x00000200
#define _RPOR8_RP17R1_LENGTH                     0x00000001

#define _RPOR8_RP17R2_POSITION                   0x0000000A
#define _RPOR8_RP17R2_MASK                       0x00000400
#define _RPOR8_RP17R2_LENGTH                     0x00000001

#define _RPOR8_RP17R3_POSITION                   0x0000000B
#define _RPOR8_RP17R3_MASK                       0x00000800
#define _RPOR8_RP17R3_LENGTH                     0x00000001

#define _RPOR8_RP17R4_POSITION                   0x0000000C
#define _RPOR8_RP17R4_MASK                       0x00001000
#define _RPOR8_RP17R4_LENGTH                     0x00000001

#define _RPOR9_RP18R_POSITION                    0x00000000
#define _RPOR9_RP18R_MASK                        0x0000001F
#define _RPOR9_RP18R_LENGTH                      0x00000005

#define _RPOR9_RP19R_POSITION                    0x00000008
#define _RPOR9_RP19R_MASK                        0x00001F00
#define _RPOR9_RP19R_LENGTH                      0x00000005

#define _RPOR9_RP18R0_POSITION                   0x00000000
#define _RPOR9_RP18R0_MASK                       0x00000001
#define _RPOR9_RP18R0_LENGTH                     0x00000001

#define _RPOR9_RP18R1_POSITION                   0x00000001
#define _RPOR9_RP18R1_MASK                       0x00000002
#define _RPOR9_RP18R1_LENGTH                     0x00000001

#define _RPOR9_RP18R2_POSITION                   0x00000002
#define _RPOR9_RP18R2_MASK                       0x00000004
#define _RPOR9_RP18R2_LENGTH                     0x00000001

#define _RPOR9_RP18R3_POSITION                   0x00000003
#define _RPOR9_RP18R3_MASK                       0x00000008
#define _RPOR9_RP18R3_LENGTH                     0x00000001

#define _RPOR9_RP18R4_POSITION                   0x00000004
#define _RPOR9_RP18R4_MASK                       0x00000010
#define _RPOR9_RP18R4_LENGTH                     0x00000001

#define _RPOR9_RP19R0_POSITION                   0x00000008
#define _RPOR9_RP19R0_MASK                       0x00000100
#define _RPOR9_RP19R0_LENGTH                     0x00000001

#define _RPOR9_RP19R1_POSITION                   0x00000009
#define _RPOR9_RP19R1_MASK                       0x00000200
#define _RPOR9_RP19R1_LENGTH                     0x00000001

#define _RPOR9_RP19R2_POSITION                   0x0000000A
#define _RPOR9_RP19R2_MASK                       0x00000400
#define _RPOR9_RP19R2_LENGTH                     0x00000001

#define _RPOR9_RP19R3_POSITION                   0x0000000B
#define _RPOR9_RP19R3_MASK                       0x00000800
#define _RPOR9_RP19R3_LENGTH                     0x00000001

#define _RPOR9_RP19R4_POSITION                   0x0000000C
#define _RPOR9_RP19R4_MASK                       0x00001000
#define _RPOR9_RP19R4_LENGTH                     0x00000001

#define _RPOR10_RP20R_POSITION                   0x00000000
#define _RPOR10_RP20R_MASK                       0x0000001F
#define _RPOR10_RP20R_LENGTH                     0x00000005

#define _RPOR10_RP21R_POSITION                   0x00000008
#define _RPOR10_RP21R_MASK                       0x00001F00
#define _RPOR10_RP21R_LENGTH                     0x00000005

#define _RPOR10_RP20R0_POSITION                  0x00000000
#define _RPOR10_RP20R0_MASK                      0x00000001
#define _RPOR10_RP20R0_LENGTH                    0x00000001

#define _RPOR10_RP20R1_POSITION                  0x00000001
#define _RPOR10_RP20R1_MASK                      0x00000002
#define _RPOR10_RP20R1_LENGTH                    0x00000001

#define _RPOR10_RP20R2_POSITION                  0x00000002
#define _RPOR10_RP20R2_MASK                      0x00000004
#define _RPOR10_RP20R2_LENGTH                    0x00000001

#define _RPOR10_RP20R3_POSITION                  0x00000003
#define _RPOR10_RP20R3_MASK                      0x00000008
#define _RPOR10_RP20R3_LENGTH                    0x00000001

#define _RPOR10_RP20R4_POSITION                  0x00000004
#define _RPOR10_RP20R4_MASK                      0x00000010
#define _RPOR10_RP20R4_LENGTH                    0x00000001

#define _RPOR10_RP21R0_POSITION                  0x00000008
#define _RPOR10_RP21R0_MASK                      0x00000100
#define _RPOR10_RP21R0_LENGTH                    0x00000001

#define _RPOR10_RP21R1_POSITION                  0x00000009
#define _RPOR10_RP21R1_MASK                      0x00000200
#define _RPOR10_RP21R1_LENGTH                    0x00000001

#define _RPOR10_RP21R2_POSITION                  0x0000000A
#define _RPOR10_RP21R2_MASK                      0x00000400
#define _RPOR10_RP21R2_LENGTH                    0x00000001

#define _RPOR10_RP21R3_POSITION                  0x0000000B
#define _RPOR10_RP21R3_MASK                      0x00000800
#define _RPOR10_RP21R3_LENGTH                    0x00000001

#define _RPOR10_RP21R4_POSITION                  0x0000000C
#define _RPOR10_RP21R4_MASK                      0x00001000
#define _RPOR10_RP21R4_LENGTH                    0x00000001

#define _RPOR11_RP22R_POSITION                   0x00000000
#define _RPOR11_RP22R_MASK                       0x0000001F
#define _RPOR11_RP22R_LENGTH                     0x00000005

#define _RPOR11_RP23R_POSITION                   0x00000008
#define _RPOR11_RP23R_MASK                       0x00001F00
#define _RPOR11_RP23R_LENGTH                     0x00000005

#define _RPOR11_RP22R0_POSITION                  0x00000000
#define _RPOR11_RP22R0_MASK                      0x00000001
#define _RPOR11_RP22R0_LENGTH                    0x00000001

#define _RPOR11_RP22R1_POSITION                  0x00000001
#define _RPOR11_RP22R1_MASK                      0x00000002
#define _RPOR11_RP22R1_LENGTH                    0x00000001

#define _RPOR11_RP22R2_POSITION                  0x00000002
#define _RPOR11_RP22R2_MASK                      0x00000004
#define _RPOR11_RP22R2_LENGTH                    0x00000001

#define _RPOR11_RP22R3_POSITION                  0x00000003
#define _RPOR11_RP22R3_MASK                      0x00000008
#define _RPOR11_RP22R3_LENGTH                    0x00000001

#define _RPOR11_RP22R4_POSITION                  0x00000004
#define _RPOR11_RP22R4_MASK                      0x00000010
#define _RPOR11_RP22R4_LENGTH                    0x00000001

#define _RPOR11_RP23R0_POSITION                  0x00000008
#define _RPOR11_RP23R0_MASK                      0x00000100
#define _RPOR11_RP23R0_LENGTH                    0x00000001

#define _RPOR11_RP23R1_POSITION                  0x00000009
#define _RPOR11_RP23R1_MASK                      0x00000200
#define _RPOR11_RP23R1_LENGTH                    0x00000001

#define _RPOR11_RP23R2_POSITION                  0x0000000A
#define _RPOR11_RP23R2_MASK                      0x00000400
#define _RPOR11_RP23R2_LENGTH                    0x00000001

#define _RPOR11_RP23R3_POSITION                  0x0000000B
#define _RPOR11_RP23R3_MASK                      0x00000800
#define _RPOR11_RP23R3_LENGTH                    0x00000001

#define _RPOR11_RP23R4_POSITION                  0x0000000C
#define _RPOR11_RP23R4_MASK                      0x00001000
#define _RPOR11_RP23R4_LENGTH                    0x00000001

#define _RPOR12_RP24R_POSITION                   0x00000000
#define _RPOR12_RP24R_MASK                       0x0000001F
#define _RPOR12_RP24R_LENGTH                     0x00000005

#define _RPOR12_RP25R_POSITION                   0x00000008
#define _RPOR12_RP25R_MASK                       0x00001F00
#define _RPOR12_RP25R_LENGTH                     0x00000005

#define _RPOR12_RP24R0_POSITION                  0x00000000
#define _RPOR12_RP24R0_MASK                      0x00000001
#define _RPOR12_RP24R0_LENGTH                    0x00000001

#define _RPOR12_RP24R1_POSITION                  0x00000001
#define _RPOR12_RP24R1_MASK                      0x00000002
#define _RPOR12_RP24R1_LENGTH                    0x00000001

#define _RPOR12_RP24R2_POSITION                  0x00000002
#define _RPOR12_RP24R2_MASK                      0x00000004
#define _RPOR12_RP24R2_LENGTH                    0x00000001

#define _RPOR12_RP24R3_POSITION                  0x00000003
#define _RPOR12_RP24R3_MASK                      0x00000008
#define _RPOR12_RP24R3_LENGTH                    0x00000001

#define _RPOR12_RP24R4_POSITION                  0x00000004
#define _RPOR12_RP24R4_MASK                      0x00000010
#define _RPOR12_RP24R4_LENGTH                    0x00000001

#define _RPOR12_RP25R0_POSITION                  0x00000008
#define _RPOR12_RP25R0_MASK                      0x00000100
#define _RPOR12_RP25R0_LENGTH                    0x00000001

#define _RPOR12_RP25R1_POSITION                  0x00000009
#define _RPOR12_RP25R1_MASK                      0x00000200
#define _RPOR12_RP25R1_LENGTH                    0x00000001

#define _RPOR12_RP25R2_POSITION                  0x0000000A
#define _RPOR12_RP25R2_MASK                      0x00000400
#define _RPOR12_RP25R2_LENGTH                    0x00000001

#define _RPOR12_RP25R3_POSITION                  0x0000000B
#define _RPOR12_RP25R3_MASK                      0x00000800
#define _RPOR12_RP25R3_LENGTH                    0x00000001

#define _RPOR12_RP25R4_POSITION                  0x0000000C
#define _RPOR12_RP25R4_MASK                      0x00001000
#define _RPOR12_RP25R4_LENGTH                    0x00000001

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

#define _RCON_CM_POSITION                        0x00000009
#define _RCON_CM_MASK                            0x00000200
#define _RCON_CM_LENGTH                          0x00000001

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

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

#define _OSCCON_IOLOCK_POSITION                  0x00000006
#define _OSCCON_IOLOCK_MASK                      0x00000040
#define _OSCCON_IOLOCK_LENGTH                    0x00000001

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

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _ACLKCON_ASRCSEL_POSITION                0x00000007
#define _ACLKCON_ASRCSEL_MASK                    0x00000080
#define _ACLKCON_ASRCSEL_LENGTH                  0x00000001

#define _ACLKCON_APSTSCLR_POSITION               0x00000008
#define _ACLKCON_APSTSCLR_MASK                   0x00000700
#define _ACLKCON_APSTSCLR_LENGTH                 0x00000003

#define _ACLKCON_AOSCMD_POSITION                 0x0000000B
#define _ACLKCON_AOSCMD_MASK                     0x00001800
#define _ACLKCON_AOSCMD_LENGTH                   0x00000002

#define _ACLKCON_SELACLK_POSITION                0x0000000D
#define _ACLKCON_SELACLK_MASK                    0x00002000
#define _ACLKCON_SELACLK_LENGTH                  0x00000001

#define _ACLKCON_APSTSCLR0_POSITION              0x00000008
#define _ACLKCON_APSTSCLR0_MASK                  0x00000100
#define _ACLKCON_APSTSCLR0_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR1_POSITION              0x00000009
#define _ACLKCON_APSTSCLR1_MASK                  0x00000200
#define _ACLKCON_APSTSCLR1_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR2_POSITION              0x0000000A
#define _ACLKCON_APSTSCLR2_MASK                  0x00000400
#define _ACLKCON_APSTSCLR2_LENGTH                0x00000001

#define _ACLKCON_AOSCMD0_POSITION                0x0000000B
#define _ACLKCON_AOSCMD0_MASK                    0x00000800
#define _ACLKCON_AOSCMD0_LENGTH                  0x00000001

#define _ACLKCON_AOSCMD1_POSITION                0x0000000C
#define _ACLKCON_AOSCMD1_MASK                    0x00001000
#define _ACLKCON_AOSCMD1_LENGTH                  0x00000001

#define _BSRAM_RL_BSR_POSITION                   0x00000000
#define _BSRAM_RL_BSR_MASK                       0x00000001
#define _BSRAM_RL_BSR_LENGTH                     0x00000001

#define _BSRAM_IR_BSR_POSITION                   0x00000001
#define _BSRAM_IR_BSR_MASK                       0x00000002
#define _BSRAM_IR_BSR_LENGTH                     0x00000001

#define _BSRAM_IW_BSR_POSITION                   0x00000002
#define _BSRAM_IW_BSR_MASK                       0x00000004
#define _BSRAM_IW_BSR_LENGTH                     0x00000001

#define _SSRAM_RL_SSR_POSITION                   0x00000000
#define _SSRAM_RL_SSR_MASK                       0x00000001
#define _SSRAM_RL_SSR_LENGTH                     0x00000001

#define _SSRAM_IR_SSR_POSITION                   0x00000001
#define _SSRAM_IR_SSR_MASK                       0x00000002
#define _SSRAM_IR_SSR_LENGTH                     0x00000001

#define _SSRAM_IW_SSR_POSITION                   0x00000002
#define _SSRAM_IW_SSR_MASK                       0x00000004
#define _SSRAM_IW_SSR_LENGTH                     0x00000001

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

#define _PMD1_AD1MD_POSITION                     0x00000000
#define _PMD1_AD1MD_MASK                         0x00000001
#define _PMD1_AD1MD_LENGTH                       0x00000001

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

#define _PMD1_PWM1MD_POSITION                    0x00000009
#define _PMD1_PWM1MD_MASK                        0x00000200
#define _PMD1_PWM1MD_LENGTH                      0x00000001

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

#define _PMD2_IC7MD_POSITION                     0x0000000E
#define _PMD2_IC7MD_MASK                         0x00004000
#define _PMD2_IC7MD_LENGTH                       0x00000001

#define _PMD2_IC8MD_POSITION                     0x0000000F
#define _PMD2_IC8MD_MASK                         0x00008000
#define _PMD2_IC8MD_LENGTH                       0x00000001

#define _PMD3_PWM2MD_POSITION                    0x00000004
#define _PMD3_PWM2MD_MASK                        0x00000010
#define _PMD3_PWM2MD_LENGTH                      0x00000001

#define _PMD3_QEI2MD_POSITION                    0x00000005
#define _PMD3_QEI2MD_MASK                        0x00000020
#define _PMD3_QEI2MD_LENGTH                      0x00000001

#define _PMD3_CRCMD_POSITION                     0x00000007
#define _PMD3_CRCMD_MASK                         0x00000080
#define _PMD3_CRCMD_LENGTH                       0x00000001

#define _PMD3_PMPMD_POSITION                     0x00000008
#define _PMD3_PMPMD_MASK                         0x00000100
#define _PMD3_PMPMD_LENGTH                       0x00000001

#define _PMD3_RTCCMD_POSITION                    0x00000009
#define _PMD3_RTCCMD_MASK                        0x00000200
#define _PMD3_RTCCMD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001


/* -------------------------------------------------------- */
/* External declaration for DMA memory base address         */
/*                                                          */
/* For example:                                             */
/*                                                          */
/*   uint16_t addr = (uint16_t) &_DMA_BASE;         */
/*                                                          */
/* Note: Use __builtin_dmaoffset() to calculate offsets     */
/*       within DMA memory.                                 */
/*                                                          */
/* -------------------------------------------------------- */

extern void *_DMA_BASE __attribute__((far));


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
**     BWRP_WRPROTECT_ON    Boot segment is write-protected
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
**   Boot Segment RAM Protection:
**     RBS_LARGE_RAM        Large-sized Boot RAM
**     RBS_LARGE_BOOT_RAM   Large-sized Boot RAM
**     RBS_MEDIUM_RAM       Medium-sized Boot RAM
**     RBS_MEDIUM_BOOT_RAM  Medium-sized Boot RAM
**     RBS_SMALL_RAM        Small-sized Boot RAM
**     RBS_SMALL_BOOT_RAM   Small-sized Boot RAM
**     RBS_NO_RAM           No Boot RAM
**     RBS_NO_BOOT_RAM      No Boot RAM
**
*/

#define BWRP_WRPROTECT_ON    0x00CE
#define BWRP_WRPROTECT_OFF   0x00CF

#define BSS_LARGE_FLASH_HIGH 0x00C1
#define BSS_HIGH_LARGE_BOOT_CODE 0x00C1
#define BSS_MEDIUM_FLASH_HIGH 0x00C3
#define BSS_HIGH_MEDIUM_BOOT_CODE 0x00C3
#define BSS_SMALL_FLASH_HIGH 0x00C5
#define BSS_HIGH_SMALL_BOOT_CODE 0x00C5
#define BSS_LARGE_FLASH_STD  0x00C9
#define BSS_STRD_LARGE_BOOT_CODE 0x00C9
#define BSS_MEDIUM_FLASH_STD 0x00CB
#define BSS_STRD_MEDIUM_BOOT_CODE 0x00CB
#define BSS_SMALL_FLASH_STD  0x00CD
#define BSS_STRD_SMALL_BOOT_CODE 0x00CD
#define BSS_NO_FLASH         0x00CF
#define BSS_NO_BOOT_CODE     0x00CF

#define RBS_LARGE_RAM        0x000F
#define RBS_LARGE_BOOT_RAM   0x000F
#define RBS_MEDIUM_RAM       0x004F
#define RBS_MEDIUM_BOOT_RAM  0x004F
#define RBS_SMALL_RAM        0x008F
#define RBS_SMALL_BOOT_RAM   0x008F
#define RBS_NO_RAM           0x00CF
#define RBS_NO_BOOT_RAM      0x00CF

/* Register FSS (0xf80002)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FSS;
#define _FSS(x) __attribute__((address(0xf80002),deprecated_definition("consider migrating to #pragma config"),section("__FSS.sec"),space(prog))) __prog__ uint16_t _FSS = (x);

/*
** Only one invocation of FSS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSS.
** Multiple options may be combined, as shown:
**
** _FSS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Secure Segment Program Write Protect:
**     SWRP_WRPROTECT_ON    Secure segment is write-protected
**     SWRP_WRPROTECT_OFF   Secure segment may be written
**
**   Secure Segment Program Flash Code Protection:
**     SSS_LARGE_FLASH_HIGH High Security, Large-sized Secure Flash
**     SSS_HIGH_LARGE_SEC_CODEHigh Security, Large-sized Secure Flash
**     SSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Secure Flash
**     SSS_HIGH_MEDIUM_SEC_CODEHigh Security, Medium-sized Secure Flash
**     SSS_SMALL_FLASH_HIGH High Security, Small-sized Secure Flash
**     SSS_HIGH_SMALL_SEC_CODEHigh Security, Small-sized Secure Flash
**     SSS_LARGE_FLASH_STD  Standard Security, Large-sized Secure Flash
**     SSS_STRD_LARGE_SEC_CODEStandard Security, Large-sized Secure Flash
**     SSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Secure Flash
**     SSS_STRD_MEDIUM_SEC_CODEStandard Security, Medium-sized Secure Flash
**     SSS_SMALL_FLASH_STD  Standard Security, Small-sized Secure Flash
**     SSS_STRD_SMALL_SEC_CODEStandard Security, Small-sized Secure Flash
**     SSS_NO_FLASH         No Secure Segment
**     SSS_NO_SEC_CODE      No Secure Segment
**
**   Secure Segment Data RAM Protection:
**     RSS_LARGE_RAM        Large-sized Secure RAM
**     RSS_LARGE_SEC_RAM    Large-sized Secure RAM
**     RSS_MEDIUM_RAM       Medium-sized Secure RAM
**     RSS_MEDIUM_SEC_RAM   Medium-sized Secure RAM
**     RSS_SMALL_RAM        Small-sized Secure RAM
**     RSS_SMALL_SEC_RAM    Small-sized Secure RAM
**     RSS_NO_RAM           No Secure RAM
**     RSS_NO_SEC_RAM       No Secure RAM
**
*/

#define SWRP_WRPROTECT_ON    0xFFCE
#define SWRP_WRPROTECT_OFF   0xFFCF

#define SSS_LARGE_FLASH_HIGH 0xFFC1
#define SSS_HIGH_LARGE_SEC_CODE 0xFFC1
#define SSS_MEDIUM_FLASH_HIGH 0xFFC3
#define SSS_HIGH_MEDIUM_SEC_CODE 0xFFC3
#define SSS_SMALL_FLASH_HIGH 0xFFC5
#define SSS_HIGH_SMALL_SEC_CODE 0xFFC5
#define SSS_LARGE_FLASH_STD  0xFFC9
#define SSS_STRD_LARGE_SEC_CODE 0xFFC9
#define SSS_MEDIUM_FLASH_STD 0xFFCB
#define SSS_STRD_MEDIUM_SEC_CODE 0xFFCB
#define SSS_SMALL_FLASH_STD  0xFFCD
#define SSS_STRD_SMALL_SEC_CODE 0xFFCD
#define SSS_NO_FLASH         0xFFCF
#define SSS_NO_SEC_CODE      0xFFCF

#define RSS_LARGE_RAM        0xFF0F
#define RSS_LARGE_SEC_RAM    0xFF0F
#define RSS_MEDIUM_RAM       0xFF4F
#define RSS_MEDIUM_SEC_RAM   0xFF4F
#define RSS_SMALL_RAM        0xFF8F
#define RSS_SMALL_SEC_RAM    0xFF8F
#define RSS_NO_RAM           0xFFCF
#define RSS_NO_SEC_RAM       0xFFCF

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
**     GWRP_ON              User program memory is write-protected
**     GWRP_OFF             User program memory is not write-protected
**
**   General Segment Code Protection:
**     GSS_HIGH             High Security Code Protection is Enabled
**     GSS_STD              Standard Security Code Protection is Enabled
**     GCP_ON               Standard Security Code Protection is Enabled
**     GSS_OFF              User program memory is not code-protected
**     GCP_OFF              User program memory is not code-protected
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
**   Oscillator Mode:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Internal Fast RC (FRC) w/ PLL
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator (XT, HS, EC) w/ PLL
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV16       Internal Fast RC (FRC) divide by 16
**     FNOSC_LPRCDIVN       Internal Fast RC (FRC) with divide by N
**
**   Internal External Switch Over Mode:
**     IESO_OFF             Start-up device with user-selected oscillator source
**     IESO_ON              Start-up device with FRC, then automatically switch to user-selected oscillator source when ready
**
*/

#define FNOSC_FRC            0x0080
#define FNOSC_FRCPLL         0x0081
#define FNOSC_PRI            0x0082
#define FNOSC_PRIPLL         0x0083
#define FNOSC_SOSC           0x0084
#define FNOSC_LPRC           0x0085
#define FNOSC_FRCDIV16       0x0086
#define FNOSC_LPRCDIVN       0x0087

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
**     POSCMD_EC            EC Oscillator Mode
**     POSCMD_XT            XT Oscillator Mode
**     POSCMD_HS            HS Oscillator Mode
**     POSCMD_NONE          Primary Oscillator Disabled
**
**   OSC2 Pin Function:
**     OSCIOFNC_ON          OSC2 pin has digital I/O function
**     OSCIOFNC_OFF         OSC2 pin has clock out function
**
**   Peripheral Pin Select Configuration:
**     IOL1WAY_OFF          Allow Multiple Re-configurations
**     IOL1WAY_ON           Allow Only One Re-configuration
**
**   Clock Switching and Monitor:
**     FCKSM_CSECME         Both Clock Switching and Fail-Safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock Switching and Fail-Safe Clock Monitor are disabled
**
*/

#define POSCMD_EC            0x00E4
#define POSCMD_XT            0x00E5
#define POSCMD_HS            0x00E6
#define POSCMD_NONE          0x00E7

#define OSCIOFNC_ON          0x00E3
#define OSCIOFNC_OFF         0x00E7

#define IOL1WAY_OFF          0x00C7
#define IOL1WAY_ON           0x00E7

#define FCKSM_CSECME         0x0027
#define FCKSM_CSECMD         0x0067
#define FCKSM_CSDCMD         0x00A7

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
**   Alternate I2C  pins:
**     ALTI2C_ON            I2C mapped to ASDA1/ASCL1 pins
**     ALTI2C_OFF           I2C mapped to SDA1/SCL1 pins
**
**   Motor Control PWM Low Side Polarity bit:
**     LPOL_OFF             PWM module low side output pins have active-low output polarity
**     LPOL_ON              PWM module low side output pins have active-high output polarity
**
**   Motor Control PWM High Side Polarity bit:
**     HPOL_OFF             PWM module high side output pins have active-low output polarity
**     HPOL_ON              PWM module high side output pins have active-high output polarity
**
**   Motor Control PWM Module Pin Mode bit:
**     PWMPIN_OFF           PWM module pins controlled by PWM module at device Reset
**     PWMPIN_ON            PWM module pins controlled by PORT register at device Reset
**
*/

#define FPWRT_PWR1           0x00F0
#define FPWRT_PWR2           0x00F1
#define FPWRT_PWR4           0x00F2
#define FPWRT_PWR8           0x00F3
#define FPWRT_PWR16          0x00F4
#define FPWRT_PWR32          0x00F5
#define FPWRT_PWR64          0x00F6
#define FPWRT_PWR128         0x00F7

#define ALTI2C_ON            0x00E7
#define ALTI2C_OFF           0x00F7

#define LPOL_OFF             0x00D7
#define LPOL_ON              0x00F7

#define HPOL_OFF             0x00B7
#define HPOL_ON              0x00F7

#define PWMPIN_OFF           0x0077
#define PWMPIN_ON            0x00F7

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
**     ICS_PGD3             Communicate on PGC3/EMUC3 and PGD3/EMUD3
**     ICS_PGD2             Communicate on PGC2/EMUC2 and PGD2/EMUD2
**     ICS_PGD1             Communicate on PGC1/EMUC1 and PGD1/EMUD1
**
**   JTAG Port Enable:
**     JTAGEN_OFF           JTAG is Disabled
**     JTAGEN_ON            JTAG is Enabled
**
*/

#define ICS_PGD3             0x00E1
#define ICS_PGD2             0x00E2
#define ICS_PGD1             0x00E3

#define JTAGEN_OFF           0x00C3
#define JTAGEN_ON            0x00E3

/* Register FUID0 (0xf80010)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID0;
#define _FUID0(x) __attribute__((address(0xf80010),deprecated_definition("consider migrating to #pragma config"),section("__FUID0.sec"),space(prog))) __prog__ uint16_t _FUID0 = (x);

/*
** Only one invocation of FUID0 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID0.
** Multiple options may be combined, as shown:
**
** _FUID0( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID1 (0xf80012)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID1;
#define _FUID1(x) __attribute__((address(0xf80012),deprecated_definition("consider migrating to #pragma config"),section("__FUID1.sec"),space(prog))) __prog__ uint16_t _FUID1 = (x);

/*
** Only one invocation of FUID1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID1.
** Multiple options may be combined, as shown:
**
** _FUID1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID2 (0xf80014)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID2;
#define _FUID2(x) __attribute__((address(0xf80014),deprecated_definition("consider migrating to #pragma config"),section("__FUID2.sec"),space(prog))) __prog__ uint16_t _FUID2 = (x);

/*
** Only one invocation of FUID2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID2.
** Multiple options may be combined, as shown:
**
** _FUID2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID3 (0xf80016)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID3;
#define _FUID3(x) __attribute__((address(0xf80016),deprecated_definition("consider migrating to #pragma config"),section("__FUID3.sec"),space(prog))) __prog__ uint16_t _FUID3 = (x);

/*
** Only one invocation of FUID3 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID3.
** Multiple options may be combined, as shown:
**
** _FUID3( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/




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
#define __PROGRAM_LENGTH 0x15600

#define __FBS_BASE 0xf80000
#define __FBS_LENGTH 0x2

#define __FSS_BASE 0xf80002
#define __FSS_LENGTH 0x2

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

#define __FUID0_BASE 0xf80010
#define __FUID0_LENGTH 0x2

#define __FUID1_BASE 0xf80012
#define __FUID1_LENGTH 0x2

#define __FUID2_BASE 0xf80014
#define __FUID2_LENGTH 0x2

#define __FUID3_BASE 0xf80016
#define __FUID3_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x3800

#define __YDATA_BASE 0x2800
#define __YDATA_LENGTH 0x2800
#define __DMA_BASE 0x4000
#define __DMA_LENGTH 0x800

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x3800

#define __YDATA_BASE 0x2800
#define __YDATA_LENGTH 0x2800
#define __DMA_BASE 0x4000
#define __DMA_LENGTH 0x800

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x3800

#define __YDATA_BASE 0x2800
#define __YDATA_LENGTH 0x2800
#define __DMA_BASE 0x4000
#define __DMA_LENGTH 0x800


/*
 * PPS Remapping Pin Names
 */

#define _RPOUT_C1OUT 1
#define _RPOUT_C2OUT 2
#define _RPOUT_U1TX 3
#define _RPOUT_U1RTS 4
#define _RPOUT_U2TX 5
#define _RPOUT_U2RTS 6
#define _RPOUT_SDO1 7
#define _RPOUT_SCK1OUT 8
#define _RPOUT_SS1OUT 9
#define _RPOUT_SDO2 10
#define _RPOUT_SCK2OUT 11
#define _RPOUT_SS2OUT 12
#define _RPOUT_C1TX 12
#define _RPOUT_OC1 18
#define _RPOUT_OC2 19
#define _RPOUT_OC3 20
#define _RPOUT_OC4 21
#define _RPOUT_UPDN1 26
#define _RPOUT_UPDN2 27

#endif
