// Generated 05/01/2024 GMT

/*
 * Copyright © 2024, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 * 
 *     1. Redistributions of source code must retain the above copyright notice, this list of
 *        conditions and the following disclaimer.
 * 
 *     2. Redistributions in binary form must reproduce the above copyright notice, this list
 *        of conditions and the following disclaimer in the documentation and/or other
 *        materials provided with the distribution. Publication is not required when
 *        this file is used in an embedded application.
 * 
 *     3. Microchip's name may not be used to endorse or promote products derived from this
 *        software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PIC16F1455_H_
#define _PIC16F1455_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F1455
 */
#ifndef _XC_H_
#warning Header file pic16f1455.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: INDF0
#define INDF0 INDF0
extern volatile unsigned char           INDF0               __at(0x000);
#ifndef _LIB_BUILD
asm("INDF0 equ 00h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF0                  :8;
    };
} INDF0bits_t;
extern volatile INDF0bits_t INDF0bits __at(0x000);
// bitfield macros
#define _INDF0_INDF0_POSN                                   0x0
#define _INDF0_INDF0_POSITION                               0x0
#define _INDF0_INDF0_SIZE                                   0x8
#define _INDF0_INDF0_LENGTH                                 0x8
#define _INDF0_INDF0_MASK                                   0xFF

// Register: INDF1
#define INDF1 INDF1
extern volatile unsigned char           INDF1               __at(0x001);
#ifndef _LIB_BUILD
asm("INDF1 equ 01h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF1                  :8;
    };
} INDF1bits_t;
extern volatile INDF1bits_t INDF1bits __at(0x001);
// bitfield macros
#define _INDF1_INDF1_POSN                                   0x0
#define _INDF1_INDF1_POSITION                               0x0
#define _INDF1_INDF1_SIZE                                   0x8
#define _INDF1_INDF1_LENGTH                                 0x8
#define _INDF1_INDF1_MASK                                   0xFF

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0x002);
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCL                    :8;
    };
} PCLbits_t;
extern volatile PCLbits_t PCLbits __at(0x002);
// bitfield macros
#define _PCL_PCL_POSN                                       0x0
#define _PCL_PCL_POSITION                                   0x0
#define _PCL_PCL_SIZE                                       0x8
#define _PCL_PCL_LENGTH                                     0x8
#define _PCL_PCL_MASK                                       0xFF

// Register: STATUS
#define STATUS STATUS
extern volatile unsigned char           STATUS              __at(0x003);
#ifndef _LIB_BUILD
asm("STATUS equ 03h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0x003);
// bitfield macros
#define _STATUS_C_POSN                                      0x0
#define _STATUS_C_POSITION                                  0x0
#define _STATUS_C_SIZE                                      0x1
#define _STATUS_C_LENGTH                                    0x1
#define _STATUS_C_MASK                                      0x1
#define _STATUS_DC_POSN                                     0x1
#define _STATUS_DC_POSITION                                 0x1
#define _STATUS_DC_SIZE                                     0x1
#define _STATUS_DC_LENGTH                                   0x1
#define _STATUS_DC_MASK                                     0x2
#define _STATUS_Z_POSN                                      0x2
#define _STATUS_Z_POSITION                                  0x2
#define _STATUS_Z_SIZE                                      0x1
#define _STATUS_Z_LENGTH                                    0x1
#define _STATUS_Z_MASK                                      0x4
#define _STATUS_nPD_POSN                                    0x3
#define _STATUS_nPD_POSITION                                0x3
#define _STATUS_nPD_SIZE                                    0x1
#define _STATUS_nPD_LENGTH                                  0x1
#define _STATUS_nPD_MASK                                    0x8
#define _STATUS_nTO_POSN                                    0x4
#define _STATUS_nTO_POSITION                                0x4
#define _STATUS_nTO_SIZE                                    0x1
#define _STATUS_nTO_LENGTH                                  0x1
#define _STATUS_nTO_MASK                                    0x10
#define _STATUS_CARRY_POSN                                  0x0
#define _STATUS_CARRY_POSITION                              0x0
#define _STATUS_CARRY_SIZE                                  0x1
#define _STATUS_CARRY_LENGTH                                0x1
#define _STATUS_CARRY_MASK                                  0x1
#define _STATUS_ZERO_POSN                                   0x2
#define _STATUS_ZERO_POSITION                               0x2
#define _STATUS_ZERO_SIZE                                   0x1
#define _STATUS_ZERO_LENGTH                                 0x1
#define _STATUS_ZERO_MASK                                   0x4

// Register: FSR0
#define FSR0 FSR0
extern volatile unsigned short          FSR0                __at(0x004);

// Register: FSR0L
#define FSR0L FSR0L
extern volatile unsigned char           FSR0L               __at(0x004);
#ifndef _LIB_BUILD
asm("FSR0L equ 04h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L                  :8;
    };
} FSR0Lbits_t;
extern volatile FSR0Lbits_t FSR0Lbits __at(0x004);
// bitfield macros
#define _FSR0L_FSR0L_POSN                                   0x0
#define _FSR0L_FSR0L_POSITION                               0x0
#define _FSR0L_FSR0L_SIZE                                   0x8
#define _FSR0L_FSR0L_LENGTH                                 0x8
#define _FSR0L_FSR0L_MASK                                   0xFF

// Register: FSR0H
#define FSR0H FSR0H
extern volatile unsigned char           FSR0H               __at(0x005);
#ifndef _LIB_BUILD
asm("FSR0H equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H                  :8;
    };
} FSR0Hbits_t;
extern volatile FSR0Hbits_t FSR0Hbits __at(0x005);
// bitfield macros
#define _FSR0H_FSR0H_POSN                                   0x0
#define _FSR0H_FSR0H_POSITION                               0x0
#define _FSR0H_FSR0H_SIZE                                   0x8
#define _FSR0H_FSR0H_LENGTH                                 0x8
#define _FSR0H_FSR0H_MASK                                   0xFF

// Register: FSR1
#define FSR1 FSR1
extern volatile unsigned short          FSR1                __at(0x006);

// Register: FSR1L
#define FSR1L FSR1L
extern volatile unsigned char           FSR1L               __at(0x006);
#ifndef _LIB_BUILD
asm("FSR1L equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L                  :8;
    };
} FSR1Lbits_t;
extern volatile FSR1Lbits_t FSR1Lbits __at(0x006);
// bitfield macros
#define _FSR1L_FSR1L_POSN                                   0x0
#define _FSR1L_FSR1L_POSITION                               0x0
#define _FSR1L_FSR1L_SIZE                                   0x8
#define _FSR1L_FSR1L_LENGTH                                 0x8
#define _FSR1L_FSR1L_MASK                                   0xFF

// Register: FSR1H
#define FSR1H FSR1H
extern volatile unsigned char           FSR1H               __at(0x007);
#ifndef _LIB_BUILD
asm("FSR1H equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H                  :8;
    };
} FSR1Hbits_t;
extern volatile FSR1Hbits_t FSR1Hbits __at(0x007);
// bitfield macros
#define _FSR1H_FSR1H_POSN                                   0x0
#define _FSR1H_FSR1H_POSITION                               0x0
#define _FSR1H_FSR1H_SIZE                                   0x8
#define _FSR1H_FSR1H_LENGTH                                 0x8
#define _FSR1H_FSR1H_MASK                                   0xFF

// Register: BSR
#define BSR BSR
extern volatile unsigned char           BSR                 __at(0x008);
#ifndef _LIB_BUILD
asm("BSR equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR                    :5;
    };
    struct {
        unsigned BSR0                   :1;
        unsigned BSR1                   :1;
        unsigned BSR2                   :1;
        unsigned BSR3                   :1;
        unsigned BSR4                   :1;
    };
} BSRbits_t;
extern volatile BSRbits_t BSRbits __at(0x008);
// bitfield macros
#define _BSR_BSR_POSN                                       0x0
#define _BSR_BSR_POSITION                                   0x0
#define _BSR_BSR_SIZE                                       0x5
#define _BSR_BSR_LENGTH                                     0x5
#define _BSR_BSR_MASK                                       0x1F
#define _BSR_BSR0_POSN                                      0x0
#define _BSR_BSR0_POSITION                                  0x0
#define _BSR_BSR0_SIZE                                      0x1
#define _BSR_BSR0_LENGTH                                    0x1
#define _BSR_BSR0_MASK                                      0x1
#define _BSR_BSR1_POSN                                      0x1
#define _BSR_BSR1_POSITION                                  0x1
#define _BSR_BSR1_SIZE                                      0x1
#define _BSR_BSR1_LENGTH                                    0x1
#define _BSR_BSR1_MASK                                      0x2
#define _BSR_BSR2_POSN                                      0x2
#define _BSR_BSR2_POSITION                                  0x2
#define _BSR_BSR2_SIZE                                      0x1
#define _BSR_BSR2_LENGTH                                    0x1
#define _BSR_BSR2_MASK                                      0x4
#define _BSR_BSR3_POSN                                      0x3
#define _BSR_BSR3_POSITION                                  0x3
#define _BSR_BSR3_SIZE                                      0x1
#define _BSR_BSR3_LENGTH                                    0x1
#define _BSR_BSR3_MASK                                      0x8
#define _BSR_BSR4_POSN                                      0x4
#define _BSR_BSR4_POSITION                                  0x4
#define _BSR_BSR4_SIZE                                      0x1
#define _BSR_BSR4_LENGTH                                    0x1
#define _BSR_BSR4_MASK                                      0x10

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0x009);
#ifndef _LIB_BUILD
asm("WREG equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG0                  :8;
    };
} WREGbits_t;
extern volatile WREGbits_t WREGbits __at(0x009);
// bitfield macros
#define _WREG_WREG0_POSN                                    0x0
#define _WREG_WREG0_POSITION                                0x0
#define _WREG_WREG0_SIZE                                    0x8
#define _WREG_WREG0_LENGTH                                  0x8
#define _WREG_WREG0_MASK                                    0xFF

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :7;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x7
#define _PCLATH_PCLATH_LENGTH                               0x7
#define _PCLATH_PCLATH_MASK                                 0x7F

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCIF                  :1;
        unsigned INTF                   :1;
        unsigned TMR0IF                 :1;
        unsigned IOCIE                  :1;
        unsigned INTE                   :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned T0IF                   :1;
        unsigned                        :2;
        unsigned T0IE                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_IOCIF_POSN                                  0x0
#define _INTCON_IOCIF_POSITION                              0x0
#define _INTCON_IOCIF_SIZE                                  0x1
#define _INTCON_IOCIF_LENGTH                                0x1
#define _INTCON_IOCIF_MASK                                  0x1
#define _INTCON_INTF_POSN                                   0x1
#define _INTCON_INTF_POSITION                               0x1
#define _INTCON_INTF_SIZE                                   0x1
#define _INTCON_INTF_LENGTH                                 0x1
#define _INTCON_INTF_MASK                                   0x2
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_IOCIE_POSN                                  0x3
#define _INTCON_IOCIE_POSITION                              0x3
#define _INTCON_IOCIE_SIZE                                  0x1
#define _INTCON_IOCIE_LENGTH                                0x1
#define _INTCON_IOCIE_MASK                                  0x8
#define _INTCON_INTE_POSN                                   0x4
#define _INTCON_INTE_POSITION                               0x4
#define _INTCON_INTE_SIZE                                   0x1
#define _INTCON_INTE_LENGTH                                 0x1
#define _INTCON_INTE_MASK                                   0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_POSN                                   0x6
#define _INTCON_PEIE_POSITION                               0x6
#define _INTCON_PEIE_SIZE                                   0x1
#define _INTCON_PEIE_LENGTH                                 0x1
#define _INTCON_PEIE_MASK                                   0x40
#define _INTCON_GIE_POSN                                    0x7
#define _INTCON_GIE_POSITION                                0x7
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x80
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0x00C);
#ifndef _LIB_BUILD
asm("PORTA equ 0Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned                        :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0x00C);
// bitfield macros
#define _PORTA_RA0_POSN                                     0x0
#define _PORTA_RA0_POSITION                                 0x0
#define _PORTA_RA0_SIZE                                     0x1
#define _PORTA_RA0_LENGTH                                   0x1
#define _PORTA_RA0_MASK                                     0x1
#define _PORTA_RA1_POSN                                     0x1
#define _PORTA_RA1_POSITION                                 0x1
#define _PORTA_RA1_SIZE                                     0x1
#define _PORTA_RA1_LENGTH                                   0x1
#define _PORTA_RA1_MASK                                     0x2
#define _PORTA_RA3_POSN                                     0x3
#define _PORTA_RA3_POSITION                                 0x3
#define _PORTA_RA3_SIZE                                     0x1
#define _PORTA_RA3_LENGTH                                   0x1
#define _PORTA_RA3_MASK                                     0x8
#define _PORTA_RA4_POSN                                     0x4
#define _PORTA_RA4_POSITION                                 0x4
#define _PORTA_RA4_SIZE                                     0x1
#define _PORTA_RA4_LENGTH                                   0x1
#define _PORTA_RA4_MASK                                     0x10
#define _PORTA_RA5_POSN                                     0x5
#define _PORTA_RA5_POSITION                                 0x5
#define _PORTA_RA5_SIZE                                     0x1
#define _PORTA_RA5_LENGTH                                   0x1
#define _PORTA_RA5_MASK                                     0x20

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0x00E);
#ifndef _LIB_BUILD
asm("PORTC equ 0Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0x00E);
// bitfield macros
#define _PORTC_RC0_POSN                                     0x0
#define _PORTC_RC0_POSITION                                 0x0
#define _PORTC_RC0_SIZE                                     0x1
#define _PORTC_RC0_LENGTH                                   0x1
#define _PORTC_RC0_MASK                                     0x1
#define _PORTC_RC1_POSN                                     0x1
#define _PORTC_RC1_POSITION                                 0x1
#define _PORTC_RC1_SIZE                                     0x1
#define _PORTC_RC1_LENGTH                                   0x1
#define _PORTC_RC1_MASK                                     0x2
#define _PORTC_RC2_POSN                                     0x2
#define _PORTC_RC2_POSITION                                 0x2
#define _PORTC_RC2_SIZE                                     0x1
#define _PORTC_RC2_LENGTH                                   0x1
#define _PORTC_RC2_MASK                                     0x4
#define _PORTC_RC3_POSN                                     0x3
#define _PORTC_RC3_POSITION                                 0x3
#define _PORTC_RC3_SIZE                                     0x1
#define _PORTC_RC3_LENGTH                                   0x1
#define _PORTC_RC3_MASK                                     0x8
#define _PORTC_RC4_POSN                                     0x4
#define _PORTC_RC4_POSITION                                 0x4
#define _PORTC_RC4_SIZE                                     0x1
#define _PORTC_RC4_LENGTH                                   0x1
#define _PORTC_RC4_MASK                                     0x10
#define _PORTC_RC5_POSN                                     0x5
#define _PORTC_RC5_POSITION                                 0x5
#define _PORTC_RC5_SIZE                                     0x1
#define _PORTC_RC5_LENGTH                                   0x1
#define _PORTC_RC5_MASK                                     0x20

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x011);
#ifndef _LIB_BUILD
asm("PIR1 equ 011h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned                        :1;
        unsigned SSP1IF                 :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x011);
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_SSP1IF_POSN                                   0x3
#define _PIR1_SSP1IF_POSITION                               0x3
#define _PIR1_SSP1IF_SIZE                                   0x1
#define _PIR1_SSP1IF_LENGTH                                 0x1
#define _PIR1_SSP1IF_MASK                                   0x8
#define _PIR1_TXIF_POSN                                     0x4
#define _PIR1_TXIF_POSITION                                 0x4
#define _PIR1_TXIF_SIZE                                     0x1
#define _PIR1_TXIF_LENGTH                                   0x1
#define _PIR1_TXIF_MASK                                     0x10
#define _PIR1_RCIF_POSN                                     0x5
#define _PIR1_RCIF_POSITION                                 0x5
#define _PIR1_RCIF_SIZE                                     0x1
#define _PIR1_RCIF_LENGTH                                   0x1
#define _PIR1_RCIF_MASK                                     0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_TMR1GIF_POSN                                  0x7
#define _PIR1_TMR1GIF_POSITION                              0x7
#define _PIR1_TMR1GIF_SIZE                                  0x1
#define _PIR1_TMR1GIF_LENGTH                                0x1
#define _PIR1_TMR1GIF_MASK                                  0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x012);
#ifndef _LIB_BUILD
asm("PIR2 equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ACTIF                  :1;
        unsigned USBIF                  :1;
        unsigned BCL1IF                 :1;
        unsigned                        :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned OSFIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_ACTIF_POSN                                    0x1
#define _PIR2_ACTIF_POSITION                                0x1
#define _PIR2_ACTIF_SIZE                                    0x1
#define _PIR2_ACTIF_LENGTH                                  0x1
#define _PIR2_ACTIF_MASK                                    0x2
#define _PIR2_USBIF_POSN                                    0x2
#define _PIR2_USBIF_POSITION                                0x2
#define _PIR2_USBIF_SIZE                                    0x1
#define _PIR2_USBIF_LENGTH                                  0x1
#define _PIR2_USBIF_MASK                                    0x4
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_C1IF_POSN                                     0x5
#define _PIR2_C1IF_POSITION                                 0x5
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x20
#define _PIR2_C2IF_POSN                                     0x6
#define _PIR2_C2IF_POSITION                                 0x6
#define _PIR2_C2IF_SIZE                                     0x1
#define _PIR2_C2IF_LENGTH                                   0x1
#define _PIR2_C2IF_MASK                                     0x40
#define _PIR2_OSFIF_POSN                                    0x7
#define _PIR2_OSFIF_POSITION                                0x7
#define _PIR2_OSFIF_SIZE                                    0x1
#define _PIR2_OSFIF_LENGTH                                  0x1
#define _PIR2_OSFIF_MASK                                    0x80

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned char           TMR0                __at(0x015);
#ifndef _LIB_BUILD
asm("TMR0 equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0                   :8;
    };
} TMR0bits_t;
extern volatile TMR0bits_t TMR0bits __at(0x015);
// bitfield macros
#define _TMR0_TMR0_POSN                                     0x0
#define _TMR0_TMR0_POSITION                                 0x0
#define _TMR0_TMR0_SIZE                                     0x8
#define _TMR0_TMR0_LENGTH                                   0x8
#define _TMR0_TMR0_MASK                                     0xFF

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x016);
#ifndef _LIB_BUILD
asm("TMR1 equ 016h");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x016);
#ifndef _LIB_BUILD
asm("TMR1L equ 016h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1L                  :8;
    };
} TMR1Lbits_t;
extern volatile TMR1Lbits_t TMR1Lbits __at(0x016);
// bitfield macros
#define _TMR1L_TMR1L_POSN                                   0x0
#define _TMR1L_TMR1L_POSITION                               0x0
#define _TMR1L_TMR1L_SIZE                                   0x8
#define _TMR1L_TMR1L_LENGTH                                 0x8
#define _TMR1L_TMR1L_MASK                                   0xFF

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x017);
#ifndef _LIB_BUILD
asm("TMR1H equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1H                  :8;
    };
} TMR1Hbits_t;
extern volatile TMR1Hbits_t TMR1Hbits __at(0x017);
// bitfield macros
#define _TMR1H_TMR1H_POSN                                   0x0
#define _TMR1H_TMR1H_POSITION                               0x0
#define _TMR1H_TMR1H_SIZE                                   0x8
#define _TMR1H_TMR1H_LENGTH                                 0x8
#define _TMR1H_TMR1H_MASK                                   0xFF

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x018);
#ifndef _LIB_BUILD
asm("T1CON equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned                        :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned TMR1CS0                :1;
        unsigned TMR1CS1                :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x018);
// bitfield macros
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_TMR1CS_POSN                                  0x6
#define _T1CON_TMR1CS_POSITION                              0x6
#define _T1CON_TMR1CS_SIZE                                  0x2
#define _T1CON_TMR1CS_LENGTH                                0x2
#define _T1CON_TMR1CS_MASK                                  0xC0
#define _T1CON_T1CKPS0_POSN                                 0x4
#define _T1CON_T1CKPS0_POSITION                             0x4
#define _T1CON_T1CKPS0_SIZE                                 0x1
#define _T1CON_T1CKPS0_LENGTH                               0x1
#define _T1CON_T1CKPS0_MASK                                 0x10
#define _T1CON_T1CKPS1_POSN                                 0x5
#define _T1CON_T1CKPS1_POSITION                             0x5
#define _T1CON_T1CKPS1_SIZE                                 0x1
#define _T1CON_T1CKPS1_LENGTH                               0x1
#define _T1CON_T1CKPS1_MASK                                 0x20
#define _T1CON_TMR1CS0_POSN                                 0x6
#define _T1CON_TMR1CS0_POSITION                             0x6
#define _T1CON_TMR1CS0_SIZE                                 0x1
#define _T1CON_TMR1CS0_LENGTH                               0x1
#define _T1CON_TMR1CS0_MASK                                 0x40
#define _T1CON_TMR1CS1_POSN                                 0x7
#define _T1CON_TMR1CS1_POSITION                             0x7
#define _T1CON_TMR1CS1_SIZE                                 0x1
#define _T1CON_TMR1CS1_LENGTH                               0x1
#define _T1CON_TMR1CS1_MASK                                 0x80

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x019);
#ifndef _LIB_BUILD
asm("T1GCON equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS                  :2;
        unsigned T1GVAL                 :1;
        unsigned T1GGO_nDONE            :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x019);
// bitfield macros
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x2
#define _T1GCON_T1GSS_LENGTH                                0x2
#define _T1GCON_T1GSS_MASK                                  0x3
#define _T1GCON_T1GVAL_POSN                                 0x2
#define _T1GCON_T1GVAL_POSITION                             0x2
#define _T1GCON_T1GVAL_SIZE                                 0x1
#define _T1GCON_T1GVAL_LENGTH                               0x1
#define _T1GCON_T1GVAL_MASK                                 0x4
#define _T1GCON_T1GGO_nDONE_POSN                            0x3
#define _T1GCON_T1GGO_nDONE_POSITION                        0x3
#define _T1GCON_T1GGO_nDONE_SIZE                            0x1
#define _T1GCON_T1GGO_nDONE_LENGTH                          0x1
#define _T1GCON_T1GGO_nDONE_MASK                            0x8
#define _T1GCON_T1GSPM_POSN                                 0x4
#define _T1GCON_T1GSPM_POSITION                             0x4
#define _T1GCON_T1GSPM_SIZE                                 0x1
#define _T1GCON_T1GSPM_LENGTH                               0x1
#define _T1GCON_T1GSPM_MASK                                 0x10
#define _T1GCON_T1GTM_POSN                                  0x5
#define _T1GCON_T1GTM_POSITION                              0x5
#define _T1GCON_T1GTM_SIZE                                  0x1
#define _T1GCON_T1GTM_LENGTH                                0x1
#define _T1GCON_T1GTM_MASK                                  0x20
#define _T1GCON_T1GPOL_POSN                                 0x6
#define _T1GCON_T1GPOL_POSITION                             0x6
#define _T1GCON_T1GPOL_SIZE                                 0x1
#define _T1GCON_T1GPOL_LENGTH                               0x1
#define _T1GCON_T1GPOL_MASK                                 0x40
#define _T1GCON_TMR1GE_POSN                                 0x7
#define _T1GCON_TMR1GE_POSITION                             0x7
#define _T1GCON_TMR1GE_SIZE                                 0x1
#define _T1GCON_TMR1GE_LENGTH                               0x1
#define _T1GCON_TMR1GE_MASK                                 0x80
#define _T1GCON_T1GSS0_POSN                                 0x0
#define _T1GCON_T1GSS0_POSITION                             0x0
#define _T1GCON_T1GSS0_SIZE                                 0x1
#define _T1GCON_T1GSS0_LENGTH                               0x1
#define _T1GCON_T1GSS0_MASK                                 0x1
#define _T1GCON_T1GSS1_POSN                                 0x1
#define _T1GCON_T1GSS1_POSITION                             0x1
#define _T1GCON_T1GSS1_SIZE                                 0x1
#define _T1GCON_T1GSS1_LENGTH                               0x1
#define _T1GCON_T1GSS1_MASK                                 0x2

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x01A);
#ifndef _LIB_BUILD
asm("TMR2 equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
extern volatile TMR2bits_t TMR2bits __at(0x01A);
// bitfield macros
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x01B);
#ifndef _LIB_BUILD
asm("PR2 equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x01B);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x01C);
#ifndef _LIB_BUILD
asm("T2CON equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned T2OUTPS                :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x01C);
// bitfield macros
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4
#define _T2CON_T2OUTPS_POSN                                 0x3
#define _T2CON_T2OUTPS_POSITION                             0x3
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0x78
#define _T2CON_T2CKPS0_POSN                                 0x0
#define _T2CON_T2CKPS0_POSITION                             0x0
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x1
#define _T2CON_T2CKPS1_POSN                                 0x1
#define _T2CON_T2CKPS1_POSITION                             0x1
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x2
#define _T2CON_T2OUTPS0_POSN                                0x3
#define _T2CON_T2OUTPS0_POSITION                            0x3
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x8
#define _T2CON_T2OUTPS1_POSN                                0x4
#define _T2CON_T2OUTPS1_POSITION                            0x4
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x10
#define _T2CON_T2OUTPS2_POSN                                0x5
#define _T2CON_T2OUTPS2_POSITION                            0x5
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x20
#define _T2CON_T2OUTPS3_POSN                                0x6
#define _T2CON_T2OUTPS3_POSITION                            0x6
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x40

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x08C);
#ifndef _LIB_BUILD
asm("TRISA equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0x08C);
// bitfield macros
#define _TRISA_TRISA4_POSN                                  0x4
#define _TRISA_TRISA4_POSITION                              0x4
#define _TRISA_TRISA4_SIZE                                  0x1
#define _TRISA_TRISA4_LENGTH                                0x1
#define _TRISA_TRISA4_MASK                                  0x10
#define _TRISA_TRISA5_POSN                                  0x5
#define _TRISA_TRISA5_POSITION                              0x5
#define _TRISA_TRISA5_SIZE                                  0x1
#define _TRISA_TRISA5_LENGTH                                0x1
#define _TRISA_TRISA5_MASK                                  0x20

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0x08E);
#ifndef _LIB_BUILD
asm("TRISC equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0x08E);
// bitfield macros
#define _TRISC_TRISC0_POSN                                  0x0
#define _TRISC_TRISC0_POSITION                              0x0
#define _TRISC_TRISC0_SIZE                                  0x1
#define _TRISC_TRISC0_LENGTH                                0x1
#define _TRISC_TRISC0_MASK                                  0x1
#define _TRISC_TRISC1_POSN                                  0x1
#define _TRISC_TRISC1_POSITION                              0x1
#define _TRISC_TRISC1_SIZE                                  0x1
#define _TRISC_TRISC1_LENGTH                                0x1
#define _TRISC_TRISC1_MASK                                  0x2
#define _TRISC_TRISC2_POSN                                  0x2
#define _TRISC_TRISC2_POSITION                              0x2
#define _TRISC_TRISC2_SIZE                                  0x1
#define _TRISC_TRISC2_LENGTH                                0x1
#define _TRISC_TRISC2_MASK                                  0x4
#define _TRISC_TRISC3_POSN                                  0x3
#define _TRISC_TRISC3_POSITION                              0x3
#define _TRISC_TRISC3_SIZE                                  0x1
#define _TRISC_TRISC3_LENGTH                                0x1
#define _TRISC_TRISC3_MASK                                  0x8
#define _TRISC_TRISC4_POSN                                  0x4
#define _TRISC_TRISC4_POSITION                              0x4
#define _TRISC_TRISC4_SIZE                                  0x1
#define _TRISC_TRISC4_LENGTH                                0x1
#define _TRISC_TRISC4_MASK                                  0x10
#define _TRISC_TRISC5_POSN                                  0x5
#define _TRISC_TRISC5_POSITION                              0x5
#define _TRISC_TRISC5_SIZE                                  0x1
#define _TRISC_TRISC5_LENGTH                                0x1
#define _TRISC_TRISC5_MASK                                  0x20

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x091);
#ifndef _LIB_BUILD
asm("PIE1 equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned                        :1;
        unsigned SSP1IE                 :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x091);
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_SSP1IE_POSN                                   0x3
#define _PIE1_SSP1IE_POSITION                               0x3
#define _PIE1_SSP1IE_SIZE                                   0x1
#define _PIE1_SSP1IE_LENGTH                                 0x1
#define _PIE1_SSP1IE_MASK                                   0x8
#define _PIE1_TXIE_POSN                                     0x4
#define _PIE1_TXIE_POSITION                                 0x4
#define _PIE1_TXIE_SIZE                                     0x1
#define _PIE1_TXIE_LENGTH                                   0x1
#define _PIE1_TXIE_MASK                                     0x10
#define _PIE1_RCIE_POSN                                     0x5
#define _PIE1_RCIE_POSITION                                 0x5
#define _PIE1_RCIE_SIZE                                     0x1
#define _PIE1_RCIE_LENGTH                                   0x1
#define _PIE1_RCIE_MASK                                     0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_TMR1GIE_POSN                                  0x7
#define _PIE1_TMR1GIE_POSITION                              0x7
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x092);
#ifndef _LIB_BUILD
asm("PIE2 equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ACTIE                  :1;
        unsigned USBIE                  :1;
        unsigned BCL1IE                 :1;
        unsigned                        :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned OSFIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_ACTIE_POSN                                    0x1
#define _PIE2_ACTIE_POSITION                                0x1
#define _PIE2_ACTIE_SIZE                                    0x1
#define _PIE2_ACTIE_LENGTH                                  0x1
#define _PIE2_ACTIE_MASK                                    0x2
#define _PIE2_USBIE_POSN                                    0x2
#define _PIE2_USBIE_POSITION                                0x2
#define _PIE2_USBIE_SIZE                                    0x1
#define _PIE2_USBIE_LENGTH                                  0x1
#define _PIE2_USBIE_MASK                                    0x4
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_C1IE_POSN                                     0x5
#define _PIE2_C1IE_POSITION                                 0x5
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x20
#define _PIE2_C2IE_POSN                                     0x6
#define _PIE2_C2IE_POSITION                                 0x6
#define _PIE2_C2IE_SIZE                                     0x1
#define _PIE2_C2IE_LENGTH                                   0x1
#define _PIE2_C2IE_MASK                                     0x40
#define _PIE2_OSFIE_POSN                                    0x7
#define _PIE2_OSFIE_POSITION                                0x7
#define _PIE2_OSFIE_SIZE                                    0x1
#define _PIE2_OSFIE_LENGTH                                  0x1
#define _PIE2_OSFIE_MASK                                    0x80

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x095);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS                     :3;
        unsigned PSA                    :1;
        unsigned TMR0SE                 :1;
        unsigned TMR0CS                 :1;
        unsigned INTEDG                 :1;
        unsigned nWPUEN                 :1;
    };
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
        unsigned                        :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __at(0x095);
// bitfield macros
#define _OPTION_REG_PS_POSN                                 0x0
#define _OPTION_REG_PS_POSITION                             0x0
#define _OPTION_REG_PS_SIZE                                 0x3
#define _OPTION_REG_PS_LENGTH                               0x3
#define _OPTION_REG_PS_MASK                                 0x7
#define _OPTION_REG_PSA_POSN                                0x3
#define _OPTION_REG_PSA_POSITION                            0x3
#define _OPTION_REG_PSA_SIZE                                0x1
#define _OPTION_REG_PSA_LENGTH                              0x1
#define _OPTION_REG_PSA_MASK                                0x8
#define _OPTION_REG_TMR0SE_POSN                             0x4
#define _OPTION_REG_TMR0SE_POSITION                         0x4
#define _OPTION_REG_TMR0SE_SIZE                             0x1
#define _OPTION_REG_TMR0SE_LENGTH                           0x1
#define _OPTION_REG_TMR0SE_MASK                             0x10
#define _OPTION_REG_TMR0CS_POSN                             0x5
#define _OPTION_REG_TMR0CS_POSITION                         0x5
#define _OPTION_REG_TMR0CS_SIZE                             0x1
#define _OPTION_REG_TMR0CS_LENGTH                           0x1
#define _OPTION_REG_TMR0CS_MASK                             0x20
#define _OPTION_REG_INTEDG_POSN                             0x6
#define _OPTION_REG_INTEDG_POSITION                         0x6
#define _OPTION_REG_INTEDG_SIZE                             0x1
#define _OPTION_REG_INTEDG_LENGTH                           0x1
#define _OPTION_REG_INTEDG_MASK                             0x40
#define _OPTION_REG_nWPUEN_POSN                             0x7
#define _OPTION_REG_nWPUEN_POSITION                         0x7
#define _OPTION_REG_nWPUEN_SIZE                             0x1
#define _OPTION_REG_nWPUEN_LENGTH                           0x1
#define _OPTION_REG_nWPUEN_MASK                             0x80
#define _OPTION_REG_PS0_POSN                                0x0
#define _OPTION_REG_PS0_POSITION                            0x0
#define _OPTION_REG_PS0_SIZE                                0x1
#define _OPTION_REG_PS0_LENGTH                              0x1
#define _OPTION_REG_PS0_MASK                                0x1
#define _OPTION_REG_PS1_POSN                                0x1
#define _OPTION_REG_PS1_POSITION                            0x1
#define _OPTION_REG_PS1_SIZE                                0x1
#define _OPTION_REG_PS1_LENGTH                              0x1
#define _OPTION_REG_PS1_MASK                                0x2
#define _OPTION_REG_PS2_POSN                                0x2
#define _OPTION_REG_PS2_POSITION                            0x2
#define _OPTION_REG_PS2_SIZE                                0x1
#define _OPTION_REG_PS2_LENGTH                              0x1
#define _OPTION_REG_PS2_MASK                                0x4
#define _OPTION_REG_T0SE_POSN                               0x4
#define _OPTION_REG_T0SE_POSITION                           0x4
#define _OPTION_REG_T0SE_SIZE                               0x1
#define _OPTION_REG_T0SE_LENGTH                             0x1
#define _OPTION_REG_T0SE_MASK                               0x10
#define _OPTION_REG_T0CS_POSN                               0x5
#define _OPTION_REG_T0CS_POSITION                           0x5
#define _OPTION_REG_T0CS_SIZE                               0x1
#define _OPTION_REG_T0CS_LENGTH                             0x1
#define _OPTION_REG_T0CS_MASK                               0x20

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x096);
#ifndef _LIB_BUILD
asm("PCON equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nRI                    :1;
        unsigned nRMCLR                 :1;
        unsigned nRWDT                  :1;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKOVF                 :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x096);
