/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24FV16KM204 processor header
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

#ifndef __PIC24FV16KM204__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __24FV16KM204_H
#define __24FV16KM204_H

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
extern volatile uint16_t TBLPAG __attribute__((__sfr__));
typedef struct tagTBLPAGBITS {
  uint16_t TBLPAG:8;
} TBLPAGBITS;
extern volatile TBLPAGBITS TBLPAGbits __attribute__((__sfr__));

#define PSVPAG PSVPAG
extern volatile uint16_t PSVPAG __attribute__((__sfr__));
typedef struct tagPSVPAGBITS {
  uint16_t PSVPAG:8;
} PSVPAGBITS;
extern volatile PSVPAGBITS PSVPAGbits __attribute__((__sfr__));

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
      uint16_t IPL0:1;
      uint16_t IPL1:1;
      uint16_t IPL2:1;
      uint16_t DC:1;
    };
    struct {
      uint16_t :5;
      uint16_t IPL:3;
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
typedef struct tagDISICNTBITS {
  uint16_t DISICNT:14;
} DISICNTBITS;
extern volatile DISICNTBITS DISICNTbits __attribute__((__sfr__));

#define CNPD1 CNPD1
extern volatile uint16_t CNPD1 __attribute__((__sfr__));
typedef struct tagCNPD1BITS {
  uint16_t CN0PDE:1;
  uint16_t CN1PDE:1;
  uint16_t CN2PDE:1;
  uint16_t CN3PDE:1;
  uint16_t CN4PDE:1;
  uint16_t CN5PDE:1;
  uint16_t CN6PDE:1;
  uint16_t CN7PDE:1;
  uint16_t :1;
  uint16_t CN9PDE:1;
  uint16_t CN10PDE:1;
  uint16_t CN11PDE:1;
  uint16_t CN12PDE:1;
  uint16_t CN13PDE:1;
  uint16_t CN14PDE:1;
  uint16_t CN15PDE:1;
} CNPD1BITS;
extern volatile CNPD1BITS CNPD1bits __attribute__((__sfr__));

#define CNPD2 CNPD2
extern volatile uint16_t CNPD2 __attribute__((__sfr__));
typedef struct tagCNPD2BITS {
  uint16_t CN16PDE:1;
  uint16_t CN17PDE:1;
  uint16_t CN18PDE:1;
  uint16_t CN19PDE:1;
  uint16_t CN20PDE:1;
  uint16_t CN21PDE:1;
  uint16_t CN22PDE:1;
  uint16_t CN23PDE:1;
  uint16_t CN24PDE:1;
  uint16_t CN25PDE:1;
  uint16_t CN26PDE:1;
  uint16_t CN27PDE:1;
  uint16_t CN28PDE:1;
  uint16_t CN29PDE:1;
  uint16_t CN30PDE:1;
  uint16_t CN31PDE:1;
} CNPD2BITS;
extern volatile CNPD2BITS CNPD2bits __attribute__((__sfr__));

#define CNPD3 CNPD3
extern volatile uint16_t CNPD3 __attribute__((__sfr__));
typedef struct tagCNPD3BITS {
  uint16_t CN32PDE:1;
  uint16_t CN33PDE:1;
  uint16_t CN34PDE:1;
  uint16_t CN35PDE:1;
  uint16_t CN36PDE:1;
} CNPD3BITS;
extern volatile CNPD3BITS CNPD3bits __attribute__((__sfr__));

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
  uint16_t :1;
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
  uint16_t CN24IE:1;
  uint16_t CN25IE:1;
  uint16_t CN26IE:1;
  uint16_t CN27IE:1;
  uint16_t CN28IE:1;
  uint16_t CN29IE:1;
  uint16_t CN30IE:1;
  uint16_t CN31IE:1;
} CNEN2BITS;
extern volatile CNEN2BITS CNEN2bits __attribute__((__sfr__));

#define CNEN3 CNEN3
extern volatile uint16_t CNEN3 __attribute__((__sfr__));
typedef struct tagCNEN3BITS {
  uint16_t CN32IE:1;
  uint16_t CN33IE:1;
  uint16_t CN34IE:1;
  uint16_t CN35IE:1;
  uint16_t CN36IE:1;
} CNEN3BITS;
extern volatile CNEN3BITS CNEN3bits __attribute__((__sfr__));

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
  uint16_t :1;
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
  uint16_t CN24PUE:1;
  uint16_t CN25PUE:1;
  uint16_t CN26PUE:1;
  uint16_t CN27PUE:1;
  uint16_t CN28PUE:1;
  uint16_t CN29PUE:1;
  uint16_t CN30PUE:1;
  uint16_t CN31PUE:1;
} CNPU2BITS;
extern volatile CNPU2BITS CNPU2bits __attribute__((__sfr__));

#define CNPU3 CNPU3
extern volatile uint16_t CNPU3 __attribute__((__sfr__));
typedef struct tagCNPU3BITS {
  uint16_t CN32PUE:1;
  uint16_t CN33PUE:1;
  uint16_t CN34PUE:1;
  uint16_t CN35PUE:1;
  uint16_t CN36PUE:1;
} CNPU3BITS;
extern volatile CNPU3BITS CNPU3bits __attribute__((__sfr__));

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
  uint16_t CCP1IF:1;
  uint16_t CCP2IF:1;
  uint16_t T1IF:1;
  uint16_t :1;
  uint16_t CCP3IF:1;
  uint16_t CCP4IF:1;
  uint16_t CCT1IF:1;
  uint16_t CCT2IF:1;
  uint16_t :2;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t AD1IF:1;
  uint16_t :1;
  uint16_t NVMIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  uint16_t SSP1IF:1;
  uint16_t BCL1IF:1;
  uint16_t CMIF:1;
  uint16_t CNIF:1;
  uint16_t INT1IF:1;
  uint16_t :1;
  uint16_t CCP5IF:1;
  uint16_t :4;
  uint16_t CCT3IF:1;
  uint16_t CCT4IF:1;
  uint16_t INT2IF:1;
  uint16_t U2RXIF:1;
  uint16_t U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile uint16_t IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  uint16_t :9;
  uint16_t CCT5IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  uint16_t :1;
  uint16_t SSP2IF:1;
  uint16_t BCL2IF:1;
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
  uint16_t :5;
  uint16_t HLVDIF:1;
  uint16_t :4;
  uint16_t CTMUIF:1;
  uint16_t DAC1IF:1;
  uint16_t DAC2IF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile uint16_t IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  uint16_t ULPWUIF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile uint16_t IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  uint16_t CLC1IF:1;
  uint16_t CLC2IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t CCP1IE:1;
  uint16_t CCP2IE:1;
  uint16_t T1IE:1;
  uint16_t :1;
  uint16_t CCP3IE:1;
  uint16_t CCP4IE:1;
  uint16_t CCT1IE:1;
  uint16_t CCT2IE:1;
  uint16_t :2;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t AD1IE:1;
  uint16_t :1;
  uint16_t NVMIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  uint16_t SSP1IE:1;
  uint16_t BCL1IE:1;
  uint16_t CMIE:1;
  uint16_t CNIE:1;
  uint16_t INT1IE:1;
  uint16_t :1;
  uint16_t CCP5IE:1;
  uint16_t :4;
  uint16_t CCT3IE:1;
  uint16_t CCT4IE:1;
  uint16_t INT2IE:1;
  uint16_t U2RXIE:1;
  uint16_t U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile uint16_t IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  uint16_t :9;
  uint16_t CCT5IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  uint16_t :1;
  uint16_t SSP2IE:1;
  uint16_t BCL2IE:1;
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
  uint16_t :5;
  uint16_t HLVDIE:1;
  uint16_t :4;
  uint16_t CTMUIE:1;
  uint16_t DAC1IE:1;
  uint16_t DAC2IE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile uint16_t IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  uint16_t ULPWUIE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile uint16_t IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  uint16_t CLC1IE:1;
  uint16_t CLC2IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile uint16_t IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      uint16_t INT0IP:3;
      uint16_t :1;
      uint16_t CCP1IP:3;
      uint16_t :1;
      uint16_t CCP2IP:3;
      uint16_t :1;
      uint16_t T1IP:3;
    };
    struct {
      uint16_t INT0IP0:1;
      uint16_t INT0IP1:1;
      uint16_t INT0IP2:1;
      uint16_t :1;
      uint16_t CC1IP0:1;
      uint16_t CC1IP1:1;
      uint16_t CC1IP2:1;
      uint16_t :1;
      uint16_t CC2IP0:1;
      uint16_t CC2IP1:1;
      uint16_t CC2IP2:1;
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
      uint16_t CCP3IP:3;
      uint16_t :1;
      uint16_t CCP4IP:3;
      uint16_t :1;
      uint16_t CCT1IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t CC3IP0:1;
      uint16_t CC3IP1:1;
      uint16_t CC3IP2:1;
      uint16_t :1;
      uint16_t CC4IP0:1;
      uint16_t CC4IP1:1;
      uint16_t CC4IP2:1;
      uint16_t :1;
      uint16_t CCT1IP0:1;
      uint16_t CCT1IP1:1;
      uint16_t CCT1IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile uint16_t IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      uint16_t CCT2IP:3;
      uint16_t :9;
      uint16_t U1RXIP:3;
    };
    struct {
      uint16_t CCT2IP0:1;
      uint16_t CCT2IP1:1;
      uint16_t CCT2IP2:1;
      uint16_t :9;
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
      uint16_t :5;
      uint16_t NVMIP:3;
    };
    struct {
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t AD1IP0:1;
      uint16_t AD1IP1:1;
      uint16_t AD1IP2:1;
      uint16_t :5;
      uint16_t NVMIP0:1;
      uint16_t NVMIP1:1;
      uint16_t NVMIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile uint16_t IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      uint16_t SSP1IP:3;
      uint16_t :1;
      uint16_t BCL1IP:3;
      uint16_t :1;
      uint16_t CMIP:3;
      uint16_t :1;
      uint16_t CNIP:3;
    };
    struct {
      uint16_t SSP1IP0:1;
      uint16_t SSP1IP1:1;
      uint16_t SSP1IP2:1;
      uint16_t :1;
      uint16_t BCL1IP0:1;
      uint16_t BCL1IP1:1;
      uint16_t BCL1IP2:1;
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
      uint16_t CCP5IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
      uint16_t :5;
      uint16_t CCP5IP0:1;
      uint16_t CCP5IP1:1;
      uint16_t CCP5IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile uint16_t IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      uint16_t :12;
      uint16_t CCT3IP:3;
    };
    struct {
      uint16_t :12;
      uint16_t CCT3IP0:1;
      uint16_t CCT3IP1:1;
      uint16_t CCT3IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile uint16_t IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      uint16_t CCT4IP:3;
      uint16_t :1;
      uint16_t INT2IP:3;
      uint16_t :1;
      uint16_t U2RXIP:3;
      uint16_t :1;
      uint16_t U2TXIP:3;
    };
    struct {
      uint16_t CCT4IP0:1;
      uint16_t CCT4IP1:1;
      uint16_t CCT4IP2:1;
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

#define IPC10 IPC10
extern volatile uint16_t IPC10 __attribute__((__sfr__));
__extension__ typedef struct tagIPC10BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t CCT5IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t CCT5IP0:1;
      uint16_t CCT5IP1:1;
      uint16_t CCT5IP2:1;
    };
  };
} IPC10BITS;
extern volatile IPC10BITS IPC10bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile uint16_t IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t SSP2IP:3;
      uint16_t :1;
      uint16_t BCL2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t SSP2IP0:1;
      uint16_t SSP2IP1:1;
      uint16_t SSP2IP2:1;
      uint16_t :1;
      uint16_t BCL2IP0:1;
      uint16_t BCL2IP1:1;
      uint16_t BCL2IP2:1;
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
    struct {
      uint16_t :4;
      uint16_t SI2C2P:3;
      uint16_t :1;
      uint16_t MI2C2P:3;
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
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile uint16_t IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      uint16_t HLVDIP:3;
    };
    struct {
      uint16_t HLVDIP0:1;
      uint16_t HLVDIP1:1;
      uint16_t HLVDIP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

#define IPC19 IPC19
extern volatile uint16_t IPC19 __attribute__((__sfr__));
__extension__ typedef struct tagIPC19BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t CTMUIP:3;
      uint16_t :1;
      uint16_t DAC1IP:3;
      uint16_t :1;
      uint16_t DAC2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t CTMUIP0:1;
      uint16_t CTMUIP1:1;
      uint16_t CTMUIP2:1;
      uint16_t :1;
      uint16_t DAC1IP0:1;
      uint16_t DAC1IP1:1;
      uint16_t DAC1IP2:1;
      uint16_t :1;
      uint16_t DAC2IP0:1;
      uint16_t DAC2IP1:1;
      uint16_t DAC2IP2:1;
    };
  };
} IPC19BITS;
extern volatile IPC19BITS IPC19bits __attribute__((__sfr__));

#define IPC20 IPC20
extern volatile uint16_t IPC20 __attribute__((__sfr__));
__extension__ typedef struct tagIPC20BITS {
  union {
    struct {
      uint16_t ULPWUIP:3;
    };
    struct {
      uint16_t ULPWUIP0:1;
      uint16_t ULPWUIP1:1;
      uint16_t ULPWUIP2:1;
    };
  };
} IPC20BITS;
extern volatile IPC20BITS IPC20bits __attribute__((__sfr__));

#define IPC24 IPC24
extern volatile uint16_t IPC24 __attribute__((__sfr__));
__extension__ typedef struct tagIPC24BITS {
  union {
    struct {
      uint16_t CLC1IP:3;
      uint16_t :1;
      uint16_t CLC2IP:3;
    };
    struct {
      uint16_t CLC1IP0:1;
      uint16_t CLC1IP1:1;
      uint16_t CLC1IP2:1;
      uint16_t :1;
      uint16_t CLC2IP0:1;
      uint16_t CLC2IP1:1;
      uint16_t CLC2IP2:1;
    };
  };
} IPC24BITS;
extern volatile IPC24BITS IPC24bits __attribute__((__sfr__));

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
      uint16_t :1;
      uint16_t TECS:2;
      uint16_t :3;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
      uint16_t :2;
      uint16_t T1ECS0:1;
      uint16_t T1ECS1:1;
    };
    struct {
      uint16_t :8;
      uint16_t T1ECS:2;
    };
    struct {
      uint16_t :8;
      uint16_t TECS0:1;
      uint16_t TECS1:1;
    };
    struct {
      uint16_t :8;
      uint16_t TIECS:2;
    };
    struct {
      uint16_t :8;
      uint16_t TIECS0:1;
      uint16_t TIECS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define CLC1CONL CLC1CONL
extern volatile uint16_t CLC1CONL __attribute__((__sfr__));
__extension__ typedef struct tagCLC1CONLBITS {
  union {
    struct {
      uint16_t MODE:3;
      uint16_t :2;
      uint16_t LCPOL:1;
      uint16_t LCOUT:1;
      uint16_t LCOE:1;
      uint16_t :2;
      uint16_t INTN:1;
      uint16_t INTP:1;
      uint16_t :3;
      uint16_t LCEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t MODE2:1;
    };
  };
} CLC1CONLBITS;
extern volatile CLC1CONLBITS CLC1CONLbits __attribute__((__sfr__));

#define CLC1CONH CLC1CONH
extern volatile uint16_t CLC1CONH __attribute__((__sfr__));
typedef struct tagCLC1CONHBITS {
  uint16_t G1POL:1;
  uint16_t G2POL:1;
  uint16_t G3POL:1;
  uint16_t G4POL:1;
} CLC1CONHBITS;
extern volatile CLC1CONHBITS CLC1CONHbits __attribute__((__sfr__));

#define CLC1SEL CLC1SEL
extern volatile uint16_t CLC1SEL __attribute__((__sfr__));
__extension__ typedef struct tagCLC1SELBITS {
  union {
    struct {
      uint16_t DS1:3;
      uint16_t :1;
      uint16_t DS2:3;
      uint16_t :1;
      uint16_t DS3:3;
      uint16_t :1;
      uint16_t DS4:3;
    };
    struct {
      uint16_t DS10:1;
      uint16_t DS11:1;
      uint16_t DS12:1;
      uint16_t :1;
      uint16_t DS20:1;
      uint16_t DS21:1;
      uint16_t DS22:1;
      uint16_t :1;
      uint16_t DS30:1;
      uint16_t DS31:1;
      uint16_t DS32:1;
      uint16_t :1;
      uint16_t DS40:1;
      uint16_t DS41:1;
      uint16_t DS42:1;
    };
  };
} CLC1SELBITS;
extern volatile CLC1SELBITS CLC1SELbits __attribute__((__sfr__));

#define CLC1SELL CLC1SELL
extern volatile uint16_t CLC1SELL __attribute__((__sfr__));
__extension__ typedef struct tagCLC1SELLBITS {
  union {
    struct {
      uint16_t DS1:3;
      uint16_t :1;
      uint16_t DS2:3;
      uint16_t :1;
      uint16_t DS3:3;
      uint16_t :1;
      uint16_t DS4:3;
    };
    struct {
      uint16_t DS10:1;
      uint16_t DS11:1;
      uint16_t DS12:1;
      uint16_t :1;
      uint16_t DS20:1;
      uint16_t DS21:1;
      uint16_t DS22:1;
      uint16_t :1;
      uint16_t DS30:1;
      uint16_t DS31:1;
      uint16_t DS32:1;
      uint16_t :1;
      uint16_t DS40:1;
      uint16_t DS41:1;
      uint16_t DS42:1;
    };
  };
} CLC1SELLBITS;
extern volatile CLC1SELLBITS CLC1SELLbits __attribute__((__sfr__));

#define CLC1GLSL CLC1GLSL
extern volatile uint16_t CLC1GLSL __attribute__((__sfr__));
typedef struct tagCLC1GLSLBITS {
  uint16_t G1D1N:1;
  uint16_t G1D1T:1;
  uint16_t G1D2N:1;
  uint16_t G1D2T:1;
  uint16_t G1D3N:1;
  uint16_t G1D3T:1;
  uint16_t G1D4N:1;
  uint16_t G1D4T:1;
  uint16_t G2D1N:1;
  uint16_t G2D1T:1;
  uint16_t G2D2N:1;
  uint16_t G2D2T:1;
  uint16_t G2D3N:1;
  uint16_t G2D3T:1;
  uint16_t G2D4N:1;
  uint16_t G2D4T:1;
} CLC1GLSLBITS;
extern volatile CLC1GLSLBITS CLC1GLSLbits __attribute__((__sfr__));

#define CLC1GLSH CLC1GLSH
extern volatile uint16_t CLC1GLSH __attribute__((__sfr__));
typedef struct tagCLC1GLSHBITS {
  uint16_t G3D1N:1;
  uint16_t G3D1T:1;
  uint16_t G3D2N:1;
  uint16_t G3D2T:1;
  uint16_t G3D3N:1;
  uint16_t G3D3T:1;
  uint16_t G3D4N:1;
  uint16_t G3D4T:1;
  uint16_t G4D1N:1;
  uint16_t G4D1T:1;
  uint16_t G4D2N:1;
  uint16_t G4D2T:1;
  uint16_t G4D3N:1;
  uint16_t G4D3T:1;
  uint16_t G4D4N:1;
  uint16_t G4D4T:1;
} CLC1GLSHBITS;
extern volatile CLC1GLSHBITS CLC1GLSHbits __attribute__((__sfr__));

#define CLC2CONL CLC2CONL
extern volatile uint16_t CLC2CONL __attribute__((__sfr__));
__extension__ typedef struct tagCLC2CONLBITS {
  union {
    struct {
      uint16_t MODE:3;
      uint16_t :2;
      uint16_t LCPOL:1;
      uint16_t LCOUT:1;
      uint16_t LCOE:1;
      uint16_t :2;
      uint16_t INTN:1;
      uint16_t INTP:1;
      uint16_t :3;
      uint16_t LCEN:1;
    };
    struct {
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t MODE2:1;
    };
  };
} CLC2CONLBITS;
extern volatile CLC2CONLBITS CLC2CONLbits __attribute__((__sfr__));

#define CLC2CONH CLC2CONH
extern volatile uint16_t CLC2CONH __attribute__((__sfr__));
typedef struct tagCLC2CONHBITS {
  uint16_t G1POL:1;
  uint16_t G2POL:1;
  uint16_t G3POL:1;
  uint16_t G4POL:1;
} CLC2CONHBITS;
extern volatile CLC2CONHBITS CLC2CONHbits __attribute__((__sfr__));

#define CLC2SEL CLC2SEL
extern volatile uint16_t CLC2SEL __attribute__((__sfr__));
__extension__ typedef struct tagCLC2SELBITS {
  union {
    struct {
      uint16_t DS1:3;
      uint16_t :1;
      uint16_t DS2:3;
      uint16_t :1;
      uint16_t DS3:3;
      uint16_t :1;
      uint16_t DS4:3;
    };
    struct {
      uint16_t DS10:1;
      uint16_t DS11:1;
      uint16_t DS12:1;
      uint16_t :1;
      uint16_t DS20:1;
      uint16_t DS21:1;
      uint16_t DS22:1;
      uint16_t :1;
      uint16_t DS30:1;
      uint16_t DS31:1;
      uint16_t DS32:1;
      uint16_t :1;
      uint16_t DS40:1;
      uint16_t DS41:1;
      uint16_t DS42:1;
    };
  };
} CLC2SELBITS;
extern volatile CLC2SELBITS CLC2SELbits __attribute__((__sfr__));

#define CLC2SELL CLC2SELL
extern volatile uint16_t CLC2SELL __attribute__((__sfr__));
__extension__ typedef struct tagCLC2SELLBITS {
  union {
    struct {
      uint16_t DS1:3;
      uint16_t :1;
      uint16_t DS2:3;
      uint16_t :1;
      uint16_t DS3:3;
      uint16_t :1;
      uint16_t DS4:3;
    };
    struct {
      uint16_t DS10:1;
      uint16_t DS11:1;
      uint16_t DS12:1;
      uint16_t :1;
      uint16_t DS20:1;
      uint16_t DS21:1;
      uint16_t DS22:1;
      uint16_t :1;
      uint16_t DS30:1;
      uint16_t DS31:1;
      uint16_t DS32:1;
      uint16_t :1;
      uint16_t DS40:1;
      uint16_t DS41:1;
      uint16_t DS42:1;
    };
  };
} CLC2SELLBITS;
extern volatile CLC2SELLBITS CLC2SELLbits __attribute__((__sfr__));

#define CLC2GLSL CLC2GLSL
extern volatile uint16_t CLC2GLSL __attribute__((__sfr__));
typedef struct tagCLC2GLSLBITS {
  uint16_t G1D1N:1;
  uint16_t G1D1T:1;
  uint16_t G1D2N:1;
  uint16_t G1D2T:1;
  uint16_t G1D3N:1;
  uint16_t G1D3T:1;
  uint16_t G1D4N:1;
  uint16_t G1D4T:1;
  uint16_t G2D1N:1;
  uint16_t G2D1T:1;
  uint16_t G2D2N:1;
  uint16_t G2D2T:1;
  uint16_t G2D3N:1;
  uint16_t G2D3T:1;
  uint16_t G2D4N:1;
  uint16_t G2D4T:1;
} CLC2GLSLBITS;
extern volatile CLC2GLSLBITS CLC2GLSLbits __attribute__((__sfr__));

#define CLC2GLSH CLC2GLSH
extern volatile uint16_t CLC2GLSH __attribute__((__sfr__));
typedef struct tagCLC2GLSHBITS {
  uint16_t G3D1N:1;
  uint16_t G3D1T:1;
  uint16_t G3D2N:1;
  uint16_t G3D2T:1;
  uint16_t G3D3N:1;
  uint16_t G3D3T:1;
  uint16_t G3D4N:1;
  uint16_t G3D4T:1;
  uint16_t G4D1N:1;
  uint16_t G4D1T:1;
  uint16_t G4D2N:1;
  uint16_t G4D2T:1;
  uint16_t G4D3N:1;
  uint16_t G4D3T:1;
  uint16_t G4D4N:1;
  uint16_t G4D4T:1;
} CLC2GLSHBITS;
extern volatile CLC2GLSHBITS CLC2GLSHbits __attribute__((__sfr__));

#define CCP1CON1L CCP1CON1L
extern volatile uint16_t CCP1CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON1LBITS {
  union {
    struct {
      uint16_t MOD:4;
      uint16_t CCSEL:1;
      uint16_t T32:1;
      uint16_t TMRPS:2;
      uint16_t CLKSEL:3;
      uint16_t TMRSYNC:1;
      uint16_t CCPSLP:1;
      uint16_t CCPSIDL:1;
      uint16_t :1;
      uint16_t CCPON:1;
    };
    struct {
      uint16_t MOD0:1;
      uint16_t MOD1:1;
      uint16_t MOD2:1;
      uint16_t MOD3:1;
      uint16_t :1;
      uint16_t TMR32:1;
      uint16_t TMRPS0:1;
      uint16_t TMRPS1:1;
      uint16_t CLKSEL0:1;
      uint16_t CLKSEL1:1;
      uint16_t CLKSEL2:1;
    };
    struct {
      uint16_t CCPMOD:4;
    };
    struct {
      uint16_t CCPMOD0:1;
      uint16_t CCPMOD1:1;
      uint16_t CCPMOD2:1;
      uint16_t CCPMOD3:1;
    };
  };
} CCP1CON1LBITS;
extern volatile CCP1CON1LBITS CCP1CON1Lbits __attribute__((__sfr__));

#define CCP1CON1H CCP1CON1H
extern volatile uint16_t CCP1CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON1HBITS {
  union {
    struct {
      uint16_t SYNC:5;
      uint16_t ALTSYNC:1;
      uint16_t ONESHOT:1;
      uint16_t TRIGEN:1;
      uint16_t OPS:4;
      uint16_t :2;
      uint16_t RTRGEN:1;
      uint16_t OPSSRC:1;
    };
    struct {
      uint16_t SYNC0:1;
      uint16_t SYNC1:1;
      uint16_t SYNC2:1;
      uint16_t SYNC3:1;
      uint16_t SYNC4:1;
      uint16_t :3;
      uint16_t OPS0:1;
      uint16_t OPS1:1;
      uint16_t OPS2:1;
      uint16_t OPS3:1;
      uint16_t :3;
      uint16_t OPSRC:1;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS0:1;
      uint16_t IOPS1:1;
      uint16_t IOPS2:1;
      uint16_t IOPS3:1;
    };
  };
} CCP1CON1HBITS;
extern volatile CCP1CON1HBITS CCP1CON1Hbits __attribute__((__sfr__));

#define CCP1CON2L CCP1CON2L
extern volatile uint16_t CCP1CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON2LBITS {
  union {
    struct {
      uint16_t ASDG:8;
      uint16_t :4;
      uint16_t SSDG:1;
      uint16_t :1;
      uint16_t ASDGM:1;
      uint16_t PWMRSEN:1;
    };
    struct {
      uint16_t ASDG0:1;
      uint16_t ASDG1:1;
      uint16_t ASDG2:1;
      uint16_t ASDG3:1;
      uint16_t ASDG4:1;
      uint16_t ASDG5:1;
      uint16_t ASDG6:1;
      uint16_t ASDG7:1;
    };
  };
} CCP1CON2LBITS;
extern volatile CCP1CON2LBITS CCP1CON2Lbits __attribute__((__sfr__));

#define CCP1CON2H CCP1CON2H
extern volatile uint16_t CCP1CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON2HBITS {
  union {
    struct {
      uint16_t ICS:3;
      uint16_t AUXOUT:2;
      uint16_t :1;
      uint16_t ICGSM:2;
      uint16_t OCAEN:1;
      uint16_t OCBEN:1;
      uint16_t OCCEN:1;
      uint16_t OCDEN:1;
      uint16_t OCEEN:1;
      uint16_t OCFEN:1;
      uint16_t :1;
      uint16_t OENSYNC:1;
    };
    struct {
      uint16_t ICS0:1;
      uint16_t ICS1:1;
      uint16_t ICS2:1;
      uint16_t AUXOUT0:1;
      uint16_t AUXOUT1:1;
      uint16_t :1;
      uint16_t ICGSM0:1;
      uint16_t ICGSM1:1;
    };
    struct {
      uint16_t ICSEL:3;
    };
    struct {
      uint16_t ICSEL0:1;
      uint16_t ICSEL1:1;
      uint16_t ICSEL2:1;
    };
  };
} CCP1CON2HBITS;
extern volatile CCP1CON2HBITS CCP1CON2Hbits __attribute__((__sfr__));

#define CCP1CON3L CCP1CON3L
extern volatile uint16_t CCP1CON3L __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON3LBITS {
  union {
    struct {
      uint16_t DT:6;
    };
    struct {
      uint16_t DT0:1;
      uint16_t DT1:1;
      uint16_t DT2:1;
      uint16_t DT3:1;
      uint16_t DT4:1;
      uint16_t DT5:1;
    };
  };
} CCP1CON3LBITS;
extern volatile CCP1CON3LBITS CCP1CON3Lbits __attribute__((__sfr__));

#define CCP1CON3H CCP1CON3H
extern volatile uint16_t CCP1CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON3HBITS {
  union {
    struct {
      uint16_t PSSBDF:2;
      uint16_t PSSACE:2;
      uint16_t POLBDF:1;
      uint16_t POLACE:1;
      uint16_t :2;
      uint16_t OUTM:3;
      uint16_t :1;
      uint16_t OSCNT:3;
      uint16_t OETRIG:1;
    };
    struct {
      uint16_t PSSBDF0:1;
      uint16_t PSSBDF1:1;
      uint16_t PSSACE0:1;
      uint16_t PSSACE1:1;
      uint16_t :4;
      uint16_t OUTM0:1;
      uint16_t OUTM1:1;
      uint16_t OUTM2:1;
      uint16_t :1;
      uint16_t OSCNT0:1;
      uint16_t OSCNT1:1;
      uint16_t OSCNT2:1;
    };
  };
} CCP1CON3HBITS;
extern volatile CCP1CON3HBITS CCP1CON3Hbits __attribute__((__sfr__));

#define CCP1STAT CCP1STAT
extern volatile uint16_t CCP1STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP1STATBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP1STATBITS;
extern volatile CCP1STATBITS CCP1STATbits __attribute__((__sfr__));

#define CCP1STATL CCP1STATL
extern volatile uint16_t CCP1STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP1STATLBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP1STATLBITS;
extern volatile CCP1STATLBITS CCP1STATLbits __attribute__((__sfr__));

#define CCP1TMRL CCP1TMRL
extern volatile uint16_t CCP1TMRL __attribute__((__sfr__));
#define CCP1TMRH CCP1TMRH
extern volatile uint16_t CCP1TMRH __attribute__((__sfr__));
#define CCP1PRL CCP1PRL
extern volatile uint16_t CCP1PRL __attribute__((__sfr__));
#define CCP1PRH CCP1PRH
extern volatile uint16_t CCP1PRH __attribute__((__sfr__));
#define CCP1RA CCP1RA
extern volatile uint16_t CCP1RA __attribute__((__sfr__));
#define CCP1RAL CCP1RAL
extern volatile uint16_t CCP1RAL __attribute__((__sfr__));
#define CCP1RB CCP1RB
extern volatile uint16_t CCP1RB __attribute__((__sfr__));
#define CCP1RBL CCP1RBL
extern volatile uint16_t CCP1RBL __attribute__((__sfr__));
#define CCP1BUFL CCP1BUFL
extern volatile uint16_t CCP1BUFL __attribute__((__sfr__));
#define CCP1BUFH CCP1BUFH
extern volatile uint16_t CCP1BUFH __attribute__((__sfr__));
#define CCP2CON1L CCP2CON1L
extern volatile uint16_t CCP2CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON1LBITS {
  union {
    struct {
      uint16_t MOD:4;
      uint16_t CCSEL:1;
      uint16_t T32:1;
      uint16_t TMRPS:2;
      uint16_t CLKSEL:3;
      uint16_t TMRSYNC:1;
      uint16_t CCPSLP:1;
      uint16_t CCPSIDL:1;
      uint16_t :1;
      uint16_t CCPON:1;
    };
    struct {
      uint16_t MOD0:1;
      uint16_t MOD1:1;
      uint16_t MOD2:1;
      uint16_t MOD3:1;
      uint16_t :1;
      uint16_t TMR32:1;
      uint16_t TMRPS0:1;
      uint16_t TMRPS1:1;
      uint16_t CLKSEL0:1;
      uint16_t CLKSEL1:1;
      uint16_t CLKSEL2:1;
    };
    struct {
      uint16_t CCPMOD:4;
    };
    struct {
      uint16_t CCPMOD0:1;
      uint16_t CCPMOD1:1;
      uint16_t CCPMOD2:1;
      uint16_t CCPMOD3:1;
    };
  };
} CCP2CON1LBITS;
extern volatile CCP2CON1LBITS CCP2CON1Lbits __attribute__((__sfr__));

#define CCP2CON1H CCP2CON1H
extern volatile uint16_t CCP2CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON1HBITS {
  union {
    struct {
      uint16_t SYNC:5;
      uint16_t ALTSYNC:1;
      uint16_t ONESHOT:1;
      uint16_t TRIGEN:1;
      uint16_t OPS:4;
      uint16_t :2;
      uint16_t RTRGEN:1;
      uint16_t OPSSRC:1;
    };
    struct {
      uint16_t SYNC0:1;
      uint16_t SYNC1:1;
      uint16_t SYNC2:1;
      uint16_t SYNC3:1;
      uint16_t SYNC4:1;
      uint16_t :3;
      uint16_t OPS0:1;
      uint16_t OPS1:1;
      uint16_t OPS2:1;
      uint16_t OPS3:1;
      uint16_t :3;
      uint16_t OPSRC:1;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS0:1;
      uint16_t IOPS1:1;
      uint16_t IOPS2:1;
      uint16_t IOPS3:1;
    };
  };
} CCP2CON1HBITS;
extern volatile CCP2CON1HBITS CCP2CON1Hbits __attribute__((__sfr__));

#define CCP2CON2L CCP2CON2L
extern volatile uint16_t CCP2CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON2LBITS {
  union {
    struct {
      uint16_t ASDG:8;
      uint16_t :4;
      uint16_t SSDG:1;
      uint16_t :1;
      uint16_t ASDGM:1;
      uint16_t PWMRSEN:1;
    };
    struct {
      uint16_t ASDG0:1;
      uint16_t ASDG1:1;
      uint16_t ASDG2:1;
      uint16_t ASDG3:1;
      uint16_t ASDG4:1;
      uint16_t ASDG5:1;
      uint16_t ASDG6:1;
      uint16_t ASDG7:1;
    };
  };
} CCP2CON2LBITS;
extern volatile CCP2CON2LBITS CCP2CON2Lbits __attribute__((__sfr__));

#define CCP2CON2H CCP2CON2H
extern volatile uint16_t CCP2CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON2HBITS {
  union {
    struct {
      uint16_t ICS:3;
      uint16_t AUXOUT:2;
      uint16_t :1;
      uint16_t ICGSM:2;
      uint16_t OCAEN:1;
      uint16_t OCBEN:1;
      uint16_t OCCEN:1;
      uint16_t OCDEN:1;
      uint16_t OCEEN:1;
      uint16_t OCFEN:1;
      uint16_t :1;
      uint16_t OENSYNC:1;
    };
    struct {
      uint16_t ICS0:1;
      uint16_t ICS1:1;
      uint16_t ICS2:1;
      uint16_t AUXOUT0:1;
      uint16_t AUXOUT1:1;
      uint16_t :1;
      uint16_t ICGSM0:1;
      uint16_t ICGSM1:1;
    };
    struct {
      uint16_t ICSEL:3;
    };
    struct {
      uint16_t ICSEL0:1;
      uint16_t ICSEL1:1;
      uint16_t ICSEL2:1;
    };
  };
} CCP2CON2HBITS;
extern volatile CCP2CON2HBITS CCP2CON2Hbits __attribute__((__sfr__));

#define CCP2CON3L CCP2CON3L
extern volatile uint16_t CCP2CON3L __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON3LBITS {
  union {
    struct {
      uint16_t DT:6;
    };
    struct {
      uint16_t DT0:1;
      uint16_t DT1:1;
      uint16_t DT2:1;
      uint16_t DT3:1;
      uint16_t DT4:1;
      uint16_t DT5:1;
    };
  };
} CCP2CON3LBITS;
extern volatile CCP2CON3LBITS CCP2CON3Lbits __attribute__((__sfr__));

#define CCP2CON3H CCP2CON3H
extern volatile uint16_t CCP2CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON3HBITS {
  union {
    struct {
      uint16_t PSSBDF:2;
      uint16_t PSSACE:2;
      uint16_t POLBDF:1;
      uint16_t POLACE:1;
      uint16_t :2;
      uint16_t OUTM:3;
      uint16_t :1;
      uint16_t OSCNT:3;
      uint16_t OETRIG:1;
    };
    struct {
      uint16_t PSSBDF0:1;
      uint16_t PSSBDF1:1;
      uint16_t PSSACE0:1;
      uint16_t PSSACE1:1;
      uint16_t :4;
      uint16_t OUTM0:1;
      uint16_t OUTM1:1;
      uint16_t OUTM2:1;
      uint16_t :1;
      uint16_t OSCNT0:1;
      uint16_t OSCNT1:1;
      uint16_t OSCNT2:1;
    };
  };
} CCP2CON3HBITS;
extern volatile CCP2CON3HBITS CCP2CON3Hbits __attribute__((__sfr__));

#define CCP2STAT CCP2STAT
extern volatile uint16_t CCP2STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP2STATBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP2STATBITS;
extern volatile CCP2STATBITS CCP2STATbits __attribute__((__sfr__));

#define CCP2STATL CCP2STATL
extern volatile uint16_t CCP2STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP2STATLBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP2STATLBITS;
extern volatile CCP2STATLBITS CCP2STATLbits __attribute__((__sfr__));

#define CCP2TMRL CCP2TMRL
extern volatile uint16_t CCP2TMRL __attribute__((__sfr__));
#define CCP2TMRH CCP2TMRH
extern volatile uint16_t CCP2TMRH __attribute__((__sfr__));
#define CCP2PRL CCP2PRL
extern volatile uint16_t CCP2PRL __attribute__((__sfr__));
#define CCP2PRH CCP2PRH
extern volatile uint16_t CCP2PRH __attribute__((__sfr__));
#define CCP2RA CCP2RA
extern volatile uint16_t CCP2RA __attribute__((__sfr__));
#define CCP2RAL CCP2RAL
extern volatile uint16_t CCP2RAL __attribute__((__sfr__));
#define CCP2RB CCP2RB
extern volatile uint16_t CCP2RB __attribute__((__sfr__));
#define CCP2RBL CCP2RBL
extern volatile uint16_t CCP2RBL __attribute__((__sfr__));
#define CCP2BUFL CCP2BUFL
extern volatile uint16_t CCP2BUFL __attribute__((__sfr__));
#define CCP2BUFH CCP2BUFH
extern volatile uint16_t CCP2BUFH __attribute__((__sfr__));
#define CCP3CON1L CCP3CON1L
extern volatile uint16_t CCP3CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CON1LBITS {
  union {
    struct {
      uint16_t MOD:4;
      uint16_t CCSEL:1;
      uint16_t T32:1;
      uint16_t TMRPS:2;
      uint16_t CLKSEL:3;
      uint16_t TMRSYNC:1;
      uint16_t CCPSLP:1;
      uint16_t CCPSIDL:1;
      uint16_t :1;
      uint16_t CCPON:1;
    };
    struct {
      uint16_t MOD0:1;
      uint16_t MOD1:1;
      uint16_t MOD2:1;
      uint16_t MOD3:1;
      uint16_t :1;
      uint16_t TMR32:1;
      uint16_t TMRPS0:1;
      uint16_t TMRPS1:1;
      uint16_t CLKSEL0:1;
      uint16_t CLKSEL1:1;
      uint16_t CLKSEL2:1;
    };
    struct {
      uint16_t CCPMOD:4;
    };
    struct {
      uint16_t CCPMOD0:1;
      uint16_t CCPMOD1:1;
      uint16_t CCPMOD2:1;
      uint16_t CCPMOD3:1;
    };
  };
} CCP3CON1LBITS;
extern volatile CCP3CON1LBITS CCP3CON1Lbits __attribute__((__sfr__));

#define CCP3CON1H CCP3CON1H
extern volatile uint16_t CCP3CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CON1HBITS {
  union {
    struct {
      uint16_t SYNC:5;
      uint16_t ALTSYNC:1;
      uint16_t ONESHOT:1;
      uint16_t TRIGEN:1;
      uint16_t OPS:4;
      uint16_t :2;
      uint16_t RTRGEN:1;
      uint16_t OPSSRC:1;
    };
    struct {
      uint16_t SYNC0:1;
      uint16_t SYNC1:1;
      uint16_t SYNC2:1;
      uint16_t SYNC3:1;
      uint16_t SYNC4:1;
      uint16_t :3;
      uint16_t OPS0:1;
      uint16_t OPS1:1;
      uint16_t OPS2:1;
      uint16_t OPS3:1;
      uint16_t :3;
      uint16_t OPSRC:1;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS0:1;
      uint16_t IOPS1:1;
      uint16_t IOPS2:1;
      uint16_t IOPS3:1;
    };
  };
} CCP3CON1HBITS;
extern volatile CCP3CON1HBITS CCP3CON1Hbits __attribute__((__sfr__));

#define CCP3CON2L CCP3CON2L
extern volatile uint16_t CCP3CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CON2LBITS {
  union {
    struct {
      uint16_t ASDG:8;
      uint16_t :4;
      uint16_t SSDG:1;
      uint16_t :1;
      uint16_t ASDGM:1;
      uint16_t PWMRSEN:1;
    };
    struct {
      uint16_t ASDG0:1;
      uint16_t ASDG1:1;
      uint16_t ASDG2:1;
      uint16_t ASDG3:1;
      uint16_t ASDG4:1;
      uint16_t ASDG5:1;
      uint16_t ASDG6:1;
      uint16_t ASDG7:1;
    };
  };
} CCP3CON2LBITS;
extern volatile CCP3CON2LBITS CCP3CON2Lbits __attribute__((__sfr__));

#define CCP3CON2H CCP3CON2H
extern volatile uint16_t CCP3CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CON2HBITS {
  union {
    struct {
      uint16_t ICS:3;
      uint16_t AUXOUT:2;
      uint16_t :1;
      uint16_t ICGSM:2;
      uint16_t OCAEN:1;
      uint16_t OCBEN:1;
      uint16_t OCCEN:1;
      uint16_t OCDEN:1;
      uint16_t OCEEN:1;
      uint16_t OCFEN:1;
      uint16_t :1;
      uint16_t OENSYNC:1;
    };
    struct {
      uint16_t ICS0:1;
      uint16_t ICS1:1;
      uint16_t ICS2:1;
      uint16_t AUXOUT0:1;
      uint16_t AUXOUT1:1;
      uint16_t :1;
      uint16_t ICGSM0:1;
      uint16_t ICGSM1:1;
    };
    struct {
      uint16_t ICSEL:3;
    };
    struct {
      uint16_t ICSEL0:1;
      uint16_t ICSEL1:1;
      uint16_t ICSEL2:1;
    };
  };
} CCP3CON2HBITS;
extern volatile CCP3CON2HBITS CCP3CON2Hbits __attribute__((__sfr__));

#define CCP3CON3L CCP3CON3L
extern volatile uint16_t CCP3CON3L __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CON3LBITS {
  union {
    struct {
      uint16_t DT:6;
    };
    struct {
      uint16_t DT0:1;
      uint16_t DT1:1;
      uint16_t DT2:1;
      uint16_t DT3:1;
      uint16_t DT4:1;
      uint16_t DT5:1;
    };
  };
} CCP3CON3LBITS;
extern volatile CCP3CON3LBITS CCP3CON3Lbits __attribute__((__sfr__));

#define CCP3CON3H CCP3CON3H
extern volatile uint16_t CCP3CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CON3HBITS {
  union {
    struct {
      uint16_t PSSBDF:2;
      uint16_t PSSACE:2;
      uint16_t POLBDF:1;
      uint16_t POLACE:1;
      uint16_t :2;
      uint16_t OUTM:3;
      uint16_t :1;
      uint16_t OSCNT:3;
      uint16_t OETRIG:1;
    };
    struct {
      uint16_t PSSBDF0:1;
      uint16_t PSSBDF1:1;
      uint16_t PSSACE0:1;
      uint16_t PSSACE1:1;
      uint16_t :4;
      uint16_t OUTM0:1;
      uint16_t OUTM1:1;
      uint16_t OUTM2:1;
      uint16_t :1;
      uint16_t OSCNT0:1;
      uint16_t OSCNT1:1;
      uint16_t OSCNT2:1;
    };
  };
} CCP3CON3HBITS;
extern volatile CCP3CON3HBITS CCP3CON3Hbits __attribute__((__sfr__));

#define CCP3STAT CCP3STAT
extern volatile uint16_t CCP3STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP3STATBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP3STATBITS;
extern volatile CCP3STATBITS CCP3STATbits __attribute__((__sfr__));

#define CCP3STATL CCP3STATL
extern volatile uint16_t CCP3STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP3STATLBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP3STATLBITS;
extern volatile CCP3STATLBITS CCP3STATLbits __attribute__((__sfr__));

#define CCP3TMRL CCP3TMRL
extern volatile uint16_t CCP3TMRL __attribute__((__sfr__));
#define CCP3TMRH CCP3TMRH
extern volatile uint16_t CCP3TMRH __attribute__((__sfr__));
#define CCP3PRL CCP3PRL
extern volatile uint16_t CCP3PRL __attribute__((__sfr__));
#define CCP3PRH CCP3PRH
extern volatile uint16_t CCP3PRH __attribute__((__sfr__));
#define CCP3RA CCP3RA
extern volatile uint16_t CCP3RA __attribute__((__sfr__));
#define CCP3RAL CCP3RAL
extern volatile uint16_t CCP3RAL __attribute__((__sfr__));
#define CCP3RB CCP3RB
extern volatile uint16_t CCP3RB __attribute__((__sfr__));
#define CCP3RBL CCP3RBL
extern volatile uint16_t CCP3RBL __attribute__((__sfr__));
#define CCP3BUFL CCP3BUFL
extern volatile uint16_t CCP3BUFL __attribute__((__sfr__));
#define CCP3BUFH CCP3BUFH
extern volatile uint16_t CCP3BUFH __attribute__((__sfr__));
#define CCP4CON1L CCP4CON1L
extern volatile uint16_t CCP4CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP4CON1LBITS {
  union {
    struct {
      uint16_t MOD:4;
      uint16_t CCSEL:1;
      uint16_t T32:1;
      uint16_t TMRPS:2;
      uint16_t CLKSEL:3;
      uint16_t TMRSYNC:1;
      uint16_t CCPSLP:1;
      uint16_t CCPSIDL:1;
      uint16_t :1;
      uint16_t CCPON:1;
    };
    struct {
      uint16_t MOD0:1;
      uint16_t MOD1:1;
      uint16_t MOD2:1;
      uint16_t MOD3:1;
      uint16_t :1;
      uint16_t TMR32:1;
      uint16_t TMRPS0:1;
      uint16_t TMRPS1:1;
      uint16_t CLKSEL0:1;
      uint16_t CLKSEL1:1;
      uint16_t CLKSEL2:1;
    };
    struct {
      uint16_t CCPMOD:4;
    };
    struct {
      uint16_t CCPMOD0:1;
      uint16_t CCPMOD1:1;
      uint16_t CCPMOD2:1;
      uint16_t CCPMOD3:1;
    };
  };
} CCP4CON1LBITS;
extern volatile CCP4CON1LBITS CCP4CON1Lbits __attribute__((__sfr__));

#define CCP4CON1H CCP4CON1H
extern volatile uint16_t CCP4CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP4CON1HBITS {
  union {
    struct {
      uint16_t SYNC:5;
      uint16_t ALTSYNC:1;
      uint16_t ONESHOT:1;
      uint16_t TRIGEN:1;
      uint16_t OPS:4;
      uint16_t :2;
      uint16_t RTRGEN:1;
      uint16_t OPSSRC:1;
    };
    struct {
      uint16_t SYNC0:1;
      uint16_t SYNC1:1;
      uint16_t SYNC2:1;
      uint16_t SYNC3:1;
      uint16_t SYNC4:1;
      uint16_t :3;
      uint16_t OPS0:1;
      uint16_t OPS1:1;
      uint16_t OPS2:1;
      uint16_t OPS3:1;
      uint16_t :3;
      uint16_t OPSRC:1;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS0:1;
      uint16_t IOPS1:1;
      uint16_t IOPS2:1;
      uint16_t IOPS3:1;
    };
  };
} CCP4CON1HBITS;
extern volatile CCP4CON1HBITS CCP4CON1Hbits __attribute__((__sfr__));

#define CCP4CON2L CCP4CON2L
extern volatile uint16_t CCP4CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP4CON2LBITS {
  union {
    struct {
      uint16_t ASDG:8;
      uint16_t :4;
      uint16_t SSDG:1;
      uint16_t :1;
      uint16_t ASDGM:1;
      uint16_t PWMRSEN:1;
    };
    struct {
      uint16_t ASDG0:1;
      uint16_t ASDG1:1;
      uint16_t ASDG2:1;
      uint16_t ASDG3:1;
      uint16_t ASDG4:1;
      uint16_t ASDG5:1;
      uint16_t ASDG6:1;
      uint16_t ASDG7:1;
    };
  };
} CCP4CON2LBITS;
extern volatile CCP4CON2LBITS CCP4CON2Lbits __attribute__((__sfr__));

#define CCP4CON2H CCP4CON2H
extern volatile uint16_t CCP4CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP4CON2HBITS {
  union {
    struct {
      uint16_t ICS:3;
      uint16_t AUXOUT:2;
      uint16_t :1;
      uint16_t ICGSM:2;
      uint16_t OCAEN:1;
      uint16_t :6;
      uint16_t OENSYNC:1;
    };
    struct {
      uint16_t ICS0:1;
      uint16_t ICS1:1;
      uint16_t ICS2:1;
      uint16_t AUXOUT0:1;
      uint16_t AUXOUT1:1;
      uint16_t :1;
      uint16_t ICGSM0:1;
      uint16_t ICGSM1:1;
    };
    struct {
      uint16_t ICSEL:3;
    };
    struct {
      uint16_t ICSEL0:1;
      uint16_t ICSEL1:1;
      uint16_t ICSEL2:1;
    };
  };
} CCP4CON2HBITS;
extern volatile CCP4CON2HBITS CCP4CON2Hbits __attribute__((__sfr__));

#define CCP4CON3H CCP4CON3H
extern volatile uint16_t CCP4CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP4CON3HBITS {
  union {
    struct {
      uint16_t :2;
      uint16_t PSSACE:2;
      uint16_t :1;
      uint16_t POLACE:1;
      uint16_t :6;
      uint16_t OSCNT:3;
      uint16_t OETRIG:1;
    };
    struct {
      uint16_t :2;
      uint16_t PSSACE0:1;
      uint16_t PSSACE1:1;
      uint16_t :8;
      uint16_t OSCNT0:1;
      uint16_t OSCNT1:1;
      uint16_t OSCNT2:1;
    };
  };
} CCP4CON3HBITS;
extern volatile CCP4CON3HBITS CCP4CON3Hbits __attribute__((__sfr__));

#define CCP4STAT CCP4STAT
extern volatile uint16_t CCP4STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP4STATBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP4STATBITS;
extern volatile CCP4STATBITS CCP4STATbits __attribute__((__sfr__));

#define CCP4STATL CCP4STATL
extern volatile uint16_t CCP4STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP4STATLBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP4STATLBITS;
extern volatile CCP4STATLBITS CCP4STATLbits __attribute__((__sfr__));

#define CCP4TMRL CCP4TMRL
extern volatile uint16_t CCP4TMRL __attribute__((__sfr__));
#define CCP4TMRH CCP4TMRH
extern volatile uint16_t CCP4TMRH __attribute__((__sfr__));
#define CCP4PRL CCP4PRL
extern volatile uint16_t CCP4PRL __attribute__((__sfr__));
#define CCP4PRH CCP4PRH
extern volatile uint16_t CCP4PRH __attribute__((__sfr__));
#define CCP4RA CCP4RA
extern volatile uint16_t CCP4RA __attribute__((__sfr__));
#define CCP4RAL CCP4RAL
extern volatile uint16_t CCP4RAL __attribute__((__sfr__));
#define CCP4RB CCP4RB
extern volatile uint16_t CCP4RB __attribute__((__sfr__));
#define CCP4RBL CCP4RBL
extern volatile uint16_t CCP4RBL __attribute__((__sfr__));
#define CCP4BUFL CCP4BUFL
extern volatile uint16_t CCP4BUFL __attribute__((__sfr__));
#define CCP4BUFH CCP4BUFH
extern volatile uint16_t CCP4BUFH __attribute__((__sfr__));
#define CCP5CON1L CCP5CON1L
extern volatile uint16_t CCP5CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP5CON1LBITS {
  union {
    struct {
      uint16_t MOD:4;
      uint16_t CCSEL:1;
      uint16_t T32:1;
      uint16_t TMRPS:2;
      uint16_t CLKSEL:3;
      uint16_t TMRSYNC:1;
      uint16_t CCPSLP:1;
      uint16_t CCPSIDL:1;
      uint16_t :1;
      uint16_t CCPON:1;
    };
    struct {
      uint16_t MOD0:1;
      uint16_t MOD1:1;
      uint16_t MOD2:1;
      uint16_t MOD3:1;
      uint16_t :1;
      uint16_t TMR32:1;
      uint16_t TMRPS0:1;
      uint16_t TMRPS1:1;
      uint16_t CLKSEL0:1;
      uint16_t CLKSEL1:1;
      uint16_t CLKSEL2:1;
    };
    struct {
      uint16_t CCPMOD:4;
    };
    struct {
      uint16_t CCPMOD0:1;
      uint16_t CCPMOD1:1;
      uint16_t CCPMOD2:1;
      uint16_t CCPMOD3:1;
    };
  };
} CCP5CON1LBITS;
extern volatile CCP5CON1LBITS CCP5CON1Lbits __attribute__((__sfr__));

#define CCP5CON1H CCP5CON1H
extern volatile uint16_t CCP5CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP5CON1HBITS {
  union {
    struct {
      uint16_t SYNC:5;
      uint16_t ALTSYNC:1;
      uint16_t ONESHOT:1;
      uint16_t TRIGEN:1;
      uint16_t OPS:4;
      uint16_t :2;
      uint16_t RTRGEN:1;
      uint16_t OPSSRC:1;
    };
    struct {
      uint16_t SYNC0:1;
      uint16_t SYNC1:1;
      uint16_t SYNC2:1;
      uint16_t SYNC3:1;
      uint16_t SYNC4:1;
      uint16_t :3;
      uint16_t OPS0:1;
      uint16_t OPS1:1;
      uint16_t OPS2:1;
      uint16_t OPS3:1;
      uint16_t :3;
      uint16_t OPSRC:1;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t IOPS0:1;
      uint16_t IOPS1:1;
      uint16_t IOPS2:1;
      uint16_t IOPS3:1;
    };
  };
} CCP5CON1HBITS;
extern volatile CCP5CON1HBITS CCP5CON1Hbits __attribute__((__sfr__));

#define CCP5CON2L CCP5CON2L
extern volatile uint16_t CCP5CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP5CON2LBITS {
  union {
    struct {
      uint16_t ASDG:8;
      uint16_t :4;
      uint16_t SSDG:1;
      uint16_t :1;
      uint16_t ASDGM:1;
      uint16_t PWMRSEN:1;
    };
    struct {
      uint16_t ASDG0:1;
      uint16_t ASDG1:1;
      uint16_t ASDG2:1;
      uint16_t ASDG3:1;
      uint16_t ASDG4:1;
      uint16_t ASDG5:1;
      uint16_t ASDG6:1;
      uint16_t ASDG7:1;
    };
  };
} CCP5CON2LBITS;
extern volatile CCP5CON2LBITS CCP5CON2Lbits __attribute__((__sfr__));

#define CCP5CON2H CCP5CON2H
extern volatile uint16_t CCP5CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP5CON2HBITS {
  union {
    struct {
      uint16_t ICS:3;
      uint16_t AUXOUT:2;
      uint16_t :1;
      uint16_t ICGSM:2;
      uint16_t OCAEN:1;
      uint16_t :6;
      uint16_t OENSYNC:1;
    };
    struct {
      uint16_t ICS0:1;
      uint16_t ICS1:1;
      uint16_t ICS2:1;
      uint16_t AUXOUT0:1;
      uint16_t AUXOUT1:1;
      uint16_t :1;
      uint16_t ICGSM0:1;
      uint16_t ICGSM1:1;
    };
    struct {
      uint16_t ICSEL:3;
    };
    struct {
      uint16_t ICSEL0:1;
      uint16_t ICSEL1:1;
      uint16_t ICSEL2:1;
    };
  };
} CCP5CON2HBITS;
extern volatile CCP5CON2HBITS CCP5CON2Hbits __attribute__((__sfr__));

#define CCP5CON3H CCP5CON3H
extern volatile uint16_t CCP5CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP5CON3HBITS {
  union {
    struct {
      uint16_t :2;
      uint16_t PSSACE:2;
      uint16_t :1;
      uint16_t POLACE:1;
      uint16_t :6;
      uint16_t OSCNT:3;
      uint16_t OETRIG:1;
    };
    struct {
      uint16_t :2;
      uint16_t PSSACE0:1;
      uint16_t PSSACE1:1;
      uint16_t :8;
      uint16_t OSCNT0:1;
      uint16_t OSCNT1:1;
      uint16_t OSCNT2:1;
    };
  };
} CCP5CON3HBITS;
extern volatile CCP5CON3HBITS CCP5CON3Hbits __attribute__((__sfr__));

#define CCP5STAT CCP5STAT
extern volatile uint16_t CCP5STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP5STATBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP5STATBITS;
extern volatile CCP5STATBITS CCP5STATbits __attribute__((__sfr__));

#define CCP5STATL CCP5STATL
extern volatile uint16_t CCP5STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP5STATLBITS {
  union {
    struct {
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICDIS:1;
      uint16_t SCEVT:1;
      uint16_t ASEVT:1;
      uint16_t TRCLR:1;
      uint16_t TRSET:1;
      uint16_t CCPTRIG:1;
      uint16_t :2;
      uint16_t ICGARM:1;
    };
    struct {
      uint16_t :7;
      uint16_t TRIG:1;
    };
  };
} CCP5STATLBITS;
extern volatile CCP5STATLBITS CCP5STATLbits __attribute__((__sfr__));

#define CCP5TMRL CCP5TMRL
extern volatile uint16_t CCP5TMRL __attribute__((__sfr__));
#define CCP5TMRH CCP5TMRH
extern volatile uint16_t CCP5TMRH __attribute__((__sfr__));
#define CCP5PRL CCP5PRL
extern volatile uint16_t CCP5PRL __attribute__((__sfr__));
#define CCP5PRH CCP5PRH
extern volatile uint16_t CCP5PRH __attribute__((__sfr__));
#define CCP5RA CCP5RA
extern volatile uint16_t CCP5RA __attribute__((__sfr__));
#define CCP5RAL CCP5RAL
extern volatile uint16_t CCP5RAL __attribute__((__sfr__));
#define CCP5RB CCP5RB
extern volatile uint16_t CCP5RB __attribute__((__sfr__));
#define CCP5RBL CCP5RBL
extern volatile uint16_t CCP5RBL __attribute__((__sfr__));
#define CCP5BUFL CCP5BUFL
extern volatile uint16_t CCP5BUFL __attribute__((__sfr__));
#define CCP5BUFH CCP5BUFH
extern volatile uint16_t CCP5BUFH __attribute__((__sfr__));
#define SPI1BUF SPI1BUF
extern volatile uint16_t SPI1BUF __attribute__((__sfr__));
__extension__ typedef struct tagSPI1BUFBITS {
  union {
    struct {
      uint16_t SSPBUF:8;
    };
    struct {
      uint16_t SPI1BUF:8;
    };
  };
} SPI1BUFBITS;
extern volatile SPI1BUFBITS SPI1BUFbits __attribute__((__sfr__));

#define SSP1BUF SSP1BUF
extern volatile uint16_t SSP1BUF __attribute__((__sfr__));
__extension__ typedef struct tagSSP1BUFBITS {
  union {
    struct {
      uint16_t SSPBUF:8;
    };
    struct {
      uint16_t SPI1BUF:8;
    };
  };
} SSP1BUFBITS;
extern volatile SSP1BUFBITS SSP1BUFbits __attribute__((__sfr__));

#define SSP1CON1 SSP1CON1
extern volatile uint16_t SSP1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSSP1CON1BITS {
  union {
    struct {
      uint16_t SSPM:4;
      uint16_t CKP:1;
      uint16_t SSPEN:1;
      uint16_t SSPOV:1;
      uint16_t WCOL:1;
    };
    struct {
      uint16_t SSPM0:1;
      uint16_t SSPM1:1;
      uint16_t SSPM2:1;
      uint16_t SSPM3:1;
    };
  };
} SSP1CON1BITS;
extern volatile SSP1CON1BITS SSP1CON1bits __attribute__((__sfr__));

#define SSP1CON2 SSP1CON2
extern volatile uint16_t SSP1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSSP1CON2BITS {
  union {
    struct {
      uint16_t SEN:1;
      uint16_t RSEN:1;
      uint16_t PEN:1;
      uint16_t RCEN:1;
      uint16_t ACKEN:1;
      uint16_t ACKDT:1;
      uint16_t ACKSTAT:1;
      uint16_t GCEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t ADMSK:5;
    };
    struct {
      uint16_t :1;
      uint16_t ADMSK1:1;
      uint16_t ADMSK2:1;
      uint16_t ADMSK3:1;
      uint16_t ADMSK4:1;
      uint16_t ADMSK5:1;
    };
  };
} SSP1CON2BITS;
extern volatile SSP1CON2BITS SSP1CON2bits __attribute__((__sfr__));

#define SSP1CON3 SSP1CON3
extern volatile uint16_t SSP1CON3 __attribute__((__sfr__));
typedef struct tagSSP1CON3BITS {
  uint16_t DHEN:1;
  uint16_t AHEN:1;
  uint16_t SBCDE:1;
  uint16_t SDAHT:1;
  uint16_t BOEN:1;
  uint16_t SCIE:1;
  uint16_t PCIE:1;
  uint16_t ACKTIM:1;
} SSP1CON3BITS;
extern volatile SSP1CON3BITS SSP1CON3bits __attribute__((__sfr__));

#define SSP1STAT SSP1STAT
extern volatile uint16_t SSP1STAT __attribute__((__sfr__));
__extension__ typedef struct tagSSP1STATBITS {
  union {
    struct {
      uint16_t BF:1;
      uint16_t UA:1;
      uint16_t R_NOT_W:1;
      uint16_t S:1;
      uint16_t P:1;
      uint16_t D_NOT_A:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
    };
    struct {
      uint16_t :2;
      uint16_t R_W:1;
      uint16_t :2;
      uint16_t D_A:1;
    };
    struct {
      uint16_t :2;
      uint16_t NOT_W:1;
      uint16_t :2;
      uint16_t NOT_A:1;
    };
    struct {
      uint16_t :2;
      uint16_t NOT_WRITE:1;
      uint16_t :2;
      uint16_t NOT_ADDRESS:1;
    };
    struct {
      uint16_t :2;
      uint16_t READ_WRITE:1;
      uint16_t :2;
      uint16_t DATA_ADDRESS:1;
    };
    struct {
      uint16_t :2;
      uint16_t I2C_READ:1;
      uint16_t I2C_START:1;
      uint16_t I2C_STOP:1;
      uint16_t I2C_DAT:1;
    };
  };
} SSP1STATBITS;
extern volatile SSP1STATBITS SSP1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile uint16_t I2C1ADD __attribute__((__sfr__));
__extension__ typedef struct tagI2C1ADDBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} I2C1ADDBITS;
extern volatile I2C1ADDBITS I2C1ADDbits __attribute__((__sfr__));

#define I2C1BRG I2C1BRG
extern volatile uint16_t I2C1BRG __attribute__((__sfr__));
__extension__ typedef struct tagI2C1BRGBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} I2C1BRGBITS;
extern volatile I2C1BRGBITS I2C1BRGbits __attribute__((__sfr__));

#define SSP1ADD SSP1ADD
extern volatile uint16_t SSP1ADD __attribute__((__sfr__));
__extension__ typedef struct tagSSP1ADDBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} SSP1ADDBITS;
extern volatile SSP1ADDBITS SSP1ADDbits __attribute__((__sfr__));

#define SSP1BRG SSP1BRG
extern volatile uint16_t SSP1BRG __attribute__((__sfr__));
__extension__ typedef struct tagSSP1BRGBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} SSP1BRGBITS;
extern volatile SSP1BRGBITS SSP1BRGbits __attribute__((__sfr__));

#define I2C1MSK I2C1MSK
extern volatile uint16_t I2C1MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C1MSKBITS {
  union {
    struct {
      uint16_t MSK0:1;
      uint16_t MSK1:1;
      uint16_t MSK2:1;
      uint16_t MSK3:1;
      uint16_t MSK4:1;
      uint16_t MSK5:1;
      uint16_t MSK6:1;
      uint16_t MSK7:1;
    };
    struct {
      uint16_t AMSK:8;
    };
  };
} I2C1MSKBITS;
extern volatile I2C1MSKBITS I2C1MSKbits __attribute__((__sfr__));

#define SSP1MSK SSP1MSK
extern volatile uint16_t SSP1MSK __attribute__((__sfr__));
__extension__ typedef struct tagSSP1MSKBITS {
  union {
    struct {
      uint16_t MSK0:1;
      uint16_t MSK1:1;
      uint16_t MSK2:1;
      uint16_t MSK3:1;
      uint16_t MSK4:1;
      uint16_t MSK5:1;
      uint16_t MSK6:1;
      uint16_t MSK7:1;
    };
    struct {
      uint16_t AMSK:8;
    };
  };
} SSP1MSKBITS;
extern volatile SSP1MSKBITS SSP1MSKbits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile uint16_t SPI2BUF __attribute__((__sfr__));
__extension__ typedef struct tagSPI2BUFBITS {
  union {
    struct {
      uint16_t SSPBUF:8;
    };
    struct {
      uint16_t SPI2BUF:8;
    };
  };
} SPI2BUFBITS;
extern volatile SPI2BUFBITS SPI2BUFbits __attribute__((__sfr__));

#define SSP2BUF SSP2BUF
extern volatile uint16_t SSP2BUF __attribute__((__sfr__));
__extension__ typedef struct tagSSP2BUFBITS {
  union {
    struct {
      uint16_t SSPBUF:8;
    };
    struct {
      uint16_t SPI2BUF:8;
    };
  };
} SSP2BUFBITS;
extern volatile SSP2BUFBITS SSP2BUFbits __attribute__((__sfr__));

#define SSP2CON1 SSP2CON1
extern volatile uint16_t SSP2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSSP2CON1BITS {
  union {
    struct {
      uint16_t SSPM:4;
      uint16_t CKP:1;
      uint16_t SSPEN:1;
      uint16_t SSPOV:1;
      uint16_t WCOL:1;
    };
    struct {
      uint16_t SSPM0:1;
      uint16_t SSPM1:1;
      uint16_t SSPM2:1;
      uint16_t SSPM3:1;
    };
  };
} SSP2CON1BITS;
extern volatile SSP2CON1BITS SSP2CON1bits __attribute__((__sfr__));

#define SSP2CON2 SSP2CON2
extern volatile uint16_t SSP2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSSP2CON2BITS {
  union {
    struct {
      uint16_t SEN:1;
      uint16_t RSEN:1;
      uint16_t PEN:1;
      uint16_t RCEN:1;
      uint16_t ACKEN:1;
      uint16_t ACKDT:1;
      uint16_t ACKSTAT:1;
      uint16_t GCEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t ADMSK:5;
    };
    struct {
      uint16_t :1;
      uint16_t ADMSK1:1;
      uint16_t ADMSK2:1;
      uint16_t ADMSK3:1;
      uint16_t ADMSK4:1;
      uint16_t ADMSK5:1;
    };
  };
} SSP2CON2BITS;
extern volatile SSP2CON2BITS SSP2CON2bits __attribute__((__sfr__));

#define SSP2CON3 SSP2CON3
extern volatile uint16_t SSP2CON3 __attribute__((__sfr__));
typedef struct tagSSP2CON3BITS {
  uint16_t DHEN:1;
  uint16_t AHEN:1;
  uint16_t SBCDE:1;
  uint16_t SDAHT:1;
  uint16_t BOEN:1;
  uint16_t SCIE:1;
  uint16_t PCIE:1;
  uint16_t ACKTIM:1;
} SSP2CON3BITS;
extern volatile SSP2CON3BITS SSP2CON3bits __attribute__((__sfr__));

#define SSP2STAT SSP2STAT
extern volatile uint16_t SSP2STAT __attribute__((__sfr__));
__extension__ typedef struct tagSSP2STATBITS {
  union {
    struct {
      uint16_t BF:1;
      uint16_t UA:1;
      uint16_t R_NOT_W:1;
      uint16_t S:1;
      uint16_t P:1;
      uint16_t D_NOT_A:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
    };
    struct {
      uint16_t :2;
      uint16_t R_W:1;
      uint16_t :2;
      uint16_t D_A:1;
    };
    struct {
      uint16_t :2;
      uint16_t NOT_W:1;
      uint16_t :2;
      uint16_t NOT_A:1;
    };
    struct {
      uint16_t :2;
      uint16_t NOT_WRITE:1;
      uint16_t :2;
      uint16_t NOT_ADDRESS:1;
    };
    struct {
      uint16_t :2;
      uint16_t READ_WRITE:1;
      uint16_t :2;
      uint16_t DATA_ADDRESS:1;
    };
    struct {
      uint16_t :2;
      uint16_t I2C_READ:1;
      uint16_t I2C_START:1;
      uint16_t I2C_STOP:1;
      uint16_t I2C_DAT:1;
    };
  };
} SSP2STATBITS;
extern volatile SSP2STATBITS SSP2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile uint16_t I2C2ADD __attribute__((__sfr__));
__extension__ typedef struct tagI2C2ADDBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} I2C2ADDBITS;
extern volatile I2C2ADDBITS I2C2ADDbits __attribute__((__sfr__));

#define I2C2BRG I2C2BRG
extern volatile uint16_t I2C2BRG __attribute__((__sfr__));
__extension__ typedef struct tagI2C2BRGBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} I2C2BRGBITS;
extern volatile I2C2BRGBITS I2C2BRGbits __attribute__((__sfr__));

#define SSP2ADD SSP2ADD
extern volatile uint16_t SSP2ADD __attribute__((__sfr__));
__extension__ typedef struct tagSSP2ADDBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} SSP2ADDBITS;
extern volatile SSP2ADDBITS SSP2ADDbits __attribute__((__sfr__));

#define SSP2BRG SSP2BRG
extern volatile uint16_t SSP2BRG __attribute__((__sfr__));
__extension__ typedef struct tagSSP2BRGBITS {
  union {
    struct {
      uint16_t SSPADD:8;
    };
    struct {
      uint16_t I2CADD:8;
    };
  };
} SSP2BRGBITS;
extern volatile SSP2BRGBITS SSP2BRGbits __attribute__((__sfr__));

#define I2C2MSK I2C2MSK
extern volatile uint16_t I2C2MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C2MSKBITS {
  union {
    struct {
      uint16_t MSK0:1;
      uint16_t MSK1:1;
      uint16_t MSK2:1;
      uint16_t MSK3:1;
      uint16_t MSK4:1;
      uint16_t MSK5:1;
      uint16_t MSK6:1;
      uint16_t MSK7:1;
    };
    struct {
      uint16_t AMSK:8;
    };
  };
} I2C2MSKBITS;
extern volatile I2C2MSKBITS I2C2MSKbits __attribute__((__sfr__));

#define SSP2MSK SSP2MSK
extern volatile uint16_t SSP2MSK __attribute__((__sfr__));
__extension__ typedef struct tagSSP2MSKBITS {
  union {
    struct {
      uint16_t MSK0:1;
      uint16_t MSK1:1;
      uint16_t MSK2:1;
      uint16_t MSK3:1;
      uint16_t MSK4:1;
      uint16_t MSK5:1;
      uint16_t MSK6:1;
      uint16_t MSK7:1;
    };
    struct {
      uint16_t AMSK:8;
    };
  };
} SSP2MSKBITS;
extern volatile SSP2MSKBITS SSP2MSKbits __attribute__((__sfr__));


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
      uint16_t :1;
      uint16_t RXINV:1;
      uint16_t :3;
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
      uint16_t :6;
      uint16_t TXINV:1;
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
      uint16_t :1;
      uint16_t RXINV:1;
      uint16_t :3;
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
      uint16_t :6;
      uint16_t TXINV:1;
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
#define AMP1CON AMP1CON
extern volatile uint16_t AMP1CON __attribute__((__sfr__));
__extension__ typedef struct tagAMP1CONBITS {
  union {
    struct {
      uint16_t PINSEL:3;
      uint16_t NINSEL:3;
      uint16_t :1;
      uint16_t SPDSEL:1;
      uint16_t :4;
      uint16_t AMPSLP:1;
      uint16_t AMPSIDL:1;
      uint16_t :1;
      uint16_t AMPEN:1;
    };
    struct {
      uint16_t PINSEL0:1;
      uint16_t PINSEL1:1;
      uint16_t PINSEL2:1;
      uint16_t NINSEL0:1;
      uint16_t NINSEL1:1;
      uint16_t NINSEL2:1;
    };
  };
} AMP1CONBITS;
extern volatile AMP1CONBITS AMP1CONbits __attribute__((__sfr__));

#define AMP2CON AMP2CON
extern volatile uint16_t AMP2CON __attribute__((__sfr__));
__extension__ typedef struct tagAMP2CONBITS {
  union {
    struct {
      uint16_t PINSEL:3;
      uint16_t NINSEL:3;
      uint16_t :1;
      uint16_t SPDSEL:1;
      uint16_t :4;
      uint16_t AMPSLP:1;
      uint16_t AMPSIDL:1;
      uint16_t :1;
      uint16_t AMPEN:1;
    };
    struct {
      uint16_t PINSEL0:1;
      uint16_t PINSEL1:1;
      uint16_t PINSEL2:1;
      uint16_t NINSEL0:1;
      uint16_t NINSEL1:1;
      uint16_t NINSEL2:1;
    };
  };
} AMP2CONBITS;
extern volatile AMP2CONBITS AMP2CONbits __attribute__((__sfr__));

#define DAC1CON DAC1CON
extern volatile uint16_t DAC1CON __attribute__((__sfr__));
__extension__ typedef struct tagDAC1CONBITS {
  union {
    struct {
      uint16_t DACREF:2;
      uint16_t DACTSEL:5;
      uint16_t DACOE:1;
      uint16_t DACTRIG:1;
      uint16_t SRDIS:1;
      uint16_t :1;
      uint16_t DACFM:1;
      uint16_t DACSLP:1;
      uint16_t DACSIDL:1;
      uint16_t :1;
      uint16_t DACEN:1;
    };
    struct {
      uint16_t REFSEL0:1;
      uint16_t REFSEL1:1;
      uint16_t DACTSEL0:1;
      uint16_t DACTSEL1:1;
      uint16_t DACTSEL2:1;
      uint16_t DACTSEL3:1;
      uint16_t DACTSEL4:1;
    };
  };
} DAC1CONBITS;
extern volatile DAC1CONBITS DAC1CONbits __attribute__((__sfr__));

#define DAC1DAT DAC1DAT
extern volatile uint16_t DAC1DAT __attribute__((__sfr__));
#define DAC2CON DAC2CON
extern volatile uint16_t DAC2CON __attribute__((__sfr__));
__extension__ typedef struct tagDAC2CONBITS {
  union {
    struct {
      uint16_t DACREF:2;
      uint16_t DACTSEL:5;
      uint16_t DACOE:1;
      uint16_t DACTRIG:1;
      uint16_t SRDIS:1;
      uint16_t :1;
      uint16_t DACFM:1;
      uint16_t DACSLP:1;
      uint16_t DACSIDL:1;
      uint16_t :1;
      uint16_t DACEN:1;
    };
    struct {
      uint16_t REFSEL0:1;
      uint16_t REFSEL1:1;
      uint16_t DACTSEL0:1;
      uint16_t DACTSEL1:1;
      uint16_t DACTSEL2:1;
      uint16_t DACTSEL3:1;
      uint16_t DACTSEL4:1;
    };
  };
} DAC2CONBITS;
extern volatile DAC2CONBITS DAC2CONbits __attribute__((__sfr__));

#define DAC2DAT DAC2DAT
extern volatile uint16_t DAC2DAT __attribute__((__sfr__));
#define TRISA TRISA
extern volatile uint16_t TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  uint16_t TRISA0:1;
  uint16_t TRISA1:1;
  uint16_t TRISA2:1;
  uint16_t TRISA3:1;
  uint16_t TRISA4:1;
  uint16_t :2;
  uint16_t TRISA7:1;
  uint16_t TRISA8:1;
  uint16_t TRISA9:1;
  uint16_t TRISA10:1;
  uint16_t TRISA11:1;
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
  uint16_t RA5:1;
  uint16_t :1;
  uint16_t RA7:1;
  uint16_t RA8:1;
  uint16_t RA9:1;
  uint16_t RA10:1;
  uint16_t RA11:1;
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
  uint16_t :2;
  uint16_t LATA7:1;
  uint16_t LATA8:1;
  uint16_t LATA9:1;
  uint16_t LATA10:1;
  uint16_t LATA11:1;
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
  uint16_t :2;
  uint16_t ODA7:1;
  uint16_t ODA8:1;
  uint16_t ODA9:1;
  uint16_t ODA10:1;
  uint16_t ODA11:1;
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

#define TRISC TRISC
extern volatile uint16_t TRISC __attribute__((__sfr__));
typedef struct tagTRISCBITS {
  uint16_t TRISC0:1;
  uint16_t TRISC1:1;
  uint16_t TRISC2:1;
  uint16_t TRISC3:1;
  uint16_t TRISC4:1;
  uint16_t TRISC5:1;
  uint16_t TRISC6:1;
  uint16_t TRISC7:1;
  uint16_t TRISC8:1;
  uint16_t TRISC9:1;
} TRISCBITS;
extern volatile TRISCBITS TRISCbits __attribute__((__sfr__));

#define PORTC PORTC
extern volatile uint16_t PORTC __attribute__((__sfr__));
typedef struct tagPORTCBITS {
  uint16_t RC0:1;
  uint16_t RC1:1;
  uint16_t RC2:1;
  uint16_t RC3:1;
  uint16_t RC4:1;
  uint16_t RC5:1;
  uint16_t RC6:1;
  uint16_t RC7:1;
  uint16_t RC8:1;
  uint16_t RC9:1;
} PORTCBITS;
extern volatile PORTCBITS PORTCbits __attribute__((__sfr__));

#define LATC LATC
extern volatile uint16_t LATC __attribute__((__sfr__));
typedef struct tagLATCBITS {
  uint16_t LATC0:1;
  uint16_t LATC1:1;
  uint16_t LATC2:1;
  uint16_t LATC3:1;
  uint16_t LATC4:1;
  uint16_t LATC5:1;
  uint16_t LATC6:1;
  uint16_t LATC7:1;
  uint16_t LATC8:1;
  uint16_t LATC9:1;
} LATCBITS;
extern volatile LATCBITS LATCbits __attribute__((__sfr__));

#define ODCC ODCC
extern volatile uint16_t ODCC __attribute__((__sfr__));
typedef struct tagODCCBITS {
  uint16_t ODC0:1;
  uint16_t ODC1:1;
  uint16_t ODC2:1;
  uint16_t ODC3:1;
  uint16_t ODC4:1;
  uint16_t ODC5:1;
  uint16_t ODC6:1;
  uint16_t ODC7:1;
  uint16_t ODC8:1;
  uint16_t ODC9:1;
} ODCCBITS;
extern volatile ODCCBITS ODCCbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile uint16_t PADCFG1 __attribute__((__sfr__));
typedef struct tagPADCFG1BITS {
  uint16_t :8;
  uint16_t SCK1DIS:1;
  uint16_t SDA1DIS:1;
  uint16_t SCK2DIS:1;
  uint16_t SDA2DIS:1;
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
#define ADC1BUF10 ADC1BUF10
extern volatile uint16_t ADC1BUF10 __attribute__((__sfr__));
#define ADC1BUF11 ADC1BUF11
extern volatile uint16_t ADC1BUF11 __attribute__((__sfr__));
#define ADC1BUF12 ADC1BUF12
extern volatile uint16_t ADC1BUF12 __attribute__((__sfr__));
#define ADC1BUF13 ADC1BUF13
extern volatile uint16_t ADC1BUF13 __attribute__((__sfr__));
#define ADC1BUF14 ADC1BUF14
extern volatile uint16_t ADC1BUF14 __attribute__((__sfr__));
#define ADC1BUF15 ADC1BUF15
extern volatile uint16_t ADC1BUF15 __attribute__((__sfr__));
#define ADC1BUF16 ADC1BUF16
extern volatile uint16_t ADC1BUF16 __attribute__((__sfr__));
#define ADC1BUF17 ADC1BUF17
extern volatile uint16_t ADC1BUF17 __attribute__((__sfr__));
#define ADC1BUF18 ADC1BUF18
extern volatile uint16_t ADC1BUF18 __attribute__((__sfr__));
#define ADC1BUF19 ADC1BUF19
extern volatile uint16_t ADC1BUF19 __attribute__((__sfr__));
#define ADC1BUF20 ADC1BUF20
extern volatile uint16_t ADC1BUF20 __attribute__((__sfr__));
#define ADC1BUF21 ADC1BUF21
extern volatile uint16_t ADC1BUF21 __attribute__((__sfr__));
#define ADC1BUF22 ADC1BUF22
extern volatile uint16_t ADC1BUF22 __attribute__((__sfr__));
#define ADC1BUF23 ADC1BUF23
extern volatile uint16_t ADC1BUF23 __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile uint16_t AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      uint16_t DONE:1;
      uint16_t SAMP:1;
      uint16_t ASAM:1;
      uint16_t :1;
      uint16_t SSRC:4;
      uint16_t FORM:2;
      uint16_t MODE12:1;
      uint16_t :2;
      uint16_t ADSIDL:1;
      uint16_t :1;
      uint16_t ADON:1;
    };
    struct {
      uint16_t :4;
      uint16_t SSRC0:1;
      uint16_t SSRC1:1;
      uint16_t SSRC2:1;
      uint16_t SSRC3:1;
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
      uint16_t SMPI:5;
      uint16_t BUFS:1;
      uint16_t :2;
      uint16_t CSCNA:1;
      uint16_t BUFREGEN:1;
      uint16_t OFFCAL:1;
      uint16_t NVCFG0:1;
      uint16_t PVCFG:2;
    };
    struct {
      uint16_t :2;
      uint16_t SMPI0:1;
      uint16_t SMPI1:1;
      uint16_t SMPI2:1;
      uint16_t SMPI3:1;
      uint16_t SMPI4:1;
      uint16_t :7;
      uint16_t PCVFG0:1;
      uint16_t PCVFG1:1;
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
      uint16_t :1;
      uint16_t EXTSAM:1;
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
      uint16_t CH0SA:5;
      uint16_t CH0NA:3;
      uint16_t CH0SB:5;
      uint16_t CH0NB:3;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t CH0NA0:1;
      uint16_t CH0NA1:1;
      uint16_t CH0NA2:1;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
      uint16_t CH0NB0:1;
      uint16_t CH0NB1:1;
      uint16_t CH0NB2:1;
    };
  };
} AD1CHSBITS;
extern volatile AD1CHSBITS AD1CHSbits __attribute__((__sfr__));

#define AD1CHS0 AD1CHS0
extern volatile uint16_t AD1CHS0 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS0BITS {
  union {
    struct {
      uint16_t CH0SA:5;
      uint16_t CH0NA:3;
      uint16_t CH0SB:5;
      uint16_t CH0NB:3;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t CH0NA0:1;
      uint16_t CH0NA1:1;
      uint16_t CH0NA2:1;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
      uint16_t CH0NB0:1;
      uint16_t CH0NB1:1;
      uint16_t CH0NB2:1;
    };
  };
} AD1CHS0BITS;
extern volatile AD1CHS0BITS AD1CHS0bits __attribute__((__sfr__));

#define AD1CSSH AD1CSSH
extern volatile uint16_t AD1CSSH __attribute__((__sfr__));
typedef struct tagAD1CSSHBITS {
  uint16_t CSS16:1;
  uint16_t CSS17:1;
  uint16_t CSS18:1;
  uint16_t CSS19:1;
  uint16_t CSS20:1;
  uint16_t CSS21:1;
  uint16_t CSS22:1;
  uint16_t CSS23:1;
  uint16_t :2;
  uint16_t CSS26:1;
  uint16_t CSS27:1;
  uint16_t CSS28:1;
  uint16_t CSS29:1;
  uint16_t CSS30:1;
} AD1CSSHBITS;
extern volatile AD1CSSHBITS AD1CSSHbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile uint16_t AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  uint16_t CSS0:1;
  uint16_t CSS1:1;
  uint16_t CSS2:1;
  uint16_t CSS3:1;
  uint16_t CSS4:1;
  uint16_t CSS5:1;
  uint16_t CSS6:1;
  uint16_t CSS7:1;
  uint16_t CSS8:1;
  uint16_t CSS9:1;
  uint16_t CSS10:1;
  uint16_t CSS11:1;
  uint16_t CSS12:1;
  uint16_t CSS13:1;
  uint16_t CSS14:1;
  uint16_t CSS15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define AD1CON5 AD1CON5
extern volatile uint16_t AD1CON5 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON5BITS {
  union {
    struct {
      uint16_t CM:2;
      uint16_t WM:2;
      uint16_t :4;
      uint16_t ASINT:2;
      uint16_t :2;
      uint16_t BGREQ:1;
      uint16_t CTMREQ:1;
      uint16_t LPEN:1;
      uint16_t ASEN:1;
    };
    struct {
      uint16_t CM0:1;
      uint16_t CM1:1;
      uint16_t WM0:1;
      uint16_t WM1:1;
      uint16_t :4;
      uint16_t ASINT0:1;
      uint16_t ASINT1:1;
    };
  };
} AD1CON5BITS;
extern volatile AD1CON5BITS AD1CON5bits __attribute__((__sfr__));

#define AD1CHITH AD1CHITH
extern volatile uint16_t AD1CHITH __attribute__((__sfr__));
typedef struct tagAD1CHITHBITS {
  uint16_t CHH16:1;
  uint16_t CHH17:1;
  uint16_t CHH18:1;
  uint16_t CHH19:1;
  uint16_t CHH20:1;
  uint16_t CHH21:1;
  uint16_t CHH22:1;
  uint16_t CHH23:1;
} AD1CHITHBITS;
extern volatile AD1CHITHBITS AD1CHITHbits __attribute__((__sfr__));

#define AD1CHITL AD1CHITL
extern volatile uint16_t AD1CHITL __attribute__((__sfr__));
typedef struct tagAD1CHITLBITS {
  uint16_t CHH0:1;
  uint16_t CHH1:1;
  uint16_t CHH2:1;
  uint16_t CHH3:1;
  uint16_t CHH4:1;
  uint16_t CHH5:1;
  uint16_t CHH6:1;
  uint16_t CHH7:1;
  uint16_t CHH8:1;
  uint16_t CHH9:1;
  uint16_t CHH10:1;
  uint16_t CHH11:1;
  uint16_t CHH12:1;
  uint16_t CHH13:1;
  uint16_t CHH14:1;
  uint16_t CHH15:1;
} AD1CHITLBITS;
extern volatile AD1CHITLBITS AD1CHITLbits __attribute__((__sfr__));

#define CTMUCON1L CTMUCON1L
extern volatile uint16_t CTMUCON1L __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON1LBITS {
  union {
    struct {
      uint16_t IRNG:2;
      uint16_t ITRIM:6;
      uint16_t CTTRIG:1;
      uint16_t IDISSEN:1;
      uint16_t EDGSEQEN:1;
      uint16_t EDGEN:1;
      uint16_t TGEN:1;
      uint16_t CTMUSIDL:1;
      uint16_t :1;
      uint16_t CTMUEN:1;
    };
    struct {
      uint16_t IRNG0:1;
      uint16_t IRNG1:1;
      uint16_t ITRIM0:1;
      uint16_t ITRIM1:1;
      uint16_t ITRIM2:1;
      uint16_t ITRIM3:1;
      uint16_t ITRIM4:1;
      uint16_t ITRIM5:1;
    };
  };
} CTMUCON1LBITS;
extern volatile CTMUCON1LBITS CTMUCON1Lbits __attribute__((__sfr__));

#define CTMUCON1H CTMUCON1H
extern volatile uint16_t CTMUCON1H __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON1HBITS {
  union {
    struct {
      uint16_t :2;
      uint16_t EDG2SEL:4;
      uint16_t EDG2POL:1;
      uint16_t EDG2MOD:1;
      uint16_t EDG1STAT:1;
      uint16_t EDG2STAT:1;
      uint16_t EDG1SEL:4;
      uint16_t EDG1POL:1;
      uint16_t EDG1MOD:1;
    };
    struct {
      uint16_t :2;
      uint16_t EDG2SEL0:1;
      uint16_t EDG2SEL1:1;
      uint16_t EDG2SEL2:1;
      uint16_t EDG2SEL3:1;
      uint16_t :4;
      uint16_t EDG1SEL0:1;
      uint16_t EDG1SEL1:1;
      uint16_t EDG1SEL2:1;
      uint16_t EDG1SEL3:1;
    };
  };
} CTMUCON1HBITS;
extern volatile CTMUCON1HBITS CTMUCON1Hbits __attribute__((__sfr__));

#define CTMUCON2 CTMUCON2
extern volatile uint16_t CTMUCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON2BITS {
  union {
    struct {
      uint16_t DISCHS:3;
      uint16_t :1;
      uint16_t IRSTEN:1;
    };
    struct {
      uint16_t DISCHS0:1;
      uint16_t DISCHS1:1;
      uint16_t DISCHS2:1;
    };
  };
} CTMUCON2BITS;
extern volatile CTMUCON2BITS CTMUCON2bits __attribute__((__sfr__));

#define CTMUCON2L CTMUCON2L
extern volatile uint16_t CTMUCON2L __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON2LBITS {
  union {
    struct {
      uint16_t DISCHS:3;
      uint16_t :1;
      uint16_t IRSTEN:1;
    };
    struct {
      uint16_t DISCHS0:1;
      uint16_t DISCHS1:1;
      uint16_t DISCHS2:1;
    };
  };
} CTMUCON2LBITS;
extern volatile CTMUCON2LBITS CTMUCON2Lbits __attribute__((__sfr__));

#define AD1CTMENH AD1CTMENH
extern volatile uint16_t AD1CTMENH __attribute__((__sfr__));
typedef struct tagAD1CTMENHBITS {
  uint16_t CTMEN16:1;
  uint16_t CTMEN17:1;
  uint16_t CTMEN18:1;
  uint16_t CTMEN19:1;
  uint16_t CTMEN20:1;
  uint16_t CTMEN21:1;
  uint16_t CTMEN22:1;
  uint16_t CTMEN23:1;
} AD1CTMENHBITS;
extern volatile AD1CTMENHBITS AD1CTMENHbits __attribute__((__sfr__));

#define AD1CTMENL AD1CTMENL
extern volatile uint16_t AD1CTMENL __attribute__((__sfr__));
typedef struct tagAD1CTMENLBITS {
  uint16_t CTMEN0:1;
  uint16_t CTMEN1:1;
  uint16_t CTMEN2:1;
  uint16_t CTMEN3:1;
  uint16_t CTMEN4:1;
  uint16_t CTMEN5:1;
  uint16_t CTMEN6:1;
  uint16_t CTMEN7:1;
  uint16_t CTMEN8:1;
  uint16_t CTMEN9:1;
  uint16_t CTMEN10:1;
  uint16_t CTMEN11:1;
  uint16_t CTMEN12:1;
  uint16_t CTMEN13:1;
  uint16_t CTMEN14:1;
  uint16_t CTMEN15:1;
} AD1CTMENLBITS;
extern volatile AD1CTMENLBITS AD1CTMENLbits __attribute__((__sfr__));

#define ANSA ANSA
extern volatile uint16_t ANSA __attribute__((__sfr__));
__extension__ typedef struct tagANSABITS {
  union {
    struct {
      uint16_t ANSA0:1;
      uint16_t ANSA1:1;
      uint16_t ANSA2:1;
      uint16_t ANSA3:1;
      uint16_t ANSA4:1;
    };
    struct {
      uint16_t ANSELA0:1;
      uint16_t ANSELA1:1;
      uint16_t ANSELA2:1;
      uint16_t ANSELA3:1;
      uint16_t ANSELA4:1;
    };
  };
} ANSABITS;
extern volatile ANSABITS ANSAbits __attribute__((__sfr__));

#define ANSELA ANSELA
extern volatile uint16_t ANSELA __attribute__((__sfr__));
__extension__ typedef struct tagANSELABITS {
  union {
    struct {
      uint16_t ANSA0:1;
      uint16_t ANSA1:1;
      uint16_t ANSA2:1;
      uint16_t ANSA3:1;
      uint16_t ANSA4:1;
    };
    struct {
      uint16_t ANSELA0:1;
      uint16_t ANSELA1:1;
      uint16_t ANSELA2:1;
      uint16_t ANSELA3:1;
      uint16_t ANSELA4:1;
    };
  };
} ANSELABITS;
extern volatile ANSELABITS ANSELAbits __attribute__((__sfr__));

#define ANSB ANSB
extern volatile uint16_t ANSB __attribute__((__sfr__));
__extension__ typedef struct tagANSBBITS {
  union {
    struct {
      uint16_t ANSB0:1;
      uint16_t ANSB1:1;
      uint16_t ANSB2:1;
      uint16_t ANSB3:1;
      uint16_t ANSB4:1;
      uint16_t ANSB5:1;
      uint16_t ANSB6:1;
      uint16_t ANSB7:1;
      uint16_t ANSB8:1;
      uint16_t ANSB9:1;
      uint16_t :2;
      uint16_t ANSB12:1;
      uint16_t ANSB13:1;
      uint16_t ANSB14:1;
      uint16_t ANSB15:1;
    };
    struct {
      uint16_t ANSELB0:1;
      uint16_t ANSELB1:1;
      uint16_t ANSELB2:1;
      uint16_t ANSELB3:1;
      uint16_t ANSELB4:1;
      uint16_t ANSELB5:1;
      uint16_t ANSELB6:1;
      uint16_t ANSELB7:1;
      uint16_t ANSELB8:1;
      uint16_t ANSELB9:1;
      uint16_t :2;
      uint16_t ANSELB12:1;
      uint16_t ANSELB13:1;
      uint16_t ANSELB14:1;
      uint16_t ANSELB15:1;
    };
  };
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

#define ANSELB ANSELB
extern volatile uint16_t ANSELB __attribute__((__sfr__));
__extension__ typedef struct tagANSELBBITS {
  union {
    struct {
      uint16_t ANSB0:1;
      uint16_t ANSB1:1;
      uint16_t ANSB2:1;
      uint16_t ANSB3:1;
      uint16_t ANSB4:1;
      uint16_t ANSB5:1;
      uint16_t ANSB6:1;
      uint16_t ANSB7:1;
      uint16_t ANSB8:1;
      uint16_t ANSB9:1;
      uint16_t :2;
      uint16_t ANSB12:1;
      uint16_t ANSB13:1;
      uint16_t ANSB14:1;
      uint16_t ANSB15:1;
    };
    struct {
      uint16_t ANSELB0:1;
      uint16_t ANSELB1:1;
      uint16_t ANSELB2:1;
      uint16_t ANSELB3:1;
      uint16_t ANSELB4:1;
      uint16_t ANSELB5:1;
      uint16_t ANSELB6:1;
      uint16_t ANSELB7:1;
      uint16_t ANSELB8:1;
      uint16_t ANSELB9:1;
      uint16_t :2;
      uint16_t ANSELB12:1;
      uint16_t ANSELB13:1;
      uint16_t ANSELB14:1;
      uint16_t ANSELB15:1;
    };
  };
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define ANSC ANSC
extern volatile uint16_t ANSC __attribute__((__sfr__));
__extension__ typedef struct tagANSCBITS {
  union {
    struct {
      uint16_t ANSC0:1;
      uint16_t ANSC1:1;
      uint16_t ANSC2:1;
    };
    struct {
      uint16_t ANSELC0:1;
      uint16_t ANSELC1:1;
      uint16_t ANSELC2:1;
    };
  };
} ANSCBITS;
extern volatile ANSCBITS ANSCbits __attribute__((__sfr__));

#define ANSELC ANSELC
extern volatile uint16_t ANSELC __attribute__((__sfr__));
__extension__ typedef struct tagANSELCBITS {
  union {
    struct {
      uint16_t ANSC0:1;
      uint16_t ANSC1:1;
      uint16_t ANSC2:1;
    };
    struct {
      uint16_t ANSELC0:1;
      uint16_t ANSELC1:1;
      uint16_t ANSELC2:1;
    };
  };
} ANSELCBITS;
extern volatile ANSELCBITS ANSELCbits __attribute__((__sfr__));

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

#define RTCPWC RTCPWC
extern volatile uint16_t RTCPWC __attribute__((__sfr__));
__extension__ typedef struct tagRTCPWCBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RTCOUT:2;
      uint16_t RTCLK:2;
      uint16_t PWSPRE:1;
      uint16_t PWCPRE:1;
      uint16_t PWCPOL:1;
      uint16_t PWCEN:1;
    };
    struct {
      uint16_t :8;
      uint16_t RTCOUT0:1;
      uint16_t RTCOUT1:1;
      uint16_t RTCLK0:1;
      uint16_t RTCLK1:1;
      uint16_t PWCSPRE:1;
      uint16_t PWCCPRE:1;
    };
    struct {
      uint16_t :10;
      uint16_t RTCCLK:2;
    };
    struct {
      uint16_t :10;
      uint16_t RTCCLK0:1;
      uint16_t RTCCLK1:1;
    };
  };
} RTCPWCBITS;
extern volatile RTCPWCBITS RTCPWCbits __attribute__((__sfr__));

#define CMSTAT CMSTAT
extern volatile uint16_t CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  uint16_t C1OUT:1;
  uint16_t C2OUT:1;
  uint16_t C3OUT:1;
  uint16_t :5;
  uint16_t C1EVT:1;
  uint16_t C2EVT:1;
  uint16_t C3EVT:1;
  uint16_t :4;
  uint16_t CMIDL:1;
} CMSTATBITS;
extern volatile CMSTATBITS CMSTATbits __attribute__((__sfr__));

#define CVRCON CVRCON
extern volatile uint16_t CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      uint16_t CVR:5;
      uint16_t CVRSS:1;
      uint16_t CVROE:1;
      uint16_t CVREN:1;
    };
    struct {
      uint16_t CVR0:1;
      uint16_t CVR1:1;
      uint16_t CVR2:1;
      uint16_t CVR3:1;
      uint16_t CVR4:1;
    };
  };
} CVRCONBITS;
extern volatile CVRCONBITS CVRCONbits __attribute__((__sfr__));

#define CM1CON CM1CON
extern volatile uint16_t CM1CON __attribute__((__sfr__));
__extension__ typedef struct tagCM1CONBITS {
  union {
    struct {
      uint16_t CCH:2;
      uint16_t :2;
      uint16_t CREF:2;
      uint16_t EVPOL:2;
      uint16_t COUT:1;
      uint16_t CEVT:1;
      uint16_t :2;
      uint16_t CLPWR:1;
      uint16_t CPOL:1;
      uint16_t COE:1;
      uint16_t CON:1;
    };
    struct {
      uint16_t CCH0:1;
      uint16_t CCH1:1;
      uint16_t :2;
      uint16_t CREF0:1;
      uint16_t CREF1:1;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

#define CM2CON CM2CON
extern volatile uint16_t CM2CON __attribute__((__sfr__));
__extension__ typedef struct tagCM2CONBITS {
  union {
    struct {
      uint16_t CCH:2;
      uint16_t :2;
      uint16_t CREF:2;
      uint16_t EVPOL:2;
      uint16_t COUT:1;
      uint16_t CEVT:1;
      uint16_t :2;
      uint16_t CLPWR:1;
      uint16_t CPOL:1;
      uint16_t COE:1;
      uint16_t CON:1;
    };
    struct {
      uint16_t CCH0:1;
      uint16_t CCH1:1;
      uint16_t :2;
      uint16_t CREF0:1;
      uint16_t CREF1:1;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
    };
  };
} CM2CONBITS;
extern volatile CM2CONBITS CM2CONbits __attribute__((__sfr__));

#define CM3CON CM3CON
extern volatile uint16_t CM3CON __attribute__((__sfr__));
__extension__ typedef struct tagCM3CONBITS {
  union {
    struct {
      uint16_t CCH:2;
      uint16_t :2;
      uint16_t CREF:2;
      uint16_t EVPOL:2;
      uint16_t COUT:1;
      uint16_t CEVT:1;
      uint16_t :2;
      uint16_t CLPWR:1;
      uint16_t CPOL:1;
      uint16_t COE:1;
      uint16_t CON:1;
    };
    struct {
      uint16_t CCH0:1;
      uint16_t CCH1:1;
      uint16_t :2;
      uint16_t CREF0:1;
      uint16_t CREF1:1;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
    };
  };
} CM3CONBITS;
extern volatile CM3CONBITS CM3CONbits __attribute__((__sfr__));

#define BUFCON0 BUFCON0
extern volatile uint16_t BUFCON0 __attribute__((__sfr__));
__extension__ typedef struct tagBUFCON0BITS {
  union {
    struct {
      uint16_t BUFREF:2;
    };
    struct {
      uint16_t BUFREF0:1;
      uint16_t BUFREF1:1;
    };
  };
} BUFCON0BITS;
extern volatile BUFCON0BITS BUFCON0bits __attribute__((__sfr__));

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
      uint16_t PMSLP:1;
      uint16_t CM:1;
      uint16_t :2;
      uint16_t RETEN:1;
      uint16_t SBOREN:1;
      uint16_t IOPUWR:1;
      uint16_t TRAPR:1;
    };
    struct {
      uint16_t :8;
      uint16_t VREGS:1;
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
      uint16_t SOSCDRV:1;
      uint16_t CF:1;
      uint16_t :1;
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

#define REFOCON REFOCON
extern volatile uint16_t REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RODIV:4;
      uint16_t ROSEL:1;
      uint16_t ROSSLP:1;
      uint16_t :1;
      uint16_t ROEN:1;
    };
    struct {
      uint16_t :8;
      uint16_t RODIV0:1;
      uint16_t RODIV1:1;
      uint16_t RODIV2:1;
      uint16_t RODIV3:1;
      uint16_t :3;
      uint16_t ROON:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define HLVDCON HLVDCON
extern volatile uint16_t HLVDCON __attribute__((__sfr__));
__extension__ typedef struct tagHLVDCONBITS {
  union {
    struct {
      uint16_t HLVDL:4;
      uint16_t :1;
      uint16_t IRVST:1;
      uint16_t BGVST:1;
      uint16_t VDIR:1;
      uint16_t :5;
      uint16_t LSIDL:1;
      uint16_t :1;
      uint16_t HLVDEN:1;
    };
    struct {
      uint16_t HLVDL0:1;
      uint16_t HLVDL1:1;
      uint16_t HLVDL2:1;
      uint16_t HLVDL3:1;
      uint16_t :9;
      uint16_t HLSIDL:1;
    };
  };
} HLVDCONBITS;
extern volatile HLVDCONBITS HLVDCONbits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile uint16_t NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      uint16_t NVMOP:6;
      uint16_t ERASE:1;
      uint16_t :5;
      uint16_t PGMONLY:1;
      uint16_t WRERR:1;
      uint16_t WREN:1;
      uint16_t WR:1;
    };
    struct {
      uint16_t NVMOP0:1;
      uint16_t NVMOP1:1;
      uint16_t NVMOP2:1;
      uint16_t NVMOP3:1;
      uint16_t NVMOP4:1;
      uint16_t NVMOP5:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile uint16_t NVMKEY __attribute__((__sfr__));
__extension__ typedef struct tagNVMKEYBITS {
  union {
    struct {
      uint16_t NVMKEY:8;
    };
    struct {
      uint16_t NVMKEY0:1;
      uint16_t NVMKEY1:1;
      uint16_t NVMKEY2:1;
      uint16_t NVMKEY3:1;
      uint16_t NVMKEY4:1;
      uint16_t NVMKEY5:1;
      uint16_t NVMKEY6:1;
      uint16_t NVMKEY7:1;
    };
  };
} NVMKEYBITS;
extern volatile NVMKEYBITS NVMKEYbits __attribute__((__sfr__));

#define ULPWCON ULPWCON
extern volatile uint16_t ULPWCON __attribute__((__sfr__));
__extension__ typedef struct tagULPWCONBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t ULPSINK:1;
      uint16_t :4;
      uint16_t ULPSIDL:1;
      uint16_t :1;
      uint16_t ULPEN:1;
    };
    struct {
      uint16_t :8;
      uint16_t CRNTEN:1;
      uint16_t :4;
      uint16_t PSIDL:1;
      uint16_t :1;
      uint16_t WUEN:1;
    };
  };
} ULPWCONBITS;
extern volatile ULPWCONBITS ULPWCONbits __attribute__((__sfr__));

#define PMD1 PMD1
extern volatile uint16_t PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  uint16_t ADC1MD:1;
  uint16_t :4;
  uint16_t U1MD:1;
  uint16_t U2MD:1;
  uint16_t SSP1MD:1;
  uint16_t :3;
  uint16_t T1MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile uint16_t PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  uint16_t CCP1MD:1;
  uint16_t CCP2MD:1;
  uint16_t CCP3MD:1;
  uint16_t CCP4MD:1;
  uint16_t CCP5MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  uint16_t :1;
  uint16_t SSP2MD:1;
  uint16_t :4;
  uint16_t DAC1MD:1;
  uint16_t :2;
  uint16_t RTCCMD:1;
  uint16_t CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile uint16_t PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  uint16_t :1;
  uint16_t HLVDMD:1;
  uint16_t CTMUMD:1;
  uint16_t REFOMD:1;
  uint16_t :2;
  uint16_t ULPWUMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile uint16_t PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  uint16_t :3;
  uint16_t AMP2MD:1;
  uint16_t DAC2MD:1;
  uint16_t AMP1MD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));

#define PMD8 PMD8
extern volatile uint16_t PMD8 __attribute__((__sfr__));
typedef struct tagPMD8BITS {
  uint16_t :2;
  uint16_t CLC1MD:1;
  uint16_t CLC2MD:1;
} PMD8BITS;
extern volatile PMD8BITS PMD8bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* TBLPAG */
#define _TBLPAG TBLPAGbits.TBLPAG

/* PSVPAG */
#define _PSVPAG PSVPAGbits.PSVPAG

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2
#define _DC SRbits.DC
#define _IPL SRbits.IPL

/* CORCON */
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3

/* DISICNT */
#define _DISICNT DISICNTbits.DISICNT

/* CNPD1 */
#define _CN0PDE CNPD1bits.CN0PDE
#define _CN1PDE CNPD1bits.CN1PDE
#define _CN2PDE CNPD1bits.CN2PDE
#define _CN3PDE CNPD1bits.CN3PDE
#define _CN4PDE CNPD1bits.CN4PDE
#define _CN5PDE CNPD1bits.CN5PDE
#define _CN6PDE CNPD1bits.CN6PDE
#define _CN7PDE CNPD1bits.CN7PDE
#define _CN9PDE CNPD1bits.CN9PDE
#define _CN10PDE CNPD1bits.CN10PDE
#define _CN11PDE CNPD1bits.CN11PDE
#define _CN12PDE CNPD1bits.CN12PDE
#define _CN13PDE CNPD1bits.CN13PDE
#define _CN14PDE CNPD1bits.CN14PDE
#define _CN15PDE CNPD1bits.CN15PDE

/* CNPD2 */
#define _CN16PDE CNPD2bits.CN16PDE
#define _CN17PDE CNPD2bits.CN17PDE
#define _CN18PDE CNPD2bits.CN18PDE
#define _CN19PDE CNPD2bits.CN19PDE
#define _CN20PDE CNPD2bits.CN20PDE
#define _CN21PDE CNPD2bits.CN21PDE
#define _CN22PDE CNPD2bits.CN22PDE
#define _CN23PDE CNPD2bits.CN23PDE
#define _CN24PDE CNPD2bits.CN24PDE
#define _CN25PDE CNPD2bits.CN25PDE
#define _CN26PDE CNPD2bits.CN26PDE
#define _CN27PDE CNPD2bits.CN27PDE
#define _CN28PDE CNPD2bits.CN28PDE
#define _CN29PDE CNPD2bits.CN29PDE
#define _CN30PDE CNPD2bits.CN30PDE
#define _CN31PDE CNPD2bits.CN31PDE

/* CNPD3 */
#define _CN32PDE CNPD3bits.CN32PDE
#define _CN33PDE CNPD3bits.CN33PDE
#define _CN34PDE CNPD3bits.CN34PDE
#define _CN35PDE CNPD3bits.CN35PDE
#define _CN36PDE CNPD3bits.CN36PDE

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE
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
#define _CN24IE CNEN2bits.CN24IE
#define _CN25IE CNEN2bits.CN25IE
#define _CN26IE CNEN2bits.CN26IE
#define _CN27IE CNEN2bits.CN27IE
#define _CN28IE CNEN2bits.CN28IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE
#define _CN31IE CNEN2bits.CN31IE

/* CNEN3 */
#define _CN32IE CNEN3bits.CN32IE
#define _CN33IE CNEN3bits.CN33IE
#define _CN34IE CNEN3bits.CN34IE
#define _CN35IE CNEN3bits.CN35IE
#define _CN36IE CNEN3bits.CN36IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
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
#define _CN24PUE CNPU2bits.CN24PUE
#define _CN25PUE CNPU2bits.CN25PUE
#define _CN26PUE CNPU2bits.CN26PUE
#define _CN27PUE CNPU2bits.CN27PUE
#define _CN28PUE CNPU2bits.CN28PUE
#define _CN29PUE CNPU2bits.CN29PUE
#define _CN30PUE CNPU2bits.CN30PUE
#define _CN31PUE CNPU2bits.CN31PUE

/* CNPU3 */
#define _CN32PUE CNPU3bits.CN32PUE
#define _CN33PUE CNPU3bits.CN33PUE
#define _CN34PUE CNPU3bits.CN34PUE
#define _CN35PUE CNPU3bits.CN35PUE
#define _CN36PUE CNPU3bits.CN36PUE

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
#define _CCP1IF IFS0bits.CCP1IF
#define _CCP2IF IFS0bits.CCP2IF
#define _T1IF IFS0bits.T1IF
#define _CCP3IF IFS0bits.CCP3IF
#define _CCP4IF IFS0bits.CCP4IF
#define _CCT1IF IFS0bits.CCT1IF
#define _CCT2IF IFS0bits.CCT2IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF
#define _NVMIF IFS0bits.NVMIF

/* IFS1 */
#define _SSP1IF IFS1bits.SSP1IF
#define _BCL1IF IFS1bits.BCL1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _CCP5IF IFS1bits.CCP5IF
#define _CCT3IF IFS1bits.CCT3IF
#define _CCT4IF IFS1bits.CCT4IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _CCT5IF IFS2bits.CCT5IF

/* IFS3 */
#define _SSP2IF IFS3bits.SSP2IF
#define _BCL2IF IFS3bits.BCL2IF
#define _RTCIF IFS3bits.RTCIF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _U2ERIF IFS4bits.U2ERIF
#define _HLVDIF IFS4bits.HLVDIF
#define _CTMUIF IFS4bits.CTMUIF
#define _DAC1IF IFS4bits.DAC1IF
#define _DAC2IF IFS4bits.DAC2IF

/* IFS5 */
#define _ULPWUIF IFS5bits.ULPWUIF

/* IFS6 */
#define _CLC1IF IFS6bits.CLC1IF
#define _CLC2IF IFS6bits.CLC2IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _CCP1IE IEC0bits.CCP1IE
#define _CCP2IE IEC0bits.CCP2IE
#define _T1IE IEC0bits.T1IE
#define _CCP3IE IEC0bits.CCP3IE
#define _CCP4IE IEC0bits.CCP4IE
#define _CCT1IE IEC0bits.CCT1IE
#define _CCT2IE IEC0bits.CCT2IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE
#define _NVMIE IEC0bits.NVMIE

/* IEC1 */
#define _SSP1IE IEC1bits.SSP1IE
#define _BCL1IE IEC1bits.BCL1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _CCP5IE IEC1bits.CCP5IE
#define _CCT3IE IEC1bits.CCT3IE
#define _CCT4IE IEC1bits.CCT4IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _CCT5IE IEC2bits.CCT5IE

/* IEC3 */
#define _SSP2IE IEC3bits.SSP2IE
#define _BCL2IE IEC3bits.BCL2IE
#define _RTCIE IEC3bits.RTCIE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _U2ERIE IEC4bits.U2ERIE
#define _HLVDIE IEC4bits.HLVDIE
#define _CTMUIE IEC4bits.CTMUIE
#define _DAC1IE IEC4bits.DAC1IE
#define _DAC2IE IEC4bits.DAC2IE

/* IEC5 */
#define _ULPWUIE IEC5bits.ULPWUIE

/* IEC6 */
#define _CLC1IE IEC6bits.CLC1IE
#define _CLC2IE IEC6bits.CLC2IE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _CCP1IP IPC0bits.CCP1IP
#define _CCP2IP IPC0bits.CCP2IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _CC1IP0 IPC0bits.CC1IP0
#define _CC1IP1 IPC0bits.CC1IP1
#define _CC1IP2 IPC0bits.CC1IP2
#define _CC2IP0 IPC0bits.CC2IP0
#define _CC2IP1 IPC0bits.CC2IP1
#define _CC2IP2 IPC0bits.CC2IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _CCP3IP IPC1bits.CCP3IP
#define _CCP4IP IPC1bits.CCP4IP
#define _CCT1IP IPC1bits.CCT1IP
#define _CC3IP0 IPC1bits.CC3IP0
#define _CC3IP1 IPC1bits.CC3IP1
#define _CC3IP2 IPC1bits.CC3IP2
#define _CC4IP0 IPC1bits.CC4IP0
#define _CC4IP1 IPC1bits.CC4IP1
#define _CC4IP2 IPC1bits.CC4IP2
#define _CCT1IP0 IPC1bits.CCT1IP0
#define _CCT1IP1 IPC1bits.CCT1IP1
#define _CCT1IP2 IPC1bits.CCT1IP2

/* IPC2 */
#define _CCT2IP IPC2bits.CCT2IP
#define _U1RXIP IPC2bits.U1RXIP
#define _CCT2IP0 IPC2bits.CCT2IP0
#define _CCT2IP1 IPC2bits.CCT2IP1
#define _CCT2IP2 IPC2bits.CCT2IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _AD1IP IPC3bits.AD1IP
#define _NVMIP IPC3bits.NVMIP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2

/* IPC4 */
#define _SSP1IP IPC4bits.SSP1IP
#define _BCL1IP IPC4bits.BCL1IP
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SSP1IP0 IPC4bits.SSP1IP0
#define _SSP1IP1 IPC4bits.SSP1IP1
#define _SSP1IP2 IPC4bits.SSP1IP2
#define _BCL1IP0 IPC4bits.BCL1IP0
#define _BCL1IP1 IPC4bits.BCL1IP1
#define _BCL1IP2 IPC4bits.BCL1IP2
#define _CMIP0 IPC4bits.CMIP0
#define _CMIP1 IPC4bits.CMIP1
#define _CMIP2 IPC4bits.CMIP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _CCP5IP IPC5bits.CCP5IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2
#define _CCP5IP0 IPC5bits.CCP5IP0
#define _CCP5IP1 IPC5bits.CCP5IP1
#define _CCP5IP2 IPC5bits.CCP5IP2

/* IPC6 */
#define _CCT3IP IPC6bits.CCT3IP
#define _CCT3IP0 IPC6bits.CCT3IP0
#define _CCT3IP1 IPC6bits.CCT3IP1
#define _CCT3IP2 IPC6bits.CCT3IP2

/* IPC7 */
#define _CCT4IP IPC7bits.CCT4IP
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _CCT4IP0 IPC7bits.CCT4IP0
#define _CCT4IP1 IPC7bits.CCT4IP1
#define _CCT4IP2 IPC7bits.CCT4IP2
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC10 */
#define _CCT5IP IPC10bits.CCT5IP
#define _CCT5IP0 IPC10bits.CCT5IP0
#define _CCT5IP1 IPC10bits.CCT5IP1
#define _CCT5IP2 IPC10bits.CCT5IP2

/* IPC12 */
#define _SSP2IP IPC12bits.SSP2IP
#define _BCL2IP IPC12bits.BCL2IP
#define _SSP2IP0 IPC12bits.SSP2IP0
#define _SSP2IP1 IPC12bits.SSP2IP1
#define _SSP2IP2 IPC12bits.SSP2IP2
#define _BCL2IP0 IPC12bits.BCL2IP0
#define _BCL2IP1 IPC12bits.BCL2IP1
#define _BCL2IP2 IPC12bits.BCL2IP2
#define _SI2C2P0 IPC12bits.SI2C2P0
#define _SI2C2P1 IPC12bits.SI2C2P1
#define _SI2C2P2 IPC12bits.SI2C2P2
#define _MI2C2P0 IPC12bits.MI2C2P0
#define _MI2C2P1 IPC12bits.MI2C2P1
#define _MI2C2P2 IPC12bits.MI2C2P2
#define _SI2C2P IPC12bits.SI2C2P
#define _MI2C2P IPC12bits.MI2C2P

/* IPC15 */
#define _RTCIP IPC15bits.RTCIP
#define _RTCIP0 IPC15bits.RTCIP0
#define _RTCIP1 IPC15bits.RTCIP1
#define _RTCIP2 IPC15bits.RTCIP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
#define _U2ERIP IPC16bits.U2ERIP
#define _U1ERIP0 IPC16bits.U1ERIP0
#define _U1ERIP1 IPC16bits.U1ERIP1
#define _U1ERIP2 IPC16bits.U1ERIP2
#define _U2ERIP0 IPC16bits.U2ERIP0
#define _U2ERIP1 IPC16bits.U2ERIP1
#define _U2ERIP2 IPC16bits.U2ERIP2

/* IPC18 */
#define _HLVDIP IPC18bits.HLVDIP
#define _HLVDIP0 IPC18bits.HLVDIP0
#define _HLVDIP1 IPC18bits.HLVDIP1
#define _HLVDIP2 IPC18bits.HLVDIP2

/* IPC19 */
#define _CTMUIP IPC19bits.CTMUIP
#define _DAC1IP IPC19bits.DAC1IP
#define _DAC2IP IPC19bits.DAC2IP
#define _CTMUIP0 IPC19bits.CTMUIP0
#define _CTMUIP1 IPC19bits.CTMUIP1
#define _CTMUIP2 IPC19bits.CTMUIP2
#define _DAC1IP0 IPC19bits.DAC1IP0
#define _DAC1IP1 IPC19bits.DAC1IP1
#define _DAC1IP2 IPC19bits.DAC1IP2
#define _DAC2IP0 IPC19bits.DAC2IP0
#define _DAC2IP1 IPC19bits.DAC2IP1
#define _DAC2IP2 IPC19bits.DAC2IP2

/* IPC20 */
#define _ULPWUIP IPC20bits.ULPWUIP
#define _ULPWUIP0 IPC20bits.ULPWUIP0
#define _ULPWUIP1 IPC20bits.ULPWUIP1
#define _ULPWUIP2 IPC20bits.ULPWUIP2

/* IPC24 */
#define _CLC1IP IPC24bits.CLC1IP
#define _CLC2IP IPC24bits.CLC2IP
#define _CLC1IP0 IPC24bits.CLC1IP0
#define _CLC1IP1 IPC24bits.CLC1IP1
#define _CLC1IP2 IPC24bits.CLC1IP2
#define _CLC2IP0 IPC24bits.CLC2IP0
#define _CLC2IP1 IPC24bits.CLC2IP1
#define _CLC2IP2 IPC24bits.CLC2IP2

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
#define _TECS T1CONbits.TECS
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1
#define _T1ECS0 T1CONbits.T1ECS0
#define _T1ECS1 T1CONbits.T1ECS1
#define _T1ECS T1CONbits.T1ECS
#define _TECS0 T1CONbits.TECS0
#define _TECS1 T1CONbits.TECS1
#define _TIECS T1CONbits.TIECS
#define _TIECS0 T1CONbits.TIECS0
#define _TIECS1 T1CONbits.TIECS1

/* CLC1CONL */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _LCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _LCOUT cannot be defined because it is used by more than one SFR */
/* Bitname _LCOE cannot be defined because it is used by more than one SFR */
/* Bitname _INTN cannot be defined because it is used by more than one SFR */
/* Bitname _INTP cannot be defined because it is used by more than one SFR */
/* Bitname _LCEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE2 cannot be defined because it is used by more than one SFR */

/* CLC1CONH */
/* Bitname _G1POL cannot be defined because it is used by more than one SFR */
/* Bitname _G2POL cannot be defined because it is used by more than one SFR */
/* Bitname _G3POL cannot be defined because it is used by more than one SFR */
/* Bitname _G4POL cannot be defined because it is used by more than one SFR */

/* CLC1SEL */
/* Bitname _DS1 cannot be defined because it is used by more than one SFR */
/* Bitname _DS2 cannot be defined because it is used by more than one SFR */
/* Bitname _DS3 cannot be defined because it is used by more than one SFR */
/* Bitname _DS4 cannot be defined because it is used by more than one SFR */
/* Bitname _DS10 cannot be defined because it is used by more than one SFR */
/* Bitname _DS11 cannot be defined because it is used by more than one SFR */
/* Bitname _DS12 cannot be defined because it is used by more than one SFR */
/* Bitname _DS20 cannot be defined because it is used by more than one SFR */
/* Bitname _DS21 cannot be defined because it is used by more than one SFR */
/* Bitname _DS22 cannot be defined because it is used by more than one SFR */
/* Bitname _DS30 cannot be defined because it is used by more than one SFR */
/* Bitname _DS31 cannot be defined because it is used by more than one SFR */
/* Bitname _DS32 cannot be defined because it is used by more than one SFR */
/* Bitname _DS40 cannot be defined because it is used by more than one SFR */
/* Bitname _DS41 cannot be defined because it is used by more than one SFR */
/* Bitname _DS42 cannot be defined because it is used by more than one SFR */

/* CLC1GLSL */
/* Bitname _G1D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G1D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G1D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G1D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D4T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D4T cannot be defined because it is used by more than one SFR */

/* CLC1GLSH */
/* Bitname _G3D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G3D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G3D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G3D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D4T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D4T cannot be defined because it is used by more than one SFR */

/* CLC2CONL */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _LCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _LCOUT cannot be defined because it is used by more than one SFR */
/* Bitname _LCOE cannot be defined because it is used by more than one SFR */
/* Bitname _INTN cannot be defined because it is used by more than one SFR */
/* Bitname _INTP cannot be defined because it is used by more than one SFR */
/* Bitname _LCEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE2 cannot be defined because it is used by more than one SFR */

/* CLC2CONH */
/* Bitname _G1POL cannot be defined because it is used by more than one SFR */
/* Bitname _G2POL cannot be defined because it is used by more than one SFR */
/* Bitname _G3POL cannot be defined because it is used by more than one SFR */
/* Bitname _G4POL cannot be defined because it is used by more than one SFR */

/* CLC2SEL */
/* Bitname _DS1 cannot be defined because it is used by more than one SFR */
/* Bitname _DS2 cannot be defined because it is used by more than one SFR */
/* Bitname _DS3 cannot be defined because it is used by more than one SFR */
/* Bitname _DS4 cannot be defined because it is used by more than one SFR */
/* Bitname _DS10 cannot be defined because it is used by more than one SFR */
/* Bitname _DS11 cannot be defined because it is used by more than one SFR */
/* Bitname _DS12 cannot be defined because it is used by more than one SFR */
/* Bitname _DS20 cannot be defined because it is used by more than one SFR */
/* Bitname _DS21 cannot be defined because it is used by more than one SFR */
/* Bitname _DS22 cannot be defined because it is used by more than one SFR */
/* Bitname _DS30 cannot be defined because it is used by more than one SFR */
/* Bitname _DS31 cannot be defined because it is used by more than one SFR */
/* Bitname _DS32 cannot be defined because it is used by more than one SFR */
/* Bitname _DS40 cannot be defined because it is used by more than one SFR */
/* Bitname _DS41 cannot be defined because it is used by more than one SFR */
/* Bitname _DS42 cannot be defined because it is used by more than one SFR */

/* CLC2SELL */
/* Bitname _DS1 cannot be defined because it is used by more than one SFR */
/* Bitname _DS2 cannot be defined because it is used by more than one SFR */
/* Bitname _DS3 cannot be defined because it is used by more than one SFR */
/* Bitname _DS4 cannot be defined because it is used by more than one SFR */
/* Bitname _DS10 cannot be defined because it is used by more than one SFR */
/* Bitname _DS11 cannot be defined because it is used by more than one SFR */
/* Bitname _DS12 cannot be defined because it is used by more than one SFR */
/* Bitname _DS20 cannot be defined because it is used by more than one SFR */
/* Bitname _DS21 cannot be defined because it is used by more than one SFR */
/* Bitname _DS22 cannot be defined because it is used by more than one SFR */
/* Bitname _DS30 cannot be defined because it is used by more than one SFR */
/* Bitname _DS31 cannot be defined because it is used by more than one SFR */
/* Bitname _DS32 cannot be defined because it is used by more than one SFR */
/* Bitname _DS40 cannot be defined because it is used by more than one SFR */
/* Bitname _DS41 cannot be defined because it is used by more than one SFR */
/* Bitname _DS42 cannot be defined because it is used by more than one SFR */

/* CLC2GLSL */
/* Bitname _G1D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G1D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G1D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G1D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G1D4T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G2D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G2D4T cannot be defined because it is used by more than one SFR */

/* CLC2GLSH */
/* Bitname _G3D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G3D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G3D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G3D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G3D4T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D1N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D1T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D2N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D2T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D3N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D3T cannot be defined because it is used by more than one SFR */
/* Bitname _G4D4N cannot be defined because it is used by more than one SFR */
/* Bitname _G4D4T cannot be defined because it is used by more than one SFR */

/* CCP1CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP1CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP1CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP1CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCCEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCDEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP1CON3L */
/* Bitname _DT cannot be defined because it is used by more than one SFR */
/* Bitname _DT0 cannot be defined because it is used by more than one SFR */
/* Bitname _DT1 cannot be defined because it is used by more than one SFR */
/* Bitname _DT2 cannot be defined because it is used by more than one SFR */
/* Bitname _DT3 cannot be defined because it is used by more than one SFR */
/* Bitname _DT4 cannot be defined because it is used by more than one SFR */
/* Bitname _DT5 cannot be defined because it is used by more than one SFR */

/* CCP1CON3H */
/* Bitname _PSSBDF cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
/* Bitname _POLBDF cannot be defined because it is used by more than one SFR */
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
/* Bitname _PSSBDF0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSBDF1 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP1STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP2CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP2CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP2CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP2CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCCEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCDEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP2CON3L */
/* Bitname _DT cannot be defined because it is used by more than one SFR */
/* Bitname _DT0 cannot be defined because it is used by more than one SFR */
/* Bitname _DT1 cannot be defined because it is used by more than one SFR */
/* Bitname _DT2 cannot be defined because it is used by more than one SFR */
/* Bitname _DT3 cannot be defined because it is used by more than one SFR */
/* Bitname _DT4 cannot be defined because it is used by more than one SFR */
/* Bitname _DT5 cannot be defined because it is used by more than one SFR */

/* CCP2CON3H */
/* Bitname _PSSBDF cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
/* Bitname _POLBDF cannot be defined because it is used by more than one SFR */
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
/* Bitname _PSSBDF0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSBDF1 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP2STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP2STATL */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP3CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP3CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP3CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP3CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCCEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCDEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP3CON3L */
/* Bitname _DT cannot be defined because it is used by more than one SFR */
/* Bitname _DT0 cannot be defined because it is used by more than one SFR */
/* Bitname _DT1 cannot be defined because it is used by more than one SFR */
/* Bitname _DT2 cannot be defined because it is used by more than one SFR */
/* Bitname _DT3 cannot be defined because it is used by more than one SFR */
/* Bitname _DT4 cannot be defined because it is used by more than one SFR */
/* Bitname _DT5 cannot be defined because it is used by more than one SFR */

/* CCP3CON3H */
/* Bitname _PSSBDF cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
/* Bitname _POLBDF cannot be defined because it is used by more than one SFR */
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
/* Bitname _PSSBDF0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSBDF1 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OUTM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP3STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP3STATL */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP4CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP4CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP4CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP4CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP4CON3H */
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP4STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP4STATL */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP5CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP5CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP5CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP5CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP5CON3H */
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP5STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP5STATL */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* SPI1BUF */
/* Bitname _SSPBUF cannot be defined because it is used by more than one SFR */
#define _SPI1BUF SPI1BUFbits.SPI1BUF

/* SSP1CON1 */
/* Bitname _SSPM cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSPEN cannot be defined because it is used by more than one SFR */
/* Bitname _SSPOV cannot be defined because it is used by more than one SFR */
/* Bitname _WCOL cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM3 cannot be defined because it is used by more than one SFR */

/* SSP1CON2 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK5 cannot be defined because it is used by more than one SFR */

/* SSP1CON3 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */

/* SSP1STAT */
/* Bitname _BF cannot be defined because it is used by more than one SFR */
/* Bitname _UA cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _READ_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _DATA_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_READ cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_START cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_STOP cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_DAT cannot be defined because it is used by more than one SFR */

/* I2C1ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C1MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* SPI2BUF */
/* Bitname _SSPBUF cannot be defined because it is used by more than one SFR */
#define _SPI2BUF SPI2BUFbits.SPI2BUF

/* SSP2CON1 */
/* Bitname _SSPM cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSPEN cannot be defined because it is used by more than one SFR */
/* Bitname _SSPOV cannot be defined because it is used by more than one SFR */
/* Bitname _WCOL cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM3 cannot be defined because it is used by more than one SFR */

/* SSP2CON2 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK5 cannot be defined because it is used by more than one SFR */

/* SSP2CON3 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */

/* SSP2STAT */
/* Bitname _BF cannot be defined because it is used by more than one SFR */
/* Bitname _UA cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _READ_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _DATA_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_READ cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_START cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_STOP cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_DAT cannot be defined because it is used by more than one SFR */

/* I2C2ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C2BRG */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* SSP2ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* SSP2BRG */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C2MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* SSP2MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

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
#define _RXINV U1MODEbits.RXINV
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
#define _TXINV U1STAbits.TXINV

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
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
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
/* Bitname _TXINV cannot be defined because it is used by more than one SFR */

/* AMP1CON */
/* Bitname _PINSEL cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL cannot be defined because it is used by more than one SFR */
/* Bitname _SPDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _AMPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _AMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _AMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _PINSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PINSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _PINSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL2 cannot be defined because it is used by more than one SFR */

/* AMP2CON */
/* Bitname _PINSEL cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL cannot be defined because it is used by more than one SFR */
/* Bitname _SPDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _AMPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _AMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _AMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _PINSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PINSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _PINSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _NINSEL2 cannot be defined because it is used by more than one SFR */

/* DAC1CON */
/* Bitname _DACREF cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _DACTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _SRDIS cannot be defined because it is used by more than one SFR */
/* Bitname _DACFM cannot be defined because it is used by more than one SFR */
/* Bitname _DACSLP cannot be defined because it is used by more than one SFR */
/* Bitname _DACSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _DACEN cannot be defined because it is used by more than one SFR */
/* Bitname _REFSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _REFSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL4 cannot be defined because it is used by more than one SFR */

/* DAC2CON */
/* Bitname _DACREF cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _DACTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _SRDIS cannot be defined because it is used by more than one SFR */
/* Bitname _DACFM cannot be defined because it is used by more than one SFR */
/* Bitname _DACSLP cannot be defined because it is used by more than one SFR */
/* Bitname _DACSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _DACEN cannot be defined because it is used by more than one SFR */
/* Bitname _REFSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _REFSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _DACTSEL4 cannot be defined because it is used by more than one SFR */

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4
#define _TRISA7 TRISAbits.TRISA7
#define _TRISA8 TRISAbits.TRISA8
#define _TRISA9 TRISAbits.TRISA9
#define _TRISA10 TRISAbits.TRISA10
#define _TRISA11 TRISAbits.TRISA11

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4
#define _RA5 PORTAbits.RA5
#define _RA7 PORTAbits.RA7
#define _RA8 PORTAbits.RA8
#define _RA9 PORTAbits.RA9
#define _RA10 PORTAbits.RA10
#define _RA11 PORTAbits.RA11

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4
#define _LATA7 LATAbits.LATA7
#define _LATA8 LATAbits.LATA8
#define _LATA9 LATAbits.LATA9
#define _LATA10 LATAbits.LATA10
#define _LATA11 LATAbits.LATA11

/* ODCA */
#define _ODA0 ODCAbits.ODA0
#define _ODA1 ODCAbits.ODA1
#define _ODA2 ODCAbits.ODA2
#define _ODA3 ODCAbits.ODA3
#define _ODA4 ODCAbits.ODA4
#define _ODA7 ODCAbits.ODA7
#define _ODA8 ODCAbits.ODA8
#define _ODA9 ODCAbits.ODA9
#define _ODA10 ODCAbits.ODA10
#define _ODA11 ODCAbits.ODA11

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

/* TRISC */
#define _TRISC0 TRISCbits.TRISC0
#define _TRISC1 TRISCbits.TRISC1
#define _TRISC2 TRISCbits.TRISC2
#define _TRISC3 TRISCbits.TRISC3
#define _TRISC4 TRISCbits.TRISC4
#define _TRISC5 TRISCbits.TRISC5
#define _TRISC6 TRISCbits.TRISC6
#define _TRISC7 TRISCbits.TRISC7
#define _TRISC8 TRISCbits.TRISC8
#define _TRISC9 TRISCbits.TRISC9

/* PORTC */
#define _RC0 PORTCbits.RC0
#define _RC1 PORTCbits.RC1
#define _RC2 PORTCbits.RC2
#define _RC3 PORTCbits.RC3
#define _RC4 PORTCbits.RC4
#define _RC5 PORTCbits.RC5
#define _RC6 PORTCbits.RC6
#define _RC7 PORTCbits.RC7
#define _RC8 PORTCbits.RC8
#define _RC9 PORTCbits.RC9

/* LATC */
#define _LATC0 LATCbits.LATC0
#define _LATC1 LATCbits.LATC1
#define _LATC2 LATCbits.LATC2
#define _LATC3 LATCbits.LATC3
#define _LATC4 LATCbits.LATC4
#define _LATC5 LATCbits.LATC5
#define _LATC6 LATCbits.LATC6
#define _LATC7 LATCbits.LATC7
#define _LATC8 LATCbits.LATC8
#define _LATC9 LATCbits.LATC9

/* ODCC */
#define _ODC0 ODCCbits.ODC0
#define _ODC1 ODCCbits.ODC1
#define _ODC2 ODCCbits.ODC2
#define _ODC3 ODCCbits.ODC3
#define _ODC4 ODCCbits.ODC4
#define _ODC5 ODCCbits.ODC5
#define _ODC6 ODCCbits.ODC6
#define _ODC7 ODCCbits.ODC7
#define _ODC8 ODCCbits.ODC8
#define _ODC9 ODCCbits.ODC9

/* PADCFG1 */
#define _SCK1DIS PADCFG1bits.SCK1DIS
#define _SDA1DIS PADCFG1bits.SDA1DIS
#define _SCK2DIS PADCFG1bits.SCK2DIS
#define _SDA2DIS PADCFG1bits.SDA2DIS

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
#define _MODE12 AD1CON1bits.MODE12
#define _ADSIDL AD1CON1bits.ADSIDL
#define _ADON AD1CON1bits.ADON
#define _SSRC0 AD1CON1bits.SSRC0
#define _SSRC1 AD1CON1bits.SSRC1
#define _SSRC2 AD1CON1bits.SSRC2
#define _SSRC3 AD1CON1bits.SSRC3
#define _FORM0 AD1CON1bits.FORM0
#define _FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define _ALTS AD1CON2bits.ALTS
#define _BUFM AD1CON2bits.BUFM
#define _SMPI AD1CON2bits.SMPI
#define _BUFS AD1CON2bits.BUFS
#define _CSCNA AD1CON2bits.CSCNA
#define _BUFREGEN AD1CON2bits.BUFREGEN
#define _OFFCAL AD1CON2bits.OFFCAL
#define _NVCFG0 AD1CON2bits.NVCFG0
#define _PVCFG AD1CON2bits.PVCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _SMPI4 AD1CON2bits.SMPI4
#define _PCVFG0 AD1CON2bits.PCVFG0
#define _PCVFG1 AD1CON2bits.PCVFG1

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
#define _EXTSAM AD1CON3bits.EXTSAM
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
#define _CH0SA4 AD1CHSbits.CH0SA4
#define _CH0NA0 AD1CHSbits.CH0NA0
#define _CH0NA1 AD1CHSbits.CH0NA1
#define _CH0NA2 AD1CHSbits.CH0NA2
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3
#define _CH0SB4 AD1CHSbits.CH0SB4
#define _CH0NB0 AD1CHSbits.CH0NB0
#define _CH0NB1 AD1CHSbits.CH0NB1
#define _CH0NB2 AD1CHSbits.CH0NB2

/* AD1CSSH */
#define _CSS16 AD1CSSHbits.CSS16
#define _CSS17 AD1CSSHbits.CSS17
#define _CSS18 AD1CSSHbits.CSS18
#define _CSS19 AD1CSSHbits.CSS19
#define _CSS20 AD1CSSHbits.CSS20
#define _CSS21 AD1CSSHbits.CSS21
#define _CSS22 AD1CSSHbits.CSS22
#define _CSS23 AD1CSSHbits.CSS23
#define _CSS26 AD1CSSHbits.CSS26
#define _CSS27 AD1CSSHbits.CSS27
#define _CSS28 AD1CSSHbits.CSS28
#define _CSS29 AD1CSSHbits.CSS29
#define _CSS30 AD1CSSHbits.CSS30

/* AD1CSSL */
#define _CSS0 AD1CSSLbits.CSS0
#define _CSS1 AD1CSSLbits.CSS1
#define _CSS2 AD1CSSLbits.CSS2
#define _CSS3 AD1CSSLbits.CSS3
#define _CSS4 AD1CSSLbits.CSS4
#define _CSS5 AD1CSSLbits.CSS5
#define _CSS6 AD1CSSLbits.CSS6
#define _CSS7 AD1CSSLbits.CSS7
#define _CSS8 AD1CSSLbits.CSS8
#define _CSS9 AD1CSSLbits.CSS9
#define _CSS10 AD1CSSLbits.CSS10
#define _CSS11 AD1CSSLbits.CSS11
#define _CSS12 AD1CSSLbits.CSS12
#define _CSS13 AD1CSSLbits.CSS13
#define _CSS14 AD1CSSLbits.CSS14
#define _CSS15 AD1CSSLbits.CSS15

/* AD1CON5 */
/* Bitname _CM cannot be defined because it is used by more than one SFR */
#define _WM AD1CON5bits.WM
#define _ASINT AD1CON5bits.ASINT
#define _BGREQ AD1CON5bits.BGREQ
#define _CTMREQ AD1CON5bits.CTMREQ
#define _LPEN AD1CON5bits.LPEN
#define _ASEN AD1CON5bits.ASEN
#define _CM0 AD1CON5bits.CM0
#define _CM1 AD1CON5bits.CM1
#define _WM0 AD1CON5bits.WM0
#define _WM1 AD1CON5bits.WM1
#define _ASINT0 AD1CON5bits.ASINT0
#define _ASINT1 AD1CON5bits.ASINT1

/* AD1CHITH */
#define _CHH16 AD1CHITHbits.CHH16
#define _CHH17 AD1CHITHbits.CHH17
#define _CHH18 AD1CHITHbits.CHH18
#define _CHH19 AD1CHITHbits.CHH19
#define _CHH20 AD1CHITHbits.CHH20
#define _CHH21 AD1CHITHbits.CHH21
#define _CHH22 AD1CHITHbits.CHH22
#define _CHH23 AD1CHITHbits.CHH23

/* AD1CHITL */
#define _CHH0 AD1CHITLbits.CHH0
#define _CHH1 AD1CHITLbits.CHH1
#define _CHH2 AD1CHITLbits.CHH2
#define _CHH3 AD1CHITLbits.CHH3
#define _CHH4 AD1CHITLbits.CHH4
#define _CHH5 AD1CHITLbits.CHH5
#define _CHH6 AD1CHITLbits.CHH6
#define _CHH7 AD1CHITLbits.CHH7
#define _CHH8 AD1CHITLbits.CHH8
#define _CHH9 AD1CHITLbits.CHH9
#define _CHH10 AD1CHITLbits.CHH10
#define _CHH11 AD1CHITLbits.CHH11
#define _CHH12 AD1CHITLbits.CHH12
#define _CHH13 AD1CHITLbits.CHH13
#define _CHH14 AD1CHITLbits.CHH14
#define _CHH15 AD1CHITLbits.CHH15

/* CTMUCON1L */
#define _IRNG CTMUCON1Lbits.IRNG
#define _ITRIM CTMUCON1Lbits.ITRIM
#define _CTTRIG CTMUCON1Lbits.CTTRIG
#define _IDISSEN CTMUCON1Lbits.IDISSEN
#define _EDGSEQEN CTMUCON1Lbits.EDGSEQEN
#define _EDGEN CTMUCON1Lbits.EDGEN
#define _TGEN CTMUCON1Lbits.TGEN
#define _CTMUSIDL CTMUCON1Lbits.CTMUSIDL
#define _CTMUEN CTMUCON1Lbits.CTMUEN
#define _IRNG0 CTMUCON1Lbits.IRNG0
#define _IRNG1 CTMUCON1Lbits.IRNG1
#define _ITRIM0 CTMUCON1Lbits.ITRIM0
#define _ITRIM1 CTMUCON1Lbits.ITRIM1
#define _ITRIM2 CTMUCON1Lbits.ITRIM2
#define _ITRIM3 CTMUCON1Lbits.ITRIM3
#define _ITRIM4 CTMUCON1Lbits.ITRIM4
#define _ITRIM5 CTMUCON1Lbits.ITRIM5

/* CTMUCON1H */
#define _EDG2SEL CTMUCON1Hbits.EDG2SEL
#define _EDG2POL CTMUCON1Hbits.EDG2POL
#define _EDG2MOD CTMUCON1Hbits.EDG2MOD
#define _EDG1STAT CTMUCON1Hbits.EDG1STAT
#define _EDG2STAT CTMUCON1Hbits.EDG2STAT
#define _EDG1SEL CTMUCON1Hbits.EDG1SEL
#define _EDG1POL CTMUCON1Hbits.EDG1POL
#define _EDG1MOD CTMUCON1Hbits.EDG1MOD
#define _EDG2SEL0 CTMUCON1Hbits.EDG2SEL0
#define _EDG2SEL1 CTMUCON1Hbits.EDG2SEL1
#define _EDG2SEL2 CTMUCON1Hbits.EDG2SEL2
#define _EDG2SEL3 CTMUCON1Hbits.EDG2SEL3
#define _EDG1SEL0 CTMUCON1Hbits.EDG1SEL0
#define _EDG1SEL1 CTMUCON1Hbits.EDG1SEL1
#define _EDG1SEL2 CTMUCON1Hbits.EDG1SEL2
#define _EDG1SEL3 CTMUCON1Hbits.EDG1SEL3

/* CTMUCON2 */
#define _DISCHS CTMUCON2bits.DISCHS
#define _IRSTEN CTMUCON2bits.IRSTEN
#define _DISCHS0 CTMUCON2bits.DISCHS0
#define _DISCHS1 CTMUCON2bits.DISCHS1
#define _DISCHS2 CTMUCON2bits.DISCHS2

/* AD1CTMENH */
#define _CTMEN16 AD1CTMENHbits.CTMEN16
#define _CTMEN17 AD1CTMENHbits.CTMEN17
#define _CTMEN18 AD1CTMENHbits.CTMEN18
#define _CTMEN19 AD1CTMENHbits.CTMEN19
#define _CTMEN20 AD1CTMENHbits.CTMEN20
#define _CTMEN21 AD1CTMENHbits.CTMEN21
#define _CTMEN22 AD1CTMENHbits.CTMEN22
#define _CTMEN23 AD1CTMENHbits.CTMEN23

/* AD1CTMENL */
#define _CTMEN0 AD1CTMENLbits.CTMEN0
#define _CTMEN1 AD1CTMENLbits.CTMEN1
#define _CTMEN2 AD1CTMENLbits.CTMEN2
#define _CTMEN3 AD1CTMENLbits.CTMEN3
#define _CTMEN4 AD1CTMENLbits.CTMEN4
#define _CTMEN5 AD1CTMENLbits.CTMEN5
#define _CTMEN6 AD1CTMENLbits.CTMEN6
#define _CTMEN7 AD1CTMENLbits.CTMEN7
#define _CTMEN8 AD1CTMENLbits.CTMEN8
#define _CTMEN9 AD1CTMENLbits.CTMEN9
#define _CTMEN10 AD1CTMENLbits.CTMEN10
#define _CTMEN11 AD1CTMENLbits.CTMEN11
#define _CTMEN12 AD1CTMENLbits.CTMEN12
#define _CTMEN13 AD1CTMENLbits.CTMEN13
#define _CTMEN14 AD1CTMENLbits.CTMEN14
#define _CTMEN15 AD1CTMENLbits.CTMEN15

/* ANSA */
#define _ANSA0 ANSAbits.ANSA0
#define _ANSA1 ANSAbits.ANSA1
#define _ANSA2 ANSAbits.ANSA2
#define _ANSA3 ANSAbits.ANSA3
#define _ANSA4 ANSAbits.ANSA4
#define _ANSELA0 ANSAbits.ANSELA0
#define _ANSELA1 ANSAbits.ANSELA1
#define _ANSELA2 ANSAbits.ANSELA2
#define _ANSELA3 ANSAbits.ANSELA3
#define _ANSELA4 ANSAbits.ANSELA4

/* ANSB */
#define _ANSB0 ANSBbits.ANSB0
#define _ANSB1 ANSBbits.ANSB1
#define _ANSB2 ANSBbits.ANSB2
#define _ANSB3 ANSBbits.ANSB3
#define _ANSB4 ANSBbits.ANSB4
#define _ANSB5 ANSBbits.ANSB5
#define _ANSB6 ANSBbits.ANSB6
#define _ANSB7 ANSBbits.ANSB7
#define _ANSB8 ANSBbits.ANSB8
#define _ANSB9 ANSBbits.ANSB9
#define _ANSB12 ANSBbits.ANSB12
#define _ANSB13 ANSBbits.ANSB13
#define _ANSB14 ANSBbits.ANSB14
#define _ANSB15 ANSBbits.ANSB15
#define _ANSELB0 ANSBbits.ANSELB0
#define _ANSELB1 ANSBbits.ANSELB1
#define _ANSELB2 ANSBbits.ANSELB2
#define _ANSELB3 ANSBbits.ANSELB3
#define _ANSELB4 ANSBbits.ANSELB4
#define _ANSELB5 ANSBbits.ANSELB5
#define _ANSELB6 ANSBbits.ANSELB6
#define _ANSELB7 ANSBbits.ANSELB7
#define _ANSELB8 ANSBbits.ANSELB8
#define _ANSELB9 ANSBbits.ANSELB9
#define _ANSELB12 ANSBbits.ANSELB12
#define _ANSELB13 ANSBbits.ANSELB13
#define _ANSELB14 ANSBbits.ANSELB14
#define _ANSELB15 ANSBbits.ANSELB15

/* ANSC */
#define _ANSC0 ANSCbits.ANSC0
#define _ANSC1 ANSCbits.ANSC1
#define _ANSC2 ANSCbits.ANSC2
#define _ANSELC0 ANSCbits.ANSELC0
#define _ANSELC1 ANSCbits.ANSELC1
#define _ANSELC2 ANSCbits.ANSELC2

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

/* RTCPWC */
#define _RTCOUT RTCPWCbits.RTCOUT
#define _RTCLK RTCPWCbits.RTCLK
#define _PWSPRE RTCPWCbits.PWSPRE
#define _PWCPRE RTCPWCbits.PWCPRE
#define _PWCPOL RTCPWCbits.PWCPOL
#define _PWCEN RTCPWCbits.PWCEN
#define _RTCOUT0 RTCPWCbits.RTCOUT0
#define _RTCOUT1 RTCPWCbits.RTCOUT1
#define _RTCLK0 RTCPWCbits.RTCLK0
#define _RTCLK1 RTCPWCbits.RTCLK1
#define _PWCSPRE RTCPWCbits.PWCSPRE
#define _PWCCPRE RTCPWCbits.PWCCPRE
#define _RTCCLK RTCPWCbits.RTCCLK
#define _RTCCLK0 RTCPWCbits.RTCCLK0
#define _RTCCLK1 RTCPWCbits.RTCCLK1

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C2OUT CMSTATbits.C2OUT
#define _C3OUT CMSTATbits.C3OUT
#define _C1EVT CMSTATbits.C1EVT
#define _C2EVT CMSTATbits.C2EVT
#define _C3EVT CMSTATbits.C3EVT
#define _CMIDL CMSTATbits.CMIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRSS CVRCONbits.CVRSS
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3
#define _CVR4 CVRCONbits.CVR4

/* CM1CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _CREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* CM2CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _CREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* CM3CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _CREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* BUFCON0 */
#define _BUFREF BUFCON0bits.BUFREF
#define _BUFREF0 BUFCON0bits.BUFREF0
#define _BUFREF1 BUFCON0bits.BUFREF1

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _PMSLP RCONbits.PMSLP
/* Bitname _CM cannot be defined because it is used by more than one SFR */
#define _RETEN RCONbits.RETEN
#define _SBOREN RCONbits.SBOREN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR
#define _VREGS RCONbits.VREGS

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _SOSCEN OSCCONbits.SOSCEN
#define _SOSCDRV OSCCONbits.SOSCDRV
#define _CF OSCCONbits.CF
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

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROEN REFOCONbits.ROEN
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3
#define _ROON REFOCONbits.ROON

/* HLVDCON */
#define _HLVDL HLVDCONbits.HLVDL
#define _IRVST HLVDCONbits.IRVST
#define _BGVST HLVDCONbits.BGVST
#define _VDIR HLVDCONbits.VDIR
#define _LSIDL HLVDCONbits.LSIDL
#define _HLVDEN HLVDCONbits.HLVDEN
#define _HLVDL0 HLVDCONbits.HLVDL0
#define _HLVDL1 HLVDCONbits.HLVDL1
#define _HLVDL2 HLVDCONbits.HLVDL2
#define _HLVDL3 HLVDCONbits.HLVDL3
#define _HLSIDL HLVDCONbits.HLSIDL

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _PGMONLY NVMCONbits.PGMONLY
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3
#define _NVMOP4 NVMCONbits.NVMOP4
#define _NVMOP5 NVMCONbits.NVMOP5

/* NVMKEY */
#define _NVMKEY NVMKEYbits.NVMKEY
#define _NVMKEY0 NVMKEYbits.NVMKEY0
#define _NVMKEY1 NVMKEYbits.NVMKEY1
#define _NVMKEY2 NVMKEYbits.NVMKEY2
#define _NVMKEY3 NVMKEYbits.NVMKEY3
#define _NVMKEY4 NVMKEYbits.NVMKEY4
#define _NVMKEY5 NVMKEYbits.NVMKEY5
#define _NVMKEY6 NVMKEYbits.NVMKEY6
#define _NVMKEY7 NVMKEYbits.NVMKEY7

/* ULPWCON */
#define _ULPSINK ULPWCONbits.ULPSINK
#define _ULPSIDL ULPWCONbits.ULPSIDL
#define _ULPEN ULPWCONbits.ULPEN
#define _CRNTEN ULPWCONbits.CRNTEN
#define _PSIDL ULPWCONbits.PSIDL
#define _WUEN ULPWCONbits.WUEN

/* PMD1 */
#define _ADC1MD PMD1bits.ADC1MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _SSP1MD PMD1bits.SSP1MD
#define _T1MD PMD1bits.T1MD

/* PMD2 */
#define _CCP1MD PMD2bits.CCP1MD
#define _CCP2MD PMD2bits.CCP2MD
#define _CCP3MD PMD2bits.CCP3MD
#define _CCP4MD PMD2bits.CCP4MD
#define _CCP5MD PMD2bits.CCP5MD

/* PMD3 */
#define _SSP2MD PMD3bits.SSP2MD
#define _DAC1MD PMD3bits.DAC1MD
#define _RTCCMD PMD3bits.RTCCMD
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _HLVDMD PMD4bits.HLVDMD
#define _CTMUMD PMD4bits.CTMUMD
#define _REFOMD PMD4bits.REFOMD
#define _ULPWUMD PMD4bits.ULPWUMD

/* PMD6 */
#define _AMP2MD PMD6bits.AMP2MD
#define _DAC2MD PMD6bits.DAC2MD
#define _AMP1MD PMD6bits.AMP1MD

/* PMD8 */
#define _CLC1MD PMD8bits.CLC1MD
#define _CLC2MD PMD8bits.CLC2MD


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

#define _TBLPAG_TBLPAG_POSITION                  0x00000000
#define _TBLPAG_TBLPAG_MASK                      0x000000FF
#define _TBLPAG_TBLPAG_LENGTH                    0x00000008

#define _PSVPAG_PSVPAG_POSITION                  0x00000000
#define _PSVPAG_PSVPAG_MASK                      0x000000FF
#define _PSVPAG_PSVPAG_LENGTH                    0x00000008

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

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _SR_DC_POSITION                          0x00000008
#define _SR_DC_MASK                              0x00000100
#define _SR_DC_LENGTH                            0x00000001

#define _SR_IPL_POSITION                         0x00000005
#define _SR_IPL_MASK                             0x000000E0
#define _SR_IPL_LENGTH                           0x00000003

#define _CORCON_PSV_POSITION                     0x00000002
#define _CORCON_PSV_MASK                         0x00000004
#define _CORCON_PSV_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _DISICNT_DISICNT_POSITION                0x00000000
#define _DISICNT_DISICNT_MASK                    0x00003FFF
#define _DISICNT_DISICNT_LENGTH                  0x0000000E

#define _CNPD1_CN0PDE_POSITION                   0x00000000
#define _CNPD1_CN0PDE_MASK                       0x00000001
#define _CNPD1_CN0PDE_LENGTH                     0x00000001

#define _CNPD1_CN1PDE_POSITION                   0x00000001
#define _CNPD1_CN1PDE_MASK                       0x00000002
#define _CNPD1_CN1PDE_LENGTH                     0x00000001

#define _CNPD1_CN2PDE_POSITION                   0x00000002
#define _CNPD1_CN2PDE_MASK                       0x00000004
#define _CNPD1_CN2PDE_LENGTH                     0x00000001

#define _CNPD1_CN3PDE_POSITION                   0x00000003
#define _CNPD1_CN3PDE_MASK                       0x00000008
#define _CNPD1_CN3PDE_LENGTH                     0x00000001

#define _CNPD1_CN4PDE_POSITION                   0x00000004
#define _CNPD1_CN4PDE_MASK                       0x00000010
#define _CNPD1_CN4PDE_LENGTH                     0x00000001

#define _CNPD1_CN5PDE_POSITION                   0x00000005
#define _CNPD1_CN5PDE_MASK                       0x00000020
#define _CNPD1_CN5PDE_LENGTH                     0x00000001

#define _CNPD1_CN6PDE_POSITION                   0x00000006
#define _CNPD1_CN6PDE_MASK                       0x00000040
#define _CNPD1_CN6PDE_LENGTH                     0x00000001

#define _CNPD1_CN7PDE_POSITION                   0x00000007
#define _CNPD1_CN7PDE_MASK                       0x00000080
#define _CNPD1_CN7PDE_LENGTH                     0x00000001

#define _CNPD1_CN9PDE_POSITION                   0x00000009
#define _CNPD1_CN9PDE_MASK                       0x00000200
#define _CNPD1_CN9PDE_LENGTH                     0x00000001

#define _CNPD1_CN10PDE_POSITION                  0x0000000A
#define _CNPD1_CN10PDE_MASK                      0x00000400
#define _CNPD1_CN10PDE_LENGTH                    0x00000001

#define _CNPD1_CN11PDE_POSITION                  0x0000000B
#define _CNPD1_CN11PDE_MASK                      0x00000800
#define _CNPD1_CN11PDE_LENGTH                    0x00000001

#define _CNPD1_CN12PDE_POSITION                  0x0000000C
#define _CNPD1_CN12PDE_MASK                      0x00001000
#define _CNPD1_CN12PDE_LENGTH                    0x00000001

#define _CNPD1_CN13PDE_POSITION                  0x0000000D
#define _CNPD1_CN13PDE_MASK                      0x00002000
#define _CNPD1_CN13PDE_LENGTH                    0x00000001

#define _CNPD1_CN14PDE_POSITION                  0x0000000E
#define _CNPD1_CN14PDE_MASK                      0x00004000
#define _CNPD1_CN14PDE_LENGTH                    0x00000001

#define _CNPD1_CN15PDE_POSITION                  0x0000000F
#define _CNPD1_CN15PDE_MASK                      0x00008000
#define _CNPD1_CN15PDE_LENGTH                    0x00000001

#define _CNPD2_CN16PDE_POSITION                  0x00000000
#define _CNPD2_CN16PDE_MASK                      0x00000001
#define _CNPD2_CN16PDE_LENGTH                    0x00000001

#define _CNPD2_CN17PDE_POSITION                  0x00000001
#define _CNPD2_CN17PDE_MASK                      0x00000002
#define _CNPD2_CN17PDE_LENGTH                    0x00000001

#define _CNPD2_CN18PDE_POSITION                  0x00000002
#define _CNPD2_CN18PDE_MASK                      0x00000004
#define _CNPD2_CN18PDE_LENGTH                    0x00000001

#define _CNPD2_CN19PDE_POSITION                  0x00000003
#define _CNPD2_CN19PDE_MASK                      0x00000008
#define _CNPD2_CN19PDE_LENGTH                    0x00000001

#define _CNPD2_CN20PDE_POSITION                  0x00000004
#define _CNPD2_CN20PDE_MASK                      0x00000010
#define _CNPD2_CN20PDE_LENGTH                    0x00000001

#define _CNPD2_CN21PDE_POSITION                  0x00000005
#define _CNPD2_CN21PDE_MASK                      0x00000020
#define _CNPD2_CN21PDE_LENGTH                    0x00000001

#define _CNPD2_CN22PDE_POSITION                  0x00000006
#define _CNPD2_CN22PDE_MASK                      0x00000040
#define _CNPD2_CN22PDE_LENGTH                    0x00000001

#define _CNPD2_CN23PDE_POSITION                  0x00000007
#define _CNPD2_CN23PDE_MASK                      0x00000080
#define _CNPD2_CN23PDE_LENGTH                    0x00000001

#define _CNPD2_CN24PDE_POSITION                  0x00000008
#define _CNPD2_CN24PDE_MASK                      0x00000100
#define _CNPD2_CN24PDE_LENGTH                    0x00000001

#define _CNPD2_CN25PDE_POSITION                  0x00000009
#define _CNPD2_CN25PDE_MASK                      0x00000200
#define _CNPD2_CN25PDE_LENGTH                    0x00000001

#define _CNPD2_CN26PDE_POSITION                  0x0000000A
#define _CNPD2_CN26PDE_MASK                      0x00000400
#define _CNPD2_CN26PDE_LENGTH                    0x00000001

#define _CNPD2_CN27PDE_POSITION                  0x0000000B
#define _CNPD2_CN27PDE_MASK                      0x00000800
#define _CNPD2_CN27PDE_LENGTH                    0x00000001

#define _CNPD2_CN28PDE_POSITION                  0x0000000C
#define _CNPD2_CN28PDE_MASK                      0x00001000
#define _CNPD2_CN28PDE_LENGTH                    0x00000001

#define _CNPD2_CN29PDE_POSITION                  0x0000000D
#define _CNPD2_CN29PDE_MASK                      0x00002000
#define _CNPD2_CN29PDE_LENGTH                    0x00000001

#define _CNPD2_CN30PDE_POSITION                  0x0000000E
#define _CNPD2_CN30PDE_MASK                      0x00004000
#define _CNPD2_CN30PDE_LENGTH                    0x00000001

#define _CNPD2_CN31PDE_POSITION                  0x0000000F
#define _CNPD2_CN31PDE_MASK                      0x00008000
#define _CNPD2_CN31PDE_LENGTH                    0x00000001

#define _CNPD3_CN32PDE_POSITION                  0x00000000
#define _CNPD3_CN32PDE_MASK                      0x00000001
#define _CNPD3_CN32PDE_LENGTH                    0x00000001

#define _CNPD3_CN33PDE_POSITION                  0x00000001
#define _CNPD3_CN33PDE_MASK                      0x00000002
#define _CNPD3_CN33PDE_LENGTH                    0x00000001

#define _CNPD3_CN34PDE_POSITION                  0x00000002
#define _CNPD3_CN34PDE_MASK                      0x00000004
#define _CNPD3_CN34PDE_LENGTH                    0x00000001

#define _CNPD3_CN35PDE_POSITION                  0x00000003
#define _CNPD3_CN35PDE_MASK                      0x00000008
#define _CNPD3_CN35PDE_LENGTH                    0x00000001

#define _CNPD3_CN36PDE_POSITION                  0x00000004
#define _CNPD3_CN36PDE_MASK                      0x00000010
#define _CNPD3_CN36PDE_LENGTH                    0x00000001

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

#define _CNEN2_CN24IE_POSITION                   0x00000008
#define _CNEN2_CN24IE_MASK                       0x00000100
#define _CNEN2_CN24IE_LENGTH                     0x00000001

#define _CNEN2_CN25IE_POSITION                   0x00000009
#define _CNEN2_CN25IE_MASK                       0x00000200
#define _CNEN2_CN25IE_LENGTH                     0x00000001

#define _CNEN2_CN26IE_POSITION                   0x0000000A
#define _CNEN2_CN26IE_MASK                       0x00000400
#define _CNEN2_CN26IE_LENGTH                     0x00000001

#define _CNEN2_CN27IE_POSITION                   0x0000000B
#define _CNEN2_CN27IE_MASK                       0x00000800
#define _CNEN2_CN27IE_LENGTH                     0x00000001

#define _CNEN2_CN28IE_POSITION                   0x0000000C
#define _CNEN2_CN28IE_MASK                       0x00001000
#define _CNEN2_CN28IE_LENGTH                     0x00000001

#define _CNEN2_CN29IE_POSITION                   0x0000000D
#define _CNEN2_CN29IE_MASK                       0x00002000
#define _CNEN2_CN29IE_LENGTH                     0x00000001

#define _CNEN2_CN30IE_POSITION                   0x0000000E
#define _CNEN2_CN30IE_MASK                       0x00004000
#define _CNEN2_CN30IE_LENGTH                     0x00000001

#define _CNEN2_CN31IE_POSITION                   0x0000000F
#define _CNEN2_CN31IE_MASK                       0x00008000
#define _CNEN2_CN31IE_LENGTH                     0x00000001

#define _CNEN3_CN32IE_POSITION                   0x00000000
#define _CNEN3_CN32IE_MASK                       0x00000001
#define _CNEN3_CN32IE_LENGTH                     0x00000001

#define _CNEN3_CN33IE_POSITION                   0x00000001
#define _CNEN3_CN33IE_MASK                       0x00000002
#define _CNEN3_CN33IE_LENGTH                     0x00000001

#define _CNEN3_CN34IE_POSITION                   0x00000002
#define _CNEN3_CN34IE_MASK                       0x00000004
#define _CNEN3_CN34IE_LENGTH                     0x00000001

#define _CNEN3_CN35IE_POSITION                   0x00000003
#define _CNEN3_CN35IE_MASK                       0x00000008
#define _CNEN3_CN35IE_LENGTH                     0x00000001

#define _CNEN3_CN36IE_POSITION                   0x00000004
#define _CNEN3_CN36IE_MASK                       0x00000010
#define _CNEN3_CN36IE_LENGTH                     0x00000001

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

#define _CNPU2_CN24PUE_POSITION                  0x00000008
#define _CNPU2_CN24PUE_MASK                      0x00000100
#define _CNPU2_CN24PUE_LENGTH                    0x00000001

#define _CNPU2_CN25PUE_POSITION                  0x00000009
#define _CNPU2_CN25PUE_MASK                      0x00000200
#define _CNPU2_CN25PUE_LENGTH                    0x00000001

#define _CNPU2_CN26PUE_POSITION                  0x0000000A
#define _CNPU2_CN26PUE_MASK                      0x00000400
#define _CNPU2_CN26PUE_LENGTH                    0x00000001

#define _CNPU2_CN27PUE_POSITION                  0x0000000B
#define _CNPU2_CN27PUE_MASK                      0x00000800
#define _CNPU2_CN27PUE_LENGTH                    0x00000001

#define _CNPU2_CN28PUE_POSITION                  0x0000000C
#define _CNPU2_CN28PUE_MASK                      0x00001000
#define _CNPU2_CN28PUE_LENGTH                    0x00000001

#define _CNPU2_CN29PUE_POSITION                  0x0000000D
#define _CNPU2_CN29PUE_MASK                      0x00002000
#define _CNPU2_CN29PUE_LENGTH                    0x00000001

#define _CNPU2_CN30PUE_POSITION                  0x0000000E
#define _CNPU2_CN30PUE_MASK                      0x00004000
#define _CNPU2_CN30PUE_LENGTH                    0x00000001

#define _CNPU2_CN31PUE_POSITION                  0x0000000F
#define _CNPU2_CN31PUE_MASK                      0x00008000
#define _CNPU2_CN31PUE_LENGTH                    0x00000001

#define _CNPU3_CN32PUE_POSITION                  0x00000000
#define _CNPU3_CN32PUE_MASK                      0x00000001
#define _CNPU3_CN32PUE_LENGTH                    0x00000001

#define _CNPU3_CN33PUE_POSITION                  0x00000001
#define _CNPU3_CN33PUE_MASK                      0x00000002
#define _CNPU3_CN33PUE_LENGTH                    0x00000001

#define _CNPU3_CN34PUE_POSITION                  0x00000002
#define _CNPU3_CN34PUE_MASK                      0x00000004
#define _CNPU3_CN34PUE_LENGTH                    0x00000001

#define _CNPU3_CN35PUE_POSITION                  0x00000003
#define _CNPU3_CN35PUE_MASK                      0x00000008
#define _CNPU3_CN35PUE_LENGTH                    0x00000001

#define _CNPU3_CN36PUE_POSITION                  0x00000004
#define _CNPU3_CN36PUE_MASK                      0x00000010
#define _CNPU3_CN36PUE_LENGTH                    0x00000001

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

#define _IFS0_CCP1IF_POSITION                    0x00000001
#define _IFS0_CCP1IF_MASK                        0x00000002
#define _IFS0_CCP1IF_LENGTH                      0x00000001

#define _IFS0_CCP2IF_POSITION                    0x00000002
#define _IFS0_CCP2IF_MASK                        0x00000004
#define _IFS0_CCP2IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_CCP3IF_POSITION                    0x00000005
#define _IFS0_CCP3IF_MASK                        0x00000020
#define _IFS0_CCP3IF_LENGTH                      0x00000001

#define _IFS0_CCP4IF_POSITION                    0x00000006
#define _IFS0_CCP4IF_MASK                        0x00000040
#define _IFS0_CCP4IF_LENGTH                      0x00000001

#define _IFS0_CCT1IF_POSITION                    0x00000007
#define _IFS0_CCT1IF_MASK                        0x00000080
#define _IFS0_CCT1IF_LENGTH                      0x00000001

#define _IFS0_CCT2IF_POSITION                    0x00000008
#define _IFS0_CCT2IF_MASK                        0x00000100
#define _IFS0_CCT2IF_LENGTH                      0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000000B
#define _IFS0_U1RXIF_MASK                        0x00000800
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000C
#define _IFS0_U1TXIF_MASK                        0x00001000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000000D
#define _IFS0_AD1IF_MASK                         0x00002000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_NVMIF_POSITION                     0x0000000F
#define _IFS0_NVMIF_MASK                         0x00008000
#define _IFS0_NVMIF_LENGTH                       0x00000001

#define _IFS1_SSP1IF_POSITION                    0x00000000
#define _IFS1_SSP1IF_MASK                        0x00000001
#define _IFS1_SSP1IF_LENGTH                      0x00000001

#define _IFS1_BCL1IF_POSITION                    0x00000001
#define _IFS1_BCL1IF_MASK                        0x00000002
#define _IFS1_BCL1IF_LENGTH                      0x00000001

#define _IFS1_CMIF_POSITION                      0x00000002
#define _IFS1_CMIF_MASK                          0x00000004
#define _IFS1_CMIF_LENGTH                        0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_CCP5IF_POSITION                    0x00000006
#define _IFS1_CCP5IF_MASK                        0x00000040
#define _IFS1_CCP5IF_LENGTH                      0x00000001

#define _IFS1_CCT3IF_POSITION                    0x0000000B
#define _IFS1_CCT3IF_MASK                        0x00000800
#define _IFS1_CCT3IF_LENGTH                      0x00000001

#define _IFS1_CCT4IF_POSITION                    0x0000000C
#define _IFS1_CCT4IF_MASK                        0x00001000
#define _IFS1_CCT4IF_LENGTH                      0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_U2RXIF_POSITION                    0x0000000E
#define _IFS1_U2RXIF_MASK                        0x00004000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000F
#define _IFS1_U2TXIF_MASK                        0x00008000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS2_CCT5IF_POSITION                    0x00000009
#define _IFS2_CCT5IF_MASK                        0x00000200
#define _IFS2_CCT5IF_LENGTH                      0x00000001

#define _IFS3_SSP2IF_POSITION                    0x00000001
#define _IFS3_SSP2IF_MASK                        0x00000002
#define _IFS3_SSP2IF_LENGTH                      0x00000001

#define _IFS3_BCL2IF_POSITION                    0x00000002
#define _IFS3_BCL2IF_MASK                        0x00000004
#define _IFS3_BCL2IF_LENGTH                      0x00000001

#define _IFS3_RTCIF_POSITION                     0x0000000E
#define _IFS3_RTCIF_MASK                         0x00004000
#define _IFS3_RTCIF_LENGTH                       0x00000001

#define _IFS4_U1ERIF_POSITION                    0x00000001
#define _IFS4_U1ERIF_MASK                        0x00000002
#define _IFS4_U1ERIF_LENGTH                      0x00000001

#define _IFS4_U2ERIF_POSITION                    0x00000002
#define _IFS4_U2ERIF_MASK                        0x00000004
#define _IFS4_U2ERIF_LENGTH                      0x00000001

#define _IFS4_HLVDIF_POSITION                    0x00000008
#define _IFS4_HLVDIF_MASK                        0x00000100
#define _IFS4_HLVDIF_LENGTH                      0x00000001

#define _IFS4_CTMUIF_POSITION                    0x0000000D
#define _IFS4_CTMUIF_MASK                        0x00002000
#define _IFS4_CTMUIF_LENGTH                      0x00000001

#define _IFS4_DAC1IF_POSITION                    0x0000000E
#define _IFS4_DAC1IF_MASK                        0x00004000
#define _IFS4_DAC1IF_LENGTH                      0x00000001

#define _IFS4_DAC2IF_POSITION                    0x0000000F
#define _IFS4_DAC2IF_MASK                        0x00008000
#define _IFS4_DAC2IF_LENGTH                      0x00000001

#define _IFS5_ULPWUIF_POSITION                   0x00000000
#define _IFS5_ULPWUIF_MASK                       0x00000001
#define _IFS5_ULPWUIF_LENGTH                     0x00000001

#define _IFS6_CLC1IF_POSITION                    0x00000000
#define _IFS6_CLC1IF_MASK                        0x00000001
#define _IFS6_CLC1IF_LENGTH                      0x00000001

#define _IFS6_CLC2IF_POSITION                    0x00000001
#define _IFS6_CLC2IF_MASK                        0x00000002
#define _IFS6_CLC2IF_LENGTH                      0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_CCP1IE_POSITION                    0x00000001
#define _IEC0_CCP1IE_MASK                        0x00000002
#define _IEC0_CCP1IE_LENGTH                      0x00000001

#define _IEC0_CCP2IE_POSITION                    0x00000002
#define _IEC0_CCP2IE_MASK                        0x00000004
#define _IEC0_CCP2IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_CCP3IE_POSITION                    0x00000005
#define _IEC0_CCP3IE_MASK                        0x00000020
#define _IEC0_CCP3IE_LENGTH                      0x00000001

#define _IEC0_CCP4IE_POSITION                    0x00000006
#define _IEC0_CCP4IE_MASK                        0x00000040
#define _IEC0_CCP4IE_LENGTH                      0x00000001

#define _IEC0_CCT1IE_POSITION                    0x00000007
#define _IEC0_CCT1IE_MASK                        0x00000080
#define _IEC0_CCT1IE_LENGTH                      0x00000001

#define _IEC0_CCT2IE_POSITION                    0x00000008
#define _IEC0_CCT2IE_MASK                        0x00000100
#define _IEC0_CCT2IE_LENGTH                      0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000000B
#define _IEC0_U1RXIE_MASK                        0x00000800
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000C
#define _IEC0_U1TXIE_MASK                        0x00001000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000000D
#define _IEC0_AD1IE_MASK                         0x00002000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_NVMIE_POSITION                     0x0000000F
#define _IEC0_NVMIE_MASK                         0x00008000
#define _IEC0_NVMIE_LENGTH                       0x00000001

#define _IEC1_SSP1IE_POSITION                    0x00000000
#define _IEC1_SSP1IE_MASK                        0x00000001
#define _IEC1_SSP1IE_LENGTH                      0x00000001

#define _IEC1_BCL1IE_POSITION                    0x00000001
#define _IEC1_BCL1IE_MASK                        0x00000002
#define _IEC1_BCL1IE_LENGTH                      0x00000001

#define _IEC1_CMIE_POSITION                      0x00000002
#define _IEC1_CMIE_MASK                          0x00000004
#define _IEC1_CMIE_LENGTH                        0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_CCP5IE_POSITION                    0x00000006
#define _IEC1_CCP5IE_MASK                        0x00000040
#define _IEC1_CCP5IE_LENGTH                      0x00000001

#define _IEC1_CCT3IE_POSITION                    0x0000000B
#define _IEC1_CCT3IE_MASK                        0x00000800
#define _IEC1_CCT3IE_LENGTH                      0x00000001

#define _IEC1_CCT4IE_POSITION                    0x0000000C
#define _IEC1_CCT4IE_MASK                        0x00001000
#define _IEC1_CCT4IE_LENGTH                      0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_U2RXIE_POSITION                    0x0000000E
#define _IEC1_U2RXIE_MASK                        0x00004000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000F
#define _IEC1_U2TXIE_MASK                        0x00008000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC2_CCT5IE_POSITION                    0x00000009
#define _IEC2_CCT5IE_MASK                        0x00000200
#define _IEC2_CCT5IE_LENGTH                      0x00000001

#define _IEC3_SSP2IE_POSITION                    0x00000001
#define _IEC3_SSP2IE_MASK                        0x00000002
#define _IEC3_SSP2IE_LENGTH                      0x00000001

#define _IEC3_BCL2IE_POSITION                    0x00000002
#define _IEC3_BCL2IE_MASK                        0x00000004
#define _IEC3_BCL2IE_LENGTH                      0x00000001

#define _IEC3_RTCIE_POSITION                     0x0000000E
#define _IEC3_RTCIE_MASK                         0x00004000
#define _IEC3_RTCIE_LENGTH                       0x00000001

#define _IEC4_U1ERIE_POSITION                    0x00000001
#define _IEC4_U1ERIE_MASK                        0x00000002
#define _IEC4_U1ERIE_LENGTH                      0x00000001

#define _IEC4_U2ERIE_POSITION                    0x00000002
#define _IEC4_U2ERIE_MASK                        0x00000004
#define _IEC4_U2ERIE_LENGTH                      0x00000001

#define _IEC4_HLVDIE_POSITION                    0x00000008
#define _IEC4_HLVDIE_MASK                        0x00000100
#define _IEC4_HLVDIE_LENGTH                      0x00000001

#define _IEC4_CTMUIE_POSITION                    0x0000000D
#define _IEC4_CTMUIE_MASK                        0x00002000
#define _IEC4_CTMUIE_LENGTH                      0x00000001

#define _IEC4_DAC1IE_POSITION                    0x0000000E
#define _IEC4_DAC1IE_MASK                        0x00004000
#define _IEC4_DAC1IE_LENGTH                      0x00000001

#define _IEC4_DAC2IE_POSITION                    0x0000000F
#define _IEC4_DAC2IE_MASK                        0x00008000
#define _IEC4_DAC2IE_LENGTH                      0x00000001

#define _IEC5_ULPWUIE_POSITION                   0x00000000
#define _IEC5_ULPWUIE_MASK                       0x00000001
#define _IEC5_ULPWUIE_LENGTH                     0x00000001

#define _IEC6_CLC1IE_POSITION                    0x00000000
#define _IEC6_CLC1IE_MASK                        0x00000001
#define _IEC6_CLC1IE_LENGTH                      0x00000001

#define _IEC6_CLC2IE_POSITION                    0x00000001
#define _IEC6_CLC2IE_MASK                        0x00000002
#define _IEC6_CLC2IE_LENGTH                      0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_CCP1IP_POSITION                    0x00000004
#define _IPC0_CCP1IP_MASK                        0x00000070
#define _IPC0_CCP1IP_LENGTH                      0x00000003

#define _IPC0_CCP2IP_POSITION                    0x00000008
#define _IPC0_CCP2IP_MASK                        0x00000700
#define _IPC0_CCP2IP_LENGTH                      0x00000003

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

#define _IPC0_CC1IP0_POSITION                    0x00000004
#define _IPC0_CC1IP0_MASK                        0x00000010
#define _IPC0_CC1IP0_LENGTH                      0x00000001

#define _IPC0_CC1IP1_POSITION                    0x00000005
#define _IPC0_CC1IP1_MASK                        0x00000020
#define _IPC0_CC1IP1_LENGTH                      0x00000001

#define _IPC0_CC1IP2_POSITION                    0x00000006
#define _IPC0_CC1IP2_MASK                        0x00000040
#define _IPC0_CC1IP2_LENGTH                      0x00000001

#define _IPC0_CC2IP0_POSITION                    0x00000008
#define _IPC0_CC2IP0_MASK                        0x00000100
#define _IPC0_CC2IP0_LENGTH                      0x00000001

#define _IPC0_CC2IP1_POSITION                    0x00000009
#define _IPC0_CC2IP1_MASK                        0x00000200
#define _IPC0_CC2IP1_LENGTH                      0x00000001

#define _IPC0_CC2IP2_POSITION                    0x0000000A
#define _IPC0_CC2IP2_MASK                        0x00000400
#define _IPC0_CC2IP2_LENGTH                      0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_CCP3IP_POSITION                    0x00000004
#define _IPC1_CCP3IP_MASK                        0x00000070
#define _IPC1_CCP3IP_LENGTH                      0x00000003

#define _IPC1_CCP4IP_POSITION                    0x00000008
#define _IPC1_CCP4IP_MASK                        0x00000700
#define _IPC1_CCP4IP_LENGTH                      0x00000003

#define _IPC1_CCT1IP_POSITION                    0x0000000C
#define _IPC1_CCT1IP_MASK                        0x00007000
#define _IPC1_CCT1IP_LENGTH                      0x00000003

#define _IPC1_CC3IP0_POSITION                    0x00000004
#define _IPC1_CC3IP0_MASK                        0x00000010
#define _IPC1_CC3IP0_LENGTH                      0x00000001

#define _IPC1_CC3IP1_POSITION                    0x00000005
#define _IPC1_CC3IP1_MASK                        0x00000020
#define _IPC1_CC3IP1_LENGTH                      0x00000001

#define _IPC1_CC3IP2_POSITION                    0x00000006
#define _IPC1_CC3IP2_MASK                        0x00000040
#define _IPC1_CC3IP2_LENGTH                      0x00000001

#define _IPC1_CC4IP0_POSITION                    0x00000008
#define _IPC1_CC4IP0_MASK                        0x00000100
#define _IPC1_CC4IP0_LENGTH                      0x00000001

#define _IPC1_CC4IP1_POSITION                    0x00000009
#define _IPC1_CC4IP1_MASK                        0x00000200
#define _IPC1_CC4IP1_LENGTH                      0x00000001

#define _IPC1_CC4IP2_POSITION                    0x0000000A
#define _IPC1_CC4IP2_MASK                        0x00000400
#define _IPC1_CC4IP2_LENGTH                      0x00000001

#define _IPC1_CCT1IP0_POSITION                   0x0000000C
#define _IPC1_CCT1IP0_MASK                       0x00001000
#define _IPC1_CCT1IP0_LENGTH                     0x00000001

#define _IPC1_CCT1IP1_POSITION                   0x0000000D
#define _IPC1_CCT1IP1_MASK                       0x00002000
#define _IPC1_CCT1IP1_LENGTH                     0x00000001

#define _IPC1_CCT1IP2_POSITION                   0x0000000E
#define _IPC1_CCT1IP2_MASK                       0x00004000
#define _IPC1_CCT1IP2_LENGTH                     0x00000001

#define _IPC2_CCT2IP_POSITION                    0x00000000
#define _IPC2_CCT2IP_MASK                        0x00000007
#define _IPC2_CCT2IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x0000000C
#define _IPC2_U1RXIP_MASK                        0x00007000
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_CCT2IP0_POSITION                   0x00000000
#define _IPC2_CCT2IP0_MASK                       0x00000001
#define _IPC2_CCT2IP0_LENGTH                     0x00000001

#define _IPC2_CCT2IP1_POSITION                   0x00000001
#define _IPC2_CCT2IP1_MASK                       0x00000002
#define _IPC2_CCT2IP1_LENGTH                     0x00000001

#define _IPC2_CCT2IP2_POSITION                   0x00000002
#define _IPC2_CCT2IP2_MASK                       0x00000004
#define _IPC2_CCT2IP2_LENGTH                     0x00000001

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

#define _IPC3_NVMIP_POSITION                     0x0000000C
#define _IPC3_NVMIP_MASK                         0x00007000
#define _IPC3_NVMIP_LENGTH                       0x00000003

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

#define _IPC3_NVMIP0_POSITION                    0x0000000C
#define _IPC3_NVMIP0_MASK                        0x00001000
#define _IPC3_NVMIP0_LENGTH                      0x00000001

#define _IPC3_NVMIP1_POSITION                    0x0000000D
#define _IPC3_NVMIP1_MASK                        0x00002000
#define _IPC3_NVMIP1_LENGTH                      0x00000001

#define _IPC3_NVMIP2_POSITION                    0x0000000E
#define _IPC3_NVMIP2_MASK                        0x00004000
#define _IPC3_NVMIP2_LENGTH                      0x00000001

#define _IPC4_SSP1IP_POSITION                    0x00000000
#define _IPC4_SSP1IP_MASK                        0x00000007
#define _IPC4_SSP1IP_LENGTH                      0x00000003

#define _IPC4_BCL1IP_POSITION                    0x00000004
#define _IPC4_BCL1IP_MASK                        0x00000070
#define _IPC4_BCL1IP_LENGTH                      0x00000003

#define _IPC4_CMIP_POSITION                      0x00000008
#define _IPC4_CMIP_MASK                          0x00000700
#define _IPC4_CMIP_LENGTH                        0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SSP1IP0_POSITION                   0x00000000
#define _IPC4_SSP1IP0_MASK                       0x00000001
#define _IPC4_SSP1IP0_LENGTH                     0x00000001

#define _IPC4_SSP1IP1_POSITION                   0x00000001
#define _IPC4_SSP1IP1_MASK                       0x00000002
#define _IPC4_SSP1IP1_LENGTH                     0x00000001

#define _IPC4_SSP1IP2_POSITION                   0x00000002
#define _IPC4_SSP1IP2_MASK                       0x00000004
#define _IPC4_SSP1IP2_LENGTH                     0x00000001

#define _IPC4_BCL1IP0_POSITION                   0x00000004
#define _IPC4_BCL1IP0_MASK                       0x00000010
#define _IPC4_BCL1IP0_LENGTH                     0x00000001

#define _IPC4_BCL1IP1_POSITION                   0x00000005
#define _IPC4_BCL1IP1_MASK                       0x00000020
#define _IPC4_BCL1IP1_LENGTH                     0x00000001

#define _IPC4_BCL1IP2_POSITION                   0x00000006
#define _IPC4_BCL1IP2_MASK                       0x00000040
#define _IPC4_BCL1IP2_LENGTH                     0x00000001

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

#define _IPC5_CCP5IP_POSITION                    0x00000008
#define _IPC5_CCP5IP_MASK                        0x00000700
#define _IPC5_CCP5IP_LENGTH                      0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC5_CCP5IP0_POSITION                   0x00000008
#define _IPC5_CCP5IP0_MASK                       0x00000100
#define _IPC5_CCP5IP0_LENGTH                     0x00000001

#define _IPC5_CCP5IP1_POSITION                   0x00000009
#define _IPC5_CCP5IP1_MASK                       0x00000200
#define _IPC5_CCP5IP1_LENGTH                     0x00000001

#define _IPC5_CCP5IP2_POSITION                   0x0000000A
#define _IPC5_CCP5IP2_MASK                       0x00000400
#define _IPC5_CCP5IP2_LENGTH                     0x00000001

#define _IPC6_CCT3IP_POSITION                    0x0000000C
#define _IPC6_CCT3IP_MASK                        0x00007000
#define _IPC6_CCT3IP_LENGTH                      0x00000003

#define _IPC6_CCT3IP0_POSITION                   0x0000000C
#define _IPC6_CCT3IP0_MASK                       0x00001000
#define _IPC6_CCT3IP0_LENGTH                     0x00000001

#define _IPC6_CCT3IP1_POSITION                   0x0000000D
#define _IPC6_CCT3IP1_MASK                       0x00002000
#define _IPC6_CCT3IP1_LENGTH                     0x00000001

#define _IPC6_CCT3IP2_POSITION                   0x0000000E
#define _IPC6_CCT3IP2_MASK                       0x00004000
#define _IPC6_CCT3IP2_LENGTH                     0x00000001

#define _IPC7_CCT4IP_POSITION                    0x00000000
#define _IPC7_CCT4IP_MASK                        0x00000007
#define _IPC7_CCT4IP_LENGTH                      0x00000003

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_U2RXIP_POSITION                    0x00000008
#define _IPC7_U2RXIP_MASK                        0x00000700
#define _IPC7_U2RXIP_LENGTH                      0x00000003

#define _IPC7_U2TXIP_POSITION                    0x0000000C
#define _IPC7_U2TXIP_MASK                        0x00007000
#define _IPC7_U2TXIP_LENGTH                      0x00000003

#define _IPC7_CCT4IP0_POSITION                   0x00000000
#define _IPC7_CCT4IP0_MASK                       0x00000001
#define _IPC7_CCT4IP0_LENGTH                     0x00000001

#define _IPC7_CCT4IP1_POSITION                   0x00000001
#define _IPC7_CCT4IP1_MASK                       0x00000002
#define _IPC7_CCT4IP1_LENGTH                     0x00000001

#define _IPC7_CCT4IP2_POSITION                   0x00000002
#define _IPC7_CCT4IP2_MASK                       0x00000004
#define _IPC7_CCT4IP2_LENGTH                     0x00000001

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

#define _IPC10_CCT5IP_POSITION                   0x00000004
#define _IPC10_CCT5IP_MASK                       0x00000070
#define _IPC10_CCT5IP_LENGTH                     0x00000003

#define _IPC10_CCT5IP0_POSITION                  0x00000004
#define _IPC10_CCT5IP0_MASK                      0x00000010
#define _IPC10_CCT5IP0_LENGTH                    0x00000001

#define _IPC10_CCT5IP1_POSITION                  0x00000005
#define _IPC10_CCT5IP1_MASK                      0x00000020
#define _IPC10_CCT5IP1_LENGTH                    0x00000001

#define _IPC10_CCT5IP2_POSITION                  0x00000006
#define _IPC10_CCT5IP2_MASK                      0x00000040
#define _IPC10_CCT5IP2_LENGTH                    0x00000001

#define _IPC12_SSP2IP_POSITION                   0x00000004
#define _IPC12_SSP2IP_MASK                       0x00000070
#define _IPC12_SSP2IP_LENGTH                     0x00000003

#define _IPC12_BCL2IP_POSITION                   0x00000008
#define _IPC12_BCL2IP_MASK                       0x00000700
#define _IPC12_BCL2IP_LENGTH                     0x00000003

#define _IPC12_SSP2IP0_POSITION                  0x00000004
#define _IPC12_SSP2IP0_MASK                      0x00000010
#define _IPC12_SSP2IP0_LENGTH                    0x00000001

#define _IPC12_SSP2IP1_POSITION                  0x00000005
#define _IPC12_SSP2IP1_MASK                      0x00000020
#define _IPC12_SSP2IP1_LENGTH                    0x00000001

#define _IPC12_SSP2IP2_POSITION                  0x00000006
#define _IPC12_SSP2IP2_MASK                      0x00000040
#define _IPC12_SSP2IP2_LENGTH                    0x00000001

#define _IPC12_BCL2IP0_POSITION                  0x00000008
#define _IPC12_BCL2IP0_MASK                      0x00000100
#define _IPC12_BCL2IP0_LENGTH                    0x00000001

#define _IPC12_BCL2IP1_POSITION                  0x00000009
#define _IPC12_BCL2IP1_MASK                      0x00000200
#define _IPC12_BCL2IP1_LENGTH                    0x00000001

#define _IPC12_BCL2IP2_POSITION                  0x0000000A
#define _IPC12_BCL2IP2_MASK                      0x00000400
#define _IPC12_BCL2IP2_LENGTH                    0x00000001

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

#define _IPC12_SI2C2P_POSITION                   0x00000004
#define _IPC12_SI2C2P_MASK                       0x00000070
#define _IPC12_SI2C2P_LENGTH                     0x00000003

#define _IPC12_MI2C2P_POSITION                   0x00000008
#define _IPC12_MI2C2P_MASK                       0x00000700
#define _IPC12_MI2C2P_LENGTH                     0x00000003

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

#define _IPC18_HLVDIP_POSITION                   0x00000000
#define _IPC18_HLVDIP_MASK                       0x00000007
#define _IPC18_HLVDIP_LENGTH                     0x00000003

#define _IPC18_HLVDIP0_POSITION                  0x00000000
#define _IPC18_HLVDIP0_MASK                      0x00000001
#define _IPC18_HLVDIP0_LENGTH                    0x00000001

#define _IPC18_HLVDIP1_POSITION                  0x00000001
#define _IPC18_HLVDIP1_MASK                      0x00000002
#define _IPC18_HLVDIP1_LENGTH                    0x00000001

#define _IPC18_HLVDIP2_POSITION                  0x00000002
#define _IPC18_HLVDIP2_MASK                      0x00000004
#define _IPC18_HLVDIP2_LENGTH                    0x00000001

#define _IPC19_CTMUIP_POSITION                   0x00000004
#define _IPC19_CTMUIP_MASK                       0x00000070
#define _IPC19_CTMUIP_LENGTH                     0x00000003

#define _IPC19_DAC1IP_POSITION                   0x00000008
#define _IPC19_DAC1IP_MASK                       0x00000700
#define _IPC19_DAC1IP_LENGTH                     0x00000003

#define _IPC19_DAC2IP_POSITION                   0x0000000C
#define _IPC19_DAC2IP_MASK                       0x00007000
#define _IPC19_DAC2IP_LENGTH                     0x00000003

#define _IPC19_CTMUIP0_POSITION                  0x00000004
#define _IPC19_CTMUIP0_MASK                      0x00000010
#define _IPC19_CTMUIP0_LENGTH                    0x00000001

#define _IPC19_CTMUIP1_POSITION                  0x00000005
#define _IPC19_CTMUIP1_MASK                      0x00000020
#define _IPC19_CTMUIP1_LENGTH                    0x00000001

#define _IPC19_CTMUIP2_POSITION                  0x00000006
#define _IPC19_CTMUIP2_MASK                      0x00000040
#define _IPC19_CTMUIP2_LENGTH                    0x00000001

#define _IPC19_DAC1IP0_POSITION                  0x00000008
#define _IPC19_DAC1IP0_MASK                      0x00000100
#define _IPC19_DAC1IP0_LENGTH                    0x00000001

#define _IPC19_DAC1IP1_POSITION                  0x00000009
#define _IPC19_DAC1IP1_MASK                      0x00000200
#define _IPC19_DAC1IP1_LENGTH                    0x00000001

#define _IPC19_DAC1IP2_POSITION                  0x0000000A
#define _IPC19_DAC1IP2_MASK                      0x00000400
#define _IPC19_DAC1IP2_LENGTH                    0x00000001

#define _IPC19_DAC2IP0_POSITION                  0x0000000C
#define _IPC19_DAC2IP0_MASK                      0x00001000
#define _IPC19_DAC2IP0_LENGTH                    0x00000001

#define _IPC19_DAC2IP1_POSITION                  0x0000000D
#define _IPC19_DAC2IP1_MASK                      0x00002000
#define _IPC19_DAC2IP1_LENGTH                    0x00000001

#define _IPC19_DAC2IP2_POSITION                  0x0000000E
#define _IPC19_DAC2IP2_MASK                      0x00004000
#define _IPC19_DAC2IP2_LENGTH                    0x00000001

#define _IPC20_ULPWUIP_POSITION                  0x00000000
#define _IPC20_ULPWUIP_MASK                      0x00000007
#define _IPC20_ULPWUIP_LENGTH                    0x00000003

#define _IPC20_ULPWUIP0_POSITION                 0x00000000
#define _IPC20_ULPWUIP0_MASK                     0x00000001
#define _IPC20_ULPWUIP0_LENGTH                   0x00000001

#define _IPC20_ULPWUIP1_POSITION                 0x00000001
#define _IPC20_ULPWUIP1_MASK                     0x00000002
#define _IPC20_ULPWUIP1_LENGTH                   0x00000001

#define _IPC20_ULPWUIP2_POSITION                 0x00000002
#define _IPC20_ULPWUIP2_MASK                     0x00000004
#define _IPC20_ULPWUIP2_LENGTH                   0x00000001

#define _IPC24_CLC1IP_POSITION                   0x00000000
#define _IPC24_CLC1IP_MASK                       0x00000007
#define _IPC24_CLC1IP_LENGTH                     0x00000003

#define _IPC24_CLC2IP_POSITION                   0x00000004
#define _IPC24_CLC2IP_MASK                       0x00000070
#define _IPC24_CLC2IP_LENGTH                     0x00000003

#define _IPC24_CLC1IP0_POSITION                  0x00000000
#define _IPC24_CLC1IP0_MASK                      0x00000001
#define _IPC24_CLC1IP0_LENGTH                    0x00000001

#define _IPC24_CLC1IP1_POSITION                  0x00000001
#define _IPC24_CLC1IP1_MASK                      0x00000002
#define _IPC24_CLC1IP1_LENGTH                    0x00000001

#define _IPC24_CLC1IP2_POSITION                  0x00000002
#define _IPC24_CLC1IP2_MASK                      0x00000004
#define _IPC24_CLC1IP2_LENGTH                    0x00000001

#define _IPC24_CLC2IP0_POSITION                  0x00000004
#define _IPC24_CLC2IP0_MASK                      0x00000010
#define _IPC24_CLC2IP0_LENGTH                    0x00000001

#define _IPC24_CLC2IP1_POSITION                  0x00000005
#define _IPC24_CLC2IP1_MASK                      0x00000020
#define _IPC24_CLC2IP1_LENGTH                    0x00000001

#define _IPC24_CLC2IP2_POSITION                  0x00000006
#define _IPC24_CLC2IP2_MASK                      0x00000040
#define _IPC24_CLC2IP2_LENGTH                    0x00000001

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

#define _T1CON_TECS_POSITION                     0x00000008
#define _T1CON_TECS_MASK                         0x00000300
#define _T1CON_TECS_LENGTH                       0x00000002

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

#define _T1CON_T1ECS0_POSITION                   0x00000008
#define _T1CON_T1ECS0_MASK                       0x00000100
#define _T1CON_T1ECS0_LENGTH                     0x00000001

#define _T1CON_T1ECS1_POSITION                   0x00000009
#define _T1CON_T1ECS1_MASK                       0x00000200
#define _T1CON_T1ECS1_LENGTH                     0x00000001

#define _T1CON_T1ECS_POSITION                    0x00000008
#define _T1CON_T1ECS_MASK                        0x00000300
#define _T1CON_T1ECS_LENGTH                      0x00000002

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_TIECS_POSITION                    0x00000008
#define _T1CON_TIECS_MASK                        0x00000300
#define _T1CON_TIECS_LENGTH                      0x00000002

#define _T1CON_TIECS0_POSITION                   0x00000008
#define _T1CON_TIECS0_MASK                       0x00000100
#define _T1CON_TIECS0_LENGTH                     0x00000001

#define _T1CON_TIECS1_POSITION                   0x00000009
#define _T1CON_TIECS1_MASK                       0x00000200
#define _T1CON_TIECS1_LENGTH                     0x00000001

#define _CLC1CONL_MODE_POSITION                  0x00000000
#define _CLC1CONL_MODE_MASK                      0x00000007
#define _CLC1CONL_MODE_LENGTH                    0x00000003

#define _CLC1CONL_LCPOL_POSITION                 0x00000005
#define _CLC1CONL_LCPOL_MASK                     0x00000020
#define _CLC1CONL_LCPOL_LENGTH                   0x00000001

#define _CLC1CONL_LCOUT_POSITION                 0x00000006
#define _CLC1CONL_LCOUT_MASK                     0x00000040
#define _CLC1CONL_LCOUT_LENGTH                   0x00000001

#define _CLC1CONL_LCOE_POSITION                  0x00000007
#define _CLC1CONL_LCOE_MASK                      0x00000080
#define _CLC1CONL_LCOE_LENGTH                    0x00000001

#define _CLC1CONL_INTN_POSITION                  0x0000000A
#define _CLC1CONL_INTN_MASK                      0x00000400
#define _CLC1CONL_INTN_LENGTH                    0x00000001

#define _CLC1CONL_INTP_POSITION                  0x0000000B
#define _CLC1CONL_INTP_MASK                      0x00000800
#define _CLC1CONL_INTP_LENGTH                    0x00000001

#define _CLC1CONL_LCEN_POSITION                  0x0000000F
#define _CLC1CONL_LCEN_MASK                      0x00008000
#define _CLC1CONL_LCEN_LENGTH                    0x00000001

#define _CLC1CONL_MODE0_POSITION                 0x00000000
#define _CLC1CONL_MODE0_MASK                     0x00000001
#define _CLC1CONL_MODE0_LENGTH                   0x00000001

#define _CLC1CONL_MODE1_POSITION                 0x00000001
#define _CLC1CONL_MODE1_MASK                     0x00000002
#define _CLC1CONL_MODE1_LENGTH                   0x00000001

#define _CLC1CONL_MODE2_POSITION                 0x00000002
#define _CLC1CONL_MODE2_MASK                     0x00000004
#define _CLC1CONL_MODE2_LENGTH                   0x00000001

#define _CLC1CONH_G1POL_POSITION                 0x00000000
#define _CLC1CONH_G1POL_MASK                     0x00000001
#define _CLC1CONH_G1POL_LENGTH                   0x00000001

#define _CLC1CONH_G2POL_POSITION                 0x00000001
#define _CLC1CONH_G2POL_MASK                     0x00000002
#define _CLC1CONH_G2POL_LENGTH                   0x00000001

#define _CLC1CONH_G3POL_POSITION                 0x00000002
#define _CLC1CONH_G3POL_MASK                     0x00000004
#define _CLC1CONH_G3POL_LENGTH                   0x00000001

#define _CLC1CONH_G4POL_POSITION                 0x00000003
#define _CLC1CONH_G4POL_MASK                     0x00000008
#define _CLC1CONH_G4POL_LENGTH                   0x00000001

#define _CLC1SEL_DS1_POSITION                    0x00000000
#define _CLC1SEL_DS1_MASK                        0x00000007
#define _CLC1SEL_DS1_LENGTH                      0x00000003

#define _CLC1SEL_DS2_POSITION                    0x00000004
#define _CLC1SEL_DS2_MASK                        0x00000070
#define _CLC1SEL_DS2_LENGTH                      0x00000003

#define _CLC1SEL_DS3_POSITION                    0x00000008
#define _CLC1SEL_DS3_MASK                        0x00000700
#define _CLC1SEL_DS3_LENGTH                      0x00000003

#define _CLC1SEL_DS4_POSITION                    0x0000000C
#define _CLC1SEL_DS4_MASK                        0x00007000
#define _CLC1SEL_DS4_LENGTH                      0x00000003

#define _CLC1SEL_DS10_POSITION                   0x00000000
#define _CLC1SEL_DS10_MASK                       0x00000001
#define _CLC1SEL_DS10_LENGTH                     0x00000001

#define _CLC1SEL_DS11_POSITION                   0x00000001
#define _CLC1SEL_DS11_MASK                       0x00000002
#define _CLC1SEL_DS11_LENGTH                     0x00000001

#define _CLC1SEL_DS12_POSITION                   0x00000002
#define _CLC1SEL_DS12_MASK                       0x00000004
#define _CLC1SEL_DS12_LENGTH                     0x00000001

#define _CLC1SEL_DS20_POSITION                   0x00000004
#define _CLC1SEL_DS20_MASK                       0x00000010
#define _CLC1SEL_DS20_LENGTH                     0x00000001

#define _CLC1SEL_DS21_POSITION                   0x00000005
#define _CLC1SEL_DS21_MASK                       0x00000020
#define _CLC1SEL_DS21_LENGTH                     0x00000001

#define _CLC1SEL_DS22_POSITION                   0x00000006
#define _CLC1SEL_DS22_MASK                       0x00000040
#define _CLC1SEL_DS22_LENGTH                     0x00000001

#define _CLC1SEL_DS30_POSITION                   0x00000008
#define _CLC1SEL_DS30_MASK                       0x00000100
#define _CLC1SEL_DS30_LENGTH                     0x00000001

#define _CLC1SEL_DS31_POSITION                   0x00000009
#define _CLC1SEL_DS31_MASK                       0x00000200
#define _CLC1SEL_DS31_LENGTH                     0x00000001

#define _CLC1SEL_DS32_POSITION                   0x0000000A
#define _CLC1SEL_DS32_MASK                       0x00000400
#define _CLC1SEL_DS32_LENGTH                     0x00000001

#define _CLC1SEL_DS40_POSITION                   0x0000000C
#define _CLC1SEL_DS40_MASK                       0x00001000
#define _CLC1SEL_DS40_LENGTH                     0x00000001

#define _CLC1SEL_DS41_POSITION                   0x0000000D
#define _CLC1SEL_DS41_MASK                       0x00002000
#define _CLC1SEL_DS41_LENGTH                     0x00000001

#define _CLC1SEL_DS42_POSITION                   0x0000000E
#define _CLC1SEL_DS42_MASK                       0x00004000
#define _CLC1SEL_DS42_LENGTH                     0x00000001

#define _CLC1SELL_DS1_POSITION                   0x00000000
#define _CLC1SELL_DS1_MASK                       0x00000007
#define _CLC1SELL_DS1_LENGTH                     0x00000003

#define _CLC1SELL_DS2_POSITION                   0x00000004
#define _CLC1SELL_DS2_MASK                       0x00000070
#define _CLC1SELL_DS2_LENGTH                     0x00000003

#define _CLC1SELL_DS3_POSITION                   0x00000008
#define _CLC1SELL_DS3_MASK                       0x00000700
#define _CLC1SELL_DS3_LENGTH                     0x00000003

#define _CLC1SELL_DS4_POSITION                   0x0000000C
#define _CLC1SELL_DS4_MASK                       0x00007000
#define _CLC1SELL_DS4_LENGTH                     0x00000003

#define _CLC1SELL_DS10_POSITION                  0x00000000
#define _CLC1SELL_DS10_MASK                      0x00000001
#define _CLC1SELL_DS10_LENGTH                    0x00000001

#define _CLC1SELL_DS11_POSITION                  0x00000001
#define _CLC1SELL_DS11_MASK                      0x00000002
#define _CLC1SELL_DS11_LENGTH                    0x00000001

#define _CLC1SELL_DS12_POSITION                  0x00000002
#define _CLC1SELL_DS12_MASK                      0x00000004
#define _CLC1SELL_DS12_LENGTH                    0x00000001

#define _CLC1SELL_DS20_POSITION                  0x00000004
#define _CLC1SELL_DS20_MASK                      0x00000010
#define _CLC1SELL_DS20_LENGTH                    0x00000001

#define _CLC1SELL_DS21_POSITION                  0x00000005
#define _CLC1SELL_DS21_MASK                      0x00000020
#define _CLC1SELL_DS21_LENGTH                    0x00000001

#define _CLC1SELL_DS22_POSITION                  0x00000006
#define _CLC1SELL_DS22_MASK                      0x00000040
#define _CLC1SELL_DS22_LENGTH                    0x00000001

#define _CLC1SELL_DS30_POSITION                  0x00000008
#define _CLC1SELL_DS30_MASK                      0x00000100
#define _CLC1SELL_DS30_LENGTH                    0x00000001

#define _CLC1SELL_DS31_POSITION                  0x00000009
#define _CLC1SELL_DS31_MASK                      0x00000200
#define _CLC1SELL_DS31_LENGTH                    0x00000001

#define _CLC1SELL_DS32_POSITION                  0x0000000A
#define _CLC1SELL_DS32_MASK                      0x00000400
#define _CLC1SELL_DS32_LENGTH                    0x00000001

#define _CLC1SELL_DS40_POSITION                  0x0000000C
#define _CLC1SELL_DS40_MASK                      0x00001000
#define _CLC1SELL_DS40_LENGTH                    0x00000001

#define _CLC1SELL_DS41_POSITION                  0x0000000D
#define _CLC1SELL_DS41_MASK                      0x00002000
#define _CLC1SELL_DS41_LENGTH                    0x00000001

#define _CLC1SELL_DS42_POSITION                  0x0000000E
#define _CLC1SELL_DS42_MASK                      0x00004000
#define _CLC1SELL_DS42_LENGTH                    0x00000001

#define _CLC1GLSL_G1D1N_POSITION                 0x00000000
#define _CLC1GLSL_G1D1N_MASK                     0x00000001
#define _CLC1GLSL_G1D1N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D1T_POSITION                 0x00000001
#define _CLC1GLSL_G1D1T_MASK                     0x00000002
#define _CLC1GLSL_G1D1T_LENGTH                   0x00000001

#define _CLC1GLSL_G1D2N_POSITION                 0x00000002
#define _CLC1GLSL_G1D2N_MASK                     0x00000004
#define _CLC1GLSL_G1D2N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D2T_POSITION                 0x00000003
#define _CLC1GLSL_G1D2T_MASK                     0x00000008
#define _CLC1GLSL_G1D2T_LENGTH                   0x00000001

#define _CLC1GLSL_G1D3N_POSITION                 0x00000004
#define _CLC1GLSL_G1D3N_MASK                     0x00000010
#define _CLC1GLSL_G1D3N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D3T_POSITION                 0x00000005
#define _CLC1GLSL_G1D3T_MASK                     0x00000020
#define _CLC1GLSL_G1D3T_LENGTH                   0x00000001

#define _CLC1GLSL_G1D4N_POSITION                 0x00000006
#define _CLC1GLSL_G1D4N_MASK                     0x00000040
#define _CLC1GLSL_G1D4N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D4T_POSITION                 0x00000007
#define _CLC1GLSL_G1D4T_MASK                     0x00000080
#define _CLC1GLSL_G1D4T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D1N_POSITION                 0x00000008
#define _CLC1GLSL_G2D1N_MASK                     0x00000100
#define _CLC1GLSL_G2D1N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D1T_POSITION                 0x00000009
#define _CLC1GLSL_G2D1T_MASK                     0x00000200
#define _CLC1GLSL_G2D1T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D2N_POSITION                 0x0000000A
#define _CLC1GLSL_G2D2N_MASK                     0x00000400
#define _CLC1GLSL_G2D2N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D2T_POSITION                 0x0000000B
#define _CLC1GLSL_G2D2T_MASK                     0x00000800
#define _CLC1GLSL_G2D2T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D3N_POSITION                 0x0000000C
#define _CLC1GLSL_G2D3N_MASK                     0x00001000
#define _CLC1GLSL_G2D3N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D3T_POSITION                 0x0000000D
#define _CLC1GLSL_G2D3T_MASK                     0x00002000
#define _CLC1GLSL_G2D3T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D4N_POSITION                 0x0000000E
#define _CLC1GLSL_G2D4N_MASK                     0x00004000
#define _CLC1GLSL_G2D4N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D4T_POSITION                 0x0000000F
#define _CLC1GLSL_G2D4T_MASK                     0x00008000
#define _CLC1GLSL_G2D4T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D1N_POSITION                 0x00000000
#define _CLC1GLSH_G3D1N_MASK                     0x00000001
#define _CLC1GLSH_G3D1N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D1T_POSITION                 0x00000001
#define _CLC1GLSH_G3D1T_MASK                     0x00000002
#define _CLC1GLSH_G3D1T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D2N_POSITION                 0x00000002
#define _CLC1GLSH_G3D2N_MASK                     0x00000004
#define _CLC1GLSH_G3D2N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D2T_POSITION                 0x00000003
#define _CLC1GLSH_G3D2T_MASK                     0x00000008
#define _CLC1GLSH_G3D2T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D3N_POSITION                 0x00000004
#define _CLC1GLSH_G3D3N_MASK                     0x00000010
#define _CLC1GLSH_G3D3N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D3T_POSITION                 0x00000005
#define _CLC1GLSH_G3D3T_MASK                     0x00000020
#define _CLC1GLSH_G3D3T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D4N_POSITION                 0x00000006
#define _CLC1GLSH_G3D4N_MASK                     0x00000040
#define _CLC1GLSH_G3D4N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D4T_POSITION                 0x00000007
#define _CLC1GLSH_G3D4T_MASK                     0x00000080
#define _CLC1GLSH_G3D4T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D1N_POSITION                 0x00000008
#define _CLC1GLSH_G4D1N_MASK                     0x00000100
#define _CLC1GLSH_G4D1N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D1T_POSITION                 0x00000009
#define _CLC1GLSH_G4D1T_MASK                     0x00000200
#define _CLC1GLSH_G4D1T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D2N_POSITION                 0x0000000A
#define _CLC1GLSH_G4D2N_MASK                     0x00000400
#define _CLC1GLSH_G4D2N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D2T_POSITION                 0x0000000B
#define _CLC1GLSH_G4D2T_MASK                     0x00000800
#define _CLC1GLSH_G4D2T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D3N_POSITION                 0x0000000C
#define _CLC1GLSH_G4D3N_MASK                     0x00001000
#define _CLC1GLSH_G4D3N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D3T_POSITION                 0x0000000D
#define _CLC1GLSH_G4D3T_MASK                     0x00002000
#define _CLC1GLSH_G4D3T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D4N_POSITION                 0x0000000E
#define _CLC1GLSH_G4D4N_MASK                     0x00004000
#define _CLC1GLSH_G4D4N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D4T_POSITION                 0x0000000F
#define _CLC1GLSH_G4D4T_MASK                     0x00008000
#define _CLC1GLSH_G4D4T_LENGTH                   0x00000001

#define _CLC2CONL_MODE_POSITION                  0x00000000
#define _CLC2CONL_MODE_MASK                      0x00000007
#define _CLC2CONL_MODE_LENGTH                    0x00000003

#define _CLC2CONL_LCPOL_POSITION                 0x00000005
#define _CLC2CONL_LCPOL_MASK                     0x00000020
#define _CLC2CONL_LCPOL_LENGTH                   0x00000001

#define _CLC2CONL_LCOUT_POSITION                 0x00000006
#define _CLC2CONL_LCOUT_MASK                     0x00000040
#define _CLC2CONL_LCOUT_LENGTH                   0x00000001

#define _CLC2CONL_LCOE_POSITION                  0x00000007
#define _CLC2CONL_LCOE_MASK                      0x00000080
#define _CLC2CONL_LCOE_LENGTH                    0x00000001

#define _CLC2CONL_INTN_POSITION                  0x0000000A
#define _CLC2CONL_INTN_MASK                      0x00000400
#define _CLC2CONL_INTN_LENGTH                    0x00000001

#define _CLC2CONL_INTP_POSITION                  0x0000000B
#define _CLC2CONL_INTP_MASK                      0x00000800
#define _CLC2CONL_INTP_LENGTH                    0x00000001

#define _CLC2CONL_LCEN_POSITION                  0x0000000F
#define _CLC2CONL_LCEN_MASK                      0x00008000
#define _CLC2CONL_LCEN_LENGTH                    0x00000001

#define _CLC2CONL_MODE0_POSITION                 0x00000000
#define _CLC2CONL_MODE0_MASK                     0x00000001
#define _CLC2CONL_MODE0_LENGTH                   0x00000001

#define _CLC2CONL_MODE1_POSITION                 0x00000001
#define _CLC2CONL_MODE1_MASK                     0x00000002
#define _CLC2CONL_MODE1_LENGTH                   0x00000001

#define _CLC2CONL_MODE2_POSITION                 0x00000002
#define _CLC2CONL_MODE2_MASK                     0x00000004
#define _CLC2CONL_MODE2_LENGTH                   0x00000001

#define _CLC2CONH_G1POL_POSITION                 0x00000000
#define _CLC2CONH_G1POL_MASK                     0x00000001
#define _CLC2CONH_G1POL_LENGTH                   0x00000001

#define _CLC2CONH_G2POL_POSITION                 0x00000001
#define _CLC2CONH_G2POL_MASK                     0x00000002
#define _CLC2CONH_G2POL_LENGTH                   0x00000001

#define _CLC2CONH_G3POL_POSITION                 0x00000002
#define _CLC2CONH_G3POL_MASK                     0x00000004
#define _CLC2CONH_G3POL_LENGTH                   0x00000001

#define _CLC2CONH_G4POL_POSITION                 0x00000003
#define _CLC2CONH_G4POL_MASK                     0x00000008
#define _CLC2CONH_G4POL_LENGTH                   0x00000001

#define _CLC2SEL_DS1_POSITION                    0x00000000
#define _CLC2SEL_DS1_MASK                        0x00000007
#define _CLC2SEL_DS1_LENGTH                      0x00000003

#define _CLC2SEL_DS2_POSITION                    0x00000004
#define _CLC2SEL_DS2_MASK                        0x00000070
#define _CLC2SEL_DS2_LENGTH                      0x00000003

#define _CLC2SEL_DS3_POSITION                    0x00000008
#define _CLC2SEL_DS3_MASK                        0x00000700
#define _CLC2SEL_DS3_LENGTH                      0x00000003

#define _CLC2SEL_DS4_POSITION                    0x0000000C
#define _CLC2SEL_DS4_MASK                        0x00007000
#define _CLC2SEL_DS4_LENGTH                      0x00000003

#define _CLC2SEL_DS10_POSITION                   0x00000000
#define _CLC2SEL_DS10_MASK                       0x00000001
#define _CLC2SEL_DS10_LENGTH                     0x00000001

#define _CLC2SEL_DS11_POSITION                   0x00000001
#define _CLC2SEL_DS11_MASK                       0x00000002
#define _CLC2SEL_DS11_LENGTH                     0x00000001

#define _CLC2SEL_DS12_POSITION                   0x00000002
#define _CLC2SEL_DS12_MASK                       0x00000004
#define _CLC2SEL_DS12_LENGTH                     0x00000001

#define _CLC2SEL_DS20_POSITION                   0x00000004
#define _CLC2SEL_DS20_MASK                       0x00000010
#define _CLC2SEL_DS20_LENGTH                     0x00000001

#define _CLC2SEL_DS21_POSITION                   0x00000005
#define _CLC2SEL_DS21_MASK                       0x00000020
#define _CLC2SEL_DS21_LENGTH                     0x00000001

#define _CLC2SEL_DS22_POSITION                   0x00000006
#define _CLC2SEL_DS22_MASK                       0x00000040
#define _CLC2SEL_DS22_LENGTH                     0x00000001

#define _CLC2SEL_DS30_POSITION                   0x00000008
#define _CLC2SEL_DS30_MASK                       0x00000100
#define _CLC2SEL_DS30_LENGTH                     0x00000001

#define _CLC2SEL_DS31_POSITION                   0x00000009
#define _CLC2SEL_DS31_MASK                       0x00000200
#define _CLC2SEL_DS31_LENGTH                     0x00000001

#define _CLC2SEL_DS32_POSITION                   0x0000000A
#define _CLC2SEL_DS32_MASK                       0x00000400
#define _CLC2SEL_DS32_LENGTH                     0x00000001

#define _CLC2SEL_DS40_POSITION                   0x0000000C
#define _CLC2SEL_DS40_MASK                       0x00001000
#define _CLC2SEL_DS40_LENGTH                     0x00000001

#define _CLC2SEL_DS41_POSITION                   0x0000000D
#define _CLC2SEL_DS41_MASK                       0x00002000
#define _CLC2SEL_DS41_LENGTH                     0x00000001

#define _CLC2SEL_DS42_POSITION                   0x0000000E
#define _CLC2SEL_DS42_MASK                       0x00004000
#define _CLC2SEL_DS42_LENGTH                     0x00000001

#define _CLC2SELL_DS1_POSITION                   0x00000000
#define _CLC2SELL_DS1_MASK                       0x00000007
#define _CLC2SELL_DS1_LENGTH                     0x00000003

#define _CLC2SELL_DS2_POSITION                   0x00000004
#define _CLC2SELL_DS2_MASK                       0x00000070
#define _CLC2SELL_DS2_LENGTH                     0x00000003

#define _CLC2SELL_DS3_POSITION                   0x00000008
#define _CLC2SELL_DS3_MASK                       0x00000700
#define _CLC2SELL_DS3_LENGTH                     0x00000003

#define _CLC2SELL_DS4_POSITION                   0x0000000C
#define _CLC2SELL_DS4_MASK                       0x00007000
#define _CLC2SELL_DS4_LENGTH                     0x00000003

#define _CLC2SELL_DS10_POSITION                  0x00000000
#define _CLC2SELL_DS10_MASK                      0x00000001
#define _CLC2SELL_DS10_LENGTH                    0x00000001

#define _CLC2SELL_DS11_POSITION                  0x00000001
#define _CLC2SELL_DS11_MASK                      0x00000002
#define _CLC2SELL_DS11_LENGTH                    0x00000001

#define _CLC2SELL_DS12_POSITION                  0x00000002
#define _CLC2SELL_DS12_MASK                      0x00000004
#define _CLC2SELL_DS12_LENGTH                    0x00000001

#define _CLC2SELL_DS20_POSITION                  0x00000004
#define _CLC2SELL_DS20_MASK                      0x00000010
#define _CLC2SELL_DS20_LENGTH                    0x00000001

#define _CLC2SELL_DS21_POSITION                  0x00000005
#define _CLC2SELL_DS21_MASK                      0x00000020
#define _CLC2SELL_DS21_LENGTH                    0x00000001

#define _CLC2SELL_DS22_POSITION                  0x00000006
#define _CLC2SELL_DS22_MASK                      0x00000040
#define _CLC2SELL_DS22_LENGTH                    0x00000001

#define _CLC2SELL_DS30_POSITION                  0x00000008
#define _CLC2SELL_DS30_MASK                      0x00000100
#define _CLC2SELL_DS30_LENGTH                    0x00000001

#define _CLC2SELL_DS31_POSITION                  0x00000009
#define _CLC2SELL_DS31_MASK                      0x00000200
#define _CLC2SELL_DS31_LENGTH                    0x00000001

#define _CLC2SELL_DS32_POSITION                  0x0000000A
#define _CLC2SELL_DS32_MASK                      0x00000400
#define _CLC2SELL_DS32_LENGTH                    0x00000001

#define _CLC2SELL_DS40_POSITION                  0x0000000C
#define _CLC2SELL_DS40_MASK                      0x00001000
#define _CLC2SELL_DS40_LENGTH                    0x00000001

#define _CLC2SELL_DS41_POSITION                  0x0000000D
#define _CLC2SELL_DS41_MASK                      0x00002000
#define _CLC2SELL_DS41_LENGTH                    0x00000001

#define _CLC2SELL_DS42_POSITION                  0x0000000E
#define _CLC2SELL_DS42_MASK                      0x00004000
#define _CLC2SELL_DS42_LENGTH                    0x00000001

#define _CLC2GLSL_G1D1N_POSITION                 0x00000000
#define _CLC2GLSL_G1D1N_MASK                     0x00000001
#define _CLC2GLSL_G1D1N_LENGTH                   0x00000001

#define _CLC2GLSL_G1D1T_POSITION                 0x00000001
#define _CLC2GLSL_G1D1T_MASK                     0x00000002
#define _CLC2GLSL_G1D1T_LENGTH                   0x00000001

#define _CLC2GLSL_G1D2N_POSITION                 0x00000002
#define _CLC2GLSL_G1D2N_MASK                     0x00000004
#define _CLC2GLSL_G1D2N_LENGTH                   0x00000001

#define _CLC2GLSL_G1D2T_POSITION                 0x00000003
#define _CLC2GLSL_G1D2T_MASK                     0x00000008
#define _CLC2GLSL_G1D2T_LENGTH                   0x00000001

#define _CLC2GLSL_G1D3N_POSITION                 0x00000004
#define _CLC2GLSL_G1D3N_MASK                     0x00000010
#define _CLC2GLSL_G1D3N_LENGTH                   0x00000001

#define _CLC2GLSL_G1D3T_POSITION                 0x00000005
#define _CLC2GLSL_G1D3T_MASK                     0x00000020
#define _CLC2GLSL_G1D3T_LENGTH                   0x00000001

#define _CLC2GLSL_G1D4N_POSITION                 0x00000006
#define _CLC2GLSL_G1D4N_MASK                     0x00000040
#define _CLC2GLSL_G1D4N_LENGTH                   0x00000001

#define _CLC2GLSL_G1D4T_POSITION                 0x00000007
#define _CLC2GLSL_G1D4T_MASK                     0x00000080
#define _CLC2GLSL_G1D4T_LENGTH                   0x00000001

#define _CLC2GLSL_G2D1N_POSITION                 0x00000008
#define _CLC2GLSL_G2D1N_MASK                     0x00000100
#define _CLC2GLSL_G2D1N_LENGTH                   0x00000001

#define _CLC2GLSL_G2D1T_POSITION                 0x00000009
#define _CLC2GLSL_G2D1T_MASK                     0x00000200
#define _CLC2GLSL_G2D1T_LENGTH                   0x00000001

#define _CLC2GLSL_G2D2N_POSITION                 0x0000000A
#define _CLC2GLSL_G2D2N_MASK                     0x00000400
#define _CLC2GLSL_G2D2N_LENGTH                   0x00000001

#define _CLC2GLSL_G2D2T_POSITION                 0x0000000B
#define _CLC2GLSL_G2D2T_MASK                     0x00000800
#define _CLC2GLSL_G2D2T_LENGTH                   0x00000001

#define _CLC2GLSL_G2D3N_POSITION                 0x0000000C
#define _CLC2GLSL_G2D3N_MASK                     0x00001000
#define _CLC2GLSL_G2D3N_LENGTH                   0x00000001

#define _CLC2GLSL_G2D3T_POSITION                 0x0000000D
#define _CLC2GLSL_G2D3T_MASK                     0x00002000
#define _CLC2GLSL_G2D3T_LENGTH                   0x00000001

#define _CLC2GLSL_G2D4N_POSITION                 0x0000000E
#define _CLC2GLSL_G2D4N_MASK                     0x00004000
#define _CLC2GLSL_G2D4N_LENGTH                   0x00000001

#define _CLC2GLSL_G2D4T_POSITION                 0x0000000F
#define _CLC2GLSL_G2D4T_MASK                     0x00008000
#define _CLC2GLSL_G2D4T_LENGTH                   0x00000001

#define _CLC2GLSH_G3D1N_POSITION                 0x00000000
#define _CLC2GLSH_G3D1N_MASK                     0x00000001
#define _CLC2GLSH_G3D1N_LENGTH                   0x00000001

#define _CLC2GLSH_G3D1T_POSITION                 0x00000001
#define _CLC2GLSH_G3D1T_MASK                     0x00000002
#define _CLC2GLSH_G3D1T_LENGTH                   0x00000001

#define _CLC2GLSH_G3D2N_POSITION                 0x00000002
#define _CLC2GLSH_G3D2N_MASK                     0x00000004
#define _CLC2GLSH_G3D2N_LENGTH                   0x00000001

#define _CLC2GLSH_G3D2T_POSITION                 0x00000003
#define _CLC2GLSH_G3D2T_MASK                     0x00000008
#define _CLC2GLSH_G3D2T_LENGTH                   0x00000001

#define _CLC2GLSH_G3D3N_POSITION                 0x00000004
#define _CLC2GLSH_G3D3N_MASK                     0x00000010
#define _CLC2GLSH_G3D3N_LENGTH                   0x00000001

#define _CLC2GLSH_G3D3T_POSITION                 0x00000005
#define _CLC2GLSH_G3D3T_MASK                     0x00000020
#define _CLC2GLSH_G3D3T_LENGTH                   0x00000001

#define _CLC2GLSH_G3D4N_POSITION                 0x00000006
#define _CLC2GLSH_G3D4N_MASK                     0x00000040
#define _CLC2GLSH_G3D4N_LENGTH                   0x00000001

#define _CLC2GLSH_G3D4T_POSITION                 0x00000007
#define _CLC2GLSH_G3D4T_MASK                     0x00000080
#define _CLC2GLSH_G3D4T_LENGTH                   0x00000001

#define _CLC2GLSH_G4D1N_POSITION                 0x00000008
#define _CLC2GLSH_G4D1N_MASK                     0x00000100
#define _CLC2GLSH_G4D1N_LENGTH                   0x00000001

#define _CLC2GLSH_G4D1T_POSITION                 0x00000009
#define _CLC2GLSH_G4D1T_MASK                     0x00000200
#define _CLC2GLSH_G4D1T_LENGTH                   0x00000001

#define _CLC2GLSH_G4D2N_POSITION                 0x0000000A
#define _CLC2GLSH_G4D2N_MASK                     0x00000400
#define _CLC2GLSH_G4D2N_LENGTH                   0x00000001

#define _CLC2GLSH_G4D2T_POSITION                 0x0000000B
#define _CLC2GLSH_G4D2T_MASK                     0x00000800
#define _CLC2GLSH_G4D2T_LENGTH                   0x00000001

#define _CLC2GLSH_G4D3N_POSITION                 0x0000000C
#define _CLC2GLSH_G4D3N_MASK                     0x00001000
#define _CLC2GLSH_G4D3N_LENGTH                   0x00000001

#define _CLC2GLSH_G4D3T_POSITION                 0x0000000D
#define _CLC2GLSH_G4D3T_MASK                     0x00002000
#define _CLC2GLSH_G4D3T_LENGTH                   0x00000001

#define _CLC2GLSH_G4D4N_POSITION                 0x0000000E
#define _CLC2GLSH_G4D4N_MASK                     0x00004000
#define _CLC2GLSH_G4D4N_LENGTH                   0x00000001

#define _CLC2GLSH_G4D4T_POSITION                 0x0000000F
#define _CLC2GLSH_G4D4T_MASK                     0x00008000
#define _CLC2GLSH_G4D4T_LENGTH                   0x00000001

#define _CCP1CON1L_MOD_POSITION                  0x00000000
#define _CCP1CON1L_MOD_MASK                      0x0000000F
#define _CCP1CON1L_MOD_LENGTH                    0x00000004

#define _CCP1CON1L_CCSEL_POSITION                0x00000004
#define _CCP1CON1L_CCSEL_MASK                    0x00000010
#define _CCP1CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP1CON1L_T32_POSITION                  0x00000005
#define _CCP1CON1L_T32_MASK                      0x00000020
#define _CCP1CON1L_T32_LENGTH                    0x00000001

#define _CCP1CON1L_TMRPS_POSITION                0x00000006
#define _CCP1CON1L_TMRPS_MASK                    0x000000C0
#define _CCP1CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP1CON1L_CLKSEL_POSITION               0x00000008
#define _CCP1CON1L_CLKSEL_MASK                   0x00000700
#define _CCP1CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP1CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP1CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP1CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP1CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP1CON1L_CCPSLP_MASK                   0x00001000
#define _CCP1CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP1CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP1CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP1CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP1CON1L_CCPON_POSITION                0x0000000F
#define _CCP1CON1L_CCPON_MASK                    0x00008000
#define _CCP1CON1L_CCPON_LENGTH                  0x00000001

#define _CCP1CON1L_MOD0_POSITION                 0x00000000
#define _CCP1CON1L_MOD0_MASK                     0x00000001
#define _CCP1CON1L_MOD0_LENGTH                   0x00000001

#define _CCP1CON1L_MOD1_POSITION                 0x00000001
#define _CCP1CON1L_MOD1_MASK                     0x00000002
#define _CCP1CON1L_MOD1_LENGTH                   0x00000001

#define _CCP1CON1L_MOD2_POSITION                 0x00000002
#define _CCP1CON1L_MOD2_MASK                     0x00000004
#define _CCP1CON1L_MOD2_LENGTH                   0x00000001

#define _CCP1CON1L_MOD3_POSITION                 0x00000003
#define _CCP1CON1L_MOD3_MASK                     0x00000008
#define _CCP1CON1L_MOD3_LENGTH                   0x00000001

#define _CCP1CON1L_TMR32_POSITION                0x00000005
#define _CCP1CON1L_TMR32_MASK                    0x00000020
#define _CCP1CON1L_TMR32_LENGTH                  0x00000001

#define _CCP1CON1L_TMRPS0_POSITION               0x00000006
#define _CCP1CON1L_TMRPS0_MASK                   0x00000040
#define _CCP1CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP1CON1L_TMRPS1_POSITION               0x00000007
#define _CCP1CON1L_TMRPS1_MASK                   0x00000080
#define _CCP1CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP1CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP1CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP1CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP1CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP1CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP1CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP1CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP1CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP1CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD_POSITION               0x00000000
#define _CCP1CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP1CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP1CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP1CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP1CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP1CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP1CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP1CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP1CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP1CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP1CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP1CON1H_SYNC_POSITION                 0x00000000
#define _CCP1CON1H_SYNC_MASK                     0x0000001F
#define _CCP1CON1H_SYNC_LENGTH                   0x00000005

#define _CCP1CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP1CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP1CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP1CON1H_ONESHOT_POSITION              0x00000006
#define _CCP1CON1H_ONESHOT_MASK                  0x00000040
#define _CCP1CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP1CON1H_TRIGEN_POSITION               0x00000007
#define _CCP1CON1H_TRIGEN_MASK                   0x00000080
#define _CCP1CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP1CON1H_OPS_POSITION                  0x00000008
#define _CCP1CON1H_OPS_MASK                      0x00000F00
#define _CCP1CON1H_OPS_LENGTH                    0x00000004

#define _CCP1CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP1CON1H_RTRGEN_MASK                   0x00004000
#define _CCP1CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP1CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP1CON1H_OPSSRC_MASK                   0x00008000
#define _CCP1CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP1CON1H_SYNC0_POSITION                0x00000000
#define _CCP1CON1H_SYNC0_MASK                    0x00000001
#define _CCP1CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC1_POSITION                0x00000001
#define _CCP1CON1H_SYNC1_MASK                    0x00000002
#define _CCP1CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC2_POSITION                0x00000002
#define _CCP1CON1H_SYNC2_MASK                    0x00000004
#define _CCP1CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC3_POSITION                0x00000003
#define _CCP1CON1H_SYNC3_MASK                    0x00000008
#define _CCP1CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC4_POSITION                0x00000004
#define _CCP1CON1H_SYNC4_MASK                    0x00000010
#define _CCP1CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP1CON1H_OPS0_POSITION                 0x00000008
#define _CCP1CON1H_OPS0_MASK                     0x00000100
#define _CCP1CON1H_OPS0_LENGTH                   0x00000001

#define _CCP1CON1H_OPS1_POSITION                 0x00000009
#define _CCP1CON1H_OPS1_MASK                     0x00000200
#define _CCP1CON1H_OPS1_LENGTH                   0x00000001

#define _CCP1CON1H_OPS2_POSITION                 0x0000000A
#define _CCP1CON1H_OPS2_MASK                     0x00000400
#define _CCP1CON1H_OPS2_LENGTH                   0x00000001

#define _CCP1CON1H_OPS3_POSITION                 0x0000000B
#define _CCP1CON1H_OPS3_MASK                     0x00000800
#define _CCP1CON1H_OPS3_LENGTH                   0x00000001

#define _CCP1CON1H_OPSRC_POSITION                0x0000000F
#define _CCP1CON1H_OPSRC_MASK                    0x00008000
#define _CCP1CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS_POSITION                 0x00000008
#define _CCP1CON1H_IOPS_MASK                     0x00000F00
#define _CCP1CON1H_IOPS_LENGTH                   0x00000004

#define _CCP1CON1H_IOPS0_POSITION                0x00000008
#define _CCP1CON1H_IOPS0_MASK                    0x00000100
#define _CCP1CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS1_POSITION                0x00000009
#define _CCP1CON1H_IOPS1_MASK                    0x00000200
#define _CCP1CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS2_POSITION                0x0000000A
#define _CCP1CON1H_IOPS2_MASK                    0x00000400
#define _CCP1CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS3_POSITION                0x0000000B
#define _CCP1CON1H_IOPS3_MASK                    0x00000800
#define _CCP1CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG_POSITION                 0x00000000
#define _CCP1CON2L_ASDG_MASK                     0x000000FF
#define _CCP1CON2L_ASDG_LENGTH                   0x00000008

#define _CCP1CON2L_SSDG_POSITION                 0x0000000C
#define _CCP1CON2L_SSDG_MASK                     0x00001000
#define _CCP1CON2L_SSDG_LENGTH                   0x00000001

#define _CCP1CON2L_ASDGM_POSITION                0x0000000E
#define _CCP1CON2L_ASDGM_MASK                    0x00004000
#define _CCP1CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP1CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP1CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP1CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP1CON2L_ASDG0_POSITION                0x00000000
#define _CCP1CON2L_ASDG0_MASK                    0x00000001
#define _CCP1CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG1_POSITION                0x00000001
#define _CCP1CON2L_ASDG1_MASK                    0x00000002
#define _CCP1CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG2_POSITION                0x00000002
#define _CCP1CON2L_ASDG2_MASK                    0x00000004
#define _CCP1CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG3_POSITION                0x00000003
#define _CCP1CON2L_ASDG3_MASK                    0x00000008
#define _CCP1CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG4_POSITION                0x00000004
#define _CCP1CON2L_ASDG4_MASK                    0x00000010
#define _CCP1CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG5_POSITION                0x00000005
#define _CCP1CON2L_ASDG5_MASK                    0x00000020
#define _CCP1CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG6_POSITION                0x00000006
#define _CCP1CON2L_ASDG6_MASK                    0x00000040
#define _CCP1CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG7_POSITION                0x00000007
#define _CCP1CON2L_ASDG7_MASK                    0x00000080
#define _CCP1CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP1CON2H_ICS_POSITION                  0x00000000
#define _CCP1CON2H_ICS_MASK                      0x00000007
#define _CCP1CON2H_ICS_LENGTH                    0x00000003

#define _CCP1CON2H_AUXOUT_POSITION               0x00000003
#define _CCP1CON2H_AUXOUT_MASK                   0x00000018
#define _CCP1CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP1CON2H_ICGSM_POSITION                0x00000006
#define _CCP1CON2H_ICGSM_MASK                    0x000000C0
#define _CCP1CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP1CON2H_OCAEN_POSITION                0x00000008
#define _CCP1CON2H_OCAEN_MASK                    0x00000100
#define _CCP1CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCBEN_POSITION                0x00000009
#define _CCP1CON2H_OCBEN_MASK                    0x00000200
#define _CCP1CON2H_OCBEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCCEN_POSITION                0x0000000A
#define _CCP1CON2H_OCCEN_MASK                    0x00000400
#define _CCP1CON2H_OCCEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCDEN_POSITION                0x0000000B
#define _CCP1CON2H_OCDEN_MASK                    0x00000800
#define _CCP1CON2H_OCDEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCEEN_POSITION                0x0000000C
#define _CCP1CON2H_OCEEN_MASK                    0x00001000
#define _CCP1CON2H_OCEEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCFEN_POSITION                0x0000000D
#define _CCP1CON2H_OCFEN_MASK                    0x00002000
#define _CCP1CON2H_OCFEN_LENGTH                  0x00000001

#define _CCP1CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP1CON2H_OENSYNC_MASK                  0x00008000
#define _CCP1CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP1CON2H_ICS0_POSITION                 0x00000000
#define _CCP1CON2H_ICS0_MASK                     0x00000001
#define _CCP1CON2H_ICS0_LENGTH                   0x00000001

#define _CCP1CON2H_ICS1_POSITION                 0x00000001
#define _CCP1CON2H_ICS1_MASK                     0x00000002
#define _CCP1CON2H_ICS1_LENGTH                   0x00000001

#define _CCP1CON2H_ICS2_POSITION                 0x00000002
#define _CCP1CON2H_ICS2_MASK                     0x00000004
#define _CCP1CON2H_ICS2_LENGTH                   0x00000001

#define _CCP1CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP1CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP1CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP1CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP1CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP1CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP1CON2H_ICGSM0_POSITION               0x00000006
#define _CCP1CON2H_ICGSM0_MASK                   0x00000040
#define _CCP1CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP1CON2H_ICGSM1_POSITION               0x00000007
#define _CCP1CON2H_ICGSM1_MASK                   0x00000080
#define _CCP1CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP1CON2H_ICSEL_POSITION                0x00000000
#define _CCP1CON2H_ICSEL_MASK                    0x00000007
#define _CCP1CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP1CON2H_ICSEL0_POSITION               0x00000000
#define _CCP1CON2H_ICSEL0_MASK                   0x00000001
#define _CCP1CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP1CON2H_ICSEL1_POSITION               0x00000001
#define _CCP1CON2H_ICSEL1_MASK                   0x00000002
#define _CCP1CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP1CON2H_ICSEL2_POSITION               0x00000002
#define _CCP1CON2H_ICSEL2_MASK                   0x00000004
#define _CCP1CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP1CON3L_DT_POSITION                   0x00000000
#define _CCP1CON3L_DT_MASK                       0x0000003F
#define _CCP1CON3L_DT_LENGTH                     0x00000006

#define _CCP1CON3L_DT0_POSITION                  0x00000000
#define _CCP1CON3L_DT0_MASK                      0x00000001
#define _CCP1CON3L_DT0_LENGTH                    0x00000001

#define _CCP1CON3L_DT1_POSITION                  0x00000001
#define _CCP1CON3L_DT1_MASK                      0x00000002
#define _CCP1CON3L_DT1_LENGTH                    0x00000001

#define _CCP1CON3L_DT2_POSITION                  0x00000002
#define _CCP1CON3L_DT2_MASK                      0x00000004
#define _CCP1CON3L_DT2_LENGTH                    0x00000001

#define _CCP1CON3L_DT3_POSITION                  0x00000003
#define _CCP1CON3L_DT3_MASK                      0x00000008
#define _CCP1CON3L_DT3_LENGTH                    0x00000001

#define _CCP1CON3L_DT4_POSITION                  0x00000004
#define _CCP1CON3L_DT4_MASK                      0x00000010
#define _CCP1CON3L_DT4_LENGTH                    0x00000001

#define _CCP1CON3L_DT5_POSITION                  0x00000005
#define _CCP1CON3L_DT5_MASK                      0x00000020
#define _CCP1CON3L_DT5_LENGTH                    0x00000001

#define _CCP1CON3H_PSSBDF_POSITION               0x00000000
#define _CCP1CON3H_PSSBDF_MASK                   0x00000003
#define _CCP1CON3H_PSSBDF_LENGTH                 0x00000002

#define _CCP1CON3H_PSSACE_POSITION               0x00000002
#define _CCP1CON3H_PSSACE_MASK                   0x0000000C
#define _CCP1CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP1CON3H_POLBDF_POSITION               0x00000004
#define _CCP1CON3H_POLBDF_MASK                   0x00000010
#define _CCP1CON3H_POLBDF_LENGTH                 0x00000001

#define _CCP1CON3H_POLACE_POSITION               0x00000005
#define _CCP1CON3H_POLACE_MASK                   0x00000020
#define _CCP1CON3H_POLACE_LENGTH                 0x00000001

#define _CCP1CON3H_OUTM_POSITION                 0x00000008
#define _CCP1CON3H_OUTM_MASK                     0x00000700
#define _CCP1CON3H_OUTM_LENGTH                   0x00000003

#define _CCP1CON3H_OSCNT_POSITION                0x0000000C
#define _CCP1CON3H_OSCNT_MASK                    0x00007000
#define _CCP1CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP1CON3H_OETRIG_POSITION               0x0000000F
#define _CCP1CON3H_OETRIG_MASK                   0x00008000
#define _CCP1CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP1CON3H_PSSBDF0_POSITION              0x00000000
#define _CCP1CON3H_PSSBDF0_MASK                  0x00000001
#define _CCP1CON3H_PSSBDF0_LENGTH                0x00000001

#define _CCP1CON3H_PSSBDF1_POSITION              0x00000001
#define _CCP1CON3H_PSSBDF1_MASK                  0x00000002
#define _CCP1CON3H_PSSBDF1_LENGTH                0x00000001

#define _CCP1CON3H_PSSACE0_POSITION              0x00000002
#define _CCP1CON3H_PSSACE0_MASK                  0x00000004
#define _CCP1CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP1CON3H_PSSACE1_POSITION              0x00000003
#define _CCP1CON3H_PSSACE1_MASK                  0x00000008
#define _CCP1CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP1CON3H_OUTM0_POSITION                0x00000008
#define _CCP1CON3H_OUTM0_MASK                    0x00000100
#define _CCP1CON3H_OUTM0_LENGTH                  0x00000001

#define _CCP1CON3H_OUTM1_POSITION                0x00000009
#define _CCP1CON3H_OUTM1_MASK                    0x00000200
#define _CCP1CON3H_OUTM1_LENGTH                  0x00000001

#define _CCP1CON3H_OUTM2_POSITION                0x0000000A
#define _CCP1CON3H_OUTM2_MASK                    0x00000400
#define _CCP1CON3H_OUTM2_LENGTH                  0x00000001

#define _CCP1CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP1CON3H_OSCNT0_MASK                   0x00001000
#define _CCP1CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP1CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP1CON3H_OSCNT1_MASK                   0x00002000
#define _CCP1CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP1CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP1CON3H_OSCNT2_MASK                   0x00004000
#define _CCP1CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP1STAT_ICBNE_POSITION                 0x00000000
#define _CCP1STAT_ICBNE_MASK                     0x00000001
#define _CCP1STAT_ICBNE_LENGTH                   0x00000001

#define _CCP1STAT_ICOV_POSITION                  0x00000001
#define _CCP1STAT_ICOV_MASK                      0x00000002
#define _CCP1STAT_ICOV_LENGTH                    0x00000001

#define _CCP1STAT_ICDIS_POSITION                 0x00000002
#define _CCP1STAT_ICDIS_MASK                     0x00000004
#define _CCP1STAT_ICDIS_LENGTH                   0x00000001

#define _CCP1STAT_SCEVT_POSITION                 0x00000003
#define _CCP1STAT_SCEVT_MASK                     0x00000008
#define _CCP1STAT_SCEVT_LENGTH                   0x00000001

#define _CCP1STAT_ASEVT_POSITION                 0x00000004
#define _CCP1STAT_ASEVT_MASK                     0x00000010
#define _CCP1STAT_ASEVT_LENGTH                   0x00000001

#define _CCP1STAT_TRCLR_POSITION                 0x00000005
#define _CCP1STAT_TRCLR_MASK                     0x00000020
#define _CCP1STAT_TRCLR_LENGTH                   0x00000001

#define _CCP1STAT_TRSET_POSITION                 0x00000006
#define _CCP1STAT_TRSET_MASK                     0x00000040
#define _CCP1STAT_TRSET_LENGTH                   0x00000001

#define _CCP1STAT_CCPTRIG_POSITION               0x00000007
#define _CCP1STAT_CCPTRIG_MASK                   0x00000080
#define _CCP1STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP1STAT_ICGARM_POSITION                0x0000000A
#define _CCP1STAT_ICGARM_MASK                    0x00000400
#define _CCP1STAT_ICGARM_LENGTH                  0x00000001

#define _CCP1STAT_TRIG_POSITION                  0x00000007
#define _CCP1STAT_TRIG_MASK                      0x00000080
#define _CCP1STAT_TRIG_LENGTH                    0x00000001

#define _CCP1STATL_ICBNE_POSITION                0x00000000
#define _CCP1STATL_ICBNE_MASK                    0x00000001
#define _CCP1STATL_ICBNE_LENGTH                  0x00000001

#define _CCP1STATL_ICOV_POSITION                 0x00000001
#define _CCP1STATL_ICOV_MASK                     0x00000002
#define _CCP1STATL_ICOV_LENGTH                   0x00000001

#define _CCP1STATL_ICDIS_POSITION                0x00000002
#define _CCP1STATL_ICDIS_MASK                    0x00000004
#define _CCP1STATL_ICDIS_LENGTH                  0x00000001

#define _CCP1STATL_SCEVT_POSITION                0x00000003
#define _CCP1STATL_SCEVT_MASK                    0x00000008
#define _CCP1STATL_SCEVT_LENGTH                  0x00000001

#define _CCP1STATL_ASEVT_POSITION                0x00000004
#define _CCP1STATL_ASEVT_MASK                    0x00000010
#define _CCP1STATL_ASEVT_LENGTH                  0x00000001

#define _CCP1STATL_TRCLR_POSITION                0x00000005
#define _CCP1STATL_TRCLR_MASK                    0x00000020
#define _CCP1STATL_TRCLR_LENGTH                  0x00000001

#define _CCP1STATL_TRSET_POSITION                0x00000006
#define _CCP1STATL_TRSET_MASK                    0x00000040
#define _CCP1STATL_TRSET_LENGTH                  0x00000001

#define _CCP1STATL_CCPTRIG_POSITION              0x00000007
#define _CCP1STATL_CCPTRIG_MASK                  0x00000080
#define _CCP1STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP1STATL_ICGARM_POSITION               0x0000000A
#define _CCP1STATL_ICGARM_MASK                   0x00000400
#define _CCP1STATL_ICGARM_LENGTH                 0x00000001

#define _CCP1STATL_TRIG_POSITION                 0x00000007
#define _CCP1STATL_TRIG_MASK                     0x00000080
#define _CCP1STATL_TRIG_LENGTH                   0x00000001

#define _CCP2CON1L_MOD_POSITION                  0x00000000
#define _CCP2CON1L_MOD_MASK                      0x0000000F
#define _CCP2CON1L_MOD_LENGTH                    0x00000004

#define _CCP2CON1L_CCSEL_POSITION                0x00000004
#define _CCP2CON1L_CCSEL_MASK                    0x00000010
#define _CCP2CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP2CON1L_T32_POSITION                  0x00000005
#define _CCP2CON1L_T32_MASK                      0x00000020
#define _CCP2CON1L_T32_LENGTH                    0x00000001

#define _CCP2CON1L_TMRPS_POSITION                0x00000006
#define _CCP2CON1L_TMRPS_MASK                    0x000000C0
#define _CCP2CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP2CON1L_CLKSEL_POSITION               0x00000008
#define _CCP2CON1L_CLKSEL_MASK                   0x00000700
#define _CCP2CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP2CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP2CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP2CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP2CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP2CON1L_CCPSLP_MASK                   0x00001000
#define _CCP2CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP2CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP2CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP2CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP2CON1L_CCPON_POSITION                0x0000000F
#define _CCP2CON1L_CCPON_MASK                    0x00008000
#define _CCP2CON1L_CCPON_LENGTH                  0x00000001

#define _CCP2CON1L_MOD0_POSITION                 0x00000000
#define _CCP2CON1L_MOD0_MASK                     0x00000001
#define _CCP2CON1L_MOD0_LENGTH                   0x00000001

#define _CCP2CON1L_MOD1_POSITION                 0x00000001
#define _CCP2CON1L_MOD1_MASK                     0x00000002
#define _CCP2CON1L_MOD1_LENGTH                   0x00000001

#define _CCP2CON1L_MOD2_POSITION                 0x00000002
#define _CCP2CON1L_MOD2_MASK                     0x00000004
#define _CCP2CON1L_MOD2_LENGTH                   0x00000001

#define _CCP2CON1L_MOD3_POSITION                 0x00000003
#define _CCP2CON1L_MOD3_MASK                     0x00000008
#define _CCP2CON1L_MOD3_LENGTH                   0x00000001

#define _CCP2CON1L_TMR32_POSITION                0x00000005
#define _CCP2CON1L_TMR32_MASK                    0x00000020
#define _CCP2CON1L_TMR32_LENGTH                  0x00000001

#define _CCP2CON1L_TMRPS0_POSITION               0x00000006
#define _CCP2CON1L_TMRPS0_MASK                   0x00000040
#define _CCP2CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP2CON1L_TMRPS1_POSITION               0x00000007
#define _CCP2CON1L_TMRPS1_MASK                   0x00000080
#define _CCP2CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP2CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP2CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP2CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP2CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP2CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP2CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP2CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP2CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP2CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD_POSITION               0x00000000
#define _CCP2CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP2CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP2CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP2CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP2CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP2CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP2CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP2CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP2CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP2CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP2CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP2CON1H_SYNC_POSITION                 0x00000000
#define _CCP2CON1H_SYNC_MASK                     0x0000001F
#define _CCP2CON1H_SYNC_LENGTH                   0x00000005

#define _CCP2CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP2CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP2CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP2CON1H_ONESHOT_POSITION              0x00000006
#define _CCP2CON1H_ONESHOT_MASK                  0x00000040
#define _CCP2CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP2CON1H_TRIGEN_POSITION               0x00000007
#define _CCP2CON1H_TRIGEN_MASK                   0x00000080
#define _CCP2CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP2CON1H_OPS_POSITION                  0x00000008
#define _CCP2CON1H_OPS_MASK                      0x00000F00
#define _CCP2CON1H_OPS_LENGTH                    0x00000004

#define _CCP2CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP2CON1H_RTRGEN_MASK                   0x00004000
#define _CCP2CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP2CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP2CON1H_OPSSRC_MASK                   0x00008000
#define _CCP2CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP2CON1H_SYNC0_POSITION                0x00000000
#define _CCP2CON1H_SYNC0_MASK                    0x00000001
#define _CCP2CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC1_POSITION                0x00000001
#define _CCP2CON1H_SYNC1_MASK                    0x00000002
#define _CCP2CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC2_POSITION                0x00000002
#define _CCP2CON1H_SYNC2_MASK                    0x00000004
#define _CCP2CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC3_POSITION                0x00000003
#define _CCP2CON1H_SYNC3_MASK                    0x00000008
#define _CCP2CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC4_POSITION                0x00000004
#define _CCP2CON1H_SYNC4_MASK                    0x00000010
#define _CCP2CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP2CON1H_OPS0_POSITION                 0x00000008
#define _CCP2CON1H_OPS0_MASK                     0x00000100
#define _CCP2CON1H_OPS0_LENGTH                   0x00000001

#define _CCP2CON1H_OPS1_POSITION                 0x00000009
#define _CCP2CON1H_OPS1_MASK                     0x00000200
#define _CCP2CON1H_OPS1_LENGTH                   0x00000001

#define _CCP2CON1H_OPS2_POSITION                 0x0000000A
#define _CCP2CON1H_OPS2_MASK                     0x00000400
#define _CCP2CON1H_OPS2_LENGTH                   0x00000001

#define _CCP2CON1H_OPS3_POSITION                 0x0000000B
#define _CCP2CON1H_OPS3_MASK                     0x00000800
#define _CCP2CON1H_OPS3_LENGTH                   0x00000001

#define _CCP2CON1H_OPSRC_POSITION                0x0000000F
#define _CCP2CON1H_OPSRC_MASK                    0x00008000
#define _CCP2CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS_POSITION                 0x00000008
#define _CCP2CON1H_IOPS_MASK                     0x00000F00
#define _CCP2CON1H_IOPS_LENGTH                   0x00000004

#define _CCP2CON1H_IOPS0_POSITION                0x00000008
#define _CCP2CON1H_IOPS0_MASK                    0x00000100
#define _CCP2CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS1_POSITION                0x00000009
#define _CCP2CON1H_IOPS1_MASK                    0x00000200
#define _CCP2CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS2_POSITION                0x0000000A
#define _CCP2CON1H_IOPS2_MASK                    0x00000400
#define _CCP2CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS3_POSITION                0x0000000B
#define _CCP2CON1H_IOPS3_MASK                    0x00000800
#define _CCP2CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG_POSITION                 0x00000000
#define _CCP2CON2L_ASDG_MASK                     0x000000FF
#define _CCP2CON2L_ASDG_LENGTH                   0x00000008

#define _CCP2CON2L_SSDG_POSITION                 0x0000000C
#define _CCP2CON2L_SSDG_MASK                     0x00001000
#define _CCP2CON2L_SSDG_LENGTH                   0x00000001

#define _CCP2CON2L_ASDGM_POSITION                0x0000000E
#define _CCP2CON2L_ASDGM_MASK                    0x00004000
#define _CCP2CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP2CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP2CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP2CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP2CON2L_ASDG0_POSITION                0x00000000
#define _CCP2CON2L_ASDG0_MASK                    0x00000001
#define _CCP2CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG1_POSITION                0x00000001
#define _CCP2CON2L_ASDG1_MASK                    0x00000002
#define _CCP2CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG2_POSITION                0x00000002
#define _CCP2CON2L_ASDG2_MASK                    0x00000004
#define _CCP2CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG3_POSITION                0x00000003
#define _CCP2CON2L_ASDG3_MASK                    0x00000008
#define _CCP2CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG4_POSITION                0x00000004
#define _CCP2CON2L_ASDG4_MASK                    0x00000010
#define _CCP2CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG5_POSITION                0x00000005
#define _CCP2CON2L_ASDG5_MASK                    0x00000020
#define _CCP2CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG6_POSITION                0x00000006
#define _CCP2CON2L_ASDG6_MASK                    0x00000040
#define _CCP2CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG7_POSITION                0x00000007
#define _CCP2CON2L_ASDG7_MASK                    0x00000080
#define _CCP2CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP2CON2H_ICS_POSITION                  0x00000000
#define _CCP2CON2H_ICS_MASK                      0x00000007
#define _CCP2CON2H_ICS_LENGTH                    0x00000003

#define _CCP2CON2H_AUXOUT_POSITION               0x00000003
#define _CCP2CON2H_AUXOUT_MASK                   0x00000018
#define _CCP2CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP2CON2H_ICGSM_POSITION                0x00000006
#define _CCP2CON2H_ICGSM_MASK                    0x000000C0
#define _CCP2CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP2CON2H_OCAEN_POSITION                0x00000008
#define _CCP2CON2H_OCAEN_MASK                    0x00000100
#define _CCP2CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP2CON2H_OCBEN_POSITION                0x00000009
#define _CCP2CON2H_OCBEN_MASK                    0x00000200
#define _CCP2CON2H_OCBEN_LENGTH                  0x00000001

#define _CCP2CON2H_OCCEN_POSITION                0x0000000A
#define _CCP2CON2H_OCCEN_MASK                    0x00000400
#define _CCP2CON2H_OCCEN_LENGTH                  0x00000001

#define _CCP2CON2H_OCDEN_POSITION                0x0000000B
#define _CCP2CON2H_OCDEN_MASK                    0x00000800
#define _CCP2CON2H_OCDEN_LENGTH                  0x00000001

#define _CCP2CON2H_OCEEN_POSITION                0x0000000C
#define _CCP2CON2H_OCEEN_MASK                    0x00001000
#define _CCP2CON2H_OCEEN_LENGTH                  0x00000001

#define _CCP2CON2H_OCFEN_POSITION                0x0000000D
#define _CCP2CON2H_OCFEN_MASK                    0x00002000
#define _CCP2CON2H_OCFEN_LENGTH                  0x00000001

#define _CCP2CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP2CON2H_OENSYNC_MASK                  0x00008000
#define _CCP2CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP2CON2H_ICS0_POSITION                 0x00000000
#define _CCP2CON2H_ICS0_MASK                     0x00000001
#define _CCP2CON2H_ICS0_LENGTH                   0x00000001

#define _CCP2CON2H_ICS1_POSITION                 0x00000001
#define _CCP2CON2H_ICS1_MASK                     0x00000002
#define _CCP2CON2H_ICS1_LENGTH                   0x00000001

#define _CCP2CON2H_ICS2_POSITION                 0x00000002
#define _CCP2CON2H_ICS2_MASK                     0x00000004
#define _CCP2CON2H_ICS2_LENGTH                   0x00000001

#define _CCP2CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP2CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP2CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP2CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP2CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP2CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP2CON2H_ICGSM0_POSITION               0x00000006
#define _CCP2CON2H_ICGSM0_MASK                   0x00000040
#define _CCP2CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP2CON2H_ICGSM1_POSITION               0x00000007
#define _CCP2CON2H_ICGSM1_MASK                   0x00000080
#define _CCP2CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP2CON2H_ICSEL_POSITION                0x00000000
#define _CCP2CON2H_ICSEL_MASK                    0x00000007
#define _CCP2CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP2CON2H_ICSEL0_POSITION               0x00000000
#define _CCP2CON2H_ICSEL0_MASK                   0x00000001
#define _CCP2CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP2CON2H_ICSEL1_POSITION               0x00000001
#define _CCP2CON2H_ICSEL1_MASK                   0x00000002
#define _CCP2CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP2CON2H_ICSEL2_POSITION               0x00000002
#define _CCP2CON2H_ICSEL2_MASK                   0x00000004
#define _CCP2CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP2CON3L_DT_POSITION                   0x00000000
#define _CCP2CON3L_DT_MASK                       0x0000003F
#define _CCP2CON3L_DT_LENGTH                     0x00000006

#define _CCP2CON3L_DT0_POSITION                  0x00000000
#define _CCP2CON3L_DT0_MASK                      0x00000001
#define _CCP2CON3L_DT0_LENGTH                    0x00000001

#define _CCP2CON3L_DT1_POSITION                  0x00000001
#define _CCP2CON3L_DT1_MASK                      0x00000002
#define _CCP2CON3L_DT1_LENGTH                    0x00000001

#define _CCP2CON3L_DT2_POSITION                  0x00000002
#define _CCP2CON3L_DT2_MASK                      0x00000004
#define _CCP2CON3L_DT2_LENGTH                    0x00000001

#define _CCP2CON3L_DT3_POSITION                  0x00000003
#define _CCP2CON3L_DT3_MASK                      0x00000008
#define _CCP2CON3L_DT3_LENGTH                    0x00000001

#define _CCP2CON3L_DT4_POSITION                  0x00000004
#define _CCP2CON3L_DT4_MASK                      0x00000010
#define _CCP2CON3L_DT4_LENGTH                    0x00000001

#define _CCP2CON3L_DT5_POSITION                  0x00000005
#define _CCP2CON3L_DT5_MASK                      0x00000020
#define _CCP2CON3L_DT5_LENGTH                    0x00000001

#define _CCP2CON3H_PSSBDF_POSITION               0x00000000
#define _CCP2CON3H_PSSBDF_MASK                   0x00000003
#define _CCP2CON3H_PSSBDF_LENGTH                 0x00000002

#define _CCP2CON3H_PSSACE_POSITION               0x00000002
#define _CCP2CON3H_PSSACE_MASK                   0x0000000C
#define _CCP2CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP2CON3H_POLBDF_POSITION               0x00000004
#define _CCP2CON3H_POLBDF_MASK                   0x00000010
#define _CCP2CON3H_POLBDF_LENGTH                 0x00000001

#define _CCP2CON3H_POLACE_POSITION               0x00000005
#define _CCP2CON3H_POLACE_MASK                   0x00000020
#define _CCP2CON3H_POLACE_LENGTH                 0x00000001

#define _CCP2CON3H_OUTM_POSITION                 0x00000008
#define _CCP2CON3H_OUTM_MASK                     0x00000700
#define _CCP2CON3H_OUTM_LENGTH                   0x00000003

#define _CCP2CON3H_OSCNT_POSITION                0x0000000C
#define _CCP2CON3H_OSCNT_MASK                    0x00007000
#define _CCP2CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP2CON3H_OETRIG_POSITION               0x0000000F
#define _CCP2CON3H_OETRIG_MASK                   0x00008000
#define _CCP2CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP2CON3H_PSSBDF0_POSITION              0x00000000
#define _CCP2CON3H_PSSBDF0_MASK                  0x00000001
#define _CCP2CON3H_PSSBDF0_LENGTH                0x00000001

#define _CCP2CON3H_PSSBDF1_POSITION              0x00000001
#define _CCP2CON3H_PSSBDF1_MASK                  0x00000002
#define _CCP2CON3H_PSSBDF1_LENGTH                0x00000001

#define _CCP2CON3H_PSSACE0_POSITION              0x00000002
#define _CCP2CON3H_PSSACE0_MASK                  0x00000004
#define _CCP2CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP2CON3H_PSSACE1_POSITION              0x00000003
#define _CCP2CON3H_PSSACE1_MASK                  0x00000008
#define _CCP2CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP2CON3H_OUTM0_POSITION                0x00000008
#define _CCP2CON3H_OUTM0_MASK                    0x00000100
#define _CCP2CON3H_OUTM0_LENGTH                  0x00000001

#define _CCP2CON3H_OUTM1_POSITION                0x00000009
#define _CCP2CON3H_OUTM1_MASK                    0x00000200
#define _CCP2CON3H_OUTM1_LENGTH                  0x00000001

#define _CCP2CON3H_OUTM2_POSITION                0x0000000A
#define _CCP2CON3H_OUTM2_MASK                    0x00000400
#define _CCP2CON3H_OUTM2_LENGTH                  0x00000001

#define _CCP2CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP2CON3H_OSCNT0_MASK                   0x00001000
#define _CCP2CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP2CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP2CON3H_OSCNT1_MASK                   0x00002000
#define _CCP2CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP2CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP2CON3H_OSCNT2_MASK                   0x00004000
#define _CCP2CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP2STAT_ICBNE_POSITION                 0x00000000
#define _CCP2STAT_ICBNE_MASK                     0x00000001
#define _CCP2STAT_ICBNE_LENGTH                   0x00000001

#define _CCP2STAT_ICOV_POSITION                  0x00000001
#define _CCP2STAT_ICOV_MASK                      0x00000002
#define _CCP2STAT_ICOV_LENGTH                    0x00000001

#define _CCP2STAT_ICDIS_POSITION                 0x00000002
#define _CCP2STAT_ICDIS_MASK                     0x00000004
#define _CCP2STAT_ICDIS_LENGTH                   0x00000001

#define _CCP2STAT_SCEVT_POSITION                 0x00000003
#define _CCP2STAT_SCEVT_MASK                     0x00000008
#define _CCP2STAT_SCEVT_LENGTH                   0x00000001

#define _CCP2STAT_ASEVT_POSITION                 0x00000004
#define _CCP2STAT_ASEVT_MASK                     0x00000010
#define _CCP2STAT_ASEVT_LENGTH                   0x00000001

#define _CCP2STAT_TRCLR_POSITION                 0x00000005
#define _CCP2STAT_TRCLR_MASK                     0x00000020
#define _CCP2STAT_TRCLR_LENGTH                   0x00000001

#define _CCP2STAT_TRSET_POSITION                 0x00000006
#define _CCP2STAT_TRSET_MASK                     0x00000040
#define _CCP2STAT_TRSET_LENGTH                   0x00000001

#define _CCP2STAT_CCPTRIG_POSITION               0x00000007
#define _CCP2STAT_CCPTRIG_MASK                   0x00000080
#define _CCP2STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP2STAT_ICGARM_POSITION                0x0000000A
#define _CCP2STAT_ICGARM_MASK                    0x00000400
#define _CCP2STAT_ICGARM_LENGTH                  0x00000001

#define _CCP2STAT_TRIG_POSITION                  0x00000007
#define _CCP2STAT_TRIG_MASK                      0x00000080
#define _CCP2STAT_TRIG_LENGTH                    0x00000001

#define _CCP2STATL_ICBNE_POSITION                0x00000000
#define _CCP2STATL_ICBNE_MASK                    0x00000001
#define _CCP2STATL_ICBNE_LENGTH                  0x00000001

#define _CCP2STATL_ICOV_POSITION                 0x00000001
#define _CCP2STATL_ICOV_MASK                     0x00000002
#define _CCP2STATL_ICOV_LENGTH                   0x00000001

#define _CCP2STATL_ICDIS_POSITION                0x00000002
#define _CCP2STATL_ICDIS_MASK                    0x00000004
#define _CCP2STATL_ICDIS_LENGTH                  0x00000001

#define _CCP2STATL_SCEVT_POSITION                0x00000003
#define _CCP2STATL_SCEVT_MASK                    0x00000008
#define _CCP2STATL_SCEVT_LENGTH                  0x00000001

#define _CCP2STATL_ASEVT_POSITION                0x00000004
#define _CCP2STATL_ASEVT_MASK                    0x00000010
#define _CCP2STATL_ASEVT_LENGTH                  0x00000001

#define _CCP2STATL_TRCLR_POSITION                0x00000005
#define _CCP2STATL_TRCLR_MASK                    0x00000020
#define _CCP2STATL_TRCLR_LENGTH                  0x00000001

#define _CCP2STATL_TRSET_POSITION                0x00000006
#define _CCP2STATL_TRSET_MASK                    0x00000040
#define _CCP2STATL_TRSET_LENGTH                  0x00000001

#define _CCP2STATL_CCPTRIG_POSITION              0x00000007
#define _CCP2STATL_CCPTRIG_MASK                  0x00000080
#define _CCP2STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP2STATL_ICGARM_POSITION               0x0000000A
#define _CCP2STATL_ICGARM_MASK                   0x00000400
#define _CCP2STATL_ICGARM_LENGTH                 0x00000001

#define _CCP2STATL_TRIG_POSITION                 0x00000007
#define _CCP2STATL_TRIG_MASK                     0x00000080
#define _CCP2STATL_TRIG_LENGTH                   0x00000001

#define _CCP3CON1L_MOD_POSITION                  0x00000000
#define _CCP3CON1L_MOD_MASK                      0x0000000F
#define _CCP3CON1L_MOD_LENGTH                    0x00000004

#define _CCP3CON1L_CCSEL_POSITION                0x00000004
#define _CCP3CON1L_CCSEL_MASK                    0x00000010
#define _CCP3CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP3CON1L_T32_POSITION                  0x00000005
#define _CCP3CON1L_T32_MASK                      0x00000020
#define _CCP3CON1L_T32_LENGTH                    0x00000001

#define _CCP3CON1L_TMRPS_POSITION                0x00000006
#define _CCP3CON1L_TMRPS_MASK                    0x000000C0
#define _CCP3CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP3CON1L_CLKSEL_POSITION               0x00000008
#define _CCP3CON1L_CLKSEL_MASK                   0x00000700
#define _CCP3CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP3CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP3CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP3CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP3CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP3CON1L_CCPSLP_MASK                   0x00001000
#define _CCP3CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP3CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP3CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP3CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP3CON1L_CCPON_POSITION                0x0000000F
#define _CCP3CON1L_CCPON_MASK                    0x00008000
#define _CCP3CON1L_CCPON_LENGTH                  0x00000001

#define _CCP3CON1L_MOD0_POSITION                 0x00000000
#define _CCP3CON1L_MOD0_MASK                     0x00000001
#define _CCP3CON1L_MOD0_LENGTH                   0x00000001

#define _CCP3CON1L_MOD1_POSITION                 0x00000001
#define _CCP3CON1L_MOD1_MASK                     0x00000002
#define _CCP3CON1L_MOD1_LENGTH                   0x00000001

#define _CCP3CON1L_MOD2_POSITION                 0x00000002
#define _CCP3CON1L_MOD2_MASK                     0x00000004
#define _CCP3CON1L_MOD2_LENGTH                   0x00000001

#define _CCP3CON1L_MOD3_POSITION                 0x00000003
#define _CCP3CON1L_MOD3_MASK                     0x00000008
#define _CCP3CON1L_MOD3_LENGTH                   0x00000001

#define _CCP3CON1L_TMR32_POSITION                0x00000005
#define _CCP3CON1L_TMR32_MASK                    0x00000020
#define _CCP3CON1L_TMR32_LENGTH                  0x00000001

#define _CCP3CON1L_TMRPS0_POSITION               0x00000006
#define _CCP3CON1L_TMRPS0_MASK                   0x00000040
#define _CCP3CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP3CON1L_TMRPS1_POSITION               0x00000007
#define _CCP3CON1L_TMRPS1_MASK                   0x00000080
#define _CCP3CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP3CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP3CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP3CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP3CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP3CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP3CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP3CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP3CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP3CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP3CON1L_CCPMOD_POSITION               0x00000000
#define _CCP3CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP3CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP3CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP3CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP3CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP3CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP3CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP3CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP3CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP3CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP3CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP3CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP3CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP3CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP3CON1H_SYNC_POSITION                 0x00000000
#define _CCP3CON1H_SYNC_MASK                     0x0000001F
#define _CCP3CON1H_SYNC_LENGTH                   0x00000005

#define _CCP3CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP3CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP3CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP3CON1H_ONESHOT_POSITION              0x00000006
#define _CCP3CON1H_ONESHOT_MASK                  0x00000040
#define _CCP3CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP3CON1H_TRIGEN_POSITION               0x00000007
#define _CCP3CON1H_TRIGEN_MASK                   0x00000080
#define _CCP3CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP3CON1H_OPS_POSITION                  0x00000008
#define _CCP3CON1H_OPS_MASK                      0x00000F00
#define _CCP3CON1H_OPS_LENGTH                    0x00000004

#define _CCP3CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP3CON1H_RTRGEN_MASK                   0x00004000
#define _CCP3CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP3CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP3CON1H_OPSSRC_MASK                   0x00008000
#define _CCP3CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP3CON1H_SYNC0_POSITION                0x00000000
#define _CCP3CON1H_SYNC0_MASK                    0x00000001
#define _CCP3CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP3CON1H_SYNC1_POSITION                0x00000001
#define _CCP3CON1H_SYNC1_MASK                    0x00000002
#define _CCP3CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP3CON1H_SYNC2_POSITION                0x00000002
#define _CCP3CON1H_SYNC2_MASK                    0x00000004
#define _CCP3CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP3CON1H_SYNC3_POSITION                0x00000003
#define _CCP3CON1H_SYNC3_MASK                    0x00000008
#define _CCP3CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP3CON1H_SYNC4_POSITION                0x00000004
#define _CCP3CON1H_SYNC4_MASK                    0x00000010
#define _CCP3CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP3CON1H_OPS0_POSITION                 0x00000008
#define _CCP3CON1H_OPS0_MASK                     0x00000100
#define _CCP3CON1H_OPS0_LENGTH                   0x00000001

#define _CCP3CON1H_OPS1_POSITION                 0x00000009
#define _CCP3CON1H_OPS1_MASK                     0x00000200
#define _CCP3CON1H_OPS1_LENGTH                   0x00000001

#define _CCP3CON1H_OPS2_POSITION                 0x0000000A
#define _CCP3CON1H_OPS2_MASK                     0x00000400
#define _CCP3CON1H_OPS2_LENGTH                   0x00000001

#define _CCP3CON1H_OPS3_POSITION                 0x0000000B
#define _CCP3CON1H_OPS3_MASK                     0x00000800
#define _CCP3CON1H_OPS3_LENGTH                   0x00000001

#define _CCP3CON1H_OPSRC_POSITION                0x0000000F
#define _CCP3CON1H_OPSRC_MASK                    0x00008000
#define _CCP3CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP3CON1H_IOPS_POSITION                 0x00000008
#define _CCP3CON1H_IOPS_MASK                     0x00000F00
#define _CCP3CON1H_IOPS_LENGTH                   0x00000004

#define _CCP3CON1H_IOPS0_POSITION                0x00000008
#define _CCP3CON1H_IOPS0_MASK                    0x00000100
#define _CCP3CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP3CON1H_IOPS1_POSITION                0x00000009
#define _CCP3CON1H_IOPS1_MASK                    0x00000200
#define _CCP3CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP3CON1H_IOPS2_POSITION                0x0000000A
#define _CCP3CON1H_IOPS2_MASK                    0x00000400
#define _CCP3CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP3CON1H_IOPS3_POSITION                0x0000000B
#define _CCP3CON1H_IOPS3_MASK                    0x00000800
#define _CCP3CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG_POSITION                 0x00000000
#define _CCP3CON2L_ASDG_MASK                     0x000000FF
#define _CCP3CON2L_ASDG_LENGTH                   0x00000008

#define _CCP3CON2L_SSDG_POSITION                 0x0000000C
#define _CCP3CON2L_SSDG_MASK                     0x00001000
#define _CCP3CON2L_SSDG_LENGTH                   0x00000001

#define _CCP3CON2L_ASDGM_POSITION                0x0000000E
#define _CCP3CON2L_ASDGM_MASK                    0x00004000
#define _CCP3CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP3CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP3CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP3CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP3CON2L_ASDG0_POSITION                0x00000000
#define _CCP3CON2L_ASDG0_MASK                    0x00000001
#define _CCP3CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG1_POSITION                0x00000001
#define _CCP3CON2L_ASDG1_MASK                    0x00000002
#define _CCP3CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG2_POSITION                0x00000002
#define _CCP3CON2L_ASDG2_MASK                    0x00000004
#define _CCP3CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG3_POSITION                0x00000003
#define _CCP3CON2L_ASDG3_MASK                    0x00000008
#define _CCP3CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG4_POSITION                0x00000004
#define _CCP3CON2L_ASDG4_MASK                    0x00000010
#define _CCP3CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG5_POSITION                0x00000005
#define _CCP3CON2L_ASDG5_MASK                    0x00000020
#define _CCP3CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG6_POSITION                0x00000006
#define _CCP3CON2L_ASDG6_MASK                    0x00000040
#define _CCP3CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP3CON2L_ASDG7_POSITION                0x00000007
#define _CCP3CON2L_ASDG7_MASK                    0x00000080
#define _CCP3CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP3CON2H_ICS_POSITION                  0x00000000
#define _CCP3CON2H_ICS_MASK                      0x00000007
#define _CCP3CON2H_ICS_LENGTH                    0x00000003

#define _CCP3CON2H_AUXOUT_POSITION               0x00000003
#define _CCP3CON2H_AUXOUT_MASK                   0x00000018
#define _CCP3CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP3CON2H_ICGSM_POSITION                0x00000006
#define _CCP3CON2H_ICGSM_MASK                    0x000000C0
#define _CCP3CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP3CON2H_OCAEN_POSITION                0x00000008
#define _CCP3CON2H_OCAEN_MASK                    0x00000100
#define _CCP3CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP3CON2H_OCBEN_POSITION                0x00000009
#define _CCP3CON2H_OCBEN_MASK                    0x00000200
#define _CCP3CON2H_OCBEN_LENGTH                  0x00000001

#define _CCP3CON2H_OCCEN_POSITION                0x0000000A
#define _CCP3CON2H_OCCEN_MASK                    0x00000400
#define _CCP3CON2H_OCCEN_LENGTH                  0x00000001

#define _CCP3CON2H_OCDEN_POSITION                0x0000000B
#define _CCP3CON2H_OCDEN_MASK                    0x00000800
#define _CCP3CON2H_OCDEN_LENGTH                  0x00000001

#define _CCP3CON2H_OCEEN_POSITION                0x0000000C
#define _CCP3CON2H_OCEEN_MASK                    0x00001000
#define _CCP3CON2H_OCEEN_LENGTH                  0x00000001

#define _CCP3CON2H_OCFEN_POSITION                0x0000000D
#define _CCP3CON2H_OCFEN_MASK                    0x00002000
#define _CCP3CON2H_OCFEN_LENGTH                  0x00000001

#define _CCP3CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP3CON2H_OENSYNC_MASK                  0x00008000
#define _CCP3CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP3CON2H_ICS0_POSITION                 0x00000000
#define _CCP3CON2H_ICS0_MASK                     0x00000001
#define _CCP3CON2H_ICS0_LENGTH                   0x00000001

#define _CCP3CON2H_ICS1_POSITION                 0x00000001
#define _CCP3CON2H_ICS1_MASK                     0x00000002
#define _CCP3CON2H_ICS1_LENGTH                   0x00000001

#define _CCP3CON2H_ICS2_POSITION                 0x00000002
#define _CCP3CON2H_ICS2_MASK                     0x00000004
#define _CCP3CON2H_ICS2_LENGTH                   0x00000001

#define _CCP3CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP3CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP3CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP3CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP3CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP3CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP3CON2H_ICGSM0_POSITION               0x00000006
#define _CCP3CON2H_ICGSM0_MASK                   0x00000040
#define _CCP3CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP3CON2H_ICGSM1_POSITION               0x00000007
#define _CCP3CON2H_ICGSM1_MASK                   0x00000080
#define _CCP3CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP3CON2H_ICSEL_POSITION                0x00000000
#define _CCP3CON2H_ICSEL_MASK                    0x00000007
#define _CCP3CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP3CON2H_ICSEL0_POSITION               0x00000000
#define _CCP3CON2H_ICSEL0_MASK                   0x00000001
#define _CCP3CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP3CON2H_ICSEL1_POSITION               0x00000001
#define _CCP3CON2H_ICSEL1_MASK                   0x00000002
#define _CCP3CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP3CON2H_ICSEL2_POSITION               0x00000002
#define _CCP3CON2H_ICSEL2_MASK                   0x00000004
#define _CCP3CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP3CON3L_DT_POSITION                   0x00000000
#define _CCP3CON3L_DT_MASK                       0x0000003F
#define _CCP3CON3L_DT_LENGTH                     0x00000006

#define _CCP3CON3L_DT0_POSITION                  0x00000000
#define _CCP3CON3L_DT0_MASK                      0x00000001
#define _CCP3CON3L_DT0_LENGTH                    0x00000001

#define _CCP3CON3L_DT1_POSITION                  0x00000001
#define _CCP3CON3L_DT1_MASK                      0x00000002
#define _CCP3CON3L_DT1_LENGTH                    0x00000001

#define _CCP3CON3L_DT2_POSITION                  0x00000002
#define _CCP3CON3L_DT2_MASK                      0x00000004
#define _CCP3CON3L_DT2_LENGTH                    0x00000001

#define _CCP3CON3L_DT3_POSITION                  0x00000003
#define _CCP3CON3L_DT3_MASK                      0x00000008
#define _CCP3CON3L_DT3_LENGTH                    0x00000001

#define _CCP3CON3L_DT4_POSITION                  0x00000004
#define _CCP3CON3L_DT4_MASK                      0x00000010
#define _CCP3CON3L_DT4_LENGTH                    0x00000001

#define _CCP3CON3L_DT5_POSITION                  0x00000005
#define _CCP3CON3L_DT5_MASK                      0x00000020
#define _CCP3CON3L_DT5_LENGTH                    0x00000001

#define _CCP3CON3H_PSSBDF_POSITION               0x00000000
#define _CCP3CON3H_PSSBDF_MASK                   0x00000003
#define _CCP3CON3H_PSSBDF_LENGTH                 0x00000002

#define _CCP3CON3H_PSSACE_POSITION               0x00000002
#define _CCP3CON3H_PSSACE_MASK                   0x0000000C
#define _CCP3CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP3CON3H_POLBDF_POSITION               0x00000004
#define _CCP3CON3H_POLBDF_MASK                   0x00000010
#define _CCP3CON3H_POLBDF_LENGTH                 0x00000001

#define _CCP3CON3H_POLACE_POSITION               0x00000005
#define _CCP3CON3H_POLACE_MASK                   0x00000020
#define _CCP3CON3H_POLACE_LENGTH                 0x00000001

#define _CCP3CON3H_OUTM_POSITION                 0x00000008
#define _CCP3CON3H_OUTM_MASK                     0x00000700
#define _CCP3CON3H_OUTM_LENGTH                   0x00000003

#define _CCP3CON3H_OSCNT_POSITION                0x0000000C
#define _CCP3CON3H_OSCNT_MASK                    0x00007000
#define _CCP3CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP3CON3H_OETRIG_POSITION               0x0000000F
#define _CCP3CON3H_OETRIG_MASK                   0x00008000
#define _CCP3CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP3CON3H_PSSBDF0_POSITION              0x00000000
#define _CCP3CON3H_PSSBDF0_MASK                  0x00000001
#define _CCP3CON3H_PSSBDF0_LENGTH                0x00000001

#define _CCP3CON3H_PSSBDF1_POSITION              0x00000001
#define _CCP3CON3H_PSSBDF1_MASK                  0x00000002
#define _CCP3CON3H_PSSBDF1_LENGTH                0x00000001

#define _CCP3CON3H_PSSACE0_POSITION              0x00000002
#define _CCP3CON3H_PSSACE0_MASK                  0x00000004
#define _CCP3CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP3CON3H_PSSACE1_POSITION              0x00000003
#define _CCP3CON3H_PSSACE1_MASK                  0x00000008
#define _CCP3CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP3CON3H_OUTM0_POSITION                0x00000008
#define _CCP3CON3H_OUTM0_MASK                    0x00000100
#define _CCP3CON3H_OUTM0_LENGTH                  0x00000001

#define _CCP3CON3H_OUTM1_POSITION                0x00000009
#define _CCP3CON3H_OUTM1_MASK                    0x00000200
#define _CCP3CON3H_OUTM1_LENGTH                  0x00000001

#define _CCP3CON3H_OUTM2_POSITION                0x0000000A
#define _CCP3CON3H_OUTM2_MASK                    0x00000400
#define _CCP3CON3H_OUTM2_LENGTH                  0x00000001

#define _CCP3CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP3CON3H_OSCNT0_MASK                   0x00001000
#define _CCP3CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP3CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP3CON3H_OSCNT1_MASK                   0x00002000
#define _CCP3CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP3CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP3CON3H_OSCNT2_MASK                   0x00004000
#define _CCP3CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP3STAT_ICBNE_POSITION                 0x00000000
#define _CCP3STAT_ICBNE_MASK                     0x00000001
#define _CCP3STAT_ICBNE_LENGTH                   0x00000001

#define _CCP3STAT_ICOV_POSITION                  0x00000001
#define _CCP3STAT_ICOV_MASK                      0x00000002
#define _CCP3STAT_ICOV_LENGTH                    0x00000001

#define _CCP3STAT_ICDIS_POSITION                 0x00000002
#define _CCP3STAT_ICDIS_MASK                     0x00000004
#define _CCP3STAT_ICDIS_LENGTH                   0x00000001

#define _CCP3STAT_SCEVT_POSITION                 0x00000003
#define _CCP3STAT_SCEVT_MASK                     0x00000008
#define _CCP3STAT_SCEVT_LENGTH                   0x00000001

#define _CCP3STAT_ASEVT_POSITION                 0x00000004
#define _CCP3STAT_ASEVT_MASK                     0x00000010
#define _CCP3STAT_ASEVT_LENGTH                   0x00000001

#define _CCP3STAT_TRCLR_POSITION                 0x00000005
#define _CCP3STAT_TRCLR_MASK                     0x00000020
#define _CCP3STAT_TRCLR_LENGTH                   0x00000001

#define _CCP3STAT_TRSET_POSITION                 0x00000006
#define _CCP3STAT_TRSET_MASK                     0x00000040
#define _CCP3STAT_TRSET_LENGTH                   0x00000001

#define _CCP3STAT_CCPTRIG_POSITION               0x00000007
#define _CCP3STAT_CCPTRIG_MASK                   0x00000080
#define _CCP3STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP3STAT_ICGARM_POSITION                0x0000000A
#define _CCP3STAT_ICGARM_MASK                    0x00000400
#define _CCP3STAT_ICGARM_LENGTH                  0x00000001

#define _CCP3STAT_TRIG_POSITION                  0x00000007
#define _CCP3STAT_TRIG_MASK                      0x00000080
#define _CCP3STAT_TRIG_LENGTH                    0x00000001

#define _CCP3STATL_ICBNE_POSITION                0x00000000
#define _CCP3STATL_ICBNE_MASK                    0x00000001
#define _CCP3STATL_ICBNE_LENGTH                  0x00000001

#define _CCP3STATL_ICOV_POSITION                 0x00000001
#define _CCP3STATL_ICOV_MASK                     0x00000002
#define _CCP3STATL_ICOV_LENGTH                   0x00000001

#define _CCP3STATL_ICDIS_POSITION                0x00000002
#define _CCP3STATL_ICDIS_MASK                    0x00000004
#define _CCP3STATL_ICDIS_LENGTH                  0x00000001

#define _CCP3STATL_SCEVT_POSITION                0x00000003
#define _CCP3STATL_SCEVT_MASK                    0x00000008
#define _CCP3STATL_SCEVT_LENGTH                  0x00000001

#define _CCP3STATL_ASEVT_POSITION                0x00000004
#define _CCP3STATL_ASEVT_MASK                    0x00000010
#define _CCP3STATL_ASEVT_LENGTH                  0x00000001

#define _CCP3STATL_TRCLR_POSITION                0x00000005
#define _CCP3STATL_TRCLR_MASK                    0x00000020
#define _CCP3STATL_TRCLR_LENGTH                  0x00000001

#define _CCP3STATL_TRSET_POSITION                0x00000006
#define _CCP3STATL_TRSET_MASK                    0x00000040
#define _CCP3STATL_TRSET_LENGTH                  0x00000001

#define _CCP3STATL_CCPTRIG_POSITION              0x00000007
#define _CCP3STATL_CCPTRIG_MASK                  0x00000080
#define _CCP3STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP3STATL_ICGARM_POSITION               0x0000000A
#define _CCP3STATL_ICGARM_MASK                   0x00000400
#define _CCP3STATL_ICGARM_LENGTH                 0x00000001

#define _CCP3STATL_TRIG_POSITION                 0x00000007
#define _CCP3STATL_TRIG_MASK                     0x00000080
#define _CCP3STATL_TRIG_LENGTH                   0x00000001

#define _CCP4CON1L_MOD_POSITION                  0x00000000
#define _CCP4CON1L_MOD_MASK                      0x0000000F
#define _CCP4CON1L_MOD_LENGTH                    0x00000004

#define _CCP4CON1L_CCSEL_POSITION                0x00000004
#define _CCP4CON1L_CCSEL_MASK                    0x00000010
#define _CCP4CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP4CON1L_T32_POSITION                  0x00000005
#define _CCP4CON1L_T32_MASK                      0x00000020
#define _CCP4CON1L_T32_LENGTH                    0x00000001

#define _CCP4CON1L_TMRPS_POSITION                0x00000006
#define _CCP4CON1L_TMRPS_MASK                    0x000000C0
#define _CCP4CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP4CON1L_CLKSEL_POSITION               0x00000008
#define _CCP4CON1L_CLKSEL_MASK                   0x00000700
#define _CCP4CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP4CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP4CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP4CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP4CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP4CON1L_CCPSLP_MASK                   0x00001000
#define _CCP4CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP4CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP4CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP4CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP4CON1L_CCPON_POSITION                0x0000000F
#define _CCP4CON1L_CCPON_MASK                    0x00008000
#define _CCP4CON1L_CCPON_LENGTH                  0x00000001

#define _CCP4CON1L_MOD0_POSITION                 0x00000000
#define _CCP4CON1L_MOD0_MASK                     0x00000001
#define _CCP4CON1L_MOD0_LENGTH                   0x00000001

#define _CCP4CON1L_MOD1_POSITION                 0x00000001
#define _CCP4CON1L_MOD1_MASK                     0x00000002
#define _CCP4CON1L_MOD1_LENGTH                   0x00000001

#define _CCP4CON1L_MOD2_POSITION                 0x00000002
#define _CCP4CON1L_MOD2_MASK                     0x00000004
#define _CCP4CON1L_MOD2_LENGTH                   0x00000001

#define _CCP4CON1L_MOD3_POSITION                 0x00000003
#define _CCP4CON1L_MOD3_MASK                     0x00000008
#define _CCP4CON1L_MOD3_LENGTH                   0x00000001

#define _CCP4CON1L_TMR32_POSITION                0x00000005
#define _CCP4CON1L_TMR32_MASK                    0x00000020
#define _CCP4CON1L_TMR32_LENGTH                  0x00000001

#define _CCP4CON1L_TMRPS0_POSITION               0x00000006
#define _CCP4CON1L_TMRPS0_MASK                   0x00000040
#define _CCP4CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP4CON1L_TMRPS1_POSITION               0x00000007
#define _CCP4CON1L_TMRPS1_MASK                   0x00000080
#define _CCP4CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP4CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP4CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP4CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP4CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP4CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP4CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP4CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP4CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP4CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP4CON1L_CCPMOD_POSITION               0x00000000
#define _CCP4CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP4CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP4CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP4CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP4CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP4CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP4CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP4CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP4CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP4CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP4CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP4CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP4CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP4CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP4CON1H_SYNC_POSITION                 0x00000000
#define _CCP4CON1H_SYNC_MASK                     0x0000001F
#define _CCP4CON1H_SYNC_LENGTH                   0x00000005

#define _CCP4CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP4CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP4CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP4CON1H_ONESHOT_POSITION              0x00000006
#define _CCP4CON1H_ONESHOT_MASK                  0x00000040
#define _CCP4CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP4CON1H_TRIGEN_POSITION               0x00000007
#define _CCP4CON1H_TRIGEN_MASK                   0x00000080
#define _CCP4CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP4CON1H_OPS_POSITION                  0x00000008
#define _CCP4CON1H_OPS_MASK                      0x00000F00
#define _CCP4CON1H_OPS_LENGTH                    0x00000004

#define _CCP4CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP4CON1H_RTRGEN_MASK                   0x00004000
#define _CCP4CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP4CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP4CON1H_OPSSRC_MASK                   0x00008000
#define _CCP4CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP4CON1H_SYNC0_POSITION                0x00000000
#define _CCP4CON1H_SYNC0_MASK                    0x00000001
#define _CCP4CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP4CON1H_SYNC1_POSITION                0x00000001
#define _CCP4CON1H_SYNC1_MASK                    0x00000002
#define _CCP4CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP4CON1H_SYNC2_POSITION                0x00000002
#define _CCP4CON1H_SYNC2_MASK                    0x00000004
#define _CCP4CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP4CON1H_SYNC3_POSITION                0x00000003
#define _CCP4CON1H_SYNC3_MASK                    0x00000008
#define _CCP4CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP4CON1H_SYNC4_POSITION                0x00000004
#define _CCP4CON1H_SYNC4_MASK                    0x00000010
#define _CCP4CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP4CON1H_OPS0_POSITION                 0x00000008
#define _CCP4CON1H_OPS0_MASK                     0x00000100
#define _CCP4CON1H_OPS0_LENGTH                   0x00000001

#define _CCP4CON1H_OPS1_POSITION                 0x00000009
#define _CCP4CON1H_OPS1_MASK                     0x00000200
#define _CCP4CON1H_OPS1_LENGTH                   0x00000001

#define _CCP4CON1H_OPS2_POSITION                 0x0000000A
#define _CCP4CON1H_OPS2_MASK                     0x00000400
#define _CCP4CON1H_OPS2_LENGTH                   0x00000001

#define _CCP4CON1H_OPS3_POSITION                 0x0000000B
#define _CCP4CON1H_OPS3_MASK                     0x00000800
#define _CCP4CON1H_OPS3_LENGTH                   0x00000001

#define _CCP4CON1H_OPSRC_POSITION                0x0000000F
#define _CCP4CON1H_OPSRC_MASK                    0x00008000
#define _CCP4CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP4CON1H_IOPS_POSITION                 0x00000008
#define _CCP4CON1H_IOPS_MASK                     0x00000F00
#define _CCP4CON1H_IOPS_LENGTH                   0x00000004

#define _CCP4CON1H_IOPS0_POSITION                0x00000008
#define _CCP4CON1H_IOPS0_MASK                    0x00000100
#define _CCP4CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP4CON1H_IOPS1_POSITION                0x00000009
#define _CCP4CON1H_IOPS1_MASK                    0x00000200
#define _CCP4CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP4CON1H_IOPS2_POSITION                0x0000000A
#define _CCP4CON1H_IOPS2_MASK                    0x00000400
#define _CCP4CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP4CON1H_IOPS3_POSITION                0x0000000B
#define _CCP4CON1H_IOPS3_MASK                    0x00000800
#define _CCP4CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG_POSITION                 0x00000000
#define _CCP4CON2L_ASDG_MASK                     0x000000FF
#define _CCP4CON2L_ASDG_LENGTH                   0x00000008

#define _CCP4CON2L_SSDG_POSITION                 0x0000000C
#define _CCP4CON2L_SSDG_MASK                     0x00001000
#define _CCP4CON2L_SSDG_LENGTH                   0x00000001

#define _CCP4CON2L_ASDGM_POSITION                0x0000000E
#define _CCP4CON2L_ASDGM_MASK                    0x00004000
#define _CCP4CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP4CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP4CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP4CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP4CON2L_ASDG0_POSITION                0x00000000
#define _CCP4CON2L_ASDG0_MASK                    0x00000001
#define _CCP4CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG1_POSITION                0x00000001
#define _CCP4CON2L_ASDG1_MASK                    0x00000002
#define _CCP4CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG2_POSITION                0x00000002
#define _CCP4CON2L_ASDG2_MASK                    0x00000004
#define _CCP4CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG3_POSITION                0x00000003
#define _CCP4CON2L_ASDG3_MASK                    0x00000008
#define _CCP4CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG4_POSITION                0x00000004
#define _CCP4CON2L_ASDG4_MASK                    0x00000010
#define _CCP4CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG5_POSITION                0x00000005
#define _CCP4CON2L_ASDG5_MASK                    0x00000020
#define _CCP4CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG6_POSITION                0x00000006
#define _CCP4CON2L_ASDG6_MASK                    0x00000040
#define _CCP4CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP4CON2L_ASDG7_POSITION                0x00000007
#define _CCP4CON2L_ASDG7_MASK                    0x00000080
#define _CCP4CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP4CON2H_ICS_POSITION                  0x00000000
#define _CCP4CON2H_ICS_MASK                      0x00000007
#define _CCP4CON2H_ICS_LENGTH                    0x00000003

#define _CCP4CON2H_AUXOUT_POSITION               0x00000003
#define _CCP4CON2H_AUXOUT_MASK                   0x00000018
#define _CCP4CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP4CON2H_ICGSM_POSITION                0x00000006
#define _CCP4CON2H_ICGSM_MASK                    0x000000C0
#define _CCP4CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP4CON2H_OCAEN_POSITION                0x00000008
#define _CCP4CON2H_OCAEN_MASK                    0x00000100
#define _CCP4CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP4CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP4CON2H_OENSYNC_MASK                  0x00008000
#define _CCP4CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP4CON2H_ICS0_POSITION                 0x00000000
#define _CCP4CON2H_ICS0_MASK                     0x00000001
#define _CCP4CON2H_ICS0_LENGTH                   0x00000001

#define _CCP4CON2H_ICS1_POSITION                 0x00000001
#define _CCP4CON2H_ICS1_MASK                     0x00000002
#define _CCP4CON2H_ICS1_LENGTH                   0x00000001

#define _CCP4CON2H_ICS2_POSITION                 0x00000002
#define _CCP4CON2H_ICS2_MASK                     0x00000004
#define _CCP4CON2H_ICS2_LENGTH                   0x00000001

#define _CCP4CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP4CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP4CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP4CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP4CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP4CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP4CON2H_ICGSM0_POSITION               0x00000006
#define _CCP4CON2H_ICGSM0_MASK                   0x00000040
#define _CCP4CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP4CON2H_ICGSM1_POSITION               0x00000007
#define _CCP4CON2H_ICGSM1_MASK                   0x00000080
#define _CCP4CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP4CON2H_ICSEL_POSITION                0x00000000
#define _CCP4CON2H_ICSEL_MASK                    0x00000007
#define _CCP4CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP4CON2H_ICSEL0_POSITION               0x00000000
#define _CCP4CON2H_ICSEL0_MASK                   0x00000001
#define _CCP4CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP4CON2H_ICSEL1_POSITION               0x00000001
#define _CCP4CON2H_ICSEL1_MASK                   0x00000002
#define _CCP4CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP4CON2H_ICSEL2_POSITION               0x00000002
#define _CCP4CON2H_ICSEL2_MASK                   0x00000004
#define _CCP4CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP4CON3H_PSSACE_POSITION               0x00000002
#define _CCP4CON3H_PSSACE_MASK                   0x0000000C
#define _CCP4CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP4CON3H_POLACE_POSITION               0x00000005
#define _CCP4CON3H_POLACE_MASK                   0x00000020
#define _CCP4CON3H_POLACE_LENGTH                 0x00000001

#define _CCP4CON3H_OSCNT_POSITION                0x0000000C
#define _CCP4CON3H_OSCNT_MASK                    0x00007000
#define _CCP4CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP4CON3H_OETRIG_POSITION               0x0000000F
#define _CCP4CON3H_OETRIG_MASK                   0x00008000
#define _CCP4CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP4CON3H_PSSACE0_POSITION              0x00000002
#define _CCP4CON3H_PSSACE0_MASK                  0x00000004
#define _CCP4CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP4CON3H_PSSACE1_POSITION              0x00000003
#define _CCP4CON3H_PSSACE1_MASK                  0x00000008
#define _CCP4CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP4CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP4CON3H_OSCNT0_MASK                   0x00001000
#define _CCP4CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP4CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP4CON3H_OSCNT1_MASK                   0x00002000
#define _CCP4CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP4CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP4CON3H_OSCNT2_MASK                   0x00004000
#define _CCP4CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP4STAT_ICBNE_POSITION                 0x00000000
#define _CCP4STAT_ICBNE_MASK                     0x00000001
#define _CCP4STAT_ICBNE_LENGTH                   0x00000001

#define _CCP4STAT_ICOV_POSITION                  0x00000001
#define _CCP4STAT_ICOV_MASK                      0x00000002
#define _CCP4STAT_ICOV_LENGTH                    0x00000001

#define _CCP4STAT_ICDIS_POSITION                 0x00000002
#define _CCP4STAT_ICDIS_MASK                     0x00000004
#define _CCP4STAT_ICDIS_LENGTH                   0x00000001

#define _CCP4STAT_SCEVT_POSITION                 0x00000003
#define _CCP4STAT_SCEVT_MASK                     0x00000008
#define _CCP4STAT_SCEVT_LENGTH                   0x00000001

#define _CCP4STAT_ASEVT_POSITION                 0x00000004
#define _CCP4STAT_ASEVT_MASK                     0x00000010
#define _CCP4STAT_ASEVT_LENGTH                   0x00000001

#define _CCP4STAT_TRCLR_POSITION                 0x00000005
#define _CCP4STAT_TRCLR_MASK                     0x00000020
#define _CCP4STAT_TRCLR_LENGTH                   0x00000001

#define _CCP4STAT_TRSET_POSITION                 0x00000006
#define _CCP4STAT_TRSET_MASK                     0x00000040
#define _CCP4STAT_TRSET_LENGTH                   0x00000001

#define _CCP4STAT_CCPTRIG_POSITION               0x00000007
#define _CCP4STAT_CCPTRIG_MASK                   0x00000080
#define _CCP4STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP4STAT_ICGARM_POSITION                0x0000000A
#define _CCP4STAT_ICGARM_MASK                    0x00000400
#define _CCP4STAT_ICGARM_LENGTH                  0x00000001

#define _CCP4STAT_TRIG_POSITION                  0x00000007
#define _CCP4STAT_TRIG_MASK                      0x00000080
#define _CCP4STAT_TRIG_LENGTH                    0x00000001

#define _CCP4STATL_ICBNE_POSITION                0x00000000
#define _CCP4STATL_ICBNE_MASK                    0x00000001
#define _CCP4STATL_ICBNE_LENGTH                  0x00000001

#define _CCP4STATL_ICOV_POSITION                 0x00000001
#define _CCP4STATL_ICOV_MASK                     0x00000002
#define _CCP4STATL_ICOV_LENGTH                   0x00000001

#define _CCP4STATL_ICDIS_POSITION                0x00000002
#define _CCP4STATL_ICDIS_MASK                    0x00000004
#define _CCP4STATL_ICDIS_LENGTH                  0x00000001

#define _CCP4STATL_SCEVT_POSITION                0x00000003
#define _CCP4STATL_SCEVT_MASK                    0x00000008
#define _CCP4STATL_SCEVT_LENGTH                  0x00000001

#define _CCP4STATL_ASEVT_POSITION                0x00000004
#define _CCP4STATL_ASEVT_MASK                    0x00000010
#define _CCP4STATL_ASEVT_LENGTH                  0x00000001

#define _CCP4STATL_TRCLR_POSITION                0x00000005
#define _CCP4STATL_TRCLR_MASK                    0x00000020
#define _CCP4STATL_TRCLR_LENGTH                  0x00000001

#define _CCP4STATL_TRSET_POSITION                0x00000006
#define _CCP4STATL_TRSET_MASK                    0x00000040
#define _CCP4STATL_TRSET_LENGTH                  0x00000001

#define _CCP4STATL_CCPTRIG_POSITION              0x00000007
#define _CCP4STATL_CCPTRIG_MASK                  0x00000080
#define _CCP4STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP4STATL_ICGARM_POSITION               0x0000000A
#define _CCP4STATL_ICGARM_MASK                   0x00000400
#define _CCP4STATL_ICGARM_LENGTH                 0x00000001

#define _CCP4STATL_TRIG_POSITION                 0x00000007
#define _CCP4STATL_TRIG_MASK                     0x00000080
#define _CCP4STATL_TRIG_LENGTH                   0x00000001

#define _CCP5CON1L_MOD_POSITION                  0x00000000
#define _CCP5CON1L_MOD_MASK                      0x0000000F
#define _CCP5CON1L_MOD_LENGTH                    0x00000004

#define _CCP5CON1L_CCSEL_POSITION                0x00000004
#define _CCP5CON1L_CCSEL_MASK                    0x00000010
#define _CCP5CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP5CON1L_T32_POSITION                  0x00000005
#define _CCP5CON1L_T32_MASK                      0x00000020
#define _CCP5CON1L_T32_LENGTH                    0x00000001

#define _CCP5CON1L_TMRPS_POSITION                0x00000006
#define _CCP5CON1L_TMRPS_MASK                    0x000000C0
#define _CCP5CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP5CON1L_CLKSEL_POSITION               0x00000008
#define _CCP5CON1L_CLKSEL_MASK                   0x00000700
#define _CCP5CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP5CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP5CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP5CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP5CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP5CON1L_CCPSLP_MASK                   0x00001000
#define _CCP5CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP5CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP5CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP5CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP5CON1L_CCPON_POSITION                0x0000000F
#define _CCP5CON1L_CCPON_MASK                    0x00008000
#define _CCP5CON1L_CCPON_LENGTH                  0x00000001

#define _CCP5CON1L_MOD0_POSITION                 0x00000000
#define _CCP5CON1L_MOD0_MASK                     0x00000001
#define _CCP5CON1L_MOD0_LENGTH                   0x00000001

#define _CCP5CON1L_MOD1_POSITION                 0x00000001
#define _CCP5CON1L_MOD1_MASK                     0x00000002
#define _CCP5CON1L_MOD1_LENGTH                   0x00000001

#define _CCP5CON1L_MOD2_POSITION                 0x00000002
#define _CCP5CON1L_MOD2_MASK                     0x00000004
#define _CCP5CON1L_MOD2_LENGTH                   0x00000001

#define _CCP5CON1L_MOD3_POSITION                 0x00000003
#define _CCP5CON1L_MOD3_MASK                     0x00000008
#define _CCP5CON1L_MOD3_LENGTH                   0x00000001

#define _CCP5CON1L_TMR32_POSITION                0x00000005
#define _CCP5CON1L_TMR32_MASK                    0x00000020
#define _CCP5CON1L_TMR32_LENGTH                  0x00000001

#define _CCP5CON1L_TMRPS0_POSITION               0x00000006
#define _CCP5CON1L_TMRPS0_MASK                   0x00000040
#define _CCP5CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP5CON1L_TMRPS1_POSITION               0x00000007
#define _CCP5CON1L_TMRPS1_MASK                   0x00000080
#define _CCP5CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP5CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP5CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP5CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP5CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP5CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP5CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP5CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP5CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP5CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP5CON1L_CCPMOD_POSITION               0x00000000
#define _CCP5CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP5CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP5CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP5CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP5CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP5CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP5CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP5CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP5CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP5CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP5CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP5CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP5CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP5CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP5CON1H_SYNC_POSITION                 0x00000000
#define _CCP5CON1H_SYNC_MASK                     0x0000001F
#define _CCP5CON1H_SYNC_LENGTH                   0x00000005

#define _CCP5CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP5CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP5CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP5CON1H_ONESHOT_POSITION              0x00000006
#define _CCP5CON1H_ONESHOT_MASK                  0x00000040
#define _CCP5CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP5CON1H_TRIGEN_POSITION               0x00000007
#define _CCP5CON1H_TRIGEN_MASK                   0x00000080
#define _CCP5CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP5CON1H_OPS_POSITION                  0x00000008
#define _CCP5CON1H_OPS_MASK                      0x00000F00
#define _CCP5CON1H_OPS_LENGTH                    0x00000004

#define _CCP5CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP5CON1H_RTRGEN_MASK                   0x00004000
#define _CCP5CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP5CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP5CON1H_OPSSRC_MASK                   0x00008000
#define _CCP5CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP5CON1H_SYNC0_POSITION                0x00000000
#define _CCP5CON1H_SYNC0_MASK                    0x00000001
#define _CCP5CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP5CON1H_SYNC1_POSITION                0x00000001
#define _CCP5CON1H_SYNC1_MASK                    0x00000002
#define _CCP5CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP5CON1H_SYNC2_POSITION                0x00000002
#define _CCP5CON1H_SYNC2_MASK                    0x00000004
#define _CCP5CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP5CON1H_SYNC3_POSITION                0x00000003
#define _CCP5CON1H_SYNC3_MASK                    0x00000008
#define _CCP5CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP5CON1H_SYNC4_POSITION                0x00000004
#define _CCP5CON1H_SYNC4_MASK                    0x00000010
#define _CCP5CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP5CON1H_OPS0_POSITION                 0x00000008
#define _CCP5CON1H_OPS0_MASK                     0x00000100
#define _CCP5CON1H_OPS0_LENGTH                   0x00000001

#define _CCP5CON1H_OPS1_POSITION                 0x00000009
#define _CCP5CON1H_OPS1_MASK                     0x00000200
#define _CCP5CON1H_OPS1_LENGTH                   0x00000001

#define _CCP5CON1H_OPS2_POSITION                 0x0000000A
#define _CCP5CON1H_OPS2_MASK                     0x00000400
#define _CCP5CON1H_OPS2_LENGTH                   0x00000001

#define _CCP5CON1H_OPS3_POSITION                 0x0000000B
#define _CCP5CON1H_OPS3_MASK                     0x00000800
#define _CCP5CON1H_OPS3_LENGTH                   0x00000001

#define _CCP5CON1H_OPSRC_POSITION                0x0000000F
#define _CCP5CON1H_OPSRC_MASK                    0x00008000
#define _CCP5CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP5CON1H_IOPS_POSITION                 0x00000008
#define _CCP5CON1H_IOPS_MASK                     0x00000F00
#define _CCP5CON1H_IOPS_LENGTH                   0x00000004

#define _CCP5CON1H_IOPS0_POSITION                0x00000008
#define _CCP5CON1H_IOPS0_MASK                    0x00000100
#define _CCP5CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP5CON1H_IOPS1_POSITION                0x00000009
#define _CCP5CON1H_IOPS1_MASK                    0x00000200
#define _CCP5CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP5CON1H_IOPS2_POSITION                0x0000000A
#define _CCP5CON1H_IOPS2_MASK                    0x00000400
#define _CCP5CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP5CON1H_IOPS3_POSITION                0x0000000B
#define _CCP5CON1H_IOPS3_MASK                    0x00000800
#define _CCP5CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG_POSITION                 0x00000000
#define _CCP5CON2L_ASDG_MASK                     0x000000FF
#define _CCP5CON2L_ASDG_LENGTH                   0x00000008

#define _CCP5CON2L_SSDG_POSITION                 0x0000000C
#define _CCP5CON2L_SSDG_MASK                     0x00001000
#define _CCP5CON2L_SSDG_LENGTH                   0x00000001

#define _CCP5CON2L_ASDGM_POSITION                0x0000000E
#define _CCP5CON2L_ASDGM_MASK                    0x00004000
#define _CCP5CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP5CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP5CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP5CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP5CON2L_ASDG0_POSITION                0x00000000
#define _CCP5CON2L_ASDG0_MASK                    0x00000001
#define _CCP5CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG1_POSITION                0x00000001
#define _CCP5CON2L_ASDG1_MASK                    0x00000002
#define _CCP5CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG2_POSITION                0x00000002
#define _CCP5CON2L_ASDG2_MASK                    0x00000004
#define _CCP5CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG3_POSITION                0x00000003
#define _CCP5CON2L_ASDG3_MASK                    0x00000008
#define _CCP5CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG4_POSITION                0x00000004
#define _CCP5CON2L_ASDG4_MASK                    0x00000010
#define _CCP5CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG5_POSITION                0x00000005
#define _CCP5CON2L_ASDG5_MASK                    0x00000020
#define _CCP5CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG6_POSITION                0x00000006
#define _CCP5CON2L_ASDG6_MASK                    0x00000040
#define _CCP5CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP5CON2L_ASDG7_POSITION                0x00000007
#define _CCP5CON2L_ASDG7_MASK                    0x00000080
#define _CCP5CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP5CON2H_ICS_POSITION                  0x00000000
#define _CCP5CON2H_ICS_MASK                      0x00000007
#define _CCP5CON2H_ICS_LENGTH                    0x00000003

#define _CCP5CON2H_AUXOUT_POSITION               0x00000003
#define _CCP5CON2H_AUXOUT_MASK                   0x00000018
#define _CCP5CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP5CON2H_ICGSM_POSITION                0x00000006
#define _CCP5CON2H_ICGSM_MASK                    0x000000C0
#define _CCP5CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP5CON2H_OCAEN_POSITION                0x00000008
#define _CCP5CON2H_OCAEN_MASK                    0x00000100
#define _CCP5CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP5CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP5CON2H_OENSYNC_MASK                  0x00008000
#define _CCP5CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP5CON2H_ICS0_POSITION                 0x00000000
#define _CCP5CON2H_ICS0_MASK                     0x00000001
#define _CCP5CON2H_ICS0_LENGTH                   0x00000001

#define _CCP5CON2H_ICS1_POSITION                 0x00000001
#define _CCP5CON2H_ICS1_MASK                     0x00000002
#define _CCP5CON2H_ICS1_LENGTH                   0x00000001

#define _CCP5CON2H_ICS2_POSITION                 0x00000002
#define _CCP5CON2H_ICS2_MASK                     0x00000004
#define _CCP5CON2H_ICS2_LENGTH                   0x00000001

#define _CCP5CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP5CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP5CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP5CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP5CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP5CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP5CON2H_ICGSM0_POSITION               0x00000006
#define _CCP5CON2H_ICGSM0_MASK                   0x00000040
#define _CCP5CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP5CON2H_ICGSM1_POSITION               0x00000007
#define _CCP5CON2H_ICGSM1_MASK                   0x00000080
#define _CCP5CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP5CON2H_ICSEL_POSITION                0x00000000
#define _CCP5CON2H_ICSEL_MASK                    0x00000007
#define _CCP5CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP5CON2H_ICSEL0_POSITION               0x00000000
#define _CCP5CON2H_ICSEL0_MASK                   0x00000001
#define _CCP5CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP5CON2H_ICSEL1_POSITION               0x00000001
#define _CCP5CON2H_ICSEL1_MASK                   0x00000002
#define _CCP5CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP5CON2H_ICSEL2_POSITION               0x00000002
#define _CCP5CON2H_ICSEL2_MASK                   0x00000004
#define _CCP5CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP5CON3H_PSSACE_POSITION               0x00000002
#define _CCP5CON3H_PSSACE_MASK                   0x0000000C
#define _CCP5CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP5CON3H_POLACE_POSITION               0x00000005
#define _CCP5CON3H_POLACE_MASK                   0x00000020
#define _CCP5CON3H_POLACE_LENGTH                 0x00000001

#define _CCP5CON3H_OSCNT_POSITION                0x0000000C
#define _CCP5CON3H_OSCNT_MASK                    0x00007000
#define _CCP5CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP5CON3H_OETRIG_POSITION               0x0000000F
#define _CCP5CON3H_OETRIG_MASK                   0x00008000
#define _CCP5CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP5CON3H_PSSACE0_POSITION              0x00000002
#define _CCP5CON3H_PSSACE0_MASK                  0x00000004
#define _CCP5CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP5CON3H_PSSACE1_POSITION              0x00000003
#define _CCP5CON3H_PSSACE1_MASK                  0x00000008
#define _CCP5CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP5CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP5CON3H_OSCNT0_MASK                   0x00001000
#define _CCP5CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP5CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP5CON3H_OSCNT1_MASK                   0x00002000
#define _CCP5CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP5CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP5CON3H_OSCNT2_MASK                   0x00004000
#define _CCP5CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP5STAT_ICBNE_POSITION                 0x00000000
#define _CCP5STAT_ICBNE_MASK                     0x00000001
#define _CCP5STAT_ICBNE_LENGTH                   0x00000001

#define _CCP5STAT_ICOV_POSITION                  0x00000001
#define _CCP5STAT_ICOV_MASK                      0x00000002
#define _CCP5STAT_ICOV_LENGTH                    0x00000001

#define _CCP5STAT_ICDIS_POSITION                 0x00000002
#define _CCP5STAT_ICDIS_MASK                     0x00000004
#define _CCP5STAT_ICDIS_LENGTH                   0x00000001

#define _CCP5STAT_SCEVT_POSITION                 0x00000003
#define _CCP5STAT_SCEVT_MASK                     0x00000008
#define _CCP5STAT_SCEVT_LENGTH                   0x00000001

#define _CCP5STAT_ASEVT_POSITION                 0x00000004
#define _CCP5STAT_ASEVT_MASK                     0x00000010
#define _CCP5STAT_ASEVT_LENGTH                   0x00000001

#define _CCP5STAT_TRCLR_POSITION                 0x00000005
#define _CCP5STAT_TRCLR_MASK                     0x00000020
#define _CCP5STAT_TRCLR_LENGTH                   0x00000001

#define _CCP5STAT_TRSET_POSITION                 0x00000006
#define _CCP5STAT_TRSET_MASK                     0x00000040
#define _CCP5STAT_TRSET_LENGTH                   0x00000001

#define _CCP5STAT_CCPTRIG_POSITION               0x00000007
#define _CCP5STAT_CCPTRIG_MASK                   0x00000080
#define _CCP5STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP5STAT_ICGARM_POSITION                0x0000000A
#define _CCP5STAT_ICGARM_MASK                    0x00000400
#define _CCP5STAT_ICGARM_LENGTH                  0x00000001

#define _CCP5STAT_TRIG_POSITION                  0x00000007
#define _CCP5STAT_TRIG_MASK                      0x00000080
#define _CCP5STAT_TRIG_LENGTH                    0x00000001

#define _CCP5STATL_ICBNE_POSITION                0x00000000
#define _CCP5STATL_ICBNE_MASK                    0x00000001
#define _CCP5STATL_ICBNE_LENGTH                  0x00000001

#define _CCP5STATL_ICOV_POSITION                 0x00000001
#define _CCP5STATL_ICOV_MASK                     0x00000002
#define _CCP5STATL_ICOV_LENGTH                   0x00000001

#define _CCP5STATL_ICDIS_POSITION                0x00000002
#define _CCP5STATL_ICDIS_MASK                    0x00000004
#define _CCP5STATL_ICDIS_LENGTH                  0x00000001

#define _CCP5STATL_SCEVT_POSITION                0x00000003
#define _CCP5STATL_SCEVT_MASK                    0x00000008
#define _CCP5STATL_SCEVT_LENGTH                  0x00000001

#define _CCP5STATL_ASEVT_POSITION                0x00000004
#define _CCP5STATL_ASEVT_MASK                    0x00000010
#define _CCP5STATL_ASEVT_LENGTH                  0x00000001

#define _CCP5STATL_TRCLR_POSITION                0x00000005
#define _CCP5STATL_TRCLR_MASK                    0x00000020
#define _CCP5STATL_TRCLR_LENGTH                  0x00000001

#define _CCP5STATL_TRSET_POSITION                0x00000006
#define _CCP5STATL_TRSET_MASK                    0x00000040
#define _CCP5STATL_TRSET_LENGTH                  0x00000001

#define _CCP5STATL_CCPTRIG_POSITION              0x00000007
#define _CCP5STATL_CCPTRIG_MASK                  0x00000080
#define _CCP5STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP5STATL_ICGARM_POSITION               0x0000000A
#define _CCP5STATL_ICGARM_MASK                   0x00000400
#define _CCP5STATL_ICGARM_LENGTH                 0x00000001

#define _CCP5STATL_TRIG_POSITION                 0x00000007
#define _CCP5STATL_TRIG_MASK                     0x00000080
#define _CCP5STATL_TRIG_LENGTH                   0x00000001

#define _SPI1BUF_SSPBUF_POSITION                 0x00000000
#define _SPI1BUF_SSPBUF_MASK                     0x000000FF
#define _SPI1BUF_SSPBUF_LENGTH                   0x00000008

#define _SPI1BUF_SPI1BUF_POSITION                0x00000000
#define _SPI1BUF_SPI1BUF_MASK                    0x000000FF
#define _SPI1BUF_SPI1BUF_LENGTH                  0x00000008

#define _SSP1BUF_SSPBUF_POSITION                 0x00000000
#define _SSP1BUF_SSPBUF_MASK                     0x000000FF
#define _SSP1BUF_SSPBUF_LENGTH                   0x00000008

#define _SSP1BUF_SPI1BUF_POSITION                0x00000000
#define _SSP1BUF_SPI1BUF_MASK                    0x000000FF
#define _SSP1BUF_SPI1BUF_LENGTH                  0x00000008

#define _SSP1CON1_SSPM_POSITION                  0x00000000
#define _SSP1CON1_SSPM_MASK                      0x0000000F
#define _SSP1CON1_SSPM_LENGTH                    0x00000004

#define _SSP1CON1_CKP_POSITION                   0x00000004
#define _SSP1CON1_CKP_MASK                       0x00000010
#define _SSP1CON1_CKP_LENGTH                     0x00000001

#define _SSP1CON1_SSPEN_POSITION                 0x00000005
#define _SSP1CON1_SSPEN_MASK                     0x00000020
#define _SSP1CON1_SSPEN_LENGTH                   0x00000001

#define _SSP1CON1_SSPOV_POSITION                 0x00000006
#define _SSP1CON1_SSPOV_MASK                     0x00000040
#define _SSP1CON1_SSPOV_LENGTH                   0x00000001

#define _SSP1CON1_WCOL_POSITION                  0x00000007
#define _SSP1CON1_WCOL_MASK                      0x00000080
#define _SSP1CON1_WCOL_LENGTH                    0x00000001

#define _SSP1CON1_SSPM0_POSITION                 0x00000000
#define _SSP1CON1_SSPM0_MASK                     0x00000001
#define _SSP1CON1_SSPM0_LENGTH                   0x00000001

#define _SSP1CON1_SSPM1_POSITION                 0x00000001
#define _SSP1CON1_SSPM1_MASK                     0x00000002
#define _SSP1CON1_SSPM1_LENGTH                   0x00000001

#define _SSP1CON1_SSPM2_POSITION                 0x00000002
#define _SSP1CON1_SSPM2_MASK                     0x00000004
#define _SSP1CON1_SSPM2_LENGTH                   0x00000001

#define _SSP1CON1_SSPM3_POSITION                 0x00000003
#define _SSP1CON1_SSPM3_MASK                     0x00000008
#define _SSP1CON1_SSPM3_LENGTH                   0x00000001

#define _SSP1CON2_SEN_POSITION                   0x00000000
#define _SSP1CON2_SEN_MASK                       0x00000001
#define _SSP1CON2_SEN_LENGTH                     0x00000001

#define _SSP1CON2_RSEN_POSITION                  0x00000001
#define _SSP1CON2_RSEN_MASK                      0x00000002
#define _SSP1CON2_RSEN_LENGTH                    0x00000001

#define _SSP1CON2_PEN_POSITION                   0x00000002
#define _SSP1CON2_PEN_MASK                       0x00000004
#define _SSP1CON2_PEN_LENGTH                     0x00000001

#define _SSP1CON2_RCEN_POSITION                  0x00000003
#define _SSP1CON2_RCEN_MASK                      0x00000008
#define _SSP1CON2_RCEN_LENGTH                    0x00000001

#define _SSP1CON2_ACKEN_POSITION                 0x00000004
#define _SSP1CON2_ACKEN_MASK                     0x00000010
#define _SSP1CON2_ACKEN_LENGTH                   0x00000001

#define _SSP1CON2_ACKDT_POSITION                 0x00000005
#define _SSP1CON2_ACKDT_MASK                     0x00000020
#define _SSP1CON2_ACKDT_LENGTH                   0x00000001

#define _SSP1CON2_ACKSTAT_POSITION               0x00000006
#define _SSP1CON2_ACKSTAT_MASK                   0x00000040
#define _SSP1CON2_ACKSTAT_LENGTH                 0x00000001

#define _SSP1CON2_GCEN_POSITION                  0x00000007
#define _SSP1CON2_GCEN_MASK                      0x00000080
#define _SSP1CON2_GCEN_LENGTH                    0x00000001

#define _SSP1CON2_ADMSK_POSITION                 0x00000001
#define _SSP1CON2_ADMSK_MASK                     0x0000003E
#define _SSP1CON2_ADMSK_LENGTH                   0x00000005

#define _SSP1CON2_ADMSK1_POSITION                0x00000001
#define _SSP1CON2_ADMSK1_MASK                    0x00000002
#define _SSP1CON2_ADMSK1_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK2_POSITION                0x00000002
#define _SSP1CON2_ADMSK2_MASK                    0x00000004
#define _SSP1CON2_ADMSK2_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK3_POSITION                0x00000003
#define _SSP1CON2_ADMSK3_MASK                    0x00000008
#define _SSP1CON2_ADMSK3_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK4_POSITION                0x00000004
#define _SSP1CON2_ADMSK4_MASK                    0x00000010
#define _SSP1CON2_ADMSK4_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK5_POSITION                0x00000005
#define _SSP1CON2_ADMSK5_MASK                    0x00000020
#define _SSP1CON2_ADMSK5_LENGTH                  0x00000001

#define _SSP1CON3_DHEN_POSITION                  0x00000000
#define _SSP1CON3_DHEN_MASK                      0x00000001
#define _SSP1CON3_DHEN_LENGTH                    0x00000001

#define _SSP1CON3_AHEN_POSITION                  0x00000001
#define _SSP1CON3_AHEN_MASK                      0x00000002
#define _SSP1CON3_AHEN_LENGTH                    0x00000001

#define _SSP1CON3_SBCDE_POSITION                 0x00000002
#define _SSP1CON3_SBCDE_MASK                     0x00000004
#define _SSP1CON3_SBCDE_LENGTH                   0x00000001

#define _SSP1CON3_SDAHT_POSITION                 0x00000003
#define _SSP1CON3_SDAHT_MASK                     0x00000008
#define _SSP1CON3_SDAHT_LENGTH                   0x00000001

#define _SSP1CON3_BOEN_POSITION                  0x00000004
#define _SSP1CON3_BOEN_MASK                      0x00000010
#define _SSP1CON3_BOEN_LENGTH                    0x00000001

#define _SSP1CON3_SCIE_POSITION                  0x00000005
#define _SSP1CON3_SCIE_MASK                      0x00000020
#define _SSP1CON3_SCIE_LENGTH                    0x00000001

#define _SSP1CON3_PCIE_POSITION                  0x00000006
#define _SSP1CON3_PCIE_MASK                      0x00000040
#define _SSP1CON3_PCIE_LENGTH                    0x00000001

#define _SSP1CON3_ACKTIM_POSITION                0x00000007
#define _SSP1CON3_ACKTIM_MASK                    0x00000080
#define _SSP1CON3_ACKTIM_LENGTH                  0x00000001

#define _SSP1STAT_BF_POSITION                    0x00000000
#define _SSP1STAT_BF_MASK                        0x00000001
#define _SSP1STAT_BF_LENGTH                      0x00000001

#define _SSP1STAT_UA_POSITION                    0x00000001
#define _SSP1STAT_UA_MASK                        0x00000002
#define _SSP1STAT_UA_LENGTH                      0x00000001

#define _SSP1STAT_R_NOT_W_POSITION               0x00000002
#define _SSP1STAT_R_NOT_W_MASK                   0x00000004
#define _SSP1STAT_R_NOT_W_LENGTH                 0x00000001

#define _SSP1STAT_S_POSITION                     0x00000003
#define _SSP1STAT_S_MASK                         0x00000008
#define _SSP1STAT_S_LENGTH                       0x00000001

#define _SSP1STAT_P_POSITION                     0x00000004
#define _SSP1STAT_P_MASK                         0x00000010
#define _SSP1STAT_P_LENGTH                       0x00000001

#define _SSP1STAT_D_NOT_A_POSITION               0x00000005
#define _SSP1STAT_D_NOT_A_MASK                   0x00000020
#define _SSP1STAT_D_NOT_A_LENGTH                 0x00000001

#define _SSP1STAT_CKE_POSITION                   0x00000006
#define _SSP1STAT_CKE_MASK                       0x00000040
#define _SSP1STAT_CKE_LENGTH                     0x00000001

#define _SSP1STAT_SMP_POSITION                   0x00000007
#define _SSP1STAT_SMP_MASK                       0x00000080
#define _SSP1STAT_SMP_LENGTH                     0x00000001

#define _SSP1STAT_R_W_POSITION                   0x00000002
#define _SSP1STAT_R_W_MASK                       0x00000004
#define _SSP1STAT_R_W_LENGTH                     0x00000001

#define _SSP1STAT_D_A_POSITION                   0x00000005
#define _SSP1STAT_D_A_MASK                       0x00000020
#define _SSP1STAT_D_A_LENGTH                     0x00000001

#define _SSP1STAT_NOT_W_POSITION                 0x00000002
#define _SSP1STAT_NOT_W_MASK                     0x00000004
#define _SSP1STAT_NOT_W_LENGTH                   0x00000001

#define _SSP1STAT_NOT_A_POSITION                 0x00000005
#define _SSP1STAT_NOT_A_MASK                     0x00000020
#define _SSP1STAT_NOT_A_LENGTH                   0x00000001

#define _SSP1STAT_NOT_WRITE_POSITION             0x00000002
#define _SSP1STAT_NOT_WRITE_MASK                 0x00000004
#define _SSP1STAT_NOT_WRITE_LENGTH               0x00000001

#define _SSP1STAT_NOT_ADDRESS_POSITION           0x00000005
#define _SSP1STAT_NOT_ADDRESS_MASK               0x00000020
#define _SSP1STAT_NOT_ADDRESS_LENGTH             0x00000001

#define _SSP1STAT_READ_WRITE_POSITION            0x00000002
#define _SSP1STAT_READ_WRITE_MASK                0x00000004
#define _SSP1STAT_READ_WRITE_LENGTH              0x00000001

#define _SSP1STAT_DATA_ADDRESS_POSITION          0x00000005
#define _SSP1STAT_DATA_ADDRESS_MASK              0x00000020
#define _SSP1STAT_DATA_ADDRESS_LENGTH            0x00000001

#define _SSP1STAT_I2C_READ_POSITION              0x00000002
#define _SSP1STAT_I2C_READ_MASK                  0x00000004
#define _SSP1STAT_I2C_READ_LENGTH                0x00000001

#define _SSP1STAT_I2C_START_POSITION             0x00000003
#define _SSP1STAT_I2C_START_MASK                 0x00000008
#define _SSP1STAT_I2C_START_LENGTH               0x00000001

#define _SSP1STAT_I2C_STOP_POSITION              0x00000004
#define _SSP1STAT_I2C_STOP_MASK                  0x00000010
#define _SSP1STAT_I2C_STOP_LENGTH                0x00000001

#define _SSP1STAT_I2C_DAT_POSITION               0x00000005
#define _SSP1STAT_I2C_DAT_MASK                   0x00000020
#define _SSP1STAT_I2C_DAT_LENGTH                 0x00000001

#define _I2C1ADD_SSPADD_POSITION                 0x00000000
#define _I2C1ADD_SSPADD_MASK                     0x000000FF
#define _I2C1ADD_SSPADD_LENGTH                   0x00000008

#define _I2C1ADD_I2CADD_POSITION                 0x00000000
#define _I2C1ADD_I2CADD_MASK                     0x000000FF
#define _I2C1ADD_I2CADD_LENGTH                   0x00000008

#define _I2C1BRG_SSPADD_POSITION                 0x00000000
#define _I2C1BRG_SSPADD_MASK                     0x000000FF
#define _I2C1BRG_SSPADD_LENGTH                   0x00000008

#define _I2C1BRG_I2CADD_POSITION                 0x00000000
#define _I2C1BRG_I2CADD_MASK                     0x000000FF
#define _I2C1BRG_I2CADD_LENGTH                   0x00000008

#define _SSP1ADD_SSPADD_POSITION                 0x00000000
#define _SSP1ADD_SSPADD_MASK                     0x000000FF
#define _SSP1ADD_SSPADD_LENGTH                   0x00000008

#define _SSP1ADD_I2CADD_POSITION                 0x00000000
#define _SSP1ADD_I2CADD_MASK                     0x000000FF
#define _SSP1ADD_I2CADD_LENGTH                   0x00000008

#define _SSP1BRG_SSPADD_POSITION                 0x00000000
#define _SSP1BRG_SSPADD_MASK                     0x000000FF
#define _SSP1BRG_SSPADD_LENGTH                   0x00000008

#define _SSP1BRG_I2CADD_POSITION                 0x00000000
#define _SSP1BRG_I2CADD_MASK                     0x000000FF
#define _SSP1BRG_I2CADD_LENGTH                   0x00000008

#define _I2C1MSK_MSK0_POSITION                   0x00000000
#define _I2C1MSK_MSK0_MASK                       0x00000001
#define _I2C1MSK_MSK0_LENGTH                     0x00000001

#define _I2C1MSK_MSK1_POSITION                   0x00000001
#define _I2C1MSK_MSK1_MASK                       0x00000002
#define _I2C1MSK_MSK1_LENGTH                     0x00000001

#define _I2C1MSK_MSK2_POSITION                   0x00000002
#define _I2C1MSK_MSK2_MASK                       0x00000004
#define _I2C1MSK_MSK2_LENGTH                     0x00000001

#define _I2C1MSK_MSK3_POSITION                   0x00000003
#define _I2C1MSK_MSK3_MASK                       0x00000008
#define _I2C1MSK_MSK3_LENGTH                     0x00000001

#define _I2C1MSK_MSK4_POSITION                   0x00000004
#define _I2C1MSK_MSK4_MASK                       0x00000010
#define _I2C1MSK_MSK4_LENGTH                     0x00000001

#define _I2C1MSK_MSK5_POSITION                   0x00000005
#define _I2C1MSK_MSK5_MASK                       0x00000020
#define _I2C1MSK_MSK5_LENGTH                     0x00000001

#define _I2C1MSK_MSK6_POSITION                   0x00000006
#define _I2C1MSK_MSK6_MASK                       0x00000040
#define _I2C1MSK_MSK6_LENGTH                     0x00000001

#define _I2C1MSK_MSK7_POSITION                   0x00000007
#define _I2C1MSK_MSK7_MASK                       0x00000080
#define _I2C1MSK_MSK7_LENGTH                     0x00000001

#define _I2C1MSK_AMSK_POSITION                   0x00000000
#define _I2C1MSK_AMSK_MASK                       0x000000FF
#define _I2C1MSK_AMSK_LENGTH                     0x00000008

#define _SSP1MSK_MSK0_POSITION                   0x00000000
#define _SSP1MSK_MSK0_MASK                       0x00000001
#define _SSP1MSK_MSK0_LENGTH                     0x00000001

#define _SSP1MSK_MSK1_POSITION                   0x00000001
#define _SSP1MSK_MSK1_MASK                       0x00000002
#define _SSP1MSK_MSK1_LENGTH                     0x00000001

#define _SSP1MSK_MSK2_POSITION                   0x00000002
#define _SSP1MSK_MSK2_MASK                       0x00000004
#define _SSP1MSK_MSK2_LENGTH                     0x00000001

#define _SSP1MSK_MSK3_POSITION                   0x00000003
#define _SSP1MSK_MSK3_MASK                       0x00000008
#define _SSP1MSK_MSK3_LENGTH                     0x00000001

#define _SSP1MSK_MSK4_POSITION                   0x00000004
#define _SSP1MSK_MSK4_MASK                       0x00000010
#define _SSP1MSK_MSK4_LENGTH                     0x00000001

#define _SSP1MSK_MSK5_POSITION                   0x00000005
#define _SSP1MSK_MSK5_MASK                       0x00000020
#define _SSP1MSK_MSK5_LENGTH                     0x00000001

#define _SSP1MSK_MSK6_POSITION                   0x00000006
#define _SSP1MSK_MSK6_MASK                       0x00000040
#define _SSP1MSK_MSK6_LENGTH                     0x00000001

#define _SSP1MSK_MSK7_POSITION                   0x00000007
#define _SSP1MSK_MSK7_MASK                       0x00000080
#define _SSP1MSK_MSK7_LENGTH                     0x00000001

#define _SSP1MSK_AMSK_POSITION                   0x00000000
#define _SSP1MSK_AMSK_MASK                       0x000000FF
#define _SSP1MSK_AMSK_LENGTH                     0x00000008

#define _SPI2BUF_SSPBUF_POSITION                 0x00000000
#define _SPI2BUF_SSPBUF_MASK                     0x000000FF
#define _SPI2BUF_SSPBUF_LENGTH                   0x00000008

#define _SPI2BUF_SPI2BUF_POSITION                0x00000000
#define _SPI2BUF_SPI2BUF_MASK                    0x000000FF
#define _SPI2BUF_SPI2BUF_LENGTH                  0x00000008

#define _SSP2BUF_SSPBUF_POSITION                 0x00000000
#define _SSP2BUF_SSPBUF_MASK                     0x000000FF
#define _SSP2BUF_SSPBUF_LENGTH                   0x00000008

#define _SSP2BUF_SPI2BUF_POSITION                0x00000000
#define _SSP2BUF_SPI2BUF_MASK                    0x000000FF
#define _SSP2BUF_SPI2BUF_LENGTH                  0x00000008

#define _SSP2CON1_SSPM_POSITION                  0x00000000
#define _SSP2CON1_SSPM_MASK                      0x0000000F
#define _SSP2CON1_SSPM_LENGTH                    0x00000004

#define _SSP2CON1_CKP_POSITION                   0x00000004
#define _SSP2CON1_CKP_MASK                       0x00000010
#define _SSP2CON1_CKP_LENGTH                     0x00000001

#define _SSP2CON1_SSPEN_POSITION                 0x00000005
#define _SSP2CON1_SSPEN_MASK                     0x00000020
#define _SSP2CON1_SSPEN_LENGTH                   0x00000001

#define _SSP2CON1_SSPOV_POSITION                 0x00000006
#define _SSP2CON1_SSPOV_MASK                     0x00000040
#define _SSP2CON1_SSPOV_LENGTH                   0x00000001

#define _SSP2CON1_WCOL_POSITION                  0x00000007
#define _SSP2CON1_WCOL_MASK                      0x00000080
#define _SSP2CON1_WCOL_LENGTH                    0x00000001

#define _SSP2CON1_SSPM0_POSITION                 0x00000000
#define _SSP2CON1_SSPM0_MASK                     0x00000001
#define _SSP2CON1_SSPM0_LENGTH                   0x00000001

#define _SSP2CON1_SSPM1_POSITION                 0x00000001
#define _SSP2CON1_SSPM1_MASK                     0x00000002
#define _SSP2CON1_SSPM1_LENGTH                   0x00000001

#define _SSP2CON1_SSPM2_POSITION                 0x00000002
#define _SSP2CON1_SSPM2_MASK                     0x00000004
#define _SSP2CON1_SSPM2_LENGTH                   0x00000001

#define _SSP2CON1_SSPM3_POSITION                 0x00000003
#define _SSP2CON1_SSPM3_MASK                     0x00000008
#define _SSP2CON1_SSPM3_LENGTH                   0x00000001

#define _SSP2CON2_SEN_POSITION                   0x00000000
#define _SSP2CON2_SEN_MASK                       0x00000001
#define _SSP2CON2_SEN_LENGTH                     0x00000001

#define _SSP2CON2_RSEN_POSITION                  0x00000001
#define _SSP2CON2_RSEN_MASK                      0x00000002
#define _SSP2CON2_RSEN_LENGTH                    0x00000001

#define _SSP2CON2_PEN_POSITION                   0x00000002
#define _SSP2CON2_PEN_MASK                       0x00000004
#define _SSP2CON2_PEN_LENGTH                     0x00000001

#define _SSP2CON2_RCEN_POSITION                  0x00000003
#define _SSP2CON2_RCEN_MASK                      0x00000008
#define _SSP2CON2_RCEN_LENGTH                    0x00000001

#define _SSP2CON2_ACKEN_POSITION                 0x00000004
#define _SSP2CON2_ACKEN_MASK                     0x00000010
#define _SSP2CON2_ACKEN_LENGTH                   0x00000001

#define _SSP2CON2_ACKDT_POSITION                 0x00000005
#define _SSP2CON2_ACKDT_MASK                     0x00000020
#define _SSP2CON2_ACKDT_LENGTH                   0x00000001

#define _SSP2CON2_ACKSTAT_POSITION               0x00000006
#define _SSP2CON2_ACKSTAT_MASK                   0x00000040
#define _SSP2CON2_ACKSTAT_LENGTH                 0x00000001

#define _SSP2CON2_GCEN_POSITION                  0x00000007
#define _SSP2CON2_GCEN_MASK                      0x00000080
#define _SSP2CON2_GCEN_LENGTH                    0x00000001

#define _SSP2CON2_ADMSK_POSITION                 0x00000001
#define _SSP2CON2_ADMSK_MASK                     0x0000003E
#define _SSP2CON2_ADMSK_LENGTH                   0x00000005

#define _SSP2CON2_ADMSK1_POSITION                0x00000001
#define _SSP2CON2_ADMSK1_MASK                    0x00000002
#define _SSP2CON2_ADMSK1_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK2_POSITION                0x00000002
#define _SSP2CON2_ADMSK2_MASK                    0x00000004
#define _SSP2CON2_ADMSK2_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK3_POSITION                0x00000003
#define _SSP2CON2_ADMSK3_MASK                    0x00000008
#define _SSP2CON2_ADMSK3_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK4_POSITION                0x00000004
#define _SSP2CON2_ADMSK4_MASK                    0x00000010
#define _SSP2CON2_ADMSK4_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK5_POSITION                0x00000005
#define _SSP2CON2_ADMSK5_MASK                    0x00000020
#define _SSP2CON2_ADMSK5_LENGTH                  0x00000001

#define _SSP2CON3_DHEN_POSITION                  0x00000000
#define _SSP2CON3_DHEN_MASK                      0x00000001
#define _SSP2CON3_DHEN_LENGTH                    0x00000001

#define _SSP2CON3_AHEN_POSITION                  0x00000001
#define _SSP2CON3_AHEN_MASK                      0x00000002
#define _SSP2CON3_AHEN_LENGTH                    0x00000001

#define _SSP2CON3_SBCDE_POSITION                 0x00000002
#define _SSP2CON3_SBCDE_MASK                     0x00000004
#define _SSP2CON3_SBCDE_LENGTH                   0x00000001

#define _SSP2CON3_SDAHT_POSITION                 0x00000003
#define _SSP2CON3_SDAHT_MASK                     0x00000008
#define _SSP2CON3_SDAHT_LENGTH                   0x00000001

#define _SSP2CON3_BOEN_POSITION                  0x00000004
#define _SSP2CON3_BOEN_MASK                      0x00000010
#define _SSP2CON3_BOEN_LENGTH                    0x00000001

#define _SSP2CON3_SCIE_POSITION                  0x00000005
#define _SSP2CON3_SCIE_MASK                      0x00000020
#define _SSP2CON3_SCIE_LENGTH                    0x00000001

#define _SSP2CON3_PCIE_POSITION                  0x00000006
#define _SSP2CON3_PCIE_MASK                      0x00000040
#define _SSP2CON3_PCIE_LENGTH                    0x00000001

#define _SSP2CON3_ACKTIM_POSITION                0x00000007
#define _SSP2CON3_ACKTIM_MASK                    0x00000080
#define _SSP2CON3_ACKTIM_LENGTH                  0x00000001

#define _SSP2STAT_BF_POSITION                    0x00000000
#define _SSP2STAT_BF_MASK                        0x00000001
#define _SSP2STAT_BF_LENGTH                      0x00000001

#define _SSP2STAT_UA_POSITION                    0x00000001
#define _SSP2STAT_UA_MASK                        0x00000002
#define _SSP2STAT_UA_LENGTH                      0x00000001

#define _SSP2STAT_R_NOT_W_POSITION               0x00000002
#define _SSP2STAT_R_NOT_W_MASK                   0x00000004
#define _SSP2STAT_R_NOT_W_LENGTH                 0x00000001

#define _SSP2STAT_S_POSITION                     0x00000003
#define _SSP2STAT_S_MASK                         0x00000008
#define _SSP2STAT_S_LENGTH                       0x00000001

#define _SSP2STAT_P_POSITION                     0x00000004
#define _SSP2STAT_P_MASK                         0x00000010
#define _SSP2STAT_P_LENGTH                       0x00000001

#define _SSP2STAT_D_NOT_A_POSITION               0x00000005
#define _SSP2STAT_D_NOT_A_MASK                   0x00000020
#define _SSP2STAT_D_NOT_A_LENGTH                 0x00000001

#define _SSP2STAT_CKE_POSITION                   0x00000006
#define _SSP2STAT_CKE_MASK                       0x00000040
#define _SSP2STAT_CKE_LENGTH                     0x00000001

#define _SSP2STAT_SMP_POSITION                   0x00000007
#define _SSP2STAT_SMP_MASK                       0x00000080
#define _SSP2STAT_SMP_LENGTH                     0x00000001

#define _SSP2STAT_R_W_POSITION                   0x00000002
#define _SSP2STAT_R_W_MASK                       0x00000004
#define _SSP2STAT_R_W_LENGTH                     0x00000001

#define _SSP2STAT_D_A_POSITION                   0x00000005
#define _SSP2STAT_D_A_MASK                       0x00000020
#define _SSP2STAT_D_A_LENGTH                     0x00000001

#define _SSP2STAT_NOT_W_POSITION                 0x00000002
#define _SSP2STAT_NOT_W_MASK                     0x00000004
#define _SSP2STAT_NOT_W_LENGTH                   0x00000001

#define _SSP2STAT_NOT_A_POSITION                 0x00000005
#define _SSP2STAT_NOT_A_MASK                     0x00000020
#define _SSP2STAT_NOT_A_LENGTH                   0x00000001

#define _SSP2STAT_NOT_WRITE_POSITION             0x00000002
#define _SSP2STAT_NOT_WRITE_MASK                 0x00000004
#define _SSP2STAT_NOT_WRITE_LENGTH               0x00000001

#define _SSP2STAT_NOT_ADDRESS_POSITION           0x00000005
#define _SSP2STAT_NOT_ADDRESS_MASK               0x00000020
#define _SSP2STAT_NOT_ADDRESS_LENGTH             0x00000001

#define _SSP2STAT_READ_WRITE_POSITION            0x00000002
#define _SSP2STAT_READ_WRITE_MASK                0x00000004
#define _SSP2STAT_READ_WRITE_LENGTH              0x00000001

#define _SSP2STAT_DATA_ADDRESS_POSITION          0x00000005
#define _SSP2STAT_DATA_ADDRESS_MASK              0x00000020
#define _SSP2STAT_DATA_ADDRESS_LENGTH            0x00000001

#define _SSP2STAT_I2C_READ_POSITION              0x00000002
#define _SSP2STAT_I2C_READ_MASK                  0x00000004
#define _SSP2STAT_I2C_READ_LENGTH                0x00000001

#define _SSP2STAT_I2C_START_POSITION             0x00000003
#define _SSP2STAT_I2C_START_MASK                 0x00000008
#define _SSP2STAT_I2C_START_LENGTH               0x00000001

#define _SSP2STAT_I2C_STOP_POSITION              0x00000004
#define _SSP2STAT_I2C_STOP_MASK                  0x00000010
#define _SSP2STAT_I2C_STOP_LENGTH                0x00000001

#define _SSP2STAT_I2C_DAT_POSITION               0x00000005
#define _SSP2STAT_I2C_DAT_MASK                   0x00000020
#define _SSP2STAT_I2C_DAT_LENGTH                 0x00000001

#define _I2C2ADD_SSPADD_POSITION                 0x00000000
#define _I2C2ADD_SSPADD_MASK                     0x000000FF
#define _I2C2ADD_SSPADD_LENGTH                   0x00000008

#define _I2C2ADD_I2CADD_POSITION                 0x00000000
#define _I2C2ADD_I2CADD_MASK                     0x000000FF
#define _I2C2ADD_I2CADD_LENGTH                   0x00000008

#define _I2C2BRG_SSPADD_POSITION                 0x00000000
#define _I2C2BRG_SSPADD_MASK                     0x000000FF
#define _I2C2BRG_SSPADD_LENGTH                   0x00000008

#define _I2C2BRG_I2CADD_POSITION                 0x00000000
#define _I2C2BRG_I2CADD_MASK                     0x000000FF
#define _I2C2BRG_I2CADD_LENGTH                   0x00000008

#define _SSP2ADD_SSPADD_POSITION                 0x00000000
#define _SSP2ADD_SSPADD_MASK                     0x000000FF
#define _SSP2ADD_SSPADD_LENGTH                   0x00000008

#define _SSP2ADD_I2CADD_POSITION                 0x00000000
#define _SSP2ADD_I2CADD_MASK                     0x000000FF
#define _SSP2ADD_I2CADD_LENGTH                   0x00000008

#define _SSP2BRG_SSPADD_POSITION                 0x00000000
#define _SSP2BRG_SSPADD_MASK                     0x000000FF
#define _SSP2BRG_SSPADD_LENGTH                   0x00000008

#define _SSP2BRG_I2CADD_POSITION                 0x00000000
#define _SSP2BRG_I2CADD_MASK                     0x000000FF
#define _SSP2BRG_I2CADD_LENGTH                   0x00000008

#define _I2C2MSK_MSK0_POSITION                   0x00000000
#define _I2C2MSK_MSK0_MASK                       0x00000001
#define _I2C2MSK_MSK0_LENGTH                     0x00000001

#define _I2C2MSK_MSK1_POSITION                   0x00000001
#define _I2C2MSK_MSK1_MASK                       0x00000002
#define _I2C2MSK_MSK1_LENGTH                     0x00000001

#define _I2C2MSK_MSK2_POSITION                   0x00000002
#define _I2C2MSK_MSK2_MASK                       0x00000004
#define _I2C2MSK_MSK2_LENGTH                     0x00000001

#define _I2C2MSK_MSK3_POSITION                   0x00000003
#define _I2C2MSK_MSK3_MASK                       0x00000008
#define _I2C2MSK_MSK3_LENGTH                     0x00000001

#define _I2C2MSK_MSK4_POSITION                   0x00000004
#define _I2C2MSK_MSK4_MASK                       0x00000010
#define _I2C2MSK_MSK4_LENGTH                     0x00000001

#define _I2C2MSK_MSK5_POSITION                   0x00000005
#define _I2C2MSK_MSK5_MASK                       0x00000020
#define _I2C2MSK_MSK5_LENGTH                     0x00000001

#define _I2C2MSK_MSK6_POSITION                   0x00000006
#define _I2C2MSK_MSK6_MASK                       0x00000040
#define _I2C2MSK_MSK6_LENGTH                     0x00000001

#define _I2C2MSK_MSK7_POSITION                   0x00000007
#define _I2C2MSK_MSK7_MASK                       0x00000080
#define _I2C2MSK_MSK7_LENGTH                     0x00000001

#define _I2C2MSK_AMSK_POSITION                   0x00000000
#define _I2C2MSK_AMSK_MASK                       0x000000FF
#define _I2C2MSK_AMSK_LENGTH                     0x00000008

#define _SSP2MSK_MSK0_POSITION                   0x00000000
#define _SSP2MSK_MSK0_MASK                       0x00000001
#define _SSP2MSK_MSK0_LENGTH                     0x00000001

#define _SSP2MSK_MSK1_POSITION                   0x00000001
#define _SSP2MSK_MSK1_MASK                       0x00000002
#define _SSP2MSK_MSK1_LENGTH                     0x00000001

#define _SSP2MSK_MSK2_POSITION                   0x00000002
#define _SSP2MSK_MSK2_MASK                       0x00000004
#define _SSP2MSK_MSK2_LENGTH                     0x00000001

#define _SSP2MSK_MSK3_POSITION                   0x00000003
#define _SSP2MSK_MSK3_MASK                       0x00000008
#define _SSP2MSK_MSK3_LENGTH                     0x00000001

#define _SSP2MSK_MSK4_POSITION                   0x00000004
#define _SSP2MSK_MSK4_MASK                       0x00000010
#define _SSP2MSK_MSK4_LENGTH                     0x00000001

#define _SSP2MSK_MSK5_POSITION                   0x00000005
#define _SSP2MSK_MSK5_MASK                       0x00000020
#define _SSP2MSK_MSK5_LENGTH                     0x00000001

#define _SSP2MSK_MSK6_POSITION                   0x00000006
#define _SSP2MSK_MSK6_MASK                       0x00000040
#define _SSP2MSK_MSK6_LENGTH                     0x00000001

#define _SSP2MSK_MSK7_POSITION                   0x00000007
#define _SSP2MSK_MSK7_MASK                       0x00000080
#define _SSP2MSK_MSK7_LENGTH                     0x00000001

#define _SSP2MSK_AMSK_POSITION                   0x00000000
#define _SSP2MSK_AMSK_MASK                       0x000000FF
#define _SSP2MSK_AMSK_LENGTH                     0x00000008

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

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

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

#define _U1STA_TXINV_POSITION                    0x0000000E
#define _U1STA_TXINV_MASK                        0x00004000
#define _U1STA_TXINV_LENGTH                      0x00000001

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

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

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

#define _U2STA_TXINV_POSITION                    0x0000000E
#define _U2STA_TXINV_MASK                        0x00004000
#define _U2STA_TXINV_LENGTH                      0x00000001

#define _AMP1CON_PINSEL_POSITION                 0x00000000
#define _AMP1CON_PINSEL_MASK                     0x00000007
#define _AMP1CON_PINSEL_LENGTH                   0x00000003

#define _AMP1CON_NINSEL_POSITION                 0x00000003
#define _AMP1CON_NINSEL_MASK                     0x00000038
#define _AMP1CON_NINSEL_LENGTH                   0x00000003

#define _AMP1CON_SPDSEL_POSITION                 0x00000007
#define _AMP1CON_SPDSEL_MASK                     0x00000080
#define _AMP1CON_SPDSEL_LENGTH                   0x00000001

#define _AMP1CON_AMPSLP_POSITION                 0x0000000C
#define _AMP1CON_AMPSLP_MASK                     0x00001000
#define _AMP1CON_AMPSLP_LENGTH                   0x00000001

#define _AMP1CON_AMPSIDL_POSITION                0x0000000D
#define _AMP1CON_AMPSIDL_MASK                    0x00002000
#define _AMP1CON_AMPSIDL_LENGTH                  0x00000001

#define _AMP1CON_AMPEN_POSITION                  0x0000000F
#define _AMP1CON_AMPEN_MASK                      0x00008000
#define _AMP1CON_AMPEN_LENGTH                    0x00000001

#define _AMP1CON_PINSEL0_POSITION                0x00000000
#define _AMP1CON_PINSEL0_MASK                    0x00000001
#define _AMP1CON_PINSEL0_LENGTH                  0x00000001

#define _AMP1CON_PINSEL1_POSITION                0x00000001
#define _AMP1CON_PINSEL1_MASK                    0x00000002
#define _AMP1CON_PINSEL1_LENGTH                  0x00000001

#define _AMP1CON_PINSEL2_POSITION                0x00000002
#define _AMP1CON_PINSEL2_MASK                    0x00000004
#define _AMP1CON_PINSEL2_LENGTH                  0x00000001

#define _AMP1CON_NINSEL0_POSITION                0x00000003
#define _AMP1CON_NINSEL0_MASK                    0x00000008
#define _AMP1CON_NINSEL0_LENGTH                  0x00000001

#define _AMP1CON_NINSEL1_POSITION                0x00000004
#define _AMP1CON_NINSEL1_MASK                    0x00000010
#define _AMP1CON_NINSEL1_LENGTH                  0x00000001

#define _AMP1CON_NINSEL2_POSITION                0x00000005
#define _AMP1CON_NINSEL2_MASK                    0x00000020
#define _AMP1CON_NINSEL2_LENGTH                  0x00000001

#define _AMP2CON_PINSEL_POSITION                 0x00000000
#define _AMP2CON_PINSEL_MASK                     0x00000007
#define _AMP2CON_PINSEL_LENGTH                   0x00000003

#define _AMP2CON_NINSEL_POSITION                 0x00000003
#define _AMP2CON_NINSEL_MASK                     0x00000038
#define _AMP2CON_NINSEL_LENGTH                   0x00000003

#define _AMP2CON_SPDSEL_POSITION                 0x00000007
#define _AMP2CON_SPDSEL_MASK                     0x00000080
#define _AMP2CON_SPDSEL_LENGTH                   0x00000001

#define _AMP2CON_AMPSLP_POSITION                 0x0000000C
#define _AMP2CON_AMPSLP_MASK                     0x00001000
#define _AMP2CON_AMPSLP_LENGTH                   0x00000001

#define _AMP2CON_AMPSIDL_POSITION                0x0000000D
#define _AMP2CON_AMPSIDL_MASK                    0x00002000
#define _AMP2CON_AMPSIDL_LENGTH                  0x00000001

#define _AMP2CON_AMPEN_POSITION                  0x0000000F
#define _AMP2CON_AMPEN_MASK                      0x00008000
#define _AMP2CON_AMPEN_LENGTH                    0x00000001

#define _AMP2CON_PINSEL0_POSITION                0x00000000
#define _AMP2CON_PINSEL0_MASK                    0x00000001
#define _AMP2CON_PINSEL0_LENGTH                  0x00000001

#define _AMP2CON_PINSEL1_POSITION                0x00000001
#define _AMP2CON_PINSEL1_MASK                    0x00000002
#define _AMP2CON_PINSEL1_LENGTH                  0x00000001

#define _AMP2CON_PINSEL2_POSITION                0x00000002
#define _AMP2CON_PINSEL2_MASK                    0x00000004
#define _AMP2CON_PINSEL2_LENGTH                  0x00000001

#define _AMP2CON_NINSEL0_POSITION                0x00000003
#define _AMP2CON_NINSEL0_MASK                    0x00000008
#define _AMP2CON_NINSEL0_LENGTH                  0x00000001

#define _AMP2CON_NINSEL1_POSITION                0x00000004
#define _AMP2CON_NINSEL1_MASK                    0x00000010
#define _AMP2CON_NINSEL1_LENGTH                  0x00000001

#define _AMP2CON_NINSEL2_POSITION                0x00000005
#define _AMP2CON_NINSEL2_MASK                    0x00000020
#define _AMP2CON_NINSEL2_LENGTH                  0x00000001

#define _DAC1CON_DACREF_POSITION                 0x00000000
#define _DAC1CON_DACREF_MASK                     0x00000003
#define _DAC1CON_DACREF_LENGTH                   0x00000002

#define _DAC1CON_DACTSEL_POSITION                0x00000002
#define _DAC1CON_DACTSEL_MASK                    0x0000007C
#define _DAC1CON_DACTSEL_LENGTH                  0x00000005

#define _DAC1CON_DACOE_POSITION                  0x00000007
#define _DAC1CON_DACOE_MASK                      0x00000080
#define _DAC1CON_DACOE_LENGTH                    0x00000001

#define _DAC1CON_DACTRIG_POSITION                0x00000008
#define _DAC1CON_DACTRIG_MASK                    0x00000100
#define _DAC1CON_DACTRIG_LENGTH                  0x00000001

#define _DAC1CON_SRDIS_POSITION                  0x00000009
#define _DAC1CON_SRDIS_MASK                      0x00000200
#define _DAC1CON_SRDIS_LENGTH                    0x00000001

#define _DAC1CON_DACFM_POSITION                  0x0000000B
#define _DAC1CON_DACFM_MASK                      0x00000800
#define _DAC1CON_DACFM_LENGTH                    0x00000001

#define _DAC1CON_DACSLP_POSITION                 0x0000000C
#define _DAC1CON_DACSLP_MASK                     0x00001000
#define _DAC1CON_DACSLP_LENGTH                   0x00000001

#define _DAC1CON_DACSIDL_POSITION                0x0000000D
#define _DAC1CON_DACSIDL_MASK                    0x00002000
#define _DAC1CON_DACSIDL_LENGTH                  0x00000001

#define _DAC1CON_DACEN_POSITION                  0x0000000F
#define _DAC1CON_DACEN_MASK                      0x00008000
#define _DAC1CON_DACEN_LENGTH                    0x00000001

#define _DAC1CON_REFSEL0_POSITION                0x00000000
#define _DAC1CON_REFSEL0_MASK                    0x00000001
#define _DAC1CON_REFSEL0_LENGTH                  0x00000001

#define _DAC1CON_REFSEL1_POSITION                0x00000001
#define _DAC1CON_REFSEL1_MASK                    0x00000002
#define _DAC1CON_REFSEL1_LENGTH                  0x00000001

#define _DAC1CON_DACTSEL0_POSITION               0x00000002
#define _DAC1CON_DACTSEL0_MASK                   0x00000004
#define _DAC1CON_DACTSEL0_LENGTH                 0x00000001

#define _DAC1CON_DACTSEL1_POSITION               0x00000003
#define _DAC1CON_DACTSEL1_MASK                   0x00000008
#define _DAC1CON_DACTSEL1_LENGTH                 0x00000001

#define _DAC1CON_DACTSEL2_POSITION               0x00000004
#define _DAC1CON_DACTSEL2_MASK                   0x00000010
#define _DAC1CON_DACTSEL2_LENGTH                 0x00000001

#define _DAC1CON_DACTSEL3_POSITION               0x00000005
#define _DAC1CON_DACTSEL3_MASK                   0x00000020
#define _DAC1CON_DACTSEL3_LENGTH                 0x00000001

#define _DAC1CON_DACTSEL4_POSITION               0x00000006
#define _DAC1CON_DACTSEL4_MASK                   0x00000040
#define _DAC1CON_DACTSEL4_LENGTH                 0x00000001

#define _DAC2CON_DACREF_POSITION                 0x00000000
#define _DAC2CON_DACREF_MASK                     0x00000003
#define _DAC2CON_DACREF_LENGTH                   0x00000002

#define _DAC2CON_DACTSEL_POSITION                0x00000002
#define _DAC2CON_DACTSEL_MASK                    0x0000007C
#define _DAC2CON_DACTSEL_LENGTH                  0x00000005

#define _DAC2CON_DACOE_POSITION                  0x00000007
#define _DAC2CON_DACOE_MASK                      0x00000080
#define _DAC2CON_DACOE_LENGTH                    0x00000001

#define _DAC2CON_DACTRIG_POSITION                0x00000008
#define _DAC2CON_DACTRIG_MASK                    0x00000100
#define _DAC2CON_DACTRIG_LENGTH                  0x00000001

#define _DAC2CON_SRDIS_POSITION                  0x00000009
#define _DAC2CON_SRDIS_MASK                      0x00000200
#define _DAC2CON_SRDIS_LENGTH                    0x00000001

#define _DAC2CON_DACFM_POSITION                  0x0000000B
#define _DAC2CON_DACFM_MASK                      0x00000800
#define _DAC2CON_DACFM_LENGTH                    0x00000001

#define _DAC2CON_DACSLP_POSITION                 0x0000000C
#define _DAC2CON_DACSLP_MASK                     0x00001000
#define _DAC2CON_DACSLP_LENGTH                   0x00000001

#define _DAC2CON_DACSIDL_POSITION                0x0000000D
#define _DAC2CON_DACSIDL_MASK                    0x00002000
#define _DAC2CON_DACSIDL_LENGTH                  0x00000001

#define _DAC2CON_DACEN_POSITION                  0x0000000F
#define _DAC2CON_DACEN_MASK                      0x00008000
#define _DAC2CON_DACEN_LENGTH                    0x00000001

#define _DAC2CON_REFSEL0_POSITION                0x00000000
#define _DAC2CON_REFSEL0_MASK                    0x00000001
#define _DAC2CON_REFSEL0_LENGTH                  0x00000001

#define _DAC2CON_REFSEL1_POSITION                0x00000001
#define _DAC2CON_REFSEL1_MASK                    0x00000002
#define _DAC2CON_REFSEL1_LENGTH                  0x00000001

#define _DAC2CON_DACTSEL0_POSITION               0x00000002
#define _DAC2CON_DACTSEL0_MASK                   0x00000004
#define _DAC2CON_DACTSEL0_LENGTH                 0x00000001

#define _DAC2CON_DACTSEL1_POSITION               0x00000003
#define _DAC2CON_DACTSEL1_MASK                   0x00000008
#define _DAC2CON_DACTSEL1_LENGTH                 0x00000001

#define _DAC2CON_DACTSEL2_POSITION               0x00000004
#define _DAC2CON_DACTSEL2_MASK                   0x00000010
#define _DAC2CON_DACTSEL2_LENGTH                 0x00000001

#define _DAC2CON_DACTSEL3_POSITION               0x00000005
#define _DAC2CON_DACTSEL3_MASK                   0x00000020
#define _DAC2CON_DACTSEL3_LENGTH                 0x00000001

#define _DAC2CON_DACTSEL4_POSITION               0x00000006
#define _DAC2CON_DACTSEL4_MASK                   0x00000040
#define _DAC2CON_DACTSEL4_LENGTH                 0x00000001

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

#define _TRISA_TRISA7_POSITION                   0x00000007
#define _TRISA_TRISA7_MASK                       0x00000080
#define _TRISA_TRISA7_LENGTH                     0x00000001

#define _TRISA_TRISA8_POSITION                   0x00000008
#define _TRISA_TRISA8_MASK                       0x00000100
#define _TRISA_TRISA8_LENGTH                     0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_TRISA10_POSITION                  0x0000000A
#define _TRISA_TRISA10_MASK                      0x00000400
#define _TRISA_TRISA10_LENGTH                    0x00000001

#define _TRISA_TRISA11_POSITION                  0x0000000B
#define _TRISA_TRISA11_MASK                      0x00000800
#define _TRISA_TRISA11_LENGTH                    0x00000001

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

#define _PORTA_RA5_POSITION                      0x00000005
#define _PORTA_RA5_MASK                          0x00000020
#define _PORTA_RA5_LENGTH                        0x00000001

#define _PORTA_RA7_POSITION                      0x00000007
#define _PORTA_RA7_MASK                          0x00000080
#define _PORTA_RA7_LENGTH                        0x00000001

#define _PORTA_RA8_POSITION                      0x00000008
#define _PORTA_RA8_MASK                          0x00000100
#define _PORTA_RA8_LENGTH                        0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_RA10_POSITION                     0x0000000A
#define _PORTA_RA10_MASK                         0x00000400
#define _PORTA_RA10_LENGTH                       0x00000001

#define _PORTA_RA11_POSITION                     0x0000000B
#define _PORTA_RA11_MASK                         0x00000800
#define _PORTA_RA11_LENGTH                       0x00000001

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

#define _LATA_LATA7_POSITION                     0x00000007
#define _LATA_LATA7_MASK                         0x00000080
#define _LATA_LATA7_LENGTH                       0x00000001

#define _LATA_LATA8_POSITION                     0x00000008
#define _LATA_LATA8_MASK                         0x00000100
#define _LATA_LATA8_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_LATA10_POSITION                    0x0000000A
#define _LATA_LATA10_MASK                        0x00000400
#define _LATA_LATA10_LENGTH                      0x00000001

#define _LATA_LATA11_POSITION                    0x0000000B
#define _LATA_LATA11_MASK                        0x00000800
#define _LATA_LATA11_LENGTH                      0x00000001

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

#define _ODCA_ODA7_POSITION                      0x00000007
#define _ODCA_ODA7_MASK                          0x00000080
#define _ODCA_ODA7_LENGTH                        0x00000001

#define _ODCA_ODA8_POSITION                      0x00000008
#define _ODCA_ODA8_MASK                          0x00000100
#define _ODCA_ODA8_LENGTH                        0x00000001

#define _ODCA_ODA9_POSITION                      0x00000009
#define _ODCA_ODA9_MASK                          0x00000200
#define _ODCA_ODA9_LENGTH                        0x00000001

#define _ODCA_ODA10_POSITION                     0x0000000A
#define _ODCA_ODA10_MASK                         0x00000400
#define _ODCA_ODA10_LENGTH                       0x00000001

#define _ODCA_ODA11_POSITION                     0x0000000B
#define _ODCA_ODA11_MASK                         0x00000800
#define _ODCA_ODA11_LENGTH                       0x00000001

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

#define _TRISC_TRISC0_POSITION                   0x00000000
#define _TRISC_TRISC0_MASK                       0x00000001
#define _TRISC_TRISC0_LENGTH                     0x00000001

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC3_POSITION                   0x00000003
#define _TRISC_TRISC3_MASK                       0x00000008
#define _TRISC_TRISC3_LENGTH                     0x00000001

#define _TRISC_TRISC4_POSITION                   0x00000004
#define _TRISC_TRISC4_MASK                       0x00000010
#define _TRISC_TRISC4_LENGTH                     0x00000001

#define _TRISC_TRISC5_POSITION                   0x00000005
#define _TRISC_TRISC5_MASK                       0x00000020
#define _TRISC_TRISC5_LENGTH                     0x00000001

#define _TRISC_TRISC6_POSITION                   0x00000006
#define _TRISC_TRISC6_MASK                       0x00000040
#define _TRISC_TRISC6_LENGTH                     0x00000001

#define _TRISC_TRISC7_POSITION                   0x00000007
#define _TRISC_TRISC7_MASK                       0x00000080
#define _TRISC_TRISC7_LENGTH                     0x00000001

#define _TRISC_TRISC8_POSITION                   0x00000008
#define _TRISC_TRISC8_MASK                       0x00000100
#define _TRISC_TRISC8_LENGTH                     0x00000001

#define _TRISC_TRISC9_POSITION                   0x00000009
#define _TRISC_TRISC9_MASK                       0x00000200
#define _TRISC_TRISC9_LENGTH                     0x00000001

#define _PORTC_RC0_POSITION                      0x00000000
#define _PORTC_RC0_MASK                          0x00000001
#define _PORTC_RC0_LENGTH                        0x00000001

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC3_POSITION                      0x00000003
#define _PORTC_RC3_MASK                          0x00000008
#define _PORTC_RC3_LENGTH                        0x00000001

#define _PORTC_RC4_POSITION                      0x00000004
#define _PORTC_RC4_MASK                          0x00000010
#define _PORTC_RC4_LENGTH                        0x00000001

#define _PORTC_RC5_POSITION                      0x00000005
#define _PORTC_RC5_MASK                          0x00000020
#define _PORTC_RC5_LENGTH                        0x00000001

#define _PORTC_RC6_POSITION                      0x00000006
#define _PORTC_RC6_MASK                          0x00000040
#define _PORTC_RC6_LENGTH                        0x00000001

#define _PORTC_RC7_POSITION                      0x00000007
#define _PORTC_RC7_MASK                          0x00000080
#define _PORTC_RC7_LENGTH                        0x00000001

#define _PORTC_RC8_POSITION                      0x00000008
#define _PORTC_RC8_MASK                          0x00000100
#define _PORTC_RC8_LENGTH                        0x00000001

#define _PORTC_RC9_POSITION                      0x00000009
#define _PORTC_RC9_MASK                          0x00000200
#define _PORTC_RC9_LENGTH                        0x00000001

#define _LATC_LATC0_POSITION                     0x00000000
#define _LATC_LATC0_MASK                         0x00000001
#define _LATC_LATC0_LENGTH                       0x00000001

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC3_POSITION                     0x00000003
#define _LATC_LATC3_MASK                         0x00000008
#define _LATC_LATC3_LENGTH                       0x00000001

#define _LATC_LATC4_POSITION                     0x00000004
#define _LATC_LATC4_MASK                         0x00000010
#define _LATC_LATC4_LENGTH                       0x00000001

#define _LATC_LATC5_POSITION                     0x00000005
#define _LATC_LATC5_MASK                         0x00000020
#define _LATC_LATC5_LENGTH                       0x00000001

#define _LATC_LATC6_POSITION                     0x00000006
#define _LATC_LATC6_MASK                         0x00000040
#define _LATC_LATC6_LENGTH                       0x00000001

#define _LATC_LATC7_POSITION                     0x00000007
#define _LATC_LATC7_MASK                         0x00000080
#define _LATC_LATC7_LENGTH                       0x00000001

#define _LATC_LATC8_POSITION                     0x00000008
#define _LATC_LATC8_MASK                         0x00000100
#define _LATC_LATC8_LENGTH                       0x00000001

#define _LATC_LATC9_POSITION                     0x00000009
#define _LATC_LATC9_MASK                         0x00000200
#define _LATC_LATC9_LENGTH                       0x00000001

#define _ODCC_ODC0_POSITION                      0x00000000
#define _ODCC_ODC0_MASK                          0x00000001
#define _ODCC_ODC0_LENGTH                        0x00000001

#define _ODCC_ODC1_POSITION                      0x00000001
#define _ODCC_ODC1_MASK                          0x00000002
#define _ODCC_ODC1_LENGTH                        0x00000001

#define _ODCC_ODC2_POSITION                      0x00000002
#define _ODCC_ODC2_MASK                          0x00000004
#define _ODCC_ODC2_LENGTH                        0x00000001

#define _ODCC_ODC3_POSITION                      0x00000003
#define _ODCC_ODC3_MASK                          0x00000008
#define _ODCC_ODC3_LENGTH                        0x00000001

#define _ODCC_ODC4_POSITION                      0x00000004
#define _ODCC_ODC4_MASK                          0x00000010
#define _ODCC_ODC4_LENGTH                        0x00000001

#define _ODCC_ODC5_POSITION                      0x00000005
#define _ODCC_ODC5_MASK                          0x00000020
#define _ODCC_ODC5_LENGTH                        0x00000001

#define _ODCC_ODC6_POSITION                      0x00000006
#define _ODCC_ODC6_MASK                          0x00000040
#define _ODCC_ODC6_LENGTH                        0x00000001

#define _ODCC_ODC7_POSITION                      0x00000007
#define _ODCC_ODC7_MASK                          0x00000080
#define _ODCC_ODC7_LENGTH                        0x00000001

#define _ODCC_ODC8_POSITION                      0x00000008
#define _ODCC_ODC8_MASK                          0x00000100
#define _ODCC_ODC8_LENGTH                        0x00000001

#define _ODCC_ODC9_POSITION                      0x00000009
#define _ODCC_ODC9_MASK                          0x00000200
#define _ODCC_ODC9_LENGTH                        0x00000001

#define _PADCFG1_SCK1DIS_POSITION                0x00000008
#define _PADCFG1_SCK1DIS_MASK                    0x00000100
#define _PADCFG1_SCK1DIS_LENGTH                  0x00000001

#define _PADCFG1_SDA1DIS_POSITION                0x00000009
#define _PADCFG1_SDA1DIS_MASK                    0x00000200
#define _PADCFG1_SDA1DIS_LENGTH                  0x00000001

#define _PADCFG1_SCK2DIS_POSITION                0x0000000A
#define _PADCFG1_SCK2DIS_MASK                    0x00000400
#define _PADCFG1_SCK2DIS_LENGTH                  0x00000001

#define _PADCFG1_SDA2DIS_POSITION                0x0000000B
#define _PADCFG1_SDA2DIS_MASK                    0x00000800
#define _PADCFG1_SDA2DIS_LENGTH                  0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000004
#define _AD1CON1_SSRC_MASK                       0x000000F0
#define _AD1CON1_SSRC_LENGTH                     0x00000004

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

#define _AD1CON1_MODE12_POSITION                 0x0000000A
#define _AD1CON1_MODE12_MASK                     0x00000400
#define _AD1CON1_MODE12_LENGTH                   0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000004
#define _AD1CON1_SSRC0_MASK                      0x00000010
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000005
#define _AD1CON1_SSRC1_MASK                      0x00000020
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000006
#define _AD1CON1_SSRC2_MASK                      0x00000040
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_SSRC3_POSITION                  0x00000007
#define _AD1CON1_SSRC3_MASK                      0x00000080
#define _AD1CON1_SSRC3_LENGTH                    0x00000001

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
#define _AD1CON2_SMPI_MASK                       0x0000007C
#define _AD1CON2_SMPI_LENGTH                     0x00000005

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_BUFREGEN_POSITION               0x0000000B
#define _AD1CON2_BUFREGEN_MASK                   0x00000800
#define _AD1CON2_BUFREGEN_LENGTH                 0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_NVCFG0_POSITION                 0x0000000D
#define _AD1CON2_NVCFG0_MASK                     0x00002000
#define _AD1CON2_NVCFG0_LENGTH                   0x00000001

#define _AD1CON2_PVCFG_POSITION                  0x0000000E
#define _AD1CON2_PVCFG_MASK                      0x0000C000
#define _AD1CON2_PVCFG_LENGTH                    0x00000002

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

#define _AD1CON2_SMPI4_POSITION                  0x00000006
#define _AD1CON2_SMPI4_MASK                      0x00000040
#define _AD1CON2_SMPI4_LENGTH                    0x00000001

#define _AD1CON2_PCVFG0_POSITION                 0x0000000E
#define _AD1CON2_PCVFG0_MASK                     0x00004000
#define _AD1CON2_PCVFG0_LENGTH                   0x00000001

#define _AD1CON2_PCVFG1_POSITION                 0x0000000F
#define _AD1CON2_PCVFG1_MASK                     0x00008000
#define _AD1CON2_PCVFG1_LENGTH                   0x00000001

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_EXTSAM_POSITION                 0x0000000E
#define _AD1CON3_EXTSAM_MASK                     0x00004000
#define _AD1CON3_EXTSAM_LENGTH                   0x00000001

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
#define _AD1CHS_CH0SA_MASK                       0x0000001F
#define _AD1CHS_CH0SA_LENGTH                     0x00000005

#define _AD1CHS_CH0NA_POSITION                   0x00000005
#define _AD1CHS_CH0NA_MASK                       0x000000E0
#define _AD1CHS_CH0NA_LENGTH                     0x00000003

#define _AD1CHS_CH0SB_POSITION                   0x00000008
#define _AD1CHS_CH0SB_MASK                       0x00001F00
#define _AD1CHS_CH0SB_LENGTH                     0x00000005

#define _AD1CHS_CH0NB_POSITION                   0x0000000D
#define _AD1CHS_CH0NB_MASK                       0x0000E000
#define _AD1CHS_CH0NB_LENGTH                     0x00000003

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

#define _AD1CHS_CH0SA4_POSITION                  0x00000004
#define _AD1CHS_CH0SA4_MASK                      0x00000010
#define _AD1CHS_CH0SA4_LENGTH                    0x00000001

#define _AD1CHS_CH0NA0_POSITION                  0x00000005
#define _AD1CHS_CH0NA0_MASK                      0x00000020
#define _AD1CHS_CH0NA0_LENGTH                    0x00000001

#define _AD1CHS_CH0NA1_POSITION                  0x00000006
#define _AD1CHS_CH0NA1_MASK                      0x00000040
#define _AD1CHS_CH0NA1_LENGTH                    0x00000001

#define _AD1CHS_CH0NA2_POSITION                  0x00000007
#define _AD1CHS_CH0NA2_MASK                      0x00000080
#define _AD1CHS_CH0NA2_LENGTH                    0x00000001

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

#define _AD1CHS_CH0SB4_POSITION                  0x0000000C
#define _AD1CHS_CH0SB4_MASK                      0x00001000
#define _AD1CHS_CH0SB4_LENGTH                    0x00000001

#define _AD1CHS_CH0NB0_POSITION                  0x0000000D
#define _AD1CHS_CH0NB0_MASK                      0x00002000
#define _AD1CHS_CH0NB0_LENGTH                    0x00000001

#define _AD1CHS_CH0NB1_POSITION                  0x0000000E
#define _AD1CHS_CH0NB1_MASK                      0x00004000
#define _AD1CHS_CH0NB1_LENGTH                    0x00000001

#define _AD1CHS_CH0NB2_POSITION                  0x0000000F
#define _AD1CHS_CH0NB2_MASK                      0x00008000
#define _AD1CHS_CH0NB2_LENGTH                    0x00000001

#define _AD1CHS0_CH0SA_POSITION                  0x00000000
#define _AD1CHS0_CH0SA_MASK                      0x0000001F
#define _AD1CHS0_CH0SA_LENGTH                    0x00000005

#define _AD1CHS0_CH0NA_POSITION                  0x00000005
#define _AD1CHS0_CH0NA_MASK                      0x000000E0
#define _AD1CHS0_CH0NA_LENGTH                    0x00000003

#define _AD1CHS0_CH0SB_POSITION                  0x00000008
#define _AD1CHS0_CH0SB_MASK                      0x00001F00
#define _AD1CHS0_CH0SB_LENGTH                    0x00000005

#define _AD1CHS0_CH0NB_POSITION                  0x0000000D
#define _AD1CHS0_CH0NB_MASK                      0x0000E000
#define _AD1CHS0_CH0NB_LENGTH                    0x00000003

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

#define _AD1CHS0_CH0NA0_POSITION                 0x00000005
#define _AD1CHS0_CH0NA0_MASK                     0x00000020
#define _AD1CHS0_CH0NA0_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA1_POSITION                 0x00000006
#define _AD1CHS0_CH0NA1_MASK                     0x00000040
#define _AD1CHS0_CH0NA1_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA2_POSITION                 0x00000007
#define _AD1CHS0_CH0NA2_MASK                     0x00000080
#define _AD1CHS0_CH0NA2_LENGTH                   0x00000001

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

#define _AD1CHS0_CH0NB0_POSITION                 0x0000000D
#define _AD1CHS0_CH0NB0_MASK                     0x00002000
#define _AD1CHS0_CH0NB0_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB1_POSITION                 0x0000000E
#define _AD1CHS0_CH0NB1_MASK                     0x00004000
#define _AD1CHS0_CH0NB1_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB2_POSITION                 0x0000000F
#define _AD1CHS0_CH0NB2_MASK                     0x00008000
#define _AD1CHS0_CH0NB2_LENGTH                   0x00000001

#define _AD1CSSH_CSS16_POSITION                  0x00000000
#define _AD1CSSH_CSS16_MASK                      0x00000001
#define _AD1CSSH_CSS16_LENGTH                    0x00000001

#define _AD1CSSH_CSS17_POSITION                  0x00000001
#define _AD1CSSH_CSS17_MASK                      0x00000002
#define _AD1CSSH_CSS17_LENGTH                    0x00000001

#define _AD1CSSH_CSS18_POSITION                  0x00000002
#define _AD1CSSH_CSS18_MASK                      0x00000004
#define _AD1CSSH_CSS18_LENGTH                    0x00000001

#define _AD1CSSH_CSS19_POSITION                  0x00000003
#define _AD1CSSH_CSS19_MASK                      0x00000008
#define _AD1CSSH_CSS19_LENGTH                    0x00000001

#define _AD1CSSH_CSS20_POSITION                  0x00000004
#define _AD1CSSH_CSS20_MASK                      0x00000010
#define _AD1CSSH_CSS20_LENGTH                    0x00000001

#define _AD1CSSH_CSS21_POSITION                  0x00000005
#define _AD1CSSH_CSS21_MASK                      0x00000020
#define _AD1CSSH_CSS21_LENGTH                    0x00000001

#define _AD1CSSH_CSS22_POSITION                  0x00000006
#define _AD1CSSH_CSS22_MASK                      0x00000040
#define _AD1CSSH_CSS22_LENGTH                    0x00000001

#define _AD1CSSH_CSS23_POSITION                  0x00000007
#define _AD1CSSH_CSS23_MASK                      0x00000080
#define _AD1CSSH_CSS23_LENGTH                    0x00000001

#define _AD1CSSH_CSS26_POSITION                  0x0000000A
#define _AD1CSSH_CSS26_MASK                      0x00000400
#define _AD1CSSH_CSS26_LENGTH                    0x00000001

#define _AD1CSSH_CSS27_POSITION                  0x0000000B
#define _AD1CSSH_CSS27_MASK                      0x00000800
#define _AD1CSSH_CSS27_LENGTH                    0x00000001

#define _AD1CSSH_CSS28_POSITION                  0x0000000C
#define _AD1CSSH_CSS28_MASK                      0x00001000
#define _AD1CSSH_CSS28_LENGTH                    0x00000001

#define _AD1CSSH_CSS29_POSITION                  0x0000000D
#define _AD1CSSH_CSS29_MASK                      0x00002000
#define _AD1CSSH_CSS29_LENGTH                    0x00000001

#define _AD1CSSH_CSS30_POSITION                  0x0000000E
#define _AD1CSSH_CSS30_MASK                      0x00004000
#define _AD1CSSH_CSS30_LENGTH                    0x00000001

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

#define _AD1CSSL_CSS6_POSITION                   0x00000006
#define _AD1CSSL_CSS6_MASK                       0x00000040
#define _AD1CSSL_CSS6_LENGTH                     0x00000001

#define _AD1CSSL_CSS7_POSITION                   0x00000007
#define _AD1CSSL_CSS7_MASK                       0x00000080
#define _AD1CSSL_CSS7_LENGTH                     0x00000001

#define _AD1CSSL_CSS8_POSITION                   0x00000008
#define _AD1CSSL_CSS8_MASK                       0x00000100
#define _AD1CSSL_CSS8_LENGTH                     0x00000001

#define _AD1CSSL_CSS9_POSITION                   0x00000009
#define _AD1CSSL_CSS9_MASK                       0x00000200
#define _AD1CSSL_CSS9_LENGTH                     0x00000001

#define _AD1CSSL_CSS10_POSITION                  0x0000000A
#define _AD1CSSL_CSS10_MASK                      0x00000400
#define _AD1CSSL_CSS10_LENGTH                    0x00000001

#define _AD1CSSL_CSS11_POSITION                  0x0000000B
#define _AD1CSSL_CSS11_MASK                      0x00000800
#define _AD1CSSL_CSS11_LENGTH                    0x00000001

#define _AD1CSSL_CSS12_POSITION                  0x0000000C
#define _AD1CSSL_CSS12_MASK                      0x00001000
#define _AD1CSSL_CSS12_LENGTH                    0x00000001

#define _AD1CSSL_CSS13_POSITION                  0x0000000D
#define _AD1CSSL_CSS13_MASK                      0x00002000
#define _AD1CSSL_CSS13_LENGTH                    0x00000001

#define _AD1CSSL_CSS14_POSITION                  0x0000000E
#define _AD1CSSL_CSS14_MASK                      0x00004000
#define _AD1CSSL_CSS14_LENGTH                    0x00000001

#define _AD1CSSL_CSS15_POSITION                  0x0000000F
#define _AD1CSSL_CSS15_MASK                      0x00008000
#define _AD1CSSL_CSS15_LENGTH                    0x00000001

#define _AD1CON5_CM_POSITION                     0x00000000
#define _AD1CON5_CM_MASK                         0x00000003
#define _AD1CON5_CM_LENGTH                       0x00000002

#define _AD1CON5_WM_POSITION                     0x00000002
#define _AD1CON5_WM_MASK                         0x0000000C
#define _AD1CON5_WM_LENGTH                       0x00000002

#define _AD1CON5_ASINT_POSITION                  0x00000008
#define _AD1CON5_ASINT_MASK                      0x00000300
#define _AD1CON5_ASINT_LENGTH                    0x00000002

#define _AD1CON5_BGREQ_POSITION                  0x0000000C
#define _AD1CON5_BGREQ_MASK                      0x00001000
#define _AD1CON5_BGREQ_LENGTH                    0x00000001

#define _AD1CON5_CTMREQ_POSITION                 0x0000000D
#define _AD1CON5_CTMREQ_MASK                     0x00002000
#define _AD1CON5_CTMREQ_LENGTH                   0x00000001

#define _AD1CON5_LPEN_POSITION                   0x0000000E
#define _AD1CON5_LPEN_MASK                       0x00004000
#define _AD1CON5_LPEN_LENGTH                     0x00000001

#define _AD1CON5_ASEN_POSITION                   0x0000000F
#define _AD1CON5_ASEN_MASK                       0x00008000
#define _AD1CON5_ASEN_LENGTH                     0x00000001

#define _AD1CON5_CM0_POSITION                    0x00000000
#define _AD1CON5_CM0_MASK                        0x00000001
#define _AD1CON5_CM0_LENGTH                      0x00000001

#define _AD1CON5_CM1_POSITION                    0x00000001
#define _AD1CON5_CM1_MASK                        0x00000002
#define _AD1CON5_CM1_LENGTH                      0x00000001

#define _AD1CON5_WM0_POSITION                    0x00000002
#define _AD1CON5_WM0_MASK                        0x00000004
#define _AD1CON5_WM0_LENGTH                      0x00000001

#define _AD1CON5_WM1_POSITION                    0x00000003
#define _AD1CON5_WM1_MASK                        0x00000008
#define _AD1CON5_WM1_LENGTH                      0x00000001

#define _AD1CON5_ASINT0_POSITION                 0x00000008
#define _AD1CON5_ASINT0_MASK                     0x00000100
#define _AD1CON5_ASINT0_LENGTH                   0x00000001

#define _AD1CON5_ASINT1_POSITION                 0x00000009
#define _AD1CON5_ASINT1_MASK                     0x00000200
#define _AD1CON5_ASINT1_LENGTH                   0x00000001

#define _AD1CHITH_CHH16_POSITION                 0x00000000
#define _AD1CHITH_CHH16_MASK                     0x00000001
#define _AD1CHITH_CHH16_LENGTH                   0x00000001

#define _AD1CHITH_CHH17_POSITION                 0x00000001
#define _AD1CHITH_CHH17_MASK                     0x00000002
#define _AD1CHITH_CHH17_LENGTH                   0x00000001

#define _AD1CHITH_CHH18_POSITION                 0x00000002
#define _AD1CHITH_CHH18_MASK                     0x00000004
#define _AD1CHITH_CHH18_LENGTH                   0x00000001

#define _AD1CHITH_CHH19_POSITION                 0x00000003
#define _AD1CHITH_CHH19_MASK                     0x00000008
#define _AD1CHITH_CHH19_LENGTH                   0x00000001

#define _AD1CHITH_CHH20_POSITION                 0x00000004
#define _AD1CHITH_CHH20_MASK                     0x00000010
#define _AD1CHITH_CHH20_LENGTH                   0x00000001

#define _AD1CHITH_CHH21_POSITION                 0x00000005
#define _AD1CHITH_CHH21_MASK                     0x00000020
#define _AD1CHITH_CHH21_LENGTH                   0x00000001

#define _AD1CHITH_CHH22_POSITION                 0x00000006
#define _AD1CHITH_CHH22_MASK                     0x00000040
#define _AD1CHITH_CHH22_LENGTH                   0x00000001

#define _AD1CHITH_CHH23_POSITION                 0x00000007
#define _AD1CHITH_CHH23_MASK                     0x00000080
#define _AD1CHITH_CHH23_LENGTH                   0x00000001

#define _AD1CHITL_CHH0_POSITION                  0x00000000
#define _AD1CHITL_CHH0_MASK                      0x00000001
#define _AD1CHITL_CHH0_LENGTH                    0x00000001

#define _AD1CHITL_CHH1_POSITION                  0x00000001
#define _AD1CHITL_CHH1_MASK                      0x00000002
#define _AD1CHITL_CHH1_LENGTH                    0x00000001

#define _AD1CHITL_CHH2_POSITION                  0x00000002
#define _AD1CHITL_CHH2_MASK                      0x00000004
#define _AD1CHITL_CHH2_LENGTH                    0x00000001

#define _AD1CHITL_CHH3_POSITION                  0x00000003
#define _AD1CHITL_CHH3_MASK                      0x00000008
#define _AD1CHITL_CHH3_LENGTH                    0x00000001

#define _AD1CHITL_CHH4_POSITION                  0x00000004
#define _AD1CHITL_CHH4_MASK                      0x00000010
#define _AD1CHITL_CHH4_LENGTH                    0x00000001

#define _AD1CHITL_CHH5_POSITION                  0x00000005
#define _AD1CHITL_CHH5_MASK                      0x00000020
#define _AD1CHITL_CHH5_LENGTH                    0x00000001

#define _AD1CHITL_CHH6_POSITION                  0x00000006
#define _AD1CHITL_CHH6_MASK                      0x00000040
#define _AD1CHITL_CHH6_LENGTH                    0x00000001

#define _AD1CHITL_CHH7_POSITION                  0x00000007
#define _AD1CHITL_CHH7_MASK                      0x00000080
#define _AD1CHITL_CHH7_LENGTH                    0x00000001

#define _AD1CHITL_CHH8_POSITION                  0x00000008
#define _AD1CHITL_CHH8_MASK                      0x00000100
#define _AD1CHITL_CHH8_LENGTH                    0x00000001

#define _AD1CHITL_CHH9_POSITION                  0x00000009
#define _AD1CHITL_CHH9_MASK                      0x00000200
#define _AD1CHITL_CHH9_LENGTH                    0x00000001

#define _AD1CHITL_CHH10_POSITION                 0x0000000A
#define _AD1CHITL_CHH10_MASK                     0x00000400
#define _AD1CHITL_CHH10_LENGTH                   0x00000001

#define _AD1CHITL_CHH11_POSITION                 0x0000000B
#define _AD1CHITL_CHH11_MASK                     0x00000800
#define _AD1CHITL_CHH11_LENGTH                   0x00000001

#define _AD1CHITL_CHH12_POSITION                 0x0000000C
#define _AD1CHITL_CHH12_MASK                     0x00001000
#define _AD1CHITL_CHH12_LENGTH                   0x00000001

#define _AD1CHITL_CHH13_POSITION                 0x0000000D
#define _AD1CHITL_CHH13_MASK                     0x00002000
#define _AD1CHITL_CHH13_LENGTH                   0x00000001

#define _AD1CHITL_CHH14_POSITION                 0x0000000E
#define _AD1CHITL_CHH14_MASK                     0x00004000
#define _AD1CHITL_CHH14_LENGTH                   0x00000001

#define _AD1CHITL_CHH15_POSITION                 0x0000000F
#define _AD1CHITL_CHH15_MASK                     0x00008000
#define _AD1CHITL_CHH15_LENGTH                   0x00000001

#define _CTMUCON1L_IRNG_POSITION                 0x00000000
#define _CTMUCON1L_IRNG_MASK                     0x00000003
#define _CTMUCON1L_IRNG_LENGTH                   0x00000002

#define _CTMUCON1L_ITRIM_POSITION                0x00000002
#define _CTMUCON1L_ITRIM_MASK                    0x000000FC
#define _CTMUCON1L_ITRIM_LENGTH                  0x00000006

#define _CTMUCON1L_CTTRIG_POSITION               0x00000008
#define _CTMUCON1L_CTTRIG_MASK                   0x00000100
#define _CTMUCON1L_CTTRIG_LENGTH                 0x00000001

#define _CTMUCON1L_IDISSEN_POSITION              0x00000009
#define _CTMUCON1L_IDISSEN_MASK                  0x00000200
#define _CTMUCON1L_IDISSEN_LENGTH                0x00000001

#define _CTMUCON1L_EDGSEQEN_POSITION             0x0000000A
#define _CTMUCON1L_EDGSEQEN_MASK                 0x00000400
#define _CTMUCON1L_EDGSEQEN_LENGTH               0x00000001

#define _CTMUCON1L_EDGEN_POSITION                0x0000000B
#define _CTMUCON1L_EDGEN_MASK                    0x00000800
#define _CTMUCON1L_EDGEN_LENGTH                  0x00000001

#define _CTMUCON1L_TGEN_POSITION                 0x0000000C
#define _CTMUCON1L_TGEN_MASK                     0x00001000
#define _CTMUCON1L_TGEN_LENGTH                   0x00000001

#define _CTMUCON1L_CTMUSIDL_POSITION             0x0000000D
#define _CTMUCON1L_CTMUSIDL_MASK                 0x00002000
#define _CTMUCON1L_CTMUSIDL_LENGTH               0x00000001

#define _CTMUCON1L_CTMUEN_POSITION               0x0000000F
#define _CTMUCON1L_CTMUEN_MASK                   0x00008000
#define _CTMUCON1L_CTMUEN_LENGTH                 0x00000001

#define _CTMUCON1L_IRNG0_POSITION                0x00000000
#define _CTMUCON1L_IRNG0_MASK                    0x00000001
#define _CTMUCON1L_IRNG0_LENGTH                  0x00000001

#define _CTMUCON1L_IRNG1_POSITION                0x00000001
#define _CTMUCON1L_IRNG1_MASK                    0x00000002
#define _CTMUCON1L_IRNG1_LENGTH                  0x00000001

#define _CTMUCON1L_ITRIM0_POSITION               0x00000002
#define _CTMUCON1L_ITRIM0_MASK                   0x00000004
#define _CTMUCON1L_ITRIM0_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM1_POSITION               0x00000003
#define _CTMUCON1L_ITRIM1_MASK                   0x00000008
#define _CTMUCON1L_ITRIM1_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM2_POSITION               0x00000004
#define _CTMUCON1L_ITRIM2_MASK                   0x00000010
#define _CTMUCON1L_ITRIM2_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM3_POSITION               0x00000005
#define _CTMUCON1L_ITRIM3_MASK                   0x00000020
#define _CTMUCON1L_ITRIM3_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM4_POSITION               0x00000006
#define _CTMUCON1L_ITRIM4_MASK                   0x00000040
#define _CTMUCON1L_ITRIM4_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM5_POSITION               0x00000007
#define _CTMUCON1L_ITRIM5_MASK                   0x00000080
#define _CTMUCON1L_ITRIM5_LENGTH                 0x00000001

#define _CTMUCON1H_EDG2SEL_POSITION              0x00000002
#define _CTMUCON1H_EDG2SEL_MASK                  0x0000003C
#define _CTMUCON1H_EDG2SEL_LENGTH                0x00000004

#define _CTMUCON1H_EDG2POL_POSITION              0x00000006
#define _CTMUCON1H_EDG2POL_MASK                  0x00000040
#define _CTMUCON1H_EDG2POL_LENGTH                0x00000001

#define _CTMUCON1H_EDG2MOD_POSITION              0x00000007
#define _CTMUCON1H_EDG2MOD_MASK                  0x00000080
#define _CTMUCON1H_EDG2MOD_LENGTH                0x00000001

#define _CTMUCON1H_EDG1STAT_POSITION             0x00000008
#define _CTMUCON1H_EDG1STAT_MASK                 0x00000100
#define _CTMUCON1H_EDG1STAT_LENGTH               0x00000001

#define _CTMUCON1H_EDG2STAT_POSITION             0x00000009
#define _CTMUCON1H_EDG2STAT_MASK                 0x00000200
#define _CTMUCON1H_EDG2STAT_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL_POSITION              0x0000000A
#define _CTMUCON1H_EDG1SEL_MASK                  0x00003C00
#define _CTMUCON1H_EDG1SEL_LENGTH                0x00000004

#define _CTMUCON1H_EDG1POL_POSITION              0x0000000E
#define _CTMUCON1H_EDG1POL_MASK                  0x00004000
#define _CTMUCON1H_EDG1POL_LENGTH                0x00000001

#define _CTMUCON1H_EDG1MOD_POSITION              0x0000000F
#define _CTMUCON1H_EDG1MOD_MASK                  0x00008000
#define _CTMUCON1H_EDG1MOD_LENGTH                0x00000001

#define _CTMUCON1H_EDG2SEL0_POSITION             0x00000002
#define _CTMUCON1H_EDG2SEL0_MASK                 0x00000004
#define _CTMUCON1H_EDG2SEL0_LENGTH               0x00000001

#define _CTMUCON1H_EDG2SEL1_POSITION             0x00000003
#define _CTMUCON1H_EDG2SEL1_MASK                 0x00000008
#define _CTMUCON1H_EDG2SEL1_LENGTH               0x00000001

#define _CTMUCON1H_EDG2SEL2_POSITION             0x00000004
#define _CTMUCON1H_EDG2SEL2_MASK                 0x00000010
#define _CTMUCON1H_EDG2SEL2_LENGTH               0x00000001

#define _CTMUCON1H_EDG2SEL3_POSITION             0x00000005
#define _CTMUCON1H_EDG2SEL3_MASK                 0x00000020
#define _CTMUCON1H_EDG2SEL3_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL0_POSITION             0x0000000A
#define _CTMUCON1H_EDG1SEL0_MASK                 0x00000400
#define _CTMUCON1H_EDG1SEL0_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL1_POSITION             0x0000000B
#define _CTMUCON1H_EDG1SEL1_MASK                 0x00000800
#define _CTMUCON1H_EDG1SEL1_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL2_POSITION             0x0000000C
#define _CTMUCON1H_EDG1SEL2_MASK                 0x00001000
#define _CTMUCON1H_EDG1SEL2_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL3_POSITION             0x0000000D
#define _CTMUCON1H_EDG1SEL3_MASK                 0x00002000
#define _CTMUCON1H_EDG1SEL3_LENGTH               0x00000001

#define _CTMUCON2_DISCHS_POSITION                0x00000000
#define _CTMUCON2_DISCHS_MASK                    0x00000007
#define _CTMUCON2_DISCHS_LENGTH                  0x00000003

#define _CTMUCON2_IRSTEN_POSITION                0x00000004
#define _CTMUCON2_IRSTEN_MASK                    0x00000010
#define _CTMUCON2_IRSTEN_LENGTH                  0x00000001

#define _CTMUCON2_DISCHS0_POSITION               0x00000000
#define _CTMUCON2_DISCHS0_MASK                   0x00000001
#define _CTMUCON2_DISCHS0_LENGTH                 0x00000001

#define _CTMUCON2_DISCHS1_POSITION               0x00000001
#define _CTMUCON2_DISCHS1_MASK                   0x00000002
#define _CTMUCON2_DISCHS1_LENGTH                 0x00000001

#define _CTMUCON2_DISCHS2_POSITION               0x00000002
#define _CTMUCON2_DISCHS2_MASK                   0x00000004
#define _CTMUCON2_DISCHS2_LENGTH                 0x00000001

#define _CTMUCON2L_DISCHS_POSITION               0x00000000
#define _CTMUCON2L_DISCHS_MASK                   0x00000007
#define _CTMUCON2L_DISCHS_LENGTH                 0x00000003

#define _CTMUCON2L_IRSTEN_POSITION               0x00000004
#define _CTMUCON2L_IRSTEN_MASK                   0x00000010
#define _CTMUCON2L_IRSTEN_LENGTH                 0x00000001

#define _CTMUCON2L_DISCHS0_POSITION              0x00000000
#define _CTMUCON2L_DISCHS0_MASK                  0x00000001
#define _CTMUCON2L_DISCHS0_LENGTH                0x00000001

#define _CTMUCON2L_DISCHS1_POSITION              0x00000001
#define _CTMUCON2L_DISCHS1_MASK                  0x00000002
#define _CTMUCON2L_DISCHS1_LENGTH                0x00000001

#define _CTMUCON2L_DISCHS2_POSITION              0x00000002
#define _CTMUCON2L_DISCHS2_MASK                  0x00000004
#define _CTMUCON2L_DISCHS2_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN16_POSITION              0x00000000
#define _AD1CTMENH_CTMEN16_MASK                  0x00000001
#define _AD1CTMENH_CTMEN16_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN17_POSITION              0x00000001
#define _AD1CTMENH_CTMEN17_MASK                  0x00000002
#define _AD1CTMENH_CTMEN17_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN18_POSITION              0x00000002
#define _AD1CTMENH_CTMEN18_MASK                  0x00000004
#define _AD1CTMENH_CTMEN18_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN19_POSITION              0x00000003
#define _AD1CTMENH_CTMEN19_MASK                  0x00000008
#define _AD1CTMENH_CTMEN19_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN20_POSITION              0x00000004
#define _AD1CTMENH_CTMEN20_MASK                  0x00000010
#define _AD1CTMENH_CTMEN20_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN21_POSITION              0x00000005
#define _AD1CTMENH_CTMEN21_MASK                  0x00000020
#define _AD1CTMENH_CTMEN21_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN22_POSITION              0x00000006
#define _AD1CTMENH_CTMEN22_MASK                  0x00000040
#define _AD1CTMENH_CTMEN22_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN23_POSITION              0x00000007
#define _AD1CTMENH_CTMEN23_MASK                  0x00000080
#define _AD1CTMENH_CTMEN23_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN0_POSITION               0x00000000
#define _AD1CTMENL_CTMEN0_MASK                   0x00000001
#define _AD1CTMENL_CTMEN0_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN1_POSITION               0x00000001
#define _AD1CTMENL_CTMEN1_MASK                   0x00000002
#define _AD1CTMENL_CTMEN1_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN2_POSITION               0x00000002
#define _AD1CTMENL_CTMEN2_MASK                   0x00000004
#define _AD1CTMENL_CTMEN2_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN3_POSITION               0x00000003
#define _AD1CTMENL_CTMEN3_MASK                   0x00000008
#define _AD1CTMENL_CTMEN3_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN4_POSITION               0x00000004
#define _AD1CTMENL_CTMEN4_MASK                   0x00000010
#define _AD1CTMENL_CTMEN4_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN5_POSITION               0x00000005
#define _AD1CTMENL_CTMEN5_MASK                   0x00000020
#define _AD1CTMENL_CTMEN5_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN6_POSITION               0x00000006
#define _AD1CTMENL_CTMEN6_MASK                   0x00000040
#define _AD1CTMENL_CTMEN6_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN7_POSITION               0x00000007
#define _AD1CTMENL_CTMEN7_MASK                   0x00000080
#define _AD1CTMENL_CTMEN7_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN8_POSITION               0x00000008
#define _AD1CTMENL_CTMEN8_MASK                   0x00000100
#define _AD1CTMENL_CTMEN8_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN9_POSITION               0x00000009
#define _AD1CTMENL_CTMEN9_MASK                   0x00000200
#define _AD1CTMENL_CTMEN9_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN10_POSITION              0x0000000A
#define _AD1CTMENL_CTMEN10_MASK                  0x00000400
#define _AD1CTMENL_CTMEN10_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN11_POSITION              0x0000000B
#define _AD1CTMENL_CTMEN11_MASK                  0x00000800
#define _AD1CTMENL_CTMEN11_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN12_POSITION              0x0000000C
#define _AD1CTMENL_CTMEN12_MASK                  0x00001000
#define _AD1CTMENL_CTMEN12_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN13_POSITION              0x0000000D
#define _AD1CTMENL_CTMEN13_MASK                  0x00002000
#define _AD1CTMENL_CTMEN13_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN14_POSITION              0x0000000E
#define _AD1CTMENL_CTMEN14_MASK                  0x00004000
#define _AD1CTMENL_CTMEN14_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN15_POSITION              0x0000000F
#define _AD1CTMENL_CTMEN15_MASK                  0x00008000
#define _AD1CTMENL_CTMEN15_LENGTH                0x00000001

#define _ANSA_ANSA0_POSITION                     0x00000000
#define _ANSA_ANSA0_MASK                         0x00000001
#define _ANSA_ANSA0_LENGTH                       0x00000001

#define _ANSA_ANSA1_POSITION                     0x00000001
#define _ANSA_ANSA1_MASK                         0x00000002
#define _ANSA_ANSA1_LENGTH                       0x00000001

#define _ANSA_ANSA2_POSITION                     0x00000002
#define _ANSA_ANSA2_MASK                         0x00000004
#define _ANSA_ANSA2_LENGTH                       0x00000001

#define _ANSA_ANSA3_POSITION                     0x00000003
#define _ANSA_ANSA3_MASK                         0x00000008
#define _ANSA_ANSA3_LENGTH                       0x00000001

#define _ANSA_ANSA4_POSITION                     0x00000004
#define _ANSA_ANSA4_MASK                         0x00000010
#define _ANSA_ANSA4_LENGTH                       0x00000001

#define _ANSA_ANSELA0_POSITION                   0x00000000
#define _ANSA_ANSELA0_MASK                       0x00000001
#define _ANSA_ANSELA0_LENGTH                     0x00000001

#define _ANSA_ANSELA1_POSITION                   0x00000001
#define _ANSA_ANSELA1_MASK                       0x00000002
#define _ANSA_ANSELA1_LENGTH                     0x00000001

#define _ANSA_ANSELA2_POSITION                   0x00000002
#define _ANSA_ANSELA2_MASK                       0x00000004
#define _ANSA_ANSELA2_LENGTH                     0x00000001

#define _ANSA_ANSELA3_POSITION                   0x00000003
#define _ANSA_ANSELA3_MASK                       0x00000008
#define _ANSA_ANSELA3_LENGTH                     0x00000001

#define _ANSA_ANSELA4_POSITION                   0x00000004
#define _ANSA_ANSELA4_MASK                       0x00000010
#define _ANSA_ANSELA4_LENGTH                     0x00000001

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _ANSELA_ANSA3_POSITION                   0x00000003
#define _ANSELA_ANSA3_MASK                       0x00000008
#define _ANSELA_ANSA3_LENGTH                     0x00000001

#define _ANSELA_ANSA4_POSITION                   0x00000004
#define _ANSELA_ANSA4_MASK                       0x00000010
#define _ANSELA_ANSA4_LENGTH                     0x00000001

#define _ANSELA_ANSELA0_POSITION                 0x00000000
#define _ANSELA_ANSELA0_MASK                     0x00000001
#define _ANSELA_ANSELA0_LENGTH                   0x00000001

#define _ANSELA_ANSELA1_POSITION                 0x00000001
#define _ANSELA_ANSELA1_MASK                     0x00000002
#define _ANSELA_ANSELA1_LENGTH                   0x00000001

#define _ANSELA_ANSELA2_POSITION                 0x00000002
#define _ANSELA_ANSELA2_MASK                     0x00000004
#define _ANSELA_ANSELA2_LENGTH                   0x00000001

#define _ANSELA_ANSELA3_POSITION                 0x00000003
#define _ANSELA_ANSELA3_MASK                     0x00000008
#define _ANSELA_ANSELA3_LENGTH                   0x00000001

#define _ANSELA_ANSELA4_POSITION                 0x00000004
#define _ANSELA_ANSELA4_MASK                     0x00000010
#define _ANSELA_ANSELA4_LENGTH                   0x00000001

#define _ANSB_ANSB0_POSITION                     0x00000000
#define _ANSB_ANSB0_MASK                         0x00000001
#define _ANSB_ANSB0_LENGTH                       0x00000001

#define _ANSB_ANSB1_POSITION                     0x00000001
#define _ANSB_ANSB1_MASK                         0x00000002
#define _ANSB_ANSB1_LENGTH                       0x00000001

#define _ANSB_ANSB2_POSITION                     0x00000002
#define _ANSB_ANSB2_MASK                         0x00000004
#define _ANSB_ANSB2_LENGTH                       0x00000001

#define _ANSB_ANSB3_POSITION                     0x00000003
#define _ANSB_ANSB3_MASK                         0x00000008
#define _ANSB_ANSB3_LENGTH                       0x00000001

#define _ANSB_ANSB4_POSITION                     0x00000004
#define _ANSB_ANSB4_MASK                         0x00000010
#define _ANSB_ANSB4_LENGTH                       0x00000001

#define _ANSB_ANSB5_POSITION                     0x00000005
#define _ANSB_ANSB5_MASK                         0x00000020
#define _ANSB_ANSB5_LENGTH                       0x00000001

#define _ANSB_ANSB6_POSITION                     0x00000006
#define _ANSB_ANSB6_MASK                         0x00000040
#define _ANSB_ANSB6_LENGTH                       0x00000001

#define _ANSB_ANSB7_POSITION                     0x00000007
#define _ANSB_ANSB7_MASK                         0x00000080
#define _ANSB_ANSB7_LENGTH                       0x00000001

#define _ANSB_ANSB8_POSITION                     0x00000008
#define _ANSB_ANSB8_MASK                         0x00000100
#define _ANSB_ANSB8_LENGTH                       0x00000001

#define _ANSB_ANSB9_POSITION                     0x00000009
#define _ANSB_ANSB9_MASK                         0x00000200
#define _ANSB_ANSB9_LENGTH                       0x00000001

#define _ANSB_ANSB12_POSITION                    0x0000000C
#define _ANSB_ANSB12_MASK                        0x00001000
#define _ANSB_ANSB12_LENGTH                      0x00000001

#define _ANSB_ANSB13_POSITION                    0x0000000D
#define _ANSB_ANSB13_MASK                        0x00002000
#define _ANSB_ANSB13_LENGTH                      0x00000001

#define _ANSB_ANSB14_POSITION                    0x0000000E
#define _ANSB_ANSB14_MASK                        0x00004000
#define _ANSB_ANSB14_LENGTH                      0x00000001

#define _ANSB_ANSB15_POSITION                    0x0000000F
#define _ANSB_ANSB15_MASK                        0x00008000
#define _ANSB_ANSB15_LENGTH                      0x00000001

#define _ANSB_ANSELB0_POSITION                   0x00000000
#define _ANSB_ANSELB0_MASK                       0x00000001
#define _ANSB_ANSELB0_LENGTH                     0x00000001

#define _ANSB_ANSELB1_POSITION                   0x00000001
#define _ANSB_ANSELB1_MASK                       0x00000002
#define _ANSB_ANSELB1_LENGTH                     0x00000001

#define _ANSB_ANSELB2_POSITION                   0x00000002
#define _ANSB_ANSELB2_MASK                       0x00000004
#define _ANSB_ANSELB2_LENGTH                     0x00000001

#define _ANSB_ANSELB3_POSITION                   0x00000003
#define _ANSB_ANSELB3_MASK                       0x00000008
#define _ANSB_ANSELB3_LENGTH                     0x00000001

#define _ANSB_ANSELB4_POSITION                   0x00000004
#define _ANSB_ANSELB4_MASK                       0x00000010
#define _ANSB_ANSELB4_LENGTH                     0x00000001

#define _ANSB_ANSELB5_POSITION                   0x00000005
#define _ANSB_ANSELB5_MASK                       0x00000020
#define _ANSB_ANSELB5_LENGTH                     0x00000001

#define _ANSB_ANSELB6_POSITION                   0x00000006
#define _ANSB_ANSELB6_MASK                       0x00000040
#define _ANSB_ANSELB6_LENGTH                     0x00000001

#define _ANSB_ANSELB7_POSITION                   0x00000007
#define _ANSB_ANSELB7_MASK                       0x00000080
#define _ANSB_ANSELB7_LENGTH                     0x00000001

#define _ANSB_ANSELB8_POSITION                   0x00000008
#define _ANSB_ANSELB8_MASK                       0x00000100
#define _ANSB_ANSELB8_LENGTH                     0x00000001

#define _ANSB_ANSELB9_POSITION                   0x00000009
#define _ANSB_ANSELB9_MASK                       0x00000200
#define _ANSB_ANSELB9_LENGTH                     0x00000001

#define _ANSB_ANSELB12_POSITION                  0x0000000C
#define _ANSB_ANSELB12_MASK                      0x00001000
#define _ANSB_ANSELB12_LENGTH                    0x00000001

#define _ANSB_ANSELB13_POSITION                  0x0000000D
#define _ANSB_ANSELB13_MASK                      0x00002000
#define _ANSB_ANSELB13_LENGTH                    0x00000001

#define _ANSB_ANSELB14_POSITION                  0x0000000E
#define _ANSB_ANSELB14_MASK                      0x00004000
#define _ANSB_ANSELB14_LENGTH                    0x00000001

#define _ANSB_ANSELB15_POSITION                  0x0000000F
#define _ANSB_ANSELB15_MASK                      0x00008000
#define _ANSB_ANSELB15_LENGTH                    0x00000001

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB5_POSITION                   0x00000005
#define _ANSELB_ANSB5_MASK                       0x00000020
#define _ANSELB_ANSB5_LENGTH                     0x00000001

#define _ANSELB_ANSB6_POSITION                   0x00000006
#define _ANSELB_ANSB6_MASK                       0x00000040
#define _ANSELB_ANSB6_LENGTH                     0x00000001

#define _ANSELB_ANSB7_POSITION                   0x00000007
#define _ANSELB_ANSB7_MASK                       0x00000080
#define _ANSELB_ANSB7_LENGTH                     0x00000001

#define _ANSELB_ANSB8_POSITION                   0x00000008
#define _ANSELB_ANSB8_MASK                       0x00000100
#define _ANSELB_ANSB8_LENGTH                     0x00000001

#define _ANSELB_ANSB9_POSITION                   0x00000009
#define _ANSELB_ANSB9_MASK                       0x00000200
#define _ANSELB_ANSB9_LENGTH                     0x00000001

#define _ANSELB_ANSB12_POSITION                  0x0000000C
#define _ANSELB_ANSB12_MASK                      0x00001000
#define _ANSELB_ANSB12_LENGTH                    0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _ANSELB_ANSELB0_POSITION                 0x00000000
#define _ANSELB_ANSELB0_MASK                     0x00000001
#define _ANSELB_ANSELB0_LENGTH                   0x00000001

#define _ANSELB_ANSELB1_POSITION                 0x00000001
#define _ANSELB_ANSELB1_MASK                     0x00000002
#define _ANSELB_ANSELB1_LENGTH                   0x00000001

#define _ANSELB_ANSELB2_POSITION                 0x00000002
#define _ANSELB_ANSELB2_MASK                     0x00000004
#define _ANSELB_ANSELB2_LENGTH                   0x00000001

#define _ANSELB_ANSELB3_POSITION                 0x00000003
#define _ANSELB_ANSELB3_MASK                     0x00000008
#define _ANSELB_ANSELB3_LENGTH                   0x00000001

#define _ANSELB_ANSELB4_POSITION                 0x00000004
#define _ANSELB_ANSELB4_MASK                     0x00000010
#define _ANSELB_ANSELB4_LENGTH                   0x00000001

#define _ANSELB_ANSELB5_POSITION                 0x00000005
#define _ANSELB_ANSELB5_MASK                     0x00000020
#define _ANSELB_ANSELB5_LENGTH                   0x00000001

#define _ANSELB_ANSELB6_POSITION                 0x00000006
#define _ANSELB_ANSELB6_MASK                     0x00000040
#define _ANSELB_ANSELB6_LENGTH                   0x00000001

#define _ANSELB_ANSELB7_POSITION                 0x00000007
#define _ANSELB_ANSELB7_MASK                     0x00000080
#define _ANSELB_ANSELB7_LENGTH                   0x00000001

#define _ANSELB_ANSELB8_POSITION                 0x00000008
#define _ANSELB_ANSELB8_MASK                     0x00000100
#define _ANSELB_ANSELB8_LENGTH                   0x00000001

#define _ANSELB_ANSELB9_POSITION                 0x00000009
#define _ANSELB_ANSELB9_MASK                     0x00000200
#define _ANSELB_ANSELB9_LENGTH                   0x00000001

#define _ANSELB_ANSELB12_POSITION                0x0000000C
#define _ANSELB_ANSELB12_MASK                    0x00001000
#define _ANSELB_ANSELB12_LENGTH                  0x00000001

#define _ANSELB_ANSELB13_POSITION                0x0000000D
#define _ANSELB_ANSELB13_MASK                    0x00002000
#define _ANSELB_ANSELB13_LENGTH                  0x00000001

#define _ANSELB_ANSELB14_POSITION                0x0000000E
#define _ANSELB_ANSELB14_MASK                    0x00004000
#define _ANSELB_ANSELB14_LENGTH                  0x00000001

#define _ANSELB_ANSELB15_POSITION                0x0000000F
#define _ANSELB_ANSELB15_MASK                    0x00008000
#define _ANSELB_ANSELB15_LENGTH                  0x00000001

#define _ANSC_ANSC0_POSITION                     0x00000000
#define _ANSC_ANSC0_MASK                         0x00000001
#define _ANSC_ANSC0_LENGTH                       0x00000001

#define _ANSC_ANSC1_POSITION                     0x00000001
#define _ANSC_ANSC1_MASK                         0x00000002
#define _ANSC_ANSC1_LENGTH                       0x00000001

#define _ANSC_ANSC2_POSITION                     0x00000002
#define _ANSC_ANSC2_MASK                         0x00000004
#define _ANSC_ANSC2_LENGTH                       0x00000001

#define _ANSC_ANSELC0_POSITION                   0x00000000
#define _ANSC_ANSELC0_MASK                       0x00000001
#define _ANSC_ANSELC0_LENGTH                     0x00000001

#define _ANSC_ANSELC1_POSITION                   0x00000001
#define _ANSC_ANSELC1_MASK                       0x00000002
#define _ANSC_ANSELC1_LENGTH                     0x00000001

#define _ANSC_ANSELC2_POSITION                   0x00000002
#define _ANSC_ANSELC2_MASK                       0x00000004
#define _ANSC_ANSELC2_LENGTH                     0x00000001

#define _ANSELC_ANSC0_POSITION                   0x00000000
#define _ANSELC_ANSC0_MASK                       0x00000001
#define _ANSELC_ANSC0_LENGTH                     0x00000001

#define _ANSELC_ANSC1_POSITION                   0x00000001
#define _ANSELC_ANSC1_MASK                       0x00000002
#define _ANSELC_ANSC1_LENGTH                     0x00000001

#define _ANSELC_ANSC2_POSITION                   0x00000002
#define _ANSELC_ANSC2_MASK                       0x00000004
#define _ANSELC_ANSC2_LENGTH                     0x00000001

#define _ANSELC_ANSELC0_POSITION                 0x00000000
#define _ANSELC_ANSELC0_MASK                     0x00000001
#define _ANSELC_ANSELC0_LENGTH                   0x00000001

#define _ANSELC_ANSELC1_POSITION                 0x00000001
#define _ANSELC_ANSELC1_MASK                     0x00000002
#define _ANSELC_ANSELC1_LENGTH                   0x00000001

#define _ANSELC_ANSELC2_POSITION                 0x00000002
#define _ANSELC_ANSELC2_MASK                     0x00000004
#define _ANSELC_ANSELC2_LENGTH                   0x00000001

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

#define _RTCPWC_RTCOUT_POSITION                  0x00000008
#define _RTCPWC_RTCOUT_MASK                      0x00000300
#define _RTCPWC_RTCOUT_LENGTH                    0x00000002

#define _RTCPWC_RTCLK_POSITION                   0x0000000A
#define _RTCPWC_RTCLK_MASK                       0x00000C00
#define _RTCPWC_RTCLK_LENGTH                     0x00000002

#define _RTCPWC_PWSPRE_POSITION                  0x0000000C
#define _RTCPWC_PWSPRE_MASK                      0x00001000
#define _RTCPWC_PWSPRE_LENGTH                    0x00000001

#define _RTCPWC_PWCPRE_POSITION                  0x0000000D
#define _RTCPWC_PWCPRE_MASK                      0x00002000
#define _RTCPWC_PWCPRE_LENGTH                    0x00000001

#define _RTCPWC_PWCPOL_POSITION                  0x0000000E
#define _RTCPWC_PWCPOL_MASK                      0x00004000
#define _RTCPWC_PWCPOL_LENGTH                    0x00000001

#define _RTCPWC_PWCEN_POSITION                   0x0000000F
#define _RTCPWC_PWCEN_MASK                       0x00008000
#define _RTCPWC_PWCEN_LENGTH                     0x00000001

#define _RTCPWC_RTCOUT0_POSITION                 0x00000008
#define _RTCPWC_RTCOUT0_MASK                     0x00000100
#define _RTCPWC_RTCOUT0_LENGTH                   0x00000001

#define _RTCPWC_RTCOUT1_POSITION                 0x00000009
#define _RTCPWC_RTCOUT1_MASK                     0x00000200
#define _RTCPWC_RTCOUT1_LENGTH                   0x00000001

#define _RTCPWC_RTCLK0_POSITION                  0x0000000A
#define _RTCPWC_RTCLK0_MASK                      0x00000400
#define _RTCPWC_RTCLK0_LENGTH                    0x00000001

#define _RTCPWC_RTCLK1_POSITION                  0x0000000B
#define _RTCPWC_RTCLK1_MASK                      0x00000800
#define _RTCPWC_RTCLK1_LENGTH                    0x00000001

#define _RTCPWC_PWCSPRE_POSITION                 0x0000000C
#define _RTCPWC_PWCSPRE_MASK                     0x00001000
#define _RTCPWC_PWCSPRE_LENGTH                   0x00000001

#define _RTCPWC_PWCCPRE_POSITION                 0x0000000D
#define _RTCPWC_PWCCPRE_MASK                     0x00002000
#define _RTCPWC_PWCCPRE_LENGTH                   0x00000001

#define _RTCPWC_RTCCLK_POSITION                  0x0000000A
#define _RTCPWC_RTCCLK_MASK                      0x00000C00
#define _RTCPWC_RTCCLK_LENGTH                    0x00000002

#define _RTCPWC_RTCCLK0_POSITION                 0x0000000A
#define _RTCPWC_RTCCLK0_MASK                     0x00000400
#define _RTCPWC_RTCCLK0_LENGTH                   0x00000001

#define _RTCPWC_RTCCLK1_POSITION                 0x0000000B
#define _RTCPWC_RTCCLK1_MASK                     0x00000800
#define _RTCPWC_RTCCLK1_LENGTH                   0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000009
#define _CMSTAT_C2EVT_MASK                       0x00000200
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CMSTAT_C3EVT_POSITION                   0x0000000A
#define _CMSTAT_C3EVT_MASK                       0x00000400
#define _CMSTAT_C3EVT_LENGTH                     0x00000001

#define _CMSTAT_CMIDL_POSITION                   0x0000000F
#define _CMSTAT_CMIDL_MASK                       0x00008000
#define _CMSTAT_CMIDL_LENGTH                     0x00000001

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000001F
#define _CVRCON_CVR_LENGTH                       0x00000005

#define _CVRCON_CVRSS_POSITION                   0x00000005
#define _CVRCON_CVRSS_MASK                       0x00000020
#define _CVRCON_CVRSS_LENGTH                     0x00000001

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

#define _CVRCON_CVR4_POSITION                    0x00000004
#define _CVRCON_CVR4_MASK                        0x00000010
#define _CVRCON_CVR4_LENGTH                      0x00000001

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000030
#define _CM1CON_CREF_LENGTH                      0x00000002

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CEVT_POSITION                    0x00000009
#define _CM1CON_CEVT_MASK                        0x00000200
#define _CM1CON_CEVT_LENGTH                      0x00000001

#define _CM1CON_CLPWR_POSITION                   0x0000000C
#define _CM1CON_CLPWR_MASK                       0x00001000
#define _CM1CON_CLPWR_LENGTH                     0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_CON_POSITION                     0x0000000F
#define _CM1CON_CON_MASK                         0x00008000
#define _CM1CON_CON_LENGTH                       0x00000001

#define _CM1CON_CCH0_POSITION                    0x00000000
#define _CM1CON_CCH0_MASK                        0x00000001
#define _CM1CON_CCH0_LENGTH                      0x00000001

#define _CM1CON_CCH1_POSITION                    0x00000001
#define _CM1CON_CCH1_MASK                        0x00000002
#define _CM1CON_CCH1_LENGTH                      0x00000001

#define _CM1CON_CREF0_POSITION                   0x00000004
#define _CM1CON_CREF0_MASK                       0x00000010
#define _CM1CON_CREF0_LENGTH                     0x00000001

#define _CM1CON_CREF1_POSITION                   0x00000005
#define _CM1CON_CREF1_MASK                       0x00000020
#define _CM1CON_CREF1_LENGTH                     0x00000001

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000030
#define _CM2CON_CREF_LENGTH                      0x00000002

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CEVT_POSITION                    0x00000009
#define _CM2CON_CEVT_MASK                        0x00000200
#define _CM2CON_CEVT_LENGTH                      0x00000001

#define _CM2CON_CLPWR_POSITION                   0x0000000C
#define _CM2CON_CLPWR_MASK                       0x00001000
#define _CM2CON_CLPWR_LENGTH                     0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_CON_POSITION                     0x0000000F
#define _CM2CON_CON_MASK                         0x00008000
#define _CM2CON_CON_LENGTH                       0x00000001

#define _CM2CON_CCH0_POSITION                    0x00000000
#define _CM2CON_CCH0_MASK                        0x00000001
#define _CM2CON_CCH0_LENGTH                      0x00000001

#define _CM2CON_CCH1_POSITION                    0x00000001
#define _CM2CON_CCH1_MASK                        0x00000002
#define _CM2CON_CCH1_LENGTH                      0x00000001

#define _CM2CON_CREF0_POSITION                   0x00000004
#define _CM2CON_CREF0_MASK                       0x00000010
#define _CM2CON_CREF0_LENGTH                     0x00000001

#define _CM2CON_CREF1_POSITION                   0x00000005
#define _CM2CON_CREF1_MASK                       0x00000020
#define _CM2CON_CREF1_LENGTH                     0x00000001

#define _CM2CON_EVPOL0_POSITION                  0x00000006
#define _CM2CON_EVPOL0_MASK                      0x00000040
#define _CM2CON_EVPOL0_LENGTH                    0x00000001

#define _CM2CON_EVPOL1_POSITION                  0x00000007
#define _CM2CON_EVPOL1_MASK                      0x00000080
#define _CM2CON_EVPOL1_LENGTH                    0x00000001

#define _CM3CON_CCH_POSITION                     0x00000000
#define _CM3CON_CCH_MASK                         0x00000003
#define _CM3CON_CCH_LENGTH                       0x00000002

#define _CM3CON_CREF_POSITION                    0x00000004
#define _CM3CON_CREF_MASK                        0x00000030
#define _CM3CON_CREF_LENGTH                      0x00000002

#define _CM3CON_EVPOL_POSITION                   0x00000006
#define _CM3CON_EVPOL_MASK                       0x000000C0
#define _CM3CON_EVPOL_LENGTH                     0x00000002

#define _CM3CON_COUT_POSITION                    0x00000008
#define _CM3CON_COUT_MASK                        0x00000100
#define _CM3CON_COUT_LENGTH                      0x00000001

#define _CM3CON_CEVT_POSITION                    0x00000009
#define _CM3CON_CEVT_MASK                        0x00000200
#define _CM3CON_CEVT_LENGTH                      0x00000001

#define _CM3CON_CLPWR_POSITION                   0x0000000C
#define _CM3CON_CLPWR_MASK                       0x00001000
#define _CM3CON_CLPWR_LENGTH                     0x00000001

#define _CM3CON_CPOL_POSITION                    0x0000000D
#define _CM3CON_CPOL_MASK                        0x00002000
#define _CM3CON_CPOL_LENGTH                      0x00000001

#define _CM3CON_COE_POSITION                     0x0000000E
#define _CM3CON_COE_MASK                         0x00004000
#define _CM3CON_COE_LENGTH                       0x00000001

#define _CM3CON_CON_POSITION                     0x0000000F
#define _CM3CON_CON_MASK                         0x00008000
#define _CM3CON_CON_LENGTH                       0x00000001

#define _CM3CON_CCH0_POSITION                    0x00000000
#define _CM3CON_CCH0_MASK                        0x00000001
#define _CM3CON_CCH0_LENGTH                      0x00000001

#define _CM3CON_CCH1_POSITION                    0x00000001
#define _CM3CON_CCH1_MASK                        0x00000002
#define _CM3CON_CCH1_LENGTH                      0x00000001

#define _CM3CON_CREF0_POSITION                   0x00000004
#define _CM3CON_CREF0_MASK                       0x00000010
#define _CM3CON_CREF0_LENGTH                     0x00000001

#define _CM3CON_CREF1_POSITION                   0x00000005
#define _CM3CON_CREF1_MASK                       0x00000020
#define _CM3CON_CREF1_LENGTH                     0x00000001

#define _CM3CON_EVPOL0_POSITION                  0x00000006
#define _CM3CON_EVPOL0_MASK                      0x00000040
#define _CM3CON_EVPOL0_LENGTH                    0x00000001

#define _CM3CON_EVPOL1_POSITION                  0x00000007
#define _CM3CON_EVPOL1_MASK                      0x00000080
#define _CM3CON_EVPOL1_LENGTH                    0x00000001

#define _BUFCON0_BUFREF_POSITION                 0x00000000
#define _BUFCON0_BUFREF_MASK                     0x00000003
#define _BUFCON0_BUFREF_LENGTH                   0x00000002

#define _BUFCON0_BUFREF0_POSITION                0x00000000
#define _BUFCON0_BUFREF0_MASK                    0x00000001
#define _BUFCON0_BUFREF0_LENGTH                  0x00000001

#define _BUFCON0_BUFREF1_POSITION                0x00000001
#define _BUFCON0_BUFREF1_MASK                    0x00000002
#define _BUFCON0_BUFREF1_LENGTH                  0x00000001

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

#define _RCON_PMSLP_POSITION                     0x00000008
#define _RCON_PMSLP_MASK                         0x00000100
#define _RCON_PMSLP_LENGTH                       0x00000001

#define _RCON_CM_POSITION                        0x00000009
#define _RCON_CM_MASK                            0x00000200
#define _RCON_CM_LENGTH                          0x00000001

#define _RCON_RETEN_POSITION                     0x0000000C
#define _RCON_RETEN_MASK                         0x00001000
#define _RCON_RETEN_LENGTH                       0x00000001

#define _RCON_SBOREN_POSITION                    0x0000000D
#define _RCON_SBOREN_MASK                        0x00002000
#define _RCON_SBOREN_LENGTH                      0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_SOSCDRV_POSITION                 0x00000002
#define _OSCCON_SOSCDRV_MASK                     0x00000004
#define _OSCCON_SOSCDRV_LENGTH                   0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

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

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _REFOCON_ROEN_POSITION                   0x0000000F
#define _REFOCON_ROEN_MASK                       0x00008000
#define _REFOCON_ROEN_LENGTH                     0x00000001

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

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _HLVDCON_HLVDL_POSITION                  0x00000000
#define _HLVDCON_HLVDL_MASK                      0x0000000F
#define _HLVDCON_HLVDL_LENGTH                    0x00000004

#define _HLVDCON_IRVST_POSITION                  0x00000005
#define _HLVDCON_IRVST_MASK                      0x00000020
#define _HLVDCON_IRVST_LENGTH                    0x00000001

#define _HLVDCON_BGVST_POSITION                  0x00000006
#define _HLVDCON_BGVST_MASK                      0x00000040
#define _HLVDCON_BGVST_LENGTH                    0x00000001

#define _HLVDCON_VDIR_POSITION                   0x00000007
#define _HLVDCON_VDIR_MASK                       0x00000080
#define _HLVDCON_VDIR_LENGTH                     0x00000001

#define _HLVDCON_LSIDL_POSITION                  0x0000000D
#define _HLVDCON_LSIDL_MASK                      0x00002000
#define _HLVDCON_LSIDL_LENGTH                    0x00000001

#define _HLVDCON_HLVDEN_POSITION                 0x0000000F
#define _HLVDCON_HLVDEN_MASK                     0x00008000
#define _HLVDCON_HLVDEN_LENGTH                   0x00000001

#define _HLVDCON_HLVDL0_POSITION                 0x00000000
#define _HLVDCON_HLVDL0_MASK                     0x00000001
#define _HLVDCON_HLVDL0_LENGTH                   0x00000001

#define _HLVDCON_HLVDL1_POSITION                 0x00000001
#define _HLVDCON_HLVDL1_MASK                     0x00000002
#define _HLVDCON_HLVDL1_LENGTH                   0x00000001

#define _HLVDCON_HLVDL2_POSITION                 0x00000002
#define _HLVDCON_HLVDL2_MASK                     0x00000004
#define _HLVDCON_HLVDL2_LENGTH                   0x00000001

#define _HLVDCON_HLVDL3_POSITION                 0x00000003
#define _HLVDCON_HLVDL3_MASK                     0x00000008
#define _HLVDCON_HLVDL3_LENGTH                   0x00000001

#define _HLVDCON_HLSIDL_POSITION                 0x0000000D
#define _HLVDCON_HLSIDL_MASK                     0x00002000
#define _HLVDCON_HLSIDL_LENGTH                   0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000003F
#define _NVMCON_NVMOP_LENGTH                     0x00000006

#define _NVMCON_ERASE_POSITION                   0x00000006
#define _NVMCON_ERASE_MASK                       0x00000040
#define _NVMCON_ERASE_LENGTH                     0x00000001

#define _NVMCON_PGMONLY_POSITION                 0x0000000C
#define _NVMCON_PGMONLY_MASK                     0x00001000
#define _NVMCON_PGMONLY_LENGTH                   0x00000001

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

#define _NVMCON_NVMOP4_POSITION                  0x00000004
#define _NVMCON_NVMOP4_MASK                      0x00000010
#define _NVMCON_NVMOP4_LENGTH                    0x00000001

#define _NVMCON_NVMOP5_POSITION                  0x00000005
#define _NVMCON_NVMOP5_MASK                      0x00000020
#define _NVMCON_NVMOP5_LENGTH                    0x00000001

#define _NVMKEY_NVMKEY_POSITION                  0x00000000
#define _NVMKEY_NVMKEY_MASK                      0x000000FF
#define _NVMKEY_NVMKEY_LENGTH                    0x00000008

#define _NVMKEY_NVMKEY0_POSITION                 0x00000000
#define _NVMKEY_NVMKEY0_MASK                     0x00000001
#define _NVMKEY_NVMKEY0_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY1_POSITION                 0x00000001
#define _NVMKEY_NVMKEY1_MASK                     0x00000002
#define _NVMKEY_NVMKEY1_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY2_POSITION                 0x00000002
#define _NVMKEY_NVMKEY2_MASK                     0x00000004
#define _NVMKEY_NVMKEY2_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY3_POSITION                 0x00000003
#define _NVMKEY_NVMKEY3_MASK                     0x00000008
#define _NVMKEY_NVMKEY3_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY4_POSITION                 0x00000004
#define _NVMKEY_NVMKEY4_MASK                     0x00000010
#define _NVMKEY_NVMKEY4_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY5_POSITION                 0x00000005
#define _NVMKEY_NVMKEY5_MASK                     0x00000020
#define _NVMKEY_NVMKEY5_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY6_POSITION                 0x00000006
#define _NVMKEY_NVMKEY6_MASK                     0x00000040
#define _NVMKEY_NVMKEY6_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY7_POSITION                 0x00000007
#define _NVMKEY_NVMKEY7_MASK                     0x00000080
#define _NVMKEY_NVMKEY7_LENGTH                   0x00000001

#define _ULPWCON_ULPSINK_POSITION                0x00000008
#define _ULPWCON_ULPSINK_MASK                    0x00000100
#define _ULPWCON_ULPSINK_LENGTH                  0x00000001

#define _ULPWCON_ULPSIDL_POSITION                0x0000000D
#define _ULPWCON_ULPSIDL_MASK                    0x00002000
#define _ULPWCON_ULPSIDL_LENGTH                  0x00000001

#define _ULPWCON_ULPEN_POSITION                  0x0000000F
#define _ULPWCON_ULPEN_MASK                      0x00008000
#define _ULPWCON_ULPEN_LENGTH                    0x00000001

#define _ULPWCON_CRNTEN_POSITION                 0x00000008
#define _ULPWCON_CRNTEN_MASK                     0x00000100
#define _ULPWCON_CRNTEN_LENGTH                   0x00000001

#define _ULPWCON_PSIDL_POSITION                  0x0000000D
#define _ULPWCON_PSIDL_MASK                      0x00002000
#define _ULPWCON_PSIDL_LENGTH                    0x00000001

#define _ULPWCON_WUEN_POSITION                   0x0000000F
#define _ULPWCON_WUEN_MASK                       0x00008000
#define _ULPWCON_WUEN_LENGTH                     0x00000001

#define _PMD1_ADC1MD_POSITION                    0x00000000
#define _PMD1_ADC1MD_MASK                        0x00000001
#define _PMD1_ADC1MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_U2MD_POSITION                      0x00000006
#define _PMD1_U2MD_MASK                          0x00000040
#define _PMD1_U2MD_LENGTH                        0x00000001

#define _PMD1_SSP1MD_POSITION                    0x00000007
#define _PMD1_SSP1MD_MASK                        0x00000080
#define _PMD1_SSP1MD_LENGTH                      0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD2_CCP1MD_POSITION                    0x00000000
#define _PMD2_CCP1MD_MASK                        0x00000001
#define _PMD2_CCP1MD_LENGTH                      0x00000001

#define _PMD2_CCP2MD_POSITION                    0x00000001
#define _PMD2_CCP2MD_MASK                        0x00000002
#define _PMD2_CCP2MD_LENGTH                      0x00000001

#define _PMD2_CCP3MD_POSITION                    0x00000002
#define _PMD2_CCP3MD_MASK                        0x00000004
#define _PMD2_CCP3MD_LENGTH                      0x00000001

#define _PMD2_CCP4MD_POSITION                    0x00000003
#define _PMD2_CCP4MD_MASK                        0x00000008
#define _PMD2_CCP4MD_LENGTH                      0x00000001

#define _PMD2_CCP5MD_POSITION                    0x00000004
#define _PMD2_CCP5MD_MASK                        0x00000010
#define _PMD2_CCP5MD_LENGTH                      0x00000001

#define _PMD3_SSP2MD_POSITION                    0x00000001
#define _PMD3_SSP2MD_MASK                        0x00000002
#define _PMD3_SSP2MD_LENGTH                      0x00000001

#define _PMD3_DAC1MD_POSITION                    0x00000006
#define _PMD3_DAC1MD_MASK                        0x00000040
#define _PMD3_DAC1MD_LENGTH                      0x00000001

#define _PMD3_RTCCMD_POSITION                    0x00000009
#define _PMD3_RTCCMD_MASK                        0x00000200
#define _PMD3_RTCCMD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_HLVDMD_POSITION                    0x00000001
#define _PMD4_HLVDMD_MASK                        0x00000002
#define _PMD4_HLVDMD_LENGTH                      0x00000001

#define _PMD4_CTMUMD_POSITION                    0x00000002
#define _PMD4_CTMUMD_MASK                        0x00000004
#define _PMD4_CTMUMD_LENGTH                      0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD4_ULPWUMD_POSITION                   0x00000006
#define _PMD4_ULPWUMD_MASK                       0x00000040
#define _PMD4_ULPWUMD_LENGTH                     0x00000001

#define _PMD6_AMP2MD_POSITION                    0x00000003
#define _PMD6_AMP2MD_MASK                        0x00000008
#define _PMD6_AMP2MD_LENGTH                      0x00000001

#define _PMD6_DAC2MD_POSITION                    0x00000004
#define _PMD6_DAC2MD_MASK                        0x00000010
#define _PMD6_DAC2MD_LENGTH                      0x00000001

#define _PMD6_AMP1MD_POSITION                    0x00000005
#define _PMD6_AMP1MD_MASK                        0x00000020
#define _PMD6_AMP1MD_LENGTH                      0x00000001

#define _PMD8_CLC1MD_POSITION                    0x00000002
#define _PMD8_CLC1MD_MASK                        0x00000004
#define _PMD8_CLC1MD_LENGTH                      0x00000001

#define _PMD8_CLC2MD_POSITION                    0x00000003
#define _PMD8_CLC2MD_MASK                        0x00000008
#define _PMD8_CLC2MD_LENGTH                      0x00000001



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
**     BWRP_ON              Enabled
**     BWRP_OFF             Disabled
**
**   Boot segment Protect:
**     BSS_HI2K             High Security Boot Protect 000200h - 0015FEh
**     BSS_HI1K             High Security Boot Protect 000200h - 000AFEh
**     BSS_STD2K            Standard Security Boot Protect 000200h - 0015FEh
**     BSS_STD1K            Standard Security Boot Protect 000200h - 000AFEh
**     BSS_OFF              No boot program flash segment
**
*/

#define BWRP_ON              0x000E
#define BWRP_OFF             0x000F

#define BSS_HI2K             0x0003
#define BSS_HI1K             0x0005
#define BSS_STD2K            0x000B
#define BSS_STD1K            0x000D
#define BSS_OFF              0x000F

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
**   General Segment Write Protect:
**     GWRP_ON              General segment is write-protected
**     GWRP_OFF             General segment may be written
**
**   General Segment Code Protect:
**     GCP_ON               Standard security enabled
**     GCP_OFF              No Protection
**
*/

#define GWRP_ON              0x0002
#define GWRP_OFF             0x0003

#define GCP_ON               0x0001
#define GCP_OFF              0x0003

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
**   Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL Module (FRCDIV+PLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary oscillator with PLL Module (HS+PLL, EC+PLL)
**     FNOSC_SOSC           Secondary oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC oscillator (LPRC)
**     FNOSC_LPFRC          500kHz Low-Power FRC oscillator with Postscaler(LPFRCDIV)
**     FNOSC_FRCDIV         8MHz FRC oscillator With Postscaler (FRCDIV)
**
**   SOSC Source Type:
**     SOSCSRC_DIG          Digital Mode for use with external source
**     SOSCSRC_ANA          Analog Mode for use with crystal
**
**   LPRC Oscillator Power and Accuracy:
**     LPRCSEL_LP           Low Power, Low Accuracy Mode
**     LPRCSEL_HP           High Power, High Accuracy Mode
**
**   Internal External Switch Over bit:
**     IESO_OFF             Internal External Switchover mode disabled (Two-speed Start-up disabled)
**     IESO_ON              Internal External Switchover mode enabled (Two-speed Start-up enabled)
**
*/

#define FNOSC_FRC            0x00E0
#define FNOSC_FRCPLL         0x00E1
#define FNOSC_PRI            0x00E2
#define FNOSC_PRIPLL         0x00E3
#define FNOSC_SOSC           0x00E4
#define FNOSC_LPRC           0x00E5
#define FNOSC_LPFRC          0x00E6
#define FNOSC_FRCDIV         0x00E7

#define SOSCSRC_DIG          0x00C7
#define SOSCSRC_ANA          0x00E7

#define LPRCSEL_LP           0x00A7
#define LPRCSEL_HP           0x00E7

#define IESO_OFF             0x0067
#define IESO_ON              0x00E7

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
**   Primary Oscillator Configuration bits:
**     POSCMOD_EC           External clock mode selected
**     POSCMOD_XT           XT oscillator mode selected
**     POSCMOD_HS           HS oscillator mode selected
**     POSCMOD_NONE         Primary oscillator disabled
**
**   CLKO Enable Configuration bit:
**     OSCIOFNC_IO          Port I/O enabled (CLKO disabled)
**     OSCIOFNC_CLKO        CLKO output signal enabled
**
**   Primary Oscillator Frequency Range Configuration bits:
**     POSCFREQ_LS          Primary oscillator/external clock input frequency less than 100kHz
**     POSCFREQ_MS          Primary oscillator/external clock input frequency between 100kHz and 8MHz
**     POSCFREQ_HS          Primary oscillator/external clock input frequency greater than 8MHz
**
**   SOSC Power Selection Configuration bits:
**     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
**     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
**
**   Clock Switching and Monitor Selection:
**     FCKSM_CSECME         Both Clock Switching and Fail-safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock Switching is enabled, Fail-safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock Switching and Fail-safe Clock Monitor are disabled
**
*/

#define POSCMOD_EC           0x00FC
#define POSCMOD_XT           0x00FD
#define POSCMOD_HS           0x00FE
#define POSCMOD_NONE         0x00FF

#define OSCIOFNC_IO          0x00FB
#define OSCIOFNC_CLKO        0x00FF

#define POSCFREQ_LS          0x00EF
#define POSCFREQ_MS          0x00F7
#define POSCFREQ_HS          0x00FF

#define SOSCSEL_SOSCLP       0x00DF
#define SOSCSEL_SOSCHP       0x00FF

#define FCKSM_CSECME         0x003F
#define FCKSM_CSECMD         0x007F
#define FCKSM_CSDCMD         0x00BF

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
**   Watchdog Timer Postscale Select bits:
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
**     WDTPS_PS1024         1:1024
**     WDTPS_PS2048         1:2048
**     WDTPS_PS4096         1:4096
**     WDTPS_PS8192         1:8192
**     WDTPS_PS16384        1:16384
**     WDTPS_PS32768        1:32768
**
**   WDT Prescaler bit:
**     FWPSA_PR32           WDT prescaler ratio of 1:32
**     FWPSA_PR128          WDT prescaler ratio of 1:128
**
**   Watchdog Timer Enable bits:
**     FWDTEN_OFF           WDT disabled in hardware; SWDTEN bit disabled
**     FWDTEN_NOSLP         WDT enabled while device is active and disabled in Sleep; SWDTEN bit disabled
**     FWDTEN_SWON          WDT controlled with the SWDTEN bit setting
**     FWDTEN_ON            WDT enabled in hardware
**
**   Windowed Watchdog Timer Disable bit:
**     WINDIS_ON            Windowed WDT enabled
**     WINDIS_OFF           Standard WDT selected(windowed WDT disabled)
**
*/

#define WDTPS_PS1            0x00F0
#define WDTPS_PS2            0x00F1
#define WDTPS_PS4            0x00F2
#define WDTPS_PS8            0x00F3
#define WDTPS_PS16           0x00F4
#define WDTPS_PS32           0x00F5
#define WDTPS_PS64           0x00F6
#define WDTPS_PS128          0x00F7
#define WDTPS_PS256          0x00F8
#define WDTPS_PS512          0x00F9
#define WDTPS_PS1024         0x00FA
#define WDTPS_PS2048         0x00FB
#define WDTPS_PS4096         0x00FC
#define WDTPS_PS8192         0x00FD
#define WDTPS_PS16384        0x00FE
#define WDTPS_PS32768        0x00FF

#define FWPSA_PR32           0x00EF
#define FWPSA_PR128          0x00FF

#define FWDTEN_OFF           0x005F
#define FWDTEN_NOSLP         0x007F
#define FWDTEN_SWON          0x00DF
#define FWDTEN_ON            0x00FF

#define WINDIS_ON            0x00BF
#define WINDIS_OFF           0x00FF

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
**   Brown-out Reset Enable bits:
**     BOREN_BOR0           Brown-out Reset disabled in hardware, SBOREN bit disabled
**     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
**     BOREN_BOR2           Brown-out Reset enabled only while device is active and disabled in SLEEP, SBOREN bit disabled
**     BOREN_BOR3           Brown-out Reset enabled in hardware, SBOREN bit disabled
**
**   :
**     RETCFG_ON            Retention regulator is available and controlled by RETEN bit
**     RETCFG_OFF           Retention regulator is not available
**
**   Power-up Timer Enable bit:
**     PWRTEN_OFF           PWRT disabled
**     PWRTEN_ON            PWRT enabled
**
**   Alternate I2C1 Pin Mapping bit:
**     I2C1SEL_SEC          Use  Alternate ASCL1/ASDA1 Pins For I2C1
**     I2C1SEL_PRI          Use Default SCL1/SDA1 Pins For I2C1
**
**   Brown-out Reset Voltage bits:
**     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
**     BORV_V30             Brown-out Reset set to Highest Voltage (3.0V)
**     BORV_V27             Brown-out Reset set at 2.7V
**     BORV_V18             Brown-out Reset set to lowest voltage (1.8V)
**
**   MCLR Pin Enable bit:
**     MCLRE_OFF            RA5 input pin enabled, MCLR disabled
**     MCLRE_ON             RA5 input pin disabled, MCLR pin enabled
**
*/

#define BOREN_BOR0           0x00FC
#define BOREN_BOR1           0x00FD
#define BOREN_BOR2           0x00FE
#define BOREN_BOR3           0x00FF

#define RETCFG_ON            0x00FB
#define RETCFG_OFF           0x00FF

#define PWRTEN_OFF           0x00F7
#define PWRTEN_ON            0x00FF

#define I2C1SEL_SEC          0x00EF
#define I2C1SEL_PRI          0x00FF

#define BORV_LPBOR           0x009F
#define BORV_V30             0x00BF
#define BORV_V27             0x00DF
#define BORV_V18             0x00FF

#define MCLRE_OFF            0x007F
#define MCLRE_ON             0x00FF

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
**   ICD Pin Placement Select bits:
**     ICS_PGx3             EMUC/EMUD share PGC3/PGD3
**     ICS_PGx2             EMUC/EMUD share PGC2/PGD2
**     ICS_PGx1             EMUC/EMUD share PGC1/PGD1
**
*/

#define ICS_PGx3             0x0081
#define ICS_PGx2             0x0082
#define ICS_PGx1             0x0083



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
#define __PROGRAM_LENGTH 0x2a00

#define __EEDATA_BASE 0x7ffe00
#define __EEDATA_LENGTH 0x200

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

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x800

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x800

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x800



#endif
