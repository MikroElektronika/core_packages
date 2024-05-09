/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24FJ48GA002 processor header
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

#ifndef __PIC24FJ48GA002__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __24FJ48GA002_H
#define __24FJ48GA002_H

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
typedef struct tagCORCONBITS {
  uint16_t :2;
  uint16_t PSV:1;
  uint16_t IPL3:1;
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

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
  uint16_t :10;
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
  uint16_t :1;
  uint16_t IC2IF:1;
  uint16_t OC2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
  uint16_t SPF1IF:1;
  uint16_t SPI1IF:1;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t AD1IF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  uint16_t SI2C1IF:1;
  uint16_t MI2C1IF:1;
  uint16_t CMIF:1;
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
  uint16_t SPF2IF:1;
  uint16_t SPI2IF:1;
  uint16_t :3;
  uint16_t IC3IF:1;
  uint16_t IC4IF:1;
  uint16_t IC5IF:1;
  uint16_t :1;
  uint16_t OC5IF:1;
  uint16_t :3;
  uint16_t PMPIF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  uint16_t :1;
  uint16_t SI2C2IF:1;
  uint16_t MI2C2IF:1;
  uint16_t :11;
  uint16_t RTCIF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile uint16_t IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  uint16_t :1;
  uint16_t U1ERIF:1;
  uint16_t U2ERIF:1;
  uint16_t CRCIF:1;
  uint16_t :4;
  uint16_t LVDIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

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
  uint16_t SPF1IE:1;
  uint16_t SPI1IE:1;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t AD1IE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  uint16_t SI2C1IE:1;
  uint16_t MI2C1IE:1;
  uint16_t CMIE:1;
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
  uint16_t SPF2IE:1;
  uint16_t SPI2IE:1;
  uint16_t :3;
  uint16_t IC3IE:1;
  uint16_t IC4IE:1;
  uint16_t IC5IE:1;
  uint16_t :1;
  uint16_t OC5IE:1;
  uint16_t :3;
  uint16_t PMPIE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  uint16_t :1;
  uint16_t SI2C2IE:1;
  uint16_t MI2C2IE:1;
  uint16_t :11;
  uint16_t RTCIE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile uint16_t IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  uint16_t :1;
  uint16_t U1ERIE:1;
  uint16_t U2ERIE:1;
  uint16_t CRCIE:1;
  uint16_t :4;
  uint16_t LVDIE:1;
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
      uint16_t SPF1IP:3;
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
      uint16_t SPF1IP0:1;
      uint16_t SPF1IP1:1;
      uint16_t SPF1IP2:1;
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
    };
    struct {
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t AD1IP0:1;
      uint16_t AD1IP1:1;
      uint16_t AD1IP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile uint16_t IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      uint16_t SI2C1P:3;
      uint16_t :1;
      uint16_t MI2C1P:3;
      uint16_t :1;
      uint16_t CMIP:3;
      uint16_t :1;
      uint16_t CNIP:3;
    };
    struct {
      uint16_t SI2C1IP:3;
      uint16_t :1;
      uint16_t MI2C1IP:3;
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
    struct {
      uint16_t SI2C1P0:1;
      uint16_t SI2C1P1:1;
      uint16_t SI2C1P2:1;
      uint16_t :1;
      uint16_t MI2C1P0:1;
      uint16_t MI2C1P1:1;
      uint16_t MI2C1P2:1;
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
      uint16_t SPF2IP:3;
      uint16_t :1;
      uint16_t SPI2IP:3;
    };
    struct {
      uint16_t SPF2IP0:1;
      uint16_t SPF2IP1:1;
      uint16_t SPF2IP2:1;
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
      uint16_t :1;
      uint16_t IC5IP:3;
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
      uint16_t :1;
      uint16_t IC5IP0:1;
      uint16_t IC5IP1:1;
      uint16_t IC5IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC10 IPC10
extern volatile uint16_t IPC10 __attribute__((__sfr__));
__extension__ typedef struct tagIPC10BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t OC5IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t OC5IP0:1;
      uint16_t OC5IP1:1;
      uint16_t OC5IP2:1;
    };
  };
} IPC10BITS;
extern volatile IPC10BITS IPC10bits __attribute__((__sfr__));