// bitfield macros
#define _PCON_nBOR_POSN                                     0x0
#define _PCON_nBOR_POSITION                                 0x0
#define _PCON_nBOR_SIZE                                     0x1
#define _PCON_nBOR_LENGTH                                   0x1
#define _PCON_nBOR_MASK                                     0x1
#define _PCON_nPOR_POSN                                     0x1
#define _PCON_nPOR_POSITION                                 0x1
#define _PCON_nPOR_SIZE                                     0x1
#define _PCON_nPOR_LENGTH                                   0x1
#define _PCON_nPOR_MASK                                     0x2
#define _PCON_nRI_POSN                                      0x2
#define _PCON_nRI_POSITION                                  0x2
#define _PCON_nRI_SIZE                                      0x1
#define _PCON_nRI_LENGTH                                    0x1
#define _PCON_nRI_MASK                                      0x4
#define _PCON_nRMCLR_POSN                                   0x3
#define _PCON_nRMCLR_POSITION                               0x3
#define _PCON_nRMCLR_SIZE                                   0x1
#define _PCON_nRMCLR_LENGTH                                 0x1
#define _PCON_nRMCLR_MASK                                   0x8
#define _PCON_nRWDT_POSN                                    0x4
#define _PCON_nRWDT_POSITION                                0x4
#define _PCON_nRWDT_SIZE                                    0x1
#define _PCON_nRWDT_LENGTH                                  0x1
#define _PCON_nRWDT_MASK                                    0x10
#define _PCON_STKUNF_POSN                                   0x6
#define _PCON_STKUNF_POSITION                               0x6
#define _PCON_STKUNF_SIZE                                   0x1
#define _PCON_STKUNF_LENGTH                                 0x1
#define _PCON_STKUNF_MASK                                   0x40
#define _PCON_STKOVF_POSN                                   0x7
#define _PCON_STKOVF_POSITION                               0x7
#define _PCON_STKOVF_SIZE                                   0x1
#define _PCON_STKOVF_LENGTH                                 0x1
#define _PCON_STKOVF_MASK                                   0x80

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x097);
#ifndef _LIB_BUILD
asm("WDTCON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS                  :5;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
        unsigned WDTPS4                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x097);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x5
#define _WDTCON_WDTPS_LENGTH                                0x5
#define _WDTCON_WDTPS_MASK                                  0x3E
#define _WDTCON_WDTPS0_POSN                                 0x1
#define _WDTCON_WDTPS0_POSITION                             0x1
#define _WDTCON_WDTPS0_SIZE                                 0x1
#define _WDTCON_WDTPS0_LENGTH                               0x1
#define _WDTCON_WDTPS0_MASK                                 0x2
#define _WDTCON_WDTPS1_POSN                                 0x2
#define _WDTCON_WDTPS1_POSITION                             0x2
#define _WDTCON_WDTPS1_SIZE                                 0x1
#define _WDTCON_WDTPS1_LENGTH                               0x1
#define _WDTCON_WDTPS1_MASK                                 0x4
#define _WDTCON_WDTPS2_POSN                                 0x3
#define _WDTCON_WDTPS2_POSITION                             0x3
#define _WDTCON_WDTPS2_SIZE                                 0x1
#define _WDTCON_WDTPS2_LENGTH                               0x1
#define _WDTCON_WDTPS2_MASK                                 0x8
#define _WDTCON_WDTPS3_POSN                                 0x4
#define _WDTCON_WDTPS3_POSITION                             0x4
#define _WDTCON_WDTPS3_SIZE                                 0x1
#define _WDTCON_WDTPS3_LENGTH                               0x1
#define _WDTCON_WDTPS3_MASK                                 0x10
#define _WDTCON_WDTPS4_POSN                                 0x5
#define _WDTCON_WDTPS4_POSITION                             0x5
#define _WDTCON_WDTPS4_SIZE                                 0x1
#define _WDTCON_WDTPS4_LENGTH                               0x1
#define _WDTCON_WDTPS4_MASK                                 0x20

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x098);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :7;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
        unsigned TUN6                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x098);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x7
#define _OSCTUNE_TUN_LENGTH                                 0x7
#define _OSCTUNE_TUN_MASK                                   0x7F
#define _OSCTUNE_TUN0_POSN                                  0x0
#define _OSCTUNE_TUN0_POSITION                              0x0
#define _OSCTUNE_TUN0_SIZE                                  0x1
#define _OSCTUNE_TUN0_LENGTH                                0x1
#define _OSCTUNE_TUN0_MASK                                  0x1
#define _OSCTUNE_TUN1_POSN                                  0x1
#define _OSCTUNE_TUN1_POSITION                              0x1
#define _OSCTUNE_TUN1_SIZE                                  0x1
#define _OSCTUNE_TUN1_LENGTH                                0x1
#define _OSCTUNE_TUN1_MASK                                  0x2
#define _OSCTUNE_TUN2_POSN                                  0x2
#define _OSCTUNE_TUN2_POSITION                              0x2
#define _OSCTUNE_TUN2_SIZE                                  0x1
#define _OSCTUNE_TUN2_LENGTH                                0x1
#define _OSCTUNE_TUN2_MASK                                  0x4
#define _OSCTUNE_TUN3_POSN                                  0x3
#define _OSCTUNE_TUN3_POSITION                              0x3
#define _OSCTUNE_TUN3_SIZE                                  0x1
#define _OSCTUNE_TUN3_LENGTH                                0x1
#define _OSCTUNE_TUN3_MASK                                  0x8
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10
#define _OSCTUNE_TUN5_POSN                                  0x5
#define _OSCTUNE_TUN5_POSITION                              0x5
#define _OSCTUNE_TUN5_SIZE                                  0x1
#define _OSCTUNE_TUN5_LENGTH                                0x1
#define _OSCTUNE_TUN5_MASK                                  0x20
#define _OSCTUNE_TUN6_POSN                                  0x6
#define _OSCTUNE_TUN6_POSITION                              0x6
#define _OSCTUNE_TUN6_SIZE                                  0x1
#define _OSCTUNE_TUN6_LENGTH                                0x1
#define _OSCTUNE_TUN6_MASK                                  0x40

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x099);
#ifndef _LIB_BUILD
asm("OSCCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :2;
        unsigned IRCF                   :4;
        unsigned SPLLMULT               :1;
        unsigned SPLLEN                 :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
        unsigned IRCF3                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x099);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x2
#define _OSCCON_SCS_LENGTH                                  0x2
#define _OSCCON_SCS_MASK                                    0x3
#define _OSCCON_IRCF_POSN                                   0x2
#define _OSCCON_IRCF_POSITION                               0x2
#define _OSCCON_IRCF_SIZE                                   0x4
#define _OSCCON_IRCF_LENGTH                                 0x4
#define _OSCCON_IRCF_MASK                                   0x3C
#define _OSCCON_SPLLMULT_POSN                               0x6
#define _OSCCON_SPLLMULT_POSITION                           0x6
#define _OSCCON_SPLLMULT_SIZE                               0x1
#define _OSCCON_SPLLMULT_LENGTH                             0x1
#define _OSCCON_SPLLMULT_MASK                               0x40
#define _OSCCON_SPLLEN_POSN                                 0x7
#define _OSCCON_SPLLEN_POSITION                             0x7
#define _OSCCON_SPLLEN_SIZE                                 0x1
#define _OSCCON_SPLLEN_LENGTH                               0x1
#define _OSCCON_SPLLEN_MASK                                 0x80
#define _OSCCON_SCS0_POSN                                   0x0
#define _OSCCON_SCS0_POSITION                               0x0
#define _OSCCON_SCS0_SIZE                                   0x1
#define _OSCCON_SCS0_LENGTH                                 0x1
#define _OSCCON_SCS0_MASK                                   0x1
#define _OSCCON_SCS1_POSN                                   0x1
#define _OSCCON_SCS1_POSITION                               0x1
#define _OSCCON_SCS1_SIZE                                   0x1
#define _OSCCON_SCS1_LENGTH                                 0x1
#define _OSCCON_SCS1_MASK                                   0x2
#define _OSCCON_IRCF0_POSN                                  0x2
#define _OSCCON_IRCF0_POSITION                              0x2
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x4
#define _OSCCON_IRCF1_POSN                                  0x3
#define _OSCCON_IRCF1_POSITION                              0x3
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x8
#define _OSCCON_IRCF2_POSN                                  0x4
#define _OSCCON_IRCF2_POSITION                              0x4
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x10
#define _OSCCON_IRCF3_POSN                                  0x5
#define _OSCCON_IRCF3_POSITION                              0x5
#define _OSCCON_IRCF3_SIZE                                  0x1
#define _OSCCON_IRCF3_LENGTH                                0x1
#define _OSCCON_IRCF3_MASK                                  0x20

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
extern volatile unsigned char           OSCSTAT             __at(0x09A);
#ifndef _LIB_BUILD
asm("OSCSTAT equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HFIOFS                 :1;
        unsigned LFIOFR                 :1;
        unsigned                        :2;
        unsigned HFIOFR                 :1;
        unsigned OSTS                   :1;
        unsigned PLLRDY                 :1;
        unsigned SOSCR                  :1;
    };
} OSCSTATbits_t;
extern volatile OSCSTATbits_t OSCSTATbits __at(0x09A);
// bitfield macros
#define _OSCSTAT_HFIOFS_POSN                                0x0
#define _OSCSTAT_HFIOFS_POSITION                            0x0
#define _OSCSTAT_HFIOFS_SIZE                                0x1
#define _OSCSTAT_HFIOFS_LENGTH                              0x1
#define _OSCSTAT_HFIOFS_MASK                                0x1
#define _OSCSTAT_LFIOFR_POSN                                0x1
#define _OSCSTAT_LFIOFR_POSITION                            0x1
#define _OSCSTAT_LFIOFR_SIZE                                0x1
#define _OSCSTAT_LFIOFR_LENGTH                              0x1
#define _OSCSTAT_LFIOFR_MASK                                0x2
#define _OSCSTAT_HFIOFR_POSN                                0x4
#define _OSCSTAT_HFIOFR_POSITION                            0x4
#define _OSCSTAT_HFIOFR_SIZE                                0x1
#define _OSCSTAT_HFIOFR_LENGTH                              0x1
#define _OSCSTAT_HFIOFR_MASK                                0x10
#define _OSCSTAT_OSTS_POSN                                  0x5
#define _OSCSTAT_OSTS_POSITION                              0x5
#define _OSCSTAT_OSTS_SIZE                                  0x1
#define _OSCSTAT_OSTS_LENGTH                                0x1
#define _OSCSTAT_OSTS_MASK                                  0x20
#define _OSCSTAT_PLLRDY_POSN                                0x6
#define _OSCSTAT_PLLRDY_POSITION                            0x6
#define _OSCSTAT_PLLRDY_SIZE                                0x1
#define _OSCSTAT_PLLRDY_LENGTH                              0x1
#define _OSCSTAT_PLLRDY_MASK                                0x40
#define _OSCSTAT_SOSCR_POSN                                 0x7
#define _OSCSTAT_SOSCR_POSITION                             0x7
#define _OSCSTAT_SOSCR_SIZE                                 0x1
#define _OSCSTAT_SOSCR_LENGTH                               0x1
#define _OSCSTAT_SOSCR_MASK                                 0x80

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0x09B);
#ifndef _LIB_BUILD
asm("ADRES equ 09Bh");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x09B);
#ifndef _LIB_BUILD
asm("ADRESL equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits_t;
extern volatile ADRESLbits_t ADRESLbits __at(0x09B);
// bitfield macros
#define _ADRESL_ADRESL_POSN                                 0x0
#define _ADRESL_ADRESL_POSITION                             0x0
#define _ADRESL_ADRESL_SIZE                                 0x8
#define _ADRESL_ADRESL_LENGTH                               0x8
#define _ADRESL_ADRESL_MASK                                 0xFF

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x09C);
#ifndef _LIB_BUILD
asm("ADRESH equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits_t;
extern volatile ADRESHbits_t ADRESHbits __at(0x09C);
// bitfield macros
#define _ADRESH_ADRESH_POSN                                 0x0
#define _ADRESH_ADRESH_POSITION                             0x0
#define _ADRESH_ADRESH_SIZE                                 0x8
#define _ADRESH_ADRESH_LENGTH                               0x8
#define _ADRESH_ADRESH_MASK                                 0xFF

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x09D);
#ifndef _LIB_BUILD
asm("ADCON0 equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :5;
    };
    struct {
        unsigned                        :1;
        unsigned ADGO                   :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x09D);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x1
#define _ADCON0_GO_nDONE_POSITION                           0x1
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x5
#define _ADCON0_CHS_LENGTH                                  0x5
#define _ADCON0_CHS_MASK                                    0x7C
#define _ADCON0_ADGO_POSN                                   0x1
#define _ADCON0_ADGO_POSITION                               0x1
#define _ADCON0_ADGO_SIZE                                   0x1
#define _ADCON0_ADGO_LENGTH                                 0x1
#define _ADCON0_ADGO_MASK                                   0x2
#define _ADCON0_CHS0_POSN                                   0x2
#define _ADCON0_CHS0_POSITION                               0x2
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x4
#define _ADCON0_CHS1_POSN                                   0x3
#define _ADCON0_CHS1_POSITION                               0x3
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x8
#define _ADCON0_CHS2_POSN                                   0x4
#define _ADCON0_CHS2_POSITION                               0x4
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x10
#define _ADCON0_CHS3_POSN                                   0x5
#define _ADCON0_CHS3_POSITION                               0x5
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x20
#define _ADCON0_CHS4_POSN                                   0x6
#define _ADCON0_CHS4_POSITION                               0x6
#define _ADCON0_CHS4_SIZE                                   0x1
#define _ADCON0_CHS4_LENGTH                                 0x1
#define _ADCON0_CHS4_MASK                                   0x40
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPREF                 :2;
        unsigned                        :2;
        unsigned ADCS                   :3;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned                        :2;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09E);
// bitfield macros
#define _ADCON1_ADPREF_POSN                                 0x0
#define _ADCON1_ADPREF_POSITION                             0x0
#define _ADCON1_ADPREF_SIZE                                 0x2
#define _ADCON1_ADPREF_LENGTH                               0x2
#define _ADCON1_ADPREF_MASK                                 0x3
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80
#define _ADCON1_ADPREF0_POSN                                0x0
#define _ADCON1_ADPREF0_POSITION                            0x0
#define _ADCON1_ADPREF0_SIZE                                0x1
#define _ADCON1_ADPREF0_LENGTH                              0x1
#define _ADCON1_ADPREF0_MASK                                0x1
#define _ADCON1_ADPREF1_POSN                                0x1
#define _ADCON1_ADPREF1_POSITION                            0x1
#define _ADCON1_ADPREF1_SIZE                                0x1
#define _ADCON1_ADPREF1_LENGTH                              0x1
#define _ADCON1_ADPREF1_MASK                                0x2
#define _ADCON1_ADCS0_POSN                                  0x4
#define _ADCON1_ADCS0_POSITION                              0x4
#define _ADCON1_ADCS0_SIZE                                  0x1
#define _ADCON1_ADCS0_LENGTH                                0x1
#define _ADCON1_ADCS0_MASK                                  0x10
#define _ADCON1_ADCS1_POSN                                  0x5
#define _ADCON1_ADCS1_POSITION                              0x5
#define _ADCON1_ADCS1_SIZE                                  0x1
#define _ADCON1_ADCS1_LENGTH                                0x1
#define _ADCON1_ADCS1_MASK                                  0x20
#define _ADCON1_ADCS2_POSN                                  0x6
#define _ADCON1_ADCS2_POSITION                              0x6
#define _ADCON1_ADCS2_SIZE                                  0x1
#define _ADCON1_ADCS2_LENGTH                                0x1
#define _ADCON1_ADCS2_MASK                                  0x40

// Register: ADCON2
#define ADCON2 ADCON2
extern volatile unsigned char           ADCON2              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON2 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRIGSEL                :3;
    };
    struct {
        unsigned                        :4;
        unsigned TRIGSEL0               :1;
        unsigned TRIGSEL1               :1;
        unsigned TRIGSEL2               :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0x09F);
// bitfield macros
#define _ADCON2_TRIGSEL_POSN                                0x4
#define _ADCON2_TRIGSEL_POSITION                            0x4
#define _ADCON2_TRIGSEL_SIZE                                0x3
#define _ADCON2_TRIGSEL_LENGTH                              0x3
#define _ADCON2_TRIGSEL_MASK                                0x70
#define _ADCON2_TRIGSEL0_POSN                               0x4
#define _ADCON2_TRIGSEL0_POSITION                           0x4
#define _ADCON2_TRIGSEL0_SIZE                               0x1
#define _ADCON2_TRIGSEL0_LENGTH                             0x1
#define _ADCON2_TRIGSEL0_MASK                               0x10
#define _ADCON2_TRIGSEL1_POSN                               0x5
#define _ADCON2_TRIGSEL1_POSITION                           0x5
#define _ADCON2_TRIGSEL1_SIZE                               0x1
#define _ADCON2_TRIGSEL1_LENGTH                             0x1
#define _ADCON2_TRIGSEL1_MASK                               0x20
#define _ADCON2_TRIGSEL2_POSN                               0x6
#define _ADCON2_TRIGSEL2_POSITION                           0x6
#define _ADCON2_TRIGSEL2_SIZE                               0x1
#define _ADCON2_TRIGSEL2_LENGTH                             0x1
#define _ADCON2_TRIGSEL2_MASK                               0x40

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0x10C);
#ifndef _LIB_BUILD
asm("LATA equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0x10C);
// bitfield macros
#define _LATA_LATA4_POSN                                    0x4
#define _LATA_LATA4_POSITION                                0x4
#define _LATA_LATA4_SIZE                                    0x1
#define _LATA_LATA4_LENGTH                                  0x1
#define _LATA_LATA4_MASK                                    0x10
#define _LATA_LATA5_POSN                                    0x5
#define _LATA_LATA5_POSITION                                0x5
#define _LATA_LATA5_SIZE                                    0x1
#define _LATA_LATA5_LENGTH                                  0x1
#define _LATA_LATA5_MASK                                    0x20

// Register: LATC
#define LATC LATC
extern volatile unsigned char           LATC                __at(0x10E);
#ifndef _LIB_BUILD
asm("LATC equ 010Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned LATC3                  :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits __at(0x10E);
// bitfield macros
#define _LATC_LATC0_POSN                                    0x0
#define _LATC_LATC0_POSITION                                0x0
#define _LATC_LATC0_SIZE                                    0x1
#define _LATC_LATC0_LENGTH                                  0x1
#define _LATC_LATC0_MASK                                    0x1
#define _LATC_LATC1_POSN                                    0x1
#define _LATC_LATC1_POSITION                                0x1
#define _LATC_LATC1_SIZE                                    0x1
#define _LATC_LATC1_LENGTH                                  0x1
#define _LATC_LATC1_MASK                                    0x2
#define _LATC_LATC2_POSN                                    0x2
#define _LATC_LATC2_POSITION                                0x2
#define _LATC_LATC2_SIZE                                    0x1
#define _LATC_LATC2_LENGTH                                  0x1
#define _LATC_LATC2_MASK                                    0x4
#define _LATC_LATC3_POSN                                    0x3
#define _LATC_LATC3_POSITION                                0x3
#define _LATC_LATC3_SIZE                                    0x1
#define _LATC_LATC3_LENGTH                                  0x1
#define _LATC_LATC3_MASK                                    0x8
#define _LATC_LATC4_POSN                                    0x4
#define _LATC_LATC4_POSITION                                0x4
#define _LATC_LATC4_SIZE                                    0x1
#define _LATC_LATC4_LENGTH                                  0x1
#define _LATC_LATC4_MASK                                    0x10
#define _LATC_LATC5_POSN                                    0x5
#define _LATC_LATC5_POSITION                                0x5
#define _LATC_LATC5_SIZE                                    0x1
#define _LATC_LATC5_LENGTH                                  0x1
#define _LATC_LATC5_MASK                                    0x20

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x111);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1SYNC                 :1;
        unsigned C1HYS                  :1;
        unsigned C1SP                   :1;
        unsigned                        :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0x111);
// bitfield macros
#define _CM1CON0_C1SYNC_POSN                                0x0
#define _CM1CON0_C1SYNC_POSITION                            0x0
#define _CM1CON0_C1SYNC_SIZE                                0x1
#define _CM1CON0_C1SYNC_LENGTH                              0x1
#define _CM1CON0_C1SYNC_MASK                                0x1
#define _CM1CON0_C1HYS_POSN                                 0x1
#define _CM1CON0_C1HYS_POSITION                             0x1
#define _CM1CON0_C1HYS_SIZE                                 0x1
#define _CM1CON0_C1HYS_LENGTH                               0x1
#define _CM1CON0_C1HYS_MASK                                 0x2
#define _CM1CON0_C1SP_POSN                                  0x2
#define _CM1CON0_C1SP_POSITION                              0x2
#define _CM1CON0_C1SP_SIZE                                  0x1
#define _CM1CON0_C1SP_LENGTH                                0x1
#define _CM1CON0_C1SP_MASK                                  0x4
#define _CM1CON0_C1POL_POSN                                 0x4
#define _CM1CON0_C1POL_POSITION                             0x4
#define _CM1CON0_C1POL_SIZE                                 0x1
#define _CM1CON0_C1POL_LENGTH                               0x1
#define _CM1CON0_C1POL_MASK                                 0x10
#define _CM1CON0_C1OE_POSN                                  0x5
#define _CM1CON0_C1OE_POSITION                              0x5
#define _CM1CON0_C1OE_SIZE                                  0x1
#define _CM1CON0_C1OE_LENGTH                                0x1
#define _CM1CON0_C1OE_MASK                                  0x20
#define _CM1CON0_C1OUT_POSN                                 0x6
#define _CM1CON0_C1OUT_POSITION                             0x6
#define _CM1CON0_C1OUT_SIZE                                 0x1
#define _CM1CON0_C1OUT_LENGTH                               0x1
#define _CM1CON0_C1OUT_MASK                                 0x40
#define _CM1CON0_C1ON_POSN                                  0x7
#define _CM1CON0_C1ON_POSITION                              0x7
#define _CM1CON0_C1ON_SIZE                                  0x1
#define _CM1CON0_C1ON_LENGTH                                0x1
#define _CM1CON0_C1ON_MASK                                  0x80

// Register: CM1CON1
#define CM1CON1 CM1CON1
extern volatile unsigned char           CM1CON1             __at(0x112);
#ifndef _LIB_BUILD
asm("CM1CON1 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned C1NCH2                 :1;
        unsigned                        :1;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH                  :3;
        unsigned                        :1;
        unsigned C1PCH                  :2;
    };
} CM1CON1bits_t;
extern volatile CM1CON1bits_t CM1CON1bits __at(0x112);
// bitfield macros
#define _CM1CON1_C1NCH0_POSN                                0x0
#define _CM1CON1_C1NCH0_POSITION                            0x0
#define _CM1CON1_C1NCH0_SIZE                                0x1
#define _CM1CON1_C1NCH0_LENGTH                              0x1
#define _CM1CON1_C1NCH0_MASK                                0x1
#define _CM1CON1_C1NCH1_POSN                                0x1
#define _CM1CON1_C1NCH1_POSITION                            0x1
#define _CM1CON1_C1NCH1_SIZE                                0x1
#define _CM1CON1_C1NCH1_LENGTH                              0x1
#define _CM1CON1_C1NCH1_MASK                                0x2
#define _CM1CON1_C1NCH2_POSN                                0x2
#define _CM1CON1_C1NCH2_POSITION                            0x2
#define _CM1CON1_C1NCH2_SIZE                                0x1
#define _CM1CON1_C1NCH2_LENGTH                              0x1
#define _CM1CON1_C1NCH2_MASK                                0x4
#define _CM1CON1_C1PCH0_POSN                                0x4
#define _CM1CON1_C1PCH0_POSITION                            0x4
#define _CM1CON1_C1PCH0_SIZE                                0x1
#define _CM1CON1_C1PCH0_LENGTH                              0x1
#define _CM1CON1_C1PCH0_MASK                                0x10
#define _CM1CON1_C1PCH1_POSN                                0x5
#define _CM1CON1_C1PCH1_POSITION                            0x5
#define _CM1CON1_C1PCH1_SIZE                                0x1
#define _CM1CON1_C1PCH1_LENGTH                              0x1
#define _CM1CON1_C1PCH1_MASK                                0x20
#define _CM1CON1_C1INTN_POSN                                0x6
#define _CM1CON1_C1INTN_POSITION                            0x6
#define _CM1CON1_C1INTN_SIZE                                0x1
#define _CM1CON1_C1INTN_LENGTH                              0x1
#define _CM1CON1_C1INTN_MASK                                0x40
#define _CM1CON1_C1INTP_POSN                                0x7
#define _CM1CON1_C1INTP_POSITION                            0x7
#define _CM1CON1_C1INTP_SIZE                                0x1
#define _CM1CON1_C1INTP_LENGTH                              0x1
#define _CM1CON1_C1INTP_MASK                                0x80
#define _CM1CON1_C1NCH_POSN                                 0x0
#define _CM1CON1_C1NCH_POSITION                             0x0
#define _CM1CON1_C1NCH_SIZE                                 0x3
#define _CM1CON1_C1NCH_LENGTH                               0x3
#define _CM1CON1_C1NCH_MASK                                 0x7
#define _CM1CON1_C1PCH_POSN                                 0x4
#define _CM1CON1_C1PCH_POSITION                             0x4
#define _CM1CON1_C1PCH_SIZE                                 0x2
#define _CM1CON1_C1PCH_LENGTH                               0x2
#define _CM1CON1_C1PCH_MASK                                 0x30

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x113);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned C2HYS                  :1;
        unsigned C2SP                   :1;
        unsigned                        :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __at(0x113);
// bitfield macros
#define _CM2CON0_C2SYNC_POSN                                0x0
#define _CM2CON0_C2SYNC_POSITION                            0x0
#define _CM2CON0_C2SYNC_SIZE                                0x1
#define _CM2CON0_C2SYNC_LENGTH                              0x1
#define _CM2CON0_C2SYNC_MASK                                0x1
#define _CM2CON0_C2HYS_POSN                                 0x1
#define _CM2CON0_C2HYS_POSITION                             0x1
#define _CM2CON0_C2HYS_SIZE                                 0x1
#define _CM2CON0_C2HYS_LENGTH                               0x1
#define _CM2CON0_C2HYS_MASK                                 0x2
#define _CM2CON0_C2SP_POSN                                  0x2
#define _CM2CON0_C2SP_POSITION                              0x2
#define _CM2CON0_C2SP_SIZE                                  0x1
#define _CM2CON0_C2SP_LENGTH                                0x1
#define _CM2CON0_C2SP_MASK                                  0x4
#define _CM2CON0_C2POL_POSN                                 0x4
#define _CM2CON0_C2POL_POSITION                             0x4
#define _CM2CON0_C2POL_SIZE                                 0x1
#define _CM2CON0_C2POL_LENGTH                               0x1
#define _CM2CON0_C2POL_MASK                                 0x10
#define _CM2CON0_C2OE_POSN                                  0x5
#define _CM2CON0_C2OE_POSITION                              0x5
#define _CM2CON0_C2OE_SIZE                                  0x1
#define _CM2CON0_C2OE_LENGTH                                0x1
#define _CM2CON0_C2OE_MASK                                  0x20
#define _CM2CON0_C2OUT_POSN                                 0x6
#define _CM2CON0_C2OUT_POSITION                             0x6
#define _CM2CON0_C2OUT_SIZE                                 0x1
#define _CM2CON0_C2OUT_LENGTH                               0x1
#define _CM2CON0_C2OUT_MASK                                 0x40
#define _CM2CON0_C2ON_POSN                                  0x7
#define _CM2CON0_C2ON_POSITION                              0x7
#define _CM2CON0_C2ON_SIZE                                  0x1
#define _CM2CON0_C2ON_LENGTH                                0x1
#define _CM2CON0_C2ON_MASK                                  0x80

// Register: CM2CON1
#define CM2CON1 CM2CON1
extern volatile unsigned char           CM2CON1             __at(0x114);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2NCH0                 :1;
        unsigned C2NCH1                 :1;
        unsigned C2NCH2                 :1;
        unsigned                        :1;
        unsigned C2PCH0                 :1;
        unsigned C2PCH1                 :1;
        unsigned C2INTN                 :1;
        unsigned C2INTP                 :1;
    };
    struct {
        unsigned C2NCH                  :3;
        unsigned                        :1;
        unsigned C2PCH                  :2;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0x114);
// bitfield macros
#define _CM2CON1_C2NCH0_POSN                                0x0
#define _CM2CON1_C2NCH0_POSITION                            0x0
#define _CM2CON1_C2NCH0_SIZE                                0x1
#define _CM2CON1_C2NCH0_LENGTH                              0x1
#define _CM2CON1_C2NCH0_MASK                                0x1
#define _CM2CON1_C2NCH1_POSN                                0x1
#define _CM2CON1_C2NCH1_POSITION                            0x1
#define _CM2CON1_C2NCH1_SIZE                                0x1
#define _CM2CON1_C2NCH1_LENGTH                              0x1
#define _CM2CON1_C2NCH1_MASK                                0x2
#define _CM2CON1_C2NCH2_POSN                                0x2
#define _CM2CON1_C2NCH2_POSITION                            0x2
#define _CM2CON1_C2NCH2_SIZE                                0x1
#define _CM2CON1_C2NCH2_LENGTH                              0x1
#define _CM2CON1_C2NCH2_MASK                                0x4
#define _CM2CON1_C2PCH0_POSN                                0x4
#define _CM2CON1_C2PCH0_POSITION                            0x4
#define _CM2CON1_C2PCH0_SIZE                                0x1
#define _CM2CON1_C2PCH0_LENGTH                              0x1
#define _CM2CON1_C2PCH0_MASK                                0x10
#define _CM2CON1_C2PCH1_POSN                                0x5
#define _CM2CON1_C2PCH1_POSITION                            0x5
#define _CM2CON1_C2PCH1_SIZE                                0x1
#define _CM2CON1_C2PCH1_LENGTH                              0x1
#define _CM2CON1_C2PCH1_MASK                                0x20
#define _CM2CON1_C2INTN_POSN                                0x6
#define _CM2CON1_C2INTN_POSITION                            0x6
#define _CM2CON1_C2INTN_SIZE                                0x1
#define _CM2CON1_C2INTN_LENGTH                              0x1
#define _CM2CON1_C2INTN_MASK                                0x40
#define _CM2CON1_C2INTP_POSN                                0x7
#define _CM2CON1_C2INTP_POSITION                            0x7
#define _CM2CON1_C2INTP_SIZE                                0x1
#define _CM2CON1_C2INTP_LENGTH                              0x1
#define _CM2CON1_C2INTP_MASK                                0x80
#define _CM2CON1_C2NCH_POSN                                 0x0
#define _CM2CON1_C2NCH_POSITION                             0x0
#define _CM2CON1_C2NCH_SIZE                                 0x3
#define _CM2CON1_C2NCH_LENGTH                               0x3
#define _CM2CON1_C2NCH_MASK                                 0x7
#define _CM2CON1_C2PCH_POSN                                 0x4
#define _CM2CON1_C2PCH_POSITION                             0x4
#define _CM2CON1_C2PCH_SIZE                                 0x2
#define _CM2CON1_C2PCH_LENGTH                               0x2
#define _CM2CON1_C2PCH_MASK                                 0x30

// Register: CMOUT
#define CMOUT CMOUT
extern volatile unsigned char           CMOUT               __at(0x115);
#ifndef _LIB_BUILD
asm("CMOUT equ 0115h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MC1OUT                 :1;
        unsigned MC2OUT                 :1;
    };
} CMOUTbits_t;
extern volatile CMOUTbits_t CMOUTbits __at(0x115);
// bitfield macros
#define _CMOUT_MC1OUT_POSN                                  0x0
#define _CMOUT_MC1OUT_POSITION                              0x0
#define _CMOUT_MC1OUT_SIZE                                  0x1
#define _CMOUT_MC1OUT_LENGTH                                0x1
#define _CMOUT_MC1OUT_MASK                                  0x1
#define _CMOUT_MC2OUT_POSN                                  0x1
#define _CMOUT_MC2OUT_POSITION                              0x1
#define _CMOUT_MC2OUT_SIZE                                  0x1
#define _CMOUT_MC2OUT_LENGTH                                0x1
#define _CMOUT_MC2OUT_MASK                                  0x2

// Register: BORCON
#define BORCON BORCON
extern volatile unsigned char           BORCON              __at(0x116);
#ifndef _LIB_BUILD
asm("BORCON equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BORRDY                 :1;
        unsigned                        :5;
        unsigned BORFS                  :1;
        unsigned SBOREN                 :1;
    };
} BORCONbits_t;
extern volatile BORCONbits_t BORCONbits __at(0x116);
// bitfield macros
#define _BORCON_BORRDY_POSN                                 0x0
#define _BORCON_BORRDY_POSITION                             0x0
#define _BORCON_BORRDY_SIZE                                 0x1
#define _BORCON_BORRDY_LENGTH                               0x1
#define _BORCON_BORRDY_MASK                                 0x1
#define _BORCON_BORFS_POSN                                  0x6
#define _BORCON_BORFS_POSITION                              0x6
#define _BORCON_BORFS_SIZE                                  0x1
#define _BORCON_BORFS_LENGTH                                0x1
#define _BORCON_BORFS_MASK                                  0x40
#define _BORCON_SBOREN_POSN                                 0x7
#define _BORCON_SBOREN_POSITION                             0x7
#define _BORCON_SBOREN_SIZE                                 0x1
#define _BORCON_SBOREN_LENGTH                               0x1
#define _BORCON_SBOREN_MASK                                 0x80

// Register: FVRCON
#define FVRCON FVRCON
extern volatile unsigned char           FVRCON              __at(0x117);
#ifndef _LIB_BUILD
asm("FVRCON equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADFVR                  :2;
        unsigned CDAFVR                 :2;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
        unsigned CDAFVR0                :1;
        unsigned CDAFVR1                :1;
    };
} FVRCONbits_t;
extern volatile FVRCONbits_t FVRCONbits __at(0x117);
// bitfield macros
#define _FVRCON_ADFVR_POSN                                  0x0
#define _FVRCON_ADFVR_POSITION                              0x0
#define _FVRCON_ADFVR_SIZE                                  0x2
#define _FVRCON_ADFVR_LENGTH                                0x2
#define _FVRCON_ADFVR_MASK                                  0x3
#define _FVRCON_CDAFVR_POSN                                 0x2
#define _FVRCON_CDAFVR_POSITION                             0x2
#define _FVRCON_CDAFVR_SIZE                                 0x2
#define _FVRCON_CDAFVR_LENGTH                               0x2
#define _FVRCON_CDAFVR_MASK                                 0xC
#define _FVRCON_TSRNG_POSN                                  0x4
#define _FVRCON_TSRNG_POSITION                              0x4
#define _FVRCON_TSRNG_SIZE                                  0x1
#define _FVRCON_TSRNG_LENGTH                                0x1
#define _FVRCON_TSRNG_MASK                                  0x10
#define _FVRCON_TSEN_POSN                                   0x5
#define _FVRCON_TSEN_POSITION                               0x5
#define _FVRCON_TSEN_SIZE                                   0x1
#define _FVRCON_TSEN_LENGTH                                 0x1
#define _FVRCON_TSEN_MASK                                   0x20
#define _FVRCON_FVRRDY_POSN                                 0x6
#define _FVRCON_FVRRDY_POSITION                             0x6
#define _FVRCON_FVRRDY_SIZE                                 0x1
#define _FVRCON_FVRRDY_LENGTH                               0x1
#define _FVRCON_FVRRDY_MASK                                 0x40
#define _FVRCON_FVREN_POSN                                  0x7
#define _FVRCON_FVREN_POSITION                              0x7
#define _FVRCON_FVREN_SIZE                                  0x1
#define _FVRCON_FVREN_LENGTH                                0x1
#define _FVRCON_FVREN_MASK                                  0x80
#define _FVRCON_ADFVR0_POSN                                 0x0
#define _FVRCON_ADFVR0_POSITION                             0x0
#define _FVRCON_ADFVR0_SIZE                                 0x1
#define _FVRCON_ADFVR0_LENGTH                               0x1
#define _FVRCON_ADFVR0_MASK                                 0x1
#define _FVRCON_ADFVR1_POSN                                 0x1
#define _FVRCON_ADFVR1_POSITION                             0x1
#define _FVRCON_ADFVR1_SIZE                                 0x1
#define _FVRCON_ADFVR1_LENGTH                               0x1
#define _FVRCON_ADFVR1_MASK                                 0x2
#define _FVRCON_CDAFVR0_POSN                                0x2
#define _FVRCON_CDAFVR0_POSITION                            0x2
#define _FVRCON_CDAFVR0_SIZE                                0x1
#define _FVRCON_CDAFVR0_LENGTH                              0x1
#define _FVRCON_CDAFVR0_MASK                                0x4
#define _FVRCON_CDAFVR1_POSN                                0x3
#define _FVRCON_CDAFVR1_POSITION                            0x3
#define _FVRCON_CDAFVR1_SIZE                                0x1
#define _FVRCON_CDAFVR1_LENGTH                              0x1
#define _FVRCON_CDAFVR1_MASK                                0x8

