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

#ifndef _PIC18F84J11_H_
#define _PIC18F84J11_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F84J11
 */
#ifndef _XC_H_
#warning Header file pic18f84j11.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: RCSTA2
#define RCSTA2 RCSTA2
extern volatile unsigned char           RCSTA2              __at(0xF60);
#ifndef _LIB_BUILD
asm("RCSTA2 equ 0F60h");
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
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D2                  :1;
        unsigned OERR2                  :1;
        unsigned FERR2                  :1;
        unsigned ADDEN2                 :1;
        unsigned CREN2                  :1;
        unsigned SREN2                  :1;
        unsigned RX92                   :1;
        unsigned SPEN2                  :1;
    };
    struct {
        unsigned RCD82                  :1;
        unsigned                        :5;
        unsigned RC8_92                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC92                   :1;
    };
} RCSTA2bits_t;
extern volatile RCSTA2bits_t RCSTA2bits __at(0xF60);
// bitfield macros
#define _RCSTA2_RX9D_POSN                                   0x0
#define _RCSTA2_RX9D_POSITION                               0x0
#define _RCSTA2_RX9D_SIZE                                   0x1
#define _RCSTA2_RX9D_LENGTH                                 0x1
#define _RCSTA2_RX9D_MASK                                   0x1
#define _RCSTA2_OERR_POSN                                   0x1
#define _RCSTA2_OERR_POSITION                               0x1
#define _RCSTA2_OERR_SIZE                                   0x1
#define _RCSTA2_OERR_LENGTH                                 0x1
#define _RCSTA2_OERR_MASK                                   0x2
#define _RCSTA2_FERR_POSN                                   0x2
#define _RCSTA2_FERR_POSITION                               0x2
#define _RCSTA2_FERR_SIZE                                   0x1
#define _RCSTA2_FERR_LENGTH                                 0x1
#define _RCSTA2_FERR_MASK                                   0x4
#define _RCSTA2_ADDEN_POSN                                  0x3
#define _RCSTA2_ADDEN_POSITION                              0x3
#define _RCSTA2_ADDEN_SIZE                                  0x1
#define _RCSTA2_ADDEN_LENGTH                                0x1
#define _RCSTA2_ADDEN_MASK                                  0x8
#define _RCSTA2_CREN_POSN                                   0x4
#define _RCSTA2_CREN_POSITION                               0x4
#define _RCSTA2_CREN_SIZE                                   0x1
#define _RCSTA2_CREN_LENGTH                                 0x1
#define _RCSTA2_CREN_MASK                                   0x10
#define _RCSTA2_SREN_POSN                                   0x5
#define _RCSTA2_SREN_POSITION                               0x5
#define _RCSTA2_SREN_SIZE                                   0x1
#define _RCSTA2_SREN_LENGTH                                 0x1
#define _RCSTA2_SREN_MASK                                   0x20
#define _RCSTA2_RX9_POSN                                    0x6
#define _RCSTA2_RX9_POSITION                                0x6
#define _RCSTA2_RX9_SIZE                                    0x1
#define _RCSTA2_RX9_LENGTH                                  0x1
#define _RCSTA2_RX9_MASK                                    0x40
#define _RCSTA2_SPEN_POSN                                   0x7
#define _RCSTA2_SPEN_POSITION                               0x7
#define _RCSTA2_SPEN_SIZE                                   0x1
#define _RCSTA2_SPEN_LENGTH                                 0x1
#define _RCSTA2_SPEN_MASK                                   0x80
#define _RCSTA2_RCD8_POSN                                   0x0
#define _RCSTA2_RCD8_POSITION                               0x0
#define _RCSTA2_RCD8_SIZE                                   0x1
#define _RCSTA2_RCD8_LENGTH                                 0x1
#define _RCSTA2_RCD8_MASK                                   0x1
#define _RCSTA2_RC9_POSN                                    0x6
#define _RCSTA2_RC9_POSITION                                0x6
#define _RCSTA2_RC9_SIZE                                    0x1
#define _RCSTA2_RC9_LENGTH                                  0x1
#define _RCSTA2_RC9_MASK                                    0x40
#define _RCSTA2_NOT_RC8_POSN                                0x6
#define _RCSTA2_NOT_RC8_POSITION                            0x6
#define _RCSTA2_NOT_RC8_SIZE                                0x1
#define _RCSTA2_NOT_RC8_LENGTH                              0x1
#define _RCSTA2_NOT_RC8_MASK                                0x40
#define _RCSTA2_nRC8_POSN                                   0x6
#define _RCSTA2_nRC8_POSITION                               0x6
#define _RCSTA2_nRC8_SIZE                                   0x1
#define _RCSTA2_nRC8_LENGTH                                 0x1
#define _RCSTA2_nRC8_MASK                                   0x40
#define _RCSTA2_RC8_9_POSN                                  0x6
#define _RCSTA2_RC8_9_POSITION                              0x6
#define _RCSTA2_RC8_9_SIZE                                  0x1
#define _RCSTA2_RC8_9_LENGTH                                0x1
#define _RCSTA2_RC8_9_MASK                                  0x40
#define _RCSTA2_RX9D2_POSN                                  0x0
#define _RCSTA2_RX9D2_POSITION                              0x0
#define _RCSTA2_RX9D2_SIZE                                  0x1
#define _RCSTA2_RX9D2_LENGTH                                0x1
#define _RCSTA2_RX9D2_MASK                                  0x1
#define _RCSTA2_OERR2_POSN                                  0x1
#define _RCSTA2_OERR2_POSITION                              0x1
#define _RCSTA2_OERR2_SIZE                                  0x1
#define _RCSTA2_OERR2_LENGTH                                0x1
#define _RCSTA2_OERR2_MASK                                  0x2
#define _RCSTA2_FERR2_POSN                                  0x2
#define _RCSTA2_FERR2_POSITION                              0x2
#define _RCSTA2_FERR2_SIZE                                  0x1
#define _RCSTA2_FERR2_LENGTH                                0x1
#define _RCSTA2_FERR2_MASK                                  0x4
#define _RCSTA2_ADDEN2_POSN                                 0x3
#define _RCSTA2_ADDEN2_POSITION                             0x3
#define _RCSTA2_ADDEN2_SIZE                                 0x1
#define _RCSTA2_ADDEN2_LENGTH                               0x1
#define _RCSTA2_ADDEN2_MASK                                 0x8
#define _RCSTA2_CREN2_POSN                                  0x4
#define _RCSTA2_CREN2_POSITION                              0x4
#define _RCSTA2_CREN2_SIZE                                  0x1
#define _RCSTA2_CREN2_LENGTH                                0x1
#define _RCSTA2_CREN2_MASK                                  0x10
#define _RCSTA2_SREN2_POSN                                  0x5
#define _RCSTA2_SREN2_POSITION                              0x5
#define _RCSTA2_SREN2_SIZE                                  0x1
#define _RCSTA2_SREN2_LENGTH                                0x1
#define _RCSTA2_SREN2_MASK                                  0x20
#define _RCSTA2_RX92_POSN                                   0x6
#define _RCSTA2_RX92_POSITION                               0x6
#define _RCSTA2_RX92_SIZE                                   0x1
#define _RCSTA2_RX92_LENGTH                                 0x1
#define _RCSTA2_RX92_MASK                                   0x40
#define _RCSTA2_SPEN2_POSN                                  0x7
#define _RCSTA2_SPEN2_POSITION                              0x7
#define _RCSTA2_SPEN2_SIZE                                  0x1
#define _RCSTA2_SPEN2_LENGTH                                0x1
#define _RCSTA2_SPEN2_MASK                                  0x80
#define _RCSTA2_RCD82_POSN                                  0x0
#define _RCSTA2_RCD82_POSITION                              0x0
#define _RCSTA2_RCD82_SIZE                                  0x1
#define _RCSTA2_RCD82_LENGTH                                0x1
#define _RCSTA2_RCD82_MASK                                  0x1
#define _RCSTA2_RC8_92_POSN                                 0x6
#define _RCSTA2_RC8_92_POSITION                             0x6
#define _RCSTA2_RC8_92_SIZE                                 0x1
#define _RCSTA2_RC8_92_LENGTH                               0x1
#define _RCSTA2_RC8_92_MASK                                 0x40
#define _RCSTA2_RC92_POSN                                   0x6
#define _RCSTA2_RC92_POSITION                               0x6
#define _RCSTA2_RC92_SIZE                                   0x1
#define _RCSTA2_RC92_LENGTH                                 0x1
#define _RCSTA2_RC92_MASK                                   0x40

// Register: TXSTA2
#define TXSTA2 TXSTA2
extern volatile unsigned char           TXSTA2              __at(0xF61);
#ifndef _LIB_BUILD
asm("TXSTA2 equ 0F61h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned                        :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned TX9D2                  :1;
        unsigned TRMT2                  :1;
        unsigned BRGH2                  :1;
        unsigned SENDB2                 :1;
        unsigned SYNC2                  :1;
        unsigned TXEN2                  :1;
        unsigned TX92                   :1;
        unsigned CSRC2                  :1;
    };
    struct {
        unsigned TXD82                  :1;
        unsigned                        :5;
        unsigned TX8_92                 :1;
    };
} TXSTA2bits_t;
extern volatile TXSTA2bits_t TXSTA2bits __at(0xF61);
// bitfield macros
#define _TXSTA2_TX9D_POSN                                   0x0
#define _TXSTA2_TX9D_POSITION                               0x0
#define _TXSTA2_TX9D_SIZE                                   0x1
#define _TXSTA2_TX9D_LENGTH                                 0x1
#define _TXSTA2_TX9D_MASK                                   0x1
#define _TXSTA2_TRMT_POSN                                   0x1
#define _TXSTA2_TRMT_POSITION                               0x1
#define _TXSTA2_TRMT_SIZE                                   0x1
#define _TXSTA2_TRMT_LENGTH                                 0x1
#define _TXSTA2_TRMT_MASK                                   0x2
#define _TXSTA2_BRGH_POSN                                   0x2
#define _TXSTA2_BRGH_POSITION                               0x2
#define _TXSTA2_BRGH_SIZE                                   0x1
#define _TXSTA2_BRGH_LENGTH                                 0x1
#define _TXSTA2_BRGH_MASK                                   0x4
#define _TXSTA2_SYNC_POSN                                   0x4
#define _TXSTA2_SYNC_POSITION                               0x4
#define _TXSTA2_SYNC_SIZE                                   0x1
#define _TXSTA2_SYNC_LENGTH                                 0x1
#define _TXSTA2_SYNC_MASK                                   0x10
#define _TXSTA2_TXEN_POSN                                   0x5
#define _TXSTA2_TXEN_POSITION                               0x5
#define _TXSTA2_TXEN_SIZE                                   0x1
#define _TXSTA2_TXEN_LENGTH                                 0x1
#define _TXSTA2_TXEN_MASK                                   0x20
#define _TXSTA2_TX9_POSN                                    0x6
#define _TXSTA2_TX9_POSITION                                0x6
#define _TXSTA2_TX9_SIZE                                    0x1
#define _TXSTA2_TX9_LENGTH                                  0x1
#define _TXSTA2_TX9_MASK                                    0x40
#define _TXSTA2_CSRC_POSN                                   0x7
#define _TXSTA2_CSRC_POSITION                               0x7
#define _TXSTA2_CSRC_SIZE                                   0x1
#define _TXSTA2_CSRC_LENGTH                                 0x1
#define _TXSTA2_CSRC_MASK                                   0x80
#define _TXSTA2_TXD8_POSN                                   0x0
#define _TXSTA2_TXD8_POSITION                               0x0
#define _TXSTA2_TXD8_SIZE                                   0x1
#define _TXSTA2_TXD8_LENGTH                                 0x1
#define _TXSTA2_TXD8_MASK                                   0x1
#define _TXSTA2_TX8_9_POSN                                  0x6
#define _TXSTA2_TX8_9_POSITION                              0x6
#define _TXSTA2_TX8_9_SIZE                                  0x1
#define _TXSTA2_TX8_9_LENGTH                                0x1
#define _TXSTA2_TX8_9_MASK                                  0x40
#define _TXSTA2_NOT_TX8_POSN                                0x6
#define _TXSTA2_NOT_TX8_POSITION                            0x6
#define _TXSTA2_NOT_TX8_SIZE                                0x1
#define _TXSTA2_NOT_TX8_LENGTH                              0x1
#define _TXSTA2_NOT_TX8_MASK                                0x40
#define _TXSTA2_nTX8_POSN                                   0x6
#define _TXSTA2_nTX8_POSITION                               0x6
#define _TXSTA2_nTX8_SIZE                                   0x1
#define _TXSTA2_nTX8_LENGTH                                 0x1
#define _TXSTA2_nTX8_MASK                                   0x40
#define _TXSTA2_TX9D2_POSN                                  0x0
#define _TXSTA2_TX9D2_POSITION                              0x0
#define _TXSTA2_TX9D2_SIZE                                  0x1
#define _TXSTA2_TX9D2_LENGTH                                0x1
#define _TXSTA2_TX9D2_MASK                                  0x1
#define _TXSTA2_TRMT2_POSN                                  0x1
#define _TXSTA2_TRMT2_POSITION                              0x1
#define _TXSTA2_TRMT2_SIZE                                  0x1
#define _TXSTA2_TRMT2_LENGTH                                0x1
#define _TXSTA2_TRMT2_MASK                                  0x2
#define _TXSTA2_BRGH2_POSN                                  0x2
#define _TXSTA2_BRGH2_POSITION                              0x2
#define _TXSTA2_BRGH2_SIZE                                  0x1
#define _TXSTA2_BRGH2_LENGTH                                0x1
#define _TXSTA2_BRGH2_MASK                                  0x4
#define _TXSTA2_SENDB2_POSN                                 0x3
#define _TXSTA2_SENDB2_POSITION                             0x3
#define _TXSTA2_SENDB2_SIZE                                 0x1
#define _TXSTA2_SENDB2_LENGTH                               0x1
#define _TXSTA2_SENDB2_MASK                                 0x8
#define _TXSTA2_SYNC2_POSN                                  0x4
#define _TXSTA2_SYNC2_POSITION                              0x4
#define _TXSTA2_SYNC2_SIZE                                  0x1
#define _TXSTA2_SYNC2_LENGTH                                0x1
#define _TXSTA2_SYNC2_MASK                                  0x10
#define _TXSTA2_TXEN2_POSN                                  0x5
#define _TXSTA2_TXEN2_POSITION                              0x5
#define _TXSTA2_TXEN2_SIZE                                  0x1
#define _TXSTA2_TXEN2_LENGTH                                0x1
#define _TXSTA2_TXEN2_MASK                                  0x20
#define _TXSTA2_TX92_POSN                                   0x6
#define _TXSTA2_TX92_POSITION                               0x6
#define _TXSTA2_TX92_SIZE                                   0x1
#define _TXSTA2_TX92_LENGTH                                 0x1
#define _TXSTA2_TX92_MASK                                   0x40
#define _TXSTA2_CSRC2_POSN                                  0x7
#define _TXSTA2_CSRC2_POSITION                              0x7
#define _TXSTA2_CSRC2_SIZE                                  0x1
#define _TXSTA2_CSRC2_LENGTH                                0x1
#define _TXSTA2_CSRC2_MASK                                  0x80
#define _TXSTA2_TXD82_POSN                                  0x0
#define _TXSTA2_TXD82_POSITION                              0x0
#define _TXSTA2_TXD82_SIZE                                  0x1
#define _TXSTA2_TXD82_LENGTH                                0x1
#define _TXSTA2_TXD82_MASK                                  0x1
#define _TXSTA2_TX8_92_POSN                                 0x6
#define _TXSTA2_TX8_92_POSITION                             0x6
#define _TXSTA2_TX8_92_SIZE                                 0x1
#define _TXSTA2_TX8_92_LENGTH                               0x1
#define _TXSTA2_TX8_92_MASK                                 0x40

// Register: TXREG2
#define TXREG2 TXREG2
extern volatile unsigned char           TXREG2              __at(0xF62);
#ifndef _LIB_BUILD
asm("TXREG2 equ 0F62h");
#endif

// Register: RCREG2
#define RCREG2 RCREG2
extern volatile unsigned char           RCREG2              __at(0xF63);
#ifndef _LIB_BUILD
asm("RCREG2 equ 0F63h");
#endif

// Register: SPBRG2
#define SPBRG2 SPBRG2
extern volatile unsigned char           SPBRG2              __at(0xF64);
#ifndef _LIB_BUILD
asm("SPBRG2 equ 0F64h");
#endif

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0xF65);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0F65h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned DCCP2Y                 :1;
        unsigned DCCP2X                 :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0xF65);
// bitfield macros
#define _CCP2CON_CCP2M_POSN                                 0x0
#define _CCP2CON_CCP2M_POSITION                             0x0
#define _CCP2CON_CCP2M_SIZE                                 0x4
#define _CCP2CON_CCP2M_LENGTH                               0x4
#define _CCP2CON_CCP2M_MASK                                 0xF
#define _CCP2CON_DC2B_POSN                                  0x4
#define _CCP2CON_DC2B_POSITION                              0x4
#define _CCP2CON_DC2B_SIZE                                  0x2
#define _CCP2CON_DC2B_LENGTH                                0x2
#define _CCP2CON_DC2B_MASK                                  0x30
#define _CCP2CON_CCP2M0_POSN                                0x0
#define _CCP2CON_CCP2M0_POSITION                            0x0
#define _CCP2CON_CCP2M0_SIZE                                0x1
#define _CCP2CON_CCP2M0_LENGTH                              0x1
#define _CCP2CON_CCP2M0_MASK                                0x1
#define _CCP2CON_CCP2M1_POSN                                0x1
#define _CCP2CON_CCP2M1_POSITION                            0x1
#define _CCP2CON_CCP2M1_SIZE                                0x1
#define _CCP2CON_CCP2M1_LENGTH                              0x1
#define _CCP2CON_CCP2M1_MASK                                0x2
#define _CCP2CON_CCP2M2_POSN                                0x2
#define _CCP2CON_CCP2M2_POSITION                            0x2
#define _CCP2CON_CCP2M2_SIZE                                0x1
#define _CCP2CON_CCP2M2_LENGTH                              0x1
#define _CCP2CON_CCP2M2_MASK                                0x4
#define _CCP2CON_CCP2M3_POSN                                0x3
#define _CCP2CON_CCP2M3_POSITION                            0x3
#define _CCP2CON_CCP2M3_SIZE                                0x1
#define _CCP2CON_CCP2M3_LENGTH                              0x1
#define _CCP2CON_CCP2M3_MASK                                0x8
#define _CCP2CON_DC2B0_POSN                                 0x4
#define _CCP2CON_DC2B0_POSITION                             0x4
#define _CCP2CON_DC2B0_SIZE                                 0x1
#define _CCP2CON_DC2B0_LENGTH                               0x1
#define _CCP2CON_DC2B0_MASK                                 0x10
#define _CCP2CON_DC2B1_POSN                                 0x5
#define _CCP2CON_DC2B1_POSITION                             0x5
#define _CCP2CON_DC2B1_SIZE                                 0x1
#define _CCP2CON_DC2B1_LENGTH                               0x1
#define _CCP2CON_DC2B1_MASK                                 0x20
#define _CCP2CON_DCCP2Y_POSN                                0x4
#define _CCP2CON_DCCP2Y_POSITION                            0x4
#define _CCP2CON_DCCP2Y_SIZE                                0x1
#define _CCP2CON_DCCP2Y_LENGTH                              0x1
#define _CCP2CON_DCCP2Y_MASK                                0x10
#define _CCP2CON_DCCP2X_POSN                                0x5
#define _CCP2CON_DCCP2X_POSITION                            0x5
#define _CCP2CON_DCCP2X_SIZE                                0x1
#define _CCP2CON_DCCP2X_LENGTH                              0x1
#define _CCP2CON_DCCP2X_MASK                                0x20

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0xF66);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0F66h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0xF66);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0F66h");
#endif

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0xF67);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0F67h");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0xF68);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0F68h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned DCCP1Y                 :1;
        unsigned DCCP1X                 :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0xF68);
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DC1B_POSN                                  0x4
#define _CCP1CON_DC1B_POSITION                              0x4
#define _CCP1CON_DC1B_SIZE                                  0x2
#define _CCP1CON_DC1B_LENGTH                                0x2
#define _CCP1CON_DC1B_MASK                                  0x30
#define _CCP1CON_CCP1M0_POSN                                0x0
#define _CCP1CON_CCP1M0_POSITION                            0x0
#define _CCP1CON_CCP1M0_SIZE                                0x1
#define _CCP1CON_CCP1M0_LENGTH                              0x1
#define _CCP1CON_CCP1M0_MASK                                0x1
#define _CCP1CON_CCP1M1_POSN                                0x1
#define _CCP1CON_CCP1M1_POSITION                            0x1
#define _CCP1CON_CCP1M1_SIZE                                0x1
#define _CCP1CON_CCP1M1_LENGTH                              0x1
#define _CCP1CON_CCP1M1_MASK                                0x2
#define _CCP1CON_CCP1M2_POSN                                0x2
#define _CCP1CON_CCP1M2_POSITION                            0x2
#define _CCP1CON_CCP1M2_SIZE                                0x1
#define _CCP1CON_CCP1M2_LENGTH                              0x1
#define _CCP1CON_CCP1M2_MASK                                0x4
#define _CCP1CON_CCP1M3_POSN                                0x3
#define _CCP1CON_CCP1M3_POSITION                            0x3
#define _CCP1CON_CCP1M3_SIZE                                0x1
#define _CCP1CON_CCP1M3_LENGTH                              0x1
#define _CCP1CON_CCP1M3_MASK                                0x8
#define _CCP1CON_DC1B0_POSN                                 0x4
#define _CCP1CON_DC1B0_POSITION                             0x4
#define _CCP1CON_DC1B0_SIZE                                 0x1
#define _CCP1CON_DC1B0_LENGTH                               0x1
#define _CCP1CON_DC1B0_MASK                                 0x10
#define _CCP1CON_DC1B1_POSN                                 0x5
#define _CCP1CON_DC1B1_POSITION                             0x5
#define _CCP1CON_DC1B1_SIZE                                 0x1
#define _CCP1CON_DC1B1_LENGTH                               0x1
#define _CCP1CON_DC1B1_MASK                                 0x20
#define _CCP1CON_DCCP1Y_POSN                                0x4
#define _CCP1CON_DCCP1Y_POSITION                            0x4
#define _CCP1CON_DCCP1Y_SIZE                                0x1
#define _CCP1CON_DCCP1Y_LENGTH                              0x1
#define _CCP1CON_DCCP1Y_MASK                                0x10
#define _CCP1CON_DCCP1X_POSN                                0x5
#define _CCP1CON_DCCP1X_POSITION                            0x5
#define _CCP1CON_DCCP1X_SIZE                                0x1
#define _CCP1CON_DCCP1X_LENGTH                              0x1
#define _CCP1CON_DCCP1X_MASK                                0x20

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0xF69);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0F69h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0xF69);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0F69h");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0xF6A);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0F6Ah");
#endif

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
extern volatile unsigned char           BAUDCON1            __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
    };
} BAUDCON1bits_t;
extern volatile BAUDCON1bits_t BAUDCON1bits __at(0xF7E);
// bitfield macros
#define _BAUDCON1_ABDEN_POSN                                0x0
#define _BAUDCON1_ABDEN_POSITION                            0x0
#define _BAUDCON1_ABDEN_SIZE                                0x1
#define _BAUDCON1_ABDEN_LENGTH                              0x1
#define _BAUDCON1_ABDEN_MASK                                0x1
#define _BAUDCON1_WUE_POSN                                  0x1
#define _BAUDCON1_WUE_POSITION                              0x1
#define _BAUDCON1_WUE_SIZE                                  0x1
#define _BAUDCON1_WUE_LENGTH                                0x1
#define _BAUDCON1_WUE_MASK                                  0x2
#define _BAUDCON1_BRG16_POSN                                0x3
#define _BAUDCON1_BRG16_POSITION                            0x3
#define _BAUDCON1_BRG16_SIZE                                0x1
#define _BAUDCON1_BRG16_LENGTH                              0x1
#define _BAUDCON1_BRG16_MASK                                0x8
#define _BAUDCON1_TXCKP_POSN                                0x4
#define _BAUDCON1_TXCKP_POSITION                            0x4
#define _BAUDCON1_TXCKP_SIZE                                0x1
#define _BAUDCON1_TXCKP_LENGTH                              0x1
#define _BAUDCON1_TXCKP_MASK                                0x10
#define _BAUDCON1_RXDTP_POSN                                0x5
#define _BAUDCON1_RXDTP_POSITION                            0x5
#define _BAUDCON1_RXDTP_SIZE                                0x1
#define _BAUDCON1_RXDTP_LENGTH                              0x1
#define _BAUDCON1_RXDTP_MASK                                0x20
#define _BAUDCON1_RCIDL_POSN                                0x6
#define _BAUDCON1_RCIDL_POSITION                            0x6
#define _BAUDCON1_RCIDL_SIZE                                0x1
#define _BAUDCON1_RCIDL_LENGTH                              0x1
#define _BAUDCON1_RCIDL_MASK                                0x40
#define _BAUDCON1_ABDOVF_POSN                               0x7
#define _BAUDCON1_ABDOVF_POSITION                           0x7
#define _BAUDCON1_ABDOVF_SIZE                               0x1
#define _BAUDCON1_ABDOVF_LENGTH                             0x1
#define _BAUDCON1_ABDOVF_MASK                               0x80
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
#define _BAUDCON1_RCMT_POSN                                 0x6
#define _BAUDCON1_RCMT_POSITION                             0x6
#define _BAUDCON1_RCMT_SIZE                                 0x1
#define _BAUDCON1_RCMT_LENGTH                               0x1
#define _BAUDCON1_RCMT_MASK                                 0x40
#define _BAUDCON1_ABDEN1_POSN                               0x0
#define _BAUDCON1_ABDEN1_POSITION                           0x0
#define _BAUDCON1_ABDEN1_SIZE                               0x1
#define _BAUDCON1_ABDEN1_LENGTH                             0x1
#define _BAUDCON1_ABDEN1_MASK                               0x1
#define _BAUDCON1_WUE1_POSN                                 0x1
#define _BAUDCON1_WUE1_POSITION                             0x1
#define _BAUDCON1_WUE1_SIZE                                 0x1
#define _BAUDCON1_WUE1_LENGTH                               0x1
#define _BAUDCON1_WUE1_MASK                                 0x2
#define _BAUDCON1_BRG161_POSN                               0x3
#define _BAUDCON1_BRG161_POSITION                           0x3
#define _BAUDCON1_BRG161_SIZE                               0x1
#define _BAUDCON1_BRG161_LENGTH                             0x1
#define _BAUDCON1_BRG161_MASK                               0x8
#define _BAUDCON1_CKTXP_POSN                                0x4
#define _BAUDCON1_CKTXP_POSITION                            0x4
#define _BAUDCON1_CKTXP_SIZE                                0x1
#define _BAUDCON1_CKTXP_LENGTH                              0x1
#define _BAUDCON1_CKTXP_MASK                                0x10
#define _BAUDCON1_DTRXP_POSN                                0x5
#define _BAUDCON1_DTRXP_POSITION                            0x5
#define _BAUDCON1_DTRXP_SIZE                                0x1
#define _BAUDCON1_DTRXP_LENGTH                              0x1
#define _BAUDCON1_DTRXP_MASK                                0x20
#define _BAUDCON1_RCIDL1_POSN                               0x6
#define _BAUDCON1_RCIDL1_POSITION                           0x6
#define _BAUDCON1_RCIDL1_SIZE                               0x1
#define _BAUDCON1_RCIDL1_LENGTH                             0x1
#define _BAUDCON1_RCIDL1_MASK                               0x40
#define _BAUDCON1_ABDOVF1_POSN                              0x7
#define _BAUDCON1_ABDOVF1_POSITION                          0x7
#define _BAUDCON1_ABDOVF1_SIZE                              0x1
#define _BAUDCON1_ABDOVF1_LENGTH                            0x1
#define _BAUDCON1_ABDOVF1_MASK                              0x80
#define _BAUDCON1_SCKP1_POSN                                0x4
#define _BAUDCON1_SCKP1_POSITION                            0x4
#define _BAUDCON1_SCKP1_SIZE                                0x1
#define _BAUDCON1_SCKP1_LENGTH                              0x1
#define _BAUDCON1_SCKP1_MASK                                0x10
#define _BAUDCON1_DTRXP1_POSN                               0x5
#define _BAUDCON1_DTRXP1_POSITION                           0x5
#define _BAUDCON1_DTRXP1_SIZE                               0x1
#define _BAUDCON1_DTRXP1_LENGTH                             0x1
#define _BAUDCON1_DTRXP1_MASK                               0x20
#define _BAUDCON1_RCMT1_POSN                                0x6
#define _BAUDCON1_RCMT1_POSITION                            0x6
#define _BAUDCON1_RCMT1_SIZE                                0x1
#define _BAUDCON1_RCMT1_LENGTH                              0x1
#define _BAUDCON1_RCMT1_MASK                                0x40
#define _BAUDCON1_TXCKP1_POSN                               0x4
#define _BAUDCON1_TXCKP1_POSITION                           0x4
#define _BAUDCON1_TXCKP1_SIZE                               0x1
#define _BAUDCON1_TXCKP1_LENGTH                             0x1
#define _BAUDCON1_TXCKP1_MASK                               0x10
#define _BAUDCON1_RXDTP1_POSN                               0x5
#define _BAUDCON1_RXDTP1_POSITION                           0x5
#define _BAUDCON1_RXDTP1_SIZE                               0x1
#define _BAUDCON1_RXDTP1_LENGTH                             0x1
#define _BAUDCON1_RXDTP1_MASK                               0x20

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
extern volatile unsigned char           SPBRGH1             __at(0xF7F);
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 0F7Fh");
#endif

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0xF80);
#ifndef _LIB_BUILD
asm("PORTA equ 0F80h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned T0CKI                  :1;
        unsigned AN4                    :1;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
        unsigned                        :2;
        unsigned CLKO                   :1;
        unsigned CLKI                   :1;
    };
    struct {
        unsigned ULPWUIN                :1;
        unsigned                        :4;
        unsigned LVDIN                  :1;
        unsigned                        :1;
        unsigned RJPU                   :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0xF80);
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
#define _PORTA_RA2_POSN                                     0x2
#define _PORTA_RA2_POSITION                                 0x2
#define _PORTA_RA2_SIZE                                     0x1
#define _PORTA_RA2_LENGTH                                   0x1
#define _PORTA_RA2_MASK                                     0x4
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
#define _PORTA_RA6_POSN                                     0x6
#define _PORTA_RA6_POSITION                                 0x6
#define _PORTA_RA6_SIZE                                     0x1
#define _PORTA_RA6_LENGTH                                   0x1
#define _PORTA_RA6_MASK                                     0x40
#define _PORTA_RA7_POSN                                     0x7
#define _PORTA_RA7_POSITION                                 0x7
#define _PORTA_RA7_SIZE                                     0x1
#define _PORTA_RA7_LENGTH                                   0x1
#define _PORTA_RA7_MASK                                     0x80
#define _PORTA_AN0_POSN                                     0x0
#define _PORTA_AN0_POSITION                                 0x0
#define _PORTA_AN0_SIZE                                     0x1
#define _PORTA_AN0_LENGTH                                   0x1
#define _PORTA_AN0_MASK                                     0x1
#define _PORTA_AN1_POSN                                     0x1
#define _PORTA_AN1_POSITION                                 0x1
#define _PORTA_AN1_SIZE                                     0x1
#define _PORTA_AN1_LENGTH                                   0x1
#define _PORTA_AN1_MASK                                     0x2
#define _PORTA_AN2_POSN                                     0x2
#define _PORTA_AN2_POSITION                                 0x2
#define _PORTA_AN2_SIZE                                     0x1
#define _PORTA_AN2_LENGTH                                   0x1
#define _PORTA_AN2_MASK                                     0x4
#define _PORTA_AN3_POSN                                     0x3
#define _PORTA_AN3_POSITION                                 0x3
#define _PORTA_AN3_SIZE                                     0x1
#define _PORTA_AN3_LENGTH                                   0x1
#define _PORTA_AN3_MASK                                     0x8
#define _PORTA_T0CKI_POSN                                   0x4
#define _PORTA_T0CKI_POSITION                               0x4
#define _PORTA_T0CKI_SIZE                                   0x1
#define _PORTA_T0CKI_LENGTH                                 0x1
#define _PORTA_T0CKI_MASK                                   0x10
#define _PORTA_AN4_POSN                                     0x5
#define _PORTA_AN4_POSITION                                 0x5
#define _PORTA_AN4_SIZE                                     0x1
#define _PORTA_AN4_LENGTH                                   0x1
#define _PORTA_AN4_MASK                                     0x20
#define _PORTA_OSC2_POSN                                    0x6
#define _PORTA_OSC2_POSITION                                0x6
#define _PORTA_OSC2_SIZE                                    0x1
#define _PORTA_OSC2_LENGTH                                  0x1
#define _PORTA_OSC2_MASK                                    0x40
#define _PORTA_OSC1_POSN                                    0x7
#define _PORTA_OSC1_POSITION                                0x7
#define _PORTA_OSC1_SIZE                                    0x1
#define _PORTA_OSC1_LENGTH                                  0x1
#define _PORTA_OSC1_MASK                                    0x80
#define _PORTA_VREFM_POSN                                   0x2
#define _PORTA_VREFM_POSITION                               0x2
#define _PORTA_VREFM_SIZE                                   0x1
#define _PORTA_VREFM_LENGTH                                 0x1
#define _PORTA_VREFM_MASK                                   0x4
#define _PORTA_VREFP_POSN                                   0x3
#define _PORTA_VREFP_POSITION                               0x3
#define _PORTA_VREFP_SIZE                                   0x1
#define _PORTA_VREFP_LENGTH                                 0x1
#define _PORTA_VREFP_MASK                                   0x8
#define _PORTA_CLKO_POSN                                    0x6
#define _PORTA_CLKO_POSITION                                0x6
#define _PORTA_CLKO_SIZE                                    0x1
#define _PORTA_CLKO_LENGTH                                  0x1
#define _PORTA_CLKO_MASK                                    0x40
#define _PORTA_CLKI_POSN                                    0x7
#define _PORTA_CLKI_POSITION                                0x7
#define _PORTA_CLKI_SIZE                                    0x1
#define _PORTA_CLKI_LENGTH                                  0x1
#define _PORTA_CLKI_MASK                                    0x80
#define _PORTA_ULPWUIN_POSN                                 0x0
#define _PORTA_ULPWUIN_POSITION                             0x0
#define _PORTA_ULPWUIN_SIZE                                 0x1
#define _PORTA_ULPWUIN_LENGTH                               0x1
#define _PORTA_ULPWUIN_MASK                                 0x1
#define _PORTA_LVDIN_POSN                                   0x5
#define _PORTA_LVDIN_POSITION                               0x5
#define _PORTA_LVDIN_SIZE                                   0x1
#define _PORTA_LVDIN_LENGTH                                 0x1
#define _PORTA_LVDIN_MASK                                   0x20
#define _PORTA_RJPU_POSN                                    0x7
#define _PORTA_RJPU_POSITION                                0x7
#define _PORTA_RJPU_SIZE                                    0x1
#define _PORTA_RJPU_LENGTH                                  0x1
#define _PORTA_RJPU_MASK                                    0x80

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0xF81);
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
    struct {
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned INT3                   :1;
        unsigned KBI0                   :1;
        unsigned KBI1                   :1;
        unsigned KBI2                   :1;
        unsigned KBI3                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2                   :1;
        unsigned                        :2;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2_PA2               :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0xF81);
// bitfield macros
#define _PORTB_RB0_POSN                                     0x0
#define _PORTB_RB0_POSITION                                 0x0
#define _PORTB_RB0_SIZE                                     0x1
#define _PORTB_RB0_LENGTH                                   0x1
#define _PORTB_RB0_MASK                                     0x1
#define _PORTB_RB1_POSN                                     0x1
#define _PORTB_RB1_POSITION                                 0x1
#define _PORTB_RB1_SIZE                                     0x1
#define _PORTB_RB1_LENGTH                                   0x1
#define _PORTB_RB1_MASK                                     0x2
#define _PORTB_RB2_POSN                                     0x2
#define _PORTB_RB2_POSITION                                 0x2
#define _PORTB_RB2_SIZE                                     0x1
#define _PORTB_RB2_LENGTH                                   0x1
#define _PORTB_RB2_MASK                                     0x4
#define _PORTB_RB3_POSN                                     0x3
#define _PORTB_RB3_POSITION                                 0x3
#define _PORTB_RB3_SIZE                                     0x1
#define _PORTB_RB3_LENGTH                                   0x1
#define _PORTB_RB3_MASK                                     0x8
#define _PORTB_RB4_POSN                                     0x4
#define _PORTB_RB4_POSITION                                 0x4
#define _PORTB_RB4_SIZE                                     0x1
#define _PORTB_RB4_LENGTH                                   0x1
#define _PORTB_RB4_MASK                                     0x10
#define _PORTB_RB5_POSN                                     0x5
#define _PORTB_RB5_POSITION                                 0x5
#define _PORTB_RB5_SIZE                                     0x1
#define _PORTB_RB5_LENGTH                                   0x1
#define _PORTB_RB5_MASK                                     0x20
#define _PORTB_RB6_POSN                                     0x6
#define _PORTB_RB6_POSITION                                 0x6
#define _PORTB_RB6_SIZE                                     0x1
#define _PORTB_RB6_LENGTH                                   0x1
#define _PORTB_RB6_MASK                                     0x40
#define _PORTB_RB7_POSN                                     0x7
#define _PORTB_RB7_POSITION                                 0x7
#define _PORTB_RB7_SIZE                                     0x1
#define _PORTB_RB7_LENGTH                                   0x1
#define _PORTB_RB7_MASK                                     0x80
#define _PORTB_INT0_POSN                                    0x0
#define _PORTB_INT0_POSITION                                0x0
#define _PORTB_INT0_SIZE                                    0x1
#define _PORTB_INT0_LENGTH                                  0x1
#define _PORTB_INT0_MASK                                    0x1
#define _PORTB_INT1_POSN                                    0x1
#define _PORTB_INT1_POSITION                                0x1
#define _PORTB_INT1_SIZE                                    0x1
#define _PORTB_INT1_LENGTH                                  0x1
#define _PORTB_INT1_MASK                                    0x2
#define _PORTB_INT2_POSN                                    0x2
#define _PORTB_INT2_POSITION                                0x2
#define _PORTB_INT2_SIZE                                    0x1
#define _PORTB_INT2_LENGTH                                  0x1
#define _PORTB_INT2_MASK                                    0x4
#define _PORTB_INT3_POSN                                    0x3
#define _PORTB_INT3_POSITION                                0x3
#define _PORTB_INT3_SIZE                                    0x1
#define _PORTB_INT3_LENGTH                                  0x1
#define _PORTB_INT3_MASK                                    0x8
#define _PORTB_KBI0_POSN                                    0x4
#define _PORTB_KBI0_POSITION                                0x4
#define _PORTB_KBI0_SIZE                                    0x1
#define _PORTB_KBI0_LENGTH                                  0x1
#define _PORTB_KBI0_MASK                                    0x10
#define _PORTB_KBI1_POSN                                    0x5
#define _PORTB_KBI1_POSITION                                0x5
#define _PORTB_KBI1_SIZE                                    0x1
#define _PORTB_KBI1_LENGTH                                  0x1
#define _PORTB_KBI1_MASK                                    0x20
#define _PORTB_KBI2_POSN                                    0x6
#define _PORTB_KBI2_POSITION                                0x6
#define _PORTB_KBI2_SIZE                                    0x1
#define _PORTB_KBI2_LENGTH                                  0x1
#define _PORTB_KBI2_MASK                                    0x40
#define _PORTB_KBI3_POSN                                    0x7
#define _PORTB_KBI3_POSITION                                0x7
#define _PORTB_KBI3_SIZE                                    0x1
#define _PORTB_KBI3_LENGTH                                  0x1
#define _PORTB_KBI3_MASK                                    0x80
#define _PORTB_CCP2_POSN                                    0x3
#define _PORTB_CCP2_POSITION                                0x3
#define _PORTB_CCP2_SIZE                                    0x1
#define _PORTB_CCP2_LENGTH                                  0x1
#define _PORTB_CCP2_MASK                                    0x8
#define _PORTB_PGC_POSN                                     0x6
#define _PORTB_PGC_POSITION                                 0x6
#define _PORTB_PGC_SIZE                                     0x1
#define _PORTB_PGC_LENGTH                                   0x1
#define _PORTB_PGC_MASK                                     0x40
#define _PORTB_PGD_POSN                                     0x7
#define _PORTB_PGD_POSITION                                 0x7
#define _PORTB_PGD_SIZE                                     0x1
#define _PORTB_PGD_LENGTH                                   0x1
#define _PORTB_PGD_MASK                                     0x80
#define _PORTB_CCP2_PA2_POSN                                0x3
#define _PORTB_CCP2_PA2_POSITION                            0x3
#define _PORTB_CCP2_PA2_SIZE                                0x1
#define _PORTB_CCP2_PA2_LENGTH                              0x1
#define _PORTB_CCP2_PA2_MASK                                0x8

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0xF82);
#ifndef _LIB_BUILD
asm("PORTC equ 0F82h");
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
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned                        :1;
        unsigned SCL                    :1;
        unsigned SDA                    :1;
        unsigned                        :1;
        unsigned CK1                    :1;
        unsigned DT1                    :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned CCP2                   :1;
        unsigned CCP1                   :1;
        unsigned SCK                    :1;
        unsigned SDI                    :1;
        unsigned SDO                    :1;
        unsigned TX1                    :1;
        unsigned RX1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned _PA2                    :1;  // Note: Changed by MikroE
        unsigned _PA1                    :1;  // Note: Changed by MikroE
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0xF82);
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
#define _PORTC_RC6_POSN                                     0x6
#define _PORTC_RC6_POSITION                                 0x6
#define _PORTC_RC6_SIZE                                     0x1
#define _PORTC_RC6_LENGTH                                   0x1
#define _PORTC_RC6_MASK                                     0x40
#define _PORTC_RC7_POSN                                     0x7
#define _PORTC_RC7_POSITION                                 0x7
#define _PORTC_RC7_SIZE                                     0x1
#define _PORTC_RC7_LENGTH                                   0x1
#define _PORTC_RC7_MASK                                     0x80
#define _PORTC_T1OSO_POSN                                   0x0
#define _PORTC_T1OSO_POSITION                               0x0
#define _PORTC_T1OSO_SIZE                                   0x1
#define _PORTC_T1OSO_LENGTH                                 0x1
#define _PORTC_T1OSO_MASK                                   0x1
#define _PORTC_T1OSI_POSN                                   0x1
#define _PORTC_T1OSI_POSITION                               0x1
#define _PORTC_T1OSI_SIZE                                   0x1
#define _PORTC_T1OSI_LENGTH                                 0x1
#define _PORTC_T1OSI_MASK                                   0x2
#define _PORTC_SCL_POSN                                     0x3
#define _PORTC_SCL_POSITION                                 0x3
#define _PORTC_SCL_SIZE                                     0x1
#define _PORTC_SCL_LENGTH                                   0x1
#define _PORTC_SCL_MASK                                     0x8
#define _PORTC_SDA_POSN                                     0x4
#define _PORTC_SDA_POSITION                                 0x4
#define _PORTC_SDA_SIZE                                     0x1
#define _PORTC_SDA_LENGTH                                   0x1
#define _PORTC_SDA_MASK                                     0x10
#define _PORTC_CK1_POSN                                     0x6
#define _PORTC_CK1_POSITION                                 0x6
#define _PORTC_CK1_SIZE                                     0x1
#define _PORTC_CK1_LENGTH                                   0x1
#define _PORTC_CK1_MASK                                     0x40
#define _PORTC_DT1_POSN                                     0x7
#define _PORTC_DT1_POSITION                                 0x7
#define _PORTC_DT1_SIZE                                     0x1
#define _PORTC_DT1_LENGTH                                   0x1
#define _PORTC_DT1_MASK                                     0x80
#define _PORTC_T13CKI_POSN                                  0x0
#define _PORTC_T13CKI_POSITION                              0x0
#define _PORTC_T13CKI_SIZE                                  0x1
#define _PORTC_T13CKI_LENGTH                                0x1
#define _PORTC_T13CKI_MASK                                  0x1
#define _PORTC_CCP2_POSN                                    0x1
#define _PORTC_CCP2_POSITION                                0x1
#define _PORTC_CCP2_SIZE                                    0x1
#define _PORTC_CCP2_LENGTH                                  0x1
#define _PORTC_CCP2_MASK                                    0x2
#define _PORTC_CCP1_POSN                                    0x2
#define _PORTC_CCP1_POSITION                                0x2
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x4
#define _PORTC_SCK_POSN                                     0x3
#define _PORTC_SCK_POSITION                                 0x3
#define _PORTC_SCK_SIZE                                     0x1
#define _PORTC_SCK_LENGTH                                   0x1
#define _PORTC_SCK_MASK                                     0x8
#define _PORTC_SDI_POSN                                     0x4
#define _PORTC_SDI_POSITION                                 0x4
#define _PORTC_SDI_SIZE                                     0x1
#define _PORTC_SDI_LENGTH                                   0x1
#define _PORTC_SDI_MASK                                     0x10
#define _PORTC_SDO_POSN                                     0x5
#define _PORTC_SDO_POSITION                                 0x5
#define _PORTC_SDO_SIZE                                     0x1
#define _PORTC_SDO_LENGTH                                   0x1
#define _PORTC_SDO_MASK                                     0x20
#define _PORTC_TX1_POSN                                     0x6
#define _PORTC_TX1_POSITION                                 0x6
#define _PORTC_TX1_SIZE                                     0x1
#define _PORTC_TX1_LENGTH                                   0x1
#define _PORTC_TX1_MASK                                     0x40
#define _PORTC_RX1_POSN                                     0x7
#define _PORTC_RX1_POSITION                                 0x7
#define _PORTC_RX1_SIZE                                     0x1
#define _PORTC_RX1_LENGTH                                   0x1
#define _PORTC_RX1_MASK                                     0x80
#define _PORTC_PA2_POSN                                     0x1
#define _PORTC_PA2_POSITION                                 0x1
#define _PORTC_PA2_SIZE                                     0x1
#define _PORTC_PA2_LENGTH                                   0x1
#define _PORTC_PA2_MASK                                     0x2
#define _PORTC_PA1_POSN                                     0x2
#define _PORTC_PA1_POSITION                                 0x2
#define _PORTC_PA1_SIZE                                     0x1
#define _PORTC_PA1_LENGTH                                   0x1
#define _PORTC_PA1_MASK                                     0x4

// Register: PORTD
#define PORTD PORTD
extern volatile unsigned char           PORTD               __at(0xF83);
#ifndef _LIB_BUILD
asm("PORTD equ 0F83h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
    struct {
        unsigned PSP0                   :1;
        unsigned PSP1                   :1;
        unsigned PSP2                   :1;
        unsigned PSP3                   :1;
        unsigned PSP4                   :1;
        unsigned PSP5                   :1;
        unsigned PSP6                   :1;
        unsigned PSP7                   :1;
    };
    struct {
        unsigned AD0                    :1;
        unsigned AD1                    :1;
        unsigned AD2                    :1;
        unsigned AD3                    :1;
        unsigned AD4                    :1;
        unsigned AD5                    :1;
        unsigned AD6                    :1;
        unsigned AD7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned SS2                    :1;
    };
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits __at(0xF83);
// bitfield macros
#define _PORTD_RD0_POSN                                     0x0
#define _PORTD_RD0_POSITION                                 0x0
#define _PORTD_RD0_SIZE                                     0x1
#define _PORTD_RD0_LENGTH                                   0x1
#define _PORTD_RD0_MASK                                     0x1
#define _PORTD_RD1_POSN                                     0x1
#define _PORTD_RD1_POSITION                                 0x1
#define _PORTD_RD1_SIZE                                     0x1
#define _PORTD_RD1_LENGTH                                   0x1
#define _PORTD_RD1_MASK                                     0x2
#define _PORTD_RD2_POSN                                     0x2
#define _PORTD_RD2_POSITION                                 0x2
#define _PORTD_RD2_SIZE                                     0x1
#define _PORTD_RD2_LENGTH                                   0x1
#define _PORTD_RD2_MASK                                     0x4
#define _PORTD_RD3_POSN                                     0x3
#define _PORTD_RD3_POSITION                                 0x3
#define _PORTD_RD3_SIZE                                     0x1
#define _PORTD_RD3_LENGTH                                   0x1
#define _PORTD_RD3_MASK                                     0x8
#define _PORTD_RD4_POSN                                     0x4
#define _PORTD_RD4_POSITION                                 0x4
#define _PORTD_RD4_SIZE                                     0x1
#define _PORTD_RD4_LENGTH                                   0x1
#define _PORTD_RD4_MASK                                     0x10
#define _PORTD_RD5_POSN                                     0x5
#define _PORTD_RD5_POSITION                                 0x5
#define _PORTD_RD5_SIZE                                     0x1
#define _PORTD_RD5_LENGTH                                   0x1
#define _PORTD_RD5_MASK                                     0x20
#define _PORTD_RD6_POSN                                     0x6
#define _PORTD_RD6_POSITION                                 0x6
#define _PORTD_RD6_SIZE                                     0x1
#define _PORTD_RD6_LENGTH                                   0x1
#define _PORTD_RD6_MASK                                     0x40
#define _PORTD_RD7_POSN                                     0x7
#define _PORTD_RD7_POSITION                                 0x7
#define _PORTD_RD7_SIZE                                     0x1
#define _PORTD_RD7_LENGTH                                   0x1
#define _PORTD_RD7_MASK                                     0x80
#define _PORTD_PSP0_POSN                                    0x0
#define _PORTD_PSP0_POSITION                                0x0
#define _PORTD_PSP0_SIZE                                    0x1
#define _PORTD_PSP0_LENGTH                                  0x1
#define _PORTD_PSP0_MASK                                    0x1
#define _PORTD_PSP1_POSN                                    0x1
#define _PORTD_PSP1_POSITION                                0x1
#define _PORTD_PSP1_SIZE                                    0x1
#define _PORTD_PSP1_LENGTH                                  0x1
#define _PORTD_PSP1_MASK                                    0x2
#define _PORTD_PSP2_POSN                                    0x2
#define _PORTD_PSP2_POSITION                                0x2
#define _PORTD_PSP2_SIZE                                    0x1
#define _PORTD_PSP2_LENGTH                                  0x1
#define _PORTD_PSP2_MASK                                    0x4
#define _PORTD_PSP3_POSN                                    0x3
#define _PORTD_PSP3_POSITION                                0x3
#define _PORTD_PSP3_SIZE                                    0x1
#define _PORTD_PSP3_LENGTH                                  0x1
#define _PORTD_PSP3_MASK                                    0x8
#define _PORTD_PSP4_POSN                                    0x4
#define _PORTD_PSP4_POSITION                                0x4
#define _PORTD_PSP4_SIZE                                    0x1
#define _PORTD_PSP4_LENGTH                                  0x1
#define _PORTD_PSP4_MASK                                    0x10
#define _PORTD_PSP5_POSN                                    0x5
#define _PORTD_PSP5_POSITION                                0x5
#define _PORTD_PSP5_SIZE                                    0x1
#define _PORTD_PSP5_LENGTH                                  0x1
#define _PORTD_PSP5_MASK                                    0x20
#define _PORTD_PSP6_POSN                                    0x6
#define _PORTD_PSP6_POSITION                                0x6
#define _PORTD_PSP6_SIZE                                    0x1
#define _PORTD_PSP6_LENGTH                                  0x1
#define _PORTD_PSP6_MASK                                    0x40
#define _PORTD_PSP7_POSN                                    0x7
#define _PORTD_PSP7_POSITION                                0x7
#define _PORTD_PSP7_SIZE                                    0x1
#define _PORTD_PSP7_LENGTH                                  0x1
#define _PORTD_PSP7_MASK                                    0x80
#define _PORTD_AD0_POSN                                     0x0
#define _PORTD_AD0_POSITION                                 0x0
#define _PORTD_AD0_SIZE                                     0x1
#define _PORTD_AD0_LENGTH                                   0x1
#define _PORTD_AD0_MASK                                     0x1
#define _PORTD_AD1_POSN                                     0x1
#define _PORTD_AD1_POSITION                                 0x1
#define _PORTD_AD1_SIZE                                     0x1
#define _PORTD_AD1_LENGTH                                   0x1
#define _PORTD_AD1_MASK                                     0x2
#define _PORTD_AD2_POSN                                     0x2
#define _PORTD_AD2_POSITION                                 0x2
#define _PORTD_AD2_SIZE                                     0x1
#define _PORTD_AD2_LENGTH                                   0x1
#define _PORTD_AD2_MASK                                     0x4
#define _PORTD_AD3_POSN                                     0x3
#define _PORTD_AD3_POSITION                                 0x3
#define _PORTD_AD3_SIZE                                     0x1
#define _PORTD_AD3_LENGTH                                   0x1
#define _PORTD_AD3_MASK                                     0x8
#define _PORTD_AD4_POSN                                     0x4
#define _PORTD_AD4_POSITION                                 0x4
#define _PORTD_AD4_SIZE                                     0x1
#define _PORTD_AD4_LENGTH                                   0x1
#define _PORTD_AD4_MASK                                     0x10
#define _PORTD_AD5_POSN                                     0x5
#define _PORTD_AD5_POSITION                                 0x5
#define _PORTD_AD5_SIZE                                     0x1
#define _PORTD_AD5_LENGTH                                   0x1
#define _PORTD_AD5_MASK                                     0x20
#define _PORTD_AD6_POSN                                     0x6
#define _PORTD_AD6_POSITION                                 0x6
#define _PORTD_AD6_SIZE                                     0x1
#define _PORTD_AD6_LENGTH                                   0x1
#define _PORTD_AD6_MASK                                     0x40
#define _PORTD_AD7_POSN                                     0x7
#define _PORTD_AD7_POSITION                                 0x7
#define _PORTD_AD7_SIZE                                     0x1
#define _PORTD_AD7_LENGTH                                   0x1
#define _PORTD_AD7_MASK                                     0x80
#define _PORTD_SS2_POSN                                     0x7
#define _PORTD_SS2_POSITION                                 0x7
#define _PORTD_SS2_SIZE                                     0x1
#define _PORTD_SS2_LENGTH                                   0x1
#define _PORTD_SS2_MASK                                     0x80

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0xF84);
#ifndef _LIB_BUILD
asm("PORTE equ 0F84h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned CS                     :1;
        unsigned                        :4;
        unsigned CCP2                   :1;
    };
    struct {
        unsigned AD8                    :1;
        unsigned AD9                    :1;
        unsigned AD10                   :1;
        unsigned AD11                   :1;
        unsigned AD12                   :1;
        unsigned AD13                   :1;
        unsigned AD14                   :1;
        unsigned AD15                   :1;
    };
    struct {
        unsigned _PD2                    :1;  // Note: Changed by MikroE
        unsigned _PC2                    :1;  // Note: Changed by MikroE
        unsigned CCP10                  :1;
        unsigned CCP9E                  :1;
        unsigned CCP8E                  :1;
        unsigned CCP7E                  :1;
        unsigned CCP6E                  :1;
        unsigned CCP2E                  :1;
    };
    struct {
        unsigned RDE                    :1;
        unsigned WRE                    :1;
        unsigned _PB2                    :1;  // Note: Changed by MikroE
        unsigned PC3E                   :1;
        unsigned PB3E                   :1;
        unsigned PC1E                   :1;
        unsigned PB1E                   :1;
        unsigned PA2E                   :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0xF84);
// bitfield macros
#define _PORTE_RE0_POSN                                     0x0
#define _PORTE_RE0_POSITION                                 0x0
#define _PORTE_RE0_SIZE                                     0x1
#define _PORTE_RE0_LENGTH                                   0x1
#define _PORTE_RE0_MASK                                     0x1
#define _PORTE_RE1_POSN                                     0x1
#define _PORTE_RE1_POSITION                                 0x1
#define _PORTE_RE1_SIZE                                     0x1
#define _PORTE_RE1_LENGTH                                   0x1
#define _PORTE_RE1_MASK                                     0x2
#define _PORTE_RE2_POSN                                     0x2
#define _PORTE_RE2_POSITION                                 0x2
#define _PORTE_RE2_SIZE                                     0x1
#define _PORTE_RE2_LENGTH                                   0x1
#define _PORTE_RE2_MASK                                     0x4
#define _PORTE_RE3_POSN                                     0x3
#define _PORTE_RE3_POSITION                                 0x3
#define _PORTE_RE3_SIZE                                     0x1
#define _PORTE_RE3_LENGTH                                   0x1
#define _PORTE_RE3_MASK                                     0x8
#define _PORTE_RE4_POSN                                     0x4
#define _PORTE_RE4_POSITION                                 0x4
#define _PORTE_RE4_SIZE                                     0x1
#define _PORTE_RE4_LENGTH                                   0x1
#define _PORTE_RE4_MASK                                     0x10
#define _PORTE_RE5_POSN                                     0x5
#define _PORTE_RE5_POSITION                                 0x5
#define _PORTE_RE5_SIZE                                     0x1
#define _PORTE_RE5_LENGTH                                   0x1
#define _PORTE_RE5_MASK                                     0x20
#define _PORTE_RE6_POSN                                     0x6
#define _PORTE_RE6_POSITION                                 0x6
#define _PORTE_RE6_SIZE                                     0x1
#define _PORTE_RE6_LENGTH                                   0x1
#define _PORTE_RE6_MASK                                     0x40
#define _PORTE_RE7_POSN                                     0x7
#define _PORTE_RE7_POSITION                                 0x7
#define _PORTE_RE7_SIZE                                     0x1
#define _PORTE_RE7_LENGTH                                   0x1
#define _PORTE_RE7_MASK                                     0x80
#define _PORTE_RD_POSN                                      0x0
#define _PORTE_RD_POSITION                                  0x0
#define _PORTE_RD_SIZE                                      0x1
#define _PORTE_RD_LENGTH                                    0x1
#define _PORTE_RD_MASK                                      0x1
#define _PORTE_WR_POSN                                      0x1
#define _PORTE_WR_POSITION                                  0x1
#define _PORTE_WR_SIZE                                      0x1
#define _PORTE_WR_LENGTH                                    0x1
#define _PORTE_WR_MASK                                      0x2
#define _PORTE_CS_POSN                                      0x2
#define _PORTE_CS_POSITION                                  0x2
#define _PORTE_CS_SIZE                                      0x1
#define _PORTE_CS_LENGTH                                    0x1
#define _PORTE_CS_MASK                                      0x4
#define _PORTE_CCP2_POSN                                    0x7
#define _PORTE_CCP2_POSITION                                0x7
#define _PORTE_CCP2_SIZE                                    0x1
#define _PORTE_CCP2_LENGTH                                  0x1
#define _PORTE_CCP2_MASK                                    0x80
#define _PORTE_AD8_POSN                                     0x0
#define _PORTE_AD8_POSITION                                 0x0
#define _PORTE_AD8_SIZE                                     0x1
#define _PORTE_AD8_LENGTH                                   0x1
#define _PORTE_AD8_MASK                                     0x1
#define _PORTE_AD9_POSN                                     0x1
#define _PORTE_AD9_POSITION                                 0x1
#define _PORTE_AD9_SIZE                                     0x1
#define _PORTE_AD9_LENGTH                                   0x1
#define _PORTE_AD9_MASK                                     0x2
#define _PORTE_AD10_POSN                                    0x2
#define _PORTE_AD10_POSITION                                0x2
#define _PORTE_AD10_SIZE                                    0x1
#define _PORTE_AD10_LENGTH                                  0x1
#define _PORTE_AD10_MASK                                    0x4
#define _PORTE_AD11_POSN                                    0x3
#define _PORTE_AD11_POSITION                                0x3
#define _PORTE_AD11_SIZE                                    0x1
#define _PORTE_AD11_LENGTH                                  0x1
#define _PORTE_AD11_MASK                                    0x8
#define _PORTE_AD12_POSN                                    0x4
#define _PORTE_AD12_POSITION                                0x4
#define _PORTE_AD12_SIZE                                    0x1
#define _PORTE_AD12_LENGTH                                  0x1
#define _PORTE_AD12_MASK                                    0x10
#define _PORTE_AD13_POSN                                    0x5
#define _PORTE_AD13_POSITION                                0x5
#define _PORTE_AD13_SIZE                                    0x1
#define _PORTE_AD13_LENGTH                                  0x1
#define _PORTE_AD13_MASK                                    0x20
#define _PORTE_AD14_POSN                                    0x6
#define _PORTE_AD14_POSITION                                0x6
#define _PORTE_AD14_SIZE                                    0x1
#define _PORTE_AD14_LENGTH                                  0x1
#define _PORTE_AD14_MASK                                    0x40
#define _PORTE_AD15_POSN                                    0x7
#define _PORTE_AD15_POSITION                                0x7
#define _PORTE_AD15_SIZE                                    0x1
#define _PORTE_AD15_LENGTH                                  0x1
#define _PORTE_AD15_MASK                                    0x80
#define _PORTE_PD2_POSN                                     0x0
#define _PORTE_PD2_POSITION                                 0x0
#define _PORTE_PD2_SIZE                                     0x1
#define _PORTE_PD2_LENGTH                                   0x1
#define _PORTE_PD2_MASK                                     0x1
#define _PORTE_PC2_POSN                                     0x1
#define _PORTE_PC2_POSITION                                 0x1
#define _PORTE_PC2_SIZE                                     0x1
#define _PORTE_PC2_LENGTH                                   0x1
#define _PORTE_PC2_MASK                                     0x2
#define _PORTE_CCP10_POSN                                   0x2
#define _PORTE_CCP10_POSITION                               0x2
#define _PORTE_CCP10_SIZE                                   0x1
#define _PORTE_CCP10_LENGTH                                 0x1
#define _PORTE_CCP10_MASK                                   0x4
#define _PORTE_CCP9E_POSN                                   0x3
#define _PORTE_CCP9E_POSITION                               0x3
#define _PORTE_CCP9E_SIZE                                   0x1
#define _PORTE_CCP9E_LENGTH                                 0x1
#define _PORTE_CCP9E_MASK                                   0x8
#define _PORTE_CCP8E_POSN                                   0x4
#define _PORTE_CCP8E_POSITION                               0x4
#define _PORTE_CCP8E_SIZE                                   0x1
#define _PORTE_CCP8E_LENGTH                                 0x1
#define _PORTE_CCP8E_MASK                                   0x10
#define _PORTE_CCP7E_POSN                                   0x5
#define _PORTE_CCP7E_POSITION                               0x5
#define _PORTE_CCP7E_SIZE                                   0x1
#define _PORTE_CCP7E_LENGTH                                 0x1
#define _PORTE_CCP7E_MASK                                   0x20
#define _PORTE_CCP6E_POSN                                   0x6
#define _PORTE_CCP6E_POSITION                               0x6
#define _PORTE_CCP6E_SIZE                                   0x1
#define _PORTE_CCP6E_LENGTH                                 0x1
#define _PORTE_CCP6E_MASK                                   0x40
#define _PORTE_CCP2E_POSN                                   0x7
#define _PORTE_CCP2E_POSITION                               0x7
#define _PORTE_CCP2E_SIZE                                   0x1
#define _PORTE_CCP2E_LENGTH                                 0x1
#define _PORTE_CCP2E_MASK                                   0x80
#define _PORTE_RDE_POSN                                     0x0
#define _PORTE_RDE_POSITION                                 0x0
#define _PORTE_RDE_SIZE                                     0x1
#define _PORTE_RDE_LENGTH                                   0x1
#define _PORTE_RDE_MASK                                     0x1
#define _PORTE_WRE_POSN                                     0x1
#define _PORTE_WRE_POSITION                                 0x1
#define _PORTE_WRE_SIZE                                     0x1
#define _PORTE_WRE_LENGTH                                   0x1
#define _PORTE_WRE_MASK                                     0x2
#define _PORTE_PB2_POSN                                     0x2
#define _PORTE_PB2_POSITION                                 0x2
#define _PORTE_PB2_SIZE                                     0x1
#define _PORTE_PB2_LENGTH                                   0x1
#define _PORTE_PB2_MASK                                     0x4
#define _PORTE_PC3E_POSN                                    0x3
#define _PORTE_PC3E_POSITION                                0x3
#define _PORTE_PC3E_SIZE                                    0x1
#define _PORTE_PC3E_LENGTH                                  0x1
#define _PORTE_PC3E_MASK                                    0x8
#define _PORTE_PB3E_POSN                                    0x4
#define _PORTE_PB3E_POSITION                                0x4
#define _PORTE_PB3E_SIZE                                    0x1
#define _PORTE_PB3E_LENGTH                                  0x1
#define _PORTE_PB3E_MASK                                    0x10
#define _PORTE_PC1E_POSN                                    0x5
#define _PORTE_PC1E_POSITION                                0x5
#define _PORTE_PC1E_SIZE                                    0x1
#define _PORTE_PC1E_LENGTH                                  0x1
#define _PORTE_PC1E_MASK                                    0x20
#define _PORTE_PB1E_POSN                                    0x6
#define _PORTE_PB1E_POSITION                                0x6
#define _PORTE_PB1E_SIZE                                    0x1
#define _PORTE_PB1E_LENGTH                                  0x1
#define _PORTE_PB1E_MASK                                    0x40
#define _PORTE_PA2E_POSN                                    0x7
#define _PORTE_PA2E_POSITION                                0x7
#define _PORTE_PA2E_SIZE                                    0x1
#define _PORTE_PA2E_LENGTH                                  0x1
#define _PORTE_PA2E_MASK                                    0x80

// Register: PORTF
#define PORTF PORTF
extern volatile unsigned char           PORTF               __at(0xF85);
#ifndef _LIB_BUILD
asm("PORTF equ 0F85h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN10                   :1;
        unsigned AN11                   :1;
        unsigned AN5                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned C2OUT                  :1;
        unsigned C1OUT                  :1;
        unsigned C2INB                  :1;
        unsigned C2INA                  :1;
        unsigned C1INB                  :1;
        unsigned C1INA                  :1;
        unsigned SS1                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned CVREF                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned C2OUTF                 :1;
        unsigned C1OUTF                 :1;
    };
} PORTFbits_t;
extern volatile PORTFbits_t PORTFbits __at(0xF85);
// bitfield macros
#define _PORTF_RF1_POSN                                     0x1
#define _PORTF_RF1_POSITION                                 0x1
#define _PORTF_RF1_SIZE                                     0x1
#define _PORTF_RF1_LENGTH                                   0x1
#define _PORTF_RF1_MASK                                     0x2
#define _PORTF_RF2_POSN                                     0x2
#define _PORTF_RF2_POSITION                                 0x2
#define _PORTF_RF2_SIZE                                     0x1
#define _PORTF_RF2_LENGTH                                   0x1
#define _PORTF_RF2_MASK                                     0x4
#define _PORTF_RF3_POSN                                     0x3
#define _PORTF_RF3_POSITION                                 0x3
#define _PORTF_RF3_SIZE                                     0x1
#define _PORTF_RF3_LENGTH                                   0x1
#define _PORTF_RF3_MASK                                     0x8
#define _PORTF_RF4_POSN                                     0x4
#define _PORTF_RF4_POSITION                                 0x4
#define _PORTF_RF4_SIZE                                     0x1
#define _PORTF_RF4_LENGTH                                   0x1
#define _PORTF_RF4_MASK                                     0x10
#define _PORTF_RF5_POSN                                     0x5
#define _PORTF_RF5_POSITION                                 0x5
#define _PORTF_RF5_SIZE                                     0x1
#define _PORTF_RF5_LENGTH                                   0x1
#define _PORTF_RF5_MASK                                     0x20
#define _PORTF_RF6_POSN                                     0x6
#define _PORTF_RF6_POSITION                                 0x6
#define _PORTF_RF6_SIZE                                     0x1
#define _PORTF_RF6_LENGTH                                   0x1
#define _PORTF_RF6_MASK                                     0x40
#define _PORTF_RF7_POSN                                     0x7
#define _PORTF_RF7_POSITION                                 0x7
#define _PORTF_RF7_SIZE                                     0x1
#define _PORTF_RF7_LENGTH                                   0x1
#define _PORTF_RF7_MASK                                     0x80
#define _PORTF_AN6_POSN                                     0x1
#define _PORTF_AN6_POSITION                                 0x1
#define _PORTF_AN6_SIZE                                     0x1
#define _PORTF_AN6_LENGTH                                   0x1
#define _PORTF_AN6_MASK                                     0x2
#define _PORTF_AN7_POSN                                     0x2
#define _PORTF_AN7_POSITION                                 0x2
#define _PORTF_AN7_SIZE                                     0x1
#define _PORTF_AN7_LENGTH                                   0x1
#define _PORTF_AN7_MASK                                     0x4
#define _PORTF_AN8_POSN                                     0x3
#define _PORTF_AN8_POSITION                                 0x3
#define _PORTF_AN8_SIZE                                     0x1
#define _PORTF_AN8_LENGTH                                   0x1
#define _PORTF_AN8_MASK                                     0x8
#define _PORTF_AN9_POSN                                     0x4
#define _PORTF_AN9_POSITION                                 0x4
#define _PORTF_AN9_SIZE                                     0x1
#define _PORTF_AN9_LENGTH                                   0x1
#define _PORTF_AN9_MASK                                     0x10
#define _PORTF_AN10_POSN                                    0x5
#define _PORTF_AN10_POSITION                                0x5
#define _PORTF_AN10_SIZE                                    0x1
#define _PORTF_AN10_LENGTH                                  0x1
#define _PORTF_AN10_MASK                                    0x20
#define _PORTF_AN11_POSN                                    0x6
#define _PORTF_AN11_POSITION                                0x6
#define _PORTF_AN11_SIZE                                    0x1
#define _PORTF_AN11_LENGTH                                  0x1
#define _PORTF_AN11_MASK                                    0x40
#define _PORTF_AN5_POSN                                     0x7
#define _PORTF_AN5_POSITION                                 0x7
#define _PORTF_AN5_SIZE                                     0x1
#define _PORTF_AN5_LENGTH                                   0x1
#define _PORTF_AN5_MASK                                     0x80
#define _PORTF_C2OUT_POSN                                   0x1
#define _PORTF_C2OUT_POSITION                               0x1
#define _PORTF_C2OUT_SIZE                                   0x1
#define _PORTF_C2OUT_LENGTH                                 0x1
#define _PORTF_C2OUT_MASK                                   0x2
#define _PORTF_C1OUT_POSN                                   0x2
#define _PORTF_C1OUT_POSITION                               0x2
#define _PORTF_C1OUT_SIZE                                   0x1
#define _PORTF_C1OUT_LENGTH                                 0x1
#define _PORTF_C1OUT_MASK                                   0x4
#define _PORTF_C2INB_POSN                                   0x3
#define _PORTF_C2INB_POSITION                               0x3
#define _PORTF_C2INB_SIZE                                   0x1
#define _PORTF_C2INB_LENGTH                                 0x1
#define _PORTF_C2INB_MASK                                   0x8
#define _PORTF_C2INA_POSN                                   0x4
#define _PORTF_C2INA_POSITION                               0x4
#define _PORTF_C2INA_SIZE                                   0x1
#define _PORTF_C2INA_LENGTH                                 0x1
#define _PORTF_C2INA_MASK                                   0x10
#define _PORTF_C1INB_POSN                                   0x5
#define _PORTF_C1INB_POSITION                               0x5
#define _PORTF_C1INB_SIZE                                   0x1
#define _PORTF_C1INB_LENGTH                                 0x1
#define _PORTF_C1INB_MASK                                   0x20
#define _PORTF_C1INA_POSN                                   0x6
#define _PORTF_C1INA_POSITION                               0x6
#define _PORTF_C1INA_SIZE                                   0x1
#define _PORTF_C1INA_LENGTH                                 0x1
#define _PORTF_C1INA_MASK                                   0x40
#define _PORTF_SS1_POSN                                     0x7
#define _PORTF_SS1_POSITION                                 0x7
#define _PORTF_SS1_SIZE                                     0x1
#define _PORTF_SS1_LENGTH                                   0x1
#define _PORTF_SS1_MASK                                     0x80
#define _PORTF_CVREF_POSN                                   0x5
#define _PORTF_CVREF_POSITION                               0x5
#define _PORTF_CVREF_SIZE                                   0x1
#define _PORTF_CVREF_LENGTH                                 0x1
#define _PORTF_CVREF_MASK                                   0x20
#define _PORTF_C2OUTF_POSN                                  0x1
#define _PORTF_C2OUTF_POSITION                              0x1
#define _PORTF_C2OUTF_SIZE                                  0x1
#define _PORTF_C2OUTF_LENGTH                                0x1
#define _PORTF_C2OUTF_MASK                                  0x2
#define _PORTF_C1OUTF_POSN                                  0x2
#define _PORTF_C1OUTF_POSITION                              0x2
#define _PORTF_C1OUTF_SIZE                                  0x1
#define _PORTF_C1OUTF_LENGTH                                0x1
#define _PORTF_C1OUTF_MASK                                  0x4

// Register: PORTG
#define PORTG PORTG
extern volatile unsigned char           PORTG               __at(0xF86);
#ifndef _LIB_BUILD
asm("PORTG equ 0F86h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
        unsigned RJPU                   :1;
        unsigned REPU                   :1;
        unsigned RDPU                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned CK2                    :1;
        unsigned DT2                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned TX2                    :1;
        unsigned RX2                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned C3OUTG                 :1;
        unsigned                        :3;
        unsigned RG5                    :1;
        unsigned RG6                    :1;
        unsigned RG7                    :1;
    };
} PORTGbits_t;
extern volatile PORTGbits_t PORTGbits __at(0xF86);
// bitfield macros
#define _PORTG_RG0_POSN                                     0x0
#define _PORTG_RG0_POSITION                                 0x0
#define _PORTG_RG0_SIZE                                     0x1
#define _PORTG_RG0_LENGTH                                   0x1
#define _PORTG_RG0_MASK                                     0x1
#define _PORTG_RG1_POSN                                     0x1
#define _PORTG_RG1_POSITION                                 0x1
#define _PORTG_RG1_SIZE                                     0x1
#define _PORTG_RG1_LENGTH                                   0x1
#define _PORTG_RG1_MASK                                     0x2
#define _PORTG_RG2_POSN                                     0x2
#define _PORTG_RG2_POSITION                                 0x2
#define _PORTG_RG2_SIZE                                     0x1
#define _PORTG_RG2_LENGTH                                   0x1
#define _PORTG_RG2_MASK                                     0x4
#define _PORTG_RG3_POSN                                     0x3
#define _PORTG_RG3_POSITION                                 0x3
#define _PORTG_RG3_SIZE                                     0x1
#define _PORTG_RG3_LENGTH                                   0x1
#define _PORTG_RG3_MASK                                     0x8
#define _PORTG_RG4_POSN                                     0x4
#define _PORTG_RG4_POSITION                                 0x4
#define _PORTG_RG4_SIZE                                     0x1
#define _PORTG_RG4_LENGTH                                   0x1
#define _PORTG_RG4_MASK                                     0x10
#define _PORTG_RJPU_POSN                                    0x5
#define _PORTG_RJPU_POSITION                                0x5
#define _PORTG_RJPU_SIZE                                    0x1
#define _PORTG_RJPU_LENGTH                                  0x1
#define _PORTG_RJPU_MASK                                    0x20
#define _PORTG_REPU_POSN                                    0x6
#define _PORTG_REPU_POSITION                                0x6
#define _PORTG_REPU_SIZE                                    0x1
#define _PORTG_REPU_LENGTH                                  0x1
#define _PORTG_REPU_MASK                                    0x40
#define _PORTG_RDPU_POSN                                    0x7
#define _PORTG_RDPU_POSITION                                0x7
#define _PORTG_RDPU_SIZE                                    0x1
#define _PORTG_RDPU_LENGTH                                  0x1
#define _PORTG_RDPU_MASK                                    0x80
#define _PORTG_CK2_POSN                                     0x1
#define _PORTG_CK2_POSITION                                 0x1
#define _PORTG_CK2_SIZE                                     0x1
#define _PORTG_CK2_LENGTH                                   0x1
#define _PORTG_CK2_MASK                                     0x2
#define _PORTG_DT2_POSN                                     0x2
#define _PORTG_DT2_POSITION                                 0x2
#define _PORTG_DT2_SIZE                                     0x1
#define _PORTG_DT2_LENGTH                                   0x1
#define _PORTG_DT2_MASK                                     0x4
#define _PORTG_TX2_POSN                                     0x1
#define _PORTG_TX2_POSITION                                 0x1
#define _PORTG_TX2_SIZE                                     0x1
#define _PORTG_TX2_LENGTH                                   0x1
#define _PORTG_TX2_MASK                                     0x2
#define _PORTG_RX2_POSN                                     0x2
#define _PORTG_RX2_POSITION                                 0x2
#define _PORTG_RX2_SIZE                                     0x1
#define _PORTG_RX2_LENGTH                                   0x1
#define _PORTG_RX2_MASK                                     0x4
#define _PORTG_C3OUTG_POSN                                  0x1
#define _PORTG_C3OUTG_POSITION                              0x1
#define _PORTG_C3OUTG_SIZE                                  0x1
#define _PORTG_C3OUTG_LENGTH                                0x1
#define _PORTG_C3OUTG_MASK                                  0x2
#define _PORTG_RG5_POSN                                     0x5
#define _PORTG_RG5_POSITION                                 0x5
#define _PORTG_RG5_SIZE                                     0x1
#define _PORTG_RG5_LENGTH                                   0x1
#define _PORTG_RG5_MASK                                     0x20
#define _PORTG_RG6_POSN                                     0x6
#define _PORTG_RG6_POSITION                                 0x6
#define _PORTG_RG6_SIZE                                     0x1
#define _PORTG_RG6_LENGTH                                   0x1
#define _PORTG_RG6_MASK                                     0x40
#define _PORTG_RG7_POSN                                     0x7
#define _PORTG_RG7_POSITION                                 0x7
#define _PORTG_RG7_SIZE                                     0x1
#define _PORTG_RG7_LENGTH                                   0x1
#define _PORTG_RG7_MASK                                     0x80

// Register: PORTH
#define PORTH PORTH
extern volatile unsigned char           PORTH               __at(0xF87);
#ifndef _LIB_BUILD
asm("PORTH equ 0F87h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RH0                    :1;
        unsigned RH1                    :1;
        unsigned RH2                    :1;
        unsigned RH3                    :1;
        unsigned RH4                    :1;
        unsigned RH5                    :1;
        unsigned RH6                    :1;
        unsigned RH7                    :1;
    };
    struct {
        unsigned A16                    :1;
        unsigned A17                    :1;
        unsigned A18                    :1;
        unsigned A19                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP9                   :1;
        unsigned CCP8                   :1;
        unsigned CCP7                   :1;
        unsigned CCP6                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned _PC3                    :1;  // Note: Changed by MikroE
        unsigned _PB3                    :1;  // Note: Changed by MikroE
        unsigned _PC1                    :1;  // Note: Changed by MikroE
        unsigned _PB1                    :1;  // Note: Changed by MikroE
    };
} PORTHbits_t;
extern volatile PORTHbits_t PORTHbits __at(0xF87);
// bitfield macros
#define _PORTH_RH0_POSN                                     0x0
#define _PORTH_RH0_POSITION                                 0x0
#define _PORTH_RH0_SIZE                                     0x1
#define _PORTH_RH0_LENGTH                                   0x1
#define _PORTH_RH0_MASK                                     0x1
#define _PORTH_RH1_POSN                                     0x1
#define _PORTH_RH1_POSITION                                 0x1
#define _PORTH_RH1_SIZE                                     0x1
#define _PORTH_RH1_LENGTH                                   0x1
#define _PORTH_RH1_MASK                                     0x2
#define _PORTH_RH2_POSN                                     0x2
#define _PORTH_RH2_POSITION                                 0x2
#define _PORTH_RH2_SIZE                                     0x1
#define _PORTH_RH2_LENGTH                                   0x1
#define _PORTH_RH2_MASK                                     0x4
#define _PORTH_RH3_POSN                                     0x3
#define _PORTH_RH3_POSITION                                 0x3
#define _PORTH_RH3_SIZE                                     0x1
#define _PORTH_RH3_LENGTH                                   0x1
#define _PORTH_RH3_MASK                                     0x8
#define _PORTH_RH4_POSN                                     0x4
#define _PORTH_RH4_POSITION                                 0x4
#define _PORTH_RH4_SIZE                                     0x1
#define _PORTH_RH4_LENGTH                                   0x1
#define _PORTH_RH4_MASK                                     0x10
#define _PORTH_RH5_POSN                                     0x5
#define _PORTH_RH5_POSITION                                 0x5
#define _PORTH_RH5_SIZE                                     0x1
#define _PORTH_RH5_LENGTH                                   0x1
#define _PORTH_RH5_MASK                                     0x20
#define _PORTH_RH6_POSN                                     0x6
#define _PORTH_RH6_POSITION                                 0x6
#define _PORTH_RH6_SIZE                                     0x1
#define _PORTH_RH6_LENGTH                                   0x1
#define _PORTH_RH6_MASK                                     0x40
#define _PORTH_RH7_POSN                                     0x7
#define _PORTH_RH7_POSITION                                 0x7
#define _PORTH_RH7_SIZE                                     0x1
#define _PORTH_RH7_LENGTH                                   0x1
#define _PORTH_RH7_MASK                                     0x80
#define _PORTH_A16_POSN                                     0x0
#define _PORTH_A16_POSITION                                 0x0
#define _PORTH_A16_SIZE                                     0x1
#define _PORTH_A16_LENGTH                                   0x1
#define _PORTH_A16_MASK                                     0x1
#define _PORTH_A17_POSN                                     0x1
#define _PORTH_A17_POSITION                                 0x1
#define _PORTH_A17_SIZE                                     0x1
#define _PORTH_A17_LENGTH                                   0x1
#define _PORTH_A17_MASK                                     0x2
#define _PORTH_A18_POSN                                     0x2
#define _PORTH_A18_POSITION                                 0x2
#define _PORTH_A18_SIZE                                     0x1
#define _PORTH_A18_LENGTH                                   0x1
#define _PORTH_A18_MASK                                     0x4
#define _PORTH_A19_POSN                                     0x3
#define _PORTH_A19_POSITION                                 0x3
#define _PORTH_A19_SIZE                                     0x1
#define _PORTH_A19_LENGTH                                   0x1
#define _PORTH_A19_MASK                                     0x8
#define _PORTH_CCP9_POSN                                    0x4
#define _PORTH_CCP9_POSITION                                0x4
#define _PORTH_CCP9_SIZE                                    0x1
#define _PORTH_CCP9_LENGTH                                  0x1
#define _PORTH_CCP9_MASK                                    0x10
#define _PORTH_CCP8_POSN                                    0x5
#define _PORTH_CCP8_POSITION                                0x5
#define _PORTH_CCP8_SIZE                                    0x1
#define _PORTH_CCP8_LENGTH                                  0x1
#define _PORTH_CCP8_MASK                                    0x20
#define _PORTH_CCP7_POSN                                    0x6
#define _PORTH_CCP7_POSITION                                0x6
#define _PORTH_CCP7_SIZE                                    0x1
#define _PORTH_CCP7_LENGTH                                  0x1
#define _PORTH_CCP7_MASK                                    0x40
#define _PORTH_CCP6_POSN                                    0x7
#define _PORTH_CCP6_POSITION                                0x7
#define _PORTH_CCP6_SIZE                                    0x1
#define _PORTH_CCP6_LENGTH                                  0x1
#define _PORTH_CCP6_MASK                                    0x80
#define _PORTH_PC3_POSN                                     0x4
#define _PORTH_PC3_POSITION                                 0x4
#define _PORTH_PC3_SIZE                                     0x1
#define _PORTH_PC3_LENGTH                                   0x1
#define _PORTH_PC3_MASK                                     0x10
#define _PORTH_PB3_POSN                                     0x5
#define _PORTH_PB3_POSITION                                 0x5
#define _PORTH_PB3_SIZE                                     0x1
#define _PORTH_PB3_LENGTH                                   0x1
#define _PORTH_PB3_MASK                                     0x20
#define _PORTH_PC1_POSN                                     0x6
#define _PORTH_PC1_POSITION                                 0x6
#define _PORTH_PC1_SIZE                                     0x1
#define _PORTH_PC1_LENGTH                                   0x1
#define _PORTH_PC1_MASK                                     0x40
#define _PORTH_PB1_POSN                                     0x7
#define _PORTH_PB1_POSITION                                 0x7
#define _PORTH_PB1_SIZE                                     0x1
#define _PORTH_PB1_LENGTH                                   0x1
#define _PORTH_PB1_MASK                                     0x80

// Register: PORTJ
#define PORTJ PORTJ
extern volatile unsigned char           PORTJ               __at(0xF88);
#ifndef _LIB_BUILD
asm("PORTJ equ 0F88h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RJ0                    :1;
        unsigned RJ1                    :1;
        unsigned RJ2                    :1;
        unsigned RJ3                    :1;
        unsigned RJ4                    :1;
        unsigned RJ5                    :1;
        unsigned RJ6                    :1;
        unsigned RJ7                    :1;
    };
    struct {
        unsigned ALE                    :1;
        unsigned OE                     :1;
        unsigned WRL                    :1;
        unsigned WRH                    :1;
        unsigned BA0                    :1;
        unsigned CE                     :1;
        unsigned LB                     :1;
        unsigned UB                     :1;
    };
} PORTJbits_t;
extern volatile PORTJbits_t PORTJbits __at(0xF88);
// bitfield macros
#define _PORTJ_RJ0_POSN                                     0x0
#define _PORTJ_RJ0_POSITION                                 0x0
#define _PORTJ_RJ0_SIZE                                     0x1
#define _PORTJ_RJ0_LENGTH                                   0x1
#define _PORTJ_RJ0_MASK                                     0x1
#define _PORTJ_RJ1_POSN                                     0x1
#define _PORTJ_RJ1_POSITION                                 0x1
#define _PORTJ_RJ1_SIZE                                     0x1
#define _PORTJ_RJ1_LENGTH                                   0x1
#define _PORTJ_RJ1_MASK                                     0x2
#define _PORTJ_RJ2_POSN                                     0x2
#define _PORTJ_RJ2_POSITION                                 0x2
#define _PORTJ_RJ2_SIZE                                     0x1
#define _PORTJ_RJ2_LENGTH                                   0x1
#define _PORTJ_RJ2_MASK                                     0x4
#define _PORTJ_RJ3_POSN                                     0x3
#define _PORTJ_RJ3_POSITION                                 0x3
#define _PORTJ_RJ3_SIZE                                     0x1
#define _PORTJ_RJ3_LENGTH                                   0x1
#define _PORTJ_RJ3_MASK                                     0x8
#define _PORTJ_RJ4_POSN                                     0x4
#define _PORTJ_RJ4_POSITION                                 0x4
#define _PORTJ_RJ4_SIZE                                     0x1
#define _PORTJ_RJ4_LENGTH                                   0x1
#define _PORTJ_RJ4_MASK                                     0x10
#define _PORTJ_RJ5_POSN                                     0x5
#define _PORTJ_RJ5_POSITION                                 0x5
#define _PORTJ_RJ5_SIZE                                     0x1
#define _PORTJ_RJ5_LENGTH                                   0x1
#define _PORTJ_RJ5_MASK                                     0x20
#define _PORTJ_RJ6_POSN                                     0x6
#define _PORTJ_RJ6_POSITION                                 0x6
#define _PORTJ_RJ6_SIZE                                     0x1
#define _PORTJ_RJ6_LENGTH                                   0x1
#define _PORTJ_RJ6_MASK                                     0x40
#define _PORTJ_RJ7_POSN                                     0x7
#define _PORTJ_RJ7_POSITION                                 0x7
#define _PORTJ_RJ7_SIZE                                     0x1
#define _PORTJ_RJ7_LENGTH                                   0x1
#define _PORTJ_RJ7_MASK                                     0x80
#define _PORTJ_ALE_POSN                                     0x0
#define _PORTJ_ALE_POSITION                                 0x0
#define _PORTJ_ALE_SIZE                                     0x1
#define _PORTJ_ALE_LENGTH                                   0x1
#define _PORTJ_ALE_MASK                                     0x1
#define _PORTJ_OE_POSN                                      0x1
#define _PORTJ_OE_POSITION                                  0x1
#define _PORTJ_OE_SIZE                                      0x1
#define _PORTJ_OE_LENGTH                                    0x1
#define _PORTJ_OE_MASK                                      0x2
#define _PORTJ_WRL_POSN                                     0x2
#define _PORTJ_WRL_POSITION                                 0x2
#define _PORTJ_WRL_SIZE                                     0x1
#define _PORTJ_WRL_LENGTH                                   0x1
#define _PORTJ_WRL_MASK                                     0x4
#define _PORTJ_WRH_POSN                                     0x3
#define _PORTJ_WRH_POSITION                                 0x3
#define _PORTJ_WRH_SIZE                                     0x1
#define _PORTJ_WRH_LENGTH                                   0x1
#define _PORTJ_WRH_MASK                                     0x8
#define _PORTJ_BA0_POSN                                     0x4
#define _PORTJ_BA0_POSITION                                 0x4
#define _PORTJ_BA0_SIZE                                     0x1
#define _PORTJ_BA0_LENGTH                                   0x1
#define _PORTJ_BA0_MASK                                     0x10
#define _PORTJ_CE_POSN                                      0x5
#define _PORTJ_CE_POSITION                                  0x5
#define _PORTJ_CE_SIZE                                      0x1
#define _PORTJ_CE_LENGTH                                    0x1
#define _PORTJ_CE_MASK                                      0x20
#define _PORTJ_LB_POSN                                      0x6
#define _PORTJ_LB_POSITION                                  0x6
#define _PORTJ_LB_SIZE                                      0x1
#define _PORTJ_LB_LENGTH                                    0x1
#define _PORTJ_LB_MASK                                      0x40
#define _PORTJ_UB_POSN                                      0x7
#define _PORTJ_UB_POSITION                                  0x7
#define _PORTJ_UB_SIZE                                      0x1
#define _PORTJ_UB_LENGTH                                    0x1
#define _PORTJ_UB_MASK                                      0x80

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0xF89);
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
    };
    struct {
        unsigned LA0                    :1;
        unsigned LA1                    :1;
        unsigned LA2                    :1;
        unsigned LA3                    :1;
        unsigned LA4                    :1;
        unsigned LA5                    :1;
        unsigned LA6                    :1;
        unsigned LA7                    :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0xF89);
// bitfield macros
#define _LATA_LATA0_POSN                                    0x0
#define _LATA_LATA0_POSITION                                0x0
#define _LATA_LATA0_SIZE                                    0x1
#define _LATA_LATA0_LENGTH                                  0x1
#define _LATA_LATA0_MASK                                    0x1
#define _LATA_LATA1_POSN                                    0x1
#define _LATA_LATA1_POSITION                                0x1
#define _LATA_LATA1_SIZE                                    0x1
#define _LATA_LATA1_LENGTH                                  0x1
#define _LATA_LATA1_MASK                                    0x2
#define _LATA_LATA2_POSN                                    0x2
#define _LATA_LATA2_POSITION                                0x2
#define _LATA_LATA2_SIZE                                    0x1
#define _LATA_LATA2_LENGTH                                  0x1
#define _LATA_LATA2_MASK                                    0x4
#define _LATA_LATA3_POSN                                    0x3
#define _LATA_LATA3_POSITION                                0x3
#define _LATA_LATA3_SIZE                                    0x1
#define _LATA_LATA3_LENGTH                                  0x1
#define _LATA_LATA3_MASK                                    0x8
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
#define _LATA_LATA6_POSN                                    0x6
#define _LATA_LATA6_POSITION                                0x6
#define _LATA_LATA6_SIZE                                    0x1
#define _LATA_LATA6_LENGTH                                  0x1
#define _LATA_LATA6_MASK                                    0x40
#define _LATA_LATA7_POSN                                    0x7
#define _LATA_LATA7_POSITION                                0x7
#define _LATA_LATA7_SIZE                                    0x1
#define _LATA_LATA7_LENGTH                                  0x1
#define _LATA_LATA7_MASK                                    0x80
#define _LATA_LA0_POSN                                      0x0
#define _LATA_LA0_POSITION                                  0x0
#define _LATA_LA0_SIZE                                      0x1
#define _LATA_LA0_LENGTH                                    0x1
#define _LATA_LA0_MASK                                      0x1
#define _LATA_LA1_POSN                                      0x1
#define _LATA_LA1_POSITION                                  0x1
#define _LATA_LA1_SIZE                                      0x1
#define _LATA_LA1_LENGTH                                    0x1
#define _LATA_LA1_MASK                                      0x2
#define _LATA_LA2_POSN                                      0x2
#define _LATA_LA2_POSITION                                  0x2
#define _LATA_LA2_SIZE                                      0x1
#define _LATA_LA2_LENGTH                                    0x1
#define _LATA_LA2_MASK                                      0x4
#define _LATA_LA3_POSN                                      0x3
#define _LATA_LA3_POSITION                                  0x3
#define _LATA_LA3_SIZE                                      0x1
#define _LATA_LA3_LENGTH                                    0x1
#define _LATA_LA3_MASK                                      0x8
#define _LATA_LA4_POSN                                      0x4
#define _LATA_LA4_POSITION                                  0x4
#define _LATA_LA4_SIZE                                      0x1
#define _LATA_LA4_LENGTH                                    0x1
#define _LATA_LA4_MASK                                      0x10
#define _LATA_LA5_POSN                                      0x5
#define _LATA_LA5_POSITION                                  0x5
#define _LATA_LA5_SIZE                                      0x1
#define _LATA_LA5_LENGTH                                    0x1
#define _LATA_LA5_MASK                                      0x20
#define _LATA_LA6_POSN                                      0x6
#define _LATA_LA6_POSITION                                  0x6
#define _LATA_LA6_SIZE                                      0x1
#define _LATA_LA6_LENGTH                                    0x1
#define _LATA_LA6_MASK                                      0x40
#define _LATA_LA7_POSN                                      0x7
#define _LATA_LA7_POSITION                                  0x7
#define _LATA_LA7_SIZE                                      0x1
#define _LATA_LA7_LENGTH                                    0x1
#define _LATA_LA7_MASK                                      0x80

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0xF8A);
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATB0                  :1;
        unsigned LATB1                  :1;
        unsigned LATB2                  :1;
        unsigned LATB3                  :1;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
    struct {
        unsigned LB0                    :1;
        unsigned LB1                    :1;
        unsigned LB2                    :1;
        unsigned LB3                    :1;
        unsigned LB4                    :1;
        unsigned LB5                    :1;
        unsigned LB6                    :1;
        unsigned LB7                    :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0xF8A);
// bitfield macros
#define _LATB_LATB0_POSN                                    0x0
#define _LATB_LATB0_POSITION                                0x0
#define _LATB_LATB0_SIZE                                    0x1
#define _LATB_LATB0_LENGTH                                  0x1
#define _LATB_LATB0_MASK                                    0x1
#define _LATB_LATB1_POSN                                    0x1
#define _LATB_LATB1_POSITION                                0x1
#define _LATB_LATB1_SIZE                                    0x1
#define _LATB_LATB1_LENGTH                                  0x1
#define _LATB_LATB1_MASK                                    0x2
#define _LATB_LATB2_POSN                                    0x2
#define _LATB_LATB2_POSITION                                0x2
#define _LATB_LATB2_SIZE                                    0x1
#define _LATB_LATB2_LENGTH                                  0x1
#define _LATB_LATB2_MASK                                    0x4
#define _LATB_LATB3_POSN                                    0x3
#define _LATB_LATB3_POSITION                                0x3
#define _LATB_LATB3_SIZE                                    0x1
#define _LATB_LATB3_LENGTH                                  0x1
#define _LATB_LATB3_MASK                                    0x8
#define _LATB_LATB4_POSN                                    0x4
#define _LATB_LATB4_POSITION                                0x4
#define _LATB_LATB4_SIZE                                    0x1
#define _LATB_LATB4_LENGTH                                  0x1
#define _LATB_LATB4_MASK                                    0x10
#define _LATB_LATB5_POSN                                    0x5
#define _LATB_LATB5_POSITION                                0x5
#define _LATB_LATB5_SIZE                                    0x1
#define _LATB_LATB5_LENGTH                                  0x1
#define _LATB_LATB5_MASK                                    0x20
#define _LATB_LATB6_POSN                                    0x6
#define _LATB_LATB6_POSITION                                0x6
#define _LATB_LATB6_SIZE                                    0x1
#define _LATB_LATB6_LENGTH                                  0x1
#define _LATB_LATB6_MASK                                    0x40
#define _LATB_LATB7_POSN                                    0x7
#define _LATB_LATB7_POSITION                                0x7
#define _LATB_LATB7_SIZE                                    0x1
#define _LATB_LATB7_LENGTH                                  0x1
#define _LATB_LATB7_MASK                                    0x80
#define _LATB_LB0_POSN                                      0x0
#define _LATB_LB0_POSITION                                  0x0
#define _LATB_LB0_SIZE                                      0x1
#define _LATB_LB0_LENGTH                                    0x1
#define _LATB_LB0_MASK                                      0x1
#define _LATB_LB1_POSN                                      0x1
#define _LATB_LB1_POSITION                                  0x1
#define _LATB_LB1_SIZE                                      0x1
#define _LATB_LB1_LENGTH                                    0x1
#define _LATB_LB1_MASK                                      0x2
#define _LATB_LB2_POSN                                      0x2
#define _LATB_LB2_POSITION                                  0x2
#define _LATB_LB2_SIZE                                      0x1
#define _LATB_LB2_LENGTH                                    0x1
#define _LATB_LB2_MASK                                      0x4
#define _LATB_LB3_POSN                                      0x3
#define _LATB_LB3_POSITION                                  0x3
#define _LATB_LB3_SIZE                                      0x1
#define _LATB_LB3_LENGTH                                    0x1
#define _LATB_LB3_MASK                                      0x8
#define _LATB_LB4_POSN                                      0x4
#define _LATB_LB4_POSITION                                  0x4
#define _LATB_LB4_SIZE                                      0x1
#define _LATB_LB4_LENGTH                                    0x1
#define _LATB_LB4_MASK                                      0x10
#define _LATB_LB5_POSN                                      0x5
#define _LATB_LB5_POSITION                                  0x5
#define _LATB_LB5_SIZE                                      0x1
#define _LATB_LB5_LENGTH                                    0x1
#define _LATB_LB5_MASK                                      0x20
#define _LATB_LB6_POSN                                      0x6
#define _LATB_LB6_POSITION                                  0x6
#define _LATB_LB6_SIZE                                      0x1
#define _LATB_LB6_LENGTH                                    0x1
#define _LATB_LB6_MASK                                      0x40
#define _LATB_LB7_POSN                                      0x7
#define _LATB_LB7_POSITION                                  0x7
#define _LATB_LB7_SIZE                                      0x1
#define _LATB_LB7_LENGTH                                    0x1
#define _LATB_LB7_MASK                                      0x80

// Register: LATC
#define LATC LATC
extern volatile unsigned char           LATC                __at(0xF8B);
#ifndef _LIB_BUILD
asm("LATC equ 0F8Bh");
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
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LC0                    :1;
        unsigned LC1                    :1;
        unsigned LC2                    :1;
        unsigned LC3                    :1;
        unsigned LC4                    :1;
        unsigned LC5                    :1;
        unsigned LC6                    :1;
        unsigned LC7                    :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits __at(0xF8B);
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
#define _LATC_LATC6_POSN                                    0x6
#define _LATC_LATC6_POSITION                                0x6
#define _LATC_LATC6_SIZE                                    0x1
#define _LATC_LATC6_LENGTH                                  0x1
#define _LATC_LATC6_MASK                                    0x40
#define _LATC_LATC7_POSN                                    0x7
#define _LATC_LATC7_POSITION                                0x7
#define _LATC_LATC7_SIZE                                    0x1
#define _LATC_LATC7_LENGTH                                  0x1
#define _LATC_LATC7_MASK                                    0x80
#define _LATC_LC0_POSN                                      0x0
#define _LATC_LC0_POSITION                                  0x0
#define _LATC_LC0_SIZE                                      0x1
#define _LATC_LC0_LENGTH                                    0x1
#define _LATC_LC0_MASK                                      0x1
#define _LATC_LC1_POSN                                      0x1
#define _LATC_LC1_POSITION                                  0x1
#define _LATC_LC1_SIZE                                      0x1
#define _LATC_LC1_LENGTH                                    0x1
#define _LATC_LC1_MASK                                      0x2
#define _LATC_LC2_POSN                                      0x2
#define _LATC_LC2_POSITION                                  0x2
#define _LATC_LC2_SIZE                                      0x1
#define _LATC_LC2_LENGTH                                    0x1
#define _LATC_LC2_MASK                                      0x4
#define _LATC_LC3_POSN                                      0x3
#define _LATC_LC3_POSITION                                  0x3
#define _LATC_LC3_SIZE                                      0x1
#define _LATC_LC3_LENGTH                                    0x1
#define _LATC_LC3_MASK                                      0x8
#define _LATC_LC4_POSN                                      0x4
#define _LATC_LC4_POSITION                                  0x4
#define _LATC_LC4_SIZE                                      0x1
#define _LATC_LC4_LENGTH                                    0x1
#define _LATC_LC4_MASK                                      0x10
#define _LATC_LC5_POSN                                      0x5
#define _LATC_LC5_POSITION                                  0x5
#define _LATC_LC5_SIZE                                      0x1
#define _LATC_LC5_LENGTH                                    0x1
#define _LATC_LC5_MASK                                      0x20
#define _LATC_LC6_POSN                                      0x6
#define _LATC_LC6_POSITION                                  0x6
#define _LATC_LC6_SIZE                                      0x1
#define _LATC_LC6_LENGTH                                    0x1
#define _LATC_LC6_MASK                                      0x40
#define _LATC_LC7_POSN                                      0x7
#define _LATC_LC7_POSITION                                  0x7
#define _LATC_LC7_SIZE                                      0x1
#define _LATC_LC7_LENGTH                                    0x1
#define _LATC_LC7_MASK                                      0x80

// Register: LATD
#define LATD LATD
extern volatile unsigned char           LATD                __at(0xF8C);
#ifndef _LIB_BUILD
asm("LATD equ 0F8Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATD0                  :1;
        unsigned LATD1                  :1;
        unsigned LATD2                  :1;
        unsigned LATD3                  :1;
        unsigned LATD4                  :1;
        unsigned LATD5                  :1;
        unsigned LATD6                  :1;
        unsigned LATD7                  :1;
    };
    struct {
        unsigned LD0                    :1;
        unsigned LD1                    :1;
        unsigned LD2                    :1;
        unsigned LD3                    :1;
        unsigned LD4                    :1;
        unsigned LD5                    :1;
        unsigned LD6                    :1;
        unsigned LD7                    :1;
    };
} LATDbits_t;
extern volatile LATDbits_t LATDbits __at(0xF8C);
// bitfield macros
#define _LATD_LATD0_POSN                                    0x0
#define _LATD_LATD0_POSITION                                0x0
#define _LATD_LATD0_SIZE                                    0x1
#define _LATD_LATD0_LENGTH                                  0x1
#define _LATD_LATD0_MASK                                    0x1
#define _LATD_LATD1_POSN                                    0x1
#define _LATD_LATD1_POSITION                                0x1
#define _LATD_LATD1_SIZE                                    0x1
#define _LATD_LATD1_LENGTH                                  0x1
#define _LATD_LATD1_MASK                                    0x2
#define _LATD_LATD2_POSN                                    0x2
#define _LATD_LATD2_POSITION                                0x2
#define _LATD_LATD2_SIZE                                    0x1
#define _LATD_LATD2_LENGTH                                  0x1
#define _LATD_LATD2_MASK                                    0x4
#define _LATD_LATD3_POSN                                    0x3
#define _LATD_LATD3_POSITION                                0x3
#define _LATD_LATD3_SIZE                                    0x1
#define _LATD_LATD3_LENGTH                                  0x1
#define _LATD_LATD3_MASK                                    0x8
#define _LATD_LATD4_POSN                                    0x4
#define _LATD_LATD4_POSITION                                0x4
#define _LATD_LATD4_SIZE                                    0x1
#define _LATD_LATD4_LENGTH                                  0x1
#define _LATD_LATD4_MASK                                    0x10
#define _LATD_LATD5_POSN                                    0x5
#define _LATD_LATD5_POSITION                                0x5
#define _LATD_LATD5_SIZE                                    0x1
#define _LATD_LATD5_LENGTH                                  0x1
#define _LATD_LATD5_MASK                                    0x20
#define _LATD_LATD6_POSN                                    0x6
#define _LATD_LATD6_POSITION                                0x6
#define _LATD_LATD6_SIZE                                    0x1
#define _LATD_LATD6_LENGTH                                  0x1
#define _LATD_LATD6_MASK                                    0x40
#define _LATD_LATD7_POSN                                    0x7
#define _LATD_LATD7_POSITION                                0x7
#define _LATD_LATD7_SIZE                                    0x1
#define _LATD_LATD7_LENGTH                                  0x1
#define _LATD_LATD7_MASK                                    0x80
#define _LATD_LD0_POSN                                      0x0
#define _LATD_LD0_POSITION                                  0x0
#define _LATD_LD0_SIZE                                      0x1
#define _LATD_LD0_LENGTH                                    0x1
#define _LATD_LD0_MASK                                      0x1
#define _LATD_LD1_POSN                                      0x1
#define _LATD_LD1_POSITION                                  0x1
#define _LATD_LD1_SIZE                                      0x1
#define _LATD_LD1_LENGTH                                    0x1
#define _LATD_LD1_MASK                                      0x2
#define _LATD_LD2_POSN                                      0x2
#define _LATD_LD2_POSITION                                  0x2
#define _LATD_LD2_SIZE                                      0x1
#define _LATD_LD2_LENGTH                                    0x1
#define _LATD_LD2_MASK                                      0x4
#define _LATD_LD3_POSN                                      0x3
#define _LATD_LD3_POSITION                                  0x3
#define _LATD_LD3_SIZE                                      0x1
#define _LATD_LD3_LENGTH                                    0x1
#define _LATD_LD3_MASK                                      0x8
#define _LATD_LD4_POSN                                      0x4
#define _LATD_LD4_POSITION                                  0x4
#define _LATD_LD4_SIZE                                      0x1
#define _LATD_LD4_LENGTH                                    0x1
#define _LATD_LD4_MASK                                      0x10
#define _LATD_LD5_POSN                                      0x5
#define _LATD_LD5_POSITION                                  0x5
#define _LATD_LD5_SIZE                                      0x1
#define _LATD_LD5_LENGTH                                    0x1
#define _LATD_LD5_MASK                                      0x20
#define _LATD_LD6_POSN                                      0x6
#define _LATD_LD6_POSITION                                  0x6
#define _LATD_LD6_SIZE                                      0x1
#define _LATD_LD6_LENGTH                                    0x1
#define _LATD_LD6_MASK                                      0x40
#define _LATD_LD7_POSN                                      0x7
#define _LATD_LD7_POSITION                                  0x7
#define _LATD_LD7_SIZE                                      0x1
#define _LATD_LD7_LENGTH                                    0x1
#define _LATD_LD7_MASK                                      0x80

// Register: LATE
#define LATE LATE
extern volatile unsigned char           LATE                __at(0xF8D);
#ifndef _LIB_BUILD
asm("LATE equ 0F8Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATE0                  :1;
        unsigned LATE1                  :1;
        unsigned LATE2                  :1;
        unsigned LATE3                  :1;
        unsigned LATE4                  :1;
        unsigned LATE5                  :1;
        unsigned LATE6                  :1;
        unsigned LATE7                  :1;
    };
    struct {
        unsigned LE0                    :1;
        unsigned LE1                    :1;
        unsigned LE2                    :1;
        unsigned LE3                    :1;
        unsigned LE4                    :1;
        unsigned LE5                    :1;
        unsigned LE6                    :1;
        unsigned LE7                    :1;
    };
} LATEbits_t;
extern volatile LATEbits_t LATEbits __at(0xF8D);
// bitfield macros
#define _LATE_LATE0_POSN                                    0x0
#define _LATE_LATE0_POSITION                                0x0
#define _LATE_LATE0_SIZE                                    0x1
#define _LATE_LATE0_LENGTH                                  0x1
#define _LATE_LATE0_MASK                                    0x1
#define _LATE_LATE1_POSN                                    0x1
#define _LATE_LATE1_POSITION                                0x1
#define _LATE_LATE1_SIZE                                    0x1
#define _LATE_LATE1_LENGTH                                  0x1
#define _LATE_LATE1_MASK                                    0x2
#define _LATE_LATE2_POSN                                    0x2
#define _LATE_LATE2_POSITION                                0x2
#define _LATE_LATE2_SIZE                                    0x1
#define _LATE_LATE2_LENGTH                                  0x1
#define _LATE_LATE2_MASK                                    0x4
#define _LATE_LATE3_POSN                                    0x3
#define _LATE_LATE3_POSITION                                0x3
#define _LATE_LATE3_SIZE                                    0x1
#define _LATE_LATE3_LENGTH                                  0x1
#define _LATE_LATE3_MASK                                    0x8
#define _LATE_LATE4_POSN                                    0x4
#define _LATE_LATE4_POSITION                                0x4
#define _LATE_LATE4_SIZE                                    0x1
#define _LATE_LATE4_LENGTH                                  0x1
#define _LATE_LATE4_MASK                                    0x10
#define _LATE_LATE5_POSN                                    0x5
#define _LATE_LATE5_POSITION                                0x5
#define _LATE_LATE5_SIZE                                    0x1
#define _LATE_LATE5_LENGTH                                  0x1
#define _LATE_LATE5_MASK                                    0x20
#define _LATE_LATE6_POSN                                    0x6
#define _LATE_LATE6_POSITION                                0x6
#define _LATE_LATE6_SIZE                                    0x1
#define _LATE_LATE6_LENGTH                                  0x1
#define _LATE_LATE6_MASK                                    0x40
#define _LATE_LATE7_POSN                                    0x7
#define _LATE_LATE7_POSITION                                0x7
#define _LATE_LATE7_SIZE                                    0x1
#define _LATE_LATE7_LENGTH                                  0x1
#define _LATE_LATE7_MASK                                    0x80
#define _LATE_LE0_POSN                                      0x0
#define _LATE_LE0_POSITION                                  0x0
#define _LATE_LE0_SIZE                                      0x1
#define _LATE_LE0_LENGTH                                    0x1
#define _LATE_LE0_MASK                                      0x1
#define _LATE_LE1_POSN                                      0x1
#define _LATE_LE1_POSITION                                  0x1
#define _LATE_LE1_SIZE                                      0x1
#define _LATE_LE1_LENGTH                                    0x1
#define _LATE_LE1_MASK                                      0x2
#define _LATE_LE2_POSN                                      0x2
#define _LATE_LE2_POSITION                                  0x2
#define _LATE_LE2_SIZE                                      0x1
#define _LATE_LE2_LENGTH                                    0x1
#define _LATE_LE2_MASK                                      0x4
#define _LATE_LE3_POSN                                      0x3
#define _LATE_LE3_POSITION                                  0x3
#define _LATE_LE3_SIZE                                      0x1
#define _LATE_LE3_LENGTH                                    0x1
#define _LATE_LE3_MASK                                      0x8
#define _LATE_LE4_POSN                                      0x4
#define _LATE_LE4_POSITION                                  0x4
#define _LATE_LE4_SIZE                                      0x1
#define _LATE_LE4_LENGTH                                    0x1
#define _LATE_LE4_MASK                                      0x10
#define _LATE_LE5_POSN                                      0x5
#define _LATE_LE5_POSITION                                  0x5
#define _LATE_LE5_SIZE                                      0x1
#define _LATE_LE5_LENGTH                                    0x1
#define _LATE_LE5_MASK                                      0x20
#define _LATE_LE6_POSN                                      0x6
#define _LATE_LE6_POSITION                                  0x6
#define _LATE_LE6_SIZE                                      0x1
#define _LATE_LE6_LENGTH                                    0x1
#define _LATE_LE6_MASK                                      0x40
#define _LATE_LE7_POSN                                      0x7
#define _LATE_LE7_POSITION                                  0x7
#define _LATE_LE7_SIZE                                      0x1
#define _LATE_LE7_LENGTH                                    0x1
#define _LATE_LE7_MASK                                      0x80

// Register: LATF
#define LATF LATF
extern volatile unsigned char           LATF                __at(0xF8E);
#ifndef _LIB_BUILD
asm("LATF equ 0F8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned LATF1                  :1;
        unsigned LATF2                  :1;
        unsigned LATF3                  :1;
        unsigned LATF4                  :1;
        unsigned LATF5                  :1;
        unsigned LATF6                  :1;
        unsigned LATF7                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned LF1                    :1;
        unsigned LF2                    :1;
        unsigned LF3                    :1;
        unsigned LF4                    :1;
        unsigned LF5                    :1;
        unsigned LF6                    :1;
        unsigned LF7                    :1;
    };
} LATFbits_t;
extern volatile LATFbits_t LATFbits __at(0xF8E);
// bitfield macros
#define _LATF_LATF1_POSN                                    0x1
#define _LATF_LATF1_POSITION                                0x1
#define _LATF_LATF1_SIZE                                    0x1
#define _LATF_LATF1_LENGTH                                  0x1
#define _LATF_LATF1_MASK                                    0x2
#define _LATF_LATF2_POSN                                    0x2
#define _LATF_LATF2_POSITION                                0x2
#define _LATF_LATF2_SIZE                                    0x1
#define _LATF_LATF2_LENGTH                                  0x1
#define _LATF_LATF2_MASK                                    0x4
#define _LATF_LATF3_POSN                                    0x3
#define _LATF_LATF3_POSITION                                0x3
#define _LATF_LATF3_SIZE                                    0x1
#define _LATF_LATF3_LENGTH                                  0x1
#define _LATF_LATF3_MASK                                    0x8
#define _LATF_LATF4_POSN                                    0x4
#define _LATF_LATF4_POSITION                                0x4
#define _LATF_LATF4_SIZE                                    0x1
#define _LATF_LATF4_LENGTH                                  0x1
#define _LATF_LATF4_MASK                                    0x10
#define _LATF_LATF5_POSN                                    0x5
#define _LATF_LATF5_POSITION                                0x5
#define _LATF_LATF5_SIZE                                    0x1
#define _LATF_LATF5_LENGTH                                  0x1
#define _LATF_LATF5_MASK                                    0x20
#define _LATF_LATF6_POSN                                    0x6
#define _LATF_LATF6_POSITION                                0x6
#define _LATF_LATF6_SIZE                                    0x1
#define _LATF_LATF6_LENGTH                                  0x1
#define _LATF_LATF6_MASK                                    0x40
#define _LATF_LATF7_POSN                                    0x7
#define _LATF_LATF7_POSITION                                0x7
#define _LATF_LATF7_SIZE                                    0x1
#define _LATF_LATF7_LENGTH                                  0x1
#define _LATF_LATF7_MASK                                    0x80
#define _LATF_LF1_POSN                                      0x1
#define _LATF_LF1_POSITION                                  0x1
#define _LATF_LF1_SIZE                                      0x1
#define _LATF_LF1_LENGTH                                    0x1
#define _LATF_LF1_MASK                                      0x2
#define _LATF_LF2_POSN                                      0x2
#define _LATF_LF2_POSITION                                  0x2
#define _LATF_LF2_SIZE                                      0x1
#define _LATF_LF2_LENGTH                                    0x1
#define _LATF_LF2_MASK                                      0x4
#define _LATF_LF3_POSN                                      0x3
#define _LATF_LF3_POSITION                                  0x3
#define _LATF_LF3_SIZE                                      0x1
#define _LATF_LF3_LENGTH                                    0x1
#define _LATF_LF3_MASK                                      0x8
#define _LATF_LF4_POSN                                      0x4
#define _LATF_LF4_POSITION                                  0x4
#define _LATF_LF4_SIZE                                      0x1
#define _LATF_LF4_LENGTH                                    0x1
#define _LATF_LF4_MASK                                      0x10
#define _LATF_LF5_POSN                                      0x5
#define _LATF_LF5_POSITION                                  0x5
#define _LATF_LF5_SIZE                                      0x1
#define _LATF_LF5_LENGTH                                    0x1
#define _LATF_LF5_MASK                                      0x20
#define _LATF_LF6_POSN                                      0x6
#define _LATF_LF6_POSITION                                  0x6
#define _LATF_LF6_SIZE                                      0x1
#define _LATF_LF6_LENGTH                                    0x1
#define _LATF_LF6_MASK                                      0x40
#define _LATF_LF7_POSN                                      0x7
#define _LATF_LF7_POSITION                                  0x7
#define _LATF_LF7_SIZE                                      0x1
#define _LATF_LF7_LENGTH                                    0x1
#define _LATF_LF7_MASK                                      0x80

// Register: LATG
#define LATG LATG
extern volatile unsigned char           LATG                __at(0xF8F);
#ifndef _LIB_BUILD
asm("LATG equ 0F8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATG0                  :1;
        unsigned LATG1                  :1;
        unsigned LATG2                  :1;
        unsigned LATG3                  :1;
        unsigned LATG4                  :1;
        unsigned                        :1;
        unsigned U1OD                   :1;
        unsigned U2OD                   :1;
    };
    struct {
        unsigned LG0                    :1;
        unsigned LG1                    :1;
        unsigned LG2                    :1;
        unsigned LG3                    :1;
        unsigned LG4                    :1;
    };
} LATGbits_t;
extern volatile LATGbits_t LATGbits __at(0xF8F);
// bitfield macros
#define _LATG_LATG0_POSN                                    0x0
#define _LATG_LATG0_POSITION                                0x0
#define _LATG_LATG0_SIZE                                    0x1
#define _LATG_LATG0_LENGTH                                  0x1
#define _LATG_LATG0_MASK                                    0x1
#define _LATG_LATG1_POSN                                    0x1
#define _LATG_LATG1_POSITION                                0x1
#define _LATG_LATG1_SIZE                                    0x1
#define _LATG_LATG1_LENGTH                                  0x1
#define _LATG_LATG1_MASK                                    0x2
#define _LATG_LATG2_POSN                                    0x2
#define _LATG_LATG2_POSITION                                0x2
#define _LATG_LATG2_SIZE                                    0x1
#define _LATG_LATG2_LENGTH                                  0x1
#define _LATG_LATG2_MASK                                    0x4
#define _LATG_LATG3_POSN                                    0x3
#define _LATG_LATG3_POSITION                                0x3
#define _LATG_LATG3_SIZE                                    0x1
#define _LATG_LATG3_LENGTH                                  0x1
#define _LATG_LATG3_MASK                                    0x8
#define _LATG_LATG4_POSN                                    0x4
#define _LATG_LATG4_POSITION                                0x4
#define _LATG_LATG4_SIZE                                    0x1
#define _LATG_LATG4_LENGTH                                  0x1
#define _LATG_LATG4_MASK                                    0x10
#define _LATG_U1OD_POSN                                     0x6
#define _LATG_U1OD_POSITION                                 0x6
#define _LATG_U1OD_SIZE                                     0x1
#define _LATG_U1OD_LENGTH                                   0x1
#define _LATG_U1OD_MASK                                     0x40
#define _LATG_U2OD_POSN                                     0x7
#define _LATG_U2OD_POSITION                                 0x7
#define _LATG_U2OD_SIZE                                     0x1
#define _LATG_U2OD_LENGTH                                   0x1
#define _LATG_U2OD_MASK                                     0x80
#define _LATG_LG0_POSN                                      0x0
#define _LATG_LG0_POSITION                                  0x0
#define _LATG_LG0_SIZE                                      0x1
#define _LATG_LG0_LENGTH                                    0x1
#define _LATG_LG0_MASK                                      0x1
#define _LATG_LG1_POSN                                      0x1
#define _LATG_LG1_POSITION                                  0x1
#define _LATG_LG1_SIZE                                      0x1
#define _LATG_LG1_LENGTH                                    0x1
#define _LATG_LG1_MASK                                      0x2
#define _LATG_LG2_POSN                                      0x2
#define _LATG_LG2_POSITION                                  0x2
#define _LATG_LG2_SIZE                                      0x1
#define _LATG_LG2_LENGTH                                    0x1
#define _LATG_LG2_MASK                                      0x4
#define _LATG_LG3_POSN                                      0x3
#define _LATG_LG3_POSITION                                  0x3
#define _LATG_LG3_SIZE                                      0x1
#define _LATG_LG3_LENGTH                                    0x1
#define _LATG_LG3_MASK                                      0x8
#define _LATG_LG4_POSN                                      0x4
#define _LATG_LG4_POSITION                                  0x4
#define _LATG_LG4_SIZE                                      0x1
#define _LATG_LG4_LENGTH                                    0x1
#define _LATG_LG4_MASK                                      0x10

// Register: LATH
#define LATH LATH
extern volatile unsigned char           LATH                __at(0xF90);
#ifndef _LIB_BUILD
asm("LATH equ 0F90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATH0                  :1;
        unsigned LATH1                  :1;
        unsigned LATH2                  :1;
        unsigned LATH3                  :1;
        unsigned LATH4                  :1;
        unsigned LATH5                  :1;
        unsigned LATH6                  :1;
        unsigned LATH7                  :1;
    };
    struct {
        unsigned LH0                    :1;
        unsigned LH1                    :1;
        unsigned LH2                    :1;
        unsigned LH3                    :1;
        unsigned LH4                    :1;
        unsigned LH5                    :1;
        unsigned LH6                    :1;
        unsigned LH7                    :1;
    };
} LATHbits_t;
extern volatile LATHbits_t LATHbits __at(0xF90);
// bitfield macros
#define _LATH_LATH0_POSN                                    0x0
#define _LATH_LATH0_POSITION                                0x0
#define _LATH_LATH0_SIZE                                    0x1
#define _LATH_LATH0_LENGTH                                  0x1
#define _LATH_LATH0_MASK                                    0x1
#define _LATH_LATH1_POSN                                    0x1
#define _LATH_LATH1_POSITION                                0x1
#define _LATH_LATH1_SIZE                                    0x1
#define _LATH_LATH1_LENGTH                                  0x1
#define _LATH_LATH1_MASK                                    0x2
#define _LATH_LATH2_POSN                                    0x2
#define _LATH_LATH2_POSITION                                0x2
#define _LATH_LATH2_SIZE                                    0x1
#define _LATH_LATH2_LENGTH                                  0x1
#define _LATH_LATH2_MASK                                    0x4
#define _LATH_LATH3_POSN                                    0x3
#define _LATH_LATH3_POSITION                                0x3
#define _LATH_LATH3_SIZE                                    0x1
#define _LATH_LATH3_LENGTH                                  0x1
#define _LATH_LATH3_MASK                                    0x8
#define _LATH_LATH4_POSN                                    0x4
#define _LATH_LATH4_POSITION                                0x4
#define _LATH_LATH4_SIZE                                    0x1
#define _LATH_LATH4_LENGTH                                  0x1
#define _LATH_LATH4_MASK                                    0x10
#define _LATH_LATH5_POSN                                    0x5
#define _LATH_LATH5_POSITION                                0x5
#define _LATH_LATH5_SIZE                                    0x1
#define _LATH_LATH5_LENGTH                                  0x1
#define _LATH_LATH5_MASK                                    0x20
#define _LATH_LATH6_POSN                                    0x6
#define _LATH_LATH6_POSITION                                0x6
#define _LATH_LATH6_SIZE                                    0x1
#define _LATH_LATH6_LENGTH                                  0x1
#define _LATH_LATH6_MASK                                    0x40
#define _LATH_LATH7_POSN                                    0x7
#define _LATH_LATH7_POSITION                                0x7
#define _LATH_LATH7_SIZE                                    0x1
#define _LATH_LATH7_LENGTH                                  0x1
#define _LATH_LATH7_MASK                                    0x80
#define _LATH_LH0_POSN                                      0x0
#define _LATH_LH0_POSITION                                  0x0
#define _LATH_LH0_SIZE                                      0x1
#define _LATH_LH0_LENGTH                                    0x1
#define _LATH_LH0_MASK                                      0x1
#define _LATH_LH1_POSN                                      0x1
#define _LATH_LH1_POSITION                                  0x1
#define _LATH_LH1_SIZE                                      0x1
#define _LATH_LH1_LENGTH                                    0x1
#define _LATH_LH1_MASK                                      0x2
#define _LATH_LH2_POSN                                      0x2
#define _LATH_LH2_POSITION                                  0x2
#define _LATH_LH2_SIZE                                      0x1
#define _LATH_LH2_LENGTH                                    0x1
#define _LATH_LH2_MASK                                      0x4
#define _LATH_LH3_POSN                                      0x3
#define _LATH_LH3_POSITION                                  0x3
#define _LATH_LH3_SIZE                                      0x1
#define _LATH_LH3_LENGTH                                    0x1
#define _LATH_LH3_MASK                                      0x8
#define _LATH_LH4_POSN                                      0x4
#define _LATH_LH4_POSITION                                  0x4
#define _LATH_LH4_SIZE                                      0x1
#define _LATH_LH4_LENGTH                                    0x1
#define _LATH_LH4_MASK                                      0x10
#define _LATH_LH5_POSN                                      0x5
#define _LATH_LH5_POSITION                                  0x5
#define _LATH_LH5_SIZE                                      0x1
#define _LATH_LH5_LENGTH                                    0x1
#define _LATH_LH5_MASK                                      0x20
#define _LATH_LH6_POSN                                      0x6
#define _LATH_LH6_POSITION                                  0x6
#define _LATH_LH6_SIZE                                      0x1
#define _LATH_LH6_LENGTH                                    0x1
#define _LATH_LH6_MASK                                      0x40
#define _LATH_LH7_POSN                                      0x7
#define _LATH_LH7_POSITION                                  0x7
#define _LATH_LH7_SIZE                                      0x1
#define _LATH_LH7_LENGTH                                    0x1
#define _LATH_LH7_MASK                                      0x80

// Register: LATJ
#define LATJ LATJ
extern volatile unsigned char           LATJ                __at(0xF91);
#ifndef _LIB_BUILD
asm("LATJ equ 0F91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATJ0                  :1;
        unsigned LATJ1                  :1;
        unsigned LATJ2                  :1;
        unsigned LATJ3                  :1;
        unsigned LATJ4                  :1;
        unsigned LATJ5                  :1;
        unsigned LATJ6                  :1;
        unsigned LATJ7                  :1;
    };
    struct {
        unsigned LJ0                    :1;
        unsigned LJ1                    :1;
        unsigned LJ2                    :1;
        unsigned LJ3                    :1;
        unsigned LJ4                    :1;
        unsigned LJ5                    :1;
        unsigned LJ6                    :1;
        unsigned LJ7                    :1;
    };
} LATJbits_t;
extern volatile LATJbits_t LATJbits __at(0xF91);
// bitfield macros
#define _LATJ_LATJ0_POSN                                    0x0
#define _LATJ_LATJ0_POSITION                                0x0
#define _LATJ_LATJ0_SIZE                                    0x1
#define _LATJ_LATJ0_LENGTH                                  0x1
#define _LATJ_LATJ0_MASK                                    0x1
#define _LATJ_LATJ1_POSN                                    0x1
#define _LATJ_LATJ1_POSITION                                0x1
#define _LATJ_LATJ1_SIZE                                    0x1
#define _LATJ_LATJ1_LENGTH                                  0x1
#define _LATJ_LATJ1_MASK                                    0x2
#define _LATJ_LATJ2_POSN                                    0x2
#define _LATJ_LATJ2_POSITION                                0x2
#define _LATJ_LATJ2_SIZE                                    0x1
#define _LATJ_LATJ2_LENGTH                                  0x1
#define _LATJ_LATJ2_MASK                                    0x4
#define _LATJ_LATJ3_POSN                                    0x3
#define _LATJ_LATJ3_POSITION                                0x3
#define _LATJ_LATJ3_SIZE                                    0x1
#define _LATJ_LATJ3_LENGTH                                  0x1
#define _LATJ_LATJ3_MASK                                    0x8
#define _LATJ_LATJ4_POSN                                    0x4
#define _LATJ_LATJ4_POSITION                                0x4
#define _LATJ_LATJ4_SIZE                                    0x1
#define _LATJ_LATJ4_LENGTH                                  0x1
#define _LATJ_LATJ4_MASK                                    0x10
#define _LATJ_LATJ5_POSN                                    0x5
#define _LATJ_LATJ5_POSITION                                0x5
#define _LATJ_LATJ5_SIZE                                    0x1
#define _LATJ_LATJ5_LENGTH                                  0x1
#define _LATJ_LATJ5_MASK                                    0x20
#define _LATJ_LATJ6_POSN                                    0x6
#define _LATJ_LATJ6_POSITION                                0x6
#define _LATJ_LATJ6_SIZE                                    0x1
#define _LATJ_LATJ6_LENGTH                                  0x1
#define _LATJ_LATJ6_MASK                                    0x40
#define _LATJ_LATJ7_POSN                                    0x7
#define _LATJ_LATJ7_POSITION                                0x7
#define _LATJ_LATJ7_SIZE                                    0x1
#define _LATJ_LATJ7_LENGTH                                  0x1
#define _LATJ_LATJ7_MASK                                    0x80
#define _LATJ_LJ0_POSN                                      0x0
#define _LATJ_LJ0_POSITION                                  0x0
#define _LATJ_LJ0_SIZE                                      0x1
#define _LATJ_LJ0_LENGTH                                    0x1
#define _LATJ_LJ0_MASK                                      0x1
#define _LATJ_LJ1_POSN                                      0x1
#define _LATJ_LJ1_POSITION                                  0x1
#define _LATJ_LJ1_SIZE                                      0x1
#define _LATJ_LJ1_LENGTH                                    0x1
#define _LATJ_LJ1_MASK                                      0x2
#define _LATJ_LJ2_POSN                                      0x2
#define _LATJ_LJ2_POSITION                                  0x2
#define _LATJ_LJ2_SIZE                                      0x1
#define _LATJ_LJ2_LENGTH                                    0x1
#define _LATJ_LJ2_MASK                                      0x4
#define _LATJ_LJ3_POSN                                      0x3
#define _LATJ_LJ3_POSITION                                  0x3
#define _LATJ_LJ3_SIZE                                      0x1
#define _LATJ_LJ3_LENGTH                                    0x1
#define _LATJ_LJ3_MASK                                      0x8
#define _LATJ_LJ4_POSN                                      0x4
#define _LATJ_LJ4_POSITION                                  0x4
#define _LATJ_LJ4_SIZE                                      0x1
#define _LATJ_LJ4_LENGTH                                    0x1
#define _LATJ_LJ4_MASK                                      0x10
#define _LATJ_LJ5_POSN                                      0x5
#define _LATJ_LJ5_POSITION                                  0x5
#define _LATJ_LJ5_SIZE                                      0x1
#define _LATJ_LJ5_LENGTH                                    0x1
#define _LATJ_LJ5_MASK                                      0x20
#define _LATJ_LJ6_POSN                                      0x6
#define _LATJ_LJ6_POSITION                                  0x6
#define _LATJ_LJ6_SIZE                                      0x1
#define _LATJ_LJ6_LENGTH                                    0x1
#define _LATJ_LJ6_MASK                                      0x40
#define _LATJ_LJ7_POSN                                      0x7
#define _LATJ_LJ7_POSITION                                  0x7
#define _LATJ_LJ7_SIZE                                      0x1
#define _LATJ_LJ7_LENGTH                                    0x1
#define _LATJ_LJ7_MASK                                      0x80

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0xF92);
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
#endif
// aliases
extern volatile unsigned char           DDRA                __at(0xF92);
#ifndef _LIB_BUILD
asm("DDRA equ 0F92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0xF92);
// bitfield macros
#define _TRISA_TRISA0_POSN                                  0x0
#define _TRISA_TRISA0_POSITION                              0x0
#define _TRISA_TRISA0_SIZE                                  0x1
#define _TRISA_TRISA0_LENGTH                                0x1
#define _TRISA_TRISA0_MASK                                  0x1
#define _TRISA_TRISA1_POSN                                  0x1
#define _TRISA_TRISA1_POSITION                              0x1
#define _TRISA_TRISA1_SIZE                                  0x1
#define _TRISA_TRISA1_LENGTH                                0x1
#define _TRISA_TRISA1_MASK                                  0x2
#define _TRISA_TRISA2_POSN                                  0x2
#define _TRISA_TRISA2_POSITION                              0x2
#define _TRISA_TRISA2_SIZE                                  0x1
#define _TRISA_TRISA2_LENGTH                                0x1
#define _TRISA_TRISA2_MASK                                  0x4
#define _TRISA_TRISA3_POSN                                  0x3
#define _TRISA_TRISA3_POSITION                              0x3
#define _TRISA_TRISA3_SIZE                                  0x1
#define _TRISA_TRISA3_LENGTH                                0x1
#define _TRISA_TRISA3_MASK                                  0x8
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
#define _TRISA_TRISA6_POSN                                  0x6
#define _TRISA_TRISA6_POSITION                              0x6
#define _TRISA_TRISA6_SIZE                                  0x1
#define _TRISA_TRISA6_LENGTH                                0x1
#define _TRISA_TRISA6_MASK                                  0x40
#define _TRISA_TRISA7_POSN                                  0x7
#define _TRISA_TRISA7_POSITION                              0x7
#define _TRISA_TRISA7_SIZE                                  0x1
#define _TRISA_TRISA7_LENGTH                                0x1
#define _TRISA_TRISA7_MASK                                  0x80
#define _TRISA_RA0_POSN                                     0x0
#define _TRISA_RA0_POSITION                                 0x0
#define _TRISA_RA0_SIZE                                     0x1
#define _TRISA_RA0_LENGTH                                   0x1
#define _TRISA_RA0_MASK                                     0x1
#define _TRISA_RA1_POSN                                     0x1
#define _TRISA_RA1_POSITION                                 0x1
#define _TRISA_RA1_SIZE                                     0x1
#define _TRISA_RA1_LENGTH                                   0x1
#define _TRISA_RA1_MASK                                     0x2
#define _TRISA_RA2_POSN                                     0x2
#define _TRISA_RA2_POSITION                                 0x2
#define _TRISA_RA2_SIZE                                     0x1
#define _TRISA_RA2_LENGTH                                   0x1
#define _TRISA_RA2_MASK                                     0x4
#define _TRISA_RA3_POSN                                     0x3
#define _TRISA_RA3_POSITION                                 0x3
#define _TRISA_RA3_SIZE                                     0x1
#define _TRISA_RA3_LENGTH                                   0x1
#define _TRISA_RA3_MASK                                     0x8
#define _TRISA_RA4_POSN                                     0x4
#define _TRISA_RA4_POSITION                                 0x4
#define _TRISA_RA4_SIZE                                     0x1
#define _TRISA_RA4_LENGTH                                   0x1
#define _TRISA_RA4_MASK                                     0x10
#define _TRISA_RA5_POSN                                     0x5
#define _TRISA_RA5_POSITION                                 0x5
#define _TRISA_RA5_SIZE                                     0x1
#define _TRISA_RA5_LENGTH                                   0x1
#define _TRISA_RA5_MASK                                     0x20
#define _TRISA_RA6_POSN                                     0x6
#define _TRISA_RA6_POSITION                                 0x6
#define _TRISA_RA6_SIZE                                     0x1
#define _TRISA_RA6_LENGTH                                   0x1
#define _TRISA_RA6_MASK                                     0x40
#define _TRISA_RA7_POSN                                     0x7
#define _TRISA_RA7_POSITION                                 0x7
#define _TRISA_RA7_SIZE                                     0x1
#define _TRISA_RA7_LENGTH                                   0x1
#define _TRISA_RA7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} DDRAbits_t;
extern volatile DDRAbits_t DDRAbits __at(0xF92);
// bitfield macros
#define _DDRA_TRISA0_POSN                                   0x0
#define _DDRA_TRISA0_POSITION                               0x0
#define _DDRA_TRISA0_SIZE                                   0x1
#define _DDRA_TRISA0_LENGTH                                 0x1
#define _DDRA_TRISA0_MASK                                   0x1
#define _DDRA_TRISA1_POSN                                   0x1
#define _DDRA_TRISA1_POSITION                               0x1
#define _DDRA_TRISA1_SIZE                                   0x1
#define _DDRA_TRISA1_LENGTH                                 0x1
#define _DDRA_TRISA1_MASK                                   0x2
#define _DDRA_TRISA2_POSN                                   0x2
#define _DDRA_TRISA2_POSITION                               0x2
#define _DDRA_TRISA2_SIZE                                   0x1
#define _DDRA_TRISA2_LENGTH                                 0x1
#define _DDRA_TRISA2_MASK                                   0x4
#define _DDRA_TRISA3_POSN                                   0x3
#define _DDRA_TRISA3_POSITION                               0x3
#define _DDRA_TRISA3_SIZE                                   0x1
#define _DDRA_TRISA3_LENGTH                                 0x1
#define _DDRA_TRISA3_MASK                                   0x8
#define _DDRA_TRISA4_POSN                                   0x4
#define _DDRA_TRISA4_POSITION                               0x4
#define _DDRA_TRISA4_SIZE                                   0x1
#define _DDRA_TRISA4_LENGTH                                 0x1
#define _DDRA_TRISA4_MASK                                   0x10
#define _DDRA_TRISA5_POSN                                   0x5
#define _DDRA_TRISA5_POSITION                               0x5
#define _DDRA_TRISA5_SIZE                                   0x1
#define _DDRA_TRISA5_LENGTH                                 0x1
#define _DDRA_TRISA5_MASK                                   0x20
#define _DDRA_TRISA6_POSN                                   0x6
#define _DDRA_TRISA6_POSITION                               0x6
#define _DDRA_TRISA6_SIZE                                   0x1
#define _DDRA_TRISA6_LENGTH                                 0x1
#define _DDRA_TRISA6_MASK                                   0x40
#define _DDRA_TRISA7_POSN                                   0x7
#define _DDRA_TRISA7_POSITION                               0x7
#define _DDRA_TRISA7_SIZE                                   0x1
#define _DDRA_TRISA7_LENGTH                                 0x1
#define _DDRA_TRISA7_MASK                                   0x80
#define _DDRA_RA0_POSN                                      0x0
#define _DDRA_RA0_POSITION                                  0x0
#define _DDRA_RA0_SIZE                                      0x1
#define _DDRA_RA0_LENGTH                                    0x1
#define _DDRA_RA0_MASK                                      0x1
#define _DDRA_RA1_POSN                                      0x1
#define _DDRA_RA1_POSITION                                  0x1
#define _DDRA_RA1_SIZE                                      0x1
#define _DDRA_RA1_LENGTH                                    0x1
#define _DDRA_RA1_MASK                                      0x2
#define _DDRA_RA2_POSN                                      0x2
#define _DDRA_RA2_POSITION                                  0x2
#define _DDRA_RA2_SIZE                                      0x1
#define _DDRA_RA2_LENGTH                                    0x1
#define _DDRA_RA2_MASK                                      0x4
#define _DDRA_RA3_POSN                                      0x3
#define _DDRA_RA3_POSITION                                  0x3
#define _DDRA_RA3_SIZE                                      0x1
#define _DDRA_RA3_LENGTH                                    0x1
#define _DDRA_RA3_MASK                                      0x8
#define _DDRA_RA4_POSN                                      0x4
#define _DDRA_RA4_POSITION                                  0x4
#define _DDRA_RA4_SIZE                                      0x1
#define _DDRA_RA4_LENGTH                                    0x1
#define _DDRA_RA4_MASK                                      0x10
#define _DDRA_RA5_POSN                                      0x5
#define _DDRA_RA5_POSITION                                  0x5
#define _DDRA_RA5_SIZE                                      0x1
#define _DDRA_RA5_LENGTH                                    0x1
#define _DDRA_RA5_MASK                                      0x20
#define _DDRA_RA6_POSN                                      0x6
#define _DDRA_RA6_POSITION                                  0x6
#define _DDRA_RA6_SIZE                                      0x1
#define _DDRA_RA6_LENGTH                                    0x1
#define _DDRA_RA6_MASK                                      0x40
#define _DDRA_RA7_POSN                                      0x7
#define _DDRA_RA7_POSITION                                  0x7
#define _DDRA_RA7_SIZE                                      0x1
#define _DDRA_RA7_LENGTH                                    0x1
#define _DDRA_RA7_MASK                                      0x80

// Register: TRISB
#define TRISB TRISB
extern volatile unsigned char           TRISB               __at(0xF93);
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
#endif
// aliases
extern volatile unsigned char           DDRB                __at(0xF93);
#ifndef _LIB_BUILD
asm("DDRB equ 0F93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0xF93);
// bitfield macros
#define _TRISB_TRISB0_POSN                                  0x0
#define _TRISB_TRISB0_POSITION                              0x0
#define _TRISB_TRISB0_SIZE                                  0x1
#define _TRISB_TRISB0_LENGTH                                0x1
#define _TRISB_TRISB0_MASK                                  0x1
#define _TRISB_TRISB1_POSN                                  0x1
#define _TRISB_TRISB1_POSITION                              0x1
#define _TRISB_TRISB1_SIZE                                  0x1
#define _TRISB_TRISB1_LENGTH                                0x1
#define _TRISB_TRISB1_MASK                                  0x2
#define _TRISB_TRISB2_POSN                                  0x2
#define _TRISB_TRISB2_POSITION                              0x2
#define _TRISB_TRISB2_SIZE                                  0x1
#define _TRISB_TRISB2_LENGTH                                0x1
#define _TRISB_TRISB2_MASK                                  0x4
#define _TRISB_TRISB3_POSN                                  0x3
#define _TRISB_TRISB3_POSITION                              0x3
#define _TRISB_TRISB3_SIZE                                  0x1
#define _TRISB_TRISB3_LENGTH                                0x1
#define _TRISB_TRISB3_MASK                                  0x8
#define _TRISB_TRISB4_POSN                                  0x4
#define _TRISB_TRISB4_POSITION                              0x4
#define _TRISB_TRISB4_SIZE                                  0x1
#define _TRISB_TRISB4_LENGTH                                0x1
#define _TRISB_TRISB4_MASK                                  0x10
#define _TRISB_TRISB5_POSN                                  0x5
#define _TRISB_TRISB5_POSITION                              0x5
#define _TRISB_TRISB5_SIZE                                  0x1
#define _TRISB_TRISB5_LENGTH                                0x1
#define _TRISB_TRISB5_MASK                                  0x20
#define _TRISB_TRISB6_POSN                                  0x6
#define _TRISB_TRISB6_POSITION                              0x6
#define _TRISB_TRISB6_SIZE                                  0x1
#define _TRISB_TRISB6_LENGTH                                0x1
#define _TRISB_TRISB6_MASK                                  0x40
#define _TRISB_TRISB7_POSN                                  0x7
#define _TRISB_TRISB7_POSITION                              0x7
#define _TRISB_TRISB7_SIZE                                  0x1
#define _TRISB_TRISB7_LENGTH                                0x1
#define _TRISB_TRISB7_MASK                                  0x80
#define _TRISB_RB0_POSN                                     0x0
#define _TRISB_RB0_POSITION                                 0x0
#define _TRISB_RB0_SIZE                                     0x1
#define _TRISB_RB0_LENGTH                                   0x1
#define _TRISB_RB0_MASK                                     0x1
#define _TRISB_RB1_POSN                                     0x1
#define _TRISB_RB1_POSITION                                 0x1
#define _TRISB_RB1_SIZE                                     0x1
#define _TRISB_RB1_LENGTH                                   0x1
#define _TRISB_RB1_MASK                                     0x2
#define _TRISB_RB2_POSN                                     0x2
#define _TRISB_RB2_POSITION                                 0x2
#define _TRISB_RB2_SIZE                                     0x1
#define _TRISB_RB2_LENGTH                                   0x1
#define _TRISB_RB2_MASK                                     0x4
#define _TRISB_RB3_POSN                                     0x3
#define _TRISB_RB3_POSITION                                 0x3
#define _TRISB_RB3_SIZE                                     0x1
#define _TRISB_RB3_LENGTH                                   0x1
#define _TRISB_RB3_MASK                                     0x8
#define _TRISB_RB4_POSN                                     0x4
#define _TRISB_RB4_POSITION                                 0x4
#define _TRISB_RB4_SIZE                                     0x1
#define _TRISB_RB4_LENGTH                                   0x1
#define _TRISB_RB4_MASK                                     0x10
#define _TRISB_RB5_POSN                                     0x5
#define _TRISB_RB5_POSITION                                 0x5
#define _TRISB_RB5_SIZE                                     0x1
#define _TRISB_RB5_LENGTH                                   0x1
#define _TRISB_RB5_MASK                                     0x20
#define _TRISB_RB6_POSN                                     0x6
#define _TRISB_RB6_POSITION                                 0x6
#define _TRISB_RB6_SIZE                                     0x1
#define _TRISB_RB6_LENGTH                                   0x1
#define _TRISB_RB6_MASK                                     0x40
#define _TRISB_RB7_POSN                                     0x7
#define _TRISB_RB7_POSITION                                 0x7
#define _TRISB_RB7_SIZE                                     0x1
#define _TRISB_RB7_LENGTH                                   0x1
#define _TRISB_RB7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits_t;
extern volatile DDRBbits_t DDRBbits __at(0xF93);
// bitfield macros
#define _DDRB_TRISB0_POSN                                   0x0
#define _DDRB_TRISB0_POSITION                               0x0
#define _DDRB_TRISB0_SIZE                                   0x1
#define _DDRB_TRISB0_LENGTH                                 0x1
#define _DDRB_TRISB0_MASK                                   0x1
#define _DDRB_TRISB1_POSN                                   0x1
#define _DDRB_TRISB1_POSITION                               0x1
#define _DDRB_TRISB1_SIZE                                   0x1
#define _DDRB_TRISB1_LENGTH                                 0x1
#define _DDRB_TRISB1_MASK                                   0x2
#define _DDRB_TRISB2_POSN                                   0x2
#define _DDRB_TRISB2_POSITION                               0x2
#define _DDRB_TRISB2_SIZE                                   0x1
#define _DDRB_TRISB2_LENGTH                                 0x1
#define _DDRB_TRISB2_MASK                                   0x4
#define _DDRB_TRISB3_POSN                                   0x3
#define _DDRB_TRISB3_POSITION                               0x3
#define _DDRB_TRISB3_SIZE                                   0x1
#define _DDRB_TRISB3_LENGTH                                 0x1
#define _DDRB_TRISB3_MASK                                   0x8
#define _DDRB_TRISB4_POSN                                   0x4
#define _DDRB_TRISB4_POSITION                               0x4
#define _DDRB_TRISB4_SIZE                                   0x1
#define _DDRB_TRISB4_LENGTH                                 0x1
#define _DDRB_TRISB4_MASK                                   0x10
#define _DDRB_TRISB5_POSN                                   0x5
#define _DDRB_TRISB5_POSITION                               0x5
#define _DDRB_TRISB5_SIZE                                   0x1
#define _DDRB_TRISB5_LENGTH                                 0x1
#define _DDRB_TRISB5_MASK                                   0x20
#define _DDRB_TRISB6_POSN                                   0x6
#define _DDRB_TRISB6_POSITION                               0x6
#define _DDRB_TRISB6_SIZE                                   0x1
#define _DDRB_TRISB6_LENGTH                                 0x1
#define _DDRB_TRISB6_MASK                                   0x40
#define _DDRB_TRISB7_POSN                                   0x7
#define _DDRB_TRISB7_POSITION                               0x7
#define _DDRB_TRISB7_SIZE                                   0x1
#define _DDRB_TRISB7_LENGTH                                 0x1
#define _DDRB_TRISB7_MASK                                   0x80
#define _DDRB_RB0_POSN                                      0x0
#define _DDRB_RB0_POSITION                                  0x0
#define _DDRB_RB0_SIZE                                      0x1
#define _DDRB_RB0_LENGTH                                    0x1
#define _DDRB_RB0_MASK                                      0x1
#define _DDRB_RB1_POSN                                      0x1
#define _DDRB_RB1_POSITION                                  0x1
#define _DDRB_RB1_SIZE                                      0x1
#define _DDRB_RB1_LENGTH                                    0x1
#define _DDRB_RB1_MASK                                      0x2
#define _DDRB_RB2_POSN                                      0x2
#define _DDRB_RB2_POSITION                                  0x2
#define _DDRB_RB2_SIZE                                      0x1
#define _DDRB_RB2_LENGTH                                    0x1
#define _DDRB_RB2_MASK                                      0x4
#define _DDRB_RB3_POSN                                      0x3
#define _DDRB_RB3_POSITION                                  0x3
#define _DDRB_RB3_SIZE                                      0x1
#define _DDRB_RB3_LENGTH                                    0x1
#define _DDRB_RB3_MASK                                      0x8
#define _DDRB_RB4_POSN                                      0x4
#define _DDRB_RB4_POSITION                                  0x4
#define _DDRB_RB4_SIZE                                      0x1
#define _DDRB_RB4_LENGTH                                    0x1
#define _DDRB_RB4_MASK                                      0x10
#define _DDRB_RB5_POSN                                      0x5
#define _DDRB_RB5_POSITION                                  0x5
#define _DDRB_RB5_SIZE                                      0x1
#define _DDRB_RB5_LENGTH                                    0x1
#define _DDRB_RB5_MASK                                      0x20
#define _DDRB_RB6_POSN                                      0x6
#define _DDRB_RB6_POSITION                                  0x6
#define _DDRB_RB6_SIZE                                      0x1
#define _DDRB_RB6_LENGTH                                    0x1
#define _DDRB_RB6_MASK                                      0x40
#define _DDRB_RB7_POSN                                      0x7
#define _DDRB_RB7_POSITION                                  0x7
#define _DDRB_RB7_SIZE                                      0x1
#define _DDRB_RB7_LENGTH                                    0x1
#define _DDRB_RB7_MASK                                      0x80

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0xF94);
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
#endif
// aliases
extern volatile unsigned char           DDRC                __at(0xF94);
#ifndef _LIB_BUILD
asm("DDRC equ 0F94h");
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
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0xF94);
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
#define _TRISC_TRISC6_POSN                                  0x6
#define _TRISC_TRISC6_POSITION                              0x6
#define _TRISC_TRISC6_SIZE                                  0x1
#define _TRISC_TRISC6_LENGTH                                0x1
#define _TRISC_TRISC6_MASK                                  0x40
#define _TRISC_TRISC7_POSN                                  0x7
#define _TRISC_TRISC7_POSITION                              0x7
#define _TRISC_TRISC7_SIZE                                  0x1
#define _TRISC_TRISC7_LENGTH                                0x1
#define _TRISC_TRISC7_MASK                                  0x80
#define _TRISC_RC0_POSN                                     0x0
#define _TRISC_RC0_POSITION                                 0x0
#define _TRISC_RC0_SIZE                                     0x1
#define _TRISC_RC0_LENGTH                                   0x1
#define _TRISC_RC0_MASK                                     0x1
#define _TRISC_RC1_POSN                                     0x1
#define _TRISC_RC1_POSITION                                 0x1
#define _TRISC_RC1_SIZE                                     0x1
#define _TRISC_RC1_LENGTH                                   0x1
#define _TRISC_RC1_MASK                                     0x2
#define _TRISC_RC2_POSN                                     0x2
#define _TRISC_RC2_POSITION                                 0x2
#define _TRISC_RC2_SIZE                                     0x1
#define _TRISC_RC2_LENGTH                                   0x1
#define _TRISC_RC2_MASK                                     0x4
#define _TRISC_RC3_POSN                                     0x3
#define _TRISC_RC3_POSITION                                 0x3
#define _TRISC_RC3_SIZE                                     0x1
#define _TRISC_RC3_LENGTH                                   0x1
#define _TRISC_RC3_MASK                                     0x8
#define _TRISC_RC4_POSN                                     0x4
#define _TRISC_RC4_POSITION                                 0x4
#define _TRISC_RC4_SIZE                                     0x1
#define _TRISC_RC4_LENGTH                                   0x1
#define _TRISC_RC4_MASK                                     0x10
#define _TRISC_RC5_POSN                                     0x5
#define _TRISC_RC5_POSITION                                 0x5
#define _TRISC_RC5_SIZE                                     0x1
#define _TRISC_RC5_LENGTH                                   0x1
#define _TRISC_RC5_MASK                                     0x20
#define _TRISC_RC6_POSN                                     0x6
#define _TRISC_RC6_POSITION                                 0x6
#define _TRISC_RC6_SIZE                                     0x1
#define _TRISC_RC6_LENGTH                                   0x1
#define _TRISC_RC6_MASK                                     0x40
#define _TRISC_RC7_POSN                                     0x7
#define _TRISC_RC7_POSITION                                 0x7
#define _TRISC_RC7_SIZE                                     0x1
#define _TRISC_RC7_LENGTH                                   0x1
#define _TRISC_RC7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} DDRCbits_t;
extern volatile DDRCbits_t DDRCbits __at(0xF94);
// bitfield macros
#define _DDRC_TRISC0_POSN                                   0x0
#define _DDRC_TRISC0_POSITION                               0x0
#define _DDRC_TRISC0_SIZE                                   0x1
#define _DDRC_TRISC0_LENGTH                                 0x1
#define _DDRC_TRISC0_MASK                                   0x1
#define _DDRC_TRISC1_POSN                                   0x1
#define _DDRC_TRISC1_POSITION                               0x1
#define _DDRC_TRISC1_SIZE                                   0x1
#define _DDRC_TRISC1_LENGTH                                 0x1
#define _DDRC_TRISC1_MASK                                   0x2
#define _DDRC_TRISC2_POSN                                   0x2
#define _DDRC_TRISC2_POSITION                               0x2
#define _DDRC_TRISC2_SIZE                                   0x1
#define _DDRC_TRISC2_LENGTH                                 0x1
#define _DDRC_TRISC2_MASK                                   0x4
#define _DDRC_TRISC3_POSN                                   0x3
#define _DDRC_TRISC3_POSITION                               0x3
#define _DDRC_TRISC3_SIZE                                   0x1
#define _DDRC_TRISC3_LENGTH                                 0x1
#define _DDRC_TRISC3_MASK                                   0x8
#define _DDRC_TRISC4_POSN                                   0x4
#define _DDRC_TRISC4_POSITION                               0x4
#define _DDRC_TRISC4_SIZE                                   0x1
#define _DDRC_TRISC4_LENGTH                                 0x1
#define _DDRC_TRISC4_MASK                                   0x10
#define _DDRC_TRISC5_POSN                                   0x5
#define _DDRC_TRISC5_POSITION                               0x5
#define _DDRC_TRISC5_SIZE                                   0x1
#define _DDRC_TRISC5_LENGTH                                 0x1
#define _DDRC_TRISC5_MASK                                   0x20
#define _DDRC_TRISC6_POSN                                   0x6
#define _DDRC_TRISC6_POSITION                               0x6
#define _DDRC_TRISC6_SIZE                                   0x1
#define _DDRC_TRISC6_LENGTH                                 0x1
#define _DDRC_TRISC6_MASK                                   0x40
#define _DDRC_TRISC7_POSN                                   0x7
#define _DDRC_TRISC7_POSITION                               0x7
#define _DDRC_TRISC7_SIZE                                   0x1
#define _DDRC_TRISC7_LENGTH                                 0x1
#define _DDRC_TRISC7_MASK                                   0x80
#define _DDRC_RC0_POSN                                      0x0
#define _DDRC_RC0_POSITION                                  0x0
#define _DDRC_RC0_SIZE                                      0x1
#define _DDRC_RC0_LENGTH                                    0x1
#define _DDRC_RC0_MASK                                      0x1
#define _DDRC_RC1_POSN                                      0x1
#define _DDRC_RC1_POSITION                                  0x1
#define _DDRC_RC1_SIZE                                      0x1
#define _DDRC_RC1_LENGTH                                    0x1
#define _DDRC_RC1_MASK                                      0x2
#define _DDRC_RC2_POSN                                      0x2
#define _DDRC_RC2_POSITION                                  0x2
#define _DDRC_RC2_SIZE                                      0x1
#define _DDRC_RC2_LENGTH                                    0x1
#define _DDRC_RC2_MASK                                      0x4
#define _DDRC_RC3_POSN                                      0x3
#define _DDRC_RC3_POSITION                                  0x3
#define _DDRC_RC3_SIZE                                      0x1
#define _DDRC_RC3_LENGTH                                    0x1
#define _DDRC_RC3_MASK                                      0x8
#define _DDRC_RC4_POSN                                      0x4
#define _DDRC_RC4_POSITION                                  0x4
#define _DDRC_RC4_SIZE                                      0x1
#define _DDRC_RC4_LENGTH                                    0x1
#define _DDRC_RC4_MASK                                      0x10
#define _DDRC_RC5_POSN                                      0x5
#define _DDRC_RC5_POSITION                                  0x5
#define _DDRC_RC5_SIZE                                      0x1
#define _DDRC_RC5_LENGTH                                    0x1
#define _DDRC_RC5_MASK                                      0x20
#define _DDRC_RC6_POSN                                      0x6
#define _DDRC_RC6_POSITION                                  0x6
#define _DDRC_RC6_SIZE                                      0x1
#define _DDRC_RC6_LENGTH                                    0x1
#define _DDRC_RC6_MASK                                      0x40
#define _DDRC_RC7_POSN                                      0x7
#define _DDRC_RC7_POSITION                                  0x7
#define _DDRC_RC7_SIZE                                      0x1
#define _DDRC_RC7_LENGTH                                    0x1
#define _DDRC_RC7_MASK                                      0x80

// Register: TRISD
#define TRISD TRISD
extern volatile unsigned char           TRISD               __at(0xF95);
#ifndef _LIB_BUILD
asm("TRISD equ 0F95h");
#endif
// aliases
extern volatile unsigned char           DDRD                __at(0xF95);
#ifndef _LIB_BUILD
asm("DDRD equ 0F95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
        unsigned TRISD3                 :1;
        unsigned TRISD4                 :1;
        unsigned TRISD5                 :1;
        unsigned TRISD6                 :1;
        unsigned TRISD7                 :1;
    };
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
} TRISDbits_t;
extern volatile TRISDbits_t TRISDbits __at(0xF95);
// bitfield macros
#define _TRISD_TRISD0_POSN                                  0x0
#define _TRISD_TRISD0_POSITION                              0x0
#define _TRISD_TRISD0_SIZE                                  0x1
#define _TRISD_TRISD0_LENGTH                                0x1
#define _TRISD_TRISD0_MASK                                  0x1
#define _TRISD_TRISD1_POSN                                  0x1
#define _TRISD_TRISD1_POSITION                              0x1
#define _TRISD_TRISD1_SIZE                                  0x1
#define _TRISD_TRISD1_LENGTH                                0x1
#define _TRISD_TRISD1_MASK                                  0x2
#define _TRISD_TRISD2_POSN                                  0x2
#define _TRISD_TRISD2_POSITION                              0x2
#define _TRISD_TRISD2_SIZE                                  0x1
#define _TRISD_TRISD2_LENGTH                                0x1
#define _TRISD_TRISD2_MASK                                  0x4
#define _TRISD_TRISD3_POSN                                  0x3
#define _TRISD_TRISD3_POSITION                              0x3
#define _TRISD_TRISD3_SIZE                                  0x1
#define _TRISD_TRISD3_LENGTH                                0x1
#define _TRISD_TRISD3_MASK                                  0x8
#define _TRISD_TRISD4_POSN                                  0x4
#define _TRISD_TRISD4_POSITION                              0x4
#define _TRISD_TRISD4_SIZE                                  0x1
#define _TRISD_TRISD4_LENGTH                                0x1
#define _TRISD_TRISD4_MASK                                  0x10
#define _TRISD_TRISD5_POSN                                  0x5
#define _TRISD_TRISD5_POSITION                              0x5
#define _TRISD_TRISD5_SIZE                                  0x1
#define _TRISD_TRISD5_LENGTH                                0x1
#define _TRISD_TRISD5_MASK                                  0x20
#define _TRISD_TRISD6_POSN                                  0x6
#define _TRISD_TRISD6_POSITION                              0x6
#define _TRISD_TRISD6_SIZE                                  0x1
#define _TRISD_TRISD6_LENGTH                                0x1
#define _TRISD_TRISD6_MASK                                  0x40
#define _TRISD_TRISD7_POSN                                  0x7
#define _TRISD_TRISD7_POSITION                              0x7
#define _TRISD_TRISD7_SIZE                                  0x1
#define _TRISD_TRISD7_LENGTH                                0x1
#define _TRISD_TRISD7_MASK                                  0x80
#define _TRISD_RD0_POSN                                     0x0
#define _TRISD_RD0_POSITION                                 0x0
#define _TRISD_RD0_SIZE                                     0x1
#define _TRISD_RD0_LENGTH                                   0x1
#define _TRISD_RD0_MASK                                     0x1
#define _TRISD_RD1_POSN                                     0x1
#define _TRISD_RD1_POSITION                                 0x1
#define _TRISD_RD1_SIZE                                     0x1
#define _TRISD_RD1_LENGTH                                   0x1
#define _TRISD_RD1_MASK                                     0x2
#define _TRISD_RD2_POSN                                     0x2
#define _TRISD_RD2_POSITION                                 0x2
#define _TRISD_RD2_SIZE                                     0x1
#define _TRISD_RD2_LENGTH                                   0x1
#define _TRISD_RD2_MASK                                     0x4
#define _TRISD_RD3_POSN                                     0x3
#define _TRISD_RD3_POSITION                                 0x3
#define _TRISD_RD3_SIZE                                     0x1
#define _TRISD_RD3_LENGTH                                   0x1
#define _TRISD_RD3_MASK                                     0x8
#define _TRISD_RD4_POSN                                     0x4
#define _TRISD_RD4_POSITION                                 0x4
#define _TRISD_RD4_SIZE                                     0x1
#define _TRISD_RD4_LENGTH                                   0x1
#define _TRISD_RD4_MASK                                     0x10
#define _TRISD_RD5_POSN                                     0x5
#define _TRISD_RD5_POSITION                                 0x5
#define _TRISD_RD5_SIZE                                     0x1
#define _TRISD_RD5_LENGTH                                   0x1
#define _TRISD_RD5_MASK                                     0x20
#define _TRISD_RD6_POSN                                     0x6
#define _TRISD_RD6_POSITION                                 0x6
#define _TRISD_RD6_SIZE                                     0x1
#define _TRISD_RD6_LENGTH                                   0x1
#define _TRISD_RD6_MASK                                     0x40
#define _TRISD_RD7_POSN                                     0x7
#define _TRISD_RD7_POSITION                                 0x7
#define _TRISD_RD7_SIZE                                     0x1
#define _TRISD_RD7_LENGTH                                   0x1
#define _TRISD_RD7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
        unsigned TRISD3                 :1;
        unsigned TRISD4                 :1;
        unsigned TRISD5                 :1;
        unsigned TRISD6                 :1;
        unsigned TRISD7                 :1;
    };
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
} DDRDbits_t;
extern volatile DDRDbits_t DDRDbits __at(0xF95);
// bitfield macros
#define _DDRD_TRISD0_POSN                                   0x0
#define _DDRD_TRISD0_POSITION                               0x0
#define _DDRD_TRISD0_SIZE                                   0x1
#define _DDRD_TRISD0_LENGTH                                 0x1
#define _DDRD_TRISD0_MASK                                   0x1
#define _DDRD_TRISD1_POSN                                   0x1
#define _DDRD_TRISD1_POSITION                               0x1
#define _DDRD_TRISD1_SIZE                                   0x1
#define _DDRD_TRISD1_LENGTH                                 0x1
#define _DDRD_TRISD1_MASK                                   0x2
#define _DDRD_TRISD2_POSN                                   0x2
#define _DDRD_TRISD2_POSITION                               0x2
#define _DDRD_TRISD2_SIZE                                   0x1
#define _DDRD_TRISD2_LENGTH                                 0x1
#define _DDRD_TRISD2_MASK                                   0x4
#define _DDRD_TRISD3_POSN                                   0x3
#define _DDRD_TRISD3_POSITION                               0x3
#define _DDRD_TRISD3_SIZE                                   0x1
#define _DDRD_TRISD3_LENGTH                                 0x1
#define _DDRD_TRISD3_MASK                                   0x8
#define _DDRD_TRISD4_POSN                                   0x4
#define _DDRD_TRISD4_POSITION                               0x4
#define _DDRD_TRISD4_SIZE                                   0x1
#define _DDRD_TRISD4_LENGTH                                 0x1
#define _DDRD_TRISD4_MASK                                   0x10
#define _DDRD_TRISD5_POSN                                   0x5
#define _DDRD_TRISD5_POSITION                               0x5
#define _DDRD_TRISD5_SIZE                                   0x1
#define _DDRD_TRISD5_LENGTH                                 0x1
#define _DDRD_TRISD5_MASK                                   0x20
#define _DDRD_TRISD6_POSN                                   0x6
#define _DDRD_TRISD6_POSITION                               0x6
#define _DDRD_TRISD6_SIZE                                   0x1
#define _DDRD_TRISD6_LENGTH                                 0x1
#define _DDRD_TRISD6_MASK                                   0x40
#define _DDRD_TRISD7_POSN                                   0x7
#define _DDRD_TRISD7_POSITION                               0x7
#define _DDRD_TRISD7_SIZE                                   0x1
#define _DDRD_TRISD7_LENGTH                                 0x1
#define _DDRD_TRISD7_MASK                                   0x80
#define _DDRD_RD0_POSN                                      0x0
#define _DDRD_RD0_POSITION                                  0x0
#define _DDRD_RD0_SIZE                                      0x1
#define _DDRD_RD0_LENGTH                                    0x1
#define _DDRD_RD0_MASK                                      0x1
#define _DDRD_RD1_POSN                                      0x1
#define _DDRD_RD1_POSITION                                  0x1
#define _DDRD_RD1_SIZE                                      0x1
#define _DDRD_RD1_LENGTH                                    0x1
#define _DDRD_RD1_MASK                                      0x2
#define _DDRD_RD2_POSN                                      0x2
#define _DDRD_RD2_POSITION                                  0x2
#define _DDRD_RD2_SIZE                                      0x1
#define _DDRD_RD2_LENGTH                                    0x1
#define _DDRD_RD2_MASK                                      0x4
#define _DDRD_RD3_POSN                                      0x3
#define _DDRD_RD3_POSITION                                  0x3
#define _DDRD_RD3_SIZE                                      0x1
#define _DDRD_RD3_LENGTH                                    0x1
#define _DDRD_RD3_MASK                                      0x8
#define _DDRD_RD4_POSN                                      0x4
#define _DDRD_RD4_POSITION                                  0x4
#define _DDRD_RD4_SIZE                                      0x1
#define _DDRD_RD4_LENGTH                                    0x1
#define _DDRD_RD4_MASK                                      0x10
#define _DDRD_RD5_POSN                                      0x5
#define _DDRD_RD5_POSITION                                  0x5
#define _DDRD_RD5_SIZE                                      0x1
#define _DDRD_RD5_LENGTH                                    0x1
#define _DDRD_RD5_MASK                                      0x20
#define _DDRD_RD6_POSN                                      0x6
#define _DDRD_RD6_POSITION                                  0x6
#define _DDRD_RD6_SIZE                                      0x1
#define _DDRD_RD6_LENGTH                                    0x1
#define _DDRD_RD6_MASK                                      0x40
#define _DDRD_RD7_POSN                                      0x7
#define _DDRD_RD7_POSITION                                  0x7
#define _DDRD_RD7_SIZE                                      0x1
#define _DDRD_RD7_LENGTH                                    0x1
#define _DDRD_RD7_MASK                                      0x80

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0xF96);
#ifndef _LIB_BUILD
asm("TRISE equ 0F96h");
#endif
// aliases
extern volatile unsigned char           DDRE                __at(0xF96);
#ifndef _LIB_BUILD
asm("DDRE equ 0F96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
        unsigned TRISE3                 :1;
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0xF96);
// bitfield macros
#define _TRISE_TRISE0_POSN                                  0x0
#define _TRISE_TRISE0_POSITION                              0x0
#define _TRISE_TRISE0_SIZE                                  0x1
#define _TRISE_TRISE0_LENGTH                                0x1
#define _TRISE_TRISE0_MASK                                  0x1
#define _TRISE_TRISE1_POSN                                  0x1
#define _TRISE_TRISE1_POSITION                              0x1
#define _TRISE_TRISE1_SIZE                                  0x1
#define _TRISE_TRISE1_LENGTH                                0x1
#define _TRISE_TRISE1_MASK                                  0x2
#define _TRISE_TRISE2_POSN                                  0x2
#define _TRISE_TRISE2_POSITION                              0x2
#define _TRISE_TRISE2_SIZE                                  0x1
#define _TRISE_TRISE2_LENGTH                                0x1
#define _TRISE_TRISE2_MASK                                  0x4
#define _TRISE_TRISE3_POSN                                  0x3
#define _TRISE_TRISE3_POSITION                              0x3
#define _TRISE_TRISE3_SIZE                                  0x1
#define _TRISE_TRISE3_LENGTH                                0x1
#define _TRISE_TRISE3_MASK                                  0x8
#define _TRISE_TRISE4_POSN                                  0x4
#define _TRISE_TRISE4_POSITION                              0x4
#define _TRISE_TRISE4_SIZE                                  0x1
#define _TRISE_TRISE4_LENGTH                                0x1
#define _TRISE_TRISE4_MASK                                  0x10
#define _TRISE_TRISE5_POSN                                  0x5
#define _TRISE_TRISE5_POSITION                              0x5
#define _TRISE_TRISE5_SIZE                                  0x1
#define _TRISE_TRISE5_LENGTH                                0x1
#define _TRISE_TRISE5_MASK                                  0x20
#define _TRISE_TRISE6_POSN                                  0x6
#define _TRISE_TRISE6_POSITION                              0x6
#define _TRISE_TRISE6_SIZE                                  0x1
#define _TRISE_TRISE6_LENGTH                                0x1
#define _TRISE_TRISE6_MASK                                  0x40
#define _TRISE_TRISE7_POSN                                  0x7
#define _TRISE_TRISE7_POSITION                              0x7
#define _TRISE_TRISE7_SIZE                                  0x1
#define _TRISE_TRISE7_LENGTH                                0x1
#define _TRISE_TRISE7_MASK                                  0x80
#define _TRISE_RE0_POSN                                     0x0
#define _TRISE_RE0_POSITION                                 0x0
#define _TRISE_RE0_SIZE                                     0x1
#define _TRISE_RE0_LENGTH                                   0x1
#define _TRISE_RE0_MASK                                     0x1
#define _TRISE_RE1_POSN                                     0x1
#define _TRISE_RE1_POSITION                                 0x1
#define _TRISE_RE1_SIZE                                     0x1
#define _TRISE_RE1_LENGTH                                   0x1
#define _TRISE_RE1_MASK                                     0x2
#define _TRISE_RE2_POSN                                     0x2
#define _TRISE_RE2_POSITION                                 0x2
#define _TRISE_RE2_SIZE                                     0x1
#define _TRISE_RE2_LENGTH                                   0x1
#define _TRISE_RE2_MASK                                     0x4
#define _TRISE_RE3_POSN                                     0x3
#define _TRISE_RE3_POSITION                                 0x3
#define _TRISE_RE3_SIZE                                     0x1
#define _TRISE_RE3_LENGTH                                   0x1
#define _TRISE_RE3_MASK                                     0x8
#define _TRISE_RE4_POSN                                     0x4
#define _TRISE_RE4_POSITION                                 0x4
#define _TRISE_RE4_SIZE                                     0x1
#define _TRISE_RE4_LENGTH                                   0x1
#define _TRISE_RE4_MASK                                     0x10
#define _TRISE_RE5_POSN                                     0x5
#define _TRISE_RE5_POSITION                                 0x5
#define _TRISE_RE5_SIZE                                     0x1
#define _TRISE_RE5_LENGTH                                   0x1
#define _TRISE_RE5_MASK                                     0x20
#define _TRISE_RE6_POSN                                     0x6
#define _TRISE_RE6_POSITION                                 0x6
#define _TRISE_RE6_SIZE                                     0x1
#define _TRISE_RE6_LENGTH                                   0x1
#define _TRISE_RE6_MASK                                     0x40
#define _TRISE_RE7_POSN                                     0x7
#define _TRISE_RE7_POSITION                                 0x7
#define _TRISE_RE7_SIZE                                     0x1
#define _TRISE_RE7_LENGTH                                   0x1
#define _TRISE_RE7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
        unsigned TRISE3                 :1;
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
} DDREbits_t;
extern volatile DDREbits_t DDREbits __at(0xF96);
// bitfield macros
#define _DDRE_TRISE0_POSN                                   0x0
#define _DDRE_TRISE0_POSITION                               0x0
#define _DDRE_TRISE0_SIZE                                   0x1
#define _DDRE_TRISE0_LENGTH                                 0x1
#define _DDRE_TRISE0_MASK                                   0x1
#define _DDRE_TRISE1_POSN                                   0x1
#define _DDRE_TRISE1_POSITION                               0x1
#define _DDRE_TRISE1_SIZE                                   0x1
#define _DDRE_TRISE1_LENGTH                                 0x1
#define _DDRE_TRISE1_MASK                                   0x2
#define _DDRE_TRISE2_POSN                                   0x2
#define _DDRE_TRISE2_POSITION                               0x2
#define _DDRE_TRISE2_SIZE                                   0x1
#define _DDRE_TRISE2_LENGTH                                 0x1
#define _DDRE_TRISE2_MASK                                   0x4
#define _DDRE_TRISE3_POSN                                   0x3
#define _DDRE_TRISE3_POSITION                               0x3
#define _DDRE_TRISE3_SIZE                                   0x1
#define _DDRE_TRISE3_LENGTH                                 0x1
#define _DDRE_TRISE3_MASK                                   0x8
#define _DDRE_TRISE4_POSN                                   0x4
#define _DDRE_TRISE4_POSITION                               0x4
#define _DDRE_TRISE4_SIZE                                   0x1
#define _DDRE_TRISE4_LENGTH                                 0x1
#define _DDRE_TRISE4_MASK                                   0x10
#define _DDRE_TRISE5_POSN                                   0x5
#define _DDRE_TRISE5_POSITION                               0x5
#define _DDRE_TRISE5_SIZE                                   0x1
#define _DDRE_TRISE5_LENGTH                                 0x1
#define _DDRE_TRISE5_MASK                                   0x20
#define _DDRE_TRISE6_POSN                                   0x6
#define _DDRE_TRISE6_POSITION                               0x6
#define _DDRE_TRISE6_SIZE                                   0x1
#define _DDRE_TRISE6_LENGTH                                 0x1
#define _DDRE_TRISE6_MASK                                   0x40
#define _DDRE_TRISE7_POSN                                   0x7
#define _DDRE_TRISE7_POSITION                               0x7
#define _DDRE_TRISE7_SIZE                                   0x1
#define _DDRE_TRISE7_LENGTH                                 0x1
#define _DDRE_TRISE7_MASK                                   0x80
#define _DDRE_RE0_POSN                                      0x0
#define _DDRE_RE0_POSITION                                  0x0
#define _DDRE_RE0_SIZE                                      0x1
#define _DDRE_RE0_LENGTH                                    0x1
#define _DDRE_RE0_MASK                                      0x1
#define _DDRE_RE1_POSN                                      0x1
#define _DDRE_RE1_POSITION                                  0x1
#define _DDRE_RE1_SIZE                                      0x1
#define _DDRE_RE1_LENGTH                                    0x1
#define _DDRE_RE1_MASK                                      0x2
#define _DDRE_RE2_POSN                                      0x2
#define _DDRE_RE2_POSITION                                  0x2
#define _DDRE_RE2_SIZE                                      0x1
#define _DDRE_RE2_LENGTH                                    0x1
#define _DDRE_RE2_MASK                                      0x4
#define _DDRE_RE3_POSN                                      0x3
#define _DDRE_RE3_POSITION                                  0x3
#define _DDRE_RE3_SIZE                                      0x1
#define _DDRE_RE3_LENGTH                                    0x1
#define _DDRE_RE3_MASK                                      0x8
#define _DDRE_RE4_POSN                                      0x4
#define _DDRE_RE4_POSITION                                  0x4
#define _DDRE_RE4_SIZE                                      0x1
#define _DDRE_RE4_LENGTH                                    0x1
#define _DDRE_RE4_MASK                                      0x10
#define _DDRE_RE5_POSN                                      0x5
#define _DDRE_RE5_POSITION                                  0x5
#define _DDRE_RE5_SIZE                                      0x1
#define _DDRE_RE5_LENGTH                                    0x1
#define _DDRE_RE5_MASK                                      0x20
#define _DDRE_RE6_POSN                                      0x6
#define _DDRE_RE6_POSITION                                  0x6
#define _DDRE_RE6_SIZE                                      0x1
#define _DDRE_RE6_LENGTH                                    0x1
#define _DDRE_RE6_MASK                                      0x40
#define _DDRE_RE7_POSN                                      0x7
#define _DDRE_RE7_POSITION                                  0x7
#define _DDRE_RE7_SIZE                                      0x1
#define _DDRE_RE7_LENGTH                                    0x1
#define _DDRE_RE7_MASK                                      0x80

// Register: TRISF
#define TRISF TRISF
extern volatile unsigned char           TRISF               __at(0xF97);
#ifndef _LIB_BUILD
asm("TRISF equ 0F97h");
#endif
// aliases
extern volatile unsigned char           DDRF                __at(0xF97);
#ifndef _LIB_BUILD
asm("DDRF equ 0F97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TRISF1                 :1;
        unsigned TRISF2                 :1;
        unsigned TRISF3                 :1;
        unsigned TRISF4                 :1;
        unsigned TRISF5                 :1;
        unsigned TRISF6                 :1;
        unsigned TRISF7                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
} TRISFbits_t;
extern volatile TRISFbits_t TRISFbits __at(0xF97);
// bitfield macros
#define _TRISF_TRISF1_POSN                                  0x1
#define _TRISF_TRISF1_POSITION                              0x1
#define _TRISF_TRISF1_SIZE                                  0x1
#define _TRISF_TRISF1_LENGTH                                0x1
#define _TRISF_TRISF1_MASK                                  0x2
#define _TRISF_TRISF2_POSN                                  0x2
#define _TRISF_TRISF2_POSITION                              0x2
#define _TRISF_TRISF2_SIZE                                  0x1
#define _TRISF_TRISF2_LENGTH                                0x1
#define _TRISF_TRISF2_MASK                                  0x4
#define _TRISF_TRISF3_POSN                                  0x3
#define _TRISF_TRISF3_POSITION                              0x3
#define _TRISF_TRISF3_SIZE                                  0x1
#define _TRISF_TRISF3_LENGTH                                0x1
#define _TRISF_TRISF3_MASK                                  0x8
#define _TRISF_TRISF4_POSN                                  0x4
#define _TRISF_TRISF4_POSITION                              0x4
#define _TRISF_TRISF4_SIZE                                  0x1
#define _TRISF_TRISF4_LENGTH                                0x1
#define _TRISF_TRISF4_MASK                                  0x10
#define _TRISF_TRISF5_POSN                                  0x5
#define _TRISF_TRISF5_POSITION                              0x5
#define _TRISF_TRISF5_SIZE                                  0x1
#define _TRISF_TRISF5_LENGTH                                0x1
#define _TRISF_TRISF5_MASK                                  0x20
#define _TRISF_TRISF6_POSN                                  0x6
#define _TRISF_TRISF6_POSITION                              0x6
#define _TRISF_TRISF6_SIZE                                  0x1
#define _TRISF_TRISF6_LENGTH                                0x1
#define _TRISF_TRISF6_MASK                                  0x40
#define _TRISF_TRISF7_POSN                                  0x7
#define _TRISF_TRISF7_POSITION                              0x7
#define _TRISF_TRISF7_SIZE                                  0x1
#define _TRISF_TRISF7_LENGTH                                0x1
#define _TRISF_TRISF7_MASK                                  0x80
#define _TRISF_RF1_POSN                                     0x1
#define _TRISF_RF1_POSITION                                 0x1
#define _TRISF_RF1_SIZE                                     0x1
#define _TRISF_RF1_LENGTH                                   0x1
#define _TRISF_RF1_MASK                                     0x2
#define _TRISF_RF2_POSN                                     0x2
#define _TRISF_RF2_POSITION                                 0x2
#define _TRISF_RF2_SIZE                                     0x1
#define _TRISF_RF2_LENGTH                                   0x1
#define _TRISF_RF2_MASK                                     0x4
#define _TRISF_RF3_POSN                                     0x3
#define _TRISF_RF3_POSITION                                 0x3
#define _TRISF_RF3_SIZE                                     0x1
#define _TRISF_RF3_LENGTH                                   0x1
#define _TRISF_RF3_MASK                                     0x8
#define _TRISF_RF4_POSN                                     0x4
#define _TRISF_RF4_POSITION                                 0x4
#define _TRISF_RF4_SIZE                                     0x1
#define _TRISF_RF4_LENGTH                                   0x1
#define _TRISF_RF4_MASK                                     0x10
#define _TRISF_RF5_POSN                                     0x5
#define _TRISF_RF5_POSITION                                 0x5
#define _TRISF_RF5_SIZE                                     0x1
#define _TRISF_RF5_LENGTH                                   0x1
#define _TRISF_RF5_MASK                                     0x20
#define _TRISF_RF6_POSN                                     0x6
#define _TRISF_RF6_POSITION                                 0x6
#define _TRISF_RF6_SIZE                                     0x1
#define _TRISF_RF6_LENGTH                                   0x1
#define _TRISF_RF6_MASK                                     0x40
#define _TRISF_RF7_POSN                                     0x7
#define _TRISF_RF7_POSITION                                 0x7
#define _TRISF_RF7_SIZE                                     0x1
#define _TRISF_RF7_LENGTH                                   0x1
#define _TRISF_RF7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TRISF1                 :1;
        unsigned TRISF2                 :1;
        unsigned TRISF3                 :1;
        unsigned TRISF4                 :1;
        unsigned TRISF5                 :1;
        unsigned TRISF6                 :1;
        unsigned TRISF7                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
} DDRFbits_t;
extern volatile DDRFbits_t DDRFbits __at(0xF97);
// bitfield macros
#define _DDRF_TRISF1_POSN                                   0x1
#define _DDRF_TRISF1_POSITION                               0x1
#define _DDRF_TRISF1_SIZE                                   0x1
#define _DDRF_TRISF1_LENGTH                                 0x1
#define _DDRF_TRISF1_MASK                                   0x2
#define _DDRF_TRISF2_POSN                                   0x2
#define _DDRF_TRISF2_POSITION                               0x2
#define _DDRF_TRISF2_SIZE                                   0x1
#define _DDRF_TRISF2_LENGTH                                 0x1
#define _DDRF_TRISF2_MASK                                   0x4
#define _DDRF_TRISF3_POSN                                   0x3
#define _DDRF_TRISF3_POSITION                               0x3
#define _DDRF_TRISF3_SIZE                                   0x1
#define _DDRF_TRISF3_LENGTH                                 0x1
#define _DDRF_TRISF3_MASK                                   0x8
#define _DDRF_TRISF4_POSN                                   0x4
#define _DDRF_TRISF4_POSITION                               0x4
#define _DDRF_TRISF4_SIZE                                   0x1
#define _DDRF_TRISF4_LENGTH                                 0x1
#define _DDRF_TRISF4_MASK                                   0x10
#define _DDRF_TRISF5_POSN                                   0x5
#define _DDRF_TRISF5_POSITION                               0x5
#define _DDRF_TRISF5_SIZE                                   0x1
#define _DDRF_TRISF5_LENGTH                                 0x1
#define _DDRF_TRISF5_MASK                                   0x20
#define _DDRF_TRISF6_POSN                                   0x6
#define _DDRF_TRISF6_POSITION                               0x6
#define _DDRF_TRISF6_SIZE                                   0x1
#define _DDRF_TRISF6_LENGTH                                 0x1
#define _DDRF_TRISF6_MASK                                   0x40
#define _DDRF_TRISF7_POSN                                   0x7
#define _DDRF_TRISF7_POSITION                               0x7
#define _DDRF_TRISF7_SIZE                                   0x1
#define _DDRF_TRISF7_LENGTH                                 0x1
#define _DDRF_TRISF7_MASK                                   0x80
#define _DDRF_RF1_POSN                                      0x1
#define _DDRF_RF1_POSITION                                  0x1
#define _DDRF_RF1_SIZE                                      0x1
#define _DDRF_RF1_LENGTH                                    0x1
#define _DDRF_RF1_MASK                                      0x2
#define _DDRF_RF2_POSN                                      0x2
#define _DDRF_RF2_POSITION                                  0x2
#define _DDRF_RF2_SIZE                                      0x1
#define _DDRF_RF2_LENGTH                                    0x1
#define _DDRF_RF2_MASK                                      0x4
#define _DDRF_RF3_POSN                                      0x3
#define _DDRF_RF3_POSITION                                  0x3
#define _DDRF_RF3_SIZE                                      0x1
#define _DDRF_RF3_LENGTH                                    0x1
#define _DDRF_RF3_MASK                                      0x8
#define _DDRF_RF4_POSN                                      0x4
#define _DDRF_RF4_POSITION                                  0x4
#define _DDRF_RF4_SIZE                                      0x1
#define _DDRF_RF4_LENGTH                                    0x1
#define _DDRF_RF4_MASK                                      0x10
#define _DDRF_RF5_POSN                                      0x5
#define _DDRF_RF5_POSITION                                  0x5
#define _DDRF_RF5_SIZE                                      0x1
#define _DDRF_RF5_LENGTH                                    0x1
#define _DDRF_RF5_MASK                                      0x20
#define _DDRF_RF6_POSN                                      0x6
#define _DDRF_RF6_POSITION                                  0x6
#define _DDRF_RF6_SIZE                                      0x1
#define _DDRF_RF6_LENGTH                                    0x1
#define _DDRF_RF6_MASK                                      0x40
#define _DDRF_RF7_POSN                                      0x7
#define _DDRF_RF7_POSITION                                  0x7
#define _DDRF_RF7_SIZE                                      0x1
#define _DDRF_RF7_LENGTH                                    0x1
#define _DDRF_RF7_MASK                                      0x80

// Register: TRISG
#define TRISG TRISG
extern volatile unsigned char           TRISG               __at(0xF98);
#ifndef _LIB_BUILD
asm("TRISG equ 0F98h");
#endif
// aliases
extern volatile unsigned char           DDRG                __at(0xF98);
#ifndef _LIB_BUILD
asm("DDRG equ 0F98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
        unsigned CCP1OD                 :1;
        unsigned CCP2OD                 :1;
        unsigned SPIOD                  :1;
    };
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
    };
} TRISGbits_t;
extern volatile TRISGbits_t TRISGbits __at(0xF98);
// bitfield macros
#define _TRISG_TRISG0_POSN                                  0x0
#define _TRISG_TRISG0_POSITION                              0x0
#define _TRISG_TRISG0_SIZE                                  0x1
#define _TRISG_TRISG0_LENGTH                                0x1
#define _TRISG_TRISG0_MASK                                  0x1
#define _TRISG_TRISG1_POSN                                  0x1
#define _TRISG_TRISG1_POSITION                              0x1
#define _TRISG_TRISG1_SIZE                                  0x1
#define _TRISG_TRISG1_LENGTH                                0x1
#define _TRISG_TRISG1_MASK                                  0x2
#define _TRISG_TRISG2_POSN                                  0x2
#define _TRISG_TRISG2_POSITION                              0x2
#define _TRISG_TRISG2_SIZE                                  0x1
#define _TRISG_TRISG2_LENGTH                                0x1
#define _TRISG_TRISG2_MASK                                  0x4
#define _TRISG_TRISG3_POSN                                  0x3
#define _TRISG_TRISG3_POSITION                              0x3
#define _TRISG_TRISG3_SIZE                                  0x1
#define _TRISG_TRISG3_LENGTH                                0x1
#define _TRISG_TRISG3_MASK                                  0x8
#define _TRISG_TRISG4_POSN                                  0x4
#define _TRISG_TRISG4_POSITION                              0x4
#define _TRISG_TRISG4_SIZE                                  0x1
#define _TRISG_TRISG4_LENGTH                                0x1
#define _TRISG_TRISG4_MASK                                  0x10
#define _TRISG_CCP1OD_POSN                                  0x5
#define _TRISG_CCP1OD_POSITION                              0x5
#define _TRISG_CCP1OD_SIZE                                  0x1
#define _TRISG_CCP1OD_LENGTH                                0x1
#define _TRISG_CCP1OD_MASK                                  0x20
#define _TRISG_CCP2OD_POSN                                  0x6
#define _TRISG_CCP2OD_POSITION                              0x6
#define _TRISG_CCP2OD_SIZE                                  0x1
#define _TRISG_CCP2OD_LENGTH                                0x1
#define _TRISG_CCP2OD_MASK                                  0x40
#define _TRISG_SPIOD_POSN                                   0x7
#define _TRISG_SPIOD_POSITION                               0x7
#define _TRISG_SPIOD_SIZE                                   0x1
#define _TRISG_SPIOD_LENGTH                                 0x1
#define _TRISG_SPIOD_MASK                                   0x80
#define _TRISG_RG0_POSN                                     0x0
#define _TRISG_RG0_POSITION                                 0x0
#define _TRISG_RG0_SIZE                                     0x1
#define _TRISG_RG0_LENGTH                                   0x1
#define _TRISG_RG0_MASK                                     0x1
#define _TRISG_RG1_POSN                                     0x1
#define _TRISG_RG1_POSITION                                 0x1
#define _TRISG_RG1_SIZE                                     0x1
#define _TRISG_RG1_LENGTH                                   0x1
#define _TRISG_RG1_MASK                                     0x2
#define _TRISG_RG2_POSN                                     0x2
#define _TRISG_RG2_POSITION                                 0x2
#define _TRISG_RG2_SIZE                                     0x1
#define _TRISG_RG2_LENGTH                                   0x1
#define _TRISG_RG2_MASK                                     0x4
#define _TRISG_RG3_POSN                                     0x3
#define _TRISG_RG3_POSITION                                 0x3
#define _TRISG_RG3_SIZE                                     0x1
#define _TRISG_RG3_LENGTH                                   0x1
#define _TRISG_RG3_MASK                                     0x8
#define _TRISG_RG4_POSN                                     0x4
#define _TRISG_RG4_POSITION                                 0x4
#define _TRISG_RG4_SIZE                                     0x1
#define _TRISG_RG4_LENGTH                                   0x1
#define _TRISG_RG4_MASK                                     0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
        unsigned CCP1OD                 :1;
        unsigned CCP2OD                 :1;
        unsigned SPIOD                  :1;
    };
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
    };
} DDRGbits_t;
extern volatile DDRGbits_t DDRGbits __at(0xF98);
// bitfield macros
#define _DDRG_TRISG0_POSN                                   0x0
#define _DDRG_TRISG0_POSITION                               0x0
#define _DDRG_TRISG0_SIZE                                   0x1
#define _DDRG_TRISG0_LENGTH                                 0x1
#define _DDRG_TRISG0_MASK                                   0x1
#define _DDRG_TRISG1_POSN                                   0x1
#define _DDRG_TRISG1_POSITION                               0x1
#define _DDRG_TRISG1_SIZE                                   0x1
#define _DDRG_TRISG1_LENGTH                                 0x1
#define _DDRG_TRISG1_MASK                                   0x2
#define _DDRG_TRISG2_POSN                                   0x2
#define _DDRG_TRISG2_POSITION                               0x2
#define _DDRG_TRISG2_SIZE                                   0x1
#define _DDRG_TRISG2_LENGTH                                 0x1
#define _DDRG_TRISG2_MASK                                   0x4
#define _DDRG_TRISG3_POSN                                   0x3
#define _DDRG_TRISG3_POSITION                               0x3
#define _DDRG_TRISG3_SIZE                                   0x1
#define _DDRG_TRISG3_LENGTH                                 0x1
#define _DDRG_TRISG3_MASK                                   0x8
#define _DDRG_TRISG4_POSN                                   0x4
#define _DDRG_TRISG4_POSITION                               0x4
#define _DDRG_TRISG4_SIZE                                   0x1
#define _DDRG_TRISG4_LENGTH                                 0x1
#define _DDRG_TRISG4_MASK                                   0x10
#define _DDRG_CCP1OD_POSN                                   0x5
#define _DDRG_CCP1OD_POSITION                               0x5
#define _DDRG_CCP1OD_SIZE                                   0x1
#define _DDRG_CCP1OD_LENGTH                                 0x1
#define _DDRG_CCP1OD_MASK                                   0x20
#define _DDRG_CCP2OD_POSN                                   0x6
#define _DDRG_CCP2OD_POSITION                               0x6
#define _DDRG_CCP2OD_SIZE                                   0x1
#define _DDRG_CCP2OD_LENGTH                                 0x1
#define _DDRG_CCP2OD_MASK                                   0x40
#define _DDRG_SPIOD_POSN                                    0x7
#define _DDRG_SPIOD_POSITION                                0x7
#define _DDRG_SPIOD_SIZE                                    0x1
#define _DDRG_SPIOD_LENGTH                                  0x1
#define _DDRG_SPIOD_MASK                                    0x80
#define _DDRG_RG0_POSN                                      0x0
#define _DDRG_RG0_POSITION                                  0x0
#define _DDRG_RG0_SIZE                                      0x1
#define _DDRG_RG0_LENGTH                                    0x1
#define _DDRG_RG0_MASK                                      0x1
#define _DDRG_RG1_POSN                                      0x1
#define _DDRG_RG1_POSITION                                  0x1
#define _DDRG_RG1_SIZE                                      0x1
#define _DDRG_RG1_LENGTH                                    0x1
#define _DDRG_RG1_MASK                                      0x2
#define _DDRG_RG2_POSN                                      0x2
#define _DDRG_RG2_POSITION                                  0x2
#define _DDRG_RG2_SIZE                                      0x1
#define _DDRG_RG2_LENGTH                                    0x1
#define _DDRG_RG2_MASK                                      0x4
#define _DDRG_RG3_POSN                                      0x3
#define _DDRG_RG3_POSITION                                  0x3
#define _DDRG_RG3_SIZE                                      0x1
#define _DDRG_RG3_LENGTH                                    0x1
#define _DDRG_RG3_MASK                                      0x8
#define _DDRG_RG4_POSN                                      0x4
#define _DDRG_RG4_POSITION                                  0x4
#define _DDRG_RG4_SIZE                                      0x1
#define _DDRG_RG4_LENGTH                                    0x1
#define _DDRG_RG4_MASK                                      0x10

// Register: TRISH
#define TRISH TRISH
extern volatile unsigned char           TRISH               __at(0xF99);
#ifndef _LIB_BUILD
asm("TRISH equ 0F99h");
#endif
// aliases
extern volatile unsigned char           DDRH                __at(0xF99);
#ifndef _LIB_BUILD
asm("DDRH equ 0F99h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISH0                 :1;
        unsigned TRISH1                 :1;
        unsigned TRISH2                 :1;
        unsigned TRISH3                 :1;
        unsigned TRISH4                 :1;
        unsigned TRISH5                 :1;
        unsigned TRISH6                 :1;
        unsigned TRISH7                 :1;
    };
    struct {
        unsigned RH0                    :1;
        unsigned RH1                    :1;
        unsigned RH2                    :1;
        unsigned RH3                    :1;
        unsigned RH4                    :1;
        unsigned RH5                    :1;
        unsigned RH6                    :1;
        unsigned RH7                    :1;
    };
} TRISHbits_t;
extern volatile TRISHbits_t TRISHbits __at(0xF99);
// bitfield macros
#define _TRISH_TRISH0_POSN                                  0x0
#define _TRISH_TRISH0_POSITION                              0x0
#define _TRISH_TRISH0_SIZE                                  0x1
#define _TRISH_TRISH0_LENGTH                                0x1
#define _TRISH_TRISH0_MASK                                  0x1
#define _TRISH_TRISH1_POSN                                  0x1
#define _TRISH_TRISH1_POSITION                              0x1
#define _TRISH_TRISH1_SIZE                                  0x1
#define _TRISH_TRISH1_LENGTH                                0x1
#define _TRISH_TRISH1_MASK                                  0x2
#define _TRISH_TRISH2_POSN                                  0x2
#define _TRISH_TRISH2_POSITION                              0x2
#define _TRISH_TRISH2_SIZE                                  0x1
#define _TRISH_TRISH2_LENGTH                                0x1
#define _TRISH_TRISH2_MASK                                  0x4
#define _TRISH_TRISH3_POSN                                  0x3
#define _TRISH_TRISH3_POSITION                              0x3
#define _TRISH_TRISH3_SIZE                                  0x1
#define _TRISH_TRISH3_LENGTH                                0x1
#define _TRISH_TRISH3_MASK                                  0x8
#define _TRISH_TRISH4_POSN                                  0x4
#define _TRISH_TRISH4_POSITION                              0x4
#define _TRISH_TRISH4_SIZE                                  0x1
#define _TRISH_TRISH4_LENGTH                                0x1
#define _TRISH_TRISH4_MASK                                  0x10
#define _TRISH_TRISH5_POSN                                  0x5
#define _TRISH_TRISH5_POSITION                              0x5
#define _TRISH_TRISH5_SIZE                                  0x1
#define _TRISH_TRISH5_LENGTH                                0x1
#define _TRISH_TRISH5_MASK                                  0x20
#define _TRISH_TRISH6_POSN                                  0x6
#define _TRISH_TRISH6_POSITION                              0x6
#define _TRISH_TRISH6_SIZE                                  0x1
#define _TRISH_TRISH6_LENGTH                                0x1
#define _TRISH_TRISH6_MASK                                  0x40
#define _TRISH_TRISH7_POSN                                  0x7
#define _TRISH_TRISH7_POSITION                              0x7
#define _TRISH_TRISH7_SIZE                                  0x1
#define _TRISH_TRISH7_LENGTH                                0x1
#define _TRISH_TRISH7_MASK                                  0x80
#define _TRISH_RH0_POSN                                     0x0
#define _TRISH_RH0_POSITION                                 0x0
#define _TRISH_RH0_SIZE                                     0x1
#define _TRISH_RH0_LENGTH                                   0x1
#define _TRISH_RH0_MASK                                     0x1
#define _TRISH_RH1_POSN                                     0x1
#define _TRISH_RH1_POSITION                                 0x1
#define _TRISH_RH1_SIZE                                     0x1
#define _TRISH_RH1_LENGTH                                   0x1
#define _TRISH_RH1_MASK                                     0x2
#define _TRISH_RH2_POSN                                     0x2
#define _TRISH_RH2_POSITION                                 0x2
#define _TRISH_RH2_SIZE                                     0x1
#define _TRISH_RH2_LENGTH                                   0x1
#define _TRISH_RH2_MASK                                     0x4
#define _TRISH_RH3_POSN                                     0x3
#define _TRISH_RH3_POSITION                                 0x3
#define _TRISH_RH3_SIZE                                     0x1
#define _TRISH_RH3_LENGTH                                   0x1
#define _TRISH_RH3_MASK                                     0x8
#define _TRISH_RH4_POSN                                     0x4
#define _TRISH_RH4_POSITION                                 0x4
#define _TRISH_RH4_SIZE                                     0x1
#define _TRISH_RH4_LENGTH                                   0x1
#define _TRISH_RH4_MASK                                     0x10
#define _TRISH_RH5_POSN                                     0x5
#define _TRISH_RH5_POSITION                                 0x5
#define _TRISH_RH5_SIZE                                     0x1
#define _TRISH_RH5_LENGTH                                   0x1
#define _TRISH_RH5_MASK                                     0x20
#define _TRISH_RH6_POSN                                     0x6
#define _TRISH_RH6_POSITION                                 0x6
#define _TRISH_RH6_SIZE                                     0x1
#define _TRISH_RH6_LENGTH                                   0x1
#define _TRISH_RH6_MASK                                     0x40
#define _TRISH_RH7_POSN                                     0x7
#define _TRISH_RH7_POSITION                                 0x7
#define _TRISH_RH7_SIZE                                     0x1
#define _TRISH_RH7_LENGTH                                   0x1
#define _TRISH_RH7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISH0                 :1;
        unsigned TRISH1                 :1;
        unsigned TRISH2                 :1;
        unsigned TRISH3                 :1;
        unsigned TRISH4                 :1;
        unsigned TRISH5                 :1;
        unsigned TRISH6                 :1;
        unsigned TRISH7                 :1;
    };
    struct {
        unsigned RH0                    :1;
        unsigned RH1                    :1;
        unsigned RH2                    :1;
        unsigned RH3                    :1;
        unsigned RH4                    :1;
        unsigned RH5                    :1;
        unsigned RH6                    :1;
        unsigned RH7                    :1;
    };
} DDRHbits_t;
extern volatile DDRHbits_t DDRHbits __at(0xF99);
// bitfield macros
#define _DDRH_TRISH0_POSN                                   0x0
#define _DDRH_TRISH0_POSITION                               0x0
#define _DDRH_TRISH0_SIZE                                   0x1
#define _DDRH_TRISH0_LENGTH                                 0x1
#define _DDRH_TRISH0_MASK                                   0x1
#define _DDRH_TRISH1_POSN                                   0x1
#define _DDRH_TRISH1_POSITION                               0x1
#define _DDRH_TRISH1_SIZE                                   0x1
#define _DDRH_TRISH1_LENGTH                                 0x1
#define _DDRH_TRISH1_MASK                                   0x2
#define _DDRH_TRISH2_POSN                                   0x2
#define _DDRH_TRISH2_POSITION                               0x2
#define _DDRH_TRISH2_SIZE                                   0x1
#define _DDRH_TRISH2_LENGTH                                 0x1
#define _DDRH_TRISH2_MASK                                   0x4
#define _DDRH_TRISH3_POSN                                   0x3
#define _DDRH_TRISH3_POSITION                               0x3
#define _DDRH_TRISH3_SIZE                                   0x1
#define _DDRH_TRISH3_LENGTH                                 0x1
#define _DDRH_TRISH3_MASK                                   0x8
#define _DDRH_TRISH4_POSN                                   0x4
#define _DDRH_TRISH4_POSITION                               0x4
#define _DDRH_TRISH4_SIZE                                   0x1
#define _DDRH_TRISH4_LENGTH                                 0x1
#define _DDRH_TRISH4_MASK                                   0x10
#define _DDRH_TRISH5_POSN                                   0x5
#define _DDRH_TRISH5_POSITION                               0x5
#define _DDRH_TRISH5_SIZE                                   0x1
#define _DDRH_TRISH5_LENGTH                                 0x1
#define _DDRH_TRISH5_MASK                                   0x20
#define _DDRH_TRISH6_POSN                                   0x6
#define _DDRH_TRISH6_POSITION                               0x6
#define _DDRH_TRISH6_SIZE                                   0x1
#define _DDRH_TRISH6_LENGTH                                 0x1
#define _DDRH_TRISH6_MASK                                   0x40
#define _DDRH_TRISH7_POSN                                   0x7
#define _DDRH_TRISH7_POSITION                               0x7
#define _DDRH_TRISH7_SIZE                                   0x1
#define _DDRH_TRISH7_LENGTH                                 0x1
#define _DDRH_TRISH7_MASK                                   0x80
#define _DDRH_RH0_POSN                                      0x0
#define _DDRH_RH0_POSITION                                  0x0
#define _DDRH_RH0_SIZE                                      0x1
#define _DDRH_RH0_LENGTH                                    0x1
#define _DDRH_RH0_MASK                                      0x1
#define _DDRH_RH1_POSN                                      0x1
#define _DDRH_RH1_POSITION                                  0x1
#define _DDRH_RH1_SIZE                                      0x1
#define _DDRH_RH1_LENGTH                                    0x1
#define _DDRH_RH1_MASK                                      0x2
#define _DDRH_RH2_POSN                                      0x2
#define _DDRH_RH2_POSITION                                  0x2
#define _DDRH_RH2_SIZE                                      0x1
#define _DDRH_RH2_LENGTH                                    0x1
#define _DDRH_RH2_MASK                                      0x4
#define _DDRH_RH3_POSN                                      0x3
#define _DDRH_RH3_POSITION                                  0x3
#define _DDRH_RH3_SIZE                                      0x1
#define _DDRH_RH3_LENGTH                                    0x1
#define _DDRH_RH3_MASK                                      0x8
#define _DDRH_RH4_POSN                                      0x4
#define _DDRH_RH4_POSITION                                  0x4
#define _DDRH_RH4_SIZE                                      0x1
#define _DDRH_RH4_LENGTH                                    0x1
#define _DDRH_RH4_MASK                                      0x10
#define _DDRH_RH5_POSN                                      0x5
#define _DDRH_RH5_POSITION                                  0x5
#define _DDRH_RH5_SIZE                                      0x1
#define _DDRH_RH5_LENGTH                                    0x1
#define _DDRH_RH5_MASK                                      0x20
#define _DDRH_RH6_POSN                                      0x6
#define _DDRH_RH6_POSITION                                  0x6
#define _DDRH_RH6_SIZE                                      0x1
#define _DDRH_RH6_LENGTH                                    0x1
#define _DDRH_RH6_MASK                                      0x40
#define _DDRH_RH7_POSN                                      0x7
#define _DDRH_RH7_POSITION                                  0x7
#define _DDRH_RH7_SIZE                                      0x1
#define _DDRH_RH7_LENGTH                                    0x1
#define _DDRH_RH7_MASK                                      0x80

// Register: TRISJ
#define TRISJ TRISJ
extern volatile unsigned char           TRISJ               __at(0xF9A);
#ifndef _LIB_BUILD
asm("TRISJ equ 0F9Ah");
#endif
// aliases
extern volatile unsigned char           DDRJ                __at(0xF9A);
#ifndef _LIB_BUILD
asm("DDRJ equ 0F9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISJ0                 :1;
        unsigned TRISJ1                 :1;
        unsigned TRISJ2                 :1;
        unsigned TRISJ3                 :1;
        unsigned TRISJ4                 :1;
        unsigned TRISJ5                 :1;
        unsigned TRISJ6                 :1;
        unsigned TRISJ7                 :1;
    };
    struct {
        unsigned RJ0                    :1;
        unsigned RJ1                    :1;
        unsigned RJ2                    :1;
        unsigned RJ3                    :1;
        unsigned RJ4                    :1;
        unsigned RJ5                    :1;
        unsigned RJ6                    :1;
        unsigned RJ7                    :1;
    };
} TRISJbits_t;
extern volatile TRISJbits_t TRISJbits __at(0xF9A);
// bitfield macros
#define _TRISJ_TRISJ0_POSN                                  0x0
#define _TRISJ_TRISJ0_POSITION                              0x0
#define _TRISJ_TRISJ0_SIZE                                  0x1
#define _TRISJ_TRISJ0_LENGTH                                0x1
#define _TRISJ_TRISJ0_MASK                                  0x1
#define _TRISJ_TRISJ1_POSN                                  0x1
#define _TRISJ_TRISJ1_POSITION                              0x1
#define _TRISJ_TRISJ1_SIZE                                  0x1
#define _TRISJ_TRISJ1_LENGTH                                0x1
#define _TRISJ_TRISJ1_MASK                                  0x2
#define _TRISJ_TRISJ2_POSN                                  0x2
#define _TRISJ_TRISJ2_POSITION                              0x2
#define _TRISJ_TRISJ2_SIZE                                  0x1
#define _TRISJ_TRISJ2_LENGTH                                0x1
#define _TRISJ_TRISJ2_MASK                                  0x4
#define _TRISJ_TRISJ3_POSN                                  0x3
#define _TRISJ_TRISJ3_POSITION                              0x3
#define _TRISJ_TRISJ3_SIZE                                  0x1
#define _TRISJ_TRISJ3_LENGTH                                0x1
#define _TRISJ_TRISJ3_MASK                                  0x8
#define _TRISJ_TRISJ4_POSN                                  0x4
#define _TRISJ_TRISJ4_POSITION                              0x4
#define _TRISJ_TRISJ4_SIZE                                  0x1
#define _TRISJ_TRISJ4_LENGTH                                0x1
#define _TRISJ_TRISJ4_MASK                                  0x10
#define _TRISJ_TRISJ5_POSN                                  0x5
#define _TRISJ_TRISJ5_POSITION                              0x5
#define _TRISJ_TRISJ5_SIZE                                  0x1
#define _TRISJ_TRISJ5_LENGTH                                0x1
#define _TRISJ_TRISJ5_MASK                                  0x20
#define _TRISJ_TRISJ6_POSN                                  0x6
#define _TRISJ_TRISJ6_POSITION                              0x6
#define _TRISJ_TRISJ6_SIZE                                  0x1
#define _TRISJ_TRISJ6_LENGTH                                0x1
#define _TRISJ_TRISJ6_MASK                                  0x40
#define _TRISJ_TRISJ7_POSN                                  0x7
#define _TRISJ_TRISJ7_POSITION                              0x7
#define _TRISJ_TRISJ7_SIZE                                  0x1
#define _TRISJ_TRISJ7_LENGTH                                0x1
#define _TRISJ_TRISJ7_MASK                                  0x80
#define _TRISJ_RJ0_POSN                                     0x0
#define _TRISJ_RJ0_POSITION                                 0x0
#define _TRISJ_RJ0_SIZE                                     0x1
#define _TRISJ_RJ0_LENGTH                                   0x1
#define _TRISJ_RJ0_MASK                                     0x1
#define _TRISJ_RJ1_POSN                                     0x1
#define _TRISJ_RJ1_POSITION                                 0x1
#define _TRISJ_RJ1_SIZE                                     0x1
#define _TRISJ_RJ1_LENGTH                                   0x1
#define _TRISJ_RJ1_MASK                                     0x2
#define _TRISJ_RJ2_POSN                                     0x2
#define _TRISJ_RJ2_POSITION                                 0x2
#define _TRISJ_RJ2_SIZE                                     0x1
#define _TRISJ_RJ2_LENGTH                                   0x1
#define _TRISJ_RJ2_MASK                                     0x4
#define _TRISJ_RJ3_POSN                                     0x3
#define _TRISJ_RJ3_POSITION                                 0x3
#define _TRISJ_RJ3_SIZE                                     0x1
#define _TRISJ_RJ3_LENGTH                                   0x1
#define _TRISJ_RJ3_MASK                                     0x8
#define _TRISJ_RJ4_POSN                                     0x4
#define _TRISJ_RJ4_POSITION                                 0x4
#define _TRISJ_RJ4_SIZE                                     0x1
#define _TRISJ_RJ4_LENGTH                                   0x1
#define _TRISJ_RJ4_MASK                                     0x10
#define _TRISJ_RJ5_POSN                                     0x5
#define _TRISJ_RJ5_POSITION                                 0x5
#define _TRISJ_RJ5_SIZE                                     0x1
#define _TRISJ_RJ5_LENGTH                                   0x1
#define _TRISJ_RJ5_MASK                                     0x20
#define _TRISJ_RJ6_POSN                                     0x6
#define _TRISJ_RJ6_POSITION                                 0x6
#define _TRISJ_RJ6_SIZE                                     0x1
#define _TRISJ_RJ6_LENGTH                                   0x1
#define _TRISJ_RJ6_MASK                                     0x40
#define _TRISJ_RJ7_POSN                                     0x7
#define _TRISJ_RJ7_POSITION                                 0x7
#define _TRISJ_RJ7_SIZE                                     0x1
#define _TRISJ_RJ7_LENGTH                                   0x1
#define _TRISJ_RJ7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISJ0                 :1;
        unsigned TRISJ1                 :1;
        unsigned TRISJ2                 :1;
        unsigned TRISJ3                 :1;
        unsigned TRISJ4                 :1;
        unsigned TRISJ5                 :1;
        unsigned TRISJ6                 :1;
        unsigned TRISJ7                 :1;
    };
    struct {
        unsigned RJ0                    :1;
        unsigned RJ1                    :1;
        unsigned RJ2                    :1;
        unsigned RJ3                    :1;
        unsigned RJ4                    :1;
        unsigned RJ5                    :1;
        unsigned RJ6                    :1;
        unsigned RJ7                    :1;
    };
} DDRJbits_t;
extern volatile DDRJbits_t DDRJbits __at(0xF9A);
// bitfield macros
#define _DDRJ_TRISJ0_POSN                                   0x0
#define _DDRJ_TRISJ0_POSITION                               0x0
#define _DDRJ_TRISJ0_SIZE                                   0x1
#define _DDRJ_TRISJ0_LENGTH                                 0x1
#define _DDRJ_TRISJ0_MASK                                   0x1
#define _DDRJ_TRISJ1_POSN                                   0x1
#define _DDRJ_TRISJ1_POSITION                               0x1
#define _DDRJ_TRISJ1_SIZE                                   0x1
#define _DDRJ_TRISJ1_LENGTH                                 0x1
#define _DDRJ_TRISJ1_MASK                                   0x2
#define _DDRJ_TRISJ2_POSN                                   0x2
#define _DDRJ_TRISJ2_POSITION                               0x2
#define _DDRJ_TRISJ2_SIZE                                   0x1
#define _DDRJ_TRISJ2_LENGTH                                 0x1
#define _DDRJ_TRISJ2_MASK                                   0x4
#define _DDRJ_TRISJ3_POSN                                   0x3
#define _DDRJ_TRISJ3_POSITION                               0x3
#define _DDRJ_TRISJ3_SIZE                                   0x1
#define _DDRJ_TRISJ3_LENGTH                                 0x1
#define _DDRJ_TRISJ3_MASK                                   0x8
#define _DDRJ_TRISJ4_POSN                                   0x4
#define _DDRJ_TRISJ4_POSITION                               0x4
#define _DDRJ_TRISJ4_SIZE                                   0x1
#define _DDRJ_TRISJ4_LENGTH                                 0x1
#define _DDRJ_TRISJ4_MASK                                   0x10
#define _DDRJ_TRISJ5_POSN                                   0x5
#define _DDRJ_TRISJ5_POSITION                               0x5
#define _DDRJ_TRISJ5_SIZE                                   0x1
#define _DDRJ_TRISJ5_LENGTH                                 0x1
#define _DDRJ_TRISJ5_MASK                                   0x20
#define _DDRJ_TRISJ6_POSN                                   0x6
#define _DDRJ_TRISJ6_POSITION                               0x6
#define _DDRJ_TRISJ6_SIZE                                   0x1
#define _DDRJ_TRISJ6_LENGTH                                 0x1
#define _DDRJ_TRISJ6_MASK                                   0x40
#define _DDRJ_TRISJ7_POSN                                   0x7
#define _DDRJ_TRISJ7_POSITION                               0x7
#define _DDRJ_TRISJ7_SIZE                                   0x1
#define _DDRJ_TRISJ7_LENGTH                                 0x1
#define _DDRJ_TRISJ7_MASK                                   0x80
#define _DDRJ_RJ0_POSN                                      0x0
#define _DDRJ_RJ0_POSITION                                  0x0
#define _DDRJ_RJ0_SIZE                                      0x1
#define _DDRJ_RJ0_LENGTH                                    0x1
#define _DDRJ_RJ0_MASK                                      0x1
#define _DDRJ_RJ1_POSN                                      0x1
#define _DDRJ_RJ1_POSITION                                  0x1
#define _DDRJ_RJ1_SIZE                                      0x1
#define _DDRJ_RJ1_LENGTH                                    0x1
#define _DDRJ_RJ1_MASK                                      0x2
#define _DDRJ_RJ2_POSN                                      0x2
#define _DDRJ_RJ2_POSITION                                  0x2
#define _DDRJ_RJ2_SIZE                                      0x1
#define _DDRJ_RJ2_LENGTH                                    0x1
#define _DDRJ_RJ2_MASK                                      0x4
#define _DDRJ_RJ3_POSN                                      0x3
#define _DDRJ_RJ3_POSITION                                  0x3
#define _DDRJ_RJ3_SIZE                                      0x1
#define _DDRJ_RJ3_LENGTH                                    0x1
#define _DDRJ_RJ3_MASK                                      0x8
#define _DDRJ_RJ4_POSN                                      0x4
#define _DDRJ_RJ4_POSITION                                  0x4
#define _DDRJ_RJ4_SIZE                                      0x1
#define _DDRJ_RJ4_LENGTH                                    0x1
#define _DDRJ_RJ4_MASK                                      0x10
#define _DDRJ_RJ5_POSN                                      0x5
#define _DDRJ_RJ5_POSITION                                  0x5
#define _DDRJ_RJ5_SIZE                                      0x1
#define _DDRJ_RJ5_LENGTH                                    0x1
#define _DDRJ_RJ5_MASK                                      0x20
#define _DDRJ_RJ6_POSN                                      0x6
#define _DDRJ_RJ6_POSITION                                  0x6
#define _DDRJ_RJ6_SIZE                                      0x1
#define _DDRJ_RJ6_LENGTH                                    0x1
#define _DDRJ_RJ6_MASK                                      0x40
#define _DDRJ_RJ7_POSN                                      0x7
#define _DDRJ_RJ7_POSITION                                  0x7
#define _DDRJ_RJ7_SIZE                                      0x1
#define _DDRJ_RJ7_LENGTH                                    0x1
#define _DDRJ_RJ7_MASK                                      0x80

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0xF9B);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
        unsigned PLLEN                  :1;
        unsigned INTSRC                 :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0xF9B);
// bitfield macros
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
#define _OSCTUNE_PLLEN_POSN                                 0x6
#define _OSCTUNE_PLLEN_POSITION                             0x6
#define _OSCTUNE_PLLEN_SIZE                                 0x1
#define _OSCTUNE_PLLEN_LENGTH                               0x1
#define _OSCTUNE_PLLEN_MASK                                 0x40
#define _OSCTUNE_INTSRC_POSN                                0x7
#define _OSCTUNE_INTSRC_POSITION                            0x7
#define _OSCTUNE_INTSRC_SIZE                                0x1
#define _OSCTUNE_INTSRC_LENGTH                              0x1
#define _OSCTUNE_INTSRC_MASK                                0x80

// Register: MEMCON
#define MEMCON MEMCON
extern volatile unsigned char           MEMCON              __at(0xF9C);
#ifndef _LIB_BUILD
asm("MEMCON equ 0F9Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WM                     :2;
        unsigned                        :2;
        unsigned WAIT                   :2;
        unsigned                        :1;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned WM0                    :1;
        unsigned WM1                    :1;
        unsigned                        :2;
        unsigned WAIT0                  :1;
        unsigned WAIT1                  :1;
    };
} MEMCONbits_t;
extern volatile MEMCONbits_t MEMCONbits __at(0xF9C);
// bitfield macros
#define _MEMCON_WM_POSN                                     0x0
#define _MEMCON_WM_POSITION                                 0x0
#define _MEMCON_WM_SIZE                                     0x2
#define _MEMCON_WM_LENGTH                                   0x2
#define _MEMCON_WM_MASK                                     0x3
#define _MEMCON_WAIT_POSN                                   0x4
#define _MEMCON_WAIT_POSITION                               0x4
#define _MEMCON_WAIT_SIZE                                   0x2
#define _MEMCON_WAIT_LENGTH                                 0x2
#define _MEMCON_WAIT_MASK                                   0x30
#define _MEMCON_EBDIS_POSN                                  0x7
#define _MEMCON_EBDIS_POSITION                              0x7
#define _MEMCON_EBDIS_SIZE                                  0x1
#define _MEMCON_EBDIS_LENGTH                                0x1
#define _MEMCON_EBDIS_MASK                                  0x80
#define _MEMCON_WM0_POSN                                    0x0
#define _MEMCON_WM0_POSITION                                0x0
#define _MEMCON_WM0_SIZE                                    0x1
#define _MEMCON_WM0_LENGTH                                  0x1
#define _MEMCON_WM0_MASK                                    0x1
#define _MEMCON_WM1_POSN                                    0x1
#define _MEMCON_WM1_POSITION                                0x1
#define _MEMCON_WM1_SIZE                                    0x1
#define _MEMCON_WM1_LENGTH                                  0x1
#define _MEMCON_WM1_MASK                                    0x2
#define _MEMCON_WAIT0_POSN                                  0x4
#define _MEMCON_WAIT0_POSITION                              0x4
#define _MEMCON_WAIT0_SIZE                                  0x1
#define _MEMCON_WAIT0_LENGTH                                0x1
#define _MEMCON_WAIT0_MASK                                  0x10
#define _MEMCON_WAIT1_POSN                                  0x5
#define _MEMCON_WAIT1_POSITION                              0x5
#define _MEMCON_WAIT1_SIZE                                  0x1
#define _MEMCON_WAIT1_LENGTH                                0x1
#define _MEMCON_WAIT1_MASK                                  0x20

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0xF9D);
#ifndef _LIB_BUILD
asm("PIE1 equ 0F9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned                        :1;
        unsigned SSPIE                  :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned ADIE                   :1;
        unsigned PSPIE                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IE                 :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0xF9D);
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
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
#define _PIE1_TX1IE_POSN                                    0x4
#define _PIE1_TX1IE_POSITION                                0x4
#define _PIE1_TX1IE_SIZE                                    0x1
#define _PIE1_TX1IE_LENGTH                                  0x1
#define _PIE1_TX1IE_MASK                                    0x10
#define _PIE1_RC1IE_POSN                                    0x5
#define _PIE1_RC1IE_POSITION                                0x5
#define _PIE1_RC1IE_SIZE                                    0x1
#define _PIE1_RC1IE_LENGTH                                  0x1
#define _PIE1_RC1IE_MASK                                    0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_PSPIE_POSN                                    0x7
#define _PIE1_PSPIE_POSITION                                0x7
#define _PIE1_PSPIE_SIZE                                    0x1
#define _PIE1_PSPIE_LENGTH                                  0x1
#define _PIE1_PSPIE_MASK                                    0x80
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

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0xF9E);
#ifndef _LIB_BUILD
asm("PIR1 equ 0F9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned                        :1;
        unsigned SSPIF                  :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned ADIF                   :1;
        unsigned PSPIF                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IF                 :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0xF9E);
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
#define _PIR1_SSPIF_POSN                                    0x3
#define _PIR1_SSPIF_POSITION                                0x3
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x8
#define _PIR1_TX1IF_POSN                                    0x4
#define _PIR1_TX1IF_POSITION                                0x4
#define _PIR1_TX1IF_SIZE                                    0x1
#define _PIR1_TX1IF_LENGTH                                  0x1
#define _PIR1_TX1IF_MASK                                    0x10
#define _PIR1_RC1IF_POSN                                    0x5
#define _PIR1_RC1IF_POSITION                                0x5
#define _PIR1_RC1IF_SIZE                                    0x1
#define _PIR1_RC1IF_LENGTH                                  0x1
#define _PIR1_RC1IF_MASK                                    0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_PSPIF_POSN                                    0x7
#define _PIR1_PSPIF_POSITION                                0x7
#define _PIR1_PSPIF_SIZE                                    0x1
#define _PIR1_PSPIF_LENGTH                                  0x1
#define _PIR1_PSPIF_MASK                                    0x80
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

// Register: IPR1
#define IPR1 IPR1
extern volatile unsigned char           IPR1                __at(0xF9F);
#ifndef _LIB_BUILD
asm("IPR1 equ 0F9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IP                 :1;
        unsigned TMR2IP                 :1;
        unsigned                        :1;
        unsigned SSPIP                  :1;
        unsigned TX1IP                  :1;
        unsigned RC1IP                  :1;
        unsigned ADIP                   :1;
        unsigned PSPIP                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IP                 :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
    };
} IPR1bits_t;
extern volatile IPR1bits_t IPR1bits __at(0xF9F);
// bitfield macros
#define _IPR1_TMR1IP_POSN                                   0x0
#define _IPR1_TMR1IP_POSITION                               0x0
#define _IPR1_TMR1IP_SIZE                                   0x1
#define _IPR1_TMR1IP_LENGTH                                 0x1
#define _IPR1_TMR1IP_MASK                                   0x1
#define _IPR1_TMR2IP_POSN                                   0x1
#define _IPR1_TMR2IP_POSITION                               0x1
#define _IPR1_TMR2IP_SIZE                                   0x1
#define _IPR1_TMR2IP_LENGTH                                 0x1
#define _IPR1_TMR2IP_MASK                                   0x2
#define _IPR1_SSPIP_POSN                                    0x3
#define _IPR1_SSPIP_POSITION                                0x3
#define _IPR1_SSPIP_SIZE                                    0x1
#define _IPR1_SSPIP_LENGTH                                  0x1
#define _IPR1_SSPIP_MASK                                    0x8
#define _IPR1_TX1IP_POSN                                    0x4
#define _IPR1_TX1IP_POSITION                                0x4
#define _IPR1_TX1IP_SIZE                                    0x1
#define _IPR1_TX1IP_LENGTH                                  0x1
#define _IPR1_TX1IP_MASK                                    0x10
#define _IPR1_RC1IP_POSN                                    0x5
#define _IPR1_RC1IP_POSITION                                0x5
#define _IPR1_RC1IP_SIZE                                    0x1
#define _IPR1_RC1IP_LENGTH                                  0x1
#define _IPR1_RC1IP_MASK                                    0x20
#define _IPR1_ADIP_POSN                                     0x6
#define _IPR1_ADIP_POSITION                                 0x6
#define _IPR1_ADIP_SIZE                                     0x1
#define _IPR1_ADIP_LENGTH                                   0x1
#define _IPR1_ADIP_MASK                                     0x40
#define _IPR1_PSPIP_POSN                                    0x7
#define _IPR1_PSPIP_POSITION                                0x7
#define _IPR1_PSPIP_SIZE                                    0x1
#define _IPR1_PSPIP_LENGTH                                  0x1
#define _IPR1_PSPIP_MASK                                    0x80
#define _IPR1_SSP1IP_POSN                                   0x3
#define _IPR1_SSP1IP_POSITION                               0x3
#define _IPR1_SSP1IP_SIZE                                   0x1
#define _IPR1_SSP1IP_LENGTH                                 0x1
#define _IPR1_SSP1IP_MASK                                   0x8
#define _IPR1_TXIP_POSN                                     0x4
#define _IPR1_TXIP_POSITION                                 0x4
#define _IPR1_TXIP_SIZE                                     0x1
#define _IPR1_TXIP_LENGTH                                   0x1
#define _IPR1_TXIP_MASK                                     0x10
#define _IPR1_RCIP_POSN                                     0x5
#define _IPR1_RCIP_POSITION                                 0x5
#define _IPR1_RCIP_SIZE                                     0x1
#define _IPR1_RCIP_LENGTH                                   0x1
#define _IPR1_RCIP_MASK                                     0x20

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0xFA0);
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IE                 :1;
        unsigned LVDIE                  :1;
        unsigned BCLIE                  :1;
        unsigned                        :2;
        unsigned CMIE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCL1IE                 :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_TMR3IE_POSN                                   0x1
#define _PIE2_TMR3IE_POSITION                               0x1
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x2
#define _PIE2_LVDIE_POSN                                    0x2
#define _PIE2_LVDIE_POSITION                                0x2
#define _PIE2_LVDIE_SIZE                                    0x1
#define _PIE2_LVDIE_LENGTH                                  0x1
#define _PIE2_LVDIE_MASK                                    0x4
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8
#define _PIE2_CMIE_POSN                                     0x6
#define _PIE2_CMIE_POSITION                                 0x6
#define _PIE2_CMIE_SIZE                                     0x1
#define _PIE2_CMIE_LENGTH                                   0x1
#define _PIE2_CMIE_MASK                                     0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0xFA1);
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IF                 :1;
        unsigned LVDIF                  :1;
        unsigned BCLIF                  :1;
        unsigned                        :2;
        unsigned CMIF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCL1IF                 :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_TMR3IF_POSN                                   0x1
#define _PIR2_TMR3IF_POSITION                               0x1
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x2
#define _PIR2_LVDIF_POSN                                    0x2
#define _PIR2_LVDIF_POSITION                                0x2
#define _PIR2_LVDIF_SIZE                                    0x1
#define _PIR2_LVDIF_LENGTH                                  0x1
#define _PIR2_LVDIF_MASK                                    0x4
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8
#define _PIR2_CMIF_POSN                                     0x6
#define _PIR2_CMIF_POSITION                                 0x6
#define _PIR2_CMIF_SIZE                                     0x1
#define _PIR2_CMIF_LENGTH                                   0x1
#define _PIR2_CMIF_MASK                                     0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8

// Register: IPR2
#define IPR2 IPR2
extern volatile unsigned char           IPR2                __at(0xFA2);
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IP                 :1;
        unsigned LVDIP                  :1;
        unsigned BCLIP                  :1;
        unsigned                        :2;
        unsigned CMIP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCL1IP                 :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_TMR3IP_POSN                                   0x1
#define _IPR2_TMR3IP_POSITION                               0x1
#define _IPR2_TMR3IP_SIZE                                   0x1
#define _IPR2_TMR3IP_LENGTH                                 0x1
#define _IPR2_TMR3IP_MASK                                   0x2
#define _IPR2_LVDIP_POSN                                    0x2
#define _IPR2_LVDIP_POSITION                                0x2
#define _IPR2_LVDIP_SIZE                                    0x1
#define _IPR2_LVDIP_LENGTH                                  0x1
#define _IPR2_LVDIP_MASK                                    0x4
#define _IPR2_BCLIP_POSN                                    0x3
#define _IPR2_BCLIP_POSITION                                0x3
#define _IPR2_BCLIP_SIZE                                    0x1
#define _IPR2_BCLIP_LENGTH                                  0x1
#define _IPR2_BCLIP_MASK                                    0x8
#define _IPR2_CMIP_POSN                                     0x6
#define _IPR2_CMIP_POSITION                                 0x6
#define _IPR2_CMIP_SIZE                                     0x1
#define _IPR2_CMIP_LENGTH                                   0x1
#define _IPR2_CMIP_MASK                                     0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
#define _IPR2_BCL1IP_POSN                                   0x3
#define _IPR2_BCL1IP_POSITION                               0x3
#define _IPR2_BCL1IP_SIZE                                   0x1
#define _IPR2_BCL1IP_LENGTH                                 0x1
#define _IPR2_BCL1IP_MASK                                   0x8

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0xFA3);
#ifndef _LIB_BUILD
asm("PIE3 equ 0FA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned CCP1IE                 :1;
        unsigned CCP2IE                 :1;
        unsigned                        :1;
        unsigned TX2IE                  :1;
        unsigned RC2IE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXB1IE                 :1;
        unsigned TXB0IE                 :1;
        unsigned                        :1;
        unsigned TXB2IE                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIE                 :1;
        unsigned                        :2;
        unsigned TXBNIE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0xFA3);
// bitfield macros
#define _PIE3_CCP1IE_POSN                                   0x1
#define _PIE3_CCP1IE_POSITION                               0x1
#define _PIE3_CCP1IE_SIZE                                   0x1
#define _PIE3_CCP1IE_LENGTH                                 0x1
#define _PIE3_CCP1IE_MASK                                   0x2
#define _PIE3_CCP2IE_POSN                                   0x2
#define _PIE3_CCP2IE_POSITION                               0x2
#define _PIE3_CCP2IE_SIZE                                   0x1
#define _PIE3_CCP2IE_LENGTH                                 0x1
#define _PIE3_CCP2IE_MASK                                   0x4
#define _PIE3_TX2IE_POSN                                    0x4
#define _PIE3_TX2IE_POSITION                                0x4
#define _PIE3_TX2IE_SIZE                                    0x1
#define _PIE3_TX2IE_LENGTH                                  0x1
#define _PIE3_TX2IE_MASK                                    0x10
#define _PIE3_RC2IE_POSN                                    0x5
#define _PIE3_RC2IE_POSITION                                0x5
#define _PIE3_RC2IE_SIZE                                    0x1
#define _PIE3_RC2IE_LENGTH                                  0x1
#define _PIE3_RC2IE_MASK                                    0x20
#define _PIE3_RXB1IE_POSN                                   0x1
#define _PIE3_RXB1IE_POSITION                               0x1
#define _PIE3_RXB1IE_SIZE                                   0x1
#define _PIE3_RXB1IE_LENGTH                                 0x1
#define _PIE3_RXB1IE_MASK                                   0x2
#define _PIE3_TXB0IE_POSN                                   0x2
#define _PIE3_TXB0IE_POSITION                               0x2
#define _PIE3_TXB0IE_SIZE                                   0x1
#define _PIE3_TXB0IE_LENGTH                                 0x1
#define _PIE3_TXB0IE_MASK                                   0x4
#define _PIE3_TXB2IE_POSN                                   0x4
#define _PIE3_TXB2IE_POSITION                               0x4
#define _PIE3_TXB2IE_SIZE                                   0x1
#define _PIE3_TXB2IE_LENGTH                                 0x1
#define _PIE3_TXB2IE_MASK                                   0x10
#define _PIE3_RXBNIE_POSN                                   0x1
#define _PIE3_RXBNIE_POSITION                               0x1
#define _PIE3_RXBNIE_SIZE                                   0x1
#define _PIE3_RXBNIE_LENGTH                                 0x1
#define _PIE3_RXBNIE_MASK                                   0x2
#define _PIE3_TXBNIE_POSN                                   0x4
#define _PIE3_TXBNIE_POSITION                               0x4
#define _PIE3_TXBNIE_SIZE                                   0x1
#define _PIE3_TXBNIE_LENGTH                                 0x1
#define _PIE3_TXBNIE_MASK                                   0x10

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0xFA4);
#ifndef _LIB_BUILD
asm("PIR3 equ 0FA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned CCP1IF                 :1;
        unsigned CCP2IF                 :1;
        unsigned                        :1;
        unsigned TX2IF                  :1;
        unsigned RC2IF                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIF                 :1;
        unsigned                        :2;
        unsigned TXBNIF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0xFA4);
// bitfield macros
#define _PIR3_CCP1IF_POSN                                   0x1
#define _PIR3_CCP1IF_POSITION                               0x1
#define _PIR3_CCP1IF_SIZE                                   0x1
#define _PIR3_CCP1IF_LENGTH                                 0x1
#define _PIR3_CCP1IF_MASK                                   0x2
#define _PIR3_CCP2IF_POSN                                   0x2
#define _PIR3_CCP2IF_POSITION                               0x2
#define _PIR3_CCP2IF_SIZE                                   0x1
#define _PIR3_CCP2IF_LENGTH                                 0x1
#define _PIR3_CCP2IF_MASK                                   0x4
#define _PIR3_TX2IF_POSN                                    0x4
#define _PIR3_TX2IF_POSITION                                0x4
#define _PIR3_TX2IF_SIZE                                    0x1
#define _PIR3_TX2IF_LENGTH                                  0x1
#define _PIR3_TX2IF_MASK                                    0x10
#define _PIR3_RC2IF_POSN                                    0x5
#define _PIR3_RC2IF_POSITION                                0x5
#define _PIR3_RC2IF_SIZE                                    0x1
#define _PIR3_RC2IF_LENGTH                                  0x1
#define _PIR3_RC2IF_MASK                                    0x20
#define _PIR3_RXBNIF_POSN                                   0x1
#define _PIR3_RXBNIF_POSITION                               0x1
#define _PIR3_RXBNIF_SIZE                                   0x1
#define _PIR3_RXBNIF_LENGTH                                 0x1
#define _PIR3_RXBNIF_MASK                                   0x2
#define _PIR3_TXBNIF_POSN                                   0x4
#define _PIR3_TXBNIF_POSITION                               0x4
#define _PIR3_TXBNIF_SIZE                                   0x1
#define _PIR3_TXBNIF_LENGTH                                 0x1
#define _PIR3_TXBNIF_MASK                                   0x10

// Register: IPR3
#define IPR3 IPR3
extern volatile unsigned char           IPR3                __at(0xFA5);
#ifndef _LIB_BUILD
asm("IPR3 equ 0FA5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned CCP1IP                 :1;
        unsigned CCP2IP                 :1;
        unsigned                        :1;
        unsigned TX2IP                  :1;
        unsigned RC2IP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIP                 :1;
        unsigned                        :2;
        unsigned TXBNIP                 :1;
    };
} IPR3bits_t;
extern volatile IPR3bits_t IPR3bits __at(0xFA5);
// bitfield macros
#define _IPR3_CCP1IP_POSN                                   0x1
#define _IPR3_CCP1IP_POSITION                               0x1
#define _IPR3_CCP1IP_SIZE                                   0x1
#define _IPR3_CCP1IP_LENGTH                                 0x1
#define _IPR3_CCP1IP_MASK                                   0x2
#define _IPR3_CCP2IP_POSN                                   0x2
#define _IPR3_CCP2IP_POSITION                               0x2
#define _IPR3_CCP2IP_SIZE                                   0x1
#define _IPR3_CCP2IP_LENGTH                                 0x1
#define _IPR3_CCP2IP_MASK                                   0x4
#define _IPR3_TX2IP_POSN                                    0x4
#define _IPR3_TX2IP_POSITION                                0x4
#define _IPR3_TX2IP_SIZE                                    0x1
#define _IPR3_TX2IP_LENGTH                                  0x1
#define _IPR3_TX2IP_MASK                                    0x10
#define _IPR3_RC2IP_POSN                                    0x5
#define _IPR3_RC2IP_POSITION                                0x5
#define _IPR3_RC2IP_SIZE                                    0x1
#define _IPR3_RC2IP_LENGTH                                  0x1
#define _IPR3_RC2IP_MASK                                    0x20
#define _IPR3_RXBNIP_POSN                                   0x1
#define _IPR3_RXBNIP_POSITION                               0x1
#define _IPR3_RXBNIP_SIZE                                   0x1
#define _IPR3_RXBNIP_LENGTH                                 0x1
#define _IPR3_RXBNIP_MASK                                   0x2
#define _IPR3_TXBNIP_POSN                                   0x4
#define _IPR3_TXBNIP_POSITION                               0x4
#define _IPR3_TXBNIP_SIZE                                   0x1
#define _IPR3_TXBNIP_LENGTH                                 0x1
#define _IPR3_TXBNIP_MASK                                   0x10

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0xFA6);
#ifndef _LIB_BUILD
asm("EECON1 equ 0FA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0xFA6);
// bitfield macros
#define _EECON1_WR_POSN                                     0x1
#define _EECON1_WR_POSITION                                 0x1
#define _EECON1_WR_SIZE                                     0x1
#define _EECON1_WR_LENGTH                                   0x1
#define _EECON1_WR_MASK                                     0x2
#define _EECON1_WREN_POSN                                   0x2
#define _EECON1_WREN_POSITION                               0x2
#define _EECON1_WREN_SIZE                                   0x1
#define _EECON1_WREN_LENGTH                                 0x1
#define _EECON1_WREN_MASK                                   0x4
#define _EECON1_WRERR_POSN                                  0x3
#define _EECON1_WRERR_POSITION                              0x3
#define _EECON1_WRERR_SIZE                                  0x1
#define _EECON1_WRERR_LENGTH                                0x1
#define _EECON1_WRERR_MASK                                  0x8
#define _EECON1_FREE_POSN                                   0x4
#define _EECON1_FREE_POSITION                               0x4
#define _EECON1_FREE_SIZE                                   0x1
#define _EECON1_FREE_LENGTH                                 0x1
#define _EECON1_FREE_MASK                                   0x10

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0xFA7);
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif

// Register: RCSTA1
#define RCSTA1 RCSTA1
extern volatile unsigned char           RCSTA1              __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA               __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
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
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D1                  :1;
        unsigned OERR1                  :1;
        unsigned FERR1                  :1;
        unsigned ADDEN1                 :1;
        unsigned CREN1                  :1;
        unsigned SREN1                  :1;
        unsigned RX91                   :1;
        unsigned SPEN1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits __at(0xFAB);
// bitfield macros
#define _RCSTA1_RX9D_POSN                                   0x0
#define _RCSTA1_RX9D_POSITION                               0x0
#define _RCSTA1_RX9D_SIZE                                   0x1
#define _RCSTA1_RX9D_LENGTH                                 0x1
#define _RCSTA1_RX9D_MASK                                   0x1
#define _RCSTA1_OERR_POSN                                   0x1
#define _RCSTA1_OERR_POSITION                               0x1
#define _RCSTA1_OERR_SIZE                                   0x1
#define _RCSTA1_OERR_LENGTH                                 0x1
#define _RCSTA1_OERR_MASK                                   0x2
#define _RCSTA1_FERR_POSN                                   0x2
#define _RCSTA1_FERR_POSITION                               0x2
#define _RCSTA1_FERR_SIZE                                   0x1
#define _RCSTA1_FERR_LENGTH                                 0x1
#define _RCSTA1_FERR_MASK                                   0x4
#define _RCSTA1_ADDEN_POSN                                  0x3
#define _RCSTA1_ADDEN_POSITION                              0x3
#define _RCSTA1_ADDEN_SIZE                                  0x1
#define _RCSTA1_ADDEN_LENGTH                                0x1
#define _RCSTA1_ADDEN_MASK                                  0x8
#define _RCSTA1_CREN_POSN                                   0x4
#define _RCSTA1_CREN_POSITION                               0x4
#define _RCSTA1_CREN_SIZE                                   0x1
#define _RCSTA1_CREN_LENGTH                                 0x1
#define _RCSTA1_CREN_MASK                                   0x10
#define _RCSTA1_SREN_POSN                                   0x5
#define _RCSTA1_SREN_POSITION                               0x5
#define _RCSTA1_SREN_SIZE                                   0x1
#define _RCSTA1_SREN_LENGTH                                 0x1
#define _RCSTA1_SREN_MASK                                   0x20
#define _RCSTA1_RX9_POSN                                    0x6
#define _RCSTA1_RX9_POSITION                                0x6
#define _RCSTA1_RX9_SIZE                                    0x1
#define _RCSTA1_RX9_LENGTH                                  0x1
#define _RCSTA1_RX9_MASK                                    0x40
#define _RCSTA1_SPEN_POSN                                   0x7
#define _RCSTA1_SPEN_POSITION                               0x7
#define _RCSTA1_SPEN_SIZE                                   0x1
#define _RCSTA1_SPEN_LENGTH                                 0x1
#define _RCSTA1_SPEN_MASK                                   0x80
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1
#define _RCSTA1_RC9_POSN                                    0x6
#define _RCSTA1_RC9_POSITION                                0x6
#define _RCSTA1_RC9_SIZE                                    0x1
#define _RCSTA1_RC9_LENGTH                                  0x1
#define _RCSTA1_RC9_MASK                                    0x40
#define _RCSTA1_NOT_RC8_POSN                                0x6
#define _RCSTA1_NOT_RC8_POSITION                            0x6
#define _RCSTA1_NOT_RC8_SIZE                                0x1
#define _RCSTA1_NOT_RC8_LENGTH                              0x1
#define _RCSTA1_NOT_RC8_MASK                                0x40
#define _RCSTA1_nRC8_POSN                                   0x6
#define _RCSTA1_nRC8_POSITION                               0x6
#define _RCSTA1_nRC8_SIZE                                   0x1
#define _RCSTA1_nRC8_LENGTH                                 0x1
#define _RCSTA1_nRC8_MASK                                   0x40
#define _RCSTA1_RC8_9_POSN                                  0x6
#define _RCSTA1_RC8_9_POSITION                              0x6
#define _RCSTA1_RC8_9_SIZE                                  0x1
#define _RCSTA1_RC8_9_LENGTH                                0x1
#define _RCSTA1_RC8_9_MASK                                  0x40
#define _RCSTA1_RX9D1_POSN                                  0x0
#define _RCSTA1_RX9D1_POSITION                              0x0
#define _RCSTA1_RX9D1_SIZE                                  0x1
#define _RCSTA1_RX9D1_LENGTH                                0x1
#define _RCSTA1_RX9D1_MASK                                  0x1
#define _RCSTA1_OERR1_POSN                                  0x1
#define _RCSTA1_OERR1_POSITION                              0x1
#define _RCSTA1_OERR1_SIZE                                  0x1
#define _RCSTA1_OERR1_LENGTH                                0x1
#define _RCSTA1_OERR1_MASK                                  0x2
#define _RCSTA1_FERR1_POSN                                  0x2
#define _RCSTA1_FERR1_POSITION                              0x2
#define _RCSTA1_FERR1_SIZE                                  0x1
#define _RCSTA1_FERR1_LENGTH                                0x1
#define _RCSTA1_FERR1_MASK                                  0x4
#define _RCSTA1_ADDEN1_POSN                                 0x3
#define _RCSTA1_ADDEN1_POSITION                             0x3
#define _RCSTA1_ADDEN1_SIZE                                 0x1
#define _RCSTA1_ADDEN1_LENGTH                               0x1
#define _RCSTA1_ADDEN1_MASK                                 0x8
#define _RCSTA1_CREN1_POSN                                  0x4
#define _RCSTA1_CREN1_POSITION                              0x4
#define _RCSTA1_CREN1_SIZE                                  0x1
#define _RCSTA1_CREN1_LENGTH                                0x1
#define _RCSTA1_CREN1_MASK                                  0x10
#define _RCSTA1_SREN1_POSN                                  0x5
#define _RCSTA1_SREN1_POSITION                              0x5
#define _RCSTA1_SREN1_SIZE                                  0x1
#define _RCSTA1_SREN1_LENGTH                                0x1
#define _RCSTA1_SREN1_MASK                                  0x20
#define _RCSTA1_RX91_POSN                                   0x6
#define _RCSTA1_RX91_POSITION                               0x6
#define _RCSTA1_RX91_SIZE                                   0x1
#define _RCSTA1_RX91_LENGTH                                 0x1
#define _RCSTA1_RX91_MASK                                   0x40
#define _RCSTA1_SPEN1_POSN                                  0x7
#define _RCSTA1_SPEN1_POSITION                              0x7
#define _RCSTA1_SPEN1_SIZE                                  0x1
#define _RCSTA1_SPEN1_LENGTH                                0x1
#define _RCSTA1_SPEN1_MASK                                  0x80
#define _RCSTA1_SRENA_POSN                                  0x5
#define _RCSTA1_SRENA_POSITION                              0x5
#define _RCSTA1_SRENA_SIZE                                  0x1
#define _RCSTA1_SRENA_LENGTH                                0x1
#define _RCSTA1_SRENA_MASK                                  0x20
// alias bitfield definitions
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
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D1                  :1;
        unsigned OERR1                  :1;
        unsigned FERR1                  :1;
        unsigned ADDEN1                 :1;
        unsigned CREN1                  :1;
        unsigned SREN1                  :1;
        unsigned RX91                   :1;
        unsigned SPEN1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0xFAB);
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
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_NOT_RC8_POSN                                 0x6
#define _RCSTA_NOT_RC8_POSITION                             0x6
#define _RCSTA_NOT_RC8_SIZE                                 0x1
#define _RCSTA_NOT_RC8_LENGTH                               0x1
#define _RCSTA_NOT_RC8_MASK                                 0x40
#define _RCSTA_nRC8_POSN                                    0x6
#define _RCSTA_nRC8_POSITION                                0x6
#define _RCSTA_nRC8_SIZE                                    0x1
#define _RCSTA_nRC8_LENGTH                                  0x1
#define _RCSTA_nRC8_MASK                                    0x40
#define _RCSTA_RC8_9_POSN                                   0x6
#define _RCSTA_RC8_9_POSITION                               0x6
#define _RCSTA_RC8_9_SIZE                                   0x1
#define _RCSTA_RC8_9_LENGTH                                 0x1
#define _RCSTA_RC8_9_MASK                                   0x40
#define _RCSTA_RX9D1_POSN                                   0x0
#define _RCSTA_RX9D1_POSITION                               0x0
#define _RCSTA_RX9D1_SIZE                                   0x1
#define _RCSTA_RX9D1_LENGTH                                 0x1
#define _RCSTA_RX9D1_MASK                                   0x1
#define _RCSTA_OERR1_POSN                                   0x1
#define _RCSTA_OERR1_POSITION                               0x1
#define _RCSTA_OERR1_SIZE                                   0x1
#define _RCSTA_OERR1_LENGTH                                 0x1
#define _RCSTA_OERR1_MASK                                   0x2
#define _RCSTA_FERR1_POSN                                   0x2
#define _RCSTA_FERR1_POSITION                               0x2
#define _RCSTA_FERR1_SIZE                                   0x1
#define _RCSTA_FERR1_LENGTH                                 0x1
#define _RCSTA_FERR1_MASK                                   0x4
#define _RCSTA_ADDEN1_POSN                                  0x3
#define _RCSTA_ADDEN1_POSITION                              0x3
#define _RCSTA_ADDEN1_SIZE                                  0x1
#define _RCSTA_ADDEN1_LENGTH                                0x1
#define _RCSTA_ADDEN1_MASK                                  0x8
#define _RCSTA_CREN1_POSN                                   0x4
#define _RCSTA_CREN1_POSITION                               0x4
#define _RCSTA_CREN1_SIZE                                   0x1
#define _RCSTA_CREN1_LENGTH                                 0x1
#define _RCSTA_CREN1_MASK                                   0x10
#define _RCSTA_SREN1_POSN                                   0x5
#define _RCSTA_SREN1_POSITION                               0x5
#define _RCSTA_SREN1_SIZE                                   0x1
#define _RCSTA_SREN1_LENGTH                                 0x1
#define _RCSTA_SREN1_MASK                                   0x20
#define _RCSTA_RX91_POSN                                    0x6
#define _RCSTA_RX91_POSITION                                0x6
#define _RCSTA_RX91_SIZE                                    0x1
#define _RCSTA_RX91_LENGTH                                  0x1
#define _RCSTA_RX91_MASK                                    0x40
#define _RCSTA_SPEN1_POSN                                   0x7
#define _RCSTA_SPEN1_POSITION                               0x7
#define _RCSTA_SPEN1_SIZE                                   0x1
#define _RCSTA_SPEN1_LENGTH                                 0x1
#define _RCSTA_SPEN1_MASK                                   0x80
#define _RCSTA_SRENA_POSN                                   0x5
#define _RCSTA_SRENA_POSITION                               0x5
#define _RCSTA_SRENA_SIZE                                   0x1
#define _RCSTA_SRENA_LENGTH                                 0x1
#define _RCSTA_SRENA_MASK                                   0x20

// Register: TXSTA1
#define TXSTA1 TXSTA1
extern volatile unsigned char           TXSTA1              __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA               __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
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
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
        unsigned TRMT1                  :1;
        unsigned BRGH1                  :1;
        unsigned SENDB1                 :1;
        unsigned SYNC1                  :1;
        unsigned TXEN1                  :1;
        unsigned TX91                   :1;
        unsigned CSRC1                  :1;
    };
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits __at(0xFAC);
// bitfield macros
#define _TXSTA1_TX9D_POSN                                   0x0
#define _TXSTA1_TX9D_POSITION                               0x0
#define _TXSTA1_TX9D_SIZE                                   0x1
#define _TXSTA1_TX9D_LENGTH                                 0x1
#define _TXSTA1_TX9D_MASK                                   0x1
#define _TXSTA1_TRMT_POSN                                   0x1
#define _TXSTA1_TRMT_POSITION                               0x1
#define _TXSTA1_TRMT_SIZE                                   0x1
#define _TXSTA1_TRMT_LENGTH                                 0x1
#define _TXSTA1_TRMT_MASK                                   0x2
#define _TXSTA1_BRGH_POSN                                   0x2
#define _TXSTA1_BRGH_POSITION                               0x2
#define _TXSTA1_BRGH_SIZE                                   0x1
#define _TXSTA1_BRGH_LENGTH                                 0x1
#define _TXSTA1_BRGH_MASK                                   0x4
#define _TXSTA1_SENDB_POSN                                  0x3
#define _TXSTA1_SENDB_POSITION                              0x3
#define _TXSTA1_SENDB_SIZE                                  0x1
#define _TXSTA1_SENDB_LENGTH                                0x1
#define _TXSTA1_SENDB_MASK                                  0x8
#define _TXSTA1_SYNC_POSN                                   0x4
#define _TXSTA1_SYNC_POSITION                               0x4
#define _TXSTA1_SYNC_SIZE                                   0x1
#define _TXSTA1_SYNC_LENGTH                                 0x1
#define _TXSTA1_SYNC_MASK                                   0x10
#define _TXSTA1_TXEN_POSN                                   0x5
#define _TXSTA1_TXEN_POSITION                               0x5
#define _TXSTA1_TXEN_SIZE                                   0x1
#define _TXSTA1_TXEN_LENGTH                                 0x1
#define _TXSTA1_TXEN_MASK                                   0x20
#define _TXSTA1_TX9_POSN                                    0x6
#define _TXSTA1_TX9_POSITION                                0x6
#define _TXSTA1_TX9_SIZE                                    0x1
#define _TXSTA1_TX9_LENGTH                                  0x1
#define _TXSTA1_TX9_MASK                                    0x40
#define _TXSTA1_CSRC_POSN                                   0x7
#define _TXSTA1_CSRC_POSITION                               0x7
#define _TXSTA1_CSRC_SIZE                                   0x1
#define _TXSTA1_CSRC_LENGTH                                 0x1
#define _TXSTA1_CSRC_MASK                                   0x80
#define _TXSTA1_TXD8_POSN                                   0x0
#define _TXSTA1_TXD8_POSITION                               0x0
#define _TXSTA1_TXD8_SIZE                                   0x1
#define _TXSTA1_TXD8_LENGTH                                 0x1
#define _TXSTA1_TXD8_MASK                                   0x1
#define _TXSTA1_TX8_9_POSN                                  0x6
#define _TXSTA1_TX8_9_POSITION                              0x6
#define _TXSTA1_TX8_9_SIZE                                  0x1
#define _TXSTA1_TX8_9_LENGTH                                0x1
#define _TXSTA1_TX8_9_MASK                                  0x40
#define _TXSTA1_NOT_TX8_POSN                                0x6
#define _TXSTA1_NOT_TX8_POSITION                            0x6
#define _TXSTA1_NOT_TX8_SIZE                                0x1
#define _TXSTA1_NOT_TX8_LENGTH                              0x1
#define _TXSTA1_NOT_TX8_MASK                                0x40
#define _TXSTA1_nTX8_POSN                                   0x6
#define _TXSTA1_nTX8_POSITION                               0x6
#define _TXSTA1_nTX8_SIZE                                   0x1
#define _TXSTA1_nTX8_LENGTH                                 0x1
#define _TXSTA1_nTX8_MASK                                   0x40
#define _TXSTA1_TX9D1_POSN                                  0x0
#define _TXSTA1_TX9D1_POSITION                              0x0
#define _TXSTA1_TX9D1_SIZE                                  0x1
#define _TXSTA1_TX9D1_LENGTH                                0x1
#define _TXSTA1_TX9D1_MASK                                  0x1
#define _TXSTA1_TRMT1_POSN                                  0x1
#define _TXSTA1_TRMT1_POSITION                              0x1
#define _TXSTA1_TRMT1_SIZE                                  0x1
#define _TXSTA1_TRMT1_LENGTH                                0x1
#define _TXSTA1_TRMT1_MASK                                  0x2
#define _TXSTA1_BRGH1_POSN                                  0x2
#define _TXSTA1_BRGH1_POSITION                              0x2
#define _TXSTA1_BRGH1_SIZE                                  0x1
#define _TXSTA1_BRGH1_LENGTH                                0x1
#define _TXSTA1_BRGH1_MASK                                  0x4
#define _TXSTA1_SENDB1_POSN                                 0x3
#define _TXSTA1_SENDB1_POSITION                             0x3
#define _TXSTA1_SENDB1_SIZE                                 0x1
#define _TXSTA1_SENDB1_LENGTH                               0x1
#define _TXSTA1_SENDB1_MASK                                 0x8
#define _TXSTA1_SYNC1_POSN                                  0x4
#define _TXSTA1_SYNC1_POSITION                              0x4
#define _TXSTA1_SYNC1_SIZE                                  0x1
#define _TXSTA1_SYNC1_LENGTH                                0x1
#define _TXSTA1_SYNC1_MASK                                  0x10
#define _TXSTA1_TXEN1_POSN                                  0x5
#define _TXSTA1_TXEN1_POSITION                              0x5
#define _TXSTA1_TXEN1_SIZE                                  0x1
#define _TXSTA1_TXEN1_LENGTH                                0x1
#define _TXSTA1_TXEN1_MASK                                  0x20
#define _TXSTA1_TX91_POSN                                   0x6
#define _TXSTA1_TX91_POSITION                               0x6
#define _TXSTA1_TX91_SIZE                                   0x1
#define _TXSTA1_TX91_LENGTH                                 0x1
#define _TXSTA1_TX91_MASK                                   0x40
#define _TXSTA1_CSRC1_POSN                                  0x7
#define _TXSTA1_CSRC1_POSITION                              0x7
#define _TXSTA1_CSRC1_SIZE                                  0x1
#define _TXSTA1_CSRC1_LENGTH                                0x1
#define _TXSTA1_CSRC1_MASK                                  0x80
// alias bitfield definitions
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
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
        unsigned TRMT1                  :1;
        unsigned BRGH1                  :1;
        unsigned SENDB1                 :1;
        unsigned SYNC1                  :1;
        unsigned TXEN1                  :1;
        unsigned TX91                   :1;
        unsigned CSRC1                  :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0xFAC);
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
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40
#define _TXSTA_NOT_TX8_POSN                                 0x6
#define _TXSTA_NOT_TX8_POSITION                             0x6
#define _TXSTA_NOT_TX8_SIZE                                 0x1
#define _TXSTA_NOT_TX8_LENGTH                               0x1
#define _TXSTA_NOT_TX8_MASK                                 0x40
#define _TXSTA_nTX8_POSN                                    0x6
#define _TXSTA_nTX8_POSITION                                0x6
#define _TXSTA_nTX8_SIZE                                    0x1
#define _TXSTA_nTX8_LENGTH                                  0x1
#define _TXSTA_nTX8_MASK                                    0x40
#define _TXSTA_TX9D1_POSN                                   0x0
#define _TXSTA_TX9D1_POSITION                               0x0
#define _TXSTA_TX9D1_SIZE                                   0x1
#define _TXSTA_TX9D1_LENGTH                                 0x1
#define _TXSTA_TX9D1_MASK                                   0x1
#define _TXSTA_TRMT1_POSN                                   0x1
#define _TXSTA_TRMT1_POSITION                               0x1
#define _TXSTA_TRMT1_SIZE                                   0x1
#define _TXSTA_TRMT1_LENGTH                                 0x1
#define _TXSTA_TRMT1_MASK                                   0x2
#define _TXSTA_BRGH1_POSN                                   0x2
#define _TXSTA_BRGH1_POSITION                               0x2
#define _TXSTA_BRGH1_SIZE                                   0x1
#define _TXSTA_BRGH1_LENGTH                                 0x1
#define _TXSTA_BRGH1_MASK                                   0x4
#define _TXSTA_SENDB1_POSN                                  0x3
#define _TXSTA_SENDB1_POSITION                              0x3
#define _TXSTA_SENDB1_SIZE                                  0x1
#define _TXSTA_SENDB1_LENGTH                                0x1
#define _TXSTA_SENDB1_MASK                                  0x8
#define _TXSTA_SYNC1_POSN                                   0x4
#define _TXSTA_SYNC1_POSITION                               0x4
#define _TXSTA_SYNC1_SIZE                                   0x1
#define _TXSTA_SYNC1_LENGTH                                 0x1
#define _TXSTA_SYNC1_MASK                                   0x10
#define _TXSTA_TXEN1_POSN                                   0x5
#define _TXSTA_TXEN1_POSITION                               0x5
#define _TXSTA_TXEN1_SIZE                                   0x1
#define _TXSTA_TXEN1_LENGTH                                 0x1
#define _TXSTA_TXEN1_MASK                                   0x20
#define _TXSTA_TX91_POSN                                    0x6
#define _TXSTA_TX91_POSITION                                0x6
#define _TXSTA_TX91_SIZE                                    0x1
#define _TXSTA_TX91_LENGTH                                  0x1
#define _TXSTA_TX91_MASK                                    0x40
#define _TXSTA_CSRC1_POSN                                   0x7
#define _TXSTA_CSRC1_POSITION                               0x7
#define _TXSTA_CSRC1_SIZE                                   0x1
#define _TXSTA_CSRC1_LENGTH                                 0x1
#define _TXSTA_CSRC1_MASK                                   0x80

// Register: TXREG1
#define TXREG1 TXREG1
extern volatile unsigned char           TXREG1              __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG               __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif

// Register: RCREG1
#define RCREG1 RCREG1
extern volatile unsigned char           RCREG1              __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG               __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif

// Register: SPBRG1
#define SPBRG1 SPBRG1
extern volatile unsigned char           SPBRG1              __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG               __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif

// Register: PSPCON
#define PSPCON PSPCON
extern volatile unsigned char           PSPCON              __at(0xFB0);
#ifndef _LIB_BUILD
asm("PSPCON equ 0FB0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PSPMODE                :1;
        unsigned IBOV                   :1;
        unsigned OBF                    :1;
        unsigned IBF                    :1;
    };
} PSPCONbits_t;
extern volatile PSPCONbits_t PSPCONbits __at(0xFB0);
// bitfield macros
#define _PSPCON_PSPMODE_POSN                                0x4
#define _PSPCON_PSPMODE_POSITION                            0x4
#define _PSPCON_PSPMODE_SIZE                                0x1
#define _PSPCON_PSPMODE_LENGTH                              0x1
#define _PSPCON_PSPMODE_MASK                                0x10
#define _PSPCON_IBOV_POSN                                   0x5
#define _PSPCON_IBOV_POSITION                               0x5
#define _PSPCON_IBOV_SIZE                                   0x1
#define _PSPCON_IBOV_LENGTH                                 0x1
#define _PSPCON_IBOV_MASK                                   0x20
#define _PSPCON_OBF_POSN                                    0x6
#define _PSPCON_OBF_POSITION                                0x6
#define _PSPCON_OBF_SIZE                                    0x1
#define _PSPCON_OBF_LENGTH                                  0x1
#define _PSPCON_OBF_MASK                                    0x40
#define _PSPCON_IBF_POSN                                    0x7
#define _PSPCON_IBF_POSITION                                0x7
#define _PSPCON_IBF_SIZE                                    0x1
#define _PSPCON_IBF_LENGTH                                  0x1
#define _PSPCON_IBF_MASK                                    0x80

// Register: T3CON
#define T3CON T3CON
extern volatile unsigned char           T3CON               __at(0xFB1);
#ifndef _LIB_BUILD
asm("T3CON equ 0FB1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T3SYNC             :1;
    };
    struct {
        unsigned TMR3ON                 :1;
        unsigned TMR3CS                 :1;
        unsigned nT3SYNC                :1;
        unsigned T3CCP1                 :1;
        unsigned T3CKPS                 :2;
        unsigned T3CCP2                 :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3INSYNC               :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
        unsigned                        :3;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits __at(0xFB1);
// bitfield macros
#define _T3CON_NOT_T3SYNC_POSN                              0x2
#define _T3CON_NOT_T3SYNC_POSITION                          0x2
#define _T3CON_NOT_T3SYNC_SIZE                              0x1
#define _T3CON_NOT_T3SYNC_LENGTH                            0x1
#define _T3CON_NOT_T3SYNC_MASK                              0x4
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_TMR3CS_POSN                                  0x1
#define _T3CON_TMR3CS_POSITION                              0x1
#define _T3CON_TMR3CS_SIZE                                  0x1
#define _T3CON_TMR3CS_LENGTH                                0x1
#define _T3CON_TMR3CS_MASK                                  0x2
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_T3CCP1_POSN                                  0x3
#define _T3CON_T3CCP1_POSITION                              0x3
#define _T3CON_T3CCP1_SIZE                                  0x1
#define _T3CON_T3CCP1_LENGTH                                0x1
#define _T3CON_T3CCP1_MASK                                  0x8
#define _T3CON_T3CKPS_POSN                                  0x4
#define _T3CON_T3CKPS_POSITION                              0x4
#define _T3CON_T3CKPS_SIZE                                  0x2
#define _T3CON_T3CKPS_LENGTH                                0x2
#define _T3CON_T3CKPS_MASK                                  0x30
#define _T3CON_T3CCP2_POSN                                  0x6
#define _T3CON_T3CCP2_POSITION                              0x6
#define _T3CON_T3CCP2_SIZE                                  0x1
#define _T3CON_T3CCP2_LENGTH                                0x1
#define _T3CON_T3CCP2_MASK                                  0x40
#define _T3CON_RD16_POSN                                    0x7
#define _T3CON_RD16_POSITION                                0x7
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x80
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
#define _T3CON_T3CKPS0_POSN                                 0x4
#define _T3CON_T3CKPS0_POSITION                             0x4
#define _T3CON_T3CKPS0_SIZE                                 0x1
#define _T3CON_T3CKPS0_LENGTH                               0x1
#define _T3CON_T3CKPS0_MASK                                 0x10
#define _T3CON_T3CKPS1_POSN                                 0x5
#define _T3CON_T3CKPS1_POSITION                             0x5
#define _T3CON_T3CKPS1_SIZE                                 0x1
#define _T3CON_T3CKPS1_LENGTH                               0x1
#define _T3CON_T3CKPS1_MASK                                 0x20
#define _T3CON_T3INSYNC_POSN                                0x2
#define _T3CON_T3INSYNC_POSITION                            0x2
#define _T3CON_T3INSYNC_SIZE                                0x1
#define _T3CON_T3INSYNC_LENGTH                              0x1
#define _T3CON_T3INSYNC_MASK                                0x4
#define _T3CON_SOSCEN3_POSN                                 0x3
#define _T3CON_SOSCEN3_POSITION                             0x3
#define _T3CON_SOSCEN3_SIZE                                 0x1
#define _T3CON_SOSCEN3_LENGTH                               0x1
#define _T3CON_SOSCEN3_MASK                                 0x8
#define _T3CON_RD163_POSN                                   0x7
#define _T3CON_RD163_POSITION                               0x7
#define _T3CON_RD163_SIZE                                   0x1
#define _T3CON_RD163_LENGTH                                 0x1
#define _T3CON_RD163_MASK                                   0x80
#define _T3CON_T3RD16_POSN                                  0x7
#define _T3CON_T3RD16_POSITION                              0x7
#define _T3CON_T3RD16_SIZE                                  0x1
#define _T3CON_T3RD16_LENGTH                                0x1
#define _T3CON_T3RD16_MASK                                  0x80

// Register: TMR3
#define TMR3 TMR3
extern volatile unsigned short          TMR3                __at(0xFB2);
#ifndef _LIB_BUILD
asm("TMR3 equ 0FB2h");
#endif

// Register: TMR3L
#define TMR3L TMR3L
extern volatile unsigned char           TMR3L               __at(0xFB2);
#ifndef _LIB_BUILD
asm("TMR3L equ 0FB2h");
#endif

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0xFB3);
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif

// Register: CMCON
#define CMCON CMCON
extern volatile unsigned char           CMCON               __at(0xFB4);
#ifndef _LIB_BUILD
asm("CMCON equ 0FB4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CM                     :3;
        unsigned CIS                    :1;
        unsigned C1INV                  :1;
        unsigned C2INV                  :1;
        unsigned C1OUT                  :1;
        unsigned C2OUT                  :1;
    };
    struct {
        unsigned CM0                    :1;
        unsigned CM1                    :1;
        unsigned CM2                    :1;
    };
    struct {
        unsigned CMEN0                  :1;
        unsigned CMEN1                  :1;
        unsigned CMEN2                  :1;
    };
} CMCONbits_t;
extern volatile CMCONbits_t CMCONbits __at(0xFB4);
// bitfield macros
#define _CMCON_CM_POSN                                      0x0
#define _CMCON_CM_POSITION                                  0x0
#define _CMCON_CM_SIZE                                      0x3
#define _CMCON_CM_LENGTH                                    0x3
#define _CMCON_CM_MASK                                      0x7
#define _CMCON_CIS_POSN                                     0x3
#define _CMCON_CIS_POSITION                                 0x3
#define _CMCON_CIS_SIZE                                     0x1
#define _CMCON_CIS_LENGTH                                   0x1
#define _CMCON_CIS_MASK                                     0x8
#define _CMCON_C1INV_POSN                                   0x4
#define _CMCON_C1INV_POSITION                               0x4
#define _CMCON_C1INV_SIZE                                   0x1
#define _CMCON_C1INV_LENGTH                                 0x1
#define _CMCON_C1INV_MASK                                   0x10
#define _CMCON_C2INV_POSN                                   0x5
#define _CMCON_C2INV_POSITION                               0x5
#define _CMCON_C2INV_SIZE                                   0x1
#define _CMCON_C2INV_LENGTH                                 0x1
#define _CMCON_C2INV_MASK                                   0x20
#define _CMCON_C1OUT_POSN                                   0x6
#define _CMCON_C1OUT_POSITION                               0x6
#define _CMCON_C1OUT_SIZE                                   0x1
#define _CMCON_C1OUT_LENGTH                                 0x1
#define _CMCON_C1OUT_MASK                                   0x40
#define _CMCON_C2OUT_POSN                                   0x7
#define _CMCON_C2OUT_POSITION                               0x7
#define _CMCON_C2OUT_SIZE                                   0x1
#define _CMCON_C2OUT_LENGTH                                 0x1
#define _CMCON_C2OUT_MASK                                   0x80
#define _CMCON_CM0_POSN                                     0x0
#define _CMCON_CM0_POSITION                                 0x0
#define _CMCON_CM0_SIZE                                     0x1
#define _CMCON_CM0_LENGTH                                   0x1
#define _CMCON_CM0_MASK                                     0x1
#define _CMCON_CM1_POSN                                     0x1
#define _CMCON_CM1_POSITION                                 0x1
#define _CMCON_CM1_SIZE                                     0x1
#define _CMCON_CM1_LENGTH                                   0x1
#define _CMCON_CM1_MASK                                     0x2
#define _CMCON_CM2_POSN                                     0x2
#define _CMCON_CM2_POSITION                                 0x2
#define _CMCON_CM2_SIZE                                     0x1
#define _CMCON_CM2_LENGTH                                   0x1
#define _CMCON_CM2_MASK                                     0x4
#define _CMCON_CMEN0_POSN                                   0x0
#define _CMCON_CMEN0_POSITION                               0x0
#define _CMCON_CMEN0_SIZE                                   0x1
#define _CMCON_CMEN0_LENGTH                                 0x1
#define _CMCON_CMEN0_MASK                                   0x1
#define _CMCON_CMEN1_POSN                                   0x1
#define _CMCON_CMEN1_POSITION                               0x1
#define _CMCON_CMEN1_SIZE                                   0x1
#define _CMCON_CMEN1_LENGTH                                 0x1
#define _CMCON_CMEN1_MASK                                   0x2
#define _CMCON_CMEN2_POSN                                   0x2
#define _CMCON_CMEN2_POSITION                               0x2
#define _CMCON_CMEN2_SIZE                                   0x1
#define _CMCON_CMEN2_LENGTH                                 0x1
#define _CMCON_CMEN2_MASK                                   0x4

// Register: CVRCON
#define CVRCON CVRCON
extern volatile unsigned char           CVRCON              __at(0xFB5);
#ifndef _LIB_BUILD
asm("CVRCON equ 0FB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CVR                    :4;
        unsigned CVRSS                  :1;
        unsigned CVRR                   :1;
        unsigned CVROE                  :1;
        unsigned CVREN                  :1;
    };
    struct {
        unsigned CVR0                   :1;
        unsigned CVR1                   :1;
        unsigned CVR2                   :1;
        unsigned CVR3                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned CVROEN                 :1;
    };
} CVRCONbits_t;
extern volatile CVRCONbits_t CVRCONbits __at(0xFB5);
// bitfield macros
#define _CVRCON_CVR_POSN                                    0x0
#define _CVRCON_CVR_POSITION                                0x0
#define _CVRCON_CVR_SIZE                                    0x4
#define _CVRCON_CVR_LENGTH                                  0x4
#define _CVRCON_CVR_MASK                                    0xF
#define _CVRCON_CVRSS_POSN                                  0x4
#define _CVRCON_CVRSS_POSITION                              0x4
#define _CVRCON_CVRSS_SIZE                                  0x1
#define _CVRCON_CVRSS_LENGTH                                0x1
#define _CVRCON_CVRSS_MASK                                  0x10
#define _CVRCON_CVRR_POSN                                   0x5
#define _CVRCON_CVRR_POSITION                               0x5
#define _CVRCON_CVRR_SIZE                                   0x1
#define _CVRCON_CVRR_LENGTH                                 0x1
#define _CVRCON_CVRR_MASK                                   0x20
#define _CVRCON_CVROE_POSN                                  0x6
#define _CVRCON_CVROE_POSITION                              0x6
#define _CVRCON_CVROE_SIZE                                  0x1
#define _CVRCON_CVROE_LENGTH                                0x1
#define _CVRCON_CVROE_MASK                                  0x40
#define _CVRCON_CVREN_POSN                                  0x7
#define _CVRCON_CVREN_POSITION                              0x7
#define _CVRCON_CVREN_SIZE                                  0x1
#define _CVRCON_CVREN_LENGTH                                0x1
#define _CVRCON_CVREN_MASK                                  0x80
#define _CVRCON_CVR0_POSN                                   0x0
#define _CVRCON_CVR0_POSITION                               0x0
#define _CVRCON_CVR0_SIZE                                   0x1
#define _CVRCON_CVR0_LENGTH                                 0x1
#define _CVRCON_CVR0_MASK                                   0x1
#define _CVRCON_CVR1_POSN                                   0x1
#define _CVRCON_CVR1_POSITION                               0x1
#define _CVRCON_CVR1_SIZE                                   0x1
#define _CVRCON_CVR1_LENGTH                                 0x1
#define _CVRCON_CVR1_MASK                                   0x2
#define _CVRCON_CVR2_POSN                                   0x2
#define _CVRCON_CVR2_POSITION                               0x2
#define _CVRCON_CVR2_SIZE                                   0x1
#define _CVRCON_CVR2_LENGTH                                 0x1
#define _CVRCON_CVR2_MASK                                   0x4
#define _CVRCON_CVR3_POSN                                   0x3
#define _CVRCON_CVR3_POSITION                               0x3
#define _CVRCON_CVR3_SIZE                                   0x1
#define _CVRCON_CVR3_LENGTH                                 0x1
#define _CVRCON_CVR3_MASK                                   0x8
#define _CVRCON_CVROEN_POSN                                 0x6
#define _CVRCON_CVROEN_POSITION                             0x6
#define _CVRCON_CVROEN_SIZE                                 0x1
#define _CVRCON_CVROEN_LENGTH                               0x1
#define _CVRCON_CVROEN_MASK                                 0x40

// Register: ADCON2
#define ADCON2 ADCON2
extern volatile unsigned char           ADCON2              __at(0xFC0);
#ifndef _LIB_BUILD
asm("ADCON2 equ 0FC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :3;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0xFC0);
// bitfield macros
#define _ADCON2_ADCS_POSN                                   0x0
#define _ADCON2_ADCS_POSITION                               0x0
#define _ADCON2_ADCS_SIZE                                   0x3
#define _ADCON2_ADCS_LENGTH                                 0x3
#define _ADCON2_ADCS_MASK                                   0x7
#define _ADCON2_ACQT_POSN                                   0x3
#define _ADCON2_ACQT_POSITION                               0x3
#define _ADCON2_ACQT_SIZE                                   0x3
#define _ADCON2_ACQT_LENGTH                                 0x3
#define _ADCON2_ACQT_MASK                                   0x38
#define _ADCON2_ADFM_POSN                                   0x7
#define _ADCON2_ADFM_POSITION                               0x7
#define _ADCON2_ADFM_SIZE                                   0x1
#define _ADCON2_ADFM_LENGTH                                 0x1
#define _ADCON2_ADFM_MASK                                   0x80
#define _ADCON2_ADCS0_POSN                                  0x0
#define _ADCON2_ADCS0_POSITION                              0x0
#define _ADCON2_ADCS0_SIZE                                  0x1
#define _ADCON2_ADCS0_LENGTH                                0x1
#define _ADCON2_ADCS0_MASK                                  0x1
#define _ADCON2_ADCS1_POSN                                  0x1
#define _ADCON2_ADCS1_POSITION                              0x1
#define _ADCON2_ADCS1_SIZE                                  0x1
#define _ADCON2_ADCS1_LENGTH                                0x1
#define _ADCON2_ADCS1_MASK                                  0x2
#define _ADCON2_ADCS2_POSN                                  0x2
#define _ADCON2_ADCS2_POSITION                              0x2
#define _ADCON2_ADCS2_SIZE                                  0x1
#define _ADCON2_ADCS2_LENGTH                                0x1
#define _ADCON2_ADCS2_MASK                                  0x4
#define _ADCON2_ACQT0_POSN                                  0x3
#define _ADCON2_ACQT0_POSITION                              0x3
#define _ADCON2_ACQT0_SIZE                                  0x1
#define _ADCON2_ACQT0_LENGTH                                0x1
#define _ADCON2_ACQT0_MASK                                  0x8
#define _ADCON2_ACQT1_POSN                                  0x4
#define _ADCON2_ACQT1_POSITION                              0x4
#define _ADCON2_ACQT1_SIZE                                  0x1
#define _ADCON2_ACQT1_LENGTH                                0x1
#define _ADCON2_ACQT1_MASK                                  0x10
#define _ADCON2_ACQT2_POSN                                  0x5
#define _ADCON2_ACQT2_POSITION                              0x5
#define _ADCON2_ACQT2_SIZE                                  0x1
#define _ADCON2_ACQT2_LENGTH                                0x1
#define _ADCON2_ACQT2_MASK                                  0x20

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0xFC1);
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :4;
        unsigned VCFG                   :2;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
        unsigned VCFG01                 :1;
        unsigned VCFG11                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0xFC1);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x4
#define _ADCON1_PCFG_LENGTH                                 0x4
#define _ADCON1_PCFG_MASK                                   0xF
#define _ADCON1_VCFG_POSN                                   0x4
#define _ADCON1_VCFG_POSITION                               0x4
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x30
#define _ADCON1_PCFG0_POSN                                  0x0
#define _ADCON1_PCFG0_POSITION                              0x0
#define _ADCON1_PCFG0_SIZE                                  0x1
#define _ADCON1_PCFG0_LENGTH                                0x1
#define _ADCON1_PCFG0_MASK                                  0x1
#define _ADCON1_PCFG1_POSN                                  0x1
#define _ADCON1_PCFG1_POSITION                              0x1
#define _ADCON1_PCFG1_SIZE                                  0x1
#define _ADCON1_PCFG1_LENGTH                                0x1
#define _ADCON1_PCFG1_MASK                                  0x2
#define _ADCON1_PCFG2_POSN                                  0x2
#define _ADCON1_PCFG2_POSITION                              0x2
#define _ADCON1_PCFG2_SIZE                                  0x1
#define _ADCON1_PCFG2_LENGTH                                0x1
#define _ADCON1_PCFG2_MASK                                  0x4
#define _ADCON1_PCFG3_POSN                                  0x3
#define _ADCON1_PCFG3_POSITION                              0x3
#define _ADCON1_PCFG3_SIZE                                  0x1
#define _ADCON1_PCFG3_LENGTH                                0x1
#define _ADCON1_PCFG3_MASK                                  0x8
#define _ADCON1_VCFG0_POSN                                  0x4
#define _ADCON1_VCFG0_POSITION                              0x4
#define _ADCON1_VCFG0_SIZE                                  0x1
#define _ADCON1_VCFG0_LENGTH                                0x1
#define _ADCON1_VCFG0_MASK                                  0x10
#define _ADCON1_VCFG1_POSN                                  0x5
#define _ADCON1_VCFG1_POSITION                              0x5
#define _ADCON1_VCFG1_SIZE                                  0x1
#define _ADCON1_VCFG1_LENGTH                                0x1
#define _ADCON1_VCFG1_MASK                                  0x20
#define _ADCON1_CHSN3_POSN                                  0x3
#define _ADCON1_CHSN3_POSITION                              0x3
#define _ADCON1_CHSN3_SIZE                                  0x1
#define _ADCON1_CHSN3_LENGTH                                0x1
#define _ADCON1_CHSN3_MASK                                  0x8
#define _ADCON1_VCFG01_POSN                                 0x4
#define _ADCON1_VCFG01_POSITION                             0x4
#define _ADCON1_VCFG01_SIZE                                 0x1
#define _ADCON1_VCFG01_LENGTH                               0x1
#define _ADCON1_VCFG01_MASK                                 0x10
#define _ADCON1_VCFG11_POSN                                 0x5
#define _ADCON1_VCFG11_POSITION                             0x5
#define _ADCON1_VCFG11_SIZE                                 0x1
#define _ADCON1_VCFG11_LENGTH                               0x1
#define _ADCON1_VCFG11_MASK                                 0x20

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0xFC2);
#ifndef _LIB_BUILD
asm("ADCON0 equ 0FC2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
        unsigned                        :1;
        unsigned ADCAL                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GODONE                 :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0xFC2);
// bitfield macros
#define _ADCON0_GO_NOT_DONE_POSN                            0x1
#define _ADCON0_GO_NOT_DONE_POSITION                        0x1
#define _ADCON0_GO_NOT_DONE_SIZE                            0x1
#define _ADCON0_GO_NOT_DONE_LENGTH                          0x1
#define _ADCON0_GO_NOT_DONE_MASK                            0x2
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
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_ADCAL_POSN                                  0x7
#define _ADCON0_ADCAL_POSITION                              0x7
#define _ADCON0_ADCAL_SIZE                                  0x1
#define _ADCON0_ADCAL_LENGTH                                0x1
#define _ADCON0_ADCAL_MASK                                  0x80
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
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
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_NOT_DONE_POSN                               0x1
#define _ADCON0_NOT_DONE_POSITION                           0x1
#define _ADCON0_NOT_DONE_SIZE                               0x1
#define _ADCON0_NOT_DONE_LENGTH                             0x1
#define _ADCON0_NOT_DONE_MASK                               0x2
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GODONE_POSN                                 0x1
#define _ADCON0_GODONE_POSITION                             0x1
#define _ADCON0_GODONE_SIZE                                 0x1
#define _ADCON0_GODONE_LENGTH                               0x1
#define _ADCON0_GODONE_MASK                                 0x2

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0xFC3);
#ifndef _LIB_BUILD
asm("ADRES equ 0FC3h");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0xFC3);
#ifndef _LIB_BUILD
asm("ADRESL equ 0FC3h");
#endif

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0xFC4);
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif

// Register: SSPCON2
#define SSPCON2 SSPCON2
extern volatile unsigned char           SSPCON2             __at(0xFC5);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0FC5h");
#endif
// aliases
extern volatile unsigned char           SSP1CON2            __at(0xFC5);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0FC5h");
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
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned ACKDT1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned ACKEN1                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned ACKSTAT1               :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK11                :1;
    };
    struct {
        unsigned                        :2;
        unsigned ADMSK21                :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADMSK31                :1;
    };
    struct {
        unsigned                        :4;
        unsigned ADMSK41                :1;
    };
    struct {
        unsigned                        :5;
        unsigned ADMSK51                :1;
    };
    struct {
        unsigned                        :7;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned PEN1                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned RCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
    };
    struct {
        unsigned SEN1                   :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits __at(0xFC5);
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
#define _SSPCON2_ADMSK1_POSN                                0x1
#define _SSPCON2_ADMSK1_POSITION                            0x1
#define _SSPCON2_ADMSK1_SIZE                                0x1
#define _SSPCON2_ADMSK1_LENGTH                              0x1
#define _SSPCON2_ADMSK1_MASK                                0x2
#define _SSPCON2_ADMSK2_POSN                                0x2
#define _SSPCON2_ADMSK2_POSITION                            0x2
#define _SSPCON2_ADMSK2_SIZE                                0x1
#define _SSPCON2_ADMSK2_LENGTH                              0x1
#define _SSPCON2_ADMSK2_MASK                                0x4
#define _SSPCON2_ADMSK3_POSN                                0x3
#define _SSPCON2_ADMSK3_POSITION                            0x3
#define _SSPCON2_ADMSK3_SIZE                                0x1
#define _SSPCON2_ADMSK3_LENGTH                              0x1
#define _SSPCON2_ADMSK3_MASK                                0x8
#define _SSPCON2_ADMSK4_POSN                                0x4
#define _SSPCON2_ADMSK4_POSITION                            0x4
#define _SSPCON2_ADMSK4_SIZE                                0x1
#define _SSPCON2_ADMSK4_LENGTH                              0x1
#define _SSPCON2_ADMSK4_MASK                                0x10
#define _SSPCON2_ADMSK5_POSN                                0x5
#define _SSPCON2_ADMSK5_POSITION                            0x5
#define _SSPCON2_ADMSK5_SIZE                                0x1
#define _SSPCON2_ADMSK5_LENGTH                              0x1
#define _SSPCON2_ADMSK5_MASK                                0x20
#define _SSPCON2_ACKDT1_POSN                                0x5
#define _SSPCON2_ACKDT1_POSITION                            0x5
#define _SSPCON2_ACKDT1_SIZE                                0x1
#define _SSPCON2_ACKDT1_LENGTH                              0x1
#define _SSPCON2_ACKDT1_MASK                                0x20
#define _SSPCON2_ACKEN1_POSN                                0x4
#define _SSPCON2_ACKEN1_POSITION                            0x4
#define _SSPCON2_ACKEN1_SIZE                                0x1
#define _SSPCON2_ACKEN1_LENGTH                              0x1
#define _SSPCON2_ACKEN1_MASK                                0x10
#define _SSPCON2_ACKSTAT1_POSN                              0x6
#define _SSPCON2_ACKSTAT1_POSITION                          0x6
#define _SSPCON2_ACKSTAT1_SIZE                              0x1
#define _SSPCON2_ACKSTAT1_LENGTH                            0x1
#define _SSPCON2_ACKSTAT1_MASK                              0x40
#define _SSPCON2_ADMSK11_POSN                               0x1
#define _SSPCON2_ADMSK11_POSITION                           0x1
#define _SSPCON2_ADMSK11_SIZE                               0x1
#define _SSPCON2_ADMSK11_LENGTH                             0x1
#define _SSPCON2_ADMSK11_MASK                               0x2
#define _SSPCON2_ADMSK21_POSN                               0x2
#define _SSPCON2_ADMSK21_POSITION                           0x2
#define _SSPCON2_ADMSK21_SIZE                               0x1
#define _SSPCON2_ADMSK21_LENGTH                             0x1
#define _SSPCON2_ADMSK21_MASK                               0x4
#define _SSPCON2_ADMSK31_POSN                               0x3
#define _SSPCON2_ADMSK31_POSITION                           0x3
#define _SSPCON2_ADMSK31_SIZE                               0x1
#define _SSPCON2_ADMSK31_LENGTH                             0x1
#define _SSPCON2_ADMSK31_MASK                               0x8
#define _SSPCON2_ADMSK41_POSN                               0x4
#define _SSPCON2_ADMSK41_POSITION                           0x4
#define _SSPCON2_ADMSK41_SIZE                               0x1
#define _SSPCON2_ADMSK41_LENGTH                             0x1
#define _SSPCON2_ADMSK41_MASK                               0x10
#define _SSPCON2_ADMSK51_POSN                               0x5
#define _SSPCON2_ADMSK51_POSITION                           0x5
#define _SSPCON2_ADMSK51_SIZE                               0x1
#define _SSPCON2_ADMSK51_LENGTH                             0x1
#define _SSPCON2_ADMSK51_MASK                               0x20
#define _SSPCON2_GCEN1_POSN                                 0x7
#define _SSPCON2_GCEN1_POSITION                             0x7
#define _SSPCON2_GCEN1_SIZE                                 0x1
#define _SSPCON2_GCEN1_LENGTH                               0x1
#define _SSPCON2_GCEN1_MASK                                 0x80
#define _SSPCON2_PEN1_POSN                                  0x2
#define _SSPCON2_PEN1_POSITION                              0x2
#define _SSPCON2_PEN1_SIZE                                  0x1
#define _SSPCON2_PEN1_LENGTH                                0x1
#define _SSPCON2_PEN1_MASK                                  0x4
#define _SSPCON2_RCEN1_POSN                                 0x3
#define _SSPCON2_RCEN1_POSITION                             0x3
#define _SSPCON2_RCEN1_SIZE                                 0x1
#define _SSPCON2_RCEN1_LENGTH                               0x1
#define _SSPCON2_RCEN1_MASK                                 0x8
#define _SSPCON2_RSEN1_POSN                                 0x1
#define _SSPCON2_RSEN1_POSITION                             0x1
#define _SSPCON2_RSEN1_SIZE                                 0x1
#define _SSPCON2_RSEN1_LENGTH                               0x1
#define _SSPCON2_RSEN1_MASK                                 0x2
#define _SSPCON2_SEN1_POSN                                  0x0
#define _SSPCON2_SEN1_POSITION                              0x0
#define _SSPCON2_SEN1_SIZE                                  0x1
#define _SSPCON2_SEN1_LENGTH                                0x1
#define _SSPCON2_SEN1_MASK                                  0x1
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
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned ACKDT1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned ACKEN1                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned ACKSTAT1               :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK11                :1;
    };
    struct {
        unsigned                        :2;
        unsigned ADMSK21                :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADMSK31                :1;
    };
    struct {
        unsigned                        :4;
        unsigned ADMSK41                :1;
    };
    struct {
        unsigned                        :5;
        unsigned ADMSK51                :1;
    };
    struct {
        unsigned                        :7;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned PEN1                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned RCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
    };
    struct {
        unsigned SEN1                   :1;
    };
} SSP1CON2bits_t;
extern volatile SSP1CON2bits_t SSP1CON2bits __at(0xFC5);
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
#define _SSP1CON2_ADMSK1_POSN                               0x1
#define _SSP1CON2_ADMSK1_POSITION                           0x1
#define _SSP1CON2_ADMSK1_SIZE                               0x1
#define _SSP1CON2_ADMSK1_LENGTH                             0x1
#define _SSP1CON2_ADMSK1_MASK                               0x2
#define _SSP1CON2_ADMSK2_POSN                               0x2
#define _SSP1CON2_ADMSK2_POSITION                           0x2
#define _SSP1CON2_ADMSK2_SIZE                               0x1
#define _SSP1CON2_ADMSK2_LENGTH                             0x1
#define _SSP1CON2_ADMSK2_MASK                               0x4
#define _SSP1CON2_ADMSK3_POSN                               0x3
#define _SSP1CON2_ADMSK3_POSITION                           0x3
#define _SSP1CON2_ADMSK3_SIZE                               0x1
#define _SSP1CON2_ADMSK3_LENGTH                             0x1
#define _SSP1CON2_ADMSK3_MASK                               0x8
#define _SSP1CON2_ADMSK4_POSN                               0x4
#define _SSP1CON2_ADMSK4_POSITION                           0x4
#define _SSP1CON2_ADMSK4_SIZE                               0x1
#define _SSP1CON2_ADMSK4_LENGTH                             0x1
#define _SSP1CON2_ADMSK4_MASK                               0x10
#define _SSP1CON2_ADMSK5_POSN                               0x5
#define _SSP1CON2_ADMSK5_POSITION                           0x5
#define _SSP1CON2_ADMSK5_SIZE                               0x1
#define _SSP1CON2_ADMSK5_LENGTH                             0x1
#define _SSP1CON2_ADMSK5_MASK                               0x20
#define _SSP1CON2_ACKDT1_POSN                               0x5
#define _SSP1CON2_ACKDT1_POSITION                           0x5
#define _SSP1CON2_ACKDT1_SIZE                               0x1
#define _SSP1CON2_ACKDT1_LENGTH                             0x1
#define _SSP1CON2_ACKDT1_MASK                               0x20
#define _SSP1CON2_ACKEN1_POSN                               0x4
#define _SSP1CON2_ACKEN1_POSITION                           0x4
#define _SSP1CON2_ACKEN1_SIZE                               0x1
#define _SSP1CON2_ACKEN1_LENGTH                             0x1
#define _SSP1CON2_ACKEN1_MASK                               0x10
#define _SSP1CON2_ACKSTAT1_POSN                             0x6
#define _SSP1CON2_ACKSTAT1_POSITION                         0x6
#define _SSP1CON2_ACKSTAT1_SIZE                             0x1
#define _SSP1CON2_ACKSTAT1_LENGTH                           0x1
#define _SSP1CON2_ACKSTAT1_MASK                             0x40
#define _SSP1CON2_ADMSK11_POSN                              0x1
#define _SSP1CON2_ADMSK11_POSITION                          0x1
#define _SSP1CON2_ADMSK11_SIZE                              0x1
#define _SSP1CON2_ADMSK11_LENGTH                            0x1
#define _SSP1CON2_ADMSK11_MASK                              0x2
#define _SSP1CON2_ADMSK21_POSN                              0x2
#define _SSP1CON2_ADMSK21_POSITION                          0x2
#define _SSP1CON2_ADMSK21_SIZE                              0x1
#define _SSP1CON2_ADMSK21_LENGTH                            0x1
#define _SSP1CON2_ADMSK21_MASK                              0x4
#define _SSP1CON2_ADMSK31_POSN                              0x3
#define _SSP1CON2_ADMSK31_POSITION                          0x3
#define _SSP1CON2_ADMSK31_SIZE                              0x1
#define _SSP1CON2_ADMSK31_LENGTH                            0x1
#define _SSP1CON2_ADMSK31_MASK                              0x8
#define _SSP1CON2_ADMSK41_POSN                              0x4
#define _SSP1CON2_ADMSK41_POSITION                          0x4
#define _SSP1CON2_ADMSK41_SIZE                              0x1
#define _SSP1CON2_ADMSK41_LENGTH                            0x1
#define _SSP1CON2_ADMSK41_MASK                              0x10
#define _SSP1CON2_ADMSK51_POSN                              0x5
#define _SSP1CON2_ADMSK51_POSITION                          0x5
#define _SSP1CON2_ADMSK51_SIZE                              0x1
#define _SSP1CON2_ADMSK51_LENGTH                            0x1
#define _SSP1CON2_ADMSK51_MASK                              0x20
#define _SSP1CON2_GCEN1_POSN                                0x7
#define _SSP1CON2_GCEN1_POSITION                            0x7
#define _SSP1CON2_GCEN1_SIZE                                0x1
#define _SSP1CON2_GCEN1_LENGTH                              0x1
#define _SSP1CON2_GCEN1_MASK                                0x80
#define _SSP1CON2_PEN1_POSN                                 0x2
#define _SSP1CON2_PEN1_POSITION                             0x2
#define _SSP1CON2_PEN1_SIZE                                 0x1
#define _SSP1CON2_PEN1_LENGTH                               0x1
#define _SSP1CON2_PEN1_MASK                                 0x4
#define _SSP1CON2_RCEN1_POSN                                0x3
#define _SSP1CON2_RCEN1_POSITION                            0x3
#define _SSP1CON2_RCEN1_SIZE                                0x1
#define _SSP1CON2_RCEN1_LENGTH                              0x1
#define _SSP1CON2_RCEN1_MASK                                0x8
#define _SSP1CON2_RSEN1_POSN                                0x1
#define _SSP1CON2_RSEN1_POSITION                            0x1
#define _SSP1CON2_RSEN1_SIZE                                0x1
#define _SSP1CON2_RSEN1_LENGTH                              0x1
#define _SSP1CON2_RSEN1_MASK                                0x2
#define _SSP1CON2_SEN1_POSN                                 0x0
#define _SSP1CON2_SEN1_POSITION                             0x0
#define _SSP1CON2_SEN1_SIZE                                 0x1
#define _SSP1CON2_SEN1_LENGTH                               0x1
#define _SSP1CON2_SEN1_MASK                                 0x1

// Register: SSPCON1
#define SSPCON1 SSPCON1
extern volatile unsigned char           SSPCON1             __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0FC6h");
#endif
// aliases
extern volatile unsigned char           SSP1CON1            __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSP1CON1 equ 0FC6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned CKP1                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SSPEN1                 :1;
    };
    struct {
        unsigned SSPM01                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned SSPM11                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned SSPM21                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPM31                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned SSPOV1                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned WCOL1                  :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0xFC6);
// bitfield macros
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
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
#define _SSPCON1_SSPM0_POSN                                 0x0
#define _SSPCON1_SSPM0_POSITION                             0x0
#define _SSPCON1_SSPM0_SIZE                                 0x1
#define _SSPCON1_SSPM0_LENGTH                               0x1
#define _SSPCON1_SSPM0_MASK                                 0x1
#define _SSPCON1_SSPM1_POSN                                 0x1
#define _SSPCON1_SSPM1_POSITION                             0x1
#define _SSPCON1_SSPM1_SIZE                                 0x1
#define _SSPCON1_SSPM1_LENGTH                               0x1
#define _SSPCON1_SSPM1_MASK                                 0x2
#define _SSPCON1_SSPM2_POSN                                 0x2
#define _SSPCON1_SSPM2_POSITION                             0x2
#define _SSPCON1_SSPM2_SIZE                                 0x1
#define _SSPCON1_SSPM2_LENGTH                               0x1
#define _SSPCON1_SSPM2_MASK                                 0x4
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8
#define _SSPCON1_CKP1_POSN                                  0x4
#define _SSPCON1_CKP1_POSITION                              0x4
#define _SSPCON1_CKP1_SIZE                                  0x1
#define _SSPCON1_CKP1_LENGTH                                0x1
#define _SSPCON1_CKP1_MASK                                  0x10
#define _SSPCON1_SSPEN1_POSN                                0x5
#define _SSPCON1_SSPEN1_POSITION                            0x5
#define _SSPCON1_SSPEN1_SIZE                                0x1
#define _SSPCON1_SSPEN1_LENGTH                              0x1
#define _SSPCON1_SSPEN1_MASK                                0x20
#define _SSPCON1_SSPM01_POSN                                0x0
#define _SSPCON1_SSPM01_POSITION                            0x0
#define _SSPCON1_SSPM01_SIZE                                0x1
#define _SSPCON1_SSPM01_LENGTH                              0x1
#define _SSPCON1_SSPM01_MASK                                0x1
#define _SSPCON1_SSPM11_POSN                                0x1
#define _SSPCON1_SSPM11_POSITION                            0x1
#define _SSPCON1_SSPM11_SIZE                                0x1
#define _SSPCON1_SSPM11_LENGTH                              0x1
#define _SSPCON1_SSPM11_MASK                                0x2
#define _SSPCON1_SSPM21_POSN                                0x2
#define _SSPCON1_SSPM21_POSITION                            0x2
#define _SSPCON1_SSPM21_SIZE                                0x1
#define _SSPCON1_SSPM21_LENGTH                              0x1
#define _SSPCON1_SSPM21_MASK                                0x4
#define _SSPCON1_SSPM31_POSN                                0x3
#define _SSPCON1_SSPM31_POSITION                            0x3
#define _SSPCON1_SSPM31_SIZE                                0x1
#define _SSPCON1_SSPM31_LENGTH                              0x1
#define _SSPCON1_SSPM31_MASK                                0x8
#define _SSPCON1_SSPOV1_POSN                                0x6
#define _SSPCON1_SSPOV1_POSITION                            0x6
#define _SSPCON1_SSPOV1_SIZE                                0x1
#define _SSPCON1_SSPOV1_LENGTH                              0x1
#define _SSPCON1_SSPOV1_MASK                                0x40
#define _SSPCON1_WCOL1_POSN                                 0x7
#define _SSPCON1_WCOL1_POSITION                             0x7
#define _SSPCON1_WCOL1_SIZE                                 0x1
#define _SSPCON1_WCOL1_LENGTH                               0x1
#define _SSPCON1_WCOL1_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned CKP1                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SSPEN1                 :1;
    };
    struct {
        unsigned SSPM01                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned SSPM11                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned SSPM21                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPM31                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned SSPOV1                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned WCOL1                  :1;
    };
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0xFC6);
// bitfield macros
#define _SSP1CON1_SSPM_POSN                                 0x0
#define _SSP1CON1_SSPM_POSITION                             0x0
#define _SSP1CON1_SSPM_SIZE                                 0x4
#define _SSP1CON1_SSPM_LENGTH                               0x4
#define _SSP1CON1_SSPM_MASK                                 0xF
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
#define _SSP1CON1_SSPM0_POSN                                0x0
#define _SSP1CON1_SSPM0_POSITION                            0x0
#define _SSP1CON1_SSPM0_SIZE                                0x1
#define _SSP1CON1_SSPM0_LENGTH                              0x1
#define _SSP1CON1_SSPM0_MASK                                0x1
#define _SSP1CON1_SSPM1_POSN                                0x1
#define _SSP1CON1_SSPM1_POSITION                            0x1
#define _SSP1CON1_SSPM1_SIZE                                0x1
#define _SSP1CON1_SSPM1_LENGTH                              0x1
#define _SSP1CON1_SSPM1_MASK                                0x2
#define _SSP1CON1_SSPM2_POSN                                0x2
#define _SSP1CON1_SSPM2_POSITION                            0x2
#define _SSP1CON1_SSPM2_SIZE                                0x1
#define _SSP1CON1_SSPM2_LENGTH                              0x1
#define _SSP1CON1_SSPM2_MASK                                0x4
#define _SSP1CON1_SSPM3_POSN                                0x3
#define _SSP1CON1_SSPM3_POSITION                            0x3
#define _SSP1CON1_SSPM3_SIZE                                0x1
#define _SSP1CON1_SSPM3_LENGTH                              0x1
#define _SSP1CON1_SSPM3_MASK                                0x8
#define _SSP1CON1_CKP1_POSN                                 0x4
#define _SSP1CON1_CKP1_POSITION                             0x4
#define _SSP1CON1_CKP1_SIZE                                 0x1
#define _SSP1CON1_CKP1_LENGTH                               0x1
#define _SSP1CON1_CKP1_MASK                                 0x10
#define _SSP1CON1_SSPEN1_POSN                               0x5
#define _SSP1CON1_SSPEN1_POSITION                           0x5
#define _SSP1CON1_SSPEN1_SIZE                               0x1
#define _SSP1CON1_SSPEN1_LENGTH                             0x1
#define _SSP1CON1_SSPEN1_MASK                               0x20
#define _SSP1CON1_SSPM01_POSN                               0x0
#define _SSP1CON1_SSPM01_POSITION                           0x0
#define _SSP1CON1_SSPM01_SIZE                               0x1
#define _SSP1CON1_SSPM01_LENGTH                             0x1
#define _SSP1CON1_SSPM01_MASK                               0x1
#define _SSP1CON1_SSPM11_POSN                               0x1
#define _SSP1CON1_SSPM11_POSITION                           0x1
#define _SSP1CON1_SSPM11_SIZE                               0x1
#define _SSP1CON1_SSPM11_LENGTH                             0x1
#define _SSP1CON1_SSPM11_MASK                               0x2
#define _SSP1CON1_SSPM21_POSN                               0x2
#define _SSP1CON1_SSPM21_POSITION                           0x2
#define _SSP1CON1_SSPM21_SIZE                               0x1
#define _SSP1CON1_SSPM21_LENGTH                             0x1
#define _SSP1CON1_SSPM21_MASK                               0x4
#define _SSP1CON1_SSPM31_POSN                               0x3
#define _SSP1CON1_SSPM31_POSITION                           0x3
#define _SSP1CON1_SSPM31_SIZE                               0x1
#define _SSP1CON1_SSPM31_LENGTH                             0x1
#define _SSP1CON1_SSPM31_MASK                               0x8
#define _SSP1CON1_SSPOV1_POSN                               0x6
#define _SSP1CON1_SSPOV1_POSITION                           0x6
#define _SSP1CON1_SSPOV1_SIZE                               0x1
#define _SSP1CON1_SSPOV1_LENGTH                             0x1
#define _SSP1CON1_SSPOV1_MASK                               0x40
#define _SSP1CON1_WCOL1_POSN                                0x7
#define _SSP1CON1_WCOL1_POSITION                            0x7
#define _SSP1CON1_WCOL1_SIZE                                0x1
#define _SSP1CON1_WCOL1_LENGTH                              0x1
#define _SSP1CON1_WCOL1_MASK                                0x80

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
extern volatile unsigned char           SSPSTAT             __at(0xFC7);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0FC7h");
#endif
// aliases
extern volatile unsigned char           SSP1STAT            __at(0xFC7);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0FC7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
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
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
        unsigned                        :2;
        unsigned NOT_A                  :1;
    };
    struct {
        unsigned BF1                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned CKE1                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned START1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned STOP1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned UA1                    :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __at(0xFC7);
// bitfield macros
#define _SSPSTAT_R_NOT_W_POSN                               0x2
#define _SSPSTAT_R_NOT_W_POSITION                           0x2
#define _SSPSTAT_R_NOT_W_SIZE                               0x1
#define _SSPSTAT_R_NOT_W_LENGTH                             0x1
#define _SSPSTAT_R_NOT_W_MASK                               0x4
#define _SSPSTAT_D_NOT_A_POSN                               0x5
#define _SSPSTAT_D_NOT_A_POSITION                           0x5
#define _SSPSTAT_D_NOT_A_SIZE                               0x1
#define _SSPSTAT_D_NOT_A_LENGTH                             0x1
#define _SSPSTAT_D_NOT_A_MASK                               0x20
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
#define _SSPSTAT_R_POSN                                     0x2
#define _SSPSTAT_R_POSITION                                 0x2
#define _SSPSTAT_R_SIZE                                     0x1
#define _SSPSTAT_R_LENGTH                                   0x1
#define _SSPSTAT_R_MASK                                     0x4
#define _SSPSTAT_D_POSN                                     0x5
#define _SSPSTAT_D_POSITION                                 0x5
#define _SSPSTAT_D_SIZE                                     0x1
#define _SSPSTAT_D_LENGTH                                   0x1
#define _SSPSTAT_D_MASK                                     0x20
#define _SSPSTAT_R_W_POSN                                   0x2
#define _SSPSTAT_R_W_POSITION                               0x2
#define _SSPSTAT_R_W_SIZE                                   0x1
#define _SSPSTAT_R_W_LENGTH                                 0x1
#define _SSPSTAT_R_W_MASK                                   0x4
#define _SSPSTAT_D_A_POSN                                   0x5
#define _SSPSTAT_D_A_POSITION                               0x5
#define _SSPSTAT_D_A_SIZE                                   0x1
#define _SSPSTAT_D_A_LENGTH                                 0x1
#define _SSPSTAT_D_A_MASK                                   0x20
#define _SSPSTAT_nW_POSN                                    0x2
#define _SSPSTAT_nW_POSITION                                0x2
#define _SSPSTAT_nW_SIZE                                    0x1
#define _SSPSTAT_nW_LENGTH                                  0x1
#define _SSPSTAT_nW_MASK                                    0x4
#define _SSPSTAT_nA_POSN                                    0x5
#define _SSPSTAT_nA_POSITION                                0x5
#define _SSPSTAT_nA_SIZE                                    0x1
#define _SSPSTAT_nA_LENGTH                                  0x1
#define _SSPSTAT_nA_MASK                                    0x20
#define _SSPSTAT_NOT_WRITE_POSN                             0x2
#define _SSPSTAT_NOT_WRITE_POSITION                         0x2
#define _SSPSTAT_NOT_WRITE_SIZE                             0x1
#define _SSPSTAT_NOT_WRITE_LENGTH                           0x1
#define _SSPSTAT_NOT_WRITE_MASK                             0x4
#define _SSPSTAT_NOT_ADDRESS_POSN                           0x5
#define _SSPSTAT_NOT_ADDRESS_POSITION                       0x5
#define _SSPSTAT_NOT_ADDRESS_SIZE                           0x1
#define _SSPSTAT_NOT_ADDRESS_LENGTH                         0x1
#define _SSPSTAT_NOT_ADDRESS_MASK                           0x20
#define _SSPSTAT_nWRITE_POSN                                0x2
#define _SSPSTAT_nWRITE_POSITION                            0x2
#define _SSPSTAT_nWRITE_SIZE                                0x1
#define _SSPSTAT_nWRITE_LENGTH                              0x1
#define _SSPSTAT_nWRITE_MASK                                0x4
#define _SSPSTAT_nADDRESS_POSN                              0x5
#define _SSPSTAT_nADDRESS_POSITION                          0x5
#define _SSPSTAT_nADDRESS_SIZE                              0x1
#define _SSPSTAT_nADDRESS_LENGTH                            0x1
#define _SSPSTAT_nADDRESS_MASK                              0x20
#define _SSPSTAT_READ_WRITE_POSN                            0x2
#define _SSPSTAT_READ_WRITE_POSITION                        0x2
#define _SSPSTAT_READ_WRITE_SIZE                            0x1
#define _SSPSTAT_READ_WRITE_LENGTH                          0x1
#define _SSPSTAT_READ_WRITE_MASK                            0x4
#define _SSPSTAT_DATA_ADDRESS_POSN                          0x5
#define _SSPSTAT_DATA_ADDRESS_POSITION                      0x5
#define _SSPSTAT_DATA_ADDRESS_SIZE                          0x1
#define _SSPSTAT_DATA_ADDRESS_LENGTH                        0x1
#define _SSPSTAT_DATA_ADDRESS_MASK                          0x20
#define _SSPSTAT_I2C_READ_POSN                              0x2
#define _SSPSTAT_I2C_READ_POSITION                          0x2
#define _SSPSTAT_I2C_READ_SIZE                              0x1
#define _SSPSTAT_I2C_READ_LENGTH                            0x1
#define _SSPSTAT_I2C_READ_MASK                              0x4
#define _SSPSTAT_I2C_START_POSN                             0x3
#define _SSPSTAT_I2C_START_POSITION                         0x3
#define _SSPSTAT_I2C_START_SIZE                             0x1
#define _SSPSTAT_I2C_START_LENGTH                           0x1
#define _SSPSTAT_I2C_START_MASK                             0x8
#define _SSPSTAT_I2C_STOP_POSN                              0x4
#define _SSPSTAT_I2C_STOP_POSITION                          0x4
#define _SSPSTAT_I2C_STOP_SIZE                              0x1
#define _SSPSTAT_I2C_STOP_LENGTH                            0x1
#define _SSPSTAT_I2C_STOP_MASK                              0x10
#define _SSPSTAT_I2C_DAT_POSN                               0x5
#define _SSPSTAT_I2C_DAT_POSITION                           0x5
#define _SSPSTAT_I2C_DAT_SIZE                               0x1
#define _SSPSTAT_I2C_DAT_LENGTH                             0x1
#define _SSPSTAT_I2C_DAT_MASK                               0x20
#define _SSPSTAT_RW_POSN                                    0x2
#define _SSPSTAT_RW_POSITION                                0x2
#define _SSPSTAT_RW_SIZE                                    0x1
#define _SSPSTAT_RW_LENGTH                                  0x1
#define _SSPSTAT_RW_MASK                                    0x4
#define _SSPSTAT_START_POSN                                 0x3
#define _SSPSTAT_START_POSITION                             0x3
#define _SSPSTAT_START_SIZE                                 0x1
#define _SSPSTAT_START_LENGTH                               0x1
#define _SSPSTAT_START_MASK                                 0x8
#define _SSPSTAT_STOP_POSN                                  0x4
#define _SSPSTAT_STOP_POSITION                              0x4
#define _SSPSTAT_STOP_SIZE                                  0x1
#define _SSPSTAT_STOP_LENGTH                                0x1
#define _SSPSTAT_STOP_MASK                                  0x10
#define _SSPSTAT_DA_POSN                                    0x5
#define _SSPSTAT_DA_POSITION                                0x5
#define _SSPSTAT_DA_SIZE                                    0x1
#define _SSPSTAT_DA_LENGTH                                  0x1
#define _SSPSTAT_DA_MASK                                    0x20
#define _SSPSTAT_NOT_W_POSN                                 0x2
#define _SSPSTAT_NOT_W_POSITION                             0x2
#define _SSPSTAT_NOT_W_SIZE                                 0x1
#define _SSPSTAT_NOT_W_LENGTH                               0x1
#define _SSPSTAT_NOT_W_MASK                                 0x4
#define _SSPSTAT_NOT_A_POSN                                 0x5
#define _SSPSTAT_NOT_A_POSITION                             0x5
#define _SSPSTAT_NOT_A_SIZE                                 0x1
#define _SSPSTAT_NOT_A_LENGTH                               0x1
#define _SSPSTAT_NOT_A_MASK                                 0x20
#define _SSPSTAT_BF1_POSN                                   0x0
#define _SSPSTAT_BF1_POSITION                               0x0
#define _SSPSTAT_BF1_SIZE                                   0x1
#define _SSPSTAT_BF1_LENGTH                                 0x1
#define _SSPSTAT_BF1_MASK                                   0x1
#define _SSPSTAT_CKE1_POSN                                  0x6
#define _SSPSTAT_CKE1_POSITION                              0x6
#define _SSPSTAT_CKE1_SIZE                                  0x1
#define _SSPSTAT_CKE1_LENGTH                                0x1
#define _SSPSTAT_CKE1_MASK                                  0x40
#define _SSPSTAT_DA1_POSN                                   0x5
#define _SSPSTAT_DA1_POSITION                               0x5
#define _SSPSTAT_DA1_SIZE                                   0x1
#define _SSPSTAT_DA1_LENGTH                                 0x1
#define _SSPSTAT_DA1_MASK                                   0x20
#define _SSPSTAT_RW1_POSN                                   0x2
#define _SSPSTAT_RW1_POSITION                               0x2
#define _SSPSTAT_RW1_SIZE                                   0x1
#define _SSPSTAT_RW1_LENGTH                                 0x1
#define _SSPSTAT_RW1_MASK                                   0x4
#define _SSPSTAT_SMP1_POSN                                  0x7
#define _SSPSTAT_SMP1_POSITION                              0x7
#define _SSPSTAT_SMP1_SIZE                                  0x1
#define _SSPSTAT_SMP1_LENGTH                                0x1
#define _SSPSTAT_SMP1_MASK                                  0x80
#define _SSPSTAT_START1_POSN                                0x3
#define _SSPSTAT_START1_POSITION                            0x3
#define _SSPSTAT_START1_SIZE                                0x1
#define _SSPSTAT_START1_LENGTH                              0x1
#define _SSPSTAT_START1_MASK                                0x8
#define _SSPSTAT_STOP1_POSN                                 0x4
#define _SSPSTAT_STOP1_POSITION                             0x4
#define _SSPSTAT_STOP1_SIZE                                 0x1
#define _SSPSTAT_STOP1_LENGTH                               0x1
#define _SSPSTAT_STOP1_MASK                                 0x10
#define _SSPSTAT_UA1_POSN                                   0x1
#define _SSPSTAT_UA1_POSITION                               0x1
#define _SSPSTAT_UA1_SIZE                                   0x1
#define _SSPSTAT_UA1_LENGTH                                 0x1
#define _SSPSTAT_UA1_MASK                                   0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
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
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
        unsigned                        :2;
        unsigned NOT_A                  :1;
    };
    struct {
        unsigned BF1                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned CKE1                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned START1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned STOP1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned UA1                    :1;
    };
} SSP1STATbits_t;
extern volatile SSP1STATbits_t SSP1STATbits __at(0xFC7);
// bitfield macros
#define _SSP1STAT_R_NOT_W_POSN                              0x2
#define _SSP1STAT_R_NOT_W_POSITION                          0x2
#define _SSP1STAT_R_NOT_W_SIZE                              0x1
#define _SSP1STAT_R_NOT_W_LENGTH                            0x1
#define _SSP1STAT_R_NOT_W_MASK                              0x4
#define _SSP1STAT_D_NOT_A_POSN                              0x5
#define _SSP1STAT_D_NOT_A_POSITION                          0x5
#define _SSP1STAT_D_NOT_A_SIZE                              0x1
#define _SSP1STAT_D_NOT_A_LENGTH                            0x1
#define _SSP1STAT_D_NOT_A_MASK                              0x20
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
#define _SSP1STAT_R_POSN                                    0x2
#define _SSP1STAT_R_POSITION                                0x2
#define _SSP1STAT_R_SIZE                                    0x1
#define _SSP1STAT_R_LENGTH                                  0x1
#define _SSP1STAT_R_MASK                                    0x4
#define _SSP1STAT_D_POSN                                    0x5
#define _SSP1STAT_D_POSITION                                0x5
#define _SSP1STAT_D_SIZE                                    0x1
#define _SSP1STAT_D_LENGTH                                  0x1
#define _SSP1STAT_D_MASK                                    0x20
#define _SSP1STAT_R_W_POSN                                  0x2
#define _SSP1STAT_R_W_POSITION                              0x2
#define _SSP1STAT_R_W_SIZE                                  0x1
#define _SSP1STAT_R_W_LENGTH                                0x1
#define _SSP1STAT_R_W_MASK                                  0x4
#define _SSP1STAT_D_A_POSN                                  0x5
#define _SSP1STAT_D_A_POSITION                              0x5
#define _SSP1STAT_D_A_SIZE                                  0x1
#define _SSP1STAT_D_A_LENGTH                                0x1
#define _SSP1STAT_D_A_MASK                                  0x20
#define _SSP1STAT_nW_POSN                                   0x2
#define _SSP1STAT_nW_POSITION                               0x2
#define _SSP1STAT_nW_SIZE                                   0x1
#define _SSP1STAT_nW_LENGTH                                 0x1
#define _SSP1STAT_nW_MASK                                   0x4
#define _SSP1STAT_nA_POSN                                   0x5
#define _SSP1STAT_nA_POSITION                               0x5
#define _SSP1STAT_nA_SIZE                                   0x1
#define _SSP1STAT_nA_LENGTH                                 0x1
#define _SSP1STAT_nA_MASK                                   0x20
#define _SSP1STAT_NOT_WRITE_POSN                            0x2
#define _SSP1STAT_NOT_WRITE_POSITION                        0x2
#define _SSP1STAT_NOT_WRITE_SIZE                            0x1
#define _SSP1STAT_NOT_WRITE_LENGTH                          0x1
#define _SSP1STAT_NOT_WRITE_MASK                            0x4
#define _SSP1STAT_NOT_ADDRESS_POSN                          0x5
#define _SSP1STAT_NOT_ADDRESS_POSITION                      0x5
#define _SSP1STAT_NOT_ADDRESS_SIZE                          0x1
#define _SSP1STAT_NOT_ADDRESS_LENGTH                        0x1
#define _SSP1STAT_NOT_ADDRESS_MASK                          0x20
#define _SSP1STAT_nWRITE_POSN                               0x2
#define _SSP1STAT_nWRITE_POSITION                           0x2
#define _SSP1STAT_nWRITE_SIZE                               0x1
#define _SSP1STAT_nWRITE_LENGTH                             0x1
#define _SSP1STAT_nWRITE_MASK                               0x4
#define _SSP1STAT_nADDRESS_POSN                             0x5
#define _SSP1STAT_nADDRESS_POSITION                         0x5
#define _SSP1STAT_nADDRESS_SIZE                             0x1
#define _SSP1STAT_nADDRESS_LENGTH                           0x1
#define _SSP1STAT_nADDRESS_MASK                             0x20
#define _SSP1STAT_READ_WRITE_POSN                           0x2
#define _SSP1STAT_READ_WRITE_POSITION                       0x2
#define _SSP1STAT_READ_WRITE_SIZE                           0x1
#define _SSP1STAT_READ_WRITE_LENGTH                         0x1
#define _SSP1STAT_READ_WRITE_MASK                           0x4
#define _SSP1STAT_DATA_ADDRESS_POSN                         0x5
#define _SSP1STAT_DATA_ADDRESS_POSITION                     0x5
#define _SSP1STAT_DATA_ADDRESS_SIZE                         0x1
#define _SSP1STAT_DATA_ADDRESS_LENGTH                       0x1
#define _SSP1STAT_DATA_ADDRESS_MASK                         0x20
#define _SSP1STAT_I2C_READ_POSN                             0x2
#define _SSP1STAT_I2C_READ_POSITION                         0x2
#define _SSP1STAT_I2C_READ_SIZE                             0x1
#define _SSP1STAT_I2C_READ_LENGTH                           0x1
#define _SSP1STAT_I2C_READ_MASK                             0x4
#define _SSP1STAT_I2C_START_POSN                            0x3
#define _SSP1STAT_I2C_START_POSITION                        0x3
#define _SSP1STAT_I2C_START_SIZE                            0x1
#define _SSP1STAT_I2C_START_LENGTH                          0x1
#define _SSP1STAT_I2C_START_MASK                            0x8
#define _SSP1STAT_I2C_STOP_POSN                             0x4
#define _SSP1STAT_I2C_STOP_POSITION                         0x4
#define _SSP1STAT_I2C_STOP_SIZE                             0x1
#define _SSP1STAT_I2C_STOP_LENGTH                           0x1
#define _SSP1STAT_I2C_STOP_MASK                             0x10
#define _SSP1STAT_I2C_DAT_POSN                              0x5
#define _SSP1STAT_I2C_DAT_POSITION                          0x5
#define _SSP1STAT_I2C_DAT_SIZE                              0x1
#define _SSP1STAT_I2C_DAT_LENGTH                            0x1
#define _SSP1STAT_I2C_DAT_MASK                              0x20
#define _SSP1STAT_RW_POSN                                   0x2
#define _SSP1STAT_RW_POSITION                               0x2
#define _SSP1STAT_RW_SIZE                                   0x1
#define _SSP1STAT_RW_LENGTH                                 0x1
#define _SSP1STAT_RW_MASK                                   0x4
#define _SSP1STAT_START_POSN                                0x3
#define _SSP1STAT_START_POSITION                            0x3
#define _SSP1STAT_START_SIZE                                0x1
#define _SSP1STAT_START_LENGTH                              0x1
#define _SSP1STAT_START_MASK                                0x8
#define _SSP1STAT_STOP_POSN                                 0x4
#define _SSP1STAT_STOP_POSITION                             0x4
#define _SSP1STAT_STOP_SIZE                                 0x1
#define _SSP1STAT_STOP_LENGTH                               0x1
#define _SSP1STAT_STOP_MASK                                 0x10
#define _SSP1STAT_DA_POSN                                   0x5
#define _SSP1STAT_DA_POSITION                               0x5
#define _SSP1STAT_DA_SIZE                                   0x1
#define _SSP1STAT_DA_LENGTH                                 0x1
#define _SSP1STAT_DA_MASK                                   0x20
#define _SSP1STAT_NOT_W_POSN                                0x2
#define _SSP1STAT_NOT_W_POSITION                            0x2
#define _SSP1STAT_NOT_W_SIZE                                0x1
#define _SSP1STAT_NOT_W_LENGTH                              0x1
#define _SSP1STAT_NOT_W_MASK                                0x4
#define _SSP1STAT_NOT_A_POSN                                0x5
#define _SSP1STAT_NOT_A_POSITION                            0x5
#define _SSP1STAT_NOT_A_SIZE                                0x1
#define _SSP1STAT_NOT_A_LENGTH                              0x1
#define _SSP1STAT_NOT_A_MASK                                0x20
#define _SSP1STAT_BF1_POSN                                  0x0
#define _SSP1STAT_BF1_POSITION                              0x0
#define _SSP1STAT_BF1_SIZE                                  0x1
#define _SSP1STAT_BF1_LENGTH                                0x1
#define _SSP1STAT_BF1_MASK                                  0x1
#define _SSP1STAT_CKE1_POSN                                 0x6
#define _SSP1STAT_CKE1_POSITION                             0x6
#define _SSP1STAT_CKE1_SIZE                                 0x1
#define _SSP1STAT_CKE1_LENGTH                               0x1
#define _SSP1STAT_CKE1_MASK                                 0x40
#define _SSP1STAT_DA1_POSN                                  0x5
#define _SSP1STAT_DA1_POSITION                              0x5
#define _SSP1STAT_DA1_SIZE                                  0x1
#define _SSP1STAT_DA1_LENGTH                                0x1
#define _SSP1STAT_DA1_MASK                                  0x20
#define _SSP1STAT_RW1_POSN                                  0x2
#define _SSP1STAT_RW1_POSITION                              0x2
#define _SSP1STAT_RW1_SIZE                                  0x1
#define _SSP1STAT_RW1_LENGTH                                0x1
#define _SSP1STAT_RW1_MASK                                  0x4
#define _SSP1STAT_SMP1_POSN                                 0x7
#define _SSP1STAT_SMP1_POSITION                             0x7
#define _SSP1STAT_SMP1_SIZE                                 0x1
#define _SSP1STAT_SMP1_LENGTH                               0x1
#define _SSP1STAT_SMP1_MASK                                 0x80
#define _SSP1STAT_START1_POSN                               0x3
#define _SSP1STAT_START1_POSITION                           0x3
#define _SSP1STAT_START1_SIZE                               0x1
#define _SSP1STAT_START1_LENGTH                             0x1
#define _SSP1STAT_START1_MASK                               0x8
#define _SSP1STAT_STOP1_POSN                                0x4
#define _SSP1STAT_STOP1_POSITION                            0x4
#define _SSP1STAT_STOP1_SIZE                                0x1
#define _SSP1STAT_STOP1_LENGTH                              0x1
#define _SSP1STAT_STOP1_MASK                                0x10
#define _SSP1STAT_UA1_POSN                                  0x1
#define _SSP1STAT_UA1_POSITION                              0x1
#define _SSP1STAT_UA1_SIZE                                  0x1
#define _SSP1STAT_UA1_LENGTH                                0x1
#define _SSP1STAT_UA1_MASK                                  0x2

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif
// aliases
extern volatile unsigned char           SSP1ADD             __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0FC8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSK0                   :1;
    };
    struct {
        unsigned MSK01                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned MSK1                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned MSK11                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned MSK2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned MSK21                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned MSK3                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned MSK31                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned MSK4                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned MSK41                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned MSK5                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned MSK51                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned MSK6                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned MSK61                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned MSK71                  :1;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0xFC8);
// bitfield macros
#define _SSPADD_MSK0_POSN                                   0x0
#define _SSPADD_MSK0_POSITION                               0x0
#define _SSPADD_MSK0_SIZE                                   0x1
#define _SSPADD_MSK0_LENGTH                                 0x1
#define _SSPADD_MSK0_MASK                                   0x1
#define _SSPADD_MSK01_POSN                                  0x0
#define _SSPADD_MSK01_POSITION                              0x0
#define _SSPADD_MSK01_SIZE                                  0x1
#define _SSPADD_MSK01_LENGTH                                0x1
#define _SSPADD_MSK01_MASK                                  0x1
#define _SSPADD_MSK1_POSN                                   0x1
#define _SSPADD_MSK1_POSITION                               0x1
#define _SSPADD_MSK1_SIZE                                   0x1
#define _SSPADD_MSK1_LENGTH                                 0x1
#define _SSPADD_MSK1_MASK                                   0x2
#define _SSPADD_MSK11_POSN                                  0x1
#define _SSPADD_MSK11_POSITION                              0x1
#define _SSPADD_MSK11_SIZE                                  0x1
#define _SSPADD_MSK11_LENGTH                                0x1
#define _SSPADD_MSK11_MASK                                  0x2
#define _SSPADD_MSK2_POSN                                   0x2
#define _SSPADD_MSK2_POSITION                               0x2
#define _SSPADD_MSK2_SIZE                                   0x1
#define _SSPADD_MSK2_LENGTH                                 0x1
#define _SSPADD_MSK2_MASK                                   0x4
#define _SSPADD_MSK21_POSN                                  0x2
#define _SSPADD_MSK21_POSITION                              0x2
#define _SSPADD_MSK21_SIZE                                  0x1
#define _SSPADD_MSK21_LENGTH                                0x1
#define _SSPADD_MSK21_MASK                                  0x4
#define _SSPADD_MSK3_POSN                                   0x3
#define _SSPADD_MSK3_POSITION                               0x3
#define _SSPADD_MSK3_SIZE                                   0x1
#define _SSPADD_MSK3_LENGTH                                 0x1
#define _SSPADD_MSK3_MASK                                   0x8
#define _SSPADD_MSK31_POSN                                  0x3
#define _SSPADD_MSK31_POSITION                              0x3
#define _SSPADD_MSK31_SIZE                                  0x1
#define _SSPADD_MSK31_LENGTH                                0x1
#define _SSPADD_MSK31_MASK                                  0x8
#define _SSPADD_MSK4_POSN                                   0x4
#define _SSPADD_MSK4_POSITION                               0x4
#define _SSPADD_MSK4_SIZE                                   0x1
#define _SSPADD_MSK4_LENGTH                                 0x1
#define _SSPADD_MSK4_MASK                                   0x10
#define _SSPADD_MSK41_POSN                                  0x4
#define _SSPADD_MSK41_POSITION                              0x4
#define _SSPADD_MSK41_SIZE                                  0x1
#define _SSPADD_MSK41_LENGTH                                0x1
#define _SSPADD_MSK41_MASK                                  0x10
#define _SSPADD_MSK5_POSN                                   0x5
#define _SSPADD_MSK5_POSITION                               0x5
#define _SSPADD_MSK5_SIZE                                   0x1
#define _SSPADD_MSK5_LENGTH                                 0x1
#define _SSPADD_MSK5_MASK                                   0x20
#define _SSPADD_MSK51_POSN                                  0x5
#define _SSPADD_MSK51_POSITION                              0x5
#define _SSPADD_MSK51_SIZE                                  0x1
#define _SSPADD_MSK51_LENGTH                                0x1
#define _SSPADD_MSK51_MASK                                  0x20
#define _SSPADD_MSK6_POSN                                   0x6
#define _SSPADD_MSK6_POSITION                               0x6
#define _SSPADD_MSK6_SIZE                                   0x1
#define _SSPADD_MSK6_LENGTH                                 0x1
#define _SSPADD_MSK6_MASK                                   0x40
#define _SSPADD_MSK61_POSN                                  0x6
#define _SSPADD_MSK61_POSITION                              0x6
#define _SSPADD_MSK61_SIZE                                  0x1
#define _SSPADD_MSK61_LENGTH                                0x1
#define _SSPADD_MSK61_MASK                                  0x40
#define _SSPADD_MSK7_POSN                                   0x7
#define _SSPADD_MSK7_POSITION                               0x7
#define _SSPADD_MSK7_SIZE                                   0x1
#define _SSPADD_MSK7_LENGTH                                 0x1
#define _SSPADD_MSK7_MASK                                   0x80
#define _SSPADD_MSK71_POSN                                  0x7
#define _SSPADD_MSK71_POSITION                              0x7
#define _SSPADD_MSK71_SIZE                                  0x1
#define _SSPADD_MSK71_LENGTH                                0x1
#define _SSPADD_MSK71_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned MSK0                   :1;
    };
    struct {
        unsigned MSK01                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned MSK1                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned MSK11                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned MSK2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned MSK21                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned MSK3                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned MSK31                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned MSK4                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned MSK41                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned MSK5                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned MSK51                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned MSK6                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned MSK61                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned MSK71                  :1;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0xFC8);
// bitfield macros
#define _SSP1ADD_MSK0_POSN                                  0x0
#define _SSP1ADD_MSK0_POSITION                              0x0
#define _SSP1ADD_MSK0_SIZE                                  0x1
#define _SSP1ADD_MSK0_LENGTH                                0x1
#define _SSP1ADD_MSK0_MASK                                  0x1
#define _SSP1ADD_MSK01_POSN                                 0x0
#define _SSP1ADD_MSK01_POSITION                             0x0
#define _SSP1ADD_MSK01_SIZE                                 0x1
#define _SSP1ADD_MSK01_LENGTH                               0x1
#define _SSP1ADD_MSK01_MASK                                 0x1
#define _SSP1ADD_MSK1_POSN                                  0x1
#define _SSP1ADD_MSK1_POSITION                              0x1
#define _SSP1ADD_MSK1_SIZE                                  0x1
#define _SSP1ADD_MSK1_LENGTH                                0x1
#define _SSP1ADD_MSK1_MASK                                  0x2
#define _SSP1ADD_MSK11_POSN                                 0x1
#define _SSP1ADD_MSK11_POSITION                             0x1
#define _SSP1ADD_MSK11_SIZE                                 0x1
#define _SSP1ADD_MSK11_LENGTH                               0x1
#define _SSP1ADD_MSK11_MASK                                 0x2
#define _SSP1ADD_MSK2_POSN                                  0x2
#define _SSP1ADD_MSK2_POSITION                              0x2
#define _SSP1ADD_MSK2_SIZE                                  0x1
#define _SSP1ADD_MSK2_LENGTH                                0x1
#define _SSP1ADD_MSK2_MASK                                  0x4
#define _SSP1ADD_MSK21_POSN                                 0x2
#define _SSP1ADD_MSK21_POSITION                             0x2
#define _SSP1ADD_MSK21_SIZE                                 0x1
#define _SSP1ADD_MSK21_LENGTH                               0x1
#define _SSP1ADD_MSK21_MASK                                 0x4
#define _SSP1ADD_MSK3_POSN                                  0x3
#define _SSP1ADD_MSK3_POSITION                              0x3
#define _SSP1ADD_MSK3_SIZE                                  0x1
#define _SSP1ADD_MSK3_LENGTH                                0x1
#define _SSP1ADD_MSK3_MASK                                  0x8
#define _SSP1ADD_MSK31_POSN                                 0x3
#define _SSP1ADD_MSK31_POSITION                             0x3
#define _SSP1ADD_MSK31_SIZE                                 0x1
#define _SSP1ADD_MSK31_LENGTH                               0x1
#define _SSP1ADD_MSK31_MASK                                 0x8
#define _SSP1ADD_MSK4_POSN                                  0x4
#define _SSP1ADD_MSK4_POSITION                              0x4
#define _SSP1ADD_MSK4_SIZE                                  0x1
#define _SSP1ADD_MSK4_LENGTH                                0x1
#define _SSP1ADD_MSK4_MASK                                  0x10
#define _SSP1ADD_MSK41_POSN                                 0x4
#define _SSP1ADD_MSK41_POSITION                             0x4
#define _SSP1ADD_MSK41_SIZE                                 0x1
#define _SSP1ADD_MSK41_LENGTH                               0x1
#define _SSP1ADD_MSK41_MASK                                 0x10
#define _SSP1ADD_MSK5_POSN                                  0x5
#define _SSP1ADD_MSK5_POSITION                              0x5
#define _SSP1ADD_MSK5_SIZE                                  0x1
#define _SSP1ADD_MSK5_LENGTH                                0x1
#define _SSP1ADD_MSK5_MASK                                  0x20
#define _SSP1ADD_MSK51_POSN                                 0x5
#define _SSP1ADD_MSK51_POSITION                             0x5
#define _SSP1ADD_MSK51_SIZE                                 0x1
#define _SSP1ADD_MSK51_LENGTH                               0x1
#define _SSP1ADD_MSK51_MASK                                 0x20
#define _SSP1ADD_MSK6_POSN                                  0x6
#define _SSP1ADD_MSK6_POSITION                              0x6
#define _SSP1ADD_MSK6_SIZE                                  0x1
#define _SSP1ADD_MSK6_LENGTH                                0x1
#define _SSP1ADD_MSK6_MASK                                  0x40
#define _SSP1ADD_MSK61_POSN                                 0x6
#define _SSP1ADD_MSK61_POSITION                             0x6
#define _SSP1ADD_MSK61_SIZE                                 0x1
#define _SSP1ADD_MSK61_LENGTH                               0x1
#define _SSP1ADD_MSK61_MASK                                 0x40
#define _SSP1ADD_MSK7_POSN                                  0x7
#define _SSP1ADD_MSK7_POSITION                              0x7
#define _SSP1ADD_MSK7_SIZE                                  0x1
#define _SSP1ADD_MSK7_LENGTH                                0x1
#define _SSP1ADD_MSK7_MASK                                  0x80
#define _SSP1ADD_MSK71_POSN                                 0x7
#define _SSP1ADD_MSK71_POSITION                             0x7
#define _SSP1ADD_MSK71_SIZE                                 0x1
#define _SSP1ADD_MSK71_LENGTH                               0x1
#define _SSP1ADD_MSK71_MASK                                 0x80

// Register: SSPBUF
#define SSPBUF SSPBUF
extern volatile unsigned char           SSPBUF              __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif
// aliases
extern volatile unsigned char           SSP1BUF             __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0FC9h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0xFCA);
#ifndef _LIB_BUILD
asm("T2CON equ 0FCAh");
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
extern volatile T2CONbits_t T2CONbits __at(0xFCA);
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

// Register: PR2
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0xFCB);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 0FCBh");  // Note: Changed by MikroE
#endif

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0xFCC);
#ifndef _LIB_BUILD
asm("TMR2 equ 0FCCh");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0xFCD);
#ifndef _LIB_BUILD
asm("T1CON equ 0FCDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T1SYNC             :1;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned T1RUN                  :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
        unsigned                        :3;
        unsigned T1RD16                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0xFCD);
// bitfield macros
#define _T1CON_NOT_T1SYNC_POSN                              0x2
#define _T1CON_NOT_T1SYNC_POSITION                          0x2
#define _T1CON_NOT_T1SYNC_SIZE                              0x1
#define _T1CON_NOT_T1SYNC_LENGTH                            0x1
#define _T1CON_NOT_T1SYNC_MASK                              0x4
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_TMR1CS_POSN                                  0x1
#define _T1CON_TMR1CS_POSITION                              0x1
#define _T1CON_TMR1CS_SIZE                                  0x1
#define _T1CON_TMR1CS_LENGTH                                0x1
#define _T1CON_TMR1CS_MASK                                  0x2
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
#define _T1CON_T1RUN_POSN                                   0x6
#define _T1CON_T1RUN_POSITION                               0x6
#define _T1CON_T1RUN_SIZE                                   0x1
#define _T1CON_T1RUN_LENGTH                                 0x1
#define _T1CON_T1RUN_MASK                                   0x40
#define _T1CON_RD16_POSN                                    0x7
#define _T1CON_RD16_POSITION                                0x7
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x80
#define _T1CON_T1INSYNC_POSN                                0x2
#define _T1CON_T1INSYNC_POSITION                            0x2
#define _T1CON_T1INSYNC_SIZE                                0x1
#define _T1CON_T1INSYNC_LENGTH                              0x1
#define _T1CON_T1INSYNC_MASK                                0x4
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
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
#define _T1CON_T1RD16_POSN                                  0x7
#define _T1CON_T1RD16_POSITION                              0x7
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x80

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0xFCE);
#ifndef _LIB_BUILD
asm("TMR1 equ 0FCEh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0xFCE);
#ifndef _LIB_BUILD
asm("TMR1L equ 0FCEh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0xFCF);
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif

// Register: RCON
#define RCON RCON
extern volatile unsigned char           RCON                __at(0xFD0);
#ifndef _LIB_BUILD
asm("RCON equ 0FD0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NOT_BOR                :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_POR                :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_PD                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_TO                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned NOT_RI                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_CM                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned nCM                    :1;
        unsigned                        :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
        unsigned CM                     :1;
    };
} RCONbits_t;
extern volatile RCONbits_t RCONbits __at(0xFD0);
// bitfield macros
#define _RCON_NOT_BOR_POSN                                  0x0
#define _RCON_NOT_BOR_POSITION                              0x0
#define _RCON_NOT_BOR_SIZE                                  0x1
#define _RCON_NOT_BOR_LENGTH                                0x1
#define _RCON_NOT_BOR_MASK                                  0x1
#define _RCON_NOT_POR_POSN                                  0x1
#define _RCON_NOT_POR_POSITION                              0x1
#define _RCON_NOT_POR_SIZE                                  0x1
#define _RCON_NOT_POR_LENGTH                                0x1
#define _RCON_NOT_POR_MASK                                  0x2
#define _RCON_NOT_PD_POSN                                   0x2
#define _RCON_NOT_PD_POSITION                               0x2
#define _RCON_NOT_PD_SIZE                                   0x1
#define _RCON_NOT_PD_LENGTH                                 0x1
#define _RCON_NOT_PD_MASK                                   0x4
#define _RCON_NOT_TO_POSN                                   0x3
#define _RCON_NOT_TO_POSITION                               0x3
#define _RCON_NOT_TO_SIZE                                   0x1
#define _RCON_NOT_TO_LENGTH                                 0x1
#define _RCON_NOT_TO_MASK                                   0x8
#define _RCON_NOT_RI_POSN                                   0x4
#define _RCON_NOT_RI_POSITION                               0x4
#define _RCON_NOT_RI_SIZE                                   0x1
#define _RCON_NOT_RI_LENGTH                                 0x1
#define _RCON_NOT_RI_MASK                                   0x10
#define _RCON_NOT_CM_POSN                                   0x5
#define _RCON_NOT_CM_POSITION                               0x5
#define _RCON_NOT_CM_SIZE                                   0x1
#define _RCON_NOT_CM_LENGTH                                 0x1
#define _RCON_NOT_CM_MASK                                   0x20
#define _RCON_nBOR_POSN                                     0x0
#define _RCON_nBOR_POSITION                                 0x0
#define _RCON_nBOR_SIZE                                     0x1
#define _RCON_nBOR_LENGTH                                   0x1
#define _RCON_nBOR_MASK                                     0x1
#define _RCON_nPOR_POSN                                     0x1
#define _RCON_nPOR_POSITION                                 0x1
#define _RCON_nPOR_SIZE                                     0x1
#define _RCON_nPOR_LENGTH                                   0x1
#define _RCON_nPOR_MASK                                     0x2
#define _RCON_nPD_POSN                                      0x2
#define _RCON_nPD_POSITION                                  0x2
#define _RCON_nPD_SIZE                                      0x1
#define _RCON_nPD_LENGTH                                    0x1
#define _RCON_nPD_MASK                                      0x4
#define _RCON_nTO_POSN                                      0x3
#define _RCON_nTO_POSITION                                  0x3
#define _RCON_nTO_SIZE                                      0x1
#define _RCON_nTO_LENGTH                                    0x1
#define _RCON_nTO_MASK                                      0x8
#define _RCON_nRI_POSN                                      0x4
#define _RCON_nRI_POSITION                                  0x4
#define _RCON_nRI_SIZE                                      0x1
#define _RCON_nRI_LENGTH                                    0x1
#define _RCON_nRI_MASK                                      0x10
#define _RCON_nCM_POSN                                      0x5
#define _RCON_nCM_POSITION                                  0x5
#define _RCON_nCM_SIZE                                      0x1
#define _RCON_nCM_LENGTH                                    0x1
#define _RCON_nCM_MASK                                      0x20
#define _RCON_IPEN_POSN                                     0x7
#define _RCON_IPEN_POSITION                                 0x7
#define _RCON_IPEN_SIZE                                     0x1
#define _RCON_IPEN_LENGTH                                   0x1
#define _RCON_IPEN_MASK                                     0x80
#define _RCON_BOR_POSN                                      0x0
#define _RCON_BOR_POSITION                                  0x0
#define _RCON_BOR_SIZE                                      0x1
#define _RCON_BOR_LENGTH                                    0x1
#define _RCON_BOR_MASK                                      0x1
#define _RCON_POR_POSN                                      0x1
#define _RCON_POR_POSITION                                  0x1
#define _RCON_POR_SIZE                                      0x1
#define _RCON_POR_LENGTH                                    0x1
#define _RCON_POR_MASK                                      0x2
#define _RCON_PD_POSN                                       0x2
#define _RCON_PD_POSITION                                   0x2
#define _RCON_PD_SIZE                                       0x1
#define _RCON_PD_LENGTH                                     0x1
#define _RCON_PD_MASK                                       0x4
#define _RCON_TO_POSN                                       0x3
#define _RCON_TO_POSITION                                   0x3
#define _RCON_TO_SIZE                                       0x1
#define _RCON_TO_LENGTH                                     0x1
#define _RCON_TO_MASK                                       0x8
#define _RCON_RI_POSN                                       0x4
#define _RCON_RI_POSITION                                   0x4
#define _RCON_RI_SIZE                                       0x1
#define _RCON_RI_LENGTH                                     0x1
#define _RCON_RI_MASK                                       0x10
#define _RCON_CM_POSN                                       0x5
#define _RCON_CM_POSITION                                   0x5
#define _RCON_CM_SIZE                                       0x1
#define _RCON_CM_LENGTH                                     0x1
#define _RCON_CM_MASK                                       0x20

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0xFD1);
#ifndef _LIB_BUILD
asm("WDTCON equ 0FD1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned                        :6;
        unsigned REGSLP                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0xFD1);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_REGSLP_POSN                                 0x7
#define _WDTCON_REGSLP_POSITION                             0x7
#define _WDTCON_REGSLP_SIZE                                 0x1
#define _WDTCON_REGSLP_LENGTH                               0x1
#define _WDTCON_REGSLP_MASK                                 0x80
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0xFD3);
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :2;
        unsigned IOFS                   :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned                        :2;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0xFD3);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x2
#define _OSCCON_SCS_LENGTH                                  0x2
#define _OSCCON_SCS_MASK                                    0x3
#define _OSCCON_IOFS_POSN                                   0x2
#define _OSCCON_IOFS_POSITION                               0x2
#define _OSCCON_IOFS_SIZE                                   0x1
#define _OSCCON_IOFS_LENGTH                                 0x1
#define _OSCCON_IOFS_MASK                                   0x4
#define _OSCCON_OSTS_POSN                                   0x3
#define _OSCCON_OSTS_POSITION                               0x3
#define _OSCCON_OSTS_SIZE                                   0x1
#define _OSCCON_OSTS_LENGTH                                 0x1
#define _OSCCON_OSTS_MASK                                   0x8
#define _OSCCON_IRCF_POSN                                   0x4
#define _OSCCON_IRCF_POSITION                               0x4
#define _OSCCON_IRCF_SIZE                                   0x3
#define _OSCCON_IRCF_LENGTH                                 0x3
#define _OSCCON_IRCF_MASK                                   0x70
#define _OSCCON_IDLEN_POSN                                  0x7
#define _OSCCON_IDLEN_POSITION                              0x7
#define _OSCCON_IDLEN_SIZE                                  0x1
#define _OSCCON_IDLEN_LENGTH                                0x1
#define _OSCCON_IDLEN_MASK                                  0x80
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
#define _OSCCON_IRCF0_POSN                                  0x4
#define _OSCCON_IRCF0_POSITION                              0x4
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x10
#define _OSCCON_IRCF1_POSN                                  0x5
#define _OSCCON_IRCF1_POSITION                              0x5
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x20
#define _OSCCON_IRCF2_POSN                                  0x6
#define _OSCCON_IRCF2_POSITION                              0x6
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x40

// Register: T0CON
#define T0CON T0CON
extern volatile unsigned char           T0CON               __at(0xFD5);
#ifndef _LIB_BUILD
asm("T0CON equ 0FD5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0PS                   :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned T08BIT                 :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
        unsigned T0PS3                  :1;
    };
} T0CONbits_t;
extern volatile T0CONbits_t T0CONbits __at(0xFD5);
// bitfield macros
#define _T0CON_T0PS_POSN                                    0x0
#define _T0CON_T0PS_POSITION                                0x0
#define _T0CON_T0PS_SIZE                                    0x3
#define _T0CON_T0PS_LENGTH                                  0x3
#define _T0CON_T0PS_MASK                                    0x7
#define _T0CON_PSA_POSN                                     0x3
#define _T0CON_PSA_POSITION                                 0x3
#define _T0CON_PSA_SIZE                                     0x1
#define _T0CON_PSA_LENGTH                                   0x1
#define _T0CON_PSA_MASK                                     0x8
#define _T0CON_T0SE_POSN                                    0x4
#define _T0CON_T0SE_POSITION                                0x4
#define _T0CON_T0SE_SIZE                                    0x1
#define _T0CON_T0SE_LENGTH                                  0x1
#define _T0CON_T0SE_MASK                                    0x10
#define _T0CON_T0CS_POSN                                    0x5
#define _T0CON_T0CS_POSITION                                0x5
#define _T0CON_T0CS_SIZE                                    0x1
#define _T0CON_T0CS_LENGTH                                  0x1
#define _T0CON_T0CS_MASK                                    0x20
#define _T0CON_T08BIT_POSN                                  0x6
#define _T0CON_T08BIT_POSITION                              0x6
#define _T0CON_T08BIT_SIZE                                  0x1
#define _T0CON_T08BIT_LENGTH                                0x1
#define _T0CON_T08BIT_MASK                                  0x40
#define _T0CON_TMR0ON_POSN                                  0x7
#define _T0CON_TMR0ON_POSITION                              0x7
#define _T0CON_TMR0ON_SIZE                                  0x1
#define _T0CON_TMR0ON_LENGTH                                0x1
#define _T0CON_TMR0ON_MASK                                  0x80
#define _T0CON_T0PS0_POSN                                   0x0
#define _T0CON_T0PS0_POSITION                               0x0
#define _T0CON_T0PS0_SIZE                                   0x1
#define _T0CON_T0PS0_LENGTH                                 0x1
#define _T0CON_T0PS0_MASK                                   0x1
#define _T0CON_T0PS1_POSN                                   0x1
#define _T0CON_T0PS1_POSITION                               0x1
#define _T0CON_T0PS1_SIZE                                   0x1
#define _T0CON_T0PS1_LENGTH                                 0x1
#define _T0CON_T0PS1_MASK                                   0x2
#define _T0CON_T0PS2_POSN                                   0x2
#define _T0CON_T0PS2_POSITION                               0x2
#define _T0CON_T0PS2_SIZE                                   0x1
#define _T0CON_T0PS2_LENGTH                                 0x1
#define _T0CON_T0PS2_MASK                                   0x4
#define _T0CON_T0PS3_POSN                                   0x3
#define _T0CON_T0PS3_POSITION                               0x3
#define _T0CON_T0PS3_SIZE                                   0x1
#define _T0CON_T0PS3_LENGTH                                 0x1
#define _T0CON_T0PS3_MASK                                   0x8

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned short          TMR0                __at(0xFD6);
#ifndef _LIB_BUILD
asm("TMR0 equ 0FD6h");
#endif

// Register: TMR0L
#define TMR0L TMR0L
extern volatile unsigned char           TMR0L               __at(0xFD6);
#ifndef _LIB_BUILD
asm("TMR0L equ 0FD6h");
#endif

// Register: TMR0H
#define TMR0H TMR0H
extern volatile unsigned char           TMR0H               __at(0xFD7);
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif

// Register: STATUS
#define STATUS STATUS
extern volatile unsigned char           STATUS              __at(0xFD8);
#ifndef _LIB_BUILD
asm("STATUS equ 0FD8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned OV                     :1;
        unsigned N                      :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
        unsigned OVERFLOW               :1;
        unsigned NEGATIVE               :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0xFD8);
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
#define _STATUS_OV_POSN                                     0x3
#define _STATUS_OV_POSITION                                 0x3
#define _STATUS_OV_SIZE                                     0x1
#define _STATUS_OV_LENGTH                                   0x1
#define _STATUS_OV_MASK                                     0x8
#define _STATUS_N_POSN                                      0x4
#define _STATUS_N_POSITION                                  0x4
#define _STATUS_N_SIZE                                      0x1
#define _STATUS_N_LENGTH                                    0x1
#define _STATUS_N_MASK                                      0x10
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
#define _STATUS_OVERFLOW_POSN                               0x3
#define _STATUS_OVERFLOW_POSITION                           0x3
#define _STATUS_OVERFLOW_SIZE                               0x1
#define _STATUS_OVERFLOW_LENGTH                             0x1
#define _STATUS_OVERFLOW_MASK                               0x8
#define _STATUS_NEGATIVE_POSN                               0x4
#define _STATUS_NEGATIVE_POSITION                           0x4
#define _STATUS_NEGATIVE_SIZE                               0x1
#define _STATUS_NEGATIVE_LENGTH                             0x1
#define _STATUS_NEGATIVE_MASK                               0x10

// Register: FSR2
#define FSR2 FSR2
extern volatile unsigned short          FSR2                __at(0xFD9);
#ifndef _LIB_BUILD
asm("FSR2 equ 0FD9h");
#endif

// Register: FSR2L
#define FSR2L FSR2L
extern volatile unsigned char           FSR2L               __at(0xFD9);
#ifndef _LIB_BUILD
asm("FSR2L equ 0FD9h");
#endif

// Register: FSR2H
#define FSR2H FSR2H
extern volatile unsigned char           FSR2H               __at(0xFDA);
#ifndef _LIB_BUILD
asm("FSR2H equ 0FDAh");
#endif

// Register: PLUSW2
#define PLUSW2 PLUSW2
extern volatile unsigned char           PLUSW2              __at(0xFDB);
#ifndef _LIB_BUILD
asm("PLUSW2 equ 0FDBh");
#endif

// Register: PREINC2
#define PREINC2 PREINC2
extern volatile unsigned char           PREINC2             __at(0xFDC);
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
extern volatile unsigned char           POSTDEC2            __at(0xFDD);
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif

// Register: POSTINC2
#define POSTINC2 POSTINC2
extern volatile unsigned char           POSTINC2            __at(0xFDE);
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif

// Register: INDF2
#define INDF2 INDF2
extern volatile unsigned char           INDF2               __at(0xFDF);
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif

// Register: BSR
#define BSR BSR
extern volatile unsigned char           BSR                 __at(0xFE0);
#ifndef _LIB_BUILD
asm("BSR equ 0FE0h");
#endif

// Register: FSR1
#define FSR1 FSR1
extern volatile unsigned short          FSR1                __at(0xFE1);
#ifndef _LIB_BUILD
asm("FSR1 equ 0FE1h");
#endif

// Register: FSR1L
#define FSR1L FSR1L
extern volatile unsigned char           FSR1L               __at(0xFE1);
#ifndef _LIB_BUILD
asm("FSR1L equ 0FE1h");
#endif

// Register: FSR1H
#define FSR1H FSR1H
extern volatile unsigned char           FSR1H               __at(0xFE2);
#ifndef _LIB_BUILD
asm("FSR1H equ 0FE2h");
#endif

// Register: PLUSW1
#define PLUSW1 PLUSW1
extern volatile unsigned char           PLUSW1              __at(0xFE3);
#ifndef _LIB_BUILD
asm("PLUSW1 equ 0FE3h");
#endif

// Register: PREINC1
#define PREINC1 PREINC1
extern volatile unsigned char           PREINC1             __at(0xFE4);
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
extern volatile unsigned char           POSTDEC1            __at(0xFE5);
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif

// Register: POSTINC1
#define POSTINC1 POSTINC1
extern volatile unsigned char           POSTINC1            __at(0xFE6);
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif

// Register: INDF1
#define INDF1 INDF1
extern volatile unsigned char           INDF1               __at(0xFE7);
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0xFE8);
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif

// Register: FSR0
#define FSR0 FSR0
extern volatile unsigned short          FSR0                __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0 equ 0FE9h");
#endif

// Register: FSR0L
#define FSR0L FSR0L
extern volatile unsigned char           FSR0L               __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0L equ 0FE9h");
#endif

// Register: FSR0H
#define FSR0H FSR0H
extern volatile unsigned char           FSR0H               __at(0xFEA);
#ifndef _LIB_BUILD
asm("FSR0H equ 0FEAh");
#endif

// Register: PLUSW0
#define PLUSW0 PLUSW0
extern volatile unsigned char           PLUSW0              __at(0xFEB);
#ifndef _LIB_BUILD
asm("PLUSW0 equ 0FEBh");
#endif

// Register: PREINC0
#define PREINC0 PREINC0
extern volatile unsigned char           PREINC0             __at(0xFEC);
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
extern volatile unsigned char           POSTDEC0            __at(0xFED);
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif

// Register: POSTINC0
#define POSTINC0 POSTINC0
extern volatile unsigned char           POSTINC0            __at(0xFEE);
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif

// Register: INDF0
#define INDF0 INDF0
extern volatile unsigned char           INDF0               __at(0xFEF);
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif

// Register: INTCON3
#define INTCON3 INTCON3
extern volatile unsigned char           INTCON3             __at(0xFF0);
#ifndef _LIB_BUILD
asm("INTCON3 equ 0FF0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INT1IF                 :1;
        unsigned INT2IF                 :1;
        unsigned INT3IF                 :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned INT3IE                 :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned INT3F                  :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned INT3E                  :1;
        unsigned INT1P                  :1;
        unsigned INT2P                  :1;
    };
} INTCON3bits_t;
extern volatile INTCON3bits_t INTCON3bits __at(0xFF0);
// bitfield macros
#define _INTCON3_INT1IF_POSN                                0x0
#define _INTCON3_INT1IF_POSITION                            0x0
#define _INTCON3_INT1IF_SIZE                                0x1
#define _INTCON3_INT1IF_LENGTH                              0x1
#define _INTCON3_INT1IF_MASK                                0x1
#define _INTCON3_INT2IF_POSN                                0x1
#define _INTCON3_INT2IF_POSITION                            0x1
#define _INTCON3_INT2IF_SIZE                                0x1
#define _INTCON3_INT2IF_LENGTH                              0x1
#define _INTCON3_INT2IF_MASK                                0x2
#define _INTCON3_INT3IF_POSN                                0x2
#define _INTCON3_INT3IF_POSITION                            0x2
#define _INTCON3_INT3IF_SIZE                                0x1
#define _INTCON3_INT3IF_LENGTH                              0x1
#define _INTCON3_INT3IF_MASK                                0x4
#define _INTCON3_INT1IE_POSN                                0x3
#define _INTCON3_INT1IE_POSITION                            0x3
#define _INTCON3_INT1IE_SIZE                                0x1
#define _INTCON3_INT1IE_LENGTH                              0x1
#define _INTCON3_INT1IE_MASK                                0x8
#define _INTCON3_INT2IE_POSN                                0x4
#define _INTCON3_INT2IE_POSITION                            0x4
#define _INTCON3_INT2IE_SIZE                                0x1
#define _INTCON3_INT2IE_LENGTH                              0x1
#define _INTCON3_INT2IE_MASK                                0x10
#define _INTCON3_INT3IE_POSN                                0x5
#define _INTCON3_INT3IE_POSITION                            0x5
#define _INTCON3_INT3IE_SIZE                                0x1
#define _INTCON3_INT3IE_LENGTH                              0x1
#define _INTCON3_INT3IE_MASK                                0x20
#define _INTCON3_INT1IP_POSN                                0x6
#define _INTCON3_INT1IP_POSITION                            0x6
#define _INTCON3_INT1IP_SIZE                                0x1
#define _INTCON3_INT1IP_LENGTH                              0x1
#define _INTCON3_INT1IP_MASK                                0x40
#define _INTCON3_INT2IP_POSN                                0x7
#define _INTCON3_INT2IP_POSITION                            0x7
#define _INTCON3_INT2IP_SIZE                                0x1
#define _INTCON3_INT2IP_LENGTH                              0x1
#define _INTCON3_INT2IP_MASK                                0x80
#define _INTCON3_INT1F_POSN                                 0x0
#define _INTCON3_INT1F_POSITION                             0x0
#define _INTCON3_INT1F_SIZE                                 0x1
#define _INTCON3_INT1F_LENGTH                               0x1
#define _INTCON3_INT1F_MASK                                 0x1
#define _INTCON3_INT2F_POSN                                 0x1
#define _INTCON3_INT2F_POSITION                             0x1
#define _INTCON3_INT2F_SIZE                                 0x1
#define _INTCON3_INT2F_LENGTH                               0x1
#define _INTCON3_INT2F_MASK                                 0x2
#define _INTCON3_INT3F_POSN                                 0x2
#define _INTCON3_INT3F_POSITION                             0x2
#define _INTCON3_INT3F_SIZE                                 0x1
#define _INTCON3_INT3F_LENGTH                               0x1
#define _INTCON3_INT3F_MASK                                 0x4
#define _INTCON3_INT1E_POSN                                 0x3
#define _INTCON3_INT1E_POSITION                             0x3
#define _INTCON3_INT1E_SIZE                                 0x1
#define _INTCON3_INT1E_LENGTH                               0x1
#define _INTCON3_INT1E_MASK                                 0x8
#define _INTCON3_INT2E_POSN                                 0x4
#define _INTCON3_INT2E_POSITION                             0x4
#define _INTCON3_INT2E_SIZE                                 0x1
#define _INTCON3_INT2E_LENGTH                               0x1
#define _INTCON3_INT2E_MASK                                 0x10
#define _INTCON3_INT3E_POSN                                 0x5
#define _INTCON3_INT3E_POSITION                             0x5
#define _INTCON3_INT3E_SIZE                                 0x1
#define _INTCON3_INT3E_LENGTH                               0x1
#define _INTCON3_INT3E_MASK                                 0x20
#define _INTCON3_INT1P_POSN                                 0x6
#define _INTCON3_INT1P_POSITION                             0x6
#define _INTCON3_INT1P_SIZE                                 0x1
#define _INTCON3_INT1P_LENGTH                               0x1
#define _INTCON3_INT1P_MASK                                 0x40
#define _INTCON3_INT2P_POSN                                 0x7
#define _INTCON3_INT2P_POSITION                             0x7
#define _INTCON3_INT2P_SIZE                                 0x1
#define _INTCON3_INT2P_LENGTH                               0x1
#define _INTCON3_INT2P_MASK                                 0x80

// Register: INTCON2
#define INTCON2 INTCON2
extern volatile unsigned char           INTCON2             __at(0xFF1);
#ifndef _LIB_BUILD
asm("INTCON2 equ 0FF1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned NOT_RBPU               :1;
    };
    struct {
        unsigned RBIP                   :1;
        unsigned INT3IP                 :1;
        unsigned TMR0IP                 :1;
        unsigned INTEDG3                :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT3P                  :1;
        unsigned T0IP                   :1;
        unsigned                        :4;
        unsigned RBPU                   :1;
    };
} INTCON2bits_t;
extern volatile INTCON2bits_t INTCON2bits __at(0xFF1);
// bitfield macros
#define _INTCON2_NOT_RBPU_POSN                              0x7
#define _INTCON2_NOT_RBPU_POSITION                          0x7
#define _INTCON2_NOT_RBPU_SIZE                              0x1
#define _INTCON2_NOT_RBPU_LENGTH                            0x1
#define _INTCON2_NOT_RBPU_MASK                              0x80
#define _INTCON2_RBIP_POSN                                  0x0
#define _INTCON2_RBIP_POSITION                              0x0
#define _INTCON2_RBIP_SIZE                                  0x1
#define _INTCON2_RBIP_LENGTH                                0x1
#define _INTCON2_RBIP_MASK                                  0x1
#define _INTCON2_INT3IP_POSN                                0x1
#define _INTCON2_INT3IP_POSITION                            0x1
#define _INTCON2_INT3IP_SIZE                                0x1
#define _INTCON2_INT3IP_LENGTH                              0x1
#define _INTCON2_INT3IP_MASK                                0x2
#define _INTCON2_TMR0IP_POSN                                0x2
#define _INTCON2_TMR0IP_POSITION                            0x2
#define _INTCON2_TMR0IP_SIZE                                0x1
#define _INTCON2_TMR0IP_LENGTH                              0x1
#define _INTCON2_TMR0IP_MASK                                0x4
#define _INTCON2_INTEDG3_POSN                               0x3
#define _INTCON2_INTEDG3_POSITION                           0x3
#define _INTCON2_INTEDG3_SIZE                               0x1
#define _INTCON2_INTEDG3_LENGTH                             0x1
#define _INTCON2_INTEDG3_MASK                               0x8
#define _INTCON2_INTEDG2_POSN                               0x4
#define _INTCON2_INTEDG2_POSITION                           0x4
#define _INTCON2_INTEDG2_SIZE                               0x1
#define _INTCON2_INTEDG2_LENGTH                             0x1
#define _INTCON2_INTEDG2_MASK                               0x10
#define _INTCON2_INTEDG1_POSN                               0x5
#define _INTCON2_INTEDG1_POSITION                           0x5
#define _INTCON2_INTEDG1_SIZE                               0x1
#define _INTCON2_INTEDG1_LENGTH                             0x1
#define _INTCON2_INTEDG1_MASK                               0x20
#define _INTCON2_INTEDG0_POSN                               0x6
#define _INTCON2_INTEDG0_POSITION                           0x6
#define _INTCON2_INTEDG0_SIZE                               0x1
#define _INTCON2_INTEDG0_LENGTH                             0x1
#define _INTCON2_INTEDG0_MASK                               0x40
#define _INTCON2_nRBPU_POSN                                 0x7
#define _INTCON2_nRBPU_POSITION                             0x7
#define _INTCON2_nRBPU_SIZE                                 0x1
#define _INTCON2_nRBPU_LENGTH                               0x1
#define _INTCON2_nRBPU_MASK                                 0x80
#define _INTCON2_INT3P_POSN                                 0x1
#define _INTCON2_INT3P_POSITION                             0x1
#define _INTCON2_INT3P_SIZE                                 0x1
#define _INTCON2_INT3P_LENGTH                               0x1
#define _INTCON2_INT3P_MASK                                 0x2
#define _INTCON2_T0IP_POSN                                  0x2
#define _INTCON2_T0IP_POSITION                              0x2
#define _INTCON2_T0IP_SIZE                                  0x1
#define _INTCON2_T0IP_LENGTH                                0x1
#define _INTCON2_T0IP_MASK                                  0x4
#define _INTCON2_RBPU_POSN                                  0x7
#define _INTCON2_RBPU_POSITION                              0x7
#define _INTCON2_RBPU_SIZE                                  0x1
#define _INTCON2_RBPU_LENGTH                                0x1
#define _INTCON2_RBPU_MASK                                  0x80

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0xFF2);
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT0F                  :1;
        unsigned T0IF                   :1;
        unsigned                        :1;
        unsigned INT0E                  :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0xFF2);
// bitfield macros
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
#define _INTCON_INT0IF_POSN                                 0x1
#define _INTCON_INT0IF_POSITION                             0x1
#define _INTCON_INT0IF_SIZE                                 0x1
#define _INTCON_INT0IF_LENGTH                               0x1
#define _INTCON_INT0IF_MASK                                 0x2
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_RBIE_POSN                                   0x3
#define _INTCON_RBIE_POSITION                               0x3
#define _INTCON_RBIE_SIZE                                   0x1
#define _INTCON_RBIE_LENGTH                                 0x1
#define _INTCON_RBIE_MASK                                   0x8
#define _INTCON_INT0IE_POSN                                 0x4
#define _INTCON_INT0IE_POSITION                             0x4
#define _INTCON_INT0IE_SIZE                                 0x1
#define _INTCON_INT0IE_LENGTH                               0x1
#define _INTCON_INT0IE_MASK                                 0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_GIEL_POSN                              0x6
#define _INTCON_PEIE_GIEL_POSITION                          0x6
#define _INTCON_PEIE_GIEL_SIZE                              0x1
#define _INTCON_PEIE_GIEL_LENGTH                            0x1
#define _INTCON_PEIE_GIEL_MASK                              0x40
#define _INTCON_GIE_GIEH_POSN                               0x7
#define _INTCON_GIE_GIEH_POSITION                           0x7
#define _INTCON_GIE_GIEH_SIZE                               0x1
#define _INTCON_GIE_GIEH_LENGTH                             0x1
#define _INTCON_GIE_GIEH_MASK                               0x80
#define _INTCON_INT0F_POSN                                  0x1
#define _INTCON_INT0F_POSITION                              0x1
#define _INTCON_INT0F_SIZE                                  0x1
#define _INTCON_INT0F_LENGTH                                0x1
#define _INTCON_INT0F_MASK                                  0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_INT0E_POSN                                  0x4
#define _INTCON_INT0E_POSITION                              0x4
#define _INTCON_INT0E_SIZE                                  0x1
#define _INTCON_INT0E_LENGTH                                0x1
#define _INTCON_INT0E_MASK                                  0x10
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20
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
#define _INTCON_GIEL_POSN                                   0x6
#define _INTCON_GIEL_POSITION                               0x6
#define _INTCON_GIEL_SIZE                                   0x1
#define _INTCON_GIEL_LENGTH                                 0x1
#define _INTCON_GIEL_MASK                                   0x40
#define _INTCON_GIEH_POSN                                   0x7
#define _INTCON_GIEH_POSITION                               0x7
#define _INTCON_GIEH_SIZE                                   0x1
#define _INTCON_GIEH_LENGTH                                 0x1
#define _INTCON_GIEH_MASK                                   0x80

// Register: PROD
#define PROD PROD
extern volatile unsigned short          PROD                __at(0xFF3);
#ifndef _LIB_BUILD
asm("PROD equ 0FF3h");
#endif

// Register: PRODL
#define PRODL PRODL
extern volatile unsigned char           PRODL               __at(0xFF3);
#ifndef _LIB_BUILD
asm("PRODL equ 0FF3h");
#endif

// Register: PRODH
#define PRODH PRODH
extern volatile unsigned char           PRODH               __at(0xFF4);
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif

// Register: TABLAT
#define TABLAT TABLAT
extern volatile unsigned char           TABLAT              __at(0xFF5);
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif

// Register: TBLPTR
#define TBLPTR TBLPTR
#ifndef __CCI__
extern volatile __uint24                TBLPTR              __at(0xFF6);
#endif
#ifndef _LIB_BUILD
asm("TBLPTR equ 0FF6h");
#endif

// Register: TBLPTRL
#define TBLPTRL TBLPTRL
extern volatile unsigned char           TBLPTRL             __at(0xFF6);
#ifndef _LIB_BUILD
asm("TBLPTRL equ 0FF6h");
#endif

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
extern volatile unsigned char           TBLPTRH             __at(0xFF7);
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif

// Register: TBLPTRU
#define TBLPTRU TBLPTRU
extern volatile unsigned char           TBLPTRU             __at(0xFF8);
#ifndef _LIB_BUILD
asm("TBLPTRU equ 0FF8h");
#endif

// Register: PCLAT
#define PCLAT PCLAT
#ifndef __CCI__
extern volatile __uint24                PCLAT               __at(0xFF9);
#endif
#ifndef _LIB_BUILD
asm("PCLAT equ 0FF9h");
#endif
// aliases
#ifndef __CCI__
extern volatile __uint24                PC                  __at(0xFF9);
#endif
#ifndef _LIB_BUILD
asm("PC equ 0FF9h");
#endif

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0xFF9);
#ifndef _LIB_BUILD
asm("PCL equ 0FF9h");
#endif

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0xFFA);
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif

// Register: PCLATU
#define PCLATU PCLATU
extern volatile unsigned char           PCLATU              __at(0xFFB);
#ifndef _LIB_BUILD
asm("PCLATU equ 0FFBh");
#endif

// Register: STKPTR
#define STKPTR STKPTR
extern volatile unsigned char           STKPTR              __at(0xFFC);
#ifndef _LIB_BUILD
asm("STKPTR equ 0FFCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKFUL                 :1;
    };
    struct {
        unsigned SP0                    :1;
        unsigned SP1                    :1;
        unsigned SP2                    :1;
        unsigned SP3                    :1;
        unsigned SP4                    :1;
        unsigned                        :2;
        unsigned STKOVF                 :1;
    };
    struct {
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits __at(0xFFC);
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F
#define _STKPTR_STKUNF_POSN                                 0x6
#define _STKPTR_STKUNF_POSITION                             0x6
#define _STKPTR_STKUNF_SIZE                                 0x1
#define _STKPTR_STKUNF_LENGTH                               0x1
#define _STKPTR_STKUNF_MASK                                 0x40
#define _STKPTR_STKFUL_POSN                                 0x7
#define _STKPTR_STKFUL_POSITION                             0x7
#define _STKPTR_STKFUL_SIZE                                 0x1
#define _STKPTR_STKFUL_LENGTH                               0x1
#define _STKPTR_STKFUL_MASK                                 0x80
#define _STKPTR_SP0_POSN                                    0x0
#define _STKPTR_SP0_POSITION                                0x0
#define _STKPTR_SP0_SIZE                                    0x1
#define _STKPTR_SP0_LENGTH                                  0x1
#define _STKPTR_SP0_MASK                                    0x1
#define _STKPTR_SP1_POSN                                    0x1
#define _STKPTR_SP1_POSITION                                0x1
#define _STKPTR_SP1_SIZE                                    0x1
#define _STKPTR_SP1_LENGTH                                  0x1
#define _STKPTR_SP1_MASK                                    0x2
#define _STKPTR_SP2_POSN                                    0x2
#define _STKPTR_SP2_POSITION                                0x2
#define _STKPTR_SP2_SIZE                                    0x1
#define _STKPTR_SP2_LENGTH                                  0x1
#define _STKPTR_SP2_MASK                                    0x4
#define _STKPTR_SP3_POSN                                    0x3
#define _STKPTR_SP3_POSITION                                0x3
#define _STKPTR_SP3_SIZE                                    0x1
#define _STKPTR_SP3_LENGTH                                  0x1
#define _STKPTR_SP3_MASK                                    0x8
#define _STKPTR_SP4_POSN                                    0x4
#define _STKPTR_SP4_POSITION                                0x4
#define _STKPTR_SP4_SIZE                                    0x1
#define _STKPTR_SP4_LENGTH                                  0x1
#define _STKPTR_SP4_MASK                                    0x10
#define _STKPTR_STKOVF_POSN                                 0x7
#define _STKPTR_STKOVF_POSITION                             0x7
#define _STKPTR_STKOVF_SIZE                                 0x1
#define _STKPTR_STKOVF_LENGTH                               0x1
#define _STKPTR_STKOVF_MASK                                 0x80
#define _STKPTR_STKPTR0_POSN                                0x0
#define _STKPTR_STKPTR0_POSITION                            0x0
#define _STKPTR_STKPTR0_SIZE                                0x1
#define _STKPTR_STKPTR0_LENGTH                              0x1
#define _STKPTR_STKPTR0_MASK                                0x1
#define _STKPTR_STKPTR1_POSN                                0x1
#define _STKPTR_STKPTR1_POSITION                            0x1
#define _STKPTR_STKPTR1_SIZE                                0x1
#define _STKPTR_STKPTR1_LENGTH                              0x1
#define _STKPTR_STKPTR1_MASK                                0x2
#define _STKPTR_STKPTR2_POSN                                0x2
#define _STKPTR_STKPTR2_POSITION                            0x2
#define _STKPTR_STKPTR2_SIZE                                0x1
#define _STKPTR_STKPTR2_LENGTH                              0x1
#define _STKPTR_STKPTR2_MASK                                0x4
#define _STKPTR_STKPTR3_POSN                                0x3
#define _STKPTR_STKPTR3_POSITION                            0x3
#define _STKPTR_STKPTR3_SIZE                                0x1
#define _STKPTR_STKPTR3_LENGTH                              0x1
#define _STKPTR_STKPTR3_MASK                                0x8
#define _STKPTR_STKPTR4_POSN                                0x4
#define _STKPTR_STKPTR4_POSITION                            0x4
#define _STKPTR_STKPTR4_SIZE                                0x1
#define _STKPTR_STKPTR4_LENGTH                              0x1
#define _STKPTR_STKPTR4_MASK                                0x10

// Register: TOS
#define TOS TOS
#ifndef __CCI__
extern volatile __uint24                TOS                 __at(0xFFD);
#endif
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0xFFD);
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0xFFE);
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif

// Register: TOSU
#define TOSU TOSU
extern volatile unsigned char           TOSU                __at(0xFFF);
#ifndef _LIB_BUILD
asm("TOSU equ 0FFFh");
#endif

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&0FFh)
#endif
#define _BIT_ACCESS(r,b) ___mkstr(BANKMASK(r)) "," ___mkstr(b)
#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr)&0FFFFFh)
#endif
// PORTH<A16>
extern volatile __bit                   A16                 __at(0x7C38);	// @ (0xF87 * 8 + 0)
#define                                 A16_bit             _BIT_ACCESS(PORTH,0)
// PORTH<A17>
extern volatile __bit                   A17                 __at(0x7C39);	// @ (0xF87 * 8 + 1)
#define                                 A17_bit             _BIT_ACCESS(PORTH,1)
// PORTH<A18>
extern volatile __bit                   A18                 __at(0x7C3A);	// @ (0xF87 * 8 + 2)
#define                                 A18_bit             _BIT_ACCESS(PORTH,2)
// PORTH<A19>
extern volatile __bit                   A19                 __at(0x7C3B);	// @ (0xF87 * 8 + 3)
#define                                 A19_bit             _BIT_ACCESS(PORTH,3)
// BAUDCON1<ABDEN>
extern volatile __bit                   ABDEN               __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDEN1>
extern volatile __bit                   ABDEN1              __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN1_bit          _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON1,7)
// BAUDCON1<ABDOVF1>
extern volatile __bit                   ABDOVF1             __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF1_bit         _BIT_ACCESS(BAUDCON1,7)
// SSPCON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ACKDT1>
extern volatile __bit                   ACKDT1              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT1_bit          _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ACKEN1>
extern volatile __bit                   ACKEN1              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN1_bit          _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSPCON2,6)
// SSPCON2<ACKSTAT1>
extern volatile __bit                   ACKSTAT1            __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT1_bit        _BIT_ACCESS(SSPCON2,6)
// ADCON2<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 ACQT0_bit           _BIT_ACCESS(ADCON2,3)
// ADCON2<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E04);	// @ (0xFC0 * 8 + 4)
#define                                 ACQT1_bit           _BIT_ACCESS(ADCON2,4)
// ADCON2<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ACQT2_bit           _BIT_ACCESS(ADCON2,5)
// PORTD<AD0>
extern volatile __bit                   AD0                 __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 AD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<AD1>
extern volatile __bit                   AD1                 __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 AD1_bit             _BIT_ACCESS(PORTD,1)
// PORTE<AD10>
extern volatile __bit                   AD10                __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 AD10_bit            _BIT_ACCESS(PORTE,2)
// PORTE<AD11>
extern volatile __bit                   AD11                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 AD11_bit            _BIT_ACCESS(PORTE,3)
// PORTE<AD12>
extern volatile __bit                   AD12                __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 AD12_bit            _BIT_ACCESS(PORTE,4)
// PORTE<AD13>
extern volatile __bit                   AD13                __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 AD13_bit            _BIT_ACCESS(PORTE,5)
// PORTE<AD14>
extern volatile __bit                   AD14                __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 AD14_bit            _BIT_ACCESS(PORTE,6)
// PORTE<AD15>
extern volatile __bit                   AD15                __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 AD15_bit            _BIT_ACCESS(PORTE,7)
// PORTD<AD2>
extern volatile __bit                   AD2                 __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 AD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<AD3>
extern volatile __bit                   AD3                 __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 AD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<AD4>
extern volatile __bit                   AD4                 __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 AD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<AD5>
extern volatile __bit                   AD5                 __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 AD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<AD6>
extern volatile __bit                   AD6                 __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 AD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<AD7>
extern volatile __bit                   AD7                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 AD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<AD8>
extern volatile __bit                   AD8                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 AD8_bit             _BIT_ACCESS(PORTE,0)
// PORTE<AD9>
extern volatile __bit                   AD9                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 AD9_bit             _BIT_ACCESS(PORTE,1)
// ADCON0<ADCAL>
extern volatile __bit                   ADCAL               __at(0x7E17);	// @ (0xFC2 * 8 + 7)
#define                                 ADCAL_bit           _BIT_ACCESS(ADCON0,7)
// ADCON2<ADCS0>
extern volatile __bit                   ADCS0               __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON2,0)
// ADCON2<ADCS1>
extern volatile __bit                   ADCS1               __at(0x7E01);	// @ (0xFC0 * 8 + 1)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON2,1)
// ADCON2<ADCS2>
extern volatile __bit                   ADCS2               __at(0x7E02);	// @ (0xFC0 * 8 + 2)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON2,2)
// RCSTA1<ADDEN>
extern volatile __bit _DEPRECATED       ADDEN               __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA1,3)
// RCSTA1<ADDEN1>
extern volatile __bit                   ADDEN1              __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN1_bit          _BIT_ACCESS(RCSTA1,3)
// RCSTA2<ADDEN2>
extern volatile __bit                   ADDEN2              __at(0x7B03);	// @ (0xF60 * 8 + 3)
#define                                 ADDEN2_bit          _BIT_ACCESS(RCSTA2,3)
// ADCON2<ADFM>
extern volatile __bit                   ADFM                __at(0x7E07);	// @ (0xFC0 * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON2,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x7CEE);	// @ (0xF9D * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x7CF6);	// @ (0xF9E * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// IPR1<ADIP>
extern volatile __bit                   ADIP                __at(0x7CFE);	// @ (0xF9F * 8 + 6)
#define                                 ADIP_bit            _BIT_ACCESS(IPR1,6)
// SSPCON2<ADMSK1>
extern volatile __bit                   ADMSK1              __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK1_bit          _BIT_ACCESS(SSPCON2,1)
// SSPCON2<ADMSK11>
extern volatile __bit                   ADMSK11             __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK11_bit         _BIT_ACCESS(SSPCON2,1)
// SSPCON2<ADMSK2>
extern volatile __bit                   ADMSK2              __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK2_bit          _BIT_ACCESS(SSPCON2,2)
// SSPCON2<ADMSK21>
extern volatile __bit                   ADMSK21             __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK21_bit         _BIT_ACCESS(SSPCON2,2)
// SSPCON2<ADMSK3>
extern volatile __bit                   ADMSK3              __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK3_bit          _BIT_ACCESS(SSPCON2,3)
// SSPCON2<ADMSK31>
extern volatile __bit                   ADMSK31             __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK31_bit         _BIT_ACCESS(SSPCON2,3)
// SSPCON2<ADMSK4>
extern volatile __bit                   ADMSK4              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK4_bit          _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ADMSK41>
extern volatile __bit                   ADMSK41             __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK41_bit         _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ADMSK5>
extern volatile __bit                   ADMSK5              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK5_bit          _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ADMSK51>
extern volatile __bit                   ADMSK51             __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK51_bit         _BIT_ACCESS(SSPCON2,5)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x7E10);	// @ (0xFC2 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// PORTJ<ALE>
extern volatile __bit                   ALE                 __at(0x7C40);	// @ (0xF88 * 8 + 0)
#define                                 ALE_bit             _BIT_ACCESS(PORTJ,0)
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTF<AN10>
extern volatile __bit                   AN10                __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 AN10_bit            _BIT_ACCESS(PORTF,5)
// PORTF<AN11>
extern volatile __bit                   AN11                __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 AN11_bit            _BIT_ACCESS(PORTF,6)
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,5)
// PORTF<AN5>
extern volatile __bit                   AN5                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 AN5_bit             _BIT_ACCESS(PORTF,7)
// PORTF<AN6>
extern volatile __bit                   AN6                 __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 AN6_bit             _BIT_ACCESS(PORTF,1)
// PORTF<AN7>
extern volatile __bit                   AN7                 __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 AN7_bit             _BIT_ACCESS(PORTF,2)
// PORTF<AN8>
extern volatile __bit                   AN8                 __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 AN8_bit             _BIT_ACCESS(PORTF,3)
// PORTF<AN9>
extern volatile __bit                   AN9                 __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 AN9_bit             _BIT_ACCESS(PORTF,4)
// PORTJ<BA0>
extern volatile __bit                   BA0                 __at(0x7C44);	// @ (0xF88 * 8 + 4)
#define                                 BA0_bit             _BIT_ACCESS(PORTJ,4)
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR2,3)
// IPR2<BCL1IP>
extern volatile __bit                   BCL1IP              __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCL1IP_bit          _BIT_ACCESS(IPR2,3)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// IPR2<BCLIP>
extern volatile __bit                   BCLIP               __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCLIP_bit           _BIT_ACCESS(IPR2,3)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// SSPSTAT<BF1>
extern volatile __bit                   BF1                 __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF1_bit             _BIT_ACCESS(SSPSTAT,0)
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             _BIT_ACCESS(RCON,0)
// BAUDCON1<BRG16>
extern volatile __bit                   BRG16               __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON1,3)
// BAUDCON1<BRG161>
extern volatile __bit                   BRG161              __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG161_bit          _BIT_ACCESS(BAUDCON1,3)
// TXSTA1<BRGH>
extern volatile __bit _DEPRECATED       BRGH                __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA1,2)
// TXSTA1<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH1_bit           _BIT_ACCESS(TXSTA1,2)
// TXSTA2<BRGH2>
extern volatile __bit                   BRGH2               __at(0x7B0A);	// @ (0xF61 * 8 + 2)
#define                                 BRGH2_bit           _BIT_ACCESS(TXSTA2,2)
// PORTF<C1INA>
extern volatile __bit                   C1INA               __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 C1INA_bit           _BIT_ACCESS(PORTF,6)
// PORTF<C1INB>
extern volatile __bit                   C1INB               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 C1INB_bit           _BIT_ACCESS(PORTF,5)
// CMCON<C1INV>
extern volatile __bit                   C1INV               __at(0x7DA4);	// @ (0xFB4 * 8 + 4)
#define                                 C1INV_bit           _BIT_ACCESS(CMCON,4)
// CMCON<C1OUT>
extern volatile __bit _DEPRECATED       C1OUT               __at(0x7DA6);	// @ (0xFB4 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CMCON,6)
// PORTF<C1OUTF>
extern volatile __bit                   C1OUTF              __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 C1OUTF_bit          _BIT_ACCESS(PORTF,2)
// PORTF<C2INA>
extern volatile __bit                   C2INA               __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 C2INA_bit           _BIT_ACCESS(PORTF,4)
// PORTF<C2INB>
extern volatile __bit                   C2INB               __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 C2INB_bit           _BIT_ACCESS(PORTF,3)
// CMCON<C2INV>
extern volatile __bit                   C2INV               __at(0x7DA5);	// @ (0xFB4 * 8 + 5)
#define                                 C2INV_bit           _BIT_ACCESS(CMCON,5)
// CMCON<C2OUT>
extern volatile __bit _DEPRECATED       C2OUT               __at(0x7DA7);	// @ (0xFB4 * 8 + 7)
#define                                 C2OUT_bit           _BIT_ACCESS(CMCON,7)
// PORTF<C2OUTF>
extern volatile __bit                   C2OUTF              __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 C2OUTF_bit          _BIT_ACCESS(PORTF,1)
// PORTG<C3OUTG>
extern volatile __bit                   C3OUTG              __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 C3OUTG_bit          _BIT_ACCESS(PORTG,1)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
// PORTE<CCP10>
extern volatile __bit                   CCP10               __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CCP10_bit           _BIT_ACCESS(PORTE,2)
// PIE3<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR3,1)
// IPR3<CCP1IP>
extern volatile __bit                   CCP1IP              __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 CCP1IP_bit          _BIT_ACCESS(IPR3,1)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0x7B40);	// @ (0xF68 * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0x7B41);	// @ (0xF68 * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0x7B42);	// @ (0xF68 * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0x7B43);	// @ (0xF68 * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// TRISG<CCP1OD>
extern volatile __bit                   CCP1OD              __at(0x7CC5);	// @ (0xF98 * 8 + 5)
#define                                 CCP1OD_bit          _BIT_ACCESS(TRISG,5)
// PORTE<CCP2E>
extern volatile __bit                   CCP2E               __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 CCP2E_bit           _BIT_ACCESS(PORTE,7)
// PIE3<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE3,2)
// PIR3<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x7D22);	// @ (0xFA4 * 8 + 2)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR3,2)
// IPR3<CCP2IP>
extern volatile __bit                   CCP2IP              __at(0x7D2A);	// @ (0xFA5 * 8 + 2)
#define                                 CCP2IP_bit          _BIT_ACCESS(IPR3,2)
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0x7B28);	// @ (0xF65 * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x7B29);	// @ (0xF65 * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x7B2A);	// @ (0xF65 * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x7B2B);	// @ (0xF65 * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// TRISG<CCP2OD>
extern volatile __bit                   CCP2OD              __at(0x7CC6);	// @ (0xF98 * 8 + 6)
#define                                 CCP2OD_bit          _BIT_ACCESS(TRISG,6)
// PORTB<CCP2_PA2>
extern volatile __bit                   CCP2_PA2            __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CCP2_PA2_bit        _BIT_ACCESS(PORTB,3)
// PORTH<CCP6>
extern volatile __bit                   CCP6                __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 CCP6_bit            _BIT_ACCESS(PORTH,7)
// PORTE<CCP6E>
extern volatile __bit                   CCP6E               __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 CCP6E_bit           _BIT_ACCESS(PORTE,6)
// PORTH<CCP7>
extern volatile __bit                   CCP7                __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 CCP7_bit            _BIT_ACCESS(PORTH,6)
// PORTE<CCP7E>
extern volatile __bit                   CCP7E               __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 CCP7E_bit           _BIT_ACCESS(PORTE,5)
// PORTH<CCP8>
extern volatile __bit                   CCP8                __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 CCP8_bit            _BIT_ACCESS(PORTH,5)
// PORTE<CCP8E>
extern volatile __bit                   CCP8E               __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 CCP8E_bit           _BIT_ACCESS(PORTE,4)
// PORTH<CCP9>
extern volatile __bit                   CCP9                __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 CCP9_bit            _BIT_ACCESS(PORTH,4)
// PORTE<CCP9E>
extern volatile __bit                   CCP9E               __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 CCP9E_bit           _BIT_ACCESS(PORTE,3)
// PORTJ<CE>
extern volatile __bit                   CE                  __at(0x7C45);	// @ (0xF88 * 8 + 5)
#define                                 CE_bit              _BIT_ACCESS(PORTJ,5)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x7E12);	// @ (0xFC2 * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x7E13);	// @ (0xFC2 * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0x7E14);	// @ (0xFC2 * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0x7E15);	// @ (0xFC2 * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// ADCON1<CHSN3>
extern volatile __bit                   CHSN3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 CHSN3_bit           _BIT_ACCESS(ADCON1,3)
// CMCON<CIS>
extern volatile __bit                   CIS                 __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 CIS_bit             _BIT_ACCESS(CMCON,3)
// PORTC<CK1>
extern volatile __bit                   CK1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK1_bit             _BIT_ACCESS(PORTC,6)
// PORTG<CK2>
extern volatile __bit                   CK2                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 CK2_bit             _BIT_ACCESS(PORTG,1)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPSTAT<CKE1>
extern volatile __bit                   CKE1                __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE1_bit            _BIT_ACCESS(SSPSTAT,6)
// SSPCON1<CKP>
extern volatile __bit                   CKP                 __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON1,4)
// SSPCON1<CKP1>
extern volatile __bit                   CKP1                __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP1_bit            _BIT_ACCESS(SSPCON1,4)
// BAUDCON1<CKTXP>
extern volatile __bit                   CKTXP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 CKTXP_bit           _BIT_ACCESS(BAUDCON1,4)
// PORTA<CLKI>
extern volatile __bit                   CLKI                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 CLKI_bit            _BIT_ACCESS(PORTA,7)
// PORTA<CLKO>
extern volatile __bit                   CLKO                __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 CLKO_bit            _BIT_ACCESS(PORTA,6)
// RCON<CM>
extern volatile __bit                   CM                  __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 CM_bit              _BIT_ACCESS(RCON,5)
// CMCON<CM0>
extern volatile __bit                   CM0                 __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CM0_bit             _BIT_ACCESS(CMCON,0)
// CMCON<CM1>
extern volatile __bit                   CM1                 __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CM1_bit             _BIT_ACCESS(CMCON,1)
// CMCON<CM2>
extern volatile __bit                   CM2                 __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CM2_bit             _BIT_ACCESS(CMCON,2)
// CMCON<CMEN0>
extern volatile __bit                   CMEN0               __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CMEN0_bit           _BIT_ACCESS(CMCON,0)
// CMCON<CMEN1>
extern volatile __bit                   CMEN1               __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CMEN1_bit           _BIT_ACCESS(CMCON,1)
// CMCON<CMEN2>
extern volatile __bit                   CMEN2               __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CMEN2_bit           _BIT_ACCESS(CMCON,2)
// PIE2<CMIE>
extern volatile __bit                   CMIE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CMIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<CMIF>
extern volatile __bit                   CMIF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CMIF_bit            _BIT_ACCESS(PIR2,6)
// IPR2<CMIP>
extern volatile __bit                   CMIP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CMIP_bit            _BIT_ACCESS(IPR2,6)
// RCSTA1<CREN>
extern volatile __bit _DEPRECATED       CREN                __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA1,4)
// RCSTA1<CREN1>
extern volatile __bit                   CREN1               __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN1_bit           _BIT_ACCESS(RCSTA1,4)
// RCSTA2<CREN2>
extern volatile __bit                   CREN2               __at(0x7B04);	// @ (0xF60 * 8 + 4)
#define                                 CREN2_bit           _BIT_ACCESS(RCSTA2,4)
// PORTE<CS>
extern volatile __bit                   CS                  __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CS_bit              _BIT_ACCESS(PORTE,2)
// TXSTA1<CSRC>
extern volatile __bit _DEPRECATED       CSRC                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA1,7)
// TXSTA1<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA1,7)
// TXSTA2<CSRC2>
extern volatile __bit                   CSRC2               __at(0x7B0F);	// @ (0xF61 * 8 + 7)
#define                                 CSRC2_bit           _BIT_ACCESS(TXSTA2,7)
// CVRCON<CVR0>
extern volatile __bit                   CVR0                __at(0x7DA8);	// @ (0xFB5 * 8 + 0)
#define                                 CVR0_bit            _BIT_ACCESS(CVRCON,0)
// CVRCON<CVR1>
extern volatile __bit                   CVR1                __at(0x7DA9);	// @ (0xFB5 * 8 + 1)
#define                                 CVR1_bit            _BIT_ACCESS(CVRCON,1)
// CVRCON<CVR2>
extern volatile __bit                   CVR2                __at(0x7DAA);	// @ (0xFB5 * 8 + 2)
#define                                 CVR2_bit            _BIT_ACCESS(CVRCON,2)
// CVRCON<CVR3>
extern volatile __bit                   CVR3                __at(0x7DAB);	// @ (0xFB5 * 8 + 3)
#define                                 CVR3_bit            _BIT_ACCESS(CVRCON,3)
// PORTF<CVREF>
extern volatile __bit                   CVREF               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 CVREF_bit           _BIT_ACCESS(PORTF,5)
// CVRCON<CVREN>
extern volatile __bit                   CVREN               __at(0x7DAF);	// @ (0xFB5 * 8 + 7)
#define                                 CVREN_bit           _BIT_ACCESS(CVRCON,7)
// CVRCON<CVROE>
extern volatile __bit                   CVROE               __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 CVROE_bit           _BIT_ACCESS(CVRCON,6)
// CVRCON<CVROEN>
extern volatile __bit                   CVROEN              __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 CVROEN_bit          _BIT_ACCESS(CVRCON,6)
// CVRCON<CVRR>
extern volatile __bit                   CVRR                __at(0x7DAD);	// @ (0xFB5 * 8 + 5)
#define                                 CVRR_bit            _BIT_ACCESS(CVRCON,5)
// CVRCON<CVRSS>
extern volatile __bit                   CVRSS               __at(0x7DAC);	// @ (0xFB5 * 8 + 4)
#define                                 CVRSS_bit           _BIT_ACCESS(CVRCON,4)
// SSPSTAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<DA1>
extern volatile __bit                   DA1                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA1_bit             _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSPSTAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x7EC1);	// @ (0xFD8 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0x7B2C);	// @ (0xF65 * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x7B2D);	// @ (0xF65 * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// CCP1CON<DCCP1X>
extern volatile __bit                   DCCP1X              __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 DCCP1X_bit          _BIT_ACCESS(CCP1CON,5)
// CCP1CON<DCCP1Y>
extern volatile __bit                   DCCP1Y              __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 DCCP1Y_bit          _BIT_ACCESS(CCP1CON,4)
// CCP2CON<DCCP2X>
extern volatile __bit                   DCCP2X              __at(0x7B2D);	// @ (0xF65 * 8 + 5)
#define                                 DCCP2X_bit          _BIT_ACCESS(CCP2CON,5)
// CCP2CON<DCCP2Y>
extern volatile __bit                   DCCP2Y              __at(0x7B2C);	// @ (0xF65 * 8 + 4)
#define                                 DCCP2Y_bit          _BIT_ACCESS(CCP2CON,4)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// PORTC<DT1>
extern volatile __bit                   DT1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT1_bit             _BIT_ACCESS(PORTC,7)
// PORTG<DT2>
extern volatile __bit                   DT2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 DT2_bit             _BIT_ACCESS(PORTG,2)
// BAUDCON1<DTRXP>
extern volatile __bit                   DTRXP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<DTRXP1>
extern volatile __bit                   DTRXP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP1_bit          _BIT_ACCESS(BAUDCON1,5)
// SSPSTAT<D_A>
extern volatile __bit                   D_A                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<D_NOT_A>
extern volatile __bit                   D_NOT_A             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_NOT_A_bit         _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// MEMCON<EBDIS>
extern volatile __bit                   EBDIS               __at(0x7CE7);	// @ (0xF9C * 8 + 7)
#define                                 EBDIS_bit           _BIT_ACCESS(MEMCON,7)
// RCSTA1<FERR>
extern volatile __bit _DEPRECATED       FERR                __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA1,2)
// RCSTA1<FERR1>
extern volatile __bit                   FERR1               __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR1_bit           _BIT_ACCESS(RCSTA1,2)
// RCSTA2<FERR2>
extern volatile __bit                   FERR2               __at(0x7B02);	// @ (0xF60 * 8 + 2)
#define                                 FERR2_bit           _BIT_ACCESS(RCSTA2,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// SSPCON2<GCEN>
extern volatile __bit                   GCEN                __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSPCON2,7)
// SSPCON2<GCEN1>
extern volatile __bit                   GCEN1               __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN1_bit           _BIT_ACCESS(SSPCON2,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// INTCON<GIEH>
extern volatile __bit                   GIEH                __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIEH_bit            _BIT_ACCESS(INTCON,7)
// INTCON<GIEL>
extern volatile __bit                   GIEL                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 GIEL_bit            _BIT_ACCESS(INTCON,6)
// INTCON<GIE_GIEH>
extern volatile __bit                   GIE_GIEH            __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIE_GIEH_bit        _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GODONE>
extern volatile __bit                   GODONE              __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GODONE_bit          _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_NOT_DONE>
extern volatile __bit                   GO_NOT_DONE         __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_NOT_DONE_bit     _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// SSPSTAT<I2C_DAT>
extern volatile __bit                   I2C_DAT             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 I2C_DAT_bit         _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<I2C_READ>
extern volatile __bit                   I2C_READ            __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 I2C_READ_bit        _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<I2C_START>
extern volatile __bit                   I2C_START           __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 I2C_START_bit       _BIT_ACCESS(SSPSTAT,3)
// SSPSTAT<I2C_STOP>
extern volatile __bit                   I2C_STOP            __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 I2C_STOP_bit        _BIT_ACCESS(SSPSTAT,4)
// PSPCON<IBF>
extern volatile __bit                   IBF                 __at(0x7D87);	// @ (0xFB0 * 8 + 7)
#define                                 IBF_bit             _BIT_ACCESS(PSPCON,7)
// PSPCON<IBOV>
extern volatile __bit                   IBOV                __at(0x7D85);	// @ (0xFB0 * 8 + 5)
#define                                 IBOV_bit            _BIT_ACCESS(PSPCON,5)
// OSCCON<IDLEN>
extern volatile __bit                   IDLEN               __at(0x7E9F);	// @ (0xFD3 * 8 + 7)
#define                                 IDLEN_bit           _BIT_ACCESS(OSCCON,7)
// PORTB<INT0>
extern volatile __bit                   INT0                __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 INT0_bit            _BIT_ACCESS(PORTB,0)
// INTCON<INT0E>
extern volatile __bit                   INT0E               __at(0x7F94);	// @ (0xFF2 * 8 + 4)
#define                                 INT0E_bit           _BIT_ACCESS(INTCON,4)
// INTCON<INT0F>
extern volatile __bit                   INT0F               __at(0x7F91);	// @ (0xFF2 * 8 + 1)
#define                                 INT0F_bit           _BIT_ACCESS(INTCON,1)
// INTCON<INT0IE>
extern volatile __bit                   INT0IE              __at(0x7F94);	// @ (0xFF2 * 8 + 4)
#define                                 INT0IE_bit          _BIT_ACCESS(INTCON,4)
// INTCON<INT0IF>
extern volatile __bit                   INT0IF              __at(0x7F91);	// @ (0xFF2 * 8 + 1)
#define                                 INT0IF_bit          _BIT_ACCESS(INTCON,1)
// PORTB<INT1>
extern volatile __bit                   INT1                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 INT1_bit            _BIT_ACCESS(PORTB,1)
// INTCON3<INT1E>
extern volatile __bit                   INT1E               __at(0x7F83);	// @ (0xFF0 * 8 + 3)
#define                                 INT1E_bit           _BIT_ACCESS(INTCON3,3)
// INTCON3<INT1F>
extern volatile __bit                   INT1F               __at(0x7F80);	// @ (0xFF0 * 8 + 0)
#define                                 INT1F_bit           _BIT_ACCESS(INTCON3,0)
// INTCON3<INT1IE>
extern volatile __bit                   INT1IE              __at(0x7F83);	// @ (0xFF0 * 8 + 3)
#define                                 INT1IE_bit          _BIT_ACCESS(INTCON3,3)
// INTCON3<INT1IF>
extern volatile __bit                   INT1IF              __at(0x7F80);	// @ (0xFF0 * 8 + 0)
#define                                 INT1IF_bit          _BIT_ACCESS(INTCON3,0)
// INTCON3<INT1IP>
extern volatile __bit                   INT1IP              __at(0x7F86);	// @ (0xFF0 * 8 + 6)
#define                                 INT1IP_bit          _BIT_ACCESS(INTCON3,6)
// INTCON3<INT1P>
extern volatile __bit                   INT1P               __at(0x7F86);	// @ (0xFF0 * 8 + 6)
#define                                 INT1P_bit           _BIT_ACCESS(INTCON3,6)
// PORTB<INT2>
extern volatile __bit                   INT2                __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 INT2_bit            _BIT_ACCESS(PORTB,2)
// INTCON3<INT2E>
extern volatile __bit                   INT2E               __at(0x7F84);	// @ (0xFF0 * 8 + 4)
#define                                 INT2E_bit           _BIT_ACCESS(INTCON3,4)
// INTCON3<INT2F>
extern volatile __bit                   INT2F               __at(0x7F81);	// @ (0xFF0 * 8 + 1)
#define                                 INT2F_bit           _BIT_ACCESS(INTCON3,1)
// INTCON3<INT2IE>
extern volatile __bit                   INT2IE              __at(0x7F84);	// @ (0xFF0 * 8 + 4)
#define                                 INT2IE_bit          _BIT_ACCESS(INTCON3,4)
// INTCON3<INT2IF>
extern volatile __bit                   INT2IF              __at(0x7F81);	// @ (0xFF0 * 8 + 1)
#define                                 INT2IF_bit          _BIT_ACCESS(INTCON3,1)
// INTCON3<INT2IP>
extern volatile __bit                   INT2IP              __at(0x7F87);	// @ (0xFF0 * 8 + 7)
#define                                 INT2IP_bit          _BIT_ACCESS(INTCON3,7)
// INTCON3<INT2P>
extern volatile __bit                   INT2P               __at(0x7F87);	// @ (0xFF0 * 8 + 7)
#define                                 INT2P_bit           _BIT_ACCESS(INTCON3,7)
// PORTB<INT3>
extern volatile __bit                   INT3                __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 INT3_bit            _BIT_ACCESS(PORTB,3)
// INTCON3<INT3E>
extern volatile __bit                   INT3E               __at(0x7F85);	// @ (0xFF0 * 8 + 5)
#define                                 INT3E_bit           _BIT_ACCESS(INTCON3,5)
// INTCON3<INT3F>
extern volatile __bit                   INT3F               __at(0x7F82);	// @ (0xFF0 * 8 + 2)
#define                                 INT3F_bit           _BIT_ACCESS(INTCON3,2)
// INTCON3<INT3IE>
extern volatile __bit                   INT3IE              __at(0x7F85);	// @ (0xFF0 * 8 + 5)
#define                                 INT3IE_bit          _BIT_ACCESS(INTCON3,5)
// INTCON3<INT3IF>
extern volatile __bit                   INT3IF              __at(0x7F82);	// @ (0xFF0 * 8 + 2)
#define                                 INT3IF_bit          _BIT_ACCESS(INTCON3,2)
// INTCON2<INT3IP>
extern volatile __bit                   INT3IP              __at(0x7F89);	// @ (0xFF1 * 8 + 1)
#define                                 INT3IP_bit          _BIT_ACCESS(INTCON2,1)
// INTCON2<INT3P>
extern volatile __bit                   INT3P               __at(0x7F89);	// @ (0xFF1 * 8 + 1)
#define                                 INT3P_bit           _BIT_ACCESS(INTCON2,1)
// INTCON2<INTEDG0>
extern volatile __bit                   INTEDG0             __at(0x7F8E);	// @ (0xFF1 * 8 + 6)
#define                                 INTEDG0_bit         _BIT_ACCESS(INTCON2,6)
// INTCON2<INTEDG1>
extern volatile __bit                   INTEDG1             __at(0x7F8D);	// @ (0xFF1 * 8 + 5)
#define                                 INTEDG1_bit         _BIT_ACCESS(INTCON2,5)
// INTCON2<INTEDG2>
extern volatile __bit                   INTEDG2             __at(0x7F8C);	// @ (0xFF1 * 8 + 4)
#define                                 INTEDG2_bit         _BIT_ACCESS(INTCON2,4)
// INTCON2<INTEDG3>
extern volatile __bit                   INTEDG3             __at(0x7F8B);	// @ (0xFF1 * 8 + 3)
#define                                 INTEDG3_bit         _BIT_ACCESS(INTCON2,3)
// OSCTUNE<INTSRC>
extern volatile __bit                   INTSRC              __at(0x7CDF);	// @ (0xF9B * 8 + 7)
#define                                 INTSRC_bit          _BIT_ACCESS(OSCTUNE,7)
// OSCCON<IOFS>
extern volatile __bit                   IOFS                __at(0x7E9A);	// @ (0xFD3 * 8 + 2)
#define                                 IOFS_bit            _BIT_ACCESS(OSCCON,2)
// RCON<IPEN>
extern volatile __bit                   IPEN                __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 IPEN_bit            _BIT_ACCESS(RCON,7)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x7E9C);	// @ (0xFD3 * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x7E9D);	// @ (0xFD3 * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x7E9E);	// @ (0xFD3 * 8 + 6)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,6)
// PORTB<KBI0>
extern volatile __bit                   KBI0                __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 KBI0_bit            _BIT_ACCESS(PORTB,4)
// PORTB<KBI1>
extern volatile __bit                   KBI1                __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 KBI1_bit            _BIT_ACCESS(PORTB,5)
// PORTB<KBI2>
extern volatile __bit                   KBI2                __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 KBI2_bit            _BIT_ACCESS(PORTB,6)
// PORTB<KBI3>
extern volatile __bit                   KBI3                __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 KBI3_bit            _BIT_ACCESS(PORTB,7)
// LATA<LA0>
extern volatile __bit                   LA0                 __at(0x7C48);	// @ (0xF89 * 8 + 0)
#define                                 LA0_bit             _BIT_ACCESS(LATA,0)
// LATA<LA1>
extern volatile __bit                   LA1                 __at(0x7C49);	// @ (0xF89 * 8 + 1)
#define                                 LA1_bit             _BIT_ACCESS(LATA,1)
// LATA<LA2>
extern volatile __bit                   LA2                 __at(0x7C4A);	// @ (0xF89 * 8 + 2)
#define                                 LA2_bit             _BIT_ACCESS(LATA,2)
// LATA<LA3>
extern volatile __bit                   LA3                 __at(0x7C4B);	// @ (0xF89 * 8 + 3)
#define                                 LA3_bit             _BIT_ACCESS(LATA,3)
// LATA<LA4>
extern volatile __bit                   LA4                 __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LA4_bit             _BIT_ACCESS(LATA,4)
// LATA<LA5>
extern volatile __bit                   LA5                 __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LA5_bit             _BIT_ACCESS(LATA,5)
// LATA<LA6>
extern volatile __bit                   LA6                 __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 LA6_bit             _BIT_ACCESS(LATA,6)
// LATA<LA7>
extern volatile __bit                   LA7                 __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 LA7_bit             _BIT_ACCESS(LATA,7)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x7C48);	// @ (0xF89 * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x7C49);	// @ (0xF89 * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x7C4A);	// @ (0xF89 * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// LATA<LATA3>
extern volatile __bit                   LATA3               __at(0x7C4B);	// @ (0xF89 * 8 + 3)
#define                                 LATA3_bit           _BIT_ACCESS(LATA,3)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
// LATA<LATA6>
extern volatile __bit                   LATA6               __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 LATA6_bit           _BIT_ACCESS(LATA,6)
// LATA<LATA7>
extern volatile __bit                   LATA7               __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 LATA7_bit           _BIT_ACCESS(LATA,7)
// LATB<LATB0>
extern volatile __bit                   LATB0               __at(0x7C50);	// @ (0xF8A * 8 + 0)
#define                                 LATB0_bit           _BIT_ACCESS(LATB,0)
// LATB<LATB1>
extern volatile __bit                   LATB1               __at(0x7C51);	// @ (0xF8A * 8 + 1)
#define                                 LATB1_bit           _BIT_ACCESS(LATB,1)
// LATB<LATB2>
extern volatile __bit                   LATB2               __at(0x7C52);	// @ (0xF8A * 8 + 2)
#define                                 LATB2_bit           _BIT_ACCESS(LATB,2)
// LATB<LATB3>
extern volatile __bit                   LATB3               __at(0x7C53);	// @ (0xF8A * 8 + 3)
#define                                 LATB3_bit           _BIT_ACCESS(LATB,3)
// LATB<LATB4>
extern volatile __bit                   LATB4               __at(0x7C54);	// @ (0xF8A * 8 + 4)
#define                                 LATB4_bit           _BIT_ACCESS(LATB,4)
// LATB<LATB5>
extern volatile __bit                   LATB5               __at(0x7C55);	// @ (0xF8A * 8 + 5)
#define                                 LATB5_bit           _BIT_ACCESS(LATB,5)
// LATB<LATB6>
extern volatile __bit                   LATB6               __at(0x7C56);	// @ (0xF8A * 8 + 6)
#define                                 LATB6_bit           _BIT_ACCESS(LATB,6)
// LATB<LATB7>
extern volatile __bit                   LATB7               __at(0x7C57);	// @ (0xF8A * 8 + 7)
#define                                 LATB7_bit           _BIT_ACCESS(LATB,7)
// LATC<LATC0>
extern volatile __bit                   LATC0               __at(0x7C58);	// @ (0xF8B * 8 + 0)
#define                                 LATC0_bit           _BIT_ACCESS(LATC,0)
// LATC<LATC1>
extern volatile __bit                   LATC1               __at(0x7C59);	// @ (0xF8B * 8 + 1)
#define                                 LATC1_bit           _BIT_ACCESS(LATC,1)
// LATC<LATC2>
extern volatile __bit                   LATC2               __at(0x7C5A);	// @ (0xF8B * 8 + 2)
#define                                 LATC2_bit           _BIT_ACCESS(LATC,2)
// LATC<LATC3>
extern volatile __bit                   LATC3               __at(0x7C5B);	// @ (0xF8B * 8 + 3)
#define                                 LATC3_bit           _BIT_ACCESS(LATC,3)
// LATC<LATC4>
extern volatile __bit                   LATC4               __at(0x7C5C);	// @ (0xF8B * 8 + 4)
#define                                 LATC4_bit           _BIT_ACCESS(LATC,4)
// LATC<LATC5>
extern volatile __bit                   LATC5               __at(0x7C5D);	// @ (0xF8B * 8 + 5)
#define                                 LATC5_bit           _BIT_ACCESS(LATC,5)
// LATC<LATC6>
extern volatile __bit                   LATC6               __at(0x7C5E);	// @ (0xF8B * 8 + 6)
#define                                 LATC6_bit           _BIT_ACCESS(LATC,6)
// LATC<LATC7>
extern volatile __bit                   LATC7               __at(0x7C5F);	// @ (0xF8B * 8 + 7)
#define                                 LATC7_bit           _BIT_ACCESS(LATC,7)
// LATD<LATD0>
extern volatile __bit                   LATD0               __at(0x7C60);	// @ (0xF8C * 8 + 0)
#define                                 LATD0_bit           _BIT_ACCESS(LATD,0)
// LATD<LATD1>
extern volatile __bit                   LATD1               __at(0x7C61);	// @ (0xF8C * 8 + 1)
#define                                 LATD1_bit           _BIT_ACCESS(LATD,1)
// LATD<LATD2>
extern volatile __bit                   LATD2               __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 LATD2_bit           _BIT_ACCESS(LATD,2)
// LATD<LATD3>
extern volatile __bit                   LATD3               __at(0x7C63);	// @ (0xF8C * 8 + 3)
#define                                 LATD3_bit           _BIT_ACCESS(LATD,3)
// LATD<LATD4>
extern volatile __bit                   LATD4               __at(0x7C64);	// @ (0xF8C * 8 + 4)
#define                                 LATD4_bit           _BIT_ACCESS(LATD,4)
// LATD<LATD5>
extern volatile __bit                   LATD5               __at(0x7C65);	// @ (0xF8C * 8 + 5)
#define                                 LATD5_bit           _BIT_ACCESS(LATD,5)
// LATD<LATD6>
extern volatile __bit                   LATD6               __at(0x7C66);	// @ (0xF8C * 8 + 6)
#define                                 LATD6_bit           _BIT_ACCESS(LATD,6)
// LATD<LATD7>
extern volatile __bit                   LATD7               __at(0x7C67);	// @ (0xF8C * 8 + 7)
#define                                 LATD7_bit           _BIT_ACCESS(LATD,7)
// LATE<LATE0>
extern volatile __bit                   LATE0               __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 LATE0_bit           _BIT_ACCESS(LATE,0)
// LATE<LATE1>
extern volatile __bit                   LATE1               __at(0x7C69);	// @ (0xF8D * 8 + 1)
#define                                 LATE1_bit           _BIT_ACCESS(LATE,1)
// LATE<LATE2>
extern volatile __bit                   LATE2               __at(0x7C6A);	// @ (0xF8D * 8 + 2)
#define                                 LATE2_bit           _BIT_ACCESS(LATE,2)
// LATE<LATE3>
extern volatile __bit                   LATE3               __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 LATE3_bit           _BIT_ACCESS(LATE,3)
// LATE<LATE4>
extern volatile __bit                   LATE4               __at(0x7C6C);	// @ (0xF8D * 8 + 4)
#define                                 LATE4_bit           _BIT_ACCESS(LATE,4)
// LATE<LATE5>
extern volatile __bit                   LATE5               __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 LATE5_bit           _BIT_ACCESS(LATE,5)
// LATE<LATE6>
extern volatile __bit                   LATE6               __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 LATE6_bit           _BIT_ACCESS(LATE,6)
// LATE<LATE7>
extern volatile __bit                   LATE7               __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 LATE7_bit           _BIT_ACCESS(LATE,7)
// LATF<LATF1>
extern volatile __bit                   LATF1               __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 LATF1_bit           _BIT_ACCESS(LATF,1)
// LATF<LATF2>
extern volatile __bit                   LATF2               __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 LATF2_bit           _BIT_ACCESS(LATF,2)
// LATF<LATF3>
extern volatile __bit                   LATF3               __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 LATF3_bit           _BIT_ACCESS(LATF,3)
// LATF<LATF4>
extern volatile __bit                   LATF4               __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 LATF4_bit           _BIT_ACCESS(LATF,4)
// LATF<LATF5>
extern volatile __bit                   LATF5               __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 LATF5_bit           _BIT_ACCESS(LATF,5)
// LATF<LATF6>
extern volatile __bit                   LATF6               __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 LATF6_bit           _BIT_ACCESS(LATF,6)
// LATF<LATF7>
extern volatile __bit                   LATF7               __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 LATF7_bit           _BIT_ACCESS(LATF,7)
// LATG<LATG0>
extern volatile __bit                   LATG0               __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 LATG0_bit           _BIT_ACCESS(LATG,0)
// LATG<LATG1>
extern volatile __bit                   LATG1               __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 LATG1_bit           _BIT_ACCESS(LATG,1)
// LATG<LATG2>
extern volatile __bit                   LATG2               __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 LATG2_bit           _BIT_ACCESS(LATG,2)
// LATG<LATG3>
extern volatile __bit                   LATG3               __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 LATG3_bit           _BIT_ACCESS(LATG,3)
// LATG<LATG4>
extern volatile __bit                   LATG4               __at(0x7C7C);	// @ (0xF8F * 8 + 4)
#define                                 LATG4_bit           _BIT_ACCESS(LATG,4)
// LATH<LATH0>
extern volatile __bit                   LATH0               __at(0x7C80);	// @ (0xF90 * 8 + 0)
#define                                 LATH0_bit           _BIT_ACCESS(LATH,0)
// LATH<LATH1>
extern volatile __bit                   LATH1               __at(0x7C81);	// @ (0xF90 * 8 + 1)
#define                                 LATH1_bit           _BIT_ACCESS(LATH,1)
// LATH<LATH2>
extern volatile __bit                   LATH2               __at(0x7C82);	// @ (0xF90 * 8 + 2)
#define                                 LATH2_bit           _BIT_ACCESS(LATH,2)
// LATH<LATH3>
extern volatile __bit                   LATH3               __at(0x7C83);	// @ (0xF90 * 8 + 3)
#define                                 LATH3_bit           _BIT_ACCESS(LATH,3)
// LATH<LATH4>
extern volatile __bit                   LATH4               __at(0x7C84);	// @ (0xF90 * 8 + 4)
#define                                 LATH4_bit           _BIT_ACCESS(LATH,4)
// LATH<LATH5>
extern volatile __bit                   LATH5               __at(0x7C85);	// @ (0xF90 * 8 + 5)
#define                                 LATH5_bit           _BIT_ACCESS(LATH,5)
// LATH<LATH6>
extern volatile __bit                   LATH6               __at(0x7C86);	// @ (0xF90 * 8 + 6)
#define                                 LATH6_bit           _BIT_ACCESS(LATH,6)
// LATH<LATH7>
extern volatile __bit                   LATH7               __at(0x7C87);	// @ (0xF90 * 8 + 7)
#define                                 LATH7_bit           _BIT_ACCESS(LATH,7)
// LATJ<LATJ0>
extern volatile __bit                   LATJ0               __at(0x7C88);	// @ (0xF91 * 8 + 0)
#define                                 LATJ0_bit           _BIT_ACCESS(LATJ,0)
// LATJ<LATJ1>
extern volatile __bit                   LATJ1               __at(0x7C89);	// @ (0xF91 * 8 + 1)
#define                                 LATJ1_bit           _BIT_ACCESS(LATJ,1)
// LATJ<LATJ2>
extern volatile __bit                   LATJ2               __at(0x7C8A);	// @ (0xF91 * 8 + 2)
#define                                 LATJ2_bit           _BIT_ACCESS(LATJ,2)
// LATJ<LATJ3>
extern volatile __bit                   LATJ3               __at(0x7C8B);	// @ (0xF91 * 8 + 3)
#define                                 LATJ3_bit           _BIT_ACCESS(LATJ,3)
// LATJ<LATJ4>
extern volatile __bit                   LATJ4               __at(0x7C8C);	// @ (0xF91 * 8 + 4)
#define                                 LATJ4_bit           _BIT_ACCESS(LATJ,4)
// LATJ<LATJ5>
extern volatile __bit                   LATJ5               __at(0x7C8D);	// @ (0xF91 * 8 + 5)
#define                                 LATJ5_bit           _BIT_ACCESS(LATJ,5)
// LATJ<LATJ6>
extern volatile __bit                   LATJ6               __at(0x7C8E);	// @ (0xF91 * 8 + 6)
#define                                 LATJ6_bit           _BIT_ACCESS(LATJ,6)
// LATJ<LATJ7>
extern volatile __bit                   LATJ7               __at(0x7C8F);	// @ (0xF91 * 8 + 7)
#define                                 LATJ7_bit           _BIT_ACCESS(LATJ,7)
// PORTJ<LB>
extern volatile __bit                   LB                  __at(0x7C46);	// @ (0xF88 * 8 + 6)
#define                                 LB_bit              _BIT_ACCESS(PORTJ,6)
// LATB<LB0>
extern volatile __bit                   LB0                 __at(0x7C50);	// @ (0xF8A * 8 + 0)
#define                                 LB0_bit             _BIT_ACCESS(LATB,0)
// LATB<LB1>
extern volatile __bit                   LB1                 __at(0x7C51);	// @ (0xF8A * 8 + 1)
#define                                 LB1_bit             _BIT_ACCESS(LATB,1)
// LATB<LB2>
extern volatile __bit                   LB2                 __at(0x7C52);	// @ (0xF8A * 8 + 2)
#define                                 LB2_bit             _BIT_ACCESS(LATB,2)
// LATB<LB3>
extern volatile __bit                   LB3                 __at(0x7C53);	// @ (0xF8A * 8 + 3)
#define                                 LB3_bit             _BIT_ACCESS(LATB,3)
// LATB<LB4>
extern volatile __bit                   LB4                 __at(0x7C54);	// @ (0xF8A * 8 + 4)
#define                                 LB4_bit             _BIT_ACCESS(LATB,4)
// LATB<LB5>
extern volatile __bit                   LB5                 __at(0x7C55);	// @ (0xF8A * 8 + 5)
#define                                 LB5_bit             _BIT_ACCESS(LATB,5)
// LATB<LB6>
extern volatile __bit                   LB6                 __at(0x7C56);	// @ (0xF8A * 8 + 6)
#define                                 LB6_bit             _BIT_ACCESS(LATB,6)
// LATB<LB7>
extern volatile __bit                   LB7                 __at(0x7C57);	// @ (0xF8A * 8 + 7)
#define                                 LB7_bit             _BIT_ACCESS(LATB,7)
// LATC<LC0>
extern volatile __bit                   LC0                 __at(0x7C58);	// @ (0xF8B * 8 + 0)
#define                                 LC0_bit             _BIT_ACCESS(LATC,0)
// LATC<LC1>
extern volatile __bit                   LC1                 __at(0x7C59);	// @ (0xF8B * 8 + 1)
#define                                 LC1_bit             _BIT_ACCESS(LATC,1)
// LATC<LC2>
extern volatile __bit                   LC2                 __at(0x7C5A);	// @ (0xF8B * 8 + 2)
#define                                 LC2_bit             _BIT_ACCESS(LATC,2)
// LATC<LC3>
extern volatile __bit                   LC3                 __at(0x7C5B);	// @ (0xF8B * 8 + 3)
#define                                 LC3_bit             _BIT_ACCESS(LATC,3)
// LATC<LC4>
extern volatile __bit                   LC4                 __at(0x7C5C);	// @ (0xF8B * 8 + 4)
#define                                 LC4_bit             _BIT_ACCESS(LATC,4)
// LATC<LC5>
extern volatile __bit                   LC5                 __at(0x7C5D);	// @ (0xF8B * 8 + 5)
#define                                 LC5_bit             _BIT_ACCESS(LATC,5)
// LATC<LC6>
extern volatile __bit                   LC6                 __at(0x7C5E);	// @ (0xF8B * 8 + 6)
#define                                 LC6_bit             _BIT_ACCESS(LATC,6)
// LATC<LC7>
extern volatile __bit                   LC7                 __at(0x7C5F);	// @ (0xF8B * 8 + 7)
#define                                 LC7_bit             _BIT_ACCESS(LATC,7)
// LATD<LD0>
extern volatile __bit                   LD0                 __at(0x7C60);	// @ (0xF8C * 8 + 0)
#define                                 LD0_bit             _BIT_ACCESS(LATD,0)
// LATD<LD1>
extern volatile __bit                   LD1                 __at(0x7C61);	// @ (0xF8C * 8 + 1)
#define                                 LD1_bit             _BIT_ACCESS(LATD,1)
// LATD<LD2>
extern volatile __bit                   LD2                 __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 LD2_bit             _BIT_ACCESS(LATD,2)
// LATD<LD3>
extern volatile __bit                   LD3                 __at(0x7C63);	// @ (0xF8C * 8 + 3)
#define                                 LD3_bit             _BIT_ACCESS(LATD,3)
// LATD<LD4>
extern volatile __bit                   LD4                 __at(0x7C64);	// @ (0xF8C * 8 + 4)
#define                                 LD4_bit             _BIT_ACCESS(LATD,4)
// LATD<LD5>
extern volatile __bit                   LD5                 __at(0x7C65);	// @ (0xF8C * 8 + 5)
#define                                 LD5_bit             _BIT_ACCESS(LATD,5)
// LATD<LD6>
extern volatile __bit                   LD6                 __at(0x7C66);	// @ (0xF8C * 8 + 6)
#define                                 LD6_bit             _BIT_ACCESS(LATD,6)
// LATD<LD7>
extern volatile __bit                   LD7                 __at(0x7C67);	// @ (0xF8C * 8 + 7)
#define                                 LD7_bit             _BIT_ACCESS(LATD,7)
// LATE<LE0>
extern volatile __bit                   LE0                 __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 LE0_bit             _BIT_ACCESS(LATE,0)
// LATE<LE1>
extern volatile __bit                   LE1                 __at(0x7C69);	// @ (0xF8D * 8 + 1)
#define                                 LE1_bit             _BIT_ACCESS(LATE,1)
// LATE<LE2>
extern volatile __bit                   LE2                 __at(0x7C6A);	// @ (0xF8D * 8 + 2)
#define                                 LE2_bit             _BIT_ACCESS(LATE,2)
// LATE<LE3>
extern volatile __bit                   LE3                 __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 LE3_bit             _BIT_ACCESS(LATE,3)
// LATE<LE4>
extern volatile __bit                   LE4                 __at(0x7C6C);	// @ (0xF8D * 8 + 4)
#define                                 LE4_bit             _BIT_ACCESS(LATE,4)
// LATE<LE5>
extern volatile __bit                   LE5                 __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 LE5_bit             _BIT_ACCESS(LATE,5)
// LATE<LE6>
extern volatile __bit                   LE6                 __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 LE6_bit             _BIT_ACCESS(LATE,6)
// LATE<LE7>
extern volatile __bit                   LE7                 __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 LE7_bit             _BIT_ACCESS(LATE,7)
// LATF<LF1>
extern volatile __bit                   LF1                 __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 LF1_bit             _BIT_ACCESS(LATF,1)
// LATF<LF2>
extern volatile __bit                   LF2                 __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 LF2_bit             _BIT_ACCESS(LATF,2)
// LATF<LF3>
extern volatile __bit                   LF3                 __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 LF3_bit             _BIT_ACCESS(LATF,3)
// LATF<LF4>
extern volatile __bit                   LF4                 __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 LF4_bit             _BIT_ACCESS(LATF,4)
// LATF<LF5>
extern volatile __bit                   LF5                 __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 LF5_bit             _BIT_ACCESS(LATF,5)
// LATF<LF6>
extern volatile __bit                   LF6                 __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 LF6_bit             _BIT_ACCESS(LATF,6)
// LATF<LF7>
extern volatile __bit                   LF7                 __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 LF7_bit             _BIT_ACCESS(LATF,7)
// LATG<LG0>
extern volatile __bit                   LG0                 __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 LG0_bit             _BIT_ACCESS(LATG,0)
// LATG<LG1>
extern volatile __bit                   LG1                 __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 LG1_bit             _BIT_ACCESS(LATG,1)
// LATG<LG2>
extern volatile __bit                   LG2                 __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 LG2_bit             _BIT_ACCESS(LATG,2)
// LATG<LG3>
extern volatile __bit                   LG3                 __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 LG3_bit             _BIT_ACCESS(LATG,3)
// LATG<LG4>
extern volatile __bit                   LG4                 __at(0x7C7C);	// @ (0xF8F * 8 + 4)
#define                                 LG4_bit             _BIT_ACCESS(LATG,4)
// LATH<LH0>
extern volatile __bit                   LH0                 __at(0x7C80);	// @ (0xF90 * 8 + 0)
#define                                 LH0_bit             _BIT_ACCESS(LATH,0)
// LATH<LH1>
extern volatile __bit                   LH1                 __at(0x7C81);	// @ (0xF90 * 8 + 1)
#define                                 LH1_bit             _BIT_ACCESS(LATH,1)
// LATH<LH2>
extern volatile __bit                   LH2                 __at(0x7C82);	// @ (0xF90 * 8 + 2)
#define                                 LH2_bit             _BIT_ACCESS(LATH,2)
// LATH<LH3>
extern volatile __bit                   LH3                 __at(0x7C83);	// @ (0xF90 * 8 + 3)
#define                                 LH3_bit             _BIT_ACCESS(LATH,3)
// LATH<LH4>
extern volatile __bit                   LH4                 __at(0x7C84);	// @ (0xF90 * 8 + 4)
#define                                 LH4_bit             _BIT_ACCESS(LATH,4)
// LATH<LH5>
extern volatile __bit                   LH5                 __at(0x7C85);	// @ (0xF90 * 8 + 5)
#define                                 LH5_bit             _BIT_ACCESS(LATH,5)
// LATH<LH6>
extern volatile __bit                   LH6                 __at(0x7C86);	// @ (0xF90 * 8 + 6)
#define                                 LH6_bit             _BIT_ACCESS(LATH,6)
// LATH<LH7>
extern volatile __bit                   LH7                 __at(0x7C87);	// @ (0xF90 * 8 + 7)
#define                                 LH7_bit             _BIT_ACCESS(LATH,7)
// LATJ<LJ0>
extern volatile __bit                   LJ0                 __at(0x7C88);	// @ (0xF91 * 8 + 0)
#define                                 LJ0_bit             _BIT_ACCESS(LATJ,0)
// LATJ<LJ1>
extern volatile __bit                   LJ1                 __at(0x7C89);	// @ (0xF91 * 8 + 1)
#define                                 LJ1_bit             _BIT_ACCESS(LATJ,1)
// LATJ<LJ2>
extern volatile __bit                   LJ2                 __at(0x7C8A);	// @ (0xF91 * 8 + 2)
#define                                 LJ2_bit             _BIT_ACCESS(LATJ,2)
// LATJ<LJ3>
extern volatile __bit                   LJ3                 __at(0x7C8B);	// @ (0xF91 * 8 + 3)
#define                                 LJ3_bit             _BIT_ACCESS(LATJ,3)
// LATJ<LJ4>
extern volatile __bit                   LJ4                 __at(0x7C8C);	// @ (0xF91 * 8 + 4)
#define                                 LJ4_bit             _BIT_ACCESS(LATJ,4)
// LATJ<LJ5>
extern volatile __bit                   LJ5                 __at(0x7C8D);	// @ (0xF91 * 8 + 5)
#define                                 LJ5_bit             _BIT_ACCESS(LATJ,5)
// LATJ<LJ6>
extern volatile __bit                   LJ6                 __at(0x7C8E);	// @ (0xF91 * 8 + 6)
#define                                 LJ6_bit             _BIT_ACCESS(LATJ,6)
// LATJ<LJ7>
extern volatile __bit                   LJ7                 __at(0x7C8F);	// @ (0xF91 * 8 + 7)
#define                                 LJ7_bit             _BIT_ACCESS(LATJ,7)
// PIE2<LVDIE>
extern volatile __bit                   LVDIE               __at(0x7D02);	// @ (0xFA0 * 8 + 2)
#define                                 LVDIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<LVDIF>
extern volatile __bit                   LVDIF               __at(0x7D0A);	// @ (0xFA1 * 8 + 2)
#define                                 LVDIF_bit           _BIT_ACCESS(PIR2,2)
// PORTA<LVDIN>
extern volatile __bit                   LVDIN               __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 LVDIN_bit           _BIT_ACCESS(PORTA,5)
// IPR2<LVDIP>
extern volatile __bit                   LVDIP               __at(0x7D12);	// @ (0xFA2 * 8 + 2)
#define                                 LVDIP_bit           _BIT_ACCESS(IPR2,2)
// SSPADD<MSK0>
extern volatile __bit                   MSK0                __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSPADD,0)
// SSPADD<MSK01>
extern volatile __bit                   MSK01               __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK01_bit           _BIT_ACCESS(SSPADD,0)
// SSPADD<MSK1>
extern volatile __bit                   MSK1                __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSPADD,1)
// SSPADD<MSK11>
extern volatile __bit                   MSK11               __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK11_bit           _BIT_ACCESS(SSPADD,1)
// SSPADD<MSK2>
extern volatile __bit                   MSK2                __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSPADD,2)
// SSPADD<MSK21>
extern volatile __bit                   MSK21               __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK21_bit           _BIT_ACCESS(SSPADD,2)
// SSPADD<MSK3>
extern volatile __bit                   MSK3                __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSPADD,3)
// SSPADD<MSK31>
extern volatile __bit                   MSK31               __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK31_bit           _BIT_ACCESS(SSPADD,3)
// SSPADD<MSK4>
extern volatile __bit                   MSK4                __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSPADD,4)
// SSPADD<MSK41>
extern volatile __bit                   MSK41               __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK41_bit           _BIT_ACCESS(SSPADD,4)
// SSPADD<MSK5>
extern volatile __bit                   MSK5                __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSPADD,5)
// SSPADD<MSK51>
extern volatile __bit                   MSK51               __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK51_bit           _BIT_ACCESS(SSPADD,5)
// SSPADD<MSK6>
extern volatile __bit                   MSK6                __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSPADD,6)
// SSPADD<MSK61>
extern volatile __bit                   MSK61               __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK61_bit           _BIT_ACCESS(SSPADD,6)
// SSPADD<MSK7>
extern volatile __bit                   MSK7                __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSPADD,7)
// SSPADD<MSK71>
extern volatile __bit                   MSK71               __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK71_bit           _BIT_ACCESS(SSPADD,7)
// STATUS<NEGATIVE>
extern volatile __bit                   NEGATIVE            __at(0x7EC4);	// @ (0xFD8 * 8 + 4)
#define                                 NEGATIVE_bit        _BIT_ACCESS(STATUS,4)
// SSPSTAT<NOT_A>
extern volatile __bit                   NOT_A               __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_A_bit           _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<NOT_ADDRESS>
extern volatile __bit                   NOT_ADDRESS         __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_ADDRESS_bit     _BIT_ACCESS(SSPSTAT,5)
// RCON<NOT_BOR>
extern volatile __bit                   NOT_BOR             __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 NOT_BOR_bit         _BIT_ACCESS(RCON,0)
// RCON<NOT_CM>
extern volatile __bit                   NOT_CM              __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 NOT_CM_bit          _BIT_ACCESS(RCON,5)
// ADCON0<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 NOT_DONE_bit        _BIT_ACCESS(ADCON0,1)
// RCON<NOT_PD>
extern volatile __bit                   NOT_PD              __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 NOT_PD_bit          _BIT_ACCESS(RCON,2)
// RCON<NOT_POR>
extern volatile __bit                   NOT_POR             __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 NOT_POR_bit         _BIT_ACCESS(RCON,1)
// INTCON2<NOT_RBPU>
extern volatile __bit                   NOT_RBPU            __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 NOT_RBPU_bit        _BIT_ACCESS(INTCON2,7)
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          _BIT_ACCESS(RCON,4)
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// T3CON<NOT_T3SYNC>
extern volatile __bit                   NOT_T3SYNC          __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 NOT_T3SYNC_bit      _BIT_ACCESS(T3CON,2)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// SSPSTAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       _BIT_ACCESS(SSPSTAT,2)
// PSPCON<OBF>
extern volatile __bit                   OBF                 __at(0x7D86);	// @ (0xFB0 * 8 + 6)
#define                                 OBF_bit             _BIT_ACCESS(PSPCON,6)
// PORTJ<OE>
extern volatile __bit                   OE                  __at(0x7C41);	// @ (0xF88 * 8 + 1)
#define                                 OE_bit              _BIT_ACCESS(PORTJ,1)
// RCSTA1<OERR>
extern volatile __bit _DEPRECATED       OERR                __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA1,1)
// RCSTA1<OERR1>
extern volatile __bit                   OERR1               __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR1_bit           _BIT_ACCESS(RCSTA1,1)
// RCSTA2<OERR2>
extern volatile __bit                   OERR2               __at(0x7B01);	// @ (0xF60 * 8 + 1)
#define                                 OERR2_bit           _BIT_ACCESS(RCSTA2,1)
// PORTA<OSC1>
extern volatile __bit                   OSC1                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 OSC1_bit            _BIT_ACCESS(PORTA,7)
// PORTA<OSC2>
extern volatile __bit                   OSC2                __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 OSC2_bit            _BIT_ACCESS(PORTA,6)
// PIE2<OSCFIE>
extern volatile __bit                   OSCFIE              __at(0x7D07);	// @ (0xFA0 * 8 + 7)
#define                                 OSCFIE_bit          _BIT_ACCESS(PIE2,7)
// PIR2<OSCFIF>
extern volatile __bit                   OSCFIF              __at(0x7D0F);	// @ (0xFA1 * 8 + 7)
#define                                 OSCFIF_bit          _BIT_ACCESS(PIR2,7)
// IPR2<OSCFIP>
extern volatile __bit                   OSCFIP              __at(0x7D17);	// @ (0xFA2 * 8 + 7)
#define                                 OSCFIP_bit          _BIT_ACCESS(IPR2,7)
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x7E9B);	// @ (0xFD3 * 8 + 3)
#define                                 OSTS_bit            _BIT_ACCESS(OSCCON,3)
// STATUS<OV>
extern volatile __bit                   OV                  __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OV_bit              _BIT_ACCESS(STATUS,3)
// STATUS<OVERFLOW>
extern volatile __bit                   OVERFLOW            __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OVERFLOW_bit        _BIT_ACCESS(STATUS,3)
// PORTC<PA1>
extern volatile __bit                   _PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)  // Note: Changed by MikroE
#define                                 PA1_bit             _BIT_ACCESS(PORTC,2)
// PORTC<PA2>
extern volatile __bit                   _PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)  // Note: Changed by MikroE
#define                                 PA2_bit             _BIT_ACCESS(PORTC,1)
// PORTE<PA2E>
extern volatile __bit                   PA2E                __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 PA2E_bit            _BIT_ACCESS(PORTE,7)
// PORTH<PB1>
extern volatile __bit                   _PB1                 __at(0x7C3F);	// @ (0xF87 * 8 + 7)  // Note: Changed by MikroE
#define                                 PB1_bit             _BIT_ACCESS(PORTH,7)
// PORTE<PB1E>
extern volatile __bit                   PB1E                __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 PB1E_bit            _BIT_ACCESS(PORTE,6)
// PORTE<PB2>
extern volatile __bit                   _PB2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)  // Note: Changed by MikroE
#define                                 PB2_bit             _BIT_ACCESS(PORTE,2)
// PORTH<PB3>
extern volatile __bit                   _PB3                 __at(0x7C3D);	// @ (0xF87 * 8 + 5)  // Note: Changed by MikroE
#define                                 PB3_bit             _BIT_ACCESS(PORTH,5)
// PORTE<PB3E>
extern volatile __bit                   PB3E                __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 PB3E_bit            _BIT_ACCESS(PORTE,4)
// PORTH<PC1>
extern volatile __bit                   _PC1                 __at(0x7C3E);	// @ (0xF87 * 8 + 6)  // Note: Changed by MikroE
#define                                 PC1_bit             _BIT_ACCESS(PORTH,6)
// PORTE<PC1E>
extern volatile __bit                   PC1E                __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 PC1E_bit            _BIT_ACCESS(PORTE,5)
// PORTE<PC2>
extern volatile __bit                   _PC2                 __at(0x7C21);	// @ (0xF84 * 8 + 1)  // Note: Changed by MikroE
#define                                 PC2_bit             _BIT_ACCESS(PORTE,1)
// PORTH<PC3>
extern volatile __bit                   _PC3                 __at(0x7C3C);	// @ (0xF87 * 8 + 4)  // Note: Changed by MikroE
#define                                 PC3_bit             _BIT_ACCESS(PORTH,4)
// PORTE<PC3E>
extern volatile __bit                   PC3E                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 PC3E_bit            _BIT_ACCESS(PORTE,3)
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ADCON1,2)
// ADCON1<PCFG3>
extern volatile __bit                   PCFG3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 PCFG3_bit           _BIT_ACCESS(ADCON1,3)
// RCON<PD>
extern volatile __bit                   PD                  __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 PD_bit              _BIT_ACCESS(RCON,2)
// PORTE<PD2>
extern volatile __bit                   _PD2                 __at(0x7C20);	// @ (0xF84 * 8 + 0)  // Note: Changed by MikroE
#define                                 PD2_bit             _BIT_ACCESS(PORTE,0)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// INTCON<PEIE_GIEL>
extern volatile __bit                   PEIE_GIEL           __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_GIEL_bit       _BIT_ACCESS(INTCON,6)
// SSPCON2<PEN>
extern volatile __bit                   PEN                 __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSPCON2,2)
// SSPCON2<PEN1>
extern volatile __bit                   PEN1                __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN1_bit            _BIT_ACCESS(SSPCON2,2)
// PORTB<PGC>
extern volatile __bit                   PGC                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 PGC_bit             _BIT_ACCESS(PORTB,6)
// PORTB<PGD>
extern volatile __bit                   PGD                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 PGD_bit             _BIT_ACCESS(PORTB,7)
// OSCTUNE<PLLEN>
extern volatile __bit                   PLLEN               __at(0x7CDE);	// @ (0xF9B * 8 + 6)
#define                                 PLLEN_bit           _BIT_ACCESS(OSCTUNE,6)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
// PORTD<PSP0>
extern volatile __bit                   PSP0                __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 PSP0_bit            _BIT_ACCESS(PORTD,0)
// PORTD<PSP1>
extern volatile __bit                   PSP1                __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 PSP1_bit            _BIT_ACCESS(PORTD,1)
// PORTD<PSP2>
extern volatile __bit                   PSP2                __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 PSP2_bit            _BIT_ACCESS(PORTD,2)
// PORTD<PSP3>
extern volatile __bit                   PSP3                __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 PSP3_bit            _BIT_ACCESS(PORTD,3)
// PORTD<PSP4>
extern volatile __bit                   PSP4                __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 PSP4_bit            _BIT_ACCESS(PORTD,4)
// PORTD<PSP5>
extern volatile __bit                   PSP5                __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 PSP5_bit            _BIT_ACCESS(PORTD,5)
// PORTD<PSP6>
extern volatile __bit                   PSP6                __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 PSP6_bit            _BIT_ACCESS(PORTD,6)
// PORTD<PSP7>
extern volatile __bit                   PSP7                __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 PSP7_bit            _BIT_ACCESS(PORTD,7)
// PIE1<PSPIE>
extern volatile __bit                   PSPIE               __at(0x7CEF);	// @ (0xF9D * 8 + 7)
#define                                 PSPIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<PSPIF>
extern volatile __bit                   PSPIF               __at(0x7CF7);	// @ (0xF9E * 8 + 7)
#define                                 PSPIF_bit           _BIT_ACCESS(PIR1,7)
// IPR1<PSPIP>
extern volatile __bit                   PSPIP               __at(0x7CFF);	// @ (0xF9F * 8 + 7)
#define                                 PSPIP_bit           _BIT_ACCESS(IPR1,7)
// PSPCON<PSPMODE>
extern volatile __bit                   PSPMODE             __at(0x7D84);	// @ (0xFB0 * 8 + 4)
#define                                 PSPMODE_bit         _BIT_ACCESS(PSPCON,4)
// PORTA<RA0>
extern volatile __bit _DEPRECATED       RA0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit _DEPRECATED       RA1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit _DEPRECATED       RA2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit _DEPRECATED       RA3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit _DEPRECATED       RA4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit _DEPRECATED       RA5                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// PORTA<RA6>
extern volatile __bit _DEPRECATED       RA6                 __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTA,6)
// PORTA<RA7>
extern volatile __bit _DEPRECATED       RA7                 __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RA7_bit             _BIT_ACCESS(PORTA,7)
// PORTB<RB0>
extern volatile __bit _DEPRECATED       RB0                 __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit _DEPRECATED       RB1                 __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit _DEPRECATED       RB2                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit _DEPRECATED       RB3                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RB4>
extern volatile __bit _DEPRECATED       RB4                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit _DEPRECATED       RB5                 __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RB6>
extern volatile __bit _DEPRECATED       RB6                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit _DEPRECATED       RB7                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// INTCON<RBIE>
extern volatile __bit                   RBIE                __at(0x7F93);	// @ (0xFF2 * 8 + 3)
#define                                 RBIE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<RBIF>
extern volatile __bit                   RBIF                __at(0x7F90);	// @ (0xFF2 * 8 + 0)
#define                                 RBIF_bit            _BIT_ACCESS(INTCON,0)
// INTCON2<RBIP>
extern volatile __bit                   RBIP                __at(0x7F88);	// @ (0xFF1 * 8 + 0)
#define                                 RBIP_bit            _BIT_ACCESS(INTCON2,0)
// INTCON2<RBPU>
extern volatile __bit                   RBPU                __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 RBPU_bit            _BIT_ACCESS(INTCON2,7)
// PORTC<RC0>
extern volatile __bit _DEPRECATED       RC0                 __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit _DEPRECATED       RC1                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RC1IE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RC1IF_bit           _BIT_ACCESS(PIR1,5)
// IPR1<RC1IP>
extern volatile __bit                   RC1IP               __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RC1IP_bit           _BIT_ACCESS(IPR1,5)
// PORTC<RC2>
extern volatile __bit _DEPRECATED       RC2                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PIE3<RC2IE>
extern volatile __bit                   RC2IE               __at(0x7D1D);	// @ (0xFA3 * 8 + 5)
#define                                 RC2IE_bit           _BIT_ACCESS(PIE3,5)
// PIR3<RC2IF>
extern volatile __bit                   RC2IF               __at(0x7D25);	// @ (0xFA4 * 8 + 5)
#define                                 RC2IF_bit           _BIT_ACCESS(PIR3,5)
// IPR3<RC2IP>
extern volatile __bit                   RC2IP               __at(0x7D2D);	// @ (0xFA5 * 8 + 5)
#define                                 RC2IP_bit           _BIT_ACCESS(IPR3,5)
// PORTC<RC3>
extern volatile __bit _DEPRECATED       RC3                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit _DEPRECATED       RC4                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit _DEPRECATED       RC5                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PORTC<RC6>
extern volatile __bit _DEPRECATED       RC6                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit _DEPRECATED       RC7                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// RCSTA2<RC8_92>
extern volatile __bit                   RC8_92              __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 RC8_92_bit          _BIT_ACCESS(RCSTA2,6)
// RCSTA2<RC92>
extern volatile __bit                   RC92                __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 RC92_bit            _BIT_ACCESS(RCSTA2,6)
// RCSTA2<RCD82>
extern volatile __bit                   RCD82               __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 RCD82_bit           _BIT_ACCESS(RCSTA2,0)
// SSPCON2<RCEN>
extern volatile __bit                   RCEN                __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSPCON2,3)
// SSPCON2<RCEN1>
extern volatile __bit                   RCEN1               __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN1_bit           _BIT_ACCESS(SSPCON2,3)
// BAUDCON1<RCIDL>
extern volatile __bit                   RCIDL               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCIDL1>
extern volatile __bit                   RCIDL1              __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL1_bit          _BIT_ACCESS(BAUDCON1,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// IPR1<RCIP>
extern volatile __bit                   RCIP                __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RCIP_bit            _BIT_ACCESS(IPR1,5)
// BAUDCON1<RCMT>
extern volatile __bit                   RCMT                __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCMT_bit            _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCMT1>
extern volatile __bit                   RCMT1               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCMT1_bit           _BIT_ACCESS(BAUDCON1,6)
// PORTE<RD>
extern volatile __bit                   RD                  __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PORTE,0)
// PORTD<RD0>
extern volatile __bit _DEPRECATED       RD0                 __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit _DEPRECATED       RD1                 __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// T3CON<RD163>
extern volatile __bit                   RD163               __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 RD163_bit           _BIT_ACCESS(T3CON,7)
// PORTD<RD2>
extern volatile __bit _DEPRECATED       RD2                 __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 RD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<RD3>
extern volatile __bit _DEPRECATED       RD3                 __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 RD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<RD4>
extern volatile __bit _DEPRECATED       RD4                 __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 RD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<RD5>
extern volatile __bit _DEPRECATED       RD5                 __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 RD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<RD6>
extern volatile __bit _DEPRECATED       RD6                 __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 RD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<RD7>
extern volatile __bit _DEPRECATED       RD7                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 RD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<RDE>
extern volatile __bit                   RDE                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RDE_bit             _BIT_ACCESS(PORTE,0)
// PORTG<RDPU>
extern volatile __bit                   RDPU                __at(0x7C37);	// @ (0xF86 * 8 + 7)
#define                                 RDPU_bit            _BIT_ACCESS(PORTG,7)
// PORTE<RE0>
extern volatile __bit _DEPRECATED       RE0                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit _DEPRECATED       RE1                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE2>
extern volatile __bit _DEPRECATED       RE2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 RE2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<RE3>
extern volatile __bit _DEPRECATED       RE3                 __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// PORTE<RE4>
extern volatile __bit _DEPRECATED       RE4                 __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 RE4_bit             _BIT_ACCESS(PORTE,4)
// PORTE<RE5>
extern volatile __bit _DEPRECATED       RE5                 __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 RE5_bit             _BIT_ACCESS(PORTE,5)
// PORTE<RE6>
extern volatile __bit _DEPRECATED       RE6                 __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 RE6_bit             _BIT_ACCESS(PORTE,6)
// PORTE<RE7>
extern volatile __bit _DEPRECATED       RE7                 __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 RE7_bit             _BIT_ACCESS(PORTE,7)
// SSPSTAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSPSTAT,2)
// WDTCON<REGSLP>
extern volatile __bit                   REGSLP              __at(0x7E8F);	// @ (0xFD1 * 8 + 7)
#define                                 REGSLP_bit          _BIT_ACCESS(WDTCON,7)
// PORTG<REPU>
extern volatile __bit                   REPU                __at(0x7C36);	// @ (0xF86 * 8 + 6)
#define                                 REPU_bit            _BIT_ACCESS(PORTG,6)
// PORTF<RF1>
extern volatile __bit _DEPRECATED       RF1                 __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 RF1_bit             _BIT_ACCESS(PORTF,1)
// PORTF<RF2>
extern volatile __bit _DEPRECATED       RF2                 __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 RF2_bit             _BIT_ACCESS(PORTF,2)
// PORTF<RF3>
extern volatile __bit _DEPRECATED       RF3                 __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 RF3_bit             _BIT_ACCESS(PORTF,3)
// PORTF<RF4>
extern volatile __bit _DEPRECATED       RF4                 __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 RF4_bit             _BIT_ACCESS(PORTF,4)
// PORTF<RF5>
extern volatile __bit _DEPRECATED       RF5                 __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 RF5_bit             _BIT_ACCESS(PORTF,5)
// PORTF<RF6>
extern volatile __bit _DEPRECATED       RF6                 __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 RF6_bit             _BIT_ACCESS(PORTF,6)
// PORTF<RF7>
extern volatile __bit _DEPRECATED       RF7                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 RF7_bit             _BIT_ACCESS(PORTF,7)
// PORTG<RG0>
extern volatile __bit _DEPRECATED       RG0                 __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 RG0_bit             _BIT_ACCESS(PORTG,0)
// PORTG<RG1>
extern volatile __bit _DEPRECATED       RG1                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 RG1_bit             _BIT_ACCESS(PORTG,1)
// PORTG<RG2>
extern volatile __bit _DEPRECATED       RG2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 RG2_bit             _BIT_ACCESS(PORTG,2)
// PORTG<RG3>
extern volatile __bit _DEPRECATED       RG3                 __at(0x7C33);	// @ (0xF86 * 8 + 3)
#define                                 RG3_bit             _BIT_ACCESS(PORTG,3)
// PORTG<RG4>
extern volatile __bit _DEPRECATED       RG4                 __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 RG4_bit             _BIT_ACCESS(PORTG,4)
// PORTG<RG5>
extern volatile __bit                   RG5                 __at(0x7C35);	// @ (0xF86 * 8 + 5)
#define                                 RG5_bit             _BIT_ACCESS(PORTG,5)
// PORTG<RG6>
extern volatile __bit                   RG6                 __at(0x7C36);	// @ (0xF86 * 8 + 6)
#define                                 RG6_bit             _BIT_ACCESS(PORTG,6)
// PORTG<RG7>
extern volatile __bit                   RG7                 __at(0x7C37);	// @ (0xF86 * 8 + 7)
#define                                 RG7_bit             _BIT_ACCESS(PORTG,7)
// PORTH<RH0>
extern volatile __bit _DEPRECATED       RH0                 __at(0x7C38);	// @ (0xF87 * 8 + 0)
#define                                 RH0_bit             _BIT_ACCESS(PORTH,0)
// PORTH<RH1>
extern volatile __bit _DEPRECATED       RH1                 __at(0x7C39);	// @ (0xF87 * 8 + 1)
#define                                 RH1_bit             _BIT_ACCESS(PORTH,1)
// PORTH<RH2>
extern volatile __bit _DEPRECATED       RH2                 __at(0x7C3A);	// @ (0xF87 * 8 + 2)
#define                                 RH2_bit             _BIT_ACCESS(PORTH,2)
// PORTH<RH3>
extern volatile __bit _DEPRECATED       RH3                 __at(0x7C3B);	// @ (0xF87 * 8 + 3)
#define                                 RH3_bit             _BIT_ACCESS(PORTH,3)
// PORTH<RH4>
extern volatile __bit _DEPRECATED       RH4                 __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 RH4_bit             _BIT_ACCESS(PORTH,4)
// PORTH<RH5>
extern volatile __bit _DEPRECATED       RH5                 __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 RH5_bit             _BIT_ACCESS(PORTH,5)
// PORTH<RH6>
extern volatile __bit _DEPRECATED       RH6                 __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 RH6_bit             _BIT_ACCESS(PORTH,6)
// PORTH<RH7>
extern volatile __bit _DEPRECATED       RH7                 __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 RH7_bit             _BIT_ACCESS(PORTH,7)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// PORTJ<RJ0>
extern volatile __bit _DEPRECATED       RJ0                 __at(0x7C40);	// @ (0xF88 * 8 + 0)
#define                                 RJ0_bit             _BIT_ACCESS(PORTJ,0)
// PORTJ<RJ1>
extern volatile __bit _DEPRECATED       RJ1                 __at(0x7C41);	// @ (0xF88 * 8 + 1)
#define                                 RJ1_bit             _BIT_ACCESS(PORTJ,1)
// PORTJ<RJ2>
extern volatile __bit _DEPRECATED       RJ2                 __at(0x7C42);	// @ (0xF88 * 8 + 2)
#define                                 RJ2_bit             _BIT_ACCESS(PORTJ,2)
// PORTJ<RJ3>
extern volatile __bit _DEPRECATED       RJ3                 __at(0x7C43);	// @ (0xF88 * 8 + 3)
#define                                 RJ3_bit             _BIT_ACCESS(PORTJ,3)
// PORTJ<RJ4>
extern volatile __bit _DEPRECATED       RJ4                 __at(0x7C44);	// @ (0xF88 * 8 + 4)
#define                                 RJ4_bit             _BIT_ACCESS(PORTJ,4)
// PORTJ<RJ5>
extern volatile __bit _DEPRECATED       RJ5                 __at(0x7C45);	// @ (0xF88 * 8 + 5)
#define                                 RJ5_bit             _BIT_ACCESS(PORTJ,5)
// PORTJ<RJ6>
extern volatile __bit _DEPRECATED       RJ6                 __at(0x7C46);	// @ (0xF88 * 8 + 6)
#define                                 RJ6_bit             _BIT_ACCESS(PORTJ,6)
// PORTJ<RJ7>
extern volatile __bit _DEPRECATED       RJ7                 __at(0x7C47);	// @ (0xF88 * 8 + 7)
#define                                 RJ7_bit             _BIT_ACCESS(PORTJ,7)
// PORTG<RJPU>
extern volatile __bit _DEPRECATED       RJPU                __at(0x7C35);	// @ (0xF86 * 8 + 5)
#define                                 RJPU_bit            _BIT_ACCESS(PORTG,5)
// SSPCON2<RSEN>
extern volatile __bit                   RSEN                __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSPCON2,1)
// SSPCON2<RSEN1>
extern volatile __bit                   RSEN1               __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN1_bit           _BIT_ACCESS(SSPCON2,1)
// SSPSTAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<RW1>
extern volatile __bit                   RW1                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW1_bit             _BIT_ACCESS(SSPSTAT,2)
// PORTC<RX1>
extern volatile __bit                   RX1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX1_bit             _BIT_ACCESS(PORTC,7)
// PORTG<RX2>
extern volatile __bit                   RX2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 RX2_bit             _BIT_ACCESS(PORTG,2)
// RCSTA1<RX9>
extern volatile __bit _DEPRECATED       RX9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA1,6)
// RCSTA1<RX91>
extern volatile __bit                   RX91                __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX91_bit            _BIT_ACCESS(RCSTA1,6)
// RCSTA2<RX92>
extern volatile __bit                   RX92                __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 RX92_bit            _BIT_ACCESS(RCSTA2,6)
// RCSTA1<RX9D>
extern volatile __bit _DEPRECATED       RX9D                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA1,0)
// RCSTA1<RX9D1>
extern volatile __bit                   RX9D1               __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D1_bit           _BIT_ACCESS(RCSTA1,0)
// RCSTA2<RX9D2>
extern volatile __bit                   RX9D2               __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 RX9D2_bit           _BIT_ACCESS(RCSTA2,0)
// PIE3<RXB1IE>
extern volatile __bit                   RXB1IE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 RXB1IE_bit          _BIT_ACCESS(PIE3,1)
// PIE3<RXBNIE>
extern volatile __bit                   RXBNIE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 RXBNIE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<RXBNIF>
extern volatile __bit                   RXBNIF              __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 RXBNIF_bit          _BIT_ACCESS(PIR3,1)
// IPR3<RXBNIP>
extern volatile __bit                   RXBNIP              __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 RXBNIP_bit          _BIT_ACCESS(IPR3,1)
// BAUDCON1<RXDTP>
extern volatile __bit                   RXDTP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<RXDTP1>
extern volatile __bit                   RXDTP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP1_bit          _BIT_ACCESS(BAUDCON1,5)
// SSPSTAT<R_NOT_W>
extern volatile __bit                   R_NOT_W             __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_NOT_W_bit         _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_W>
extern volatile __bit                   R_W                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// PORTC<SCK>
extern volatile __bit                   SCK                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCK_bit             _BIT_ACCESS(PORTC,3)
// BAUDCON1<SCKP>
extern volatile __bit                   SCKP                __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<SCKP1>
extern volatile __bit                   SCKP1               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP1_bit           _BIT_ACCESS(BAUDCON1,4)
// PORTC<SCL>
extern volatile __bit                   SCL                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCL_bit             _BIT_ACCESS(PORTC,3)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// PORTC<SDA>
extern volatile __bit                   SDA                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDA_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDI>
extern volatile __bit                   SDI                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDI_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDO>
extern volatile __bit                   SDO                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SDO_bit             _BIT_ACCESS(PORTC,5)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// SSPCON2<SEN1>
extern volatile __bit                   SEN1                __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN1_bit            _BIT_ACCESS(SSPCON2,0)
// TXSTA1<SENDB>
extern volatile __bit                   SENDB               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA1,3)
// TXSTA1<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB1_bit          _BIT_ACCESS(TXSTA1,3)
// TXSTA2<SENDB2>
extern volatile __bit                   SENDB2              __at(0x7B0B);	// @ (0xF61 * 8 + 3)
#define                                 SENDB2_bit          _BIT_ACCESS(TXSTA2,3)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// SSPSTAT<SMP1>
extern volatile __bit                   SMP1                __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP1_bit            _BIT_ACCESS(SSPSTAT,7)
// T1CON<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN_bit          _BIT_ACCESS(T1CON,3)
// T3CON<SOSCEN3>
extern volatile __bit                   SOSCEN3             __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 SOSCEN3_bit         _BIT_ACCESS(T3CON,3)
// STKPTR<SP0>
extern volatile __bit                   SP0                 __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 SP0_bit             _BIT_ACCESS(STKPTR,0)
// STKPTR<SP1>
extern volatile __bit                   SP1                 __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 SP1_bit             _BIT_ACCESS(STKPTR,1)
// STKPTR<SP2>
extern volatile __bit                   SP2                 __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 SP2_bit             _BIT_ACCESS(STKPTR,2)
// STKPTR<SP3>
extern volatile __bit                   SP3                 __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 SP3_bit             _BIT_ACCESS(STKPTR,3)
// STKPTR<SP4>
extern volatile __bit                   SP4                 __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 SP4_bit             _BIT_ACCESS(STKPTR,4)
// RCSTA1<SPEN>
extern volatile __bit _DEPRECATED       SPEN                __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA1,7)
// RCSTA1<SPEN1>
extern volatile __bit                   SPEN1               __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN1_bit           _BIT_ACCESS(RCSTA1,7)
// RCSTA2<SPEN2>
extern volatile __bit                   SPEN2               __at(0x7B07);	// @ (0xF60 * 8 + 7)
#define                                 SPEN2_bit           _BIT_ACCESS(RCSTA2,7)
// TRISG<SPIOD>
extern volatile __bit                   SPIOD               __at(0x7CC7);	// @ (0xF98 * 8 + 7)
#define                                 SPIOD_bit           _BIT_ACCESS(TRISG,7)
// RCSTA1<SREN>
extern volatile __bit _DEPRECATED       SREN                __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA1,5)
// RCSTA1<SREN1>
extern volatile __bit                   SREN1               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN1_bit           _BIT_ACCESS(RCSTA1,5)
// RCSTA2<SREN2>
extern volatile __bit                   SREN2               __at(0x7B05);	// @ (0xF60 * 8 + 5)
#define                                 SREN2_bit           _BIT_ACCESS(RCSTA2,5)
// RCSTA1<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA1,5)
// PORTF<SS1>
extern volatile __bit                   SS1                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 SS1_bit             _BIT_ACCESS(PORTF,7)
// PORTD<SS2>
extern volatile __bit                   SS2                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 SS2_bit             _BIT_ACCESS(PORTD,7)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// IPR1<SSP1IP>
extern volatile __bit                   SSP1IP              __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSP1IP_bit          _BIT_ACCESS(IPR1,3)
// SSPCON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON1,5)
// SSPCON1<SSPEN1>
extern volatile __bit                   SSPEN1              __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN1_bit          _BIT_ACCESS(SSPCON1,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
// IPR1<SSPIP>
extern volatile __bit                   SSPIP               __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSPIP_bit           _BIT_ACCESS(IPR1,3)
// SSPCON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSPCON1,0)
// SSPCON1<SSPM01>
extern volatile __bit                   SSPM01              __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM01_bit          _BIT_ACCESS(SSPCON1,0)
// SSPCON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSPCON1,1)
// SSPCON1<SSPM11>
extern volatile __bit                   SSPM11              __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM11_bit          _BIT_ACCESS(SSPCON1,1)
// SSPCON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSPCON1,2)
// SSPCON1<SSPM21>
extern volatile __bit                   SSPM21              __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM21_bit          _BIT_ACCESS(SSPCON1,2)
// SSPCON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON1,3)
// SSPCON1<SSPM31>
extern volatile __bit                   SSPM31              __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM31_bit          _BIT_ACCESS(SSPCON1,3)
// SSPCON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON1,6)
// SSPCON1<SSPOV1>
extern volatile __bit                   SSPOV1              __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV1_bit          _BIT_ACCESS(SSPCON1,6)
// SSPSTAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSPSTAT,3)
// SSPSTAT<START1>
extern volatile __bit                   START1              __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START1_bit          _BIT_ACCESS(SSPSTAT,3)
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKPTR0>
extern volatile __bit                   STKPTR0             __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 STKPTR0_bit         _BIT_ACCESS(STKPTR,0)
// STKPTR<STKPTR1>
extern volatile __bit                   STKPTR1             __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 STKPTR1_bit         _BIT_ACCESS(STKPTR,1)
// STKPTR<STKPTR2>
extern volatile __bit                   STKPTR2             __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 STKPTR2_bit         _BIT_ACCESS(STKPTR,2)
// STKPTR<STKPTR3>
extern volatile __bit                   STKPTR3             __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 STKPTR3_bit         _BIT_ACCESS(STKPTR,3)
// STKPTR<STKPTR4>
extern volatile __bit                   STKPTR4             __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 STKPTR4_bit         _BIT_ACCESS(STKPTR,4)
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(STKPTR,6)
// SSPSTAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSPSTAT,4)
// SSPSTAT<STOP1>
extern volatile __bit                   STOP1               __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP1_bit           _BIT_ACCESS(SSPSTAT,4)
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTE_bit           _BIT_ACCESS(WDTCON,0)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA1<SYNC>
extern volatile __bit _DEPRECATED       SYNC                __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA1,4)
// TXSTA1<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC1_bit           _BIT_ACCESS(TXSTA1,4)
// TXSTA2<SYNC2>
extern volatile __bit                   SYNC2               __at(0x7B0C);	// @ (0xF61 * 8 + 4)
#define                                 SYNC2_bit           _BIT_ACCESS(TXSTA2,4)
// T0CON<T08BIT>
extern volatile __bit                   T08BIT              __at(0x7EAE);	// @ (0xFD5 * 8 + 6)
#define                                 T08BIT_bit          _BIT_ACCESS(T0CON,6)
// PORTA<T0CKI>
extern volatile __bit                   T0CKI               __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 T0CKI_bit           _BIT_ACCESS(PORTA,4)
// T0CON<T0CS>
extern volatile __bit                   T0CS                __at(0x7EAD);	// @ (0xFD5 * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(T0CON,5)
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON,5)
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON,2)
// INTCON2<T0IP>
extern volatile __bit                   T0IP                __at(0x7F8A);	// @ (0xFF1 * 8 + 2)
#define                                 T0IP_bit            _BIT_ACCESS(INTCON2,2)
// T0CON<T0PS0>
extern volatile __bit                   T0PS0               __at(0x7EA8);	// @ (0xFD5 * 8 + 0)
#define                                 T0PS0_bit           _BIT_ACCESS(T0CON,0)
// T0CON<T0PS1>
extern volatile __bit                   T0PS1               __at(0x7EA9);	// @ (0xFD5 * 8 + 1)
#define                                 T0PS1_bit           _BIT_ACCESS(T0CON,1)
// T0CON<T0PS2>
extern volatile __bit                   T0PS2               __at(0x7EAA);	// @ (0xFD5 * 8 + 2)
#define                                 T0PS2_bit           _BIT_ACCESS(T0CON,2)
// T0CON<T0PS3>
extern volatile __bit                   T0PS3               __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 T0PS3_bit           _BIT_ACCESS(T0CON,3)
// T0CON<T0SE>
extern volatile __bit                   T0SE                __at(0x7EAC);	// @ (0xFD5 * 8 + 4)
#define                                 T0SE_bit            _BIT_ACCESS(T0CON,4)
// PORTC<T13CKI>
extern volatile __bit                   T13CKI              __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T13CKI_bit          _BIT_ACCESS(PORTC,0)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x7E6C);	// @ (0xFCD * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x7E6D);	// @ (0xFCD * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1INSYNC_bit        _BIT_ACCESS(T1CON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// PORTC<T1OSI>
extern volatile __bit                   T1OSI               __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 T1OSI_bit           _BIT_ACCESS(PORTC,1)
// PORTC<T1OSO>
extern volatile __bit                   T1OSO               __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T1OSO_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1RD16>
extern volatile __bit                   T1RD16              __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 T1RD16_bit          _BIT_ACCESS(T1CON,7)
// T1CON<T1RUN>
extern volatile __bit                   T1RUN               __at(0x7E6E);	// @ (0xFCD * 8 + 6)
#define                                 T1RUN_bit           _BIT_ACCESS(T1CON,6)
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1SYNC_bit          _BIT_ACCESS(T1CON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x7E50);	// @ (0xFCA * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x7E51);	// @ (0xFCA * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0x7E53);	// @ (0xFCA * 8 + 3)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,3)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0x7E54);	// @ (0xFCA * 8 + 4)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,4)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0x7E55);	// @ (0xFCA * 8 + 5)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,5)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0x7E56);	// @ (0xFCA * 8 + 6)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,6)
// T3CON<T3CCP1>
extern volatile __bit                   T3CCP1              __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 T3CCP1_bit          _BIT_ACCESS(T3CON,3)
// T3CON<T3CCP2>
extern volatile __bit                   T3CCP2              __at(0x7D8E);	// @ (0xFB1 * 8 + 6)
#define                                 T3CCP2_bit          _BIT_ACCESS(T3CON,6)
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x7D8C);	// @ (0xFB1 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x7D8D);	// @ (0xFB1 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// T3CON<T3INSYNC>
extern volatile __bit                   T3INSYNC            __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3INSYNC_bit        _BIT_ACCESS(T3CON,2)
// T3CON<T3RD16>
extern volatile __bit                   T3RD16              __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 T3RD16_bit          _BIT_ACCESS(T3CON,7)
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3SYNC_bit          _BIT_ACCESS(T3CON,2)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// INTCON2<TMR0IP>
extern volatile __bit                   TMR0IP              __at(0x7F8A);	// @ (0xFF1 * 8 + 2)
#define                                 TMR0IP_bit          _BIT_ACCESS(INTCON2,2)
// T0CON<TMR0ON>
extern volatile __bit                   TMR0ON              __at(0x7EAF);	// @ (0xFD5 * 8 + 7)
#define                                 TMR0ON_bit          _BIT_ACCESS(T0CON,7)
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x7E69);	// @ (0xFCD * 8 + 1)
#define                                 TMR1CS_bit          _BIT_ACCESS(T1CON,1)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x7CE8);	// @ (0xF9D * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x7CF0);	// @ (0xF9E * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// IPR1<TMR1IP>
extern volatile __bit                   TMR1IP              __at(0x7CF8);	// @ (0xF9F * 8 + 0)
#define                                 TMR1IP_bit          _BIT_ACCESS(IPR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x7E68);	// @ (0xFCD * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x7CE9);	// @ (0xF9D * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x7CF1);	// @ (0xF9E * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// IPR1<TMR2IP>
extern volatile __bit                   TMR2IP              __at(0x7CF9);	// @ (0xF9F * 8 + 1)
#define                                 TMR2IP_bit          _BIT_ACCESS(IPR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x7E52);	// @ (0xFCA * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T3CON<TMR3CS>
extern volatile __bit                   TMR3CS              __at(0x7D89);	// @ (0xFB1 * 8 + 1)
#define                                 TMR3CS_bit          _BIT_ACCESS(T3CON,1)
// PIE2<TMR3IE>
extern volatile __bit                   TMR3IE              __at(0x7D01);	// @ (0xFA0 * 8 + 1)
#define                                 TMR3IE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<TMR3IF>
extern volatile __bit                   TMR3IF              __at(0x7D09);	// @ (0xFA1 * 8 + 1)
#define                                 TMR3IF_bit          _BIT_ACCESS(PIR2,1)
// IPR2<TMR3IP>
extern volatile __bit                   TMR3IP              __at(0x7D11);	// @ (0xFA2 * 8 + 1)
#define                                 TMR3IP_bit          _BIT_ACCESS(IPR2,1)
// T3CON<TMR3ON>
extern volatile __bit                   TMR3ON              __at(0x7D88);	// @ (0xFB1 * 8 + 0)
#define                                 TMR3ON_bit          _BIT_ACCESS(T3CON,0)
// RCON<TO>
extern volatile __bit                   TO                  __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 TO_bit              _BIT_ACCESS(RCON,3)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x7C90);	// @ (0xF92 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x7C91);	// @ (0xF92 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x7C92);	// @ (0xF92 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x7C93);	// @ (0xF92 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISA,3)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x7C94);	// @ (0xF92 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x7C95);	// @ (0xF92 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TRISA<TRISA6>
extern volatile __bit                   TRISA6              __at(0x7C96);	// @ (0xF92 * 8 + 6)
#define                                 TRISA6_bit          _BIT_ACCESS(TRISA,6)
// TRISA<TRISA7>
extern volatile __bit                   TRISA7              __at(0x7C97);	// @ (0xF92 * 8 + 7)
#define                                 TRISA7_bit          _BIT_ACCESS(TRISA,7)
// TRISB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x7C98);	// @ (0xF93 * 8 + 0)
#define                                 TRISB0_bit          _BIT_ACCESS(TRISB,0)
// TRISB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x7C99);	// @ (0xF93 * 8 + 1)
#define                                 TRISB1_bit          _BIT_ACCESS(TRISB,1)
// TRISB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x7C9A);	// @ (0xF93 * 8 + 2)
#define                                 TRISB2_bit          _BIT_ACCESS(TRISB,2)
// TRISB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x7C9B);	// @ (0xF93 * 8 + 3)
#define                                 TRISB3_bit          _BIT_ACCESS(TRISB,3)
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x7C9C);	// @ (0xF93 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISB,4)
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x7C9D);	// @ (0xF93 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISB,5)
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x7C9E);	// @ (0xF93 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISB,6)
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x7C9F);	// @ (0xF93 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISB,7)
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x7CA0);	// @ (0xF94 * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x7CA1);	// @ (0xF94 * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x7CA2);	// @ (0xF94 * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x7CA3);	// @ (0xF94 * 8 + 3)
#define                                 TRISC3_bit          _BIT_ACCESS(TRISC,3)
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x7CA4);	// @ (0xF94 * 8 + 4)
#define                                 TRISC4_bit          _BIT_ACCESS(TRISC,4)
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x7CA5);	// @ (0xF94 * 8 + 5)
#define                                 TRISC5_bit          _BIT_ACCESS(TRISC,5)
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x7CA6);	// @ (0xF94 * 8 + 6)
#define                                 TRISC6_bit          _BIT_ACCESS(TRISC,6)
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x7CA7);	// @ (0xF94 * 8 + 7)
#define                                 TRISC7_bit          _BIT_ACCESS(TRISC,7)
// TRISD<TRISD0>
extern volatile __bit                   TRISD0              __at(0x7CA8);	// @ (0xF95 * 8 + 0)
#define                                 TRISD0_bit          _BIT_ACCESS(TRISD,0)
// TRISD<TRISD1>
extern volatile __bit                   TRISD1              __at(0x7CA9);	// @ (0xF95 * 8 + 1)
#define                                 TRISD1_bit          _BIT_ACCESS(TRISD,1)
// TRISD<TRISD2>
extern volatile __bit                   TRISD2              __at(0x7CAA);	// @ (0xF95 * 8 + 2)
#define                                 TRISD2_bit          _BIT_ACCESS(TRISD,2)
// TRISD<TRISD3>
extern volatile __bit                   TRISD3              __at(0x7CAB);	// @ (0xF95 * 8 + 3)
#define                                 TRISD3_bit          _BIT_ACCESS(TRISD,3)
// TRISD<TRISD4>
extern volatile __bit                   TRISD4              __at(0x7CAC);	// @ (0xF95 * 8 + 4)
#define                                 TRISD4_bit          _BIT_ACCESS(TRISD,4)
// TRISD<TRISD5>
extern volatile __bit                   TRISD5              __at(0x7CAD);	// @ (0xF95 * 8 + 5)
#define                                 TRISD5_bit          _BIT_ACCESS(TRISD,5)
// TRISD<TRISD6>
extern volatile __bit                   TRISD6              __at(0x7CAE);	// @ (0xF95 * 8 + 6)
#define                                 TRISD6_bit          _BIT_ACCESS(TRISD,6)
// TRISD<TRISD7>
extern volatile __bit                   TRISD7              __at(0x7CAF);	// @ (0xF95 * 8 + 7)
#define                                 TRISD7_bit          _BIT_ACCESS(TRISD,7)
// TRISE<TRISE0>
extern volatile __bit                   TRISE0              __at(0x7CB0);	// @ (0xF96 * 8 + 0)
#define                                 TRISE0_bit          _BIT_ACCESS(TRISE,0)
// TRISE<TRISE1>
extern volatile __bit                   TRISE1              __at(0x7CB1);	// @ (0xF96 * 8 + 1)
#define                                 TRISE1_bit          _BIT_ACCESS(TRISE,1)
// TRISE<TRISE2>
extern volatile __bit                   TRISE2              __at(0x7CB2);	// @ (0xF96 * 8 + 2)
#define                                 TRISE2_bit          _BIT_ACCESS(TRISE,2)
// TRISE<TRISE3>
extern volatile __bit                   TRISE3              __at(0x7CB3);	// @ (0xF96 * 8 + 3)
#define                                 TRISE3_bit          _BIT_ACCESS(TRISE,3)
// TRISE<TRISE4>
extern volatile __bit                   TRISE4              __at(0x7CB4);	// @ (0xF96 * 8 + 4)
#define                                 TRISE4_bit          _BIT_ACCESS(TRISE,4)
// TRISE<TRISE5>
extern volatile __bit                   TRISE5              __at(0x7CB5);	// @ (0xF96 * 8 + 5)
#define                                 TRISE5_bit          _BIT_ACCESS(TRISE,5)
// TRISE<TRISE6>
extern volatile __bit                   TRISE6              __at(0x7CB6);	// @ (0xF96 * 8 + 6)
#define                                 TRISE6_bit          _BIT_ACCESS(TRISE,6)
// TRISE<TRISE7>
extern volatile __bit                   TRISE7              __at(0x7CB7);	// @ (0xF96 * 8 + 7)
#define                                 TRISE7_bit          _BIT_ACCESS(TRISE,7)
// TRISF<TRISF1>
extern volatile __bit                   TRISF1              __at(0x7CB9);	// @ (0xF97 * 8 + 1)
#define                                 TRISF1_bit          _BIT_ACCESS(TRISF,1)
// TRISF<TRISF2>
extern volatile __bit                   TRISF2              __at(0x7CBA);	// @ (0xF97 * 8 + 2)
#define                                 TRISF2_bit          _BIT_ACCESS(TRISF,2)
// TRISF<TRISF3>
extern volatile __bit                   TRISF3              __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 TRISF3_bit          _BIT_ACCESS(TRISF,3)
// TRISF<TRISF4>
extern volatile __bit                   TRISF4              __at(0x7CBC);	// @ (0xF97 * 8 + 4)
#define                                 TRISF4_bit          _BIT_ACCESS(TRISF,4)
// TRISF<TRISF5>
extern volatile __bit                   TRISF5              __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 TRISF5_bit          _BIT_ACCESS(TRISF,5)
// TRISF<TRISF6>
extern volatile __bit                   TRISF6              __at(0x7CBE);	// @ (0xF97 * 8 + 6)
#define                                 TRISF6_bit          _BIT_ACCESS(TRISF,6)
// TRISF<TRISF7>
extern volatile __bit                   TRISF7              __at(0x7CBF);	// @ (0xF97 * 8 + 7)
#define                                 TRISF7_bit          _BIT_ACCESS(TRISF,7)
// TRISG<TRISG0>
extern volatile __bit                   TRISG0              __at(0x7CC0);	// @ (0xF98 * 8 + 0)
#define                                 TRISG0_bit          _BIT_ACCESS(TRISG,0)
// TRISG<TRISG1>
extern volatile __bit                   TRISG1              __at(0x7CC1);	// @ (0xF98 * 8 + 1)
#define                                 TRISG1_bit          _BIT_ACCESS(TRISG,1)
// TRISG<TRISG2>
extern volatile __bit                   TRISG2              __at(0x7CC2);	// @ (0xF98 * 8 + 2)
#define                                 TRISG2_bit          _BIT_ACCESS(TRISG,2)
// TRISG<TRISG3>
extern volatile __bit                   TRISG3              __at(0x7CC3);	// @ (0xF98 * 8 + 3)
#define                                 TRISG3_bit          _BIT_ACCESS(TRISG,3)
// TRISG<TRISG4>
extern volatile __bit                   TRISG4              __at(0x7CC4);	// @ (0xF98 * 8 + 4)
#define                                 TRISG4_bit          _BIT_ACCESS(TRISG,4)
// TRISH<TRISH0>
extern volatile __bit                   TRISH0              __at(0x7CC8);	// @ (0xF99 * 8 + 0)
#define                                 TRISH0_bit          _BIT_ACCESS(TRISH,0)
// TRISH<TRISH1>
extern volatile __bit                   TRISH1              __at(0x7CC9);	// @ (0xF99 * 8 + 1)
#define                                 TRISH1_bit          _BIT_ACCESS(TRISH,1)
// TRISH<TRISH2>
extern volatile __bit                   TRISH2              __at(0x7CCA);	// @ (0xF99 * 8 + 2)
#define                                 TRISH2_bit          _BIT_ACCESS(TRISH,2)
// TRISH<TRISH3>
extern volatile __bit                   TRISH3              __at(0x7CCB);	// @ (0xF99 * 8 + 3)
#define                                 TRISH3_bit          _BIT_ACCESS(TRISH,3)
// TRISH<TRISH4>
extern volatile __bit                   TRISH4              __at(0x7CCC);	// @ (0xF99 * 8 + 4)
#define                                 TRISH4_bit          _BIT_ACCESS(TRISH,4)
// TRISH<TRISH5>
extern volatile __bit                   TRISH5              __at(0x7CCD);	// @ (0xF99 * 8 + 5)
#define                                 TRISH5_bit          _BIT_ACCESS(TRISH,5)
// TRISH<TRISH6>
extern volatile __bit                   TRISH6              __at(0x7CCE);	// @ (0xF99 * 8 + 6)
#define                                 TRISH6_bit          _BIT_ACCESS(TRISH,6)
// TRISH<TRISH7>
extern volatile __bit                   TRISH7              __at(0x7CCF);	// @ (0xF99 * 8 + 7)
#define                                 TRISH7_bit          _BIT_ACCESS(TRISH,7)
// TRISJ<TRISJ0>
extern volatile __bit                   TRISJ0              __at(0x7CD0);	// @ (0xF9A * 8 + 0)
#define                                 TRISJ0_bit          _BIT_ACCESS(TRISJ,0)
// TRISJ<TRISJ1>
extern volatile __bit                   TRISJ1              __at(0x7CD1);	// @ (0xF9A * 8 + 1)
#define                                 TRISJ1_bit          _BIT_ACCESS(TRISJ,1)
// TRISJ<TRISJ2>
extern volatile __bit                   TRISJ2              __at(0x7CD2);	// @ (0xF9A * 8 + 2)
#define                                 TRISJ2_bit          _BIT_ACCESS(TRISJ,2)
// TRISJ<TRISJ3>
extern volatile __bit                   TRISJ3              __at(0x7CD3);	// @ (0xF9A * 8 + 3)
#define                                 TRISJ3_bit          _BIT_ACCESS(TRISJ,3)
// TRISJ<TRISJ4>
extern volatile __bit                   TRISJ4              __at(0x7CD4);	// @ (0xF9A * 8 + 4)
#define                                 TRISJ4_bit          _BIT_ACCESS(TRISJ,4)
// TRISJ<TRISJ5>
extern volatile __bit                   TRISJ5              __at(0x7CD5);	// @ (0xF9A * 8 + 5)
#define                                 TRISJ5_bit          _BIT_ACCESS(TRISJ,5)
// TRISJ<TRISJ6>
extern volatile __bit                   TRISJ6              __at(0x7CD6);	// @ (0xF9A * 8 + 6)
#define                                 TRISJ6_bit          _BIT_ACCESS(TRISJ,6)
// TRISJ<TRISJ7>
extern volatile __bit                   TRISJ7              __at(0x7CD7);	// @ (0xF9A * 8 + 7)
#define                                 TRISJ7_bit          _BIT_ACCESS(TRISJ,7)
// TXSTA1<TRMT>
extern volatile __bit _DEPRECATED       TRMT                __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA1,1)
// TXSTA1<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT1_bit           _BIT_ACCESS(TXSTA1,1)
// TXSTA2<TRMT2>
extern volatile __bit                   TRMT2               __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 TRMT2_bit           _BIT_ACCESS(TXSTA2,1)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x7CD8);	// @ (0xF9B * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x7CD9);	// @ (0xF9B * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x7CDA);	// @ (0xF9B * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x7CDB);	// @ (0xF9B * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x7CDC);	// @ (0xF9B * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// OSCTUNE<TUN5>
extern volatile __bit                   TUN5                __at(0x7CDD);	// @ (0xF9B * 8 + 5)
#define                                 TUN5_bit            _BIT_ACCESS(OSCTUNE,5)
// PORTC<TX1>
extern volatile __bit                   TX1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 TX1_bit             _BIT_ACCESS(PORTC,6)
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TX1IE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TX1IF_bit           _BIT_ACCESS(PIR1,4)
// IPR1<TX1IP>
extern volatile __bit                   TX1IP               __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TX1IP_bit           _BIT_ACCESS(IPR1,4)
// PORTG<TX2>
extern volatile __bit                   TX2                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 TX2_bit             _BIT_ACCESS(PORTG,1)
// PIE3<TX2IE>
extern volatile __bit                   TX2IE               __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TX2IE_bit           _BIT_ACCESS(PIE3,4)
// PIR3<TX2IF>
extern volatile __bit                   TX2IF               __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TX2IF_bit           _BIT_ACCESS(PIR3,4)
// IPR3<TX2IP>
extern volatile __bit                   TX2IP               __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TX2IP_bit           _BIT_ACCESS(IPR3,4)
// TXSTA2<TX8_92>
extern volatile __bit                   TX8_92              __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 TX8_92_bit          _BIT_ACCESS(TXSTA2,6)
// TXSTA1<TX9>
extern volatile __bit _DEPRECATED       TX9                 __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA1,6)
// TXSTA1<TX91>
extern volatile __bit                   TX91                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX91_bit            _BIT_ACCESS(TXSTA1,6)
// TXSTA2<TX92>
extern volatile __bit                   TX92                __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 TX92_bit            _BIT_ACCESS(TXSTA2,6)
// TXSTA1<TX9D>
extern volatile __bit _DEPRECATED       TX9D                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA1,0)
// TXSTA1<TX9D1>
extern volatile __bit                   TX9D1               __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D1_bit           _BIT_ACCESS(TXSTA1,0)
// TXSTA2<TX9D2>
extern volatile __bit                   TX9D2               __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 TX9D2_bit           _BIT_ACCESS(TXSTA2,0)
// PIE3<TXB0IE>
extern volatile __bit                   TXB0IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 TXB0IE_bit          _BIT_ACCESS(PIE3,2)
// PIE3<TXB2IE>
extern volatile __bit                   TXB2IE              __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TXB2IE_bit          _BIT_ACCESS(PIE3,4)
// PIE3<TXBNIE>
extern volatile __bit                   TXBNIE              __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TXBNIE_bit          _BIT_ACCESS(PIE3,4)
// PIR3<TXBNIF>
extern volatile __bit                   TXBNIF              __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TXBNIF_bit          _BIT_ACCESS(PIR3,4)
// IPR3<TXBNIP>
extern volatile __bit                   TXBNIP              __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TXBNIP_bit          _BIT_ACCESS(IPR3,4)
// BAUDCON1<TXCKP>
extern volatile __bit                   TXCKP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP_bit           _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<TXCKP1>
extern volatile __bit                   TXCKP1              __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP1_bit          _BIT_ACCESS(BAUDCON1,4)
// TXSTA2<TXD82>
extern volatile __bit                   TXD82               __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 TXD82_bit           _BIT_ACCESS(TXSTA2,0)
// TXSTA1<TXEN>
extern volatile __bit _DEPRECATED       TXEN                __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA1,5)
// TXSTA1<TXEN1>
extern volatile __bit                   TXEN1               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN1_bit           _BIT_ACCESS(TXSTA1,5)
// TXSTA2<TXEN2>
extern volatile __bit                   TXEN2               __at(0x7B0D);	// @ (0xF61 * 8 + 5)
#define                                 TXEN2_bit           _BIT_ACCESS(TXSTA2,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// IPR1<TXIP>
extern volatile __bit                   TXIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TXIP_bit            _BIT_ACCESS(IPR1,4)
// LATG<U1OD>
extern volatile __bit                   U1OD                __at(0x7C7E);	// @ (0xF8F * 8 + 6)
#define                                 U1OD_bit            _BIT_ACCESS(LATG,6)
// LATG<U2OD>
extern volatile __bit                   U2OD                __at(0x7C7F);	// @ (0xF8F * 8 + 7)
#define                                 U2OD_bit            _BIT_ACCESS(LATG,7)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// SSPSTAT<UA1>
extern volatile __bit                   UA1                 __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA1_bit             _BIT_ACCESS(SSPSTAT,1)
// PORTJ<UB>
extern volatile __bit                   UB                  __at(0x7C47);	// @ (0xF88 * 8 + 7)
#define                                 UB_bit              _BIT_ACCESS(PORTJ,7)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG01>
extern volatile __bit                   VCFG01              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG01_bit          _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<VCFG11>
extern volatile __bit                   VCFG11              __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG11_bit          _BIT_ACCESS(ADCON1,5)
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREFM_bit           _BIT_ACCESS(PORTA,2)
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREFP_bit           _BIT_ACCESS(PORTA,3)
// MEMCON<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7CE4);	// @ (0xF9C * 8 + 4)
#define                                 WAIT0_bit           _BIT_ACCESS(MEMCON,4)
// MEMCON<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7CE5);	// @ (0xF9C * 8 + 5)
#define                                 WAIT1_bit           _BIT_ACCESS(MEMCON,5)
// SSPCON1<WCOL>
extern volatile __bit                   WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON1,7)
// SSPCON1<WCOL1>
extern volatile __bit                   WCOL1               __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL1_bit           _BIT_ACCESS(SSPCON1,7)
// MEMCON<WM0>
extern volatile __bit                   WM0                 __at(0x7CE0);	// @ (0xF9C * 8 + 0)
#define                                 WM0_bit             _BIT_ACCESS(MEMCON,0)
// MEMCON<WM1>
extern volatile __bit                   WM1                 __at(0x7CE1);	// @ (0xF9C * 8 + 1)
#define                                 WM1_bit             _BIT_ACCESS(MEMCON,1)
// EECON1<WR>
extern volatile __bit _DEPRECATED       WR                  __at(0x7D31);	// @ (0xFA6 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// PORTE<WRE>
extern volatile __bit                   WRE                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 WRE_bit             _BIT_ACCESS(PORTE,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0x7D32);	// @ (0xFA6 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0x7D33);	// @ (0xFA6 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
// PORTJ<WRH>
extern volatile __bit                   WRH                 __at(0x7C43);	// @ (0xF88 * 8 + 3)
#define                                 WRH_bit             _BIT_ACCESS(PORTJ,3)
// PORTJ<WRL>
extern volatile __bit                   WRL                 __at(0x7C42);	// @ (0xF88 * 8 + 2)
#define                                 WRL_bit             _BIT_ACCESS(PORTJ,2)
// BAUDCON1<WUE>
extern volatile __bit                   WUE                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON1,1)
// BAUDCON1<WUE1>
extern volatile __bit                   WUE1                __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE1_bit            _BIT_ACCESS(BAUDCON1,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x7EC2);	// @ (0xFD8 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSPSTAT<nA>
extern volatile __bit                   nA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSPSTAT,5)
// RCON<nBOR>
extern volatile __bit                   nBOR                __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(RCON,0)
// RCON<nCM>
extern volatile __bit                   nCM                 __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 nCM_bit             _BIT_ACCESS(RCON,5)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// RCON<nPD>
extern volatile __bit                   nPD                 __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 nPD_bit             _BIT_ACCESS(RCON,2)
// RCON<nPOR>
extern volatile __bit                   nPOR                __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(RCON,1)
// INTCON2<nRBPU>
extern volatile __bit                   nRBPU               __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(INTCON2,7)
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             _BIT_ACCESS(RCON,4)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// T3CON<nT3SYNC>
extern volatile __bit                   nT3SYNC             __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 nT3SYNC_bit         _BIT_ACCESS(T3CON,2)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// SSPSTAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSPSTAT,2)

#endif // _PIC18F84J11_H_
