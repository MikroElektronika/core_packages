/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24F08KL200 processor header
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

#ifndef __PIC24F08KL200__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __24F08KL200_H
#define __24F08KL200_H

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
#define CNPD1 CNPD1
extern volatile uint16_t CNPD1 __attribute__((__sfr__));
typedef struct tagCNPD1BITS {
  uint16_t CN0PDE:1;
  uint16_t CN1PDE:1;
  uint16_t CN2PDE:1;
  uint16_t CN3PDE:1;
  uint16_t :4;
  uint16_t CN8PDE:1;
  uint16_t :2;
  uint16_t CN11PDE:1;
  uint16_t CN12PDE:1;
} CNPD1BITS;
extern volatile CNPD1BITS CNPD1bits __attribute__((__sfr__));

#define CNPD2 CNPD2
extern volatile uint16_t CNPD2 __attribute__((__sfr__));
typedef struct tagCNPD2BITS {
  uint16_t :5;
  uint16_t CN21PDE:1;
  uint16_t CN22PDE:1;
  uint16_t :6;
  uint16_t CN29PDE:1;
  uint16_t CN30PDE:1;
} CNPD2BITS;
extern volatile CNPD2BITS CNPD2bits __attribute__((__sfr__));

#define CNEN1 CNEN1
extern volatile uint16_t CNEN1 __attribute__((__sfr__));
typedef struct tagCNEN1BITS {
  uint16_t CN0IE:1;
  uint16_t CN1IE:1;
  uint16_t CN2IE:1;
  uint16_t CN3IE:1;
  uint16_t :4;
  uint16_t CN8IE:1;
  uint16_t :2;
  uint16_t CN11IE:1;
  uint16_t CN12IE:1;
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

#define CNEN2 CNEN2
extern volatile uint16_t CNEN2 __attribute__((__sfr__));
typedef struct tagCNEN2BITS {
  uint16_t :5;
  uint16_t CN21IE:1;
  uint16_t CN22IE:1;
  uint16_t :6;
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
  uint16_t :4;
  uint16_t CN8PUE:1;
  uint16_t :2;
  uint16_t CN11PUE:1;
  uint16_t CN12PUE:1;
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

#define CNPU2 CNPU2
extern volatile uint16_t CNPU2 __attribute__((__sfr__));
typedef struct tagCNPU2BITS {
  uint16_t :5;
  uint16_t CN21PUE:1;
  uint16_t CN22PUE:1;
  uint16_t :6;
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
  uint16_t :1;
  uint16_t CCP1IF:1;
  uint16_t T1IF:1;
  uint16_t :2;
  uint16_t CCP2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
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
  uint16_t :8;
  uint16_t INT2IF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile uint16_t IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  uint16_t :5;
  uint16_t T3GIF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
#define IFS4 IFS4
extern volatile uint16_t IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  uint16_t :1;
  uint16_t U1ERIF:1;
  uint16_t :6;
  uint16_t HLVDIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile uint16_t IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  uint16_t ULPWUIF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t :1;
  uint16_t CCP1IE:1;
  uint16_t T1IE:1;
  uint16_t :2;
  uint16_t CCP2IE:1;
  uint16_t T2IE:1;
  uint16_t T3IE:1;
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
  uint16_t :8;
  uint16_t INT2IE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile uint16_t IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  uint16_t :5;
  uint16_t T3GIE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
#define IEC4 IEC4
extern volatile uint16_t IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  uint16_t :1;
  uint16_t U1ERIE:1;
  uint16_t :6;
  uint16_t HLVDIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile uint16_t IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  uint16_t ULPWUIE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile uint16_t IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      uint16_t INT0IP:3;
      uint16_t :5;
      uint16_t CCP1IP:3;
      uint16_t :1;
      uint16_t T1IP:3;
    };
    struct {
      uint16_t INT0IP0:1;
      uint16_t INT0IP1:1;
      uint16_t INT0IP2:1;
      uint16_t :5;
      uint16_t CCP1IP0:1;
      uint16_t CCP1IP1:1;
      uint16_t CCP1IP2:1;
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
      uint16_t :8;
      uint16_t CCP2IP:3;
      uint16_t :1;
      uint16_t T2IP:3;
    };
    struct {
      uint16_t :8;
      uint16_t CCP2IP0:1;
      uint16_t CCP2IP1:1;
      uint16_t CCP2IP2:1;
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
      uint16_t :9;
      uint16_t U1RXIP:3;
    };
    struct {
      uint16_t T3IP0:1;
      uint16_t T3IP1:1;
      uint16_t T3IP2:1;
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
#define IPC7 IPC7
extern volatile uint16_t IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t INT2IP:3;
    };
    struct {
      uint16_t :4;
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

#define IPC9 IPC9
extern volatile uint16_t IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t T3GIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t T3GIP0:1;
      uint16_t T3GIP1:1;
      uint16_t T3GIP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile uint16_t IPC12 __attribute__((__sfr__));
#define IPC16 IPC16
extern volatile uint16_t IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t U1ERIP:3;
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
      uint16_t TECS0:1;
      uint16_t TECS1:1;
    };
    struct {
      uint16_t :8;
      uint16_t T1ECS:2;
    };
    struct {
      uint16_t :8;
      uint16_t T1ECS0:1;
      uint16_t T1ECS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define TMR2 TMR2
extern volatile uint8_t TMR2 __attribute__((__sfr__));
#define PR2 PR2
extern volatile uint16_t PR2 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile uint16_t T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      uint16_t T2CKPS:2;
      uint16_t TMR2ON:1;
      uint16_t T2OUTPS:4;
    };
    struct {
      uint16_t TCKPS:2;
      uint16_t TON:1;
      uint16_t TOUTPS:4;
    };
    struct {
      uint16_t T2CKPS0:1;
      uint16_t T2CKPS1:1;
      uint16_t :1;
      uint16_t T2OUTPS0:1;
      uint16_t T2OUTPS1:1;
      uint16_t T2OUTPS2:1;
      uint16_t T2OUTPS3:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define TMR3 TMR3
extern volatile uint16_t TMR3 __attribute__((__sfr__));
#define T3GCON T3GCON
extern volatile uint16_t T3GCON __attribute__((__sfr__));
__extension__ typedef struct tagT3GCONBITS {
  union {
    struct {
      uint16_t T3GSS:2;
      uint16_t T3GVAL:1;
      uint16_t T3GGO:1;
      uint16_t T3GSPM:1;
      uint16_t T3GTM:1;
      uint16_t T3GPOL:1;
      uint16_t TMR3GE:1;
    };
    struct {
      uint16_t T3GSS0:1;
      uint16_t T3GSS1:1;
      uint16_t :1;
      uint16_t NOT_T3DONE:1;
    };
    struct {
      uint16_t TGSS:2;
      uint16_t TGVAL:1;
      uint16_t TGGO:1;
      uint16_t TGSE:1;
      uint16_t TGTM:1;
      uint16_t TGPOL:1;
      uint16_t TGATE:1;
    };
  };
} T3GCONBITS;
extern volatile T3GCONBITS T3GCONbits __attribute__((__sfr__));

#define T3CON T3CON
extern volatile uint16_t T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      uint16_t TMR3ON:1;
      uint16_t :1;
      uint16_t NOT_T3SYNC:1;
      uint16_t T3OSCEN:1;
      uint16_t T3CKPS:2;
      uint16_t TMR3CS:2;
    };
    struct {
      uint16_t TON:1;
      uint16_t :1;
      uint16_t NOT_TSYNC:1;
      uint16_t SOSCEN:1;
      uint16_t TCKPS:2;
      uint16_t TCS:2;
    };
    struct {
      uint16_t :4;
      uint16_t T3CKPS0:1;
      uint16_t T3CKPS1:1;
      uint16_t TMR3CS0:1;
      uint16_t TMR3CS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

#define CCP1CON CCP1CON
extern volatile uint16_t CCP1CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CONBITS {
  union {
    struct {
      uint16_t CCPM:4;
      uint16_t DCB:2;
    };
    struct {
      uint16_t CCPM0:1;
      uint16_t CCPM1:1;
      uint16_t CCPM2:1;
      uint16_t CCPM3:1;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
    };
    struct {
      uint16_t CCP1M:4;
      uint16_t DC1B:2;
    };
    struct {
      uint16_t CCP1M0:1;
      uint16_t CCP1M1:1;
      uint16_t CCP1M2:1;
      uint16_t CCP1M3:1;
      uint16_t DC1B0:1;
      uint16_t DC1B1:1;
    };
  };
} CCP1CONBITS;
extern volatile CCP1CONBITS CCP1CONbits __attribute__((__sfr__));

#define CCPR1L CCPR1L
extern volatile uint8_t CCPR1L __attribute__((__sfr__));
#define CCPR1H CCPR1H
extern volatile uint8_t CCPR1H __attribute__((__sfr__));
#define CCP2CON CCP2CON
extern volatile uint16_t CCP2CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CONBITS {
  union {
    struct {
      uint16_t CCPM:4;
      uint16_t DCB:2;
    };
    struct {
      uint16_t CCPM0:1;
      uint16_t CCPM1:1;
      uint16_t CCPM2:1;
      uint16_t CCPM3:1;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
    };
    struct {
      uint16_t CCP2M:4;
      uint16_t DC2B:2;
    };
    struct {
      uint16_t CCP2M0:1;
      uint16_t CCP2M1:1;
      uint16_t CCP2M2:1;
      uint16_t CCP2M3:1;
      uint16_t DC2B0:1;
      uint16_t DC2B1:1;
    };
  };
} CCP2CONBITS;
extern volatile CCP2CONBITS CCP2CONbits __attribute__((__sfr__));

#define CCPR2L CCPR2L
extern volatile uint8_t CCPR2L __attribute__((__sfr__));
#define CCPR2H CCPR2H
extern volatile uint8_t CCPR2H __attribute__((__sfr__));
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
#define TRISA TRISA
extern volatile uint16_t TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  uint16_t TRISA0:1;
  uint16_t TRISA1:1;
  uint16_t TRISA2:1;
  uint16_t TRISA3:1;
  uint16_t TRISA4:1;
  uint16_t :1;
  uint16_t TRISA6:1;
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
  uint16_t RA6:1;
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
  uint16_t :1;
  uint16_t LATA6:1;
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
  uint16_t :1;
  uint16_t ODA6:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

#define TRISB TRISB
extern volatile uint16_t TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  uint16_t :4;
  uint16_t TRISB4:1;
  uint16_t :3;
  uint16_t TRISB8:1;
  uint16_t TRISB9:1;
  uint16_t :4;
  uint16_t TRISB14:1;
  uint16_t TRISB15:1;
} TRISBBITS;
extern volatile TRISBBITS TRISBbits __attribute__((__sfr__));

#define PORTB PORTB
extern volatile uint16_t PORTB __attribute__((__sfr__));
typedef struct tagPORTBBITS {
  uint16_t :4;
  uint16_t RB4:1;
  uint16_t :3;
  uint16_t RB8:1;
  uint16_t RB9:1;
  uint16_t :4;
  uint16_t RB14:1;
  uint16_t RB15:1;
} PORTBBITS;
extern volatile PORTBBITS PORTBbits __attribute__((__sfr__));

#define LATB LATB
extern volatile uint16_t LATB __attribute__((__sfr__));
typedef struct tagLATBBITS {
  uint16_t :4;
  uint16_t LATB4:1;
  uint16_t :3;
  uint16_t LATB8:1;
  uint16_t LATB9:1;
  uint16_t :4;
  uint16_t LATB14:1;
  uint16_t LATB15:1;
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

#define ODCB ODCB
extern volatile uint16_t ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  uint16_t :4;
  uint16_t ODB4:1;
  uint16_t :3;
  uint16_t ODB8:1;
  uint16_t ODB9:1;
  uint16_t :4;
  uint16_t ODB14:1;
  uint16_t ODB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile uint16_t PADCFG1 __attribute__((__sfr__));
__extension__ typedef struct tagPADCFG1BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t SCK1DIS:1;
      uint16_t SDO1DIS:1;
    };
    struct {
      uint16_t :4;
      uint16_t SMBDEL0:1;
      uint16_t SMBDEL1:1;
    };
  };
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

#define ADC1BUF0 ADC1BUF0
extern volatile uint16_t ADC1BUF0 __attribute__((__sfr__));
#define ADC1BUF1 ADC1BUF1
extern volatile uint16_t ADC1BUF1 __attribute__((__sfr__));
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
      uint16_t :1;
      uint16_t OFFCAL:1;
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
      uint16_t PUMPEN:1;
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

#define AD1CSSL AD1CSSL
extern volatile uint16_t AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  uint16_t CSSL0:1;
  uint16_t CSSL1:1;
  uint16_t :4;
  uint16_t CSSL6:1;
  uint16_t CSSL7:1;
  uint16_t CSSL8:1;
  uint16_t CSSL9:1;
  uint16_t CSSL10:1;
  uint16_t :2;
  uint16_t CSSL13:1;
  uint16_t CSSL14:1;
  uint16_t CSSL15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define ANCFG ANCFG
extern volatile uint16_t ANCFG __attribute__((__sfr__));
typedef struct tagANCFGBITS {
  uint16_t VBGEN:1;
} ANCFGBITS;
extern volatile ANCFGBITS ANCFGbits __attribute__((__sfr__));

#define ANSA ANSA
extern volatile uint16_t ANSA __attribute__((__sfr__));
typedef struct tagANSABITS {
  uint16_t ANSA0:1;
  uint16_t ANSA1:1;
  uint16_t ANSA2:1;
  uint16_t ANSA3:1;
} ANSABITS;
extern volatile ANSABITS ANSAbits __attribute__((__sfr__));

#define ANSELA ANSELA
extern volatile uint16_t ANSELA __attribute__((__sfr__));
typedef struct tagANSELABITS {
  uint16_t ANSA0:1;
  uint16_t ANSA1:1;
  uint16_t ANSA2:1;
  uint16_t ANSA3:1;
} ANSELABITS;
extern volatile ANSELABITS ANSELAbits __attribute__((__sfr__));

#define ANSB ANSB
extern volatile uint16_t ANSB __attribute__((__sfr__));
typedef struct tagANSBBITS {
  uint16_t :4;
  uint16_t ANSB4:1;
  uint16_t :9;
  uint16_t ANSB14:1;
  uint16_t ANSB15:1;
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

#define ANSELB ANSELB
extern volatile uint16_t ANSELB __attribute__((__sfr__));
typedef struct tagANSELBBITS {
  uint16_t :4;
  uint16_t ANSB4:1;
  uint16_t :9;
  uint16_t ANSB14:1;
  uint16_t ANSB15:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define CMSTAT CMSTAT
extern volatile uint16_t CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  uint16_t C1OUT:1;
  uint16_t :7;
  uint16_t C1EVT:1;
  uint16_t :6;
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
      uint16_t CREF:1;
      uint16_t :1;
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
      uint16_t :4;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

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
      uint16_t :3;
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
      uint16_t :1;
      uint16_t LPOSCEN:1;
      uint16_t :6;
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
      uint16_t HLSIDL:1;
      uint16_t :1;
      uint16_t HLVDEN:1;
    };
    struct {
      uint16_t HLVDL0:1;
      uint16_t HLVDL1:1;
      uint16_t HLVDL2:1;
      uint16_t HLVDL3:1;
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
__extension__ typedef struct tagPMD1BITS {
  union {
    struct {
      uint16_t ADC1MD:1;
      uint16_t :4;
      uint16_t U1MD:1;
      uint16_t :1;
      uint16_t SSP1MD:1;
      uint16_t :3;
      uint16_t T1MD:1;
      uint16_t T2MD:1;
      uint16_t T3MD:1;
    };
    struct {
      uint16_t ADCMD:1;
      uint16_t :6;
      uint16_t I2C1MD:1;
    };
    struct {
      uint16_t :7;
      uint16_t SPI1MD:1;
    };
  };
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMDIS1 PMDIS1
extern volatile uint16_t PMDIS1 __attribute__((__sfr__));
__extension__ typedef struct tagPMDIS1BITS {
  union {
    struct {
      uint16_t ADC1MD:1;
      uint16_t :4;
      uint16_t U1MD:1;
      uint16_t :1;
      uint16_t SSP1MD:1;
      uint16_t :3;
      uint16_t T1MD:1;
      uint16_t T2MD:1;
      uint16_t T3MD:1;
    };
    struct {
      uint16_t ADCMD:1;
      uint16_t :6;
      uint16_t I2C1MD:1;
    };
    struct {
      uint16_t :7;
      uint16_t SPI1MD:1;
    };
  };
} PMDIS1BITS;
extern volatile PMDIS1BITS PMDIS1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile uint16_t PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  uint16_t CCP1MD:1;
  uint16_t CCP2MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMDIS2 PMDIS2
extern volatile uint16_t PMDIS2 __attribute__((__sfr__));
typedef struct tagPMDIS2BITS {
  uint16_t CCP1MD:1;
  uint16_t CCP2MD:1;
} PMDIS2BITS;
extern volatile PMDIS2BITS PMDIS2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
__extension__ typedef struct tagPMD3BITS {
  union {
    struct {
      uint16_t :10;
      uint16_t CMPMD:1;
    };
    struct {
      uint16_t :1;
      uint16_t I2C2MD:1;
    };
    struct {
      uint16_t :1;
      uint16_t SPI2MD:1;
    };
  };
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMDIS3 PMDIS3
extern volatile uint16_t PMDIS3 __attribute__((__sfr__));
__extension__ typedef struct tagPMDIS3BITS {
  union {
    struct {
      uint16_t :10;
      uint16_t CMPMD:1;
    };
    struct {
      uint16_t :1;
      uint16_t I2C2MD:1;
    };
    struct {
      uint16_t :1;
      uint16_t SPI2MD:1;
    };
  };
} PMDIS3BITS;
extern volatile PMDIS3BITS PMDIS3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile uint16_t PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  uint16_t :1;
  uint16_t HLVDMD:1;
  uint16_t :1;
  uint16_t REFOMD:1;
  uint16_t :3;
  uint16_t ULPWUMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMDIS4 PMDIS4
extern volatile uint16_t PMDIS4 __attribute__((__sfr__));
typedef struct tagPMDIS4BITS {
  uint16_t :1;
  uint16_t HLVDMD:1;
  uint16_t :1;
  uint16_t REFOMD:1;
  uint16_t :3;
  uint16_t ULPWUMD:1;
} PMDIS4BITS;
extern volatile PMDIS4BITS PMDIS4bits __attribute__((__sfr__));



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

/* CNPD1 */
#define _CN0PDE CNPD1bits.CN0PDE
#define _CN1PDE CNPD1bits.CN1PDE
#define _CN2PDE CNPD1bits.CN2PDE
#define _CN3PDE CNPD1bits.CN3PDE
#define _CN8PDE CNPD1bits.CN8PDE
#define _CN11PDE CNPD1bits.CN11PDE
#define _CN12PDE CNPD1bits.CN12PDE

/* CNPD2 */
#define _CN21PDE CNPD2bits.CN21PDE
#define _CN22PDE CNPD2bits.CN22PDE
#define _CN29PDE CNPD2bits.CN29PDE
#define _CN30PDE CNPD2bits.CN30PDE

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN8IE CNEN1bits.CN8IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE

/* CNEN2 */
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN8PUE CNPU1bits.CN8PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE

/* CNPU2 */
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
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
#define _CCP1IF IFS0bits.CCP1IF
#define _T1IF IFS0bits.T1IF
#define _CCP2IF IFS0bits.CCP2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
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
#define _INT2IF IFS1bits.INT2IF

/* IFS2 */
#define _T3GIF IFS2bits.T3GIF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _HLVDIF IFS4bits.HLVDIF

/* IFS5 */
#define _ULPWUIF IFS5bits.ULPWUIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _CCP1IE IEC0bits.CCP1IE
#define _T1IE IEC0bits.T1IE
#define _CCP2IE IEC0bits.CCP2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
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
#define _INT2IE IEC1bits.INT2IE

/* IEC2 */
#define _T3GIE IEC2bits.T3GIE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _HLVDIE IEC4bits.HLVDIE

/* IEC5 */
#define _ULPWUIE IEC5bits.ULPWUIE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _CCP1IP IPC0bits.CCP1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _CCP1IP0 IPC0bits.CCP1IP0
#define _CCP1IP1 IPC0bits.CCP1IP1
#define _CCP1IP2 IPC0bits.CCP1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _CCP2IP IPC1bits.CCP2IP
#define _T2IP IPC1bits.T2IP
#define _CCP2IP0 IPC1bits.CCP2IP0
#define _CCP2IP1 IPC1bits.CCP2IP1
#define _CCP2IP2 IPC1bits.CCP2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
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
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC9 */
#define _T3GIP IPC9bits.T3GIP
#define _T3GIP0 IPC9bits.T3GIP0
#define _T3GIP1 IPC9bits.T3GIP1
#define _T3GIP2 IPC9bits.T3GIP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
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

/* IPC20 */
#define _ULPWUIP IPC20bits.ULPWUIP
#define _ULPWUIP0 IPC20bits.ULPWUIP0
#define _ULPWUIP1 IPC20bits.ULPWUIP1
#define _ULPWUIP2 IPC20bits.ULPWUIP2

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
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
#define _TECS T1CONbits.TECS
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1
#define _TECS0 T1CONbits.TECS0
#define _TECS1 T1CONbits.TECS1
#define _T1ECS T1CONbits.T1ECS
#define _T1ECS0 T1CONbits.T1ECS0
#define _T1ECS1 T1CONbits.T1ECS1

/* T2CON */
#define _T2CKPS T2CONbits.T2CKPS
#define _TMR2ON T2CONbits.TMR2ON
#define _T2OUTPS T2CONbits.T2OUTPS
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
#define _TOUTPS T2CONbits.TOUTPS
#define _T2CKPS0 T2CONbits.T2CKPS0
#define _T2CKPS1 T2CONbits.T2CKPS1
#define _T2OUTPS0 T2CONbits.T2OUTPS0
#define _T2OUTPS1 T2CONbits.T2OUTPS1
#define _T2OUTPS2 T2CONbits.T2OUTPS2
#define _T2OUTPS3 T2CONbits.T2OUTPS3

/* T3GCON */
#define _T3GSS T3GCONbits.T3GSS
#define _T3GVAL T3GCONbits.T3GVAL
#define _T3GGO T3GCONbits.T3GGO
#define _T3GSPM T3GCONbits.T3GSPM
#define _T3GTM T3GCONbits.T3GTM
#define _T3GPOL T3GCONbits.T3GPOL
#define _TMR3GE T3GCONbits.TMR3GE
#define _T3GSS0 T3GCONbits.T3GSS0
#define _T3GSS1 T3GCONbits.T3GSS1
#define _NOT_T3DONE T3GCONbits.NOT_T3DONE
#define _TGSS T3GCONbits.TGSS
#define _TGVAL T3GCONbits.TGVAL
#define _TGGO T3GCONbits.TGGO
#define _TGSE T3GCONbits.TGSE
#define _TGTM T3GCONbits.TGTM
#define _TGPOL T3GCONbits.TGPOL
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */

/* T3CON */
#define _TMR3ON T3CONbits.TMR3ON
#define _NOT_T3SYNC T3CONbits.NOT_T3SYNC
#define _T3OSCEN T3CONbits.T3OSCEN
#define _T3CKPS T3CONbits.T3CKPS
#define _TMR3CS T3CONbits.TMR3CS
/* Bitname _TON cannot be defined because it is used by more than one SFR */
#define _NOT_TSYNC T3CONbits.NOT_TSYNC
/* Bitname _SOSCEN cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
#define _T3CKPS0 T3CONbits.T3CKPS0
#define _T3CKPS1 T3CONbits.T3CKPS1
#define _TMR3CS0 T3CONbits.TMR3CS0
#define _TMR3CS1 T3CONbits.TMR3CS1

/* CCP1CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _CCP1M CCP1CONbits.CCP1M
#define _DC1B CCP1CONbits.DC1B
#define _CCP1M0 CCP1CONbits.CCP1M0
#define _CCP1M1 CCP1CONbits.CCP1M1
#define _CCP1M2 CCP1CONbits.CCP1M2
#define _CCP1M3 CCP1CONbits.CCP1M3
#define _DC1B0 CCP1CONbits.DC1B0
#define _DC1B1 CCP1CONbits.DC1B1

/* CCP2CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _CCP2M CCP2CONbits.CCP2M
#define _DC2B CCP2CONbits.DC2B
#define _CCP2M0 CCP2CONbits.CCP2M0
#define _CCP2M1 CCP2CONbits.CCP2M1
#define _CCP2M2 CCP2CONbits.CCP2M2
#define _CCP2M3 CCP2CONbits.CCP2M3
#define _DC2B0 CCP2CONbits.DC2B0
#define _DC2B1 CCP2CONbits.DC2B1

/* SPI1BUF */
#define _SSPBUF SPI1BUFbits.SSPBUF
#define _SPI1BUF SPI1BUFbits.SPI1BUF

/* SSP1CON1 */
#define _SSPM SSP1CON1bits.SSPM
#define _CKP SSP1CON1bits.CKP
#define _SSPEN SSP1CON1bits.SSPEN
#define _SSPOV SSP1CON1bits.SSPOV
#define _WCOL SSP1CON1bits.WCOL
#define _SSPM0 SSP1CON1bits.SSPM0
#define _SSPM1 SSP1CON1bits.SSPM1
#define _SSPM2 SSP1CON1bits.SSPM2
#define _SSPM3 SSP1CON1bits.SSPM3

/* SSP1CON2 */
#define _SEN SSP1CON2bits.SEN
#define _RSEN SSP1CON2bits.RSEN
#define _PEN SSP1CON2bits.PEN
#define _RCEN SSP1CON2bits.RCEN
#define _ACKEN SSP1CON2bits.ACKEN
#define _ACKDT SSP1CON2bits.ACKDT
#define _ACKSTAT SSP1CON2bits.ACKSTAT
#define _GCEN SSP1CON2bits.GCEN
#define _ADMSK SSP1CON2bits.ADMSK
#define _ADMSK1 SSP1CON2bits.ADMSK1
#define _ADMSK2 SSP1CON2bits.ADMSK2
#define _ADMSK3 SSP1CON2bits.ADMSK3
#define _ADMSK4 SSP1CON2bits.ADMSK4
#define _ADMSK5 SSP1CON2bits.ADMSK5

/* SSP1CON3 */
#define _DHEN SSP1CON3bits.DHEN
#define _AHEN SSP1CON3bits.AHEN
#define _SBCDE SSP1CON3bits.SBCDE
#define _SDAHT SSP1CON3bits.SDAHT
#define _BOEN SSP1CON3bits.BOEN
#define _SCIE SSP1CON3bits.SCIE
#define _PCIE SSP1CON3bits.PCIE
#define _ACKTIM SSP1CON3bits.ACKTIM

/* SSP1STAT */
#define _BF SSP1STATbits.BF
#define _UA SSP1STATbits.UA
#define _R_NOT_W SSP1STATbits.R_NOT_W
#define _S SSP1STATbits.S
#define _P SSP1STATbits.P
#define _D_NOT_A SSP1STATbits.D_NOT_A
#define _CKE SSP1STATbits.CKE
#define _SMP SSP1STATbits.SMP
#define _R_W SSP1STATbits.R_W
#define _D_A SSP1STATbits.D_A
#define _NOT_W SSP1STATbits.NOT_W
#define _NOT_A SSP1STATbits.NOT_A
#define _NOT_WRITE SSP1STATbits.NOT_WRITE
#define _NOT_ADDRESS SSP1STATbits.NOT_ADDRESS
#define _READ_WRITE SSP1STATbits.READ_WRITE
#define _DATA_ADDRESS SSP1STATbits.DATA_ADDRESS
#define _I2C_READ SSP1STATbits.I2C_READ
#define _I2C_START SSP1STATbits.I2C_START
#define _I2C_STOP SSP1STATbits.I2C_STOP
#define _I2C_DAT SSP1STATbits.I2C_DAT

/* I2C1ADD */
#define _SSPADD I2C1ADDbits.SSPADD
#define _I2CADD I2C1ADDbits.I2CADD

/* I2C1MSK */
#define _MSK0 I2C1MSKbits.MSK0
#define _MSK1 I2C1MSKbits.MSK1
#define _MSK2 I2C1MSKbits.MSK2
#define _MSK3 I2C1MSKbits.MSK3
#define _MSK4 I2C1MSKbits.MSK4
#define _MSK5 I2C1MSKbits.MSK5
#define _MSK6 I2C1MSKbits.MSK6
#define _MSK7 I2C1MSKbits.MSK7
#define _AMSK I2C1MSKbits.AMSK

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

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4
#define _TRISA6 TRISAbits.TRISA6

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4
#define _RA5 PORTAbits.RA5
#define _RA6 PORTAbits.RA6

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4
#define _LATA6 LATAbits.LATA6

/* ODCA */
#define _ODA0 ODCAbits.ODA0
#define _ODA1 ODCAbits.ODA1
#define _ODA2 ODCAbits.ODA2
#define _ODA3 ODCAbits.ODA3
#define _ODA4 ODCAbits.ODA4
#define _ODA6 ODCAbits.ODA6

/* TRISB */
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB4 PORTBbits.RB4
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB4 LATBbits.LATB4
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* ODCB */
#define _ODB4 ODCBbits.ODB4
#define _ODB8 ODCBbits.ODB8
#define _ODB9 ODCBbits.ODB9
#define _ODB14 ODCBbits.ODB14
#define _ODB15 ODCBbits.ODB15

/* PADCFG1 */
#define _SCK1DIS PADCFG1bits.SCK1DIS
#define _SDO1DIS PADCFG1bits.SDO1DIS
#define _SMBDEL0 PADCFG1bits.SMBDEL0
#define _SMBDEL1 PADCFG1bits.SMBDEL1

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
#define _OFFCAL AD1CON2bits.OFFCAL
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
#define _PUMPEN AD1CON3bits.PUMPEN
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
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3

/* AD1CSSL */
#define _CSSL0 AD1CSSLbits.CSSL0
#define _CSSL1 AD1CSSLbits.CSSL1
#define _CSSL6 AD1CSSLbits.CSSL6
#define _CSSL7 AD1CSSLbits.CSSL7
#define _CSSL8 AD1CSSLbits.CSSL8
#define _CSSL9 AD1CSSLbits.CSSL9
#define _CSSL10 AD1CSSLbits.CSSL10
#define _CSSL13 AD1CSSLbits.CSSL13
#define _CSSL14 AD1CSSLbits.CSSL14
#define _CSSL15 AD1CSSLbits.CSSL15

/* ANCFG */
#define _VBGEN ANCFGbits.VBGEN

/* ANSA */
#define _ANSA0 ANSAbits.ANSA0
#define _ANSA1 ANSAbits.ANSA1
#define _ANSA2 ANSAbits.ANSA2
#define _ANSA3 ANSAbits.ANSA3

/* ANSB */
#define _ANSB4 ANSBbits.ANSB4
#define _ANSB14 ANSBbits.ANSB14
#define _ANSB15 ANSBbits.ANSB15

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C1EVT CMSTATbits.C1EVT
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
#define _CCH CM1CONbits.CCH
#define _CREF CM1CONbits.CREF
#define _EVPOL CM1CONbits.EVPOL
#define _COUT CM1CONbits.COUT
#define _CEVT CM1CONbits.CEVT
#define _CLPWR CM1CONbits.CLPWR
#define _CPOL CM1CONbits.CPOL
#define _COE CM1CONbits.COE
#define _CON CM1CONbits.CON
#define _CCH0 CM1CONbits.CCH0
#define _CCH1 CM1CONbits.CCH1
#define _EVPOL0 CM1CONbits.EVPOL0
#define _EVPOL1 CM1CONbits.EVPOL1

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
#define _CM RCONbits.CM
#define _SBOREN RCONbits.SBOREN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR
#define _VREGS RCONbits.VREGS

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
/* Bitname _SOSCEN cannot be defined because it is used by more than one SFR */
#define _SOSCDRV OSCCONbits.SOSCDRV
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _LPOSCEN OSCCONbits.LPOSCEN
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
#define _HLSIDL HLVDCONbits.HLSIDL
#define _HLVDEN HLVDCONbits.HLVDEN
#define _HLVDL0 HLVDCONbits.HLVDL0
#define _HLVDL1 HLVDCONbits.HLVDL1
#define _HLVDL2 HLVDCONbits.HLVDL2
#define _HLVDL3 HLVDCONbits.HLVDL3

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
#define _SSP1MD PMD1bits.SSP1MD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _ADCMD PMD1bits.ADCMD
#define _I2C1MD PMD1bits.I2C1MD
#define _SPI1MD PMD1bits.SPI1MD

/* PMD2 */
#define _CCP1MD PMD2bits.CCP1MD
#define _CCP2MD PMD2bits.CCP2MD

/* PMD3 */
#define _CMPMD PMD3bits.CMPMD
#define _I2C2MD PMD3bits.I2C2MD
#define _SPI2MD PMD3bits.SPI2MD

/* PMD4 */
#define _HLVDMD PMD4bits.HLVDMD
#define _REFOMD PMD4bits.REFOMD
#define _ULPWUMD PMD4bits.ULPWUMD


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

#define _CNPD1_CN8PDE_POSITION                   0x00000008
#define _CNPD1_CN8PDE_MASK                       0x00000100
#define _CNPD1_CN8PDE_LENGTH                     0x00000001

#define _CNPD1_CN11PDE_POSITION                  0x0000000B
#define _CNPD1_CN11PDE_MASK                      0x00000800
#define _CNPD1_CN11PDE_LENGTH                    0x00000001

#define _CNPD1_CN12PDE_POSITION                  0x0000000C
#define _CNPD1_CN12PDE_MASK                      0x00001000
#define _CNPD1_CN12PDE_LENGTH                    0x00000001

#define _CNPD2_CN21PDE_POSITION                  0x00000005
#define _CNPD2_CN21PDE_MASK                      0x00000020
#define _CNPD2_CN21PDE_LENGTH                    0x00000001

#define _CNPD2_CN22PDE_POSITION                  0x00000006
#define _CNPD2_CN22PDE_MASK                      0x00000040
#define _CNPD2_CN22PDE_LENGTH                    0x00000001

#define _CNPD2_CN29PDE_POSITION                  0x0000000D
#define _CNPD2_CN29PDE_MASK                      0x00002000
#define _CNPD2_CN29PDE_LENGTH                    0x00000001

#define _CNPD2_CN30PDE_POSITION                  0x0000000E
#define _CNPD2_CN30PDE_MASK                      0x00004000
#define _CNPD2_CN30PDE_LENGTH                    0x00000001

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

#define _CNEN1_CN8IE_POSITION                    0x00000008
#define _CNEN1_CN8IE_MASK                        0x00000100
#define _CNEN1_CN8IE_LENGTH                      0x00000001

#define _CNEN1_CN11IE_POSITION                   0x0000000B
#define _CNEN1_CN11IE_MASK                       0x00000800
#define _CNEN1_CN11IE_LENGTH                     0x00000001

#define _CNEN1_CN12IE_POSITION                   0x0000000C
#define _CNEN1_CN12IE_MASK                       0x00001000
#define _CNEN1_CN12IE_LENGTH                     0x00000001

#define _CNEN2_CN21IE_POSITION                   0x00000005
#define _CNEN2_CN21IE_MASK                       0x00000020
#define _CNEN2_CN21IE_LENGTH                     0x00000001

#define _CNEN2_CN22IE_POSITION                   0x00000006
#define _CNEN2_CN22IE_MASK                       0x00000040
#define _CNEN2_CN22IE_LENGTH                     0x00000001

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

#define _CNPU1_CN8PUE_POSITION                   0x00000008
#define _CNPU1_CN8PUE_MASK                       0x00000100
#define _CNPU1_CN8PUE_LENGTH                     0x00000001

#define _CNPU1_CN11PUE_POSITION                  0x0000000B
#define _CNPU1_CN11PUE_MASK                      0x00000800
#define _CNPU1_CN11PUE_LENGTH                    0x00000001

#define _CNPU1_CN12PUE_POSITION                  0x0000000C
#define _CNPU1_CN12PUE_MASK                      0x00001000
#define _CNPU1_CN12PUE_LENGTH                    0x00000001

#define _CNPU2_CN21PUE_POSITION                  0x00000005
#define _CNPU2_CN21PUE_MASK                      0x00000020
#define _CNPU2_CN21PUE_LENGTH                    0x00000001

#define _CNPU2_CN22PUE_POSITION                  0x00000006
#define _CNPU2_CN22PUE_MASK                      0x00000040
#define _CNPU2_CN22PUE_LENGTH                    0x00000001

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

#define _IFS0_CCP1IF_POSITION                    0x00000002
#define _IFS0_CCP1IF_MASK                        0x00000004
#define _IFS0_CCP1IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_CCP2IF_POSITION                    0x00000006
#define _IFS0_CCP2IF_MASK                        0x00000040
#define _IFS0_CCP2IF_LENGTH                      0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000008
#define _IFS0_T3IF_MASK                          0x00000100
#define _IFS0_T3IF_LENGTH                        0x00000001

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

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS2_T3GIF_POSITION                     0x00000005
#define _IFS2_T3GIF_MASK                         0x00000020
#define _IFS2_T3GIF_LENGTH                       0x00000001

#define _IFS4_U1ERIF_POSITION                    0x00000001
#define _IFS4_U1ERIF_MASK                        0x00000002
#define _IFS4_U1ERIF_LENGTH                      0x00000001

#define _IFS4_HLVDIF_POSITION                    0x00000008
#define _IFS4_HLVDIF_MASK                        0x00000100
#define _IFS4_HLVDIF_LENGTH                      0x00000001

#define _IFS5_ULPWUIF_POSITION                   0x00000000
#define _IFS5_ULPWUIF_MASK                       0x00000001
#define _IFS5_ULPWUIF_LENGTH                     0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_CCP1IE_POSITION                    0x00000002
#define _IEC0_CCP1IE_MASK                        0x00000004
#define _IEC0_CCP1IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_CCP2IE_POSITION                    0x00000006
#define _IEC0_CCP2IE_MASK                        0x00000040
#define _IEC0_CCP2IE_LENGTH                      0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000008
#define _IEC0_T3IE_MASK                          0x00000100
#define _IEC0_T3IE_LENGTH                        0x00000001

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

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC2_T3GIE_POSITION                     0x00000005
#define _IEC2_T3GIE_MASK                         0x00000020
#define _IEC2_T3GIE_LENGTH                       0x00000001

#define _IEC4_U1ERIE_POSITION                    0x00000001
#define _IEC4_U1ERIE_MASK                        0x00000002
#define _IEC4_U1ERIE_LENGTH                      0x00000001

#define _IEC4_HLVDIE_POSITION                    0x00000008
#define _IEC4_HLVDIE_MASK                        0x00000100
#define _IEC4_HLVDIE_LENGTH                      0x00000001

#define _IEC5_ULPWUIE_POSITION                   0x00000000
#define _IEC5_ULPWUIE_MASK                       0x00000001
#define _IEC5_ULPWUIE_LENGTH                     0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_CCP1IP_POSITION                    0x00000008
#define _IPC0_CCP1IP_MASK                        0x00000700
#define _IPC0_CCP1IP_LENGTH                      0x00000003

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

#define _IPC0_CCP1IP0_POSITION                   0x00000008
#define _IPC0_CCP1IP0_MASK                       0x00000100
#define _IPC0_CCP1IP0_LENGTH                     0x00000001

#define _IPC0_CCP1IP1_POSITION                   0x00000009
#define _IPC0_CCP1IP1_MASK                       0x00000200
#define _IPC0_CCP1IP1_LENGTH                     0x00000001

#define _IPC0_CCP1IP2_POSITION                   0x0000000A
#define _IPC0_CCP1IP2_MASK                       0x00000400
#define _IPC0_CCP1IP2_LENGTH                     0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_CCP2IP_POSITION                    0x00000008
#define _IPC1_CCP2IP_MASK                        0x00000700
#define _IPC1_CCP2IP_LENGTH                      0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_CCP2IP0_POSITION                   0x00000008
#define _IPC1_CCP2IP0_MASK                       0x00000100
#define _IPC1_CCP2IP0_LENGTH                     0x00000001

#define _IPC1_CCP2IP1_POSITION                   0x00000009
#define _IPC1_CCP2IP1_MASK                       0x00000200
#define _IPC1_CCP2IP1_LENGTH                     0x00000001

#define _IPC1_CCP2IP2_POSITION                   0x0000000A
#define _IPC1_CCP2IP2_MASK                       0x00000400
#define _IPC1_CCP2IP2_LENGTH                     0x00000001

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

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

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

#define _IPC9_T3GIP_POSITION                     0x00000004
#define _IPC9_T3GIP_MASK                         0x00000070
#define _IPC9_T3GIP_LENGTH                       0x00000003

#define _IPC9_T3GIP0_POSITION                    0x00000004
#define _IPC9_T3GIP0_MASK                        0x00000010
#define _IPC9_T3GIP0_LENGTH                      0x00000001

#define _IPC9_T3GIP1_POSITION                    0x00000005
#define _IPC9_T3GIP1_MASK                        0x00000020
#define _IPC9_T3GIP1_LENGTH                      0x00000001

#define _IPC9_T3GIP2_POSITION                    0x00000006
#define _IPC9_T3GIP2_MASK                        0x00000040
#define _IPC9_T3GIP2_LENGTH                      0x00000001

#define _IPC16_U1ERIP_POSITION                   0x00000004
#define _IPC16_U1ERIP_MASK                       0x00000070
#define _IPC16_U1ERIP_LENGTH                     0x00000003

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

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_T1ECS_POSITION                    0x00000008
#define _T1CON_T1ECS_MASK                        0x00000300
#define _T1CON_T1ECS_LENGTH                      0x00000002

#define _T1CON_T1ECS0_POSITION                   0x00000008
#define _T1CON_T1ECS0_MASK                       0x00000100
#define _T1CON_T1ECS0_LENGTH                     0x00000001

#define _T1CON_T1ECS1_POSITION                   0x00000009
#define _T1CON_T1ECS1_MASK                       0x00000200
#define _T1CON_T1ECS1_LENGTH                     0x00000001

#define _T2CON_T2CKPS_POSITION                   0x00000000
#define _T2CON_T2CKPS_MASK                       0x00000003
#define _T2CON_T2CKPS_LENGTH                     0x00000002

#define _T2CON_TMR2ON_POSITION                   0x00000002
#define _T2CON_TMR2ON_MASK                       0x00000004
#define _T2CON_TMR2ON_LENGTH                     0x00000001

#define _T2CON_T2OUTPS_POSITION                  0x00000003
#define _T2CON_T2OUTPS_MASK                      0x00000078
#define _T2CON_T2OUTPS_LENGTH                    0x00000004

#define _T2CON_TCKPS_POSITION                    0x00000000
#define _T2CON_TCKPS_MASK                        0x00000003
#define _T2CON_TCKPS_LENGTH                      0x00000002

#define _T2CON_TON_POSITION                      0x00000002
#define _T2CON_TON_MASK                          0x00000004
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_TOUTPS_POSITION                   0x00000003
#define _T2CON_TOUTPS_MASK                       0x00000078
#define _T2CON_TOUTPS_LENGTH                     0x00000004

#define _T2CON_T2CKPS0_POSITION                  0x00000000
#define _T2CON_T2CKPS0_MASK                      0x00000001
#define _T2CON_T2CKPS0_LENGTH                    0x00000001

#define _T2CON_T2CKPS1_POSITION                  0x00000001
#define _T2CON_T2CKPS1_MASK                      0x00000002
#define _T2CON_T2CKPS1_LENGTH                    0x00000001

#define _T2CON_T2OUTPS0_POSITION                 0x00000003
#define _T2CON_T2OUTPS0_MASK                     0x00000008
#define _T2CON_T2OUTPS0_LENGTH                   0x00000001

#define _T2CON_T2OUTPS1_POSITION                 0x00000004
#define _T2CON_T2OUTPS1_MASK                     0x00000010
#define _T2CON_T2OUTPS1_LENGTH                   0x00000001

#define _T2CON_T2OUTPS2_POSITION                 0x00000005
#define _T2CON_T2OUTPS2_MASK                     0x00000020
#define _T2CON_T2OUTPS2_LENGTH                   0x00000001

#define _T2CON_T2OUTPS3_POSITION                 0x00000006
#define _T2CON_T2OUTPS3_MASK                     0x00000040
#define _T2CON_T2OUTPS3_LENGTH                   0x00000001

#define _T3GCON_T3GSS_POSITION                   0x00000000
#define _T3GCON_T3GSS_MASK                       0x00000003
#define _T3GCON_T3GSS_LENGTH                     0x00000002

#define _T3GCON_T3GVAL_POSITION                  0x00000002
#define _T3GCON_T3GVAL_MASK                      0x00000004
#define _T3GCON_T3GVAL_LENGTH                    0x00000001

#define _T3GCON_T3GGO_POSITION                   0x00000003
#define _T3GCON_T3GGO_MASK                       0x00000008
#define _T3GCON_T3GGO_LENGTH                     0x00000001

#define _T3GCON_T3GSPM_POSITION                  0x00000004
#define _T3GCON_T3GSPM_MASK                      0x00000010
#define _T3GCON_T3GSPM_LENGTH                    0x00000001

#define _T3GCON_T3GTM_POSITION                   0x00000005
#define _T3GCON_T3GTM_MASK                       0x00000020
#define _T3GCON_T3GTM_LENGTH                     0x00000001

#define _T3GCON_T3GPOL_POSITION                  0x00000006
#define _T3GCON_T3GPOL_MASK                      0x00000040
#define _T3GCON_T3GPOL_LENGTH                    0x00000001

#define _T3GCON_TMR3GE_POSITION                  0x00000007
#define _T3GCON_TMR3GE_MASK                      0x00000080
#define _T3GCON_TMR3GE_LENGTH                    0x00000001

#define _T3GCON_T3GSS0_POSITION                  0x00000000
#define _T3GCON_T3GSS0_MASK                      0x00000001
#define _T3GCON_T3GSS0_LENGTH                    0x00000001

#define _T3GCON_T3GSS1_POSITION                  0x00000001
#define _T3GCON_T3GSS1_MASK                      0x00000002
#define _T3GCON_T3GSS1_LENGTH                    0x00000001

#define _T3GCON_NOT_T3DONE_POSITION              0x00000003
#define _T3GCON_NOT_T3DONE_MASK                  0x00000008
#define _T3GCON_NOT_T3DONE_LENGTH                0x00000001

#define _T3GCON_TGSS_POSITION                    0x00000000
#define _T3GCON_TGSS_MASK                        0x00000003
#define _T3GCON_TGSS_LENGTH                      0x00000002

#define _T3GCON_TGVAL_POSITION                   0x00000002
#define _T3GCON_TGVAL_MASK                       0x00000004
#define _T3GCON_TGVAL_LENGTH                     0x00000001

#define _T3GCON_TGGO_POSITION                    0x00000003
#define _T3GCON_TGGO_MASK                        0x00000008
#define _T3GCON_TGGO_LENGTH                      0x00000001

#define _T3GCON_TGSE_POSITION                    0x00000004
#define _T3GCON_TGSE_MASK                        0x00000010
#define _T3GCON_TGSE_LENGTH                      0x00000001

#define _T3GCON_TGTM_POSITION                    0x00000005
#define _T3GCON_TGTM_MASK                        0x00000020
#define _T3GCON_TGTM_LENGTH                      0x00000001

#define _T3GCON_TGPOL_POSITION                   0x00000006
#define _T3GCON_TGPOL_MASK                       0x00000040
#define _T3GCON_TGPOL_LENGTH                     0x00000001

#define _T3GCON_TGATE_POSITION                   0x00000007
#define _T3GCON_TGATE_MASK                       0x00000080
#define _T3GCON_TGATE_LENGTH                     0x00000001

#define _T3CON_TMR3ON_POSITION                   0x00000000
#define _T3CON_TMR3ON_MASK                       0x00000001
#define _T3CON_TMR3ON_LENGTH                     0x00000001

#define _T3CON_NOT_T3SYNC_POSITION               0x00000002
#define _T3CON_NOT_T3SYNC_MASK                   0x00000004
#define _T3CON_NOT_T3SYNC_LENGTH                 0x00000001

#define _T3CON_T3OSCEN_POSITION                  0x00000003
#define _T3CON_T3OSCEN_MASK                      0x00000008
#define _T3CON_T3OSCEN_LENGTH                    0x00000001

#define _T3CON_T3CKPS_POSITION                   0x00000004
#define _T3CON_T3CKPS_MASK                       0x00000030
#define _T3CON_T3CKPS_LENGTH                     0x00000002

#define _T3CON_TMR3CS_POSITION                   0x00000006
#define _T3CON_TMR3CS_MASK                       0x000000C0
#define _T3CON_TMR3CS_LENGTH                     0x00000002

#define _T3CON_TON_POSITION                      0x00000000
#define _T3CON_TON_MASK                          0x00000001
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_NOT_TSYNC_POSITION                0x00000002
#define _T3CON_NOT_TSYNC_MASK                    0x00000004
#define _T3CON_NOT_TSYNC_LENGTH                  0x00000001

#define _T3CON_SOSCEN_POSITION                   0x00000003
#define _T3CON_SOSCEN_MASK                       0x00000008
#define _T3CON_SOSCEN_LENGTH                     0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000030
#define _T3CON_TCKPS_LENGTH                      0x00000002

#define _T3CON_TCS_POSITION                      0x00000006
#define _T3CON_TCS_MASK                          0x000000C0
#define _T3CON_TCS_LENGTH                        0x00000002

#define _T3CON_T3CKPS0_POSITION                  0x00000004
#define _T3CON_T3CKPS0_MASK                      0x00000010
#define _T3CON_T3CKPS0_LENGTH                    0x00000001

#define _T3CON_T3CKPS1_POSITION                  0x00000005
#define _T3CON_T3CKPS1_MASK                      0x00000020
#define _T3CON_T3CKPS1_LENGTH                    0x00000001

#define _T3CON_TMR3CS0_POSITION                  0x00000006
#define _T3CON_TMR3CS0_MASK                      0x00000040
#define _T3CON_TMR3CS0_LENGTH                    0x00000001

#define _T3CON_TMR3CS1_POSITION                  0x00000007
#define _T3CON_TMR3CS1_MASK                      0x00000080
#define _T3CON_TMR3CS1_LENGTH                    0x00000001

#define _CCP1CON_CCPM_POSITION                   0x00000000
#define _CCP1CON_CCPM_MASK                       0x0000000F
#define _CCP1CON_CCPM_LENGTH                     0x00000004

#define _CCP1CON_DCB_POSITION                    0x00000004
#define _CCP1CON_DCB_MASK                        0x00000030
#define _CCP1CON_DCB_LENGTH                      0x00000002

#define _CCP1CON_CCPM0_POSITION                  0x00000000
#define _CCP1CON_CCPM0_MASK                      0x00000001
#define _CCP1CON_CCPM0_LENGTH                    0x00000001

#define _CCP1CON_CCPM1_POSITION                  0x00000001
#define _CCP1CON_CCPM1_MASK                      0x00000002
#define _CCP1CON_CCPM1_LENGTH                    0x00000001

#define _CCP1CON_CCPM2_POSITION                  0x00000002
#define _CCP1CON_CCPM2_MASK                      0x00000004
#define _CCP1CON_CCPM2_LENGTH                    0x00000001

#define _CCP1CON_CCPM3_POSITION                  0x00000003
#define _CCP1CON_CCPM3_MASK                      0x00000008
#define _CCP1CON_CCPM3_LENGTH                    0x00000001

#define _CCP1CON_DCB0_POSITION                   0x00000004
#define _CCP1CON_DCB0_MASK                       0x00000010
#define _CCP1CON_DCB0_LENGTH                     0x00000001

#define _CCP1CON_DCB1_POSITION                   0x00000005
#define _CCP1CON_DCB1_MASK                       0x00000020
#define _CCP1CON_DCB1_LENGTH                     0x00000001

#define _CCP1CON_CCP1M_POSITION                  0x00000000
#define _CCP1CON_CCP1M_MASK                      0x0000000F
#define _CCP1CON_CCP1M_LENGTH                    0x00000004

#define _CCP1CON_DC1B_POSITION                   0x00000004
#define _CCP1CON_DC1B_MASK                       0x00000030
#define _CCP1CON_DC1B_LENGTH                     0x00000002

#define _CCP1CON_CCP1M0_POSITION                 0x00000000
#define _CCP1CON_CCP1M0_MASK                     0x00000001
#define _CCP1CON_CCP1M0_LENGTH                   0x00000001

#define _CCP1CON_CCP1M1_POSITION                 0x00000001
#define _CCP1CON_CCP1M1_MASK                     0x00000002
#define _CCP1CON_CCP1M1_LENGTH                   0x00000001

#define _CCP1CON_CCP1M2_POSITION                 0x00000002
#define _CCP1CON_CCP1M2_MASK                     0x00000004
#define _CCP1CON_CCP1M2_LENGTH                   0x00000001

#define _CCP1CON_CCP1M3_POSITION                 0x00000003
#define _CCP1CON_CCP1M3_MASK                     0x00000008
#define _CCP1CON_CCP1M3_LENGTH                   0x00000001

#define _CCP1CON_DC1B0_POSITION                  0x00000004
#define _CCP1CON_DC1B0_MASK                      0x00000010
#define _CCP1CON_DC1B0_LENGTH                    0x00000001

#define _CCP1CON_DC1B1_POSITION                  0x00000005
#define _CCP1CON_DC1B1_MASK                      0x00000020
#define _CCP1CON_DC1B1_LENGTH                    0x00000001

#define _CCP2CON_CCPM_POSITION                   0x00000000
#define _CCP2CON_CCPM_MASK                       0x0000000F
#define _CCP2CON_CCPM_LENGTH                     0x00000004

#define _CCP2CON_DCB_POSITION                    0x00000004
#define _CCP2CON_DCB_MASK                        0x00000030
#define _CCP2CON_DCB_LENGTH                      0x00000002

#define _CCP2CON_CCPM0_POSITION                  0x00000000
#define _CCP2CON_CCPM0_MASK                      0x00000001
#define _CCP2CON_CCPM0_LENGTH                    0x00000001

#define _CCP2CON_CCPM1_POSITION                  0x00000001
#define _CCP2CON_CCPM1_MASK                      0x00000002
#define _CCP2CON_CCPM1_LENGTH                    0x00000001

#define _CCP2CON_CCPM2_POSITION                  0x00000002
#define _CCP2CON_CCPM2_MASK                      0x00000004
#define _CCP2CON_CCPM2_LENGTH                    0x00000001

#define _CCP2CON_CCPM3_POSITION                  0x00000003
#define _CCP2CON_CCPM3_MASK                      0x00000008
#define _CCP2CON_CCPM3_LENGTH                    0x00000001

#define _CCP2CON_DCB0_POSITION                   0x00000004
#define _CCP2CON_DCB0_MASK                       0x00000010
#define _CCP2CON_DCB0_LENGTH                     0x00000001

#define _CCP2CON_DCB1_POSITION                   0x00000005
#define _CCP2CON_DCB1_MASK                       0x00000020
#define _CCP2CON_DCB1_LENGTH                     0x00000001

#define _CCP2CON_CCP2M_POSITION                  0x00000000
#define _CCP2CON_CCP2M_MASK                      0x0000000F
#define _CCP2CON_CCP2M_LENGTH                    0x00000004

#define _CCP2CON_DC2B_POSITION                   0x00000004
#define _CCP2CON_DC2B_MASK                       0x00000030
#define _CCP2CON_DC2B_LENGTH                     0x00000002

#define _CCP2CON_CCP2M0_POSITION                 0x00000000
#define _CCP2CON_CCP2M0_MASK                     0x00000001
#define _CCP2CON_CCP2M0_LENGTH                   0x00000001

#define _CCP2CON_CCP2M1_POSITION                 0x00000001
#define _CCP2CON_CCP2M1_MASK                     0x00000002
#define _CCP2CON_CCP2M1_LENGTH                   0x00000001

#define _CCP2CON_CCP2M2_POSITION                 0x00000002
#define _CCP2CON_CCP2M2_MASK                     0x00000004
#define _CCP2CON_CCP2M2_LENGTH                   0x00000001

#define _CCP2CON_CCP2M3_POSITION                 0x00000003
#define _CCP2CON_CCP2M3_MASK                     0x00000008
#define _CCP2CON_CCP2M3_LENGTH                   0x00000001

#define _CCP2CON_DC2B0_POSITION                  0x00000004
#define _CCP2CON_DC2B0_MASK                      0x00000010
#define _CCP2CON_DC2B0_LENGTH                    0x00000001

#define _CCP2CON_DC2B1_POSITION                  0x00000005
#define _CCP2CON_DC2B1_MASK                      0x00000020
#define _CCP2CON_DC2B1_LENGTH                    0x00000001

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

#define _SSP1ADD_SSPADD_POSITION                 0x00000000
#define _SSP1ADD_SSPADD_MASK                     0x000000FF
#define _SSP1ADD_SSPADD_LENGTH                   0x00000008

#define _SSP1ADD_I2CADD_POSITION                 0x00000000
#define _SSP1ADD_I2CADD_MASK                     0x000000FF
#define _SSP1ADD_I2CADD_LENGTH                   0x00000008

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

#define _TRISA_TRISA6_POSITION                   0x00000006
#define _TRISA_TRISA6_MASK                       0x00000040
#define _TRISA_TRISA6_LENGTH                     0x00000001

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

#define _PORTA_RA6_POSITION                      0x00000006
#define _PORTA_RA6_MASK                          0x00000040
#define _PORTA_RA6_LENGTH                        0x00000001

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

#define _LATA_LATA6_POSITION                     0x00000006
#define _LATA_LATA6_MASK                         0x00000040
#define _LATA_LATA6_LENGTH                       0x00000001

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

#define _ODCA_ODA6_POSITION                      0x00000006
#define _ODCA_ODA6_MASK                          0x00000040
#define _ODCA_ODA6_LENGTH                        0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _ODCB_ODB4_POSITION                      0x00000004
#define _ODCB_ODB4_MASK                          0x00000010
#define _ODCB_ODB4_LENGTH                        0x00000001

#define _ODCB_ODB8_POSITION                      0x00000008
#define _ODCB_ODB8_MASK                          0x00000100
#define _ODCB_ODB8_LENGTH                        0x00000001

#define _ODCB_ODB9_POSITION                      0x00000009
#define _ODCB_ODB9_MASK                          0x00000200
#define _ODCB_ODB9_LENGTH                        0x00000001

#define _ODCB_ODB14_POSITION                     0x0000000E
#define _ODCB_ODB14_MASK                         0x00004000
#define _ODCB_ODB14_LENGTH                       0x00000001

#define _ODCB_ODB15_POSITION                     0x0000000F
#define _ODCB_ODB15_MASK                         0x00008000
#define _ODCB_ODB15_LENGTH                       0x00000001

#define _PADCFG1_SCK1DIS_POSITION                0x00000008
#define _PADCFG1_SCK1DIS_MASK                    0x00000100
#define _PADCFG1_SCK1DIS_LENGTH                  0x00000001

#define _PADCFG1_SDO1DIS_POSITION                0x00000009
#define _PADCFG1_SDO1DIS_MASK                    0x00000200
#define _PADCFG1_SDO1DIS_LENGTH                  0x00000001

#define _PADCFG1_SMBDEL0_POSITION                0x00000004
#define _PADCFG1_SMBDEL0_MASK                    0x00000010
#define _PADCFG1_SMBDEL0_LENGTH                  0x00000001

#define _PADCFG1_SMBDEL1_POSITION                0x00000005
#define _PADCFG1_SMBDEL1_MASK                    0x00000020
#define _PADCFG1_SMBDEL1_LENGTH                  0x00000001

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

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

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

#define _AD1CON3_PUMPEN_POSITION                 0x0000000D
#define _AD1CON3_PUMPEN_MASK                     0x00002000
#define _AD1CON3_PUMPEN_LENGTH                   0x00000001

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

#define _AD1CSSL_CSSL0_POSITION                  0x00000000
#define _AD1CSSL_CSSL0_MASK                      0x00000001
#define _AD1CSSL_CSSL0_LENGTH                    0x00000001

#define _AD1CSSL_CSSL1_POSITION                  0x00000001
#define _AD1CSSL_CSSL1_MASK                      0x00000002
#define _AD1CSSL_CSSL1_LENGTH                    0x00000001

#define _AD1CSSL_CSSL6_POSITION                  0x00000006
#define _AD1CSSL_CSSL6_MASK                      0x00000040
#define _AD1CSSL_CSSL6_LENGTH                    0x00000001

#define _AD1CSSL_CSSL7_POSITION                  0x00000007
#define _AD1CSSL_CSSL7_MASK                      0x00000080
#define _AD1CSSL_CSSL7_LENGTH                    0x00000001

#define _AD1CSSL_CSSL8_POSITION                  0x00000008
#define _AD1CSSL_CSSL8_MASK                      0x00000100
#define _AD1CSSL_CSSL8_LENGTH                    0x00000001

#define _AD1CSSL_CSSL9_POSITION                  0x00000009
#define _AD1CSSL_CSSL9_MASK                      0x00000200
#define _AD1CSSL_CSSL9_LENGTH                    0x00000001

#define _AD1CSSL_CSSL10_POSITION                 0x0000000A
#define _AD1CSSL_CSSL10_MASK                     0x00000400
#define _AD1CSSL_CSSL10_LENGTH                   0x00000001

#define _AD1CSSL_CSSL13_POSITION                 0x0000000D
#define _AD1CSSL_CSSL13_MASK                     0x00002000
#define _AD1CSSL_CSSL13_LENGTH                   0x00000001

#define _AD1CSSL_CSSL14_POSITION                 0x0000000E
#define _AD1CSSL_CSSL14_MASK                     0x00004000
#define _AD1CSSL_CSSL14_LENGTH                   0x00000001

#define _AD1CSSL_CSSL15_POSITION                 0x0000000F
#define _AD1CSSL_CSSL15_MASK                     0x00008000
#define _AD1CSSL_CSSL15_LENGTH                   0x00000001

#define _ANCFG_VBGEN_POSITION                    0x00000000
#define _ANCFG_VBGEN_MASK                        0x00000001
#define _ANCFG_VBGEN_LENGTH                      0x00000001

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

#define _ANSB_ANSB4_POSITION                     0x00000004
#define _ANSB_ANSB4_MASK                         0x00000010
#define _ANSB_ANSB4_LENGTH                       0x00000001

#define _ANSB_ANSB14_POSITION                    0x0000000E
#define _ANSB_ANSB14_MASK                        0x00004000
#define _ANSB_ANSB14_LENGTH                      0x00000001

#define _ANSB_ANSB15_POSITION                    0x0000000F
#define _ANSB_ANSB15_MASK                        0x00008000
#define _ANSB_ANSB15_LENGTH                      0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

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
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

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

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

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

#define _OSCCON_LPOSCEN_POSITION                 0x00000001
#define _OSCCON_LPOSCEN_MASK                     0x00000002
#define _OSCCON_LPOSCEN_LENGTH                   0x00000001

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

#define _HLVDCON_HLSIDL_POSITION                 0x0000000D
#define _HLVDCON_HLSIDL_MASK                     0x00002000
#define _HLVDCON_HLSIDL_LENGTH                   0x00000001

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

#define _PMD1_SSP1MD_POSITION                    0x00000007
#define _PMD1_SSP1MD_MASK                        0x00000080
#define _PMD1_SSP1MD_LENGTH                      0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD1_T3MD_POSITION                      0x0000000D
#define _PMD1_T3MD_MASK                          0x00002000
#define _PMD1_T3MD_LENGTH                        0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000007
#define _PMD1_SPI1MD_MASK                        0x00000080
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMDIS1_ADC1MD_POSITION                  0x00000000
#define _PMDIS1_ADC1MD_MASK                      0x00000001
#define _PMDIS1_ADC1MD_LENGTH                    0x00000001

#define _PMDIS1_U1MD_POSITION                    0x00000005
#define _PMDIS1_U1MD_MASK                        0x00000020
#define _PMDIS1_U1MD_LENGTH                      0x00000001

#define _PMDIS1_SSP1MD_POSITION                  0x00000007
#define _PMDIS1_SSP1MD_MASK                      0x00000080
#define _PMDIS1_SSP1MD_LENGTH                    0x00000001

#define _PMDIS1_T1MD_POSITION                    0x0000000B
#define _PMDIS1_T1MD_MASK                        0x00000800
#define _PMDIS1_T1MD_LENGTH                      0x00000001

#define _PMDIS1_T2MD_POSITION                    0x0000000C
#define _PMDIS1_T2MD_MASK                        0x00001000
#define _PMDIS1_T2MD_LENGTH                      0x00000001

#define _PMDIS1_T3MD_POSITION                    0x0000000D
#define _PMDIS1_T3MD_MASK                        0x00002000
#define _PMDIS1_T3MD_LENGTH                      0x00000001

#define _PMDIS1_ADCMD_POSITION                   0x00000000
#define _PMDIS1_ADCMD_MASK                       0x00000001
#define _PMDIS1_ADCMD_LENGTH                     0x00000001

#define _PMDIS1_I2C1MD_POSITION                  0x00000007
#define _PMDIS1_I2C1MD_MASK                      0x00000080
#define _PMDIS1_I2C1MD_LENGTH                    0x00000001

#define _PMDIS1_SPI1MD_POSITION                  0x00000007
#define _PMDIS1_SPI1MD_MASK                      0x00000080
#define _PMDIS1_SPI1MD_LENGTH                    0x00000001

#define _PMD2_CCP1MD_POSITION                    0x00000000
#define _PMD2_CCP1MD_MASK                        0x00000001
#define _PMD2_CCP1MD_LENGTH                      0x00000001

#define _PMD2_CCP2MD_POSITION                    0x00000001
#define _PMD2_CCP2MD_MASK                        0x00000002
#define _PMD2_CCP2MD_LENGTH                      0x00000001

#define _PMDIS2_CCP1MD_POSITION                  0x00000000
#define _PMDIS2_CCP1MD_MASK                      0x00000001
#define _PMDIS2_CCP1MD_LENGTH                    0x00000001

#define _PMDIS2_CCP2MD_POSITION                  0x00000001
#define _PMDIS2_CCP2MD_MASK                      0x00000002
#define _PMDIS2_CCP2MD_LENGTH                    0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_SPI2MD_POSITION                    0x00000001
#define _PMD3_SPI2MD_MASK                        0x00000002
#define _PMD3_SPI2MD_LENGTH                      0x00000001

#define _PMDIS3_CMPMD_POSITION                   0x0000000A
#define _PMDIS3_CMPMD_MASK                       0x00000400
#define _PMDIS3_CMPMD_LENGTH                     0x00000001

#define _PMDIS3_I2C2MD_POSITION                  0x00000001
#define _PMDIS3_I2C2MD_MASK                      0x00000002
#define _PMDIS3_I2C2MD_LENGTH                    0x00000001

#define _PMDIS3_SPI2MD_POSITION                  0x00000001
#define _PMDIS3_SPI2MD_MASK                      0x00000002
#define _PMDIS3_SPI2MD_LENGTH                    0x00000001

#define _PMD4_HLVDMD_POSITION                    0x00000001
#define _PMD4_HLVDMD_MASK                        0x00000002
#define _PMD4_HLVDMD_LENGTH                      0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD4_ULPWUMD_POSITION                   0x00000007
#define _PMD4_ULPWUMD_MASK                       0x00000080
#define _PMD4_ULPWUMD_LENGTH                     0x00000001

#define _PMDIS4_HLVDMD_POSITION                  0x00000001
#define _PMDIS4_HLVDMD_MASK                      0x00000002
#define _PMDIS4_HLVDMD_LENGTH                    0x00000001

#define _PMDIS4_REFOMD_POSITION                  0x00000003
#define _PMDIS4_REFOMD_MASK                      0x00000008
#define _PMDIS4_REFOMD_LENGTH                    0x00000001

#define _PMDIS4_ULPWUMD_POSITION                 0x00000007
#define _PMDIS4_ULPWUMD_MASK                     0x00000080
#define _PMDIS4_ULPWUMD_LENGTH                   0x00000001



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
**     BSS_HI1K             High Security Boot Protect 000200 - 000AFE
**     BSS_STD1K            Standard Security Boot Protect 000200 - 000AFE
**     BSS_OFF              No boot flash segment
**
*/

#define BWRP_ON              0x000E
#define BWRP_OFF             0x000F

#define BSS_HI1K             0x0005
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
**   General Segment Flash Write Protect:
**     GWRP_ON              General segment is write-protected
**     GWRP_OFF             General segment may be written
**
**   General Segment Code Protect:
**     GSS0_ON              Standard security enabled
**     GSS0_OFF             No Protection
**
*/

#define GWRP_ON              0x0002
#define GWRP_OFF             0x0003

#define GSS0_ON              0x0001
#define GSS0_OFF             0x0003

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
**     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL (FRCDIV+PLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL (XT+PLL, HS+PLL, EC+PLL)
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC_LPFRC          500KHz Low Power FRC with Postscaler (LPFRC)
**     FNOSC_FRCDIV         8MHz FRC with Postscaler (FRCDIV)
**
**   SOSC Source Type:
**     SOSCSRC_DIG          Digital Mode for use with external clock on SCLKI
**     SOSCSRC_ANA          Analog Mode for use with crystal
**
**   LPRC Power and Accuracy:
**     LPRCSEL_LP           Low Power/Low Accuracy
**     LPRCSEL_HP           High Power/High Accuracy
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
**   Primary Oscillator Mode:
**     POSCMD_EC            External clock mode selected
**     POSCMD_XT            XT oscillator mode selected
**     POSCMD_HS            HS oscillator mode selected
**     POSCMD_NONE          Primary oscillator disabled
**
**   CLKO Pin I/O Function:
**     OSCIOFNC_ON          Port I/O enabled (CLKO disabled)
**     OSCIOFNC_OFF         CLKO output signal enabled
**
**   Primary Oscillator Frequency Range:
**     POSCFREQ_LS          Primary Oscillator/External Clock frequency <100kHz
**     POSCFREQ_MS          Primary Oscillator/External Clock frequency between 100kHz to 8MHz
**     POSCFREQ_HS          Primary Oscillator/External Clock frequency >8MHz
**
**   SOSC Power Selection Configuration bits:
**     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
**     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
**
**   Clock Switching and Monitor Selection:
**     FCKSM_CSECME         Clock Switching and Fail-safe Clock Monitor Enabled
**     FCKSM_CSECMD         Clock Switching Enabled; Fail-safe Clock Monitor Disabled
**     FCKSM_CSDCMD         Clock Switching and Fail-safe Clock Monitor Disabled
**
*/

#define POSCMD_EC            0x00FC
#define POSCMD_XT            0x00FD
#define POSCMD_HS            0x00FE
#define POSCMD_NONE          0x00FF

#define OSCIOFNC_ON          0x00FB
#define OSCIOFNC_OFF         0x00FF

#define POSCFREQ_LS          0x00EF
#define POSCFREQ_MS          0x00F7
#define POSCFREQ_HS          0x00FF

#define SOSCSEL_SOSCLP       0x00DF
#define SOSCSEL_SOSCHP       0x00FF

#define FCKSM_CSECME         0x003F
#define FCKSM_CSECMD         0x007F
#define FCKSM_CSDCMD         0x00FF

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
**     FWDTEN_NOSLP         WDT enabled while device is active; SWDTEN bit disabled
**     FWDTEN_SWON          WDT controlled with SWDTEN bit setting
**     FWDTEN_ON            WDT enabled in hardware
**
**   Windowed Watchdog Timer Disable bit:
**     WINDIS_ON            Windowed WDT enabled
**     WINDIS_OFF           Standard WDT selected (windowed WDT disabled)
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
**     BOREN_BOR0           Brown-out Reset disabled in hardware; SBOREN bit disabled
**     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
**     BOREN_BOR2           Enabled only while device is active; SBOREN bit disabled
**     BOREN_BOR3           Enabled in hardware; SBOREN bit disabled
**
**   Power-up Timer Enable:
**     PWRTEN_OFF           PWRT disabled
**     PWRTEN_ON            PWRT enabled
**
**   Alternate I2C1 Pin Mapping bit:
**     I2C1SEL_SEC          Alternate ASCL1/ASDA1 Pins for I2C1
**     I2C1SEL_PRI          Default SCL1/SDA1 Pins for I2C1
**
**   Brown-out Reset Voltage bits:
**     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
**     BORV_V30             Brown-out Reset at 3.0V
**     BORV_V27             Brown-out Reset at 2.7V
**     BORV_V18             Brown-out Reset at 1.8V
**
**   MCLR Pin Enable bit:
**     MCLRE_OFF            RA5 input enabled; MCLR disabled
**     MCLRE_ON             RA5 input disabled; MCLR enabled
**
*/

#define BOREN_BOR0           0x00F8
#define BOREN_BOR1           0x00F9
#define BOREN_BOR2           0x00FA
#define BOREN_BOR3           0x00FB

#define PWRTEN_OFF           0x00F3
#define PWRTEN_ON            0x00FB

#define I2C1SEL_SEC          0x00EB
#define I2C1SEL_PRI          0x00FB

#define BORV_LPBOR           0x009B
#define BORV_V30             0x00BB
#define BORV_V27             0x00DB
#define BORV_V18             0x00FB

#define MCLRE_OFF            0x007B
#define MCLRE_ON             0x00FB

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
**   ICD Pin Placement Select:
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
#define __PROGRAM_LENGTH 0x1400

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
#define __DATA_LENGTH 0x200

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x200

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x200



#endif