// Register: DACCON0
#define DACCON0 DACCON0
extern volatile unsigned char           DACCON0             __at(0x118);
#ifndef _LIB_BUILD
asm("DACCON0 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned D1PSS                  :2;
        unsigned DACOE2                 :1;
        unsigned DACOE1                 :1;
        unsigned                        :1;
        unsigned DACEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned D1PSS0                 :1;
        unsigned D1PSS1                 :1;
    };
} DACCON0bits_t;
extern volatile DACCON0bits_t DACCON0bits __at(0x118);
// bitfield macros
#define _DACCON0_D1PSS_POSN                                 0x2
#define _DACCON0_D1PSS_POSITION                             0x2
#define _DACCON0_D1PSS_SIZE                                 0x2
#define _DACCON0_D1PSS_LENGTH                               0x2
#define _DACCON0_D1PSS_MASK                                 0xC
#define _DACCON0_DACOE2_POSN                                0x4
#define _DACCON0_DACOE2_POSITION                            0x4
#define _DACCON0_DACOE2_SIZE                                0x1
#define _DACCON0_DACOE2_LENGTH                              0x1
#define _DACCON0_DACOE2_MASK                                0x10
#define _DACCON0_DACOE1_POSN                                0x5
#define _DACCON0_DACOE1_POSITION                            0x5
#define _DACCON0_DACOE1_SIZE                                0x1
#define _DACCON0_DACOE1_LENGTH                              0x1
#define _DACCON0_DACOE1_MASK                                0x20
#define _DACCON0_DACEN_POSN                                 0x7
#define _DACCON0_DACEN_POSITION                             0x7
#define _DACCON0_DACEN_SIZE                                 0x1
#define _DACCON0_DACEN_LENGTH                               0x1
#define _DACCON0_DACEN_MASK                                 0x80
#define _DACCON0_D1PSS0_POSN                                0x2
#define _DACCON0_D1PSS0_POSITION                            0x2
#define _DACCON0_D1PSS0_SIZE                                0x1
#define _DACCON0_D1PSS0_LENGTH                              0x1
#define _DACCON0_D1PSS0_MASK                                0x4
#define _DACCON0_D1PSS1_POSN                                0x3
#define _DACCON0_D1PSS1_POSITION                            0x3
#define _DACCON0_D1PSS1_SIZE                                0x1
#define _DACCON0_D1PSS1_LENGTH                              0x1
#define _DACCON0_D1PSS1_MASK                                0x8

// Register: DACCON1
#define DACCON1 DACCON1
extern volatile unsigned char           DACCON1             __at(0x119);
#ifndef _LIB_BUILD
asm("DACCON1 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACR                   :5;
    };
    struct {
        unsigned DACR0                  :1;
        unsigned DACR1                  :1;
        unsigned DACR2                  :1;
        unsigned DACR3                  :1;
        unsigned DACR4                  :1;
    };
} DACCON1bits_t;
extern volatile DACCON1bits_t DACCON1bits __at(0x119);
// bitfield macros
#define _DACCON1_DACR_POSN                                  0x0
#define _DACCON1_DACR_POSITION                              0x0
#define _DACCON1_DACR_SIZE                                  0x5
#define _DACCON1_DACR_LENGTH                                0x5
#define _DACCON1_DACR_MASK                                  0x1F
#define _DACCON1_DACR0_POSN                                 0x0
#define _DACCON1_DACR0_POSITION                             0x0
#define _DACCON1_DACR0_SIZE                                 0x1
#define _DACCON1_DACR0_LENGTH                               0x1
#define _DACCON1_DACR0_MASK                                 0x1
#define _DACCON1_DACR1_POSN                                 0x1
#define _DACCON1_DACR1_POSITION                             0x1
#define _DACCON1_DACR1_SIZE                                 0x1
#define _DACCON1_DACR1_LENGTH                               0x1
#define _DACCON1_DACR1_MASK                                 0x2
#define _DACCON1_DACR2_POSN                                 0x2
#define _DACCON1_DACR2_POSITION                             0x2
#define _DACCON1_DACR2_SIZE                                 0x1
#define _DACCON1_DACR2_LENGTH                               0x1
#define _DACCON1_DACR2_MASK                                 0x4
#define _DACCON1_DACR3_POSN                                 0x3
#define _DACCON1_DACR3_POSITION                             0x3
#define _DACCON1_DACR3_SIZE                                 0x1
#define _DACCON1_DACR3_LENGTH                               0x1
#define _DACCON1_DACR3_MASK                                 0x8
#define _DACCON1_DACR4_POSN                                 0x4
#define _DACCON1_DACR4_POSITION                             0x4
#define _DACCON1_DACR4_SIZE                                 0x1
#define _DACCON1_DACR4_LENGTH                               0x1
#define _DACCON1_DACR4_MASK                                 0x10

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x11D);
#ifndef _LIB_BUILD
asm("APFCON equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned P2SEL                  :1;
        unsigned T1GSEL                 :1;
        unsigned                        :1;
        unsigned SSSEL                  :1;
        unsigned SDOSEL                 :1;
        unsigned CLKRSEL                :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_P2SEL_POSN                                  0x2
#define _APFCON_P2SEL_POSITION                              0x2
#define _APFCON_P2SEL_SIZE                                  0x1
#define _APFCON_P2SEL_LENGTH                                0x1
#define _APFCON_P2SEL_MASK                                  0x4
#define _APFCON_T1GSEL_POSN                                 0x3
#define _APFCON_T1GSEL_POSITION                             0x3
#define _APFCON_T1GSEL_SIZE                                 0x1
#define _APFCON_T1GSEL_LENGTH                               0x1
#define _APFCON_T1GSEL_MASK                                 0x8
#define _APFCON_SSSEL_POSN                                  0x5
#define _APFCON_SSSEL_POSITION                              0x5
#define _APFCON_SSSEL_SIZE                                  0x1
#define _APFCON_SSSEL_LENGTH                                0x1
#define _APFCON_SSSEL_MASK                                  0x20
#define _APFCON_SDOSEL_POSN                                 0x6
#define _APFCON_SDOSEL_POSITION                             0x6
#define _APFCON_SDOSEL_SIZE                                 0x1
#define _APFCON_SDOSEL_LENGTH                               0x1
#define _APFCON_SDOSEL_MASK                                 0x40
#define _APFCON_CLKRSEL_POSN                                0x7
#define _APFCON_CLKRSEL_POSITION                            0x7
#define _APFCON_CLKRSEL_SIZE                                0x1
#define _APFCON_CLKRSEL_LENGTH                              0x1
#define _APFCON_CLKRSEL_MASK                                0x80

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x18C);
#ifndef _LIB_BUILD
asm("ANSELA equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ANSA4                  :1;
    };
    struct {
        unsigned ANSELA                 :6;
    };
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x18C);
// bitfield macros
#define _ANSELA_ANSA4_POSN                                  0x4
#define _ANSELA_ANSA4_POSITION                              0x4
#define _ANSELA_ANSA4_SIZE                                  0x1
#define _ANSELA_ANSA4_LENGTH                                0x1
#define _ANSELA_ANSA4_MASK                                  0x10
#define _ANSELA_ANSELA_POSN                                 0x0
#define _ANSELA_ANSELA_POSITION                             0x0
#define _ANSELA_ANSELA_SIZE                                 0x6
#define _ANSELA_ANSELA_LENGTH                               0x6
#define _ANSELA_ANSELA_MASK                                 0x3F

// Register: ANSELC
#define ANSELC ANSELC
extern volatile unsigned char           ANSELC              __at(0x18E);
#ifndef _LIB_BUILD
asm("ANSELC equ 018Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSC0                  :1;
        unsigned ANSC1                  :1;
        unsigned ANSC2                  :1;
        unsigned ANSC3                  :1;
    };
    struct {
        unsigned ANSELC                 :8;
    };
} ANSELCbits_t;
extern volatile ANSELCbits_t ANSELCbits __at(0x18E);
// bitfield macros
#define _ANSELC_ANSC0_POSN                                  0x0
#define _ANSELC_ANSC0_POSITION                              0x0
#define _ANSELC_ANSC0_SIZE                                  0x1
#define _ANSELC_ANSC0_LENGTH                                0x1
#define _ANSELC_ANSC0_MASK                                  0x1
#define _ANSELC_ANSC1_POSN                                  0x1
#define _ANSELC_ANSC1_POSITION                              0x1
#define _ANSELC_ANSC1_SIZE                                  0x1
#define _ANSELC_ANSC1_LENGTH                                0x1
#define _ANSELC_ANSC1_MASK                                  0x2
#define _ANSELC_ANSC2_POSN                                  0x2
#define _ANSELC_ANSC2_POSITION                              0x2
#define _ANSELC_ANSC2_SIZE                                  0x1
#define _ANSELC_ANSC2_LENGTH                                0x1
#define _ANSELC_ANSC2_MASK                                  0x4
#define _ANSELC_ANSC3_POSN                                  0x3
#define _ANSELC_ANSC3_POSITION                              0x3
#define _ANSELC_ANSC3_SIZE                                  0x1
#define _ANSELC_ANSC3_LENGTH                                0x1
#define _ANSELC_ANSC3_MASK                                  0x8
#define _ANSELC_ANSELC_POSN                                 0x0
#define _ANSELC_ANSELC_POSITION                             0x0
#define _ANSELC_ANSELC_SIZE                                 0x8
#define _ANSELC_ANSELC_LENGTH                               0x8
#define _ANSELC_ANSELC_MASK                                 0xFF

// Register: PMADR
#define PMADR PMADR
extern volatile unsigned short          PMADR               __at(0x191);
#ifndef _LIB_BUILD
asm("PMADR equ 0191h");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x191);
#ifndef _LIB_BUILD
asm("PMADRL equ 0191h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRL                 :8;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x191);
// bitfield macros
#define _PMADRL_PMADRL_POSN                                 0x0
#define _PMADRL_PMADRL_POSITION                             0x0
#define _PMADRL_PMADRL_SIZE                                 0x8
#define _PMADRL_PMADRL_LENGTH                               0x8
#define _PMADRL_PMADRL_MASK                                 0xFF

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x192);
#ifndef _LIB_BUILD
asm("PMADRH equ 0192h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRH                 :7;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x192);
// bitfield macros
#define _PMADRH_PMADRH_POSN                                 0x0
#define _PMADRH_PMADRH_POSITION                             0x0
#define _PMADRH_PMADRH_SIZE                                 0x7
#define _PMADRH_PMADRH_LENGTH                               0x7
#define _PMADRH_PMADRH_MASK                                 0x7F

// Register: PMDAT
#define PMDAT PMDAT
extern volatile unsigned short          PMDAT               __at(0x193);
#ifndef _LIB_BUILD
asm("PMDAT equ 0193h");
#endif

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x193);
#ifndef _LIB_BUILD
asm("PMDATL equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATL                 :8;
    };
} PMDATLbits_t;
extern volatile PMDATLbits_t PMDATLbits __at(0x193);
// bitfield macros
#define _PMDATL_PMDATL_POSN                                 0x0
#define _PMDATL_PMDATL_POSITION                             0x0
#define _PMDATL_PMDATL_SIZE                                 0x8
#define _PMDATL_PMDATL_LENGTH                               0x8
#define _PMDATL_PMDATL_MASK                                 0xFF

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x194);
#ifndef _LIB_BUILD
asm("PMDATH equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATH                 :6;
    };
} PMDATHbits_t;
extern volatile PMDATHbits_t PMDATHbits __at(0x194);
// bitfield macros
#define _PMDATH_PMDATH_POSN                                 0x0
#define _PMDATH_PMDATH_POSITION                             0x0
#define _PMDATH_PMDATH_SIZE                                 0x6
#define _PMDATH_PMDATH_LENGTH                               0x6
#define _PMDATH_PMDATH_MASK                                 0x3F

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x195);
#ifndef _LIB_BUILD
asm("PMCON1 equ 0195h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned LWLO                   :1;
        unsigned CFGS                   :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x195);
// bitfield macros
#define _PMCON1_RD_POSN                                     0x0
#define _PMCON1_RD_POSITION                                 0x0
#define _PMCON1_RD_SIZE                                     0x1
#define _PMCON1_RD_LENGTH                                   0x1
#define _PMCON1_RD_MASK                                     0x1
#define _PMCON1_WR_POSN                                     0x1
#define _PMCON1_WR_POSITION                                 0x1
#define _PMCON1_WR_SIZE                                     0x1
#define _PMCON1_WR_LENGTH                                   0x1
#define _PMCON1_WR_MASK                                     0x2
#define _PMCON1_WREN_POSN                                   0x2
#define _PMCON1_WREN_POSITION                               0x2
#define _PMCON1_WREN_SIZE                                   0x1
#define _PMCON1_WREN_LENGTH                                 0x1
#define _PMCON1_WREN_MASK                                   0x4
#define _PMCON1_WRERR_POSN                                  0x3
#define _PMCON1_WRERR_POSITION                              0x3
#define _PMCON1_WRERR_SIZE                                  0x1
#define _PMCON1_WRERR_LENGTH                                0x1
#define _PMCON1_WRERR_MASK                                  0x8
#define _PMCON1_FREE_POSN                                   0x4
#define _PMCON1_FREE_POSITION                               0x4
#define _PMCON1_FREE_SIZE                                   0x1
#define _PMCON1_FREE_LENGTH                                 0x1
#define _PMCON1_FREE_MASK                                   0x10
#define _PMCON1_LWLO_POSN                                   0x5
#define _PMCON1_LWLO_POSITION                               0x5
#define _PMCON1_LWLO_SIZE                                   0x1
#define _PMCON1_LWLO_LENGTH                                 0x1
#define _PMCON1_LWLO_MASK                                   0x20
#define _PMCON1_CFGS_POSN                                   0x6
#define _PMCON1_CFGS_POSITION                               0x6
#define _PMCON1_CFGS_SIZE                                   0x1
#define _PMCON1_CFGS_LENGTH                                 0x1
#define _PMCON1_CFGS_MASK                                   0x40

// Register: PMCON2
#define PMCON2 PMCON2
extern volatile unsigned char           PMCON2              __at(0x196);
#ifndef _LIB_BUILD
asm("PMCON2 equ 0196h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMCON2                 :8;
    };
} PMCON2bits_t;
extern volatile PMCON2bits_t PMCON2bits __at(0x196);
// bitfield macros
#define _PMCON2_PMCON2_POSN                                 0x0
#define _PMCON2_PMCON2_POSITION                             0x0
#define _PMCON2_PMCON2_SIZE                                 0x8
#define _PMCON2_PMCON2_LENGTH                               0x8
#define _PMCON2_PMCON2_MASK                                 0xFF

// Register: VREGCON
#define VREGCON VREGCON
extern volatile unsigned char           VREGCON             __at(0x197);
#ifndef _LIB_BUILD
asm("VREGCON equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VREGPM                 :2;
    };
    struct {
        unsigned VREGPM0                :1;
        unsigned VREGPM1                :1;
    };
} VREGCONbits_t;
extern volatile VREGCONbits_t VREGCONbits __at(0x197);
// bitfield macros
#define _VREGCON_VREGPM_POSN                                0x0
#define _VREGCON_VREGPM_POSITION                            0x0
#define _VREGCON_VREGPM_SIZE                                0x2
#define _VREGCON_VREGPM_LENGTH                              0x2
#define _VREGCON_VREGPM_MASK                                0x3
#define _VREGCON_VREGPM0_POSN                               0x0
#define _VREGCON_VREGPM0_POSITION                           0x0
#define _VREGCON_VREGPM0_SIZE                               0x1
#define _VREGCON_VREGPM0_LENGTH                             0x1
#define _VREGCON_VREGPM0_MASK                               0x1
#define _VREGCON_VREGPM1_POSN                               0x1
#define _VREGCON_VREGPM1_POSITION                           0x1
#define _VREGCON_VREGPM1_SIZE                               0x1
#define _VREGCON_VREGPM1_LENGTH                             0x1
#define _VREGCON_VREGPM1_MASK                               0x2

// Register: RCREG
#define RCREG RCREG
extern volatile unsigned char           RCREG               __at(0x199);
#ifndef _LIB_BUILD
asm("RCREG equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG                  :8;
    };
} RCREGbits_t;
extern volatile RCREGbits_t RCREGbits __at(0x199);
// bitfield macros
#define _RCREG_RCREG_POSN                                   0x0
#define _RCREG_RCREG_POSITION                               0x0
#define _RCREG_RCREG_SIZE                                   0x8
#define _RCREG_RCREG_LENGTH                                 0x8
#define _RCREG_RCREG_MASK                                   0xFF

// Register: TXREG
#define TXREG TXREG
extern volatile unsigned char           TXREG               __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG                  :8;
    };
} TXREGbits_t;
extern volatile TXREGbits_t TXREGbits __at(0x19A);
// bitfield macros
#define _TXREG_TXREG_POSN                                   0x0
#define _TXREG_TXREG_POSITION                               0x0
#define _TXREG_TXREG_SIZE                                   0x8
#define _TXREG_TXREG_LENGTH                                 0x8
#define _TXREG_TXREG_MASK                                   0xFF

// Register: SPBRG
#define SPBRG SPBRG
extern volatile unsigned short          SPBRG               __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRG equ 019Bh");
#endif

// Register: SPBRGL
#define SPBRGL SPBRGL
extern volatile unsigned char           SPBRGL              __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRGL equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SPBRGLbits_t;
extern volatile SPBRGLbits_t SPBRGLbits __at(0x19B);
// bitfield macros
#define _SPBRGL_SPBRGL_POSN                                 0x0
#define _SPBRGL_SPBRGL_POSITION                             0x0
#define _SPBRGL_SPBRGL_SIZE                                 0x8
#define _SPBRGL_SPBRGL_LENGTH                               0x8
#define _SPBRGL_SPBRGL_MASK                                 0xFF