#define IPC11 IPC11
extern volatile uint16_t IPC11 __attribute__((__sfr__));
__extension__ typedef struct tagIPC11BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PMPIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PMPIP0:1;
      uint16_t PMPIP1:1;
      uint16_t PMPIP2:1;
    };
  };
} IPC11BITS;
extern volatile IPC11BITS IPC11bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile uint16_t IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t SI2C2P:3;
      uint16_t :1;
      uint16_t MI2C2P:3;
    };
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
    struct {
      uint16_t :4;
      uint16_t SI2C2P0:1;
      uint16_t SI2C2P1:1;
      uint16_t SI2C2P2:1;
      uint16_t :1;
      uint16_t MI2C2P0:1;
      uint16_t MI2C2P1:1;
      uint16_t MI2C2P2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC15 IPC15
extern volatile uint16_t IPC15 __attribute__((__sfr__));
__extension__ typedef struct tagIPC15BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RTCIP:3;
    };
    struct {
      uint16_t :8;
      uint16_t RTCIP0:1;
      uint16_t RTCIP1:1;
      uint16_t RTCIP2:1;
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
      uint16_t U1ERIP:3;
      uint16_t :1;
      uint16_t U2ERIP:3;
      uint16_t :1;
      uint16_t CRCIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t U1ERIP0:1;
      uint16_t U1ERIP1:1;
      uint16_t U1ERIP2:1;
      uint16_t :1;
      uint16_t U2ERIP0:1;
      uint16_t U2ERIP1:1;
      uint16_t U2ERIP2:1;
      uint16_t :1;
      uint16_t CRCIP0:1;
      uint16_t CRCIP1:1;
      uint16_t CRCIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile uint16_t IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      uint16_t LVDIP:3;
    };
    struct {
      uint16_t LVDIP0:1;
      uint16_t LVDIP1:1;
      uint16_t LVDIP2:1;
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
      uint16_t :1;
      uint16_t VHOLD:1;
      uint16_t :1;
      uint16_t CPUIRQ:1;
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


#define IC5 ACC5
extern volatile IC IC5 __attribute__((__sfr__));

#define IC5BUF IC5BUF
extern volatile uint16_t IC5BUF __attribute__((__sfr__));
#define IC5CON IC5CON
extern volatile uint16_t IC5CON __attribute__((__sfr__));
__extension__ typedef struct tagIC5CONBITS {
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
} IC5CONBITS;
extern volatile IC5CONBITS IC5CONbits __attribute__((__sfr__));


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


#define OC5RS OC5RS
extern volatile uint16_t OC5RS __attribute__((__sfr__));
#define OC5R OC5R
extern volatile uint16_t OC5R __attribute__((__sfr__));
#define OC5CON OC5CON
extern volatile uint16_t OC5CON __attribute__((__sfr__));
__extension__ typedef struct tagOC5CONBITS {
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
} OC5CONBITS;
extern volatile OC5CONBITS OC5CONbits __attribute__((__sfr__));

#define I2C1RCV I2C1RCV
extern volatile uint16_t I2C1RCV __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile uint16_t I2C1TRN __attribute__((__sfr__));
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

#define I2C1STAT I2C1STAT
extern volatile uint16_t I2C1STAT __attribute__((__sfr__));
__extension__ typedef struct tagI2C1STATBITS {
  union {
    struct {
      uint16_t TBF:1;
      uint16_t RBF:1;
      uint16_t R_NOT_W:1;
      uint16_t S:1;
      uint16_t P:1;
      uint16_t D_NOT_A:1;
      uint16_t I2COV:1;
      uint16_t IWCOL:1;
      uint16_t ADD10:1;
      uint16_t GCSTAT:1;
      uint16_t BCL:1;
      uint16_t :3;
      uint16_t TRSTAT:1;
      uint16_t ACKSTAT:1;
    };
    struct {
      uint16_t :2;
      uint16_t R_W:1;
      uint16_t :2;
      uint16_t D_A:1;
    };
  };
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile uint16_t I2C1ADD __attribute__((__sfr__));
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
__extension__ typedef struct tagI2C2STATBITS {
  union {
    struct {
      uint16_t TBF:1;
      uint16_t RBF:1;
      uint16_t R_NOT_W:1;
      uint16_t S:1;
      uint16_t P:1;
      uint16_t D_NOT_A:1;
      uint16_t I2COV:1;
      uint16_t IWCOL:1;
      uint16_t ADD10:1;
      uint16_t GCSTAT:1;
      uint16_t BCL:1;
      uint16_t :3;
      uint16_t TRSTAT:1;
      uint16_t ACKSTAT:1;
    };
    struct {
      uint16_t :2;
      uint16_t R_W:1;
      uint16_t :2;
      uint16_t D_A:1;
    };
  };
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
      uint16_t RXINV:1;
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
#define U1RXREG U1RXREG
extern volatile uint16_t U1RXREG __attribute__((__sfr__));
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
      uint16_t RXINV:1;
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
#define U2RXREG U2RXREG
extern volatile uint16_t U2RXREG __attribute__((__sfr__));
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
__extension__ typedef struct tagSPI1STATBITS {
  union {
    struct {
      uint16_t SPIRBF:1;
      uint16_t SPITBF:1;
      uint16_t SISEL:3;
      uint16_t SRXMPT:1;
      uint16_t SPIROV:1;
      uint16_t SRMPT:1;
      uint16_t SPIBEC:3;
      uint16_t :2;
      uint16_t SPISIDL:1;
      uint16_t :1;
      uint16_t SPIEN:1;
    };
    struct {
      uint16_t :2;
      uint16_t SISEL0:1;
      uint16_t SISEL1:1;
      uint16_t SISEL2:1;
      uint16_t :3;
      uint16_t SPIBEC0:1;
      uint16_t SPIBEC1:1;
      uint16_t SPIBEC2:1;
    };
  };
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
  uint16_t SPIBEN:1;
  uint16_t SPIFE:1;
  uint16_t :11;
  uint16_t SPIFPOL:1;
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
__extension__ typedef struct tagSPI2STATBITS {
  union {
    struct {
      uint16_t SPIRBF:1;
      uint16_t SPITBF:1;
      uint16_t SISEL:3;
      uint16_t SRXMPT:1;
      uint16_t SPIROV:1;
      uint16_t SRMPT:1;
      uint16_t SPIBEC:3;
      uint16_t :2;
      uint16_t SPISIDL:1;
      uint16_t :1;
      uint16_t SPIEN:1;
    };
    struct {
      uint16_t :2;
      uint16_t SISEL0:1;
      uint16_t SISEL1:1;
      uint16_t SISEL2:1;
      uint16_t :3;
      uint16_t SPIBEC0:1;
      uint16_t SPIBEC1:1;
      uint16_t SPIBEC2:1;
    };
  };
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
  uint16_t SPIBEN:1;
  uint16_t SPIFE:1;
  uint16_t :11;
  uint16_t SPIFPOL:1;
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
  uint16_t ODA0:1;
  uint16_t ODA1:1;
  uint16_t ODA2:1;
  uint16_t ODA3:1;
  uint16_t ODA4:1;
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
  uint16_t ODB0:1;
  uint16_t ODB1:1;
  uint16_t ODB2:1;
  uint16_t ODB3:1;
  uint16_t ODB4:1;
  uint16_t ODB5:1;
  uint16_t ODB6:1;
  uint16_t ODB7:1;
  uint16_t ODB8:1;
  uint16_t ODB9:1;
  uint16_t ODB10:1;
  uint16_t ODB11:1;
  uint16_t ODB12:1;
  uint16_t ODB13:1;
  uint16_t ODB14:1;
  uint16_t ODB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile uint16_t PADCFG1 __attribute__((__sfr__));
__extension__ typedef struct tagPADCFG1BITS {
  union {
    struct {
      uint16_t PMPTTL:1;
      uint16_t RTSECSEL:1;
    };
    struct {
      uint16_t :1;
      uint16_t RTSECSEL0:1;
    };
  };
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

#define ADC1BUF0 ADC1BUF0
extern volatile uint16_t ADC1BUF0 __attribute__((__sfr__));
#define ADC1BUF1 ADC1BUF1
extern volatile uint16_t ADC1BUF1 __attribute__((__sfr__));
#define ADC1BUF2 ADC1BUF2
extern volatile uint16_t ADC1BUF2 __attribute__((__sfr__));
#define ADC1BUF3 ADC1BUF3
extern volatile uint16_t ADC1BUF3 __attribute__((__sfr__));
#define ADC1BUF4 ADC1BUF4
extern volatile uint16_t ADC1BUF4 __attribute__((__sfr__));
#define ADC1BUF5 ADC1BUF5
extern volatile uint16_t ADC1BUF5 __attribute__((__sfr__));
#define ADC1BUF6 ADC1BUF6
extern volatile uint16_t ADC1BUF6 __attribute__((__sfr__));
#define ADC1BUF7 ADC1BUF7
extern volatile uint16_t ADC1BUF7 __attribute__((__sfr__));
#define ADC1BUF8 ADC1BUF8
extern volatile uint16_t ADC1BUF8 __attribute__((__sfr__));
#define ADC1BUF9 ADC1BUF9
extern volatile uint16_t ADC1BUF9 __attribute__((__sfr__));
#define ADC1BUFA ADC1BUFA
extern volatile uint16_t ADC1BUFA __attribute__((__sfr__));
#define ADC1BUFB ADC1BUFB
extern volatile uint16_t ADC1BUFB __attribute__((__sfr__));
#define ADC1BUFC ADC1BUFC
extern volatile uint16_t ADC1BUFC __attribute__((__sfr__));
#define ADC1BUFD ADC1BUFD
extern volatile uint16_t ADC1BUFD __attribute__((__sfr__));
#define ADC1BUFE ADC1BUFE
extern volatile uint16_t ADC1BUFE __attribute__((__sfr__));
#define ADC1BUFF ADC1BUFF
extern volatile uint16_t ADC1BUFF __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile uint16_t AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      uint16_t DONE:1;
      uint16_t SAMP:1;
      uint16_t ASAM:1;
      uint16_t :2;
      uint16_t SSRC:3;
      uint16_t FORM:2;
      uint16_t :3;
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
      uint16_t :2;
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
      uint16_t :7;
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

#define AD1CHS AD1CHS
extern volatile uint16_t AD1CHS __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHSBITS {
  union {
    struct {
      uint16_t CH0SA:4;
      uint16_t :3;
      uint16_t CH0NA:1;
      uint16_t CH0SB:4;
      uint16_t :3;
      uint16_t CH0NB:1;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t :4;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
    };
  };
} AD1CHSBITS;
extern volatile AD1CHSBITS AD1CHSbits __attribute__((__sfr__));

#define AD1PCFG AD1PCFG
extern volatile uint16_t AD1PCFG __attribute__((__sfr__));
typedef struct tagAD1PCFGBITS {
  uint16_t PCFG0:1;
  uint16_t PCFG1:1;
  uint16_t PCFG2:1;
  uint16_t PCFG3:1;
  uint16_t PCFG4:1;
  uint16_t PCFG5:1;
  uint16_t :3;
  uint16_t PCFG9:1;
  uint16_t PCFG10:1;
  uint16_t PCFG11:1;
  uint16_t PCFG12:1;
  uint16_t :2;
  uint16_t PCFG15:1;
} AD1PCFGBITS;
extern volatile AD1PCFGBITS AD1PCFGbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile uint16_t AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  uint16_t CSSL0:1;
  uint16_t CSSL1:1;
  uint16_t CSSL2:1;
  uint16_t CSSL3:1;
  uint16_t CSSL4:1;
  uint16_t CSSL5:1;
  uint16_t :3;
  uint16_t CSSL9:1;
  uint16_t CSSL10:1;
  uint16_t CSSL11:1;
  uint16_t CSSL12:1;
  uint16_t :2;
  uint16_t CSSL15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

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
      uint16_t ADDR:2;
      uint16_t :12;
      uint16_t CS:1;
    };
    struct {
      uint16_t ADDR0:1;
      uint16_t ADDR1:1;
      uint16_t :12;
      uint16_t CS1:1;
    };
  };
} PMADDRBITS;
extern volatile PMADDRBITS PMADDRbits __attribute__((__sfr__));

#define PMDOUT1 PMDOUT1
extern volatile uint16_t PMDOUT1 __attribute__((__sfr__));
__extension__ typedef struct tagPMDOUT1BITS {
  union {
    struct {
      uint16_t ADDR:2;
      uint16_t :12;
      uint16_t CS:1;
    };
    struct {
      uint16_t ADDR0:1;
      uint16_t ADDR1:1;
      uint16_t :12;
      uint16_t CS1:1;
    };
  };
} PMDOUT1BITS;
extern volatile PMDOUT1BITS PMDOUT1bits __attribute__((__sfr__));

#define PMDOUT2 PMDOUT2
extern volatile uint16_t PMDOUT2 __attribute__((__sfr__));
#define PMDIN1 PMDIN1
extern volatile uint16_t PMDIN1 __attribute__((__sfr__));
#define PMDIN2 PMDIN2
extern volatile uint16_t PMDIN2 __attribute__((__sfr__));
#define PMAEN PMAEN
extern volatile uint16_t PMAEN __attribute__((__sfr__));
typedef struct tagPMAENBITS {
  uint16_t PTEN0:1;
  uint16_t PTEN1:1;
  uint16_t :12;
  uint16_t PTEN14:1;
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
typedef struct tagCRCXORBITS {
  uint16_t :1;
  uint16_t X1:1;
  uint16_t X2:1;
  uint16_t X3:1;
  uint16_t X4:1;
  uint16_t X5:1;
  uint16_t X6:1;
  uint16_t X7:1;
  uint16_t X8:1;
  uint16_t X9:1;
  uint16_t X10:1;
  uint16_t X11:1;
  uint16_t X12:1;
  uint16_t X13:1;
  uint16_t X14:1;
  uint16_t X15:1;
} CRCXORBITS;
extern volatile CRCXORBITS CRCXORbits __attribute__((__sfr__));

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

#define RPINR8 RPINR8
extern volatile uint16_t RPINR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR8BITS {
  union {
    struct {
      uint16_t IC3R:5;
      uint16_t :3;
      uint16_t IC4R:5;
    };
    struct {
      uint16_t IC3R0:1;
      uint16_t IC3R1:1;
      uint16_t IC3R2:1;
      uint16_t IC3R3:1;
      uint16_t IC3R4:1;
      uint16_t :3;
      uint16_t IC4R0:1;
      uint16_t IC4R1:1;
      uint16_t IC4R2:1;
      uint16_t IC4R3:1;
      uint16_t IC4R4:1;
    };
  };
} RPINR8BITS;
extern volatile RPINR8BITS RPINR8bits __attribute__((__sfr__));

#define RPINR9 RPINR9
extern volatile uint16_t RPINR9 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR9BITS {
  union {
    struct {
      uint16_t IC5R:5;
    };
    struct {
      uint16_t IC5R0:1;
      uint16_t IC5R1:1;
      uint16_t IC5R2:1;
      uint16_t IC5R3:1;
      uint16_t IC5R4:1;
    };
  };
} RPINR9BITS;
extern volatile RPINR9BITS RPINR9bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile uint16_t RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      uint16_t OCFAR:5;
      uint16_t :3;
      uint16_t OCFBR:5;
    };
    struct {
      uint16_t OCFAR0:1;
      uint16_t OCFAR1:1;
      uint16_t OCFAR2:1;
      uint16_t OCFAR3:1;
      uint16_t OCFAR4:1;
      uint16_t :3;
      uint16_t OCFBR0:1;
      uint16_t OCFBR1:1;
      uint16_t OCFBR2:1;
      uint16_t OCFBR3:1;
      uint16_t OCFBR4:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

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

#define RCON RCON
extern volatile uint16_t RCON __attribute__((__sfr__));
__extension__ typedef struct tagRCONBITS {
  union {
    struct {
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
    };
    struct {
      uint16_t :8;
      uint16_t PMSLP:1;
    };
  };
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

#define OSCCON OSCCON
extern volatile uint16_t OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      uint16_t OSWEN:1;
      uint16_t SOSCEN:1;
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
      uint16_t :8;
      uint16_t RCDIV:3;
      uint16_t DOZEN:1;
      uint16_t DOZE:3;
      uint16_t ROI:1;
    };
    struct {
      uint16_t :8;
      uint16_t RCDIV0:1;
      uint16_t RCDIV1:1;
      uint16_t RCDIV2:1;
      uint16_t :1;
      uint16_t DOZE0:1;
      uint16_t DOZE1:1;
      uint16_t DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

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
    struct {
      uint16_t PROGOP:4;
    };
    struct {
      uint16_t PROGOP0:1;
      uint16_t PROGOP1:1;
      uint16_t PROGOP2:1;
      uint16_t PROGOP3:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile uint16_t NVMKEY __attribute__((__sfr__));
#define PMD1 PMD1
extern volatile uint16_t PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  uint16_t ADC1MD:1;
  uint16_t :2;
  uint16_t SPI1MD:1;
  uint16_t SPI2MD:1;
  uint16_t U1MD:1;
  uint16_t U2MD:1;
  uint16_t I2C1MD:1;
  uint16_t :3;
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
  uint16_t OC5MD:1;
  uint16_t :3;
  uint16_t IC1MD:1;
  uint16_t IC2MD:1;
  uint16_t IC3MD:1;
  uint16_t IC4MD:1;
  uint16_t IC5MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  uint16_t :1;
  uint16_t I2C2MD:1;
  uint16_t :5;
  uint16_t CRCPMD:1;
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
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3

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
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPF1IF IFS0bits.SPF1IF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CMIF IFS1bits.CMIF
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
#define _SPF2IF IFS2bits.SPF2IF
#define _SPI2IF IFS2bits.SPI2IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF
#define _IC5IF IFS2bits.IC5IF
#define _OC5IF IFS2bits.OC5IF
#define _PMPIF IFS2bits.PMPIF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _RTCIF IFS3bits.RTCIF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _U2ERIF IFS4bits.U2ERIF
#define _CRCIF IFS4bits.CRCIF
#define _LVDIF IFS4bits.LVDIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPF1IE IEC0bits.SPF1IE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CMIE IEC1bits.CMIE
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
#define _SPF2IE IEC2bits.SPF2IE
#define _SPI2IE IEC2bits.SPI2IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE
#define _IC5IE IEC2bits.IC5IE
#define _OC5IE IEC2bits.OC5IE
#define _PMPIE IEC2bits.PMPIE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _RTCIE IEC3bits.RTCIE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _U2ERIE IEC4bits.U2ERIE
#define _CRCIE IEC4bits.CRCIE
#define _LVDIE IEC4bits.LVDIE

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
#define _SPF1IP IPC2bits.SPF1IP
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _SPF1IP0 IPC2bits.SPF1IP0
#define _SPF1IP1 IPC2bits.SPF1IP1
#define _SPF1IP2 IPC2bits.SPF1IP2
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _AD1IP IPC3bits.AD1IP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2

/* IPC4 */
#define _SI2C1P IPC4bits.SI2C1P
#define _MI2C1P IPC4bits.MI2C1P
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
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
#define _SI2C1P0 IPC4bits.SI2C1P0
#define _SI2C1P1 IPC4bits.SI2C1P1
#define _SI2C1P2 IPC4bits.SI2C1P2
#define _MI2C1P0 IPC4bits.MI2C1P0
#define _MI2C1P1 IPC4bits.MI2C1P1
#define _MI2C1P2 IPC4bits.MI2C1P2

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
#define _SPF2IP IPC8bits.SPF2IP
#define _SPI2IP IPC8bits.SPI2IP
#define _SPF2IP0 IPC8bits.SPF2IP0
#define _SPF2IP1 IPC8bits.SPF2IP1
#define _SPF2IP2 IPC8bits.SPF2IP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2

/* IPC9 */
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC5IP IPC9bits.IC5IP
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2
#define _IC5IP0 IPC9bits.IC5IP0
#define _IC5IP1 IPC9bits.IC5IP1
#define _IC5IP2 IPC9bits.IC5IP2

/* IPC10 */
#define _OC5IP IPC10bits.OC5IP
#define _OC5IP0 IPC10bits.OC5IP0
#define _OC5IP1 IPC10bits.OC5IP1
#define _OC5IP2 IPC10bits.OC5IP2

/* IPC11 */
#define _PMPIP IPC11bits.PMPIP
#define _PMPIP0 IPC11bits.PMPIP0
#define _PMPIP1 IPC11bits.PMPIP1
#define _PMPIP2 IPC11bits.PMPIP2

/* IPC12 */
#define _SI2C2P IPC12bits.SI2C2P
#define _MI2C2P IPC12bits.MI2C2P
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2
#define _SI2C2P0 IPC12bits.SI2C2P0
#define _SI2C2P1 IPC12bits.SI2C2P1
#define _SI2C2P2 IPC12bits.SI2C2P2
#define _MI2C2P0 IPC12bits.MI2C2P0
#define _MI2C2P1 IPC12bits.MI2C2P1
#define _MI2C2P2 IPC12bits.MI2C2P2

/* IPC15 */
#define _RTCIP IPC15bits.RTCIP
#define _RTCIP0 IPC15bits.RTCIP0
#define _RTCIP1 IPC15bits.RTCIP1
#define _RTCIP2 IPC15bits.RTCIP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
#define _U2ERIP IPC16bits.U2ERIP
#define _CRCIP IPC16bits.CRCIP
#define _U1ERIP0 IPC16bits.U1ERIP0
#define _U1ERIP1 IPC16bits.U1ERIP1
#define _U1ERIP2 IPC16bits.U1ERIP2
#define _U2ERIP0 IPC16bits.U2ERIP0
#define _U2ERIP1 IPC16bits.U2ERIP1
#define _U2ERIP2 IPC16bits.U2ERIP2
#define _CRCIP0 IPC16bits.CRCIP0
#define _CRCIP1 IPC16bits.CRCIP1
#define _CRCIP2 IPC16bits.CRCIP2

/* IPC18 */
#define _LVDIP IPC18bits.LVDIP
#define _LVDIP0 IPC18bits.LVDIP0
#define _LVDIP1 IPC18bits.LVDIP1
#define _LVDIP2 IPC18bits.LVDIP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VHOLD INTTREGbits.VHOLD
#define _CPUIRQ INTTREGbits.CPUIRQ
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

/* IC5CON */
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

/* OC5CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

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
#define _R_NOT_W I2C1STATbits.R_NOT_W
#define _S I2C1STATbits.S
#define _P I2C1STATbits.P
#define _D_NOT_A I2C1STATbits.D_NOT_A
#define _I2COV I2C1STATbits.I2COV
#define _IWCOL I2C1STATbits.IWCOL
#define _ADD10 I2C1STATbits.ADD10
#define _GCSTAT I2C1STATbits.GCSTAT
#define _BCL I2C1STATbits.BCL
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT
#define _R_W I2C1STATbits.R_W
#define _D_A I2C1STATbits.D_A

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
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _I2COV cannot be defined because it is used by more than one SFR */
/* Bitname _IWCOL cannot be defined because it is used by more than one SFR */
/* Bitname _ADD10 cannot be defined because it is used by more than one SFR */
/* Bitname _GCSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _TRSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _BRGH U1MODEbits.BRGH
#define _RXINV U1MODEbits.RXINV
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

/* U2MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
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

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SISEL SPI1STATbits.SISEL
#define _SRXMPT SPI1STATbits.SRXMPT
#define _SPIROV SPI1STATbits.SPIROV
#define _SRMPT SPI1STATbits.SRMPT
#define _SPIBEC SPI1STATbits.SPIBEC
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN
#define _SISEL0 SPI1STATbits.SISEL0
#define _SISEL1 SPI1STATbits.SISEL1
#define _SISEL2 SPI1STATbits.SISEL2
#define _SPIBEC0 SPI1STATbits.SPIBEC0
#define _SPIBEC1 SPI1STATbits.SPIBEC1
#define _SPIBEC2 SPI1STATbits.SPIBEC2

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
#define _SPIBEN SPI1CON2bits.SPIBEN
#define _SPIFE SPI1CON2bits.SPIFE
#define _SPIFPOL SPI1CON2bits.SPIFPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL cannot be defined because it is used by more than one SFR */
/* Bitname _SRXMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SRMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC2 cannot be defined because it is used by more than one SFR */

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
/* Bitname _SPIBEN cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFE cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFPOL cannot be defined because it is used by more than one SFR */
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
#define _ODA0 ODCAbits.ODA0
#define _ODA1 ODCAbits.ODA1
#define _ODA2 ODCAbits.ODA2
#define _ODA3 ODCAbits.ODA3
#define _ODA4 ODCAbits.ODA4

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
#define _ODB0 ODCBbits.ODB0
#define _ODB1 ODCBbits.ODB1
#define _ODB2 ODCBbits.ODB2
#define _ODB3 ODCBbits.ODB3
#define _ODB4 ODCBbits.ODB4
#define _ODB5 ODCBbits.ODB5
#define _ODB6 ODCBbits.ODB6
#define _ODB7 ODCBbits.ODB7
#define _ODB8 ODCBbits.ODB8
#define _ODB9 ODCBbits.ODB9
#define _ODB10 ODCBbits.ODB10
#define _ODB11 ODCBbits.ODB11
#define _ODB12 ODCBbits.ODB12
#define _ODB13 ODCBbits.ODB13
#define _ODB14 ODCBbits.ODB14
#define _ODB15 ODCBbits.ODB15

/* PADCFG1 */
#define _PMPTTL PADCFG1bits.PMPTTL
#define _RTSECSEL PADCFG1bits.RTSECSEL
#define _RTSECSEL0 PADCFG1bits.RTSECSEL0

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
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
#define _CSCNA AD1CON2bits.CSCNA
#define _VCFG AD1CON2bits.VCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
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

/* AD1CHS */
#define _CH0SA AD1CHSbits.CH0SA
#define _CH0NA AD1CHSbits.CH0NA
#define _CH0SB AD1CHSbits.CH0SB
#define _CH0NB AD1CHSbits.CH0NB
#define _CH0SA0 AD1CHSbits.CH0SA0
#define _CH0SA1 AD1CHSbits.CH0SA1
#define _CH0SA2 AD1CHSbits.CH0SA2
#define _CH0SA3 AD1CHSbits.CH0SA3
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3

/* AD1PCFG */
#define _PCFG0 AD1PCFGbits.PCFG0
#define _PCFG1 AD1PCFGbits.PCFG1
#define _PCFG2 AD1PCFGbits.PCFG2
#define _PCFG3 AD1PCFGbits.PCFG3
#define _PCFG4 AD1PCFGbits.PCFG4
#define _PCFG5 AD1PCFGbits.PCFG5
#define _PCFG9 AD1PCFGbits.PCFG9
#define _PCFG10 AD1PCFGbits.PCFG10
#define _PCFG11 AD1PCFGbits.PCFG11
#define _PCFG12 AD1PCFGbits.PCFG12
#define _PCFG15 AD1PCFGbits.PCFG15

/* AD1CSSL */
#define _CSSL0 AD1CSSLbits.CSSL0
#define _CSSL1 AD1CSSLbits.CSSL1
#define _CSSL2 AD1CSSLbits.CSSL2
#define _CSSL3 AD1CSSLbits.CSSL3
#define _CSSL4 AD1CSSLbits.CSSL4
#define _CSSL5 AD1CSSLbits.CSSL5
#define _CSSL9 AD1CSSLbits.CSSL9
#define _CSSL10 AD1CSSLbits.CSSL10
#define _CSSL11 AD1CSSLbits.CSSL11
#define _CSSL12 AD1CSSLbits.CSSL12
#define _CSSL15 AD1CSSLbits.CSSL15

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
#define _MODE PMMODEbits.MODE
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
#define _MODE0 PMMODEbits.MODE0
#define _MODE1 PMMODEbits.MODE1
#define _INCM0 PMMODEbits.INCM0
#define _INCM1 PMMODEbits.INCM1
#define _IRQM0 PMMODEbits.IRQM0
#define _IRQM1 PMMODEbits.IRQM1

/* PMADDR */
#define _ADDR PMADDRbits.ADDR
#define _CS PMADDRbits.CS
#define _ADDR0 PMADDRbits.ADDR0
#define _ADDR1 PMADDRbits.ADDR1
#define _CS1 PMADDRbits.CS1

/* PMAEN */
#define _PTEN0 PMAENbits.PTEN0
#define _PTEN1 PMAENbits.PTEN1
#define _PTEN14 PMAENbits.PTEN14

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
#define _CSIDL CRCCONbits.CSIDL
#define _PLEN0 CRCCONbits.PLEN0
#define _PLEN1 CRCCONbits.PLEN1
#define _PLEN2 CRCCONbits.PLEN2
#define _PLEN3 CRCCONbits.PLEN3
#define _VWORD0 CRCCONbits.VWORD0
#define _VWORD1 CRCCONbits.VWORD1
#define _VWORD2 CRCCONbits.VWORD2
#define _VWORD3 CRCCONbits.VWORD3
#define _VWORD4 CRCCONbits.VWORD4

/* CRCXOR */
#define _X1 CRCXORbits.X1
#define _X2 CRCXORbits.X2
#define _X3 CRCXORbits.X3
#define _X4 CRCXORbits.X4
#define _X5 CRCXORbits.X5
#define _X6 CRCXORbits.X6
#define _X7 CRCXORbits.X7
#define _X8 CRCXORbits.X8
#define _X9 CRCXORbits.X9
#define _X10 CRCXORbits.X10
#define _X11 CRCXORbits.X11
#define _X12 CRCXORbits.X12
#define _X13 CRCXORbits.X13
#define _X14 CRCXORbits.X14
#define _X15 CRCXORbits.X15

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

/* RPINR8 */
#define _IC3R RPINR8bits.IC3R
#define _IC4R RPINR8bits.IC4R
#define _IC3R0 RPINR8bits.IC3R0
#define _IC3R1 RPINR8bits.IC3R1
#define _IC3R2 RPINR8bits.IC3R2
#define _IC3R3 RPINR8bits.IC3R3
#define _IC3R4 RPINR8bits.IC3R4
#define _IC4R0 RPINR8bits.IC4R0
#define _IC4R1 RPINR8bits.IC4R1
#define _IC4R2 RPINR8bits.IC4R2
#define _IC4R3 RPINR8bits.IC4R3
#define _IC4R4 RPINR8bits.IC4R4

/* RPINR9 */
#define _IC5R RPINR9bits.IC5R
#define _IC5R0 RPINR9bits.IC5R0
#define _IC5R1 RPINR9bits.IC5R1
#define _IC5R2 RPINR9bits.IC5R2
#define _IC5R3 RPINR9bits.IC5R3
#define _IC5R4 RPINR9bits.IC5R4

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFBR RPINR11bits.OCFBR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4
#define _OCFBR0 RPINR11bits.OCFBR0
#define _OCFBR1 RPINR11bits.OCFBR1
#define _OCFBR2 RPINR11bits.OCFBR2
#define _OCFBR3 RPINR11bits.OCFBR3
#define _OCFBR4 RPINR11bits.OCFBR4

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
#define _PMSLP RCONbits.PMSLP

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _SOSCEN OSCCONbits.SOSCEN
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
#define _RCDIV CLKDIVbits.RCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _RCDIV0 CLKDIVbits.RCDIV0
#define _RCDIV1 CLKDIVbits.RCDIV1
#define _RCDIV2 CLKDIVbits.RCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

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
#define _PROGOP NVMCONbits.PROGOP
#define _PROGOP0 NVMCONbits.PROGOP0
#define _PROGOP1 NVMCONbits.PROGOP1
#define _PROGOP2 NVMCONbits.PROGOP2
#define _PROGOP3 NVMCONbits.PROGOP3

/* PMD1 */
#define _ADC1MD PMD1bits.ADC1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
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
#define _OC5MD PMD2bits.OC5MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD
#define _IC5MD PMD2bits.IC5MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _CRCPMD PMD3bits.CRCPMD
#define _PMPMD PMD3bits.PMPMD
#define _RTCCMD PMD3bits.RTCCMD
#define _CMPMD PMD3bits.CMPMD


/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array that is     */
/* aligned to a 32 byte address:                              */
/*                                                            */
/* int _BSS(32) buf[16];                                      */
/*                                                            */
/* To declare an initialized array without special            */
/* alignment:                                                 */
/*                                                            */
/* int _DATA(2) table1[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};     */
/*                                                            */
#define _BSS(N)    __attribute__((aligned(N)))
#define _DATA(N)   __attribute__((aligned(N)))

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

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_PSV_POSITION                     0x00000002
#define _CORCON_PSV_MASK                         0x00000004
#define _CORCON_PSV_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

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

#define _IFS0_SPF1IF_POSITION                    0x00000009
#define _IFS0_SPF1IF_MASK                        0x00000200
#define _IFS0_SPF1IF_LENGTH                      0x00000001

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

#define _IFS2_SPF2IF_POSITION                    0x00000000
#define _IFS2_SPF2IF_MASK                        0x00000001
#define _IFS2_SPF2IF_LENGTH                      0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS2_IC4IF_POSITION                     0x00000006
#define _IFS2_IC4IF_MASK                         0x00000040
#define _IFS2_IC4IF_LENGTH                       0x00000001

#define _IFS2_IC5IF_POSITION                     0x00000007
#define _IFS2_IC5IF_MASK                         0x00000080
#define _IFS2_IC5IF_LENGTH                       0x00000001

#define _IFS2_OC5IF_POSITION                     0x00000009
#define _IFS2_OC5IF_MASK                         0x00000200
#define _IFS2_OC5IF_LENGTH                       0x00000001

#define _IFS2_PMPIF_POSITION                     0x0000000D
#define _IFS2_PMPIF_MASK                         0x00002000
#define _IFS2_PMPIF_LENGTH                       0x00000001

#define _IFS3_SI2C2IF_POSITION                   0x00000001
#define _IFS3_SI2C2IF_MASK                       0x00000002
#define _IFS3_SI2C2IF_LENGTH                     0x00000001

#define _IFS3_MI2C2IF_POSITION                   0x00000002
#define _IFS3_MI2C2IF_MASK                       0x00000004
#define _IFS3_MI2C2IF_LENGTH                     0x00000001

#define _IFS3_RTCIF_POSITION                     0x0000000E
#define _IFS3_RTCIF_MASK                         0x00004000
#define _IFS3_RTCIF_LENGTH                       0x00000001

#define _IFS4_U1ERIF_POSITION                    0x00000001
#define _IFS4_U1ERIF_MASK                        0x00000002
#define _IFS4_U1ERIF_LENGTH                      0x00000001

#define _IFS4_U2ERIF_POSITION                    0x00000002
#define _IFS4_U2ERIF_MASK                        0x00000004
#define _IFS4_U2ERIF_LENGTH                      0x00000001

#define _IFS4_CRCIF_POSITION                     0x00000003
#define _IFS4_CRCIF_MASK                         0x00000008
#define _IFS4_CRCIF_LENGTH                       0x00000001

#define _IFS4_LVDIF_POSITION                     0x00000008
#define _IFS4_LVDIF_MASK                         0x00000100
#define _IFS4_LVDIF_LENGTH                       0x00000001

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

#define _IEC0_SPF1IE_POSITION                    0x00000009
#define _IEC0_SPF1IE_MASK                        0x00000200
#define _IEC0_SPF1IE_LENGTH                      0x00000001

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

#define _IEC2_SPF2IE_POSITION                    0x00000000
#define _IEC2_SPF2IE_MASK                        0x00000001
#define _IEC2_SPF2IE_LENGTH                      0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC2_IC4IE_POSITION                     0x00000006
#define _IEC2_IC4IE_MASK                         0x00000040
#define _IEC2_IC4IE_LENGTH                       0x00000001

#define _IEC2_IC5IE_POSITION                     0x00000007
#define _IEC2_IC5IE_MASK                         0x00000080
#define _IEC2_IC5IE_LENGTH                       0x00000001

#define _IEC2_OC5IE_POSITION                     0x00000009
#define _IEC2_OC5IE_MASK                         0x00000200
#define _IEC2_OC5IE_LENGTH                       0x00000001

#define _IEC2_PMPIE_POSITION                     0x0000000D
#define _IEC2_PMPIE_MASK                         0x00002000
#define _IEC2_PMPIE_LENGTH                       0x00000001

#define _IEC3_SI2C2IE_POSITION                   0x00000001
#define _IEC3_SI2C2IE_MASK                       0x00000002
#define _IEC3_SI2C2IE_LENGTH                     0x00000001

#define _IEC3_MI2C2IE_POSITION                   0x00000002
#define _IEC3_MI2C2IE_MASK                       0x00000004
#define _IEC3_MI2C2IE_LENGTH                     0x00000001

#define _IEC3_RTCIE_POSITION                     0x0000000E
#define _IEC3_RTCIE_MASK                         0x00004000
#define _IEC3_RTCIE_LENGTH                       0x00000001

#define _IEC4_U1ERIE_POSITION                    0x00000001
#define _IEC4_U1ERIE_MASK                        0x00000002
#define _IEC4_U1ERIE_LENGTH                      0x00000001

#define _IEC4_U2ERIE_POSITION                    0x00000002
#define _IEC4_U2ERIE_MASK                        0x00000004
#define _IEC4_U2ERIE_LENGTH                      0x00000001

#define _IEC4_CRCIE_POSITION                     0x00000003
#define _IEC4_CRCIE_MASK                         0x00000008
#define _IEC4_CRCIE_LENGTH                       0x00000001

#define _IEC4_LVDIE_POSITION                     0x00000008
#define _IEC4_LVDIE_MASK                         0x00000100
#define _IEC4_LVDIE_LENGTH                       0x00000001

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

#define _IPC2_SPF1IP_POSITION                    0x00000004
#define _IPC2_SPF1IP_MASK                        0x00000070
#define _IPC2_SPF1IP_LENGTH                      0x00000003

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

#define _IPC2_SPF1IP0_POSITION                   0x00000004
#define _IPC2_SPF1IP0_MASK                       0x00000010
#define _IPC2_SPF1IP0_LENGTH                     0x00000001

#define _IPC2_SPF1IP1_POSITION                   0x00000005
#define _IPC2_SPF1IP1_MASK                       0x00000020
#define _IPC2_SPF1IP1_LENGTH                     0x00000001

#define _IPC2_SPF1IP2_POSITION                   0x00000006
#define _IPC2_SPF1IP2_MASK                       0x00000040
#define _IPC2_SPF1IP2_LENGTH                     0x00000001

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

#define _IPC4_SI2C1P_POSITION                    0x00000000
#define _IPC4_SI2C1P_MASK                        0x00000007
#define _IPC4_SI2C1P_LENGTH                      0x00000003

#define _IPC4_MI2C1P_POSITION                    0x00000004
#define _IPC4_MI2C1P_MASK                        0x00000070
#define _IPC4_MI2C1P_LENGTH                      0x00000003

#define _IPC4_CMIP_POSITION                      0x00000008
#define _IPC4_CMIP_MASK                          0x00000700
#define _IPC4_CMIP_LENGTH                        0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

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

#define _IPC4_SI2C1P0_POSITION                   0x00000000
#define _IPC4_SI2C1P0_MASK                       0x00000001
#define _IPC4_SI2C1P0_LENGTH                     0x00000001

#define _IPC4_SI2C1P1_POSITION                   0x00000001
#define _IPC4_SI2C1P1_MASK                       0x00000002
#define _IPC4_SI2C1P1_LENGTH                     0x00000001

#define _IPC4_SI2C1P2_POSITION                   0x00000002
#define _IPC4_SI2C1P2_MASK                       0x00000004
#define _IPC4_SI2C1P2_LENGTH                     0x00000001

#define _IPC4_MI2C1P0_POSITION                   0x00000004
#define _IPC4_MI2C1P0_MASK                       0x00000010
#define _IPC4_MI2C1P0_LENGTH                     0x00000001

#define _IPC4_MI2C1P1_POSITION                   0x00000005
#define _IPC4_MI2C1P1_MASK                       0x00000020
#define _IPC4_MI2C1P1_LENGTH                     0x00000001

#define _IPC4_MI2C1P2_POSITION                   0x00000006
#define _IPC4_MI2C1P2_MASK                       0x00000040
#define _IPC4_MI2C1P2_LENGTH                     0x00000001

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

#define _IPC8_SPF2IP_POSITION                    0x00000000
#define _IPC8_SPF2IP_MASK                        0x00000007
#define _IPC8_SPF2IP_LENGTH                      0x00000003

#define _IPC8_SPI2IP_POSITION                    0x00000004
#define _IPC8_SPI2IP_MASK                        0x00000070
#define _IPC8_SPI2IP_LENGTH                      0x00000003

#define _IPC8_SPF2IP0_POSITION                   0x00000000
#define _IPC8_SPF2IP0_MASK                       0x00000001
#define _IPC8_SPF2IP0_LENGTH                     0x00000001

#define _IPC8_SPF2IP1_POSITION                   0x00000001
#define _IPC8_SPF2IP1_MASK                       0x00000002
#define _IPC8_SPF2IP1_LENGTH                     0x00000001

#define _IPC8_SPF2IP2_POSITION                   0x00000002
#define _IPC8_SPF2IP2_MASK                       0x00000004
#define _IPC8_SPF2IP2_LENGTH                     0x00000001

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

#define _IPC9_IC5IP_POSITION                     0x0000000C
#define _IPC9_IC5IP_MASK                         0x00007000
#define _IPC9_IC5IP_LENGTH                       0x00000003

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

#define _IPC9_IC5IP0_POSITION                    0x0000000C
#define _IPC9_IC5IP0_MASK                        0x00001000
#define _IPC9_IC5IP0_LENGTH                      0x00000001

#define _IPC9_IC5IP1_POSITION                    0x0000000D
#define _IPC9_IC5IP1_MASK                        0x00002000
#define _IPC9_IC5IP1_LENGTH                      0x00000001

#define _IPC9_IC5IP2_POSITION                    0x0000000E
#define _IPC9_IC5IP2_MASK                        0x00004000
#define _IPC9_IC5IP2_LENGTH                      0x00000001

#define _IPC10_OC5IP_POSITION                    0x00000004
#define _IPC10_OC5IP_MASK                        0x00000070
#define _IPC10_OC5IP_LENGTH                      0x00000003

#define _IPC10_OC5IP0_POSITION                   0x00000004
#define _IPC10_OC5IP0_MASK                       0x00000010
#define _IPC10_OC5IP0_LENGTH                     0x00000001

#define _IPC10_OC5IP1_POSITION                   0x00000005
#define _IPC10_OC5IP1_MASK                       0x00000020
#define _IPC10_OC5IP1_LENGTH                     0x00000001

#define _IPC10_OC5IP2_POSITION                   0x00000006
#define _IPC10_OC5IP2_MASK                       0x00000040
#define _IPC10_OC5IP2_LENGTH                     0x00000001

#define _IPC11_PMPIP_POSITION                    0x00000004
#define _IPC11_PMPIP_MASK                        0x00000070
#define _IPC11_PMPIP_LENGTH                      0x00000003

#define _IPC11_PMPIP0_POSITION                   0x00000004
#define _IPC11_PMPIP0_MASK                       0x00000010
#define _IPC11_PMPIP0_LENGTH                     0x00000001

#define _IPC11_PMPIP1_POSITION                   0x00000005
#define _IPC11_PMPIP1_MASK                       0x00000020
#define _IPC11_PMPIP1_LENGTH                     0x00000001

#define _IPC11_PMPIP2_POSITION                   0x00000006
#define _IPC11_PMPIP2_MASK                       0x00000040
#define _IPC11_PMPIP2_LENGTH                     0x00000001

#define _IPC12_SI2C2P_POSITION                   0x00000004
#define _IPC12_SI2C2P_MASK                       0x00000070
#define _IPC12_SI2C2P_LENGTH                     0x00000003

#define _IPC12_MI2C2P_POSITION                   0x00000008
#define _IPC12_MI2C2P_MASK                       0x00000700
#define _IPC12_MI2C2P_LENGTH                     0x00000003

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

#define _IPC12_SI2C2P0_POSITION                  0x00000004
#define _IPC12_SI2C2P0_MASK                      0x00000010
#define _IPC12_SI2C2P0_LENGTH                    0x00000001

#define _IPC12_SI2C2P1_POSITION                  0x00000005
#define _IPC12_SI2C2P1_MASK                      0x00000020
#define _IPC12_SI2C2P1_LENGTH                    0x00000001

#define _IPC12_SI2C2P2_POSITION                  0x00000006
#define _IPC12_SI2C2P2_MASK                      0x00000040
#define _IPC12_SI2C2P2_LENGTH                    0x00000001

#define _IPC12_MI2C2P0_POSITION                  0x00000008
#define _IPC12_MI2C2P0_MASK                      0x00000100
#define _IPC12_MI2C2P0_LENGTH                    0x00000001

#define _IPC12_MI2C2P1_POSITION                  0x00000009
#define _IPC12_MI2C2P1_MASK                      0x00000200
#define _IPC12_MI2C2P1_LENGTH                    0x00000001

#define _IPC12_MI2C2P2_POSITION                  0x0000000A
#define _IPC12_MI2C2P2_MASK                      0x00000400
#define _IPC12_MI2C2P2_LENGTH                    0x00000001

#define _IPC15_RTCIP_POSITION                    0x00000008
#define _IPC15_RTCIP_MASK                        0x00000700
#define _IPC15_RTCIP_LENGTH                      0x00000003

#define _IPC15_RTCIP0_POSITION                   0x00000008
#define _IPC15_RTCIP0_MASK                       0x00000100
#define _IPC15_RTCIP0_LENGTH                     0x00000001

#define _IPC15_RTCIP1_POSITION                   0x00000009
#define _IPC15_RTCIP1_MASK                       0x00000200
#define _IPC15_RTCIP1_LENGTH                     0x00000001

#define _IPC15_RTCIP2_POSITION                   0x0000000A
#define _IPC15_RTCIP2_MASK                       0x00000400
#define _IPC15_RTCIP2_LENGTH                     0x00000001

#define _IPC16_U1ERIP_POSITION                   0x00000004
#define _IPC16_U1ERIP_MASK                       0x00000070
#define _IPC16_U1ERIP_LENGTH                     0x00000003

#define _IPC16_U2ERIP_POSITION                   0x00000008
#define _IPC16_U2ERIP_MASK                       0x00000700
#define _IPC16_U2ERIP_LENGTH                     0x00000003

#define _IPC16_CRCIP_POSITION                    0x0000000C
#define _IPC16_CRCIP_MASK                        0x00007000
#define _IPC16_CRCIP_LENGTH                      0x00000003

#define _IPC16_U1ERIP0_POSITION                  0x00000004
#define _IPC16_U1ERIP0_MASK                      0x00000010
#define _IPC16_U1ERIP0_LENGTH                    0x00000001

#define _IPC16_U1ERIP1_POSITION                  0x00000005
#define _IPC16_U1ERIP1_MASK                      0x00000020
#define _IPC16_U1ERIP1_LENGTH                    0x00000001

#define _IPC16_U1ERIP2_POSITION                  0x00000006
#define _IPC16_U1ERIP2_MASK                      0x00000040
#define _IPC16_U1ERIP2_LENGTH                    0x00000001

#define _IPC16_U2ERIP0_POSITION                  0x00000008
#define _IPC16_U2ERIP0_MASK                      0x00000100
#define _IPC16_U2ERIP0_LENGTH                    0x00000001

#define _IPC16_U2ERIP1_POSITION                  0x00000009
#define _IPC16_U2ERIP1_MASK                      0x00000200
#define _IPC16_U2ERIP1_LENGTH                    0x00000001

#define _IPC16_U2ERIP2_POSITION                  0x0000000A
#define _IPC16_U2ERIP2_MASK                      0x00000400
#define _IPC16_U2ERIP2_LENGTH                    0x00000001

#define _IPC16_CRCIP0_POSITION                   0x0000000C
#define _IPC16_CRCIP0_MASK                       0x00001000
#define _IPC16_CRCIP0_LENGTH                     0x00000001

#define _IPC16_CRCIP1_POSITION                   0x0000000D
#define _IPC16_CRCIP1_MASK                       0x00002000
#define _IPC16_CRCIP1_LENGTH                     0x00000001

#define _IPC16_CRCIP2_POSITION                   0x0000000E
#define _IPC16_CRCIP2_MASK                       0x00004000
#define _IPC16_CRCIP2_LENGTH                     0x00000001

#define _IPC18_LVDIP_POSITION                    0x00000000
#define _IPC18_LVDIP_MASK                        0x00000007
#define _IPC18_LVDIP_LENGTH                      0x00000003

#define _IPC18_LVDIP0_POSITION                   0x00000000
#define _IPC18_LVDIP0_MASK                       0x00000001
#define _IPC18_LVDIP0_LENGTH                     0x00000001

#define _IPC18_LVDIP1_POSITION                   0x00000001
#define _IPC18_LVDIP1_MASK                       0x00000002
#define _IPC18_LVDIP1_LENGTH                     0x00000001

#define _IPC18_LVDIP2_POSITION                   0x00000002
#define _IPC18_LVDIP2_MASK                       0x00000004
#define _IPC18_LVDIP2_LENGTH                     0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000007F
#define _INTTREG_VECNUM_LENGTH                   0x00000007

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VHOLD_POSITION                  0x0000000D
#define _INTTREG_VHOLD_MASK                      0x00002000
#define _INTTREG_VHOLD_LENGTH                    0x00000001

#define _INTTREG_CPUIRQ_POSITION                 0x0000000F
#define _INTTREG_CPUIRQ_MASK                     0x00008000
#define _INTTREG_CPUIRQ_LENGTH                   0x00000001

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

#define _IC5CON_ICM_POSITION                     0x00000000
#define _IC5CON_ICM_MASK                         0x00000007
#define _IC5CON_ICM_LENGTH                       0x00000003

#define _IC5CON_ICBNE_POSITION                   0x00000003
#define _IC5CON_ICBNE_MASK                       0x00000008
#define _IC5CON_ICBNE_LENGTH                     0x00000001

#define _IC5CON_ICOV_POSITION                    0x00000004
#define _IC5CON_ICOV_MASK                        0x00000010
#define _IC5CON_ICOV_LENGTH                      0x00000001

#define _IC5CON_ICI_POSITION                     0x00000005
#define _IC5CON_ICI_MASK                         0x00000060
#define _IC5CON_ICI_LENGTH                       0x00000002

#define _IC5CON_ICTMR_POSITION                   0x00000007
#define _IC5CON_ICTMR_MASK                       0x00000080
#define _IC5CON_ICTMR_LENGTH                     0x00000001

#define _IC5CON_ICSIDL_POSITION                  0x0000000D
#define _IC5CON_ICSIDL_MASK                      0x00002000
#define _IC5CON_ICSIDL_LENGTH                    0x00000001

#define _IC5CON_ICM0_POSITION                    0x00000000
#define _IC5CON_ICM0_MASK                        0x00000001
#define _IC5CON_ICM0_LENGTH                      0x00000001

#define _IC5CON_ICM1_POSITION                    0x00000001
#define _IC5CON_ICM1_MASK                        0x00000002
#define _IC5CON_ICM1_LENGTH                      0x00000001

#define _IC5CON_ICM2_POSITION                    0x00000002
#define _IC5CON_ICM2_MASK                        0x00000004
#define _IC5CON_ICM2_LENGTH                      0x00000001

#define _IC5CON_ICI0_POSITION                    0x00000005
#define _IC5CON_ICI0_MASK                        0x00000020
#define _IC5CON_ICI0_LENGTH                      0x00000001

#define _IC5CON_ICI1_POSITION                    0x00000006
#define _IC5CON_ICI1_MASK                        0x00000040
#define _IC5CON_ICI1_LENGTH                      0x00000001

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

#define _OC5CON_OCM_POSITION                     0x00000000
#define _OC5CON_OCM_MASK                         0x00000007
#define _OC5CON_OCM_LENGTH                       0x00000003

#define _OC5CON_OCTSEL_POSITION                  0x00000003
#define _OC5CON_OCTSEL_MASK                      0x00000008
#define _OC5CON_OCTSEL_LENGTH                    0x00000001

#define _OC5CON_OCFLT_POSITION                   0x00000004
#define _OC5CON_OCFLT_MASK                       0x00000010
#define _OC5CON_OCFLT_LENGTH                     0x00000001

#define _OC5CON_OCSIDL_POSITION                  0x0000000D
#define _OC5CON_OCSIDL_MASK                      0x00002000
#define _OC5CON_OCSIDL_LENGTH                    0x00000001

#define _OC5CON_OCM0_POSITION                    0x00000000
#define _OC5CON_OCM0_MASK                        0x00000001
#define _OC5CON_OCM0_LENGTH                      0x00000001

#define _OC5CON_OCM1_POSITION                    0x00000001
#define _OC5CON_OCM1_MASK                        0x00000002
#define _OC5CON_OCM1_LENGTH                      0x00000001

#define _OC5CON_OCM2_POSITION                    0x00000002
#define _OC5CON_OCM2_MASK                        0x00000004
#define _OC5CON_OCM2_LENGTH                      0x00000001

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

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_NOT_W_POSITION               0x00000002
#define _I2C1STAT_R_NOT_W_MASK                   0x00000004
#define _I2C1STAT_R_NOT_W_LENGTH                 0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_NOT_A_POSITION               0x00000005
#define _I2C1STAT_D_NOT_A_MASK                   0x00000020
#define _I2C1STAT_D_NOT_A_LENGTH                 0x00000001

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

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

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

#define _I2C2STAT_R_NOT_W_POSITION               0x00000002
#define _I2C2STAT_R_NOT_W_MASK                   0x00000004
#define _I2C2STAT_R_NOT_W_LENGTH                 0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_NOT_A_POSITION               0x00000005
#define _I2C2STAT_D_NOT_A_MASK                   0x00000020
#define _I2C2STAT_D_NOT_A_LENGTH                 0x00000001

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

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

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

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

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

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SISEL_POSITION                 0x00000002
#define _SPI1STAT_SISEL_MASK                     0x0000001C
#define _SPI1STAT_SISEL_LENGTH                   0x00000003

#define _SPI1STAT_SRXMPT_POSITION                0x00000005
#define _SPI1STAT_SRXMPT_MASK                    0x00000020
#define _SPI1STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMPT_POSITION                 0x00000007
#define _SPI1STAT_SRMPT_MASK                     0x00000080
#define _SPI1STAT_SRMPT_LENGTH                   0x00000001

#define _SPI1STAT_SPIBEC_POSITION                0x00000008
#define _SPI1STAT_SPIBEC_MASK                    0x00000700
#define _SPI1STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

#define _SPI1STAT_SISEL0_POSITION                0x00000002
#define _SPI1STAT_SISEL0_MASK                    0x00000004
#define _SPI1STAT_SISEL0_LENGTH                  0x00000001

#define _SPI1STAT_SISEL1_POSITION                0x00000003
#define _SPI1STAT_SISEL1_MASK                    0x00000008
#define _SPI1STAT_SISEL1_LENGTH                  0x00000001

#define _SPI1STAT_SISEL2_POSITION                0x00000004
#define _SPI1STAT_SISEL2_MASK                    0x00000010
#define _SPI1STAT_SISEL2_LENGTH                  0x00000001

#define _SPI1STAT_SPIBEC0_POSITION               0x00000008
#define _SPI1STAT_SPIBEC0_MASK                   0x00000100
#define _SPI1STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC1_POSITION               0x00000009
#define _SPI1STAT_SPIBEC1_MASK                   0x00000200
#define _SPI1STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI1STAT_SPIBEC2_MASK                   0x00000400
#define _SPI1STAT_SPIBEC2_LENGTH                 0x00000001

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

#define _SPI1CON2_SPIBEN_POSITION                0x00000000
#define _SPI1CON2_SPIBEN_MASK                    0x00000001
#define _SPI1CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI1CON2_SPIFE_POSITION                 0x00000001
#define _SPI1CON2_SPIFE_MASK                     0x00000002
#define _SPI1CON2_SPIFE_LENGTH                   0x00000001

#define _SPI1CON2_SPIFPOL_POSITION               0x0000000D
#define _SPI1CON2_SPIFPOL_MASK                   0x00002000
#define _SPI1CON2_SPIFPOL_LENGTH                 0x00000001

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

#define _SPI2STAT_SISEL_POSITION                 0x00000002
#define _SPI2STAT_SISEL_MASK                     0x0000001C
#define _SPI2STAT_SISEL_LENGTH                   0x00000003

#define _SPI2STAT_SRXMPT_POSITION                0x00000005
#define _SPI2STAT_SRXMPT_MASK                    0x00000020
#define _SPI2STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMPT_POSITION                 0x00000007
#define _SPI2STAT_SRMPT_MASK                     0x00000080
#define _SPI2STAT_SRMPT_LENGTH                   0x00000001

#define _SPI2STAT_SPIBEC_POSITION                0x00000008
#define _SPI2STAT_SPIBEC_MASK                    0x00000700
#define _SPI2STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

#define _SPI2STAT_SISEL0_POSITION                0x00000002
#define _SPI2STAT_SISEL0_MASK                    0x00000004
#define _SPI2STAT_SISEL0_LENGTH                  0x00000001

#define _SPI2STAT_SISEL1_POSITION                0x00000003
#define _SPI2STAT_SISEL1_MASK                    0x00000008
#define _SPI2STAT_SISEL1_LENGTH                  0x00000001

#define _SPI2STAT_SISEL2_POSITION                0x00000004
#define _SPI2STAT_SISEL2_MASK                    0x00000010
#define _SPI2STAT_SISEL2_LENGTH                  0x00000001

#define _SPI2STAT_SPIBEC0_POSITION               0x00000008
#define _SPI2STAT_SPIBEC0_MASK                   0x00000100
#define _SPI2STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC1_POSITION               0x00000009
#define _SPI2STAT_SPIBEC1_MASK                   0x00000200
#define _SPI2STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI2STAT_SPIBEC2_MASK                   0x00000400
#define _SPI2STAT_SPIBEC2_LENGTH                 0x00000001

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

#define _SPI2CON2_SPIBEN_POSITION                0x00000000
#define _SPI2CON2_SPIBEN_MASK                    0x00000001
#define _SPI2CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI2CON2_SPIFE_POSITION                 0x00000001
#define _SPI2CON2_SPIFE_MASK                     0x00000002
#define _SPI2CON2_SPIFE_LENGTH                   0x00000001

#define _SPI2CON2_SPIFPOL_POSITION               0x0000000D
#define _SPI2CON2_SPIFPOL_MASK                   0x00002000
#define _SPI2CON2_SPIFPOL_LENGTH                 0x00000001

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

#define _ODCA_ODA0_POSITION                      0x00000000
#define _ODCA_ODA0_MASK                          0x00000001
#define _ODCA_ODA0_LENGTH                        0x00000001

#define _ODCA_ODA1_POSITION                      0x00000001
#define _ODCA_ODA1_MASK                          0x00000002
#define _ODCA_ODA1_LENGTH                        0x00000001

#define _ODCA_ODA2_POSITION                      0x00000002
#define _ODCA_ODA2_MASK                          0x00000004
#define _ODCA_ODA2_LENGTH                        0x00000001

#define _ODCA_ODA3_POSITION                      0x00000003
#define _ODCA_ODA3_MASK                          0x00000008
#define _ODCA_ODA3_LENGTH                        0x00000001

#define _ODCA_ODA4_POSITION                      0x00000004
#define _ODCA_ODA4_MASK                          0x00000010
#define _ODCA_ODA4_LENGTH                        0x00000001

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

#define _ODCB_ODB0_POSITION                      0x00000000
#define _ODCB_ODB0_MASK                          0x00000001
#define _ODCB_ODB0_LENGTH                        0x00000001

#define _ODCB_ODB1_POSITION                      0x00000001
#define _ODCB_ODB1_MASK                          0x00000002
#define _ODCB_ODB1_LENGTH                        0x00000001

#define _ODCB_ODB2_POSITION                      0x00000002
#define _ODCB_ODB2_MASK                          0x00000004
#define _ODCB_ODB2_LENGTH                        0x00000001

#define _ODCB_ODB3_POSITION                      0x00000003
#define _ODCB_ODB3_MASK                          0x00000008
#define _ODCB_ODB3_LENGTH                        0x00000001

#define _ODCB_ODB4_POSITION                      0x00000004
#define _ODCB_ODB4_MASK                          0x00000010
#define _ODCB_ODB4_LENGTH                        0x00000001

#define _ODCB_ODB5_POSITION                      0x00000005
#define _ODCB_ODB5_MASK                          0x00000020
#define _ODCB_ODB5_LENGTH                        0x00000001

#define _ODCB_ODB6_POSITION                      0x00000006
#define _ODCB_ODB6_MASK                          0x00000040
#define _ODCB_ODB6_LENGTH                        0x00000001

#define _ODCB_ODB7_POSITION                      0x00000007
#define _ODCB_ODB7_MASK                          0x00000080
#define _ODCB_ODB7_LENGTH                        0x00000001

#define _ODCB_ODB8_POSITION                      0x00000008
#define _ODCB_ODB8_MASK                          0x00000100
#define _ODCB_ODB8_LENGTH                        0x00000001

#define _ODCB_ODB9_POSITION                      0x00000009
#define _ODCB_ODB9_MASK                          0x00000200
#define _ODCB_ODB9_LENGTH                        0x00000001

#define _ODCB_ODB10_POSITION                     0x0000000A
#define _ODCB_ODB10_MASK                         0x00000400
#define _ODCB_ODB10_LENGTH                       0x00000001

#define _ODCB_ODB11_POSITION                     0x0000000B
#define _ODCB_ODB11_MASK                         0x00000800
#define _ODCB_ODB11_LENGTH                       0x00000001

#define _ODCB_ODB12_POSITION                     0x0000000C
#define _ODCB_ODB12_MASK                         0x00001000
#define _ODCB_ODB12_LENGTH                       0x00000001

#define _ODCB_ODB13_POSITION                     0x0000000D
#define _ODCB_ODB13_MASK                         0x00002000
#define _ODCB_ODB13_LENGTH                       0x00000001

#define _ODCB_ODB14_POSITION                     0x0000000E
#define _ODCB_ODB14_MASK                         0x00004000
#define _ODCB_ODB14_LENGTH                       0x00000001

#define _ODCB_ODB15_POSITION                     0x0000000F
#define _ODCB_ODB15_MASK                         0x00008000
#define _ODCB_ODB15_LENGTH                       0x00000001

#define _PADCFG1_PMPTTL_POSITION                 0x00000000
#define _PADCFG1_PMPTTL_MASK                     0x00000001
#define _PADCFG1_PMPTTL_LENGTH                   0x00000001

#define _PADCFG1_RTSECSEL_POSITION               0x00000001
#define _PADCFG1_RTSECSEL_MASK                   0x00000002
#define _PADCFG1_RTSECSEL_LENGTH                 0x00000001

#define _PADCFG1_RTSECSEL0_POSITION              0x00000001
#define _PADCFG1_RTSECSEL0_MASK                  0x00000002
#define _PADCFG1_RTSECSEL0_LENGTH                0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

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

#define _AD1CHS_CH0SA_POSITION                   0x00000000
#define _AD1CHS_CH0SA_MASK                       0x0000000F
#define _AD1CHS_CH0SA_LENGTH                     0x00000004

#define _AD1CHS_CH0NA_POSITION                   0x00000007
#define _AD1CHS_CH0NA_MASK                       0x00000080
#define _AD1CHS_CH0NA_LENGTH                     0x00000001

#define _AD1CHS_CH0SB_POSITION                   0x00000008
#define _AD1CHS_CH0SB_MASK                       0x00000F00
#define _AD1CHS_CH0SB_LENGTH                     0x00000004

#define _AD1CHS_CH0NB_POSITION                   0x0000000F
#define _AD1CHS_CH0NB_MASK                       0x00008000
#define _AD1CHS_CH0NB_LENGTH                     0x00000001

#define _AD1CHS_CH0SA0_POSITION                  0x00000000
#define _AD1CHS_CH0SA0_MASK                      0x00000001
#define _AD1CHS_CH0SA0_LENGTH                    0x00000001

#define _AD1CHS_CH0SA1_POSITION                  0x00000001
#define _AD1CHS_CH0SA1_MASK                      0x00000002
#define _AD1CHS_CH0SA1_LENGTH                    0x00000001

#define _AD1CHS_CH0SA2_POSITION                  0x00000002
#define _AD1CHS_CH0SA2_MASK                      0x00000004
#define _AD1CHS_CH0SA2_LENGTH                    0x00000001

#define _AD1CHS_CH0SA3_POSITION                  0x00000003
#define _AD1CHS_CH0SA3_MASK                      0x00000008
#define _AD1CHS_CH0SA3_LENGTH                    0x00000001

#define _AD1CHS_CH0SB0_POSITION                  0x00000008
#define _AD1CHS_CH0SB0_MASK                      0x00000100
#define _AD1CHS_CH0SB0_LENGTH                    0x00000001

#define _AD1CHS_CH0SB1_POSITION                  0x00000009
#define _AD1CHS_CH0SB1_MASK                      0x00000200
#define _AD1CHS_CH0SB1_LENGTH                    0x00000001

#define _AD1CHS_CH0SB2_POSITION                  0x0000000A
#define _AD1CHS_CH0SB2_MASK                      0x00000400
#define _AD1CHS_CH0SB2_LENGTH                    0x00000001

#define _AD1CHS_CH0SB3_POSITION                  0x0000000B
#define _AD1CHS_CH0SB3_MASK                      0x00000800
#define _AD1CHS_CH0SB3_LENGTH                    0x00000001

#define _AD1PCFG_PCFG0_POSITION                  0x00000000
#define _AD1PCFG_PCFG0_MASK                      0x00000001
#define _AD1PCFG_PCFG0_LENGTH                    0x00000001

#define _AD1PCFG_PCFG1_POSITION                  0x00000001
#define _AD1PCFG_PCFG1_MASK                      0x00000002
#define _AD1PCFG_PCFG1_LENGTH                    0x00000001

#define _AD1PCFG_PCFG2_POSITION                  0x00000002
#define _AD1PCFG_PCFG2_MASK                      0x00000004
#define _AD1PCFG_PCFG2_LENGTH                    0x00000001

#define _AD1PCFG_PCFG3_POSITION                  0x00000003
#define _AD1PCFG_PCFG3_MASK                      0x00000008
#define _AD1PCFG_PCFG3_LENGTH                    0x00000001

#define _AD1PCFG_PCFG4_POSITION                  0x00000004
#define _AD1PCFG_PCFG4_MASK                      0x00000010
#define _AD1PCFG_PCFG4_LENGTH                    0x00000001

#define _AD1PCFG_PCFG5_POSITION                  0x00000005
#define _AD1PCFG_PCFG5_MASK                      0x00000020
#define _AD1PCFG_PCFG5_LENGTH                    0x00000001

#define _AD1PCFG_PCFG9_POSITION                  0x00000009
#define _AD1PCFG_PCFG9_MASK                      0x00000200
#define _AD1PCFG_PCFG9_LENGTH                    0x00000001

#define _AD1PCFG_PCFG10_POSITION                 0x0000000A
#define _AD1PCFG_PCFG10_MASK                     0x00000400
#define _AD1PCFG_PCFG10_LENGTH                   0x00000001

#define _AD1PCFG_PCFG11_POSITION                 0x0000000B
#define _AD1PCFG_PCFG11_MASK                     0x00000800
#define _AD1PCFG_PCFG11_LENGTH                   0x00000001

#define _AD1PCFG_PCFG12_POSITION                 0x0000000C
#define _AD1PCFG_PCFG12_MASK                     0x00001000
#define _AD1PCFG_PCFG12_LENGTH                   0x00000001

#define _AD1PCFG_PCFG15_POSITION                 0x0000000F
#define _AD1PCFG_PCFG15_MASK                     0x00008000
#define _AD1PCFG_PCFG15_LENGTH                   0x00000001

#define _AD1CSSL_CSSL0_POSITION                  0x00000000
#define _AD1CSSL_CSSL0_MASK                      0x00000001
#define _AD1CSSL_CSSL0_LENGTH                    0x00000001

#define _AD1CSSL_CSSL1_POSITION                  0x00000001
#define _AD1CSSL_CSSL1_MASK                      0x00000002
#define _AD1CSSL_CSSL1_LENGTH                    0x00000001

#define _AD1CSSL_CSSL2_POSITION                  0x00000002
#define _AD1CSSL_CSSL2_MASK                      0x00000004
#define _AD1CSSL_CSSL2_LENGTH                    0x00000001

#define _AD1CSSL_CSSL3_POSITION                  0x00000003
#define _AD1CSSL_CSSL3_MASK                      0x00000008
#define _AD1CSSL_CSSL3_LENGTH                    0x00000001

#define _AD1CSSL_CSSL4_POSITION                  0x00000004
#define _AD1CSSL_CSSL4_MASK                      0x00000010
#define _AD1CSSL_CSSL4_LENGTH                    0x00000001

#define _AD1CSSL_CSSL5_POSITION                  0x00000005
#define _AD1CSSL_CSSL5_MASK                      0x00000020
#define _AD1CSSL_CSSL5_LENGTH                    0x00000001

#define _AD1CSSL_CSSL9_POSITION                  0x00000009
#define _AD1CSSL_CSSL9_MASK                      0x00000200
#define _AD1CSSL_CSSL9_LENGTH                    0x00000001

#define _AD1CSSL_CSSL10_POSITION                 0x0000000A
#define _AD1CSSL_CSSL10_MASK                     0x00000400
#define _AD1CSSL_CSSL10_LENGTH                   0x00000001

#define _AD1CSSL_CSSL11_POSITION                 0x0000000B
#define _AD1CSSL_CSSL11_MASK                     0x00000800
#define _AD1CSSL_CSSL11_LENGTH                   0x00000001

#define _AD1CSSL_CSSL12_POSITION                 0x0000000C
#define _AD1CSSL_CSSL12_MASK                     0x00001000
#define _AD1CSSL_CSSL12_LENGTH                   0x00000001

#define _AD1CSSL_CSSL15_POSITION                 0x0000000F
#define _AD1CSSL_CSSL15_MASK                     0x00008000
#define _AD1CSSL_CSSL15_LENGTH                   0x00000001

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
#define _PMADDR_ADDR_MASK                        0x00000003
#define _PMADDR_ADDR_LENGTH                      0x00000002

#define _PMADDR_CS_POSITION                      0x0000000E
#define _PMADDR_CS_MASK                          0x00004000
#define _PMADDR_CS_LENGTH                        0x00000001

#define _PMADDR_ADDR0_POSITION                   0x00000000
#define _PMADDR_ADDR0_MASK                       0x00000001
#define _PMADDR_ADDR0_LENGTH                     0x00000001

#define _PMADDR_ADDR1_POSITION                   0x00000001
#define _PMADDR_ADDR1_MASK                       0x00000002
#define _PMADDR_ADDR1_LENGTH                     0x00000001

#define _PMADDR_CS1_POSITION                     0x0000000E
#define _PMADDR_CS1_MASK                         0x00004000
#define _PMADDR_CS1_LENGTH                       0x00000001

#define _PMDOUT1_ADDR_POSITION                   0x00000000
#define _PMDOUT1_ADDR_MASK                       0x00000003
#define _PMDOUT1_ADDR_LENGTH                     0x00000002

#define _PMDOUT1_CS_POSITION                     0x0000000E
#define _PMDOUT1_CS_MASK                         0x00004000
#define _PMDOUT1_CS_LENGTH                       0x00000001

#define _PMDOUT1_ADDR0_POSITION                  0x00000000
#define _PMDOUT1_ADDR0_MASK                      0x00000001
#define _PMDOUT1_ADDR0_LENGTH                    0x00000001

#define _PMDOUT1_ADDR1_POSITION                  0x00000001
#define _PMDOUT1_ADDR1_MASK                      0x00000002
#define _PMDOUT1_ADDR1_LENGTH                    0x00000001

#define _PMDOUT1_CS1_POSITION                    0x0000000E
#define _PMDOUT1_CS1_MASK                        0x00004000
#define _PMDOUT1_CS1_LENGTH                      0x00000001

#define _PMAEN_PTEN0_POSITION                    0x00000000
#define _PMAEN_PTEN0_MASK                        0x00000001
#define _PMAEN_PTEN0_LENGTH                      0x00000001

#define _PMAEN_PTEN1_POSITION                    0x00000001
#define _PMAEN_PTEN1_MASK                        0x00000002
#define _PMAEN_PTEN1_LENGTH                      0x00000001

#define _PMAEN_PTEN14_POSITION                   0x0000000E
#define _PMAEN_PTEN14_MASK                       0x00004000
#define _PMAEN_PTEN14_LENGTH                     0x00000001

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

#define _CRCXOR_X1_POSITION                      0x00000001
#define _CRCXOR_X1_MASK                          0x00000002
#define _CRCXOR_X1_LENGTH                        0x00000001

#define _CRCXOR_X2_POSITION                      0x00000002
#define _CRCXOR_X2_MASK                          0x00000004
#define _CRCXOR_X2_LENGTH                        0x00000001

#define _CRCXOR_X3_POSITION                      0x00000003
#define _CRCXOR_X3_MASK                          0x00000008
#define _CRCXOR_X3_LENGTH                        0x00000001

#define _CRCXOR_X4_POSITION                      0x00000004
#define _CRCXOR_X4_MASK                          0x00000010
#define _CRCXOR_X4_LENGTH                        0x00000001

#define _CRCXOR_X5_POSITION                      0x00000005
#define _CRCXOR_X5_MASK                          0x00000020
#define _CRCXOR_X5_LENGTH                        0x00000001

#define _CRCXOR_X6_POSITION                      0x00000006
#define _CRCXOR_X6_MASK                          0x00000040
#define _CRCXOR_X6_LENGTH                        0x00000001

#define _CRCXOR_X7_POSITION                      0x00000007
#define _CRCXOR_X7_MASK                          0x00000080
#define _CRCXOR_X7_LENGTH                        0x00000001

#define _CRCXOR_X8_POSITION                      0x00000008
#define _CRCXOR_X8_MASK                          0x00000100
#define _CRCXOR_X8_LENGTH                        0x00000001

#define _CRCXOR_X9_POSITION                      0x00000009
#define _CRCXOR_X9_MASK                          0x00000200
#define _CRCXOR_X9_LENGTH                        0x00000001

#define _CRCXOR_X10_POSITION                     0x0000000A
#define _CRCXOR_X10_MASK                         0x00000400
#define _CRCXOR_X10_LENGTH                       0x00000001

#define _CRCXOR_X11_POSITION                     0x0000000B
#define _CRCXOR_X11_MASK                         0x00000800
#define _CRCXOR_X11_LENGTH                       0x00000001

#define _CRCXOR_X12_POSITION                     0x0000000C
#define _CRCXOR_X12_MASK                         0x00001000
#define _CRCXOR_X12_LENGTH                       0x00000001

#define _CRCXOR_X13_POSITION                     0x0000000D
#define _CRCXOR_X13_MASK                         0x00002000
#define _CRCXOR_X13_LENGTH                       0x00000001

#define _CRCXOR_X14_POSITION                     0x0000000E
#define _CRCXOR_X14_MASK                         0x00004000
#define _CRCXOR_X14_LENGTH                       0x00000001

#define _CRCXOR_X15_POSITION                     0x0000000F
#define _CRCXOR_X15_MASK                         0x00008000
#define _CRCXOR_X15_LENGTH                       0x00000001

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

#define _RPINR8_IC3R_POSITION                    0x00000000
#define _RPINR8_IC3R_MASK                        0x0000001F
#define _RPINR8_IC3R_LENGTH                      0x00000005

#define _RPINR8_IC4R_POSITION                    0x00000008
#define _RPINR8_IC4R_MASK                        0x00001F00
#define _RPINR8_IC4R_LENGTH                      0x00000005

#define _RPINR8_IC3R0_POSITION                   0x00000000
#define _RPINR8_IC3R0_MASK                       0x00000001
#define _RPINR8_IC3R0_LENGTH                     0x00000001

#define _RPINR8_IC3R1_POSITION                   0x00000001
#define _RPINR8_IC3R1_MASK                       0x00000002
#define _RPINR8_IC3R1_LENGTH                     0x00000001

#define _RPINR8_IC3R2_POSITION                   0x00000002
#define _RPINR8_IC3R2_MASK                       0x00000004
#define _RPINR8_IC3R2_LENGTH                     0x00000001

#define _RPINR8_IC3R3_POSITION                   0x00000003
#define _RPINR8_IC3R3_MASK                       0x00000008
#define _RPINR8_IC3R3_LENGTH                     0x00000001

#define _RPINR8_IC3R4_POSITION                   0x00000004
#define _RPINR8_IC3R4_MASK                       0x00000010
#define _RPINR8_IC3R4_LENGTH                     0x00000001

#define _RPINR8_IC4R0_POSITION                   0x00000008
#define _RPINR8_IC4R0_MASK                       0x00000100
#define _RPINR8_IC4R0_LENGTH                     0x00000001

#define _RPINR8_IC4R1_POSITION                   0x00000009
#define _RPINR8_IC4R1_MASK                       0x00000200
#define _RPINR8_IC4R1_LENGTH                     0x00000001

#define _RPINR8_IC4R2_POSITION                   0x0000000A
#define _RPINR8_IC4R2_MASK                       0x00000400
#define _RPINR8_IC4R2_LENGTH                     0x00000001

#define _RPINR8_IC4R3_POSITION                   0x0000000B
#define _RPINR8_IC4R3_MASK                       0x00000800
#define _RPINR8_IC4R3_LENGTH                     0x00000001

#define _RPINR8_IC4R4_POSITION                   0x0000000C
#define _RPINR8_IC4R4_MASK                       0x00001000
#define _RPINR8_IC4R4_LENGTH                     0x00000001

#define _RPINR9_IC5R_POSITION                    0x00000000
#define _RPINR9_IC5R_MASK                        0x0000001F
#define _RPINR9_IC5R_LENGTH                      0x00000005

#define _RPINR9_IC5R0_POSITION                   0x00000000
#define _RPINR9_IC5R0_MASK                       0x00000001
#define _RPINR9_IC5R0_LENGTH                     0x00000001

#define _RPINR9_IC5R1_POSITION                   0x00000001
#define _RPINR9_IC5R1_MASK                       0x00000002
#define _RPINR9_IC5R1_LENGTH                     0x00000001

#define _RPINR9_IC5R2_POSITION                   0x00000002
#define _RPINR9_IC5R2_MASK                       0x00000004
#define _RPINR9_IC5R2_LENGTH                     0x00000001

#define _RPINR9_IC5R3_POSITION                   0x00000003
#define _RPINR9_IC5R3_MASK                       0x00000008
#define _RPINR9_IC5R3_LENGTH                     0x00000001

#define _RPINR9_IC5R4_POSITION                   0x00000004
#define _RPINR9_IC5R4_MASK                       0x00000010
#define _RPINR9_IC5R4_LENGTH                     0x00000001

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x0000001F
#define _RPINR11_OCFAR_LENGTH                    0x00000005

#define _RPINR11_OCFBR_POSITION                  0x00000008
#define _RPINR11_OCFBR_MASK                      0x00001F00
#define _RPINR11_OCFBR_LENGTH                    0x00000005

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

#define _RPINR11_OCFBR0_POSITION                 0x00000008
#define _RPINR11_OCFBR0_MASK                     0x00000100
#define _RPINR11_OCFBR0_LENGTH                   0x00000001

#define _RPINR11_OCFBR1_POSITION                 0x00000009
#define _RPINR11_OCFBR1_MASK                     0x00000200
#define _RPINR11_OCFBR1_LENGTH                   0x00000001

#define _RPINR11_OCFBR2_POSITION                 0x0000000A
#define _RPINR11_OCFBR2_MASK                     0x00000400
#define _RPINR11_OCFBR2_LENGTH                   0x00000001

#define _RPINR11_OCFBR3_POSITION                 0x0000000B
#define _RPINR11_OCFBR3_MASK                     0x00000800
#define _RPINR11_OCFBR3_LENGTH                   0x00000001

#define _RPINR11_OCFBR4_POSITION                 0x0000000C
#define _RPINR11_OCFBR4_MASK                     0x00001000
#define _RPINR11_OCFBR4_LENGTH                   0x00000001

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

#define _RCON_PMSLP_POSITION                     0x00000008
#define _RCON_PMSLP_MASK                         0x00000100
#define _RCON_PMSLP_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

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

#define _CLKDIV_RCDIV_POSITION                   0x00000008
#define _CLKDIV_RCDIV_MASK                       0x00000700
#define _CLKDIV_RCDIV_LENGTH                     0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_RCDIV0_POSITION                  0x00000008
#define _CLKDIV_RCDIV0_MASK                      0x00000100
#define _CLKDIV_RCDIV0_LENGTH                    0x00000001

#define _CLKDIV_RCDIV1_POSITION                  0x00000009
#define _CLKDIV_RCDIV1_MASK                      0x00000200
#define _CLKDIV_RCDIV1_LENGTH                    0x00000001

#define _CLKDIV_RCDIV2_POSITION                  0x0000000A
#define _CLKDIV_RCDIV2_MASK                      0x00000400
#define _CLKDIV_RCDIV2_LENGTH                    0x00000001

#define _CLKDIV_DOZE0_POSITION                   0x0000000C
#define _CLKDIV_DOZE0_MASK                       0x00001000
#define _CLKDIV_DOZE0_LENGTH                     0x00000001

#define _CLKDIV_DOZE1_POSITION                   0x0000000D
#define _CLKDIV_DOZE1_MASK                       0x00002000
#define _CLKDIV_DOZE1_LENGTH                     0x00000001

#define _CLKDIV_DOZE2_POSITION                   0x0000000E
#define _CLKDIV_DOZE2_MASK                       0x00004000
#define _CLKDIV_DOZE2_LENGTH                     0x00000001

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

#define _NVMCON_PROGOP_POSITION                  0x00000000
#define _NVMCON_PROGOP_MASK                      0x0000000F
#define _NVMCON_PROGOP_LENGTH                    0x00000004

#define _NVMCON_PROGOP0_POSITION                 0x00000000
#define _NVMCON_PROGOP0_MASK                     0x00000001
#define _NVMCON_PROGOP0_LENGTH                   0x00000001

#define _NVMCON_PROGOP1_POSITION                 0x00000001
#define _NVMCON_PROGOP1_MASK                     0x00000002
#define _NVMCON_PROGOP1_LENGTH                   0x00000001

#define _NVMCON_PROGOP2_POSITION                 0x00000002
#define _NVMCON_PROGOP2_MASK                     0x00000004
#define _NVMCON_PROGOP2_LENGTH                   0x00000001

#define _NVMCON_PROGOP3_POSITION                 0x00000003
#define _NVMCON_PROGOP3_MASK                     0x00000008
#define _NVMCON_PROGOP3_LENGTH                   0x00000001

#define _PMD1_ADC1MD_POSITION                    0x00000000
#define _PMD1_ADC1MD_MASK                        0x00000001
#define _PMD1_ADC1MD_LENGTH                      0x00000001

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

#define _PMD2_OC5MD_POSITION                     0x00000004
#define _PMD2_OC5MD_MASK                         0x00000010
#define _PMD2_OC5MD_LENGTH                       0x00000001

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

#define _PMD2_IC5MD_POSITION                     0x0000000C
#define _PMD2_IC5MD_MASK                         0x00001000
#define _PMD2_IC5MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_CRCPMD_POSITION                    0x00000007
#define _PMD3_CRCPMD_MASK                        0x00000080
#define _PMD3_CRCPMD_LENGTH                      0x00000001

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
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register CONFIG2 (0x83fc)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG2;
#define _CONFIG2(x) __attribute__((address(0x83fc),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG2.sec"),space(prog))) __prog__ uint16_t _CONFIG2 = (x);

/*
** Only one invocation of CONFIG2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG2.
** Multiple options may be combined, as shown:
**
** _CONFIG2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Select:
**     POSCMOD_EC           EC Oscillator mode selected
**     POSCMOD_XT           XT Oscillator mode selected
**     POSCMOD_HS           HS Oscillator mode selected
**     POSCMOD_NONE         Primary oscillator disabled
**
**   I2C1 Pin Location Select:
**     I2C1SEL_SEC          Use alternate SCL1/SDA1 pins
**     I2C1SEL_PRI          Use default SCL1/SDA1 pins
**
**   IOLOCK Protection:
**     IOL1WAY_OFF          IOLOCK may be changed via unlocking seq
**     IOL1WAY_ON           Once IOLOCK is set, cannot be changed
**
**   Primary Oscillator Output Function:
**     OSCIOFNC_ON          OSC2/CLKO/RC15 functions as port I/O (RC15)
**     OSCIOFNC_OFF         OSC2/CLKO/RC15 functions as CLKO (FOSC/2)
**
**   Clock Switching and Monitor:
**     FCKSM_CSECME         Clock switching is enabled, Fail-Safe Clock Monitor is enabled
**     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Clock switching and Fail-Safe Clock Monitor are disabled
**
**   Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with PLL module (FRCPLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL module (HSPLL, ECPLL)
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV         Fast RC Oscillator with Postscaler (FRCDIV)
**
**   Sec Oscillator Select:
**     SOSCSEL_LPSOSC       Low Power Secondary Oscillator (LPSOSC)
**     SOSCSEL_SOSC         Default Secondary Oscillator (SOSC)
**
**   Wake-up timer Select:
**     WUTSEL_FST           Fast Wake-up Timer
**     WUTSEL_LEG           Legacy Wake-up Timer
**
**   Internal External Switch Over Mode:
**     IESO_OFF             IESO mode (Two-Speed Start-up) disabled
**     IESO_ON              IESO mode (Two-Speed Start-up) enabled
**
*/

#define POSCMOD_EC           0xFFFC
#define POSCMOD_XT           0xFFFD
#define POSCMOD_HS           0xFFFE
#define POSCMOD_NONE         0xFFFF

#define I2C1SEL_SEC          0xFFFB
#define I2C1SEL_PRI          0xFFFF

#define IOL1WAY_OFF          0xFFEF
#define IOL1WAY_ON           0xFFFF

#define OSCIOFNC_ON          0xFFDF
#define OSCIOFNC_OFF         0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

#define FNOSC_FRC            0xF8FF
#define FNOSC_FRCPLL         0xF9FF
#define FNOSC_PRI            0xFAFF
#define FNOSC_PRIPLL         0xFBFF
#define FNOSC_SOSC           0xFCFF
#define FNOSC_LPRC           0xFDFF
#define FNOSC_FRCDIV         0xFFFF

#define SOSCSEL_LPSOSC       0xEFFF
#define SOSCSEL_SOSC         0xFFFF

#define WUTSEL_FST           0xBFFF
#define WUTSEL_LEG           0xFFFF

#define IESO_OFF             0x7FFF
#define IESO_ON              0xFFFF

/* Register CONFIG1 (0x83fe)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG1;
#define _CONFIG1(x) __attribute__((address(0x83fe),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG1.sec"),space(prog))) __prog__ uint16_t _CONFIG1 = (x);

/*
** Only one invocation of CONFIG1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG1.
** Multiple options may be combined, as shown:
**
** _CONFIG1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler:
**     WDTPS_PS1            1:1
**     WDTPS_PS2            1:2
**     WDTPS_PS4            1:4
**     WDTPS_PS8            1:8
**     WDTPS_PS16           1:16
**     WDTPS_PS32           1:32
**     WDTPS_PS64           1:64
**     WDTPS_PS128          1:128
**     WDTPS_PS256          1:256
**     WDTPS_PS512          1:512
**     WDTPS_PS1024         1:1,024
**     WDTPS_PS2048         1:2,048
**     WDTPS_PS4096         1:4,096
**     WDTPS_PS8192         1:8,192
**     WDTPS_PS16384        1:16,384
**     WDTPS_PS32768        1:32,768
**
**   WDT Prescaler:
**     FWPSA_PR32           Prescaler ratio of 1:32
**     FWPSA_PR128          Prescaler ratio of 1:128
**
**   Watchdog Timer Window:
**     WINDIS_OFF           Windowed Watchdog Timer enabled; FWDTEN must be 1
**     WINDIS_ON            Standard Watchdog Timer enabled,(Windowed-mode is disabled)
**
**   Watchdog Timer Enable:
**     FWDTEN_OFF           Watchdog Timer is disabled
**     FWDTEN_ON            Watchdog Timer is enabled
**
**   Comm Channel Select:
**     ICS_PGx3             Emulator EMUC3/EMUD3 pins are shared with PGC3/PGD3
**     ICS_PGx2             Emulator EMUC2/EMUD2 pins are shared with PGC2/PGD2
**     ICS_PGx1             Emulator EMUC1/EMUD1 pins are shared with PGC1/PGD1
**
**   Background Debug:
**     BKBUG_ON             Device resets into Debug mode
**     BKBUG_OFF            Device resets into Operational mode
**
**   General Code Segment Write Protect:
**     GWRP_ON              Writes to program memory are disabled
**     GWRP_OFF             Writes to program memory are allowed
**
**   General Code Segment Code Protect:
**     GCP_ON               Code protection is enabled for the entire program memory space
**     GCP_OFF              Code protection is disabled
**
**   JTAG Port Enable:
**     JTAGEN_OFF           JTAG port is disabled
**     JTAGEN_ON            JTAG port is enabled
**
*/

#define WDTPS_PS1            0xFFF0
#define WDTPS_PS2            0xFFF1
#define WDTPS_PS4            0xFFF2
#define WDTPS_PS8            0xFFF3
#define WDTPS_PS16           0xFFF4
#define WDTPS_PS32           0xFFF5
#define WDTPS_PS64           0xFFF6
#define WDTPS_PS128          0xFFF7
#define WDTPS_PS256          0xFFF8
#define WDTPS_PS512          0xFFF9
#define WDTPS_PS1024         0xFFFA
#define WDTPS_PS2048         0xFFFB
#define WDTPS_PS4096         0xFFFC
#define WDTPS_PS8192         0xFFFD
#define WDTPS_PS16384        0xFFFE
#define WDTPS_PS32768        0xFFFF

#define FWPSA_PR32           0xFFEF
#define FWPSA_PR128          0xFFFF

#define WINDIS_OFF           0xFFBF
#define WINDIS_ON            0xFFFF

#define FWDTEN_OFF           0xFF7F
#define FWDTEN_ON            0xFFFF

#define ICS_PGx3             0xFDFF
#define ICS_PGx2             0xFEFF
#define ICS_PGx1             0xFFFF

#define BKBUG_ON             0xFFFF
#define BKBUG_OFF            0xFFFF

#define GWRP_ON              0xEFFF
#define GWRP_OFF             0xFFFF

#define GCP_ON               0xDFFF
#define GCP_OFF              0xFFFF

#define JTAGEN_OFF           0xBFFF
#define JTAGEN_ON            0xFFFF



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
#define __PROGRAM_LENGTH 0x81fc

#define __CONFIG2_BASE 0x83fc
#define __CONFIG2_LENGTH 0x2

#define __CONFIG1_BASE 0x83fe
#define __CONFIG1_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x2000

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x2000

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x2000


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
#define _RPOUT_OC1 18
#define _RPOUT_OC2 19
#define _RPOUT_OC3 20
#define _RPOUT_OC4 21
#define _RPOUT_OC5 22

#endif