// Register: SPBRGH
#define SPBRGH SPBRGH
extern volatile unsigned char           SPBRGH              __at(0x19C);
#ifndef _LIB_BUILD
asm("SPBRGH equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH                 :8;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0x19C);
// bitfield macros
#define _SPBRGH_SPBRGH_POSN                                 0x0
#define _SPBRGH_SPBRGH_POSITION                             0x0
#define _SPBRGH_SPBRGH_SIZE                                 0x8
#define _SPBRGH_SPBRGH_LENGTH                               0x8
#define _SPBRGH_SPBRGH_MASK                                 0xFF

// Register: RCSTA
#define RCSTA RCSTA
extern volatile unsigned char           RCSTA               __at(0x19D);
#ifndef _LIB_BUILD
asm("RCSTA equ 019Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0x19D);
// bitfield macros
#define _RCSTA_RX9D_POSN                                    0x0
#define _RCSTA_RX9D_POSITION                                0x0
#define _RCSTA_RX9D_SIZE                                    0x1
#define _RCSTA_RX9D_LENGTH                                  0x1
#define _RCSTA_RX9D_MASK                                    0x1
#define _RCSTA_OERR_POSN                                    0x1
#define _RCSTA_OERR_POSITION                                0x1
#define _RCSTA_OERR_SIZE                                    0x1
#define _RCSTA_OERR_LENGTH                                  0x1
#define _RCSTA_OERR_MASK                                    0x2
#define _RCSTA_FERR_POSN                                    0x2
#define _RCSTA_FERR_POSITION                                0x2
#define _RCSTA_FERR_SIZE                                    0x1
#define _RCSTA_FERR_LENGTH                                  0x1
#define _RCSTA_FERR_MASK                                    0x4
#define _RCSTA_ADDEN_POSN                                   0x3
#define _RCSTA_ADDEN_POSITION                               0x3
#define _RCSTA_ADDEN_SIZE                                   0x1
#define _RCSTA_ADDEN_LENGTH                                 0x1
#define _RCSTA_ADDEN_MASK                                   0x8
#define _RCSTA_CREN_POSN                                    0x4
#define _RCSTA_CREN_POSITION                                0x4
#define _RCSTA_CREN_SIZE                                    0x1
#define _RCSTA_CREN_LENGTH                                  0x1
#define _RCSTA_CREN_MASK                                    0x10
#define _RCSTA_SREN_POSN                                    0x5
#define _RCSTA_SREN_POSITION                                0x5
#define _RCSTA_SREN_SIZE                                    0x1
#define _RCSTA_SREN_LENGTH                                  0x1
#define _RCSTA_SREN_MASK                                    0x20
#define _RCSTA_RX9_POSN                                     0x6
#define _RCSTA_RX9_POSITION                                 0x6
#define _RCSTA_RX9_SIZE                                     0x1
#define _RCSTA_RX9_LENGTH                                   0x1
#define _RCSTA_RX9_MASK                                     0x40
#define _RCSTA_SPEN_POSN                                    0x7
#define _RCSTA_SPEN_POSITION                                0x7
#define _RCSTA_SPEN_SIZE                                    0x1
#define _RCSTA_SPEN_LENGTH                                  0x1
#define _RCSTA_SPEN_MASK                                    0x80

// Register: TXSTA
#define TXSTA TXSTA
extern volatile unsigned char           TXSTA               __at(0x19E);
#ifndef _LIB_BUILD
asm("TXSTA equ 019Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0x19E);
// bitfield macros
#define _TXSTA_TX9D_POSN                                    0x0
#define _TXSTA_TX9D_POSITION                                0x0
#define _TXSTA_TX9D_SIZE                                    0x1
#define _TXSTA_TX9D_LENGTH                                  0x1
#define _TXSTA_TX9D_MASK                                    0x1
#define _TXSTA_TRMT_POSN                                    0x1
#define _TXSTA_TRMT_POSITION                                0x1
#define _TXSTA_TRMT_SIZE                                    0x1
#define _TXSTA_TRMT_LENGTH                                  0x1
#define _TXSTA_TRMT_MASK                                    0x2
#define _TXSTA_BRGH_POSN                                    0x2
#define _TXSTA_BRGH_POSITION                                0x2
#define _TXSTA_BRGH_SIZE                                    0x1
#define _TXSTA_BRGH_LENGTH                                  0x1
#define _TXSTA_BRGH_MASK                                    0x4
#define _TXSTA_SENDB_POSN                                   0x3
#define _TXSTA_SENDB_POSITION                               0x3
#define _TXSTA_SENDB_SIZE                                   0x1
#define _TXSTA_SENDB_LENGTH                                 0x1
#define _TXSTA_SENDB_MASK                                   0x8
#define _TXSTA_SYNC_POSN                                    0x4
#define _TXSTA_SYNC_POSITION                                0x4
#define _TXSTA_SYNC_SIZE                                    0x1
#define _TXSTA_SYNC_LENGTH                                  0x1
#define _TXSTA_SYNC_MASK                                    0x10
#define _TXSTA_TXEN_POSN                                    0x5
#define _TXSTA_TXEN_POSITION                                0x5
#define _TXSTA_TXEN_SIZE                                    0x1
#define _TXSTA_TXEN_LENGTH                                  0x1
#define _TXSTA_TXEN_MASK                                    0x20
#define _TXSTA_TX9_POSN                                     0x6
#define _TXSTA_TX9_POSITION                                 0x6
#define _TXSTA_TX9_SIZE                                     0x1
#define _TXSTA_TX9_LENGTH                                   0x1
#define _TXSTA_TX9_MASK                                     0x40
#define _TXSTA_CSRC_POSN                                    0x7
#define _TXSTA_CSRC_POSITION                                0x7
#define _TXSTA_CSRC_SIZE                                    0x1
#define _TXSTA_CSRC_LENGTH                                  0x1
#define _TXSTA_CSRC_MASK                                    0x80

// Register: BAUDCON
#define BAUDCON BAUDCON
extern volatile unsigned char           BAUDCON             __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON equ 019Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUDCONbits_t;
extern volatile BAUDCONbits_t BAUDCONbits __at(0x19F);
// bitfield macros
#define _BAUDCON_ABDEN_POSN                                 0x0
#define _BAUDCON_ABDEN_POSITION                             0x0
#define _BAUDCON_ABDEN_SIZE                                 0x1
#define _BAUDCON_ABDEN_LENGTH                               0x1
#define _BAUDCON_ABDEN_MASK                                 0x1
#define _BAUDCON_WUE_POSN                                   0x1
#define _BAUDCON_WUE_POSITION                               0x1
#define _BAUDCON_WUE_SIZE                                   0x1
#define _BAUDCON_WUE_LENGTH                                 0x1
#define _BAUDCON_WUE_MASK                                   0x2
#define _BAUDCON_BRG16_POSN                                 0x3
#define _BAUDCON_BRG16_POSITION                             0x3
#define _BAUDCON_BRG16_SIZE                                 0x1
#define _BAUDCON_BRG16_LENGTH                               0x1
#define _BAUDCON_BRG16_MASK                                 0x8
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x20C);
#ifndef _LIB_BUILD
asm("WPUA equ 020Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
    struct {
        unsigned WPUA                   :6;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0x20C);
// bitfield macros
#define _WPUA_WPUA3_POSN                                    0x3
#define _WPUA_WPUA3_POSITION                                0x3
#define _WPUA_WPUA3_SIZE                                    0x1
#define _WPUA_WPUA3_LENGTH                                  0x1
#define _WPUA_WPUA3_MASK                                    0x8
#define _WPUA_WPUA4_POSN                                    0x4
#define _WPUA_WPUA4_POSITION                                0x4
#define _WPUA_WPUA4_SIZE                                    0x1
#define _WPUA_WPUA4_LENGTH                                  0x1
#define _WPUA_WPUA4_MASK                                    0x10
#define _WPUA_WPUA5_POSN                                    0x5
#define _WPUA_WPUA5_POSITION                                0x5
#define _WPUA_WPUA5_SIZE                                    0x1
#define _WPUA_WPUA5_LENGTH                                  0x1
#define _WPUA_WPUA5_MASK                                    0x20
#define _WPUA_WPUA_POSN                                     0x0
#define _WPUA_WPUA_POSITION                                 0x0
#define _WPUA_WPUA_SIZE                                     0x6
#define _WPUA_WPUA_LENGTH                                   0x6
#define _WPUA_WPUA_MASK                                     0x3F

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
extern volatile unsigned char           SSP1BUF             __at(0x211);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0211h");
#endif
// aliases
extern volatile unsigned char           SSPBUF              __at(0x211);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0211h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP1BUFbits_t;
extern volatile SSP1BUFbits_t SSP1BUFbits __at(0x211);
// bitfield macros
#define _SSP1BUF_SSPBUF_POSN                                0x0
#define _SSP1BUF_SSPBUF_POSITION                            0x0
#define _SSP1BUF_SSPBUF_SIZE                                0x8
#define _SSP1BUF_SSPBUF_LENGTH                              0x8
#define _SSP1BUF_SSPBUF_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSPBUFbits_t;
extern volatile SSPBUFbits_t SSPBUFbits __at(0x211);
// bitfield macros
#define _SSPBUF_SSPBUF_POSN                                 0x0
#define _SSPBUF_SSPBUF_POSITION                             0x0
#define _SSPBUF_SSPBUF_SIZE                                 0x8
#define _SSPBUF_SSPBUF_LENGTH                               0x8
#define _SSPBUF_SSPBUF_MASK                                 0xFF

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
extern volatile unsigned char           SSP1ADD             __at(0x212);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0212h");
#endif
// aliases
extern volatile unsigned char           SSPADD              __at(0x212);
#ifndef _LIB_BUILD
asm("SSPADD equ 0212h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0x212);
// bitfield macros
#define _SSP1ADD_SSPADD_POSN                                0x0
#define _SSP1ADD_SSPADD_POSITION                            0x0
#define _SSP1ADD_SSPADD_SIZE                                0x8
#define _SSP1ADD_SSPADD_LENGTH                              0x8
#define _SSP1ADD_SSPADD_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0x212);
// bitfield macros
#define _SSPADD_SSPADD_POSN                                 0x0
#define _SSPADD_SSPADD_POSITION                             0x0
#define _SSPADD_SSPADD_SIZE                                 0x8
#define _SSPADD_SSPADD_LENGTH                               0x8
#define _SSPADD_SSPADD_MASK                                 0xFF

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
extern volatile unsigned char           SSP1MSK             __at(0x213);
#ifndef _LIB_BUILD
asm("SSP1MSK equ 0213h");
#endif
// aliases
extern volatile unsigned char           SSPMSK              __at(0x213);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0213h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSP1MSKbits_t;
extern volatile SSP1MSKbits_t SSP1MSKbits __at(0x213);
// bitfield macros
#define _SSP1MSK_SSPMSK_POSN                                0x0
#define _SSP1MSK_SSPMSK_POSITION                            0x0
#define _SSP1MSK_SSPMSK_SIZE                                0x8
#define _SSP1MSK_SSPMSK_LENGTH                              0x8
#define _SSP1MSK_SSPMSK_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0x213);
// bitfield macros
#define _SSPMSK_SSPMSK_POSN                                 0x0
#define _SSPMSK_SSPMSK_POSITION                             0x0
#define _SSPMSK_SSPMSK_SIZE                                 0x8
#define _SSPMSK_SSPMSK_LENGTH                               0x8
#define _SSPMSK_SSPMSK_MASK                                 0xFF

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
extern volatile unsigned char           SSP1STAT            __at(0x214);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0214h");
#endif
// aliases
extern volatile unsigned char           SSPSTAT             __at(0x214);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0214h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
} SSP1STATbits_t;
extern volatile SSP1STATbits_t SSP1STATbits __at(0x214);
// bitfield macros
#define _SSP1STAT_BF_POSN                                   0x0
#define _SSP1STAT_BF_POSITION                               0x0
#define _SSP1STAT_BF_SIZE                                   0x1
#define _SSP1STAT_BF_LENGTH                                 0x1
#define _SSP1STAT_BF_MASK                                   0x1
#define _SSP1STAT_UA_POSN                                   0x1
#define _SSP1STAT_UA_POSITION                               0x1
#define _SSP1STAT_UA_SIZE                                   0x1
#define _SSP1STAT_UA_LENGTH                                 0x1
#define _SSP1STAT_UA_MASK                                   0x2
#define _SSP1STAT_R_nW_POSN                                 0x2
#define _SSP1STAT_R_nW_POSITION                             0x2
#define _SSP1STAT_R_nW_SIZE                                 0x1
#define _SSP1STAT_R_nW_LENGTH                               0x1
#define _SSP1STAT_R_nW_MASK                                 0x4
#define _SSP1STAT_S_POSN                                    0x3
#define _SSP1STAT_S_POSITION                                0x3
#define _SSP1STAT_S_SIZE                                    0x1
#define _SSP1STAT_S_LENGTH                                  0x1
#define _SSP1STAT_S_MASK                                    0x8
#define _SSP1STAT_P_POSN                                    0x4
#define _SSP1STAT_P_POSITION                                0x4
#define _SSP1STAT_P_SIZE                                    0x1
#define _SSP1STAT_P_LENGTH                                  0x1
#define _SSP1STAT_P_MASK                                    0x10
#define _SSP1STAT_D_nA_POSN                                 0x5
#define _SSP1STAT_D_nA_POSITION                             0x5
#define _SSP1STAT_D_nA_SIZE                                 0x1
#define _SSP1STAT_D_nA_LENGTH                               0x1
#define _SSP1STAT_D_nA_MASK                                 0x20
#define _SSP1STAT_CKE_POSN                                  0x6
#define _SSP1STAT_CKE_POSITION                              0x6
#define _SSP1STAT_CKE_SIZE                                  0x1
#define _SSP1STAT_CKE_LENGTH                                0x1
#define _SSP1STAT_CKE_MASK                                  0x40
#define _SSP1STAT_SMP_POSN                                  0x7
#define _SSP1STAT_SMP_POSITION                              0x7
#define _SSP1STAT_SMP_SIZE                                  0x1
#define _SSP1STAT_SMP_LENGTH                                0x1
#define _SSP1STAT_SMP_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __at(0x214);
// bitfield macros
#define _SSPSTAT_BF_POSN                                    0x0
#define _SSPSTAT_BF_POSITION                                0x0
#define _SSPSTAT_BF_SIZE                                    0x1
#define _SSPSTAT_BF_LENGTH                                  0x1
#define _SSPSTAT_BF_MASK                                    0x1
#define _SSPSTAT_UA_POSN                                    0x1
#define _SSPSTAT_UA_POSITION                                0x1
#define _SSPSTAT_UA_SIZE                                    0x1
#define _SSPSTAT_UA_LENGTH                                  0x1
#define _SSPSTAT_UA_MASK                                    0x2
#define _SSPSTAT_R_nW_POSN                                  0x2
#define _SSPSTAT_R_nW_POSITION                              0x2
#define _SSPSTAT_R_nW_SIZE                                  0x1
#define _SSPSTAT_R_nW_LENGTH                                0x1
#define _SSPSTAT_R_nW_MASK                                  0x4
#define _SSPSTAT_S_POSN                                     0x3
#define _SSPSTAT_S_POSITION                                 0x3
#define _SSPSTAT_S_SIZE                                     0x1
#define _SSPSTAT_S_LENGTH                                   0x1
#define _SSPSTAT_S_MASK                                     0x8
#define _SSPSTAT_P_POSN                                     0x4
#define _SSPSTAT_P_POSITION                                 0x4
#define _SSPSTAT_P_SIZE                                     0x1
#define _SSPSTAT_P_LENGTH                                   0x1
#define _SSPSTAT_P_MASK                                     0x10
#define _SSPSTAT_D_nA_POSN                                  0x5
#define _SSPSTAT_D_nA_POSITION                              0x5
#define _SSPSTAT_D_nA_SIZE                                  0x1
#define _SSPSTAT_D_nA_LENGTH                                0x1
#define _SSPSTAT_D_nA_MASK                                  0x20
#define _SSPSTAT_CKE_POSN                                   0x6
#define _SSPSTAT_CKE_POSITION                               0x6
#define _SSPSTAT_CKE_SIZE                                   0x1
#define _SSPSTAT_CKE_LENGTH                                 0x1
#define _SSPSTAT_CKE_MASK                                   0x40
#define _SSPSTAT_SMP_POSN                                   0x7
#define _SSPSTAT_SMP_POSITION                               0x7
#define _SSPSTAT_SMP_SIZE                                   0x1
#define _SSPSTAT_SMP_LENGTH                                 0x1
#define _SSPSTAT_SMP_MASK                                   0x80

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
extern volatile unsigned char           SSP1CON1            __at(0x215);
#ifndef _LIB_BUILD
asm("SSP1CON1 equ 0215h");
#endif
// aliases
extern volatile unsigned char           SSPCON              __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON equ 0215h");
#endif
extern volatile unsigned char           SSPCON1             __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0215h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP1M0                 :1;
        unsigned SSP1M1                 :1;
        unsigned SSP1M2                 :1;
        unsigned SSP1M3                 :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
        unsigned                        :1;
        unsigned SSP1EN                 :1;
        unsigned SSP1OV                 :1;
    };
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0x215);
// bitfield macros
#define _SSP1CON1_SSP1M0_POSN                               0x0
#define _SSP1CON1_SSP1M0_POSITION                           0x0
#define _SSP1CON1_SSP1M0_SIZE                               0x1
#define _SSP1CON1_SSP1M0_LENGTH                             0x1
#define _SSP1CON1_SSP1M0_MASK                               0x1
#define _SSP1CON1_SSP1M1_POSN                               0x1
#define _SSP1CON1_SSP1M1_POSITION                           0x1
#define _SSP1CON1_SSP1M1_SIZE                               0x1
#define _SSP1CON1_SSP1M1_LENGTH                             0x1
#define _SSP1CON1_SSP1M1_MASK                               0x2
#define _SSP1CON1_SSP1M2_POSN                               0x2
#define _SSP1CON1_SSP1M2_POSITION                           0x2
#define _SSP1CON1_SSP1M2_SIZE                               0x1
#define _SSP1CON1_SSP1M2_LENGTH                             0x1
#define _SSP1CON1_SSP1M2_MASK                               0x4
#define _SSP1CON1_SSP1M3_POSN                               0x3
#define _SSP1CON1_SSP1M3_POSITION                           0x3
#define _SSP1CON1_SSP1M3_SIZE                               0x1
#define _SSP1CON1_SSP1M3_LENGTH                             0x1
#define _SSP1CON1_SSP1M3_MASK                               0x8
#define _SSP1CON1_CKP_POSN                                  0x4
#define _SSP1CON1_CKP_POSITION                              0x4
#define _SSP1CON1_CKP_SIZE                                  0x1
#define _SSP1CON1_CKP_LENGTH                                0x1
#define _SSP1CON1_CKP_MASK                                  0x10
#define _SSP1CON1_SSPEN_POSN                                0x5
#define _SSP1CON1_SSPEN_POSITION                            0x5
#define _SSP1CON1_SSPEN_SIZE                                0x1
#define _SSP1CON1_SSPEN_LENGTH                              0x1
#define _SSP1CON1_SSPEN_MASK                                0x20
#define _SSP1CON1_SSPOV_POSN                                0x6
#define _SSP1CON1_SSPOV_POSITION                            0x6
#define _SSP1CON1_SSPOV_SIZE                                0x1
#define _SSP1CON1_SSPOV_LENGTH                              0x1
#define _SSP1CON1_SSPOV_MASK                                0x40
#define _SSP1CON1_WCOL_POSN                                 0x7
#define _SSP1CON1_WCOL_POSITION                             0x7
#define _SSP1CON1_WCOL_SIZE                                 0x1
#define _SSP1CON1_WCOL_LENGTH                               0x1
#define _SSP1CON1_WCOL_MASK                                 0x80
#define _SSP1CON1_SSPM_POSN                                 0x0
#define _SSP1CON1_SSPM_POSITION                             0x0
#define _SSP1CON1_SSPM_SIZE                                 0x4
#define _SSP1CON1_SSPM_LENGTH                               0x4
#define _SSP1CON1_SSPM_MASK                                 0xF
#define _SSP1CON1_SSP1EN_POSN                               0x5
#define _SSP1CON1_SSP1EN_POSITION                           0x5
#define _SSP1CON1_SSP1EN_SIZE                               0x1
#define _SSP1CON1_SSP1EN_LENGTH                             0x1
#define _SSP1CON1_SSP1EN_MASK                               0x20
#define _SSP1CON1_SSP1OV_POSN                               0x6
#define _SSP1CON1_SSP1OV_POSITION                           0x6
#define _SSP1CON1_SSP1OV_SIZE                               0x1
#define _SSP1CON1_SSP1OV_LENGTH                             0x1
#define _SSP1CON1_SSP1OV_MASK                               0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1M0                 :1;
        unsigned SSP1M1                 :1;
        unsigned SSP1M2                 :1;
        unsigned SSP1M3                 :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
        unsigned                        :1;
        unsigned SSP1EN                 :1;
        unsigned SSP1OV                 :1;
    };
} SSPCONbits_t;
extern volatile SSPCONbits_t SSPCONbits __at(0x215);
// bitfield macros
#define _SSPCON_SSP1M0_POSN                                 0x0
#define _SSPCON_SSP1M0_POSITION                             0x0
#define _SSPCON_SSP1M0_SIZE                                 0x1
#define _SSPCON_SSP1M0_LENGTH                               0x1
#define _SSPCON_SSP1M0_MASK                                 0x1
#define _SSPCON_SSP1M1_POSN                                 0x1
#define _SSPCON_SSP1M1_POSITION                             0x1
#define _SSPCON_SSP1M1_SIZE                                 0x1
#define _SSPCON_SSP1M1_LENGTH                               0x1
#define _SSPCON_SSP1M1_MASK                                 0x2
#define _SSPCON_SSP1M2_POSN                                 0x2
#define _SSPCON_SSP1M2_POSITION                             0x2
#define _SSPCON_SSP1M2_SIZE                                 0x1
#define _SSPCON_SSP1M2_LENGTH                               0x1
#define _SSPCON_SSP1M2_MASK                                 0x4
#define _SSPCON_SSP1M3_POSN                                 0x3
#define _SSPCON_SSP1M3_POSITION                             0x3
#define _SSPCON_SSP1M3_SIZE                                 0x1
#define _SSPCON_SSP1M3_LENGTH                               0x1
#define _SSPCON_SSP1M3_MASK                                 0x8
#define _SSPCON_CKP_POSN                                    0x4
#define _SSPCON_CKP_POSITION                                0x4
#define _SSPCON_CKP_SIZE                                    0x1
#define _SSPCON_CKP_LENGTH                                  0x1
#define _SSPCON_CKP_MASK                                    0x10
#define _SSPCON_SSPEN_POSN                                  0x5
#define _SSPCON_SSPEN_POSITION                              0x5
#define _SSPCON_SSPEN_SIZE                                  0x1
#define _SSPCON_SSPEN_LENGTH                                0x1
#define _SSPCON_SSPEN_MASK                                  0x20
#define _SSPCON_SSPOV_POSN                                  0x6
#define _SSPCON_SSPOV_POSITION                              0x6
#define _SSPCON_SSPOV_SIZE                                  0x1
#define _SSPCON_SSPOV_LENGTH                                0x1
#define _SSPCON_SSPOV_MASK                                  0x40
#define _SSPCON_WCOL_POSN                                   0x7
#define _SSPCON_WCOL_POSITION                               0x7
#define _SSPCON_WCOL_SIZE                                   0x1
#define _SSPCON_WCOL_LENGTH                                 0x1
#define _SSPCON_WCOL_MASK                                   0x80
#define _SSPCON_SSPM_POSN                                   0x0
#define _SSPCON_SSPM_POSITION                               0x0
#define _SSPCON_SSPM_SIZE                                   0x4
#define _SSPCON_SSPM_LENGTH                                 0x4
#define _SSPCON_SSPM_MASK                                   0xF
#define _SSPCON_SSP1EN_POSN                                 0x5
#define _SSPCON_SSP1EN_POSITION                             0x5
#define _SSPCON_SSP1EN_SIZE                                 0x1
#define _SSPCON_SSP1EN_LENGTH                               0x1
#define _SSPCON_SSP1EN_MASK                                 0x20
#define _SSPCON_SSP1OV_POSN                                 0x6
#define _SSPCON_SSP1OV_POSITION                             0x6
#define _SSPCON_SSP1OV_SIZE                                 0x1
#define _SSPCON_SSP1OV_LENGTH                               0x1
#define _SSPCON_SSP1OV_MASK                                 0x40
typedef union {
    struct {
        unsigned SSP1M0                 :1;
        unsigned SSP1M1                 :1;
        unsigned SSP1M2                 :1;
        unsigned SSP1M3                 :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
        unsigned                        :1;
        unsigned SSP1EN                 :1;
        unsigned SSP1OV                 :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0x215);
// bitfield macros
#define _SSPCON1_SSP1M0_POSN                                0x0
#define _SSPCON1_SSP1M0_POSITION                            0x0
#define _SSPCON1_SSP1M0_SIZE                                0x1
#define _SSPCON1_SSP1M0_LENGTH                              0x1
#define _SSPCON1_SSP1M0_MASK                                0x1
#define _SSPCON1_SSP1M1_POSN                                0x1
#define _SSPCON1_SSP1M1_POSITION                            0x1
#define _SSPCON1_SSP1M1_SIZE                                0x1
#define _SSPCON1_SSP1M1_LENGTH                              0x1
#define _SSPCON1_SSP1M1_MASK                                0x2
#define _SSPCON1_SSP1M2_POSN                                0x2
#define _SSPCON1_SSP1M2_POSITION                            0x2
#define _SSPCON1_SSP1M2_SIZE                                0x1
#define _SSPCON1_SSP1M2_LENGTH                              0x1
#define _SSPCON1_SSP1M2_MASK                                0x4
#define _SSPCON1_SSP1M3_POSN                                0x3
#define _SSPCON1_SSP1M3_POSITION                            0x3
#define _SSPCON1_SSP1M3_SIZE                                0x1
#define _SSPCON1_SSP1M3_LENGTH                              0x1
#define _SSPCON1_SSP1M3_MASK                                0x8
#define _SSPCON1_CKP_POSN                                   0x4
#define _SSPCON1_CKP_POSITION                               0x4
#define _SSPCON1_CKP_SIZE                                   0x1
#define _SSPCON1_CKP_LENGTH                                 0x1
#define _SSPCON1_CKP_MASK                                   0x10
#define _SSPCON1_SSPEN_POSN                                 0x5
#define _SSPCON1_SSPEN_POSITION                             0x5
#define _SSPCON1_SSPEN_SIZE                                 0x1
#define _SSPCON1_SSPEN_LENGTH                               0x1
#define _SSPCON1_SSPEN_MASK                                 0x20
#define _SSPCON1_SSPOV_POSN                                 0x6
#define _SSPCON1_SSPOV_POSITION                             0x6
#define _SSPCON1_SSPOV_SIZE                                 0x1
#define _SSPCON1_SSPOV_LENGTH                               0x1
#define _SSPCON1_SSPOV_MASK                                 0x40
#define _SSPCON1_WCOL_POSN                                  0x7
#define _SSPCON1_WCOL_POSITION                              0x7
#define _SSPCON1_WCOL_SIZE                                  0x1
#define _SSPCON1_WCOL_LENGTH                                0x1
#define _SSPCON1_WCOL_MASK                                  0x80
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
#define _SSPCON1_SSP1EN_POSN                                0x5
#define _SSPCON1_SSP1EN_POSITION                            0x5
#define _SSPCON1_SSP1EN_SIZE                                0x1
#define _SSPCON1_SSP1EN_LENGTH                              0x1
#define _SSPCON1_SSP1EN_MASK                                0x20
#define _SSPCON1_SSP1OV_POSN                                0x6
#define _SSPCON1_SSP1OV_POSITION                            0x6
#define _SSPCON1_SSP1OV_SIZE                                0x1
#define _SSPCON1_SSP1OV_LENGTH                              0x1
#define _SSPCON1_SSP1OV_MASK                                0x40

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
extern volatile unsigned char           SSP1CON2            __at(0x216);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0216h");
#endif
// aliases
extern volatile unsigned char           SSPCON2             __at(0x216);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0216h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSP1CON2bits_t;
extern volatile SSP1CON2bits_t SSP1CON2bits __at(0x216);
// bitfield macros
#define _SSP1CON2_SEN_POSN                                  0x0
#define _SSP1CON2_SEN_POSITION                              0x0
#define _SSP1CON2_SEN_SIZE                                  0x1
#define _SSP1CON2_SEN_LENGTH                                0x1
#define _SSP1CON2_SEN_MASK                                  0x1
#define _SSP1CON2_RSEN_POSN                                 0x1
#define _SSP1CON2_RSEN_POSITION                             0x1
#define _SSP1CON2_RSEN_SIZE                                 0x1
#define _SSP1CON2_RSEN_LENGTH                               0x1
#define _SSP1CON2_RSEN_MASK                                 0x2
#define _SSP1CON2_PEN_POSN                                  0x2
#define _SSP1CON2_PEN_POSITION                              0x2
#define _SSP1CON2_PEN_SIZE                                  0x1
#define _SSP1CON2_PEN_LENGTH                                0x1
#define _SSP1CON2_PEN_MASK                                  0x4
#define _SSP1CON2_RCEN_POSN                                 0x3
#define _SSP1CON2_RCEN_POSITION                             0x3
#define _SSP1CON2_RCEN_SIZE                                 0x1
#define _SSP1CON2_RCEN_LENGTH                               0x1
#define _SSP1CON2_RCEN_MASK                                 0x8
#define _SSP1CON2_ACKEN_POSN                                0x4
#define _SSP1CON2_ACKEN_POSITION                            0x4
#define _SSP1CON2_ACKEN_SIZE                                0x1
#define _SSP1CON2_ACKEN_LENGTH                              0x1
#define _SSP1CON2_ACKEN_MASK                                0x10
#define _SSP1CON2_ACKDT_POSN                                0x5
#define _SSP1CON2_ACKDT_POSITION                            0x5
#define _SSP1CON2_ACKDT_SIZE                                0x1
#define _SSP1CON2_ACKDT_LENGTH                              0x1
#define _SSP1CON2_ACKDT_MASK                                0x20
#define _SSP1CON2_ACKSTAT_POSN                              0x6
#define _SSP1CON2_ACKSTAT_POSITION                          0x6
#define _SSP1CON2_ACKSTAT_SIZE                              0x1
#define _SSP1CON2_ACKSTAT_LENGTH                            0x1
#define _SSP1CON2_ACKSTAT_MASK                              0x40
#define _SSP1CON2_GCEN_POSN                                 0x7
#define _SSP1CON2_GCEN_POSITION                             0x7
#define _SSP1CON2_GCEN_SIZE                                 0x1
#define _SSP1CON2_GCEN_LENGTH                               0x1
#define _SSP1CON2_GCEN_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits __at(0x216);
// bitfield macros
#define _SSPCON2_SEN_POSN                                   0x0
#define _SSPCON2_SEN_POSITION                               0x0
#define _SSPCON2_SEN_SIZE                                   0x1
#define _SSPCON2_SEN_LENGTH                                 0x1
#define _SSPCON2_SEN_MASK                                   0x1
#define _SSPCON2_RSEN_POSN                                  0x1
#define _SSPCON2_RSEN_POSITION                              0x1
#define _SSPCON2_RSEN_SIZE                                  0x1
#define _SSPCON2_RSEN_LENGTH                                0x1
#define _SSPCON2_RSEN_MASK                                  0x2
#define _SSPCON2_PEN_POSN                                   0x2
#define _SSPCON2_PEN_POSITION                               0x2
#define _SSPCON2_PEN_SIZE                                   0x1
#define _SSPCON2_PEN_LENGTH                                 0x1
#define _SSPCON2_PEN_MASK                                   0x4
#define _SSPCON2_RCEN_POSN                                  0x3
#define _SSPCON2_RCEN_POSITION                              0x3
#define _SSPCON2_RCEN_SIZE                                  0x1
#define _SSPCON2_RCEN_LENGTH                                0x1
#define _SSPCON2_RCEN_MASK                                  0x8
#define _SSPCON2_ACKEN_POSN                                 0x4
#define _SSPCON2_ACKEN_POSITION                             0x4
#define _SSPCON2_ACKEN_SIZE                                 0x1
#define _SSPCON2_ACKEN_LENGTH                               0x1
#define _SSPCON2_ACKEN_MASK                                 0x10
#define _SSPCON2_ACKDT_POSN                                 0x5
#define _SSPCON2_ACKDT_POSITION                             0x5
#define _SSPCON2_ACKDT_SIZE                                 0x1
#define _SSPCON2_ACKDT_LENGTH                               0x1
#define _SSPCON2_ACKDT_MASK                                 0x20
#define _SSPCON2_ACKSTAT_POSN                               0x6
#define _SSPCON2_ACKSTAT_POSITION                           0x6
#define _SSPCON2_ACKSTAT_SIZE                               0x1
#define _SSPCON2_ACKSTAT_LENGTH                             0x1
#define _SSPCON2_ACKSTAT_MASK                               0x40
#define _SSPCON2_GCEN_POSN                                  0x7
#define _SSPCON2_GCEN_POSITION                              0x7
#define _SSPCON2_GCEN_SIZE                                  0x1
#define _SSPCON2_GCEN_LENGTH                                0x1
#define _SSPCON2_GCEN_MASK                                  0x80

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
extern volatile unsigned char           SSP1CON3            __at(0x217);
#ifndef _LIB_BUILD
asm("SSP1CON3 equ 0217h");
#endif
// aliases
extern volatile unsigned char           SSPCON3             __at(0x217);
#ifndef _LIB_BUILD
asm("SSPCON3 equ 0217h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DHEN                   :1;
        unsigned AHEN                   :1;
        unsigned SBCDE                  :1;
        unsigned SDAHT                  :1;
        unsigned BOEN                   :1;
        unsigned SCIE                   :1;
        unsigned PCIE                   :1;
        unsigned ACKTIM                 :1;
    };
} SSP1CON3bits_t;
extern volatile SSP1CON3bits_t SSP1CON3bits __at(0x217);
// bitfield macros
#define _SSP1CON3_DHEN_POSN                                 0x0
#define _SSP1CON3_DHEN_POSITION                             0x0
#define _SSP1CON3_DHEN_SIZE                                 0x1
#define _SSP1CON3_DHEN_LENGTH                               0x1
#define _SSP1CON3_DHEN_MASK                                 0x1
#define _SSP1CON3_AHEN_POSN                                 0x1
#define _SSP1CON3_AHEN_POSITION                             0x1
#define _SSP1CON3_AHEN_SIZE                                 0x1
#define _SSP1CON3_AHEN_LENGTH                               0x1
#define _SSP1CON3_AHEN_MASK                                 0x2
#define _SSP1CON3_SBCDE_POSN                                0x2
#define _SSP1CON3_SBCDE_POSITION                            0x2
#define _SSP1CON3_SBCDE_SIZE                                0x1
#define _SSP1CON3_SBCDE_LENGTH                              0x1
#define _SSP1CON3_SBCDE_MASK                                0x4
#define _SSP1CON3_SDAHT_POSN                                0x3
#define _SSP1CON3_SDAHT_POSITION                            0x3
#define _SSP1CON3_SDAHT_SIZE                                0x1
#define _SSP1CON3_SDAHT_LENGTH                              0x1
#define _SSP1CON3_SDAHT_MASK                                0x8
#define _SSP1CON3_BOEN_POSN                                 0x4
#define _SSP1CON3_BOEN_POSITION                             0x4
#define _SSP1CON3_BOEN_SIZE                                 0x1
#define _SSP1CON3_BOEN_LENGTH                               0x1
#define _SSP1CON3_BOEN_MASK                                 0x10
#define _SSP1CON3_SCIE_POSN                                 0x5
#define _SSP1CON3_SCIE_POSITION                             0x5
#define _SSP1CON3_SCIE_SIZE                                 0x1
#define _SSP1CON3_SCIE_LENGTH                               0x1
#define _SSP1CON3_SCIE_MASK                                 0x20
#define _SSP1CON3_PCIE_POSN                                 0x6
#define _SSP1CON3_PCIE_POSITION                             0x6
#define _SSP1CON3_PCIE_SIZE                                 0x1
#define _SSP1CON3_PCIE_LENGTH                               0x1
#define _SSP1CON3_PCIE_MASK                                 0x40
#define _SSP1CON3_ACKTIM_POSN                               0x7
#define _SSP1CON3_ACKTIM_POSITION                           0x7
#define _SSP1CON3_ACKTIM_SIZE                               0x1
#define _SSP1CON3_ACKTIM_LENGTH                             0x1
#define _SSP1CON3_ACKTIM_MASK                               0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned DHEN                   :1;
        unsigned AHEN                   :1;
        unsigned SBCDE                  :1;
        unsigned SDAHT                  :1;
        unsigned BOEN                   :1;
        unsigned SCIE                   :1;
        unsigned PCIE                   :1;
        unsigned ACKTIM                 :1;
    };
} SSPCON3bits_t;
extern volatile SSPCON3bits_t SSPCON3bits __at(0x217);
// bitfield macros
#define _SSPCON3_DHEN_POSN                                  0x0
#define _SSPCON3_DHEN_POSITION                              0x0
#define _SSPCON3_DHEN_SIZE                                  0x1
#define _SSPCON3_DHEN_LENGTH                                0x1
#define _SSPCON3_DHEN_MASK                                  0x1
#define _SSPCON3_AHEN_POSN                                  0x1
#define _SSPCON3_AHEN_POSITION                              0x1
#define _SSPCON3_AHEN_SIZE                                  0x1
#define _SSPCON3_AHEN_LENGTH                                0x1
#define _SSPCON3_AHEN_MASK                                  0x2
#define _SSPCON3_SBCDE_POSN                                 0x2
#define _SSPCON3_SBCDE_POSITION                             0x2
#define _SSPCON3_SBCDE_SIZE                                 0x1
#define _SSPCON3_SBCDE_LENGTH                               0x1
#define _SSPCON3_SBCDE_MASK                                 0x4
#define _SSPCON3_SDAHT_POSN                                 0x3
#define _SSPCON3_SDAHT_POSITION                             0x3
#define _SSPCON3_SDAHT_SIZE                                 0x1
#define _SSPCON3_SDAHT_LENGTH                               0x1
#define _SSPCON3_SDAHT_MASK                                 0x8
#define _SSPCON3_BOEN_POSN                                  0x4
#define _SSPCON3_BOEN_POSITION                              0x4
#define _SSPCON3_BOEN_SIZE                                  0x1
#define _SSPCON3_BOEN_LENGTH                                0x1
#define _SSPCON3_BOEN_MASK                                  0x10
#define _SSPCON3_SCIE_POSN                                  0x5
#define _SSPCON3_SCIE_POSITION                              0x5
#define _SSPCON3_SCIE_SIZE                                  0x1
#define _SSPCON3_SCIE_LENGTH                                0x1
#define _SSPCON3_SCIE_MASK                                  0x20
#define _SSPCON3_PCIE_POSN                                  0x6
#define _SSPCON3_PCIE_POSITION                              0x6
#define _SSPCON3_PCIE_SIZE                                  0x1
#define _SSPCON3_PCIE_LENGTH                                0x1
#define _SSPCON3_PCIE_MASK                                  0x40
#define _SSPCON3_ACKTIM_POSN                                0x7
#define _SSPCON3_ACKTIM_POSITION                            0x7
#define _SSPCON3_ACKTIM_SIZE                                0x1
#define _SSPCON3_ACKTIM_LENGTH                              0x1
#define _SSPCON3_ACKTIM_MASK                                0x80

// Register: IOCAP
#define IOCAP IOCAP
extern volatile unsigned char           IOCAP               __at(0x391);
#ifndef _LIB_BUILD
asm("IOCAP equ 0391h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAP0                 :1;
        unsigned IOCAP1                 :1;
        unsigned                        :1;
        unsigned IOCAP3                 :1;
        unsigned IOCAP4                 :1;
        unsigned IOCAP5                 :1;
    };
    struct {
        unsigned IOCAP                  :6;
    };
} IOCAPbits_t;
extern volatile IOCAPbits_t IOCAPbits __at(0x391);
// bitfield macros
#define _IOCAP_IOCAP0_POSN                                  0x0
#define _IOCAP_IOCAP0_POSITION                              0x0
#define _IOCAP_IOCAP0_SIZE                                  0x1
#define _IOCAP_IOCAP0_LENGTH                                0x1
#define _IOCAP_IOCAP0_MASK                                  0x1
#define _IOCAP_IOCAP1_POSN                                  0x1
#define _IOCAP_IOCAP1_POSITION                              0x1
#define _IOCAP_IOCAP1_SIZE                                  0x1
#define _IOCAP_IOCAP1_LENGTH                                0x1
#define _IOCAP_IOCAP1_MASK                                  0x2
#define _IOCAP_IOCAP3_POSN                                  0x3
#define _IOCAP_IOCAP3_POSITION                              0x3
#define _IOCAP_IOCAP3_SIZE                                  0x1
#define _IOCAP_IOCAP3_LENGTH                                0x1
#define _IOCAP_IOCAP3_MASK                                  0x8
#define _IOCAP_IOCAP4_POSN                                  0x4
#define _IOCAP_IOCAP4_POSITION                              0x4
#define _IOCAP_IOCAP4_SIZE                                  0x1
#define _IOCAP_IOCAP4_LENGTH                                0x1
#define _IOCAP_IOCAP4_MASK                                  0x10
#define _IOCAP_IOCAP5_POSN                                  0x5
#define _IOCAP_IOCAP5_POSITION                              0x5
#define _IOCAP_IOCAP5_SIZE                                  0x1
#define _IOCAP_IOCAP5_LENGTH                                0x1
#define _IOCAP_IOCAP5_MASK                                  0x20
#define _IOCAP_IOCAP_POSN                                   0x0
#define _IOCAP_IOCAP_POSITION                               0x0
#define _IOCAP_IOCAP_SIZE                                   0x6
#define _IOCAP_IOCAP_LENGTH                                 0x6
#define _IOCAP_IOCAP_MASK                                   0x3F

// Register: IOCAN
#define IOCAN IOCAN
extern volatile unsigned char           IOCAN               __at(0x392);
#ifndef _LIB_BUILD
asm("IOCAN equ 0392h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAN0                 :1;
        unsigned IOCAN1                 :1;
        unsigned                        :1;
        unsigned IOCAN3                 :1;
        unsigned IOCAN4                 :1;
        unsigned IOCAN5                 :1;
    };
    struct {
        unsigned IOCAN                  :6;
    };
} IOCANbits_t;
extern volatile IOCANbits_t IOCANbits __at(0x392);
// bitfield macros
#define _IOCAN_IOCAN0_POSN                                  0x0
#define _IOCAN_IOCAN0_POSITION                              0x0
#define _IOCAN_IOCAN0_SIZE                                  0x1
#define _IOCAN_IOCAN0_LENGTH                                0x1
#define _IOCAN_IOCAN0_MASK                                  0x1
#define _IOCAN_IOCAN1_POSN                                  0x1
#define _IOCAN_IOCAN1_POSITION                              0x1
#define _IOCAN_IOCAN1_SIZE                                  0x1
#define _IOCAN_IOCAN1_LENGTH                                0x1
#define _IOCAN_IOCAN1_MASK                                  0x2
#define _IOCAN_IOCAN3_POSN                                  0x3
#define _IOCAN_IOCAN3_POSITION                              0x3
#define _IOCAN_IOCAN3_SIZE                                  0x1
#define _IOCAN_IOCAN3_LENGTH                                0x1
#define _IOCAN_IOCAN3_MASK                                  0x8
#define _IOCAN_IOCAN4_POSN                                  0x4
#define _IOCAN_IOCAN4_POSITION                              0x4
#define _IOCAN_IOCAN4_SIZE                                  0x1
#define _IOCAN_IOCAN4_LENGTH                                0x1
#define _IOCAN_IOCAN4_MASK                                  0x10
#define _IOCAN_IOCAN5_POSN                                  0x5
#define _IOCAN_IOCAN5_POSITION                              0x5
#define _IOCAN_IOCAN5_SIZE                                  0x1
#define _IOCAN_IOCAN5_LENGTH                                0x1
#define _IOCAN_IOCAN5_MASK                                  0x20
#define _IOCAN_IOCAN_POSN                                   0x0
#define _IOCAN_IOCAN_POSITION                               0x0
#define _IOCAN_IOCAN_SIZE                                   0x6
#define _IOCAN_IOCAN_LENGTH                                 0x6
#define _IOCAN_IOCAN_MASK                                   0x3F

// Register: IOCAF
#define IOCAF IOCAF
extern volatile unsigned char           IOCAF               __at(0x393);
#ifndef _LIB_BUILD
asm("IOCAF equ 0393h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAF0                 :1;
        unsigned IOCAF1                 :1;
        unsigned                        :1;
        unsigned IOCAF3                 :1;
        unsigned IOCAF4                 :1;
        unsigned IOCAF5                 :1;
    };
    struct {
        unsigned IOCAF                  :6;
    };
} IOCAFbits_t;
extern volatile IOCAFbits_t IOCAFbits __at(0x393);
// bitfield macros
#define _IOCAF_IOCAF0_POSN                                  0x0
#define _IOCAF_IOCAF0_POSITION                              0x0
#define _IOCAF_IOCAF0_SIZE                                  0x1
#define _IOCAF_IOCAF0_LENGTH                                0x1
#define _IOCAF_IOCAF0_MASK                                  0x1
#define _IOCAF_IOCAF1_POSN                                  0x1
#define _IOCAF_IOCAF1_POSITION                              0x1
#define _IOCAF_IOCAF1_SIZE                                  0x1
#define _IOCAF_IOCAF1_LENGTH                                0x1
#define _IOCAF_IOCAF1_MASK                                  0x2
#define _IOCAF_IOCAF3_POSN                                  0x3
#define _IOCAF_IOCAF3_POSITION                              0x3
#define _IOCAF_IOCAF3_SIZE                                  0x1
#define _IOCAF_IOCAF3_LENGTH                                0x1
#define _IOCAF_IOCAF3_MASK                                  0x8
#define _IOCAF_IOCAF4_POSN                                  0x4
#define _IOCAF_IOCAF4_POSITION                              0x4
#define _IOCAF_IOCAF4_SIZE                                  0x1
#define _IOCAF_IOCAF4_LENGTH                                0x1
#define _IOCAF_IOCAF4_MASK                                  0x10
#define _IOCAF_IOCAF5_POSN                                  0x5
#define _IOCAF_IOCAF5_POSITION                              0x5
#define _IOCAF_IOCAF5_SIZE                                  0x1
#define _IOCAF_IOCAF5_LENGTH                                0x1
#define _IOCAF_IOCAF5_MASK                                  0x20
#define _IOCAF_IOCAF_POSN                                   0x0
#define _IOCAF_IOCAF_POSITION                               0x0
#define _IOCAF_IOCAF_SIZE                                   0x6
#define _IOCAF_IOCAF_LENGTH                                 0x6
#define _IOCAF_IOCAF_MASK                                   0x3F

// Register: CLKRCON
#define CLKRCON CLKRCON
extern volatile unsigned char           CLKRCON             __at(0x39A);
#ifndef _LIB_BUILD
asm("CLKRCON equ 039Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLKRDIV                :3;
        unsigned CLKRDC                 :2;
        unsigned CLKRSLR                :1;
        unsigned CLKROE                 :1;
        unsigned CLKREN                 :1;
    };
    struct {
        unsigned CLKRDIV0               :1;
        unsigned CLKRDIV1               :1;
        unsigned CLKRDIV2               :1;
        unsigned CLKRDC0                :1;
        unsigned CLKRDC1                :1;
    };
    struct {
        unsigned                        :3;
        unsigned CLKRCD                 :2;
    };
} CLKRCONbits_t;
extern volatile CLKRCONbits_t CLKRCONbits __at(0x39A);
// bitfield macros
#define _CLKRCON_CLKRDIV_POSN                               0x0
#define _CLKRCON_CLKRDIV_POSITION                           0x0
#define _CLKRCON_CLKRDIV_SIZE                               0x3
#define _CLKRCON_CLKRDIV_LENGTH                             0x3
#define _CLKRCON_CLKRDIV_MASK                               0x7
#define _CLKRCON_CLKRDC_POSN                                0x3
#define _CLKRCON_CLKRDC_POSITION                            0x3
#define _CLKRCON_CLKRDC_SIZE                                0x2
#define _CLKRCON_CLKRDC_LENGTH                              0x2
#define _CLKRCON_CLKRDC_MASK                                0x18
#define _CLKRCON_CLKRSLR_POSN                               0x5
#define _CLKRCON_CLKRSLR_POSITION                           0x5
#define _CLKRCON_CLKRSLR_SIZE                               0x1
#define _CLKRCON_CLKRSLR_LENGTH                             0x1
#define _CLKRCON_CLKRSLR_MASK                               0x20
#define _CLKRCON_CLKROE_POSN                                0x6
#define _CLKRCON_CLKROE_POSITION                            0x6
#define _CLKRCON_CLKROE_SIZE                                0x1
#define _CLKRCON_CLKROE_LENGTH                              0x1
#define _CLKRCON_CLKROE_MASK                                0x40
#define _CLKRCON_CLKREN_POSN                                0x7
#define _CLKRCON_CLKREN_POSITION                            0x7
#define _CLKRCON_CLKREN_SIZE                                0x1
#define _CLKRCON_CLKREN_LENGTH                              0x1
#define _CLKRCON_CLKREN_MASK                                0x80
#define _CLKRCON_CLKRDIV0_POSN                              0x0
#define _CLKRCON_CLKRDIV0_POSITION                          0x0
#define _CLKRCON_CLKRDIV0_SIZE                              0x1
#define _CLKRCON_CLKRDIV0_LENGTH                            0x1
#define _CLKRCON_CLKRDIV0_MASK                              0x1
#define _CLKRCON_CLKRDIV1_POSN                              0x1
#define _CLKRCON_CLKRDIV1_POSITION                          0x1
#define _CLKRCON_CLKRDIV1_SIZE                              0x1
#define _CLKRCON_CLKRDIV1_LENGTH                            0x1
#define _CLKRCON_CLKRDIV1_MASK                              0x2
#define _CLKRCON_CLKRDIV2_POSN                              0x2
#define _CLKRCON_CLKRDIV2_POSITION                          0x2
#define _CLKRCON_CLKRDIV2_SIZE                              0x1
#define _CLKRCON_CLKRDIV2_LENGTH                            0x1
#define _CLKRCON_CLKRDIV2_MASK                              0x4
#define _CLKRCON_CLKRDC0_POSN                               0x3
#define _CLKRCON_CLKRDC0_POSITION                           0x3
#define _CLKRCON_CLKRDC0_SIZE                               0x1
#define _CLKRCON_CLKRDC0_LENGTH                             0x1
#define _CLKRCON_CLKRDC0_MASK                               0x8
#define _CLKRCON_CLKRDC1_POSN                               0x4
#define _CLKRCON_CLKRDC1_POSITION                           0x4
#define _CLKRCON_CLKRDC1_SIZE                               0x1
#define _CLKRCON_CLKRDC1_LENGTH                             0x1
#define _CLKRCON_CLKRDC1_MASK                               0x10
#define _CLKRCON_CLKRCD_POSN                                0x3
#define _CLKRCON_CLKRCD_POSITION                            0x3
#define _CLKRCON_CLKRCD_SIZE                                0x2
#define _CLKRCON_CLKRCD_LENGTH                              0x2
#define _CLKRCON_CLKRCD_MASK                                0x18

// Register: ACTCON
#define ACTCON ACTCON
extern volatile unsigned char           ACTCON              __at(0x39B);
#ifndef _LIB_BUILD
asm("ACTCON equ 039Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ACTORS                 :1;
        unsigned                        :1;
        unsigned ACTLOCK                :1;
        unsigned ACTSRC                 :1;
        unsigned                        :1;
        unsigned ACTUD                  :1;
        unsigned ACTEN                  :1;
    };
} ACTCONbits_t;
extern volatile ACTCONbits_t ACTCONbits __at(0x39B);
// bitfield macros
#define _ACTCON_ACTORS_POSN                                 0x1
#define _ACTCON_ACTORS_POSITION                             0x1
#define _ACTCON_ACTORS_SIZE                                 0x1
#define _ACTCON_ACTORS_LENGTH                               0x1
#define _ACTCON_ACTORS_MASK                                 0x2
#define _ACTCON_ACTLOCK_POSN                                0x3
#define _ACTCON_ACTLOCK_POSITION                            0x3
#define _ACTCON_ACTLOCK_SIZE                                0x1
#define _ACTCON_ACTLOCK_LENGTH                              0x1
#define _ACTCON_ACTLOCK_MASK                                0x8
#define _ACTCON_ACTSRC_POSN                                 0x4
#define _ACTCON_ACTSRC_POSITION                             0x4
#define _ACTCON_ACTSRC_SIZE                                 0x1
#define _ACTCON_ACTSRC_LENGTH                               0x1
#define _ACTCON_ACTSRC_MASK                                 0x10
#define _ACTCON_ACTUD_POSN                                  0x6
#define _ACTCON_ACTUD_POSITION                              0x6
#define _ACTCON_ACTUD_SIZE                                  0x1
#define _ACTCON_ACTUD_LENGTH                                0x1
#define _ACTCON_ACTUD_MASK                                  0x40
#define _ACTCON_ACTEN_POSN                                  0x7
#define _ACTCON_ACTEN_POSITION                              0x7
#define _ACTCON_ACTEN_SIZE                                  0x1
#define _ACTCON_ACTEN_LENGTH                                0x1
#define _ACTCON_ACTEN_MASK                                  0x80

// Register: PWM1DCL
#define PWM1DCL PWM1DCL
extern volatile unsigned char           PWM1DCL             __at(0x611);
#ifndef _LIB_BUILD
asm("PWM1DCL equ 0611h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM1DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM1DCL0               :1;
        unsigned PWM1DCL1               :1;
    };
} PWM1DCLbits_t;
extern volatile PWM1DCLbits_t PWM1DCLbits __at(0x611);
// bitfield macros
#define _PWM1DCL_PWM1DCL_POSN                               0x6
#define _PWM1DCL_PWM1DCL_POSITION                           0x6
#define _PWM1DCL_PWM1DCL_SIZE                               0x2
#define _PWM1DCL_PWM1DCL_LENGTH                             0x2
#define _PWM1DCL_PWM1DCL_MASK                               0xC0
#define _PWM1DCL_PWM1DCL0_POSN                              0x6
#define _PWM1DCL_PWM1DCL0_POSITION                          0x6
#define _PWM1DCL_PWM1DCL0_SIZE                              0x1
#define _PWM1DCL_PWM1DCL0_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL0_MASK                              0x40
#define _PWM1DCL_PWM1DCL1_POSN                              0x7
#define _PWM1DCL_PWM1DCL1_POSITION                          0x7
#define _PWM1DCL_PWM1DCL1_SIZE                              0x1
#define _PWM1DCL_PWM1DCL1_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL1_MASK                              0x80

// Register: PWM1DCH
#define PWM1DCH PWM1DCH
extern volatile unsigned char           PWM1DCH             __at(0x612);
#ifndef _LIB_BUILD
asm("PWM1DCH equ 0612h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1DCH                :8;
    };
    struct {
        unsigned PWM1DCH0               :1;
        unsigned PWM1DCH1               :1;
        unsigned PWM1DCH2               :1;
        unsigned PWM1DCH3               :1;
        unsigned PWM1DCH4               :1;
        unsigned PWM1DCH5               :1;
        unsigned PWM1DCH6               :1;
        unsigned PWM1DCH7               :1;
    };
} PWM1DCHbits_t;
extern volatile PWM1DCHbits_t PWM1DCHbits __at(0x612);
// bitfield macros
#define _PWM1DCH_PWM1DCH_POSN                               0x0
#define _PWM1DCH_PWM1DCH_POSITION                           0x0
#define _PWM1DCH_PWM1DCH_SIZE                               0x8
#define _PWM1DCH_PWM1DCH_LENGTH                             0x8
#define _PWM1DCH_PWM1DCH_MASK                               0xFF
#define _PWM1DCH_PWM1DCH0_POSN                              0x0
#define _PWM1DCH_PWM1DCH0_POSITION                          0x0
#define _PWM1DCH_PWM1DCH0_SIZE                              0x1
#define _PWM1DCH_PWM1DCH0_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH0_MASK                              0x1
#define _PWM1DCH_PWM1DCH1_POSN                              0x1
#define _PWM1DCH_PWM1DCH1_POSITION                          0x1
#define _PWM1DCH_PWM1DCH1_SIZE                              0x1
#define _PWM1DCH_PWM1DCH1_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH1_MASK                              0x2
#define _PWM1DCH_PWM1DCH2_POSN                              0x2
#define _PWM1DCH_PWM1DCH2_POSITION                          0x2
#define _PWM1DCH_PWM1DCH2_SIZE                              0x1
#define _PWM1DCH_PWM1DCH2_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH2_MASK                              0x4
#define _PWM1DCH_PWM1DCH3_POSN                              0x3
#define _PWM1DCH_PWM1DCH3_POSITION                          0x3
#define _PWM1DCH_PWM1DCH3_SIZE                              0x1
#define _PWM1DCH_PWM1DCH3_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH3_MASK                              0x8
#define _PWM1DCH_PWM1DCH4_POSN                              0x4
#define _PWM1DCH_PWM1DCH4_POSITION                          0x4
#define _PWM1DCH_PWM1DCH4_SIZE                              0x1
#define _PWM1DCH_PWM1DCH4_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH4_MASK                              0x10
#define _PWM1DCH_PWM1DCH5_POSN                              0x5
#define _PWM1DCH_PWM1DCH5_POSITION                          0x5
#define _PWM1DCH_PWM1DCH5_SIZE                              0x1
#define _PWM1DCH_PWM1DCH5_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH5_MASK                              0x20
#define _PWM1DCH_PWM1DCH6_POSN                              0x6
#define _PWM1DCH_PWM1DCH6_POSITION                          0x6
#define _PWM1DCH_PWM1DCH6_SIZE                              0x1
#define _PWM1DCH_PWM1DCH6_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH6_MASK                              0x40
#define _PWM1DCH_PWM1DCH7_POSN                              0x7
#define _PWM1DCH_PWM1DCH7_POSITION                          0x7
#define _PWM1DCH_PWM1DCH7_SIZE                              0x1
#define _PWM1DCH_PWM1DCH7_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH7_MASK                              0x80

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0x613);
#ifndef _LIB_BUILD
asm("PWM1CON equ 0613h");
#endif
// aliases
extern volatile unsigned char           PWM1CON0            __at(0x613);
#ifndef _LIB_BUILD
asm("PWM1CON0 equ 0613h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM1POL                :1;
        unsigned PWM1OUT                :1;
        unsigned PWM1OE                 :1;
        unsigned PWM1EN                 :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0x613);
// bitfield macros
#define _PWM1CON_PWM1POL_POSN                               0x4
#define _PWM1CON_PWM1POL_POSITION                           0x4
#define _PWM1CON_PWM1POL_SIZE                               0x1
#define _PWM1CON_PWM1POL_LENGTH                             0x1
#define _PWM1CON_PWM1POL_MASK                               0x10
#define _PWM1CON_PWM1OUT_POSN                               0x5
#define _PWM1CON_PWM1OUT_POSITION                           0x5
#define _PWM1CON_PWM1OUT_SIZE                               0x1
#define _PWM1CON_PWM1OUT_LENGTH                             0x1
#define _PWM1CON_PWM1OUT_MASK                               0x20
#define _PWM1CON_PWM1OE_POSN                                0x6
#define _PWM1CON_PWM1OE_POSITION                            0x6
#define _PWM1CON_PWM1OE_SIZE                                0x1
#define _PWM1CON_PWM1OE_LENGTH                              0x1
#define _PWM1CON_PWM1OE_MASK                                0x40
#define _PWM1CON_PWM1EN_POSN                                0x7
#define _PWM1CON_PWM1EN_POSITION                            0x7
#define _PWM1CON_PWM1EN_SIZE                                0x1
#define _PWM1CON_PWM1EN_LENGTH                              0x1
#define _PWM1CON_PWM1EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM1POL                :1;
        unsigned PWM1OUT                :1;
        unsigned PWM1OE                 :1;
        unsigned PWM1EN                 :1;
    };
} PWM1CON0bits_t;
extern volatile PWM1CON0bits_t PWM1CON0bits __at(0x613);
// bitfield macros
#define _PWM1CON0_PWM1POL_POSN                              0x4
#define _PWM1CON0_PWM1POL_POSITION                          0x4
#define _PWM1CON0_PWM1POL_SIZE                              0x1
#define _PWM1CON0_PWM1POL_LENGTH                            0x1
#define _PWM1CON0_PWM1POL_MASK                              0x10
#define _PWM1CON0_PWM1OUT_POSN                              0x5
#define _PWM1CON0_PWM1OUT_POSITION                          0x5
#define _PWM1CON0_PWM1OUT_SIZE                              0x1
#define _PWM1CON0_PWM1OUT_LENGTH                            0x1
#define _PWM1CON0_PWM1OUT_MASK                              0x20
#define _PWM1CON0_PWM1OE_POSN                               0x6
#define _PWM1CON0_PWM1OE_POSITION                           0x6
#define _PWM1CON0_PWM1OE_SIZE                               0x1
#define _PWM1CON0_PWM1OE_LENGTH                             0x1
#define _PWM1CON0_PWM1OE_MASK                               0x40
#define _PWM1CON0_PWM1EN_POSN                               0x7
#define _PWM1CON0_PWM1EN_POSITION                           0x7
#define _PWM1CON0_PWM1EN_SIZE                               0x1
#define _PWM1CON0_PWM1EN_LENGTH                             0x1
#define _PWM1CON0_PWM1EN_MASK                               0x80

// Register: PWM2DCL
#define PWM2DCL PWM2DCL
extern volatile unsigned char           PWM2DCL             __at(0x614);
#ifndef _LIB_BUILD
asm("PWM2DCL equ 0614h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM2DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM2DCL0               :1;
        unsigned PWM2DCL1               :1;
    };
} PWM2DCLbits_t;
extern volatile PWM2DCLbits_t PWM2DCLbits __at(0x614);
// bitfield macros
#define _PWM2DCL_PWM2DCL_POSN                               0x6
#define _PWM2DCL_PWM2DCL_POSITION                           0x6
#define _PWM2DCL_PWM2DCL_SIZE                               0x2
#define _PWM2DCL_PWM2DCL_LENGTH                             0x2
#define _PWM2DCL_PWM2DCL_MASK                               0xC0
#define _PWM2DCL_PWM2DCL0_POSN                              0x6
#define _PWM2DCL_PWM2DCL0_POSITION                          0x6
#define _PWM2DCL_PWM2DCL0_SIZE                              0x1
#define _PWM2DCL_PWM2DCL0_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL0_MASK                              0x40
#define _PWM2DCL_PWM2DCL1_POSN                              0x7
#define _PWM2DCL_PWM2DCL1_POSITION                          0x7
#define _PWM2DCL_PWM2DCL1_SIZE                              0x1
#define _PWM2DCL_PWM2DCL1_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL1_MASK                              0x80

// Register: PWM2DCH
#define PWM2DCH PWM2DCH
extern volatile unsigned char           PWM2DCH             __at(0x615);
#ifndef _LIB_BUILD
asm("PWM2DCH equ 0615h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM2DCH                :8;
    };
    struct {
        unsigned PWM2DCH0               :1;
        unsigned PWM2DCH1               :1;
        unsigned PWM2DCH2               :1;
        unsigned PWM2DCH3               :1;
        unsigned PWM2DCH4               :1;
        unsigned PWM2DCH5               :1;
        unsigned PWM2DCH6               :1;
        unsigned PWM2DCH7               :1;
    };
} PWM2DCHbits_t;
extern volatile PWM2DCHbits_t PWM2DCHbits __at(0x615);
// bitfield macros
#define _PWM2DCH_PWM2DCH_POSN                               0x0
#define _PWM2DCH_PWM2DCH_POSITION                           0x0
#define _PWM2DCH_PWM2DCH_SIZE                               0x8
#define _PWM2DCH_PWM2DCH_LENGTH                             0x8
#define _PWM2DCH_PWM2DCH_MASK                               0xFF
#define _PWM2DCH_PWM2DCH0_POSN                              0x0
#define _PWM2DCH_PWM2DCH0_POSITION                          0x0
#define _PWM2DCH_PWM2DCH0_SIZE                              0x1
#define _PWM2DCH_PWM2DCH0_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH0_MASK                              0x1
#define _PWM2DCH_PWM2DCH1_POSN                              0x1
#define _PWM2DCH_PWM2DCH1_POSITION                          0x1
#define _PWM2DCH_PWM2DCH1_SIZE                              0x1
#define _PWM2DCH_PWM2DCH1_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH1_MASK                              0x2
#define _PWM2DCH_PWM2DCH2_POSN                              0x2
#define _PWM2DCH_PWM2DCH2_POSITION                          0x2
#define _PWM2DCH_PWM2DCH2_SIZE                              0x1
#define _PWM2DCH_PWM2DCH2_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH2_MASK                              0x4
#define _PWM2DCH_PWM2DCH3_POSN                              0x3
#define _PWM2DCH_PWM2DCH3_POSITION                          0x3
#define _PWM2DCH_PWM2DCH3_SIZE                              0x1
#define _PWM2DCH_PWM2DCH3_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH3_MASK                              0x8
#define _PWM2DCH_PWM2DCH4_POSN                              0x4
#define _PWM2DCH_PWM2DCH4_POSITION                          0x4
#define _PWM2DCH_PWM2DCH4_SIZE                              0x1
#define _PWM2DCH_PWM2DCH4_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH4_MASK                              0x10
#define _PWM2DCH_PWM2DCH5_POSN                              0x5
#define _PWM2DCH_PWM2DCH5_POSITION                          0x5
#define _PWM2DCH_PWM2DCH5_SIZE                              0x1
#define _PWM2DCH_PWM2DCH5_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH5_MASK                              0x20
#define _PWM2DCH_PWM2DCH6_POSN                              0x6
#define _PWM2DCH_PWM2DCH6_POSITION                          0x6
#define _PWM2DCH_PWM2DCH6_SIZE                              0x1
#define _PWM2DCH_PWM2DCH6_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH6_MASK                              0x40
#define _PWM2DCH_PWM2DCH7_POSN                              0x7
#define _PWM2DCH_PWM2DCH7_POSITION                          0x7
#define _PWM2DCH_PWM2DCH7_SIZE                              0x1
#define _PWM2DCH_PWM2DCH7_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH7_MASK                              0x80

// Register: PWM2CON
#define PWM2CON PWM2CON
extern volatile unsigned char           PWM2CON             __at(0x616);
#ifndef _LIB_BUILD
asm("PWM2CON equ 0616h");
#endif
// aliases
extern volatile unsigned char           PWM2CON0            __at(0x616);
#ifndef _LIB_BUILD
asm("PWM2CON0 equ 0616h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM2POL                :1;
        unsigned PWM2OUT                :1;
        unsigned PWM2OE                 :1;
        unsigned PWM2EN                 :1;
    };
} PWM2CONbits_t;
extern volatile PWM2CONbits_t PWM2CONbits __at(0x616);
// bitfield macros
#define _PWM2CON_PWM2POL_POSN                               0x4
#define _PWM2CON_PWM2POL_POSITION                           0x4
#define _PWM2CON_PWM2POL_SIZE                               0x1
#define _PWM2CON_PWM2POL_LENGTH                             0x1
#define _PWM2CON_PWM2POL_MASK                               0x10
#define _PWM2CON_PWM2OUT_POSN                               0x5
#define _PWM2CON_PWM2OUT_POSITION                           0x5
#define _PWM2CON_PWM2OUT_SIZE                               0x1
#define _PWM2CON_PWM2OUT_LENGTH                             0x1
#define _PWM2CON_PWM2OUT_MASK                               0x20
#define _PWM2CON_PWM2OE_POSN                                0x6
#define _PWM2CON_PWM2OE_POSITION                            0x6
#define _PWM2CON_PWM2OE_SIZE                                0x1
#define _PWM2CON_PWM2OE_LENGTH                              0x1
#define _PWM2CON_PWM2OE_MASK                                0x40
#define _PWM2CON_PWM2EN_POSN                                0x7
#define _PWM2CON_PWM2EN_POSITION                            0x7
#define _PWM2CON_PWM2EN_SIZE                                0x1
#define _PWM2CON_PWM2EN_LENGTH                              0x1
#define _PWM2CON_PWM2EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM2POL                :1;
        unsigned PWM2OUT                :1;
        unsigned PWM2OE                 :1;
        unsigned PWM2EN                 :1;
    };
} PWM2CON0bits_t;
extern volatile PWM2CON0bits_t PWM2CON0bits __at(0x616);
// bitfield macros
#define _PWM2CON0_PWM2POL_POSN                              0x4
#define _PWM2CON0_PWM2POL_POSITION                          0x4
#define _PWM2CON0_PWM2POL_SIZE                              0x1
#define _PWM2CON0_PWM2POL_LENGTH                            0x1
#define _PWM2CON0_PWM2POL_MASK                              0x10
#define _PWM2CON0_PWM2OUT_POSN                              0x5
#define _PWM2CON0_PWM2OUT_POSITION                          0x5
#define _PWM2CON0_PWM2OUT_SIZE                              0x1
#define _PWM2CON0_PWM2OUT_LENGTH                            0x1
#define _PWM2CON0_PWM2OUT_MASK                              0x20
#define _PWM2CON0_PWM2OE_POSN                               0x6
#define _PWM2CON0_PWM2OE_POSITION                           0x6
#define _PWM2CON0_PWM2OE_SIZE                               0x1
#define _PWM2CON0_PWM2OE_LENGTH                             0x1
#define _PWM2CON0_PWM2OE_MASK                               0x40
#define _PWM2CON0_PWM2EN_POSN                               0x7
#define _PWM2CON0_PWM2EN_POSITION                           0x7
#define _PWM2CON0_PWM2EN_SIZE                               0x1
#define _PWM2CON0_PWM2EN_LENGTH                             0x1
#define _PWM2CON0_PWM2EN_MASK                               0x80

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
extern volatile unsigned char           CWG1DBR             __at(0x691);
#ifndef _LIB_BUILD
asm("CWG1DBR equ 0691h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CWG1DBR                :6;
    };
    struct {
        unsigned CWG1DBR0               :1;
        unsigned CWG1DBR1               :1;
        unsigned CWG1DBR2               :1;
        unsigned CWG1DBR3               :1;
        unsigned CWG1DBR4               :1;
        unsigned CWG1DBR5               :1;
    };
} CWG1DBRbits_t;
extern volatile CWG1DBRbits_t CWG1DBRbits __at(0x691);
// bitfield macros
#define _CWG1DBR_CWG1DBR_POSN                               0x0
#define _CWG1DBR_CWG1DBR_POSITION                           0x0
#define _CWG1DBR_CWG1DBR_SIZE                               0x6
#define _CWG1DBR_CWG1DBR_LENGTH                             0x6
#define _CWG1DBR_CWG1DBR_MASK                               0x3F
#define _CWG1DBR_CWG1DBR0_POSN                              0x0
#define _CWG1DBR_CWG1DBR0_POSITION                          0x0
#define _CWG1DBR_CWG1DBR0_SIZE                              0x1
#define _CWG1DBR_CWG1DBR0_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR0_MASK                              0x1
#define _CWG1DBR_CWG1DBR1_POSN                              0x1
#define _CWG1DBR_CWG1DBR1_POSITION                          0x1
#define _CWG1DBR_CWG1DBR1_SIZE                              0x1
#define _CWG1DBR_CWG1DBR1_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR1_MASK                              0x2
#define _CWG1DBR_CWG1DBR2_POSN                              0x2
#define _CWG1DBR_CWG1DBR2_POSITION                          0x2
#define _CWG1DBR_CWG1DBR2_SIZE                              0x1
#define _CWG1DBR_CWG1DBR2_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR2_MASK                              0x4
#define _CWG1DBR_CWG1DBR3_POSN                              0x3
#define _CWG1DBR_CWG1DBR3_POSITION                          0x3
#define _CWG1DBR_CWG1DBR3_SIZE                              0x1
#define _CWG1DBR_CWG1DBR3_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR3_MASK                              0x8
#define _CWG1DBR_CWG1DBR4_POSN                              0x4
#define _CWG1DBR_CWG1DBR4_POSITION                          0x4
#define _CWG1DBR_CWG1DBR4_SIZE                              0x1
#define _CWG1DBR_CWG1DBR4_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR4_MASK                              0x10
#define _CWG1DBR_CWG1DBR5_POSN                              0x5
#define _CWG1DBR_CWG1DBR5_POSITION                          0x5
#define _CWG1DBR_CWG1DBR5_SIZE                              0x1
#define _CWG1DBR_CWG1DBR5_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR5_MASK                              0x20

// Register: CWG1DBF
#define CWG1DBF CWG1DBF
extern volatile unsigned char           CWG1DBF             __at(0x692);
#ifndef _LIB_BUILD
asm("CWG1DBF equ 0692h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CWG1DBF                :6;
    };
    struct {
        unsigned CWG1DBF0               :1;
        unsigned CWG1DBF1               :1;
        unsigned CWG1DBF2               :1;
        unsigned CWG1DBF3               :1;
        unsigned CWG1DBF4               :1;
        unsigned CWG1DBF5               :1;
    };
} CWG1DBFbits_t;
extern volatile CWG1DBFbits_t CWG1DBFbits __at(0x692);
// bitfield macros
#define _CWG1DBF_CWG1DBF_POSN                               0x0
#define _CWG1DBF_CWG1DBF_POSITION                           0x0
#define _CWG1DBF_CWG1DBF_SIZE                               0x6
#define _CWG1DBF_CWG1DBF_LENGTH                             0x6
#define _CWG1DBF_CWG1DBF_MASK                               0x3F
#define _CWG1DBF_CWG1DBF0_POSN                              0x0
#define _CWG1DBF_CWG1DBF0_POSITION                          0x0
#define _CWG1DBF_CWG1DBF0_SIZE                              0x1
#define _CWG1DBF_CWG1DBF0_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF0_MASK                              0x1
#define _CWG1DBF_CWG1DBF1_POSN                              0x1
#define _CWG1DBF_CWG1DBF1_POSITION                          0x1
#define _CWG1DBF_CWG1DBF1_SIZE                              0x1
#define _CWG1DBF_CWG1DBF1_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF1_MASK                              0x2
#define _CWG1DBF_CWG1DBF2_POSN                              0x2
#define _CWG1DBF_CWG1DBF2_POSITION                          0x2
#define _CWG1DBF_CWG1DBF2_SIZE                              0x1
#define _CWG1DBF_CWG1DBF2_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF2_MASK                              0x4
#define _CWG1DBF_CWG1DBF3_POSN                              0x3
#define _CWG1DBF_CWG1DBF3_POSITION                          0x3
#define _CWG1DBF_CWG1DBF3_SIZE                              0x1
#define _CWG1DBF_CWG1DBF3_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF3_MASK                              0x8
#define _CWG1DBF_CWG1DBF4_POSN                              0x4
#define _CWG1DBF_CWG1DBF4_POSITION                          0x4
#define _CWG1DBF_CWG1DBF4_SIZE                              0x1
#define _CWG1DBF_CWG1DBF4_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF4_MASK                              0x10
#define _CWG1DBF_CWG1DBF5_POSN                              0x5
#define _CWG1DBF_CWG1DBF5_POSITION                          0x5
#define _CWG1DBF_CWG1DBF5_SIZE                              0x1
#define _CWG1DBF_CWG1DBF5_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF5_MASK                              0x20

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
extern volatile unsigned char           CWG1CON0            __at(0x693);
#ifndef _LIB_BUILD
asm("CWG1CON0 equ 0693h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1CS0                  :1;
        unsigned                        :2;
        unsigned G1POLA                 :1;
        unsigned G1POLB                 :1;
        unsigned G1OEA                  :1;
        unsigned G1OEB                  :1;
        unsigned G1EN                   :1;
    };
    struct {
        unsigned G1CS                   :2;
    };
} CWG1CON0bits_t;
extern volatile CWG1CON0bits_t CWG1CON0bits __at(0x693);
// bitfield macros
#define _CWG1CON0_G1CS0_POSN                                0x0
#define _CWG1CON0_G1CS0_POSITION                            0x0
#define _CWG1CON0_G1CS0_SIZE                                0x1
#define _CWG1CON0_G1CS0_LENGTH                              0x1
#define _CWG1CON0_G1CS0_MASK                                0x1
#define _CWG1CON0_G1POLA_POSN                               0x3
#define _CWG1CON0_G1POLA_POSITION                           0x3
#define _CWG1CON0_G1POLA_SIZE                               0x1
#define _CWG1CON0_G1POLA_LENGTH                             0x1
#define _CWG1CON0_G1POLA_MASK                               0x8
#define _CWG1CON0_G1POLB_POSN                               0x4
#define _CWG1CON0_G1POLB_POSITION                           0x4
#define _CWG1CON0_G1POLB_SIZE                               0x1
#define _CWG1CON0_G1POLB_LENGTH                             0x1
#define _CWG1CON0_G1POLB_MASK                               0x10
#define _CWG1CON0_G1OEA_POSN                                0x5
#define _CWG1CON0_G1OEA_POSITION                            0x5
#define _CWG1CON0_G1OEA_SIZE                                0x1
#define _CWG1CON0_G1OEA_LENGTH                              0x1
#define _CWG1CON0_G1OEA_MASK                                0x20
#define _CWG1CON0_G1OEB_POSN                                0x6
#define _CWG1CON0_G1OEB_POSITION                            0x6
#define _CWG1CON0_G1OEB_SIZE                                0x1
#define _CWG1CON0_G1OEB_LENGTH                              0x1
#define _CWG1CON0_G1OEB_MASK                                0x40
#define _CWG1CON0_G1EN_POSN                                 0x7
#define _CWG1CON0_G1EN_POSITION                             0x7
#define _CWG1CON0_G1EN_SIZE                                 0x1
#define _CWG1CON0_G1EN_LENGTH                               0x1
#define _CWG1CON0_G1EN_MASK                                 0x80
#define _CWG1CON0_G1CS_POSN                                 0x0
#define _CWG1CON0_G1CS_POSITION                             0x0
#define _CWG1CON0_G1CS_SIZE                                 0x2
#define _CWG1CON0_G1CS_LENGTH                               0x2
#define _CWG1CON0_G1CS_MASK                                 0x3

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
extern volatile unsigned char           CWG1CON1            __at(0x694);
#ifndef _LIB_BUILD
asm("CWG1CON1 equ 0694h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1IS0                  :1;
        unsigned G1IS1                  :1;
        unsigned                        :2;
        unsigned G1ASDLA                :2;
        unsigned G1ASDLB                :2;
    };
    struct {
        unsigned G1IS                   :4;
        unsigned G1ASDLA0               :1;
        unsigned G1ASDLA1               :1;
        unsigned G1ASDLB0               :1;
        unsigned G1ASDLB1               :1;
    };
} CWG1CON1bits_t;
extern volatile CWG1CON1bits_t CWG1CON1bits __at(0x694);
// bitfield macros
#define _CWG1CON1_G1IS0_POSN                                0x0
#define _CWG1CON1_G1IS0_POSITION                            0x0
#define _CWG1CON1_G1IS0_SIZE                                0x1
#define _CWG1CON1_G1IS0_LENGTH                              0x1
#define _CWG1CON1_G1IS0_MASK                                0x1
#define _CWG1CON1_G1IS1_POSN                                0x1
#define _CWG1CON1_G1IS1_POSITION                            0x1
#define _CWG1CON1_G1IS1_SIZE                                0x1
#define _CWG1CON1_G1IS1_LENGTH                              0x1
#define _CWG1CON1_G1IS1_MASK                                0x2
#define _CWG1CON1_G1ASDLA_POSN                              0x4
#define _CWG1CON1_G1ASDLA_POSITION                          0x4
#define _CWG1CON1_G1ASDLA_SIZE                              0x2
#define _CWG1CON1_G1ASDLA_LENGTH                            0x2
#define _CWG1CON1_G1ASDLA_MASK                              0x30
#define _CWG1CON1_G1ASDLB_POSN                              0x6
#define _CWG1CON1_G1ASDLB_POSITION                          0x6
#define _CWG1CON1_G1ASDLB_SIZE                              0x2
#define _CWG1CON1_G1ASDLB_LENGTH                            0x2
#define _CWG1CON1_G1ASDLB_MASK                              0xC0
#define _CWG1CON1_G1IS_POSN                                 0x0
#define _CWG1CON1_G1IS_POSITION                             0x0
#define _CWG1CON1_G1IS_SIZE                                 0x4
#define _CWG1CON1_G1IS_LENGTH                               0x4
#define _CWG1CON1_G1IS_MASK                                 0xF
#define _CWG1CON1_G1ASDLA0_POSN                             0x4
#define _CWG1CON1_G1ASDLA0_POSITION                         0x4
#define _CWG1CON1_G1ASDLA0_SIZE                             0x1
#define _CWG1CON1_G1ASDLA0_LENGTH                           0x1
#define _CWG1CON1_G1ASDLA0_MASK                             0x10
#define _CWG1CON1_G1ASDLA1_POSN                             0x5
#define _CWG1CON1_G1ASDLA1_POSITION                         0x5
#define _CWG1CON1_G1ASDLA1_SIZE                             0x1
#define _CWG1CON1_G1ASDLA1_LENGTH                           0x1
#define _CWG1CON1_G1ASDLA1_MASK                             0x20
#define _CWG1CON1_G1ASDLB0_POSN                             0x6
#define _CWG1CON1_G1ASDLB0_POSITION                         0x6
#define _CWG1CON1_G1ASDLB0_SIZE                             0x1
#define _CWG1CON1_G1ASDLB0_LENGTH                           0x1
#define _CWG1CON1_G1ASDLB0_MASK                             0x40
#define _CWG1CON1_G1ASDLB1_POSN                             0x7
#define _CWG1CON1_G1ASDLB1_POSITION                         0x7
#define _CWG1CON1_G1ASDLB1_SIZE                             0x1
#define _CWG1CON1_G1ASDLB1_LENGTH                           0x1
#define _CWG1CON1_G1ASDLB1_MASK                             0x80

// Register: CWG1CON2
#define CWG1CON2 CWG1CON2
extern volatile unsigned char           CWG1CON2            __at(0x695);
#ifndef _LIB_BUILD
asm("CWG1CON2 equ 0695h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned G1ASDFLT               :1;
        unsigned G1ASDC1                :1;
        unsigned G1ASDC2                :1;
        unsigned                        :2;
        unsigned G1ARSEN                :1;
        unsigned G1ASE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned G1ASDSFLT              :1;
        unsigned G1ASDSC1               :1;
        unsigned G1ASDSC2               :1;
    };
} CWG1CON2bits_t;
extern volatile CWG1CON2bits_t CWG1CON2bits __at(0x695);
// bitfield macros
#define _CWG1CON2_G1ASDFLT_POSN                             0x1
#define _CWG1CON2_G1ASDFLT_POSITION                         0x1
#define _CWG1CON2_G1ASDFLT_SIZE                             0x1
#define _CWG1CON2_G1ASDFLT_LENGTH                           0x1
#define _CWG1CON2_G1ASDFLT_MASK                             0x2
#define _CWG1CON2_G1ASDC1_POSN                              0x2
#define _CWG1CON2_G1ASDC1_POSITION                          0x2
#define _CWG1CON2_G1ASDC1_SIZE                              0x1
#define _CWG1CON2_G1ASDC1_LENGTH                            0x1
#define _CWG1CON2_G1ASDC1_MASK                              0x4
#define _CWG1CON2_G1ASDC2_POSN                              0x3
#define _CWG1CON2_G1ASDC2_POSITION                          0x3
#define _CWG1CON2_G1ASDC2_SIZE                              0x1
#define _CWG1CON2_G1ASDC2_LENGTH                            0x1
#define _CWG1CON2_G1ASDC2_MASK                              0x8
#define _CWG1CON2_G1ARSEN_POSN                              0x6
#define _CWG1CON2_G1ARSEN_POSITION                          0x6
#define _CWG1CON2_G1ARSEN_SIZE                              0x1
#define _CWG1CON2_G1ARSEN_LENGTH                            0x1
#define _CWG1CON2_G1ARSEN_MASK                              0x40
#define _CWG1CON2_G1ASE_POSN                                0x7
#define _CWG1CON2_G1ASE_POSITION                            0x7
#define _CWG1CON2_G1ASE_SIZE                                0x1
#define _CWG1CON2_G1ASE_LENGTH                              0x1
#define _CWG1CON2_G1ASE_MASK                                0x80
#define _CWG1CON2_G1ASDSFLT_POSN                            0x1
#define _CWG1CON2_G1ASDSFLT_POSITION                        0x1
#define _CWG1CON2_G1ASDSFLT_SIZE                            0x1
#define _CWG1CON2_G1ASDSFLT_LENGTH                          0x1
#define _CWG1CON2_G1ASDSFLT_MASK                            0x2
#define _CWG1CON2_G1ASDSC1_POSN                             0x2
#define _CWG1CON2_G1ASDSC1_POSITION                         0x2
#define _CWG1CON2_G1ASDSC1_SIZE                             0x1
#define _CWG1CON2_G1ASDSC1_LENGTH                           0x1
#define _CWG1CON2_G1ASDSC1_MASK                             0x4
#define _CWG1CON2_G1ASDSC2_POSN                             0x3
#define _CWG1CON2_G1ASDSC2_POSITION                         0x3
#define _CWG1CON2_G1ASDSC2_SIZE                             0x1
#define _CWG1CON2_G1ASDSC2_LENGTH                           0x1
#define _CWG1CON2_G1ASDSC2_MASK                             0x8

// Register: UCON
#define UCON UCON
extern volatile unsigned char           UCON                __at(0xE8E);
#ifndef _LIB_BUILD
asm("UCON equ 0E8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned SUSPND                 :1;
        unsigned RESUME                 :1;
        unsigned USBEN                  :1;
        unsigned PKTDIS                 :1;
        unsigned SE0                    :1;
        unsigned PPBRST                 :1;
    };
} UCONbits_t;
extern volatile UCONbits_t UCONbits __at(0xE8E);
// bitfield macros
#define _UCON_SUSPND_POSN                                   0x1
#define _UCON_SUSPND_POSITION                               0x1
#define _UCON_SUSPND_SIZE                                   0x1
#define _UCON_SUSPND_LENGTH                                 0x1
#define _UCON_SUSPND_MASK                                   0x2
#define _UCON_RESUME_POSN                                   0x2
#define _UCON_RESUME_POSITION                               0x2
#define _UCON_RESUME_SIZE                                   0x1
#define _UCON_RESUME_LENGTH                                 0x1
#define _UCON_RESUME_MASK                                   0x4
#define _UCON_USBEN_POSN                                    0x3
#define _UCON_USBEN_POSITION                                0x3
#define _UCON_USBEN_SIZE                                    0x1
#define _UCON_USBEN_LENGTH                                  0x1
#define _UCON_USBEN_MASK                                    0x8
#define _UCON_PKTDIS_POSN                                   0x4
#define _UCON_PKTDIS_POSITION                               0x4
#define _UCON_PKTDIS_SIZE                                   0x1
#define _UCON_PKTDIS_LENGTH                                 0x1
#define _UCON_PKTDIS_MASK                                   0x10
#define _UCON_SE0_POSN                                      0x5
#define _UCON_SE0_POSITION                                  0x5
#define _UCON_SE0_SIZE                                      0x1
#define _UCON_SE0_LENGTH                                    0x1
#define _UCON_SE0_MASK                                      0x20
#define _UCON_PPBRST_POSN                                   0x6
#define _UCON_PPBRST_POSITION                               0x6
#define _UCON_PPBRST_SIZE                                   0x1
#define _UCON_PPBRST_LENGTH                                 0x1
#define _UCON_PPBRST_MASK                                   0x40

// Register: USTAT
#define USTAT USTAT
extern volatile unsigned char           USTAT               __at(0xE8F);
#ifndef _LIB_BUILD
asm("USTAT equ 0E8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned PPBI                   :1;
        unsigned DIR                    :1;
        unsigned ENDP                   :4;
    };
    struct {
        unsigned                        :3;
        unsigned ENDP0                  :1;
        unsigned ENDP1                  :1;
        unsigned ENDP2                  :1;
        unsigned ENDP3                  :1;
    };
} USTATbits_t;
extern volatile USTATbits_t USTATbits __at(0xE8F);
// bitfield macros
#define _USTAT_PPBI_POSN                                    0x1
#define _USTAT_PPBI_POSITION                                0x1
#define _USTAT_PPBI_SIZE                                    0x1
#define _USTAT_PPBI_LENGTH                                  0x1
#define _USTAT_PPBI_MASK                                    0x2
#define _USTAT_DIR_POSN                                     0x2
#define _USTAT_DIR_POSITION                                 0x2
#define _USTAT_DIR_SIZE                                     0x1
#define _USTAT_DIR_LENGTH                                   0x1
#define _USTAT_DIR_MASK                                     0x4
#define _USTAT_ENDP_POSN                                    0x3
#define _USTAT_ENDP_POSITION                                0x3
#define _USTAT_ENDP_SIZE                                    0x4
#define _USTAT_ENDP_LENGTH                                  0x4
#define _USTAT_ENDP_MASK                                    0x78
#define _USTAT_ENDP0_POSN                                   0x3
#define _USTAT_ENDP0_POSITION                               0x3
#define _USTAT_ENDP0_SIZE                                   0x1
#define _USTAT_ENDP0_LENGTH                                 0x1
#define _USTAT_ENDP0_MASK                                   0x8
#define _USTAT_ENDP1_POSN                                   0x4
#define _USTAT_ENDP1_POSITION                               0x4
#define _USTAT_ENDP1_SIZE                                   0x1
#define _USTAT_ENDP1_LENGTH                                 0x1
#define _USTAT_ENDP1_MASK                                   0x10
#define _USTAT_ENDP2_POSN                                   0x5
#define _USTAT_ENDP2_POSITION                               0x5
#define _USTAT_ENDP2_SIZE                                   0x1
#define _USTAT_ENDP2_LENGTH                                 0x1
#define _USTAT_ENDP2_MASK                                   0x20
#define _USTAT_ENDP3_POSN                                   0x6
#define _USTAT_ENDP3_POSITION                               0x6
#define _USTAT_ENDP3_SIZE                                   0x1
#define _USTAT_ENDP3_LENGTH                                 0x1
#define _USTAT_ENDP3_MASK                                   0x40

// Register: UIR
#define UIR UIR
extern volatile unsigned char           UIR                 __at(0xE90);
#ifndef _LIB_BUILD
asm("UIR equ 0E90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIF                 :1;
        unsigned UERRIF                 :1;
        unsigned ACTVIF                 :1;
        unsigned TRNIF                  :1;
        unsigned IDLEIF                 :1;
        unsigned STALLIF                :1;
        unsigned SOFIF                  :1;
    };
} UIRbits_t;
extern volatile UIRbits_t UIRbits __at(0xE90);
// bitfield macros
#define _UIR_URSTIF_POSN                                    0x0
#define _UIR_URSTIF_POSITION                                0x0
#define _UIR_URSTIF_SIZE                                    0x1
#define _UIR_URSTIF_LENGTH                                  0x1
#define _UIR_URSTIF_MASK                                    0x1
#define _UIR_UERRIF_POSN                                    0x1
#define _UIR_UERRIF_POSITION                                0x1
#define _UIR_UERRIF_SIZE                                    0x1
#define _UIR_UERRIF_LENGTH                                  0x1
#define _UIR_UERRIF_MASK                                    0x2
#define _UIR_ACTVIF_POSN                                    0x2
#define _UIR_ACTVIF_POSITION                                0x2
#define _UIR_ACTVIF_SIZE                                    0x1
#define _UIR_ACTVIF_LENGTH                                  0x1
#define _UIR_ACTVIF_MASK                                    0x4
#define _UIR_TRNIF_POSN                                     0x3
#define _UIR_TRNIF_POSITION                                 0x3
#define _UIR_TRNIF_SIZE                                     0x1
#define _UIR_TRNIF_LENGTH                                   0x1
#define _UIR_TRNIF_MASK                                     0x8
#define _UIR_IDLEIF_POSN                                    0x4
#define _UIR_IDLEIF_POSITION                                0x4
#define _UIR_IDLEIF_SIZE                                    0x1
#define _UIR_IDLEIF_LENGTH                                  0x1
#define _UIR_IDLEIF_MASK                                    0x10
#define _UIR_STALLIF_POSN                                   0x5
#define _UIR_STALLIF_POSITION                               0x5
#define _UIR_STALLIF_SIZE                                   0x1
#define _UIR_STALLIF_LENGTH                                 0x1
#define _UIR_STALLIF_MASK                                   0x20
#define _UIR_SOFIF_POSN                                     0x6
#define _UIR_SOFIF_POSITION                                 0x6
#define _UIR_SOFIF_SIZE                                     0x1
#define _UIR_SOFIF_LENGTH                                   0x1
#define _UIR_SOFIF_MASK                                     0x40

// Register: UCFG
#define UCFG UCFG
extern volatile unsigned char           UCFG                __at(0xE91);
#ifndef _LIB_BUILD
asm("UCFG equ 0E91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPB                    :2;
        unsigned FSEN                   :1;
        unsigned                        :1;
        unsigned UPUEN                  :1;
        unsigned                        :2;
        unsigned UTEYE                  :1;
    };
    struct {
        unsigned PPB0                   :1;
        unsigned PPB1                   :1;
    };
} UCFGbits_t;
extern volatile UCFGbits_t UCFGbits __at(0xE91);
// bitfield macros
#define _UCFG_PPB_POSN                                      0x0
#define _UCFG_PPB_POSITION                                  0x0
#define _UCFG_PPB_SIZE                                      0x2
#define _UCFG_PPB_LENGTH                                    0x2
#define _UCFG_PPB_MASK                                      0x3
#define _UCFG_FSEN_POSN                                     0x2
#define _UCFG_FSEN_POSITION                                 0x2
#define _UCFG_FSEN_SIZE                                     0x1
#define _UCFG_FSEN_LENGTH                                   0x1
#define _UCFG_FSEN_MASK                                     0x4
#define _UCFG_UPUEN_POSN                                    0x4
#define _UCFG_UPUEN_POSITION                                0x4
#define _UCFG_UPUEN_SIZE                                    0x1
#define _UCFG_UPUEN_LENGTH                                  0x1
#define _UCFG_UPUEN_MASK                                    0x10
#define _UCFG_UTEYE_POSN                                    0x7
#define _UCFG_UTEYE_POSITION                                0x7
#define _UCFG_UTEYE_SIZE                                    0x1
#define _UCFG_UTEYE_LENGTH                                  0x1
#define _UCFG_UTEYE_MASK                                    0x80
#define _UCFG_PPB0_POSN                                     0x0
#define _UCFG_PPB0_POSITION                                 0x0
#define _UCFG_PPB0_SIZE                                     0x1
#define _UCFG_PPB0_LENGTH                                   0x1
#define _UCFG_PPB0_MASK                                     0x1
#define _UCFG_PPB1_POSN                                     0x1
#define _UCFG_PPB1_POSITION                                 0x1
#define _UCFG_PPB1_SIZE                                     0x1
#define _UCFG_PPB1_LENGTH                                   0x1
#define _UCFG_PPB1_MASK                                     0x2

// Register: UIE
#define UIE UIE
extern volatile unsigned char           UIE                 __at(0xE92);
#ifndef _LIB_BUILD
asm("UIE equ 0E92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIE                 :1;
        unsigned UERRIE                 :1;
        unsigned ACTVIE                 :1;
        unsigned TRNIE                  :1;
        unsigned IDLEIE                 :1;
        unsigned STALLIE                :1;
        unsigned SOFIE                  :1;
    };
} UIEbits_t;
extern volatile UIEbits_t UIEbits __at(0xE92);
// bitfield macros
#define _UIE_URSTIE_POSN                                    0x0
#define _UIE_URSTIE_POSITION                                0x0
#define _UIE_URSTIE_SIZE                                    0x1
#define _UIE_URSTIE_LENGTH                                  0x1
#define _UIE_URSTIE_MASK                                    0x1
#define _UIE_UERRIE_POSN                                    0x1
#define _UIE_UERRIE_POSITION                                0x1
#define _UIE_UERRIE_SIZE                                    0x1
#define _UIE_UERRIE_LENGTH                                  0x1
#define _UIE_UERRIE_MASK                                    0x2
#define _UIE_ACTVIE_POSN                                    0x2
#define _UIE_ACTVIE_POSITION                                0x2
#define _UIE_ACTVIE_SIZE                                    0x1
#define _UIE_ACTVIE_LENGTH                                  0x1
#define _UIE_ACTVIE_MASK                                    0x4
#define _UIE_TRNIE_POSN                                     0x3
#define _UIE_TRNIE_POSITION                                 0x3
#define _UIE_TRNIE_SIZE                                     0x1
#define _UIE_TRNIE_LENGTH                                   0x1
#define _UIE_TRNIE_MASK                                     0x8
#define _UIE_IDLEIE_POSN                                    0x4
#define _UIE_IDLEIE_POSITION                                0x4
#define _UIE_IDLEIE_SIZE                                    0x1
#define _UIE_IDLEIE_LENGTH                                  0x1
#define _UIE_IDLEIE_MASK                                    0x10
#define _UIE_STALLIE_POSN                                   0x5
#define _UIE_STALLIE_POSITION                               0x5
#define _UIE_STALLIE_SIZE                                   0x1
#define _UIE_STALLIE_LENGTH                                 0x1
#define _UIE_STALLIE_MASK                                   0x20
#define _UIE_SOFIE_POSN                                     0x6
#define _UIE_SOFIE_POSITION                                 0x6
#define _UIE_SOFIE_SIZE                                     0x1
#define _UIE_SOFIE_LENGTH                                   0x1
#define _UIE_SOFIE_MASK                                     0x40

// Register: UEIR
#define UEIR UEIR
extern volatile unsigned char           UEIR                __at(0xE93);
#ifndef _LIB_BUILD
asm("UEIR equ 0E93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEF                  :1;
        unsigned CRC5EF                 :1;
        unsigned CRC16EF                :1;
        unsigned DFN8EF                 :1;
        unsigned BTOEF                  :1;
        unsigned                        :2;
        unsigned BTSEF                  :1;
    };
} UEIRbits_t;
extern volatile UEIRbits_t UEIRbits __at(0xE93);
// bitfield macros
#define _UEIR_PIDEF_POSN                                    0x0
#define _UEIR_PIDEF_POSITION                                0x0
#define _UEIR_PIDEF_SIZE                                    0x1
#define _UEIR_PIDEF_LENGTH                                  0x1
#define _UEIR_PIDEF_MASK                                    0x1
#define _UEIR_CRC5EF_POSN                                   0x1
#define _UEIR_CRC5EF_POSITION                               0x1
#define _UEIR_CRC5EF_SIZE                                   0x1
#define _UEIR_CRC5EF_LENGTH                                 0x1
#define _UEIR_CRC5EF_MASK                                   0x2
#define _UEIR_CRC16EF_POSN                                  0x2
#define _UEIR_CRC16EF_POSITION                              0x2
#define _UEIR_CRC16EF_SIZE                                  0x1
#define _UEIR_CRC16EF_LENGTH                                0x1
#define _UEIR_CRC16EF_MASK                                  0x4
#define _UEIR_DFN8EF_POSN                                   0x3
#define _UEIR_DFN8EF_POSITION                               0x3
#define _UEIR_DFN8EF_SIZE                                   0x1
#define _UEIR_DFN8EF_LENGTH                                 0x1
#define _UEIR_DFN8EF_MASK                                   0x8
#define _UEIR_BTOEF_POSN                                    0x4
#define _UEIR_BTOEF_POSITION                                0x4
#define _UEIR_BTOEF_SIZE                                    0x1
#define _UEIR_BTOEF_LENGTH                                  0x1
#define _UEIR_BTOEF_MASK                                    0x10
#define _UEIR_BTSEF_POSN                                    0x7
#define _UEIR_BTSEF_POSITION                                0x7
#define _UEIR_BTSEF_SIZE                                    0x1
#define _UEIR_BTSEF_LENGTH                                  0x1
#define _UEIR_BTSEF_MASK                                    0x80

// Register: UFRM
#define UFRM UFRM
extern volatile unsigned short          UFRM                __at(0xE94);
#ifndef _LIB_BUILD
asm("UFRM equ 0E94h");
#endif

// Register: UFRMH
#define UFRMH UFRMH
extern volatile unsigned char           UFRMH               __at(0xE94);
#ifndef _LIB_BUILD
asm("UFRMH equ 0E94h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRM8                   :1;
        unsigned FRM9                   :1;
        unsigned FRM10                  :1;
    };
} UFRMHbits_t;
extern volatile UFRMHbits_t UFRMHbits __at(0xE94);
// bitfield macros
#define _UFRMH_FRM8_POSN                                    0x0
#define _UFRMH_FRM8_POSITION                                0x0
#define _UFRMH_FRM8_SIZE                                    0x1
#define _UFRMH_FRM8_LENGTH                                  0x1
#define _UFRMH_FRM8_MASK                                    0x1
#define _UFRMH_FRM9_POSN                                    0x1
#define _UFRMH_FRM9_POSITION                                0x1
#define _UFRMH_FRM9_SIZE                                    0x1
#define _UFRMH_FRM9_LENGTH                                  0x1
#define _UFRMH_FRM9_MASK                                    0x2
#define _UFRMH_FRM10_POSN                                   0x2
#define _UFRMH_FRM10_POSITION                               0x2
#define _UFRMH_FRM10_SIZE                                   0x1
#define _UFRMH_FRM10_LENGTH                                 0x1
#define _UFRMH_FRM10_MASK                                   0x4

// Register: UFRML
#define UFRML UFRML
extern volatile unsigned char           UFRML               __at(0xE95);
#ifndef _LIB_BUILD
asm("UFRML equ 0E95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRM0                   :1;
        unsigned FRM1                   :1;
        unsigned FRM2                   :1;
        unsigned FRM3                   :1;
        unsigned FRM4                   :1;
        unsigned FRM5                   :1;
        unsigned FRM6                   :1;
        unsigned FRM7                   :1;
    };
} UFRMLbits_t;
extern volatile UFRMLbits_t UFRMLbits __at(0xE95);
// bitfield macros
#define _UFRML_FRM0_POSN                                    0x0
#define _UFRML_FRM0_POSITION                                0x0
#define _UFRML_FRM0_SIZE                                    0x1
#define _UFRML_FRM0_LENGTH                                  0x1
#define _UFRML_FRM0_MASK                                    0x1
#define _UFRML_FRM1_POSN                                    0x1
#define _UFRML_FRM1_POSITION                                0x1
#define _UFRML_FRM1_SIZE                                    0x1
#define _UFRML_FRM1_LENGTH                                  0x1
#define _UFRML_FRM1_MASK                                    0x2
#define _UFRML_FRM2_POSN                                    0x2
#define _UFRML_FRM2_POSITION                                0x2
#define _UFRML_FRM2_SIZE                                    0x1
#define _UFRML_FRM2_LENGTH                                  0x1
#define _UFRML_FRM2_MASK                                    0x4
#define _UFRML_FRM3_POSN                                    0x3
#define _UFRML_FRM3_POSITION                                0x3
#define _UFRML_FRM3_SIZE                                    0x1
#define _UFRML_FRM3_LENGTH                                  0x1
#define _UFRML_FRM3_MASK                                    0x8
#define _UFRML_FRM4_POSN                                    0x4
#define _UFRML_FRM4_POSITION                                0x4
#define _UFRML_FRM4_SIZE                                    0x1
#define _UFRML_FRM4_LENGTH                                  0x1
#define _UFRML_FRM4_MASK                                    0x10
#define _UFRML_FRM5_POSN                                    0x5
#define _UFRML_FRM5_POSITION                                0x5
#define _UFRML_FRM5_SIZE                                    0x1
#define _UFRML_FRM5_LENGTH                                  0x1
#define _UFRML_FRM5_MASK                                    0x20
#define _UFRML_FRM6_POSN                                    0x6
#define _UFRML_FRM6_POSITION                                0x6
#define _UFRML_FRM6_SIZE                                    0x1
#define _UFRML_FRM6_LENGTH                                  0x1
#define _UFRML_FRM6_MASK                                    0x40
#define _UFRML_FRM7_POSN                                    0x7
#define _UFRML_FRM7_POSITION                                0x7
#define _UFRML_FRM7_SIZE                                    0x1
#define _UFRML_FRM7_LENGTH                                  0x1
#define _UFRML_FRM7_MASK                                    0x80

// Register: UADDR
#define UADDR UADDR
extern volatile unsigned char           UADDR               __at(0xE96);
#ifndef _LIB_BUILD
asm("UADDR equ 0E96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDR0                  :1;
        unsigned ADDR1                  :1;
        unsigned ADDR2                  :1;
        unsigned ADDR3                  :1;
        unsigned ADDR4                  :1;
        unsigned ADDR5                  :1;
        unsigned ADDR6                  :1;
    };
} UADDRbits_t;
extern volatile UADDRbits_t UADDRbits __at(0xE96);
// bitfield macros
#define _UADDR_ADDR0_POSN                                   0x0
#define _UADDR_ADDR0_POSITION                               0x0
#define _UADDR_ADDR0_SIZE                                   0x1
#define _UADDR_ADDR0_LENGTH                                 0x1
#define _UADDR_ADDR0_MASK                                   0x1
#define _UADDR_ADDR1_POSN                                   0x1
#define _UADDR_ADDR1_POSITION                               0x1
#define _UADDR_ADDR1_SIZE                                   0x1
#define _UADDR_ADDR1_LENGTH                                 0x1
#define _UADDR_ADDR1_MASK                                   0x2
#define _UADDR_ADDR2_POSN                                   0x2
#define _UADDR_ADDR2_POSITION                               0x2
#define _UADDR_ADDR2_SIZE                                   0x1
#define _UADDR_ADDR2_LENGTH                                 0x1
#define _UADDR_ADDR2_MASK                                   0x4
#define _UADDR_ADDR3_POSN                                   0x3
#define _UADDR_ADDR3_POSITION                               0x3
#define _UADDR_ADDR3_SIZE                                   0x1
#define _UADDR_ADDR3_LENGTH                                 0x1
#define _UADDR_ADDR3_MASK                                   0x8
#define _UADDR_ADDR4_POSN                                   0x4
#define _UADDR_ADDR4_POSITION                               0x4
#define _UADDR_ADDR4_SIZE                                   0x1
#define _UADDR_ADDR4_LENGTH                                 0x1
#define _UADDR_ADDR4_MASK                                   0x10
#define _UADDR_ADDR5_POSN                                   0x5
#define _UADDR_ADDR5_POSITION                               0x5
#define _UADDR_ADDR5_SIZE                                   0x1
#define _UADDR_ADDR5_LENGTH                                 0x1
#define _UADDR_ADDR5_MASK                                   0x20
#define _UADDR_ADDR6_POSN                                   0x6
#define _UADDR_ADDR6_POSITION                               0x6
#define _UADDR_ADDR6_SIZE                                   0x1
#define _UADDR_ADDR6_LENGTH                                 0x1
#define _UADDR_ADDR6_MASK                                   0x40

// Register: UEIE
#define UEIE UEIE
extern volatile unsigned char           UEIE                __at(0xE97);
#ifndef _LIB_BUILD
asm("UEIE equ 0E97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEE                  :1;
        unsigned CRC5EE                 :1;
        unsigned CRC16EE                :1;
        unsigned DFN8EE                 :1;
        unsigned BTOEE                  :1;
        unsigned                        :2;
        unsigned BTSEE                  :1;
    };
} UEIEbits_t;
extern volatile UEIEbits_t UEIEbits __at(0xE97);
// bitfield macros
#define _UEIE_PIDEE_POSN                                    0x0
#define _UEIE_PIDEE_POSITION                                0x0
#define _UEIE_PIDEE_SIZE                                    0x1
#define _UEIE_PIDEE_LENGTH                                  0x1
#define _UEIE_PIDEE_MASK                                    0x1
#define _UEIE_CRC5EE_POSN                                   0x1
#define _UEIE_CRC5EE_POSITION                               0x1
#define _UEIE_CRC5EE_SIZE                                   0x1
#define _UEIE_CRC5EE_LENGTH                                 0x1
#define _UEIE_CRC5EE_MASK                                   0x2
#define _UEIE_CRC16EE_POSN                                  0x2
#define _UEIE_CRC16EE_POSITION                              0x2
#define _UEIE_CRC16EE_SIZE                                  0x1
#define _UEIE_CRC16EE_LENGTH                                0x1
#define _UEIE_CRC16EE_MASK                                  0x4
#define _UEIE_DFN8EE_POSN                                   0x3
#define _UEIE_DFN8EE_POSITION                               0x3
#define _UEIE_DFN8EE_SIZE                                   0x1
#define _UEIE_DFN8EE_LENGTH                                 0x1
#define _UEIE_DFN8EE_MASK                                   0x8
#define _UEIE_BTOEE_POSN                                    0x4
#define _UEIE_BTOEE_POSITION                                0x4
#define _UEIE_BTOEE_SIZE                                    0x1
#define _UEIE_BTOEE_LENGTH                                  0x1
#define _UEIE_BTOEE_MASK                                    0x10
#define _UEIE_BTSEE_POSN                                    0x7
#define _UEIE_BTSEE_POSITION                                0x7
#define _UEIE_BTSEE_SIZE                                    0x1
#define _UEIE_BTSEE_LENGTH                                  0x1
#define _UEIE_BTSEE_MASK                                    0x80

// Register: UEP0
#define UEP0 UEP0
extern volatile unsigned char           UEP0                __at(0xE98);
#ifndef _LIB_BUILD
asm("UEP0 equ 0E98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP0bits_t;
extern volatile UEP0bits_t UEP0bits __at(0xE98);
// bitfield macros
#define _UEP0_EPSTALL_POSN                                  0x0
#define _UEP0_EPSTALL_POSITION                              0x0
#define _UEP0_EPSTALL_SIZE                                  0x1
#define _UEP0_EPSTALL_LENGTH                                0x1
#define _UEP0_EPSTALL_MASK                                  0x1
#define _UEP0_EPINEN_POSN                                   0x1
#define _UEP0_EPINEN_POSITION                               0x1
#define _UEP0_EPINEN_SIZE                                   0x1
#define _UEP0_EPINEN_LENGTH                                 0x1
#define _UEP0_EPINEN_MASK                                   0x2
#define _UEP0_EPOUTEN_POSN                                  0x2
#define _UEP0_EPOUTEN_POSITION                              0x2
#define _UEP0_EPOUTEN_SIZE                                  0x1
#define _UEP0_EPOUTEN_LENGTH                                0x1
#define _UEP0_EPOUTEN_MASK                                  0x4
#define _UEP0_EPCONDIS_POSN                                 0x3
#define _UEP0_EPCONDIS_POSITION                             0x3
#define _UEP0_EPCONDIS_SIZE                                 0x1
#define _UEP0_EPCONDIS_LENGTH                               0x1
#define _UEP0_EPCONDIS_MASK                                 0x8
#define _UEP0_EPHSHK_POSN                                   0x4
#define _UEP0_EPHSHK_POSITION                               0x4
#define _UEP0_EPHSHK_SIZE                                   0x1
#define _UEP0_EPHSHK_LENGTH                                 0x1
#define _UEP0_EPHSHK_MASK                                   0x10

// Register: UEP1
#define UEP1 UEP1
extern volatile unsigned char           UEP1                __at(0xE99);
#ifndef _LIB_BUILD
asm("UEP1 equ 0E99h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP1bits_t;
extern volatile UEP1bits_t UEP1bits __at(0xE99);
// bitfield macros
#define _UEP1_EPSTALL_POSN                                  0x0
#define _UEP1_EPSTALL_POSITION                              0x0
#define _UEP1_EPSTALL_SIZE                                  0x1
#define _UEP1_EPSTALL_LENGTH                                0x1
#define _UEP1_EPSTALL_MASK                                  0x1
#define _UEP1_EPINEN_POSN                                   0x1
#define _UEP1_EPINEN_POSITION                               0x1
#define _UEP1_EPINEN_SIZE                                   0x1
#define _UEP1_EPINEN_LENGTH                                 0x1
#define _UEP1_EPINEN_MASK                                   0x2
#define _UEP1_EPOUTEN_POSN                                  0x2
#define _UEP1_EPOUTEN_POSITION                              0x2
#define _UEP1_EPOUTEN_SIZE                                  0x1
#define _UEP1_EPOUTEN_LENGTH                                0x1
#define _UEP1_EPOUTEN_MASK                                  0x4
#define _UEP1_EPCONDIS_POSN                                 0x3
#define _UEP1_EPCONDIS_POSITION                             0x3
#define _UEP1_EPCONDIS_SIZE                                 0x1
#define _UEP1_EPCONDIS_LENGTH                               0x1
#define _UEP1_EPCONDIS_MASK                                 0x8
#define _UEP1_EPHSHK_POSN                                   0x4
#define _UEP1_EPHSHK_POSITION                               0x4
#define _UEP1_EPHSHK_SIZE                                   0x1
#define _UEP1_EPHSHK_LENGTH                                 0x1
#define _UEP1_EPHSHK_MASK                                   0x10

// Register: UEP2
#define UEP2 UEP2
extern volatile unsigned char           UEP2                __at(0xE9A);
#ifndef _LIB_BUILD
asm("UEP2 equ 0E9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP2bits_t;
extern volatile UEP2bits_t UEP2bits __at(0xE9A);
// bitfield macros
#define _UEP2_EPSTALL_POSN                                  0x0
#define _UEP2_EPSTALL_POSITION                              0x0
#define _UEP2_EPSTALL_SIZE                                  0x1
#define _UEP2_EPSTALL_LENGTH                                0x1
#define _UEP2_EPSTALL_MASK                                  0x1
#define _UEP2_EPINEN_POSN                                   0x1
#define _UEP2_EPINEN_POSITION                               0x1
#define _UEP2_EPINEN_SIZE                                   0x1
#define _UEP2_EPINEN_LENGTH                                 0x1
#define _UEP2_EPINEN_MASK                                   0x2
#define _UEP2_EPOUTEN_POSN                                  0x2
#define _UEP2_EPOUTEN_POSITION                              0x2
#define _UEP2_EPOUTEN_SIZE                                  0x1
#define _UEP2_EPOUTEN_LENGTH                                0x1
#define _UEP2_EPOUTEN_MASK                                  0x4
#define _UEP2_EPCONDIS_POSN                                 0x3
#define _UEP2_EPCONDIS_POSITION                             0x3
#define _UEP2_EPCONDIS_SIZE                                 0x1
#define _UEP2_EPCONDIS_LENGTH                               0x1
#define _UEP2_EPCONDIS_MASK                                 0x8
#define _UEP2_EPHSHK_POSN                                   0x4
#define _UEP2_EPHSHK_POSITION                               0x4
#define _UEP2_EPHSHK_SIZE                                   0x1
#define _UEP2_EPHSHK_LENGTH                                 0x1
#define _UEP2_EPHSHK_MASK                                   0x10

// Register: UEP3
#define UEP3 UEP3
extern volatile unsigned char           UEP3                __at(0xE9B);
#ifndef _LIB_BUILD
asm("UEP3 equ 0E9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP3bits_t;
extern volatile UEP3bits_t UEP3bits __at(0xE9B);
// bitfield macros
#define _UEP3_EPSTALL_POSN                                  0x0
#define _UEP3_EPSTALL_POSITION                              0x0
#define _UEP3_EPSTALL_SIZE                                  0x1
#define _UEP3_EPSTALL_LENGTH                                0x1
#define _UEP3_EPSTALL_MASK                                  0x1
#define _UEP3_EPINEN_POSN                                   0x1
#define _UEP3_EPINEN_POSITION                               0x1
#define _UEP3_EPINEN_SIZE                                   0x1
#define _UEP3_EPINEN_LENGTH                                 0x1
#define _UEP3_EPINEN_MASK                                   0x2
#define _UEP3_EPOUTEN_POSN                                  0x2
#define _UEP3_EPOUTEN_POSITION                              0x2
#define _UEP3_EPOUTEN_SIZE                                  0x1
#define _UEP3_EPOUTEN_LENGTH                                0x1
#define _UEP3_EPOUTEN_MASK                                  0x4
#define _UEP3_EPCONDIS_POSN                                 0x3
#define _UEP3_EPCONDIS_POSITION                             0x3
#define _UEP3_EPCONDIS_SIZE                                 0x1
#define _UEP3_EPCONDIS_LENGTH                               0x1
#define _UEP3_EPCONDIS_MASK                                 0x8
#define _UEP3_EPHSHK_POSN                                   0x4
#define _UEP3_EPHSHK_POSITION                               0x4
#define _UEP3_EPHSHK_SIZE                                   0x1
#define _UEP3_EPHSHK_LENGTH                                 0x1
#define _UEP3_EPHSHK_MASK                                   0x10

// Register: UEP4
#define UEP4 UEP4
extern volatile unsigned char           UEP4                __at(0xE9C);
#ifndef _LIB_BUILD
asm("UEP4 equ 0E9Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP4bits_t;
extern volatile UEP4bits_t UEP4bits __at(0xE9C);
// bitfield macros
#define _UEP4_EPSTALL_POSN                                  0x0
#define _UEP4_EPSTALL_POSITION                              0x0
#define _UEP4_EPSTALL_SIZE                                  0x1
#define _UEP4_EPSTALL_LENGTH                                0x1
#define _UEP4_EPSTALL_MASK                                  0x1
#define _UEP4_EPINEN_POSN                                   0x1
#define _UEP4_EPINEN_POSITION                               0x1
#define _UEP4_EPINEN_SIZE                                   0x1
#define _UEP4_EPINEN_LENGTH                                 0x1
#define _UEP4_EPINEN_MASK                                   0x2
#define _UEP4_EPOUTEN_POSN                                  0x2
#define _UEP4_EPOUTEN_POSITION                              0x2
#define _UEP4_EPOUTEN_SIZE                                  0x1
#define _UEP4_EPOUTEN_LENGTH                                0x1
#define _UEP4_EPOUTEN_MASK                                  0x4
#define _UEP4_EPCONDIS_POSN                                 0x3
#define _UEP4_EPCONDIS_POSITION                             0x3
#define _UEP4_EPCONDIS_SIZE                                 0x1
#define _UEP4_EPCONDIS_LENGTH                               0x1
#define _UEP4_EPCONDIS_MASK                                 0x8
#define _UEP4_EPHSHK_POSN                                   0x4
#define _UEP4_EPHSHK_POSITION                               0x4
#define _UEP4_EPHSHK_SIZE                                   0x1
#define _UEP4_EPHSHK_LENGTH                                 0x1
#define _UEP4_EPHSHK_MASK                                   0x10

// Register: UEP5
#define UEP5 UEP5
extern volatile unsigned char           UEP5                __at(0xE9D);
#ifndef _LIB_BUILD
asm("UEP5 equ 0E9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP5bits_t;
extern volatile UEP5bits_t UEP5bits __at(0xE9D);
// bitfield macros
#define _UEP5_EPSTALL_POSN                                  0x0
#define _UEP5_EPSTALL_POSITION                              0x0
#define _UEP5_EPSTALL_SIZE                                  0x1
#define _UEP5_EPSTALL_LENGTH                                0x1
#define _UEP5_EPSTALL_MASK                                  0x1
#define _UEP5_EPINEN_POSN                                   0x1
#define _UEP5_EPINEN_POSITION                               0x1
#define _UEP5_EPINEN_SIZE                                   0x1
#define _UEP5_EPINEN_LENGTH                                 0x1
#define _UEP5_EPINEN_MASK                                   0x2
#define _UEP5_EPOUTEN_POSN                                  0x2
#define _UEP5_EPOUTEN_POSITION                              0x2
#define _UEP5_EPOUTEN_SIZE                                  0x1
#define _UEP5_EPOUTEN_LENGTH                                0x1
#define _UEP5_EPOUTEN_MASK                                  0x4
#define _UEP5_EPCONDIS_POSN                                 0x3
#define _UEP5_EPCONDIS_POSITION                             0x3
#define _UEP5_EPCONDIS_SIZE                                 0x1
#define _UEP5_EPCONDIS_LENGTH                               0x1
#define _UEP5_EPCONDIS_MASK                                 0x8
#define _UEP5_EPHSHK_POSN                                   0x4
#define _UEP5_EPHSHK_POSITION                               0x4
#define _UEP5_EPHSHK_SIZE                                   0x1
#define _UEP5_EPHSHK_LENGTH                                 0x1
#define _UEP5_EPHSHK_MASK                                   0x10

// Register: UEP6
#define UEP6 UEP6
extern volatile unsigned char           UEP6                __at(0xE9E);
#ifndef _LIB_BUILD
asm("UEP6 equ 0E9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP6bits_t;
extern volatile UEP6bits_t UEP6bits __at(0xE9E);
// bitfield macros
#define _UEP6_EPSTALL_POSN                                  0x0
#define _UEP6_EPSTALL_POSITION                              0x0
#define _UEP6_EPSTALL_SIZE                                  0x1
#define _UEP6_EPSTALL_LENGTH                                0x1
#define _UEP6_EPSTALL_MASK                                  0x1
#define _UEP6_EPINEN_POSN                                   0x1
#define _UEP6_EPINEN_POSITION                               0x1
#define _UEP6_EPINEN_SIZE                                   0x1
#define _UEP6_EPINEN_LENGTH                                 0x1
#define _UEP6_EPINEN_MASK                                   0x2
#define _UEP6_EPOUTEN_POSN                                  0x2
#define _UEP6_EPOUTEN_POSITION                              0x2
#define _UEP6_EPOUTEN_SIZE                                  0x1
#define _UEP6_EPOUTEN_LENGTH                                0x1
#define _UEP6_EPOUTEN_MASK                                  0x4
#define _UEP6_EPCONDIS_POSN                                 0x3
#define _UEP6_EPCONDIS_POSITION                             0x3
#define _UEP6_EPCONDIS_SIZE                                 0x1
#define _UEP6_EPCONDIS_LENGTH                               0x1
#define _UEP6_EPCONDIS_MASK                                 0x8
#define _UEP6_EPHSHK_POSN                                   0x4
#define _UEP6_EPHSHK_POSITION                               0x4
#define _UEP6_EPHSHK_SIZE                                   0x1
#define _UEP6_EPHSHK_LENGTH                                 0x1
#define _UEP6_EPHSHK_MASK                                   0x10

// Register: UEP7
#define UEP7 UEP7
extern volatile unsigned char           UEP7                __at(0xE9F);
#ifndef _LIB_BUILD
asm("UEP7 equ 0E9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
} UEP7bits_t;
extern volatile UEP7bits_t UEP7bits __at(0xE9F);
// bitfield macros
#define _UEP7_EPSTALL_POSN                                  0x0
#define _UEP7_EPSTALL_POSITION                              0x0
#define _UEP7_EPSTALL_SIZE                                  0x1
#define _UEP7_EPSTALL_LENGTH                                0x1
#define _UEP7_EPSTALL_MASK                                  0x1
#define _UEP7_EPINEN_POSN                                   0x1
#define _UEP7_EPINEN_POSITION                               0x1
#define _UEP7_EPINEN_SIZE                                   0x1
#define _UEP7_EPINEN_LENGTH                                 0x1
#define _UEP7_EPINEN_MASK                                   0x2
#define _UEP7_EPOUTEN_POSN                                  0x2
#define _UEP7_EPOUTEN_POSITION                              0x2
#define _UEP7_EPOUTEN_SIZE                                  0x1
#define _UEP7_EPOUTEN_LENGTH                                0x1
#define _UEP7_EPOUTEN_MASK                                  0x4
#define _UEP7_EPCONDIS_POSN                                 0x3
#define _UEP7_EPCONDIS_POSITION                             0x3
#define _UEP7_EPCONDIS_SIZE                                 0x1
#define _UEP7_EPCONDIS_LENGTH                               0x1
#define _UEP7_EPCONDIS_MASK                                 0x8
#define _UEP7_EPHSHK_POSN                                   0x4
#define _UEP7_EPHSHK_POSITION                               0x4
#define _UEP7_EPHSHK_SIZE                                   0x1
#define _UEP7_EPHSHK_LENGTH                                 0x1
#define _UEP7_EPHSHK_MASK                                   0x10

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
extern volatile unsigned char           STATUS_SHAD         __at(0xFE4);
#ifndef _LIB_BUILD
asm("STATUS_SHAD equ 0FE4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
    };
} STATUS_SHADbits_t;
extern volatile STATUS_SHADbits_t STATUS_SHADbits __at(0xFE4);
// bitfield macros
#define _STATUS_SHAD_C_POSN                                 0x0
#define _STATUS_SHAD_C_POSITION                             0x0
#define _STATUS_SHAD_C_SIZE                                 0x1
#define _STATUS_SHAD_C_LENGTH                               0x1
#define _STATUS_SHAD_C_MASK                                 0x1
#define _STATUS_SHAD_DC_POSN                                0x1
#define _STATUS_SHAD_DC_POSITION                            0x1
#define _STATUS_SHAD_DC_SIZE                                0x1
#define _STATUS_SHAD_DC_LENGTH                              0x1
#define _STATUS_SHAD_DC_MASK                                0x2
#define _STATUS_SHAD_Z_POSN                                 0x2
#define _STATUS_SHAD_Z_POSITION                             0x2
#define _STATUS_SHAD_Z_SIZE                                 0x1
#define _STATUS_SHAD_Z_LENGTH                               0x1
#define _STATUS_SHAD_Z_MASK                                 0x4

// Register: WREG_SHAD
#define WREG_SHAD WREG_SHAD
extern volatile unsigned char           WREG_SHAD           __at(0xFE5);
#ifndef _LIB_BUILD
asm("WREG_SHAD equ 0FE5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG_SHAD              :8;
    };
} WREG_SHADbits_t;
extern volatile WREG_SHADbits_t WREG_SHADbits __at(0xFE5);
// bitfield macros
#define _WREG_SHAD_WREG_SHAD_POSN                           0x0
#define _WREG_SHAD_WREG_SHAD_POSITION                       0x0
#define _WREG_SHAD_WREG_SHAD_SIZE                           0x8
#define _WREG_SHAD_WREG_SHAD_LENGTH                         0x8
#define _WREG_SHAD_WREG_SHAD_MASK                           0xFF

// Register: BSR_SHAD
#define BSR_SHAD BSR_SHAD
extern volatile unsigned char           BSR_SHAD            __at(0xFE6);
#ifndef _LIB_BUILD
asm("BSR_SHAD equ 0FE6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR_SHAD               :5;
    };
} BSR_SHADbits_t;
extern volatile BSR_SHADbits_t BSR_SHADbits __at(0xFE6);
// bitfield macros
#define _BSR_SHAD_BSR_SHAD_POSN                             0x0
#define _BSR_SHAD_BSR_SHAD_POSITION                         0x0
#define _BSR_SHAD_BSR_SHAD_SIZE                             0x5
#define _BSR_SHAD_BSR_SHAD_LENGTH                           0x5
#define _BSR_SHAD_BSR_SHAD_MASK                             0x1F

// Register: PCLATH_SHAD
#define PCLATH_SHAD PCLATH_SHAD
extern volatile unsigned char           PCLATH_SHAD         __at(0xFE7);
#ifndef _LIB_BUILD
asm("PCLATH_SHAD equ 0FE7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH_SHAD            :7;
    };
} PCLATH_SHADbits_t;
extern volatile PCLATH_SHADbits_t PCLATH_SHADbits __at(0xFE7);
// bitfield macros
#define _PCLATH_SHAD_PCLATH_SHAD_POSN                       0x0
#define _PCLATH_SHAD_PCLATH_SHAD_POSITION                   0x0
#define _PCLATH_SHAD_PCLATH_SHAD_SIZE                       0x7
#define _PCLATH_SHAD_PCLATH_SHAD_LENGTH                     0x7
#define _PCLATH_SHAD_PCLATH_SHAD_MASK                       0x7F

// Register: FSR0L_SHAD
#define FSR0L_SHAD FSR0L_SHAD
extern volatile unsigned char           FSR0L_SHAD          __at(0xFE8);
#ifndef _LIB_BUILD
asm("FSR0L_SHAD equ 0FE8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L_SHAD             :8;
    };
} FSR0L_SHADbits_t;
extern volatile FSR0L_SHADbits_t FSR0L_SHADbits __at(0xFE8);
// bitfield macros
#define _FSR0L_SHAD_FSR0L_SHAD_POSN                         0x0
#define _FSR0L_SHAD_FSR0L_SHAD_POSITION                     0x0
#define _FSR0L_SHAD_FSR0L_SHAD_SIZE                         0x8
#define _FSR0L_SHAD_FSR0L_SHAD_LENGTH                       0x8
#define _FSR0L_SHAD_FSR0L_SHAD_MASK                         0xFF

// Register: FSR0H_SHAD
#define FSR0H_SHAD FSR0H_SHAD
extern volatile unsigned char           FSR0H_SHAD          __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0H_SHAD equ 0FE9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H_SHAD             :8;
    };
} FSR0H_SHADbits_t;
extern volatile FSR0H_SHADbits_t FSR0H_SHADbits __at(0xFE9);
// bitfield macros
#define _FSR0H_SHAD_FSR0H_SHAD_POSN                         0x0
#define _FSR0H_SHAD_FSR0H_SHAD_POSITION                     0x0
#define _FSR0H_SHAD_FSR0H_SHAD_SIZE                         0x8
#define _FSR0H_SHAD_FSR0H_SHAD_LENGTH                       0x8
#define _FSR0H_SHAD_FSR0H_SHAD_MASK                         0xFF

// Register: FSR1L_SHAD
#define FSR1L_SHAD FSR1L_SHAD
extern volatile unsigned char           FSR1L_SHAD          __at(0xFEA);
#ifndef _LIB_BUILD
asm("FSR1L_SHAD equ 0FEAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L_SHAD             :8;
    };
} FSR1L_SHADbits_t;
extern volatile FSR1L_SHADbits_t FSR1L_SHADbits __at(0xFEA);
// bitfield macros
#define _FSR1L_SHAD_FSR1L_SHAD_POSN                         0x0
#define _FSR1L_SHAD_FSR1L_SHAD_POSITION                     0x0
#define _FSR1L_SHAD_FSR1L_SHAD_SIZE                         0x8
#define _FSR1L_SHAD_FSR1L_SHAD_LENGTH                       0x8
#define _FSR1L_SHAD_FSR1L_SHAD_MASK                         0xFF

// Register: FSR1H_SHAD
#define FSR1H_SHAD FSR1H_SHAD
extern volatile unsigned char           FSR1H_SHAD          __at(0xFEB);
#ifndef _LIB_BUILD
asm("FSR1H_SHAD equ 0FEBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H_SHAD             :8;
    };
} FSR1H_SHADbits_t;
extern volatile FSR1H_SHADbits_t FSR1H_SHADbits __at(0xFEB);
// bitfield macros
#define _FSR1H_SHAD_FSR1H_SHAD_POSN                         0x0
#define _FSR1H_SHAD_FSR1H_SHAD_POSITION                     0x0
#define _FSR1H_SHAD_FSR1H_SHAD_SIZE                         0x8
#define _FSR1H_SHAD_FSR1H_SHAD_LENGTH                       0x8
#define _FSR1H_SHAD_FSR1H_SHAD_MASK                         0xFF

// Register: STKPTR
#define STKPTR STKPTR
extern volatile unsigned char           STKPTR              __at(0xFED);
#ifndef _LIB_BUILD
asm("STKPTR equ 0FEDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits __at(0xFED);
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0xFEE);
#ifndef _LIB_BUILD
asm("TOSL equ 0FEEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSL                   :8;
    };
} TOSLbits_t;
extern volatile TOSLbits_t TOSLbits __at(0xFEE);
// bitfield macros
#define _TOSL_TOSL_POSN                                     0x0
#define _TOSL_TOSL_POSITION                                 0x0
#define _TOSL_TOSL_SIZE                                     0x8
#define _TOSL_TOSL_LENGTH                                   0x8
#define _TOSL_TOSL_MASK                                     0xFF

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0xFEF);
#ifndef _LIB_BUILD
asm("TOSH equ 0FEFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSH                   :7;
    };
} TOSHbits_t;
extern volatile TOSHbits_t TOSHbits __at(0xFEF);
// bitfield macros
#define _TOSH_TOSH_POSN                                     0x0
#define _TOSH_TOSH_POSITION                                 0x0
#define _TOSH_TOSH_SIZE                                     0x7
#define _TOSH_TOSH_LENGTH                                   0x7
#define _TOSH_TOSH_MASK                                     0x7F

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&07Fh)
#endif
#define _BIT_ACCESS(r,b) ___mkstr(BANKMASK(r)) "," ___mkstr(b)
#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr)&07FFh)
#endif
// BAUDCON<ABDEN>
extern volatile __bit                   ABDEN               __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON,0)
// BAUDCON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0xCFF);	// @ (0x19F * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON,7)
// SSP1CON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x10B5);	// @ (0x216 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x10B4);	// @ (0x216 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x10B6);	// @ (0x216 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSP1CON2,6)
// SSP1CON3<ACKTIM>
extern volatile __bit                   ACKTIM              __at(0x10BF);	// @ (0x217 * 8 + 7)
#define                                 ACKTIM_bit          _BIT_ACCESS(SSP1CON3,7)
// ACTCON<ACTEN>
extern volatile __bit                   ACTEN               __at(0x1CDF);	// @ (0x39B * 8 + 7)
#define                                 ACTEN_bit           _BIT_ACCESS(ACTCON,7)
// PIE2<ACTIE>
extern volatile __bit                   ACTIE               __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 ACTIE_bit           _BIT_ACCESS(PIE2,1)
// PIR2<ACTIF>
extern volatile __bit                   ACTIF               __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 ACTIF_bit           _BIT_ACCESS(PIR2,1)
// ACTCON<ACTLOCK>
extern volatile __bit                   ACTLOCK             __at(0x1CDB);	// @ (0x39B * 8 + 3)
#define                                 ACTLOCK_bit         _BIT_ACCESS(ACTCON,3)
// ACTCON<ACTORS>
extern volatile __bit                   ACTORS              __at(0x1CD9);	// @ (0x39B * 8 + 1)
#define                                 ACTORS_bit          _BIT_ACCESS(ACTCON,1)
// ACTCON<ACTSRC>
extern volatile __bit                   ACTSRC              __at(0x1CDC);	// @ (0x39B * 8 + 4)
#define                                 ACTSRC_bit          _BIT_ACCESS(ACTCON,4)
// ACTCON<ACTUD>
extern volatile __bit                   ACTUD               __at(0x1CDE);	// @ (0x39B * 8 + 6)
#define                                 ACTUD_bit           _BIT_ACCESS(ACTCON,6)
// UIE<ACTVIE>
extern volatile __bit                   ACTVIE              __at(0x7492);	// @ (0xE92 * 8 + 2)
#define                                 ACTVIE_bit          _BIT_ACCESS(UIE,2)
// UIR<ACTVIF>
extern volatile __bit                   ACTVIF              __at(0x7482);	// @ (0xE90 * 8 + 2)
#define                                 ACTVIF_bit          _BIT_ACCESS(UIR,2)
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
// UADDR<ADDR0>
extern volatile __bit                   ADDR0               __at(0x74B0);	// @ (0xE96 * 8 + 0)
#define                                 ADDR0_bit           _BIT_ACCESS(UADDR,0)
// UADDR<ADDR1>
extern volatile __bit                   ADDR1               __at(0x74B1);	// @ (0xE96 * 8 + 1)
#define                                 ADDR1_bit           _BIT_ACCESS(UADDR,1)
// UADDR<ADDR2>
extern volatile __bit                   ADDR2               __at(0x74B2);	// @ (0xE96 * 8 + 2)
#define                                 ADDR2_bit           _BIT_ACCESS(UADDR,2)
// UADDR<ADDR3>
extern volatile __bit                   ADDR3               __at(0x74B3);	// @ (0xE96 * 8 + 3)
#define                                 ADDR3_bit           _BIT_ACCESS(UADDR,3)
// UADDR<ADDR4>
extern volatile __bit                   ADDR4               __at(0x74B4);	// @ (0xE96 * 8 + 4)
#define                                 ADDR4_bit           _BIT_ACCESS(UADDR,4)
// UADDR<ADDR5>
extern volatile __bit                   ADDR5               __at(0x74B5);	// @ (0xE96 * 8 + 5)
#define                                 ADDR5_bit           _BIT_ACCESS(UADDR,5)
// UADDR<ADDR6>
extern volatile __bit                   ADDR6               __at(0x74B6);	// @ (0xE96 * 8 + 6)
#define                                 ADDR6_bit           _BIT_ACCESS(UADDR,6)
// ADCON1<ADFM>
extern volatile __bit                   ADFM                __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON1,7)
// FVRCON<ADFVR0>
extern volatile __bit                   ADFVR0              __at(0x8B8);	// @ (0x117 * 8 + 0)
#define                                 ADFVR0_bit          _BIT_ACCESS(FVRCON,0)
// FVRCON<ADFVR1>
extern volatile __bit                   ADFVR1              __at(0x8B9);	// @ (0x117 * 8 + 1)
#define                                 ADFVR1_bit          _BIT_ACCESS(FVRCON,1)
// ADCON0<ADGO>
extern volatile __bit                   ADGO                __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 ADGO_bit            _BIT_ACCESS(ADCON0,1)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x48E);	// @ (0x91 * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x8E);	// @ (0x11 * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON1<ADPREF0>
extern volatile __bit                   ADPREF0             __at(0x4F0);	// @ (0x9E * 8 + 0)
#define                                 ADPREF0_bit         _BIT_ACCESS(ADCON1,0)
// ADCON1<ADPREF1>
extern volatile __bit                   ADPREF1             __at(0x4F1);	// @ (0x9E * 8 + 1)
#define                                 ADPREF1_bit         _BIT_ACCESS(ADCON1,1)
// SSP1CON3<AHEN>
extern volatile __bit                   AHEN                __at(0x10B9);	// @ (0x217 * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSP1CON3,1)
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC64);	// @ (0x18C * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELC<ANSC0>
extern volatile __bit                   ANSC0               __at(0xC70);	// @ (0x18E * 8 + 0)
#define                                 ANSC0_bit           _BIT_ACCESS(ANSELC,0)
// ANSELC<ANSC1>
extern volatile __bit                   ANSC1               __at(0xC71);	// @ (0x18E * 8 + 1)
#define                                 ANSC1_bit           _BIT_ACCESS(ANSELC,1)
// ANSELC<ANSC2>
extern volatile __bit                   ANSC2               __at(0xC72);	// @ (0x18E * 8 + 2)
#define                                 ANSC2_bit           _BIT_ACCESS(ANSELC,2)
// ANSELC<ANSC3>
extern volatile __bit                   ANSC3               __at(0xC73);	// @ (0x18E * 8 + 3)
#define                                 ANSC3_bit           _BIT_ACCESS(ANSELC,3)
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR2,3)
// SSP1STAT<BF>
extern volatile __bit                   BF                  __at(0x10A0);	// @ (0x214 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSP1STAT,0)
// SSP1CON3<BOEN>
extern volatile __bit                   BOEN                __at(0x10BC);	// @ (0x217 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSP1CON3,4)
// BORCON<BORFS>
extern volatile __bit                   BORFS               __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 BORFS_bit           _BIT_ACCESS(BORCON,6)
// BORCON<BORRDY>
extern volatile __bit                   BORRDY              __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BORRDY_bit          _BIT_ACCESS(BORCON,0)
// BAUDCON<BRG16>
extern volatile __bit                   BRG16               __at(0xCFB);	// @ (0x19F * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON,3)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0xCF2);	// @ (0x19E * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// BSR<BSR0>
extern volatile __bit                   BSR0                __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 BSR0_bit            _BIT_ACCESS(BSR,0)
// BSR<BSR1>
extern volatile __bit                   BSR1                __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 BSR1_bit            _BIT_ACCESS(BSR,1)
// BSR<BSR2>
extern volatile __bit                   BSR2                __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 BSR2_bit            _BIT_ACCESS(BSR,2)
// BSR<BSR3>
extern volatile __bit                   BSR3                __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 BSR3_bit            _BIT_ACCESS(BSR,3)
// BSR<BSR4>
extern volatile __bit                   BSR4                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 BSR4_bit            _BIT_ACCESS(BSR,4)
// UEIE<BTOEE>
extern volatile __bit                   BTOEE               __at(0x74BC);	// @ (0xE97 * 8 + 4)
#define                                 BTOEE_bit           _BIT_ACCESS(UEIE,4)
// UEIR<BTOEF>
extern volatile __bit                   BTOEF               __at(0x749C);	// @ (0xE93 * 8 + 4)
#define                                 BTOEF_bit           _BIT_ACCESS(UEIR,4)
// UEIE<BTSEE>
extern volatile __bit                   BTSEE               __at(0x74BF);	// @ (0xE97 * 8 + 7)
#define                                 BTSEE_bit           _BIT_ACCESS(UEIE,7)
// UEIR<BTSEF>
extern volatile __bit                   BTSEF               __at(0x749F);	// @ (0xE93 * 8 + 7)
#define                                 BTSEF_bit           _BIT_ACCESS(UEIR,7)
// CM1CON0<C1HYS>
extern volatile __bit                   C1HYS               __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 C1HYS_bit           _BIT_ACCESS(CM1CON0,1)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x495);	// @ (0x92 * 8 + 5)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,5)
// CM1CON1<C1INTN>
extern volatile __bit                   C1INTN              __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 C1INTN_bit          _BIT_ACCESS(CM1CON1,6)
// CM1CON1<C1INTP>
extern volatile __bit                   C1INTP              __at(0x897);	// @ (0x112 * 8 + 7)
#define                                 C1INTP_bit          _BIT_ACCESS(CM1CON1,7)
// CM1CON1<C1NCH0>
extern volatile __bit                   C1NCH0              __at(0x890);	// @ (0x112 * 8 + 0)
#define                                 C1NCH0_bit          _BIT_ACCESS(CM1CON1,0)
// CM1CON1<C1NCH1>
extern volatile __bit                   C1NCH1              __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 C1NCH1_bit          _BIT_ACCESS(CM1CON1,1)
// CM1CON1<C1NCH2>
extern volatile __bit                   C1NCH2              __at(0x892);	// @ (0x112 * 8 + 2)
#define                                 C1NCH2_bit          _BIT_ACCESS(CM1CON1,2)
// CM1CON0<C1OE>
extern volatile __bit                   C1OE                __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x88E);	// @ (0x111 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON1<C1PCH0>
extern volatile __bit                   C1PCH0              __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 C1PCH0_bit          _BIT_ACCESS(CM1CON1,4)
// CM1CON1<C1PCH1>
extern volatile __bit                   C1PCH1              __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 C1PCH1_bit          _BIT_ACCESS(CM1CON1,5)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 C1SYNC_bit          _BIT_ACCESS(CM1CON0,0)
// CM2CON0<C2HYS>
extern volatile __bit                   C2HYS               __at(0x899);	// @ (0x113 * 8 + 1)
#define                                 C2HYS_bit           _BIT_ACCESS(CM2CON0,1)
// PIE2<C2IE>
extern volatile __bit                   C2IE                __at(0x496);	// @ (0x92 * 8 + 6)
#define                                 C2IE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<C2IF>
extern volatile __bit                   C2IF                __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 C2IF_bit            _BIT_ACCESS(PIR2,6)
// CM2CON1<C2INTN>
extern volatile __bit                   C2INTN              __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 C2INTN_bit          _BIT_ACCESS(CM2CON1,6)
// CM2CON1<C2INTP>
extern volatile __bit                   C2INTP              __at(0x8A7);	// @ (0x114 * 8 + 7)
#define                                 C2INTP_bit          _BIT_ACCESS(CM2CON1,7)
// CM2CON1<C2NCH0>
extern volatile __bit                   C2NCH0              __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 C2NCH0_bit          _BIT_ACCESS(CM2CON1,0)
// CM2CON1<C2NCH1>
extern volatile __bit                   C2NCH1              __at(0x8A1);	// @ (0x114 * 8 + 1)
#define                                 C2NCH1_bit          _BIT_ACCESS(CM2CON1,1)
// CM2CON1<C2NCH2>
extern volatile __bit                   C2NCH2              __at(0x8A2);	// @ (0x114 * 8 + 2)
#define                                 C2NCH2_bit          _BIT_ACCESS(CM2CON1,2)
// CM2CON0<C2OE>
extern volatile __bit                   C2OE                __at(0x89D);	// @ (0x113 * 8 + 5)
#define                                 C2OE_bit            _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x89F);	// @ (0x113 * 8 + 7)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x89E);	// @ (0x113 * 8 + 6)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,6)
// CM2CON1<C2PCH0>
extern volatile __bit                   C2PCH0              __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 C2PCH0_bit          _BIT_ACCESS(CM2CON1,4)
// CM2CON1<C2PCH1>
extern volatile __bit                   C2PCH1              __at(0x8A5);	// @ (0x114 * 8 + 5)
#define                                 C2PCH1_bit          _BIT_ACCESS(CM2CON1,5)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x89C);	// @ (0x113 * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 C2SP_bit            _BIT_ACCESS(CM2CON0,2)
// CM2CON0<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON0,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// FVRCON<CDAFVR0>
extern volatile __bit                   CDAFVR0             __at(0x8BA);	// @ (0x117 * 8 + 2)
#define                                 CDAFVR0_bit         _BIT_ACCESS(FVRCON,2)
// FVRCON<CDAFVR1>
extern volatile __bit                   CDAFVR1             __at(0x8BB);	// @ (0x117 * 8 + 3)
#define                                 CDAFVR1_bit         _BIT_ACCESS(FVRCON,3)
// PMCON1<CFGS>
extern volatile __bit                   CFGS                __at(0xCAE);	// @ (0x195 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(PMCON1,6)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0x4EC);	// @ (0x9D * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0x4ED);	// @ (0x9D * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// ADCON0<CHS4>
extern volatile __bit                   CHS4                __at(0x4EE);	// @ (0x9D * 8 + 6)
#define                                 CHS4_bit            _BIT_ACCESS(ADCON0,6)
// SSP1STAT<CKE>
extern volatile __bit                   CKE                 __at(0x10A6);	// @ (0x214 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSP1STAT,6)
// SSP1CON1<CKP>
extern volatile __bit                   CKP                 __at(0x10AC);	// @ (0x215 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSP1CON1,4)
// CLKRCON<CLKRDC0>
extern volatile __bit                   CLKRDC0             __at(0x1CD3);	// @ (0x39A * 8 + 3)
#define                                 CLKRDC0_bit         _BIT_ACCESS(CLKRCON,3)
// CLKRCON<CLKRDC1>
extern volatile __bit                   CLKRDC1             __at(0x1CD4);	// @ (0x39A * 8 + 4)
#define                                 CLKRDC1_bit         _BIT_ACCESS(CLKRCON,4)
// CLKRCON<CLKRDIV0>
extern volatile __bit                   CLKRDIV0            __at(0x1CD0);	// @ (0x39A * 8 + 0)
#define                                 CLKRDIV0_bit        _BIT_ACCESS(CLKRCON,0)
// CLKRCON<CLKRDIV1>
extern volatile __bit                   CLKRDIV1            __at(0x1CD1);	// @ (0x39A * 8 + 1)
#define                                 CLKRDIV1_bit        _BIT_ACCESS(CLKRCON,1)
// CLKRCON<CLKRDIV2>
extern volatile __bit                   CLKRDIV2            __at(0x1CD2);	// @ (0x39A * 8 + 2)
#define                                 CLKRDIV2_bit        _BIT_ACCESS(CLKRCON,2)
// CLKRCON<CLKREN>
extern volatile __bit                   CLKREN              __at(0x1CD7);	// @ (0x39A * 8 + 7)
#define                                 CLKREN_bit          _BIT_ACCESS(CLKRCON,7)
// CLKRCON<CLKROE>
extern volatile __bit                   CLKROE              __at(0x1CD6);	// @ (0x39A * 8 + 6)
#define                                 CLKROE_bit          _BIT_ACCESS(CLKRCON,6)
// APFCON<CLKRSEL>
extern volatile __bit                   CLKRSEL             __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 CLKRSEL_bit         _BIT_ACCESS(APFCON,7)
// CLKRCON<CLKRSLR>
extern volatile __bit                   CLKRSLR             __at(0x1CD5);	// @ (0x39A * 8 + 5)
#define                                 CLKRSLR_bit         _BIT_ACCESS(CLKRCON,5)
// UEIE<CRC16EE>
extern volatile __bit                   CRC16EE             __at(0x74BA);	// @ (0xE97 * 8 + 2)
#define                                 CRC16EE_bit         _BIT_ACCESS(UEIE,2)
// UEIR<CRC16EF>
extern volatile __bit                   CRC16EF             __at(0x749A);	// @ (0xE93 * 8 + 2)
#define                                 CRC16EF_bit         _BIT_ACCESS(UEIR,2)
// UEIE<CRC5EE>
extern volatile __bit                   CRC5EE              __at(0x74B9);	// @ (0xE97 * 8 + 1)
#define                                 CRC5EE_bit          _BIT_ACCESS(UEIE,1)
// UEIR<CRC5EF>
extern volatile __bit                   CRC5EF              __at(0x7499);	// @ (0xE93 * 8 + 1)
#define                                 CRC5EF_bit          _BIT_ACCESS(UEIR,1)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// CWG1DBF<CWG1DBF0>
extern volatile __bit                   CWG1DBF0            __at(0x3490);	// @ (0x692 * 8 + 0)
#define                                 CWG1DBF0_bit        _BIT_ACCESS(CWG1DBF,0)
// CWG1DBF<CWG1DBF1>
extern volatile __bit                   CWG1DBF1            __at(0x3491);	// @ (0x692 * 8 + 1)
#define                                 CWG1DBF1_bit        _BIT_ACCESS(CWG1DBF,1)
// CWG1DBF<CWG1DBF2>
extern volatile __bit                   CWG1DBF2            __at(0x3492);	// @ (0x692 * 8 + 2)
#define                                 CWG1DBF2_bit        _BIT_ACCESS(CWG1DBF,2)
// CWG1DBF<CWG1DBF3>
extern volatile __bit                   CWG1DBF3            __at(0x3493);	// @ (0x692 * 8 + 3)
#define                                 CWG1DBF3_bit        _BIT_ACCESS(CWG1DBF,3)
// CWG1DBF<CWG1DBF4>
extern volatile __bit                   CWG1DBF4            __at(0x3494);	// @ (0x692 * 8 + 4)
#define                                 CWG1DBF4_bit        _BIT_ACCESS(CWG1DBF,4)
// CWG1DBF<CWG1DBF5>
extern volatile __bit                   CWG1DBF5            __at(0x3495);	// @ (0x692 * 8 + 5)
#define                                 CWG1DBF5_bit        _BIT_ACCESS(CWG1DBF,5)
// CWG1DBR<CWG1DBR0>
extern volatile __bit                   CWG1DBR0            __at(0x3488);	// @ (0x691 * 8 + 0)
#define                                 CWG1DBR0_bit        _BIT_ACCESS(CWG1DBR,0)
// CWG1DBR<CWG1DBR1>
extern volatile __bit                   CWG1DBR1            __at(0x3489);	// @ (0x691 * 8 + 1)
#define                                 CWG1DBR1_bit        _BIT_ACCESS(CWG1DBR,1)
// CWG1DBR<CWG1DBR2>
extern volatile __bit                   CWG1DBR2            __at(0x348A);	// @ (0x691 * 8 + 2)
#define                                 CWG1DBR2_bit        _BIT_ACCESS(CWG1DBR,2)
// CWG1DBR<CWG1DBR3>
extern volatile __bit                   CWG1DBR3            __at(0x348B);	// @ (0x691 * 8 + 3)
#define                                 CWG1DBR3_bit        _BIT_ACCESS(CWG1DBR,3)
// CWG1DBR<CWG1DBR4>
extern volatile __bit                   CWG1DBR4            __at(0x348C);	// @ (0x691 * 8 + 4)
#define                                 CWG1DBR4_bit        _BIT_ACCESS(CWG1DBR,4)
// CWG1DBR<CWG1DBR5>
extern volatile __bit                   CWG1DBR5            __at(0x348D);	// @ (0x691 * 8 + 5)
#define                                 CWG1DBR5_bit        _BIT_ACCESS(CWG1DBR,5)
// DACCON0<D1PSS0>
extern volatile __bit                   D1PSS0              __at(0x8C2);	// @ (0x118 * 8 + 2)
#define                                 D1PSS0_bit          _BIT_ACCESS(DACCON0,2)
// DACCON0<D1PSS1>
extern volatile __bit                   D1PSS1              __at(0x8C3);	// @ (0x118 * 8 + 3)
#define                                 D1PSS1_bit          _BIT_ACCESS(DACCON0,3)
// DACCON0<DACEN>
extern volatile __bit                   DACEN               __at(0x8C7);	// @ (0x118 * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(DACCON0,7)
// DACCON0<DACOE1>
extern volatile __bit                   DACOE1              __at(0x8C5);	// @ (0x118 * 8 + 5)
#define                                 DACOE1_bit          _BIT_ACCESS(DACCON0,5)
// DACCON0<DACOE2>
extern volatile __bit                   DACOE2              __at(0x8C4);	// @ (0x118 * 8 + 4)
#define                                 DACOE2_bit          _BIT_ACCESS(DACCON0,4)
// DACCON1<DACR0>
extern volatile __bit                   DACR0               __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 DACR0_bit           _BIT_ACCESS(DACCON1,0)
// DACCON1<DACR1>
extern volatile __bit                   DACR1               __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 DACR1_bit           _BIT_ACCESS(DACCON1,1)
// DACCON1<DACR2>
extern volatile __bit                   DACR2               __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 DACR2_bit           _BIT_ACCESS(DACCON1,2)
// DACCON1<DACR3>
extern volatile __bit                   DACR3               __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 DACR3_bit           _BIT_ACCESS(DACCON1,3)
// DACCON1<DACR4>
extern volatile __bit                   DACR4               __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 DACR4_bit           _BIT_ACCESS(DACCON1,4)
// UEIE<DFN8EE>
extern volatile __bit                   DFN8EE              __at(0x74BB);	// @ (0xE97 * 8 + 3)
#define                                 DFN8EE_bit          _BIT_ACCESS(UEIE,3)
// UEIR<DFN8EF>
extern volatile __bit                   DFN8EF              __at(0x749B);	// @ (0xE93 * 8 + 3)
#define                                 DFN8EF_bit          _BIT_ACCESS(UEIR,3)
// SSP1CON3<DHEN>
extern volatile __bit                   DHEN                __at(0x10B8);	// @ (0x217 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSP1CON3,0)
// USTAT<DIR>
extern volatile __bit                   DIR                 __at(0x747A);	// @ (0xE8F * 8 + 2)
#define                                 DIR_bit             _BIT_ACCESS(USTAT,2)
// SSP1STAT<D_nA>
extern volatile __bit                   D_nA                __at(0x10A5);	// @ (0x214 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSP1STAT,5)
// USTAT<ENDP0>
extern volatile __bit                   ENDP0               __at(0x747B);	// @ (0xE8F * 8 + 3)
#define                                 ENDP0_bit           _BIT_ACCESS(USTAT,3)
// USTAT<ENDP1>
extern volatile __bit                   ENDP1               __at(0x747C);	// @ (0xE8F * 8 + 4)
#define                                 ENDP1_bit           _BIT_ACCESS(USTAT,4)
// USTAT<ENDP2>
extern volatile __bit                   ENDP2               __at(0x747D);	// @ (0xE8F * 8 + 5)
#define                                 ENDP2_bit           _BIT_ACCESS(USTAT,5)
// USTAT<ENDP3>
extern volatile __bit                   ENDP3               __at(0x747E);	// @ (0xE8F * 8 + 6)
#define                                 ENDP3_bit           _BIT_ACCESS(USTAT,6)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// PMCON1<FREE>
extern volatile __bit                   FREE                __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(PMCON1,4)
// UFRML<FRM0>
extern volatile __bit                   FRM0                __at(0x74A8);	// @ (0xE95 * 8 + 0)
#define                                 FRM0_bit            _BIT_ACCESS(UFRML,0)
// UFRML<FRM1>
extern volatile __bit                   FRM1                __at(0x74A9);	// @ (0xE95 * 8 + 1)
#define                                 FRM1_bit            _BIT_ACCESS(UFRML,1)
// UFRMH<FRM10>
extern volatile __bit                   FRM10               __at(0x74A2);	// @ (0xE94 * 8 + 2)
#define                                 FRM10_bit           _BIT_ACCESS(UFRMH,2)
// UFRML<FRM2>
extern volatile __bit                   FRM2                __at(0x74AA);	// @ (0xE95 * 8 + 2)
#define                                 FRM2_bit            _BIT_ACCESS(UFRML,2)
// UFRML<FRM3>
extern volatile __bit                   FRM3                __at(0x74AB);	// @ (0xE95 * 8 + 3)
#define                                 FRM3_bit            _BIT_ACCESS(UFRML,3)
// UFRML<FRM4>
extern volatile __bit                   FRM4                __at(0x74AC);	// @ (0xE95 * 8 + 4)
#define                                 FRM4_bit            _BIT_ACCESS(UFRML,4)
// UFRML<FRM5>
extern volatile __bit                   FRM5                __at(0x74AD);	// @ (0xE95 * 8 + 5)
#define                                 FRM5_bit            _BIT_ACCESS(UFRML,5)
// UFRML<FRM6>
extern volatile __bit                   FRM6                __at(0x74AE);	// @ (0xE95 * 8 + 6)
#define                                 FRM6_bit            _BIT_ACCESS(UFRML,6)
// UFRML<FRM7>
extern volatile __bit                   FRM7                __at(0x74AF);	// @ (0xE95 * 8 + 7)
#define                                 FRM7_bit            _BIT_ACCESS(UFRML,7)
// UFRMH<FRM8>
extern volatile __bit                   FRM8                __at(0x74A0);	// @ (0xE94 * 8 + 0)
#define                                 FRM8_bit            _BIT_ACCESS(UFRMH,0)
// UFRMH<FRM9>
extern volatile __bit                   FRM9                __at(0x74A1);	// @ (0xE94 * 8 + 1)
#define                                 FRM9_bit            _BIT_ACCESS(UFRMH,1)
// UCFG<FSEN>
extern volatile __bit                   FSEN                __at(0x748A);	// @ (0xE91 * 8 + 2)
#define                                 FSEN_bit            _BIT_ACCESS(UCFG,2)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// CWG1CON2<G1ARSEN>
extern volatile __bit                   G1ARSEN             __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 G1ARSEN_bit         _BIT_ACCESS(CWG1CON2,6)
// CWG1CON2<G1ASDC1>
extern volatile __bit                   G1ASDC1             __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 G1ASDC1_bit         _BIT_ACCESS(CWG1CON2,2)
// CWG1CON2<G1ASDC2>
extern volatile __bit                   G1ASDC2             __at(0x34AB);	// @ (0x695 * 8 + 3)
#define                                 G1ASDC2_bit         _BIT_ACCESS(CWG1CON2,3)
// CWG1CON2<G1ASDFLT>
extern volatile __bit                   G1ASDFLT            __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 G1ASDFLT_bit        _BIT_ACCESS(CWG1CON2,1)
// CWG1CON1<G1ASDLA0>
extern volatile __bit                   G1ASDLA0            __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 G1ASDLA0_bit        _BIT_ACCESS(CWG1CON1,4)
// CWG1CON1<G1ASDLA1>
extern volatile __bit                   G1ASDLA1            __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 G1ASDLA1_bit        _BIT_ACCESS(CWG1CON1,5)
// CWG1CON1<G1ASDLB0>
extern volatile __bit                   G1ASDLB0            __at(0x34A6);	// @ (0x694 * 8 + 6)
#define                                 G1ASDLB0_bit        _BIT_ACCESS(CWG1CON1,6)
// CWG1CON1<G1ASDLB1>
extern volatile __bit                   G1ASDLB1            __at(0x34A7);	// @ (0x694 * 8 + 7)
#define                                 G1ASDLB1_bit        _BIT_ACCESS(CWG1CON1,7)
// CWG1CON2<G1ASDSC1>
extern volatile __bit                   G1ASDSC1            __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 G1ASDSC1_bit        _BIT_ACCESS(CWG1CON2,2)
// CWG1CON2<G1ASDSC2>
extern volatile __bit                   G1ASDSC2            __at(0x34AB);	// @ (0x695 * 8 + 3)
#define                                 G1ASDSC2_bit        _BIT_ACCESS(CWG1CON2,3)
// CWG1CON2<G1ASDSFLT>
extern volatile __bit                   G1ASDSFLT           __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 G1ASDSFLT_bit       _BIT_ACCESS(CWG1CON2,1)
// CWG1CON2<G1ASE>
extern volatile __bit                   G1ASE               __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 G1ASE_bit           _BIT_ACCESS(CWG1CON2,7)
// CWG1CON0<G1CS0>
extern volatile __bit                   G1CS0               __at(0x3498);	// @ (0x693 * 8 + 0)
#define                                 G1CS0_bit           _BIT_ACCESS(CWG1CON0,0)
// CWG1CON0<G1EN>
extern volatile __bit                   G1EN                __at(0x349F);	// @ (0x693 * 8 + 7)
#define                                 G1EN_bit            _BIT_ACCESS(CWG1CON0,7)
// CWG1CON1<G1IS0>
extern volatile __bit                   G1IS0               __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 G1IS0_bit           _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<G1IS1>
extern volatile __bit                   G1IS1               __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 G1IS1_bit           _BIT_ACCESS(CWG1CON1,1)
// CWG1CON0<G1OEA>
extern volatile __bit                   G1OEA               __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 G1OEA_bit           _BIT_ACCESS(CWG1CON0,5)
// CWG1CON0<G1OEB>
extern volatile __bit                   G1OEB               __at(0x349E);	// @ (0x693 * 8 + 6)
#define                                 G1OEB_bit           _BIT_ACCESS(CWG1CON0,6)
// CWG1CON0<G1POLA>
extern volatile __bit                   G1POLA              __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 G1POLA_bit          _BIT_ACCESS(CWG1CON0,3)
// CWG1CON0<G1POLB>
extern volatile __bit                   G1POLB              __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 G1POLB_bit          _BIT_ACCESS(CWG1CON0,4)
// SSP1CON2<GCEN>
extern volatile __bit                   GCEN                __at(0x10B7);	// @ (0x216 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSP1CON2,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// OSCSTAT<HFIOFR>
extern volatile __bit                   HFIOFR              __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 HFIOFR_bit          _BIT_ACCESS(OSCSTAT,4)
// OSCSTAT<HFIOFS>
extern volatile __bit                   HFIOFS              __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 HFIOFS_bit          _BIT_ACCESS(OSCSTAT,0)
// UIE<IDLEIE>
extern volatile __bit                   IDLEIE              __at(0x7494);	// @ (0xE92 * 8 + 4)
#define                                 IDLEIE_bit          _BIT_ACCESS(UIE,4)
// UIR<IDLEIF>
extern volatile __bit                   IDLEIF              __at(0x7484);	// @ (0xE90 * 8 + 4)
#define                                 IDLEIF_bit          _BIT_ACCESS(UIR,4)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x4AE);	// @ (0x95 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOCAF<IOCAF0>
extern volatile __bit                   IOCAF0              __at(0x1C98);	// @ (0x393 * 8 + 0)
#define                                 IOCAF0_bit          _BIT_ACCESS(IOCAF,0)
// IOCAF<IOCAF1>
extern volatile __bit                   IOCAF1              __at(0x1C99);	// @ (0x393 * 8 + 1)
#define                                 IOCAF1_bit          _BIT_ACCESS(IOCAF,1)
// IOCAF<IOCAF3>
extern volatile __bit                   IOCAF3              __at(0x1C9B);	// @ (0x393 * 8 + 3)
#define                                 IOCAF3_bit          _BIT_ACCESS(IOCAF,3)
// IOCAF<IOCAF4>
extern volatile __bit                   IOCAF4              __at(0x1C9C);	// @ (0x393 * 8 + 4)
#define                                 IOCAF4_bit          _BIT_ACCESS(IOCAF,4)
// IOCAF<IOCAF5>
extern volatile __bit                   IOCAF5              __at(0x1C9D);	// @ (0x393 * 8 + 5)
#define                                 IOCAF5_bit          _BIT_ACCESS(IOCAF,5)
// IOCAN<IOCAN0>
extern volatile __bit                   IOCAN0              __at(0x1C90);	// @ (0x392 * 8 + 0)
#define                                 IOCAN0_bit          _BIT_ACCESS(IOCAN,0)
// IOCAN<IOCAN1>
extern volatile __bit                   IOCAN1              __at(0x1C91);	// @ (0x392 * 8 + 1)
#define                                 IOCAN1_bit          _BIT_ACCESS(IOCAN,1)
// IOCAN<IOCAN3>
extern volatile __bit                   IOCAN3              __at(0x1C93);	// @ (0x392 * 8 + 3)
#define                                 IOCAN3_bit          _BIT_ACCESS(IOCAN,3)
// IOCAN<IOCAN4>
extern volatile __bit                   IOCAN4              __at(0x1C94);	// @ (0x392 * 8 + 4)
#define                                 IOCAN4_bit          _BIT_ACCESS(IOCAN,4)
// IOCAN<IOCAN5>
extern volatile __bit                   IOCAN5              __at(0x1C95);	// @ (0x392 * 8 + 5)
#define                                 IOCAN5_bit          _BIT_ACCESS(IOCAN,5)
// IOCAP<IOCAP0>
extern volatile __bit                   IOCAP0              __at(0x1C88);	// @ (0x391 * 8 + 0)
#define                                 IOCAP0_bit          _BIT_ACCESS(IOCAP,0)
// IOCAP<IOCAP1>
extern volatile __bit                   IOCAP1              __at(0x1C89);	// @ (0x391 * 8 + 1)
#define                                 IOCAP1_bit          _BIT_ACCESS(IOCAP,1)
// IOCAP<IOCAP3>
extern volatile __bit                   IOCAP3              __at(0x1C8B);	// @ (0x391 * 8 + 3)
#define                                 IOCAP3_bit          _BIT_ACCESS(IOCAP,3)
// IOCAP<IOCAP4>
extern volatile __bit                   IOCAP4              __at(0x1C8C);	// @ (0x391 * 8 + 4)
#define                                 IOCAP4_bit          _BIT_ACCESS(IOCAP,4)
// IOCAP<IOCAP5>
extern volatile __bit                   IOCAP5              __at(0x1C8D);	// @ (0x391 * 8 + 5)
#define                                 IOCAP5_bit          _BIT_ACCESS(IOCAP,5)
// INTCON<IOCIE>
extern volatile __bit                   IOCIE               __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 IOCIE_bit           _BIT_ACCESS(INTCON,3)
// INTCON<IOCIF>
extern volatile __bit                   IOCIF               __at(0x58);	// @ (0xB * 8 + 0)
#define                                 IOCIF_bit           _BIT_ACCESS(INTCON,0)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x4CA);	// @ (0x99 * 8 + 2)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,2)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,3)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x4CC);	// @ (0x99 * 8 + 4)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF3>
extern volatile __bit                   IRCF3               __at(0x4CD);	// @ (0x99 * 8 + 5)
#define                                 IRCF3_bit           _BIT_ACCESS(OSCCON,5)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x865);	// @ (0x10C * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
// LATC<LATC0>
extern volatile __bit                   LATC0               __at(0x870);	// @ (0x10E * 8 + 0)
#define                                 LATC0_bit           _BIT_ACCESS(LATC,0)
// LATC<LATC1>
extern volatile __bit                   LATC1               __at(0x871);	// @ (0x10E * 8 + 1)
#define                                 LATC1_bit           _BIT_ACCESS(LATC,1)
// LATC<LATC2>
extern volatile __bit                   LATC2               __at(0x872);	// @ (0x10E * 8 + 2)
#define                                 LATC2_bit           _BIT_ACCESS(LATC,2)
// LATC<LATC3>
extern volatile __bit                   LATC3               __at(0x873);	// @ (0x10E * 8 + 3)
#define                                 LATC3_bit           _BIT_ACCESS(LATC,3)
// LATC<LATC4>
extern volatile __bit                   LATC4               __at(0x874);	// @ (0x10E * 8 + 4)
#define                                 LATC4_bit           _BIT_ACCESS(LATC,4)
// LATC<LATC5>
extern volatile __bit                   LATC5               __at(0x875);	// @ (0x10E * 8 + 5)
#define                                 LATC5_bit           _BIT_ACCESS(LATC,5)
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// CMOUT<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 MC1OUT_bit          _BIT_ACCESS(CMOUT,0)
// CMOUT<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x8A9);	// @ (0x115 * 8 + 1)
#define                                 MC2OUT_bit          _BIT_ACCESS(CMOUT,1)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// PIE2<OSFIE>
extern volatile __bit                   OSFIE               __at(0x497);	// @ (0x92 * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<OSFIF>
extern volatile __bit                   OSFIF               __at(0x97);	// @ (0x12 * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR2,7)
// OSCSTAT<OSTS>
extern volatile __bit                   OSTS                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OSTS_bit            _BIT_ACCESS(OSCSTAT,5)
// APFCON<P2SEL>
extern volatile __bit                   P2SEL               __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 P2SEL_bit           _BIT_ACCESS(APFCON,2)
// SSP1CON3<PCIE>
extern volatile __bit                   PCIE                __at(0x10BE);	// @ (0x217 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSP1CON3,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSP1CON2<PEN>
extern volatile __bit                   PEN                 __at(0x10B2);	// @ (0x216 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSP1CON2,2)
// UEIE<PIDEE>
extern volatile __bit                   PIDEE               __at(0x74B8);	// @ (0xE97 * 8 + 0)
#define                                 PIDEE_bit           _BIT_ACCESS(UEIE,0)
// UEIR<PIDEF>
extern volatile __bit                   PIDEF               __at(0x7498);	// @ (0xE93 * 8 + 0)
#define                                 PIDEF_bit           _BIT_ACCESS(UEIR,0)
// UCON<PKTDIS>
extern volatile __bit                   PKTDIS              __at(0x7474);	// @ (0xE8E * 8 + 4)
#define                                 PKTDIS_bit          _BIT_ACCESS(UCON,4)
// OSCSTAT<PLLRDY>
extern volatile __bit                   PLLRDY              __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 PLLRDY_bit          _BIT_ACCESS(OSCSTAT,6)
// UCFG<PPB0>
extern volatile __bit                   PPB0                __at(0x7488);	// @ (0xE91 * 8 + 0)
#define                                 PPB0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<PPB1>
extern volatile __bit                   PPB1                __at(0x7489);	// @ (0xE91 * 8 + 1)
#define                                 PPB1_bit            _BIT_ACCESS(UCFG,1)
// USTAT<PPBI>
extern volatile __bit                   PPBI                __at(0x7479);	// @ (0xE8F * 8 + 1)
#define                                 PPBI_bit            _BIT_ACCESS(USTAT,1)
// UCON<PPBRST>
extern volatile __bit                   PPBRST              __at(0x7476);	// @ (0xE8E * 8 + 6)
#define                                 PPBRST_bit          _BIT_ACCESS(UCON,6)
// OPTION_REG<PS0>
extern volatile __bit                   PS0                 __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   PS1                 __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   PS2                 __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// PWM1DCH<PWM1DCH0>
extern volatile __bit                   PWM1DCH0            __at(0x3090);	// @ (0x612 * 8 + 0)
#define                                 PWM1DCH0_bit        _BIT_ACCESS(PWM1DCH,0)
// PWM1DCH<PWM1DCH1>
extern volatile __bit                   PWM1DCH1            __at(0x3091);	// @ (0x612 * 8 + 1)
#define                                 PWM1DCH1_bit        _BIT_ACCESS(PWM1DCH,1)
// PWM1DCH<PWM1DCH2>
extern volatile __bit                   PWM1DCH2            __at(0x3092);	// @ (0x612 * 8 + 2)
#define                                 PWM1DCH2_bit        _BIT_ACCESS(PWM1DCH,2)
// PWM1DCH<PWM1DCH3>
extern volatile __bit                   PWM1DCH3            __at(0x3093);	// @ (0x612 * 8 + 3)
#define                                 PWM1DCH3_bit        _BIT_ACCESS(PWM1DCH,3)
// PWM1DCH<PWM1DCH4>
extern volatile __bit                   PWM1DCH4            __at(0x3094);	// @ (0x612 * 8 + 4)
#define                                 PWM1DCH4_bit        _BIT_ACCESS(PWM1DCH,4)
// PWM1DCH<PWM1DCH5>
extern volatile __bit                   PWM1DCH5            __at(0x3095);	// @ (0x612 * 8 + 5)
#define                                 PWM1DCH5_bit        _BIT_ACCESS(PWM1DCH,5)
// PWM1DCH<PWM1DCH6>
extern volatile __bit                   PWM1DCH6            __at(0x3096);	// @ (0x612 * 8 + 6)
#define                                 PWM1DCH6_bit        _BIT_ACCESS(PWM1DCH,6)
// PWM1DCH<PWM1DCH7>
extern volatile __bit                   PWM1DCH7            __at(0x3097);	// @ (0x612 * 8 + 7)
#define                                 PWM1DCH7_bit        _BIT_ACCESS(PWM1DCH,7)
// PWM1DCL<PWM1DCL0>
extern volatile __bit                   PWM1DCL0            __at(0x308E);	// @ (0x611 * 8 + 6)
#define                                 PWM1DCL0_bit        _BIT_ACCESS(PWM1DCL,6)
// PWM1DCL<PWM1DCL1>
extern volatile __bit                   PWM1DCL1            __at(0x308F);	// @ (0x611 * 8 + 7)
#define                                 PWM1DCL1_bit        _BIT_ACCESS(PWM1DCL,7)
// PWM1CON<PWM1EN>
extern volatile __bit                   PWM1EN              __at(0x309F);	// @ (0x613 * 8 + 7)
#define                                 PWM1EN_bit          _BIT_ACCESS(PWM1CON,7)
// PWM1CON<PWM1OE>
extern volatile __bit                   PWM1OE              __at(0x309E);	// @ (0x613 * 8 + 6)
#define                                 PWM1OE_bit          _BIT_ACCESS(PWM1CON,6)
// PWM1CON<PWM1OUT>
extern volatile __bit                   PWM1OUT             __at(0x309D);	// @ (0x613 * 8 + 5)
#define                                 PWM1OUT_bit         _BIT_ACCESS(PWM1CON,5)
// PWM1CON<PWM1POL>
extern volatile __bit                   PWM1POL             __at(0x309C);	// @ (0x613 * 8 + 4)
#define                                 PWM1POL_bit         _BIT_ACCESS(PWM1CON,4)
// PWM2DCH<PWM2DCH0>
extern volatile __bit                   PWM2DCH0            __at(0x30A8);	// @ (0x615 * 8 + 0)
#define                                 PWM2DCH0_bit        _BIT_ACCESS(PWM2DCH,0)
// PWM2DCH<PWM2DCH1>
extern volatile __bit                   PWM2DCH1            __at(0x30A9);	// @ (0x615 * 8 + 1)
#define                                 PWM2DCH1_bit        _BIT_ACCESS(PWM2DCH,1)
// PWM2DCH<PWM2DCH2>
extern volatile __bit                   PWM2DCH2            __at(0x30AA);	// @ (0x615 * 8 + 2)
#define                                 PWM2DCH2_bit        _BIT_ACCESS(PWM2DCH,2)
// PWM2DCH<PWM2DCH3>
extern volatile __bit                   PWM2DCH3            __at(0x30AB);	// @ (0x615 * 8 + 3)
#define                                 PWM2DCH3_bit        _BIT_ACCESS(PWM2DCH,3)
// PWM2DCH<PWM2DCH4>
extern volatile __bit                   PWM2DCH4            __at(0x30AC);	// @ (0x615 * 8 + 4)
#define                                 PWM2DCH4_bit        _BIT_ACCESS(PWM2DCH,4)
// PWM2DCH<PWM2DCH5>
extern volatile __bit                   PWM2DCH5            __at(0x30AD);	// @ (0x615 * 8 + 5)
#define                                 PWM2DCH5_bit        _BIT_ACCESS(PWM2DCH,5)
// PWM2DCH<PWM2DCH6>
extern volatile __bit                   PWM2DCH6            __at(0x30AE);	// @ (0x615 * 8 + 6)
#define                                 PWM2DCH6_bit        _BIT_ACCESS(PWM2DCH,6)
// PWM2DCH<PWM2DCH7>
extern volatile __bit                   PWM2DCH7            __at(0x30AF);	// @ (0x615 * 8 + 7)
#define                                 PWM2DCH7_bit        _BIT_ACCESS(PWM2DCH,7)
// PWM2DCL<PWM2DCL0>
extern volatile __bit                   PWM2DCL0            __at(0x30A6);	// @ (0x614 * 8 + 6)
#define                                 PWM2DCL0_bit        _BIT_ACCESS(PWM2DCL,6)
// PWM2DCL<PWM2DCL1>
extern volatile __bit                   PWM2DCL1            __at(0x30A7);	// @ (0x614 * 8 + 7)
#define                                 PWM2DCL1_bit        _BIT_ACCESS(PWM2DCL,7)
// PWM2CON<PWM2EN>
extern volatile __bit                   PWM2EN              __at(0x30B7);	// @ (0x616 * 8 + 7)
#define                                 PWM2EN_bit          _BIT_ACCESS(PWM2CON,7)
// PWM2CON<PWM2OE>
extern volatile __bit                   PWM2OE              __at(0x30B6);	// @ (0x616 * 8 + 6)
#define                                 PWM2OE_bit          _BIT_ACCESS(PWM2CON,6)
// PWM2CON<PWM2OUT>
extern volatile __bit                   PWM2OUT             __at(0x30B5);	// @ (0x616 * 8 + 5)
#define                                 PWM2OUT_bit         _BIT_ACCESS(PWM2CON,5)
// PWM2CON<PWM2POL>
extern volatile __bit                   PWM2POL             __at(0x30B4);	// @ (0x616 * 8 + 4)
#define                                 PWM2POL_bit         _BIT_ACCESS(PWM2CON,4)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x60);	// @ (0xC * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x61);	// @ (0xC * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x63);	// @ (0xC * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x64);	// @ (0xC * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x70);	// @ (0xE * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x71);	// @ (0xE * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x72);	// @ (0xE * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x73);	// @ (0xE * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x74);	// @ (0xE * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x75);	// @ (0xE * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// SSP1CON2<RCEN>
extern volatile __bit                   RCEN                __at(0x10B3);	// @ (0x216 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSP1CON2,3)
// BAUDCON<RCIDL>
extern volatile __bit                   RCIDL               __at(0xCFE);	// @ (0x19F * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// UCON<RESUME>
extern volatile __bit                   RESUME              __at(0x7472);	// @ (0xE8E * 8 + 2)
#define                                 RESUME_bit          _BIT_ACCESS(UCON,2)
// SSP1CON2<RSEN>
extern volatile __bit                   RSEN                __at(0x10B1);	// @ (0x216 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSP1CON2,1)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// SSP1STAT<R_nW>
extern volatile __bit                   R_nW                __at(0x10A2);	// @ (0x214 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSP1STAT,2)
// SSP1CON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0x10BA);	// @ (0x217 * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSP1CON3,2)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// SSP1CON3<SCIE>
extern volatile __bit                   SCIE                __at(0x10BD);	// @ (0x217 * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSP1CON3,5)
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// SSP1CON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x10BB);	// @ (0x217 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSP1CON3,3)
// APFCON<SDOSEL>
extern volatile __bit                   SDOSEL              __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 SDOSEL_bit          _BIT_ACCESS(APFCON,6)
// UCON<SE0>
extern volatile __bit                   SE0                 __at(0x7475);	// @ (0xE8E * 8 + 5)
#define                                 SE0_bit             _BIT_ACCESS(UCON,5)
// SSP1CON2<SEN>
extern volatile __bit                   SEN                 __at(0x10B0);	// @ (0x216 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSP1CON2,0)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// SSP1STAT<SMP>
extern volatile __bit                   SMP                 __at(0x10A7);	// @ (0x214 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSP1STAT,7)
// UIE<SOFIE>
extern volatile __bit                   SOFIE               __at(0x7496);	// @ (0xE92 * 8 + 6)
#define                                 SOFIE_bit           _BIT_ACCESS(UIE,6)
// UIR<SOFIF>
extern volatile __bit                   SOFIF               __at(0x7486);	// @ (0xE90 * 8 + 6)
#define                                 SOFIF_bit           _BIT_ACCESS(UIR,6)
// OSCSTAT<SOSCR>
extern volatile __bit                   SOSCR               __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 SOSCR_bit           _BIT_ACCESS(OSCSTAT,7)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xCEF);	// @ (0x19D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// OSCCON<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCCON,7)
// OSCCON<SPLLMULT>
extern volatile __bit                   SPLLMULT            __at(0x4CE);	// @ (0x99 * 8 + 6)
#define                                 SPLLMULT_bit        _BIT_ACCESS(OSCCON,6)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// SSP1CON1<SSP1EN>
extern volatile __bit                   SSP1EN              __at(0x10AD);	// @ (0x215 * 8 + 5)
#define                                 SSP1EN_bit          _BIT_ACCESS(SSP1CON1,5)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// SSP1CON1<SSP1M0>
extern volatile __bit                   SSP1M0              __at(0x10A8);	// @ (0x215 * 8 + 0)
#define                                 SSP1M0_bit          _BIT_ACCESS(SSP1CON1,0)
// SSP1CON1<SSP1M1>
extern volatile __bit                   SSP1M1              __at(0x10A9);	// @ (0x215 * 8 + 1)
#define                                 SSP1M1_bit          _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSP1M2>
extern volatile __bit                   SSP1M2              __at(0x10AA);	// @ (0x215 * 8 + 2)
#define                                 SSP1M2_bit          _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSP1M3>
extern volatile __bit                   SSP1M3              __at(0x10AB);	// @ (0x215 * 8 + 3)
#define                                 SSP1M3_bit          _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSP1OV>
extern volatile __bit                   SSP1OV              __at(0x10AE);	// @ (0x215 * 8 + 6)
#define                                 SSP1OV_bit          _BIT_ACCESS(SSP1CON1,6)
// SSP1CON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x10AD);	// @ (0x215 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSP1CON1,5)
// SSP1CON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x10AE);	// @ (0x215 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSP1CON1,6)
// APFCON<SSSEL>
extern volatile __bit                   SSSEL               __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 SSSEL_bit           _BIT_ACCESS(APFCON,5)
// UIE<STALLIE>
extern volatile __bit                   STALLIE             __at(0x7495);	// @ (0xE92 * 8 + 5)
#define                                 STALLIE_bit         _BIT_ACCESS(UIE,5)
// UIR<STALLIF>
extern volatile __bit                   STALLIF             __at(0x7485);	// @ (0xE90 * 8 + 5)
#define                                 STALLIF_bit         _BIT_ACCESS(UIR,5)
// PCON<STKOVF>
extern volatile __bit                   STKOVF              __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON,7)
// PCON<STKUNF>
extern volatile __bit                   STKUNF              __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON,6)
// UCON<SUSPND>
extern volatile __bit                   SUSPND              __at(0x7471);	// @ (0xE8E * 8 + 1)
#define                                 SUSPND_bit          _BIT_ACCESS(UCON,1)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0xCF4);	// @ (0x19E * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA,4)
// OPTION_REG<T0CS>
extern volatile __bit                   T0CS                __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(OPTION_REG,5)
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON,5)
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON,2)
// OPTION_REG<T0SE>
extern volatile __bit                   T0SE                __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 T0SE_bit            _BIT_ACCESS(OPTION_REG,4)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1GCON<T1GGO_nDONE>
extern volatile __bit                   T1GGO_nDONE         __at(0xCB);	// @ (0x19 * 8 + 3)
#define                                 T1GGO_nDONE_bit     _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// APFCON<T1GSEL>
extern volatile __bit                   T1GSEL              __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 T1GSEL_bit          _BIT_ACCESS(APFCON,3)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0xC9);	// @ (0x19 * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0xCA);	// @ (0x19 * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0xE1);	// @ (0x1C * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,3)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0xE4);	// @ (0x1C * 8 + 4)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,4)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0xE5);	// @ (0x1C * 8 + 5)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,5)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0xE6);	// @ (0x1C * 8 + 6)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,6)
// OPTION_REG<TMR0CS>
extern volatile __bit                   TMR0CS              __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 TMR0CS_bit          _BIT_ACCESS(OPTION_REG,5)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// OPTION_REG<TMR0SE>
extern volatile __bit                   TMR0SE              __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 TMR0SE_bit          _BIT_ACCESS(OPTION_REG,4)
// T1CON<TMR1CS0>
extern volatile __bit                   TMR1CS0             __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 TMR1CS0_bit         _BIT_ACCESS(T1CON,6)
// T1CON<TMR1CS1>
extern volatile __bit                   TMR1CS1             __at(0xC7);	// @ (0x18 * 8 + 7)
#define                                 TMR1CS1_bit         _BIT_ACCESS(T1CON,7)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE1<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x48F);	// @ (0x91 * 8 + 7)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE1,7)
// PIR1<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x8F);	// @ (0x11 * 8 + 7)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR1,7)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x488);	// @ (0x91 * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x88);	// @ (0x11 * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x89);	// @ (0x11 * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0xE2);	// @ (0x1C * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// ADCON2<TRIGSEL0>
extern volatile __bit                   TRIGSEL0            __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 TRIGSEL0_bit        _BIT_ACCESS(ADCON2,4)
// ADCON2<TRIGSEL1>
extern volatile __bit                   TRIGSEL1            __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 TRIGSEL1_bit        _BIT_ACCESS(ADCON2,5)
// ADCON2<TRIGSEL2>
extern volatile __bit                   TRIGSEL2            __at(0x4FE);	// @ (0x9F * 8 + 6)
#define                                 TRIGSEL2_bit        _BIT_ACCESS(ADCON2,6)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x472);	// @ (0x8E * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x473);	// @ (0x8E * 8 + 3)
#define                                 TRISC3_bit          _BIT_ACCESS(TRISC,3)
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 TRISC4_bit          _BIT_ACCESS(TRISC,4)
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x475);	// @ (0x8E * 8 + 5)
#define                                 TRISC5_bit          _BIT_ACCESS(TRISC,5)
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0xCF1);	// @ (0x19E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// UIE<TRNIE>
extern volatile __bit                   TRNIE               __at(0x7493);	// @ (0xE92 * 8 + 3)
#define                                 TRNIE_bit           _BIT_ACCESS(UIE,3)
// UIR<TRNIF>
extern volatile __bit                   TRNIF               __at(0x7483);	// @ (0xE90 * 8 + 3)
#define                                 TRNIF_bit           _BIT_ACCESS(UIR,3)
// FVRCON<TSEN>
extern volatile __bit                   TSEN                __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 TSEN_bit            _BIT_ACCESS(FVRCON,5)
// FVRCON<TSRNG>
extern volatile __bit                   TSRNG               __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 TSRNG_bit           _BIT_ACCESS(FVRCON,4)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x4C1);	// @ (0x98 * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x4C3);	// @ (0x98 * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x4C4);	// @ (0x98 * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// OSCTUNE<TUN5>
extern volatile __bit                   TUN5                __at(0x4C5);	// @ (0x98 * 8 + 5)
#define                                 TUN5_bit            _BIT_ACCESS(OSCTUNE,5)
// OSCTUNE<TUN6>
extern volatile __bit                   TUN6                __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 TUN6_bit            _BIT_ACCESS(OSCTUNE,6)
// TXSTA<TX9>
extern volatile __bit                   TX9                 __at(0xCF6);	// @ (0x19E * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9D>
extern volatile __bit                   TX9D                __at(0xCF0);	// @ (0x19E * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXEN>
extern volatile __bit                   TXEN                __at(0xCF5);	// @ (0x19E * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// SSP1STAT<UA>
extern volatile __bit                   UA                  __at(0x10A1);	// @ (0x214 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSP1STAT,1)
// UIE<UERRIE>
extern volatile __bit                   UERRIE              __at(0x7491);	// @ (0xE92 * 8 + 1)
#define                                 UERRIE_bit          _BIT_ACCESS(UIE,1)
// UIR<UERRIF>
extern volatile __bit                   UERRIF              __at(0x7481);	// @ (0xE90 * 8 + 1)
#define                                 UERRIF_bit          _BIT_ACCESS(UIR,1)
// UCFG<UPUEN>
extern volatile __bit                   UPUEN               __at(0x748C);	// @ (0xE91 * 8 + 4)
#define                                 UPUEN_bit           _BIT_ACCESS(UCFG,4)
// UIE<URSTIE>
extern volatile __bit                   URSTIE              __at(0x7490);	// @ (0xE92 * 8 + 0)
#define                                 URSTIE_bit          _BIT_ACCESS(UIE,0)
// UIR<URSTIF>
extern volatile __bit                   URSTIF              __at(0x7480);	// @ (0xE90 * 8 + 0)
#define                                 URSTIF_bit          _BIT_ACCESS(UIR,0)
// UCON<USBEN>
extern volatile __bit                   USBEN               __at(0x7473);	// @ (0xE8E * 8 + 3)
#define                                 USBEN_bit           _BIT_ACCESS(UCON,3)
// PIE2<USBIE>
extern volatile __bit                   USBIE               __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 USBIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<USBIF>
extern volatile __bit                   USBIF               __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 USBIF_bit           _BIT_ACCESS(PIR2,2)
// UCFG<UTEYE>
extern volatile __bit                   UTEYE               __at(0x748F);	// @ (0xE91 * 8 + 7)
#define                                 UTEYE_bit           _BIT_ACCESS(UCFG,7)
// VREGCON<VREGPM0>
extern volatile __bit                   VREGPM0             __at(0xCB8);	// @ (0x197 * 8 + 0)
#define                                 VREGPM0_bit         _BIT_ACCESS(VREGCON,0)
// VREGCON<VREGPM1>
extern volatile __bit                   VREGPM1             __at(0xCB9);	// @ (0x197 * 8 + 1)
#define                                 VREGPM1_bit         _BIT_ACCESS(VREGCON,1)
// SSP1CON1<WCOL>
extern volatile __bit                   WCOL                __at(0x10AF);	// @ (0x215 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSP1CON1,7)
// WDTCON<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0x4B9);	// @ (0x97 * 8 + 1)
#define                                 WDTPS0_bit          _BIT_ACCESS(WDTCON,1)
// WDTCON<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0x4BA);	// @ (0x97 * 8 + 2)
#define                                 WDTPS1_bit          _BIT_ACCESS(WDTCON,2)
// WDTCON<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0x4BB);	// @ (0x97 * 8 + 3)
#define                                 WDTPS2_bit          _BIT_ACCESS(WDTCON,3)
// WDTCON<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0x4BC);	// @ (0x97 * 8 + 4)
#define                                 WDTPS3_bit          _BIT_ACCESS(WDTCON,4)
// WDTCON<WDTPS4>
extern volatile __bit                   WDTPS4              __at(0x4BD);	// @ (0x97 * 8 + 5)
#define                                 WDTPS4_bit          _BIT_ACCESS(WDTCON,5)
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x1063);	// @ (0x20C * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUA,3)
// WPUA<WPUA4>
extern volatile __bit                   WPUA4               __at(0x1064);	// @ (0x20C * 8 + 4)
#define                                 WPUA4_bit           _BIT_ACCESS(WPUA,4)
// WPUA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x1065);	// @ (0x20C * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUA,5)
// PMCON1<WR>
extern volatile __bit                   WR                  __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(PMCON1,1)
// PMCON1<WREN>
extern volatile __bit                   WREN                __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(PMCON1,2)
// PMCON1<WRERR>
extern volatile __bit                   WRERR               __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(PMCON1,3)
// BAUDCON<WUE>
extern volatile __bit                   WUE                 __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// PCON<nRI>
extern volatile __bit                   nRI                 __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 nRI_bit             _BIT_ACCESS(PCON,2)
// PCON<nRMCLR>
extern volatile __bit                   nRMCLR              __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 nRMCLR_bit          _BIT_ACCESS(PCON,3)
// PCON<nRWDT>
extern volatile __bit                   nRWDT               __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 nRWDT_bit           _BIT_ACCESS(PCON,4)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC16F1455_H_
