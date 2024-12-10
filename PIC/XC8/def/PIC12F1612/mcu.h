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

#ifndef _PIC12F1612_H_
#define _PIC12F1612_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC12F1612
 */
#ifndef _XC_H_
#warning Header file pic12f1612.h included directly. Use #include <xc.h> instead.
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
        unsigned RA2                    :1;
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
        unsigned CCP1IF                 :1;
        unsigned                        :3;
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
#define _PIR1_CCP1IF_POSN                                   0x2
#define _PIR1_CCP1IF_POSITION                               0x2
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x4
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
        unsigned CCP2IF                 :1;
        unsigned TMR4IF                 :1;
        unsigned TMR6IF                 :1;
        unsigned                        :2;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_TMR4IF_POSN                                   0x1
#define _PIR2_TMR4IF_POSITION                               0x1
#define _PIR2_TMR4IF_SIZE                                   0x1
#define _PIR2_TMR4IF_LENGTH                                 0x1
#define _PIR2_TMR4IF_MASK                                   0x2
#define _PIR2_TMR6IF_POSN                                   0x2
#define _PIR2_TMR6IF_POSITION                               0x2
#define _PIR2_TMR6IF_SIZE                                   0x1
#define _PIR2_TMR6IF_LENGTH                                 0x1
#define _PIR2_TMR6IF_MASK                                   0x4
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

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x013);
#ifndef _LIB_BUILD
asm("PIR3 equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ZCDIF                  :1;
        unsigned CWGIF                  :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x013);
// bitfield macros
#define _PIR3_ZCDIF_POSN                                    0x4
#define _PIR3_ZCDIF_POSITION                                0x4
#define _PIR3_ZCDIF_SIZE                                    0x1
#define _PIR3_ZCDIF_LENGTH                                  0x1
#define _PIR3_ZCDIF_MASK                                    0x10
#define _PIR3_CWGIF_POSN                                    0x5
#define _PIR3_CWGIF_POSITION                                0x5
#define _PIR3_CWGIF_SIZE                                    0x1
#define _PIR3_CWGIF_LENGTH                                  0x1
#define _PIR3_CWGIF_MASK                                    0x20

// Register: PIR4
#define PIR4 PIR4
extern volatile unsigned char           PIR4                __at(0x014);
#ifndef _LIB_BUILD
asm("PIR4 equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1IF                 :1;
        unsigned SMT1PRAIF              :1;
        unsigned SMT1PWAIF              :1;
        unsigned SMT2IF                 :1;
        unsigned SMT2PRAIF              :1;
        unsigned SMT2PWAIF              :1;
        unsigned CRCIF                  :1;
        unsigned SCANIF                 :1;
    };
} PIR4bits_t;
extern volatile PIR4bits_t PIR4bits __at(0x014);
// bitfield macros
#define _PIR4_SMT1IF_POSN                                   0x0
#define _PIR4_SMT1IF_POSITION                               0x0
#define _PIR4_SMT1IF_SIZE                                   0x1
#define _PIR4_SMT1IF_LENGTH                                 0x1
#define _PIR4_SMT1IF_MASK                                   0x1
#define _PIR4_SMT1PRAIF_POSN                                0x1
#define _PIR4_SMT1PRAIF_POSITION                            0x1
#define _PIR4_SMT1PRAIF_SIZE                                0x1
#define _PIR4_SMT1PRAIF_LENGTH                              0x1
#define _PIR4_SMT1PRAIF_MASK                                0x2
#define _PIR4_SMT1PWAIF_POSN                                0x2
#define _PIR4_SMT1PWAIF_POSITION                            0x2
#define _PIR4_SMT1PWAIF_SIZE                                0x1
#define _PIR4_SMT1PWAIF_LENGTH                              0x1
#define _PIR4_SMT1PWAIF_MASK                                0x4
#define _PIR4_SMT2IF_POSN                                   0x3
#define _PIR4_SMT2IF_POSITION                               0x3
#define _PIR4_SMT2IF_SIZE                                   0x1
#define _PIR4_SMT2IF_LENGTH                                 0x1
#define _PIR4_SMT2IF_MASK                                   0x8
#define _PIR4_SMT2PRAIF_POSN                                0x4
#define _PIR4_SMT2PRAIF_POSITION                            0x4
#define _PIR4_SMT2PRAIF_SIZE                                0x1
#define _PIR4_SMT2PRAIF_LENGTH                              0x1
#define _PIR4_SMT2PRAIF_MASK                                0x10
#define _PIR4_SMT2PWAIF_POSN                                0x5
#define _PIR4_SMT2PWAIF_POSITION                            0x5
#define _PIR4_SMT2PWAIF_SIZE                                0x1
#define _PIR4_SMT2PWAIF_LENGTH                              0x1
#define _PIR4_SMT2PWAIF_MASK                                0x20
#define _PIR4_CRCIF_POSN                                    0x6
#define _PIR4_CRCIF_POSITION                                0x6
#define _PIR4_CRCIF_SIZE                                    0x1
#define _PIR4_CRCIF_LENGTH                                  0x1
#define _PIR4_CRCIF_MASK                                    0x40
#define _PIR4_SCANIF_POSN                                   0x7
#define _PIR4_SCANIF_POSITION                               0x7
#define _PIR4_SCANIF_SIZE                                   0x1
#define _PIR4_SCANIF_LENGTH                                 0x1
#define _PIR4_SCANIF_MASK                                   0x80

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
        unsigned                        :1;
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

// Register: T2TMR
#define T2TMR T2TMR
extern volatile unsigned char           T2TMR               __at(0x01A);
#ifndef _LIB_BUILD
asm("T2TMR equ 01Ah");
#endif
// aliases
extern volatile unsigned char           TMR2                __at(0x01A);
#ifndef _LIB_BUILD
asm("TMR2 equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} T2TMRbits_t;
extern volatile T2TMRbits_t T2TMRbits __at(0x01A);
// bitfield macros
#define _T2TMR_TMR2_POSN                                    0x0
#define _T2TMR_TMR2_POSITION                                0x0
#define _T2TMR_TMR2_SIZE                                    0x8
#define _T2TMR_TMR2_LENGTH                                  0x8
#define _T2TMR_TMR2_MASK                                    0xFF
// alias bitfield definitions
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

// Register: T2PR
#define T2PR T2PR
extern volatile unsigned char           T2PR                __at(0x01B);
#ifndef _LIB_BUILD
asm("T2PR equ 01Bh");
#endif
// aliases
extern volatile unsigned char           _PR2                 __at(0x01B);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 01Bh");  // Note: Changed by MikroE
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PR2                    :8;  // Note: Changed by MikroE
    };
} T2PRbits_t;
extern volatile T2PRbits_t T2PRbits __at(0x01B);
// bitfield macros
#define _T2PR_PR2_POSN                                      0x0
#define _T2PR_PR2_POSITION                                  0x0
#define _T2PR_PR2_SIZE                                      0x8
#define _T2PR_PR2_LENGTH                                    0x8
#define _T2PR_PR2_MASK                                      0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned _PR2                    :8;  // Note: Changed by MikroE
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
        unsigned OUTPS                  :4;
        unsigned CKPS                   :3;
        unsigned ON                     :1;
    };
    struct {
        unsigned T2OUTPS                :4;
        unsigned T2CKPS                 :3;
        unsigned T2ON                   :1;
    };
    struct {
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned T2CKPS2                :1;
    };
    struct {
        unsigned OUTPS0                 :1;
        unsigned OUTPS1                 :1;
        unsigned OUTPS2                 :1;
        unsigned OUTPS3                 :1;
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
        unsigned CKPS2                  :1;
        unsigned TMR2ON                 :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x01C);
// bitfield macros
#define _T2CON_OUTPS_POSN                                   0x0
#define _T2CON_OUTPS_POSITION                               0x0
#define _T2CON_OUTPS_SIZE                                   0x4
#define _T2CON_OUTPS_LENGTH                                 0x4
#define _T2CON_OUTPS_MASK                                   0xF
#define _T2CON_CKPS_POSN                                    0x4
#define _T2CON_CKPS_POSITION                                0x4
#define _T2CON_CKPS_SIZE                                    0x3
#define _T2CON_CKPS_LENGTH                                  0x3
#define _T2CON_CKPS_MASK                                    0x70
#define _T2CON_ON_POSN                                      0x7
#define _T2CON_ON_POSITION                                  0x7
#define _T2CON_ON_SIZE                                      0x1
#define _T2CON_ON_LENGTH                                    0x1
#define _T2CON_ON_MASK                                      0x80
#define _T2CON_T2OUTPS_POSN                                 0x0
#define _T2CON_T2OUTPS_POSITION                             0x0
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0xF
#define _T2CON_T2CKPS_POSN                                  0x4
#define _T2CON_T2CKPS_POSITION                              0x4
#define _T2CON_T2CKPS_SIZE                                  0x3
#define _T2CON_T2CKPS_LENGTH                                0x3
#define _T2CON_T2CKPS_MASK                                  0x70
#define _T2CON_T2ON_POSN                                    0x7
#define _T2CON_T2ON_POSITION                                0x7
#define _T2CON_T2ON_SIZE                                    0x1
#define _T2CON_T2ON_LENGTH                                  0x1
#define _T2CON_T2ON_MASK                                    0x80
#define _T2CON_T2OUTPS0_POSN                                0x0
#define _T2CON_T2OUTPS0_POSITION                            0x0
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x1
#define _T2CON_T2OUTPS1_POSN                                0x1
#define _T2CON_T2OUTPS1_POSITION                            0x1
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x2
#define _T2CON_T2OUTPS2_POSN                                0x2
#define _T2CON_T2OUTPS2_POSITION                            0x2
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x4
#define _T2CON_T2OUTPS3_POSN                                0x3
#define _T2CON_T2OUTPS3_POSITION                            0x3
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x8
#define _T2CON_T2CKPS0_POSN                                 0x4
#define _T2CON_T2CKPS0_POSITION                             0x4
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x10
#define _T2CON_T2CKPS1_POSN                                 0x5
#define _T2CON_T2CKPS1_POSITION                             0x5
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x20
#define _T2CON_T2CKPS2_POSN                                 0x6
#define _T2CON_T2CKPS2_POSITION                             0x6
#define _T2CON_T2CKPS2_SIZE                                 0x1
#define _T2CON_T2CKPS2_LENGTH                               0x1
#define _T2CON_T2CKPS2_MASK                                 0x40
#define _T2CON_OUTPS0_POSN                                  0x0
#define _T2CON_OUTPS0_POSITION                              0x0
#define _T2CON_OUTPS0_SIZE                                  0x1
#define _T2CON_OUTPS0_LENGTH                                0x1
#define _T2CON_OUTPS0_MASK                                  0x1
#define _T2CON_OUTPS1_POSN                                  0x1
#define _T2CON_OUTPS1_POSITION                              0x1
#define _T2CON_OUTPS1_SIZE                                  0x1
#define _T2CON_OUTPS1_LENGTH                                0x1
#define _T2CON_OUTPS1_MASK                                  0x2
#define _T2CON_OUTPS2_POSN                                  0x2
#define _T2CON_OUTPS2_POSITION                              0x2
#define _T2CON_OUTPS2_SIZE                                  0x1
#define _T2CON_OUTPS2_LENGTH                                0x1
#define _T2CON_OUTPS2_MASK                                  0x4
#define _T2CON_OUTPS3_POSN                                  0x3
#define _T2CON_OUTPS3_POSITION                              0x3
#define _T2CON_OUTPS3_SIZE                                  0x1
#define _T2CON_OUTPS3_LENGTH                                0x1
#define _T2CON_OUTPS3_MASK                                  0x8
#define _T2CON_CKPS0_POSN                                   0x4
#define _T2CON_CKPS0_POSITION                               0x4
#define _T2CON_CKPS0_SIZE                                   0x1
#define _T2CON_CKPS0_LENGTH                                 0x1
#define _T2CON_CKPS0_MASK                                   0x10
#define _T2CON_CKPS1_POSN                                   0x5
#define _T2CON_CKPS1_POSITION                               0x5
#define _T2CON_CKPS1_SIZE                                   0x1
#define _T2CON_CKPS1_LENGTH                                 0x1
#define _T2CON_CKPS1_MASK                                   0x20
#define _T2CON_CKPS2_POSN                                   0x6
#define _T2CON_CKPS2_POSITION                               0x6
#define _T2CON_CKPS2_SIZE                                   0x1
#define _T2CON_CKPS2_LENGTH                                 0x1
#define _T2CON_CKPS2_MASK                                   0x40
#define _T2CON_TMR2ON_POSN                                  0x7
#define _T2CON_TMR2ON_POSITION                              0x7
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x80

// Register: T2HLT
#define T2HLT T2HLT
extern volatile unsigned char           T2HLT               __at(0x01D);
#ifndef _LIB_BUILD
asm("T2HLT equ 01Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned                        :1;
        unsigned CKSYNC                 :1;
        unsigned CKPOL                  :1;
        unsigned PSYNC                  :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned T2MODE                 :4;
        unsigned                        :1;
        unsigned T2CKSYNC               :1;
        unsigned T2CKPOL                :1;
        unsigned T2PSYNC                :1;
    };
    struct {
        unsigned T2MODE0                :1;
        unsigned T2MODE1                :1;
        unsigned T2MODE2                :1;
        unsigned T2MODE3                :1;
    };
} T2HLTbits_t;
extern volatile T2HLTbits_t T2HLTbits __at(0x01D);
// bitfield macros
#define _T2HLT_MODE_POSN                                    0x0
#define _T2HLT_MODE_POSITION                                0x0
#define _T2HLT_MODE_SIZE                                    0x4
#define _T2HLT_MODE_LENGTH                                  0x4
#define _T2HLT_MODE_MASK                                    0xF
#define _T2HLT_CKSYNC_POSN                                  0x5
#define _T2HLT_CKSYNC_POSITION                              0x5
#define _T2HLT_CKSYNC_SIZE                                  0x1
#define _T2HLT_CKSYNC_LENGTH                                0x1
#define _T2HLT_CKSYNC_MASK                                  0x20
#define _T2HLT_CKPOL_POSN                                   0x6
#define _T2HLT_CKPOL_POSITION                               0x6
#define _T2HLT_CKPOL_SIZE                                   0x1
#define _T2HLT_CKPOL_LENGTH                                 0x1
#define _T2HLT_CKPOL_MASK                                   0x40
#define _T2HLT_PSYNC_POSN                                   0x7
#define _T2HLT_PSYNC_POSITION                               0x7
#define _T2HLT_PSYNC_SIZE                                   0x1
#define _T2HLT_PSYNC_LENGTH                                 0x1
#define _T2HLT_PSYNC_MASK                                   0x80
#define _T2HLT_MODE0_POSN                                   0x0
#define _T2HLT_MODE0_POSITION                               0x0
#define _T2HLT_MODE0_SIZE                                   0x1
#define _T2HLT_MODE0_LENGTH                                 0x1
#define _T2HLT_MODE0_MASK                                   0x1
#define _T2HLT_MODE1_POSN                                   0x1
#define _T2HLT_MODE1_POSITION                               0x1
#define _T2HLT_MODE1_SIZE                                   0x1
#define _T2HLT_MODE1_LENGTH                                 0x1
#define _T2HLT_MODE1_MASK                                   0x2
#define _T2HLT_MODE2_POSN                                   0x2
#define _T2HLT_MODE2_POSITION                               0x2
#define _T2HLT_MODE2_SIZE                                   0x1
#define _T2HLT_MODE2_LENGTH                                 0x1
#define _T2HLT_MODE2_MASK                                   0x4
#define _T2HLT_MODE3_POSN                                   0x3
#define _T2HLT_MODE3_POSITION                               0x3
#define _T2HLT_MODE3_SIZE                                   0x1
#define _T2HLT_MODE3_LENGTH                                 0x1
#define _T2HLT_MODE3_MASK                                   0x8
#define _T2HLT_T2MODE_POSN                                  0x0
#define _T2HLT_T2MODE_POSITION                              0x0
#define _T2HLT_T2MODE_SIZE                                  0x4
#define _T2HLT_T2MODE_LENGTH                                0x4
#define _T2HLT_T2MODE_MASK                                  0xF
#define _T2HLT_T2CKSYNC_POSN                                0x5
#define _T2HLT_T2CKSYNC_POSITION                            0x5
#define _T2HLT_T2CKSYNC_SIZE                                0x1
#define _T2HLT_T2CKSYNC_LENGTH                              0x1
#define _T2HLT_T2CKSYNC_MASK                                0x20
#define _T2HLT_T2CKPOL_POSN                                 0x6
#define _T2HLT_T2CKPOL_POSITION                             0x6
#define _T2HLT_T2CKPOL_SIZE                                 0x1
#define _T2HLT_T2CKPOL_LENGTH                               0x1
#define _T2HLT_T2CKPOL_MASK                                 0x40
#define _T2HLT_T2PSYNC_POSN                                 0x7
#define _T2HLT_T2PSYNC_POSITION                             0x7
#define _T2HLT_T2PSYNC_SIZE                                 0x1
#define _T2HLT_T2PSYNC_LENGTH                               0x1
#define _T2HLT_T2PSYNC_MASK                                 0x80
#define _T2HLT_T2MODE0_POSN                                 0x0
#define _T2HLT_T2MODE0_POSITION                             0x0
#define _T2HLT_T2MODE0_SIZE                                 0x1
#define _T2HLT_T2MODE0_LENGTH                               0x1
#define _T2HLT_T2MODE0_MASK                                 0x1
#define _T2HLT_T2MODE1_POSN                                 0x1
#define _T2HLT_T2MODE1_POSITION                             0x1
#define _T2HLT_T2MODE1_SIZE                                 0x1
#define _T2HLT_T2MODE1_LENGTH                               0x1
#define _T2HLT_T2MODE1_MASK                                 0x2
#define _T2HLT_T2MODE2_POSN                                 0x2
#define _T2HLT_T2MODE2_POSITION                             0x2
#define _T2HLT_T2MODE2_SIZE                                 0x1
#define _T2HLT_T2MODE2_LENGTH                               0x1
#define _T2HLT_T2MODE2_MASK                                 0x4
#define _T2HLT_T2MODE3_POSN                                 0x3
#define _T2HLT_T2MODE3_POSITION                             0x3
#define _T2HLT_T2MODE3_SIZE                                 0x1
#define _T2HLT_T2MODE3_LENGTH                               0x1
#define _T2HLT_T2MODE3_MASK                                 0x8

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
extern volatile unsigned char           T2CLKCON            __at(0x01E);
#ifndef _LIB_BUILD
asm("T2CLKCON equ 01Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CS                   :3;
    };
    struct {
        unsigned T2CS0                  :1;
        unsigned T2CS1                  :1;
        unsigned T2CS2                  :1;
    };
} T2CLKCONbits_t;
extern volatile T2CLKCONbits_t T2CLKCONbits __at(0x01E);
// bitfield macros
#define _T2CLKCON_T2CS_POSN                                 0x0
#define _T2CLKCON_T2CS_POSITION                             0x0
#define _T2CLKCON_T2CS_SIZE                                 0x3
#define _T2CLKCON_T2CS_LENGTH                               0x3
#define _T2CLKCON_T2CS_MASK                                 0x7
#define _T2CLKCON_T2CS0_POSN                                0x0
#define _T2CLKCON_T2CS0_POSITION                            0x0
#define _T2CLKCON_T2CS0_SIZE                                0x1
#define _T2CLKCON_T2CS0_LENGTH                              0x1
#define _T2CLKCON_T2CS0_MASK                                0x1
#define _T2CLKCON_T2CS1_POSN                                0x1
#define _T2CLKCON_T2CS1_POSITION                            0x1
#define _T2CLKCON_T2CS1_SIZE                                0x1
#define _T2CLKCON_T2CS1_LENGTH                              0x1
#define _T2CLKCON_T2CS1_MASK                                0x2
#define _T2CLKCON_T2CS2_POSN                                0x2
#define _T2CLKCON_T2CS2_POSITION                            0x2
#define _T2CLKCON_T2CS2_SIZE                                0x1
#define _T2CLKCON_T2CS2_LENGTH                              0x1
#define _T2CLKCON_T2CS2_MASK                                0x4

// Register: T2RST
#define T2RST T2RST
extern volatile unsigned char           T2RST               __at(0x01F);
#ifndef _LIB_BUILD
asm("T2RST equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RSEL                   :4;
    };
    struct {
        unsigned RSEL0                  :1;
        unsigned RSEL1                  :1;
        unsigned RSEL2                  :1;
        unsigned RSEL3                  :1;
    };
    struct {
        unsigned T2RSEL                 :4;
    };
    struct {
        unsigned T2RSEL0                :1;
        unsigned T2RSEL1                :1;
        unsigned T2RSEL2                :1;
        unsigned T2RSEL3                :1;
    };
} T2RSTbits_t;
extern volatile T2RSTbits_t T2RSTbits __at(0x01F);
// bitfield macros
#define _T2RST_RSEL_POSN                                    0x0
#define _T2RST_RSEL_POSITION                                0x0
#define _T2RST_RSEL_SIZE                                    0x4
#define _T2RST_RSEL_LENGTH                                  0x4
#define _T2RST_RSEL_MASK                                    0xF
#define _T2RST_RSEL0_POSN                                   0x0
#define _T2RST_RSEL0_POSITION                               0x0
#define _T2RST_RSEL0_SIZE                                   0x1
#define _T2RST_RSEL0_LENGTH                                 0x1
#define _T2RST_RSEL0_MASK                                   0x1
#define _T2RST_RSEL1_POSN                                   0x1
#define _T2RST_RSEL1_POSITION                               0x1
#define _T2RST_RSEL1_SIZE                                   0x1
#define _T2RST_RSEL1_LENGTH                                 0x1
#define _T2RST_RSEL1_MASK                                   0x2
#define _T2RST_RSEL2_POSN                                   0x2
#define _T2RST_RSEL2_POSITION                               0x2
#define _T2RST_RSEL2_SIZE                                   0x1
#define _T2RST_RSEL2_LENGTH                                 0x1
#define _T2RST_RSEL2_MASK                                   0x4
#define _T2RST_RSEL3_POSN                                   0x3
#define _T2RST_RSEL3_POSITION                               0x3
#define _T2RST_RSEL3_SIZE                                   0x1
#define _T2RST_RSEL3_LENGTH                                 0x1
#define _T2RST_RSEL3_MASK                                   0x8
#define _T2RST_T2RSEL_POSN                                  0x0
#define _T2RST_T2RSEL_POSITION                              0x0
#define _T2RST_T2RSEL_SIZE                                  0x4
#define _T2RST_T2RSEL_LENGTH                                0x4
#define _T2RST_T2RSEL_MASK                                  0xF
#define _T2RST_T2RSEL0_POSN                                 0x0
#define _T2RST_T2RSEL0_POSITION                             0x0
#define _T2RST_T2RSEL0_SIZE                                 0x1
#define _T2RST_T2RSEL0_LENGTH                               0x1
#define _T2RST_T2RSEL0_MASK                                 0x1
#define _T2RST_T2RSEL1_POSN                                 0x1
#define _T2RST_T2RSEL1_POSITION                             0x1
#define _T2RST_T2RSEL1_SIZE                                 0x1
#define _T2RST_T2RSEL1_LENGTH                               0x1
#define _T2RST_T2RSEL1_MASK                                 0x2
#define _T2RST_T2RSEL2_POSN                                 0x2
#define _T2RST_T2RSEL2_POSITION                             0x2
#define _T2RST_T2RSEL2_SIZE                                 0x1
#define _T2RST_T2RSEL2_LENGTH                               0x1
#define _T2RST_T2RSEL2_MASK                                 0x4
#define _T2RST_T2RSEL3_POSN                                 0x3
#define _T2RST_T2RSEL3_POSITION                             0x3
#define _T2RST_T2RSEL3_SIZE                                 0x1
#define _T2RST_T2RSEL3_LENGTH                               0x1
#define _T2RST_T2RSEL3_MASK                                 0x8

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x08C);
#ifndef _LIB_BUILD
asm("TRISA equ 08Ch");
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
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0x08C);
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
        unsigned CCP1IE                 :1;
        unsigned                        :3;
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
#define _PIE1_CCP1IE_POSN                                   0x2
#define _PIE1_CCP1IE_POSITION                               0x2
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x4
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
        unsigned CCP2IE                 :1;
        unsigned TMR4IE                 :1;
        unsigned TMR6IE                 :1;
        unsigned                        :2;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_TMR4IE_POSN                                   0x1
#define _PIE2_TMR4IE_POSITION                               0x1
#define _PIE2_TMR4IE_SIZE                                   0x1
#define _PIE2_TMR4IE_LENGTH                                 0x1
#define _PIE2_TMR4IE_MASK                                   0x2
#define _PIE2_TMR6IE_POSN                                   0x2
#define _PIE2_TMR6IE_POSITION                               0x2
#define _PIE2_TMR6IE_SIZE                                   0x1
#define _PIE2_TMR6IE_LENGTH                                 0x1
#define _PIE2_TMR6IE_MASK                                   0x4
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

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x093);
#ifndef _LIB_BUILD
asm("PIE3 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ZCDIE                  :1;
        unsigned CWGIE                  :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x093);
// bitfield macros
#define _PIE3_ZCDIE_POSN                                    0x4
#define _PIE3_ZCDIE_POSITION                                0x4
#define _PIE3_ZCDIE_SIZE                                    0x1
#define _PIE3_ZCDIE_LENGTH                                  0x1
#define _PIE3_ZCDIE_MASK                                    0x10
#define _PIE3_CWGIE_POSN                                    0x5
#define _PIE3_CWGIE_POSITION                                0x5
#define _PIE3_CWGIE_SIZE                                    0x1
#define _PIE3_CWGIE_LENGTH                                  0x1
#define _PIE3_CWGIE_MASK                                    0x20

// Register: PIE4
#define PIE4 PIE4
extern volatile unsigned char           PIE4                __at(0x094);
#ifndef _LIB_BUILD
asm("PIE4 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1IE                 :1;
        unsigned SMT1PRAIE              :1;
        unsigned SMT1PWAIE              :1;
        unsigned SMT2IE                 :1;
        unsigned SMT2PRAIE              :1;
        unsigned SMT2PWAIE              :1;
        unsigned CRCIE                  :1;
        unsigned SCANIE                 :1;
    };
} PIE4bits_t;
extern volatile PIE4bits_t PIE4bits __at(0x094);
// bitfield macros
#define _PIE4_SMT1IE_POSN                                   0x0
#define _PIE4_SMT1IE_POSITION                               0x0
#define _PIE4_SMT1IE_SIZE                                   0x1
#define _PIE4_SMT1IE_LENGTH                                 0x1
#define _PIE4_SMT1IE_MASK                                   0x1
#define _PIE4_SMT1PRAIE_POSN                                0x1
#define _PIE4_SMT1PRAIE_POSITION                            0x1
#define _PIE4_SMT1PRAIE_SIZE                                0x1
#define _PIE4_SMT1PRAIE_LENGTH                              0x1
#define _PIE4_SMT1PRAIE_MASK                                0x2
#define _PIE4_SMT1PWAIE_POSN                                0x2
#define _PIE4_SMT1PWAIE_POSITION                            0x2
#define _PIE4_SMT1PWAIE_SIZE                                0x1
#define _PIE4_SMT1PWAIE_LENGTH                              0x1
#define _PIE4_SMT1PWAIE_MASK                                0x4
#define _PIE4_SMT2IE_POSN                                   0x3
#define _PIE4_SMT2IE_POSITION                               0x3
#define _PIE4_SMT2IE_SIZE                                   0x1
#define _PIE4_SMT2IE_LENGTH                                 0x1
#define _PIE4_SMT2IE_MASK                                   0x8
#define _PIE4_SMT2PRAIE_POSN                                0x4
#define _PIE4_SMT2PRAIE_POSITION                            0x4
#define _PIE4_SMT2PRAIE_SIZE                                0x1
#define _PIE4_SMT2PRAIE_LENGTH                              0x1
#define _PIE4_SMT2PRAIE_MASK                                0x10
#define _PIE4_SMT2PWAIE_POSN                                0x5
#define _PIE4_SMT2PWAIE_POSITION                            0x5
#define _PIE4_SMT2PWAIE_SIZE                                0x1
#define _PIE4_SMT2PWAIE_LENGTH                              0x1
#define _PIE4_SMT2PWAIE_MASK                                0x20
#define _PIE4_CRCIE_POSN                                    0x6
#define _PIE4_CRCIE_POSITION                                0x6
#define _PIE4_CRCIE_SIZE                                    0x1
#define _PIE4_CRCIE_LENGTH                                  0x1
#define _PIE4_CRCIE_MASK                                    0x40
#define _PIE4_SCANIE_POSN                                   0x7
#define _PIE4_SCANIE_POSITION                               0x7
#define _PIE4_SCANIE_SIZE                                   0x1
#define _PIE4_SCANIE_LENGTH                                 0x1
#define _PIE4_SCANIE_MASK                                   0x80

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
        unsigned _PS0                    :1;  // Note: Changed by MikroE
        unsigned _PS1                    :1;  // Note: Changed by MikroE
        unsigned _PS2                    :1;  // Note: Changed by MikroE
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
        unsigned nWDTWV                 :1;
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
#define _PCON_nWDTWV_POSN                                   0x5
#define _PCON_nWDTWV_POSITION                               0x5
#define _PCON_nWDTWV_SIZE                                   0x1
#define _PCON_nWDTWV_LENGTH                                 0x1
#define _PCON_nWDTWV_MASK                                   0x20
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x098);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :6;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x098);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x6
#define _OSCTUNE_TUN_LENGTH                                 0x6
#define _OSCTUNE_TUN_MASK                                   0x3F
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
        unsigned                        :1;
        unsigned IRCF                   :4;
        unsigned SPLLEN                 :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned                        :1;
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
#define _OSCCON_IRCF_POSN                                   0x3
#define _OSCCON_IRCF_POSITION                               0x3
#define _OSCCON_IRCF_SIZE                                   0x4
#define _OSCCON_IRCF_LENGTH                                 0x4
#define _OSCCON_IRCF_MASK                                   0x78
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
#define _OSCCON_IRCF0_POSN                                  0x3
#define _OSCCON_IRCF0_POSITION                              0x3
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x8
#define _OSCCON_IRCF1_POSN                                  0x4
#define _OSCCON_IRCF1_POSITION                              0x4
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x10
#define _OSCCON_IRCF2_POSN                                  0x5
#define _OSCCON_IRCF2_POSITION                              0x5
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x20
#define _OSCCON_IRCF3_POSN                                  0x6
#define _OSCCON_IRCF3_POSITION                              0x6
#define _OSCCON_IRCF3_SIZE                                  0x1
#define _OSCCON_IRCF3_LENGTH                                0x1
#define _OSCCON_IRCF3_MASK                                  0x40

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
        unsigned MFIOFR                 :1;
        unsigned HFIOFL                 :1;
        unsigned HFIOFR                 :1;
        unsigned                        :1;
        unsigned PLLR                   :1;
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
#define _OSCSTAT_MFIOFR_POSN                                0x2
#define _OSCSTAT_MFIOFR_POSITION                            0x2
#define _OSCSTAT_MFIOFR_SIZE                                0x1
#define _OSCSTAT_MFIOFR_LENGTH                              0x1
#define _OSCSTAT_MFIOFR_MASK                                0x4
#define _OSCSTAT_HFIOFL_POSN                                0x3
#define _OSCSTAT_HFIOFL_POSITION                            0x3
#define _OSCSTAT_HFIOFL_SIZE                                0x1
#define _OSCSTAT_HFIOFL_LENGTH                              0x1
#define _OSCSTAT_HFIOFL_MASK                                0x8
#define _OSCSTAT_HFIOFR_POSN                                0x4
#define _OSCSTAT_HFIOFR_POSITION                            0x4
#define _OSCSTAT_HFIOFR_SIZE                                0x1
#define _OSCSTAT_HFIOFR_LENGTH                              0x1
#define _OSCSTAT_HFIOFR_MASK                                0x10
#define _OSCSTAT_PLLR_POSN                                  0x6
#define _OSCSTAT_PLLR_POSITION                              0x6
#define _OSCSTAT_PLLR_SIZE                                  0x1
#define _OSCSTAT_PLLR_LENGTH                                0x1
#define _OSCSTAT_PLLR_MASK                                  0x40

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
        unsigned TRIGSEL                :4;
    };
    struct {
        unsigned                        :4;
        unsigned TRIGSEL0               :1;
        unsigned TRIGSEL1               :1;
        unsigned TRIGSEL2               :1;
        unsigned TRIGSEL3               :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0x09F);
// bitfield macros
#define _ADCON2_TRIGSEL_POSN                                0x4
#define _ADCON2_TRIGSEL_POSITION                            0x4
#define _ADCON2_TRIGSEL_SIZE                                0x4
#define _ADCON2_TRIGSEL_LENGTH                              0x4
#define _ADCON2_TRIGSEL_MASK                                0xF0
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
#define _ADCON2_TRIGSEL3_POSN                               0x7
#define _ADCON2_TRIGSEL3_POSITION                           0x7
#define _ADCON2_TRIGSEL3_SIZE                               0x1
#define _ADCON2_TRIGSEL3_LENGTH                             0x1
#define _ADCON2_TRIGSEL3_MASK                               0x80

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0x10C);
#ifndef _LIB_BUILD
asm("LATA equ 010Ch");
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
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0x10C);
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
    };
} CMOUTbits_t;
extern volatile CMOUTbits_t CMOUTbits __at(0x115);
// bitfield macros
#define _CMOUT_MC1OUT_POSN                                  0x0
#define _CMOUT_MC1OUT_POSITION                              0x0
#define _CMOUT_MC1OUT_SIZE                                  0x1
#define _CMOUT_MC1OUT_LENGTH                                0x1
#define _CMOUT_MC1OUT_MASK                                  0x1

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

// Register: DAC1CON0
#define DAC1CON0 DAC1CON0
extern volatile unsigned char           DAC1CON0            __at(0x118);
#ifndef _LIB_BUILD
asm("DAC1CON0 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned DAC1PSS                :2;
        unsigned                        :1;
        unsigned DAC1OE                 :1;
        unsigned                        :1;
        unsigned DAC1EN                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned D1PSS0                 :1;
        unsigned D1PSS1                 :1;
    };
} DAC1CON0bits_t;
extern volatile DAC1CON0bits_t DAC1CON0bits __at(0x118);
// bitfield macros
#define _DAC1CON0_DAC1PSS_POSN                              0x2
#define _DAC1CON0_DAC1PSS_POSITION                          0x2
#define _DAC1CON0_DAC1PSS_SIZE                              0x2
#define _DAC1CON0_DAC1PSS_LENGTH                            0x2
#define _DAC1CON0_DAC1PSS_MASK                              0xC
#define _DAC1CON0_DAC1OE_POSN                               0x5
#define _DAC1CON0_DAC1OE_POSITION                           0x5
#define _DAC1CON0_DAC1OE_SIZE                               0x1
#define _DAC1CON0_DAC1OE_LENGTH                             0x1
#define _DAC1CON0_DAC1OE_MASK                               0x20
#define _DAC1CON0_DAC1EN_POSN                               0x7
#define _DAC1CON0_DAC1EN_POSITION                           0x7
#define _DAC1CON0_DAC1EN_SIZE                               0x1
#define _DAC1CON0_DAC1EN_LENGTH                             0x1
#define _DAC1CON0_DAC1EN_MASK                               0x80
#define _DAC1CON0_D1PSS0_POSN                               0x2
#define _DAC1CON0_D1PSS0_POSITION                           0x2
#define _DAC1CON0_D1PSS0_SIZE                               0x1
#define _DAC1CON0_D1PSS0_LENGTH                             0x1
#define _DAC1CON0_D1PSS0_MASK                               0x4
#define _DAC1CON0_D1PSS1_POSN                               0x3
#define _DAC1CON0_D1PSS1_POSITION                           0x3
#define _DAC1CON0_D1PSS1_SIZE                               0x1
#define _DAC1CON0_D1PSS1_LENGTH                             0x1
#define _DAC1CON0_D1PSS1_MASK                               0x8

// Register: DAC1CON1
#define DAC1CON1 DAC1CON1
extern volatile unsigned char           DAC1CON1            __at(0x119);
#ifndef _LIB_BUILD
asm("DAC1CON1 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAC1R                  :8;
    };
    struct {
        unsigned DAC1R0                 :1;
        unsigned DAC1R1                 :1;
        unsigned DAC1R2                 :1;
        unsigned DAC1R3                 :1;
        unsigned DAC1R4                 :1;
        unsigned DAC1R5                 :1;
        unsigned DAC1R6                 :1;
        unsigned DAC1R7                 :1;
    };
} DAC1CON1bits_t;
extern volatile DAC1CON1bits_t DAC1CON1bits __at(0x119);
// bitfield macros
#define _DAC1CON1_DAC1R_POSN                                0x0
#define _DAC1CON1_DAC1R_POSITION                            0x0
#define _DAC1CON1_DAC1R_SIZE                                0x8
#define _DAC1CON1_DAC1R_LENGTH                              0x8
#define _DAC1CON1_DAC1R_MASK                                0xFF
#define _DAC1CON1_DAC1R0_POSN                               0x0
#define _DAC1CON1_DAC1R0_POSITION                           0x0
#define _DAC1CON1_DAC1R0_SIZE                               0x1
#define _DAC1CON1_DAC1R0_LENGTH                             0x1
#define _DAC1CON1_DAC1R0_MASK                               0x1
#define _DAC1CON1_DAC1R1_POSN                               0x1
#define _DAC1CON1_DAC1R1_POSITION                           0x1
#define _DAC1CON1_DAC1R1_SIZE                               0x1
#define _DAC1CON1_DAC1R1_LENGTH                             0x1
#define _DAC1CON1_DAC1R1_MASK                               0x2
#define _DAC1CON1_DAC1R2_POSN                               0x2
#define _DAC1CON1_DAC1R2_POSITION                           0x2
#define _DAC1CON1_DAC1R2_SIZE                               0x1
#define _DAC1CON1_DAC1R2_LENGTH                             0x1
#define _DAC1CON1_DAC1R2_MASK                               0x4
#define _DAC1CON1_DAC1R3_POSN                               0x3
#define _DAC1CON1_DAC1R3_POSITION                           0x3
#define _DAC1CON1_DAC1R3_SIZE                               0x1
#define _DAC1CON1_DAC1R3_LENGTH                             0x1
#define _DAC1CON1_DAC1R3_MASK                               0x8
#define _DAC1CON1_DAC1R4_POSN                               0x4
#define _DAC1CON1_DAC1R4_POSITION                           0x4
#define _DAC1CON1_DAC1R4_SIZE                               0x1
#define _DAC1CON1_DAC1R4_LENGTH                             0x1
#define _DAC1CON1_DAC1R4_MASK                               0x10
#define _DAC1CON1_DAC1R5_POSN                               0x5
#define _DAC1CON1_DAC1R5_POSITION                           0x5
#define _DAC1CON1_DAC1R5_SIZE                               0x1
#define _DAC1CON1_DAC1R5_LENGTH                             0x1
#define _DAC1CON1_DAC1R5_MASK                               0x20
#define _DAC1CON1_DAC1R6_POSN                               0x6
#define _DAC1CON1_DAC1R6_POSITION                           0x6
#define _DAC1CON1_DAC1R6_SIZE                               0x1
#define _DAC1CON1_DAC1R6_LENGTH                             0x1
#define _DAC1CON1_DAC1R6_MASK                               0x40
#define _DAC1CON1_DAC1R7_POSN                               0x7
#define _DAC1CON1_DAC1R7_POSITION                           0x7
#define _DAC1CON1_DAC1R7_SIZE                               0x1
#define _DAC1CON1_DAC1R7_LENGTH                             0x1
#define _DAC1CON1_DAC1R7_MASK                               0x80

// Register: ZCD1CON
#define ZCD1CON ZCD1CON
extern volatile unsigned char           ZCD1CON             __at(0x11C);
#ifndef _LIB_BUILD
asm("ZCD1CON equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ZCD1INTN               :1;
        unsigned ZCD1INTP               :1;
        unsigned                        :2;
        unsigned ZCD1POL                :1;
        unsigned ZCD1OUT                :1;
        unsigned ZCD1OE                 :1;
        unsigned ZCD1EN                 :1;
    };
} ZCD1CONbits_t;
extern volatile ZCD1CONbits_t ZCD1CONbits __at(0x11C);
// bitfield macros
#define _ZCD1CON_ZCD1INTN_POSN                              0x0
#define _ZCD1CON_ZCD1INTN_POSITION                          0x0
#define _ZCD1CON_ZCD1INTN_SIZE                              0x1
#define _ZCD1CON_ZCD1INTN_LENGTH                            0x1
#define _ZCD1CON_ZCD1INTN_MASK                              0x1
#define _ZCD1CON_ZCD1INTP_POSN                              0x1
#define _ZCD1CON_ZCD1INTP_POSITION                          0x1
#define _ZCD1CON_ZCD1INTP_SIZE                              0x1
#define _ZCD1CON_ZCD1INTP_LENGTH                            0x1
#define _ZCD1CON_ZCD1INTP_MASK                              0x2
#define _ZCD1CON_ZCD1POL_POSN                               0x4
#define _ZCD1CON_ZCD1POL_POSITION                           0x4
#define _ZCD1CON_ZCD1POL_SIZE                               0x1
#define _ZCD1CON_ZCD1POL_LENGTH                             0x1
#define _ZCD1CON_ZCD1POL_MASK                               0x10
#define _ZCD1CON_ZCD1OUT_POSN                               0x5
#define _ZCD1CON_ZCD1OUT_POSITION                           0x5
#define _ZCD1CON_ZCD1OUT_SIZE                               0x1
#define _ZCD1CON_ZCD1OUT_LENGTH                             0x1
#define _ZCD1CON_ZCD1OUT_MASK                               0x20
#define _ZCD1CON_ZCD1OE_POSN                                0x6
#define _ZCD1CON_ZCD1OE_POSITION                            0x6
#define _ZCD1CON_ZCD1OE_SIZE                                0x1
#define _ZCD1CON_ZCD1OE_LENGTH                              0x1
#define _ZCD1CON_ZCD1OE_MASK                                0x40
#define _ZCD1CON_ZCD1EN_POSN                                0x7
#define _ZCD1CON_ZCD1EN_POSITION                            0x7
#define _ZCD1CON_ZCD1EN_SIZE                                0x1
#define _ZCD1CON_ZCD1EN_LENGTH                              0x1
#define _ZCD1CON_ZCD1EN_MASK                                0x80

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x11D);
#ifndef _LIB_BUILD
asm("APFCON equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1SEL                :1;
        unsigned                        :2;
        unsigned T1GSEL                 :1;
        unsigned                        :1;
        unsigned CWGBSEL                :1;
        unsigned CWGASEL                :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_CCP1SEL_POSN                                0x0
#define _APFCON_CCP1SEL_POSITION                            0x0
#define _APFCON_CCP1SEL_SIZE                                0x1
#define _APFCON_CCP1SEL_LENGTH                              0x1
#define _APFCON_CCP1SEL_MASK                                0x1
#define _APFCON_T1GSEL_POSN                                 0x3
#define _APFCON_T1GSEL_POSITION                             0x3
#define _APFCON_T1GSEL_SIZE                                 0x1
#define _APFCON_T1GSEL_LENGTH                               0x1
#define _APFCON_T1GSEL_MASK                                 0x8
#define _APFCON_CWGBSEL_POSN                                0x5
#define _APFCON_CWGBSEL_POSITION                            0x5
#define _APFCON_CWGBSEL_SIZE                                0x1
#define _APFCON_CWGBSEL_LENGTH                              0x1
#define _APFCON_CWGBSEL_MASK                                0x20
#define _APFCON_CWGASEL_POSN                                0x6
#define _APFCON_CWGASEL_POSITION                            0x6
#define _APFCON_CWGASEL_SIZE                                0x1
#define _APFCON_CWGASEL_LENGTH                              0x1
#define _APFCON_CWGASEL_MASK                                0x40

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x18C);
#ifndef _LIB_BUILD
asm("ANSELA equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSA0                  :1;
        unsigned ANSA1                  :1;
        unsigned ANSA2                  :1;
        unsigned                        :1;
        unsigned ANSA4                  :1;
    };
    struct {
        unsigned ANSELA                 :6;
    };
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x18C);
// bitfield macros
#define _ANSELA_ANSA0_POSN                                  0x0
#define _ANSELA_ANSA0_POSITION                              0x0
#define _ANSELA_ANSA0_SIZE                                  0x1
#define _ANSELA_ANSA0_LENGTH                                0x1
#define _ANSELA_ANSA0_MASK                                  0x1
#define _ANSELA_ANSA1_POSN                                  0x1
#define _ANSELA_ANSA1_POSITION                              0x1
#define _ANSELA_ANSA1_SIZE                                  0x1
#define _ANSELA_ANSA1_LENGTH                                0x1
#define _ANSELA_ANSA1_MASK                                  0x2
#define _ANSELA_ANSA2_POSN                                  0x2
#define _ANSELA_ANSA2_POSITION                              0x2
#define _ANSELA_ANSA2_SIZE                                  0x1
#define _ANSELA_ANSA2_LENGTH                                0x1
#define _ANSELA_ANSA2_MASK                                  0x4
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

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x20C);
#ifndef _LIB_BUILD
asm("WPUA equ 020Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
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
#define _WPUA_WPUA0_POSN                                    0x0
#define _WPUA_WPUA0_POSITION                                0x0
#define _WPUA_WPUA0_SIZE                                    0x1
#define _WPUA_WPUA0_LENGTH                                  0x1
#define _WPUA_WPUA0_MASK                                    0x1
#define _WPUA_WPUA1_POSN                                    0x1
#define _WPUA_WPUA1_POSITION                                0x1
#define _WPUA_WPUA1_SIZE                                    0x1
#define _WPUA_WPUA1_LENGTH                                  0x1
#define _WPUA_WPUA1_MASK                                    0x2
#define _WPUA_WPUA2_POSN                                    0x2
#define _WPUA_WPUA2_POSITION                                0x2
#define _WPUA_WPUA2_SIZE                                    0x1
#define _WPUA_WPUA2_LENGTH                                  0x1
#define _WPUA_WPUA2_MASK                                    0x4
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

// Register: ODCONA
#define ODCONA ODCONA
extern volatile unsigned char           ODCONA              __at(0x28C);
#ifndef _LIB_BUILD
asm("ODCONA equ 028Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODA0                   :1;
        unsigned ODA1                   :1;
        unsigned ODA2                   :1;
        unsigned                        :1;
        unsigned ODA4                   :1;
        unsigned ODA5                   :1;
    };
} ODCONAbits_t;
extern volatile ODCONAbits_t ODCONAbits __at(0x28C);
// bitfield macros
#define _ODCONA_ODA0_POSN                                   0x0
#define _ODCONA_ODA0_POSITION                               0x0
#define _ODCONA_ODA0_SIZE                                   0x1
#define _ODCONA_ODA0_LENGTH                                 0x1
#define _ODCONA_ODA0_MASK                                   0x1
#define _ODCONA_ODA1_POSN                                   0x1
#define _ODCONA_ODA1_POSITION                               0x1
#define _ODCONA_ODA1_SIZE                                   0x1
#define _ODCONA_ODA1_LENGTH                                 0x1
#define _ODCONA_ODA1_MASK                                   0x2
#define _ODCONA_ODA2_POSN                                   0x2
#define _ODCONA_ODA2_POSITION                               0x2
#define _ODCONA_ODA2_SIZE                                   0x1
#define _ODCONA_ODA2_LENGTH                                 0x1
#define _ODCONA_ODA2_MASK                                   0x4
#define _ODCONA_ODA4_POSN                                   0x4
#define _ODCONA_ODA4_POSITION                               0x4
#define _ODCONA_ODA4_SIZE                                   0x1
#define _ODCONA_ODA4_LENGTH                                 0x1
#define _ODCONA_ODA4_MASK                                   0x10
#define _ODCONA_ODA5_POSN                                   0x5
#define _ODCONA_ODA5_POSITION                               0x5
#define _ODCONA_ODA5_SIZE                                   0x1
#define _ODCONA_ODA5_LENGTH                                 0x1
#define _ODCONA_ODA5_MASK                                   0x20

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0x291);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0291h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x291);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0291h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RL                     :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0x291);
// bitfield macros
#define _CCPR1L_RL_POSN                                     0x0
#define _CCPR1L_RL_POSITION                                 0x0
#define _CCPR1L_RL_SIZE                                     0x8
#define _CCPR1L_RL_LENGTH                                   0x8
#define _CCPR1L_RL_MASK                                     0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x292);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0292h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RH                     :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0x292);
// bitfield macros
#define _CCPR1H_RH_POSN                                     0x0
#define _CCPR1H_RH_POSITION                                 0x0
#define _CCPR1H_RH_SIZE                                     0x8
#define _CCPR1H_RH_LENGTH                                   0x8
#define _CCPR1H_RH_MASK                                     0xFF

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x293);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0293h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned FMT                    :1;
        unsigned OUT                    :1;
        unsigned OE                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned CCP1MODE               :4;
        unsigned CCP1FMT                :1;
        unsigned CCP1OUT                :1;
        unsigned CCP1OE                 :1;
        unsigned CCP1EN                 :1;
    };
    struct {
        unsigned CCP1MODE0              :1;
        unsigned CCP1MODE1              :1;
        unsigned CCP1MODE2              :1;
        unsigned CCP1MODE3              :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x293);
// bitfield macros
#define _CCP1CON_MODE_POSN                                  0x0
#define _CCP1CON_MODE_POSITION                              0x0
#define _CCP1CON_MODE_SIZE                                  0x4
#define _CCP1CON_MODE_LENGTH                                0x4
#define _CCP1CON_MODE_MASK                                  0xF
#define _CCP1CON_FMT_POSN                                   0x4
#define _CCP1CON_FMT_POSITION                               0x4
#define _CCP1CON_FMT_SIZE                                   0x1
#define _CCP1CON_FMT_LENGTH                                 0x1
#define _CCP1CON_FMT_MASK                                   0x10
#define _CCP1CON_OUT_POSN                                   0x5
#define _CCP1CON_OUT_POSITION                               0x5
#define _CCP1CON_OUT_SIZE                                   0x1
#define _CCP1CON_OUT_LENGTH                                 0x1
#define _CCP1CON_OUT_MASK                                   0x20
#define _CCP1CON_OE_POSN                                    0x6
#define _CCP1CON_OE_POSITION                                0x6
#define _CCP1CON_OE_SIZE                                    0x1
#define _CCP1CON_OE_LENGTH                                  0x1
#define _CCP1CON_OE_MASK                                    0x40
#define _CCP1CON_EN_POSN                                    0x7
#define _CCP1CON_EN_POSITION                                0x7
#define _CCP1CON_EN_SIZE                                    0x1
#define _CCP1CON_EN_LENGTH                                  0x1
#define _CCP1CON_EN_MASK                                    0x80
#define _CCP1CON_MODE0_POSN                                 0x0
#define _CCP1CON_MODE0_POSITION                             0x0
#define _CCP1CON_MODE0_SIZE                                 0x1
#define _CCP1CON_MODE0_LENGTH                               0x1
#define _CCP1CON_MODE0_MASK                                 0x1
#define _CCP1CON_MODE1_POSN                                 0x1
#define _CCP1CON_MODE1_POSITION                             0x1
#define _CCP1CON_MODE1_SIZE                                 0x1
#define _CCP1CON_MODE1_LENGTH                               0x1
#define _CCP1CON_MODE1_MASK                                 0x2
#define _CCP1CON_MODE2_POSN                                 0x2
#define _CCP1CON_MODE2_POSITION                             0x2
#define _CCP1CON_MODE2_SIZE                                 0x1
#define _CCP1CON_MODE2_LENGTH                               0x1
#define _CCP1CON_MODE2_MASK                                 0x4
#define _CCP1CON_MODE3_POSN                                 0x3
#define _CCP1CON_MODE3_POSITION                             0x3
#define _CCP1CON_MODE3_SIZE                                 0x1
#define _CCP1CON_MODE3_LENGTH                               0x1
#define _CCP1CON_MODE3_MASK                                 0x8
#define _CCP1CON_CCP1MODE_POSN                              0x0
#define _CCP1CON_CCP1MODE_POSITION                          0x0
#define _CCP1CON_CCP1MODE_SIZE                              0x4
#define _CCP1CON_CCP1MODE_LENGTH                            0x4
#define _CCP1CON_CCP1MODE_MASK                              0xF
#define _CCP1CON_CCP1FMT_POSN                               0x4
#define _CCP1CON_CCP1FMT_POSITION                           0x4
#define _CCP1CON_CCP1FMT_SIZE                               0x1
#define _CCP1CON_CCP1FMT_LENGTH                             0x1
#define _CCP1CON_CCP1FMT_MASK                               0x10
#define _CCP1CON_CCP1OUT_POSN                               0x5
#define _CCP1CON_CCP1OUT_POSITION                           0x5
#define _CCP1CON_CCP1OUT_SIZE                               0x1
#define _CCP1CON_CCP1OUT_LENGTH                             0x1
#define _CCP1CON_CCP1OUT_MASK                               0x20
#define _CCP1CON_CCP1OE_POSN                                0x6
#define _CCP1CON_CCP1OE_POSITION                            0x6
#define _CCP1CON_CCP1OE_SIZE                                0x1
#define _CCP1CON_CCP1OE_LENGTH                              0x1
#define _CCP1CON_CCP1OE_MASK                                0x40
#define _CCP1CON_CCP1EN_POSN                                0x7
#define _CCP1CON_CCP1EN_POSITION                            0x7
#define _CCP1CON_CCP1EN_SIZE                                0x1
#define _CCP1CON_CCP1EN_LENGTH                              0x1
#define _CCP1CON_CCP1EN_MASK                                0x80
#define _CCP1CON_CCP1MODE0_POSN                             0x0
#define _CCP1CON_CCP1MODE0_POSITION                         0x0
#define _CCP1CON_CCP1MODE0_SIZE                             0x1
#define _CCP1CON_CCP1MODE0_LENGTH                           0x1
#define _CCP1CON_CCP1MODE0_MASK                             0x1
#define _CCP1CON_CCP1MODE1_POSN                             0x1
#define _CCP1CON_CCP1MODE1_POSITION                         0x1
#define _CCP1CON_CCP1MODE1_SIZE                             0x1
#define _CCP1CON_CCP1MODE1_LENGTH                           0x1
#define _CCP1CON_CCP1MODE1_MASK                             0x2
#define _CCP1CON_CCP1MODE2_POSN                             0x2
#define _CCP1CON_CCP1MODE2_POSITION                         0x2
#define _CCP1CON_CCP1MODE2_SIZE                             0x1
#define _CCP1CON_CCP1MODE2_LENGTH                           0x1
#define _CCP1CON_CCP1MODE2_MASK                             0x4
#define _CCP1CON_CCP1MODE3_POSN                             0x3
#define _CCP1CON_CCP1MODE3_POSITION                         0x3
#define _CCP1CON_CCP1MODE3_SIZE                             0x1
#define _CCP1CON_CCP1MODE3_LENGTH                           0x1
#define _CCP1CON_CCP1MODE3_MASK                             0x8

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
extern volatile unsigned char           CCP1CAP             __at(0x294);
#ifndef _LIB_BUILD
asm("CCP1CAP equ 0294h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CTS                    :8;
    };
    struct {
        unsigned CTS0                   :1;
        unsigned CTS1                   :1;
    };
    struct {
        unsigned CCP1CTS                :8;
    };
    struct {
        unsigned CCP1CTS0               :1;
        unsigned CCP1CTS1               :1;
    };
} CCP1CAPbits_t;
extern volatile CCP1CAPbits_t CCP1CAPbits __at(0x294);
// bitfield macros
#define _CCP1CAP_CTS_POSN                                   0x0
#define _CCP1CAP_CTS_POSITION                               0x0
#define _CCP1CAP_CTS_SIZE                                   0x8
#define _CCP1CAP_CTS_LENGTH                                 0x8
#define _CCP1CAP_CTS_MASK                                   0xFF
#define _CCP1CAP_CTS0_POSN                                  0x0
#define _CCP1CAP_CTS0_POSITION                              0x0
#define _CCP1CAP_CTS0_SIZE                                  0x1
#define _CCP1CAP_CTS0_LENGTH                                0x1
#define _CCP1CAP_CTS0_MASK                                  0x1
#define _CCP1CAP_CTS1_POSN                                  0x1
#define _CCP1CAP_CTS1_POSITION                              0x1
#define _CCP1CAP_CTS1_SIZE                                  0x1
#define _CCP1CAP_CTS1_LENGTH                                0x1
#define _CCP1CAP_CTS1_MASK                                  0x2
#define _CCP1CAP_CCP1CTS_POSN                               0x0
#define _CCP1CAP_CCP1CTS_POSITION                           0x0
#define _CCP1CAP_CCP1CTS_SIZE                               0x8
#define _CCP1CAP_CCP1CTS_LENGTH                             0x8
#define _CCP1CAP_CCP1CTS_MASK                               0xFF
#define _CCP1CAP_CCP1CTS0_POSN                              0x0
#define _CCP1CAP_CCP1CTS0_POSITION                          0x0
#define _CCP1CAP_CCP1CTS0_SIZE                              0x1
#define _CCP1CAP_CCP1CTS0_LENGTH                            0x1
#define _CCP1CAP_CCP1CTS0_MASK                              0x1
#define _CCP1CAP_CCP1CTS1_POSN                              0x1
#define _CCP1CAP_CCP1CTS1_POSITION                          0x1
#define _CCP1CAP_CCP1CTS1_SIZE                              0x1
#define _CCP1CAP_CCP1CTS1_LENGTH                            0x1
#define _CCP1CAP_CCP1CTS1_MASK                              0x2

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0x298);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0298h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0x298);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0298h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RL                     :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0x298);
// bitfield macros
#define _CCPR2L_RL_POSN                                     0x0
#define _CCPR2L_RL_POSITION                                 0x0
#define _CCPR2L_RL_SIZE                                     0x8
#define _CCPR2L_RL_LENGTH                                   0x8
#define _CCPR2L_RL_MASK                                     0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0x299);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0299h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RH                     :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0x299);
// bitfield macros
#define _CCPR2H_RH_POSN                                     0x0
#define _CCPR2H_RH_POSITION                                 0x0
#define _CCPR2H_RH_SIZE                                     0x8
#define _CCPR2H_RH_LENGTH                                   0x8
#define _CCPR2H_RH_MASK                                     0xFF

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0x29A);
#ifndef _LIB_BUILD
asm("CCP2CON equ 029Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned FMT                    :1;
        unsigned OUT                    :1;
        unsigned OE                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned CCP2MODE               :4;
        unsigned CCP2FMT                :1;
        unsigned CCP2OUT                :1;
        unsigned CCP2OE                 :1;
        unsigned CCP2EN                 :1;
    };
    struct {
        unsigned CCP2MODE0              :1;
        unsigned CCP2MODE1              :1;
        unsigned CCP2MODE2              :1;
        unsigned CCP2MODE3              :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x29A);
// bitfield macros
#define _CCP2CON_MODE_POSN                                  0x0
#define _CCP2CON_MODE_POSITION                              0x0
#define _CCP2CON_MODE_SIZE                                  0x4
#define _CCP2CON_MODE_LENGTH                                0x4
#define _CCP2CON_MODE_MASK                                  0xF
#define _CCP2CON_FMT_POSN                                   0x4
#define _CCP2CON_FMT_POSITION                               0x4
#define _CCP2CON_FMT_SIZE                                   0x1
#define _CCP2CON_FMT_LENGTH                                 0x1
#define _CCP2CON_FMT_MASK                                   0x10
#define _CCP2CON_OUT_POSN                                   0x5
#define _CCP2CON_OUT_POSITION                               0x5
#define _CCP2CON_OUT_SIZE                                   0x1
#define _CCP2CON_OUT_LENGTH                                 0x1
#define _CCP2CON_OUT_MASK                                   0x20
#define _CCP2CON_OE_POSN                                    0x6
#define _CCP2CON_OE_POSITION                                0x6
#define _CCP2CON_OE_SIZE                                    0x1
#define _CCP2CON_OE_LENGTH                                  0x1
#define _CCP2CON_OE_MASK                                    0x40
#define _CCP2CON_EN_POSN                                    0x7
#define _CCP2CON_EN_POSITION                                0x7
#define _CCP2CON_EN_SIZE                                    0x1
#define _CCP2CON_EN_LENGTH                                  0x1
#define _CCP2CON_EN_MASK                                    0x80
#define _CCP2CON_MODE0_POSN                                 0x0
#define _CCP2CON_MODE0_POSITION                             0x0
#define _CCP2CON_MODE0_SIZE                                 0x1
#define _CCP2CON_MODE0_LENGTH                               0x1
#define _CCP2CON_MODE0_MASK                                 0x1
#define _CCP2CON_MODE1_POSN                                 0x1
#define _CCP2CON_MODE1_POSITION                             0x1
#define _CCP2CON_MODE1_SIZE                                 0x1
#define _CCP2CON_MODE1_LENGTH                               0x1
#define _CCP2CON_MODE1_MASK                                 0x2
#define _CCP2CON_MODE2_POSN                                 0x2
#define _CCP2CON_MODE2_POSITION                             0x2
#define _CCP2CON_MODE2_SIZE                                 0x1
#define _CCP2CON_MODE2_LENGTH                               0x1
#define _CCP2CON_MODE2_MASK                                 0x4
#define _CCP2CON_MODE3_POSN                                 0x3
#define _CCP2CON_MODE3_POSITION                             0x3
#define _CCP2CON_MODE3_SIZE                                 0x1
#define _CCP2CON_MODE3_LENGTH                               0x1
#define _CCP2CON_MODE3_MASK                                 0x8
#define _CCP2CON_CCP2MODE_POSN                              0x0
#define _CCP2CON_CCP2MODE_POSITION                          0x0
#define _CCP2CON_CCP2MODE_SIZE                              0x4
#define _CCP2CON_CCP2MODE_LENGTH                            0x4
#define _CCP2CON_CCP2MODE_MASK                              0xF
#define _CCP2CON_CCP2FMT_POSN                               0x4
#define _CCP2CON_CCP2FMT_POSITION                           0x4
#define _CCP2CON_CCP2FMT_SIZE                               0x1
#define _CCP2CON_CCP2FMT_LENGTH                             0x1
#define _CCP2CON_CCP2FMT_MASK                               0x10
#define _CCP2CON_CCP2OUT_POSN                               0x5
#define _CCP2CON_CCP2OUT_POSITION                           0x5
#define _CCP2CON_CCP2OUT_SIZE                               0x1
#define _CCP2CON_CCP2OUT_LENGTH                             0x1
#define _CCP2CON_CCP2OUT_MASK                               0x20
#define _CCP2CON_CCP2OE_POSN                                0x6
#define _CCP2CON_CCP2OE_POSITION                            0x6
#define _CCP2CON_CCP2OE_SIZE                                0x1
#define _CCP2CON_CCP2OE_LENGTH                              0x1
#define _CCP2CON_CCP2OE_MASK                                0x40
#define _CCP2CON_CCP2EN_POSN                                0x7
#define _CCP2CON_CCP2EN_POSITION                            0x7
#define _CCP2CON_CCP2EN_SIZE                                0x1
#define _CCP2CON_CCP2EN_LENGTH                              0x1
#define _CCP2CON_CCP2EN_MASK                                0x80
#define _CCP2CON_CCP2MODE0_POSN                             0x0
#define _CCP2CON_CCP2MODE0_POSITION                         0x0
#define _CCP2CON_CCP2MODE0_SIZE                             0x1
#define _CCP2CON_CCP2MODE0_LENGTH                           0x1
#define _CCP2CON_CCP2MODE0_MASK                             0x1
#define _CCP2CON_CCP2MODE1_POSN                             0x1
#define _CCP2CON_CCP2MODE1_POSITION                         0x1
#define _CCP2CON_CCP2MODE1_SIZE                             0x1
#define _CCP2CON_CCP2MODE1_LENGTH                           0x1
#define _CCP2CON_CCP2MODE1_MASK                             0x2
#define _CCP2CON_CCP2MODE2_POSN                             0x2
#define _CCP2CON_CCP2MODE2_POSITION                         0x2
#define _CCP2CON_CCP2MODE2_SIZE                             0x1
#define _CCP2CON_CCP2MODE2_LENGTH                           0x1
#define _CCP2CON_CCP2MODE2_MASK                             0x4
#define _CCP2CON_CCP2MODE3_POSN                             0x3
#define _CCP2CON_CCP2MODE3_POSITION                         0x3
#define _CCP2CON_CCP2MODE3_SIZE                             0x1
#define _CCP2CON_CCP2MODE3_LENGTH                           0x1
#define _CCP2CON_CCP2MODE3_MASK                             0x8

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
extern volatile unsigned char           CCP2CAP             __at(0x29B);
#ifndef _LIB_BUILD
asm("CCP2CAP equ 029Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CTS                    :8;
    };
    struct {
        unsigned CTS0                   :1;
        unsigned CTS1                   :1;
    };
    struct {
        unsigned CCP2CTS                :8;
    };
    struct {
        unsigned CCP2CTS0               :1;
        unsigned CCP2CTS1               :1;
    };
} CCP2CAPbits_t;
extern volatile CCP2CAPbits_t CCP2CAPbits __at(0x29B);
// bitfield macros
#define _CCP2CAP_CTS_POSN                                   0x0
#define _CCP2CAP_CTS_POSITION                               0x0
#define _CCP2CAP_CTS_SIZE                                   0x8
#define _CCP2CAP_CTS_LENGTH                                 0x8
#define _CCP2CAP_CTS_MASK                                   0xFF
#define _CCP2CAP_CTS0_POSN                                  0x0
#define _CCP2CAP_CTS0_POSITION                              0x0
#define _CCP2CAP_CTS0_SIZE                                  0x1
#define _CCP2CAP_CTS0_LENGTH                                0x1
#define _CCP2CAP_CTS0_MASK                                  0x1
#define _CCP2CAP_CTS1_POSN                                  0x1
#define _CCP2CAP_CTS1_POSITION                              0x1
#define _CCP2CAP_CTS1_SIZE                                  0x1
#define _CCP2CAP_CTS1_LENGTH                                0x1
#define _CCP2CAP_CTS1_MASK                                  0x2
#define _CCP2CAP_CCP2CTS_POSN                               0x0
#define _CCP2CAP_CCP2CTS_POSITION                           0x0
#define _CCP2CAP_CCP2CTS_SIZE                               0x8
#define _CCP2CAP_CCP2CTS_LENGTH                             0x8
#define _CCP2CAP_CCP2CTS_MASK                               0xFF
#define _CCP2CAP_CCP2CTS0_POSN                              0x0
#define _CCP2CAP_CCP2CTS0_POSITION                          0x0
#define _CCP2CAP_CCP2CTS0_SIZE                              0x1
#define _CCP2CAP_CCP2CTS0_LENGTH                            0x1
#define _CCP2CAP_CCP2CTS0_MASK                              0x1
#define _CCP2CAP_CCP2CTS1_POSN                              0x1
#define _CCP2CAP_CCP2CTS1_POSITION                          0x1
#define _CCP2CAP_CCP2CTS1_SIZE                              0x1
#define _CCP2CAP_CCP2CTS1_LENGTH                            0x1
#define _CCP2CAP_CCP2CTS1_MASK                              0x2

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
extern volatile unsigned char           CCPTMRS             __at(0x29E);
#ifndef _LIB_BUILD
asm("CCPTMRS equ 029Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1TSEL               :2;
        unsigned CCP2TSEL               :2;
    };
    struct {
        unsigned CCP1TSEL0              :1;
        unsigned CCP1TSEL1              :1;
        unsigned CCP2TSEL0              :1;
        unsigned CCP2TSEL1              :1;
    };
} CCPTMRSbits_t;
extern volatile CCPTMRSbits_t CCPTMRSbits __at(0x29E);
// bitfield macros
#define _CCPTMRS_CCP1TSEL_POSN                              0x0
#define _CCPTMRS_CCP1TSEL_POSITION                          0x0
#define _CCPTMRS_CCP1TSEL_SIZE                              0x2
#define _CCPTMRS_CCP1TSEL_LENGTH                            0x2
#define _CCPTMRS_CCP1TSEL_MASK                              0x3
#define _CCPTMRS_CCP2TSEL_POSN                              0x2
#define _CCPTMRS_CCP2TSEL_POSITION                          0x2
#define _CCPTMRS_CCP2TSEL_SIZE                              0x2
#define _CCPTMRS_CCP2TSEL_LENGTH                            0x2
#define _CCPTMRS_CCP2TSEL_MASK                              0xC
#define _CCPTMRS_CCP1TSEL0_POSN                             0x0
#define _CCPTMRS_CCP1TSEL0_POSITION                         0x0
#define _CCPTMRS_CCP1TSEL0_SIZE                             0x1
#define _CCPTMRS_CCP1TSEL0_LENGTH                           0x1
#define _CCPTMRS_CCP1TSEL0_MASK                             0x1
#define _CCPTMRS_CCP1TSEL1_POSN                             0x1
#define _CCPTMRS_CCP1TSEL1_POSITION                         0x1
#define _CCPTMRS_CCP1TSEL1_SIZE                             0x1
#define _CCPTMRS_CCP1TSEL1_LENGTH                           0x1
#define _CCPTMRS_CCP1TSEL1_MASK                             0x2
#define _CCPTMRS_CCP2TSEL0_POSN                             0x2
#define _CCPTMRS_CCP2TSEL0_POSITION                         0x2
#define _CCPTMRS_CCP2TSEL0_SIZE                             0x1
#define _CCPTMRS_CCP2TSEL0_LENGTH                           0x1
#define _CCPTMRS_CCP2TSEL0_MASK                             0x4
#define _CCPTMRS_CCP2TSEL1_POSN                             0x3
#define _CCPTMRS_CCP2TSEL1_POSITION                         0x3
#define _CCPTMRS_CCP2TSEL1_SIZE                             0x1
#define _CCPTMRS_CCP2TSEL1_LENGTH                           0x1
#define _CCPTMRS_CCP2TSEL1_MASK                             0x8

// Register: SLRCONA
#define SLRCONA SLRCONA
extern volatile unsigned char           SLRCONA             __at(0x30C);
#ifndef _LIB_BUILD
asm("SLRCONA equ 030Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRA0                  :1;
        unsigned SLRA1                  :1;
        unsigned SLRA2                  :1;
        unsigned                        :1;
        unsigned SLRA4                  :1;
        unsigned SLRA5                  :1;
    };
} SLRCONAbits_t;
extern volatile SLRCONAbits_t SLRCONAbits __at(0x30C);
// bitfield macros
#define _SLRCONA_SLRA0_POSN                                 0x0
#define _SLRCONA_SLRA0_POSITION                             0x0
#define _SLRCONA_SLRA0_SIZE                                 0x1
#define _SLRCONA_SLRA0_LENGTH                               0x1
#define _SLRCONA_SLRA0_MASK                                 0x1
#define _SLRCONA_SLRA1_POSN                                 0x1
#define _SLRCONA_SLRA1_POSITION                             0x1
#define _SLRCONA_SLRA1_SIZE                                 0x1
#define _SLRCONA_SLRA1_LENGTH                               0x1
#define _SLRCONA_SLRA1_MASK                                 0x2
#define _SLRCONA_SLRA2_POSN                                 0x2
#define _SLRCONA_SLRA2_POSITION                             0x2
#define _SLRCONA_SLRA2_SIZE                                 0x1
#define _SLRCONA_SLRA2_LENGTH                               0x1
#define _SLRCONA_SLRA2_MASK                                 0x4
#define _SLRCONA_SLRA4_POSN                                 0x4
#define _SLRCONA_SLRA4_POSITION                             0x4
#define _SLRCONA_SLRA4_SIZE                                 0x1
#define _SLRCONA_SLRA4_LENGTH                               0x1
#define _SLRCONA_SLRA4_MASK                                 0x10
#define _SLRCONA_SLRA5_POSN                                 0x5
#define _SLRCONA_SLRA5_POSITION                             0x5
#define _SLRCONA_SLRA5_SIZE                                 0x1
#define _SLRCONA_SLRA5_LENGTH                               0x1
#define _SLRCONA_SLRA5_MASK                                 0x20

// Register: INLVLA
#define INLVLA INLVLA
extern volatile unsigned char           INLVLA              __at(0x38C);
#ifndef _LIB_BUILD
asm("INLVLA equ 038Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLA0                :1;
        unsigned INLVLA1                :1;
        unsigned INLVLA2                :1;
        unsigned INLVLA3                :1;
        unsigned INLVLA4                :1;
        unsigned INLVLA5                :1;
    };
} INLVLAbits_t;
extern volatile INLVLAbits_t INLVLAbits __at(0x38C);
// bitfield macros
#define _INLVLA_INLVLA0_POSN                                0x0
#define _INLVLA_INLVLA0_POSITION                            0x0
#define _INLVLA_INLVLA0_SIZE                                0x1
#define _INLVLA_INLVLA0_LENGTH                              0x1
#define _INLVLA_INLVLA0_MASK                                0x1
#define _INLVLA_INLVLA1_POSN                                0x1
#define _INLVLA_INLVLA1_POSITION                            0x1
#define _INLVLA_INLVLA1_SIZE                                0x1
#define _INLVLA_INLVLA1_LENGTH                              0x1
#define _INLVLA_INLVLA1_MASK                                0x2
#define _INLVLA_INLVLA2_POSN                                0x2
#define _INLVLA_INLVLA2_POSITION                            0x2
#define _INLVLA_INLVLA2_SIZE                                0x1
#define _INLVLA_INLVLA2_LENGTH                              0x1
#define _INLVLA_INLVLA2_MASK                                0x4
#define _INLVLA_INLVLA3_POSN                                0x3
#define _INLVLA_INLVLA3_POSITION                            0x3
#define _INLVLA_INLVLA3_SIZE                                0x1
#define _INLVLA_INLVLA3_LENGTH                              0x1
#define _INLVLA_INLVLA3_MASK                                0x8
#define _INLVLA_INLVLA4_POSN                                0x4
#define _INLVLA_INLVLA4_POSITION                            0x4
#define _INLVLA_INLVLA4_SIZE                                0x1
#define _INLVLA_INLVLA4_LENGTH                              0x1
#define _INLVLA_INLVLA4_MASK                                0x10
#define _INLVLA_INLVLA5_POSN                                0x5
#define _INLVLA_INLVLA5_POSITION                            0x5
#define _INLVLA_INLVLA5_SIZE                                0x1
#define _INLVLA_INLVLA5_LENGTH                              0x1
#define _INLVLA_INLVLA5_MASK                                0x20

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
        unsigned IOCAP2                 :1;
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
#define _IOCAP_IOCAP2_POSN                                  0x2
#define _IOCAP_IOCAP2_POSITION                              0x2
#define _IOCAP_IOCAP2_SIZE                                  0x1
#define _IOCAP_IOCAP2_LENGTH                                0x1
#define _IOCAP_IOCAP2_MASK                                  0x4
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
        unsigned IOCAN2                 :1;
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
#define _IOCAN_IOCAN2_POSN                                  0x2
#define _IOCAN_IOCAN2_POSITION                              0x2
#define _IOCAN_IOCAN2_SIZE                                  0x1
#define _IOCAN_IOCAN2_LENGTH                                0x1
#define _IOCAN_IOCAN2_MASK                                  0x4
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
        unsigned IOCAF2                 :1;
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
#define _IOCAF_IOCAF2_POSN                                  0x2
#define _IOCAF_IOCAF2_POSITION                              0x2
#define _IOCAF_IOCAF2_SIZE                                  0x1
#define _IOCAF_IOCAF2_LENGTH                                0x1
#define _IOCAF_IOCAF2_MASK                                  0x4
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

// Register: T4TMR
#define T4TMR T4TMR
extern volatile unsigned char           T4TMR               __at(0x413);
#ifndef _LIB_BUILD
asm("T4TMR equ 0413h");
#endif
// aliases
extern volatile unsigned char           TMR4                __at(0x413);
#ifndef _LIB_BUILD
asm("TMR4 equ 0413h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR4                   :8;
    };
} T4TMRbits_t;
extern volatile T4TMRbits_t T4TMRbits __at(0x413);
// bitfield macros
#define _T4TMR_TMR4_POSN                                    0x0
#define _T4TMR_TMR4_POSITION                                0x0
#define _T4TMR_TMR4_SIZE                                    0x8
#define _T4TMR_TMR4_LENGTH                                  0x8
#define _T4TMR_TMR4_MASK                                    0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR4                   :8;
    };
} TMR4bits_t;
extern volatile TMR4bits_t TMR4bits __at(0x413);
// bitfield macros
#define _TMR4_TMR4_POSN                                     0x0
#define _TMR4_TMR4_POSITION                                 0x0
#define _TMR4_TMR4_SIZE                                     0x8
#define _TMR4_TMR4_LENGTH                                   0x8
#define _TMR4_TMR4_MASK                                     0xFF

// Register: T4PR
#define T4PR T4PR
extern volatile unsigned char           T4PR                __at(0x414);
#ifndef _LIB_BUILD
asm("T4PR equ 0414h");
#endif
// aliases
extern volatile unsigned char           _PR4                 __at(0x414);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR4 equ 0414h");  // Note: Changed by MikroE
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PR4                    :8;  // Note: Changed by MikroE
    };
} T4PRbits_t;
extern volatile T4PRbits_t T4PRbits __at(0x414);
// bitfield macros
#define _T4PR_PR4_POSN                                      0x0
#define _T4PR_PR4_POSITION                                  0x0
#define _T4PR_PR4_SIZE                                      0x8
#define _T4PR_PR4_LENGTH                                    0x8
#define _T4PR_PR4_MASK                                      0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned _PR4                    :8;  // Note: Changed by MikroE
    };
} PR4bits_t;
extern volatile PR4bits_t PR4bits __at(0x414);
// bitfield macros
#define _PR4_PR4_POSN                                       0x0
#define _PR4_PR4_POSITION                                   0x0
#define _PR4_PR4_SIZE                                       0x8
#define _PR4_PR4_LENGTH                                     0x8
#define _PR4_PR4_MASK                                       0xFF

// Register: T4CON
#define T4CON T4CON
extern volatile unsigned char           T4CON               __at(0x415);
#ifndef _LIB_BUILD
asm("T4CON equ 0415h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OUTPS                  :4;
        unsigned CKPS                   :3;
        unsigned ON                     :1;
    };
    struct {
        unsigned T4OUTPS                :4;
        unsigned T4CKPS                 :3;
        unsigned T4ON                   :1;
    };
    struct {
        unsigned T4OUTPS0               :1;
        unsigned T4OUTPS1               :1;
        unsigned T4OUTPS2               :1;
        unsigned T4OUTPS3               :1;
        unsigned T4CKPS0                :1;
        unsigned T4CKPS1                :1;
        unsigned T4CKPS2                :1;
    };
    struct {
        unsigned OUTPS0                 :1;
        unsigned OUTPS1                 :1;
        unsigned OUTPS2                 :1;
        unsigned OUTPS3                 :1;
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
        unsigned CKPS2                  :1;
        unsigned TMR4ON                 :1;
    };
} T4CONbits_t;
extern volatile T4CONbits_t T4CONbits __at(0x415);
// bitfield macros
#define _T4CON_OUTPS_POSN                                   0x0
#define _T4CON_OUTPS_POSITION                               0x0
#define _T4CON_OUTPS_SIZE                                   0x4
#define _T4CON_OUTPS_LENGTH                                 0x4
#define _T4CON_OUTPS_MASK                                   0xF
#define _T4CON_CKPS_POSN                                    0x4
#define _T4CON_CKPS_POSITION                                0x4
#define _T4CON_CKPS_SIZE                                    0x3
#define _T4CON_CKPS_LENGTH                                  0x3
#define _T4CON_CKPS_MASK                                    0x70
#define _T4CON_ON_POSN                                      0x7
#define _T4CON_ON_POSITION                                  0x7
#define _T4CON_ON_SIZE                                      0x1
#define _T4CON_ON_LENGTH                                    0x1
#define _T4CON_ON_MASK                                      0x80
#define _T4CON_T4OUTPS_POSN                                 0x0
#define _T4CON_T4OUTPS_POSITION                             0x0
#define _T4CON_T4OUTPS_SIZE                                 0x4
#define _T4CON_T4OUTPS_LENGTH                               0x4
#define _T4CON_T4OUTPS_MASK                                 0xF
#define _T4CON_T4CKPS_POSN                                  0x4
#define _T4CON_T4CKPS_POSITION                              0x4
#define _T4CON_T4CKPS_SIZE                                  0x3
#define _T4CON_T4CKPS_LENGTH                                0x3
#define _T4CON_T4CKPS_MASK                                  0x70
#define _T4CON_T4ON_POSN                                    0x7
#define _T4CON_T4ON_POSITION                                0x7
#define _T4CON_T4ON_SIZE                                    0x1
#define _T4CON_T4ON_LENGTH                                  0x1
#define _T4CON_T4ON_MASK                                    0x80
#define _T4CON_T4OUTPS0_POSN                                0x0
#define _T4CON_T4OUTPS0_POSITION                            0x0
#define _T4CON_T4OUTPS0_SIZE                                0x1
#define _T4CON_T4OUTPS0_LENGTH                              0x1
#define _T4CON_T4OUTPS0_MASK                                0x1
#define _T4CON_T4OUTPS1_POSN                                0x1
#define _T4CON_T4OUTPS1_POSITION                            0x1
#define _T4CON_T4OUTPS1_SIZE                                0x1
#define _T4CON_T4OUTPS1_LENGTH                              0x1
#define _T4CON_T4OUTPS1_MASK                                0x2
#define _T4CON_T4OUTPS2_POSN                                0x2
#define _T4CON_T4OUTPS2_POSITION                            0x2
#define _T4CON_T4OUTPS2_SIZE                                0x1
#define _T4CON_T4OUTPS2_LENGTH                              0x1
#define _T4CON_T4OUTPS2_MASK                                0x4
#define _T4CON_T4OUTPS3_POSN                                0x3
#define _T4CON_T4OUTPS3_POSITION                            0x3
#define _T4CON_T4OUTPS3_SIZE                                0x1
#define _T4CON_T4OUTPS3_LENGTH                              0x1
#define _T4CON_T4OUTPS3_MASK                                0x8
#define _T4CON_T4CKPS0_POSN                                 0x4
#define _T4CON_T4CKPS0_POSITION                             0x4
#define _T4CON_T4CKPS0_SIZE                                 0x1
#define _T4CON_T4CKPS0_LENGTH                               0x1
#define _T4CON_T4CKPS0_MASK                                 0x10
#define _T4CON_T4CKPS1_POSN                                 0x5
#define _T4CON_T4CKPS1_POSITION                             0x5
#define _T4CON_T4CKPS1_SIZE                                 0x1
#define _T4CON_T4CKPS1_LENGTH                               0x1
#define _T4CON_T4CKPS1_MASK                                 0x20
#define _T4CON_T4CKPS2_POSN                                 0x6
#define _T4CON_T4CKPS2_POSITION                             0x6
#define _T4CON_T4CKPS2_SIZE                                 0x1
#define _T4CON_T4CKPS2_LENGTH                               0x1
#define _T4CON_T4CKPS2_MASK                                 0x40
#define _T4CON_OUTPS0_POSN                                  0x0
#define _T4CON_OUTPS0_POSITION                              0x0
#define _T4CON_OUTPS0_SIZE                                  0x1
#define _T4CON_OUTPS0_LENGTH                                0x1
#define _T4CON_OUTPS0_MASK                                  0x1
#define _T4CON_OUTPS1_POSN                                  0x1
#define _T4CON_OUTPS1_POSITION                              0x1
#define _T4CON_OUTPS1_SIZE                                  0x1
#define _T4CON_OUTPS1_LENGTH                                0x1
#define _T4CON_OUTPS1_MASK                                  0x2
#define _T4CON_OUTPS2_POSN                                  0x2
#define _T4CON_OUTPS2_POSITION                              0x2
#define _T4CON_OUTPS2_SIZE                                  0x1
#define _T4CON_OUTPS2_LENGTH                                0x1
#define _T4CON_OUTPS2_MASK                                  0x4
#define _T4CON_OUTPS3_POSN                                  0x3
#define _T4CON_OUTPS3_POSITION                              0x3
#define _T4CON_OUTPS3_SIZE                                  0x1
#define _T4CON_OUTPS3_LENGTH                                0x1
#define _T4CON_OUTPS3_MASK                                  0x8
#define _T4CON_CKPS0_POSN                                   0x4
#define _T4CON_CKPS0_POSITION                               0x4
#define _T4CON_CKPS0_SIZE                                   0x1
#define _T4CON_CKPS0_LENGTH                                 0x1
#define _T4CON_CKPS0_MASK                                   0x10
#define _T4CON_CKPS1_POSN                                   0x5
#define _T4CON_CKPS1_POSITION                               0x5
#define _T4CON_CKPS1_SIZE                                   0x1
#define _T4CON_CKPS1_LENGTH                                 0x1
#define _T4CON_CKPS1_MASK                                   0x20
#define _T4CON_CKPS2_POSN                                   0x6
#define _T4CON_CKPS2_POSITION                               0x6
#define _T4CON_CKPS2_SIZE                                   0x1
#define _T4CON_CKPS2_LENGTH                                 0x1
#define _T4CON_CKPS2_MASK                                   0x40
#define _T4CON_TMR4ON_POSN                                  0x7
#define _T4CON_TMR4ON_POSITION                              0x7
#define _T4CON_TMR4ON_SIZE                                  0x1
#define _T4CON_TMR4ON_LENGTH                                0x1
#define _T4CON_TMR4ON_MASK                                  0x80

// Register: T4HLT
#define T4HLT T4HLT
extern volatile unsigned char           T4HLT               __at(0x416);
#ifndef _LIB_BUILD
asm("T4HLT equ 0416h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned                        :1;
        unsigned CKSYNC                 :1;
        unsigned CKPOL                  :1;
        unsigned PSYNC                  :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned T4MODE                 :4;
        unsigned                        :1;
        unsigned T4CKSYNC               :1;
        unsigned T4CKPOL                :1;
        unsigned T4PSYNC                :1;
    };
    struct {
        unsigned T4MODE0                :1;
        unsigned T4MODE1                :1;
        unsigned T4MODE2                :1;
        unsigned T4MODE3                :1;
    };
} T4HLTbits_t;
extern volatile T4HLTbits_t T4HLTbits __at(0x416);
// bitfield macros
#define _T4HLT_MODE_POSN                                    0x0
#define _T4HLT_MODE_POSITION                                0x0
#define _T4HLT_MODE_SIZE                                    0x4
#define _T4HLT_MODE_LENGTH                                  0x4
#define _T4HLT_MODE_MASK                                    0xF
#define _T4HLT_CKSYNC_POSN                                  0x5
#define _T4HLT_CKSYNC_POSITION                              0x5
#define _T4HLT_CKSYNC_SIZE                                  0x1
#define _T4HLT_CKSYNC_LENGTH                                0x1
#define _T4HLT_CKSYNC_MASK                                  0x20
#define _T4HLT_CKPOL_POSN                                   0x6
#define _T4HLT_CKPOL_POSITION                               0x6
#define _T4HLT_CKPOL_SIZE                                   0x1
#define _T4HLT_CKPOL_LENGTH                                 0x1
#define _T4HLT_CKPOL_MASK                                   0x40
#define _T4HLT_PSYNC_POSN                                   0x7
#define _T4HLT_PSYNC_POSITION                               0x7
#define _T4HLT_PSYNC_SIZE                                   0x1
#define _T4HLT_PSYNC_LENGTH                                 0x1
#define _T4HLT_PSYNC_MASK                                   0x80
#define _T4HLT_MODE0_POSN                                   0x0
#define _T4HLT_MODE0_POSITION                               0x0
#define _T4HLT_MODE0_SIZE                                   0x1
#define _T4HLT_MODE0_LENGTH                                 0x1
#define _T4HLT_MODE0_MASK                                   0x1
#define _T4HLT_MODE1_POSN                                   0x1
#define _T4HLT_MODE1_POSITION                               0x1
#define _T4HLT_MODE1_SIZE                                   0x1
#define _T4HLT_MODE1_LENGTH                                 0x1
#define _T4HLT_MODE1_MASK                                   0x2
#define _T4HLT_MODE2_POSN                                   0x2
#define _T4HLT_MODE2_POSITION                               0x2
#define _T4HLT_MODE2_SIZE                                   0x1
#define _T4HLT_MODE2_LENGTH                                 0x1
#define _T4HLT_MODE2_MASK                                   0x4
#define _T4HLT_MODE3_POSN                                   0x3
#define _T4HLT_MODE3_POSITION                               0x3
#define _T4HLT_MODE3_SIZE                                   0x1
#define _T4HLT_MODE3_LENGTH                                 0x1
#define _T4HLT_MODE3_MASK                                   0x8
#define _T4HLT_T4MODE_POSN                                  0x0
#define _T4HLT_T4MODE_POSITION                              0x0
#define _T4HLT_T4MODE_SIZE                                  0x4
#define _T4HLT_T4MODE_LENGTH                                0x4
#define _T4HLT_T4MODE_MASK                                  0xF
#define _T4HLT_T4CKSYNC_POSN                                0x5
#define _T4HLT_T4CKSYNC_POSITION                            0x5
#define _T4HLT_T4CKSYNC_SIZE                                0x1
#define _T4HLT_T4CKSYNC_LENGTH                              0x1
#define _T4HLT_T4CKSYNC_MASK                                0x20
#define _T4HLT_T4CKPOL_POSN                                 0x6
#define _T4HLT_T4CKPOL_POSITION                             0x6
#define _T4HLT_T4CKPOL_SIZE                                 0x1
#define _T4HLT_T4CKPOL_LENGTH                               0x1
#define _T4HLT_T4CKPOL_MASK                                 0x40
#define _T4HLT_T4PSYNC_POSN                                 0x7
#define _T4HLT_T4PSYNC_POSITION                             0x7
#define _T4HLT_T4PSYNC_SIZE                                 0x1
#define _T4HLT_T4PSYNC_LENGTH                               0x1
#define _T4HLT_T4PSYNC_MASK                                 0x80
#define _T4HLT_T4MODE0_POSN                                 0x0
#define _T4HLT_T4MODE0_POSITION                             0x0
#define _T4HLT_T4MODE0_SIZE                                 0x1
#define _T4HLT_T4MODE0_LENGTH                               0x1
#define _T4HLT_T4MODE0_MASK                                 0x1
#define _T4HLT_T4MODE1_POSN                                 0x1
#define _T4HLT_T4MODE1_POSITION                             0x1
#define _T4HLT_T4MODE1_SIZE                                 0x1
#define _T4HLT_T4MODE1_LENGTH                               0x1
#define _T4HLT_T4MODE1_MASK                                 0x2
#define _T4HLT_T4MODE2_POSN                                 0x2
#define _T4HLT_T4MODE2_POSITION                             0x2
#define _T4HLT_T4MODE2_SIZE                                 0x1
#define _T4HLT_T4MODE2_LENGTH                               0x1
#define _T4HLT_T4MODE2_MASK                                 0x4
#define _T4HLT_T4MODE3_POSN                                 0x3
#define _T4HLT_T4MODE3_POSITION                             0x3
#define _T4HLT_T4MODE3_SIZE                                 0x1
#define _T4HLT_T4MODE3_LENGTH                               0x1
#define _T4HLT_T4MODE3_MASK                                 0x8

// Register: T4CLKCON
#define T4CLKCON T4CLKCON
extern volatile unsigned char           T4CLKCON            __at(0x417);
#ifndef _LIB_BUILD
asm("T4CLKCON equ 0417h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T4CS                   :3;
    };
    struct {
        unsigned T4CS0                  :1;
        unsigned T4CS1                  :1;
        unsigned T4CS2                  :1;
    };
} T4CLKCONbits_t;
extern volatile T4CLKCONbits_t T4CLKCONbits __at(0x417);
// bitfield macros
#define _T4CLKCON_T4CS_POSN                                 0x0
#define _T4CLKCON_T4CS_POSITION                             0x0
#define _T4CLKCON_T4CS_SIZE                                 0x3
#define _T4CLKCON_T4CS_LENGTH                               0x3
#define _T4CLKCON_T4CS_MASK                                 0x7
#define _T4CLKCON_T4CS0_POSN                                0x0
#define _T4CLKCON_T4CS0_POSITION                            0x0
#define _T4CLKCON_T4CS0_SIZE                                0x1
#define _T4CLKCON_T4CS0_LENGTH                              0x1
#define _T4CLKCON_T4CS0_MASK                                0x1
#define _T4CLKCON_T4CS1_POSN                                0x1
#define _T4CLKCON_T4CS1_POSITION                            0x1
#define _T4CLKCON_T4CS1_SIZE                                0x1
#define _T4CLKCON_T4CS1_LENGTH                              0x1
#define _T4CLKCON_T4CS1_MASK                                0x2
#define _T4CLKCON_T4CS2_POSN                                0x2
#define _T4CLKCON_T4CS2_POSITION                            0x2
#define _T4CLKCON_T4CS2_SIZE                                0x1
#define _T4CLKCON_T4CS2_LENGTH                              0x1
#define _T4CLKCON_T4CS2_MASK                                0x4

// Register: T4RST
#define T4RST T4RST
extern volatile unsigned char           T4RST               __at(0x418);
#ifndef _LIB_BUILD
asm("T4RST equ 0418h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RSEL                   :4;
    };
    struct {
        unsigned RSEL0                  :1;
        unsigned RSEL1                  :1;
        unsigned RSEL2                  :1;
        unsigned RSEL3                  :1;
    };
    struct {
        unsigned T4RSEL                 :4;
    };
    struct {
        unsigned T4RSEL0                :1;
        unsigned T4RSEL1                :1;
        unsigned T4RSEL2                :1;
        unsigned T4RSEL3                :1;
    };
} T4RSTbits_t;
extern volatile T4RSTbits_t T4RSTbits __at(0x418);
// bitfield macros
#define _T4RST_RSEL_POSN                                    0x0
#define _T4RST_RSEL_POSITION                                0x0
#define _T4RST_RSEL_SIZE                                    0x4
#define _T4RST_RSEL_LENGTH                                  0x4
#define _T4RST_RSEL_MASK                                    0xF
#define _T4RST_RSEL0_POSN                                   0x0
#define _T4RST_RSEL0_POSITION                               0x0
#define _T4RST_RSEL0_SIZE                                   0x1
#define _T4RST_RSEL0_LENGTH                                 0x1
#define _T4RST_RSEL0_MASK                                   0x1
#define _T4RST_RSEL1_POSN                                   0x1
#define _T4RST_RSEL1_POSITION                               0x1
#define _T4RST_RSEL1_SIZE                                   0x1
#define _T4RST_RSEL1_LENGTH                                 0x1
#define _T4RST_RSEL1_MASK                                   0x2
#define _T4RST_RSEL2_POSN                                   0x2
#define _T4RST_RSEL2_POSITION                               0x2
#define _T4RST_RSEL2_SIZE                                   0x1
#define _T4RST_RSEL2_LENGTH                                 0x1
#define _T4RST_RSEL2_MASK                                   0x4
#define _T4RST_RSEL3_POSN                                   0x3
#define _T4RST_RSEL3_POSITION                               0x3
#define _T4RST_RSEL3_SIZE                                   0x1
#define _T4RST_RSEL3_LENGTH                                 0x1
#define _T4RST_RSEL3_MASK                                   0x8
#define _T4RST_T4RSEL_POSN                                  0x0
#define _T4RST_T4RSEL_POSITION                              0x0
#define _T4RST_T4RSEL_SIZE                                  0x4
#define _T4RST_T4RSEL_LENGTH                                0x4
#define _T4RST_T4RSEL_MASK                                  0xF
#define _T4RST_T4RSEL0_POSN                                 0x0
#define _T4RST_T4RSEL0_POSITION                             0x0
#define _T4RST_T4RSEL0_SIZE                                 0x1
#define _T4RST_T4RSEL0_LENGTH                               0x1
#define _T4RST_T4RSEL0_MASK                                 0x1
#define _T4RST_T4RSEL1_POSN                                 0x1
#define _T4RST_T4RSEL1_POSITION                             0x1
#define _T4RST_T4RSEL1_SIZE                                 0x1
#define _T4RST_T4RSEL1_LENGTH                               0x1
#define _T4RST_T4RSEL1_MASK                                 0x2
#define _T4RST_T4RSEL2_POSN                                 0x2
#define _T4RST_T4RSEL2_POSITION                             0x2
#define _T4RST_T4RSEL2_SIZE                                 0x1
#define _T4RST_T4RSEL2_LENGTH                               0x1
#define _T4RST_T4RSEL2_MASK                                 0x4
#define _T4RST_T4RSEL3_POSN                                 0x3
#define _T4RST_T4RSEL3_POSITION                             0x3
#define _T4RST_T4RSEL3_SIZE                                 0x1
#define _T4RST_T4RSEL3_LENGTH                               0x1
#define _T4RST_T4RSEL3_MASK                                 0x8

// Register: T6TMR
#define T6TMR T6TMR
extern volatile unsigned char           T6TMR               __at(0x41A);
#ifndef _LIB_BUILD
asm("T6TMR equ 041Ah");
#endif
// aliases
extern volatile unsigned char           TMR6                __at(0x41A);
#ifndef _LIB_BUILD
asm("TMR6 equ 041Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR6                   :8;
    };
} T6TMRbits_t;
extern volatile T6TMRbits_t T6TMRbits __at(0x41A);
// bitfield macros
#define _T6TMR_TMR6_POSN                                    0x0
#define _T6TMR_TMR6_POSITION                                0x0
#define _T6TMR_TMR6_SIZE                                    0x8
#define _T6TMR_TMR6_LENGTH                                  0x8
#define _T6TMR_TMR6_MASK                                    0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR6                   :8;
    };
} TMR6bits_t;
extern volatile TMR6bits_t TMR6bits __at(0x41A);
// bitfield macros
#define _TMR6_TMR6_POSN                                     0x0
#define _TMR6_TMR6_POSITION                                 0x0
#define _TMR6_TMR6_SIZE                                     0x8
#define _TMR6_TMR6_LENGTH                                   0x8
#define _TMR6_TMR6_MASK                                     0xFF

// Register: T6PR
#define T6PR T6PR
extern volatile unsigned char           T6PR                __at(0x41B);
#ifndef _LIB_BUILD
asm("T6PR equ 041Bh");
#endif
// aliases
extern volatile unsigned char           _PR6                 __at(0x41B);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR6 equ 041Bh");  // Note: Changed by MikroE
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PR6                    :8;  // Note: Changed by MikroE
    };
} T6PRbits_t;
extern volatile T6PRbits_t T6PRbits __at(0x41B);
// bitfield macros
#define _T6PR_PR6_POSN                                      0x0
#define _T6PR_PR6_POSITION                                  0x0
#define _T6PR_PR6_SIZE                                      0x8
#define _T6PR_PR6_LENGTH                                    0x8
#define _T6PR_PR6_MASK                                      0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned _PR6                    :8;  // Note: Changed by MikroE
    };
} PR6bits_t;
extern volatile PR6bits_t PR6bits __at(0x41B);
// bitfield macros
#define _PR6_PR6_POSN                                       0x0
#define _PR6_PR6_POSITION                                   0x0
#define _PR6_PR6_SIZE                                       0x8
#define _PR6_PR6_LENGTH                                     0x8
#define _PR6_PR6_MASK                                       0xFF

// Register: T6CON
#define T6CON T6CON
extern volatile unsigned char           T6CON               __at(0x41C);
#ifndef _LIB_BUILD
asm("T6CON equ 041Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OUTPS                  :4;
        unsigned CKPS                   :3;
        unsigned ON                     :1;
    };
    struct {
        unsigned T6OUTPS                :4;
        unsigned T6CKPS                 :3;
        unsigned T6ON                   :1;
    };
    struct {
        unsigned T6OUTPS0               :1;
        unsigned T6OUTPS1               :1;
        unsigned T6OUTPS2               :1;
        unsigned T6OUTPS3               :1;
        unsigned T6CKPS0                :1;
        unsigned T6CKPS1                :1;
        unsigned T6CKPS2                :1;
    };
    struct {
        unsigned OUTPS0                 :1;
        unsigned OUTPS1                 :1;
        unsigned OUTPS2                 :1;
        unsigned OUTPS3                 :1;
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
        unsigned CKPS2                  :1;
        unsigned TMR6ON                 :1;
    };
} T6CONbits_t;
extern volatile T6CONbits_t T6CONbits __at(0x41C);
// bitfield macros
#define _T6CON_OUTPS_POSN                                   0x0
#define _T6CON_OUTPS_POSITION                               0x0
#define _T6CON_OUTPS_SIZE                                   0x4
#define _T6CON_OUTPS_LENGTH                                 0x4
#define _T6CON_OUTPS_MASK                                   0xF
#define _T6CON_CKPS_POSN                                    0x4
#define _T6CON_CKPS_POSITION                                0x4
#define _T6CON_CKPS_SIZE                                    0x3
#define _T6CON_CKPS_LENGTH                                  0x3
#define _T6CON_CKPS_MASK                                    0x70
#define _T6CON_ON_POSN                                      0x7
#define _T6CON_ON_POSITION                                  0x7
#define _T6CON_ON_SIZE                                      0x1
#define _T6CON_ON_LENGTH                                    0x1
#define _T6CON_ON_MASK                                      0x80
#define _T6CON_T6OUTPS_POSN                                 0x0
#define _T6CON_T6OUTPS_POSITION                             0x0
#define _T6CON_T6OUTPS_SIZE                                 0x4
#define _T6CON_T6OUTPS_LENGTH                               0x4
#define _T6CON_T6OUTPS_MASK                                 0xF
#define _T6CON_T6CKPS_POSN                                  0x4
#define _T6CON_T6CKPS_POSITION                              0x4
#define _T6CON_T6CKPS_SIZE                                  0x3
#define _T6CON_T6CKPS_LENGTH                                0x3
#define _T6CON_T6CKPS_MASK                                  0x70
#define _T6CON_T6ON_POSN                                    0x7
#define _T6CON_T6ON_POSITION                                0x7
#define _T6CON_T6ON_SIZE                                    0x1
#define _T6CON_T6ON_LENGTH                                  0x1
#define _T6CON_T6ON_MASK                                    0x80
#define _T6CON_T6OUTPS0_POSN                                0x0
#define _T6CON_T6OUTPS0_POSITION                            0x0
#define _T6CON_T6OUTPS0_SIZE                                0x1
#define _T6CON_T6OUTPS0_LENGTH                              0x1
#define _T6CON_T6OUTPS0_MASK                                0x1
#define _T6CON_T6OUTPS1_POSN                                0x1
#define _T6CON_T6OUTPS1_POSITION                            0x1
#define _T6CON_T6OUTPS1_SIZE                                0x1
#define _T6CON_T6OUTPS1_LENGTH                              0x1
#define _T6CON_T6OUTPS1_MASK                                0x2
#define _T6CON_T6OUTPS2_POSN                                0x2
#define _T6CON_T6OUTPS2_POSITION                            0x2
#define _T6CON_T6OUTPS2_SIZE                                0x1
#define _T6CON_T6OUTPS2_LENGTH                              0x1
#define _T6CON_T6OUTPS2_MASK                                0x4
#define _T6CON_T6OUTPS3_POSN                                0x3
#define _T6CON_T6OUTPS3_POSITION                            0x3
#define _T6CON_T6OUTPS3_SIZE                                0x1
#define _T6CON_T6OUTPS3_LENGTH                              0x1
#define _T6CON_T6OUTPS3_MASK                                0x8
#define _T6CON_T6CKPS0_POSN                                 0x4
#define _T6CON_T6CKPS0_POSITION                             0x4
#define _T6CON_T6CKPS0_SIZE                                 0x1
#define _T6CON_T6CKPS0_LENGTH                               0x1
#define _T6CON_T6CKPS0_MASK                                 0x10
#define _T6CON_T6CKPS1_POSN                                 0x5
#define _T6CON_T6CKPS1_POSITION                             0x5
#define _T6CON_T6CKPS1_SIZE                                 0x1
#define _T6CON_T6CKPS1_LENGTH                               0x1
#define _T6CON_T6CKPS1_MASK                                 0x20
#define _T6CON_T6CKPS2_POSN                                 0x6
#define _T6CON_T6CKPS2_POSITION                             0x6
#define _T6CON_T6CKPS2_SIZE                                 0x1
#define _T6CON_T6CKPS2_LENGTH                               0x1
#define _T6CON_T6CKPS2_MASK                                 0x40
#define _T6CON_OUTPS0_POSN                                  0x0
#define _T6CON_OUTPS0_POSITION                              0x0
#define _T6CON_OUTPS0_SIZE                                  0x1
#define _T6CON_OUTPS0_LENGTH                                0x1
#define _T6CON_OUTPS0_MASK                                  0x1
#define _T6CON_OUTPS1_POSN                                  0x1
#define _T6CON_OUTPS1_POSITION                              0x1
#define _T6CON_OUTPS1_SIZE                                  0x1
#define _T6CON_OUTPS1_LENGTH                                0x1
#define _T6CON_OUTPS1_MASK                                  0x2
#define _T6CON_OUTPS2_POSN                                  0x2
#define _T6CON_OUTPS2_POSITION                              0x2
#define _T6CON_OUTPS2_SIZE                                  0x1
#define _T6CON_OUTPS2_LENGTH                                0x1
#define _T6CON_OUTPS2_MASK                                  0x4
#define _T6CON_OUTPS3_POSN                                  0x3
#define _T6CON_OUTPS3_POSITION                              0x3
#define _T6CON_OUTPS3_SIZE                                  0x1
#define _T6CON_OUTPS3_LENGTH                                0x1
#define _T6CON_OUTPS3_MASK                                  0x8
#define _T6CON_CKPS0_POSN                                   0x4
#define _T6CON_CKPS0_POSITION                               0x4
#define _T6CON_CKPS0_SIZE                                   0x1
#define _T6CON_CKPS0_LENGTH                                 0x1
#define _T6CON_CKPS0_MASK                                   0x10
#define _T6CON_CKPS1_POSN                                   0x5
#define _T6CON_CKPS1_POSITION                               0x5
#define _T6CON_CKPS1_SIZE                                   0x1
#define _T6CON_CKPS1_LENGTH                                 0x1
#define _T6CON_CKPS1_MASK                                   0x20
#define _T6CON_CKPS2_POSN                                   0x6
#define _T6CON_CKPS2_POSITION                               0x6
#define _T6CON_CKPS2_SIZE                                   0x1
#define _T6CON_CKPS2_LENGTH                                 0x1
#define _T6CON_CKPS2_MASK                                   0x40
#define _T6CON_TMR6ON_POSN                                  0x7
#define _T6CON_TMR6ON_POSITION                              0x7
#define _T6CON_TMR6ON_SIZE                                  0x1
#define _T6CON_TMR6ON_LENGTH                                0x1
#define _T6CON_TMR6ON_MASK                                  0x80

// Register: T6HLT
#define T6HLT T6HLT
extern volatile unsigned char           T6HLT               __at(0x41D);
#ifndef _LIB_BUILD
asm("T6HLT equ 041Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned                        :1;
        unsigned CKSYNC                 :1;
        unsigned CKPOL                  :1;
        unsigned PSYNC                  :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned T6MODE                 :4;
        unsigned                        :1;
        unsigned T6CKSYNC               :1;
        unsigned T6CKPOL                :1;
        unsigned T6PSYNC                :1;
    };
    struct {
        unsigned T6MODE0                :1;
        unsigned T6MODE1                :1;
        unsigned T6MODE2                :1;
        unsigned T6MODE3                :1;
    };
} T6HLTbits_t;
extern volatile T6HLTbits_t T6HLTbits __at(0x41D);
// bitfield macros
#define _T6HLT_MODE_POSN                                    0x0
#define _T6HLT_MODE_POSITION                                0x0
#define _T6HLT_MODE_SIZE                                    0x4
#define _T6HLT_MODE_LENGTH                                  0x4
#define _T6HLT_MODE_MASK                                    0xF
#define _T6HLT_CKSYNC_POSN                                  0x5
#define _T6HLT_CKSYNC_POSITION                              0x5
#define _T6HLT_CKSYNC_SIZE                                  0x1
#define _T6HLT_CKSYNC_LENGTH                                0x1
#define _T6HLT_CKSYNC_MASK                                  0x20
#define _T6HLT_CKPOL_POSN                                   0x6
#define _T6HLT_CKPOL_POSITION                               0x6
#define _T6HLT_CKPOL_SIZE                                   0x1
#define _T6HLT_CKPOL_LENGTH                                 0x1
#define _T6HLT_CKPOL_MASK                                   0x40
#define _T6HLT_PSYNC_POSN                                   0x7
#define _T6HLT_PSYNC_POSITION                               0x7
#define _T6HLT_PSYNC_SIZE                                   0x1
#define _T6HLT_PSYNC_LENGTH                                 0x1
#define _T6HLT_PSYNC_MASK                                   0x80
#define _T6HLT_MODE0_POSN                                   0x0
#define _T6HLT_MODE0_POSITION                               0x0
#define _T6HLT_MODE0_SIZE                                   0x1
#define _T6HLT_MODE0_LENGTH                                 0x1
#define _T6HLT_MODE0_MASK                                   0x1
#define _T6HLT_MODE1_POSN                                   0x1
#define _T6HLT_MODE1_POSITION                               0x1
#define _T6HLT_MODE1_SIZE                                   0x1
#define _T6HLT_MODE1_LENGTH                                 0x1
#define _T6HLT_MODE1_MASK                                   0x2
#define _T6HLT_MODE2_POSN                                   0x2
#define _T6HLT_MODE2_POSITION                               0x2
#define _T6HLT_MODE2_SIZE                                   0x1
#define _T6HLT_MODE2_LENGTH                                 0x1
#define _T6HLT_MODE2_MASK                                   0x4
#define _T6HLT_MODE3_POSN                                   0x3
#define _T6HLT_MODE3_POSITION                               0x3
#define _T6HLT_MODE3_SIZE                                   0x1
#define _T6HLT_MODE3_LENGTH                                 0x1
#define _T6HLT_MODE3_MASK                                   0x8
#define _T6HLT_T6MODE_POSN                                  0x0
#define _T6HLT_T6MODE_POSITION                              0x0
#define _T6HLT_T6MODE_SIZE                                  0x4
#define _T6HLT_T6MODE_LENGTH                                0x4
#define _T6HLT_T6MODE_MASK                                  0xF
#define _T6HLT_T6CKSYNC_POSN                                0x5
#define _T6HLT_T6CKSYNC_POSITION                            0x5
#define _T6HLT_T6CKSYNC_SIZE                                0x1
#define _T6HLT_T6CKSYNC_LENGTH                              0x1
#define _T6HLT_T6CKSYNC_MASK                                0x20
#define _T6HLT_T6CKPOL_POSN                                 0x6
#define _T6HLT_T6CKPOL_POSITION                             0x6
#define _T6HLT_T6CKPOL_SIZE                                 0x1
#define _T6HLT_T6CKPOL_LENGTH                               0x1
#define _T6HLT_T6CKPOL_MASK                                 0x40
#define _T6HLT_T6PSYNC_POSN                                 0x7
#define _T6HLT_T6PSYNC_POSITION                             0x7
#define _T6HLT_T6PSYNC_SIZE                                 0x1
#define _T6HLT_T6PSYNC_LENGTH                               0x1
#define _T6HLT_T6PSYNC_MASK                                 0x80
#define _T6HLT_T6MODE0_POSN                                 0x0
#define _T6HLT_T6MODE0_POSITION                             0x0
#define _T6HLT_T6MODE0_SIZE                                 0x1
#define _T6HLT_T6MODE0_LENGTH                               0x1
#define _T6HLT_T6MODE0_MASK                                 0x1
#define _T6HLT_T6MODE1_POSN                                 0x1
#define _T6HLT_T6MODE1_POSITION                             0x1
#define _T6HLT_T6MODE1_SIZE                                 0x1
#define _T6HLT_T6MODE1_LENGTH                               0x1
#define _T6HLT_T6MODE1_MASK                                 0x2
#define _T6HLT_T6MODE2_POSN                                 0x2
#define _T6HLT_T6MODE2_POSITION                             0x2
#define _T6HLT_T6MODE2_SIZE                                 0x1
#define _T6HLT_T6MODE2_LENGTH                               0x1
#define _T6HLT_T6MODE2_MASK                                 0x4
#define _T6HLT_T6MODE3_POSN                                 0x3
#define _T6HLT_T6MODE3_POSITION                             0x3
#define _T6HLT_T6MODE3_SIZE                                 0x1
#define _T6HLT_T6MODE3_LENGTH                               0x1
#define _T6HLT_T6MODE3_MASK                                 0x8

// Register: T6CLKCON
#define T6CLKCON T6CLKCON
extern volatile unsigned char           T6CLKCON            __at(0x41E);
#ifndef _LIB_BUILD
asm("T6CLKCON equ 041Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T6CS                   :3;
    };
    struct {
        unsigned T6CS0                  :1;
        unsigned T6CS1                  :1;
        unsigned T6CS2                  :1;
    };
} T6CLKCONbits_t;
extern volatile T6CLKCONbits_t T6CLKCONbits __at(0x41E);
// bitfield macros
#define _T6CLKCON_T6CS_POSN                                 0x0
#define _T6CLKCON_T6CS_POSITION                             0x0
#define _T6CLKCON_T6CS_SIZE                                 0x3
#define _T6CLKCON_T6CS_LENGTH                               0x3
#define _T6CLKCON_T6CS_MASK                                 0x7
#define _T6CLKCON_T6CS0_POSN                                0x0
#define _T6CLKCON_T6CS0_POSITION                            0x0
#define _T6CLKCON_T6CS0_SIZE                                0x1
#define _T6CLKCON_T6CS0_LENGTH                              0x1
#define _T6CLKCON_T6CS0_MASK                                0x1
#define _T6CLKCON_T6CS1_POSN                                0x1
#define _T6CLKCON_T6CS1_POSITION                            0x1
#define _T6CLKCON_T6CS1_SIZE                                0x1
#define _T6CLKCON_T6CS1_LENGTH                              0x1
#define _T6CLKCON_T6CS1_MASK                                0x2
#define _T6CLKCON_T6CS2_POSN                                0x2
#define _T6CLKCON_T6CS2_POSITION                            0x2
#define _T6CLKCON_T6CS2_SIZE                                0x1
#define _T6CLKCON_T6CS2_LENGTH                              0x1
#define _T6CLKCON_T6CS2_MASK                                0x4

// Register: T6RST
#define T6RST T6RST
extern volatile unsigned char           T6RST               __at(0x41F);
#ifndef _LIB_BUILD
asm("T6RST equ 041Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RSEL                   :4;
    };
    struct {
        unsigned RSEL0                  :1;
        unsigned RSEL1                  :1;
        unsigned RSEL2                  :1;
        unsigned RSEL3                  :1;
    };
    struct {
        unsigned T6RSEL                 :4;
    };
    struct {
        unsigned T6RSEL0                :1;
        unsigned T6RSEL1                :1;
        unsigned T6RSEL2                :1;
        unsigned T6RSEL3                :1;
    };
} T6RSTbits_t;
extern volatile T6RSTbits_t T6RSTbits __at(0x41F);
// bitfield macros
#define _T6RST_RSEL_POSN                                    0x0
#define _T6RST_RSEL_POSITION                                0x0
#define _T6RST_RSEL_SIZE                                    0x4
#define _T6RST_RSEL_LENGTH                                  0x4
#define _T6RST_RSEL_MASK                                    0xF
#define _T6RST_RSEL0_POSN                                   0x0
#define _T6RST_RSEL0_POSITION                               0x0
#define _T6RST_RSEL0_SIZE                                   0x1
#define _T6RST_RSEL0_LENGTH                                 0x1
#define _T6RST_RSEL0_MASK                                   0x1
#define _T6RST_RSEL1_POSN                                   0x1
#define _T6RST_RSEL1_POSITION                               0x1
#define _T6RST_RSEL1_SIZE                                   0x1
#define _T6RST_RSEL1_LENGTH                                 0x1
#define _T6RST_RSEL1_MASK                                   0x2
#define _T6RST_RSEL2_POSN                                   0x2
#define _T6RST_RSEL2_POSITION                               0x2
#define _T6RST_RSEL2_SIZE                                   0x1
#define _T6RST_RSEL2_LENGTH                                 0x1
#define _T6RST_RSEL2_MASK                                   0x4
#define _T6RST_RSEL3_POSN                                   0x3
#define _T6RST_RSEL3_POSITION                               0x3
#define _T6RST_RSEL3_SIZE                                   0x1
#define _T6RST_RSEL3_LENGTH                                 0x1
#define _T6RST_RSEL3_MASK                                   0x8
#define _T6RST_T6RSEL_POSN                                  0x0
#define _T6RST_T6RSEL_POSITION                              0x0
#define _T6RST_T6RSEL_SIZE                                  0x4
#define _T6RST_T6RSEL_LENGTH                                0x4
#define _T6RST_T6RSEL_MASK                                  0xF
#define _T6RST_T6RSEL0_POSN                                 0x0
#define _T6RST_T6RSEL0_POSITION                             0x0
#define _T6RST_T6RSEL0_SIZE                                 0x1
#define _T6RST_T6RSEL0_LENGTH                               0x1
#define _T6RST_T6RSEL0_MASK                                 0x1
#define _T6RST_T6RSEL1_POSN                                 0x1
#define _T6RST_T6RSEL1_POSITION                             0x1
#define _T6RST_T6RSEL1_SIZE                                 0x1
#define _T6RST_T6RSEL1_LENGTH                               0x1
#define _T6RST_T6RSEL1_MASK                                 0x2
#define _T6RST_T6RSEL2_POSN                                 0x2
#define _T6RST_T6RSEL2_POSITION                             0x2
#define _T6RST_T6RSEL2_SIZE                                 0x1
#define _T6RST_T6RSEL2_LENGTH                               0x1
#define _T6RST_T6RSEL2_MASK                                 0x4
#define _T6RST_T6RSEL3_POSN                                 0x3
#define _T6RST_T6RSEL3_POSITION                             0x3
#define _T6RST_T6RSEL3_SIZE                                 0x1
#define _T6RST_T6RSEL3_LENGTH                               0x1
#define _T6RST_T6RSEL3_MASK                                 0x8

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
extern volatile unsigned char           CWG1DBR             __at(0x691);
#ifndef _LIB_BUILD
asm("CWG1DBR equ 0691h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DBR                    :6;
    };
    struct {
        unsigned DBR0                   :1;
        unsigned DBR1                   :1;
        unsigned DBR2                   :1;
        unsigned DBR3                   :1;
        unsigned DBR4                   :1;
        unsigned DBR5                   :1;
    };
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
#define _CWG1DBR_DBR_POSN                                   0x0
#define _CWG1DBR_DBR_POSITION                               0x0
#define _CWG1DBR_DBR_SIZE                                   0x6
#define _CWG1DBR_DBR_LENGTH                                 0x6
#define _CWG1DBR_DBR_MASK                                   0x3F
#define _CWG1DBR_DBR0_POSN                                  0x0
#define _CWG1DBR_DBR0_POSITION                              0x0
#define _CWG1DBR_DBR0_SIZE                                  0x1
#define _CWG1DBR_DBR0_LENGTH                                0x1
#define _CWG1DBR_DBR0_MASK                                  0x1
#define _CWG1DBR_DBR1_POSN                                  0x1
#define _CWG1DBR_DBR1_POSITION                              0x1
#define _CWG1DBR_DBR1_SIZE                                  0x1
#define _CWG1DBR_DBR1_LENGTH                                0x1
#define _CWG1DBR_DBR1_MASK                                  0x2
#define _CWG1DBR_DBR2_POSN                                  0x2
#define _CWG1DBR_DBR2_POSITION                              0x2
#define _CWG1DBR_DBR2_SIZE                                  0x1
#define _CWG1DBR_DBR2_LENGTH                                0x1
#define _CWG1DBR_DBR2_MASK                                  0x4
#define _CWG1DBR_DBR3_POSN                                  0x3
#define _CWG1DBR_DBR3_POSITION                              0x3
#define _CWG1DBR_DBR3_SIZE                                  0x1
#define _CWG1DBR_DBR3_LENGTH                                0x1
#define _CWG1DBR_DBR3_MASK                                  0x8
#define _CWG1DBR_DBR4_POSN                                  0x4
#define _CWG1DBR_DBR4_POSITION                              0x4
#define _CWG1DBR_DBR4_SIZE                                  0x1
#define _CWG1DBR_DBR4_LENGTH                                0x1
#define _CWG1DBR_DBR4_MASK                                  0x10
#define _CWG1DBR_DBR5_POSN                                  0x5
#define _CWG1DBR_DBR5_POSITION                              0x5
#define _CWG1DBR_DBR5_SIZE                                  0x1
#define _CWG1DBR_DBR5_LENGTH                                0x1
#define _CWG1DBR_DBR5_MASK                                  0x20
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
        unsigned DBF                    :6;
    };
    struct {
        unsigned DBF0                   :1;
        unsigned DBF1                   :1;
        unsigned DBF2                   :1;
        unsigned DBF3                   :1;
        unsigned DBF4                   :1;
        unsigned DBF5                   :1;
    };
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
#define _CWG1DBF_DBF_POSN                                   0x0
#define _CWG1DBF_DBF_POSITION                               0x0
#define _CWG1DBF_DBF_SIZE                                   0x6
#define _CWG1DBF_DBF_LENGTH                                 0x6
#define _CWG1DBF_DBF_MASK                                   0x3F
#define _CWG1DBF_DBF0_POSN                                  0x0
#define _CWG1DBF_DBF0_POSITION                              0x0
#define _CWG1DBF_DBF0_SIZE                                  0x1
#define _CWG1DBF_DBF0_LENGTH                                0x1
#define _CWG1DBF_DBF0_MASK                                  0x1
#define _CWG1DBF_DBF1_POSN                                  0x1
#define _CWG1DBF_DBF1_POSITION                              0x1
#define _CWG1DBF_DBF1_SIZE                                  0x1
#define _CWG1DBF_DBF1_LENGTH                                0x1
#define _CWG1DBF_DBF1_MASK                                  0x2
#define _CWG1DBF_DBF2_POSN                                  0x2
#define _CWG1DBF_DBF2_POSITION                              0x2
#define _CWG1DBF_DBF2_SIZE                                  0x1
#define _CWG1DBF_DBF2_LENGTH                                0x1
#define _CWG1DBF_DBF2_MASK                                  0x4
#define _CWG1DBF_DBF3_POSN                                  0x3
#define _CWG1DBF_DBF3_POSITION                              0x3
#define _CWG1DBF_DBF3_SIZE                                  0x1
#define _CWG1DBF_DBF3_LENGTH                                0x1
#define _CWG1DBF_DBF3_MASK                                  0x8
#define _CWG1DBF_DBF4_POSN                                  0x4
#define _CWG1DBF_DBF4_POSITION                              0x4
#define _CWG1DBF_DBF4_SIZE                                  0x1
#define _CWG1DBF_DBF4_LENGTH                                0x1
#define _CWG1DBF_DBF4_MASK                                  0x10
#define _CWG1DBF_DBF5_POSN                                  0x5
#define _CWG1DBF_DBF5_POSITION                              0x5
#define _CWG1DBF_DBF5_SIZE                                  0x1
#define _CWG1DBF_DBF5_LENGTH                                0x1
#define _CWG1DBF_DBF5_MASK                                  0x20
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

// Register: CWG1AS0
#define CWG1AS0 CWG1AS0
extern volatile unsigned char           CWG1AS0             __at(0x693);
#ifndef _LIB_BUILD
asm("CWG1AS0 equ 0693h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned LSAC                   :2;
        unsigned LSBD                   :2;
        unsigned REN                    :1;
        unsigned SHUTDOWN               :1;
    };
    struct {
        unsigned                        :2;
        unsigned LSAC0                  :1;
        unsigned LSAC1                  :1;
        unsigned LSBD0                  :1;
        unsigned LSBD1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CWG1LSAC               :2;
        unsigned CWG1LSBD               :2;
        unsigned CWG1REN                :1;
        unsigned CWG1SHUTDOWN           :1;
    };
    struct {
        unsigned                        :2;
        unsigned CWG1LSAC0              :1;
        unsigned CWG1LSAC1              :1;
        unsigned CWG1LSBD0              :1;
        unsigned CWG1LSBD1              :1;
    };
} CWG1AS0bits_t;
extern volatile CWG1AS0bits_t CWG1AS0bits __at(0x693);
// bitfield macros
#define _CWG1AS0_LSAC_POSN                                  0x2
#define _CWG1AS0_LSAC_POSITION                              0x2
#define _CWG1AS0_LSAC_SIZE                                  0x2
#define _CWG1AS0_LSAC_LENGTH                                0x2
#define _CWG1AS0_LSAC_MASK                                  0xC
#define _CWG1AS0_LSBD_POSN                                  0x4
#define _CWG1AS0_LSBD_POSITION                              0x4
#define _CWG1AS0_LSBD_SIZE                                  0x2
#define _CWG1AS0_LSBD_LENGTH                                0x2
#define _CWG1AS0_LSBD_MASK                                  0x30
#define _CWG1AS0_REN_POSN                                   0x6
#define _CWG1AS0_REN_POSITION                               0x6
#define _CWG1AS0_REN_SIZE                                   0x1
#define _CWG1AS0_REN_LENGTH                                 0x1
#define _CWG1AS0_REN_MASK                                   0x40
#define _CWG1AS0_SHUTDOWN_POSN                              0x7
#define _CWG1AS0_SHUTDOWN_POSITION                          0x7
#define _CWG1AS0_SHUTDOWN_SIZE                              0x1
#define _CWG1AS0_SHUTDOWN_LENGTH                            0x1
#define _CWG1AS0_SHUTDOWN_MASK                              0x80
#define _CWG1AS0_LSAC0_POSN                                 0x2
#define _CWG1AS0_LSAC0_POSITION                             0x2
#define _CWG1AS0_LSAC0_SIZE                                 0x1
#define _CWG1AS0_LSAC0_LENGTH                               0x1
#define _CWG1AS0_LSAC0_MASK                                 0x4
#define _CWG1AS0_LSAC1_POSN                                 0x3
#define _CWG1AS0_LSAC1_POSITION                             0x3
#define _CWG1AS0_LSAC1_SIZE                                 0x1
#define _CWG1AS0_LSAC1_LENGTH                               0x1
#define _CWG1AS0_LSAC1_MASK                                 0x8
#define _CWG1AS0_LSBD0_POSN                                 0x4
#define _CWG1AS0_LSBD0_POSITION                             0x4
#define _CWG1AS0_LSBD0_SIZE                                 0x1
#define _CWG1AS0_LSBD0_LENGTH                               0x1
#define _CWG1AS0_LSBD0_MASK                                 0x10
#define _CWG1AS0_LSBD1_POSN                                 0x5
#define _CWG1AS0_LSBD1_POSITION                             0x5
#define _CWG1AS0_LSBD1_SIZE                                 0x1
#define _CWG1AS0_LSBD1_LENGTH                               0x1
#define _CWG1AS0_LSBD1_MASK                                 0x20
#define _CWG1AS0_CWG1LSAC_POSN                              0x2
#define _CWG1AS0_CWG1LSAC_POSITION                          0x2
#define _CWG1AS0_CWG1LSAC_SIZE                              0x2
#define _CWG1AS0_CWG1LSAC_LENGTH                            0x2
#define _CWG1AS0_CWG1LSAC_MASK                              0xC
#define _CWG1AS0_CWG1LSBD_POSN                              0x4
#define _CWG1AS0_CWG1LSBD_POSITION                          0x4
#define _CWG1AS0_CWG1LSBD_SIZE                              0x2
#define _CWG1AS0_CWG1LSBD_LENGTH                            0x2
#define _CWG1AS0_CWG1LSBD_MASK                              0x30
#define _CWG1AS0_CWG1REN_POSN                               0x6
#define _CWG1AS0_CWG1REN_POSITION                           0x6
#define _CWG1AS0_CWG1REN_SIZE                               0x1
#define _CWG1AS0_CWG1REN_LENGTH                             0x1
#define _CWG1AS0_CWG1REN_MASK                               0x40
#define _CWG1AS0_CWG1SHUTDOWN_POSN                          0x7
#define _CWG1AS0_CWG1SHUTDOWN_POSITION                      0x7
#define _CWG1AS0_CWG1SHUTDOWN_SIZE                          0x1
#define _CWG1AS0_CWG1SHUTDOWN_LENGTH                        0x1
#define _CWG1AS0_CWG1SHUTDOWN_MASK                          0x80
#define _CWG1AS0_CWG1LSAC0_POSN                             0x2
#define _CWG1AS0_CWG1LSAC0_POSITION                         0x2
#define _CWG1AS0_CWG1LSAC0_SIZE                             0x1
#define _CWG1AS0_CWG1LSAC0_LENGTH                           0x1
#define _CWG1AS0_CWG1LSAC0_MASK                             0x4
#define _CWG1AS0_CWG1LSAC1_POSN                             0x3
#define _CWG1AS0_CWG1LSAC1_POSITION                         0x3
#define _CWG1AS0_CWG1LSAC1_SIZE                             0x1
#define _CWG1AS0_CWG1LSAC1_LENGTH                           0x1
#define _CWG1AS0_CWG1LSAC1_MASK                             0x8
#define _CWG1AS0_CWG1LSBD0_POSN                             0x4
#define _CWG1AS0_CWG1LSBD0_POSITION                         0x4
#define _CWG1AS0_CWG1LSBD0_SIZE                             0x1
#define _CWG1AS0_CWG1LSBD0_LENGTH                           0x1
#define _CWG1AS0_CWG1LSBD0_MASK                             0x10
#define _CWG1AS0_CWG1LSBD1_POSN                             0x5
#define _CWG1AS0_CWG1LSBD1_POSITION                         0x5
#define _CWG1AS0_CWG1LSBD1_SIZE                             0x1
#define _CWG1AS0_CWG1LSBD1_LENGTH                           0x1
#define _CWG1AS0_CWG1LSBD1_MASK                             0x20

// Register: CWG1AS1
#define CWG1AS1 CWG1AS1
extern volatile unsigned char           CWG1AS1             __at(0x694);
#ifndef _LIB_BUILD
asm("CWG1AS1 equ 0694h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INAS                   :1;
        unsigned C1AS                   :1;
        unsigned C2AS                   :1;
        unsigned                        :1;
        unsigned TMR2AS                 :1;
        unsigned TMR4AS                 :1;
        unsigned TMR6AS                 :1;
    };
    struct {
        unsigned CWG1INAS               :1;
        unsigned CWG1C1AS               :1;
        unsigned CWG1C2AS               :1;
        unsigned                        :1;
        unsigned CWG1TMR2AS             :1;
        unsigned CWG1TMR4AS             :1;
        unsigned CWG1TMR6AS             :1;
    };
} CWG1AS1bits_t;
extern volatile CWG1AS1bits_t CWG1AS1bits __at(0x694);
// bitfield macros
#define _CWG1AS1_INAS_POSN                                  0x0
#define _CWG1AS1_INAS_POSITION                              0x0
#define _CWG1AS1_INAS_SIZE                                  0x1
#define _CWG1AS1_INAS_LENGTH                                0x1
#define _CWG1AS1_INAS_MASK                                  0x1
#define _CWG1AS1_C1AS_POSN                                  0x1
#define _CWG1AS1_C1AS_POSITION                              0x1
#define _CWG1AS1_C1AS_SIZE                                  0x1
#define _CWG1AS1_C1AS_LENGTH                                0x1
#define _CWG1AS1_C1AS_MASK                                  0x2
#define _CWG1AS1_C2AS_POSN                                  0x2
#define _CWG1AS1_C2AS_POSITION                              0x2
#define _CWG1AS1_C2AS_SIZE                                  0x1
#define _CWG1AS1_C2AS_LENGTH                                0x1
#define _CWG1AS1_C2AS_MASK                                  0x4
#define _CWG1AS1_TMR2AS_POSN                                0x4
#define _CWG1AS1_TMR2AS_POSITION                            0x4
#define _CWG1AS1_TMR2AS_SIZE                                0x1
#define _CWG1AS1_TMR2AS_LENGTH                              0x1
#define _CWG1AS1_TMR2AS_MASK                                0x10
#define _CWG1AS1_TMR4AS_POSN                                0x5
#define _CWG1AS1_TMR4AS_POSITION                            0x5
#define _CWG1AS1_TMR4AS_SIZE                                0x1
#define _CWG1AS1_TMR4AS_LENGTH                              0x1
#define _CWG1AS1_TMR4AS_MASK                                0x20
#define _CWG1AS1_TMR6AS_POSN                                0x6
#define _CWG1AS1_TMR6AS_POSITION                            0x6
#define _CWG1AS1_TMR6AS_SIZE                                0x1
#define _CWG1AS1_TMR6AS_LENGTH                              0x1
#define _CWG1AS1_TMR6AS_MASK                                0x40
#define _CWG1AS1_CWG1INAS_POSN                              0x0
#define _CWG1AS1_CWG1INAS_POSITION                          0x0
#define _CWG1AS1_CWG1INAS_SIZE                              0x1
#define _CWG1AS1_CWG1INAS_LENGTH                            0x1
#define _CWG1AS1_CWG1INAS_MASK                              0x1
#define _CWG1AS1_CWG1C1AS_POSN                              0x1
#define _CWG1AS1_CWG1C1AS_POSITION                          0x1
#define _CWG1AS1_CWG1C1AS_SIZE                              0x1
#define _CWG1AS1_CWG1C1AS_LENGTH                            0x1
#define _CWG1AS1_CWG1C1AS_MASK                              0x2
#define _CWG1AS1_CWG1C2AS_POSN                              0x2
#define _CWG1AS1_CWG1C2AS_POSITION                          0x2
#define _CWG1AS1_CWG1C2AS_SIZE                              0x1
#define _CWG1AS1_CWG1C2AS_LENGTH                            0x1
#define _CWG1AS1_CWG1C2AS_MASK                              0x4
#define _CWG1AS1_CWG1TMR2AS_POSN                            0x4
#define _CWG1AS1_CWG1TMR2AS_POSITION                        0x4
#define _CWG1AS1_CWG1TMR2AS_SIZE                            0x1
#define _CWG1AS1_CWG1TMR2AS_LENGTH                          0x1
#define _CWG1AS1_CWG1TMR2AS_MASK                            0x10
#define _CWG1AS1_CWG1TMR4AS_POSN                            0x5
#define _CWG1AS1_CWG1TMR4AS_POSITION                        0x5
#define _CWG1AS1_CWG1TMR4AS_SIZE                            0x1
#define _CWG1AS1_CWG1TMR4AS_LENGTH                          0x1
#define _CWG1AS1_CWG1TMR4AS_MASK                            0x20
#define _CWG1AS1_CWG1TMR6AS_POSN                            0x6
#define _CWG1AS1_CWG1TMR6AS_POSITION                        0x6
#define _CWG1AS1_CWG1TMR6AS_SIZE                            0x1
#define _CWG1AS1_CWG1TMR6AS_LENGTH                          0x1
#define _CWG1AS1_CWG1TMR6AS_MASK                            0x40

// Register: CWG1OCON0
#define CWG1OCON0 CWG1OCON0
extern volatile unsigned char           CWG1OCON0           __at(0x695);
#ifndef _LIB_BUILD
asm("CWG1OCON0 equ 0695h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STRA                   :1;
        unsigned STRB                   :1;
        unsigned STRC                   :1;
        unsigned STRD                   :1;
        unsigned OVRA                   :1;
        unsigned OVRB                   :1;
        unsigned OVRC                   :1;
        unsigned OVRD                   :1;
    };
    struct {
        unsigned CWG1STRA               :1;
        unsigned CWG1STRB               :1;
        unsigned CWG1STRC               :1;
        unsigned CWG1STRD               :1;
        unsigned CWG1OVRA               :1;
        unsigned CWG1OVRB               :1;
        unsigned CWG1OVRC               :1;
        unsigned CWG1OVRD               :1;
    };
} CWG1OCON0bits_t;
extern volatile CWG1OCON0bits_t CWG1OCON0bits __at(0x695);
// bitfield macros
#define _CWG1OCON0_STRA_POSN                                0x0
#define _CWG1OCON0_STRA_POSITION                            0x0
#define _CWG1OCON0_STRA_SIZE                                0x1
#define _CWG1OCON0_STRA_LENGTH                              0x1
#define _CWG1OCON0_STRA_MASK                                0x1
#define _CWG1OCON0_STRB_POSN                                0x1
#define _CWG1OCON0_STRB_POSITION                            0x1
#define _CWG1OCON0_STRB_SIZE                                0x1
#define _CWG1OCON0_STRB_LENGTH                              0x1
#define _CWG1OCON0_STRB_MASK                                0x2
#define _CWG1OCON0_STRC_POSN                                0x2
#define _CWG1OCON0_STRC_POSITION                            0x2
#define _CWG1OCON0_STRC_SIZE                                0x1
#define _CWG1OCON0_STRC_LENGTH                              0x1
#define _CWG1OCON0_STRC_MASK                                0x4
#define _CWG1OCON0_STRD_POSN                                0x3
#define _CWG1OCON0_STRD_POSITION                            0x3
#define _CWG1OCON0_STRD_SIZE                                0x1
#define _CWG1OCON0_STRD_LENGTH                              0x1
#define _CWG1OCON0_STRD_MASK                                0x8
#define _CWG1OCON0_OVRA_POSN                                0x4
#define _CWG1OCON0_OVRA_POSITION                            0x4
#define _CWG1OCON0_OVRA_SIZE                                0x1
#define _CWG1OCON0_OVRA_LENGTH                              0x1
#define _CWG1OCON0_OVRA_MASK                                0x10
#define _CWG1OCON0_OVRB_POSN                                0x5
#define _CWG1OCON0_OVRB_POSITION                            0x5
#define _CWG1OCON0_OVRB_SIZE                                0x1
#define _CWG1OCON0_OVRB_LENGTH                              0x1
#define _CWG1OCON0_OVRB_MASK                                0x20
#define _CWG1OCON0_OVRC_POSN                                0x6
#define _CWG1OCON0_OVRC_POSITION                            0x6
#define _CWG1OCON0_OVRC_SIZE                                0x1
#define _CWG1OCON0_OVRC_LENGTH                              0x1
#define _CWG1OCON0_OVRC_MASK                                0x40
#define _CWG1OCON0_OVRD_POSN                                0x7
#define _CWG1OCON0_OVRD_POSITION                            0x7
#define _CWG1OCON0_OVRD_SIZE                                0x1
#define _CWG1OCON0_OVRD_LENGTH                              0x1
#define _CWG1OCON0_OVRD_MASK                                0x80
#define _CWG1OCON0_CWG1STRA_POSN                            0x0
#define _CWG1OCON0_CWG1STRA_POSITION                        0x0
#define _CWG1OCON0_CWG1STRA_SIZE                            0x1
#define _CWG1OCON0_CWG1STRA_LENGTH                          0x1
#define _CWG1OCON0_CWG1STRA_MASK                            0x1
#define _CWG1OCON0_CWG1STRB_POSN                            0x1
#define _CWG1OCON0_CWG1STRB_POSITION                        0x1
#define _CWG1OCON0_CWG1STRB_SIZE                            0x1
#define _CWG1OCON0_CWG1STRB_LENGTH                          0x1
#define _CWG1OCON0_CWG1STRB_MASK                            0x2
#define _CWG1OCON0_CWG1STRC_POSN                            0x2
#define _CWG1OCON0_CWG1STRC_POSITION                        0x2
#define _CWG1OCON0_CWG1STRC_SIZE                            0x1
#define _CWG1OCON0_CWG1STRC_LENGTH                          0x1
#define _CWG1OCON0_CWG1STRC_MASK                            0x4
#define _CWG1OCON0_CWG1STRD_POSN                            0x3
#define _CWG1OCON0_CWG1STRD_POSITION                        0x3
#define _CWG1OCON0_CWG1STRD_SIZE                            0x1
#define _CWG1OCON0_CWG1STRD_LENGTH                          0x1
#define _CWG1OCON0_CWG1STRD_MASK                            0x8
#define _CWG1OCON0_CWG1OVRA_POSN                            0x4
#define _CWG1OCON0_CWG1OVRA_POSITION                        0x4
#define _CWG1OCON0_CWG1OVRA_SIZE                            0x1
#define _CWG1OCON0_CWG1OVRA_LENGTH                          0x1
#define _CWG1OCON0_CWG1OVRA_MASK                            0x10
#define _CWG1OCON0_CWG1OVRB_POSN                            0x5
#define _CWG1OCON0_CWG1OVRB_POSITION                        0x5
#define _CWG1OCON0_CWG1OVRB_SIZE                            0x1
#define _CWG1OCON0_CWG1OVRB_LENGTH                          0x1
#define _CWG1OCON0_CWG1OVRB_MASK                            0x20
#define _CWG1OCON0_CWG1OVRC_POSN                            0x6
#define _CWG1OCON0_CWG1OVRC_POSITION                        0x6
#define _CWG1OCON0_CWG1OVRC_SIZE                            0x1
#define _CWG1OCON0_CWG1OVRC_LENGTH                          0x1
#define _CWG1OCON0_CWG1OVRC_MASK                            0x40
#define _CWG1OCON0_CWG1OVRD_POSN                            0x7
#define _CWG1OCON0_CWG1OVRD_POSITION                        0x7
#define _CWG1OCON0_CWG1OVRD_SIZE                            0x1
#define _CWG1OCON0_CWG1OVRD_LENGTH                          0x1
#define _CWG1OCON0_CWG1OVRD_MASK                            0x80

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
extern volatile unsigned char           CWG1CON0            __at(0x696);
#ifndef _LIB_BUILD
asm("CWG1CON0 equ 0696h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :3;
        unsigned                        :3;
        unsigned LD                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned                        :4;
        unsigned G1EN                   :1;
    };
    struct {
        unsigned CWG1MODE               :3;
        unsigned                        :3;
        unsigned CWG1LD                 :1;
        unsigned CWG1EN                 :1;
    };
    struct {
        unsigned CWG1MODE0              :1;
        unsigned CWG1MODE1              :1;
        unsigned CWG1MODE2              :1;
    };
} CWG1CON0bits_t;
extern volatile CWG1CON0bits_t CWG1CON0bits __at(0x696);
// bitfield macros
#define _CWG1CON0_MODE_POSN                                 0x0
#define _CWG1CON0_MODE_POSITION                             0x0
#define _CWG1CON0_MODE_SIZE                                 0x3
#define _CWG1CON0_MODE_LENGTH                               0x3
#define _CWG1CON0_MODE_MASK                                 0x7
#define _CWG1CON0_LD_POSN                                   0x6
#define _CWG1CON0_LD_POSITION                               0x6
#define _CWG1CON0_LD_SIZE                                   0x1
#define _CWG1CON0_LD_LENGTH                                 0x1
#define _CWG1CON0_LD_MASK                                   0x40
#define _CWG1CON0_EN_POSN                                   0x7
#define _CWG1CON0_EN_POSITION                               0x7
#define _CWG1CON0_EN_SIZE                                   0x1
#define _CWG1CON0_EN_LENGTH                                 0x1
#define _CWG1CON0_EN_MASK                                   0x80
#define _CWG1CON0_MODE0_POSN                                0x0
#define _CWG1CON0_MODE0_POSITION                            0x0
#define _CWG1CON0_MODE0_SIZE                                0x1
#define _CWG1CON0_MODE0_LENGTH                              0x1
#define _CWG1CON0_MODE0_MASK                                0x1
#define _CWG1CON0_MODE1_POSN                                0x1
#define _CWG1CON0_MODE1_POSITION                            0x1
#define _CWG1CON0_MODE1_SIZE                                0x1
#define _CWG1CON0_MODE1_LENGTH                              0x1
#define _CWG1CON0_MODE1_MASK                                0x2
#define _CWG1CON0_MODE2_POSN                                0x2
#define _CWG1CON0_MODE2_POSITION                            0x2
#define _CWG1CON0_MODE2_SIZE                                0x1
#define _CWG1CON0_MODE2_LENGTH                              0x1
#define _CWG1CON0_MODE2_MASK                                0x4
#define _CWG1CON0_G1EN_POSN                                 0x7
#define _CWG1CON0_G1EN_POSITION                             0x7
#define _CWG1CON0_G1EN_SIZE                                 0x1
#define _CWG1CON0_G1EN_LENGTH                               0x1
#define _CWG1CON0_G1EN_MASK                                 0x80
#define _CWG1CON0_CWG1MODE_POSN                             0x0
#define _CWG1CON0_CWG1MODE_POSITION                         0x0
#define _CWG1CON0_CWG1MODE_SIZE                             0x3
#define _CWG1CON0_CWG1MODE_LENGTH                           0x3
#define _CWG1CON0_CWG1MODE_MASK                             0x7
#define _CWG1CON0_CWG1LD_POSN                               0x6
#define _CWG1CON0_CWG1LD_POSITION                           0x6
#define _CWG1CON0_CWG1LD_SIZE                               0x1
#define _CWG1CON0_CWG1LD_LENGTH                             0x1
#define _CWG1CON0_CWG1LD_MASK                               0x40
#define _CWG1CON0_CWG1EN_POSN                               0x7
#define _CWG1CON0_CWG1EN_POSITION                           0x7
#define _CWG1CON0_CWG1EN_SIZE                               0x1
#define _CWG1CON0_CWG1EN_LENGTH                             0x1
#define _CWG1CON0_CWG1EN_MASK                               0x80
#define _CWG1CON0_CWG1MODE0_POSN                            0x0
#define _CWG1CON0_CWG1MODE0_POSITION                        0x0
#define _CWG1CON0_CWG1MODE0_SIZE                            0x1
#define _CWG1CON0_CWG1MODE0_LENGTH                          0x1
#define _CWG1CON0_CWG1MODE0_MASK                            0x1
#define _CWG1CON0_CWG1MODE1_POSN                            0x1
#define _CWG1CON0_CWG1MODE1_POSITION                        0x1
#define _CWG1CON0_CWG1MODE1_SIZE                            0x1
#define _CWG1CON0_CWG1MODE1_LENGTH                          0x1
#define _CWG1CON0_CWG1MODE1_MASK                            0x2
#define _CWG1CON0_CWG1MODE2_POSN                            0x2
#define _CWG1CON0_CWG1MODE2_POSITION                        0x2
#define _CWG1CON0_CWG1MODE2_SIZE                            0x1
#define _CWG1CON0_CWG1MODE2_LENGTH                          0x1
#define _CWG1CON0_CWG1MODE2_MASK                            0x4

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
extern volatile unsigned char           CWG1CON1            __at(0x697);
#ifndef _LIB_BUILD
asm("CWG1CON1 equ 0697h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POLA                   :1;
        unsigned POLB                   :1;
        unsigned POLC                   :1;
        unsigned POLD                   :1;
        unsigned                        :1;
        unsigned IN                     :1;
    };
    struct {
        unsigned CWG1POLA               :1;
        unsigned CWG1POLB               :1;
        unsigned CWG1POLC               :1;
        unsigned CWG1POLD               :1;
        unsigned                        :1;
        unsigned CWG1IN                 :1;
    };
} CWG1CON1bits_t;
extern volatile CWG1CON1bits_t CWG1CON1bits __at(0x697);
// bitfield macros
#define _CWG1CON1_POLA_POSN                                 0x0
#define _CWG1CON1_POLA_POSITION                             0x0
#define _CWG1CON1_POLA_SIZE                                 0x1
#define _CWG1CON1_POLA_LENGTH                               0x1
#define _CWG1CON1_POLA_MASK                                 0x1
#define _CWG1CON1_POLB_POSN                                 0x1
#define _CWG1CON1_POLB_POSITION                             0x1
#define _CWG1CON1_POLB_SIZE                                 0x1
#define _CWG1CON1_POLB_LENGTH                               0x1
#define _CWG1CON1_POLB_MASK                                 0x2
#define _CWG1CON1_POLC_POSN                                 0x2
#define _CWG1CON1_POLC_POSITION                             0x2
#define _CWG1CON1_POLC_SIZE                                 0x1
#define _CWG1CON1_POLC_LENGTH                               0x1
#define _CWG1CON1_POLC_MASK                                 0x4
#define _CWG1CON1_POLD_POSN                                 0x3
#define _CWG1CON1_POLD_POSITION                             0x3
#define _CWG1CON1_POLD_SIZE                                 0x1
#define _CWG1CON1_POLD_LENGTH                               0x1
#define _CWG1CON1_POLD_MASK                                 0x8
#define _CWG1CON1_IN_POSN                                   0x5
#define _CWG1CON1_IN_POSITION                               0x5
#define _CWG1CON1_IN_SIZE                                   0x1
#define _CWG1CON1_IN_LENGTH                                 0x1
#define _CWG1CON1_IN_MASK                                   0x20
#define _CWG1CON1_CWG1POLA_POSN                             0x0
#define _CWG1CON1_CWG1POLA_POSITION                         0x0
#define _CWG1CON1_CWG1POLA_SIZE                             0x1
#define _CWG1CON1_CWG1POLA_LENGTH                           0x1
#define _CWG1CON1_CWG1POLA_MASK                             0x1
#define _CWG1CON1_CWG1POLB_POSN                             0x1
#define _CWG1CON1_CWG1POLB_POSITION                         0x1
#define _CWG1CON1_CWG1POLB_SIZE                             0x1
#define _CWG1CON1_CWG1POLB_LENGTH                           0x1
#define _CWG1CON1_CWG1POLB_MASK                             0x2
#define _CWG1CON1_CWG1POLC_POSN                             0x2
#define _CWG1CON1_CWG1POLC_POSITION                         0x2
#define _CWG1CON1_CWG1POLC_SIZE                             0x1
#define _CWG1CON1_CWG1POLC_LENGTH                           0x1
#define _CWG1CON1_CWG1POLC_MASK                             0x4
#define _CWG1CON1_CWG1POLD_POSN                             0x3
#define _CWG1CON1_CWG1POLD_POSITION                         0x3
#define _CWG1CON1_CWG1POLD_SIZE                             0x1
#define _CWG1CON1_CWG1POLD_LENGTH                           0x1
#define _CWG1CON1_CWG1POLD_MASK                             0x8
#define _CWG1CON1_CWG1IN_POSN                               0x5
#define _CWG1CON1_CWG1IN_POSITION                           0x5
#define _CWG1CON1_CWG1IN_SIZE                               0x1
#define _CWG1CON1_CWG1IN_LENGTH                             0x1
#define _CWG1CON1_CWG1IN_MASK                               0x20

// Register: CWG1OCON1
#define CWG1OCON1 CWG1OCON1
extern volatile unsigned char           CWG1OCON1           __at(0x698);
#ifndef _LIB_BUILD
asm("CWG1OCON1 equ 0698h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OEA                    :1;
        unsigned OEB                    :1;
    };
    struct {
        unsigned CWG1OEA                :1;
        unsigned CWG1OEB                :1;
    };
} CWG1OCON1bits_t;
extern volatile CWG1OCON1bits_t CWG1OCON1bits __at(0x698);
// bitfield macros
#define _CWG1OCON1_OEA_POSN                                 0x0
#define _CWG1OCON1_OEA_POSITION                             0x0
#define _CWG1OCON1_OEA_SIZE                                 0x1
#define _CWG1OCON1_OEA_LENGTH                               0x1
#define _CWG1OCON1_OEA_MASK                                 0x1
#define _CWG1OCON1_OEB_POSN                                 0x1
#define _CWG1OCON1_OEB_POSITION                             0x1
#define _CWG1OCON1_OEB_SIZE                                 0x1
#define _CWG1OCON1_OEB_LENGTH                               0x1
#define _CWG1OCON1_OEB_MASK                                 0x2
#define _CWG1OCON1_CWG1OEA_POSN                             0x0
#define _CWG1OCON1_CWG1OEA_POSITION                         0x0
#define _CWG1OCON1_CWG1OEA_SIZE                             0x1
#define _CWG1OCON1_CWG1OEA_LENGTH                           0x1
#define _CWG1OCON1_CWG1OEA_MASK                             0x1
#define _CWG1OCON1_CWG1OEB_POSN                             0x1
#define _CWG1OCON1_CWG1OEB_POSITION                         0x1
#define _CWG1OCON1_CWG1OEB_SIZE                             0x1
#define _CWG1OCON1_CWG1OEB_LENGTH                           0x1
#define _CWG1OCON1_CWG1OEB_MASK                             0x2

// Register: CWG1CLKCON
#define CWG1CLKCON CWG1CLKCON
extern volatile unsigned char           CWG1CLKCON          __at(0x699);
#ifndef _LIB_BUILD
asm("CWG1CLKCON equ 0699h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :1;
    };
    struct {
        unsigned CWG1CS                 :1;
    };
} CWG1CLKCONbits_t;
extern volatile CWG1CLKCONbits_t CWG1CLKCONbits __at(0x699);
// bitfield macros
#define _CWG1CLKCON_CS_POSN                                 0x0
#define _CWG1CLKCON_CS_POSITION                             0x0
#define _CWG1CLKCON_CS_SIZE                                 0x1
#define _CWG1CLKCON_CS_LENGTH                               0x1
#define _CWG1CLKCON_CS_MASK                                 0x1
#define _CWG1CLKCON_CWG1CS_POSN                             0x0
#define _CWG1CLKCON_CWG1CS_POSITION                         0x0
#define _CWG1CLKCON_CWG1CS_SIZE                             0x1
#define _CWG1CLKCON_CWG1CS_LENGTH                           0x1
#define _CWG1CLKCON_CWG1CS_MASK                             0x1

// Register: CWG1ISM
#define CWG1ISM CWG1ISM
extern volatile unsigned char           CWG1ISM             __at(0x69A);
#ifndef _LIB_BUILD
asm("CWG1ISM equ 069Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IS                     :8;
    };
    struct {
        unsigned IS0                    :1;
        unsigned IS1                    :1;
        unsigned IS2                    :1;
    };
    struct {
        unsigned CWG1IS                 :8;
    };
    struct {
        unsigned CWG1IS0                :1;
        unsigned CWG1IS1                :1;
        unsigned CWG1IS2                :1;
    };
} CWG1ISMbits_t;
extern volatile CWG1ISMbits_t CWG1ISMbits __at(0x69A);
// bitfield macros
#define _CWG1ISM_IS_POSN                                    0x0
#define _CWG1ISM_IS_POSITION                                0x0
#define _CWG1ISM_IS_SIZE                                    0x8
#define _CWG1ISM_IS_LENGTH                                  0x8
#define _CWG1ISM_IS_MASK                                    0xFF
#define _CWG1ISM_IS0_POSN                                   0x0
#define _CWG1ISM_IS0_POSITION                               0x0
#define _CWG1ISM_IS0_SIZE                                   0x1
#define _CWG1ISM_IS0_LENGTH                                 0x1
#define _CWG1ISM_IS0_MASK                                   0x1
#define _CWG1ISM_IS1_POSN                                   0x1
#define _CWG1ISM_IS1_POSITION                               0x1
#define _CWG1ISM_IS1_SIZE                                   0x1
#define _CWG1ISM_IS1_LENGTH                                 0x1
#define _CWG1ISM_IS1_MASK                                   0x2
#define _CWG1ISM_IS2_POSN                                   0x2
#define _CWG1ISM_IS2_POSITION                               0x2
#define _CWG1ISM_IS2_SIZE                                   0x1
#define _CWG1ISM_IS2_LENGTH                                 0x1
#define _CWG1ISM_IS2_MASK                                   0x4
#define _CWG1ISM_CWG1IS_POSN                                0x0
#define _CWG1ISM_CWG1IS_POSITION                            0x0
#define _CWG1ISM_CWG1IS_SIZE                                0x8
#define _CWG1ISM_CWG1IS_LENGTH                              0x8
#define _CWG1ISM_CWG1IS_MASK                                0xFF
#define _CWG1ISM_CWG1IS0_POSN                               0x0
#define _CWG1ISM_CWG1IS0_POSITION                           0x0
#define _CWG1ISM_CWG1IS0_SIZE                               0x1
#define _CWG1ISM_CWG1IS0_LENGTH                             0x1
#define _CWG1ISM_CWG1IS0_MASK                               0x1
#define _CWG1ISM_CWG1IS1_POSN                               0x1
#define _CWG1ISM_CWG1IS1_POSITION                           0x1
#define _CWG1ISM_CWG1IS1_SIZE                               0x1
#define _CWG1ISM_CWG1IS1_LENGTH                             0x1
#define _CWG1ISM_CWG1IS1_MASK                               0x2
#define _CWG1ISM_CWG1IS2_POSN                               0x2
#define _CWG1ISM_CWG1IS2_POSITION                           0x2
#define _CWG1ISM_CWG1IS2_SIZE                               0x1
#define _CWG1ISM_CWG1IS2_LENGTH                             0x1
#define _CWG1ISM_CWG1IS2_MASK                               0x4

// Register: WDTCON0
#define WDTCON0 WDTCON0
extern volatile unsigned char           WDTCON0             __at(0x711);
#ifndef _LIB_BUILD
asm("WDTCON0 equ 0711h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned WDTPS                  :5;
    };
    struct {
        unsigned SWDTEN                 :1;
    };
    struct {
        unsigned WDTSEN                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
        unsigned WDTPS4                 :1;
    };
} WDTCON0bits_t;
extern volatile WDTCON0bits_t WDTCON0bits __at(0x711);
// bitfield macros
#define _WDTCON0_SEN_POSN                                   0x0
#define _WDTCON0_SEN_POSITION                               0x0
#define _WDTCON0_SEN_SIZE                                   0x1
#define _WDTCON0_SEN_LENGTH                                 0x1
#define _WDTCON0_SEN_MASK                                   0x1
#define _WDTCON0_WDTPS_POSN                                 0x1
#define _WDTCON0_WDTPS_POSITION                             0x1
#define _WDTCON0_WDTPS_SIZE                                 0x5
#define _WDTCON0_WDTPS_LENGTH                               0x5
#define _WDTCON0_WDTPS_MASK                                 0x3E
#define _WDTCON0_SWDTEN_POSN                                0x0
#define _WDTCON0_SWDTEN_POSITION                            0x0
#define _WDTCON0_SWDTEN_SIZE                                0x1
#define _WDTCON0_SWDTEN_LENGTH                              0x1
#define _WDTCON0_SWDTEN_MASK                                0x1
#define _WDTCON0_WDTSEN_POSN                                0x0
#define _WDTCON0_WDTSEN_POSITION                            0x0
#define _WDTCON0_WDTSEN_SIZE                                0x1
#define _WDTCON0_WDTSEN_LENGTH                              0x1
#define _WDTCON0_WDTSEN_MASK                                0x1
#define _WDTCON0_WDTPS0_POSN                                0x1
#define _WDTCON0_WDTPS0_POSITION                            0x1
#define _WDTCON0_WDTPS0_SIZE                                0x1
#define _WDTCON0_WDTPS0_LENGTH                              0x1
#define _WDTCON0_WDTPS0_MASK                                0x2
#define _WDTCON0_WDTPS1_POSN                                0x2
#define _WDTCON0_WDTPS1_POSITION                            0x2
#define _WDTCON0_WDTPS1_SIZE                                0x1
#define _WDTCON0_WDTPS1_LENGTH                              0x1
#define _WDTCON0_WDTPS1_MASK                                0x4
#define _WDTCON0_WDTPS2_POSN                                0x3
#define _WDTCON0_WDTPS2_POSITION                            0x3
#define _WDTCON0_WDTPS2_SIZE                                0x1
#define _WDTCON0_WDTPS2_LENGTH                              0x1
#define _WDTCON0_WDTPS2_MASK                                0x8
#define _WDTCON0_WDTPS3_POSN                                0x4
#define _WDTCON0_WDTPS3_POSITION                            0x4
#define _WDTCON0_WDTPS3_SIZE                                0x1
#define _WDTCON0_WDTPS3_LENGTH                              0x1
#define _WDTCON0_WDTPS3_MASK                                0x10
#define _WDTCON0_WDTPS4_POSN                                0x5
#define _WDTCON0_WDTPS4_POSITION                            0x5
#define _WDTCON0_WDTPS4_SIZE                                0x1
#define _WDTCON0_WDTPS4_LENGTH                              0x1
#define _WDTCON0_WDTPS4_MASK                                0x20

// Register: WDTCON1
#define WDTCON1 WDTCON1
extern volatile unsigned char           WDTCON1             __at(0x712);
#ifndef _LIB_BUILD
asm("WDTCON1 equ 0712h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WINDOW                 :3;
        unsigned                        :1;
        unsigned WDTCS                  :3;
    };
    struct {
        unsigned WINDOW0                :1;
        unsigned WINDOW1                :1;
        unsigned WINDOW2                :1;
    };
    struct {
        unsigned WDTWINDOW              :3;
    };
    struct {
        unsigned WDTWINDOW0             :1;
        unsigned WDTWINDOW1             :1;
        unsigned WDTWINDOW2             :1;
        unsigned                        :1;
        unsigned WDTCS0                 :1;
        unsigned WDTCS1                 :1;
        unsigned WDTCS2                 :1;
    };
} WDTCON1bits_t;
extern volatile WDTCON1bits_t WDTCON1bits __at(0x712);
// bitfield macros
#define _WDTCON1_WINDOW_POSN                                0x0
#define _WDTCON1_WINDOW_POSITION                            0x0
#define _WDTCON1_WINDOW_SIZE                                0x3
#define _WDTCON1_WINDOW_LENGTH                              0x3
#define _WDTCON1_WINDOW_MASK                                0x7
#define _WDTCON1_WDTCS_POSN                                 0x4
#define _WDTCON1_WDTCS_POSITION                             0x4
#define _WDTCON1_WDTCS_SIZE                                 0x3
#define _WDTCON1_WDTCS_LENGTH                               0x3
#define _WDTCON1_WDTCS_MASK                                 0x70
#define _WDTCON1_WINDOW0_POSN                               0x0
#define _WDTCON1_WINDOW0_POSITION                           0x0
#define _WDTCON1_WINDOW0_SIZE                               0x1
#define _WDTCON1_WINDOW0_LENGTH                             0x1
#define _WDTCON1_WINDOW0_MASK                               0x1
#define _WDTCON1_WINDOW1_POSN                               0x1
#define _WDTCON1_WINDOW1_POSITION                           0x1
#define _WDTCON1_WINDOW1_SIZE                               0x1
#define _WDTCON1_WINDOW1_LENGTH                             0x1
#define _WDTCON1_WINDOW1_MASK                               0x2
#define _WDTCON1_WINDOW2_POSN                               0x2
#define _WDTCON1_WINDOW2_POSITION                           0x2
#define _WDTCON1_WINDOW2_SIZE                               0x1
#define _WDTCON1_WINDOW2_LENGTH                             0x1
#define _WDTCON1_WINDOW2_MASK                               0x4
#define _WDTCON1_WDTWINDOW_POSN                             0x0
#define _WDTCON1_WDTWINDOW_POSITION                         0x0
#define _WDTCON1_WDTWINDOW_SIZE                             0x3
#define _WDTCON1_WDTWINDOW_LENGTH                           0x3
#define _WDTCON1_WDTWINDOW_MASK                             0x7
#define _WDTCON1_WDTWINDOW0_POSN                            0x0
#define _WDTCON1_WDTWINDOW0_POSITION                        0x0
#define _WDTCON1_WDTWINDOW0_SIZE                            0x1
#define _WDTCON1_WDTWINDOW0_LENGTH                          0x1
#define _WDTCON1_WDTWINDOW0_MASK                            0x1
#define _WDTCON1_WDTWINDOW1_POSN                            0x1
#define _WDTCON1_WDTWINDOW1_POSITION                        0x1
#define _WDTCON1_WDTWINDOW1_SIZE                            0x1
#define _WDTCON1_WDTWINDOW1_LENGTH                          0x1
#define _WDTCON1_WDTWINDOW1_MASK                            0x2
#define _WDTCON1_WDTWINDOW2_POSN                            0x2
#define _WDTCON1_WDTWINDOW2_POSITION                        0x2
#define _WDTCON1_WDTWINDOW2_SIZE                            0x1
#define _WDTCON1_WDTWINDOW2_LENGTH                          0x1
#define _WDTCON1_WDTWINDOW2_MASK                            0x4
#define _WDTCON1_WDTCS0_POSN                                0x4
#define _WDTCON1_WDTCS0_POSITION                            0x4
#define _WDTCON1_WDTCS0_SIZE                                0x1
#define _WDTCON1_WDTCS0_LENGTH                              0x1
#define _WDTCON1_WDTCS0_MASK                                0x10
#define _WDTCON1_WDTCS1_POSN                                0x5
#define _WDTCON1_WDTCS1_POSITION                            0x5
#define _WDTCON1_WDTCS1_SIZE                                0x1
#define _WDTCON1_WDTCS1_LENGTH                              0x1
#define _WDTCON1_WDTCS1_MASK                                0x20
#define _WDTCON1_WDTCS2_POSN                                0x6
#define _WDTCON1_WDTCS2_POSITION                            0x6
#define _WDTCON1_WDTCS2_SIZE                                0x1
#define _WDTCON1_WDTCS2_LENGTH                              0x1
#define _WDTCON1_WDTCS2_MASK                                0x40

// Register: WDTPSL
#define WDTPSL WDTPSL
extern volatile unsigned char           WDTPSL              __at(0x713);
#ifndef _LIB_BUILD
asm("WDTPSL equ 0713h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSCNT                  :8;
    };
    struct {
        unsigned PSCNT0                 :1;
        unsigned PSCNT1                 :1;
        unsigned PSCNT2                 :1;
        unsigned PSCNT3                 :1;
        unsigned PSCNT4                 :1;
        unsigned PSCNT5                 :1;
        unsigned PSCNT6                 :1;
        unsigned PSCNT7                 :1;
    };
    struct {
        unsigned WDTPSCNT               :8;
    };
    struct {
        unsigned WDTPSCNT0              :1;
        unsigned WDTPSCNT1              :1;
        unsigned WDTPSCNT2              :1;
        unsigned WDTPSCNT3              :1;
        unsigned WDTPSCNT4              :1;
        unsigned WDTPSCNT5              :1;
        unsigned WDTPSCNT6              :1;
        unsigned WDTPSCNT7              :1;
    };
} WDTPSLbits_t;
extern volatile WDTPSLbits_t WDTPSLbits __at(0x713);
// bitfield macros
#define _WDTPSL_PSCNT_POSN                                  0x0
#define _WDTPSL_PSCNT_POSITION                              0x0
#define _WDTPSL_PSCNT_SIZE                                  0x8
#define _WDTPSL_PSCNT_LENGTH                                0x8
#define _WDTPSL_PSCNT_MASK                                  0xFF
#define _WDTPSL_PSCNT0_POSN                                 0x0
#define _WDTPSL_PSCNT0_POSITION                             0x0
#define _WDTPSL_PSCNT0_SIZE                                 0x1
#define _WDTPSL_PSCNT0_LENGTH                               0x1
#define _WDTPSL_PSCNT0_MASK                                 0x1
#define _WDTPSL_PSCNT1_POSN                                 0x1
#define _WDTPSL_PSCNT1_POSITION                             0x1
#define _WDTPSL_PSCNT1_SIZE                                 0x1
#define _WDTPSL_PSCNT1_LENGTH                               0x1
#define _WDTPSL_PSCNT1_MASK                                 0x2
#define _WDTPSL_PSCNT2_POSN                                 0x2
#define _WDTPSL_PSCNT2_POSITION                             0x2
#define _WDTPSL_PSCNT2_SIZE                                 0x1
#define _WDTPSL_PSCNT2_LENGTH                               0x1
#define _WDTPSL_PSCNT2_MASK                                 0x4
#define _WDTPSL_PSCNT3_POSN                                 0x3
#define _WDTPSL_PSCNT3_POSITION                             0x3
#define _WDTPSL_PSCNT3_SIZE                                 0x1
#define _WDTPSL_PSCNT3_LENGTH                               0x1
#define _WDTPSL_PSCNT3_MASK                                 0x8
#define _WDTPSL_PSCNT4_POSN                                 0x4
#define _WDTPSL_PSCNT4_POSITION                             0x4
#define _WDTPSL_PSCNT4_SIZE                                 0x1
#define _WDTPSL_PSCNT4_LENGTH                               0x1
#define _WDTPSL_PSCNT4_MASK                                 0x10
#define _WDTPSL_PSCNT5_POSN                                 0x5
#define _WDTPSL_PSCNT5_POSITION                             0x5
#define _WDTPSL_PSCNT5_SIZE                                 0x1
#define _WDTPSL_PSCNT5_LENGTH                               0x1
#define _WDTPSL_PSCNT5_MASK                                 0x20
#define _WDTPSL_PSCNT6_POSN                                 0x6
#define _WDTPSL_PSCNT6_POSITION                             0x6
#define _WDTPSL_PSCNT6_SIZE                                 0x1
#define _WDTPSL_PSCNT6_LENGTH                               0x1
#define _WDTPSL_PSCNT6_MASK                                 0x40
#define _WDTPSL_PSCNT7_POSN                                 0x7
#define _WDTPSL_PSCNT7_POSITION                             0x7
#define _WDTPSL_PSCNT7_SIZE                                 0x1
#define _WDTPSL_PSCNT7_LENGTH                               0x1
#define _WDTPSL_PSCNT7_MASK                                 0x80
#define _WDTPSL_WDTPSCNT_POSN                               0x0
#define _WDTPSL_WDTPSCNT_POSITION                           0x0
#define _WDTPSL_WDTPSCNT_SIZE                               0x8
#define _WDTPSL_WDTPSCNT_LENGTH                             0x8
#define _WDTPSL_WDTPSCNT_MASK                               0xFF
#define _WDTPSL_WDTPSCNT0_POSN                              0x0
#define _WDTPSL_WDTPSCNT0_POSITION                          0x0
#define _WDTPSL_WDTPSCNT0_SIZE                              0x1
#define _WDTPSL_WDTPSCNT0_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT0_MASK                              0x1
#define _WDTPSL_WDTPSCNT1_POSN                              0x1
#define _WDTPSL_WDTPSCNT1_POSITION                          0x1
#define _WDTPSL_WDTPSCNT1_SIZE                              0x1
#define _WDTPSL_WDTPSCNT1_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT1_MASK                              0x2
#define _WDTPSL_WDTPSCNT2_POSN                              0x2
#define _WDTPSL_WDTPSCNT2_POSITION                          0x2
#define _WDTPSL_WDTPSCNT2_SIZE                              0x1
#define _WDTPSL_WDTPSCNT2_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT2_MASK                              0x4
#define _WDTPSL_WDTPSCNT3_POSN                              0x3
#define _WDTPSL_WDTPSCNT3_POSITION                          0x3
#define _WDTPSL_WDTPSCNT3_SIZE                              0x1
#define _WDTPSL_WDTPSCNT3_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT3_MASK                              0x8
#define _WDTPSL_WDTPSCNT4_POSN                              0x4
#define _WDTPSL_WDTPSCNT4_POSITION                          0x4
#define _WDTPSL_WDTPSCNT4_SIZE                              0x1
#define _WDTPSL_WDTPSCNT4_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT4_MASK                              0x10
#define _WDTPSL_WDTPSCNT5_POSN                              0x5
#define _WDTPSL_WDTPSCNT5_POSITION                          0x5
#define _WDTPSL_WDTPSCNT5_SIZE                              0x1
#define _WDTPSL_WDTPSCNT5_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT5_MASK                              0x20
#define _WDTPSL_WDTPSCNT6_POSN                              0x6
#define _WDTPSL_WDTPSCNT6_POSITION                          0x6
#define _WDTPSL_WDTPSCNT6_SIZE                              0x1
#define _WDTPSL_WDTPSCNT6_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT6_MASK                              0x40
#define _WDTPSL_WDTPSCNT7_POSN                              0x7
#define _WDTPSL_WDTPSCNT7_POSITION                          0x7
#define _WDTPSL_WDTPSCNT7_SIZE                              0x1
#define _WDTPSL_WDTPSCNT7_LENGTH                            0x1
#define _WDTPSL_WDTPSCNT7_MASK                              0x80

// Register: WDTPSH
#define WDTPSH WDTPSH
extern volatile unsigned char           WDTPSH              __at(0x714);
#ifndef _LIB_BUILD
asm("WDTPSH equ 0714h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSCNT                  :8;
    };
    struct {
        unsigned PSCNT8                 :1;
        unsigned PSCNT9                 :1;
        unsigned PSCNT10                :1;
        unsigned PSCNT11                :1;
        unsigned PSCNT12                :1;
        unsigned PSCNT13                :1;
        unsigned PSCNT14                :1;
        unsigned PSCNT15                :1;
    };
    struct {
        unsigned WDTPSCNT               :8;
    };
    struct {
        unsigned WDTPSCNT8              :1;
        unsigned WDTPSCNT9              :1;
        unsigned WDTPSCNT10             :1;
        unsigned WDTPSCNT11             :1;
        unsigned WDTPSCNT12             :1;
        unsigned WDTPSCNT13             :1;
        unsigned WDTPSCNT14             :1;
        unsigned WDTPSCNT15             :1;
    };
} WDTPSHbits_t;
extern volatile WDTPSHbits_t WDTPSHbits __at(0x714);
// bitfield macros
#define _WDTPSH_PSCNT_POSN                                  0x0
#define _WDTPSH_PSCNT_POSITION                              0x0
#define _WDTPSH_PSCNT_SIZE                                  0x8
#define _WDTPSH_PSCNT_LENGTH                                0x8
#define _WDTPSH_PSCNT_MASK                                  0xFF
#define _WDTPSH_PSCNT8_POSN                                 0x0
#define _WDTPSH_PSCNT8_POSITION                             0x0
#define _WDTPSH_PSCNT8_SIZE                                 0x1
#define _WDTPSH_PSCNT8_LENGTH                               0x1
#define _WDTPSH_PSCNT8_MASK                                 0x1
#define _WDTPSH_PSCNT9_POSN                                 0x1
#define _WDTPSH_PSCNT9_POSITION                             0x1
#define _WDTPSH_PSCNT9_SIZE                                 0x1
#define _WDTPSH_PSCNT9_LENGTH                               0x1
#define _WDTPSH_PSCNT9_MASK                                 0x2
#define _WDTPSH_PSCNT10_POSN                                0x2
#define _WDTPSH_PSCNT10_POSITION                            0x2
#define _WDTPSH_PSCNT10_SIZE                                0x1
#define _WDTPSH_PSCNT10_LENGTH                              0x1
#define _WDTPSH_PSCNT10_MASK                                0x4
#define _WDTPSH_PSCNT11_POSN                                0x3
#define _WDTPSH_PSCNT11_POSITION                            0x3
#define _WDTPSH_PSCNT11_SIZE                                0x1
#define _WDTPSH_PSCNT11_LENGTH                              0x1
#define _WDTPSH_PSCNT11_MASK                                0x8
#define _WDTPSH_PSCNT12_POSN                                0x4
#define _WDTPSH_PSCNT12_POSITION                            0x4
#define _WDTPSH_PSCNT12_SIZE                                0x1
#define _WDTPSH_PSCNT12_LENGTH                              0x1
#define _WDTPSH_PSCNT12_MASK                                0x10
#define _WDTPSH_PSCNT13_POSN                                0x5
#define _WDTPSH_PSCNT13_POSITION                            0x5
#define _WDTPSH_PSCNT13_SIZE                                0x1
#define _WDTPSH_PSCNT13_LENGTH                              0x1
#define _WDTPSH_PSCNT13_MASK                                0x20
#define _WDTPSH_PSCNT14_POSN                                0x6
#define _WDTPSH_PSCNT14_POSITION                            0x6
#define _WDTPSH_PSCNT14_SIZE                                0x1
#define _WDTPSH_PSCNT14_LENGTH                              0x1
#define _WDTPSH_PSCNT14_MASK                                0x40
#define _WDTPSH_PSCNT15_POSN                                0x7
#define _WDTPSH_PSCNT15_POSITION                            0x7
#define _WDTPSH_PSCNT15_SIZE                                0x1
#define _WDTPSH_PSCNT15_LENGTH                              0x1
#define _WDTPSH_PSCNT15_MASK                                0x80
#define _WDTPSH_WDTPSCNT_POSN                               0x0
#define _WDTPSH_WDTPSCNT_POSITION                           0x0
#define _WDTPSH_WDTPSCNT_SIZE                               0x8
#define _WDTPSH_WDTPSCNT_LENGTH                             0x8
#define _WDTPSH_WDTPSCNT_MASK                               0xFF
#define _WDTPSH_WDTPSCNT8_POSN                              0x0
#define _WDTPSH_WDTPSCNT8_POSITION                          0x0
#define _WDTPSH_WDTPSCNT8_SIZE                              0x1
#define _WDTPSH_WDTPSCNT8_LENGTH                            0x1
#define _WDTPSH_WDTPSCNT8_MASK                              0x1
#define _WDTPSH_WDTPSCNT9_POSN                              0x1
#define _WDTPSH_WDTPSCNT9_POSITION                          0x1
#define _WDTPSH_WDTPSCNT9_SIZE                              0x1
#define _WDTPSH_WDTPSCNT9_LENGTH                            0x1
#define _WDTPSH_WDTPSCNT9_MASK                              0x2
#define _WDTPSH_WDTPSCNT10_POSN                             0x2
#define _WDTPSH_WDTPSCNT10_POSITION                         0x2
#define _WDTPSH_WDTPSCNT10_SIZE                             0x1
#define _WDTPSH_WDTPSCNT10_LENGTH                           0x1
#define _WDTPSH_WDTPSCNT10_MASK                             0x4
#define _WDTPSH_WDTPSCNT11_POSN                             0x3
#define _WDTPSH_WDTPSCNT11_POSITION                         0x3
#define _WDTPSH_WDTPSCNT11_SIZE                             0x1
#define _WDTPSH_WDTPSCNT11_LENGTH                           0x1
#define _WDTPSH_WDTPSCNT11_MASK                             0x8
#define _WDTPSH_WDTPSCNT12_POSN                             0x4
#define _WDTPSH_WDTPSCNT12_POSITION                         0x4
#define _WDTPSH_WDTPSCNT12_SIZE                             0x1
#define _WDTPSH_WDTPSCNT12_LENGTH                           0x1
#define _WDTPSH_WDTPSCNT12_MASK                             0x10
#define _WDTPSH_WDTPSCNT13_POSN                             0x5
#define _WDTPSH_WDTPSCNT13_POSITION                         0x5
#define _WDTPSH_WDTPSCNT13_SIZE                             0x1
#define _WDTPSH_WDTPSCNT13_LENGTH                           0x1
#define _WDTPSH_WDTPSCNT13_MASK                             0x20
#define _WDTPSH_WDTPSCNT14_POSN                             0x6
#define _WDTPSH_WDTPSCNT14_POSITION                         0x6
#define _WDTPSH_WDTPSCNT14_SIZE                             0x1
#define _WDTPSH_WDTPSCNT14_LENGTH                           0x1
#define _WDTPSH_WDTPSCNT14_MASK                             0x40
#define _WDTPSH_WDTPSCNT15_POSN                             0x7
#define _WDTPSH_WDTPSCNT15_POSITION                         0x7
#define _WDTPSH_WDTPSCNT15_SIZE                             0x1
#define _WDTPSH_WDTPSCNT15_LENGTH                           0x1
#define _WDTPSH_WDTPSCNT15_MASK                             0x80

// Register: WDTTMR
#define WDTTMR WDTTMR
extern volatile unsigned char           WDTTMR              __at(0x715);
#ifndef _LIB_BUILD
asm("WDTTMR equ 0715h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSCNT16                :1;
        unsigned PSCNT17                :1;
        unsigned STATE                  :1;
        unsigned WDTTMR                 :5;
    };
    struct {
        unsigned WDTPSCNT16             :1;
        unsigned WDTPSCNT17             :1;
        unsigned WDTSTATE               :1;
        unsigned WDTTMR0                :1;
        unsigned WDTTMR1                :1;
        unsigned WDTTMR2                :1;
        unsigned WDTTMR3                :1;
        unsigned WDTTMR4                :1;
    };
} WDTTMRbits_t;
extern volatile WDTTMRbits_t WDTTMRbits __at(0x715);
// bitfield macros
#define _WDTTMR_PSCNT16_POSN                                0x0
#define _WDTTMR_PSCNT16_POSITION                            0x0
#define _WDTTMR_PSCNT16_SIZE                                0x1
#define _WDTTMR_PSCNT16_LENGTH                              0x1
#define _WDTTMR_PSCNT16_MASK                                0x1
#define _WDTTMR_PSCNT17_POSN                                0x1
#define _WDTTMR_PSCNT17_POSITION                            0x1
#define _WDTTMR_PSCNT17_SIZE                                0x1
#define _WDTTMR_PSCNT17_LENGTH                              0x1
#define _WDTTMR_PSCNT17_MASK                                0x2
#define _WDTTMR_STATE_POSN                                  0x2
#define _WDTTMR_STATE_POSITION                              0x2
#define _WDTTMR_STATE_SIZE                                  0x1
#define _WDTTMR_STATE_LENGTH                                0x1
#define _WDTTMR_STATE_MASK                                  0x4
#define _WDTTMR_WDTTMR_POSN                                 0x3
#define _WDTTMR_WDTTMR_POSITION                             0x3
#define _WDTTMR_WDTTMR_SIZE                                 0x5
#define _WDTTMR_WDTTMR_LENGTH                               0x5
#define _WDTTMR_WDTTMR_MASK                                 0xF8
#define _WDTTMR_WDTPSCNT16_POSN                             0x0
#define _WDTTMR_WDTPSCNT16_POSITION                         0x0
#define _WDTTMR_WDTPSCNT16_SIZE                             0x1
#define _WDTTMR_WDTPSCNT16_LENGTH                           0x1
#define _WDTTMR_WDTPSCNT16_MASK                             0x1
#define _WDTTMR_WDTPSCNT17_POSN                             0x1
#define _WDTTMR_WDTPSCNT17_POSITION                         0x1
#define _WDTTMR_WDTPSCNT17_SIZE                             0x1
#define _WDTTMR_WDTPSCNT17_LENGTH                           0x1
#define _WDTTMR_WDTPSCNT17_MASK                             0x2
#define _WDTTMR_WDTSTATE_POSN                               0x2
#define _WDTTMR_WDTSTATE_POSITION                           0x2
#define _WDTTMR_WDTSTATE_SIZE                               0x1
#define _WDTTMR_WDTSTATE_LENGTH                             0x1
#define _WDTTMR_WDTSTATE_MASK                               0x4
#define _WDTTMR_WDTTMR0_POSN                                0x3
#define _WDTTMR_WDTTMR0_POSITION                            0x3
#define _WDTTMR_WDTTMR0_SIZE                                0x1
#define _WDTTMR_WDTTMR0_LENGTH                              0x1
#define _WDTTMR_WDTTMR0_MASK                                0x8
#define _WDTTMR_WDTTMR1_POSN                                0x4
#define _WDTTMR_WDTTMR1_POSITION                            0x4
#define _WDTTMR_WDTTMR1_SIZE                                0x1
#define _WDTTMR_WDTTMR1_LENGTH                              0x1
#define _WDTTMR_WDTTMR1_MASK                                0x10
#define _WDTTMR_WDTTMR2_POSN                                0x5
#define _WDTTMR_WDTTMR2_POSITION                            0x5
#define _WDTTMR_WDTTMR2_SIZE                                0x1
#define _WDTTMR_WDTTMR2_LENGTH                              0x1
#define _WDTTMR_WDTTMR2_MASK                                0x20
#define _WDTTMR_WDTTMR3_POSN                                0x6
#define _WDTTMR_WDTTMR3_POSITION                            0x6
#define _WDTTMR_WDTTMR3_SIZE                                0x1
#define _WDTTMR_WDTTMR3_LENGTH                              0x1
#define _WDTTMR_WDTTMR3_MASK                                0x40
#define _WDTTMR_WDTTMR4_POSN                                0x7
#define _WDTTMR_WDTTMR4_POSITION                            0x7
#define _WDTTMR_WDTTMR4_SIZE                                0x1
#define _WDTTMR_WDTTMR4_LENGTH                              0x1
#define _WDTTMR_WDTTMR4_MASK                                0x80

// Register: SCANLADR
#define SCANLADR SCANLADR
extern volatile unsigned short          SCANLADR            __at(0x718);
#ifndef _LIB_BUILD
asm("SCANLADR equ 0718h");
#endif

// Register: SCANLADRL
#define SCANLADRL SCANLADRL
extern volatile unsigned char           SCANLADRL           __at(0x718);
#ifndef _LIB_BUILD
asm("SCANLADRL equ 0718h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LADR                   :8;
    };
    struct {
        unsigned LDAR0                  :1;
        unsigned LDAR1                  :1;
        unsigned LADR2                  :1;
        unsigned LADR3                  :1;
        unsigned LADR4                  :1;
        unsigned LADR5                  :1;
        unsigned LADR6                  :1;
        unsigned LADR7                  :1;
    };
    struct {
        unsigned SCANLADR               :8;
    };
    struct {
        unsigned SCANLADR0              :1;
        unsigned SCANLADR1              :1;
        unsigned SCANLADR2              :1;
        unsigned SCANLADR3              :1;
        unsigned SCANLADR4              :1;
        unsigned SCANLADR5              :1;
        unsigned SCANLADR6              :1;
        unsigned SCANLADR7              :1;
    };
} SCANLADRLbits_t;
extern volatile SCANLADRLbits_t SCANLADRLbits __at(0x718);
// bitfield macros
#define _SCANLADRL_LADR_POSN                                0x0
#define _SCANLADRL_LADR_POSITION                            0x0
#define _SCANLADRL_LADR_SIZE                                0x8
#define _SCANLADRL_LADR_LENGTH                              0x8
#define _SCANLADRL_LADR_MASK                                0xFF
#define _SCANLADRL_LDAR0_POSN                               0x0
#define _SCANLADRL_LDAR0_POSITION                           0x0
#define _SCANLADRL_LDAR0_SIZE                               0x1
#define _SCANLADRL_LDAR0_LENGTH                             0x1
#define _SCANLADRL_LDAR0_MASK                               0x1
#define _SCANLADRL_LDAR1_POSN                               0x1
#define _SCANLADRL_LDAR1_POSITION                           0x1
#define _SCANLADRL_LDAR1_SIZE                               0x1
#define _SCANLADRL_LDAR1_LENGTH                             0x1
#define _SCANLADRL_LDAR1_MASK                               0x2
#define _SCANLADRL_LADR2_POSN                               0x2
#define _SCANLADRL_LADR2_POSITION                           0x2
#define _SCANLADRL_LADR2_SIZE                               0x1
#define _SCANLADRL_LADR2_LENGTH                             0x1
#define _SCANLADRL_LADR2_MASK                               0x4
#define _SCANLADRL_LADR3_POSN                               0x3
#define _SCANLADRL_LADR3_POSITION                           0x3
#define _SCANLADRL_LADR3_SIZE                               0x1
#define _SCANLADRL_LADR3_LENGTH                             0x1
#define _SCANLADRL_LADR3_MASK                               0x8
#define _SCANLADRL_LADR4_POSN                               0x4
#define _SCANLADRL_LADR4_POSITION                           0x4
#define _SCANLADRL_LADR4_SIZE                               0x1
#define _SCANLADRL_LADR4_LENGTH                             0x1
#define _SCANLADRL_LADR4_MASK                               0x10
#define _SCANLADRL_LADR5_POSN                               0x5
#define _SCANLADRL_LADR5_POSITION                           0x5
#define _SCANLADRL_LADR5_SIZE                               0x1
#define _SCANLADRL_LADR5_LENGTH                             0x1
#define _SCANLADRL_LADR5_MASK                               0x20
#define _SCANLADRL_LADR6_POSN                               0x6
#define _SCANLADRL_LADR6_POSITION                           0x6
#define _SCANLADRL_LADR6_SIZE                               0x1
#define _SCANLADRL_LADR6_LENGTH                             0x1
#define _SCANLADRL_LADR6_MASK                               0x40
#define _SCANLADRL_LADR7_POSN                               0x7
#define _SCANLADRL_LADR7_POSITION                           0x7
#define _SCANLADRL_LADR7_SIZE                               0x1
#define _SCANLADRL_LADR7_LENGTH                             0x1
#define _SCANLADRL_LADR7_MASK                               0x80
#define _SCANLADRL_SCANLADR_POSN                            0x0
#define _SCANLADRL_SCANLADR_POSITION                        0x0
#define _SCANLADRL_SCANLADR_SIZE                            0x8
#define _SCANLADRL_SCANLADR_LENGTH                          0x8
#define _SCANLADRL_SCANLADR_MASK                            0xFF
#define _SCANLADRL_SCANLADR0_POSN                           0x0
#define _SCANLADRL_SCANLADR0_POSITION                       0x0
#define _SCANLADRL_SCANLADR0_SIZE                           0x1
#define _SCANLADRL_SCANLADR0_LENGTH                         0x1
#define _SCANLADRL_SCANLADR0_MASK                           0x1
#define _SCANLADRL_SCANLADR1_POSN                           0x1
#define _SCANLADRL_SCANLADR1_POSITION                       0x1
#define _SCANLADRL_SCANLADR1_SIZE                           0x1
#define _SCANLADRL_SCANLADR1_LENGTH                         0x1
#define _SCANLADRL_SCANLADR1_MASK                           0x2
#define _SCANLADRL_SCANLADR2_POSN                           0x2
#define _SCANLADRL_SCANLADR2_POSITION                       0x2
#define _SCANLADRL_SCANLADR2_SIZE                           0x1
#define _SCANLADRL_SCANLADR2_LENGTH                         0x1
#define _SCANLADRL_SCANLADR2_MASK                           0x4
#define _SCANLADRL_SCANLADR3_POSN                           0x3
#define _SCANLADRL_SCANLADR3_POSITION                       0x3
#define _SCANLADRL_SCANLADR3_SIZE                           0x1
#define _SCANLADRL_SCANLADR3_LENGTH                         0x1
#define _SCANLADRL_SCANLADR3_MASK                           0x8
#define _SCANLADRL_SCANLADR4_POSN                           0x4
#define _SCANLADRL_SCANLADR4_POSITION                       0x4
#define _SCANLADRL_SCANLADR4_SIZE                           0x1
#define _SCANLADRL_SCANLADR4_LENGTH                         0x1
#define _SCANLADRL_SCANLADR4_MASK                           0x10
#define _SCANLADRL_SCANLADR5_POSN                           0x5
#define _SCANLADRL_SCANLADR5_POSITION                       0x5
#define _SCANLADRL_SCANLADR5_SIZE                           0x1
#define _SCANLADRL_SCANLADR5_LENGTH                         0x1
#define _SCANLADRL_SCANLADR5_MASK                           0x20
#define _SCANLADRL_SCANLADR6_POSN                           0x6
#define _SCANLADRL_SCANLADR6_POSITION                       0x6
#define _SCANLADRL_SCANLADR6_SIZE                           0x1
#define _SCANLADRL_SCANLADR6_LENGTH                         0x1
#define _SCANLADRL_SCANLADR6_MASK                           0x40
#define _SCANLADRL_SCANLADR7_POSN                           0x7
#define _SCANLADRL_SCANLADR7_POSITION                       0x7
#define _SCANLADRL_SCANLADR7_SIZE                           0x1
#define _SCANLADRL_SCANLADR7_LENGTH                         0x1
#define _SCANLADRL_SCANLADR7_MASK                           0x80

// Register: SCANLADRH
#define SCANLADRH SCANLADRH
extern volatile unsigned char           SCANLADRH           __at(0x719);
#ifndef _LIB_BUILD
asm("SCANLADRH equ 0719h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LADR                   :8;
    };
    struct {
        unsigned LADR8                  :1;
        unsigned LADR9                  :1;
        unsigned LADR10                 :1;
        unsigned LADR11                 :1;
        unsigned LADR12                 :1;
        unsigned LADR13                 :1;
        unsigned LADR14                 :1;
        unsigned LADR15                 :1;
    };
    struct {
        unsigned SCANLADR               :8;
    };
    struct {
        unsigned SCANLADR8              :1;
        unsigned SCANLADR9              :1;
        unsigned SCANLADR10             :1;
        unsigned SCANLADR11             :1;
        unsigned SCANLADR12             :1;
        unsigned SCANLADR13             :1;
        unsigned SCANLADR14             :1;
        unsigned SCANLADR15             :1;
    };
} SCANLADRHbits_t;
extern volatile SCANLADRHbits_t SCANLADRHbits __at(0x719);
// bitfield macros
#define _SCANLADRH_LADR_POSN                                0x0
#define _SCANLADRH_LADR_POSITION                            0x0
#define _SCANLADRH_LADR_SIZE                                0x8
#define _SCANLADRH_LADR_LENGTH                              0x8
#define _SCANLADRH_LADR_MASK                                0xFF
#define _SCANLADRH_LADR8_POSN                               0x0
#define _SCANLADRH_LADR8_POSITION                           0x0
#define _SCANLADRH_LADR8_SIZE                               0x1
#define _SCANLADRH_LADR8_LENGTH                             0x1
#define _SCANLADRH_LADR8_MASK                               0x1
#define _SCANLADRH_LADR9_POSN                               0x1
#define _SCANLADRH_LADR9_POSITION                           0x1
#define _SCANLADRH_LADR9_SIZE                               0x1
#define _SCANLADRH_LADR9_LENGTH                             0x1
#define _SCANLADRH_LADR9_MASK                               0x2
#define _SCANLADRH_LADR10_POSN                              0x2
#define _SCANLADRH_LADR10_POSITION                          0x2
#define _SCANLADRH_LADR10_SIZE                              0x1
#define _SCANLADRH_LADR10_LENGTH                            0x1
#define _SCANLADRH_LADR10_MASK                              0x4
#define _SCANLADRH_LADR11_POSN                              0x3
#define _SCANLADRH_LADR11_POSITION                          0x3
#define _SCANLADRH_LADR11_SIZE                              0x1
#define _SCANLADRH_LADR11_LENGTH                            0x1
#define _SCANLADRH_LADR11_MASK                              0x8
#define _SCANLADRH_LADR12_POSN                              0x4
#define _SCANLADRH_LADR12_POSITION                          0x4
#define _SCANLADRH_LADR12_SIZE                              0x1
#define _SCANLADRH_LADR12_LENGTH                            0x1
#define _SCANLADRH_LADR12_MASK                              0x10
#define _SCANLADRH_LADR13_POSN                              0x5
#define _SCANLADRH_LADR13_POSITION                          0x5
#define _SCANLADRH_LADR13_SIZE                              0x1
#define _SCANLADRH_LADR13_LENGTH                            0x1
#define _SCANLADRH_LADR13_MASK                              0x20
#define _SCANLADRH_LADR14_POSN                              0x6
#define _SCANLADRH_LADR14_POSITION                          0x6
#define _SCANLADRH_LADR14_SIZE                              0x1
#define _SCANLADRH_LADR14_LENGTH                            0x1
#define _SCANLADRH_LADR14_MASK                              0x40
#define _SCANLADRH_LADR15_POSN                              0x7
#define _SCANLADRH_LADR15_POSITION                          0x7
#define _SCANLADRH_LADR15_SIZE                              0x1
#define _SCANLADRH_LADR15_LENGTH                            0x1
#define _SCANLADRH_LADR15_MASK                              0x80
#define _SCANLADRH_SCANLADR_POSN                            0x0
#define _SCANLADRH_SCANLADR_POSITION                        0x0
#define _SCANLADRH_SCANLADR_SIZE                            0x8
#define _SCANLADRH_SCANLADR_LENGTH                          0x8
#define _SCANLADRH_SCANLADR_MASK                            0xFF
#define _SCANLADRH_SCANLADR8_POSN                           0x0
#define _SCANLADRH_SCANLADR8_POSITION                       0x0
#define _SCANLADRH_SCANLADR8_SIZE                           0x1
#define _SCANLADRH_SCANLADR8_LENGTH                         0x1
#define _SCANLADRH_SCANLADR8_MASK                           0x1
#define _SCANLADRH_SCANLADR9_POSN                           0x1
#define _SCANLADRH_SCANLADR9_POSITION                       0x1
#define _SCANLADRH_SCANLADR9_SIZE                           0x1
#define _SCANLADRH_SCANLADR9_LENGTH                         0x1
#define _SCANLADRH_SCANLADR9_MASK                           0x2
#define _SCANLADRH_SCANLADR10_POSN                          0x2
#define _SCANLADRH_SCANLADR10_POSITION                      0x2
#define _SCANLADRH_SCANLADR10_SIZE                          0x1
#define _SCANLADRH_SCANLADR10_LENGTH                        0x1
#define _SCANLADRH_SCANLADR10_MASK                          0x4
#define _SCANLADRH_SCANLADR11_POSN                          0x3
#define _SCANLADRH_SCANLADR11_POSITION                      0x3
#define _SCANLADRH_SCANLADR11_SIZE                          0x1
#define _SCANLADRH_SCANLADR11_LENGTH                        0x1
#define _SCANLADRH_SCANLADR11_MASK                          0x8
#define _SCANLADRH_SCANLADR12_POSN                          0x4
#define _SCANLADRH_SCANLADR12_POSITION                      0x4
#define _SCANLADRH_SCANLADR12_SIZE                          0x1
#define _SCANLADRH_SCANLADR12_LENGTH                        0x1
#define _SCANLADRH_SCANLADR12_MASK                          0x10
#define _SCANLADRH_SCANLADR13_POSN                          0x5
#define _SCANLADRH_SCANLADR13_POSITION                      0x5
#define _SCANLADRH_SCANLADR13_SIZE                          0x1
#define _SCANLADRH_SCANLADR13_LENGTH                        0x1
#define _SCANLADRH_SCANLADR13_MASK                          0x20
#define _SCANLADRH_SCANLADR14_POSN                          0x6
#define _SCANLADRH_SCANLADR14_POSITION                      0x6
#define _SCANLADRH_SCANLADR14_SIZE                          0x1
#define _SCANLADRH_SCANLADR14_LENGTH                        0x1
#define _SCANLADRH_SCANLADR14_MASK                          0x40
#define _SCANLADRH_SCANLADR15_POSN                          0x7
#define _SCANLADRH_SCANLADR15_POSITION                      0x7
#define _SCANLADRH_SCANLADR15_SIZE                          0x1
#define _SCANLADRH_SCANLADR15_LENGTH                        0x1
#define _SCANLADRH_SCANLADR15_MASK                          0x80

// Register: SCANHADR
#define SCANHADR SCANHADR
extern volatile unsigned short          SCANHADR            __at(0x71A);
#ifndef _LIB_BUILD
asm("SCANHADR equ 071Ah");
#endif

// Register: SCANHADRL
#define SCANHADRL SCANHADRL
extern volatile unsigned char           SCANHADRL           __at(0x71A);
#ifndef _LIB_BUILD
asm("SCANHADRL equ 071Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HADR                   :8;
    };
    struct {
        unsigned HADR0                  :1;
        unsigned HADR1                  :1;
        unsigned HARD2                  :1;
        unsigned HADR3                  :1;
        unsigned HADR4                  :1;
        unsigned HADR5                  :1;
        unsigned HADR6                  :1;
        unsigned HADR7                  :1;
    };
    struct {
        unsigned SCANHADR               :8;
    };
    struct {
        unsigned SCANHADR0              :1;
        unsigned SCANHADR1              :1;
        unsigned SCANHADR2              :1;
        unsigned SCANHADR3              :1;
        unsigned SCANHADR4              :1;
        unsigned SCANHADR5              :1;
        unsigned SCANHADR6              :1;
        unsigned SCANHADR7              :1;
    };
} SCANHADRLbits_t;
extern volatile SCANHADRLbits_t SCANHADRLbits __at(0x71A);
// bitfield macros
#define _SCANHADRL_HADR_POSN                                0x0
#define _SCANHADRL_HADR_POSITION                            0x0
#define _SCANHADRL_HADR_SIZE                                0x8
#define _SCANHADRL_HADR_LENGTH                              0x8
#define _SCANHADRL_HADR_MASK                                0xFF
#define _SCANHADRL_HADR0_POSN                               0x0
#define _SCANHADRL_HADR0_POSITION                           0x0
#define _SCANHADRL_HADR0_SIZE                               0x1
#define _SCANHADRL_HADR0_LENGTH                             0x1
#define _SCANHADRL_HADR0_MASK                               0x1
#define _SCANHADRL_HADR1_POSN                               0x1
#define _SCANHADRL_HADR1_POSITION                           0x1
#define _SCANHADRL_HADR1_SIZE                               0x1
#define _SCANHADRL_HADR1_LENGTH                             0x1
#define _SCANHADRL_HADR1_MASK                               0x2
#define _SCANHADRL_HARD2_POSN                               0x2
#define _SCANHADRL_HARD2_POSITION                           0x2
#define _SCANHADRL_HARD2_SIZE                               0x1
#define _SCANHADRL_HARD2_LENGTH                             0x1
#define _SCANHADRL_HARD2_MASK                               0x4
#define _SCANHADRL_HADR3_POSN                               0x3
#define _SCANHADRL_HADR3_POSITION                           0x3
#define _SCANHADRL_HADR3_SIZE                               0x1
#define _SCANHADRL_HADR3_LENGTH                             0x1
#define _SCANHADRL_HADR3_MASK                               0x8
#define _SCANHADRL_HADR4_POSN                               0x4
#define _SCANHADRL_HADR4_POSITION                           0x4
#define _SCANHADRL_HADR4_SIZE                               0x1
#define _SCANHADRL_HADR4_LENGTH                             0x1
#define _SCANHADRL_HADR4_MASK                               0x10
#define _SCANHADRL_HADR5_POSN                               0x5
#define _SCANHADRL_HADR5_POSITION                           0x5
#define _SCANHADRL_HADR5_SIZE                               0x1
#define _SCANHADRL_HADR5_LENGTH                             0x1
#define _SCANHADRL_HADR5_MASK                               0x20
#define _SCANHADRL_HADR6_POSN                               0x6
#define _SCANHADRL_HADR6_POSITION                           0x6
#define _SCANHADRL_HADR6_SIZE                               0x1
#define _SCANHADRL_HADR6_LENGTH                             0x1
#define _SCANHADRL_HADR6_MASK                               0x40
#define _SCANHADRL_HADR7_POSN                               0x7
#define _SCANHADRL_HADR7_POSITION                           0x7
#define _SCANHADRL_HADR7_SIZE                               0x1
#define _SCANHADRL_HADR7_LENGTH                             0x1
#define _SCANHADRL_HADR7_MASK                               0x80
#define _SCANHADRL_SCANHADR_POSN                            0x0
#define _SCANHADRL_SCANHADR_POSITION                        0x0
#define _SCANHADRL_SCANHADR_SIZE                            0x8
#define _SCANHADRL_SCANHADR_LENGTH                          0x8
#define _SCANHADRL_SCANHADR_MASK                            0xFF
#define _SCANHADRL_SCANHADR0_POSN                           0x0
#define _SCANHADRL_SCANHADR0_POSITION                       0x0
#define _SCANHADRL_SCANHADR0_SIZE                           0x1
#define _SCANHADRL_SCANHADR0_LENGTH                         0x1
#define _SCANHADRL_SCANHADR0_MASK                           0x1
#define _SCANHADRL_SCANHADR1_POSN                           0x1
#define _SCANHADRL_SCANHADR1_POSITION                       0x1
#define _SCANHADRL_SCANHADR1_SIZE                           0x1
#define _SCANHADRL_SCANHADR1_LENGTH                         0x1
#define _SCANHADRL_SCANHADR1_MASK                           0x2
#define _SCANHADRL_SCANHADR2_POSN                           0x2
#define _SCANHADRL_SCANHADR2_POSITION                       0x2
#define _SCANHADRL_SCANHADR2_SIZE                           0x1
#define _SCANHADRL_SCANHADR2_LENGTH                         0x1
#define _SCANHADRL_SCANHADR2_MASK                           0x4
#define _SCANHADRL_SCANHADR3_POSN                           0x3
#define _SCANHADRL_SCANHADR3_POSITION                       0x3
#define _SCANHADRL_SCANHADR3_SIZE                           0x1
#define _SCANHADRL_SCANHADR3_LENGTH                         0x1
#define _SCANHADRL_SCANHADR3_MASK                           0x8
#define _SCANHADRL_SCANHADR4_POSN                           0x4
#define _SCANHADRL_SCANHADR4_POSITION                       0x4
#define _SCANHADRL_SCANHADR4_SIZE                           0x1
#define _SCANHADRL_SCANHADR4_LENGTH                         0x1
#define _SCANHADRL_SCANHADR4_MASK                           0x10
#define _SCANHADRL_SCANHADR5_POSN                           0x5
#define _SCANHADRL_SCANHADR5_POSITION                       0x5
#define _SCANHADRL_SCANHADR5_SIZE                           0x1
#define _SCANHADRL_SCANHADR5_LENGTH                         0x1
#define _SCANHADRL_SCANHADR5_MASK                           0x20
#define _SCANHADRL_SCANHADR6_POSN                           0x6
#define _SCANHADRL_SCANHADR6_POSITION                       0x6
#define _SCANHADRL_SCANHADR6_SIZE                           0x1
#define _SCANHADRL_SCANHADR6_LENGTH                         0x1
#define _SCANHADRL_SCANHADR6_MASK                           0x40
#define _SCANHADRL_SCANHADR7_POSN                           0x7
#define _SCANHADRL_SCANHADR7_POSITION                       0x7
#define _SCANHADRL_SCANHADR7_SIZE                           0x1
#define _SCANHADRL_SCANHADR7_LENGTH                         0x1
#define _SCANHADRL_SCANHADR7_MASK                           0x80

// Register: SCANHADRH
#define SCANHADRH SCANHADRH
extern volatile unsigned char           SCANHADRH           __at(0x71B);
#ifndef _LIB_BUILD
asm("SCANHADRH equ 071Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HADR                   :8;
    };
    struct {
        unsigned HADR8                  :1;
        unsigned HADR9                  :1;
        unsigned HADR10                 :1;
        unsigned HADR11                 :1;
        unsigned HADR12                 :1;
        unsigned HADR13                 :1;
        unsigned HADR14                 :1;
        unsigned HADR15                 :1;
    };
    struct {
        unsigned SCANHADR               :8;
    };
    struct {
        unsigned SCANHADR8              :1;
        unsigned SCANHADR9              :1;
        unsigned SCANHADR10             :1;
        unsigned SCANHADR11             :1;
        unsigned SCANHADR12             :1;
        unsigned SCANHADR13             :1;
        unsigned SCANHADR14             :1;
        unsigned SCANHADR15             :1;
    };
} SCANHADRHbits_t;
extern volatile SCANHADRHbits_t SCANHADRHbits __at(0x71B);
// bitfield macros
#define _SCANHADRH_HADR_POSN                                0x0
#define _SCANHADRH_HADR_POSITION                            0x0
#define _SCANHADRH_HADR_SIZE                                0x8
#define _SCANHADRH_HADR_LENGTH                              0x8
#define _SCANHADRH_HADR_MASK                                0xFF
#define _SCANHADRH_HADR8_POSN                               0x0
#define _SCANHADRH_HADR8_POSITION                           0x0
#define _SCANHADRH_HADR8_SIZE                               0x1
#define _SCANHADRH_HADR8_LENGTH                             0x1
#define _SCANHADRH_HADR8_MASK                               0x1
#define _SCANHADRH_HADR9_POSN                               0x1
#define _SCANHADRH_HADR9_POSITION                           0x1
#define _SCANHADRH_HADR9_SIZE                               0x1
#define _SCANHADRH_HADR9_LENGTH                             0x1
#define _SCANHADRH_HADR9_MASK                               0x2
#define _SCANHADRH_HADR10_POSN                              0x2
#define _SCANHADRH_HADR10_POSITION                          0x2
#define _SCANHADRH_HADR10_SIZE                              0x1
#define _SCANHADRH_HADR10_LENGTH                            0x1
#define _SCANHADRH_HADR10_MASK                              0x4
#define _SCANHADRH_HADR11_POSN                              0x3
#define _SCANHADRH_HADR11_POSITION                          0x3
#define _SCANHADRH_HADR11_SIZE                              0x1
#define _SCANHADRH_HADR11_LENGTH                            0x1
#define _SCANHADRH_HADR11_MASK                              0x8
#define _SCANHADRH_HADR12_POSN                              0x4
#define _SCANHADRH_HADR12_POSITION                          0x4
#define _SCANHADRH_HADR12_SIZE                              0x1
#define _SCANHADRH_HADR12_LENGTH                            0x1
#define _SCANHADRH_HADR12_MASK                              0x10
#define _SCANHADRH_HADR13_POSN                              0x5
#define _SCANHADRH_HADR13_POSITION                          0x5
#define _SCANHADRH_HADR13_SIZE                              0x1
#define _SCANHADRH_HADR13_LENGTH                            0x1
#define _SCANHADRH_HADR13_MASK                              0x20
#define _SCANHADRH_HADR14_POSN                              0x6
#define _SCANHADRH_HADR14_POSITION                          0x6
#define _SCANHADRH_HADR14_SIZE                              0x1
#define _SCANHADRH_HADR14_LENGTH                            0x1
#define _SCANHADRH_HADR14_MASK                              0x40
#define _SCANHADRH_HADR15_POSN                              0x7
#define _SCANHADRH_HADR15_POSITION                          0x7
#define _SCANHADRH_HADR15_SIZE                              0x1
#define _SCANHADRH_HADR15_LENGTH                            0x1
#define _SCANHADRH_HADR15_MASK                              0x80
#define _SCANHADRH_SCANHADR_POSN                            0x0
#define _SCANHADRH_SCANHADR_POSITION                        0x0
#define _SCANHADRH_SCANHADR_SIZE                            0x8
#define _SCANHADRH_SCANHADR_LENGTH                          0x8
#define _SCANHADRH_SCANHADR_MASK                            0xFF
#define _SCANHADRH_SCANHADR8_POSN                           0x0
#define _SCANHADRH_SCANHADR8_POSITION                       0x0
#define _SCANHADRH_SCANHADR8_SIZE                           0x1
#define _SCANHADRH_SCANHADR8_LENGTH                         0x1
#define _SCANHADRH_SCANHADR8_MASK                           0x1
#define _SCANHADRH_SCANHADR9_POSN                           0x1
#define _SCANHADRH_SCANHADR9_POSITION                       0x1
#define _SCANHADRH_SCANHADR9_SIZE                           0x1
#define _SCANHADRH_SCANHADR9_LENGTH                         0x1
#define _SCANHADRH_SCANHADR9_MASK                           0x2
#define _SCANHADRH_SCANHADR10_POSN                          0x2
#define _SCANHADRH_SCANHADR10_POSITION                      0x2
#define _SCANHADRH_SCANHADR10_SIZE                          0x1
#define _SCANHADRH_SCANHADR10_LENGTH                        0x1
#define _SCANHADRH_SCANHADR10_MASK                          0x4
#define _SCANHADRH_SCANHADR11_POSN                          0x3
#define _SCANHADRH_SCANHADR11_POSITION                      0x3
#define _SCANHADRH_SCANHADR11_SIZE                          0x1
#define _SCANHADRH_SCANHADR11_LENGTH                        0x1
#define _SCANHADRH_SCANHADR11_MASK                          0x8
#define _SCANHADRH_SCANHADR12_POSN                          0x4
#define _SCANHADRH_SCANHADR12_POSITION                      0x4
#define _SCANHADRH_SCANHADR12_SIZE                          0x1
#define _SCANHADRH_SCANHADR12_LENGTH                        0x1
#define _SCANHADRH_SCANHADR12_MASK                          0x10
#define _SCANHADRH_SCANHADR13_POSN                          0x5
#define _SCANHADRH_SCANHADR13_POSITION                      0x5
#define _SCANHADRH_SCANHADR13_SIZE                          0x1
#define _SCANHADRH_SCANHADR13_LENGTH                        0x1
#define _SCANHADRH_SCANHADR13_MASK                          0x20
#define _SCANHADRH_SCANHADR14_POSN                          0x6
#define _SCANHADRH_SCANHADR14_POSITION                      0x6
#define _SCANHADRH_SCANHADR14_SIZE                          0x1
#define _SCANHADRH_SCANHADR14_LENGTH                        0x1
#define _SCANHADRH_SCANHADR14_MASK                          0x40
#define _SCANHADRH_SCANHADR15_POSN                          0x7
#define _SCANHADRH_SCANHADR15_POSITION                      0x7
#define _SCANHADRH_SCANHADR15_SIZE                          0x1
#define _SCANHADRH_SCANHADR15_LENGTH                        0x1
#define _SCANHADRH_SCANHADR15_MASK                          0x80

// Register: SCANCON0
#define SCANCON0 SCANCON0
extern volatile unsigned char           SCANCON0            __at(0x71C);
#ifndef _LIB_BUILD
asm("SCANCON0 equ 071Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :2;
        unsigned                        :1;
        unsigned INTM                   :1;
        unsigned INVALID                :1;
        unsigned BUSY                   :1;
        unsigned SCANGO                 :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
    };
    struct {
        unsigned SCANMODE               :2;
        unsigned                        :1;
        unsigned SCANINTM               :1;
        unsigned SCANINVALID            :1;
        unsigned SCANBUSY               :1;
        unsigned                        :1;
        unsigned SCANEN                 :1;
    };
    struct {
        unsigned SCANMODE0              :1;
        unsigned SCANMODE1              :1;
    };
} SCANCON0bits_t;
extern volatile SCANCON0bits_t SCANCON0bits __at(0x71C);
// bitfield macros
#define _SCANCON0_MODE_POSN                                 0x0
#define _SCANCON0_MODE_POSITION                             0x0
#define _SCANCON0_MODE_SIZE                                 0x2
#define _SCANCON0_MODE_LENGTH                               0x2
#define _SCANCON0_MODE_MASK                                 0x3
#define _SCANCON0_INTM_POSN                                 0x3
#define _SCANCON0_INTM_POSITION                             0x3
#define _SCANCON0_INTM_SIZE                                 0x1
#define _SCANCON0_INTM_LENGTH                               0x1
#define _SCANCON0_INTM_MASK                                 0x8
#define _SCANCON0_INVALID_POSN                              0x4
#define _SCANCON0_INVALID_POSITION                          0x4
#define _SCANCON0_INVALID_SIZE                              0x1
#define _SCANCON0_INVALID_LENGTH                            0x1
#define _SCANCON0_INVALID_MASK                              0x10
#define _SCANCON0_BUSY_POSN                                 0x5
#define _SCANCON0_BUSY_POSITION                             0x5
#define _SCANCON0_BUSY_SIZE                                 0x1
#define _SCANCON0_BUSY_LENGTH                               0x1
#define _SCANCON0_BUSY_MASK                                 0x20
#define _SCANCON0_SCANGO_POSN                               0x6
#define _SCANCON0_SCANGO_POSITION                           0x6
#define _SCANCON0_SCANGO_SIZE                               0x1
#define _SCANCON0_SCANGO_LENGTH                             0x1
#define _SCANCON0_SCANGO_MASK                               0x40
#define _SCANCON0_EN_POSN                                   0x7
#define _SCANCON0_EN_POSITION                               0x7
#define _SCANCON0_EN_SIZE                                   0x1
#define _SCANCON0_EN_LENGTH                                 0x1
#define _SCANCON0_EN_MASK                                   0x80
#define _SCANCON0_MODE0_POSN                                0x0
#define _SCANCON0_MODE0_POSITION                            0x0
#define _SCANCON0_MODE0_SIZE                                0x1
#define _SCANCON0_MODE0_LENGTH                              0x1
#define _SCANCON0_MODE0_MASK                                0x1
#define _SCANCON0_MODE1_POSN                                0x1
#define _SCANCON0_MODE1_POSITION                            0x1
#define _SCANCON0_MODE1_SIZE                                0x1
#define _SCANCON0_MODE1_LENGTH                              0x1
#define _SCANCON0_MODE1_MASK                                0x2
#define _SCANCON0_SCANMODE_POSN                             0x0
#define _SCANCON0_SCANMODE_POSITION                         0x0
#define _SCANCON0_SCANMODE_SIZE                             0x2
#define _SCANCON0_SCANMODE_LENGTH                           0x2
#define _SCANCON0_SCANMODE_MASK                             0x3
#define _SCANCON0_SCANINTM_POSN                             0x3
#define _SCANCON0_SCANINTM_POSITION                         0x3
#define _SCANCON0_SCANINTM_SIZE                             0x1
#define _SCANCON0_SCANINTM_LENGTH                           0x1
#define _SCANCON0_SCANINTM_MASK                             0x8
#define _SCANCON0_SCANINVALID_POSN                          0x4
#define _SCANCON0_SCANINVALID_POSITION                      0x4
#define _SCANCON0_SCANINVALID_SIZE                          0x1
#define _SCANCON0_SCANINVALID_LENGTH                        0x1
#define _SCANCON0_SCANINVALID_MASK                          0x10
#define _SCANCON0_SCANBUSY_POSN                             0x5
#define _SCANCON0_SCANBUSY_POSITION                         0x5
#define _SCANCON0_SCANBUSY_SIZE                             0x1
#define _SCANCON0_SCANBUSY_LENGTH                           0x1
#define _SCANCON0_SCANBUSY_MASK                             0x20
#define _SCANCON0_SCANEN_POSN                               0x7
#define _SCANCON0_SCANEN_POSITION                           0x7
#define _SCANCON0_SCANEN_SIZE                               0x1
#define _SCANCON0_SCANEN_LENGTH                             0x1
#define _SCANCON0_SCANEN_MASK                               0x80
#define _SCANCON0_SCANMODE0_POSN                            0x0
#define _SCANCON0_SCANMODE0_POSITION                        0x0
#define _SCANCON0_SCANMODE0_SIZE                            0x1
#define _SCANCON0_SCANMODE0_LENGTH                          0x1
#define _SCANCON0_SCANMODE0_MASK                            0x1
#define _SCANCON0_SCANMODE1_POSN                            0x1
#define _SCANCON0_SCANMODE1_POSITION                        0x1
#define _SCANCON0_SCANMODE1_SIZE                            0x1
#define _SCANCON0_SCANMODE1_LENGTH                          0x1
#define _SCANCON0_SCANMODE1_MASK                            0x2

// Register: SCANTRIG
#define SCANTRIG SCANTRIG
extern volatile unsigned char           SCANTRIG            __at(0x71D);
#ifndef _LIB_BUILD
asm("SCANTRIG equ 071Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TSEL                   :8;
    };
    struct {
        unsigned TSEL0                  :1;
        unsigned TSEL1                  :1;
    };
    struct {
        unsigned SCANTSEL               :8;
    };
    struct {
        unsigned SCANTSEL0              :1;
        unsigned SCANTSEL1              :1;
    };
} SCANTRIGbits_t;
extern volatile SCANTRIGbits_t SCANTRIGbits __at(0x71D);
// bitfield macros
#define _SCANTRIG_TSEL_POSN                                 0x0
#define _SCANTRIG_TSEL_POSITION                             0x0
#define _SCANTRIG_TSEL_SIZE                                 0x8
#define _SCANTRIG_TSEL_LENGTH                               0x8
#define _SCANTRIG_TSEL_MASK                                 0xFF
#define _SCANTRIG_TSEL0_POSN                                0x0
#define _SCANTRIG_TSEL0_POSITION                            0x0
#define _SCANTRIG_TSEL0_SIZE                                0x1
#define _SCANTRIG_TSEL0_LENGTH                              0x1
#define _SCANTRIG_TSEL0_MASK                                0x1
#define _SCANTRIG_TSEL1_POSN                                0x1
#define _SCANTRIG_TSEL1_POSITION                            0x1
#define _SCANTRIG_TSEL1_SIZE                                0x1
#define _SCANTRIG_TSEL1_LENGTH                              0x1
#define _SCANTRIG_TSEL1_MASK                                0x2
#define _SCANTRIG_SCANTSEL_POSN                             0x0
#define _SCANTRIG_SCANTSEL_POSITION                         0x0
#define _SCANTRIG_SCANTSEL_SIZE                             0x8
#define _SCANTRIG_SCANTSEL_LENGTH                           0x8
#define _SCANTRIG_SCANTSEL_MASK                             0xFF
#define _SCANTRIG_SCANTSEL0_POSN                            0x0
#define _SCANTRIG_SCANTSEL0_POSITION                        0x0
#define _SCANTRIG_SCANTSEL0_SIZE                            0x1
#define _SCANTRIG_SCANTSEL0_LENGTH                          0x1
#define _SCANTRIG_SCANTSEL0_MASK                            0x1
#define _SCANTRIG_SCANTSEL1_POSN                            0x1
#define _SCANTRIG_SCANTSEL1_POSITION                        0x1
#define _SCANTRIG_SCANTSEL1_SIZE                            0x1
#define _SCANTRIG_SCANTSEL1_LENGTH                          0x1
#define _SCANTRIG_SCANTSEL1_MASK                            0x2

// Register: CRCDAT
#define CRCDAT CRCDAT
extern volatile unsigned short          CRCDAT              __at(0x791);
#ifndef _LIB_BUILD
asm("CRCDAT equ 0791h");
#endif

// Register: CRCDATL
#define CRCDATL CRCDATL
extern volatile unsigned char           CRCDATL             __at(0x791);
#ifndef _LIB_BUILD
asm("CRCDATL equ 0791h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAT                    :8;
    };
    struct {
        unsigned DAT0                   :1;
        unsigned DAT1                   :1;
        unsigned DAT2                   :1;
        unsigned DAT3                   :1;
        unsigned DAT4                   :1;
        unsigned DAT5                   :1;
        unsigned DAT6                   :1;
        unsigned DAT7                   :1;
    };
    struct {
        unsigned CRCDAT                 :8;
    };
    struct {
        unsigned CRCDAT0                :1;
        unsigned CRCDAT1                :1;
        unsigned CRCDAT2                :1;
        unsigned CRCDAT3                :1;
        unsigned CRCDAT4                :1;
        unsigned CRCDAT5                :1;
        unsigned CRCDAT6                :1;
        unsigned CRDCDAT7               :1;
    };
} CRCDATLbits_t;
extern volatile CRCDATLbits_t CRCDATLbits __at(0x791);
// bitfield macros
#define _CRCDATL_DAT_POSN                                   0x0
#define _CRCDATL_DAT_POSITION                               0x0
#define _CRCDATL_DAT_SIZE                                   0x8
#define _CRCDATL_DAT_LENGTH                                 0x8
#define _CRCDATL_DAT_MASK                                   0xFF
#define _CRCDATL_DAT0_POSN                                  0x0
#define _CRCDATL_DAT0_POSITION                              0x0
#define _CRCDATL_DAT0_SIZE                                  0x1
#define _CRCDATL_DAT0_LENGTH                                0x1
#define _CRCDATL_DAT0_MASK                                  0x1
#define _CRCDATL_DAT1_POSN                                  0x1
#define _CRCDATL_DAT1_POSITION                              0x1
#define _CRCDATL_DAT1_SIZE                                  0x1
#define _CRCDATL_DAT1_LENGTH                                0x1
#define _CRCDATL_DAT1_MASK                                  0x2
#define _CRCDATL_DAT2_POSN                                  0x2
#define _CRCDATL_DAT2_POSITION                              0x2
#define _CRCDATL_DAT2_SIZE                                  0x1
#define _CRCDATL_DAT2_LENGTH                                0x1
#define _CRCDATL_DAT2_MASK                                  0x4
#define _CRCDATL_DAT3_POSN                                  0x3
#define _CRCDATL_DAT3_POSITION                              0x3
#define _CRCDATL_DAT3_SIZE                                  0x1
#define _CRCDATL_DAT3_LENGTH                                0x1
#define _CRCDATL_DAT3_MASK                                  0x8
#define _CRCDATL_DAT4_POSN                                  0x4
#define _CRCDATL_DAT4_POSITION                              0x4
#define _CRCDATL_DAT4_SIZE                                  0x1
#define _CRCDATL_DAT4_LENGTH                                0x1
#define _CRCDATL_DAT4_MASK                                  0x10
#define _CRCDATL_DAT5_POSN                                  0x5
#define _CRCDATL_DAT5_POSITION                              0x5
#define _CRCDATL_DAT5_SIZE                                  0x1
#define _CRCDATL_DAT5_LENGTH                                0x1
#define _CRCDATL_DAT5_MASK                                  0x20
#define _CRCDATL_DAT6_POSN                                  0x6
#define _CRCDATL_DAT6_POSITION                              0x6
#define _CRCDATL_DAT6_SIZE                                  0x1
#define _CRCDATL_DAT6_LENGTH                                0x1
#define _CRCDATL_DAT6_MASK                                  0x40
#define _CRCDATL_DAT7_POSN                                  0x7
#define _CRCDATL_DAT7_POSITION                              0x7
#define _CRCDATL_DAT7_SIZE                                  0x1
#define _CRCDATL_DAT7_LENGTH                                0x1
#define _CRCDATL_DAT7_MASK                                  0x80
#define _CRCDATL_CRCDAT_POSN                                0x0
#define _CRCDATL_CRCDAT_POSITION                            0x0
#define _CRCDATL_CRCDAT_SIZE                                0x8
#define _CRCDATL_CRCDAT_LENGTH                              0x8
#define _CRCDATL_CRCDAT_MASK                                0xFF
#define _CRCDATL_CRCDAT0_POSN                               0x0
#define _CRCDATL_CRCDAT0_POSITION                           0x0
#define _CRCDATL_CRCDAT0_SIZE                               0x1
#define _CRCDATL_CRCDAT0_LENGTH                             0x1
#define _CRCDATL_CRCDAT0_MASK                               0x1
#define _CRCDATL_CRCDAT1_POSN                               0x1
#define _CRCDATL_CRCDAT1_POSITION                           0x1
#define _CRCDATL_CRCDAT1_SIZE                               0x1
#define _CRCDATL_CRCDAT1_LENGTH                             0x1
#define _CRCDATL_CRCDAT1_MASK                               0x2
#define _CRCDATL_CRCDAT2_POSN                               0x2
#define _CRCDATL_CRCDAT2_POSITION                           0x2
#define _CRCDATL_CRCDAT2_SIZE                               0x1
#define _CRCDATL_CRCDAT2_LENGTH                             0x1
#define _CRCDATL_CRCDAT2_MASK                               0x4
#define _CRCDATL_CRCDAT3_POSN                               0x3
#define _CRCDATL_CRCDAT3_POSITION                           0x3
#define _CRCDATL_CRCDAT3_SIZE                               0x1
#define _CRCDATL_CRCDAT3_LENGTH                             0x1
#define _CRCDATL_CRCDAT3_MASK                               0x8
#define _CRCDATL_CRCDAT4_POSN                               0x4
#define _CRCDATL_CRCDAT4_POSITION                           0x4
#define _CRCDATL_CRCDAT4_SIZE                               0x1
#define _CRCDATL_CRCDAT4_LENGTH                             0x1
#define _CRCDATL_CRCDAT4_MASK                               0x10
#define _CRCDATL_CRCDAT5_POSN                               0x5
#define _CRCDATL_CRCDAT5_POSITION                           0x5
#define _CRCDATL_CRCDAT5_SIZE                               0x1
#define _CRCDATL_CRCDAT5_LENGTH                             0x1
#define _CRCDATL_CRCDAT5_MASK                               0x20
#define _CRCDATL_CRCDAT6_POSN                               0x6
#define _CRCDATL_CRCDAT6_POSITION                           0x6
#define _CRCDATL_CRCDAT6_SIZE                               0x1
#define _CRCDATL_CRCDAT6_LENGTH                             0x1
#define _CRCDATL_CRCDAT6_MASK                               0x40
#define _CRCDATL_CRDCDAT7_POSN                              0x7
#define _CRCDATL_CRDCDAT7_POSITION                          0x7
#define _CRCDATL_CRDCDAT7_SIZE                              0x1
#define _CRCDATL_CRDCDAT7_LENGTH                            0x1
#define _CRCDATL_CRDCDAT7_MASK                              0x80

// Register: CRCDATH
#define CRCDATH CRCDATH
extern volatile unsigned char           CRCDATH             __at(0x792);
#ifndef _LIB_BUILD
asm("CRCDATH equ 0792h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAT                    :8;
    };
    struct {
        unsigned DAT8                   :1;
        unsigned DAT9                   :1;
        unsigned DAT10                  :1;
        unsigned DAT11                  :1;
        unsigned DAT12                  :1;
        unsigned DAT13                  :1;
        unsigned DAT14                  :1;
        unsigned DAT15                  :1;
    };
    struct {
        unsigned CRCDAT                 :8;
    };
    struct {
        unsigned CRCDAT8                :1;
        unsigned CRCDAT9                :1;
        unsigned CRCDAT10               :1;
        unsigned CRCDAT11               :1;
        unsigned CRCDAT12               :1;
        unsigned CRCDAT13               :1;
        unsigned CRCDAT14               :1;
        unsigned CRCDAT15               :1;
    };
} CRCDATHbits_t;
extern volatile CRCDATHbits_t CRCDATHbits __at(0x792);
// bitfield macros
#define _CRCDATH_DAT_POSN                                   0x0
#define _CRCDATH_DAT_POSITION                               0x0
#define _CRCDATH_DAT_SIZE                                   0x8
#define _CRCDATH_DAT_LENGTH                                 0x8
#define _CRCDATH_DAT_MASK                                   0xFF
#define _CRCDATH_DAT8_POSN                                  0x0
#define _CRCDATH_DAT8_POSITION                              0x0
#define _CRCDATH_DAT8_SIZE                                  0x1
#define _CRCDATH_DAT8_LENGTH                                0x1
#define _CRCDATH_DAT8_MASK                                  0x1
#define _CRCDATH_DAT9_POSN                                  0x1
#define _CRCDATH_DAT9_POSITION                              0x1
#define _CRCDATH_DAT9_SIZE                                  0x1
#define _CRCDATH_DAT9_LENGTH                                0x1
#define _CRCDATH_DAT9_MASK                                  0x2
#define _CRCDATH_DAT10_POSN                                 0x2
#define _CRCDATH_DAT10_POSITION                             0x2
#define _CRCDATH_DAT10_SIZE                                 0x1
#define _CRCDATH_DAT10_LENGTH                               0x1
#define _CRCDATH_DAT10_MASK                                 0x4
#define _CRCDATH_DAT11_POSN                                 0x3
#define _CRCDATH_DAT11_POSITION                             0x3
#define _CRCDATH_DAT11_SIZE                                 0x1
#define _CRCDATH_DAT11_LENGTH                               0x1
#define _CRCDATH_DAT11_MASK                                 0x8
#define _CRCDATH_DAT12_POSN                                 0x4
#define _CRCDATH_DAT12_POSITION                             0x4
#define _CRCDATH_DAT12_SIZE                                 0x1
#define _CRCDATH_DAT12_LENGTH                               0x1
#define _CRCDATH_DAT12_MASK                                 0x10
#define _CRCDATH_DAT13_POSN                                 0x5
#define _CRCDATH_DAT13_POSITION                             0x5
#define _CRCDATH_DAT13_SIZE                                 0x1
#define _CRCDATH_DAT13_LENGTH                               0x1
#define _CRCDATH_DAT13_MASK                                 0x20
#define _CRCDATH_DAT14_POSN                                 0x6
#define _CRCDATH_DAT14_POSITION                             0x6
#define _CRCDATH_DAT14_SIZE                                 0x1
#define _CRCDATH_DAT14_LENGTH                               0x1
#define _CRCDATH_DAT14_MASK                                 0x40
#define _CRCDATH_DAT15_POSN                                 0x7
#define _CRCDATH_DAT15_POSITION                             0x7
#define _CRCDATH_DAT15_SIZE                                 0x1
#define _CRCDATH_DAT15_LENGTH                               0x1
#define _CRCDATH_DAT15_MASK                                 0x80
#define _CRCDATH_CRCDAT_POSN                                0x0
#define _CRCDATH_CRCDAT_POSITION                            0x0
#define _CRCDATH_CRCDAT_SIZE                                0x8
#define _CRCDATH_CRCDAT_LENGTH                              0x8
#define _CRCDATH_CRCDAT_MASK                                0xFF
#define _CRCDATH_CRCDAT8_POSN                               0x0
#define _CRCDATH_CRCDAT8_POSITION                           0x0
#define _CRCDATH_CRCDAT8_SIZE                               0x1
#define _CRCDATH_CRCDAT8_LENGTH                             0x1
#define _CRCDATH_CRCDAT8_MASK                               0x1
#define _CRCDATH_CRCDAT9_POSN                               0x1
#define _CRCDATH_CRCDAT9_POSITION                           0x1
#define _CRCDATH_CRCDAT9_SIZE                               0x1
#define _CRCDATH_CRCDAT9_LENGTH                             0x1
#define _CRCDATH_CRCDAT9_MASK                               0x2
#define _CRCDATH_CRCDAT10_POSN                              0x2
#define _CRCDATH_CRCDAT10_POSITION                          0x2
#define _CRCDATH_CRCDAT10_SIZE                              0x1
#define _CRCDATH_CRCDAT10_LENGTH                            0x1
#define _CRCDATH_CRCDAT10_MASK                              0x4
#define _CRCDATH_CRCDAT11_POSN                              0x3
#define _CRCDATH_CRCDAT11_POSITION                          0x3
#define _CRCDATH_CRCDAT11_SIZE                              0x1
#define _CRCDATH_CRCDAT11_LENGTH                            0x1
#define _CRCDATH_CRCDAT11_MASK                              0x8
#define _CRCDATH_CRCDAT12_POSN                              0x4
#define _CRCDATH_CRCDAT12_POSITION                          0x4
#define _CRCDATH_CRCDAT12_SIZE                              0x1
#define _CRCDATH_CRCDAT12_LENGTH                            0x1
#define _CRCDATH_CRCDAT12_MASK                              0x10
#define _CRCDATH_CRCDAT13_POSN                              0x5
#define _CRCDATH_CRCDAT13_POSITION                          0x5
#define _CRCDATH_CRCDAT13_SIZE                              0x1
#define _CRCDATH_CRCDAT13_LENGTH                            0x1
#define _CRCDATH_CRCDAT13_MASK                              0x20
#define _CRCDATH_CRCDAT14_POSN                              0x6
#define _CRCDATH_CRCDAT14_POSITION                          0x6
#define _CRCDATH_CRCDAT14_SIZE                              0x1
#define _CRCDATH_CRCDAT14_LENGTH                            0x1
#define _CRCDATH_CRCDAT14_MASK                              0x40
#define _CRCDATH_CRCDAT15_POSN                              0x7
#define _CRCDATH_CRCDAT15_POSITION                          0x7
#define _CRCDATH_CRCDAT15_SIZE                              0x1
#define _CRCDATH_CRCDAT15_LENGTH                            0x1
#define _CRCDATH_CRCDAT15_MASK                              0x80

// Register: CRCACC
#define CRCACC CRCACC
extern volatile unsigned short          CRCACC              __at(0x793);
#ifndef _LIB_BUILD
asm("CRCACC equ 0793h");
#endif

// Register: CRCACCL
#define CRCACCL CRCACCL
extern volatile unsigned char           CRCACCL             __at(0x793);
#ifndef _LIB_BUILD
asm("CRCACCL equ 0793h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ACC                    :8;
    };
    struct {
        unsigned ACC0                   :1;
        unsigned ACC1                   :1;
        unsigned ACC2                   :1;
        unsigned ACC3                   :1;
        unsigned ACC4                   :1;
        unsigned ACC5                   :1;
        unsigned ACC6                   :1;
        unsigned ACC7                   :1;
    };
    struct {
        unsigned CRCACC                 :8;
    };
    struct {
        unsigned CRCACC0                :1;
        unsigned CRCACC1                :1;
        unsigned CRCACC2                :1;
        unsigned CRCACC3                :1;
        unsigned CRCACC4                :1;
        unsigned CRCACC5                :1;
        unsigned CRCACC6                :1;
        unsigned CRCACC7                :1;
    };
} CRCACCLbits_t;
extern volatile CRCACCLbits_t CRCACCLbits __at(0x793);
// bitfield macros
#define _CRCACCL_ACC_POSN                                   0x0
#define _CRCACCL_ACC_POSITION                               0x0
#define _CRCACCL_ACC_SIZE                                   0x8
#define _CRCACCL_ACC_LENGTH                                 0x8
#define _CRCACCL_ACC_MASK                                   0xFF
#define _CRCACCL_ACC0_POSN                                  0x0
#define _CRCACCL_ACC0_POSITION                              0x0
#define _CRCACCL_ACC0_SIZE                                  0x1
#define _CRCACCL_ACC0_LENGTH                                0x1
#define _CRCACCL_ACC0_MASK                                  0x1
#define _CRCACCL_ACC1_POSN                                  0x1
#define _CRCACCL_ACC1_POSITION                              0x1
#define _CRCACCL_ACC1_SIZE                                  0x1
#define _CRCACCL_ACC1_LENGTH                                0x1
#define _CRCACCL_ACC1_MASK                                  0x2
#define _CRCACCL_ACC2_POSN                                  0x2
#define _CRCACCL_ACC2_POSITION                              0x2
#define _CRCACCL_ACC2_SIZE                                  0x1
#define _CRCACCL_ACC2_LENGTH                                0x1
#define _CRCACCL_ACC2_MASK                                  0x4
#define _CRCACCL_ACC3_POSN                                  0x3
#define _CRCACCL_ACC3_POSITION                              0x3
#define _CRCACCL_ACC3_SIZE                                  0x1
#define _CRCACCL_ACC3_LENGTH                                0x1
#define _CRCACCL_ACC3_MASK                                  0x8
#define _CRCACCL_ACC4_POSN                                  0x4
#define _CRCACCL_ACC4_POSITION                              0x4
#define _CRCACCL_ACC4_SIZE                                  0x1
#define _CRCACCL_ACC4_LENGTH                                0x1
#define _CRCACCL_ACC4_MASK                                  0x10
#define _CRCACCL_ACC5_POSN                                  0x5
#define _CRCACCL_ACC5_POSITION                              0x5
#define _CRCACCL_ACC5_SIZE                                  0x1
#define _CRCACCL_ACC5_LENGTH                                0x1
#define _CRCACCL_ACC5_MASK                                  0x20
#define _CRCACCL_ACC6_POSN                                  0x6
#define _CRCACCL_ACC6_POSITION                              0x6
#define _CRCACCL_ACC6_SIZE                                  0x1
#define _CRCACCL_ACC6_LENGTH                                0x1
#define _CRCACCL_ACC6_MASK                                  0x40
#define _CRCACCL_ACC7_POSN                                  0x7
#define _CRCACCL_ACC7_POSITION                              0x7
#define _CRCACCL_ACC7_SIZE                                  0x1
#define _CRCACCL_ACC7_LENGTH                                0x1
#define _CRCACCL_ACC7_MASK                                  0x80
#define _CRCACCL_CRCACC_POSN                                0x0
#define _CRCACCL_CRCACC_POSITION                            0x0
#define _CRCACCL_CRCACC_SIZE                                0x8
#define _CRCACCL_CRCACC_LENGTH                              0x8
#define _CRCACCL_CRCACC_MASK                                0xFF
#define _CRCACCL_CRCACC0_POSN                               0x0
#define _CRCACCL_CRCACC0_POSITION                           0x0
#define _CRCACCL_CRCACC0_SIZE                               0x1
#define _CRCACCL_CRCACC0_LENGTH                             0x1
#define _CRCACCL_CRCACC0_MASK                               0x1
#define _CRCACCL_CRCACC1_POSN                               0x1
#define _CRCACCL_CRCACC1_POSITION                           0x1
#define _CRCACCL_CRCACC1_SIZE                               0x1
#define _CRCACCL_CRCACC1_LENGTH                             0x1
#define _CRCACCL_CRCACC1_MASK                               0x2
#define _CRCACCL_CRCACC2_POSN                               0x2
#define _CRCACCL_CRCACC2_POSITION                           0x2
#define _CRCACCL_CRCACC2_SIZE                               0x1
#define _CRCACCL_CRCACC2_LENGTH                             0x1
#define _CRCACCL_CRCACC2_MASK                               0x4
#define _CRCACCL_CRCACC3_POSN                               0x3
#define _CRCACCL_CRCACC3_POSITION                           0x3
#define _CRCACCL_CRCACC3_SIZE                               0x1
#define _CRCACCL_CRCACC3_LENGTH                             0x1
#define _CRCACCL_CRCACC3_MASK                               0x8
#define _CRCACCL_CRCACC4_POSN                               0x4
#define _CRCACCL_CRCACC4_POSITION                           0x4
#define _CRCACCL_CRCACC4_SIZE                               0x1
#define _CRCACCL_CRCACC4_LENGTH                             0x1
#define _CRCACCL_CRCACC4_MASK                               0x10
#define _CRCACCL_CRCACC5_POSN                               0x5
#define _CRCACCL_CRCACC5_POSITION                           0x5
#define _CRCACCL_CRCACC5_SIZE                               0x1
#define _CRCACCL_CRCACC5_LENGTH                             0x1
#define _CRCACCL_CRCACC5_MASK                               0x20
#define _CRCACCL_CRCACC6_POSN                               0x6
#define _CRCACCL_CRCACC6_POSITION                           0x6
#define _CRCACCL_CRCACC6_SIZE                               0x1
#define _CRCACCL_CRCACC6_LENGTH                             0x1
#define _CRCACCL_CRCACC6_MASK                               0x40
#define _CRCACCL_CRCACC7_POSN                               0x7
#define _CRCACCL_CRCACC7_POSITION                           0x7
#define _CRCACCL_CRCACC7_SIZE                               0x1
#define _CRCACCL_CRCACC7_LENGTH                             0x1
#define _CRCACCL_CRCACC7_MASK                               0x80

// Register: CRCACCH
#define CRCACCH CRCACCH
extern volatile unsigned char           CRCACCH             __at(0x794);
#ifndef _LIB_BUILD
asm("CRCACCH equ 0794h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ACC                    :8;
    };
    struct {
        unsigned ACC8                   :1;
        unsigned ACC9                   :1;
        unsigned ACC10                  :1;
        unsigned ACC11                  :1;
        unsigned ACC12                  :1;
        unsigned ACC13                  :1;
        unsigned ACC14                  :1;
        unsigned ACC15                  :1;
    };
    struct {
        unsigned CRCACC                 :8;
    };
    struct {
        unsigned CRCACC8                :1;
        unsigned CRCACC9                :1;
        unsigned CRCACC10               :1;
        unsigned CRCACC11               :1;
        unsigned CRCACC12               :1;
        unsigned CRCACC13               :1;
        unsigned CRCACC14               :1;
        unsigned CRCACC15               :1;
    };
} CRCACCHbits_t;
extern volatile CRCACCHbits_t CRCACCHbits __at(0x794);
// bitfield macros
#define _CRCACCH_ACC_POSN                                   0x0
#define _CRCACCH_ACC_POSITION                               0x0
#define _CRCACCH_ACC_SIZE                                   0x8
#define _CRCACCH_ACC_LENGTH                                 0x8
#define _CRCACCH_ACC_MASK                                   0xFF
#define _CRCACCH_ACC8_POSN                                  0x0
#define _CRCACCH_ACC8_POSITION                              0x0
#define _CRCACCH_ACC8_SIZE                                  0x1
#define _CRCACCH_ACC8_LENGTH                                0x1
#define _CRCACCH_ACC8_MASK                                  0x1
#define _CRCACCH_ACC9_POSN                                  0x1
#define _CRCACCH_ACC9_POSITION                              0x1
#define _CRCACCH_ACC9_SIZE                                  0x1
#define _CRCACCH_ACC9_LENGTH                                0x1
#define _CRCACCH_ACC9_MASK                                  0x2
#define _CRCACCH_ACC10_POSN                                 0x2
#define _CRCACCH_ACC10_POSITION                             0x2
#define _CRCACCH_ACC10_SIZE                                 0x1
#define _CRCACCH_ACC10_LENGTH                               0x1
#define _CRCACCH_ACC10_MASK                                 0x4
#define _CRCACCH_ACC11_POSN                                 0x3
#define _CRCACCH_ACC11_POSITION                             0x3
#define _CRCACCH_ACC11_SIZE                                 0x1
#define _CRCACCH_ACC11_LENGTH                               0x1
#define _CRCACCH_ACC11_MASK                                 0x8
#define _CRCACCH_ACC12_POSN                                 0x4
#define _CRCACCH_ACC12_POSITION                             0x4
#define _CRCACCH_ACC12_SIZE                                 0x1
#define _CRCACCH_ACC12_LENGTH                               0x1
#define _CRCACCH_ACC12_MASK                                 0x10
#define _CRCACCH_ACC13_POSN                                 0x5
#define _CRCACCH_ACC13_POSITION                             0x5
#define _CRCACCH_ACC13_SIZE                                 0x1
#define _CRCACCH_ACC13_LENGTH                               0x1
#define _CRCACCH_ACC13_MASK                                 0x20
#define _CRCACCH_ACC14_POSN                                 0x6
#define _CRCACCH_ACC14_POSITION                             0x6
#define _CRCACCH_ACC14_SIZE                                 0x1
#define _CRCACCH_ACC14_LENGTH                               0x1
#define _CRCACCH_ACC14_MASK                                 0x40
#define _CRCACCH_ACC15_POSN                                 0x7
#define _CRCACCH_ACC15_POSITION                             0x7
#define _CRCACCH_ACC15_SIZE                                 0x1
#define _CRCACCH_ACC15_LENGTH                               0x1
#define _CRCACCH_ACC15_MASK                                 0x80
#define _CRCACCH_CRCACC_POSN                                0x0
#define _CRCACCH_CRCACC_POSITION                            0x0
#define _CRCACCH_CRCACC_SIZE                                0x8
#define _CRCACCH_CRCACC_LENGTH                              0x8
#define _CRCACCH_CRCACC_MASK                                0xFF
#define _CRCACCH_CRCACC8_POSN                               0x0
#define _CRCACCH_CRCACC8_POSITION                           0x0
#define _CRCACCH_CRCACC8_SIZE                               0x1
#define _CRCACCH_CRCACC8_LENGTH                             0x1
#define _CRCACCH_CRCACC8_MASK                               0x1
#define _CRCACCH_CRCACC9_POSN                               0x1
#define _CRCACCH_CRCACC9_POSITION                           0x1
#define _CRCACCH_CRCACC9_SIZE                               0x1
#define _CRCACCH_CRCACC9_LENGTH                             0x1
#define _CRCACCH_CRCACC9_MASK                               0x2
#define _CRCACCH_CRCACC10_POSN                              0x2
#define _CRCACCH_CRCACC10_POSITION                          0x2
#define _CRCACCH_CRCACC10_SIZE                              0x1
#define _CRCACCH_CRCACC10_LENGTH                            0x1
#define _CRCACCH_CRCACC10_MASK                              0x4
#define _CRCACCH_CRCACC11_POSN                              0x3
#define _CRCACCH_CRCACC11_POSITION                          0x3
#define _CRCACCH_CRCACC11_SIZE                              0x1
#define _CRCACCH_CRCACC11_LENGTH                            0x1
#define _CRCACCH_CRCACC11_MASK                              0x8
#define _CRCACCH_CRCACC12_POSN                              0x4
#define _CRCACCH_CRCACC12_POSITION                          0x4
#define _CRCACCH_CRCACC12_SIZE                              0x1
#define _CRCACCH_CRCACC12_LENGTH                            0x1
#define _CRCACCH_CRCACC12_MASK                              0x10
#define _CRCACCH_CRCACC13_POSN                              0x5
#define _CRCACCH_CRCACC13_POSITION                          0x5
#define _CRCACCH_CRCACC13_SIZE                              0x1
#define _CRCACCH_CRCACC13_LENGTH                            0x1
#define _CRCACCH_CRCACC13_MASK                              0x20
#define _CRCACCH_CRCACC14_POSN                              0x6
#define _CRCACCH_CRCACC14_POSITION                          0x6
#define _CRCACCH_CRCACC14_SIZE                              0x1
#define _CRCACCH_CRCACC14_LENGTH                            0x1
#define _CRCACCH_CRCACC14_MASK                              0x40
#define _CRCACCH_CRCACC15_POSN                              0x7
#define _CRCACCH_CRCACC15_POSITION                          0x7
#define _CRCACCH_CRCACC15_SIZE                              0x1
#define _CRCACCH_CRCACC15_LENGTH                            0x1
#define _CRCACCH_CRCACC15_MASK                              0x80

// Register: CRCSHIFT
#define CRCSHIFT CRCSHIFT
extern volatile unsigned short          CRCSHIFT            __at(0x795);
#ifndef _LIB_BUILD
asm("CRCSHIFT equ 0795h");
#endif

// Register: CRCSHIFTL
#define CRCSHIFTL CRCSHIFTL
extern volatile unsigned char           CRCSHIFTL           __at(0x795);
#ifndef _LIB_BUILD
asm("CRCSHIFTL equ 0795h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SHIFT                  :8;
    };
    struct {
        unsigned SHIFT0                 :1;
        unsigned SHIFT1                 :1;
        unsigned SHIFT2                 :1;
        unsigned SHIFT3                 :1;
        unsigned SHIFT4                 :1;
        unsigned SHIFT5                 :1;
        unsigned SHIFT6                 :1;
        unsigned SHIFT7                 :1;
    };
    struct {
        unsigned CRCSHIFT               :8;
    };
    struct {
        unsigned CRCSHIFT0              :1;
        unsigned CRCSHIFT1              :1;
        unsigned CRCSHIFT2              :1;
        unsigned CRCSHIFT3              :1;
        unsigned CRCSHIFT4              :1;
        unsigned CRCSHIFT5              :1;
        unsigned CRCSHIFT6              :1;
        unsigned CRCSHIFT7              :1;
    };
} CRCSHIFTLbits_t;
extern volatile CRCSHIFTLbits_t CRCSHIFTLbits __at(0x795);
// bitfield macros
#define _CRCSHIFTL_SHIFT_POSN                               0x0
#define _CRCSHIFTL_SHIFT_POSITION                           0x0
#define _CRCSHIFTL_SHIFT_SIZE                               0x8
#define _CRCSHIFTL_SHIFT_LENGTH                             0x8
#define _CRCSHIFTL_SHIFT_MASK                               0xFF
#define _CRCSHIFTL_SHIFT0_POSN                              0x0
#define _CRCSHIFTL_SHIFT0_POSITION                          0x0
#define _CRCSHIFTL_SHIFT0_SIZE                              0x1
#define _CRCSHIFTL_SHIFT0_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT0_MASK                              0x1
#define _CRCSHIFTL_SHIFT1_POSN                              0x1
#define _CRCSHIFTL_SHIFT1_POSITION                          0x1
#define _CRCSHIFTL_SHIFT1_SIZE                              0x1
#define _CRCSHIFTL_SHIFT1_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT1_MASK                              0x2
#define _CRCSHIFTL_SHIFT2_POSN                              0x2
#define _CRCSHIFTL_SHIFT2_POSITION                          0x2
#define _CRCSHIFTL_SHIFT2_SIZE                              0x1
#define _CRCSHIFTL_SHIFT2_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT2_MASK                              0x4
#define _CRCSHIFTL_SHIFT3_POSN                              0x3
#define _CRCSHIFTL_SHIFT3_POSITION                          0x3
#define _CRCSHIFTL_SHIFT3_SIZE                              0x1
#define _CRCSHIFTL_SHIFT3_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT3_MASK                              0x8
#define _CRCSHIFTL_SHIFT4_POSN                              0x4
#define _CRCSHIFTL_SHIFT4_POSITION                          0x4
#define _CRCSHIFTL_SHIFT4_SIZE                              0x1
#define _CRCSHIFTL_SHIFT4_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT4_MASK                              0x10
#define _CRCSHIFTL_SHIFT5_POSN                              0x5
#define _CRCSHIFTL_SHIFT5_POSITION                          0x5
#define _CRCSHIFTL_SHIFT5_SIZE                              0x1
#define _CRCSHIFTL_SHIFT5_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT5_MASK                              0x20
#define _CRCSHIFTL_SHIFT6_POSN                              0x6
#define _CRCSHIFTL_SHIFT6_POSITION                          0x6
#define _CRCSHIFTL_SHIFT6_SIZE                              0x1
#define _CRCSHIFTL_SHIFT6_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT6_MASK                              0x40
#define _CRCSHIFTL_SHIFT7_POSN                              0x7
#define _CRCSHIFTL_SHIFT7_POSITION                          0x7
#define _CRCSHIFTL_SHIFT7_SIZE                              0x1
#define _CRCSHIFTL_SHIFT7_LENGTH                            0x1
#define _CRCSHIFTL_SHIFT7_MASK                              0x80
#define _CRCSHIFTL_CRCSHIFT_POSN                            0x0
#define _CRCSHIFTL_CRCSHIFT_POSITION                        0x0
#define _CRCSHIFTL_CRCSHIFT_SIZE                            0x8
#define _CRCSHIFTL_CRCSHIFT_LENGTH                          0x8
#define _CRCSHIFTL_CRCSHIFT_MASK                            0xFF
#define _CRCSHIFTL_CRCSHIFT0_POSN                           0x0
#define _CRCSHIFTL_CRCSHIFT0_POSITION                       0x0
#define _CRCSHIFTL_CRCSHIFT0_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT0_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT0_MASK                           0x1
#define _CRCSHIFTL_CRCSHIFT1_POSN                           0x1
#define _CRCSHIFTL_CRCSHIFT1_POSITION                       0x1
#define _CRCSHIFTL_CRCSHIFT1_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT1_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT1_MASK                           0x2
#define _CRCSHIFTL_CRCSHIFT2_POSN                           0x2
#define _CRCSHIFTL_CRCSHIFT2_POSITION                       0x2
#define _CRCSHIFTL_CRCSHIFT2_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT2_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT2_MASK                           0x4
#define _CRCSHIFTL_CRCSHIFT3_POSN                           0x3
#define _CRCSHIFTL_CRCSHIFT3_POSITION                       0x3
#define _CRCSHIFTL_CRCSHIFT3_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT3_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT3_MASK                           0x8
#define _CRCSHIFTL_CRCSHIFT4_POSN                           0x4
#define _CRCSHIFTL_CRCSHIFT4_POSITION                       0x4
#define _CRCSHIFTL_CRCSHIFT4_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT4_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT4_MASK                           0x10
#define _CRCSHIFTL_CRCSHIFT5_POSN                           0x5
#define _CRCSHIFTL_CRCSHIFT5_POSITION                       0x5
#define _CRCSHIFTL_CRCSHIFT5_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT5_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT5_MASK                           0x20
#define _CRCSHIFTL_CRCSHIFT6_POSN                           0x6
#define _CRCSHIFTL_CRCSHIFT6_POSITION                       0x6
#define _CRCSHIFTL_CRCSHIFT6_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT6_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT6_MASK                           0x40
#define _CRCSHIFTL_CRCSHIFT7_POSN                           0x7
#define _CRCSHIFTL_CRCSHIFT7_POSITION                       0x7
#define _CRCSHIFTL_CRCSHIFT7_SIZE                           0x1
#define _CRCSHIFTL_CRCSHIFT7_LENGTH                         0x1
#define _CRCSHIFTL_CRCSHIFT7_MASK                           0x80

// Register: CRCSHIFTH
#define CRCSHIFTH CRCSHIFTH
extern volatile unsigned char           CRCSHIFTH           __at(0x796);
#ifndef _LIB_BUILD
asm("CRCSHIFTH equ 0796h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SHIFT                  :8;
    };
    struct {
        unsigned SHIFT8                 :1;
        unsigned SHIFT9                 :1;
        unsigned SHIFT10                :1;
        unsigned SHIFT11                :1;
        unsigned SHIFT12                :1;
        unsigned SHIFT13                :1;
        unsigned SHIFT14                :1;
        unsigned SHIFT15                :1;
    };
    struct {
        unsigned CRCSHIFT               :8;
    };
    struct {
        unsigned CRCSHIFT8              :1;
        unsigned CRCSHIFT9              :1;
        unsigned CRCSHIFT10             :1;
        unsigned CRCSHIFT11             :1;
        unsigned CRCSHIFT12             :1;
        unsigned CRCSHIFT13             :1;
        unsigned CRCSHIFT14             :1;
        unsigned CRCSHIFT15             :1;
    };
} CRCSHIFTHbits_t;
extern volatile CRCSHIFTHbits_t CRCSHIFTHbits __at(0x796);
// bitfield macros
#define _CRCSHIFTH_SHIFT_POSN                               0x0
#define _CRCSHIFTH_SHIFT_POSITION                           0x0
#define _CRCSHIFTH_SHIFT_SIZE                               0x8
#define _CRCSHIFTH_SHIFT_LENGTH                             0x8
#define _CRCSHIFTH_SHIFT_MASK                               0xFF
#define _CRCSHIFTH_SHIFT8_POSN                              0x0
#define _CRCSHIFTH_SHIFT8_POSITION                          0x0
#define _CRCSHIFTH_SHIFT8_SIZE                              0x1
#define _CRCSHIFTH_SHIFT8_LENGTH                            0x1
#define _CRCSHIFTH_SHIFT8_MASK                              0x1
#define _CRCSHIFTH_SHIFT9_POSN                              0x1
#define _CRCSHIFTH_SHIFT9_POSITION                          0x1
#define _CRCSHIFTH_SHIFT9_SIZE                              0x1
#define _CRCSHIFTH_SHIFT9_LENGTH                            0x1
#define _CRCSHIFTH_SHIFT9_MASK                              0x2
#define _CRCSHIFTH_SHIFT10_POSN                             0x2
#define _CRCSHIFTH_SHIFT10_POSITION                         0x2
#define _CRCSHIFTH_SHIFT10_SIZE                             0x1
#define _CRCSHIFTH_SHIFT10_LENGTH                           0x1
#define _CRCSHIFTH_SHIFT10_MASK                             0x4
#define _CRCSHIFTH_SHIFT11_POSN                             0x3
#define _CRCSHIFTH_SHIFT11_POSITION                         0x3
#define _CRCSHIFTH_SHIFT11_SIZE                             0x1
#define _CRCSHIFTH_SHIFT11_LENGTH                           0x1
#define _CRCSHIFTH_SHIFT11_MASK                             0x8
#define _CRCSHIFTH_SHIFT12_POSN                             0x4
#define _CRCSHIFTH_SHIFT12_POSITION                         0x4
#define _CRCSHIFTH_SHIFT12_SIZE                             0x1
#define _CRCSHIFTH_SHIFT12_LENGTH                           0x1
#define _CRCSHIFTH_SHIFT12_MASK                             0x10
#define _CRCSHIFTH_SHIFT13_POSN                             0x5
#define _CRCSHIFTH_SHIFT13_POSITION                         0x5
#define _CRCSHIFTH_SHIFT13_SIZE                             0x1
#define _CRCSHIFTH_SHIFT13_LENGTH                           0x1
#define _CRCSHIFTH_SHIFT13_MASK                             0x20
#define _CRCSHIFTH_SHIFT14_POSN                             0x6
#define _CRCSHIFTH_SHIFT14_POSITION                         0x6
#define _CRCSHIFTH_SHIFT14_SIZE                             0x1
#define _CRCSHIFTH_SHIFT14_LENGTH                           0x1
#define _CRCSHIFTH_SHIFT14_MASK                             0x40
#define _CRCSHIFTH_SHIFT15_POSN                             0x7
#define _CRCSHIFTH_SHIFT15_POSITION                         0x7
#define _CRCSHIFTH_SHIFT15_SIZE                             0x1
#define _CRCSHIFTH_SHIFT15_LENGTH                           0x1
#define _CRCSHIFTH_SHIFT15_MASK                             0x80
#define _CRCSHIFTH_CRCSHIFT_POSN                            0x0
#define _CRCSHIFTH_CRCSHIFT_POSITION                        0x0
#define _CRCSHIFTH_CRCSHIFT_SIZE                            0x8
#define _CRCSHIFTH_CRCSHIFT_LENGTH                          0x8
#define _CRCSHIFTH_CRCSHIFT_MASK                            0xFF
#define _CRCSHIFTH_CRCSHIFT8_POSN                           0x0
#define _CRCSHIFTH_CRCSHIFT8_POSITION                       0x0
#define _CRCSHIFTH_CRCSHIFT8_SIZE                           0x1
#define _CRCSHIFTH_CRCSHIFT8_LENGTH                         0x1
#define _CRCSHIFTH_CRCSHIFT8_MASK                           0x1
#define _CRCSHIFTH_CRCSHIFT9_POSN                           0x1
#define _CRCSHIFTH_CRCSHIFT9_POSITION                       0x1
#define _CRCSHIFTH_CRCSHIFT9_SIZE                           0x1
#define _CRCSHIFTH_CRCSHIFT9_LENGTH                         0x1
#define _CRCSHIFTH_CRCSHIFT9_MASK                           0x2
#define _CRCSHIFTH_CRCSHIFT10_POSN                          0x2
#define _CRCSHIFTH_CRCSHIFT10_POSITION                      0x2
#define _CRCSHIFTH_CRCSHIFT10_SIZE                          0x1
#define _CRCSHIFTH_CRCSHIFT10_LENGTH                        0x1
#define _CRCSHIFTH_CRCSHIFT10_MASK                          0x4
#define _CRCSHIFTH_CRCSHIFT11_POSN                          0x3
#define _CRCSHIFTH_CRCSHIFT11_POSITION                      0x3
#define _CRCSHIFTH_CRCSHIFT11_SIZE                          0x1
#define _CRCSHIFTH_CRCSHIFT11_LENGTH                        0x1
#define _CRCSHIFTH_CRCSHIFT11_MASK                          0x8
#define _CRCSHIFTH_CRCSHIFT12_POSN                          0x4
#define _CRCSHIFTH_CRCSHIFT12_POSITION                      0x4
#define _CRCSHIFTH_CRCSHIFT12_SIZE                          0x1
#define _CRCSHIFTH_CRCSHIFT12_LENGTH                        0x1
#define _CRCSHIFTH_CRCSHIFT12_MASK                          0x10
#define _CRCSHIFTH_CRCSHIFT13_POSN                          0x5
#define _CRCSHIFTH_CRCSHIFT13_POSITION                      0x5
#define _CRCSHIFTH_CRCSHIFT13_SIZE                          0x1
#define _CRCSHIFTH_CRCSHIFT13_LENGTH                        0x1
#define _CRCSHIFTH_CRCSHIFT13_MASK                          0x20
#define _CRCSHIFTH_CRCSHIFT14_POSN                          0x6
#define _CRCSHIFTH_CRCSHIFT14_POSITION                      0x6
#define _CRCSHIFTH_CRCSHIFT14_SIZE                          0x1
#define _CRCSHIFTH_CRCSHIFT14_LENGTH                        0x1
#define _CRCSHIFTH_CRCSHIFT14_MASK                          0x40
#define _CRCSHIFTH_CRCSHIFT15_POSN                          0x7
#define _CRCSHIFTH_CRCSHIFT15_POSITION                      0x7
#define _CRCSHIFTH_CRCSHIFT15_SIZE                          0x1
#define _CRCSHIFTH_CRCSHIFT15_LENGTH                        0x1
#define _CRCSHIFTH_CRCSHIFT15_MASK                          0x80

// Register: CRCXOR
#define CRCXOR CRCXOR
extern volatile unsigned short          CRCXOR              __at(0x797);
#ifndef _LIB_BUILD
asm("CRCXOR equ 0797h");
#endif

// Register: CRCXORL
#define CRCXORL CRCXORL
extern volatile unsigned char           CRCXORL             __at(0x797);
#ifndef _LIB_BUILD
asm("CRCXORL equ 0797h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned XOR1                   :1;
        unsigned XOR2                   :1;
        unsigned XOR3                   :1;
        unsigned XOR4                   :1;
        unsigned XOR5                   :1;
        unsigned XOR6                   :1;
        unsigned XOR7                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned CRCXOR1                :1;
        unsigned CRCXOR2                :1;
        unsigned CRCXOR3                :1;
        unsigned CRCXOR4                :1;
        unsigned CRCXOR5                :1;
        unsigned CRCXOR6                :1;
        unsigned CRCXOR7                :1;
    };
} CRCXORLbits_t;
extern volatile CRCXORLbits_t CRCXORLbits __at(0x797);
// bitfield macros
#define _CRCXORL_XOR1_POSN                                  0x1
#define _CRCXORL_XOR1_POSITION                              0x1
#define _CRCXORL_XOR1_SIZE                                  0x1
#define _CRCXORL_XOR1_LENGTH                                0x1
#define _CRCXORL_XOR1_MASK                                  0x2
#define _CRCXORL_XOR2_POSN                                  0x2
#define _CRCXORL_XOR2_POSITION                              0x2
#define _CRCXORL_XOR2_SIZE                                  0x1
#define _CRCXORL_XOR2_LENGTH                                0x1
#define _CRCXORL_XOR2_MASK                                  0x4
#define _CRCXORL_XOR3_POSN                                  0x3
#define _CRCXORL_XOR3_POSITION                              0x3
#define _CRCXORL_XOR3_SIZE                                  0x1
#define _CRCXORL_XOR3_LENGTH                                0x1
#define _CRCXORL_XOR3_MASK                                  0x8
#define _CRCXORL_XOR4_POSN                                  0x4
#define _CRCXORL_XOR4_POSITION                              0x4
#define _CRCXORL_XOR4_SIZE                                  0x1
#define _CRCXORL_XOR4_LENGTH                                0x1
#define _CRCXORL_XOR4_MASK                                  0x10
#define _CRCXORL_XOR5_POSN                                  0x5
#define _CRCXORL_XOR5_POSITION                              0x5
#define _CRCXORL_XOR5_SIZE                                  0x1
#define _CRCXORL_XOR5_LENGTH                                0x1
#define _CRCXORL_XOR5_MASK                                  0x20
#define _CRCXORL_XOR6_POSN                                  0x6
#define _CRCXORL_XOR6_POSITION                              0x6
#define _CRCXORL_XOR6_SIZE                                  0x1
#define _CRCXORL_XOR6_LENGTH                                0x1
#define _CRCXORL_XOR6_MASK                                  0x40
#define _CRCXORL_XOR7_POSN                                  0x7
#define _CRCXORL_XOR7_POSITION                              0x7
#define _CRCXORL_XOR7_SIZE                                  0x1
#define _CRCXORL_XOR7_LENGTH                                0x1
#define _CRCXORL_XOR7_MASK                                  0x80
#define _CRCXORL_CRCXOR1_POSN                               0x1
#define _CRCXORL_CRCXOR1_POSITION                           0x1
#define _CRCXORL_CRCXOR1_SIZE                               0x1
#define _CRCXORL_CRCXOR1_LENGTH                             0x1
#define _CRCXORL_CRCXOR1_MASK                               0x2
#define _CRCXORL_CRCXOR2_POSN                               0x2
#define _CRCXORL_CRCXOR2_POSITION                           0x2
#define _CRCXORL_CRCXOR2_SIZE                               0x1
#define _CRCXORL_CRCXOR2_LENGTH                             0x1
#define _CRCXORL_CRCXOR2_MASK                               0x4
#define _CRCXORL_CRCXOR3_POSN                               0x3
#define _CRCXORL_CRCXOR3_POSITION                           0x3
#define _CRCXORL_CRCXOR3_SIZE                               0x1
#define _CRCXORL_CRCXOR3_LENGTH                             0x1
#define _CRCXORL_CRCXOR3_MASK                               0x8
#define _CRCXORL_CRCXOR4_POSN                               0x4
#define _CRCXORL_CRCXOR4_POSITION                           0x4
#define _CRCXORL_CRCXOR4_SIZE                               0x1
#define _CRCXORL_CRCXOR4_LENGTH                             0x1
#define _CRCXORL_CRCXOR4_MASK                               0x10
#define _CRCXORL_CRCXOR5_POSN                               0x5
#define _CRCXORL_CRCXOR5_POSITION                           0x5
#define _CRCXORL_CRCXOR5_SIZE                               0x1
#define _CRCXORL_CRCXOR5_LENGTH                             0x1
#define _CRCXORL_CRCXOR5_MASK                               0x20
#define _CRCXORL_CRCXOR6_POSN                               0x6
#define _CRCXORL_CRCXOR6_POSITION                           0x6
#define _CRCXORL_CRCXOR6_SIZE                               0x1
#define _CRCXORL_CRCXOR6_LENGTH                             0x1
#define _CRCXORL_CRCXOR6_MASK                               0x40
#define _CRCXORL_CRCXOR7_POSN                               0x7
#define _CRCXORL_CRCXOR7_POSITION                           0x7
#define _CRCXORL_CRCXOR7_SIZE                               0x1
#define _CRCXORL_CRCXOR7_LENGTH                             0x1
#define _CRCXORL_CRCXOR7_MASK                               0x80

// Register: CRCXORH
#define CRCXORH CRCXORH
extern volatile unsigned char           CRCXORH             __at(0x798);
#ifndef _LIB_BUILD
asm("CRCXORH equ 0798h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned XOR8                   :1;
        unsigned XOR9                   :1;
        unsigned XOR10                  :1;
        unsigned XOR11                  :1;
        unsigned XOR12                  :1;
        unsigned XOR13                  :1;
        unsigned XOR14                  :1;
        unsigned XOR15                  :1;
    };
    struct {
        unsigned CRCXOR8                :1;
        unsigned CRCXOR9                :1;
        unsigned CRCXOR10               :1;
        unsigned CRCXOR11               :1;
        unsigned CRCXOR12               :1;
        unsigned CRCXOR13               :1;
        unsigned CRCXOR14               :1;
        unsigned CRCXOR15               :1;
    };
} CRCXORHbits_t;
extern volatile CRCXORHbits_t CRCXORHbits __at(0x798);
// bitfield macros
#define _CRCXORH_XOR8_POSN                                  0x0
#define _CRCXORH_XOR8_POSITION                              0x0
#define _CRCXORH_XOR8_SIZE                                  0x1
#define _CRCXORH_XOR8_LENGTH                                0x1
#define _CRCXORH_XOR8_MASK                                  0x1
#define _CRCXORH_XOR9_POSN                                  0x1
#define _CRCXORH_XOR9_POSITION                              0x1
#define _CRCXORH_XOR9_SIZE                                  0x1
#define _CRCXORH_XOR9_LENGTH                                0x1
#define _CRCXORH_XOR9_MASK                                  0x2
#define _CRCXORH_XOR10_POSN                                 0x2
#define _CRCXORH_XOR10_POSITION                             0x2
#define _CRCXORH_XOR10_SIZE                                 0x1
#define _CRCXORH_XOR10_LENGTH                               0x1
#define _CRCXORH_XOR10_MASK                                 0x4
#define _CRCXORH_XOR11_POSN                                 0x3
#define _CRCXORH_XOR11_POSITION                             0x3
#define _CRCXORH_XOR11_SIZE                                 0x1
#define _CRCXORH_XOR11_LENGTH                               0x1
#define _CRCXORH_XOR11_MASK                                 0x8
#define _CRCXORH_XOR12_POSN                                 0x4
#define _CRCXORH_XOR12_POSITION                             0x4
#define _CRCXORH_XOR12_SIZE                                 0x1
#define _CRCXORH_XOR12_LENGTH                               0x1
#define _CRCXORH_XOR12_MASK                                 0x10
#define _CRCXORH_XOR13_POSN                                 0x5
#define _CRCXORH_XOR13_POSITION                             0x5
#define _CRCXORH_XOR13_SIZE                                 0x1
#define _CRCXORH_XOR13_LENGTH                               0x1
#define _CRCXORH_XOR13_MASK                                 0x20
#define _CRCXORH_XOR14_POSN                                 0x6
#define _CRCXORH_XOR14_POSITION                             0x6
#define _CRCXORH_XOR14_SIZE                                 0x1
#define _CRCXORH_XOR14_LENGTH                               0x1
#define _CRCXORH_XOR14_MASK                                 0x40
#define _CRCXORH_XOR15_POSN                                 0x7
#define _CRCXORH_XOR15_POSITION                             0x7
#define _CRCXORH_XOR15_SIZE                                 0x1
#define _CRCXORH_XOR15_LENGTH                               0x1
#define _CRCXORH_XOR15_MASK                                 0x80
#define _CRCXORH_CRCXOR8_POSN                               0x0
#define _CRCXORH_CRCXOR8_POSITION                           0x0
#define _CRCXORH_CRCXOR8_SIZE                               0x1
#define _CRCXORH_CRCXOR8_LENGTH                             0x1
#define _CRCXORH_CRCXOR8_MASK                               0x1
#define _CRCXORH_CRCXOR9_POSN                               0x1
#define _CRCXORH_CRCXOR9_POSITION                           0x1
#define _CRCXORH_CRCXOR9_SIZE                               0x1
#define _CRCXORH_CRCXOR9_LENGTH                             0x1
#define _CRCXORH_CRCXOR9_MASK                               0x2
#define _CRCXORH_CRCXOR10_POSN                              0x2
#define _CRCXORH_CRCXOR10_POSITION                          0x2
#define _CRCXORH_CRCXOR10_SIZE                              0x1
#define _CRCXORH_CRCXOR10_LENGTH                            0x1
#define _CRCXORH_CRCXOR10_MASK                              0x4
#define _CRCXORH_CRCXOR11_POSN                              0x3
#define _CRCXORH_CRCXOR11_POSITION                          0x3
#define _CRCXORH_CRCXOR11_SIZE                              0x1
#define _CRCXORH_CRCXOR11_LENGTH                            0x1
#define _CRCXORH_CRCXOR11_MASK                              0x8
#define _CRCXORH_CRCXOR12_POSN                              0x4
#define _CRCXORH_CRCXOR12_POSITION                          0x4
#define _CRCXORH_CRCXOR12_SIZE                              0x1
#define _CRCXORH_CRCXOR12_LENGTH                            0x1
#define _CRCXORH_CRCXOR12_MASK                              0x10
#define _CRCXORH_CRCXOR13_POSN                              0x5
#define _CRCXORH_CRCXOR13_POSITION                          0x5
#define _CRCXORH_CRCXOR13_SIZE                              0x1
#define _CRCXORH_CRCXOR13_LENGTH                            0x1
#define _CRCXORH_CRCXOR13_MASK                              0x20
#define _CRCXORH_CRCXOR14_POSN                              0x6
#define _CRCXORH_CRCXOR14_POSITION                          0x6
#define _CRCXORH_CRCXOR14_SIZE                              0x1
#define _CRCXORH_CRCXOR14_LENGTH                            0x1
#define _CRCXORH_CRCXOR14_MASK                              0x40
#define _CRCXORH_CRCXOR15_POSN                              0x7
#define _CRCXORH_CRCXOR15_POSITION                          0x7
#define _CRCXORH_CRCXOR15_SIZE                              0x1
#define _CRCXORH_CRCXOR15_LENGTH                            0x1
#define _CRCXORH_CRCXOR15_MASK                              0x80

// Register: CRCCON0
#define CRCCON0 CRCCON0
extern volatile unsigned char           CRCCON0             __at(0x799);
#ifndef _LIB_BUILD
asm("CRCCON0 equ 0799h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FULL                   :1;
        unsigned SHIFTM                 :1;
        unsigned                        :2;
        unsigned ACCM                   :1;
        unsigned BUSY                   :1;
        unsigned CRCGO                  :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned CRCFULL                :1;
        unsigned CRCSHIFTM              :1;
        unsigned                        :2;
        unsigned CRCACCM                :1;
        unsigned CRCBUSY                :1;
        unsigned                        :1;
        unsigned CRCEN                  :1;
    };
} CRCCON0bits_t;
extern volatile CRCCON0bits_t CRCCON0bits __at(0x799);
// bitfield macros
#define _CRCCON0_FULL_POSN                                  0x0
#define _CRCCON0_FULL_POSITION                              0x0
#define _CRCCON0_FULL_SIZE                                  0x1
#define _CRCCON0_FULL_LENGTH                                0x1
#define _CRCCON0_FULL_MASK                                  0x1
#define _CRCCON0_SHIFTM_POSN                                0x1
#define _CRCCON0_SHIFTM_POSITION                            0x1
#define _CRCCON0_SHIFTM_SIZE                                0x1
#define _CRCCON0_SHIFTM_LENGTH                              0x1
#define _CRCCON0_SHIFTM_MASK                                0x2
#define _CRCCON0_ACCM_POSN                                  0x4
#define _CRCCON0_ACCM_POSITION                              0x4
#define _CRCCON0_ACCM_SIZE                                  0x1
#define _CRCCON0_ACCM_LENGTH                                0x1
#define _CRCCON0_ACCM_MASK                                  0x10
#define _CRCCON0_BUSY_POSN                                  0x5
#define _CRCCON0_BUSY_POSITION                              0x5
#define _CRCCON0_BUSY_SIZE                                  0x1
#define _CRCCON0_BUSY_LENGTH                                0x1
#define _CRCCON0_BUSY_MASK                                  0x20
#define _CRCCON0_CRCGO_POSN                                 0x6
#define _CRCCON0_CRCGO_POSITION                             0x6
#define _CRCCON0_CRCGO_SIZE                                 0x1
#define _CRCCON0_CRCGO_LENGTH                               0x1
#define _CRCCON0_CRCGO_MASK                                 0x40
#define _CRCCON0_EN_POSN                                    0x7
#define _CRCCON0_EN_POSITION                                0x7
#define _CRCCON0_EN_SIZE                                    0x1
#define _CRCCON0_EN_LENGTH                                  0x1
#define _CRCCON0_EN_MASK                                    0x80
#define _CRCCON0_CRCFULL_POSN                               0x0
#define _CRCCON0_CRCFULL_POSITION                           0x0
#define _CRCCON0_CRCFULL_SIZE                               0x1
#define _CRCCON0_CRCFULL_LENGTH                             0x1
#define _CRCCON0_CRCFULL_MASK                               0x1
#define _CRCCON0_CRCSHIFTM_POSN                             0x1
#define _CRCCON0_CRCSHIFTM_POSITION                         0x1
#define _CRCCON0_CRCSHIFTM_SIZE                             0x1
#define _CRCCON0_CRCSHIFTM_LENGTH                           0x1
#define _CRCCON0_CRCSHIFTM_MASK                             0x2
#define _CRCCON0_CRCACCM_POSN                               0x4
#define _CRCCON0_CRCACCM_POSITION                           0x4
#define _CRCCON0_CRCACCM_SIZE                               0x1
#define _CRCCON0_CRCACCM_LENGTH                             0x1
#define _CRCCON0_CRCACCM_MASK                               0x10
#define _CRCCON0_CRCBUSY_POSN                               0x5
#define _CRCCON0_CRCBUSY_POSITION                           0x5
#define _CRCCON0_CRCBUSY_SIZE                               0x1
#define _CRCCON0_CRCBUSY_LENGTH                             0x1
#define _CRCCON0_CRCBUSY_MASK                               0x20
#define _CRCCON0_CRCEN_POSN                                 0x7
#define _CRCCON0_CRCEN_POSITION                             0x7
#define _CRCCON0_CRCEN_SIZE                                 0x1
#define _CRCCON0_CRCEN_LENGTH                               0x1
#define _CRCCON0_CRCEN_MASK                                 0x80

// Register: CRCCON1
#define CRCCON1 CRCCON1
extern volatile unsigned char           CRCCON1             __at(0x79A);
#ifndef _LIB_BUILD
asm("CRCCON1 equ 079Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PLEN                   :4;
        unsigned DLEN                   :4;
    };
    struct {
        unsigned PLEN0                  :1;
        unsigned PLEN1                  :1;
        unsigned PLEN2                  :1;
        unsigned PLEN3                  :1;
        unsigned DLEN0                  :1;
        unsigned DLEN1                  :1;
        unsigned DLEN2                  :1;
        unsigned DLEN3                  :1;
    };
    struct {
        unsigned CRCPLEN                :4;
        unsigned CRCDLEN                :4;
    };
    struct {
        unsigned CRCPLEN0               :1;
        unsigned CRCPLEN1               :1;
        unsigned CRCPLEN2               :1;
        unsigned CRCPLEN3               :1;
        unsigned CRCDLEN0               :1;
        unsigned CRCDLEN1               :1;
        unsigned CRCDLEN2               :1;
        unsigned CRCDLEN3               :1;
    };
} CRCCON1bits_t;
extern volatile CRCCON1bits_t CRCCON1bits __at(0x79A);
// bitfield macros
#define _CRCCON1_PLEN_POSN                                  0x0
#define _CRCCON1_PLEN_POSITION                              0x0
#define _CRCCON1_PLEN_SIZE                                  0x4
#define _CRCCON1_PLEN_LENGTH                                0x4
#define _CRCCON1_PLEN_MASK                                  0xF
#define _CRCCON1_DLEN_POSN                                  0x4
#define _CRCCON1_DLEN_POSITION                              0x4
#define _CRCCON1_DLEN_SIZE                                  0x4
#define _CRCCON1_DLEN_LENGTH                                0x4
#define _CRCCON1_DLEN_MASK                                  0xF0
#define _CRCCON1_PLEN0_POSN                                 0x0
#define _CRCCON1_PLEN0_POSITION                             0x0
#define _CRCCON1_PLEN0_SIZE                                 0x1
#define _CRCCON1_PLEN0_LENGTH                               0x1
#define _CRCCON1_PLEN0_MASK                                 0x1
#define _CRCCON1_PLEN1_POSN                                 0x1
#define _CRCCON1_PLEN1_POSITION                             0x1
#define _CRCCON1_PLEN1_SIZE                                 0x1
#define _CRCCON1_PLEN1_LENGTH                               0x1
#define _CRCCON1_PLEN1_MASK                                 0x2
#define _CRCCON1_PLEN2_POSN                                 0x2
#define _CRCCON1_PLEN2_POSITION                             0x2
#define _CRCCON1_PLEN2_SIZE                                 0x1
#define _CRCCON1_PLEN2_LENGTH                               0x1
#define _CRCCON1_PLEN2_MASK                                 0x4
#define _CRCCON1_PLEN3_POSN                                 0x3
#define _CRCCON1_PLEN3_POSITION                             0x3
#define _CRCCON1_PLEN3_SIZE                                 0x1
#define _CRCCON1_PLEN3_LENGTH                               0x1
#define _CRCCON1_PLEN3_MASK                                 0x8
#define _CRCCON1_DLEN0_POSN                                 0x4
#define _CRCCON1_DLEN0_POSITION                             0x4
#define _CRCCON1_DLEN0_SIZE                                 0x1
#define _CRCCON1_DLEN0_LENGTH                               0x1
#define _CRCCON1_DLEN0_MASK                                 0x10
#define _CRCCON1_DLEN1_POSN                                 0x5
#define _CRCCON1_DLEN1_POSITION                             0x5
#define _CRCCON1_DLEN1_SIZE                                 0x1
#define _CRCCON1_DLEN1_LENGTH                               0x1
#define _CRCCON1_DLEN1_MASK                                 0x20
#define _CRCCON1_DLEN2_POSN                                 0x6
#define _CRCCON1_DLEN2_POSITION                             0x6
#define _CRCCON1_DLEN2_SIZE                                 0x1
#define _CRCCON1_DLEN2_LENGTH                               0x1
#define _CRCCON1_DLEN2_MASK                                 0x40
#define _CRCCON1_DLEN3_POSN                                 0x7
#define _CRCCON1_DLEN3_POSITION                             0x7
#define _CRCCON1_DLEN3_SIZE                                 0x1
#define _CRCCON1_DLEN3_LENGTH                               0x1
#define _CRCCON1_DLEN3_MASK                                 0x80
#define _CRCCON1_CRCPLEN_POSN                               0x0
#define _CRCCON1_CRCPLEN_POSITION                           0x0
#define _CRCCON1_CRCPLEN_SIZE                               0x4
#define _CRCCON1_CRCPLEN_LENGTH                             0x4
#define _CRCCON1_CRCPLEN_MASK                               0xF
#define _CRCCON1_CRCDLEN_POSN                               0x4
#define _CRCCON1_CRCDLEN_POSITION                           0x4
#define _CRCCON1_CRCDLEN_SIZE                               0x4
#define _CRCCON1_CRCDLEN_LENGTH                             0x4
#define _CRCCON1_CRCDLEN_MASK                               0xF0
#define _CRCCON1_CRCPLEN0_POSN                              0x0
#define _CRCCON1_CRCPLEN0_POSITION                          0x0
#define _CRCCON1_CRCPLEN0_SIZE                              0x1
#define _CRCCON1_CRCPLEN0_LENGTH                            0x1
#define _CRCCON1_CRCPLEN0_MASK                              0x1
#define _CRCCON1_CRCPLEN1_POSN                              0x1
#define _CRCCON1_CRCPLEN1_POSITION                          0x1
#define _CRCCON1_CRCPLEN1_SIZE                              0x1
#define _CRCCON1_CRCPLEN1_LENGTH                            0x1
#define _CRCCON1_CRCPLEN1_MASK                              0x2
#define _CRCCON1_CRCPLEN2_POSN                              0x2
#define _CRCCON1_CRCPLEN2_POSITION                          0x2
#define _CRCCON1_CRCPLEN2_SIZE                              0x1
#define _CRCCON1_CRCPLEN2_LENGTH                            0x1
#define _CRCCON1_CRCPLEN2_MASK                              0x4
#define _CRCCON1_CRCPLEN3_POSN                              0x3
#define _CRCCON1_CRCPLEN3_POSITION                          0x3
#define _CRCCON1_CRCPLEN3_SIZE                              0x1
#define _CRCCON1_CRCPLEN3_LENGTH                            0x1
#define _CRCCON1_CRCPLEN3_MASK                              0x8
#define _CRCCON1_CRCDLEN0_POSN                              0x4
#define _CRCCON1_CRCDLEN0_POSITION                          0x4
#define _CRCCON1_CRCDLEN0_SIZE                              0x1
#define _CRCCON1_CRCDLEN0_LENGTH                            0x1
#define _CRCCON1_CRCDLEN0_MASK                              0x10
#define _CRCCON1_CRCDLEN1_POSN                              0x5
#define _CRCCON1_CRCDLEN1_POSITION                          0x5
#define _CRCCON1_CRCDLEN1_SIZE                              0x1
#define _CRCCON1_CRCDLEN1_LENGTH                            0x1
#define _CRCCON1_CRCDLEN1_MASK                              0x20
#define _CRCCON1_CRCDLEN2_POSN                              0x6
#define _CRCCON1_CRCDLEN2_POSITION                          0x6
#define _CRCCON1_CRCDLEN2_SIZE                              0x1
#define _CRCCON1_CRCDLEN2_LENGTH                            0x1
#define _CRCCON1_CRCDLEN2_MASK                              0x40
#define _CRCCON1_CRCDLEN3_POSN                              0x7
#define _CRCCON1_CRCDLEN3_POSITION                          0x7
#define _CRCCON1_CRCDLEN3_SIZE                              0x1
#define _CRCCON1_CRCDLEN3_LENGTH                            0x1
#define _CRCCON1_CRCDLEN3_MASK                              0x80

// Register: SMT1TMR
#define SMT1TMR SMT1TMR
#ifndef __CCI__
extern volatile __uint24                SMT1TMR             __at(0xD8C);
#endif
#ifndef _LIB_BUILD
asm("SMT1TMR equ 0D8Ch");
#endif

// Register: SMT1TMRL
#define SMT1TMRL SMT1TMRL
extern volatile unsigned char           SMT1TMRL            __at(0xD8C);
#ifndef _LIB_BUILD
asm("SMT1TMRL equ 0D8Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1TMR                :8;
    };
    struct {
        unsigned SMT1TMR0               :1;
        unsigned SMT1TMR1               :1;
        unsigned SMT1TMR2               :1;
        unsigned SMT1TMR3               :1;
        unsigned SMT1TMR4               :1;
        unsigned SMT1TMR5               :1;
        unsigned SMT1TMR6               :1;
        unsigned SMT1TMR7               :1;
    };
} SMT1TMRLbits_t;
extern volatile SMT1TMRLbits_t SMT1TMRLbits __at(0xD8C);
// bitfield macros
#define _SMT1TMRL_SMT1TMR_POSN                              0x0
#define _SMT1TMRL_SMT1TMR_POSITION                          0x0
#define _SMT1TMRL_SMT1TMR_SIZE                              0x8
#define _SMT1TMRL_SMT1TMR_LENGTH                            0x8
#define _SMT1TMRL_SMT1TMR_MASK                              0xFF
#define _SMT1TMRL_SMT1TMR0_POSN                             0x0
#define _SMT1TMRL_SMT1TMR0_POSITION                         0x0
#define _SMT1TMRL_SMT1TMR0_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR0_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR0_MASK                             0x1
#define _SMT1TMRL_SMT1TMR1_POSN                             0x1
#define _SMT1TMRL_SMT1TMR1_POSITION                         0x1
#define _SMT1TMRL_SMT1TMR1_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR1_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR1_MASK                             0x2
#define _SMT1TMRL_SMT1TMR2_POSN                             0x2
#define _SMT1TMRL_SMT1TMR2_POSITION                         0x2
#define _SMT1TMRL_SMT1TMR2_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR2_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR2_MASK                             0x4
#define _SMT1TMRL_SMT1TMR3_POSN                             0x3
#define _SMT1TMRL_SMT1TMR3_POSITION                         0x3
#define _SMT1TMRL_SMT1TMR3_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR3_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR3_MASK                             0x8
#define _SMT1TMRL_SMT1TMR4_POSN                             0x4
#define _SMT1TMRL_SMT1TMR4_POSITION                         0x4
#define _SMT1TMRL_SMT1TMR4_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR4_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR4_MASK                             0x10
#define _SMT1TMRL_SMT1TMR5_POSN                             0x5
#define _SMT1TMRL_SMT1TMR5_POSITION                         0x5
#define _SMT1TMRL_SMT1TMR5_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR5_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR5_MASK                             0x20
#define _SMT1TMRL_SMT1TMR6_POSN                             0x6
#define _SMT1TMRL_SMT1TMR6_POSITION                         0x6
#define _SMT1TMRL_SMT1TMR6_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR6_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR6_MASK                             0x40
#define _SMT1TMRL_SMT1TMR7_POSN                             0x7
#define _SMT1TMRL_SMT1TMR7_POSITION                         0x7
#define _SMT1TMRL_SMT1TMR7_SIZE                             0x1
#define _SMT1TMRL_SMT1TMR7_LENGTH                           0x1
#define _SMT1TMRL_SMT1TMR7_MASK                             0x80

// Register: SMT1TMRH
#define SMT1TMRH SMT1TMRH
extern volatile unsigned char           SMT1TMRH            __at(0xD8D);
#ifndef _LIB_BUILD
asm("SMT1TMRH equ 0D8Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1TMR                :8;
    };
    struct {
        unsigned SMT1TMR8               :1;
        unsigned SMT1TMR9               :1;
        unsigned SMT1TMR10              :1;
        unsigned SMT1TMR11              :1;
        unsigned SMT1TMR12              :1;
        unsigned SMT1TMR13              :1;
        unsigned SMT1TMR14              :1;
        unsigned SMT1TMR15              :1;
    };
} SMT1TMRHbits_t;
extern volatile SMT1TMRHbits_t SMT1TMRHbits __at(0xD8D);
// bitfield macros
#define _SMT1TMRH_SMT1TMR_POSN                              0x0
#define _SMT1TMRH_SMT1TMR_POSITION                          0x0
#define _SMT1TMRH_SMT1TMR_SIZE                              0x8
#define _SMT1TMRH_SMT1TMR_LENGTH                            0x8
#define _SMT1TMRH_SMT1TMR_MASK                              0xFF
#define _SMT1TMRH_SMT1TMR8_POSN                             0x0
#define _SMT1TMRH_SMT1TMR8_POSITION                         0x0
#define _SMT1TMRH_SMT1TMR8_SIZE                             0x1
#define _SMT1TMRH_SMT1TMR8_LENGTH                           0x1
#define _SMT1TMRH_SMT1TMR8_MASK                             0x1
#define _SMT1TMRH_SMT1TMR9_POSN                             0x1
#define _SMT1TMRH_SMT1TMR9_POSITION                         0x1
#define _SMT1TMRH_SMT1TMR9_SIZE                             0x1
#define _SMT1TMRH_SMT1TMR9_LENGTH                           0x1
#define _SMT1TMRH_SMT1TMR9_MASK                             0x2
#define _SMT1TMRH_SMT1TMR10_POSN                            0x2
#define _SMT1TMRH_SMT1TMR10_POSITION                        0x2
#define _SMT1TMRH_SMT1TMR10_SIZE                            0x1
#define _SMT1TMRH_SMT1TMR10_LENGTH                          0x1
#define _SMT1TMRH_SMT1TMR10_MASK                            0x4
#define _SMT1TMRH_SMT1TMR11_POSN                            0x3
#define _SMT1TMRH_SMT1TMR11_POSITION                        0x3
#define _SMT1TMRH_SMT1TMR11_SIZE                            0x1
#define _SMT1TMRH_SMT1TMR11_LENGTH                          0x1
#define _SMT1TMRH_SMT1TMR11_MASK                            0x8
#define _SMT1TMRH_SMT1TMR12_POSN                            0x4
#define _SMT1TMRH_SMT1TMR12_POSITION                        0x4
#define _SMT1TMRH_SMT1TMR12_SIZE                            0x1
#define _SMT1TMRH_SMT1TMR12_LENGTH                          0x1
#define _SMT1TMRH_SMT1TMR12_MASK                            0x10
#define _SMT1TMRH_SMT1TMR13_POSN                            0x5
#define _SMT1TMRH_SMT1TMR13_POSITION                        0x5
#define _SMT1TMRH_SMT1TMR13_SIZE                            0x1
#define _SMT1TMRH_SMT1TMR13_LENGTH                          0x1
#define _SMT1TMRH_SMT1TMR13_MASK                            0x20
#define _SMT1TMRH_SMT1TMR14_POSN                            0x6
#define _SMT1TMRH_SMT1TMR14_POSITION                        0x6
#define _SMT1TMRH_SMT1TMR14_SIZE                            0x1
#define _SMT1TMRH_SMT1TMR14_LENGTH                          0x1
#define _SMT1TMRH_SMT1TMR14_MASK                            0x40
#define _SMT1TMRH_SMT1TMR15_POSN                            0x7
#define _SMT1TMRH_SMT1TMR15_POSITION                        0x7
#define _SMT1TMRH_SMT1TMR15_SIZE                            0x1
#define _SMT1TMRH_SMT1TMR15_LENGTH                          0x1
#define _SMT1TMRH_SMT1TMR15_MASK                            0x80

// Register: SMT1TMRU
#define SMT1TMRU SMT1TMRU
extern volatile unsigned char           SMT1TMRU            __at(0xD8E);
#ifndef _LIB_BUILD
asm("SMT1TMRU equ 0D8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1TMR                :8;
    };
    struct {
        unsigned SMT1TMR16              :1;
        unsigned SMT1TMR17              :1;
        unsigned SMT1TMR18              :1;
        unsigned SMT1TMR19              :1;
        unsigned SMT1TMR20              :1;
        unsigned SMT1TMR21              :1;
        unsigned SMT1TMR22              :1;
        unsigned SMT1TMR23              :1;
    };
} SMT1TMRUbits_t;
extern volatile SMT1TMRUbits_t SMT1TMRUbits __at(0xD8E);
// bitfield macros
#define _SMT1TMRU_SMT1TMR_POSN                              0x0
#define _SMT1TMRU_SMT1TMR_POSITION                          0x0
#define _SMT1TMRU_SMT1TMR_SIZE                              0x8
#define _SMT1TMRU_SMT1TMR_LENGTH                            0x8
#define _SMT1TMRU_SMT1TMR_MASK                              0xFF
#define _SMT1TMRU_SMT1TMR16_POSN                            0x0
#define _SMT1TMRU_SMT1TMR16_POSITION                        0x0
#define _SMT1TMRU_SMT1TMR16_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR16_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR16_MASK                            0x1
#define _SMT1TMRU_SMT1TMR17_POSN                            0x1
#define _SMT1TMRU_SMT1TMR17_POSITION                        0x1
#define _SMT1TMRU_SMT1TMR17_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR17_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR17_MASK                            0x2
#define _SMT1TMRU_SMT1TMR18_POSN                            0x2
#define _SMT1TMRU_SMT1TMR18_POSITION                        0x2
#define _SMT1TMRU_SMT1TMR18_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR18_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR18_MASK                            0x4
#define _SMT1TMRU_SMT1TMR19_POSN                            0x3
#define _SMT1TMRU_SMT1TMR19_POSITION                        0x3
#define _SMT1TMRU_SMT1TMR19_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR19_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR19_MASK                            0x8
#define _SMT1TMRU_SMT1TMR20_POSN                            0x4
#define _SMT1TMRU_SMT1TMR20_POSITION                        0x4
#define _SMT1TMRU_SMT1TMR20_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR20_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR20_MASK                            0x10
#define _SMT1TMRU_SMT1TMR21_POSN                            0x5
#define _SMT1TMRU_SMT1TMR21_POSITION                        0x5
#define _SMT1TMRU_SMT1TMR21_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR21_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR21_MASK                            0x20
#define _SMT1TMRU_SMT1TMR22_POSN                            0x6
#define _SMT1TMRU_SMT1TMR22_POSITION                        0x6
#define _SMT1TMRU_SMT1TMR22_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR22_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR22_MASK                            0x40
#define _SMT1TMRU_SMT1TMR23_POSN                            0x7
#define _SMT1TMRU_SMT1TMR23_POSITION                        0x7
#define _SMT1TMRU_SMT1TMR23_SIZE                            0x1
#define _SMT1TMRU_SMT1TMR23_LENGTH                          0x1
#define _SMT1TMRU_SMT1TMR23_MASK                            0x80

// Register: SMT1CPR
#define SMT1CPR SMT1CPR
#ifndef __CCI__
extern volatile __uint24                SMT1CPR             __at(0xD8F);
#endif
#ifndef _LIB_BUILD
asm("SMT1CPR equ 0D8Fh");
#endif

// Register: SMT1CPRL
#define SMT1CPRL SMT1CPRL
extern volatile unsigned char           SMT1CPRL            __at(0xD8F);
#ifndef _LIB_BUILD
asm("SMT1CPRL equ 0D8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1CPR                :8;
    };
    struct {
        unsigned SMT1CPR0               :1;
        unsigned SMT1CPR1               :1;
        unsigned SMT1CPR2               :1;
        unsigned SMT1CPR3               :1;
        unsigned SMT1CPR4               :1;
        unsigned SMT1CPR5               :1;
        unsigned SMT1CPR6               :1;
        unsigned SMT1CPR7               :1;
    };
} SMT1CPRLbits_t;
extern volatile SMT1CPRLbits_t SMT1CPRLbits __at(0xD8F);
// bitfield macros
#define _SMT1CPRL_SMT1CPR_POSN                              0x0
#define _SMT1CPRL_SMT1CPR_POSITION                          0x0
#define _SMT1CPRL_SMT1CPR_SIZE                              0x8
#define _SMT1CPRL_SMT1CPR_LENGTH                            0x8
#define _SMT1CPRL_SMT1CPR_MASK                              0xFF
#define _SMT1CPRL_SMT1CPR0_POSN                             0x0
#define _SMT1CPRL_SMT1CPR0_POSITION                         0x0
#define _SMT1CPRL_SMT1CPR0_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR0_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR0_MASK                             0x1
#define _SMT1CPRL_SMT1CPR1_POSN                             0x1
#define _SMT1CPRL_SMT1CPR1_POSITION                         0x1
#define _SMT1CPRL_SMT1CPR1_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR1_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR1_MASK                             0x2
#define _SMT1CPRL_SMT1CPR2_POSN                             0x2
#define _SMT1CPRL_SMT1CPR2_POSITION                         0x2
#define _SMT1CPRL_SMT1CPR2_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR2_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR2_MASK                             0x4
#define _SMT1CPRL_SMT1CPR3_POSN                             0x3
#define _SMT1CPRL_SMT1CPR3_POSITION                         0x3
#define _SMT1CPRL_SMT1CPR3_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR3_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR3_MASK                             0x8
#define _SMT1CPRL_SMT1CPR4_POSN                             0x4
#define _SMT1CPRL_SMT1CPR4_POSITION                         0x4
#define _SMT1CPRL_SMT1CPR4_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR4_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR4_MASK                             0x10
#define _SMT1CPRL_SMT1CPR5_POSN                             0x5
#define _SMT1CPRL_SMT1CPR5_POSITION                         0x5
#define _SMT1CPRL_SMT1CPR5_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR5_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR5_MASK                             0x20
#define _SMT1CPRL_SMT1CPR6_POSN                             0x6
#define _SMT1CPRL_SMT1CPR6_POSITION                         0x6
#define _SMT1CPRL_SMT1CPR6_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR6_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR6_MASK                             0x40
#define _SMT1CPRL_SMT1CPR7_POSN                             0x7
#define _SMT1CPRL_SMT1CPR7_POSITION                         0x7
#define _SMT1CPRL_SMT1CPR7_SIZE                             0x1
#define _SMT1CPRL_SMT1CPR7_LENGTH                           0x1
#define _SMT1CPRL_SMT1CPR7_MASK                             0x80

// Register: SMT1CPRH
#define SMT1CPRH SMT1CPRH
extern volatile unsigned char           SMT1CPRH            __at(0xD90);
#ifndef _LIB_BUILD
asm("SMT1CPRH equ 0D90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1CPR                :8;
    };
    struct {
        unsigned SMT1CPR8               :1;
        unsigned SMT1CPR9               :1;
        unsigned SMT1CPR10              :1;
        unsigned SMT1CPR11              :1;
        unsigned SMT1CPR12              :1;
        unsigned SMT1CPR13              :1;
        unsigned SMT1CPR14              :1;
        unsigned SMT1CPR15              :1;
    };
} SMT1CPRHbits_t;
extern volatile SMT1CPRHbits_t SMT1CPRHbits __at(0xD90);
// bitfield macros
#define _SMT1CPRH_SMT1CPR_POSN                              0x0
#define _SMT1CPRH_SMT1CPR_POSITION                          0x0
#define _SMT1CPRH_SMT1CPR_SIZE                              0x8
#define _SMT1CPRH_SMT1CPR_LENGTH                            0x8
#define _SMT1CPRH_SMT1CPR_MASK                              0xFF
#define _SMT1CPRH_SMT1CPR8_POSN                             0x0
#define _SMT1CPRH_SMT1CPR8_POSITION                         0x0
#define _SMT1CPRH_SMT1CPR8_SIZE                             0x1
#define _SMT1CPRH_SMT1CPR8_LENGTH                           0x1
#define _SMT1CPRH_SMT1CPR8_MASK                             0x1
#define _SMT1CPRH_SMT1CPR9_POSN                             0x1
#define _SMT1CPRH_SMT1CPR9_POSITION                         0x1
#define _SMT1CPRH_SMT1CPR9_SIZE                             0x1
#define _SMT1CPRH_SMT1CPR9_LENGTH                           0x1
#define _SMT1CPRH_SMT1CPR9_MASK                             0x2
#define _SMT1CPRH_SMT1CPR10_POSN                            0x2
#define _SMT1CPRH_SMT1CPR10_POSITION                        0x2
#define _SMT1CPRH_SMT1CPR10_SIZE                            0x1
#define _SMT1CPRH_SMT1CPR10_LENGTH                          0x1
#define _SMT1CPRH_SMT1CPR10_MASK                            0x4
#define _SMT1CPRH_SMT1CPR11_POSN                            0x3
#define _SMT1CPRH_SMT1CPR11_POSITION                        0x3
#define _SMT1CPRH_SMT1CPR11_SIZE                            0x1
#define _SMT1CPRH_SMT1CPR11_LENGTH                          0x1
#define _SMT1CPRH_SMT1CPR11_MASK                            0x8
#define _SMT1CPRH_SMT1CPR12_POSN                            0x4
#define _SMT1CPRH_SMT1CPR12_POSITION                        0x4
#define _SMT1CPRH_SMT1CPR12_SIZE                            0x1
#define _SMT1CPRH_SMT1CPR12_LENGTH                          0x1
#define _SMT1CPRH_SMT1CPR12_MASK                            0x10
#define _SMT1CPRH_SMT1CPR13_POSN                            0x5
#define _SMT1CPRH_SMT1CPR13_POSITION                        0x5
#define _SMT1CPRH_SMT1CPR13_SIZE                            0x1
#define _SMT1CPRH_SMT1CPR13_LENGTH                          0x1
#define _SMT1CPRH_SMT1CPR13_MASK                            0x20
#define _SMT1CPRH_SMT1CPR14_POSN                            0x6
#define _SMT1CPRH_SMT1CPR14_POSITION                        0x6
#define _SMT1CPRH_SMT1CPR14_SIZE                            0x1
#define _SMT1CPRH_SMT1CPR14_LENGTH                          0x1
#define _SMT1CPRH_SMT1CPR14_MASK                            0x40
#define _SMT1CPRH_SMT1CPR15_POSN                            0x7
#define _SMT1CPRH_SMT1CPR15_POSITION                        0x7
#define _SMT1CPRH_SMT1CPR15_SIZE                            0x1
#define _SMT1CPRH_SMT1CPR15_LENGTH                          0x1
#define _SMT1CPRH_SMT1CPR15_MASK                            0x80

// Register: SMT1CPRU
#define SMT1CPRU SMT1CPRU
extern volatile unsigned char           SMT1CPRU            __at(0xD91);
#ifndef _LIB_BUILD
asm("SMT1CPRU equ 0D91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1CPR                :8;
    };
    struct {
        unsigned SMT1CPR16              :1;
        unsigned SMT1CPR17              :1;
        unsigned SMT1CPR18              :1;
        unsigned SMT1CPR19              :1;
        unsigned SMT1CPR20              :1;
        unsigned SMT1CPR21              :1;
        unsigned SMT1CPR22              :1;
        unsigned SMT1CPR23              :1;
    };
} SMT1CPRUbits_t;
extern volatile SMT1CPRUbits_t SMT1CPRUbits __at(0xD91);
// bitfield macros
#define _SMT1CPRU_SMT1CPR_POSN                              0x0
#define _SMT1CPRU_SMT1CPR_POSITION                          0x0
#define _SMT1CPRU_SMT1CPR_SIZE                              0x8
#define _SMT1CPRU_SMT1CPR_LENGTH                            0x8
#define _SMT1CPRU_SMT1CPR_MASK                              0xFF
#define _SMT1CPRU_SMT1CPR16_POSN                            0x0
#define _SMT1CPRU_SMT1CPR16_POSITION                        0x0
#define _SMT1CPRU_SMT1CPR16_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR16_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR16_MASK                            0x1
#define _SMT1CPRU_SMT1CPR17_POSN                            0x1
#define _SMT1CPRU_SMT1CPR17_POSITION                        0x1
#define _SMT1CPRU_SMT1CPR17_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR17_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR17_MASK                            0x2
#define _SMT1CPRU_SMT1CPR18_POSN                            0x2
#define _SMT1CPRU_SMT1CPR18_POSITION                        0x2
#define _SMT1CPRU_SMT1CPR18_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR18_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR18_MASK                            0x4
#define _SMT1CPRU_SMT1CPR19_POSN                            0x3
#define _SMT1CPRU_SMT1CPR19_POSITION                        0x3
#define _SMT1CPRU_SMT1CPR19_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR19_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR19_MASK                            0x8
#define _SMT1CPRU_SMT1CPR20_POSN                            0x4
#define _SMT1CPRU_SMT1CPR20_POSITION                        0x4
#define _SMT1CPRU_SMT1CPR20_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR20_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR20_MASK                            0x10
#define _SMT1CPRU_SMT1CPR21_POSN                            0x5
#define _SMT1CPRU_SMT1CPR21_POSITION                        0x5
#define _SMT1CPRU_SMT1CPR21_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR21_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR21_MASK                            0x20
#define _SMT1CPRU_SMT1CPR22_POSN                            0x6
#define _SMT1CPRU_SMT1CPR22_POSITION                        0x6
#define _SMT1CPRU_SMT1CPR22_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR22_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR22_MASK                            0x40
#define _SMT1CPRU_SMT1CPR23_POSN                            0x7
#define _SMT1CPRU_SMT1CPR23_POSITION                        0x7
#define _SMT1CPRU_SMT1CPR23_SIZE                            0x1
#define _SMT1CPRU_SMT1CPR23_LENGTH                          0x1
#define _SMT1CPRU_SMT1CPR23_MASK                            0x80

// Register: SMT1CPW
#define SMT1CPW SMT1CPW
#ifndef __CCI__
extern volatile __uint24                SMT1CPW             __at(0xD92);
#endif
#ifndef _LIB_BUILD
asm("SMT1CPW equ 0D92h");
#endif

// Register: SMT1CPWL
#define SMT1CPWL SMT1CPWL
extern volatile unsigned char           SMT1CPWL            __at(0xD92);
#ifndef _LIB_BUILD
asm("SMT1CPWL equ 0D92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1CPW                :8;
    };
    struct {
        unsigned SMT1CPW0               :1;
        unsigned SMT1CPW1               :1;
        unsigned SMT1CPW2               :1;
        unsigned SMT1CPW3               :1;
        unsigned SMT1CPW4               :1;
        unsigned SMT1CPW5               :1;
        unsigned SMT1CPW6               :1;
        unsigned SMT1CPW7               :1;
    };
} SMT1CPWLbits_t;
extern volatile SMT1CPWLbits_t SMT1CPWLbits __at(0xD92);
// bitfield macros
#define _SMT1CPWL_SMT1CPW_POSN                              0x0
#define _SMT1CPWL_SMT1CPW_POSITION                          0x0
#define _SMT1CPWL_SMT1CPW_SIZE                              0x8
#define _SMT1CPWL_SMT1CPW_LENGTH                            0x8
#define _SMT1CPWL_SMT1CPW_MASK                              0xFF
#define _SMT1CPWL_SMT1CPW0_POSN                             0x0
#define _SMT1CPWL_SMT1CPW0_POSITION                         0x0
#define _SMT1CPWL_SMT1CPW0_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW0_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW0_MASK                             0x1
#define _SMT1CPWL_SMT1CPW1_POSN                             0x1
#define _SMT1CPWL_SMT1CPW1_POSITION                         0x1
#define _SMT1CPWL_SMT1CPW1_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW1_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW1_MASK                             0x2
#define _SMT1CPWL_SMT1CPW2_POSN                             0x2
#define _SMT1CPWL_SMT1CPW2_POSITION                         0x2
#define _SMT1CPWL_SMT1CPW2_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW2_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW2_MASK                             0x4
#define _SMT1CPWL_SMT1CPW3_POSN                             0x3
#define _SMT1CPWL_SMT1CPW3_POSITION                         0x3
#define _SMT1CPWL_SMT1CPW3_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW3_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW3_MASK                             0x8
#define _SMT1CPWL_SMT1CPW4_POSN                             0x4
#define _SMT1CPWL_SMT1CPW4_POSITION                         0x4
#define _SMT1CPWL_SMT1CPW4_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW4_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW4_MASK                             0x10
#define _SMT1CPWL_SMT1CPW5_POSN                             0x5
#define _SMT1CPWL_SMT1CPW5_POSITION                         0x5
#define _SMT1CPWL_SMT1CPW5_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW5_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW5_MASK                             0x20
#define _SMT1CPWL_SMT1CPW6_POSN                             0x6
#define _SMT1CPWL_SMT1CPW6_POSITION                         0x6
#define _SMT1CPWL_SMT1CPW6_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW6_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW6_MASK                             0x40
#define _SMT1CPWL_SMT1CPW7_POSN                             0x7
#define _SMT1CPWL_SMT1CPW7_POSITION                         0x7
#define _SMT1CPWL_SMT1CPW7_SIZE                             0x1
#define _SMT1CPWL_SMT1CPW7_LENGTH                           0x1
#define _SMT1CPWL_SMT1CPW7_MASK                             0x80

// Register: SMT1CPWH
#define SMT1CPWH SMT1CPWH
extern volatile unsigned char           SMT1CPWH            __at(0xD93);
#ifndef _LIB_BUILD
asm("SMT1CPWH equ 0D93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1CPW                :8;
    };
    struct {
        unsigned SMT1CPW8               :1;
        unsigned SMT1CPW9               :1;
        unsigned SMT1CPW10              :1;
        unsigned SMT1CPW11              :1;
        unsigned SMT1CPW12              :1;
        unsigned SMT1CPW13              :1;
        unsigned SMT1CPW14              :1;
        unsigned SMT1CPW15              :1;
    };
} SMT1CPWHbits_t;
extern volatile SMT1CPWHbits_t SMT1CPWHbits __at(0xD93);
// bitfield macros
#define _SMT1CPWH_SMT1CPW_POSN                              0x0
#define _SMT1CPWH_SMT1CPW_POSITION                          0x0
#define _SMT1CPWH_SMT1CPW_SIZE                              0x8
#define _SMT1CPWH_SMT1CPW_LENGTH                            0x8
#define _SMT1CPWH_SMT1CPW_MASK                              0xFF
#define _SMT1CPWH_SMT1CPW8_POSN                             0x0
#define _SMT1CPWH_SMT1CPW8_POSITION                         0x0
#define _SMT1CPWH_SMT1CPW8_SIZE                             0x1
#define _SMT1CPWH_SMT1CPW8_LENGTH                           0x1
#define _SMT1CPWH_SMT1CPW8_MASK                             0x1
#define _SMT1CPWH_SMT1CPW9_POSN                             0x1
#define _SMT1CPWH_SMT1CPW9_POSITION                         0x1
#define _SMT1CPWH_SMT1CPW9_SIZE                             0x1
#define _SMT1CPWH_SMT1CPW9_LENGTH                           0x1
#define _SMT1CPWH_SMT1CPW9_MASK                             0x2
#define _SMT1CPWH_SMT1CPW10_POSN                            0x2
#define _SMT1CPWH_SMT1CPW10_POSITION                        0x2
#define _SMT1CPWH_SMT1CPW10_SIZE                            0x1
#define _SMT1CPWH_SMT1CPW10_LENGTH                          0x1
#define _SMT1CPWH_SMT1CPW10_MASK                            0x4
#define _SMT1CPWH_SMT1CPW11_POSN                            0x3
#define _SMT1CPWH_SMT1CPW11_POSITION                        0x3
#define _SMT1CPWH_SMT1CPW11_SIZE                            0x1
#define _SMT1CPWH_SMT1CPW11_LENGTH                          0x1
#define _SMT1CPWH_SMT1CPW11_MASK                            0x8
#define _SMT1CPWH_SMT1CPW12_POSN                            0x4
#define _SMT1CPWH_SMT1CPW12_POSITION                        0x4
#define _SMT1CPWH_SMT1CPW12_SIZE                            0x1
#define _SMT1CPWH_SMT1CPW12_LENGTH                          0x1
#define _SMT1CPWH_SMT1CPW12_MASK                            0x10
#define _SMT1CPWH_SMT1CPW13_POSN                            0x5
#define _SMT1CPWH_SMT1CPW13_POSITION                        0x5
#define _SMT1CPWH_SMT1CPW13_SIZE                            0x1
#define _SMT1CPWH_SMT1CPW13_LENGTH                          0x1
#define _SMT1CPWH_SMT1CPW13_MASK                            0x20
#define _SMT1CPWH_SMT1CPW14_POSN                            0x6
#define _SMT1CPWH_SMT1CPW14_POSITION                        0x6
#define _SMT1CPWH_SMT1CPW14_SIZE                            0x1
#define _SMT1CPWH_SMT1CPW14_LENGTH                          0x1
#define _SMT1CPWH_SMT1CPW14_MASK                            0x40
#define _SMT1CPWH_SMT1CPW15_POSN                            0x7
#define _SMT1CPWH_SMT1CPW15_POSITION                        0x7
#define _SMT1CPWH_SMT1CPW15_SIZE                            0x1
#define _SMT1CPWH_SMT1CPW15_LENGTH                          0x1
#define _SMT1CPWH_SMT1CPW15_MASK                            0x80

// Register: SMT1CPWU
#define SMT1CPWU SMT1CPWU
extern volatile unsigned char           SMT1CPWU            __at(0xD94);
#ifndef _LIB_BUILD
asm("SMT1CPWU equ 0D94h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1CPW                :8;
    };
    struct {
        unsigned SMT1CPW16              :1;
        unsigned SMT1CPW17              :1;
        unsigned SMT1CPW18              :1;
        unsigned SMT1CPW19              :1;
        unsigned SMT1CPW20              :1;
        unsigned SMT1CPW21              :1;
        unsigned SMT1CPW22              :1;
        unsigned SMT1CPW23              :1;
    };
} SMT1CPWUbits_t;
extern volatile SMT1CPWUbits_t SMT1CPWUbits __at(0xD94);
// bitfield macros
#define _SMT1CPWU_SMT1CPW_POSN                              0x0
#define _SMT1CPWU_SMT1CPW_POSITION                          0x0
#define _SMT1CPWU_SMT1CPW_SIZE                              0x8
#define _SMT1CPWU_SMT1CPW_LENGTH                            0x8
#define _SMT1CPWU_SMT1CPW_MASK                              0xFF
#define _SMT1CPWU_SMT1CPW16_POSN                            0x0
#define _SMT1CPWU_SMT1CPW16_POSITION                        0x0
#define _SMT1CPWU_SMT1CPW16_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW16_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW16_MASK                            0x1
#define _SMT1CPWU_SMT1CPW17_POSN                            0x1
#define _SMT1CPWU_SMT1CPW17_POSITION                        0x1
#define _SMT1CPWU_SMT1CPW17_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW17_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW17_MASK                            0x2
#define _SMT1CPWU_SMT1CPW18_POSN                            0x2
#define _SMT1CPWU_SMT1CPW18_POSITION                        0x2
#define _SMT1CPWU_SMT1CPW18_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW18_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW18_MASK                            0x4
#define _SMT1CPWU_SMT1CPW19_POSN                            0x3
#define _SMT1CPWU_SMT1CPW19_POSITION                        0x3
#define _SMT1CPWU_SMT1CPW19_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW19_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW19_MASK                            0x8
#define _SMT1CPWU_SMT1CPW20_POSN                            0x4
#define _SMT1CPWU_SMT1CPW20_POSITION                        0x4
#define _SMT1CPWU_SMT1CPW20_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW20_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW20_MASK                            0x10
#define _SMT1CPWU_SMT1CPW21_POSN                            0x5
#define _SMT1CPWU_SMT1CPW21_POSITION                        0x5
#define _SMT1CPWU_SMT1CPW21_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW21_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW21_MASK                            0x20
#define _SMT1CPWU_SMT1CPW22_POSN                            0x6
#define _SMT1CPWU_SMT1CPW22_POSITION                        0x6
#define _SMT1CPWU_SMT1CPW22_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW22_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW22_MASK                            0x40
#define _SMT1CPWU_SMT1CPW23_POSN                            0x7
#define _SMT1CPWU_SMT1CPW23_POSITION                        0x7
#define _SMT1CPWU_SMT1CPW23_SIZE                            0x1
#define _SMT1CPWU_SMT1CPW23_LENGTH                          0x1
#define _SMT1CPWU_SMT1CPW23_MASK                            0x80

// Register: SMT1PR
#define SMT1PR SMT1PR
#ifndef __CCI__
extern volatile __uint24                SMT1PR              __at(0xD95);
#endif
#ifndef _LIB_BUILD
asm("SMT1PR equ 0D95h");
#endif

// Register: SMT1PRL
#define SMT1PRL SMT1PRL
extern volatile unsigned char           SMT1PRL             __at(0xD95);
#ifndef _LIB_BUILD
asm("SMT1PRL equ 0D95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1PR                 :8;
    };
    struct {
        unsigned SMT1PR0                :1;
        unsigned SMT1PR1                :1;
        unsigned SMT1PR2                :1;
        unsigned SMT1PR3                :1;
        unsigned SMT1PR4                :1;
        unsigned SMT1PR5                :1;
        unsigned SMT1PR6                :1;
        unsigned SMT1PR7                :1;
    };
} SMT1PRLbits_t;
extern volatile SMT1PRLbits_t SMT1PRLbits __at(0xD95);
// bitfield macros
#define _SMT1PRL_SMT1PR_POSN                                0x0
#define _SMT1PRL_SMT1PR_POSITION                            0x0
#define _SMT1PRL_SMT1PR_SIZE                                0x8
#define _SMT1PRL_SMT1PR_LENGTH                              0x8
#define _SMT1PRL_SMT1PR_MASK                                0xFF
#define _SMT1PRL_SMT1PR0_POSN                               0x0
#define _SMT1PRL_SMT1PR0_POSITION                           0x0
#define _SMT1PRL_SMT1PR0_SIZE                               0x1
#define _SMT1PRL_SMT1PR0_LENGTH                             0x1
#define _SMT1PRL_SMT1PR0_MASK                               0x1
#define _SMT1PRL_SMT1PR1_POSN                               0x1
#define _SMT1PRL_SMT1PR1_POSITION                           0x1
#define _SMT1PRL_SMT1PR1_SIZE                               0x1
#define _SMT1PRL_SMT1PR1_LENGTH                             0x1
#define _SMT1PRL_SMT1PR1_MASK                               0x2
#define _SMT1PRL_SMT1PR2_POSN                               0x2
#define _SMT1PRL_SMT1PR2_POSITION                           0x2
#define _SMT1PRL_SMT1PR2_SIZE                               0x1
#define _SMT1PRL_SMT1PR2_LENGTH                             0x1
#define _SMT1PRL_SMT1PR2_MASK                               0x4
#define _SMT1PRL_SMT1PR3_POSN                               0x3
#define _SMT1PRL_SMT1PR3_POSITION                           0x3
#define _SMT1PRL_SMT1PR3_SIZE                               0x1
#define _SMT1PRL_SMT1PR3_LENGTH                             0x1
#define _SMT1PRL_SMT1PR3_MASK                               0x8
#define _SMT1PRL_SMT1PR4_POSN                               0x4
#define _SMT1PRL_SMT1PR4_POSITION                           0x4
#define _SMT1PRL_SMT1PR4_SIZE                               0x1
#define _SMT1PRL_SMT1PR4_LENGTH                             0x1
#define _SMT1PRL_SMT1PR4_MASK                               0x10
#define _SMT1PRL_SMT1PR5_POSN                               0x5
#define _SMT1PRL_SMT1PR5_POSITION                           0x5
#define _SMT1PRL_SMT1PR5_SIZE                               0x1
#define _SMT1PRL_SMT1PR5_LENGTH                             0x1
#define _SMT1PRL_SMT1PR5_MASK                               0x20
#define _SMT1PRL_SMT1PR6_POSN                               0x6
#define _SMT1PRL_SMT1PR6_POSITION                           0x6
#define _SMT1PRL_SMT1PR6_SIZE                               0x1
#define _SMT1PRL_SMT1PR6_LENGTH                             0x1
#define _SMT1PRL_SMT1PR6_MASK                               0x40
#define _SMT1PRL_SMT1PR7_POSN                               0x7
#define _SMT1PRL_SMT1PR7_POSITION                           0x7
#define _SMT1PRL_SMT1PR7_SIZE                               0x1
#define _SMT1PRL_SMT1PR7_LENGTH                             0x1
#define _SMT1PRL_SMT1PR7_MASK                               0x80

// Register: SMT1PRH
#define SMT1PRH SMT1PRH
extern volatile unsigned char           SMT1PRH             __at(0xD96);
#ifndef _LIB_BUILD
asm("SMT1PRH equ 0D96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1PR                 :8;
    };
    struct {
        unsigned SMT1PR8                :1;
        unsigned SMT1PR9                :1;
        unsigned SMT1PR10               :1;
        unsigned SMT1PR11               :1;
        unsigned SMT1PR12               :1;
        unsigned SMT1PR13               :1;
        unsigned SMT1PR14               :1;
        unsigned SMT1PR15               :1;
    };
} SMT1PRHbits_t;
extern volatile SMT1PRHbits_t SMT1PRHbits __at(0xD96);
// bitfield macros
#define _SMT1PRH_SMT1PR_POSN                                0x0
#define _SMT1PRH_SMT1PR_POSITION                            0x0
#define _SMT1PRH_SMT1PR_SIZE                                0x8
#define _SMT1PRH_SMT1PR_LENGTH                              0x8
#define _SMT1PRH_SMT1PR_MASK                                0xFF
#define _SMT1PRH_SMT1PR8_POSN                               0x0
#define _SMT1PRH_SMT1PR8_POSITION                           0x0
#define _SMT1PRH_SMT1PR8_SIZE                               0x1
#define _SMT1PRH_SMT1PR8_LENGTH                             0x1
#define _SMT1PRH_SMT1PR8_MASK                               0x1
#define _SMT1PRH_SMT1PR9_POSN                               0x1
#define _SMT1PRH_SMT1PR9_POSITION                           0x1
#define _SMT1PRH_SMT1PR9_SIZE                               0x1
#define _SMT1PRH_SMT1PR9_LENGTH                             0x1
#define _SMT1PRH_SMT1PR9_MASK                               0x2
#define _SMT1PRH_SMT1PR10_POSN                              0x2
#define _SMT1PRH_SMT1PR10_POSITION                          0x2
#define _SMT1PRH_SMT1PR10_SIZE                              0x1
#define _SMT1PRH_SMT1PR10_LENGTH                            0x1
#define _SMT1PRH_SMT1PR10_MASK                              0x4
#define _SMT1PRH_SMT1PR11_POSN                              0x3
#define _SMT1PRH_SMT1PR11_POSITION                          0x3
#define _SMT1PRH_SMT1PR11_SIZE                              0x1
#define _SMT1PRH_SMT1PR11_LENGTH                            0x1
#define _SMT1PRH_SMT1PR11_MASK                              0x8
#define _SMT1PRH_SMT1PR12_POSN                              0x4
#define _SMT1PRH_SMT1PR12_POSITION                          0x4
#define _SMT1PRH_SMT1PR12_SIZE                              0x1
#define _SMT1PRH_SMT1PR12_LENGTH                            0x1
#define _SMT1PRH_SMT1PR12_MASK                              0x10
#define _SMT1PRH_SMT1PR13_POSN                              0x5
#define _SMT1PRH_SMT1PR13_POSITION                          0x5
#define _SMT1PRH_SMT1PR13_SIZE                              0x1
#define _SMT1PRH_SMT1PR13_LENGTH                            0x1
#define _SMT1PRH_SMT1PR13_MASK                              0x20
#define _SMT1PRH_SMT1PR14_POSN                              0x6
#define _SMT1PRH_SMT1PR14_POSITION                          0x6
#define _SMT1PRH_SMT1PR14_SIZE                              0x1
#define _SMT1PRH_SMT1PR14_LENGTH                            0x1
#define _SMT1PRH_SMT1PR14_MASK                              0x40
#define _SMT1PRH_SMT1PR15_POSN                              0x7
#define _SMT1PRH_SMT1PR15_POSITION                          0x7
#define _SMT1PRH_SMT1PR15_SIZE                              0x1
#define _SMT1PRH_SMT1PR15_LENGTH                            0x1
#define _SMT1PRH_SMT1PR15_MASK                              0x80

// Register: SMT1PRU
#define SMT1PRU SMT1PRU
extern volatile unsigned char           SMT1PRU             __at(0xD97);
#ifndef _LIB_BUILD
asm("SMT1PRU equ 0D97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1PR                 :8;
    };
    struct {
        unsigned SMT1PR16               :1;
        unsigned SMT1PR17               :1;
        unsigned SMT1PR18               :1;
        unsigned SMT1PR19               :1;
        unsigned SMT1PR20               :1;
        unsigned SMT1PR21               :1;
        unsigned SMT1PR22               :1;
        unsigned SMT1PR23               :1;
    };
} SMT1PRUbits_t;
extern volatile SMT1PRUbits_t SMT1PRUbits __at(0xD97);
// bitfield macros
#define _SMT1PRU_SMT1PR_POSN                                0x0
#define _SMT1PRU_SMT1PR_POSITION                            0x0
#define _SMT1PRU_SMT1PR_SIZE                                0x8
#define _SMT1PRU_SMT1PR_LENGTH                              0x8
#define _SMT1PRU_SMT1PR_MASK                                0xFF
#define _SMT1PRU_SMT1PR16_POSN                              0x0
#define _SMT1PRU_SMT1PR16_POSITION                          0x0
#define _SMT1PRU_SMT1PR16_SIZE                              0x1
#define _SMT1PRU_SMT1PR16_LENGTH                            0x1
#define _SMT1PRU_SMT1PR16_MASK                              0x1
#define _SMT1PRU_SMT1PR17_POSN                              0x1
#define _SMT1PRU_SMT1PR17_POSITION                          0x1
#define _SMT1PRU_SMT1PR17_SIZE                              0x1
#define _SMT1PRU_SMT1PR17_LENGTH                            0x1
#define _SMT1PRU_SMT1PR17_MASK                              0x2
#define _SMT1PRU_SMT1PR18_POSN                              0x2
#define _SMT1PRU_SMT1PR18_POSITION                          0x2
#define _SMT1PRU_SMT1PR18_SIZE                              0x1
#define _SMT1PRU_SMT1PR18_LENGTH                            0x1
#define _SMT1PRU_SMT1PR18_MASK                              0x4
#define _SMT1PRU_SMT1PR19_POSN                              0x3
#define _SMT1PRU_SMT1PR19_POSITION                          0x3
#define _SMT1PRU_SMT1PR19_SIZE                              0x1
#define _SMT1PRU_SMT1PR19_LENGTH                            0x1
#define _SMT1PRU_SMT1PR19_MASK                              0x8
#define _SMT1PRU_SMT1PR20_POSN                              0x4
#define _SMT1PRU_SMT1PR20_POSITION                          0x4
#define _SMT1PRU_SMT1PR20_SIZE                              0x1
#define _SMT1PRU_SMT1PR20_LENGTH                            0x1
#define _SMT1PRU_SMT1PR20_MASK                              0x10
#define _SMT1PRU_SMT1PR21_POSN                              0x5
#define _SMT1PRU_SMT1PR21_POSITION                          0x5
#define _SMT1PRU_SMT1PR21_SIZE                              0x1
#define _SMT1PRU_SMT1PR21_LENGTH                            0x1
#define _SMT1PRU_SMT1PR21_MASK                              0x20
#define _SMT1PRU_SMT1PR22_POSN                              0x6
#define _SMT1PRU_SMT1PR22_POSITION                          0x6
#define _SMT1PRU_SMT1PR22_SIZE                              0x1
#define _SMT1PRU_SMT1PR22_LENGTH                            0x1
#define _SMT1PRU_SMT1PR22_MASK                              0x40
#define _SMT1PRU_SMT1PR23_POSN                              0x7
#define _SMT1PRU_SMT1PR23_POSITION                          0x7
#define _SMT1PRU_SMT1PR23_SIZE                              0x1
#define _SMT1PRU_SMT1PR23_LENGTH                            0x1
#define _SMT1PRU_SMT1PR23_MASK                              0x80

// Register: SMT1CON0
#define SMT1CON0 SMT1CON0
extern volatile unsigned char           SMT1CON0            __at(0xD98);
#ifndef _LIB_BUILD
asm("SMT1CON0 equ 0D98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT1PS                 :2;
        unsigned CPOL                   :1;
        unsigned SPOL                   :1;
        unsigned WPOL                   :1;
        unsigned STP                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned SMT1PS0                :1;
        unsigned SMT1PS1                :1;
    };
} SMT1CON0bits_t;
extern volatile SMT1CON0bits_t SMT1CON0bits __at(0xD98);
// bitfield macros
#define _SMT1CON0_SMT1PS_POSN                               0x0
#define _SMT1CON0_SMT1PS_POSITION                           0x0
#define _SMT1CON0_SMT1PS_SIZE                               0x2
#define _SMT1CON0_SMT1PS_LENGTH                             0x2
#define _SMT1CON0_SMT1PS_MASK                               0x3
#define _SMT1CON0_CPOL_POSN                                 0x2
#define _SMT1CON0_CPOL_POSITION                             0x2
#define _SMT1CON0_CPOL_SIZE                                 0x1
#define _SMT1CON0_CPOL_LENGTH                               0x1
#define _SMT1CON0_CPOL_MASK                                 0x4
#define _SMT1CON0_SPOL_POSN                                 0x3
#define _SMT1CON0_SPOL_POSITION                             0x3
#define _SMT1CON0_SPOL_SIZE                                 0x1
#define _SMT1CON0_SPOL_LENGTH                               0x1
#define _SMT1CON0_SPOL_MASK                                 0x8
#define _SMT1CON0_WPOL_POSN                                 0x4
#define _SMT1CON0_WPOL_POSITION                             0x4
#define _SMT1CON0_WPOL_SIZE                                 0x1
#define _SMT1CON0_WPOL_LENGTH                               0x1
#define _SMT1CON0_WPOL_MASK                                 0x10
#define _SMT1CON0_STP_POSN                                  0x5
#define _SMT1CON0_STP_POSITION                              0x5
#define _SMT1CON0_STP_SIZE                                  0x1
#define _SMT1CON0_STP_LENGTH                                0x1
#define _SMT1CON0_STP_MASK                                  0x20
#define _SMT1CON0_EN_POSN                                   0x7
#define _SMT1CON0_EN_POSITION                               0x7
#define _SMT1CON0_EN_SIZE                                   0x1
#define _SMT1CON0_EN_LENGTH                                 0x1
#define _SMT1CON0_EN_MASK                                   0x80
#define _SMT1CON0_SMT1PS0_POSN                              0x0
#define _SMT1CON0_SMT1PS0_POSITION                          0x0
#define _SMT1CON0_SMT1PS0_SIZE                              0x1
#define _SMT1CON0_SMT1PS0_LENGTH                            0x1
#define _SMT1CON0_SMT1PS0_MASK                              0x1
#define _SMT1CON0_SMT1PS1_POSN                              0x1
#define _SMT1CON0_SMT1PS1_POSITION                          0x1
#define _SMT1CON0_SMT1PS1_SIZE                              0x1
#define _SMT1CON0_SMT1PS1_LENGTH                            0x1
#define _SMT1CON0_SMT1PS1_MASK                              0x2

// Register: SMT1CON1
#define SMT1CON1 SMT1CON1
extern volatile unsigned char           SMT1CON1            __at(0xD99);
#ifndef _LIB_BUILD
asm("SMT1CON1 equ 0D99h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned                        :2;
        unsigned REPEAT                 :1;
        unsigned SMT1GO                 :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned SMT1MODE               :4;
        unsigned                        :2;
        unsigned SMT1REPEAT             :1;
    };
    struct {
        unsigned SMT1MODE0              :1;
        unsigned SMT1MODE1              :1;
        unsigned SMT1MODE2              :1;
        unsigned SMT1MODE3              :1;
    };
} SMT1CON1bits_t;
extern volatile SMT1CON1bits_t SMT1CON1bits __at(0xD99);
// bitfield macros
#define _SMT1CON1_MODE_POSN                                 0x0
#define _SMT1CON1_MODE_POSITION                             0x0
#define _SMT1CON1_MODE_SIZE                                 0x4
#define _SMT1CON1_MODE_LENGTH                               0x4
#define _SMT1CON1_MODE_MASK                                 0xF
#define _SMT1CON1_REPEAT_POSN                               0x6
#define _SMT1CON1_REPEAT_POSITION                           0x6
#define _SMT1CON1_REPEAT_SIZE                               0x1
#define _SMT1CON1_REPEAT_LENGTH                             0x1
#define _SMT1CON1_REPEAT_MASK                               0x40
#define _SMT1CON1_SMT1GO_POSN                               0x7
#define _SMT1CON1_SMT1GO_POSITION                           0x7
#define _SMT1CON1_SMT1GO_SIZE                               0x1
#define _SMT1CON1_SMT1GO_LENGTH                             0x1
#define _SMT1CON1_SMT1GO_MASK                               0x80
#define _SMT1CON1_MODE0_POSN                                0x0
#define _SMT1CON1_MODE0_POSITION                            0x0
#define _SMT1CON1_MODE0_SIZE                                0x1
#define _SMT1CON1_MODE0_LENGTH                              0x1
#define _SMT1CON1_MODE0_MASK                                0x1
#define _SMT1CON1_MODE1_POSN                                0x1
#define _SMT1CON1_MODE1_POSITION                            0x1
#define _SMT1CON1_MODE1_SIZE                                0x1
#define _SMT1CON1_MODE1_LENGTH                              0x1
#define _SMT1CON1_MODE1_MASK                                0x2
#define _SMT1CON1_MODE2_POSN                                0x2
#define _SMT1CON1_MODE2_POSITION                            0x2
#define _SMT1CON1_MODE2_SIZE                                0x1
#define _SMT1CON1_MODE2_LENGTH                              0x1
#define _SMT1CON1_MODE2_MASK                                0x4
#define _SMT1CON1_MODE3_POSN                                0x3
#define _SMT1CON1_MODE3_POSITION                            0x3
#define _SMT1CON1_MODE3_SIZE                                0x1
#define _SMT1CON1_MODE3_LENGTH                              0x1
#define _SMT1CON1_MODE3_MASK                                0x8
#define _SMT1CON1_SMT1MODE_POSN                             0x0
#define _SMT1CON1_SMT1MODE_POSITION                         0x0
#define _SMT1CON1_SMT1MODE_SIZE                             0x4
#define _SMT1CON1_SMT1MODE_LENGTH                           0x4
#define _SMT1CON1_SMT1MODE_MASK                             0xF
#define _SMT1CON1_SMT1REPEAT_POSN                           0x6
#define _SMT1CON1_SMT1REPEAT_POSITION                       0x6
#define _SMT1CON1_SMT1REPEAT_SIZE                           0x1
#define _SMT1CON1_SMT1REPEAT_LENGTH                         0x1
#define _SMT1CON1_SMT1REPEAT_MASK                           0x40
#define _SMT1CON1_SMT1MODE0_POSN                            0x0
#define _SMT1CON1_SMT1MODE0_POSITION                        0x0
#define _SMT1CON1_SMT1MODE0_SIZE                            0x1
#define _SMT1CON1_SMT1MODE0_LENGTH                          0x1
#define _SMT1CON1_SMT1MODE0_MASK                            0x1
#define _SMT1CON1_SMT1MODE1_POSN                            0x1
#define _SMT1CON1_SMT1MODE1_POSITION                        0x1
#define _SMT1CON1_SMT1MODE1_SIZE                            0x1
#define _SMT1CON1_SMT1MODE1_LENGTH                          0x1
#define _SMT1CON1_SMT1MODE1_MASK                            0x2
#define _SMT1CON1_SMT1MODE2_POSN                            0x2
#define _SMT1CON1_SMT1MODE2_POSITION                        0x2
#define _SMT1CON1_SMT1MODE2_SIZE                            0x1
#define _SMT1CON1_SMT1MODE2_LENGTH                          0x1
#define _SMT1CON1_SMT1MODE2_MASK                            0x4
#define _SMT1CON1_SMT1MODE3_POSN                            0x3
#define _SMT1CON1_SMT1MODE3_POSITION                        0x3
#define _SMT1CON1_SMT1MODE3_SIZE                            0x1
#define _SMT1CON1_SMT1MODE3_LENGTH                          0x1
#define _SMT1CON1_SMT1MODE3_MASK                            0x8

// Register: SMT1STAT
#define SMT1STAT SMT1STAT
extern volatile unsigned char           SMT1STAT            __at(0xD9A);
#ifndef _LIB_BUILD
asm("SMT1STAT equ 0D9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AS                     :1;
        unsigned WS                     :1;
        unsigned TS                     :1;
        unsigned                        :2;
        unsigned RST                    :1;
        unsigned CPWUP                  :1;
        unsigned CPRUP                  :1;
    };
    struct {
        unsigned SMT1AS                 :1;
        unsigned SMT1WS                 :1;
        unsigned SMT1TS                 :1;
        unsigned                        :2;
        unsigned SMT1RESET              :1;
        unsigned SMT1CPWUP              :1;
        unsigned SMT1CPRUP              :1;
    };
} SMT1STATbits_t;
extern volatile SMT1STATbits_t SMT1STATbits __at(0xD9A);
// bitfield macros
#define _SMT1STAT_AS_POSN                                   0x0
#define _SMT1STAT_AS_POSITION                               0x0
#define _SMT1STAT_AS_SIZE                                   0x1
#define _SMT1STAT_AS_LENGTH                                 0x1
#define _SMT1STAT_AS_MASK                                   0x1
#define _SMT1STAT_WS_POSN                                   0x1
#define _SMT1STAT_WS_POSITION                               0x1
#define _SMT1STAT_WS_SIZE                                   0x1
#define _SMT1STAT_WS_LENGTH                                 0x1
#define _SMT1STAT_WS_MASK                                   0x2
#define _SMT1STAT_TS_POSN                                   0x2
#define _SMT1STAT_TS_POSITION                               0x2
#define _SMT1STAT_TS_SIZE                                   0x1
#define _SMT1STAT_TS_LENGTH                                 0x1
#define _SMT1STAT_TS_MASK                                   0x4
#define _SMT1STAT_RST_POSN                                  0x5
#define _SMT1STAT_RST_POSITION                              0x5
#define _SMT1STAT_RST_SIZE                                  0x1
#define _SMT1STAT_RST_LENGTH                                0x1
#define _SMT1STAT_RST_MASK                                  0x20
#define _SMT1STAT_CPWUP_POSN                                0x6
#define _SMT1STAT_CPWUP_POSITION                            0x6
#define _SMT1STAT_CPWUP_SIZE                                0x1
#define _SMT1STAT_CPWUP_LENGTH                              0x1
#define _SMT1STAT_CPWUP_MASK                                0x40
#define _SMT1STAT_CPRUP_POSN                                0x7
#define _SMT1STAT_CPRUP_POSITION                            0x7
#define _SMT1STAT_CPRUP_SIZE                                0x1
#define _SMT1STAT_CPRUP_LENGTH                              0x1
#define _SMT1STAT_CPRUP_MASK                                0x80
#define _SMT1STAT_SMT1AS_POSN                               0x0
#define _SMT1STAT_SMT1AS_POSITION                           0x0
#define _SMT1STAT_SMT1AS_SIZE                               0x1
#define _SMT1STAT_SMT1AS_LENGTH                             0x1
#define _SMT1STAT_SMT1AS_MASK                               0x1
#define _SMT1STAT_SMT1WS_POSN                               0x1
#define _SMT1STAT_SMT1WS_POSITION                           0x1
#define _SMT1STAT_SMT1WS_SIZE                               0x1
#define _SMT1STAT_SMT1WS_LENGTH                             0x1
#define _SMT1STAT_SMT1WS_MASK                               0x2
#define _SMT1STAT_SMT1TS_POSN                               0x2
#define _SMT1STAT_SMT1TS_POSITION                           0x2
#define _SMT1STAT_SMT1TS_SIZE                               0x1
#define _SMT1STAT_SMT1TS_LENGTH                             0x1
#define _SMT1STAT_SMT1TS_MASK                               0x4
#define _SMT1STAT_SMT1RESET_POSN                            0x5
#define _SMT1STAT_SMT1RESET_POSITION                        0x5
#define _SMT1STAT_SMT1RESET_SIZE                            0x1
#define _SMT1STAT_SMT1RESET_LENGTH                          0x1
#define _SMT1STAT_SMT1RESET_MASK                            0x20
#define _SMT1STAT_SMT1CPWUP_POSN                            0x6
#define _SMT1STAT_SMT1CPWUP_POSITION                        0x6
#define _SMT1STAT_SMT1CPWUP_SIZE                            0x1
#define _SMT1STAT_SMT1CPWUP_LENGTH                          0x1
#define _SMT1STAT_SMT1CPWUP_MASK                            0x40
#define _SMT1STAT_SMT1CPRUP_POSN                            0x7
#define _SMT1STAT_SMT1CPRUP_POSITION                        0x7
#define _SMT1STAT_SMT1CPRUP_SIZE                            0x1
#define _SMT1STAT_SMT1CPRUP_LENGTH                          0x1
#define _SMT1STAT_SMT1CPRUP_MASK                            0x80

// Register: SMT1CLK
#define SMT1CLK SMT1CLK
extern volatile unsigned char           SMT1CLK             __at(0xD9B);
#ifndef _LIB_BUILD
asm("SMT1CLK equ 0D9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CSEL                   :8;
    };
    struct {
        unsigned CSEL0                  :1;
        unsigned CSEL1                  :1;
        unsigned CSEL2                  :1;
    };
    struct {
        unsigned SMT1CSEL               :8;
    };
    struct {
        unsigned SMT1CSEL0              :1;
        unsigned SMT1CSEL1              :1;
        unsigned SMT1CSEL2              :1;
    };
} SMT1CLKbits_t;
extern volatile SMT1CLKbits_t SMT1CLKbits __at(0xD9B);
// bitfield macros
#define _SMT1CLK_CSEL_POSN                                  0x0
#define _SMT1CLK_CSEL_POSITION                              0x0
#define _SMT1CLK_CSEL_SIZE                                  0x8
#define _SMT1CLK_CSEL_LENGTH                                0x8
#define _SMT1CLK_CSEL_MASK                                  0xFF
#define _SMT1CLK_CSEL0_POSN                                 0x0
#define _SMT1CLK_CSEL0_POSITION                             0x0
#define _SMT1CLK_CSEL0_SIZE                                 0x1
#define _SMT1CLK_CSEL0_LENGTH                               0x1
#define _SMT1CLK_CSEL0_MASK                                 0x1
#define _SMT1CLK_CSEL1_POSN                                 0x1
#define _SMT1CLK_CSEL1_POSITION                             0x1
#define _SMT1CLK_CSEL1_SIZE                                 0x1
#define _SMT1CLK_CSEL1_LENGTH                               0x1
#define _SMT1CLK_CSEL1_MASK                                 0x2
#define _SMT1CLK_CSEL2_POSN                                 0x2
#define _SMT1CLK_CSEL2_POSITION                             0x2
#define _SMT1CLK_CSEL2_SIZE                                 0x1
#define _SMT1CLK_CSEL2_LENGTH                               0x1
#define _SMT1CLK_CSEL2_MASK                                 0x4
#define _SMT1CLK_SMT1CSEL_POSN                              0x0
#define _SMT1CLK_SMT1CSEL_POSITION                          0x0
#define _SMT1CLK_SMT1CSEL_SIZE                              0x8
#define _SMT1CLK_SMT1CSEL_LENGTH                            0x8
#define _SMT1CLK_SMT1CSEL_MASK                              0xFF
#define _SMT1CLK_SMT1CSEL0_POSN                             0x0
#define _SMT1CLK_SMT1CSEL0_POSITION                         0x0
#define _SMT1CLK_SMT1CSEL0_SIZE                             0x1
#define _SMT1CLK_SMT1CSEL0_LENGTH                           0x1
#define _SMT1CLK_SMT1CSEL0_MASK                             0x1
#define _SMT1CLK_SMT1CSEL1_POSN                             0x1
#define _SMT1CLK_SMT1CSEL1_POSITION                         0x1
#define _SMT1CLK_SMT1CSEL1_SIZE                             0x1
#define _SMT1CLK_SMT1CSEL1_LENGTH                           0x1
#define _SMT1CLK_SMT1CSEL1_MASK                             0x2
#define _SMT1CLK_SMT1CSEL2_POSN                             0x2
#define _SMT1CLK_SMT1CSEL2_POSITION                         0x2
#define _SMT1CLK_SMT1CSEL2_SIZE                             0x1
#define _SMT1CLK_SMT1CSEL2_LENGTH                           0x1
#define _SMT1CLK_SMT1CSEL2_MASK                             0x4

// Register: SMT1SIG
#define SMT1SIG SMT1SIG
extern volatile unsigned char           SMT1SIG             __at(0xD9C);
#ifndef _LIB_BUILD
asm("SMT1SIG equ 0D9Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSEL                   :8;
    };
    struct {
        unsigned SSEL0                  :1;
        unsigned SSEL1                  :1;
        unsigned SSEL2                  :1;
    };
    struct {
        unsigned SMT1SSEL               :8;
    };
    struct {
        unsigned SMT1SSEL0              :1;
        unsigned SMT1SSEL1              :1;
        unsigned SMT1SSEL2              :1;
    };
} SMT1SIGbits_t;
extern volatile SMT1SIGbits_t SMT1SIGbits __at(0xD9C);
// bitfield macros
#define _SMT1SIG_SSEL_POSN                                  0x0
#define _SMT1SIG_SSEL_POSITION                              0x0
#define _SMT1SIG_SSEL_SIZE                                  0x8
#define _SMT1SIG_SSEL_LENGTH                                0x8
#define _SMT1SIG_SSEL_MASK                                  0xFF
#define _SMT1SIG_SSEL0_POSN                                 0x0
#define _SMT1SIG_SSEL0_POSITION                             0x0
#define _SMT1SIG_SSEL0_SIZE                                 0x1
#define _SMT1SIG_SSEL0_LENGTH                               0x1
#define _SMT1SIG_SSEL0_MASK                                 0x1
#define _SMT1SIG_SSEL1_POSN                                 0x1
#define _SMT1SIG_SSEL1_POSITION                             0x1
#define _SMT1SIG_SSEL1_SIZE                                 0x1
#define _SMT1SIG_SSEL1_LENGTH                               0x1
#define _SMT1SIG_SSEL1_MASK                                 0x2
#define _SMT1SIG_SSEL2_POSN                                 0x2
#define _SMT1SIG_SSEL2_POSITION                             0x2
#define _SMT1SIG_SSEL2_SIZE                                 0x1
#define _SMT1SIG_SSEL2_LENGTH                               0x1
#define _SMT1SIG_SSEL2_MASK                                 0x4
#define _SMT1SIG_SMT1SSEL_POSN                              0x0
#define _SMT1SIG_SMT1SSEL_POSITION                          0x0
#define _SMT1SIG_SMT1SSEL_SIZE                              0x8
#define _SMT1SIG_SMT1SSEL_LENGTH                            0x8
#define _SMT1SIG_SMT1SSEL_MASK                              0xFF
#define _SMT1SIG_SMT1SSEL0_POSN                             0x0
#define _SMT1SIG_SMT1SSEL0_POSITION                         0x0
#define _SMT1SIG_SMT1SSEL0_SIZE                             0x1
#define _SMT1SIG_SMT1SSEL0_LENGTH                           0x1
#define _SMT1SIG_SMT1SSEL0_MASK                             0x1
#define _SMT1SIG_SMT1SSEL1_POSN                             0x1
#define _SMT1SIG_SMT1SSEL1_POSITION                         0x1
#define _SMT1SIG_SMT1SSEL1_SIZE                             0x1
#define _SMT1SIG_SMT1SSEL1_LENGTH                           0x1
#define _SMT1SIG_SMT1SSEL1_MASK                             0x2
#define _SMT1SIG_SMT1SSEL2_POSN                             0x2
#define _SMT1SIG_SMT1SSEL2_POSITION                         0x2
#define _SMT1SIG_SMT1SSEL2_SIZE                             0x1
#define _SMT1SIG_SMT1SSEL2_LENGTH                           0x1
#define _SMT1SIG_SMT1SSEL2_MASK                             0x4

// Register: SMT1WIN
#define SMT1WIN SMT1WIN
extern volatile unsigned char           SMT1WIN             __at(0xD9D);
#ifndef _LIB_BUILD
asm("SMT1WIN equ 0D9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WSEL                   :8;
    };
    struct {
        unsigned WSEL0                  :1;
        unsigned WSEL1                  :1;
        unsigned WSEL2                  :1;
        unsigned WSEL3                  :1;
    };
    struct {
        unsigned SMT1WSEL               :8;
    };
    struct {
        unsigned SMT1WSEL0              :1;
        unsigned SMT1WSEL1              :1;
        unsigned SMT1WSEL2              :1;
        unsigned SMT1WSEL3              :1;
    };
} SMT1WINbits_t;
extern volatile SMT1WINbits_t SMT1WINbits __at(0xD9D);
// bitfield macros
#define _SMT1WIN_WSEL_POSN                                  0x0
#define _SMT1WIN_WSEL_POSITION                              0x0
#define _SMT1WIN_WSEL_SIZE                                  0x8
#define _SMT1WIN_WSEL_LENGTH                                0x8
#define _SMT1WIN_WSEL_MASK                                  0xFF
#define _SMT1WIN_WSEL0_POSN                                 0x0
#define _SMT1WIN_WSEL0_POSITION                             0x0
#define _SMT1WIN_WSEL0_SIZE                                 0x1
#define _SMT1WIN_WSEL0_LENGTH                               0x1
#define _SMT1WIN_WSEL0_MASK                                 0x1
#define _SMT1WIN_WSEL1_POSN                                 0x1
#define _SMT1WIN_WSEL1_POSITION                             0x1
#define _SMT1WIN_WSEL1_SIZE                                 0x1
#define _SMT1WIN_WSEL1_LENGTH                               0x1
#define _SMT1WIN_WSEL1_MASK                                 0x2
#define _SMT1WIN_WSEL2_POSN                                 0x2
#define _SMT1WIN_WSEL2_POSITION                             0x2
#define _SMT1WIN_WSEL2_SIZE                                 0x1
#define _SMT1WIN_WSEL2_LENGTH                               0x1
#define _SMT1WIN_WSEL2_MASK                                 0x4
#define _SMT1WIN_WSEL3_POSN                                 0x3
#define _SMT1WIN_WSEL3_POSITION                             0x3
#define _SMT1WIN_WSEL3_SIZE                                 0x1
#define _SMT1WIN_WSEL3_LENGTH                               0x1
#define _SMT1WIN_WSEL3_MASK                                 0x8
#define _SMT1WIN_SMT1WSEL_POSN                              0x0
#define _SMT1WIN_SMT1WSEL_POSITION                          0x0
#define _SMT1WIN_SMT1WSEL_SIZE                              0x8
#define _SMT1WIN_SMT1WSEL_LENGTH                            0x8
#define _SMT1WIN_SMT1WSEL_MASK                              0xFF
#define _SMT1WIN_SMT1WSEL0_POSN                             0x0
#define _SMT1WIN_SMT1WSEL0_POSITION                         0x0
#define _SMT1WIN_SMT1WSEL0_SIZE                             0x1
#define _SMT1WIN_SMT1WSEL0_LENGTH                           0x1
#define _SMT1WIN_SMT1WSEL0_MASK                             0x1
#define _SMT1WIN_SMT1WSEL1_POSN                             0x1
#define _SMT1WIN_SMT1WSEL1_POSITION                         0x1
#define _SMT1WIN_SMT1WSEL1_SIZE                             0x1
#define _SMT1WIN_SMT1WSEL1_LENGTH                           0x1
#define _SMT1WIN_SMT1WSEL1_MASK                             0x2
#define _SMT1WIN_SMT1WSEL2_POSN                             0x2
#define _SMT1WIN_SMT1WSEL2_POSITION                         0x2
#define _SMT1WIN_SMT1WSEL2_SIZE                             0x1
#define _SMT1WIN_SMT1WSEL2_LENGTH                           0x1
#define _SMT1WIN_SMT1WSEL2_MASK                             0x4
#define _SMT1WIN_SMT1WSEL3_POSN                             0x3
#define _SMT1WIN_SMT1WSEL3_POSITION                         0x3
#define _SMT1WIN_SMT1WSEL3_SIZE                             0x1
#define _SMT1WIN_SMT1WSEL3_LENGTH                           0x1
#define _SMT1WIN_SMT1WSEL3_MASK                             0x8

// Register: SMT2TMR
#define SMT2TMR SMT2TMR
#ifndef __CCI__
extern volatile __uint24                SMT2TMR             __at(0xD9E);
#endif
#ifndef _LIB_BUILD
asm("SMT2TMR equ 0D9Eh");
#endif

// Register: SMT2TMRL
#define SMT2TMRL SMT2TMRL
extern volatile unsigned char           SMT2TMRL            __at(0xD9E);
#ifndef _LIB_BUILD
asm("SMT2TMRL equ 0D9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2TMR                :8;
    };
    struct {
        unsigned SMT2TMR0               :1;
        unsigned SMT2TMR1               :1;
        unsigned SMT2TMR2               :1;
        unsigned SMT2TMR3               :1;
        unsigned SMT2TMR4               :1;
        unsigned SMT2TMR5               :1;
        unsigned SMT2TMR6               :1;
        unsigned SMT2TMR7               :1;
    };
} SMT2TMRLbits_t;
extern volatile SMT2TMRLbits_t SMT2TMRLbits __at(0xD9E);
// bitfield macros
#define _SMT2TMRL_SMT2TMR_POSN                              0x0
#define _SMT2TMRL_SMT2TMR_POSITION                          0x0
#define _SMT2TMRL_SMT2TMR_SIZE                              0x8
#define _SMT2TMRL_SMT2TMR_LENGTH                            0x8
#define _SMT2TMRL_SMT2TMR_MASK                              0xFF
#define _SMT2TMRL_SMT2TMR0_POSN                             0x0
#define _SMT2TMRL_SMT2TMR0_POSITION                         0x0
#define _SMT2TMRL_SMT2TMR0_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR0_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR0_MASK                             0x1
#define _SMT2TMRL_SMT2TMR1_POSN                             0x1
#define _SMT2TMRL_SMT2TMR1_POSITION                         0x1
#define _SMT2TMRL_SMT2TMR1_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR1_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR1_MASK                             0x2
#define _SMT2TMRL_SMT2TMR2_POSN                             0x2
#define _SMT2TMRL_SMT2TMR2_POSITION                         0x2
#define _SMT2TMRL_SMT2TMR2_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR2_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR2_MASK                             0x4
#define _SMT2TMRL_SMT2TMR3_POSN                             0x3
#define _SMT2TMRL_SMT2TMR3_POSITION                         0x3
#define _SMT2TMRL_SMT2TMR3_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR3_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR3_MASK                             0x8
#define _SMT2TMRL_SMT2TMR4_POSN                             0x4
#define _SMT2TMRL_SMT2TMR4_POSITION                         0x4
#define _SMT2TMRL_SMT2TMR4_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR4_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR4_MASK                             0x10
#define _SMT2TMRL_SMT2TMR5_POSN                             0x5
#define _SMT2TMRL_SMT2TMR5_POSITION                         0x5
#define _SMT2TMRL_SMT2TMR5_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR5_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR5_MASK                             0x20
#define _SMT2TMRL_SMT2TMR6_POSN                             0x6
#define _SMT2TMRL_SMT2TMR6_POSITION                         0x6
#define _SMT2TMRL_SMT2TMR6_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR6_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR6_MASK                             0x40
#define _SMT2TMRL_SMT2TMR7_POSN                             0x7
#define _SMT2TMRL_SMT2TMR7_POSITION                         0x7
#define _SMT2TMRL_SMT2TMR7_SIZE                             0x1
#define _SMT2TMRL_SMT2TMR7_LENGTH                           0x1
#define _SMT2TMRL_SMT2TMR7_MASK                             0x80

// Register: SMT2TMRH
#define SMT2TMRH SMT2TMRH
extern volatile unsigned char           SMT2TMRH            __at(0xD9F);
#ifndef _LIB_BUILD
asm("SMT2TMRH equ 0D9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2TMR                :8;
    };
    struct {
        unsigned SMT2TMR8               :1;
        unsigned SMT2TMR9               :1;
        unsigned SMT2TMR10              :1;
        unsigned SMT2TMR11              :1;
        unsigned SMT2TMR12              :1;
        unsigned SMT2TMR13              :1;
        unsigned SMT2TMR14              :1;
        unsigned SMT2TMR15              :1;
    };
} SMT2TMRHbits_t;
extern volatile SMT2TMRHbits_t SMT2TMRHbits __at(0xD9F);
// bitfield macros
#define _SMT2TMRH_SMT2TMR_POSN                              0x0
#define _SMT2TMRH_SMT2TMR_POSITION                          0x0
#define _SMT2TMRH_SMT2TMR_SIZE                              0x8
#define _SMT2TMRH_SMT2TMR_LENGTH                            0x8
#define _SMT2TMRH_SMT2TMR_MASK                              0xFF
#define _SMT2TMRH_SMT2TMR8_POSN                             0x0
#define _SMT2TMRH_SMT2TMR8_POSITION                         0x0
#define _SMT2TMRH_SMT2TMR8_SIZE                             0x1
#define _SMT2TMRH_SMT2TMR8_LENGTH                           0x1
#define _SMT2TMRH_SMT2TMR8_MASK                             0x1
#define _SMT2TMRH_SMT2TMR9_POSN                             0x1
#define _SMT2TMRH_SMT2TMR9_POSITION                         0x1
#define _SMT2TMRH_SMT2TMR9_SIZE                             0x1
#define _SMT2TMRH_SMT2TMR9_LENGTH                           0x1
#define _SMT2TMRH_SMT2TMR9_MASK                             0x2
#define _SMT2TMRH_SMT2TMR10_POSN                            0x2
#define _SMT2TMRH_SMT2TMR10_POSITION                        0x2
#define _SMT2TMRH_SMT2TMR10_SIZE                            0x1
#define _SMT2TMRH_SMT2TMR10_LENGTH                          0x1
#define _SMT2TMRH_SMT2TMR10_MASK                            0x4
#define _SMT2TMRH_SMT2TMR11_POSN                            0x3
#define _SMT2TMRH_SMT2TMR11_POSITION                        0x3
#define _SMT2TMRH_SMT2TMR11_SIZE                            0x1
#define _SMT2TMRH_SMT2TMR11_LENGTH                          0x1
#define _SMT2TMRH_SMT2TMR11_MASK                            0x8
#define _SMT2TMRH_SMT2TMR12_POSN                            0x4
#define _SMT2TMRH_SMT2TMR12_POSITION                        0x4
#define _SMT2TMRH_SMT2TMR12_SIZE                            0x1
#define _SMT2TMRH_SMT2TMR12_LENGTH                          0x1
#define _SMT2TMRH_SMT2TMR12_MASK                            0x10
#define _SMT2TMRH_SMT2TMR13_POSN                            0x5
#define _SMT2TMRH_SMT2TMR13_POSITION                        0x5
#define _SMT2TMRH_SMT2TMR13_SIZE                            0x1
#define _SMT2TMRH_SMT2TMR13_LENGTH                          0x1
#define _SMT2TMRH_SMT2TMR13_MASK                            0x20
#define _SMT2TMRH_SMT2TMR14_POSN                            0x6
#define _SMT2TMRH_SMT2TMR14_POSITION                        0x6
#define _SMT2TMRH_SMT2TMR14_SIZE                            0x1
#define _SMT2TMRH_SMT2TMR14_LENGTH                          0x1
#define _SMT2TMRH_SMT2TMR14_MASK                            0x40
#define _SMT2TMRH_SMT2TMR15_POSN                            0x7
#define _SMT2TMRH_SMT2TMR15_POSITION                        0x7
#define _SMT2TMRH_SMT2TMR15_SIZE                            0x1
#define _SMT2TMRH_SMT2TMR15_LENGTH                          0x1
#define _SMT2TMRH_SMT2TMR15_MASK                            0x80

// Register: SMT2TMRU
#define SMT2TMRU SMT2TMRU
extern volatile unsigned char           SMT2TMRU            __at(0xDA0);
#ifndef _LIB_BUILD
asm("SMT2TMRU equ 0DA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2TMR                :8;
    };
    struct {
        unsigned SMT2TMR16              :1;
        unsigned SMT2TMR17              :1;
        unsigned SMT2TMR18              :1;
        unsigned SMT2TMR19              :1;
        unsigned SMT2TMR20              :1;
        unsigned SMT2TMR21              :1;
        unsigned SMT2TMR22              :1;
        unsigned SMT2TMR23              :1;
    };
} SMT2TMRUbits_t;
extern volatile SMT2TMRUbits_t SMT2TMRUbits __at(0xDA0);
// bitfield macros
#define _SMT2TMRU_SMT2TMR_POSN                              0x0
#define _SMT2TMRU_SMT2TMR_POSITION                          0x0
#define _SMT2TMRU_SMT2TMR_SIZE                              0x8
#define _SMT2TMRU_SMT2TMR_LENGTH                            0x8
#define _SMT2TMRU_SMT2TMR_MASK                              0xFF
#define _SMT2TMRU_SMT2TMR16_POSN                            0x0
#define _SMT2TMRU_SMT2TMR16_POSITION                        0x0
#define _SMT2TMRU_SMT2TMR16_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR16_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR16_MASK                            0x1
#define _SMT2TMRU_SMT2TMR17_POSN                            0x1
#define _SMT2TMRU_SMT2TMR17_POSITION                        0x1
#define _SMT2TMRU_SMT2TMR17_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR17_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR17_MASK                            0x2
#define _SMT2TMRU_SMT2TMR18_POSN                            0x2
#define _SMT2TMRU_SMT2TMR18_POSITION                        0x2
#define _SMT2TMRU_SMT2TMR18_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR18_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR18_MASK                            0x4
#define _SMT2TMRU_SMT2TMR19_POSN                            0x3
#define _SMT2TMRU_SMT2TMR19_POSITION                        0x3
#define _SMT2TMRU_SMT2TMR19_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR19_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR19_MASK                            0x8
#define _SMT2TMRU_SMT2TMR20_POSN                            0x4
#define _SMT2TMRU_SMT2TMR20_POSITION                        0x4
#define _SMT2TMRU_SMT2TMR20_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR20_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR20_MASK                            0x10
#define _SMT2TMRU_SMT2TMR21_POSN                            0x5
#define _SMT2TMRU_SMT2TMR21_POSITION                        0x5
#define _SMT2TMRU_SMT2TMR21_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR21_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR21_MASK                            0x20
#define _SMT2TMRU_SMT2TMR22_POSN                            0x6
#define _SMT2TMRU_SMT2TMR22_POSITION                        0x6
#define _SMT2TMRU_SMT2TMR22_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR22_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR22_MASK                            0x40
#define _SMT2TMRU_SMT2TMR23_POSN                            0x7
#define _SMT2TMRU_SMT2TMR23_POSITION                        0x7
#define _SMT2TMRU_SMT2TMR23_SIZE                            0x1
#define _SMT2TMRU_SMT2TMR23_LENGTH                          0x1
#define _SMT2TMRU_SMT2TMR23_MASK                            0x80

// Register: SMT2CPR
#define SMT2CPR SMT2CPR
#ifndef __CCI__
extern volatile __uint24                SMT2CPR             __at(0xDA1);
#endif
#ifndef _LIB_BUILD
asm("SMT2CPR equ 0DA1h");
#endif

// Register: SMT2CPRL
#define SMT2CPRL SMT2CPRL
extern volatile unsigned char           SMT2CPRL            __at(0xDA1);
#ifndef _LIB_BUILD
asm("SMT2CPRL equ 0DA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2CPR                :8;
    };
    struct {
        unsigned SMT2CPR0               :1;
        unsigned SMT2CPR1               :1;
        unsigned SMT2CPR2               :1;
        unsigned SMT2CPR3               :1;
        unsigned SMT2CPR4               :1;
        unsigned SMT2CPR5               :1;
        unsigned SMT2CPR6               :1;
        unsigned SMT2CPR7               :1;
    };
} SMT2CPRLbits_t;
extern volatile SMT2CPRLbits_t SMT2CPRLbits __at(0xDA1);
// bitfield macros
#define _SMT2CPRL_SMT2CPR_POSN                              0x0
#define _SMT2CPRL_SMT2CPR_POSITION                          0x0
#define _SMT2CPRL_SMT2CPR_SIZE                              0x8
#define _SMT2CPRL_SMT2CPR_LENGTH                            0x8
#define _SMT2CPRL_SMT2CPR_MASK                              0xFF
#define _SMT2CPRL_SMT2CPR0_POSN                             0x0
#define _SMT2CPRL_SMT2CPR0_POSITION                         0x0
#define _SMT2CPRL_SMT2CPR0_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR0_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR0_MASK                             0x1
#define _SMT2CPRL_SMT2CPR1_POSN                             0x1
#define _SMT2CPRL_SMT2CPR1_POSITION                         0x1
#define _SMT2CPRL_SMT2CPR1_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR1_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR1_MASK                             0x2
#define _SMT2CPRL_SMT2CPR2_POSN                             0x2
#define _SMT2CPRL_SMT2CPR2_POSITION                         0x2
#define _SMT2CPRL_SMT2CPR2_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR2_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR2_MASK                             0x4
#define _SMT2CPRL_SMT2CPR3_POSN                             0x3
#define _SMT2CPRL_SMT2CPR3_POSITION                         0x3
#define _SMT2CPRL_SMT2CPR3_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR3_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR3_MASK                             0x8
#define _SMT2CPRL_SMT2CPR4_POSN                             0x4
#define _SMT2CPRL_SMT2CPR4_POSITION                         0x4
#define _SMT2CPRL_SMT2CPR4_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR4_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR4_MASK                             0x10
#define _SMT2CPRL_SMT2CPR5_POSN                             0x5
#define _SMT2CPRL_SMT2CPR5_POSITION                         0x5
#define _SMT2CPRL_SMT2CPR5_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR5_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR5_MASK                             0x20
#define _SMT2CPRL_SMT2CPR6_POSN                             0x6
#define _SMT2CPRL_SMT2CPR6_POSITION                         0x6
#define _SMT2CPRL_SMT2CPR6_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR6_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR6_MASK                             0x40
#define _SMT2CPRL_SMT2CPR7_POSN                             0x7
#define _SMT2CPRL_SMT2CPR7_POSITION                         0x7
#define _SMT2CPRL_SMT2CPR7_SIZE                             0x1
#define _SMT2CPRL_SMT2CPR7_LENGTH                           0x1
#define _SMT2CPRL_SMT2CPR7_MASK                             0x80

// Register: SMT2CPRH
#define SMT2CPRH SMT2CPRH
extern volatile unsigned char           SMT2CPRH            __at(0xDA2);
#ifndef _LIB_BUILD
asm("SMT2CPRH equ 0DA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2CPR                :8;
    };
    struct {
        unsigned SMT2CPR8               :1;
        unsigned SMT2CPR9               :1;
        unsigned SMT2CPR10              :1;
        unsigned SMT2CPR11              :1;
        unsigned SMT2CPR12              :1;
        unsigned SMT2CPR13              :1;
        unsigned SMT2CPR14              :1;
        unsigned SMT2CPR15              :1;
    };
} SMT2CPRHbits_t;
extern volatile SMT2CPRHbits_t SMT2CPRHbits __at(0xDA2);
// bitfield macros
#define _SMT2CPRH_SMT2CPR_POSN                              0x0
#define _SMT2CPRH_SMT2CPR_POSITION                          0x0
#define _SMT2CPRH_SMT2CPR_SIZE                              0x8
#define _SMT2CPRH_SMT2CPR_LENGTH                            0x8
#define _SMT2CPRH_SMT2CPR_MASK                              0xFF
#define _SMT2CPRH_SMT2CPR8_POSN                             0x0
#define _SMT2CPRH_SMT2CPR8_POSITION                         0x0
#define _SMT2CPRH_SMT2CPR8_SIZE                             0x1
#define _SMT2CPRH_SMT2CPR8_LENGTH                           0x1
#define _SMT2CPRH_SMT2CPR8_MASK                             0x1
#define _SMT2CPRH_SMT2CPR9_POSN                             0x1
#define _SMT2CPRH_SMT2CPR9_POSITION                         0x1
#define _SMT2CPRH_SMT2CPR9_SIZE                             0x1
#define _SMT2CPRH_SMT2CPR9_LENGTH                           0x1
#define _SMT2CPRH_SMT2CPR9_MASK                             0x2
#define _SMT2CPRH_SMT2CPR10_POSN                            0x2
#define _SMT2CPRH_SMT2CPR10_POSITION                        0x2
#define _SMT2CPRH_SMT2CPR10_SIZE                            0x1
#define _SMT2CPRH_SMT2CPR10_LENGTH                          0x1
#define _SMT2CPRH_SMT2CPR10_MASK                            0x4
#define _SMT2CPRH_SMT2CPR11_POSN                            0x3
#define _SMT2CPRH_SMT2CPR11_POSITION                        0x3
#define _SMT2CPRH_SMT2CPR11_SIZE                            0x1
#define _SMT2CPRH_SMT2CPR11_LENGTH                          0x1
#define _SMT2CPRH_SMT2CPR11_MASK                            0x8
#define _SMT2CPRH_SMT2CPR12_POSN                            0x4
#define _SMT2CPRH_SMT2CPR12_POSITION                        0x4
#define _SMT2CPRH_SMT2CPR12_SIZE                            0x1
#define _SMT2CPRH_SMT2CPR12_LENGTH                          0x1
#define _SMT2CPRH_SMT2CPR12_MASK                            0x10
#define _SMT2CPRH_SMT2CPR13_POSN                            0x5
#define _SMT2CPRH_SMT2CPR13_POSITION                        0x5
#define _SMT2CPRH_SMT2CPR13_SIZE                            0x1
#define _SMT2CPRH_SMT2CPR13_LENGTH                          0x1
#define _SMT2CPRH_SMT2CPR13_MASK                            0x20
#define _SMT2CPRH_SMT2CPR14_POSN                            0x6
#define _SMT2CPRH_SMT2CPR14_POSITION                        0x6
#define _SMT2CPRH_SMT2CPR14_SIZE                            0x1
#define _SMT2CPRH_SMT2CPR14_LENGTH                          0x1
#define _SMT2CPRH_SMT2CPR14_MASK                            0x40
#define _SMT2CPRH_SMT2CPR15_POSN                            0x7
#define _SMT2CPRH_SMT2CPR15_POSITION                        0x7
#define _SMT2CPRH_SMT2CPR15_SIZE                            0x1
#define _SMT2CPRH_SMT2CPR15_LENGTH                          0x1
#define _SMT2CPRH_SMT2CPR15_MASK                            0x80

// Register: SMT2CPRU
#define SMT2CPRU SMT2CPRU
extern volatile unsigned char           SMT2CPRU            __at(0xDA3);
#ifndef _LIB_BUILD
asm("SMT2CPRU equ 0DA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2CPR                :8;
    };
    struct {
        unsigned SMT2CPR16              :1;
        unsigned SMT2CPR17              :1;
        unsigned SMT2CPR18              :1;
        unsigned SMT2CPR19              :1;
        unsigned SMT2CPR20              :1;
        unsigned SMT2CPR21              :1;
        unsigned SMT2CPR22              :1;
        unsigned SMT2CPR23              :1;
    };
} SMT2CPRUbits_t;
extern volatile SMT2CPRUbits_t SMT2CPRUbits __at(0xDA3);
// bitfield macros
#define _SMT2CPRU_SMT2CPR_POSN                              0x0
#define _SMT2CPRU_SMT2CPR_POSITION                          0x0
#define _SMT2CPRU_SMT2CPR_SIZE                              0x8
#define _SMT2CPRU_SMT2CPR_LENGTH                            0x8
#define _SMT2CPRU_SMT2CPR_MASK                              0xFF
#define _SMT2CPRU_SMT2CPR16_POSN                            0x0
#define _SMT2CPRU_SMT2CPR16_POSITION                        0x0
#define _SMT2CPRU_SMT2CPR16_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR16_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR16_MASK                            0x1
#define _SMT2CPRU_SMT2CPR17_POSN                            0x1
#define _SMT2CPRU_SMT2CPR17_POSITION                        0x1
#define _SMT2CPRU_SMT2CPR17_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR17_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR17_MASK                            0x2
#define _SMT2CPRU_SMT2CPR18_POSN                            0x2
#define _SMT2CPRU_SMT2CPR18_POSITION                        0x2
#define _SMT2CPRU_SMT2CPR18_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR18_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR18_MASK                            0x4
#define _SMT2CPRU_SMT2CPR19_POSN                            0x3
#define _SMT2CPRU_SMT2CPR19_POSITION                        0x3
#define _SMT2CPRU_SMT2CPR19_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR19_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR19_MASK                            0x8
#define _SMT2CPRU_SMT2CPR20_POSN                            0x4
#define _SMT2CPRU_SMT2CPR20_POSITION                        0x4
#define _SMT2CPRU_SMT2CPR20_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR20_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR20_MASK                            0x10
#define _SMT2CPRU_SMT2CPR21_POSN                            0x5
#define _SMT2CPRU_SMT2CPR21_POSITION                        0x5
#define _SMT2CPRU_SMT2CPR21_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR21_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR21_MASK                            0x20
#define _SMT2CPRU_SMT2CPR22_POSN                            0x6
#define _SMT2CPRU_SMT2CPR22_POSITION                        0x6
#define _SMT2CPRU_SMT2CPR22_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR22_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR22_MASK                            0x40
#define _SMT2CPRU_SMT2CPR23_POSN                            0x7
#define _SMT2CPRU_SMT2CPR23_POSITION                        0x7
#define _SMT2CPRU_SMT2CPR23_SIZE                            0x1
#define _SMT2CPRU_SMT2CPR23_LENGTH                          0x1
#define _SMT2CPRU_SMT2CPR23_MASK                            0x80

// Register: SMT2CPW
#define SMT2CPW SMT2CPW
#ifndef __CCI__
extern volatile __uint24                SMT2CPW             __at(0xDA4);
#endif
#ifndef _LIB_BUILD
asm("SMT2CPW equ 0DA4h");
#endif

// Register: SMT2CPWL
#define SMT2CPWL SMT2CPWL
extern volatile unsigned char           SMT2CPWL            __at(0xDA4);
#ifndef _LIB_BUILD
asm("SMT2CPWL equ 0DA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2CPW                :8;
    };
    struct {
        unsigned SMT2CPW0               :1;
        unsigned SMT2CPW1               :1;
        unsigned SMT2CPW2               :1;
        unsigned SMT2CPW3               :1;
        unsigned SMT2CPW4               :1;
        unsigned SMT2CPW5               :1;
        unsigned SMT2CPW6               :1;
        unsigned SMT2CPW7               :1;
    };
} SMT2CPWLbits_t;
extern volatile SMT2CPWLbits_t SMT2CPWLbits __at(0xDA4);
// bitfield macros
#define _SMT2CPWL_SMT2CPW_POSN                              0x0
#define _SMT2CPWL_SMT2CPW_POSITION                          0x0
#define _SMT2CPWL_SMT2CPW_SIZE                              0x8
#define _SMT2CPWL_SMT2CPW_LENGTH                            0x8
#define _SMT2CPWL_SMT2CPW_MASK                              0xFF
#define _SMT2CPWL_SMT2CPW0_POSN                             0x0
#define _SMT2CPWL_SMT2CPW0_POSITION                         0x0
#define _SMT2CPWL_SMT2CPW0_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW0_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW0_MASK                             0x1
#define _SMT2CPWL_SMT2CPW1_POSN                             0x1
#define _SMT2CPWL_SMT2CPW1_POSITION                         0x1
#define _SMT2CPWL_SMT2CPW1_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW1_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW1_MASK                             0x2
#define _SMT2CPWL_SMT2CPW2_POSN                             0x2
#define _SMT2CPWL_SMT2CPW2_POSITION                         0x2
#define _SMT2CPWL_SMT2CPW2_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW2_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW2_MASK                             0x4
#define _SMT2CPWL_SMT2CPW3_POSN                             0x3
#define _SMT2CPWL_SMT2CPW3_POSITION                         0x3
#define _SMT2CPWL_SMT2CPW3_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW3_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW3_MASK                             0x8
#define _SMT2CPWL_SMT2CPW4_POSN                             0x4
#define _SMT2CPWL_SMT2CPW4_POSITION                         0x4
#define _SMT2CPWL_SMT2CPW4_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW4_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW4_MASK                             0x10
#define _SMT2CPWL_SMT2CPW5_POSN                             0x5
#define _SMT2CPWL_SMT2CPW5_POSITION                         0x5
#define _SMT2CPWL_SMT2CPW5_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW5_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW5_MASK                             0x20
#define _SMT2CPWL_SMT2CPW6_POSN                             0x6
#define _SMT2CPWL_SMT2CPW6_POSITION                         0x6
#define _SMT2CPWL_SMT2CPW6_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW6_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW6_MASK                             0x40
#define _SMT2CPWL_SMT2CPW7_POSN                             0x7
#define _SMT2CPWL_SMT2CPW7_POSITION                         0x7
#define _SMT2CPWL_SMT2CPW7_SIZE                             0x1
#define _SMT2CPWL_SMT2CPW7_LENGTH                           0x1
#define _SMT2CPWL_SMT2CPW7_MASK                             0x80

// Register: SMT2CPWH
#define SMT2CPWH SMT2CPWH
extern volatile unsigned char           SMT2CPWH            __at(0xDA5);
#ifndef _LIB_BUILD
asm("SMT2CPWH equ 0DA5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2CPW                :8;
    };
    struct {
        unsigned SMT2CPW8               :1;
        unsigned SMT2CPW9               :1;
        unsigned SMT2CPW10              :1;
        unsigned SMT2CPW11              :1;
        unsigned SMT2CPW12              :1;
        unsigned SMT2CPW13              :1;
        unsigned SMT2CPW14              :1;
        unsigned SMT2CPW15              :1;
    };
} SMT2CPWHbits_t;
extern volatile SMT2CPWHbits_t SMT2CPWHbits __at(0xDA5);
// bitfield macros
#define _SMT2CPWH_SMT2CPW_POSN                              0x0
#define _SMT2CPWH_SMT2CPW_POSITION                          0x0
#define _SMT2CPWH_SMT2CPW_SIZE                              0x8
#define _SMT2CPWH_SMT2CPW_LENGTH                            0x8
#define _SMT2CPWH_SMT2CPW_MASK                              0xFF
#define _SMT2CPWH_SMT2CPW8_POSN                             0x0
#define _SMT2CPWH_SMT2CPW8_POSITION                         0x0
#define _SMT2CPWH_SMT2CPW8_SIZE                             0x1
#define _SMT2CPWH_SMT2CPW8_LENGTH                           0x1
#define _SMT2CPWH_SMT2CPW8_MASK                             0x1
#define _SMT2CPWH_SMT2CPW9_POSN                             0x1
#define _SMT2CPWH_SMT2CPW9_POSITION                         0x1
#define _SMT2CPWH_SMT2CPW9_SIZE                             0x1
#define _SMT2CPWH_SMT2CPW9_LENGTH                           0x1
#define _SMT2CPWH_SMT2CPW9_MASK                             0x2
#define _SMT2CPWH_SMT2CPW10_POSN                            0x2
#define _SMT2CPWH_SMT2CPW10_POSITION                        0x2
#define _SMT2CPWH_SMT2CPW10_SIZE                            0x1
#define _SMT2CPWH_SMT2CPW10_LENGTH                          0x1
#define _SMT2CPWH_SMT2CPW10_MASK                            0x4
#define _SMT2CPWH_SMT2CPW11_POSN                            0x3
#define _SMT2CPWH_SMT2CPW11_POSITION                        0x3
#define _SMT2CPWH_SMT2CPW11_SIZE                            0x1
#define _SMT2CPWH_SMT2CPW11_LENGTH                          0x1
#define _SMT2CPWH_SMT2CPW11_MASK                            0x8
#define _SMT2CPWH_SMT2CPW12_POSN                            0x4
#define _SMT2CPWH_SMT2CPW12_POSITION                        0x4
#define _SMT2CPWH_SMT2CPW12_SIZE                            0x1
#define _SMT2CPWH_SMT2CPW12_LENGTH                          0x1
#define _SMT2CPWH_SMT2CPW12_MASK                            0x10
#define _SMT2CPWH_SMT2CPW13_POSN                            0x5
#define _SMT2CPWH_SMT2CPW13_POSITION                        0x5
#define _SMT2CPWH_SMT2CPW13_SIZE                            0x1
#define _SMT2CPWH_SMT2CPW13_LENGTH                          0x1
#define _SMT2CPWH_SMT2CPW13_MASK                            0x20
#define _SMT2CPWH_SMT2CPW14_POSN                            0x6
#define _SMT2CPWH_SMT2CPW14_POSITION                        0x6
#define _SMT2CPWH_SMT2CPW14_SIZE                            0x1
#define _SMT2CPWH_SMT2CPW14_LENGTH                          0x1
#define _SMT2CPWH_SMT2CPW14_MASK                            0x40
#define _SMT2CPWH_SMT2CPW15_POSN                            0x7
#define _SMT2CPWH_SMT2CPW15_POSITION                        0x7
#define _SMT2CPWH_SMT2CPW15_SIZE                            0x1
#define _SMT2CPWH_SMT2CPW15_LENGTH                          0x1
#define _SMT2CPWH_SMT2CPW15_MASK                            0x80

// Register: SMT2CPWU
#define SMT2CPWU SMT2CPWU
extern volatile unsigned char           SMT2CPWU            __at(0xDA6);
#ifndef _LIB_BUILD
asm("SMT2CPWU equ 0DA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2CPW                :8;
    };
    struct {
        unsigned SMT2CPW16              :1;
        unsigned SMT2CPW17              :1;
        unsigned SMT2CPW18              :1;
        unsigned SMT2CPW19              :1;
        unsigned SMT2CPW20              :1;
        unsigned SMT2CPW21              :1;
        unsigned SMT2CPW22              :1;
        unsigned SMT2CPW23              :1;
    };
} SMT2CPWUbits_t;
extern volatile SMT2CPWUbits_t SMT2CPWUbits __at(0xDA6);
// bitfield macros
#define _SMT2CPWU_SMT2CPW_POSN                              0x0
#define _SMT2CPWU_SMT2CPW_POSITION                          0x0
#define _SMT2CPWU_SMT2CPW_SIZE                              0x8
#define _SMT2CPWU_SMT2CPW_LENGTH                            0x8
#define _SMT2CPWU_SMT2CPW_MASK                              0xFF
#define _SMT2CPWU_SMT2CPW16_POSN                            0x0
#define _SMT2CPWU_SMT2CPW16_POSITION                        0x0
#define _SMT2CPWU_SMT2CPW16_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW16_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW16_MASK                            0x1
#define _SMT2CPWU_SMT2CPW17_POSN                            0x1
#define _SMT2CPWU_SMT2CPW17_POSITION                        0x1
#define _SMT2CPWU_SMT2CPW17_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW17_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW17_MASK                            0x2
#define _SMT2CPWU_SMT2CPW18_POSN                            0x2
#define _SMT2CPWU_SMT2CPW18_POSITION                        0x2
#define _SMT2CPWU_SMT2CPW18_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW18_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW18_MASK                            0x4
#define _SMT2CPWU_SMT2CPW19_POSN                            0x3
#define _SMT2CPWU_SMT2CPW19_POSITION                        0x3
#define _SMT2CPWU_SMT2CPW19_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW19_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW19_MASK                            0x8
#define _SMT2CPWU_SMT2CPW20_POSN                            0x4
#define _SMT2CPWU_SMT2CPW20_POSITION                        0x4
#define _SMT2CPWU_SMT2CPW20_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW20_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW20_MASK                            0x10
#define _SMT2CPWU_SMT2CPW21_POSN                            0x5
#define _SMT2CPWU_SMT2CPW21_POSITION                        0x5
#define _SMT2CPWU_SMT2CPW21_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW21_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW21_MASK                            0x20
#define _SMT2CPWU_SMT2CPW22_POSN                            0x6
#define _SMT2CPWU_SMT2CPW22_POSITION                        0x6
#define _SMT2CPWU_SMT2CPW22_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW22_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW22_MASK                            0x40
#define _SMT2CPWU_SMT2CPW23_POSN                            0x7
#define _SMT2CPWU_SMT2CPW23_POSITION                        0x7
#define _SMT2CPWU_SMT2CPW23_SIZE                            0x1
#define _SMT2CPWU_SMT2CPW23_LENGTH                          0x1
#define _SMT2CPWU_SMT2CPW23_MASK                            0x80

// Register: SMT2PR
#define SMT2PR SMT2PR
#ifndef __CCI__
extern volatile __uint24                SMT2PR              __at(0xDA7);
#endif
#ifndef _LIB_BUILD
asm("SMT2PR equ 0DA7h");
#endif

// Register: SMT2PRL
#define SMT2PRL SMT2PRL
extern volatile unsigned char           SMT2PRL             __at(0xDA7);
#ifndef _LIB_BUILD
asm("SMT2PRL equ 0DA7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2PR                 :8;
    };
    struct {
        unsigned SMT2PR0                :1;
        unsigned SMT2PR1                :1;
        unsigned SMT2PR2                :1;
        unsigned SMT2PR3                :1;
        unsigned SMT2PR4                :1;
        unsigned SMT2PR5                :1;
        unsigned SMT2PR6                :1;
        unsigned SMT2PR7                :1;
    };
} SMT2PRLbits_t;
extern volatile SMT2PRLbits_t SMT2PRLbits __at(0xDA7);
// bitfield macros
#define _SMT2PRL_SMT2PR_POSN                                0x0
#define _SMT2PRL_SMT2PR_POSITION                            0x0
#define _SMT2PRL_SMT2PR_SIZE                                0x8
#define _SMT2PRL_SMT2PR_LENGTH                              0x8
#define _SMT2PRL_SMT2PR_MASK                                0xFF
#define _SMT2PRL_SMT2PR0_POSN                               0x0
#define _SMT2PRL_SMT2PR0_POSITION                           0x0
#define _SMT2PRL_SMT2PR0_SIZE                               0x1
#define _SMT2PRL_SMT2PR0_LENGTH                             0x1
#define _SMT2PRL_SMT2PR0_MASK                               0x1
#define _SMT2PRL_SMT2PR1_POSN                               0x1
#define _SMT2PRL_SMT2PR1_POSITION                           0x1
#define _SMT2PRL_SMT2PR1_SIZE                               0x1
#define _SMT2PRL_SMT2PR1_LENGTH                             0x1
#define _SMT2PRL_SMT2PR1_MASK                               0x2
#define _SMT2PRL_SMT2PR2_POSN                               0x2
#define _SMT2PRL_SMT2PR2_POSITION                           0x2
#define _SMT2PRL_SMT2PR2_SIZE                               0x1
#define _SMT2PRL_SMT2PR2_LENGTH                             0x1
#define _SMT2PRL_SMT2PR2_MASK                               0x4
#define _SMT2PRL_SMT2PR3_POSN                               0x3
#define _SMT2PRL_SMT2PR3_POSITION                           0x3
#define _SMT2PRL_SMT2PR3_SIZE                               0x1
#define _SMT2PRL_SMT2PR3_LENGTH                             0x1
#define _SMT2PRL_SMT2PR3_MASK                               0x8
#define _SMT2PRL_SMT2PR4_POSN                               0x4
#define _SMT2PRL_SMT2PR4_POSITION                           0x4
#define _SMT2PRL_SMT2PR4_SIZE                               0x1
#define _SMT2PRL_SMT2PR4_LENGTH                             0x1
#define _SMT2PRL_SMT2PR4_MASK                               0x10
#define _SMT2PRL_SMT2PR5_POSN                               0x5
#define _SMT2PRL_SMT2PR5_POSITION                           0x5
#define _SMT2PRL_SMT2PR5_SIZE                               0x1
#define _SMT2PRL_SMT2PR5_LENGTH                             0x1
#define _SMT2PRL_SMT2PR5_MASK                               0x20
#define _SMT2PRL_SMT2PR6_POSN                               0x6
#define _SMT2PRL_SMT2PR6_POSITION                           0x6
#define _SMT2PRL_SMT2PR6_SIZE                               0x1
#define _SMT2PRL_SMT2PR6_LENGTH                             0x1
#define _SMT2PRL_SMT2PR6_MASK                               0x40
#define _SMT2PRL_SMT2PR7_POSN                               0x7
#define _SMT2PRL_SMT2PR7_POSITION                           0x7
#define _SMT2PRL_SMT2PR7_SIZE                               0x1
#define _SMT2PRL_SMT2PR7_LENGTH                             0x1
#define _SMT2PRL_SMT2PR7_MASK                               0x80

// Register: SMT2PRH
#define SMT2PRH SMT2PRH
extern volatile unsigned char           SMT2PRH             __at(0xDA8);
#ifndef _LIB_BUILD
asm("SMT2PRH equ 0DA8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2PR                 :8;
    };
    struct {
        unsigned SMT2PR8                :1;
        unsigned SMT2PR9                :1;
        unsigned SMT2PR10               :1;
        unsigned SMT2PR11               :1;
        unsigned SMT2PR12               :1;
        unsigned SMT2PR13               :1;
        unsigned SMT2PR14               :1;
        unsigned SMT2PR15               :1;
    };
} SMT2PRHbits_t;
extern volatile SMT2PRHbits_t SMT2PRHbits __at(0xDA8);
// bitfield macros
#define _SMT2PRH_SMT2PR_POSN                                0x0
#define _SMT2PRH_SMT2PR_POSITION                            0x0
#define _SMT2PRH_SMT2PR_SIZE                                0x8
#define _SMT2PRH_SMT2PR_LENGTH                              0x8
#define _SMT2PRH_SMT2PR_MASK                                0xFF
#define _SMT2PRH_SMT2PR8_POSN                               0x0
#define _SMT2PRH_SMT2PR8_POSITION                           0x0
#define _SMT2PRH_SMT2PR8_SIZE                               0x1
#define _SMT2PRH_SMT2PR8_LENGTH                             0x1
#define _SMT2PRH_SMT2PR8_MASK                               0x1
#define _SMT2PRH_SMT2PR9_POSN                               0x1
#define _SMT2PRH_SMT2PR9_POSITION                           0x1
#define _SMT2PRH_SMT2PR9_SIZE                               0x1
#define _SMT2PRH_SMT2PR9_LENGTH                             0x1
#define _SMT2PRH_SMT2PR9_MASK                               0x2
#define _SMT2PRH_SMT2PR10_POSN                              0x2
#define _SMT2PRH_SMT2PR10_POSITION                          0x2
#define _SMT2PRH_SMT2PR10_SIZE                              0x1
#define _SMT2PRH_SMT2PR10_LENGTH                            0x1
#define _SMT2PRH_SMT2PR10_MASK                              0x4
#define _SMT2PRH_SMT2PR11_POSN                              0x3
#define _SMT2PRH_SMT2PR11_POSITION                          0x3
#define _SMT2PRH_SMT2PR11_SIZE                              0x1
#define _SMT2PRH_SMT2PR11_LENGTH                            0x1
#define _SMT2PRH_SMT2PR11_MASK                              0x8
#define _SMT2PRH_SMT2PR12_POSN                              0x4
#define _SMT2PRH_SMT2PR12_POSITION                          0x4
#define _SMT2PRH_SMT2PR12_SIZE                              0x1
#define _SMT2PRH_SMT2PR12_LENGTH                            0x1
#define _SMT2PRH_SMT2PR12_MASK                              0x10
#define _SMT2PRH_SMT2PR13_POSN                              0x5
#define _SMT2PRH_SMT2PR13_POSITION                          0x5
#define _SMT2PRH_SMT2PR13_SIZE                              0x1
#define _SMT2PRH_SMT2PR13_LENGTH                            0x1
#define _SMT2PRH_SMT2PR13_MASK                              0x20
#define _SMT2PRH_SMT2PR14_POSN                              0x6
#define _SMT2PRH_SMT2PR14_POSITION                          0x6
#define _SMT2PRH_SMT2PR14_SIZE                              0x1
#define _SMT2PRH_SMT2PR14_LENGTH                            0x1
#define _SMT2PRH_SMT2PR14_MASK                              0x40
#define _SMT2PRH_SMT2PR15_POSN                              0x7
#define _SMT2PRH_SMT2PR15_POSITION                          0x7
#define _SMT2PRH_SMT2PR15_SIZE                              0x1
#define _SMT2PRH_SMT2PR15_LENGTH                            0x1
#define _SMT2PRH_SMT2PR15_MASK                              0x80

// Register: SMT2PRU
#define SMT2PRU SMT2PRU
extern volatile unsigned char           SMT2PRU             __at(0xDA9);
#ifndef _LIB_BUILD
asm("SMT2PRU equ 0DA9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2PR                 :8;
    };
    struct {
        unsigned SMT2PR16               :1;
        unsigned SMT2PR17               :1;
        unsigned SMT2PR18               :1;
        unsigned SMT2PR19               :1;
        unsigned SMT2PR20               :1;
        unsigned SMT2PR21               :1;
        unsigned SMT2PR22               :1;
        unsigned SMT2PR23               :1;
    };
} SMT2PRUbits_t;
extern volatile SMT2PRUbits_t SMT2PRUbits __at(0xDA9);
// bitfield macros
#define _SMT2PRU_SMT2PR_POSN                                0x0
#define _SMT2PRU_SMT2PR_POSITION                            0x0
#define _SMT2PRU_SMT2PR_SIZE                                0x8
#define _SMT2PRU_SMT2PR_LENGTH                              0x8
#define _SMT2PRU_SMT2PR_MASK                                0xFF
#define _SMT2PRU_SMT2PR16_POSN                              0x0
#define _SMT2PRU_SMT2PR16_POSITION                          0x0
#define _SMT2PRU_SMT2PR16_SIZE                              0x1
#define _SMT2PRU_SMT2PR16_LENGTH                            0x1
#define _SMT2PRU_SMT2PR16_MASK                              0x1
#define _SMT2PRU_SMT2PR17_POSN                              0x1
#define _SMT2PRU_SMT2PR17_POSITION                          0x1
#define _SMT2PRU_SMT2PR17_SIZE                              0x1
#define _SMT2PRU_SMT2PR17_LENGTH                            0x1
#define _SMT2PRU_SMT2PR17_MASK                              0x2
#define _SMT2PRU_SMT2PR18_POSN                              0x2
#define _SMT2PRU_SMT2PR18_POSITION                          0x2
#define _SMT2PRU_SMT2PR18_SIZE                              0x1
#define _SMT2PRU_SMT2PR18_LENGTH                            0x1
#define _SMT2PRU_SMT2PR18_MASK                              0x4
#define _SMT2PRU_SMT2PR19_POSN                              0x3
#define _SMT2PRU_SMT2PR19_POSITION                          0x3
#define _SMT2PRU_SMT2PR19_SIZE                              0x1
#define _SMT2PRU_SMT2PR19_LENGTH                            0x1
#define _SMT2PRU_SMT2PR19_MASK                              0x8
#define _SMT2PRU_SMT2PR20_POSN                              0x4
#define _SMT2PRU_SMT2PR20_POSITION                          0x4
#define _SMT2PRU_SMT2PR20_SIZE                              0x1
#define _SMT2PRU_SMT2PR20_LENGTH                            0x1
#define _SMT2PRU_SMT2PR20_MASK                              0x10
#define _SMT2PRU_SMT2PR21_POSN                              0x5
#define _SMT2PRU_SMT2PR21_POSITION                          0x5
#define _SMT2PRU_SMT2PR21_SIZE                              0x1
#define _SMT2PRU_SMT2PR21_LENGTH                            0x1
#define _SMT2PRU_SMT2PR21_MASK                              0x20
#define _SMT2PRU_SMT2PR22_POSN                              0x6
#define _SMT2PRU_SMT2PR22_POSITION                          0x6
#define _SMT2PRU_SMT2PR22_SIZE                              0x1
#define _SMT2PRU_SMT2PR22_LENGTH                            0x1
#define _SMT2PRU_SMT2PR22_MASK                              0x40
#define _SMT2PRU_SMT2PR23_POSN                              0x7
#define _SMT2PRU_SMT2PR23_POSITION                          0x7
#define _SMT2PRU_SMT2PR23_SIZE                              0x1
#define _SMT2PRU_SMT2PR23_LENGTH                            0x1
#define _SMT2PRU_SMT2PR23_MASK                              0x80

// Register: SMT2CON0
#define SMT2CON0 SMT2CON0
extern volatile unsigned char           SMT2CON0            __at(0xDAA);
#ifndef _LIB_BUILD
asm("SMT2CON0 equ 0DAAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMT2PS                 :2;
        unsigned CPOL                   :1;
        unsigned SPOL                   :1;
        unsigned WPOL                   :1;
        unsigned STP                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned SMT2PS0                :1;
        unsigned SMT2PS1                :1;
    };
} SMT2CON0bits_t;
extern volatile SMT2CON0bits_t SMT2CON0bits __at(0xDAA);
// bitfield macros
#define _SMT2CON0_SMT2PS_POSN                               0x0
#define _SMT2CON0_SMT2PS_POSITION                           0x0
#define _SMT2CON0_SMT2PS_SIZE                               0x2
#define _SMT2CON0_SMT2PS_LENGTH                             0x2
#define _SMT2CON0_SMT2PS_MASK                               0x3
#define _SMT2CON0_CPOL_POSN                                 0x2
#define _SMT2CON0_CPOL_POSITION                             0x2
#define _SMT2CON0_CPOL_SIZE                                 0x1
#define _SMT2CON0_CPOL_LENGTH                               0x1
#define _SMT2CON0_CPOL_MASK                                 0x4
#define _SMT2CON0_SPOL_POSN                                 0x3
#define _SMT2CON0_SPOL_POSITION                             0x3
#define _SMT2CON0_SPOL_SIZE                                 0x1
#define _SMT2CON0_SPOL_LENGTH                               0x1
#define _SMT2CON0_SPOL_MASK                                 0x8
#define _SMT2CON0_WPOL_POSN                                 0x4
#define _SMT2CON0_WPOL_POSITION                             0x4
#define _SMT2CON0_WPOL_SIZE                                 0x1
#define _SMT2CON0_WPOL_LENGTH                               0x1
#define _SMT2CON0_WPOL_MASK                                 0x10
#define _SMT2CON0_STP_POSN                                  0x5
#define _SMT2CON0_STP_POSITION                              0x5
#define _SMT2CON0_STP_SIZE                                  0x1
#define _SMT2CON0_STP_LENGTH                                0x1
#define _SMT2CON0_STP_MASK                                  0x20
#define _SMT2CON0_EN_POSN                                   0x7
#define _SMT2CON0_EN_POSITION                               0x7
#define _SMT2CON0_EN_SIZE                                   0x1
#define _SMT2CON0_EN_LENGTH                                 0x1
#define _SMT2CON0_EN_MASK                                   0x80
#define _SMT2CON0_SMT2PS0_POSN                              0x0
#define _SMT2CON0_SMT2PS0_POSITION                          0x0
#define _SMT2CON0_SMT2PS0_SIZE                              0x1
#define _SMT2CON0_SMT2PS0_LENGTH                            0x1
#define _SMT2CON0_SMT2PS0_MASK                              0x1
#define _SMT2CON0_SMT2PS1_POSN                              0x1
#define _SMT2CON0_SMT2PS1_POSITION                          0x1
#define _SMT2CON0_SMT2PS1_SIZE                              0x1
#define _SMT2CON0_SMT2PS1_LENGTH                            0x1
#define _SMT2CON0_SMT2PS1_MASK                              0x2

// Register: SMT2CON1
#define SMT2CON1 SMT2CON1
extern volatile unsigned char           SMT2CON1            __at(0xDAB);
#ifndef _LIB_BUILD
asm("SMT2CON1 equ 0DABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned                        :2;
        unsigned REPEAT                 :1;
        unsigned SMT2GO                 :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned SMT2MODE               :4;
        unsigned                        :2;
        unsigned SMT2REPEAT             :1;
    };
    struct {
        unsigned SMT2MODE0              :1;
        unsigned SMT2MODE1              :1;
        unsigned SMT2MODE2              :1;
        unsigned SMT2MODE3              :1;
    };
} SMT2CON1bits_t;
extern volatile SMT2CON1bits_t SMT2CON1bits __at(0xDAB);
// bitfield macros
#define _SMT2CON1_MODE_POSN                                 0x0
#define _SMT2CON1_MODE_POSITION                             0x0
#define _SMT2CON1_MODE_SIZE                                 0x4
#define _SMT2CON1_MODE_LENGTH                               0x4
#define _SMT2CON1_MODE_MASK                                 0xF
#define _SMT2CON1_REPEAT_POSN                               0x6
#define _SMT2CON1_REPEAT_POSITION                           0x6
#define _SMT2CON1_REPEAT_SIZE                               0x1
#define _SMT2CON1_REPEAT_LENGTH                             0x1
#define _SMT2CON1_REPEAT_MASK                               0x40
#define _SMT2CON1_SMT2GO_POSN                               0x7
#define _SMT2CON1_SMT2GO_POSITION                           0x7
#define _SMT2CON1_SMT2GO_SIZE                               0x1
#define _SMT2CON1_SMT2GO_LENGTH                             0x1
#define _SMT2CON1_SMT2GO_MASK                               0x80
#define _SMT2CON1_MODE0_POSN                                0x0
#define _SMT2CON1_MODE0_POSITION                            0x0
#define _SMT2CON1_MODE0_SIZE                                0x1
#define _SMT2CON1_MODE0_LENGTH                              0x1
#define _SMT2CON1_MODE0_MASK                                0x1
#define _SMT2CON1_MODE1_POSN                                0x1
#define _SMT2CON1_MODE1_POSITION                            0x1
#define _SMT2CON1_MODE1_SIZE                                0x1
#define _SMT2CON1_MODE1_LENGTH                              0x1
#define _SMT2CON1_MODE1_MASK                                0x2
#define _SMT2CON1_MODE2_POSN                                0x2
#define _SMT2CON1_MODE2_POSITION                            0x2
#define _SMT2CON1_MODE2_SIZE                                0x1
#define _SMT2CON1_MODE2_LENGTH                              0x1
#define _SMT2CON1_MODE2_MASK                                0x4
#define _SMT2CON1_MODE3_POSN                                0x3
#define _SMT2CON1_MODE3_POSITION                            0x3
#define _SMT2CON1_MODE3_SIZE                                0x1
#define _SMT2CON1_MODE3_LENGTH                              0x1
#define _SMT2CON1_MODE3_MASK                                0x8
#define _SMT2CON1_SMT2MODE_POSN                             0x0
#define _SMT2CON1_SMT2MODE_POSITION                         0x0
#define _SMT2CON1_SMT2MODE_SIZE                             0x4
#define _SMT2CON1_SMT2MODE_LENGTH                           0x4
#define _SMT2CON1_SMT2MODE_MASK                             0xF
#define _SMT2CON1_SMT2REPEAT_POSN                           0x6
#define _SMT2CON1_SMT2REPEAT_POSITION                       0x6
#define _SMT2CON1_SMT2REPEAT_SIZE                           0x1
#define _SMT2CON1_SMT2REPEAT_LENGTH                         0x1
#define _SMT2CON1_SMT2REPEAT_MASK                           0x40
#define _SMT2CON1_SMT2MODE0_POSN                            0x0
#define _SMT2CON1_SMT2MODE0_POSITION                        0x0
#define _SMT2CON1_SMT2MODE0_SIZE                            0x1
#define _SMT2CON1_SMT2MODE0_LENGTH                          0x1
#define _SMT2CON1_SMT2MODE0_MASK                            0x1
#define _SMT2CON1_SMT2MODE1_POSN                            0x1
#define _SMT2CON1_SMT2MODE1_POSITION                        0x1
#define _SMT2CON1_SMT2MODE1_SIZE                            0x1
#define _SMT2CON1_SMT2MODE1_LENGTH                          0x1
#define _SMT2CON1_SMT2MODE1_MASK                            0x2
#define _SMT2CON1_SMT2MODE2_POSN                            0x2
#define _SMT2CON1_SMT2MODE2_POSITION                        0x2
#define _SMT2CON1_SMT2MODE2_SIZE                            0x1
#define _SMT2CON1_SMT2MODE2_LENGTH                          0x1
#define _SMT2CON1_SMT2MODE2_MASK                            0x4
#define _SMT2CON1_SMT2MODE3_POSN                            0x3
#define _SMT2CON1_SMT2MODE3_POSITION                        0x3
#define _SMT2CON1_SMT2MODE3_SIZE                            0x1
#define _SMT2CON1_SMT2MODE3_LENGTH                          0x1
#define _SMT2CON1_SMT2MODE3_MASK                            0x8

// Register: SMT2STAT
#define SMT2STAT SMT2STAT
extern volatile unsigned char           SMT2STAT            __at(0xDAC);
#ifndef _LIB_BUILD
asm("SMT2STAT equ 0DACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AS                     :1;
        unsigned WS                     :1;
        unsigned TS                     :1;
        unsigned                        :2;
        unsigned RST                    :1;
        unsigned CPWUP                  :1;
        unsigned CPRUP                  :1;
    };
    struct {
        unsigned SMT2AS                 :1;
        unsigned SMT2WS                 :1;
        unsigned SMT2TS                 :1;
        unsigned                        :2;
        unsigned SMT2RESET              :1;
        unsigned SMT2CPWUP              :1;
        unsigned SMT2CPRUP              :1;
    };
} SMT2STATbits_t;
extern volatile SMT2STATbits_t SMT2STATbits __at(0xDAC);
// bitfield macros
#define _SMT2STAT_AS_POSN                                   0x0
#define _SMT2STAT_AS_POSITION                               0x0
#define _SMT2STAT_AS_SIZE                                   0x1
#define _SMT2STAT_AS_LENGTH                                 0x1
#define _SMT2STAT_AS_MASK                                   0x1
#define _SMT2STAT_WS_POSN                                   0x1
#define _SMT2STAT_WS_POSITION                               0x1
#define _SMT2STAT_WS_SIZE                                   0x1
#define _SMT2STAT_WS_LENGTH                                 0x1
#define _SMT2STAT_WS_MASK                                   0x2
#define _SMT2STAT_TS_POSN                                   0x2
#define _SMT2STAT_TS_POSITION                               0x2
#define _SMT2STAT_TS_SIZE                                   0x1
#define _SMT2STAT_TS_LENGTH                                 0x1
#define _SMT2STAT_TS_MASK                                   0x4
#define _SMT2STAT_RST_POSN                                  0x5
#define _SMT2STAT_RST_POSITION                              0x5
#define _SMT2STAT_RST_SIZE                                  0x1
#define _SMT2STAT_RST_LENGTH                                0x1
#define _SMT2STAT_RST_MASK                                  0x20
#define _SMT2STAT_CPWUP_POSN                                0x6
#define _SMT2STAT_CPWUP_POSITION                            0x6
#define _SMT2STAT_CPWUP_SIZE                                0x1
#define _SMT2STAT_CPWUP_LENGTH                              0x1
#define _SMT2STAT_CPWUP_MASK                                0x40
#define _SMT2STAT_CPRUP_POSN                                0x7
#define _SMT2STAT_CPRUP_POSITION                            0x7
#define _SMT2STAT_CPRUP_SIZE                                0x1
#define _SMT2STAT_CPRUP_LENGTH                              0x1
#define _SMT2STAT_CPRUP_MASK                                0x80
#define _SMT2STAT_SMT2AS_POSN                               0x0
#define _SMT2STAT_SMT2AS_POSITION                           0x0
#define _SMT2STAT_SMT2AS_SIZE                               0x1
#define _SMT2STAT_SMT2AS_LENGTH                             0x1
#define _SMT2STAT_SMT2AS_MASK                               0x1
#define _SMT2STAT_SMT2WS_POSN                               0x1
#define _SMT2STAT_SMT2WS_POSITION                           0x1
#define _SMT2STAT_SMT2WS_SIZE                               0x1
#define _SMT2STAT_SMT2WS_LENGTH                             0x1
#define _SMT2STAT_SMT2WS_MASK                               0x2
#define _SMT2STAT_SMT2TS_POSN                               0x2
#define _SMT2STAT_SMT2TS_POSITION                           0x2
#define _SMT2STAT_SMT2TS_SIZE                               0x1
#define _SMT2STAT_SMT2TS_LENGTH                             0x1
#define _SMT2STAT_SMT2TS_MASK                               0x4
#define _SMT2STAT_SMT2RESET_POSN                            0x5
#define _SMT2STAT_SMT2RESET_POSITION                        0x5
#define _SMT2STAT_SMT2RESET_SIZE                            0x1
#define _SMT2STAT_SMT2RESET_LENGTH                          0x1
#define _SMT2STAT_SMT2RESET_MASK                            0x20
#define _SMT2STAT_SMT2CPWUP_POSN                            0x6
#define _SMT2STAT_SMT2CPWUP_POSITION                        0x6
#define _SMT2STAT_SMT2CPWUP_SIZE                            0x1
#define _SMT2STAT_SMT2CPWUP_LENGTH                          0x1
#define _SMT2STAT_SMT2CPWUP_MASK                            0x40
#define _SMT2STAT_SMT2CPRUP_POSN                            0x7
#define _SMT2STAT_SMT2CPRUP_POSITION                        0x7
#define _SMT2STAT_SMT2CPRUP_SIZE                            0x1
#define _SMT2STAT_SMT2CPRUP_LENGTH                          0x1
#define _SMT2STAT_SMT2CPRUP_MASK                            0x80

// Register: SMT2CLK
#define SMT2CLK SMT2CLK
extern volatile unsigned char           SMT2CLK             __at(0xDAD);
#ifndef _LIB_BUILD
asm("SMT2CLK equ 0DADh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CSEL                   :8;
    };
    struct {
        unsigned CSEL0                  :1;
        unsigned CSEL1                  :1;
        unsigned CSEL2                  :1;
    };
    struct {
        unsigned SMT2CSEL               :8;
    };
    struct {
        unsigned SMT2CSEL0              :1;
        unsigned SMT2CSEL1              :1;
        unsigned SMT2CSEL2              :1;
    };
} SMT2CLKbits_t;
extern volatile SMT2CLKbits_t SMT2CLKbits __at(0xDAD);
// bitfield macros
#define _SMT2CLK_CSEL_POSN                                  0x0
#define _SMT2CLK_CSEL_POSITION                              0x0
#define _SMT2CLK_CSEL_SIZE                                  0x8
#define _SMT2CLK_CSEL_LENGTH                                0x8
#define _SMT2CLK_CSEL_MASK                                  0xFF
#define _SMT2CLK_CSEL0_POSN                                 0x0
#define _SMT2CLK_CSEL0_POSITION                             0x0
#define _SMT2CLK_CSEL0_SIZE                                 0x1
#define _SMT2CLK_CSEL0_LENGTH                               0x1
#define _SMT2CLK_CSEL0_MASK                                 0x1
#define _SMT2CLK_CSEL1_POSN                                 0x1
#define _SMT2CLK_CSEL1_POSITION                             0x1
#define _SMT2CLK_CSEL1_SIZE                                 0x1
#define _SMT2CLK_CSEL1_LENGTH                               0x1
#define _SMT2CLK_CSEL1_MASK                                 0x2
#define _SMT2CLK_CSEL2_POSN                                 0x2
#define _SMT2CLK_CSEL2_POSITION                             0x2
#define _SMT2CLK_CSEL2_SIZE                                 0x1
#define _SMT2CLK_CSEL2_LENGTH                               0x1
#define _SMT2CLK_CSEL2_MASK                                 0x4
#define _SMT2CLK_SMT2CSEL_POSN                              0x0
#define _SMT2CLK_SMT2CSEL_POSITION                          0x0
#define _SMT2CLK_SMT2CSEL_SIZE                              0x8
#define _SMT2CLK_SMT2CSEL_LENGTH                            0x8
#define _SMT2CLK_SMT2CSEL_MASK                              0xFF
#define _SMT2CLK_SMT2CSEL0_POSN                             0x0
#define _SMT2CLK_SMT2CSEL0_POSITION                         0x0
#define _SMT2CLK_SMT2CSEL0_SIZE                             0x1
#define _SMT2CLK_SMT2CSEL0_LENGTH                           0x1
#define _SMT2CLK_SMT2CSEL0_MASK                             0x1
#define _SMT2CLK_SMT2CSEL1_POSN                             0x1
#define _SMT2CLK_SMT2CSEL1_POSITION                         0x1
#define _SMT2CLK_SMT2CSEL1_SIZE                             0x1
#define _SMT2CLK_SMT2CSEL1_LENGTH                           0x1
#define _SMT2CLK_SMT2CSEL1_MASK                             0x2
#define _SMT2CLK_SMT2CSEL2_POSN                             0x2
#define _SMT2CLK_SMT2CSEL2_POSITION                         0x2
#define _SMT2CLK_SMT2CSEL2_SIZE                             0x1
#define _SMT2CLK_SMT2CSEL2_LENGTH                           0x1
#define _SMT2CLK_SMT2CSEL2_MASK                             0x4

// Register: SMT2SIG
#define SMT2SIG SMT2SIG
extern volatile unsigned char           SMT2SIG             __at(0xDAE);
#ifndef _LIB_BUILD
asm("SMT2SIG equ 0DAEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSEL                   :8;
    };
    struct {
        unsigned SSEL0                  :1;
        unsigned SSEL1                  :1;
        unsigned SSEL2                  :1;
    };
    struct {
        unsigned SMT2SSEL               :8;
    };
    struct {
        unsigned SMT2SSEL0              :1;
        unsigned SMT2SSEL1              :1;
        unsigned SMT2SSEL2              :1;
    };
} SMT2SIGbits_t;
extern volatile SMT2SIGbits_t SMT2SIGbits __at(0xDAE);
// bitfield macros
#define _SMT2SIG_SSEL_POSN                                  0x0
#define _SMT2SIG_SSEL_POSITION                              0x0
#define _SMT2SIG_SSEL_SIZE                                  0x8
#define _SMT2SIG_SSEL_LENGTH                                0x8
#define _SMT2SIG_SSEL_MASK                                  0xFF
#define _SMT2SIG_SSEL0_POSN                                 0x0
#define _SMT2SIG_SSEL0_POSITION                             0x0
#define _SMT2SIG_SSEL0_SIZE                                 0x1
#define _SMT2SIG_SSEL0_LENGTH                               0x1
#define _SMT2SIG_SSEL0_MASK                                 0x1
#define _SMT2SIG_SSEL1_POSN                                 0x1
#define _SMT2SIG_SSEL1_POSITION                             0x1
#define _SMT2SIG_SSEL1_SIZE                                 0x1
#define _SMT2SIG_SSEL1_LENGTH                               0x1
#define _SMT2SIG_SSEL1_MASK                                 0x2
#define _SMT2SIG_SSEL2_POSN                                 0x2
#define _SMT2SIG_SSEL2_POSITION                             0x2
#define _SMT2SIG_SSEL2_SIZE                                 0x1
#define _SMT2SIG_SSEL2_LENGTH                               0x1
#define _SMT2SIG_SSEL2_MASK                                 0x4
#define _SMT2SIG_SMT2SSEL_POSN                              0x0
#define _SMT2SIG_SMT2SSEL_POSITION                          0x0
#define _SMT2SIG_SMT2SSEL_SIZE                              0x8
#define _SMT2SIG_SMT2SSEL_LENGTH                            0x8
#define _SMT2SIG_SMT2SSEL_MASK                              0xFF
#define _SMT2SIG_SMT2SSEL0_POSN                             0x0
#define _SMT2SIG_SMT2SSEL0_POSITION                         0x0
#define _SMT2SIG_SMT2SSEL0_SIZE                             0x1
#define _SMT2SIG_SMT2SSEL0_LENGTH                           0x1
#define _SMT2SIG_SMT2SSEL0_MASK                             0x1
#define _SMT2SIG_SMT2SSEL1_POSN                             0x1
#define _SMT2SIG_SMT2SSEL1_POSITION                         0x1
#define _SMT2SIG_SMT2SSEL1_SIZE                             0x1
#define _SMT2SIG_SMT2SSEL1_LENGTH                           0x1
#define _SMT2SIG_SMT2SSEL1_MASK                             0x2
#define _SMT2SIG_SMT2SSEL2_POSN                             0x2
#define _SMT2SIG_SMT2SSEL2_POSITION                         0x2
#define _SMT2SIG_SMT2SSEL2_SIZE                             0x1
#define _SMT2SIG_SMT2SSEL2_LENGTH                           0x1
#define _SMT2SIG_SMT2SSEL2_MASK                             0x4

// Register: SMT2WIN
#define SMT2WIN SMT2WIN
extern volatile unsigned char           SMT2WIN             __at(0xDAF);
#ifndef _LIB_BUILD
asm("SMT2WIN equ 0DAFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WSEL                   :8;
    };
    struct {
        unsigned WSEL0                  :1;
        unsigned WSEL1                  :1;
        unsigned WSEL2                  :1;
        unsigned WSEL3                  :1;
    };
    struct {
        unsigned SMT2WSEL               :8;
    };
    struct {
        unsigned SMT2WSEL0              :1;
        unsigned SMT2WSEL1              :1;
        unsigned SMT2WSEL2              :1;
        unsigned SMT2WSEL3              :1;
    };
} SMT2WINbits_t;
extern volatile SMT2WINbits_t SMT2WINbits __at(0xDAF);
// bitfield macros
#define _SMT2WIN_WSEL_POSN                                  0x0
#define _SMT2WIN_WSEL_POSITION                              0x0
#define _SMT2WIN_WSEL_SIZE                                  0x8
#define _SMT2WIN_WSEL_LENGTH                                0x8
#define _SMT2WIN_WSEL_MASK                                  0xFF
#define _SMT2WIN_WSEL0_POSN                                 0x0
#define _SMT2WIN_WSEL0_POSITION                             0x0
#define _SMT2WIN_WSEL0_SIZE                                 0x1
#define _SMT2WIN_WSEL0_LENGTH                               0x1
#define _SMT2WIN_WSEL0_MASK                                 0x1
#define _SMT2WIN_WSEL1_POSN                                 0x1
#define _SMT2WIN_WSEL1_POSITION                             0x1
#define _SMT2WIN_WSEL1_SIZE                                 0x1
#define _SMT2WIN_WSEL1_LENGTH                               0x1
#define _SMT2WIN_WSEL1_MASK                                 0x2
#define _SMT2WIN_WSEL2_POSN                                 0x2
#define _SMT2WIN_WSEL2_POSITION                             0x2
#define _SMT2WIN_WSEL2_SIZE                                 0x1
#define _SMT2WIN_WSEL2_LENGTH                               0x1
#define _SMT2WIN_WSEL2_MASK                                 0x4
#define _SMT2WIN_WSEL3_POSN                                 0x3
#define _SMT2WIN_WSEL3_POSITION                             0x3
#define _SMT2WIN_WSEL3_SIZE                                 0x1
#define _SMT2WIN_WSEL3_LENGTH                               0x1
#define _SMT2WIN_WSEL3_MASK                                 0x8
#define _SMT2WIN_SMT2WSEL_POSN                              0x0
#define _SMT2WIN_SMT2WSEL_POSITION                          0x0
#define _SMT2WIN_SMT2WSEL_SIZE                              0x8
#define _SMT2WIN_SMT2WSEL_LENGTH                            0x8
#define _SMT2WIN_SMT2WSEL_MASK                              0xFF
#define _SMT2WIN_SMT2WSEL0_POSN                             0x0
#define _SMT2WIN_SMT2WSEL0_POSITION                         0x0
#define _SMT2WIN_SMT2WSEL0_SIZE                             0x1
#define _SMT2WIN_SMT2WSEL0_LENGTH                           0x1
#define _SMT2WIN_SMT2WSEL0_MASK                             0x1
#define _SMT2WIN_SMT2WSEL1_POSN                             0x1
#define _SMT2WIN_SMT2WSEL1_POSITION                         0x1
#define _SMT2WIN_SMT2WSEL1_SIZE                             0x1
#define _SMT2WIN_SMT2WSEL1_LENGTH                           0x1
#define _SMT2WIN_SMT2WSEL1_MASK                             0x2
#define _SMT2WIN_SMT2WSEL2_POSN                             0x2
#define _SMT2WIN_SMT2WSEL2_POSITION                         0x2
#define _SMT2WIN_SMT2WSEL2_SIZE                             0x1
#define _SMT2WIN_SMT2WSEL2_LENGTH                           0x1
#define _SMT2WIN_SMT2WSEL2_MASK                             0x4
#define _SMT2WIN_SMT2WSEL3_POSN                             0x3
#define _SMT2WIN_SMT2WSEL3_POSITION                         0x3
#define _SMT2WIN_SMT2WSEL3_SIZE                             0x1
#define _SMT2WIN_SMT2WSEL3_LENGTH                           0x1
#define _SMT2WIN_SMT2WSEL3_MASK                             0x8

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
extern volatile unsigned char           STATUS_SHAD         __at(0xFE4);
#ifndef _LIB_BUILD
asm("STATUS_SHAD equ 0FE4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C_SHAD                 :1;
        unsigned DC_SHAD                :1;
        unsigned Z_SHAD                 :1;
    };
} STATUS_SHADbits_t;
extern volatile STATUS_SHADbits_t STATUS_SHADbits __at(0xFE4);
// bitfield macros
#define _STATUS_SHAD_C_SHAD_POSN                            0x0
#define _STATUS_SHAD_C_SHAD_POSITION                        0x0
#define _STATUS_SHAD_C_SHAD_SIZE                            0x1
#define _STATUS_SHAD_C_SHAD_LENGTH                          0x1
#define _STATUS_SHAD_C_SHAD_MASK                            0x1
#define _STATUS_SHAD_DC_SHAD_POSN                           0x1
#define _STATUS_SHAD_DC_SHAD_POSITION                       0x1
#define _STATUS_SHAD_DC_SHAD_SIZE                           0x1
#define _STATUS_SHAD_DC_SHAD_LENGTH                         0x1
#define _STATUS_SHAD_DC_SHAD_MASK                           0x2
#define _STATUS_SHAD_Z_SHAD_POSN                            0x2
#define _STATUS_SHAD_Z_SHAD_POSITION                        0x2
#define _STATUS_SHAD_Z_SHAD_SIZE                            0x1
#define _STATUS_SHAD_Z_SHAD_LENGTH                          0x1
#define _STATUS_SHAD_Z_SHAD_MASK                            0x4

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
// CRCACCL<ACC0>
extern volatile __bit                   ACC0                __at(0x3C98);	// @ (0x793 * 8 + 0)
#define                                 ACC0_bit            _BIT_ACCESS(CRCACCL,0)
// CRCACCL<ACC1>
extern volatile __bit                   ACC1                __at(0x3C99);	// @ (0x793 * 8 + 1)
#define                                 ACC1_bit            _BIT_ACCESS(CRCACCL,1)
// CRCACCH<ACC10>
extern volatile __bit                   ACC10               __at(0x3CA2);	// @ (0x794 * 8 + 2)
#define                                 ACC10_bit           _BIT_ACCESS(CRCACCH,2)
// CRCACCH<ACC11>
extern volatile __bit                   ACC11               __at(0x3CA3);	// @ (0x794 * 8 + 3)
#define                                 ACC11_bit           _BIT_ACCESS(CRCACCH,3)
// CRCACCH<ACC12>
extern volatile __bit                   ACC12               __at(0x3CA4);	// @ (0x794 * 8 + 4)
#define                                 ACC12_bit           _BIT_ACCESS(CRCACCH,4)
// CRCACCH<ACC13>
extern volatile __bit                   ACC13               __at(0x3CA5);	// @ (0x794 * 8 + 5)
#define                                 ACC13_bit           _BIT_ACCESS(CRCACCH,5)
// CRCACCH<ACC14>
extern volatile __bit                   ACC14               __at(0x3CA6);	// @ (0x794 * 8 + 6)
#define                                 ACC14_bit           _BIT_ACCESS(CRCACCH,6)
// CRCACCH<ACC15>
extern volatile __bit                   ACC15               __at(0x3CA7);	// @ (0x794 * 8 + 7)
#define                                 ACC15_bit           _BIT_ACCESS(CRCACCH,7)
// CRCACCL<ACC2>
extern volatile __bit                   ACC2                __at(0x3C9A);	// @ (0x793 * 8 + 2)
#define                                 ACC2_bit            _BIT_ACCESS(CRCACCL,2)
// CRCACCL<ACC3>
extern volatile __bit                   ACC3                __at(0x3C9B);	// @ (0x793 * 8 + 3)
#define                                 ACC3_bit            _BIT_ACCESS(CRCACCL,3)
// CRCACCL<ACC4>
extern volatile __bit                   ACC4                __at(0x3C9C);	// @ (0x793 * 8 + 4)
#define                                 ACC4_bit            _BIT_ACCESS(CRCACCL,4)
// CRCACCL<ACC5>
extern volatile __bit                   ACC5                __at(0x3C9D);	// @ (0x793 * 8 + 5)
#define                                 ACC5_bit            _BIT_ACCESS(CRCACCL,5)
// CRCACCL<ACC6>
extern volatile __bit                   ACC6                __at(0x3C9E);	// @ (0x793 * 8 + 6)
#define                                 ACC6_bit            _BIT_ACCESS(CRCACCL,6)
// CRCACCL<ACC7>
extern volatile __bit                   ACC7                __at(0x3C9F);	// @ (0x793 * 8 + 7)
#define                                 ACC7_bit            _BIT_ACCESS(CRCACCL,7)
// CRCACCH<ACC8>
extern volatile __bit                   ACC8                __at(0x3CA0);	// @ (0x794 * 8 + 0)
#define                                 ACC8_bit            _BIT_ACCESS(CRCACCH,0)
// CRCACCH<ACC9>
extern volatile __bit                   ACC9                __at(0x3CA1);	// @ (0x794 * 8 + 1)
#define                                 ACC9_bit            _BIT_ACCESS(CRCACCH,1)
// CRCCON0<ACCM>
extern volatile __bit                   ACCM                __at(0x3CCC);	// @ (0x799 * 8 + 4)
#define                                 ACCM_bit            _BIT_ACCESS(CRCCON0,4)
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
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
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0xC61);	// @ (0x18C * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0xC62);	// @ (0x18C * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC64);	// @ (0x18C * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// BORCON<BORFS>
extern volatile __bit                   BORFS               __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 BORFS_bit           _BIT_ACCESS(BORCON,6)
// BORCON<BORRDY>
extern volatile __bit                   BORRDY              __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BORRDY_bit          _BIT_ACCESS(BORCON,0)
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
// CWG1AS1<C1AS>
extern volatile __bit                   C1AS                __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 C1AS_bit            _BIT_ACCESS(CWG1AS1,1)
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
// CWG1AS1<C2AS>
extern volatile __bit                   C2AS                __at(0x34A2);	// @ (0x694 * 8 + 2)
#define                                 C2AS_bit            _BIT_ACCESS(CWG1AS1,2)
// PIE2<C2IE>
extern volatile __bit                   C2IE                __at(0x496);	// @ (0x92 * 8 + 6)
#define                                 C2IE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<C2IF>
extern volatile __bit                   C2IF                __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 C2IF_bit            _BIT_ACCESS(PIR2,6)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// CCP1CAP<CCP1CTS0>
extern volatile __bit                   CCP1CTS0            __at(0x14A0);	// @ (0x294 * 8 + 0)
#define                                 CCP1CTS0_bit        _BIT_ACCESS(CCP1CAP,0)
// CCP1CAP<CCP1CTS1>
extern volatile __bit                   CCP1CTS1            __at(0x14A1);	// @ (0x294 * 8 + 1)
#define                                 CCP1CTS1_bit        _BIT_ACCESS(CCP1CAP,1)
// CCP1CON<CCP1EN>
extern volatile __bit                   CCP1EN              __at(0x149F);	// @ (0x293 * 8 + 7)
#define                                 CCP1EN_bit          _BIT_ACCESS(CCP1CON,7)
// CCP1CON<CCP1FMT>
extern volatile __bit                   CCP1FMT             __at(0x149C);	// @ (0x293 * 8 + 4)
#define                                 CCP1FMT_bit         _BIT_ACCESS(CCP1CON,4)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x8A);	// @ (0x11 * 8 + 2)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,2)
// CCP1CON<CCP1MODE0>
extern volatile __bit                   CCP1MODE0           __at(0x1498);	// @ (0x293 * 8 + 0)
#define                                 CCP1MODE0_bit       _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1MODE1>
extern volatile __bit                   CCP1MODE1           __at(0x1499);	// @ (0x293 * 8 + 1)
#define                                 CCP1MODE1_bit       _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1MODE2>
extern volatile __bit                   CCP1MODE2           __at(0x149A);	// @ (0x293 * 8 + 2)
#define                                 CCP1MODE2_bit       _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1MODE3>
extern volatile __bit                   CCP1MODE3           __at(0x149B);	// @ (0x293 * 8 + 3)
#define                                 CCP1MODE3_bit       _BIT_ACCESS(CCP1CON,3)
// CCP1CON<CCP1OE>
extern volatile __bit                   CCP1OE              __at(0x149E);	// @ (0x293 * 8 + 6)
#define                                 CCP1OE_bit          _BIT_ACCESS(CCP1CON,6)
// CCP1CON<CCP1OUT>
extern volatile __bit                   CCP1OUT             __at(0x149D);	// @ (0x293 * 8 + 5)
#define                                 CCP1OUT_bit         _BIT_ACCESS(CCP1CON,5)
// APFCON<CCP1SEL>
extern volatile __bit                   CCP1SEL             __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 CCP1SEL_bit         _BIT_ACCESS(APFCON,0)
// CCPTMRS<CCP1TSEL0>
extern volatile __bit                   CCP1TSEL0           __at(0x14F0);	// @ (0x29E * 8 + 0)
#define                                 CCP1TSEL0_bit       _BIT_ACCESS(CCPTMRS,0)
// CCPTMRS<CCP1TSEL1>
extern volatile __bit                   CCP1TSEL1           __at(0x14F1);	// @ (0x29E * 8 + 1)
#define                                 CCP1TSEL1_bit       _BIT_ACCESS(CCPTMRS,1)
// CCP2CAP<CCP2CTS0>
extern volatile __bit                   CCP2CTS0            __at(0x14D8);	// @ (0x29B * 8 + 0)
#define                                 CCP2CTS0_bit        _BIT_ACCESS(CCP2CAP,0)
// CCP2CAP<CCP2CTS1>
extern volatile __bit                   CCP2CTS1            __at(0x14D9);	// @ (0x29B * 8 + 1)
#define                                 CCP2CTS1_bit        _BIT_ACCESS(CCP2CAP,1)
// CCP2CON<CCP2EN>
extern volatile __bit                   CCP2EN              __at(0x14D7);	// @ (0x29A * 8 + 7)
#define                                 CCP2EN_bit          _BIT_ACCESS(CCP2CON,7)
// CCP2CON<CCP2FMT>
extern volatile __bit                   CCP2FMT             __at(0x14D4);	// @ (0x29A * 8 + 4)
#define                                 CCP2FMT_bit         _BIT_ACCESS(CCP2CON,4)
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x490);	// @ (0x92 * 8 + 0)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR2,0)
// CCP2CON<CCP2MODE0>
extern volatile __bit                   CCP2MODE0           __at(0x14D0);	// @ (0x29A * 8 + 0)
#define                                 CCP2MODE0_bit       _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2MODE1>
extern volatile __bit                   CCP2MODE1           __at(0x14D1);	// @ (0x29A * 8 + 1)
#define                                 CCP2MODE1_bit       _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2MODE2>
extern volatile __bit                   CCP2MODE2           __at(0x14D2);	// @ (0x29A * 8 + 2)
#define                                 CCP2MODE2_bit       _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2MODE3>
extern volatile __bit                   CCP2MODE3           __at(0x14D3);	// @ (0x29A * 8 + 3)
#define                                 CCP2MODE3_bit       _BIT_ACCESS(CCP2CON,3)
// CCP2CON<CCP2OE>
extern volatile __bit                   CCP2OE              __at(0x14D6);	// @ (0x29A * 8 + 6)
#define                                 CCP2OE_bit          _BIT_ACCESS(CCP2CON,6)
// CCP2CON<CCP2OUT>
extern volatile __bit                   CCP2OUT             __at(0x14D5);	// @ (0x29A * 8 + 5)
#define                                 CCP2OUT_bit         _BIT_ACCESS(CCP2CON,5)
// CCPTMRS<CCP2TSEL0>
extern volatile __bit                   CCP2TSEL0           __at(0x14F2);	// @ (0x29E * 8 + 2)
#define                                 CCP2TSEL0_bit       _BIT_ACCESS(CCPTMRS,2)
// CCPTMRS<CCP2TSEL1>
extern volatile __bit                   CCP2TSEL1           __at(0x14F3);	// @ (0x29E * 8 + 3)
#define                                 CCP2TSEL1_bit       _BIT_ACCESS(CCPTMRS,3)
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
// CRCACCL<CRCACC0>
extern volatile __bit                   CRCACC0             __at(0x3C98);	// @ (0x793 * 8 + 0)
#define                                 CRCACC0_bit         _BIT_ACCESS(CRCACCL,0)
// CRCACCL<CRCACC1>
extern volatile __bit                   CRCACC1             __at(0x3C99);	// @ (0x793 * 8 + 1)
#define                                 CRCACC1_bit         _BIT_ACCESS(CRCACCL,1)
// CRCACCH<CRCACC10>
extern volatile __bit                   CRCACC10            __at(0x3CA2);	// @ (0x794 * 8 + 2)
#define                                 CRCACC10_bit        _BIT_ACCESS(CRCACCH,2)
// CRCACCH<CRCACC11>
extern volatile __bit                   CRCACC11            __at(0x3CA3);	// @ (0x794 * 8 + 3)
#define                                 CRCACC11_bit        _BIT_ACCESS(CRCACCH,3)
// CRCACCH<CRCACC12>
extern volatile __bit                   CRCACC12            __at(0x3CA4);	// @ (0x794 * 8 + 4)
#define                                 CRCACC12_bit        _BIT_ACCESS(CRCACCH,4)
// CRCACCH<CRCACC13>
extern volatile __bit                   CRCACC13            __at(0x3CA5);	// @ (0x794 * 8 + 5)
#define                                 CRCACC13_bit        _BIT_ACCESS(CRCACCH,5)
// CRCACCH<CRCACC14>
extern volatile __bit                   CRCACC14            __at(0x3CA6);	// @ (0x794 * 8 + 6)
#define                                 CRCACC14_bit        _BIT_ACCESS(CRCACCH,6)
// CRCACCH<CRCACC15>
extern volatile __bit                   CRCACC15            __at(0x3CA7);	// @ (0x794 * 8 + 7)
#define                                 CRCACC15_bit        _BIT_ACCESS(CRCACCH,7)
// CRCACCL<CRCACC2>
extern volatile __bit                   CRCACC2             __at(0x3C9A);	// @ (0x793 * 8 + 2)
#define                                 CRCACC2_bit         _BIT_ACCESS(CRCACCL,2)
// CRCACCL<CRCACC3>
extern volatile __bit                   CRCACC3             __at(0x3C9B);	// @ (0x793 * 8 + 3)
#define                                 CRCACC3_bit         _BIT_ACCESS(CRCACCL,3)
// CRCACCL<CRCACC4>
extern volatile __bit                   CRCACC4             __at(0x3C9C);	// @ (0x793 * 8 + 4)
#define                                 CRCACC4_bit         _BIT_ACCESS(CRCACCL,4)
// CRCACCL<CRCACC5>
extern volatile __bit                   CRCACC5             __at(0x3C9D);	// @ (0x793 * 8 + 5)
#define                                 CRCACC5_bit         _BIT_ACCESS(CRCACCL,5)
// CRCACCL<CRCACC6>
extern volatile __bit                   CRCACC6             __at(0x3C9E);	// @ (0x793 * 8 + 6)
#define                                 CRCACC6_bit         _BIT_ACCESS(CRCACCL,6)
// CRCACCL<CRCACC7>
extern volatile __bit                   CRCACC7             __at(0x3C9F);	// @ (0x793 * 8 + 7)
#define                                 CRCACC7_bit         _BIT_ACCESS(CRCACCL,7)
// CRCACCH<CRCACC8>
extern volatile __bit                   CRCACC8             __at(0x3CA0);	// @ (0x794 * 8 + 0)
#define                                 CRCACC8_bit         _BIT_ACCESS(CRCACCH,0)
// CRCACCH<CRCACC9>
extern volatile __bit                   CRCACC9             __at(0x3CA1);	// @ (0x794 * 8 + 1)
#define                                 CRCACC9_bit         _BIT_ACCESS(CRCACCH,1)
// CRCCON0<CRCACCM>
extern volatile __bit                   CRCACCM             __at(0x3CCC);	// @ (0x799 * 8 + 4)
#define                                 CRCACCM_bit         _BIT_ACCESS(CRCCON0,4)
// CRCCON0<CRCBUSY>
extern volatile __bit                   CRCBUSY             __at(0x3CCD);	// @ (0x799 * 8 + 5)
#define                                 CRCBUSY_bit         _BIT_ACCESS(CRCCON0,5)
// CRCDATL<CRCDAT0>
extern volatile __bit                   CRCDAT0             __at(0x3C88);	// @ (0x791 * 8 + 0)
#define                                 CRCDAT0_bit         _BIT_ACCESS(CRCDATL,0)
// CRCDATL<CRCDAT1>
extern volatile __bit                   CRCDAT1             __at(0x3C89);	// @ (0x791 * 8 + 1)
#define                                 CRCDAT1_bit         _BIT_ACCESS(CRCDATL,1)
// CRCDATH<CRCDAT10>
extern volatile __bit                   CRCDAT10            __at(0x3C92);	// @ (0x792 * 8 + 2)
#define                                 CRCDAT10_bit        _BIT_ACCESS(CRCDATH,2)
// CRCDATH<CRCDAT11>
extern volatile __bit                   CRCDAT11            __at(0x3C93);	// @ (0x792 * 8 + 3)
#define                                 CRCDAT11_bit        _BIT_ACCESS(CRCDATH,3)
// CRCDATH<CRCDAT12>
extern volatile __bit                   CRCDAT12            __at(0x3C94);	// @ (0x792 * 8 + 4)
#define                                 CRCDAT12_bit        _BIT_ACCESS(CRCDATH,4)
// CRCDATH<CRCDAT13>
extern volatile __bit                   CRCDAT13            __at(0x3C95);	// @ (0x792 * 8 + 5)
#define                                 CRCDAT13_bit        _BIT_ACCESS(CRCDATH,5)
// CRCDATH<CRCDAT14>
extern volatile __bit                   CRCDAT14            __at(0x3C96);	// @ (0x792 * 8 + 6)
#define                                 CRCDAT14_bit        _BIT_ACCESS(CRCDATH,6)
// CRCDATH<CRCDAT15>
extern volatile __bit                   CRCDAT15            __at(0x3C97);	// @ (0x792 * 8 + 7)
#define                                 CRCDAT15_bit        _BIT_ACCESS(CRCDATH,7)
// CRCDATL<CRCDAT2>
extern volatile __bit                   CRCDAT2             __at(0x3C8A);	// @ (0x791 * 8 + 2)
#define                                 CRCDAT2_bit         _BIT_ACCESS(CRCDATL,2)
// CRCDATL<CRCDAT3>
extern volatile __bit                   CRCDAT3             __at(0x3C8B);	// @ (0x791 * 8 + 3)
#define                                 CRCDAT3_bit         _BIT_ACCESS(CRCDATL,3)
// CRCDATL<CRCDAT4>
extern volatile __bit                   CRCDAT4             __at(0x3C8C);	// @ (0x791 * 8 + 4)
#define                                 CRCDAT4_bit         _BIT_ACCESS(CRCDATL,4)
// CRCDATL<CRCDAT5>
extern volatile __bit                   CRCDAT5             __at(0x3C8D);	// @ (0x791 * 8 + 5)
#define                                 CRCDAT5_bit         _BIT_ACCESS(CRCDATL,5)
// CRCDATL<CRCDAT6>
extern volatile __bit                   CRCDAT6             __at(0x3C8E);	// @ (0x791 * 8 + 6)
#define                                 CRCDAT6_bit         _BIT_ACCESS(CRCDATL,6)
// CRCDATH<CRCDAT8>
extern volatile __bit                   CRCDAT8             __at(0x3C90);	// @ (0x792 * 8 + 0)
#define                                 CRCDAT8_bit         _BIT_ACCESS(CRCDATH,0)
// CRCDATH<CRCDAT9>
extern volatile __bit                   CRCDAT9             __at(0x3C91);	// @ (0x792 * 8 + 1)
#define                                 CRCDAT9_bit         _BIT_ACCESS(CRCDATH,1)
// CRCCON1<CRCDLEN0>
extern volatile __bit                   CRCDLEN0            __at(0x3CD4);	// @ (0x79A * 8 + 4)
#define                                 CRCDLEN0_bit        _BIT_ACCESS(CRCCON1,4)
// CRCCON1<CRCDLEN1>
extern volatile __bit                   CRCDLEN1            __at(0x3CD5);	// @ (0x79A * 8 + 5)
#define                                 CRCDLEN1_bit        _BIT_ACCESS(CRCCON1,5)
// CRCCON1<CRCDLEN2>
extern volatile __bit                   CRCDLEN2            __at(0x3CD6);	// @ (0x79A * 8 + 6)
#define                                 CRCDLEN2_bit        _BIT_ACCESS(CRCCON1,6)
// CRCCON1<CRCDLEN3>
extern volatile __bit                   CRCDLEN3            __at(0x3CD7);	// @ (0x79A * 8 + 7)
#define                                 CRCDLEN3_bit        _BIT_ACCESS(CRCCON1,7)
// CRCCON0<CRCEN>
extern volatile __bit                   CRCEN               __at(0x3CCF);	// @ (0x799 * 8 + 7)
#define                                 CRCEN_bit           _BIT_ACCESS(CRCCON0,7)
// CRCCON0<CRCFULL>
extern volatile __bit                   CRCFULL             __at(0x3CC8);	// @ (0x799 * 8 + 0)
#define                                 CRCFULL_bit         _BIT_ACCESS(CRCCON0,0)
// CRCCON0<CRCGO>
extern volatile __bit                   CRCGO               __at(0x3CCE);	// @ (0x799 * 8 + 6)
#define                                 CRCGO_bit           _BIT_ACCESS(CRCCON0,6)
// PIE4<CRCIE>
extern volatile __bit                   CRCIE               __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CRCIE_bit           _BIT_ACCESS(PIE4,6)
// PIR4<CRCIF>
extern volatile __bit                   CRCIF               __at(0xA6);	// @ (0x14 * 8 + 6)
#define                                 CRCIF_bit           _BIT_ACCESS(PIR4,6)
// CRCCON1<CRCPLEN0>
extern volatile __bit                   CRCPLEN0            __at(0x3CD0);	// @ (0x79A * 8 + 0)
#define                                 CRCPLEN0_bit        _BIT_ACCESS(CRCCON1,0)
// CRCCON1<CRCPLEN1>
extern volatile __bit                   CRCPLEN1            __at(0x3CD1);	// @ (0x79A * 8 + 1)
#define                                 CRCPLEN1_bit        _BIT_ACCESS(CRCCON1,1)
// CRCCON1<CRCPLEN2>
extern volatile __bit                   CRCPLEN2            __at(0x3CD2);	// @ (0x79A * 8 + 2)
#define                                 CRCPLEN2_bit        _BIT_ACCESS(CRCCON1,2)
// CRCCON1<CRCPLEN3>
extern volatile __bit                   CRCPLEN3            __at(0x3CD3);	// @ (0x79A * 8 + 3)
#define                                 CRCPLEN3_bit        _BIT_ACCESS(CRCCON1,3)
// CRCSHIFTL<CRCSHIFT0>
extern volatile __bit                   CRCSHIFT0           __at(0x3CA8);	// @ (0x795 * 8 + 0)
#define                                 CRCSHIFT0_bit       _BIT_ACCESS(CRCSHIFTL,0)
// CRCSHIFTL<CRCSHIFT1>
extern volatile __bit                   CRCSHIFT1           __at(0x3CA9);	// @ (0x795 * 8 + 1)
#define                                 CRCSHIFT1_bit       _BIT_ACCESS(CRCSHIFTL,1)
// CRCSHIFTH<CRCSHIFT10>
extern volatile __bit                   CRCSHIFT10          __at(0x3CB2);	// @ (0x796 * 8 + 2)
#define                                 CRCSHIFT10_bit      _BIT_ACCESS(CRCSHIFTH,2)
// CRCSHIFTH<CRCSHIFT11>
extern volatile __bit                   CRCSHIFT11          __at(0x3CB3);	// @ (0x796 * 8 + 3)
#define                                 CRCSHIFT11_bit      _BIT_ACCESS(CRCSHIFTH,3)
// CRCSHIFTH<CRCSHIFT12>
extern volatile __bit                   CRCSHIFT12          __at(0x3CB4);	// @ (0x796 * 8 + 4)
#define                                 CRCSHIFT12_bit      _BIT_ACCESS(CRCSHIFTH,4)
// CRCSHIFTH<CRCSHIFT13>
extern volatile __bit                   CRCSHIFT13          __at(0x3CB5);	// @ (0x796 * 8 + 5)
#define                                 CRCSHIFT13_bit      _BIT_ACCESS(CRCSHIFTH,5)
// CRCSHIFTH<CRCSHIFT14>
extern volatile __bit                   CRCSHIFT14          __at(0x3CB6);	// @ (0x796 * 8 + 6)
#define                                 CRCSHIFT14_bit      _BIT_ACCESS(CRCSHIFTH,6)
// CRCSHIFTH<CRCSHIFT15>
extern volatile __bit                   CRCSHIFT15          __at(0x3CB7);	// @ (0x796 * 8 + 7)
#define                                 CRCSHIFT15_bit      _BIT_ACCESS(CRCSHIFTH,7)
// CRCSHIFTL<CRCSHIFT2>
extern volatile __bit                   CRCSHIFT2           __at(0x3CAA);	// @ (0x795 * 8 + 2)
#define                                 CRCSHIFT2_bit       _BIT_ACCESS(CRCSHIFTL,2)
// CRCSHIFTL<CRCSHIFT3>
extern volatile __bit                   CRCSHIFT3           __at(0x3CAB);	// @ (0x795 * 8 + 3)
#define                                 CRCSHIFT3_bit       _BIT_ACCESS(CRCSHIFTL,3)
// CRCSHIFTL<CRCSHIFT4>
extern volatile __bit                   CRCSHIFT4           __at(0x3CAC);	// @ (0x795 * 8 + 4)
#define                                 CRCSHIFT4_bit       _BIT_ACCESS(CRCSHIFTL,4)
// CRCSHIFTL<CRCSHIFT5>
extern volatile __bit                   CRCSHIFT5           __at(0x3CAD);	// @ (0x795 * 8 + 5)
#define                                 CRCSHIFT5_bit       _BIT_ACCESS(CRCSHIFTL,5)
// CRCSHIFTL<CRCSHIFT6>
extern volatile __bit                   CRCSHIFT6           __at(0x3CAE);	// @ (0x795 * 8 + 6)
#define                                 CRCSHIFT6_bit       _BIT_ACCESS(CRCSHIFTL,6)
// CRCSHIFTL<CRCSHIFT7>
extern volatile __bit                   CRCSHIFT7           __at(0x3CAF);	// @ (0x795 * 8 + 7)
#define                                 CRCSHIFT7_bit       _BIT_ACCESS(CRCSHIFTL,7)
// CRCSHIFTH<CRCSHIFT8>
extern volatile __bit                   CRCSHIFT8           __at(0x3CB0);	// @ (0x796 * 8 + 0)
#define                                 CRCSHIFT8_bit       _BIT_ACCESS(CRCSHIFTH,0)
// CRCSHIFTH<CRCSHIFT9>
extern volatile __bit                   CRCSHIFT9           __at(0x3CB1);	// @ (0x796 * 8 + 1)
#define                                 CRCSHIFT9_bit       _BIT_ACCESS(CRCSHIFTH,1)
// CRCCON0<CRCSHIFTM>
extern volatile __bit                   CRCSHIFTM           __at(0x3CC9);	// @ (0x799 * 8 + 1)
#define                                 CRCSHIFTM_bit       _BIT_ACCESS(CRCCON0,1)
// CRCXORL<CRCXOR1>
extern volatile __bit                   CRCXOR1             __at(0x3CB9);	// @ (0x797 * 8 + 1)
#define                                 CRCXOR1_bit         _BIT_ACCESS(CRCXORL,1)
// CRCXORH<CRCXOR10>
extern volatile __bit                   CRCXOR10            __at(0x3CC2);	// @ (0x798 * 8 + 2)
#define                                 CRCXOR10_bit        _BIT_ACCESS(CRCXORH,2)
// CRCXORH<CRCXOR11>
extern volatile __bit                   CRCXOR11            __at(0x3CC3);	// @ (0x798 * 8 + 3)
#define                                 CRCXOR11_bit        _BIT_ACCESS(CRCXORH,3)
// CRCXORH<CRCXOR12>
extern volatile __bit                   CRCXOR12            __at(0x3CC4);	// @ (0x798 * 8 + 4)
#define                                 CRCXOR12_bit        _BIT_ACCESS(CRCXORH,4)
// CRCXORH<CRCXOR13>
extern volatile __bit                   CRCXOR13            __at(0x3CC5);	// @ (0x798 * 8 + 5)
#define                                 CRCXOR13_bit        _BIT_ACCESS(CRCXORH,5)
// CRCXORH<CRCXOR14>
extern volatile __bit                   CRCXOR14            __at(0x3CC6);	// @ (0x798 * 8 + 6)
#define                                 CRCXOR14_bit        _BIT_ACCESS(CRCXORH,6)
// CRCXORH<CRCXOR15>
extern volatile __bit                   CRCXOR15            __at(0x3CC7);	// @ (0x798 * 8 + 7)
#define                                 CRCXOR15_bit        _BIT_ACCESS(CRCXORH,7)
// CRCXORL<CRCXOR2>
extern volatile __bit                   CRCXOR2             __at(0x3CBA);	// @ (0x797 * 8 + 2)
#define                                 CRCXOR2_bit         _BIT_ACCESS(CRCXORL,2)
// CRCXORL<CRCXOR3>
extern volatile __bit                   CRCXOR3             __at(0x3CBB);	// @ (0x797 * 8 + 3)
#define                                 CRCXOR3_bit         _BIT_ACCESS(CRCXORL,3)
// CRCXORL<CRCXOR4>
extern volatile __bit                   CRCXOR4             __at(0x3CBC);	// @ (0x797 * 8 + 4)
#define                                 CRCXOR4_bit         _BIT_ACCESS(CRCXORL,4)
// CRCXORL<CRCXOR5>
extern volatile __bit                   CRCXOR5             __at(0x3CBD);	// @ (0x797 * 8 + 5)
#define                                 CRCXOR5_bit         _BIT_ACCESS(CRCXORL,5)
// CRCXORL<CRCXOR6>
extern volatile __bit                   CRCXOR6             __at(0x3CBE);	// @ (0x797 * 8 + 6)
#define                                 CRCXOR6_bit         _BIT_ACCESS(CRCXORL,6)
// CRCXORL<CRCXOR7>
extern volatile __bit                   CRCXOR7             __at(0x3CBF);	// @ (0x797 * 8 + 7)
#define                                 CRCXOR7_bit         _BIT_ACCESS(CRCXORL,7)
// CRCXORH<CRCXOR8>
extern volatile __bit                   CRCXOR8             __at(0x3CC0);	// @ (0x798 * 8 + 0)
#define                                 CRCXOR8_bit         _BIT_ACCESS(CRCXORH,0)
// CRCXORH<CRCXOR9>
extern volatile __bit                   CRCXOR9             __at(0x3CC1);	// @ (0x798 * 8 + 1)
#define                                 CRCXOR9_bit         _BIT_ACCESS(CRCXORH,1)
// CRCDATL<CRDCDAT7>
extern volatile __bit                   CRDCDAT7            __at(0x3C8F);	// @ (0x791 * 8 + 7)
#define                                 CRDCDAT7_bit        _BIT_ACCESS(CRCDATL,7)
// CWG1CLKCON<CS>
extern volatile __bit                   CS                  __at(0x34C8);	// @ (0x699 * 8 + 0)
#define                                 CS_bit              _BIT_ACCESS(CWG1CLKCON,0)
// CWG1AS1<CWG1C1AS>
extern volatile __bit                   CWG1C1AS            __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 CWG1C1AS_bit        _BIT_ACCESS(CWG1AS1,1)
// CWG1AS1<CWG1C2AS>
extern volatile __bit                   CWG1C2AS            __at(0x34A2);	// @ (0x694 * 8 + 2)
#define                                 CWG1C2AS_bit        _BIT_ACCESS(CWG1AS1,2)
// CWG1CLKCON<CWG1CS>
extern volatile __bit                   CWG1CS              __at(0x34C8);	// @ (0x699 * 8 + 0)
#define                                 CWG1CS_bit          _BIT_ACCESS(CWG1CLKCON,0)
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
// CWG1CON0<CWG1EN>
extern volatile __bit                   CWG1EN              __at(0x34B7);	// @ (0x696 * 8 + 7)
#define                                 CWG1EN_bit          _BIT_ACCESS(CWG1CON0,7)
// CWG1CON1<CWG1IN>
extern volatile __bit                   CWG1IN              __at(0x34BD);	// @ (0x697 * 8 + 5)
#define                                 CWG1IN_bit          _BIT_ACCESS(CWG1CON1,5)
// CWG1AS1<CWG1INAS>
extern volatile __bit                   CWG1INAS            __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 CWG1INAS_bit        _BIT_ACCESS(CWG1AS1,0)
// CWG1ISM<CWG1IS0>
extern volatile __bit                   CWG1IS0             __at(0x34D0);	// @ (0x69A * 8 + 0)
#define                                 CWG1IS0_bit         _BIT_ACCESS(CWG1ISM,0)
// CWG1ISM<CWG1IS1>
extern volatile __bit                   CWG1IS1             __at(0x34D1);	// @ (0x69A * 8 + 1)
#define                                 CWG1IS1_bit         _BIT_ACCESS(CWG1ISM,1)
// CWG1ISM<CWG1IS2>
extern volatile __bit                   CWG1IS2             __at(0x34D2);	// @ (0x69A * 8 + 2)
#define                                 CWG1IS2_bit         _BIT_ACCESS(CWG1ISM,2)
// CWG1CON0<CWG1LD>
extern volatile __bit                   CWG1LD              __at(0x34B6);	// @ (0x696 * 8 + 6)
#define                                 CWG1LD_bit          _BIT_ACCESS(CWG1CON0,6)
// CWG1AS0<CWG1LSAC0>
extern volatile __bit                   CWG1LSAC0           __at(0x349A);	// @ (0x693 * 8 + 2)
#define                                 CWG1LSAC0_bit       _BIT_ACCESS(CWG1AS0,2)
// CWG1AS0<CWG1LSAC1>
extern volatile __bit                   CWG1LSAC1           __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 CWG1LSAC1_bit       _BIT_ACCESS(CWG1AS0,3)
// CWG1AS0<CWG1LSBD0>
extern volatile __bit                   CWG1LSBD0           __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 CWG1LSBD0_bit       _BIT_ACCESS(CWG1AS0,4)
// CWG1AS0<CWG1LSBD1>
extern volatile __bit                   CWG1LSBD1           __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 CWG1LSBD1_bit       _BIT_ACCESS(CWG1AS0,5)
// CWG1CON0<CWG1MODE0>
extern volatile __bit                   CWG1MODE0           __at(0x34B0);	// @ (0x696 * 8 + 0)
#define                                 CWG1MODE0_bit       _BIT_ACCESS(CWG1CON0,0)
// CWG1CON0<CWG1MODE1>
extern volatile __bit                   CWG1MODE1           __at(0x34B1);	// @ (0x696 * 8 + 1)
#define                                 CWG1MODE1_bit       _BIT_ACCESS(CWG1CON0,1)
// CWG1CON0<CWG1MODE2>
extern volatile __bit                   CWG1MODE2           __at(0x34B2);	// @ (0x696 * 8 + 2)
#define                                 CWG1MODE2_bit       _BIT_ACCESS(CWG1CON0,2)
// CWG1OCON1<CWG1OEA>
extern volatile __bit                   CWG1OEA             __at(0x34C0);	// @ (0x698 * 8 + 0)
#define                                 CWG1OEA_bit         _BIT_ACCESS(CWG1OCON1,0)
// CWG1OCON1<CWG1OEB>
extern volatile __bit                   CWG1OEB             __at(0x34C1);	// @ (0x698 * 8 + 1)
#define                                 CWG1OEB_bit         _BIT_ACCESS(CWG1OCON1,1)
// CWG1OCON0<CWG1OVRA>
extern volatile __bit                   CWG1OVRA            __at(0x34AC);	// @ (0x695 * 8 + 4)
#define                                 CWG1OVRA_bit        _BIT_ACCESS(CWG1OCON0,4)
// CWG1OCON0<CWG1OVRB>
extern volatile __bit                   CWG1OVRB            __at(0x34AD);	// @ (0x695 * 8 + 5)
#define                                 CWG1OVRB_bit        _BIT_ACCESS(CWG1OCON0,5)
// CWG1OCON0<CWG1OVRC>
extern volatile __bit                   CWG1OVRC            __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 CWG1OVRC_bit        _BIT_ACCESS(CWG1OCON0,6)
// CWG1OCON0<CWG1OVRD>
extern volatile __bit                   CWG1OVRD            __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 CWG1OVRD_bit        _BIT_ACCESS(CWG1OCON0,7)
// CWG1CON1<CWG1POLA>
extern volatile __bit                   CWG1POLA            __at(0x34B8);	// @ (0x697 * 8 + 0)
#define                                 CWG1POLA_bit        _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<CWG1POLB>
extern volatile __bit                   CWG1POLB            __at(0x34B9);	// @ (0x697 * 8 + 1)
#define                                 CWG1POLB_bit        _BIT_ACCESS(CWG1CON1,1)
// CWG1CON1<CWG1POLC>
extern volatile __bit                   CWG1POLC            __at(0x34BA);	// @ (0x697 * 8 + 2)
#define                                 CWG1POLC_bit        _BIT_ACCESS(CWG1CON1,2)
// CWG1CON1<CWG1POLD>
extern volatile __bit                   CWG1POLD            __at(0x34BB);	// @ (0x697 * 8 + 3)
#define                                 CWG1POLD_bit        _BIT_ACCESS(CWG1CON1,3)
// CWG1AS0<CWG1REN>
extern volatile __bit                   CWG1REN             __at(0x349E);	// @ (0x693 * 8 + 6)
#define                                 CWG1REN_bit         _BIT_ACCESS(CWG1AS0,6)
// CWG1AS0<CWG1SHUTDOWN>
extern volatile __bit                   CWG1SHUTDOWN        __at(0x349F);	// @ (0x693 * 8 + 7)
#define                                 CWG1SHUTDOWN_bit    _BIT_ACCESS(CWG1AS0,7)
// CWG1OCON0<CWG1STRA>
extern volatile __bit                   CWG1STRA            __at(0x34A8);	// @ (0x695 * 8 + 0)
#define                                 CWG1STRA_bit        _BIT_ACCESS(CWG1OCON0,0)
// CWG1OCON0<CWG1STRB>
extern volatile __bit                   CWG1STRB            __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 CWG1STRB_bit        _BIT_ACCESS(CWG1OCON0,1)
// CWG1OCON0<CWG1STRC>
extern volatile __bit                   CWG1STRC            __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 CWG1STRC_bit        _BIT_ACCESS(CWG1OCON0,2)
// CWG1OCON0<CWG1STRD>
extern volatile __bit                   CWG1STRD            __at(0x34AB);	// @ (0x695 * 8 + 3)
#define                                 CWG1STRD_bit        _BIT_ACCESS(CWG1OCON0,3)
// CWG1AS1<CWG1TMR2AS>
extern volatile __bit                   CWG1TMR2AS          __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 CWG1TMR2AS_bit      _BIT_ACCESS(CWG1AS1,4)
// CWG1AS1<CWG1TMR4AS>
extern volatile __bit                   CWG1TMR4AS          __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 CWG1TMR4AS_bit      _BIT_ACCESS(CWG1AS1,5)
// CWG1AS1<CWG1TMR6AS>
extern volatile __bit                   CWG1TMR6AS          __at(0x34A6);	// @ (0x694 * 8 + 6)
#define                                 CWG1TMR6AS_bit      _BIT_ACCESS(CWG1AS1,6)
// APFCON<CWGASEL>
extern volatile __bit                   CWGASEL             __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 CWGASEL_bit         _BIT_ACCESS(APFCON,6)
// APFCON<CWGBSEL>
extern volatile __bit                   CWGBSEL             __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 CWGBSEL_bit         _BIT_ACCESS(APFCON,5)
// PIE3<CWGIE>
extern volatile __bit                   CWGIE               __at(0x49D);	// @ (0x93 * 8 + 5)
#define                                 CWGIE_bit           _BIT_ACCESS(PIE3,5)
// PIR3<CWGIF>
extern volatile __bit                   CWGIF               __at(0x9D);	// @ (0x13 * 8 + 5)
#define                                 CWGIF_bit           _BIT_ACCESS(PIR3,5)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// DAC1CON0<D1PSS0>
extern volatile __bit                   D1PSS0              __at(0x8C2);	// @ (0x118 * 8 + 2)
#define                                 D1PSS0_bit          _BIT_ACCESS(DAC1CON0,2)
// DAC1CON0<D1PSS1>
extern volatile __bit                   D1PSS1              __at(0x8C3);	// @ (0x118 * 8 + 3)
#define                                 D1PSS1_bit          _BIT_ACCESS(DAC1CON0,3)
// DAC1CON0<DAC1EN>
extern volatile __bit                   DAC1EN              __at(0x8C7);	// @ (0x118 * 8 + 7)
#define                                 DAC1EN_bit          _BIT_ACCESS(DAC1CON0,7)
// DAC1CON0<DAC1OE>
extern volatile __bit                   DAC1OE              __at(0x8C5);	// @ (0x118 * 8 + 5)
#define                                 DAC1OE_bit          _BIT_ACCESS(DAC1CON0,5)
// DAC1CON1<DAC1R0>
extern volatile __bit                   DAC1R0              __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 DAC1R0_bit          _BIT_ACCESS(DAC1CON1,0)
// DAC1CON1<DAC1R1>
extern volatile __bit                   DAC1R1              __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 DAC1R1_bit          _BIT_ACCESS(DAC1CON1,1)
// DAC1CON1<DAC1R2>
extern volatile __bit                   DAC1R2              __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 DAC1R2_bit          _BIT_ACCESS(DAC1CON1,2)
// DAC1CON1<DAC1R3>
extern volatile __bit                   DAC1R3              __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 DAC1R3_bit          _BIT_ACCESS(DAC1CON1,3)
// DAC1CON1<DAC1R4>
extern volatile __bit                   DAC1R4              __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 DAC1R4_bit          _BIT_ACCESS(DAC1CON1,4)
// DAC1CON1<DAC1R5>
extern volatile __bit                   DAC1R5              __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 DAC1R5_bit          _BIT_ACCESS(DAC1CON1,5)
// DAC1CON1<DAC1R6>
extern volatile __bit                   DAC1R6              __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 DAC1R6_bit          _BIT_ACCESS(DAC1CON1,6)
// DAC1CON1<DAC1R7>
extern volatile __bit                   DAC1R7              __at(0x8CF);	// @ (0x119 * 8 + 7)
#define                                 DAC1R7_bit          _BIT_ACCESS(DAC1CON1,7)
// CRCDATL<DAT0>
extern volatile __bit                   DAT0                __at(0x3C88);	// @ (0x791 * 8 + 0)
#define                                 DAT0_bit            _BIT_ACCESS(CRCDATL,0)
// CRCDATL<DAT1>
extern volatile __bit                   DAT1                __at(0x3C89);	// @ (0x791 * 8 + 1)
#define                                 DAT1_bit            _BIT_ACCESS(CRCDATL,1)
// CRCDATH<DAT10>
extern volatile __bit                   DAT10               __at(0x3C92);	// @ (0x792 * 8 + 2)
#define                                 DAT10_bit           _BIT_ACCESS(CRCDATH,2)
// CRCDATH<DAT11>
extern volatile __bit                   DAT11               __at(0x3C93);	// @ (0x792 * 8 + 3)
#define                                 DAT11_bit           _BIT_ACCESS(CRCDATH,3)
// CRCDATH<DAT12>
extern volatile __bit                   DAT12               __at(0x3C94);	// @ (0x792 * 8 + 4)
#define                                 DAT12_bit           _BIT_ACCESS(CRCDATH,4)
// CRCDATH<DAT13>
extern volatile __bit                   DAT13               __at(0x3C95);	// @ (0x792 * 8 + 5)
#define                                 DAT13_bit           _BIT_ACCESS(CRCDATH,5)
// CRCDATH<DAT14>
extern volatile __bit                   DAT14               __at(0x3C96);	// @ (0x792 * 8 + 6)
#define                                 DAT14_bit           _BIT_ACCESS(CRCDATH,6)
// CRCDATH<DAT15>
extern volatile __bit                   DAT15               __at(0x3C97);	// @ (0x792 * 8 + 7)
#define                                 DAT15_bit           _BIT_ACCESS(CRCDATH,7)
// CRCDATL<DAT2>
extern volatile __bit                   DAT2                __at(0x3C8A);	// @ (0x791 * 8 + 2)
#define                                 DAT2_bit            _BIT_ACCESS(CRCDATL,2)
// CRCDATL<DAT3>
extern volatile __bit                   DAT3                __at(0x3C8B);	// @ (0x791 * 8 + 3)
#define                                 DAT3_bit            _BIT_ACCESS(CRCDATL,3)
// CRCDATL<DAT4>
extern volatile __bit                   DAT4                __at(0x3C8C);	// @ (0x791 * 8 + 4)
#define                                 DAT4_bit            _BIT_ACCESS(CRCDATL,4)
// CRCDATL<DAT5>
extern volatile __bit                   DAT5                __at(0x3C8D);	// @ (0x791 * 8 + 5)
#define                                 DAT5_bit            _BIT_ACCESS(CRCDATL,5)
// CRCDATL<DAT6>
extern volatile __bit                   DAT6                __at(0x3C8E);	// @ (0x791 * 8 + 6)
#define                                 DAT6_bit            _BIT_ACCESS(CRCDATL,6)
// CRCDATL<DAT7>
extern volatile __bit                   DAT7                __at(0x3C8F);	// @ (0x791 * 8 + 7)
#define                                 DAT7_bit            _BIT_ACCESS(CRCDATL,7)
// CRCDATH<DAT8>
extern volatile __bit                   DAT8                __at(0x3C90);	// @ (0x792 * 8 + 0)
#define                                 DAT8_bit            _BIT_ACCESS(CRCDATH,0)
// CRCDATH<DAT9>
extern volatile __bit                   DAT9                __at(0x3C91);	// @ (0x792 * 8 + 1)
#define                                 DAT9_bit            _BIT_ACCESS(CRCDATH,1)
// CWG1DBF<DBF0>
extern volatile __bit                   DBF0                __at(0x3490);	// @ (0x692 * 8 + 0)
#define                                 DBF0_bit            _BIT_ACCESS(CWG1DBF,0)
// CWG1DBF<DBF1>
extern volatile __bit                   DBF1                __at(0x3491);	// @ (0x692 * 8 + 1)
#define                                 DBF1_bit            _BIT_ACCESS(CWG1DBF,1)
// CWG1DBF<DBF2>
extern volatile __bit                   DBF2                __at(0x3492);	// @ (0x692 * 8 + 2)
#define                                 DBF2_bit            _BIT_ACCESS(CWG1DBF,2)
// CWG1DBF<DBF3>
extern volatile __bit                   DBF3                __at(0x3493);	// @ (0x692 * 8 + 3)
#define                                 DBF3_bit            _BIT_ACCESS(CWG1DBF,3)
// CWG1DBF<DBF4>
extern volatile __bit                   DBF4                __at(0x3494);	// @ (0x692 * 8 + 4)
#define                                 DBF4_bit            _BIT_ACCESS(CWG1DBF,4)
// CWG1DBF<DBF5>
extern volatile __bit                   DBF5                __at(0x3495);	// @ (0x692 * 8 + 5)
#define                                 DBF5_bit            _BIT_ACCESS(CWG1DBF,5)
// CWG1DBR<DBR0>
extern volatile __bit                   DBR0                __at(0x3488);	// @ (0x691 * 8 + 0)
#define                                 DBR0_bit            _BIT_ACCESS(CWG1DBR,0)
// CWG1DBR<DBR1>
extern volatile __bit                   DBR1                __at(0x3489);	// @ (0x691 * 8 + 1)
#define                                 DBR1_bit            _BIT_ACCESS(CWG1DBR,1)
// CWG1DBR<DBR2>
extern volatile __bit                   DBR2                __at(0x348A);	// @ (0x691 * 8 + 2)
#define                                 DBR2_bit            _BIT_ACCESS(CWG1DBR,2)
// CWG1DBR<DBR3>
extern volatile __bit                   DBR3                __at(0x348B);	// @ (0x691 * 8 + 3)
#define                                 DBR3_bit            _BIT_ACCESS(CWG1DBR,3)
// CWG1DBR<DBR4>
extern volatile __bit                   DBR4                __at(0x348C);	// @ (0x691 * 8 + 4)
#define                                 DBR4_bit            _BIT_ACCESS(CWG1DBR,4)
// CWG1DBR<DBR5>
extern volatile __bit                   DBR5                __at(0x348D);	// @ (0x691 * 8 + 5)
#define                                 DBR5_bit            _BIT_ACCESS(CWG1DBR,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// CRCCON1<DLEN0>
extern volatile __bit                   DLEN0               __at(0x3CD4);	// @ (0x79A * 8 + 4)
#define                                 DLEN0_bit           _BIT_ACCESS(CRCCON1,4)
// CRCCON1<DLEN1>
extern volatile __bit                   DLEN1               __at(0x3CD5);	// @ (0x79A * 8 + 5)
#define                                 DLEN1_bit           _BIT_ACCESS(CRCCON1,5)
// CRCCON1<DLEN2>
extern volatile __bit                   DLEN2               __at(0x3CD6);	// @ (0x79A * 8 + 6)
#define                                 DLEN2_bit           _BIT_ACCESS(CRCCON1,6)
// CRCCON1<DLEN3>
extern volatile __bit                   DLEN3               __at(0x3CD7);	// @ (0x79A * 8 + 7)
#define                                 DLEN3_bit           _BIT_ACCESS(CRCCON1,7)
// PMCON1<FREE>
extern volatile __bit                   FREE                __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(PMCON1,4)
// CRCCON0<FULL>
extern volatile __bit                   FULL                __at(0x3CC8);	// @ (0x799 * 8 + 0)
#define                                 FULL_bit            _BIT_ACCESS(CRCCON0,0)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// CWG1CON0<G1EN>
extern volatile __bit                   G1EN                __at(0x34B7);	// @ (0x696 * 8 + 7)
#define                                 G1EN_bit            _BIT_ACCESS(CWG1CON0,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// SCANHADRL<HADR0>
extern volatile __bit                   HADR0               __at(0x38D0);	// @ (0x71A * 8 + 0)
#define                                 HADR0_bit           _BIT_ACCESS(SCANHADRL,0)
// SCANHADRL<HADR1>
extern volatile __bit                   HADR1               __at(0x38D1);	// @ (0x71A * 8 + 1)
#define                                 HADR1_bit           _BIT_ACCESS(SCANHADRL,1)
// SCANHADRH<HADR10>
extern volatile __bit                   HADR10              __at(0x38DA);	// @ (0x71B * 8 + 2)
#define                                 HADR10_bit          _BIT_ACCESS(SCANHADRH,2)
// SCANHADRH<HADR11>
extern volatile __bit                   HADR11              __at(0x38DB);	// @ (0x71B * 8 + 3)
#define                                 HADR11_bit          _BIT_ACCESS(SCANHADRH,3)
// SCANHADRH<HADR12>
extern volatile __bit                   HADR12              __at(0x38DC);	// @ (0x71B * 8 + 4)
#define                                 HADR12_bit          _BIT_ACCESS(SCANHADRH,4)
// SCANHADRH<HADR13>
extern volatile __bit                   HADR13              __at(0x38DD);	// @ (0x71B * 8 + 5)
#define                                 HADR13_bit          _BIT_ACCESS(SCANHADRH,5)
// SCANHADRH<HADR14>
extern volatile __bit                   HADR14              __at(0x38DE);	// @ (0x71B * 8 + 6)
#define                                 HADR14_bit          _BIT_ACCESS(SCANHADRH,6)
// SCANHADRH<HADR15>
extern volatile __bit                   HADR15              __at(0x38DF);	// @ (0x71B * 8 + 7)
#define                                 HADR15_bit          _BIT_ACCESS(SCANHADRH,7)
// SCANHADRL<HADR3>
extern volatile __bit                   HADR3               __at(0x38D3);	// @ (0x71A * 8 + 3)
#define                                 HADR3_bit           _BIT_ACCESS(SCANHADRL,3)
// SCANHADRL<HADR4>
extern volatile __bit                   HADR4               __at(0x38D4);	// @ (0x71A * 8 + 4)
#define                                 HADR4_bit           _BIT_ACCESS(SCANHADRL,4)
// SCANHADRL<HADR5>
extern volatile __bit                   HADR5               __at(0x38D5);	// @ (0x71A * 8 + 5)
#define                                 HADR5_bit           _BIT_ACCESS(SCANHADRL,5)
// SCANHADRL<HADR6>
extern volatile __bit                   HADR6               __at(0x38D6);	// @ (0x71A * 8 + 6)
#define                                 HADR6_bit           _BIT_ACCESS(SCANHADRL,6)
// SCANHADRL<HADR7>
extern volatile __bit                   HADR7               __at(0x38D7);	// @ (0x71A * 8 + 7)
#define                                 HADR7_bit           _BIT_ACCESS(SCANHADRL,7)
// SCANHADRH<HADR8>
extern volatile __bit                   HADR8               __at(0x38D8);	// @ (0x71B * 8 + 0)
#define                                 HADR8_bit           _BIT_ACCESS(SCANHADRH,0)
// SCANHADRH<HADR9>
extern volatile __bit                   HADR9               __at(0x38D9);	// @ (0x71B * 8 + 1)
#define                                 HADR9_bit           _BIT_ACCESS(SCANHADRH,1)
// SCANHADRL<HARD2>
extern volatile __bit                   HARD2               __at(0x38D2);	// @ (0x71A * 8 + 2)
#define                                 HARD2_bit           _BIT_ACCESS(SCANHADRL,2)
// OSCSTAT<HFIOFL>
extern volatile __bit                   HFIOFL              __at(0x4D3);	// @ (0x9A * 8 + 3)
#define                                 HFIOFL_bit          _BIT_ACCESS(OSCSTAT,3)
// OSCSTAT<HFIOFR>
extern volatile __bit                   HFIOFR              __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 HFIOFR_bit          _BIT_ACCESS(OSCSTAT,4)
// OSCSTAT<HFIOFS>
extern volatile __bit                   HFIOFS              __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 HFIOFS_bit          _BIT_ACCESS(OSCSTAT,0)
// CWG1CON1<IN>
extern volatile __bit                   IN                  __at(0x34BD);	// @ (0x697 * 8 + 5)
#define                                 IN_bit              _BIT_ACCESS(CWG1CON1,5)
// CWG1AS1<INAS>
extern volatile __bit                   INAS                __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 INAS_bit            _BIT_ACCESS(CWG1AS1,0)
// INLVLA<INLVLA0>
extern volatile __bit                   INLVLA0             __at(0x1C60);	// @ (0x38C * 8 + 0)
#define                                 INLVLA0_bit         _BIT_ACCESS(INLVLA,0)
// INLVLA<INLVLA1>
extern volatile __bit                   INLVLA1             __at(0x1C61);	// @ (0x38C * 8 + 1)
#define                                 INLVLA1_bit         _BIT_ACCESS(INLVLA,1)
// INLVLA<INLVLA2>
extern volatile __bit                   INLVLA2             __at(0x1C62);	// @ (0x38C * 8 + 2)
#define                                 INLVLA2_bit         _BIT_ACCESS(INLVLA,2)
// INLVLA<INLVLA3>
extern volatile __bit                   INLVLA3             __at(0x1C63);	// @ (0x38C * 8 + 3)
#define                                 INLVLA3_bit         _BIT_ACCESS(INLVLA,3)
// INLVLA<INLVLA4>
extern volatile __bit                   INLVLA4             __at(0x1C64);	// @ (0x38C * 8 + 4)
#define                                 INLVLA4_bit         _BIT_ACCESS(INLVLA,4)
// INLVLA<INLVLA5>
extern volatile __bit                   INLVLA5             __at(0x1C65);	// @ (0x38C * 8 + 5)
#define                                 INLVLA5_bit         _BIT_ACCESS(INLVLA,5)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x4AE);	// @ (0x95 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// SCANCON0<INTM>
extern volatile __bit                   INTM                __at(0x38E3);	// @ (0x71C * 8 + 3)
#define                                 INTM_bit            _BIT_ACCESS(SCANCON0,3)
// SCANCON0<INVALID>
extern volatile __bit                   INVALID             __at(0x38E4);	// @ (0x71C * 8 + 4)
#define                                 INVALID_bit         _BIT_ACCESS(SCANCON0,4)
// IOCAF<IOCAF0>
extern volatile __bit                   IOCAF0              __at(0x1C98);	// @ (0x393 * 8 + 0)
#define                                 IOCAF0_bit          _BIT_ACCESS(IOCAF,0)
// IOCAF<IOCAF1>
extern volatile __bit                   IOCAF1              __at(0x1C99);	// @ (0x393 * 8 + 1)
#define                                 IOCAF1_bit          _BIT_ACCESS(IOCAF,1)
// IOCAF<IOCAF2>
extern volatile __bit                   IOCAF2              __at(0x1C9A);	// @ (0x393 * 8 + 2)
#define                                 IOCAF2_bit          _BIT_ACCESS(IOCAF,2)
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
// IOCAN<IOCAN2>
extern volatile __bit                   IOCAN2              __at(0x1C92);	// @ (0x392 * 8 + 2)
#define                                 IOCAN2_bit          _BIT_ACCESS(IOCAN,2)
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
// IOCAP<IOCAP2>
extern volatile __bit                   IOCAP2              __at(0x1C8A);	// @ (0x391 * 8 + 2)
#define                                 IOCAP2_bit          _BIT_ACCESS(IOCAP,2)
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
extern volatile __bit                   IRCF0               __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,3)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x4CC);	// @ (0x99 * 8 + 4)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x4CD);	// @ (0x99 * 8 + 5)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<IRCF3>
extern volatile __bit                   IRCF3               __at(0x4CE);	// @ (0x99 * 8 + 6)
#define                                 IRCF3_bit           _BIT_ACCESS(OSCCON,6)
// CWG1ISM<IS0>
extern volatile __bit                   IS0                 __at(0x34D0);	// @ (0x69A * 8 + 0)
#define                                 IS0_bit             _BIT_ACCESS(CWG1ISM,0)
// CWG1ISM<IS1>
extern volatile __bit                   IS1                 __at(0x34D1);	// @ (0x69A * 8 + 1)
#define                                 IS1_bit             _BIT_ACCESS(CWG1ISM,1)
// CWG1ISM<IS2>
extern volatile __bit                   IS2                 __at(0x34D2);	// @ (0x69A * 8 + 2)
#define                                 IS2_bit             _BIT_ACCESS(CWG1ISM,2)
// SCANLADRH<LADR10>
extern volatile __bit                   LADR10              __at(0x38CA);	// @ (0x719 * 8 + 2)
#define                                 LADR10_bit          _BIT_ACCESS(SCANLADRH,2)
// SCANLADRH<LADR11>
extern volatile __bit                   LADR11              __at(0x38CB);	// @ (0x719 * 8 + 3)
#define                                 LADR11_bit          _BIT_ACCESS(SCANLADRH,3)
// SCANLADRH<LADR12>
extern volatile __bit                   LADR12              __at(0x38CC);	// @ (0x719 * 8 + 4)
#define                                 LADR12_bit          _BIT_ACCESS(SCANLADRH,4)
// SCANLADRH<LADR13>
extern volatile __bit                   LADR13              __at(0x38CD);	// @ (0x719 * 8 + 5)
#define                                 LADR13_bit          _BIT_ACCESS(SCANLADRH,5)
// SCANLADRH<LADR14>
extern volatile __bit                   LADR14              __at(0x38CE);	// @ (0x719 * 8 + 6)
#define                                 LADR14_bit          _BIT_ACCESS(SCANLADRH,6)
// SCANLADRH<LADR15>
extern volatile __bit                   LADR15              __at(0x38CF);	// @ (0x719 * 8 + 7)
#define                                 LADR15_bit          _BIT_ACCESS(SCANLADRH,7)
// SCANLADRL<LADR2>
extern volatile __bit                   LADR2               __at(0x38C2);	// @ (0x718 * 8 + 2)
#define                                 LADR2_bit           _BIT_ACCESS(SCANLADRL,2)
// SCANLADRL<LADR3>
extern volatile __bit                   LADR3               __at(0x38C3);	// @ (0x718 * 8 + 3)
#define                                 LADR3_bit           _BIT_ACCESS(SCANLADRL,3)
// SCANLADRL<LADR4>
extern volatile __bit                   LADR4               __at(0x38C4);	// @ (0x718 * 8 + 4)
#define                                 LADR4_bit           _BIT_ACCESS(SCANLADRL,4)
// SCANLADRL<LADR5>
extern volatile __bit                   LADR5               __at(0x38C5);	// @ (0x718 * 8 + 5)
#define                                 LADR5_bit           _BIT_ACCESS(SCANLADRL,5)
// SCANLADRL<LADR6>
extern volatile __bit                   LADR6               __at(0x38C6);	// @ (0x718 * 8 + 6)
#define                                 LADR6_bit           _BIT_ACCESS(SCANLADRL,6)
// SCANLADRL<LADR7>
extern volatile __bit                   LADR7               __at(0x38C7);	// @ (0x718 * 8 + 7)
#define                                 LADR7_bit           _BIT_ACCESS(SCANLADRL,7)
// SCANLADRH<LADR8>
extern volatile __bit                   LADR8               __at(0x38C8);	// @ (0x719 * 8 + 0)
#define                                 LADR8_bit           _BIT_ACCESS(SCANLADRH,0)
// SCANLADRH<LADR9>
extern volatile __bit                   LADR9               __at(0x38C9);	// @ (0x719 * 8 + 1)
#define                                 LADR9_bit           _BIT_ACCESS(SCANLADRH,1)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x860);	// @ (0x10C * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x861);	// @ (0x10C * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x862);	// @ (0x10C * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// LATA<LATA3>
extern volatile __bit                   LATA3               __at(0x863);	// @ (0x10C * 8 + 3)
#define                                 LATA3_bit           _BIT_ACCESS(LATA,3)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x865);	// @ (0x10C * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
// CWG1CON0<LD>
extern volatile __bit                   LD                  __at(0x34B6);	// @ (0x696 * 8 + 6)
#define                                 LD_bit              _BIT_ACCESS(CWG1CON0,6)
// SCANLADRL<LDAR0>
extern volatile __bit                   LDAR0               __at(0x38C0);	// @ (0x718 * 8 + 0)
#define                                 LDAR0_bit           _BIT_ACCESS(SCANLADRL,0)
// SCANLADRL<LDAR1>
extern volatile __bit                   LDAR1               __at(0x38C1);	// @ (0x718 * 8 + 1)
#define                                 LDAR1_bit           _BIT_ACCESS(SCANLADRL,1)
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// CWG1AS0<LSAC0>
extern volatile __bit                   LSAC0               __at(0x349A);	// @ (0x693 * 8 + 2)
#define                                 LSAC0_bit           _BIT_ACCESS(CWG1AS0,2)
// CWG1AS0<LSAC1>
extern volatile __bit                   LSAC1               __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 LSAC1_bit           _BIT_ACCESS(CWG1AS0,3)
// CWG1AS0<LSBD0>
extern volatile __bit                   LSBD0               __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 LSBD0_bit           _BIT_ACCESS(CWG1AS0,4)
// CWG1AS0<LSBD1>
extern volatile __bit                   LSBD1               __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 LSBD1_bit           _BIT_ACCESS(CWG1AS0,5)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// CMOUT<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 MC1OUT_bit          _BIT_ACCESS(CMOUT,0)
// OSCSTAT<MFIOFR>
extern volatile __bit                   MFIOFR              __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 MFIOFR_bit          _BIT_ACCESS(OSCSTAT,2)
// ODCONA<ODA0>
extern volatile __bit                   ODA0                __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 ODA0_bit            _BIT_ACCESS(ODCONA,0)
// ODCONA<ODA1>
extern volatile __bit                   ODA1                __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 ODA1_bit            _BIT_ACCESS(ODCONA,1)
// ODCONA<ODA2>
extern volatile __bit                   ODA2                __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 ODA2_bit            _BIT_ACCESS(ODCONA,2)
// ODCONA<ODA4>
extern volatile __bit                   ODA4                __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 ODA4_bit            _BIT_ACCESS(ODCONA,4)
// ODCONA<ODA5>
extern volatile __bit                   ODA5                __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 ODA5_bit            _BIT_ACCESS(ODCONA,5)
// CWG1OCON1<OEA>
extern volatile __bit                   OEA                 __at(0x34C0);	// @ (0x698 * 8 + 0)
#define                                 OEA_bit             _BIT_ACCESS(CWG1OCON1,0)
// CWG1OCON1<OEB>
extern volatile __bit                   OEB                 __at(0x34C1);	// @ (0x698 * 8 + 1)
#define                                 OEB_bit             _BIT_ACCESS(CWG1OCON1,1)
// CWG1OCON0<OVRA>
extern volatile __bit                   OVRA                __at(0x34AC);	// @ (0x695 * 8 + 4)
#define                                 OVRA_bit            _BIT_ACCESS(CWG1OCON0,4)
// CWG1OCON0<OVRB>
extern volatile __bit                   OVRB                __at(0x34AD);	// @ (0x695 * 8 + 5)
#define                                 OVRB_bit            _BIT_ACCESS(CWG1OCON0,5)
// CWG1OCON0<OVRC>
extern volatile __bit                   OVRC                __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 OVRC_bit            _BIT_ACCESS(CWG1OCON0,6)
// CWG1OCON0<OVRD>
extern volatile __bit                   OVRD                __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 OVRD_bit            _BIT_ACCESS(CWG1OCON0,7)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// CRCCON1<PLEN0>
extern volatile __bit                   PLEN0               __at(0x3CD0);	// @ (0x79A * 8 + 0)
#define                                 PLEN0_bit           _BIT_ACCESS(CRCCON1,0)
// CRCCON1<PLEN1>
extern volatile __bit                   PLEN1               __at(0x3CD1);	// @ (0x79A * 8 + 1)
#define                                 PLEN1_bit           _BIT_ACCESS(CRCCON1,1)
// CRCCON1<PLEN2>
extern volatile __bit                   PLEN2               __at(0x3CD2);	// @ (0x79A * 8 + 2)
#define                                 PLEN2_bit           _BIT_ACCESS(CRCCON1,2)
// CRCCON1<PLEN3>
extern volatile __bit                   PLEN3               __at(0x3CD3);	// @ (0x79A * 8 + 3)
#define                                 PLEN3_bit           _BIT_ACCESS(CRCCON1,3)
// OSCSTAT<PLLR>
extern volatile __bit                   PLLR                __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 PLLR_bit            _BIT_ACCESS(OSCSTAT,6)
// CWG1CON1<POLA>
extern volatile __bit                   POLA                __at(0x34B8);	// @ (0x697 * 8 + 0)
#define                                 POLA_bit            _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<POLB>
extern volatile __bit                   POLB                __at(0x34B9);	// @ (0x697 * 8 + 1)
#define                                 POLB_bit            _BIT_ACCESS(CWG1CON1,1)
// CWG1CON1<POLC>
extern volatile __bit                   POLC                __at(0x34BA);	// @ (0x697 * 8 + 2)
#define                                 POLC_bit            _BIT_ACCESS(CWG1CON1,2)
// CWG1CON1<POLD>
extern volatile __bit                   POLD                __at(0x34BB);	// @ (0x697 * 8 + 3)
#define                                 POLD_bit            _BIT_ACCESS(CWG1CON1,3)
// OPTION_REG<PS0>
extern volatile __bit                   _PS0                 __at(0x4A8);	// @ (0x95 * 8 + 0)  // Note: Changed by MikroE
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   _PS1                 __at(0x4A9);	// @ (0x95 * 8 + 1)  // Note: Changed by MikroE
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   _PS2                 __at(0x4AA);	// @ (0x95 * 8 + 2)  // Note: Changed by MikroE
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// WDTPSL<PSCNT0>
extern volatile __bit                   PSCNT0              __at(0x3898);	// @ (0x713 * 8 + 0)
#define                                 PSCNT0_bit          _BIT_ACCESS(WDTPSL,0)
// WDTPSL<PSCNT1>
extern volatile __bit                   PSCNT1              __at(0x3899);	// @ (0x713 * 8 + 1)
#define                                 PSCNT1_bit          _BIT_ACCESS(WDTPSL,1)
// WDTPSH<PSCNT10>
extern volatile __bit                   PSCNT10             __at(0x38A2);	// @ (0x714 * 8 + 2)
#define                                 PSCNT10_bit         _BIT_ACCESS(WDTPSH,2)
// WDTPSH<PSCNT11>
extern volatile __bit                   PSCNT11             __at(0x38A3);	// @ (0x714 * 8 + 3)
#define                                 PSCNT11_bit         _BIT_ACCESS(WDTPSH,3)
// WDTPSH<PSCNT12>
extern volatile __bit                   PSCNT12             __at(0x38A4);	// @ (0x714 * 8 + 4)
#define                                 PSCNT12_bit         _BIT_ACCESS(WDTPSH,4)
// WDTPSH<PSCNT13>
extern volatile __bit                   PSCNT13             __at(0x38A5);	// @ (0x714 * 8 + 5)
#define                                 PSCNT13_bit         _BIT_ACCESS(WDTPSH,5)
// WDTPSH<PSCNT14>
extern volatile __bit                   PSCNT14             __at(0x38A6);	// @ (0x714 * 8 + 6)
#define                                 PSCNT14_bit         _BIT_ACCESS(WDTPSH,6)
// WDTPSH<PSCNT15>
extern volatile __bit                   PSCNT15             __at(0x38A7);	// @ (0x714 * 8 + 7)
#define                                 PSCNT15_bit         _BIT_ACCESS(WDTPSH,7)
// WDTTMR<PSCNT16>
extern volatile __bit                   PSCNT16             __at(0x38A8);	// @ (0x715 * 8 + 0)
#define                                 PSCNT16_bit         _BIT_ACCESS(WDTTMR,0)
// WDTTMR<PSCNT17>
extern volatile __bit                   PSCNT17             __at(0x38A9);	// @ (0x715 * 8 + 1)
#define                                 PSCNT17_bit         _BIT_ACCESS(WDTTMR,1)
// WDTPSL<PSCNT2>
extern volatile __bit                   PSCNT2              __at(0x389A);	// @ (0x713 * 8 + 2)
#define                                 PSCNT2_bit          _BIT_ACCESS(WDTPSL,2)
// WDTPSL<PSCNT3>
extern volatile __bit                   PSCNT3              __at(0x389B);	// @ (0x713 * 8 + 3)
#define                                 PSCNT3_bit          _BIT_ACCESS(WDTPSL,3)
// WDTPSL<PSCNT4>
extern volatile __bit                   PSCNT4              __at(0x389C);	// @ (0x713 * 8 + 4)
#define                                 PSCNT4_bit          _BIT_ACCESS(WDTPSL,4)
// WDTPSL<PSCNT5>
extern volatile __bit                   PSCNT5              __at(0x389D);	// @ (0x713 * 8 + 5)
#define                                 PSCNT5_bit          _BIT_ACCESS(WDTPSL,5)
// WDTPSL<PSCNT6>
extern volatile __bit                   PSCNT6              __at(0x389E);	// @ (0x713 * 8 + 6)
#define                                 PSCNT6_bit          _BIT_ACCESS(WDTPSL,6)
// WDTPSL<PSCNT7>
extern volatile __bit                   PSCNT7              __at(0x389F);	// @ (0x713 * 8 + 7)
#define                                 PSCNT7_bit          _BIT_ACCESS(WDTPSL,7)
// WDTPSH<PSCNT8>
extern volatile __bit                   PSCNT8              __at(0x38A0);	// @ (0x714 * 8 + 0)
#define                                 PSCNT8_bit          _BIT_ACCESS(WDTPSH,0)
// WDTPSH<PSCNT9>
extern volatile __bit                   PSCNT9              __at(0x38A1);	// @ (0x714 * 8 + 1)
#define                                 PSCNT9_bit          _BIT_ACCESS(WDTPSH,1)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x60);	// @ (0xC * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x61);	// @ (0xC * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x62);	// @ (0xC * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x63);	// @ (0xC * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x64);	// @ (0xC * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// CWG1AS0<REN>
extern volatile __bit                   REN                 __at(0x349E);	// @ (0x693 * 8 + 6)
#define                                 REN_bit             _BIT_ACCESS(CWG1AS0,6)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// SCANCON0<SCANBUSY>
extern volatile __bit                   SCANBUSY            __at(0x38E5);	// @ (0x71C * 8 + 5)
#define                                 SCANBUSY_bit        _BIT_ACCESS(SCANCON0,5)
// SCANCON0<SCANEN>
extern volatile __bit                   SCANEN              __at(0x38E7);	// @ (0x71C * 8 + 7)
#define                                 SCANEN_bit          _BIT_ACCESS(SCANCON0,7)
// SCANCON0<SCANGO>
extern volatile __bit                   SCANGO              __at(0x38E6);	// @ (0x71C * 8 + 6)
#define                                 SCANGO_bit          _BIT_ACCESS(SCANCON0,6)
// SCANHADRL<SCANHADR0>
extern volatile __bit                   SCANHADR0           __at(0x38D0);	// @ (0x71A * 8 + 0)
#define                                 SCANHADR0_bit       _BIT_ACCESS(SCANHADRL,0)
// SCANHADRL<SCANHADR1>
extern volatile __bit                   SCANHADR1           __at(0x38D1);	// @ (0x71A * 8 + 1)
#define                                 SCANHADR1_bit       _BIT_ACCESS(SCANHADRL,1)
// SCANHADRH<SCANHADR10>
extern volatile __bit                   SCANHADR10          __at(0x38DA);	// @ (0x71B * 8 + 2)
#define                                 SCANHADR10_bit      _BIT_ACCESS(SCANHADRH,2)
// SCANHADRH<SCANHADR11>
extern volatile __bit                   SCANHADR11          __at(0x38DB);	// @ (0x71B * 8 + 3)
#define                                 SCANHADR11_bit      _BIT_ACCESS(SCANHADRH,3)
// SCANHADRH<SCANHADR12>
extern volatile __bit                   SCANHADR12          __at(0x38DC);	// @ (0x71B * 8 + 4)
#define                                 SCANHADR12_bit      _BIT_ACCESS(SCANHADRH,4)
// SCANHADRH<SCANHADR13>
extern volatile __bit                   SCANHADR13          __at(0x38DD);	// @ (0x71B * 8 + 5)
#define                                 SCANHADR13_bit      _BIT_ACCESS(SCANHADRH,5)
// SCANHADRH<SCANHADR14>
extern volatile __bit                   SCANHADR14          __at(0x38DE);	// @ (0x71B * 8 + 6)
#define                                 SCANHADR14_bit      _BIT_ACCESS(SCANHADRH,6)
// SCANHADRH<SCANHADR15>
extern volatile __bit                   SCANHADR15          __at(0x38DF);	// @ (0x71B * 8 + 7)
#define                                 SCANHADR15_bit      _BIT_ACCESS(SCANHADRH,7)
// SCANHADRL<SCANHADR2>
extern volatile __bit                   SCANHADR2           __at(0x38D2);	// @ (0x71A * 8 + 2)
#define                                 SCANHADR2_bit       _BIT_ACCESS(SCANHADRL,2)
// SCANHADRL<SCANHADR3>
extern volatile __bit                   SCANHADR3           __at(0x38D3);	// @ (0x71A * 8 + 3)
#define                                 SCANHADR3_bit       _BIT_ACCESS(SCANHADRL,3)
// SCANHADRL<SCANHADR4>
extern volatile __bit                   SCANHADR4           __at(0x38D4);	// @ (0x71A * 8 + 4)
#define                                 SCANHADR4_bit       _BIT_ACCESS(SCANHADRL,4)
// SCANHADRL<SCANHADR5>
extern volatile __bit                   SCANHADR5           __at(0x38D5);	// @ (0x71A * 8 + 5)
#define                                 SCANHADR5_bit       _BIT_ACCESS(SCANHADRL,5)
// SCANHADRL<SCANHADR6>
extern volatile __bit                   SCANHADR6           __at(0x38D6);	// @ (0x71A * 8 + 6)
#define                                 SCANHADR6_bit       _BIT_ACCESS(SCANHADRL,6)
// SCANHADRL<SCANHADR7>
extern volatile __bit                   SCANHADR7           __at(0x38D7);	// @ (0x71A * 8 + 7)
#define                                 SCANHADR7_bit       _BIT_ACCESS(SCANHADRL,7)
// SCANHADRH<SCANHADR8>
extern volatile __bit                   SCANHADR8           __at(0x38D8);	// @ (0x71B * 8 + 0)
#define                                 SCANHADR8_bit       _BIT_ACCESS(SCANHADRH,0)
// SCANHADRH<SCANHADR9>
extern volatile __bit                   SCANHADR9           __at(0x38D9);	// @ (0x71B * 8 + 1)
#define                                 SCANHADR9_bit       _BIT_ACCESS(SCANHADRH,1)
// PIE4<SCANIE>
extern volatile __bit                   SCANIE              __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 SCANIE_bit          _BIT_ACCESS(PIE4,7)
// PIR4<SCANIF>
extern volatile __bit                   SCANIF              __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 SCANIF_bit          _BIT_ACCESS(PIR4,7)
// SCANCON0<SCANINTM>
extern volatile __bit                   SCANINTM            __at(0x38E3);	// @ (0x71C * 8 + 3)
#define                                 SCANINTM_bit        _BIT_ACCESS(SCANCON0,3)
// SCANCON0<SCANINVALID>
extern volatile __bit                   SCANINVALID         __at(0x38E4);	// @ (0x71C * 8 + 4)
#define                                 SCANINVALID_bit     _BIT_ACCESS(SCANCON0,4)
// SCANLADRL<SCANLADR0>
extern volatile __bit                   SCANLADR0           __at(0x38C0);	// @ (0x718 * 8 + 0)
#define                                 SCANLADR0_bit       _BIT_ACCESS(SCANLADRL,0)
// SCANLADRL<SCANLADR1>
extern volatile __bit                   SCANLADR1           __at(0x38C1);	// @ (0x718 * 8 + 1)
#define                                 SCANLADR1_bit       _BIT_ACCESS(SCANLADRL,1)
// SCANLADRH<SCANLADR10>
extern volatile __bit                   SCANLADR10          __at(0x38CA);	// @ (0x719 * 8 + 2)
#define                                 SCANLADR10_bit      _BIT_ACCESS(SCANLADRH,2)
// SCANLADRH<SCANLADR11>
extern volatile __bit                   SCANLADR11          __at(0x38CB);	// @ (0x719 * 8 + 3)
#define                                 SCANLADR11_bit      _BIT_ACCESS(SCANLADRH,3)
// SCANLADRH<SCANLADR12>
extern volatile __bit                   SCANLADR12          __at(0x38CC);	// @ (0x719 * 8 + 4)
#define                                 SCANLADR12_bit      _BIT_ACCESS(SCANLADRH,4)
// SCANLADRH<SCANLADR13>
extern volatile __bit                   SCANLADR13          __at(0x38CD);	// @ (0x719 * 8 + 5)
#define                                 SCANLADR13_bit      _BIT_ACCESS(SCANLADRH,5)
// SCANLADRH<SCANLADR14>
extern volatile __bit                   SCANLADR14          __at(0x38CE);	// @ (0x719 * 8 + 6)
#define                                 SCANLADR14_bit      _BIT_ACCESS(SCANLADRH,6)
// SCANLADRH<SCANLADR15>
extern volatile __bit                   SCANLADR15          __at(0x38CF);	// @ (0x719 * 8 + 7)
#define                                 SCANLADR15_bit      _BIT_ACCESS(SCANLADRH,7)
// SCANLADRL<SCANLADR2>
extern volatile __bit                   SCANLADR2           __at(0x38C2);	// @ (0x718 * 8 + 2)
#define                                 SCANLADR2_bit       _BIT_ACCESS(SCANLADRL,2)
// SCANLADRL<SCANLADR3>
extern volatile __bit                   SCANLADR3           __at(0x38C3);	// @ (0x718 * 8 + 3)
#define                                 SCANLADR3_bit       _BIT_ACCESS(SCANLADRL,3)
// SCANLADRL<SCANLADR4>
extern volatile __bit                   SCANLADR4           __at(0x38C4);	// @ (0x718 * 8 + 4)
#define                                 SCANLADR4_bit       _BIT_ACCESS(SCANLADRL,4)
// SCANLADRL<SCANLADR5>
extern volatile __bit                   SCANLADR5           __at(0x38C5);	// @ (0x718 * 8 + 5)
#define                                 SCANLADR5_bit       _BIT_ACCESS(SCANLADRL,5)
// SCANLADRL<SCANLADR6>
extern volatile __bit                   SCANLADR6           __at(0x38C6);	// @ (0x718 * 8 + 6)
#define                                 SCANLADR6_bit       _BIT_ACCESS(SCANLADRL,6)
// SCANLADRL<SCANLADR7>
extern volatile __bit                   SCANLADR7           __at(0x38C7);	// @ (0x718 * 8 + 7)
#define                                 SCANLADR7_bit       _BIT_ACCESS(SCANLADRL,7)
// SCANLADRH<SCANLADR8>
extern volatile __bit                   SCANLADR8           __at(0x38C8);	// @ (0x719 * 8 + 0)
#define                                 SCANLADR8_bit       _BIT_ACCESS(SCANLADRH,0)
// SCANLADRH<SCANLADR9>
extern volatile __bit                   SCANLADR9           __at(0x38C9);	// @ (0x719 * 8 + 1)
#define                                 SCANLADR9_bit       _BIT_ACCESS(SCANLADRH,1)
// SCANCON0<SCANMODE0>
extern volatile __bit                   SCANMODE0           __at(0x38E0);	// @ (0x71C * 8 + 0)
#define                                 SCANMODE0_bit       _BIT_ACCESS(SCANCON0,0)
// SCANCON0<SCANMODE1>
extern volatile __bit                   SCANMODE1           __at(0x38E1);	// @ (0x71C * 8 + 1)
#define                                 SCANMODE1_bit       _BIT_ACCESS(SCANCON0,1)
// SCANTRIG<SCANTSEL0>
extern volatile __bit                   SCANTSEL0           __at(0x38E8);	// @ (0x71D * 8 + 0)
#define                                 SCANTSEL0_bit       _BIT_ACCESS(SCANTRIG,0)
// SCANTRIG<SCANTSEL1>
extern volatile __bit                   SCANTSEL1           __at(0x38E9);	// @ (0x71D * 8 + 1)
#define                                 SCANTSEL1_bit       _BIT_ACCESS(SCANTRIG,1)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// WDTCON0<SEN>
extern volatile __bit                   SEN                 __at(0x3888);	// @ (0x711 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(WDTCON0,0)
// CRCSHIFTL<SHIFT0>
extern volatile __bit                   SHIFT0              __at(0x3CA8);	// @ (0x795 * 8 + 0)
#define                                 SHIFT0_bit          _BIT_ACCESS(CRCSHIFTL,0)
// CRCSHIFTL<SHIFT1>
extern volatile __bit                   SHIFT1              __at(0x3CA9);	// @ (0x795 * 8 + 1)
#define                                 SHIFT1_bit          _BIT_ACCESS(CRCSHIFTL,1)
// CRCSHIFTH<SHIFT10>
extern volatile __bit                   SHIFT10             __at(0x3CB2);	// @ (0x796 * 8 + 2)
#define                                 SHIFT10_bit         _BIT_ACCESS(CRCSHIFTH,2)
// CRCSHIFTH<SHIFT11>
extern volatile __bit                   SHIFT11             __at(0x3CB3);	// @ (0x796 * 8 + 3)
#define                                 SHIFT11_bit         _BIT_ACCESS(CRCSHIFTH,3)
// CRCSHIFTH<SHIFT12>
extern volatile __bit                   SHIFT12             __at(0x3CB4);	// @ (0x796 * 8 + 4)
#define                                 SHIFT12_bit         _BIT_ACCESS(CRCSHIFTH,4)
// CRCSHIFTH<SHIFT13>
extern volatile __bit                   SHIFT13             __at(0x3CB5);	// @ (0x796 * 8 + 5)
#define                                 SHIFT13_bit         _BIT_ACCESS(CRCSHIFTH,5)
// CRCSHIFTH<SHIFT14>
extern volatile __bit                   SHIFT14             __at(0x3CB6);	// @ (0x796 * 8 + 6)
#define                                 SHIFT14_bit         _BIT_ACCESS(CRCSHIFTH,6)
// CRCSHIFTH<SHIFT15>
extern volatile __bit                   SHIFT15             __at(0x3CB7);	// @ (0x796 * 8 + 7)
#define                                 SHIFT15_bit         _BIT_ACCESS(CRCSHIFTH,7)
// CRCSHIFTL<SHIFT2>
extern volatile __bit                   SHIFT2              __at(0x3CAA);	// @ (0x795 * 8 + 2)
#define                                 SHIFT2_bit          _BIT_ACCESS(CRCSHIFTL,2)
// CRCSHIFTL<SHIFT3>
extern volatile __bit                   SHIFT3              __at(0x3CAB);	// @ (0x795 * 8 + 3)
#define                                 SHIFT3_bit          _BIT_ACCESS(CRCSHIFTL,3)
// CRCSHIFTL<SHIFT4>
extern volatile __bit                   SHIFT4              __at(0x3CAC);	// @ (0x795 * 8 + 4)
#define                                 SHIFT4_bit          _BIT_ACCESS(CRCSHIFTL,4)
// CRCSHIFTL<SHIFT5>
extern volatile __bit                   SHIFT5              __at(0x3CAD);	// @ (0x795 * 8 + 5)
#define                                 SHIFT5_bit          _BIT_ACCESS(CRCSHIFTL,5)
// CRCSHIFTL<SHIFT6>
extern volatile __bit                   SHIFT6              __at(0x3CAE);	// @ (0x795 * 8 + 6)
#define                                 SHIFT6_bit          _BIT_ACCESS(CRCSHIFTL,6)
// CRCSHIFTL<SHIFT7>
extern volatile __bit                   SHIFT7              __at(0x3CAF);	// @ (0x795 * 8 + 7)
#define                                 SHIFT7_bit          _BIT_ACCESS(CRCSHIFTL,7)
// CRCSHIFTH<SHIFT8>
extern volatile __bit                   SHIFT8              __at(0x3CB0);	// @ (0x796 * 8 + 0)
#define                                 SHIFT8_bit          _BIT_ACCESS(CRCSHIFTH,0)
// CRCSHIFTH<SHIFT9>
extern volatile __bit                   SHIFT9              __at(0x3CB1);	// @ (0x796 * 8 + 1)
#define                                 SHIFT9_bit          _BIT_ACCESS(CRCSHIFTH,1)
// CRCCON0<SHIFTM>
extern volatile __bit                   SHIFTM              __at(0x3CC9);	// @ (0x799 * 8 + 1)
#define                                 SHIFTM_bit          _BIT_ACCESS(CRCCON0,1)
// CWG1AS0<SHUTDOWN>
extern volatile __bit                   SHUTDOWN            __at(0x349F);	// @ (0x693 * 8 + 7)
#define                                 SHUTDOWN_bit        _BIT_ACCESS(CWG1AS0,7)
// SLRCONA<SLRA0>
extern volatile __bit                   SLRA0               __at(0x1860);	// @ (0x30C * 8 + 0)
#define                                 SLRA0_bit           _BIT_ACCESS(SLRCONA,0)
// SLRCONA<SLRA1>
extern volatile __bit                   SLRA1               __at(0x1861);	// @ (0x30C * 8 + 1)
#define                                 SLRA1_bit           _BIT_ACCESS(SLRCONA,1)
// SLRCONA<SLRA2>
extern volatile __bit                   SLRA2               __at(0x1862);	// @ (0x30C * 8 + 2)
#define                                 SLRA2_bit           _BIT_ACCESS(SLRCONA,2)
// SLRCONA<SLRA4>
extern volatile __bit                   SLRA4               __at(0x1864);	// @ (0x30C * 8 + 4)
#define                                 SLRA4_bit           _BIT_ACCESS(SLRCONA,4)
// SLRCONA<SLRA5>
extern volatile __bit                   SLRA5               __at(0x1865);	// @ (0x30C * 8 + 5)
#define                                 SLRA5_bit           _BIT_ACCESS(SLRCONA,5)
// SMT1STAT<SMT1AS>
extern volatile __bit                   SMT1AS              __at(0x6CD0);	// @ (0xD9A * 8 + 0)
#define                                 SMT1AS_bit          _BIT_ACCESS(SMT1STAT,0)
// SMT1CPRL<SMT1CPR0>
extern volatile __bit                   SMT1CPR0            __at(0x6C78);	// @ (0xD8F * 8 + 0)
#define                                 SMT1CPR0_bit        _BIT_ACCESS(SMT1CPRL,0)
// SMT1CPRL<SMT1CPR1>
extern volatile __bit                   SMT1CPR1            __at(0x6C79);	// @ (0xD8F * 8 + 1)
#define                                 SMT1CPR1_bit        _BIT_ACCESS(SMT1CPRL,1)
// SMT1CPRH<SMT1CPR10>
extern volatile __bit                   SMT1CPR10           __at(0x6C82);	// @ (0xD90 * 8 + 2)
#define                                 SMT1CPR10_bit       _BIT_ACCESS(SMT1CPRH,2)
// SMT1CPRH<SMT1CPR11>
extern volatile __bit                   SMT1CPR11           __at(0x6C83);	// @ (0xD90 * 8 + 3)
#define                                 SMT1CPR11_bit       _BIT_ACCESS(SMT1CPRH,3)
// SMT1CPRH<SMT1CPR12>
extern volatile __bit                   SMT1CPR12           __at(0x6C84);	// @ (0xD90 * 8 + 4)
#define                                 SMT1CPR12_bit       _BIT_ACCESS(SMT1CPRH,4)
// SMT1CPRH<SMT1CPR13>
extern volatile __bit                   SMT1CPR13           __at(0x6C85);	// @ (0xD90 * 8 + 5)
#define                                 SMT1CPR13_bit       _BIT_ACCESS(SMT1CPRH,5)
// SMT1CPRH<SMT1CPR14>
extern volatile __bit                   SMT1CPR14           __at(0x6C86);	// @ (0xD90 * 8 + 6)
#define                                 SMT1CPR14_bit       _BIT_ACCESS(SMT1CPRH,6)
// SMT1CPRH<SMT1CPR15>
extern volatile __bit                   SMT1CPR15           __at(0x6C87);	// @ (0xD90 * 8 + 7)
#define                                 SMT1CPR15_bit       _BIT_ACCESS(SMT1CPRH,7)
// SMT1CPRU<SMT1CPR16>
extern volatile __bit                   SMT1CPR16           __at(0x6C88);	// @ (0xD91 * 8 + 0)
#define                                 SMT1CPR16_bit       _BIT_ACCESS(SMT1CPRU,0)
// SMT1CPRU<SMT1CPR17>
extern volatile __bit                   SMT1CPR17           __at(0x6C89);	// @ (0xD91 * 8 + 1)
#define                                 SMT1CPR17_bit       _BIT_ACCESS(SMT1CPRU,1)
// SMT1CPRU<SMT1CPR18>
extern volatile __bit                   SMT1CPR18           __at(0x6C8A);	// @ (0xD91 * 8 + 2)
#define                                 SMT1CPR18_bit       _BIT_ACCESS(SMT1CPRU,2)
// SMT1CPRU<SMT1CPR19>
extern volatile __bit                   SMT1CPR19           __at(0x6C8B);	// @ (0xD91 * 8 + 3)
#define                                 SMT1CPR19_bit       _BIT_ACCESS(SMT1CPRU,3)
// SMT1CPRL<SMT1CPR2>
extern volatile __bit                   SMT1CPR2            __at(0x6C7A);	// @ (0xD8F * 8 + 2)
#define                                 SMT1CPR2_bit        _BIT_ACCESS(SMT1CPRL,2)
// SMT1CPRU<SMT1CPR20>
extern volatile __bit                   SMT1CPR20           __at(0x6C8C);	// @ (0xD91 * 8 + 4)
#define                                 SMT1CPR20_bit       _BIT_ACCESS(SMT1CPRU,4)
// SMT1CPRU<SMT1CPR21>
extern volatile __bit                   SMT1CPR21           __at(0x6C8D);	// @ (0xD91 * 8 + 5)
#define                                 SMT1CPR21_bit       _BIT_ACCESS(SMT1CPRU,5)
// SMT1CPRU<SMT1CPR22>
extern volatile __bit                   SMT1CPR22           __at(0x6C8E);	// @ (0xD91 * 8 + 6)
#define                                 SMT1CPR22_bit       _BIT_ACCESS(SMT1CPRU,6)
// SMT1CPRU<SMT1CPR23>
extern volatile __bit                   SMT1CPR23           __at(0x6C8F);	// @ (0xD91 * 8 + 7)
#define                                 SMT1CPR23_bit       _BIT_ACCESS(SMT1CPRU,7)
// SMT1CPRL<SMT1CPR3>
extern volatile __bit                   SMT1CPR3            __at(0x6C7B);	// @ (0xD8F * 8 + 3)
#define                                 SMT1CPR3_bit        _BIT_ACCESS(SMT1CPRL,3)
// SMT1CPRL<SMT1CPR4>
extern volatile __bit                   SMT1CPR4            __at(0x6C7C);	// @ (0xD8F * 8 + 4)
#define                                 SMT1CPR4_bit        _BIT_ACCESS(SMT1CPRL,4)
// SMT1CPRL<SMT1CPR5>
extern volatile __bit                   SMT1CPR5            __at(0x6C7D);	// @ (0xD8F * 8 + 5)
#define                                 SMT1CPR5_bit        _BIT_ACCESS(SMT1CPRL,5)
// SMT1CPRL<SMT1CPR6>
extern volatile __bit                   SMT1CPR6            __at(0x6C7E);	// @ (0xD8F * 8 + 6)
#define                                 SMT1CPR6_bit        _BIT_ACCESS(SMT1CPRL,6)
// SMT1CPRL<SMT1CPR7>
extern volatile __bit                   SMT1CPR7            __at(0x6C7F);	// @ (0xD8F * 8 + 7)
#define                                 SMT1CPR7_bit        _BIT_ACCESS(SMT1CPRL,7)
// SMT1CPRH<SMT1CPR8>
extern volatile __bit                   SMT1CPR8            __at(0x6C80);	// @ (0xD90 * 8 + 0)
#define                                 SMT1CPR8_bit        _BIT_ACCESS(SMT1CPRH,0)
// SMT1CPRH<SMT1CPR9>
extern volatile __bit                   SMT1CPR9            __at(0x6C81);	// @ (0xD90 * 8 + 1)
#define                                 SMT1CPR9_bit        _BIT_ACCESS(SMT1CPRH,1)
// SMT1STAT<SMT1CPRUP>
extern volatile __bit                   SMT1CPRUP           __at(0x6CD7);	// @ (0xD9A * 8 + 7)
#define                                 SMT1CPRUP_bit       _BIT_ACCESS(SMT1STAT,7)
// SMT1CPWL<SMT1CPW0>
extern volatile __bit                   SMT1CPW0            __at(0x6C90);	// @ (0xD92 * 8 + 0)
#define                                 SMT1CPW0_bit        _BIT_ACCESS(SMT1CPWL,0)
// SMT1CPWL<SMT1CPW1>
extern volatile __bit                   SMT1CPW1            __at(0x6C91);	// @ (0xD92 * 8 + 1)
#define                                 SMT1CPW1_bit        _BIT_ACCESS(SMT1CPWL,1)
// SMT1CPWH<SMT1CPW10>
extern volatile __bit                   SMT1CPW10           __at(0x6C9A);	// @ (0xD93 * 8 + 2)
#define                                 SMT1CPW10_bit       _BIT_ACCESS(SMT1CPWH,2)
// SMT1CPWH<SMT1CPW11>
extern volatile __bit                   SMT1CPW11           __at(0x6C9B);	// @ (0xD93 * 8 + 3)
#define                                 SMT1CPW11_bit       _BIT_ACCESS(SMT1CPWH,3)
// SMT1CPWH<SMT1CPW12>
extern volatile __bit                   SMT1CPW12           __at(0x6C9C);	// @ (0xD93 * 8 + 4)
#define                                 SMT1CPW12_bit       _BIT_ACCESS(SMT1CPWH,4)
// SMT1CPWH<SMT1CPW13>
extern volatile __bit                   SMT1CPW13           __at(0x6C9D);	// @ (0xD93 * 8 + 5)
#define                                 SMT1CPW13_bit       _BIT_ACCESS(SMT1CPWH,5)
// SMT1CPWH<SMT1CPW14>
extern volatile __bit                   SMT1CPW14           __at(0x6C9E);	// @ (0xD93 * 8 + 6)
#define                                 SMT1CPW14_bit       _BIT_ACCESS(SMT1CPWH,6)
// SMT1CPWH<SMT1CPW15>
extern volatile __bit                   SMT1CPW15           __at(0x6C9F);	// @ (0xD93 * 8 + 7)
#define                                 SMT1CPW15_bit       _BIT_ACCESS(SMT1CPWH,7)
// SMT1CPWU<SMT1CPW16>
extern volatile __bit                   SMT1CPW16           __at(0x6CA0);	// @ (0xD94 * 8 + 0)
#define                                 SMT1CPW16_bit       _BIT_ACCESS(SMT1CPWU,0)
// SMT1CPWU<SMT1CPW17>
extern volatile __bit                   SMT1CPW17           __at(0x6CA1);	// @ (0xD94 * 8 + 1)
#define                                 SMT1CPW17_bit       _BIT_ACCESS(SMT1CPWU,1)
// SMT1CPWU<SMT1CPW18>
extern volatile __bit                   SMT1CPW18           __at(0x6CA2);	// @ (0xD94 * 8 + 2)
#define                                 SMT1CPW18_bit       _BIT_ACCESS(SMT1CPWU,2)
// SMT1CPWU<SMT1CPW19>
extern volatile __bit                   SMT1CPW19           __at(0x6CA3);	// @ (0xD94 * 8 + 3)
#define                                 SMT1CPW19_bit       _BIT_ACCESS(SMT1CPWU,3)
// SMT1CPWL<SMT1CPW2>
extern volatile __bit                   SMT1CPW2            __at(0x6C92);	// @ (0xD92 * 8 + 2)
#define                                 SMT1CPW2_bit        _BIT_ACCESS(SMT1CPWL,2)
// SMT1CPWU<SMT1CPW20>
extern volatile __bit                   SMT1CPW20           __at(0x6CA4);	// @ (0xD94 * 8 + 4)
#define                                 SMT1CPW20_bit       _BIT_ACCESS(SMT1CPWU,4)
// SMT1CPWU<SMT1CPW21>
extern volatile __bit                   SMT1CPW21           __at(0x6CA5);	// @ (0xD94 * 8 + 5)
#define                                 SMT1CPW21_bit       _BIT_ACCESS(SMT1CPWU,5)
// SMT1CPWU<SMT1CPW22>
extern volatile __bit                   SMT1CPW22           __at(0x6CA6);	// @ (0xD94 * 8 + 6)
#define                                 SMT1CPW22_bit       _BIT_ACCESS(SMT1CPWU,6)
// SMT1CPWU<SMT1CPW23>
extern volatile __bit                   SMT1CPW23           __at(0x6CA7);	// @ (0xD94 * 8 + 7)
#define                                 SMT1CPW23_bit       _BIT_ACCESS(SMT1CPWU,7)
// SMT1CPWL<SMT1CPW3>
extern volatile __bit                   SMT1CPW3            __at(0x6C93);	// @ (0xD92 * 8 + 3)
#define                                 SMT1CPW3_bit        _BIT_ACCESS(SMT1CPWL,3)
// SMT1CPWL<SMT1CPW4>
extern volatile __bit                   SMT1CPW4            __at(0x6C94);	// @ (0xD92 * 8 + 4)
#define                                 SMT1CPW4_bit        _BIT_ACCESS(SMT1CPWL,4)
// SMT1CPWL<SMT1CPW5>
extern volatile __bit                   SMT1CPW5            __at(0x6C95);	// @ (0xD92 * 8 + 5)
#define                                 SMT1CPW5_bit        _BIT_ACCESS(SMT1CPWL,5)
// SMT1CPWL<SMT1CPW6>
extern volatile __bit                   SMT1CPW6            __at(0x6C96);	// @ (0xD92 * 8 + 6)
#define                                 SMT1CPW6_bit        _BIT_ACCESS(SMT1CPWL,6)
// SMT1CPWL<SMT1CPW7>
extern volatile __bit                   SMT1CPW7            __at(0x6C97);	// @ (0xD92 * 8 + 7)
#define                                 SMT1CPW7_bit        _BIT_ACCESS(SMT1CPWL,7)
// SMT1CPWH<SMT1CPW8>
extern volatile __bit                   SMT1CPW8            __at(0x6C98);	// @ (0xD93 * 8 + 0)
#define                                 SMT1CPW8_bit        _BIT_ACCESS(SMT1CPWH,0)
// SMT1CPWH<SMT1CPW9>
extern volatile __bit                   SMT1CPW9            __at(0x6C99);	// @ (0xD93 * 8 + 1)
#define                                 SMT1CPW9_bit        _BIT_ACCESS(SMT1CPWH,1)
// SMT1STAT<SMT1CPWUP>
extern volatile __bit                   SMT1CPWUP           __at(0x6CD6);	// @ (0xD9A * 8 + 6)
#define                                 SMT1CPWUP_bit       _BIT_ACCESS(SMT1STAT,6)
// SMT1CLK<SMT1CSEL0>
extern volatile __bit                   SMT1CSEL0           __at(0x6CD8);	// @ (0xD9B * 8 + 0)
#define                                 SMT1CSEL0_bit       _BIT_ACCESS(SMT1CLK,0)
// SMT1CLK<SMT1CSEL1>
extern volatile __bit                   SMT1CSEL1           __at(0x6CD9);	// @ (0xD9B * 8 + 1)
#define                                 SMT1CSEL1_bit       _BIT_ACCESS(SMT1CLK,1)
// SMT1CLK<SMT1CSEL2>
extern volatile __bit                   SMT1CSEL2           __at(0x6CDA);	// @ (0xD9B * 8 + 2)
#define                                 SMT1CSEL2_bit       _BIT_ACCESS(SMT1CLK,2)
// SMT1CON1<SMT1GO>
extern volatile __bit                   SMT1GO              __at(0x6CCF);	// @ (0xD99 * 8 + 7)
#define                                 SMT1GO_bit          _BIT_ACCESS(SMT1CON1,7)
// PIE4<SMT1IE>
extern volatile __bit                   SMT1IE              __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 SMT1IE_bit          _BIT_ACCESS(PIE4,0)
// PIR4<SMT1IF>
extern volatile __bit                   SMT1IF              __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 SMT1IF_bit          _BIT_ACCESS(PIR4,0)
// SMT1CON1<SMT1MODE0>
extern volatile __bit                   SMT1MODE0           __at(0x6CC8);	// @ (0xD99 * 8 + 0)
#define                                 SMT1MODE0_bit       _BIT_ACCESS(SMT1CON1,0)
// SMT1CON1<SMT1MODE1>
extern volatile __bit                   SMT1MODE1           __at(0x6CC9);	// @ (0xD99 * 8 + 1)
#define                                 SMT1MODE1_bit       _BIT_ACCESS(SMT1CON1,1)
// SMT1CON1<SMT1MODE2>
extern volatile __bit                   SMT1MODE2           __at(0x6CCA);	// @ (0xD99 * 8 + 2)
#define                                 SMT1MODE2_bit       _BIT_ACCESS(SMT1CON1,2)
// SMT1CON1<SMT1MODE3>
extern volatile __bit                   SMT1MODE3           __at(0x6CCB);	// @ (0xD99 * 8 + 3)
#define                                 SMT1MODE3_bit       _BIT_ACCESS(SMT1CON1,3)
// SMT1PRL<SMT1PR0>
extern volatile __bit                   SMT1PR0             __at(0x6CA8);	// @ (0xD95 * 8 + 0)
#define                                 SMT1PR0_bit         _BIT_ACCESS(SMT1PRL,0)
// SMT1PRL<SMT1PR1>
extern volatile __bit                   SMT1PR1             __at(0x6CA9);	// @ (0xD95 * 8 + 1)
#define                                 SMT1PR1_bit         _BIT_ACCESS(SMT1PRL,1)
// SMT1PRH<SMT1PR10>
extern volatile __bit                   SMT1PR10            __at(0x6CB2);	// @ (0xD96 * 8 + 2)
#define                                 SMT1PR10_bit        _BIT_ACCESS(SMT1PRH,2)
// SMT1PRH<SMT1PR11>
extern volatile __bit                   SMT1PR11            __at(0x6CB3);	// @ (0xD96 * 8 + 3)
#define                                 SMT1PR11_bit        _BIT_ACCESS(SMT1PRH,3)
// SMT1PRH<SMT1PR12>
extern volatile __bit                   SMT1PR12            __at(0x6CB4);	// @ (0xD96 * 8 + 4)
#define                                 SMT1PR12_bit        _BIT_ACCESS(SMT1PRH,4)
// SMT1PRH<SMT1PR13>
extern volatile __bit                   SMT1PR13            __at(0x6CB5);	// @ (0xD96 * 8 + 5)
#define                                 SMT1PR13_bit        _BIT_ACCESS(SMT1PRH,5)
// SMT1PRH<SMT1PR14>
extern volatile __bit                   SMT1PR14            __at(0x6CB6);	// @ (0xD96 * 8 + 6)
#define                                 SMT1PR14_bit        _BIT_ACCESS(SMT1PRH,6)
// SMT1PRH<SMT1PR15>
extern volatile __bit                   SMT1PR15            __at(0x6CB7);	// @ (0xD96 * 8 + 7)
#define                                 SMT1PR15_bit        _BIT_ACCESS(SMT1PRH,7)
// SMT1PRU<SMT1PR16>
extern volatile __bit                   SMT1PR16            __at(0x6CB8);	// @ (0xD97 * 8 + 0)
#define                                 SMT1PR16_bit        _BIT_ACCESS(SMT1PRU,0)
// SMT1PRU<SMT1PR17>
extern volatile __bit                   SMT1PR17            __at(0x6CB9);	// @ (0xD97 * 8 + 1)
#define                                 SMT1PR17_bit        _BIT_ACCESS(SMT1PRU,1)
// SMT1PRU<SMT1PR18>
extern volatile __bit                   SMT1PR18            __at(0x6CBA);	// @ (0xD97 * 8 + 2)
#define                                 SMT1PR18_bit        _BIT_ACCESS(SMT1PRU,2)
// SMT1PRU<SMT1PR19>
extern volatile __bit                   SMT1PR19            __at(0x6CBB);	// @ (0xD97 * 8 + 3)
#define                                 SMT1PR19_bit        _BIT_ACCESS(SMT1PRU,3)
// SMT1PRL<SMT1PR2>
extern volatile __bit                   SMT1PR2             __at(0x6CAA);	// @ (0xD95 * 8 + 2)
#define                                 SMT1PR2_bit         _BIT_ACCESS(SMT1PRL,2)
// SMT1PRU<SMT1PR20>
extern volatile __bit                   SMT1PR20            __at(0x6CBC);	// @ (0xD97 * 8 + 4)
#define                                 SMT1PR20_bit        _BIT_ACCESS(SMT1PRU,4)
// SMT1PRU<SMT1PR21>
extern volatile __bit                   SMT1PR21            __at(0x6CBD);	// @ (0xD97 * 8 + 5)
#define                                 SMT1PR21_bit        _BIT_ACCESS(SMT1PRU,5)
// SMT1PRU<SMT1PR22>
extern volatile __bit                   SMT1PR22            __at(0x6CBE);	// @ (0xD97 * 8 + 6)
#define                                 SMT1PR22_bit        _BIT_ACCESS(SMT1PRU,6)
// SMT1PRU<SMT1PR23>
extern volatile __bit                   SMT1PR23            __at(0x6CBF);	// @ (0xD97 * 8 + 7)
#define                                 SMT1PR23_bit        _BIT_ACCESS(SMT1PRU,7)
// SMT1PRL<SMT1PR3>
extern volatile __bit                   SMT1PR3             __at(0x6CAB);	// @ (0xD95 * 8 + 3)
#define                                 SMT1PR3_bit         _BIT_ACCESS(SMT1PRL,3)
// SMT1PRL<SMT1PR4>
extern volatile __bit                   SMT1PR4             __at(0x6CAC);	// @ (0xD95 * 8 + 4)
#define                                 SMT1PR4_bit         _BIT_ACCESS(SMT1PRL,4)
// SMT1PRL<SMT1PR5>
extern volatile __bit                   SMT1PR5             __at(0x6CAD);	// @ (0xD95 * 8 + 5)
#define                                 SMT1PR5_bit         _BIT_ACCESS(SMT1PRL,5)
// SMT1PRL<SMT1PR6>
extern volatile __bit                   SMT1PR6             __at(0x6CAE);	// @ (0xD95 * 8 + 6)
#define                                 SMT1PR6_bit         _BIT_ACCESS(SMT1PRL,6)
// SMT1PRL<SMT1PR7>
extern volatile __bit                   SMT1PR7             __at(0x6CAF);	// @ (0xD95 * 8 + 7)
#define                                 SMT1PR7_bit         _BIT_ACCESS(SMT1PRL,7)
// SMT1PRH<SMT1PR8>
extern volatile __bit                   SMT1PR8             __at(0x6CB0);	// @ (0xD96 * 8 + 0)
#define                                 SMT1PR8_bit         _BIT_ACCESS(SMT1PRH,0)
// SMT1PRH<SMT1PR9>
extern volatile __bit                   SMT1PR9             __at(0x6CB1);	// @ (0xD96 * 8 + 1)
#define                                 SMT1PR9_bit         _BIT_ACCESS(SMT1PRH,1)
// PIE4<SMT1PRAIE>
extern volatile __bit                   SMT1PRAIE           __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 SMT1PRAIE_bit       _BIT_ACCESS(PIE4,1)
// PIR4<SMT1PRAIF>
extern volatile __bit                   SMT1PRAIF           __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 SMT1PRAIF_bit       _BIT_ACCESS(PIR4,1)
// SMT1CON0<SMT1PS0>
extern volatile __bit                   SMT1PS0             __at(0x6CC0);	// @ (0xD98 * 8 + 0)
#define                                 SMT1PS0_bit         _BIT_ACCESS(SMT1CON0,0)
// SMT1CON0<SMT1PS1>
extern volatile __bit                   SMT1PS1             __at(0x6CC1);	// @ (0xD98 * 8 + 1)
#define                                 SMT1PS1_bit         _BIT_ACCESS(SMT1CON0,1)
// PIE4<SMT1PWAIE>
extern volatile __bit                   SMT1PWAIE           __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 SMT1PWAIE_bit       _BIT_ACCESS(PIE4,2)
// PIR4<SMT1PWAIF>
extern volatile __bit                   SMT1PWAIF           __at(0xA2);	// @ (0x14 * 8 + 2)
#define                                 SMT1PWAIF_bit       _BIT_ACCESS(PIR4,2)
// SMT1CON1<SMT1REPEAT>
extern volatile __bit                   SMT1REPEAT          __at(0x6CCE);	// @ (0xD99 * 8 + 6)
#define                                 SMT1REPEAT_bit      _BIT_ACCESS(SMT1CON1,6)
// SMT1STAT<SMT1RESET>
extern volatile __bit                   SMT1RESET           __at(0x6CD5);	// @ (0xD9A * 8 + 5)
#define                                 SMT1RESET_bit       _BIT_ACCESS(SMT1STAT,5)
// SMT1SIG<SMT1SSEL0>
extern volatile __bit                   SMT1SSEL0           __at(0x6CE0);	// @ (0xD9C * 8 + 0)
#define                                 SMT1SSEL0_bit       _BIT_ACCESS(SMT1SIG,0)
// SMT1SIG<SMT1SSEL1>
extern volatile __bit                   SMT1SSEL1           __at(0x6CE1);	// @ (0xD9C * 8 + 1)
#define                                 SMT1SSEL1_bit       _BIT_ACCESS(SMT1SIG,1)
// SMT1SIG<SMT1SSEL2>
extern volatile __bit                   SMT1SSEL2           __at(0x6CE2);	// @ (0xD9C * 8 + 2)
#define                                 SMT1SSEL2_bit       _BIT_ACCESS(SMT1SIG,2)
// SMT1TMRL<SMT1TMR0>
extern volatile __bit                   SMT1TMR0            __at(0x6C60);	// @ (0xD8C * 8 + 0)
#define                                 SMT1TMR0_bit        _BIT_ACCESS(SMT1TMRL,0)
// SMT1TMRL<SMT1TMR1>
extern volatile __bit                   SMT1TMR1            __at(0x6C61);	// @ (0xD8C * 8 + 1)
#define                                 SMT1TMR1_bit        _BIT_ACCESS(SMT1TMRL,1)
// SMT1TMRH<SMT1TMR10>
extern volatile __bit                   SMT1TMR10           __at(0x6C6A);	// @ (0xD8D * 8 + 2)
#define                                 SMT1TMR10_bit       _BIT_ACCESS(SMT1TMRH,2)
// SMT1TMRH<SMT1TMR11>
extern volatile __bit                   SMT1TMR11           __at(0x6C6B);	// @ (0xD8D * 8 + 3)
#define                                 SMT1TMR11_bit       _BIT_ACCESS(SMT1TMRH,3)
// SMT1TMRH<SMT1TMR12>
extern volatile __bit                   SMT1TMR12           __at(0x6C6C);	// @ (0xD8D * 8 + 4)
#define                                 SMT1TMR12_bit       _BIT_ACCESS(SMT1TMRH,4)
// SMT1TMRH<SMT1TMR13>
extern volatile __bit                   SMT1TMR13           __at(0x6C6D);	// @ (0xD8D * 8 + 5)
#define                                 SMT1TMR13_bit       _BIT_ACCESS(SMT1TMRH,5)
// SMT1TMRH<SMT1TMR14>
extern volatile __bit                   SMT1TMR14           __at(0x6C6E);	// @ (0xD8D * 8 + 6)
#define                                 SMT1TMR14_bit       _BIT_ACCESS(SMT1TMRH,6)
// SMT1TMRH<SMT1TMR15>
extern volatile __bit                   SMT1TMR15           __at(0x6C6F);	// @ (0xD8D * 8 + 7)
#define                                 SMT1TMR15_bit       _BIT_ACCESS(SMT1TMRH,7)
// SMT1TMRU<SMT1TMR16>
extern volatile __bit                   SMT1TMR16           __at(0x6C70);	// @ (0xD8E * 8 + 0)
#define                                 SMT1TMR16_bit       _BIT_ACCESS(SMT1TMRU,0)
// SMT1TMRU<SMT1TMR17>
extern volatile __bit                   SMT1TMR17           __at(0x6C71);	// @ (0xD8E * 8 + 1)
#define                                 SMT1TMR17_bit       _BIT_ACCESS(SMT1TMRU,1)
// SMT1TMRU<SMT1TMR18>
extern volatile __bit                   SMT1TMR18           __at(0x6C72);	// @ (0xD8E * 8 + 2)
#define                                 SMT1TMR18_bit       _BIT_ACCESS(SMT1TMRU,2)
// SMT1TMRU<SMT1TMR19>
extern volatile __bit                   SMT1TMR19           __at(0x6C73);	// @ (0xD8E * 8 + 3)
#define                                 SMT1TMR19_bit       _BIT_ACCESS(SMT1TMRU,3)
// SMT1TMRL<SMT1TMR2>
extern volatile __bit                   SMT1TMR2            __at(0x6C62);	// @ (0xD8C * 8 + 2)
#define                                 SMT1TMR2_bit        _BIT_ACCESS(SMT1TMRL,2)
// SMT1TMRU<SMT1TMR20>
extern volatile __bit                   SMT1TMR20           __at(0x6C74);	// @ (0xD8E * 8 + 4)
#define                                 SMT1TMR20_bit       _BIT_ACCESS(SMT1TMRU,4)
// SMT1TMRU<SMT1TMR21>
extern volatile __bit                   SMT1TMR21           __at(0x6C75);	// @ (0xD8E * 8 + 5)
#define                                 SMT1TMR21_bit       _BIT_ACCESS(SMT1TMRU,5)
// SMT1TMRU<SMT1TMR22>
extern volatile __bit                   SMT1TMR22           __at(0x6C76);	// @ (0xD8E * 8 + 6)
#define                                 SMT1TMR22_bit       _BIT_ACCESS(SMT1TMRU,6)
// SMT1TMRU<SMT1TMR23>
extern volatile __bit                   SMT1TMR23           __at(0x6C77);	// @ (0xD8E * 8 + 7)
#define                                 SMT1TMR23_bit       _BIT_ACCESS(SMT1TMRU,7)
// SMT1TMRL<SMT1TMR3>
extern volatile __bit                   SMT1TMR3            __at(0x6C63);	// @ (0xD8C * 8 + 3)
#define                                 SMT1TMR3_bit        _BIT_ACCESS(SMT1TMRL,3)
// SMT1TMRL<SMT1TMR4>
extern volatile __bit                   SMT1TMR4            __at(0x6C64);	// @ (0xD8C * 8 + 4)
#define                                 SMT1TMR4_bit        _BIT_ACCESS(SMT1TMRL,4)
// SMT1TMRL<SMT1TMR5>
extern volatile __bit                   SMT1TMR5            __at(0x6C65);	// @ (0xD8C * 8 + 5)
#define                                 SMT1TMR5_bit        _BIT_ACCESS(SMT1TMRL,5)
// SMT1TMRL<SMT1TMR6>
extern volatile __bit                   SMT1TMR6            __at(0x6C66);	// @ (0xD8C * 8 + 6)
#define                                 SMT1TMR6_bit        _BIT_ACCESS(SMT1TMRL,6)
// SMT1TMRL<SMT1TMR7>
extern volatile __bit                   SMT1TMR7            __at(0x6C67);	// @ (0xD8C * 8 + 7)
#define                                 SMT1TMR7_bit        _BIT_ACCESS(SMT1TMRL,7)
// SMT1TMRH<SMT1TMR8>
extern volatile __bit                   SMT1TMR8            __at(0x6C68);	// @ (0xD8D * 8 + 0)
#define                                 SMT1TMR8_bit        _BIT_ACCESS(SMT1TMRH,0)
// SMT1TMRH<SMT1TMR9>
extern volatile __bit                   SMT1TMR9            __at(0x6C69);	// @ (0xD8D * 8 + 1)
#define                                 SMT1TMR9_bit        _BIT_ACCESS(SMT1TMRH,1)
// SMT1STAT<SMT1TS>
extern volatile __bit                   SMT1TS              __at(0x6CD2);	// @ (0xD9A * 8 + 2)
#define                                 SMT1TS_bit          _BIT_ACCESS(SMT1STAT,2)
// SMT1STAT<SMT1WS>
extern volatile __bit                   SMT1WS              __at(0x6CD1);	// @ (0xD9A * 8 + 1)
#define                                 SMT1WS_bit          _BIT_ACCESS(SMT1STAT,1)
// SMT1WIN<SMT1WSEL0>
extern volatile __bit                   SMT1WSEL0           __at(0x6CE8);	// @ (0xD9D * 8 + 0)
#define                                 SMT1WSEL0_bit       _BIT_ACCESS(SMT1WIN,0)
// SMT1WIN<SMT1WSEL1>
extern volatile __bit                   SMT1WSEL1           __at(0x6CE9);	// @ (0xD9D * 8 + 1)
#define                                 SMT1WSEL1_bit       _BIT_ACCESS(SMT1WIN,1)
// SMT1WIN<SMT1WSEL2>
extern volatile __bit                   SMT1WSEL2           __at(0x6CEA);	// @ (0xD9D * 8 + 2)
#define                                 SMT1WSEL2_bit       _BIT_ACCESS(SMT1WIN,2)
// SMT1WIN<SMT1WSEL3>
extern volatile __bit                   SMT1WSEL3           __at(0x6CEB);	// @ (0xD9D * 8 + 3)
#define                                 SMT1WSEL3_bit       _BIT_ACCESS(SMT1WIN,3)
// SMT2STAT<SMT2AS>
extern volatile __bit                   SMT2AS              __at(0x6D60);	// @ (0xDAC * 8 + 0)
#define                                 SMT2AS_bit          _BIT_ACCESS(SMT2STAT,0)
// SMT2CPRL<SMT2CPR0>
extern volatile __bit                   SMT2CPR0            __at(0x6D08);	// @ (0xDA1 * 8 + 0)
#define                                 SMT2CPR0_bit        _BIT_ACCESS(SMT2CPRL,0)
// SMT2CPRL<SMT2CPR1>
extern volatile __bit                   SMT2CPR1            __at(0x6D09);	// @ (0xDA1 * 8 + 1)
#define                                 SMT2CPR1_bit        _BIT_ACCESS(SMT2CPRL,1)
// SMT2CPRH<SMT2CPR10>
extern volatile __bit                   SMT2CPR10           __at(0x6D12);	// @ (0xDA2 * 8 + 2)
#define                                 SMT2CPR10_bit       _BIT_ACCESS(SMT2CPRH,2)
// SMT2CPRH<SMT2CPR11>
extern volatile __bit                   SMT2CPR11           __at(0x6D13);	// @ (0xDA2 * 8 + 3)
#define                                 SMT2CPR11_bit       _BIT_ACCESS(SMT2CPRH,3)
// SMT2CPRH<SMT2CPR12>
extern volatile __bit                   SMT2CPR12           __at(0x6D14);	// @ (0xDA2 * 8 + 4)
#define                                 SMT2CPR12_bit       _BIT_ACCESS(SMT2CPRH,4)
// SMT2CPRH<SMT2CPR13>
extern volatile __bit                   SMT2CPR13           __at(0x6D15);	// @ (0xDA2 * 8 + 5)
#define                                 SMT2CPR13_bit       _BIT_ACCESS(SMT2CPRH,5)
// SMT2CPRH<SMT2CPR14>
extern volatile __bit                   SMT2CPR14           __at(0x6D16);	// @ (0xDA2 * 8 + 6)
#define                                 SMT2CPR14_bit       _BIT_ACCESS(SMT2CPRH,6)
// SMT2CPRH<SMT2CPR15>
extern volatile __bit                   SMT2CPR15           __at(0x6D17);	// @ (0xDA2 * 8 + 7)
#define                                 SMT2CPR15_bit       _BIT_ACCESS(SMT2CPRH,7)
// SMT2CPRU<SMT2CPR16>
extern volatile __bit                   SMT2CPR16           __at(0x6D18);	// @ (0xDA3 * 8 + 0)
#define                                 SMT2CPR16_bit       _BIT_ACCESS(SMT2CPRU,0)
// SMT2CPRU<SMT2CPR17>
extern volatile __bit                   SMT2CPR17           __at(0x6D19);	// @ (0xDA3 * 8 + 1)
#define                                 SMT2CPR17_bit       _BIT_ACCESS(SMT2CPRU,1)
// SMT2CPRU<SMT2CPR18>
extern volatile __bit                   SMT2CPR18           __at(0x6D1A);	// @ (0xDA3 * 8 + 2)
#define                                 SMT2CPR18_bit       _BIT_ACCESS(SMT2CPRU,2)
// SMT2CPRU<SMT2CPR19>
extern volatile __bit                   SMT2CPR19           __at(0x6D1B);	// @ (0xDA3 * 8 + 3)
#define                                 SMT2CPR19_bit       _BIT_ACCESS(SMT2CPRU,3)
// SMT2CPRL<SMT2CPR2>
extern volatile __bit                   SMT2CPR2            __at(0x6D0A);	// @ (0xDA1 * 8 + 2)
#define                                 SMT2CPR2_bit        _BIT_ACCESS(SMT2CPRL,2)
// SMT2CPRU<SMT2CPR20>
extern volatile __bit                   SMT2CPR20           __at(0x6D1C);	// @ (0xDA3 * 8 + 4)
#define                                 SMT2CPR20_bit       _BIT_ACCESS(SMT2CPRU,4)
// SMT2CPRU<SMT2CPR21>
extern volatile __bit                   SMT2CPR21           __at(0x6D1D);	// @ (0xDA3 * 8 + 5)
#define                                 SMT2CPR21_bit       _BIT_ACCESS(SMT2CPRU,5)
// SMT2CPRU<SMT2CPR22>
extern volatile __bit                   SMT2CPR22           __at(0x6D1E);	// @ (0xDA3 * 8 + 6)
#define                                 SMT2CPR22_bit       _BIT_ACCESS(SMT2CPRU,6)
// SMT2CPRU<SMT2CPR23>
extern volatile __bit                   SMT2CPR23           __at(0x6D1F);	// @ (0xDA3 * 8 + 7)
#define                                 SMT2CPR23_bit       _BIT_ACCESS(SMT2CPRU,7)
// SMT2CPRL<SMT2CPR3>
extern volatile __bit                   SMT2CPR3            __at(0x6D0B);	// @ (0xDA1 * 8 + 3)
#define                                 SMT2CPR3_bit        _BIT_ACCESS(SMT2CPRL,3)
// SMT2CPRL<SMT2CPR4>
extern volatile __bit                   SMT2CPR4            __at(0x6D0C);	// @ (0xDA1 * 8 + 4)
#define                                 SMT2CPR4_bit        _BIT_ACCESS(SMT2CPRL,4)
// SMT2CPRL<SMT2CPR5>
extern volatile __bit                   SMT2CPR5            __at(0x6D0D);	// @ (0xDA1 * 8 + 5)
#define                                 SMT2CPR5_bit        _BIT_ACCESS(SMT2CPRL,5)
// SMT2CPRL<SMT2CPR6>
extern volatile __bit                   SMT2CPR6            __at(0x6D0E);	// @ (0xDA1 * 8 + 6)
#define                                 SMT2CPR6_bit        _BIT_ACCESS(SMT2CPRL,6)
// SMT2CPRL<SMT2CPR7>
extern volatile __bit                   SMT2CPR7            __at(0x6D0F);	// @ (0xDA1 * 8 + 7)
#define                                 SMT2CPR7_bit        _BIT_ACCESS(SMT2CPRL,7)
// SMT2CPRH<SMT2CPR8>
extern volatile __bit                   SMT2CPR8            __at(0x6D10);	// @ (0xDA2 * 8 + 0)
#define                                 SMT2CPR8_bit        _BIT_ACCESS(SMT2CPRH,0)
// SMT2CPRH<SMT2CPR9>
extern volatile __bit                   SMT2CPR9            __at(0x6D11);	// @ (0xDA2 * 8 + 1)
#define                                 SMT2CPR9_bit        _BIT_ACCESS(SMT2CPRH,1)
// SMT2STAT<SMT2CPRUP>
extern volatile __bit                   SMT2CPRUP           __at(0x6D67);	// @ (0xDAC * 8 + 7)
#define                                 SMT2CPRUP_bit       _BIT_ACCESS(SMT2STAT,7)
// SMT2CPWL<SMT2CPW0>
extern volatile __bit                   SMT2CPW0            __at(0x6D20);	// @ (0xDA4 * 8 + 0)
#define                                 SMT2CPW0_bit        _BIT_ACCESS(SMT2CPWL,0)
// SMT2CPWL<SMT2CPW1>
extern volatile __bit                   SMT2CPW1            __at(0x6D21);	// @ (0xDA4 * 8 + 1)
#define                                 SMT2CPW1_bit        _BIT_ACCESS(SMT2CPWL,1)
// SMT2CPWH<SMT2CPW10>
extern volatile __bit                   SMT2CPW10           __at(0x6D2A);	// @ (0xDA5 * 8 + 2)
#define                                 SMT2CPW10_bit       _BIT_ACCESS(SMT2CPWH,2)
// SMT2CPWH<SMT2CPW11>
extern volatile __bit                   SMT2CPW11           __at(0x6D2B);	// @ (0xDA5 * 8 + 3)
#define                                 SMT2CPW11_bit       _BIT_ACCESS(SMT2CPWH,3)
// SMT2CPWH<SMT2CPW12>
extern volatile __bit                   SMT2CPW12           __at(0x6D2C);	// @ (0xDA5 * 8 + 4)
#define                                 SMT2CPW12_bit       _BIT_ACCESS(SMT2CPWH,4)
// SMT2CPWH<SMT2CPW13>
extern volatile __bit                   SMT2CPW13           __at(0x6D2D);	// @ (0xDA5 * 8 + 5)
#define                                 SMT2CPW13_bit       _BIT_ACCESS(SMT2CPWH,5)
// SMT2CPWH<SMT2CPW14>
extern volatile __bit                   SMT2CPW14           __at(0x6D2E);	// @ (0xDA5 * 8 + 6)
#define                                 SMT2CPW14_bit       _BIT_ACCESS(SMT2CPWH,6)
// SMT2CPWH<SMT2CPW15>
extern volatile __bit                   SMT2CPW15           __at(0x6D2F);	// @ (0xDA5 * 8 + 7)
#define                                 SMT2CPW15_bit       _BIT_ACCESS(SMT2CPWH,7)
// SMT2CPWU<SMT2CPW16>
extern volatile __bit                   SMT2CPW16           __at(0x6D30);	// @ (0xDA6 * 8 + 0)
#define                                 SMT2CPW16_bit       _BIT_ACCESS(SMT2CPWU,0)
// SMT2CPWU<SMT2CPW17>
extern volatile __bit                   SMT2CPW17           __at(0x6D31);	// @ (0xDA6 * 8 + 1)
#define                                 SMT2CPW17_bit       _BIT_ACCESS(SMT2CPWU,1)
// SMT2CPWU<SMT2CPW18>
extern volatile __bit                   SMT2CPW18           __at(0x6D32);	// @ (0xDA6 * 8 + 2)
#define                                 SMT2CPW18_bit       _BIT_ACCESS(SMT2CPWU,2)
// SMT2CPWU<SMT2CPW19>
extern volatile __bit                   SMT2CPW19           __at(0x6D33);	// @ (0xDA6 * 8 + 3)
#define                                 SMT2CPW19_bit       _BIT_ACCESS(SMT2CPWU,3)
// SMT2CPWL<SMT2CPW2>
extern volatile __bit                   SMT2CPW2            __at(0x6D22);	// @ (0xDA4 * 8 + 2)
#define                                 SMT2CPW2_bit        _BIT_ACCESS(SMT2CPWL,2)
// SMT2CPWU<SMT2CPW20>
extern volatile __bit                   SMT2CPW20           __at(0x6D34);	// @ (0xDA6 * 8 + 4)
#define                                 SMT2CPW20_bit       _BIT_ACCESS(SMT2CPWU,4)
// SMT2CPWU<SMT2CPW21>
extern volatile __bit                   SMT2CPW21           __at(0x6D35);	// @ (0xDA6 * 8 + 5)
#define                                 SMT2CPW21_bit       _BIT_ACCESS(SMT2CPWU,5)
// SMT2CPWU<SMT2CPW22>
extern volatile __bit                   SMT2CPW22           __at(0x6D36);	// @ (0xDA6 * 8 + 6)
#define                                 SMT2CPW22_bit       _BIT_ACCESS(SMT2CPWU,6)
// SMT2CPWU<SMT2CPW23>
extern volatile __bit                   SMT2CPW23           __at(0x6D37);	// @ (0xDA6 * 8 + 7)
#define                                 SMT2CPW23_bit       _BIT_ACCESS(SMT2CPWU,7)
// SMT2CPWL<SMT2CPW3>
extern volatile __bit                   SMT2CPW3            __at(0x6D23);	// @ (0xDA4 * 8 + 3)
#define                                 SMT2CPW3_bit        _BIT_ACCESS(SMT2CPWL,3)
// SMT2CPWL<SMT2CPW4>
extern volatile __bit                   SMT2CPW4            __at(0x6D24);	// @ (0xDA4 * 8 + 4)
#define                                 SMT2CPW4_bit        _BIT_ACCESS(SMT2CPWL,4)
// SMT2CPWL<SMT2CPW5>
extern volatile __bit                   SMT2CPW5            __at(0x6D25);	// @ (0xDA4 * 8 + 5)
#define                                 SMT2CPW5_bit        _BIT_ACCESS(SMT2CPWL,5)
// SMT2CPWL<SMT2CPW6>
extern volatile __bit                   SMT2CPW6            __at(0x6D26);	// @ (0xDA4 * 8 + 6)
#define                                 SMT2CPW6_bit        _BIT_ACCESS(SMT2CPWL,6)
// SMT2CPWL<SMT2CPW7>
extern volatile __bit                   SMT2CPW7            __at(0x6D27);	// @ (0xDA4 * 8 + 7)
#define                                 SMT2CPW7_bit        _BIT_ACCESS(SMT2CPWL,7)
// SMT2CPWH<SMT2CPW8>
extern volatile __bit                   SMT2CPW8            __at(0x6D28);	// @ (0xDA5 * 8 + 0)
#define                                 SMT2CPW8_bit        _BIT_ACCESS(SMT2CPWH,0)
// SMT2CPWH<SMT2CPW9>
extern volatile __bit                   SMT2CPW9            __at(0x6D29);	// @ (0xDA5 * 8 + 1)
#define                                 SMT2CPW9_bit        _BIT_ACCESS(SMT2CPWH,1)
// SMT2STAT<SMT2CPWUP>
extern volatile __bit                   SMT2CPWUP           __at(0x6D66);	// @ (0xDAC * 8 + 6)
#define                                 SMT2CPWUP_bit       _BIT_ACCESS(SMT2STAT,6)
// SMT2CLK<SMT2CSEL0>
extern volatile __bit                   SMT2CSEL0           __at(0x6D68);	// @ (0xDAD * 8 + 0)
#define                                 SMT2CSEL0_bit       _BIT_ACCESS(SMT2CLK,0)
// SMT2CLK<SMT2CSEL1>
extern volatile __bit                   SMT2CSEL1           __at(0x6D69);	// @ (0xDAD * 8 + 1)
#define                                 SMT2CSEL1_bit       _BIT_ACCESS(SMT2CLK,1)
// SMT2CLK<SMT2CSEL2>
extern volatile __bit                   SMT2CSEL2           __at(0x6D6A);	// @ (0xDAD * 8 + 2)
#define                                 SMT2CSEL2_bit       _BIT_ACCESS(SMT2CLK,2)
// SMT2CON1<SMT2GO>
extern volatile __bit                   SMT2GO              __at(0x6D5F);	// @ (0xDAB * 8 + 7)
#define                                 SMT2GO_bit          _BIT_ACCESS(SMT2CON1,7)
// PIE4<SMT2IE>
extern volatile __bit                   SMT2IE              __at(0x4A3);	// @ (0x94 * 8 + 3)
#define                                 SMT2IE_bit          _BIT_ACCESS(PIE4,3)
// PIR4<SMT2IF>
extern volatile __bit                   SMT2IF              __at(0xA3);	// @ (0x14 * 8 + 3)
#define                                 SMT2IF_bit          _BIT_ACCESS(PIR4,3)
// SMT2CON1<SMT2MODE0>
extern volatile __bit                   SMT2MODE0           __at(0x6D58);	// @ (0xDAB * 8 + 0)
#define                                 SMT2MODE0_bit       _BIT_ACCESS(SMT2CON1,0)
// SMT2CON1<SMT2MODE1>
extern volatile __bit                   SMT2MODE1           __at(0x6D59);	// @ (0xDAB * 8 + 1)
#define                                 SMT2MODE1_bit       _BIT_ACCESS(SMT2CON1,1)
// SMT2CON1<SMT2MODE2>
extern volatile __bit                   SMT2MODE2           __at(0x6D5A);	// @ (0xDAB * 8 + 2)
#define                                 SMT2MODE2_bit       _BIT_ACCESS(SMT2CON1,2)
// SMT2CON1<SMT2MODE3>
extern volatile __bit                   SMT2MODE3           __at(0x6D5B);	// @ (0xDAB * 8 + 3)
#define                                 SMT2MODE3_bit       _BIT_ACCESS(SMT2CON1,3)
// SMT2PRL<SMT2PR0>
extern volatile __bit                   SMT2PR0             __at(0x6D38);	// @ (0xDA7 * 8 + 0)
#define                                 SMT2PR0_bit         _BIT_ACCESS(SMT2PRL,0)
// SMT2PRL<SMT2PR1>
extern volatile __bit                   SMT2PR1             __at(0x6D39);	// @ (0xDA7 * 8 + 1)
#define                                 SMT2PR1_bit         _BIT_ACCESS(SMT2PRL,1)
// SMT2PRH<SMT2PR10>
extern volatile __bit                   SMT2PR10            __at(0x6D42);	// @ (0xDA8 * 8 + 2)
#define                                 SMT2PR10_bit        _BIT_ACCESS(SMT2PRH,2)
// SMT2PRH<SMT2PR11>
extern volatile __bit                   SMT2PR11            __at(0x6D43);	// @ (0xDA8 * 8 + 3)
#define                                 SMT2PR11_bit        _BIT_ACCESS(SMT2PRH,3)
// SMT2PRH<SMT2PR12>
extern volatile __bit                   SMT2PR12            __at(0x6D44);	// @ (0xDA8 * 8 + 4)
#define                                 SMT2PR12_bit        _BIT_ACCESS(SMT2PRH,4)
// SMT2PRH<SMT2PR13>
extern volatile __bit                   SMT2PR13            __at(0x6D45);	// @ (0xDA8 * 8 + 5)
#define                                 SMT2PR13_bit        _BIT_ACCESS(SMT2PRH,5)
// SMT2PRH<SMT2PR14>
extern volatile __bit                   SMT2PR14            __at(0x6D46);	// @ (0xDA8 * 8 + 6)
#define                                 SMT2PR14_bit        _BIT_ACCESS(SMT2PRH,6)
// SMT2PRH<SMT2PR15>
extern volatile __bit                   SMT2PR15            __at(0x6D47);	// @ (0xDA8 * 8 + 7)
#define                                 SMT2PR15_bit        _BIT_ACCESS(SMT2PRH,7)
// SMT2PRU<SMT2PR16>
extern volatile __bit                   SMT2PR16            __at(0x6D48);	// @ (0xDA9 * 8 + 0)
#define                                 SMT2PR16_bit        _BIT_ACCESS(SMT2PRU,0)
// SMT2PRU<SMT2PR17>
extern volatile __bit                   SMT2PR17            __at(0x6D49);	// @ (0xDA9 * 8 + 1)
#define                                 SMT2PR17_bit        _BIT_ACCESS(SMT2PRU,1)
// SMT2PRU<SMT2PR18>
extern volatile __bit                   SMT2PR18            __at(0x6D4A);	// @ (0xDA9 * 8 + 2)
#define                                 SMT2PR18_bit        _BIT_ACCESS(SMT2PRU,2)
// SMT2PRU<SMT2PR19>
extern volatile __bit                   SMT2PR19            __at(0x6D4B);	// @ (0xDA9 * 8 + 3)
#define                                 SMT2PR19_bit        _BIT_ACCESS(SMT2PRU,3)
// SMT2PRL<SMT2PR2>
extern volatile __bit                   SMT2PR2             __at(0x6D3A);	// @ (0xDA7 * 8 + 2)
#define                                 SMT2PR2_bit         _BIT_ACCESS(SMT2PRL,2)
// SMT2PRU<SMT2PR20>
extern volatile __bit                   SMT2PR20            __at(0x6D4C);	// @ (0xDA9 * 8 + 4)
#define                                 SMT2PR20_bit        _BIT_ACCESS(SMT2PRU,4)
// SMT2PRU<SMT2PR21>
extern volatile __bit                   SMT2PR21            __at(0x6D4D);	// @ (0xDA9 * 8 + 5)
#define                                 SMT2PR21_bit        _BIT_ACCESS(SMT2PRU,5)
// SMT2PRU<SMT2PR22>
extern volatile __bit                   SMT2PR22            __at(0x6D4E);	// @ (0xDA9 * 8 + 6)
#define                                 SMT2PR22_bit        _BIT_ACCESS(SMT2PRU,6)
// SMT2PRU<SMT2PR23>
extern volatile __bit                   SMT2PR23            __at(0x6D4F);	// @ (0xDA9 * 8 + 7)
#define                                 SMT2PR23_bit        _BIT_ACCESS(SMT2PRU,7)
// SMT2PRL<SMT2PR3>
extern volatile __bit                   SMT2PR3             __at(0x6D3B);	// @ (0xDA7 * 8 + 3)
#define                                 SMT2PR3_bit         _BIT_ACCESS(SMT2PRL,3)
// SMT2PRL<SMT2PR4>
extern volatile __bit                   SMT2PR4             __at(0x6D3C);	// @ (0xDA7 * 8 + 4)
#define                                 SMT2PR4_bit         _BIT_ACCESS(SMT2PRL,4)
// SMT2PRL<SMT2PR5>
extern volatile __bit                   SMT2PR5             __at(0x6D3D);	// @ (0xDA7 * 8 + 5)
#define                                 SMT2PR5_bit         _BIT_ACCESS(SMT2PRL,5)
// SMT2PRL<SMT2PR6>
extern volatile __bit                   SMT2PR6             __at(0x6D3E);	// @ (0xDA7 * 8 + 6)
#define                                 SMT2PR6_bit         _BIT_ACCESS(SMT2PRL,6)
// SMT2PRL<SMT2PR7>
extern volatile __bit                   SMT2PR7             __at(0x6D3F);	// @ (0xDA7 * 8 + 7)
#define                                 SMT2PR7_bit         _BIT_ACCESS(SMT2PRL,7)
// SMT2PRH<SMT2PR8>
extern volatile __bit                   SMT2PR8             __at(0x6D40);	// @ (0xDA8 * 8 + 0)
#define                                 SMT2PR8_bit         _BIT_ACCESS(SMT2PRH,0)
// SMT2PRH<SMT2PR9>
extern volatile __bit                   SMT2PR9             __at(0x6D41);	// @ (0xDA8 * 8 + 1)
#define                                 SMT2PR9_bit         _BIT_ACCESS(SMT2PRH,1)
// PIE4<SMT2PRAIE>
extern volatile __bit                   SMT2PRAIE           __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 SMT2PRAIE_bit       _BIT_ACCESS(PIE4,4)
// PIR4<SMT2PRAIF>
extern volatile __bit                   SMT2PRAIF           __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 SMT2PRAIF_bit       _BIT_ACCESS(PIR4,4)
// SMT2CON0<SMT2PS0>
extern volatile __bit                   SMT2PS0             __at(0x6D50);	// @ (0xDAA * 8 + 0)
#define                                 SMT2PS0_bit         _BIT_ACCESS(SMT2CON0,0)
// SMT2CON0<SMT2PS1>
extern volatile __bit                   SMT2PS1             __at(0x6D51);	// @ (0xDAA * 8 + 1)
#define                                 SMT2PS1_bit         _BIT_ACCESS(SMT2CON0,1)
// PIE4<SMT2PWAIE>
extern volatile __bit                   SMT2PWAIE           __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 SMT2PWAIE_bit       _BIT_ACCESS(PIE4,5)
// PIR4<SMT2PWAIF>
extern volatile __bit                   SMT2PWAIF           __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 SMT2PWAIF_bit       _BIT_ACCESS(PIR4,5)
// SMT2CON1<SMT2REPEAT>
extern volatile __bit                   SMT2REPEAT          __at(0x6D5E);	// @ (0xDAB * 8 + 6)
#define                                 SMT2REPEAT_bit      _BIT_ACCESS(SMT2CON1,6)
// SMT2STAT<SMT2RESET>
extern volatile __bit                   SMT2RESET           __at(0x6D65);	// @ (0xDAC * 8 + 5)
#define                                 SMT2RESET_bit       _BIT_ACCESS(SMT2STAT,5)
// SMT2SIG<SMT2SSEL0>
extern volatile __bit                   SMT2SSEL0           __at(0x6D70);	// @ (0xDAE * 8 + 0)
#define                                 SMT2SSEL0_bit       _BIT_ACCESS(SMT2SIG,0)
// SMT2SIG<SMT2SSEL1>
extern volatile __bit                   SMT2SSEL1           __at(0x6D71);	// @ (0xDAE * 8 + 1)
#define                                 SMT2SSEL1_bit       _BIT_ACCESS(SMT2SIG,1)
// SMT2SIG<SMT2SSEL2>
extern volatile __bit                   SMT2SSEL2           __at(0x6D72);	// @ (0xDAE * 8 + 2)
#define                                 SMT2SSEL2_bit       _BIT_ACCESS(SMT2SIG,2)
// SMT2TMRL<SMT2TMR0>
extern volatile __bit                   SMT2TMR0            __at(0x6CF0);	// @ (0xD9E * 8 + 0)
#define                                 SMT2TMR0_bit        _BIT_ACCESS(SMT2TMRL,0)
// SMT2TMRL<SMT2TMR1>
extern volatile __bit                   SMT2TMR1            __at(0x6CF1);	// @ (0xD9E * 8 + 1)
#define                                 SMT2TMR1_bit        _BIT_ACCESS(SMT2TMRL,1)
// SMT2TMRH<SMT2TMR10>
extern volatile __bit                   SMT2TMR10           __at(0x6CFA);	// @ (0xD9F * 8 + 2)
#define                                 SMT2TMR10_bit       _BIT_ACCESS(SMT2TMRH,2)
// SMT2TMRH<SMT2TMR11>
extern volatile __bit                   SMT2TMR11           __at(0x6CFB);	// @ (0xD9F * 8 + 3)
#define                                 SMT2TMR11_bit       _BIT_ACCESS(SMT2TMRH,3)
// SMT2TMRH<SMT2TMR12>
extern volatile __bit                   SMT2TMR12           __at(0x6CFC);	// @ (0xD9F * 8 + 4)
#define                                 SMT2TMR12_bit       _BIT_ACCESS(SMT2TMRH,4)
// SMT2TMRH<SMT2TMR13>
extern volatile __bit                   SMT2TMR13           __at(0x6CFD);	// @ (0xD9F * 8 + 5)
#define                                 SMT2TMR13_bit       _BIT_ACCESS(SMT2TMRH,5)
// SMT2TMRH<SMT2TMR14>
extern volatile __bit                   SMT2TMR14           __at(0x6CFE);	// @ (0xD9F * 8 + 6)
#define                                 SMT2TMR14_bit       _BIT_ACCESS(SMT2TMRH,6)
// SMT2TMRH<SMT2TMR15>
extern volatile __bit                   SMT2TMR15           __at(0x6CFF);	// @ (0xD9F * 8 + 7)
#define                                 SMT2TMR15_bit       _BIT_ACCESS(SMT2TMRH,7)
// SMT2TMRU<SMT2TMR16>
extern volatile __bit                   SMT2TMR16           __at(0x6D00);	// @ (0xDA0 * 8 + 0)
#define                                 SMT2TMR16_bit       _BIT_ACCESS(SMT2TMRU,0)
// SMT2TMRU<SMT2TMR17>
extern volatile __bit                   SMT2TMR17           __at(0x6D01);	// @ (0xDA0 * 8 + 1)
#define                                 SMT2TMR17_bit       _BIT_ACCESS(SMT2TMRU,1)
// SMT2TMRU<SMT2TMR18>
extern volatile __bit                   SMT2TMR18           __at(0x6D02);	// @ (0xDA0 * 8 + 2)
#define                                 SMT2TMR18_bit       _BIT_ACCESS(SMT2TMRU,2)
// SMT2TMRU<SMT2TMR19>
extern volatile __bit                   SMT2TMR19           __at(0x6D03);	// @ (0xDA0 * 8 + 3)
#define                                 SMT2TMR19_bit       _BIT_ACCESS(SMT2TMRU,3)
// SMT2TMRL<SMT2TMR2>
extern volatile __bit                   SMT2TMR2            __at(0x6CF2);	// @ (0xD9E * 8 + 2)
#define                                 SMT2TMR2_bit        _BIT_ACCESS(SMT2TMRL,2)
// SMT2TMRU<SMT2TMR20>
extern volatile __bit                   SMT2TMR20           __at(0x6D04);	// @ (0xDA0 * 8 + 4)
#define                                 SMT2TMR20_bit       _BIT_ACCESS(SMT2TMRU,4)
// SMT2TMRU<SMT2TMR21>
extern volatile __bit                   SMT2TMR21           __at(0x6D05);	// @ (0xDA0 * 8 + 5)
#define                                 SMT2TMR21_bit       _BIT_ACCESS(SMT2TMRU,5)
// SMT2TMRU<SMT2TMR22>
extern volatile __bit                   SMT2TMR22           __at(0x6D06);	// @ (0xDA0 * 8 + 6)
#define                                 SMT2TMR22_bit       _BIT_ACCESS(SMT2TMRU,6)
// SMT2TMRU<SMT2TMR23>
extern volatile __bit                   SMT2TMR23           __at(0x6D07);	// @ (0xDA0 * 8 + 7)
#define                                 SMT2TMR23_bit       _BIT_ACCESS(SMT2TMRU,7)
// SMT2TMRL<SMT2TMR3>
extern volatile __bit                   SMT2TMR3            __at(0x6CF3);	// @ (0xD9E * 8 + 3)
#define                                 SMT2TMR3_bit        _BIT_ACCESS(SMT2TMRL,3)
// SMT2TMRL<SMT2TMR4>
extern volatile __bit                   SMT2TMR4            __at(0x6CF4);	// @ (0xD9E * 8 + 4)
#define                                 SMT2TMR4_bit        _BIT_ACCESS(SMT2TMRL,4)
// SMT2TMRL<SMT2TMR5>
extern volatile __bit                   SMT2TMR5            __at(0x6CF5);	// @ (0xD9E * 8 + 5)
#define                                 SMT2TMR5_bit        _BIT_ACCESS(SMT2TMRL,5)
// SMT2TMRL<SMT2TMR6>
extern volatile __bit                   SMT2TMR6            __at(0x6CF6);	// @ (0xD9E * 8 + 6)
#define                                 SMT2TMR6_bit        _BIT_ACCESS(SMT2TMRL,6)
// SMT2TMRL<SMT2TMR7>
extern volatile __bit                   SMT2TMR7            __at(0x6CF7);	// @ (0xD9E * 8 + 7)
#define                                 SMT2TMR7_bit        _BIT_ACCESS(SMT2TMRL,7)
// SMT2TMRH<SMT2TMR8>
extern volatile __bit                   SMT2TMR8            __at(0x6CF8);	// @ (0xD9F * 8 + 0)
#define                                 SMT2TMR8_bit        _BIT_ACCESS(SMT2TMRH,0)
// SMT2TMRH<SMT2TMR9>
extern volatile __bit                   SMT2TMR9            __at(0x6CF9);	// @ (0xD9F * 8 + 1)
#define                                 SMT2TMR9_bit        _BIT_ACCESS(SMT2TMRH,1)
// SMT2STAT<SMT2TS>
extern volatile __bit                   SMT2TS              __at(0x6D62);	// @ (0xDAC * 8 + 2)
#define                                 SMT2TS_bit          _BIT_ACCESS(SMT2STAT,2)
// SMT2STAT<SMT2WS>
extern volatile __bit                   SMT2WS              __at(0x6D61);	// @ (0xDAC * 8 + 1)
#define                                 SMT2WS_bit          _BIT_ACCESS(SMT2STAT,1)
// SMT2WIN<SMT2WSEL0>
extern volatile __bit                   SMT2WSEL0           __at(0x6D78);	// @ (0xDAF * 8 + 0)
#define                                 SMT2WSEL0_bit       _BIT_ACCESS(SMT2WIN,0)
// SMT2WIN<SMT2WSEL1>
extern volatile __bit                   SMT2WSEL1           __at(0x6D79);	// @ (0xDAF * 8 + 1)
#define                                 SMT2WSEL1_bit       _BIT_ACCESS(SMT2WIN,1)
// SMT2WIN<SMT2WSEL2>
extern volatile __bit                   SMT2WSEL2           __at(0x6D7A);	// @ (0xDAF * 8 + 2)
#define                                 SMT2WSEL2_bit       _BIT_ACCESS(SMT2WIN,2)
// SMT2WIN<SMT2WSEL3>
extern volatile __bit                   SMT2WSEL3           __at(0x6D7B);	// @ (0xDAF * 8 + 3)
#define                                 SMT2WSEL3_bit       _BIT_ACCESS(SMT2WIN,3)
// OSCCON<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCCON,7)
// WDTTMR<STATE>
extern volatile __bit                   STATE               __at(0x38AA);	// @ (0x715 * 8 + 2)
#define                                 STATE_bit           _BIT_ACCESS(WDTTMR,2)
// PCON<STKOVF>
extern volatile __bit                   STKOVF              __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON,7)
// PCON<STKUNF>
extern volatile __bit                   STKUNF              __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON,6)
// CWG1OCON0<STRA>
extern volatile __bit                   STRA                __at(0x34A8);	// @ (0x695 * 8 + 0)
#define                                 STRA_bit            _BIT_ACCESS(CWG1OCON0,0)
// CWG1OCON0<STRB>
extern volatile __bit                   STRB                __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 STRB_bit            _BIT_ACCESS(CWG1OCON0,1)
// CWG1OCON0<STRC>
extern volatile __bit                   STRC                __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 STRC_bit            _BIT_ACCESS(CWG1OCON0,2)
// CWG1OCON0<STRD>
extern volatile __bit                   STRD                __at(0x34AB);	// @ (0x695 * 8 + 3)
#define                                 STRD_bit            _BIT_ACCESS(CWG1OCON0,3)
// WDTCON0<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x3888);	// @ (0x711 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON0,0)
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
// T2HLT<T2CKPOL>
extern volatile __bit                   T2CKPOL             __at(0xEE);	// @ (0x1D * 8 + 6)
#define                                 T2CKPOL_bit         _BIT_ACCESS(T2HLT,6)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0xE4);	// @ (0x1C * 8 + 4)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,4)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0xE5);	// @ (0x1C * 8 + 5)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,5)
// T2CON<T2CKPS2>
extern volatile __bit                   T2CKPS2             __at(0xE6);	// @ (0x1C * 8 + 6)
#define                                 T2CKPS2_bit         _BIT_ACCESS(T2CON,6)
// T2HLT<T2CKSYNC>
extern volatile __bit                   T2CKSYNC            __at(0xED);	// @ (0x1D * 8 + 5)
#define                                 T2CKSYNC_bit        _BIT_ACCESS(T2HLT,5)
// T2CLKCON<T2CS0>
extern volatile __bit                   T2CS0               __at(0xF0);	// @ (0x1E * 8 + 0)
#define                                 T2CS0_bit           _BIT_ACCESS(T2CLKCON,0)
// T2CLKCON<T2CS1>
extern volatile __bit                   T2CS1               __at(0xF1);	// @ (0x1E * 8 + 1)
#define                                 T2CS1_bit           _BIT_ACCESS(T2CLKCON,1)
// T2CLKCON<T2CS2>
extern volatile __bit                   T2CS2               __at(0xF2);	// @ (0x1E * 8 + 2)
#define                                 T2CS2_bit           _BIT_ACCESS(T2CLKCON,2)
// T2HLT<T2MODE0>
extern volatile __bit                   T2MODE0             __at(0xE8);	// @ (0x1D * 8 + 0)
#define                                 T2MODE0_bit         _BIT_ACCESS(T2HLT,0)
// T2HLT<T2MODE1>
extern volatile __bit                   T2MODE1             __at(0xE9);	// @ (0x1D * 8 + 1)
#define                                 T2MODE1_bit         _BIT_ACCESS(T2HLT,1)
// T2HLT<T2MODE2>
extern volatile __bit                   T2MODE2             __at(0xEA);	// @ (0x1D * 8 + 2)
#define                                 T2MODE2_bit         _BIT_ACCESS(T2HLT,2)
// T2HLT<T2MODE3>
extern volatile __bit                   T2MODE3             __at(0xEB);	// @ (0x1D * 8 + 3)
#define                                 T2MODE3_bit         _BIT_ACCESS(T2HLT,3)
// T2CON<T2ON>
extern volatile __bit                   T2ON                __at(0xE7);	// @ (0x1C * 8 + 7)
#define                                 T2ON_bit            _BIT_ACCESS(T2CON,7)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,0)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0xE1);	// @ (0x1C * 8 + 1)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0xE2);	// @ (0x1C * 8 + 2)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,2)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,3)
// T2HLT<T2PSYNC>
extern volatile __bit                   T2PSYNC             __at(0xEF);	// @ (0x1D * 8 + 7)
#define                                 T2PSYNC_bit         _BIT_ACCESS(T2HLT,7)
// T2RST<T2RSEL0>
extern volatile __bit                   T2RSEL0             __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 T2RSEL0_bit         _BIT_ACCESS(T2RST,0)
// T2RST<T2RSEL1>
extern volatile __bit                   T2RSEL1             __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 T2RSEL1_bit         _BIT_ACCESS(T2RST,1)
// T2RST<T2RSEL2>
extern volatile __bit                   T2RSEL2             __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 T2RSEL2_bit         _BIT_ACCESS(T2RST,2)
// T2RST<T2RSEL3>
extern volatile __bit                   T2RSEL3             __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 T2RSEL3_bit         _BIT_ACCESS(T2RST,3)
// T4HLT<T4CKPOL>
extern volatile __bit                   T4CKPOL             __at(0x20B6);	// @ (0x416 * 8 + 6)
#define                                 T4CKPOL_bit         _BIT_ACCESS(T4HLT,6)
// T4CON<T4CKPS0>
extern volatile __bit                   T4CKPS0             __at(0x20AC);	// @ (0x415 * 8 + 4)
#define                                 T4CKPS0_bit         _BIT_ACCESS(T4CON,4)
// T4CON<T4CKPS1>
extern volatile __bit                   T4CKPS1             __at(0x20AD);	// @ (0x415 * 8 + 5)
#define                                 T4CKPS1_bit         _BIT_ACCESS(T4CON,5)
// T4CON<T4CKPS2>
extern volatile __bit                   T4CKPS2             __at(0x20AE);	// @ (0x415 * 8 + 6)
#define                                 T4CKPS2_bit         _BIT_ACCESS(T4CON,6)
// T4HLT<T4CKSYNC>
extern volatile __bit                   T4CKSYNC            __at(0x20B5);	// @ (0x416 * 8 + 5)
#define                                 T4CKSYNC_bit        _BIT_ACCESS(T4HLT,5)
// T4CLKCON<T4CS0>
extern volatile __bit                   T4CS0               __at(0x20B8);	// @ (0x417 * 8 + 0)
#define                                 T4CS0_bit           _BIT_ACCESS(T4CLKCON,0)
// T4CLKCON<T4CS1>
extern volatile __bit                   T4CS1               __at(0x20B9);	// @ (0x417 * 8 + 1)
#define                                 T4CS1_bit           _BIT_ACCESS(T4CLKCON,1)
// T4CLKCON<T4CS2>
extern volatile __bit                   T4CS2               __at(0x20BA);	// @ (0x417 * 8 + 2)
#define                                 T4CS2_bit           _BIT_ACCESS(T4CLKCON,2)
// T4HLT<T4MODE0>
extern volatile __bit                   T4MODE0             __at(0x20B0);	// @ (0x416 * 8 + 0)
#define                                 T4MODE0_bit         _BIT_ACCESS(T4HLT,0)
// T4HLT<T4MODE1>
extern volatile __bit                   T4MODE1             __at(0x20B1);	// @ (0x416 * 8 + 1)
#define                                 T4MODE1_bit         _BIT_ACCESS(T4HLT,1)
// T4HLT<T4MODE2>
extern volatile __bit                   T4MODE2             __at(0x20B2);	// @ (0x416 * 8 + 2)
#define                                 T4MODE2_bit         _BIT_ACCESS(T4HLT,2)
// T4HLT<T4MODE3>
extern volatile __bit                   T4MODE3             __at(0x20B3);	// @ (0x416 * 8 + 3)
#define                                 T4MODE3_bit         _BIT_ACCESS(T4HLT,3)
// T4CON<T4ON>
extern volatile __bit                   T4ON                __at(0x20AF);	// @ (0x415 * 8 + 7)
#define                                 T4ON_bit            _BIT_ACCESS(T4CON,7)
// T4CON<T4OUTPS0>
extern volatile __bit                   T4OUTPS0            __at(0x20A8);	// @ (0x415 * 8 + 0)
#define                                 T4OUTPS0_bit        _BIT_ACCESS(T4CON,0)
// T4CON<T4OUTPS1>
extern volatile __bit                   T4OUTPS1            __at(0x20A9);	// @ (0x415 * 8 + 1)
#define                                 T4OUTPS1_bit        _BIT_ACCESS(T4CON,1)
// T4CON<T4OUTPS2>
extern volatile __bit                   T4OUTPS2            __at(0x20AA);	// @ (0x415 * 8 + 2)
#define                                 T4OUTPS2_bit        _BIT_ACCESS(T4CON,2)
// T4CON<T4OUTPS3>
extern volatile __bit                   T4OUTPS3            __at(0x20AB);	// @ (0x415 * 8 + 3)
#define                                 T4OUTPS3_bit        _BIT_ACCESS(T4CON,3)
// T4HLT<T4PSYNC>
extern volatile __bit                   T4PSYNC             __at(0x20B7);	// @ (0x416 * 8 + 7)
#define                                 T4PSYNC_bit         _BIT_ACCESS(T4HLT,7)
// T4RST<T4RSEL0>
extern volatile __bit                   T4RSEL0             __at(0x20C0);	// @ (0x418 * 8 + 0)
#define                                 T4RSEL0_bit         _BIT_ACCESS(T4RST,0)
// T4RST<T4RSEL1>
extern volatile __bit                   T4RSEL1             __at(0x20C1);	// @ (0x418 * 8 + 1)
#define                                 T4RSEL1_bit         _BIT_ACCESS(T4RST,1)
// T4RST<T4RSEL2>
extern volatile __bit                   T4RSEL2             __at(0x20C2);	// @ (0x418 * 8 + 2)
#define                                 T4RSEL2_bit         _BIT_ACCESS(T4RST,2)
// T4RST<T4RSEL3>
extern volatile __bit                   T4RSEL3             __at(0x20C3);	// @ (0x418 * 8 + 3)
#define                                 T4RSEL3_bit         _BIT_ACCESS(T4RST,3)
// T6HLT<T6CKPOL>
extern volatile __bit                   T6CKPOL             __at(0x20EE);	// @ (0x41D * 8 + 6)
#define                                 T6CKPOL_bit         _BIT_ACCESS(T6HLT,6)
// T6CON<T6CKPS0>
extern volatile __bit                   T6CKPS0             __at(0x20E4);	// @ (0x41C * 8 + 4)
#define                                 T6CKPS0_bit         _BIT_ACCESS(T6CON,4)
// T6CON<T6CKPS1>
extern volatile __bit                   T6CKPS1             __at(0x20E5);	// @ (0x41C * 8 + 5)
#define                                 T6CKPS1_bit         _BIT_ACCESS(T6CON,5)
// T6CON<T6CKPS2>
extern volatile __bit                   T6CKPS2             __at(0x20E6);	// @ (0x41C * 8 + 6)
#define                                 T6CKPS2_bit         _BIT_ACCESS(T6CON,6)
// T6HLT<T6CKSYNC>
extern volatile __bit                   T6CKSYNC            __at(0x20ED);	// @ (0x41D * 8 + 5)
#define                                 T6CKSYNC_bit        _BIT_ACCESS(T6HLT,5)
// T6CLKCON<T6CS0>
extern volatile __bit                   T6CS0               __at(0x20F0);	// @ (0x41E * 8 + 0)
#define                                 T6CS0_bit           _BIT_ACCESS(T6CLKCON,0)
// T6CLKCON<T6CS1>
extern volatile __bit                   T6CS1               __at(0x20F1);	// @ (0x41E * 8 + 1)
#define                                 T6CS1_bit           _BIT_ACCESS(T6CLKCON,1)
// T6CLKCON<T6CS2>
extern volatile __bit                   T6CS2               __at(0x20F2);	// @ (0x41E * 8 + 2)
#define                                 T6CS2_bit           _BIT_ACCESS(T6CLKCON,2)
// T6HLT<T6MODE0>
extern volatile __bit                   T6MODE0             __at(0x20E8);	// @ (0x41D * 8 + 0)
#define                                 T6MODE0_bit         _BIT_ACCESS(T6HLT,0)
// T6HLT<T6MODE1>
extern volatile __bit                   T6MODE1             __at(0x20E9);	// @ (0x41D * 8 + 1)
#define                                 T6MODE1_bit         _BIT_ACCESS(T6HLT,1)
// T6HLT<T6MODE2>
extern volatile __bit                   T6MODE2             __at(0x20EA);	// @ (0x41D * 8 + 2)
#define                                 T6MODE2_bit         _BIT_ACCESS(T6HLT,2)
// T6HLT<T6MODE3>
extern volatile __bit                   T6MODE3             __at(0x20EB);	// @ (0x41D * 8 + 3)
#define                                 T6MODE3_bit         _BIT_ACCESS(T6HLT,3)
// T6CON<T6ON>
extern volatile __bit                   T6ON                __at(0x20E7);	// @ (0x41C * 8 + 7)
#define                                 T6ON_bit            _BIT_ACCESS(T6CON,7)
// T6CON<T6OUTPS0>
extern volatile __bit                   T6OUTPS0            __at(0x20E0);	// @ (0x41C * 8 + 0)
#define                                 T6OUTPS0_bit        _BIT_ACCESS(T6CON,0)
// T6CON<T6OUTPS1>
extern volatile __bit                   T6OUTPS1            __at(0x20E1);	// @ (0x41C * 8 + 1)
#define                                 T6OUTPS1_bit        _BIT_ACCESS(T6CON,1)
// T6CON<T6OUTPS2>
extern volatile __bit                   T6OUTPS2            __at(0x20E2);	// @ (0x41C * 8 + 2)
#define                                 T6OUTPS2_bit        _BIT_ACCESS(T6CON,2)
// T6CON<T6OUTPS3>
extern volatile __bit                   T6OUTPS3            __at(0x20E3);	// @ (0x41C * 8 + 3)
#define                                 T6OUTPS3_bit        _BIT_ACCESS(T6CON,3)
// T6HLT<T6PSYNC>
extern volatile __bit                   T6PSYNC             __at(0x20EF);	// @ (0x41D * 8 + 7)
#define                                 T6PSYNC_bit         _BIT_ACCESS(T6HLT,7)
// T6RST<T6RSEL0>
extern volatile __bit                   T6RSEL0             __at(0x20F8);	// @ (0x41F * 8 + 0)
#define                                 T6RSEL0_bit         _BIT_ACCESS(T6RST,0)
// T6RST<T6RSEL1>
extern volatile __bit                   T6RSEL1             __at(0x20F9);	// @ (0x41F * 8 + 1)
#define                                 T6RSEL1_bit         _BIT_ACCESS(T6RST,1)
// T6RST<T6RSEL2>
extern volatile __bit                   T6RSEL2             __at(0x20FA);	// @ (0x41F * 8 + 2)
#define                                 T6RSEL2_bit         _BIT_ACCESS(T6RST,2)
// T6RST<T6RSEL3>
extern volatile __bit                   T6RSEL3             __at(0x20FB);	// @ (0x41F * 8 + 3)
#define                                 T6RSEL3_bit         _BIT_ACCESS(T6RST,3)
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
// CWG1AS1<TMR2AS>
extern volatile __bit                   TMR2AS              __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 TMR2AS_bit          _BIT_ACCESS(CWG1AS1,4)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x89);	// @ (0x11 * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0xE7);	// @ (0x1C * 8 + 7)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,7)
// CWG1AS1<TMR4AS>
extern volatile __bit                   TMR4AS              __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 TMR4AS_bit          _BIT_ACCESS(CWG1AS1,5)
// PIE2<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 TMR4IE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<TMR4IF>
extern volatile __bit                   TMR4IF              __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 TMR4IF_bit          _BIT_ACCESS(PIR2,1)
// T4CON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x20AF);	// @ (0x415 * 8 + 7)
#define                                 TMR4ON_bit          _BIT_ACCESS(T4CON,7)
// CWG1AS1<TMR6AS>
extern volatile __bit                   TMR6AS              __at(0x34A6);	// @ (0x694 * 8 + 6)
#define                                 TMR6AS_bit          _BIT_ACCESS(CWG1AS1,6)
// PIE2<TMR6IE>
extern volatile __bit                   TMR6IE              __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 TMR6IE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<TMR6IF>
extern volatile __bit                   TMR6IF              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TMR6IF_bit          _BIT_ACCESS(PIR2,2)
// T6CON<TMR6ON>
extern volatile __bit                   TMR6ON              __at(0x20E7);	// @ (0x41C * 8 + 7)
#define                                 TMR6ON_bit          _BIT_ACCESS(T6CON,7)
// ADCON2<TRIGSEL0>
extern volatile __bit                   TRIGSEL0            __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 TRIGSEL0_bit        _BIT_ACCESS(ADCON2,4)
// ADCON2<TRIGSEL1>
extern volatile __bit                   TRIGSEL1            __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 TRIGSEL1_bit        _BIT_ACCESS(ADCON2,5)
// ADCON2<TRIGSEL2>
extern volatile __bit                   TRIGSEL2            __at(0x4FE);	// @ (0x9F * 8 + 6)
#define                                 TRIGSEL2_bit        _BIT_ACCESS(ADCON2,6)
// ADCON2<TRIGSEL3>
extern volatile __bit                   TRIGSEL3            __at(0x4FF);	// @ (0x9F * 8 + 7)
#define                                 TRIGSEL3_bit        _BIT_ACCESS(ADCON2,7)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISA,3)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// SCANTRIG<TSEL0>
extern volatile __bit                   TSEL0               __at(0x38E8);	// @ (0x71D * 8 + 0)
#define                                 TSEL0_bit           _BIT_ACCESS(SCANTRIG,0)
// SCANTRIG<TSEL1>
extern volatile __bit                   TSEL1               __at(0x38E9);	// @ (0x71D * 8 + 1)
#define                                 TSEL1_bit           _BIT_ACCESS(SCANTRIG,1)
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
// VREGCON<VREGPM0>
extern volatile __bit                   VREGPM0             __at(0xCB8);	// @ (0x197 * 8 + 0)
#define                                 VREGPM0_bit         _BIT_ACCESS(VREGCON,0)
// VREGCON<VREGPM1>
extern volatile __bit                   VREGPM1             __at(0xCB9);	// @ (0x197 * 8 + 1)
#define                                 VREGPM1_bit         _BIT_ACCESS(VREGCON,1)
// WDTCON1<WDTCS0>
extern volatile __bit                   WDTCS0              __at(0x3894);	// @ (0x712 * 8 + 4)
#define                                 WDTCS0_bit          _BIT_ACCESS(WDTCON1,4)
// WDTCON1<WDTCS1>
extern volatile __bit                   WDTCS1              __at(0x3895);	// @ (0x712 * 8 + 5)
#define                                 WDTCS1_bit          _BIT_ACCESS(WDTCON1,5)
// WDTCON1<WDTCS2>
extern volatile __bit                   WDTCS2              __at(0x3896);	// @ (0x712 * 8 + 6)
#define                                 WDTCS2_bit          _BIT_ACCESS(WDTCON1,6)
// WDTCON0<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0x3889);	// @ (0x711 * 8 + 1)
#define                                 WDTPS0_bit          _BIT_ACCESS(WDTCON0,1)
// WDTCON0<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0x388A);	// @ (0x711 * 8 + 2)
#define                                 WDTPS1_bit          _BIT_ACCESS(WDTCON0,2)
// WDTCON0<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0x388B);	// @ (0x711 * 8 + 3)
#define                                 WDTPS2_bit          _BIT_ACCESS(WDTCON0,3)
// WDTCON0<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0x388C);	// @ (0x711 * 8 + 4)
#define                                 WDTPS3_bit          _BIT_ACCESS(WDTCON0,4)
// WDTCON0<WDTPS4>
extern volatile __bit                   WDTPS4              __at(0x388D);	// @ (0x711 * 8 + 5)
#define                                 WDTPS4_bit          _BIT_ACCESS(WDTCON0,5)
// WDTPSL<WDTPSCNT0>
extern volatile __bit                   WDTPSCNT0           __at(0x3898);	// @ (0x713 * 8 + 0)
#define                                 WDTPSCNT0_bit       _BIT_ACCESS(WDTPSL,0)
// WDTPSL<WDTPSCNT1>
extern volatile __bit                   WDTPSCNT1           __at(0x3899);	// @ (0x713 * 8 + 1)
#define                                 WDTPSCNT1_bit       _BIT_ACCESS(WDTPSL,1)
// WDTPSH<WDTPSCNT10>
extern volatile __bit                   WDTPSCNT10          __at(0x38A2);	// @ (0x714 * 8 + 2)
#define                                 WDTPSCNT10_bit      _BIT_ACCESS(WDTPSH,2)
// WDTPSH<WDTPSCNT11>
extern volatile __bit                   WDTPSCNT11          __at(0x38A3);	// @ (0x714 * 8 + 3)
#define                                 WDTPSCNT11_bit      _BIT_ACCESS(WDTPSH,3)
// WDTPSH<WDTPSCNT12>
extern volatile __bit                   WDTPSCNT12          __at(0x38A4);	// @ (0x714 * 8 + 4)
#define                                 WDTPSCNT12_bit      _BIT_ACCESS(WDTPSH,4)
// WDTPSH<WDTPSCNT13>
extern volatile __bit                   WDTPSCNT13          __at(0x38A5);	// @ (0x714 * 8 + 5)
#define                                 WDTPSCNT13_bit      _BIT_ACCESS(WDTPSH,5)
// WDTPSH<WDTPSCNT14>
extern volatile __bit                   WDTPSCNT14          __at(0x38A6);	// @ (0x714 * 8 + 6)
#define                                 WDTPSCNT14_bit      _BIT_ACCESS(WDTPSH,6)
// WDTPSH<WDTPSCNT15>
extern volatile __bit                   WDTPSCNT15          __at(0x38A7);	// @ (0x714 * 8 + 7)
#define                                 WDTPSCNT15_bit      _BIT_ACCESS(WDTPSH,7)
// WDTTMR<WDTPSCNT16>
extern volatile __bit                   WDTPSCNT16          __at(0x38A8);	// @ (0x715 * 8 + 0)
#define                                 WDTPSCNT16_bit      _BIT_ACCESS(WDTTMR,0)
// WDTTMR<WDTPSCNT17>
extern volatile __bit                   WDTPSCNT17          __at(0x38A9);	// @ (0x715 * 8 + 1)
#define                                 WDTPSCNT17_bit      _BIT_ACCESS(WDTTMR,1)
// WDTPSL<WDTPSCNT2>
extern volatile __bit                   WDTPSCNT2           __at(0x389A);	// @ (0x713 * 8 + 2)
#define                                 WDTPSCNT2_bit       _BIT_ACCESS(WDTPSL,2)
// WDTPSL<WDTPSCNT3>
extern volatile __bit                   WDTPSCNT3           __at(0x389B);	// @ (0x713 * 8 + 3)
#define                                 WDTPSCNT3_bit       _BIT_ACCESS(WDTPSL,3)
// WDTPSL<WDTPSCNT4>
extern volatile __bit                   WDTPSCNT4           __at(0x389C);	// @ (0x713 * 8 + 4)
#define                                 WDTPSCNT4_bit       _BIT_ACCESS(WDTPSL,4)
// WDTPSL<WDTPSCNT5>
extern volatile __bit                   WDTPSCNT5           __at(0x389D);	// @ (0x713 * 8 + 5)
#define                                 WDTPSCNT5_bit       _BIT_ACCESS(WDTPSL,5)
// WDTPSL<WDTPSCNT6>
extern volatile __bit                   WDTPSCNT6           __at(0x389E);	// @ (0x713 * 8 + 6)
#define                                 WDTPSCNT6_bit       _BIT_ACCESS(WDTPSL,6)
// WDTPSL<WDTPSCNT7>
extern volatile __bit                   WDTPSCNT7           __at(0x389F);	// @ (0x713 * 8 + 7)
#define                                 WDTPSCNT7_bit       _BIT_ACCESS(WDTPSL,7)
// WDTPSH<WDTPSCNT8>
extern volatile __bit                   WDTPSCNT8           __at(0x38A0);	// @ (0x714 * 8 + 0)
#define                                 WDTPSCNT8_bit       _BIT_ACCESS(WDTPSH,0)
// WDTPSH<WDTPSCNT9>
extern volatile __bit                   WDTPSCNT9           __at(0x38A1);	// @ (0x714 * 8 + 1)
#define                                 WDTPSCNT9_bit       _BIT_ACCESS(WDTPSH,1)
// WDTCON0<WDTSEN>
extern volatile __bit                   WDTSEN              __at(0x3888);	// @ (0x711 * 8 + 0)
#define                                 WDTSEN_bit          _BIT_ACCESS(WDTCON0,0)
// WDTTMR<WDTSTATE>
extern volatile __bit                   WDTSTATE            __at(0x38AA);	// @ (0x715 * 8 + 2)
#define                                 WDTSTATE_bit        _BIT_ACCESS(WDTTMR,2)
// WDTTMR<WDTTMR0>
extern volatile __bit                   WDTTMR0             __at(0x38AB);	// @ (0x715 * 8 + 3)
#define                                 WDTTMR0_bit         _BIT_ACCESS(WDTTMR,3)
// WDTTMR<WDTTMR1>
extern volatile __bit                   WDTTMR1             __at(0x38AC);	// @ (0x715 * 8 + 4)
#define                                 WDTTMR1_bit         _BIT_ACCESS(WDTTMR,4)
// WDTTMR<WDTTMR2>
extern volatile __bit                   WDTTMR2             __at(0x38AD);	// @ (0x715 * 8 + 5)
#define                                 WDTTMR2_bit         _BIT_ACCESS(WDTTMR,5)
// WDTTMR<WDTTMR3>
extern volatile __bit                   WDTTMR3             __at(0x38AE);	// @ (0x715 * 8 + 6)
#define                                 WDTTMR3_bit         _BIT_ACCESS(WDTTMR,6)
// WDTTMR<WDTTMR4>
extern volatile __bit                   WDTTMR4             __at(0x38AF);	// @ (0x715 * 8 + 7)
#define                                 WDTTMR4_bit         _BIT_ACCESS(WDTTMR,7)
// WDTCON1<WDTWINDOW0>
extern volatile __bit                   WDTWINDOW0          __at(0x3890);	// @ (0x712 * 8 + 0)
#define                                 WDTWINDOW0_bit      _BIT_ACCESS(WDTCON1,0)
// WDTCON1<WDTWINDOW1>
extern volatile __bit                   WDTWINDOW1          __at(0x3891);	// @ (0x712 * 8 + 1)
#define                                 WDTWINDOW1_bit      _BIT_ACCESS(WDTCON1,1)
// WDTCON1<WDTWINDOW2>
extern volatile __bit                   WDTWINDOW2          __at(0x3892);	// @ (0x712 * 8 + 2)
#define                                 WDTWINDOW2_bit      _BIT_ACCESS(WDTCON1,2)
// WDTCON1<WINDOW0>
extern volatile __bit                   WINDOW0             __at(0x3890);	// @ (0x712 * 8 + 0)
#define                                 WINDOW0_bit         _BIT_ACCESS(WDTCON1,0)
// WDTCON1<WINDOW1>
extern volatile __bit                   WINDOW1             __at(0x3891);	// @ (0x712 * 8 + 1)
#define                                 WINDOW1_bit         _BIT_ACCESS(WDTCON1,1)
// WDTCON1<WINDOW2>
extern volatile __bit                   WINDOW2             __at(0x3892);	// @ (0x712 * 8 + 2)
#define                                 WINDOW2_bit         _BIT_ACCESS(WDTCON1,2)
// WPUA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x1060);	// @ (0x20C * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUA,0)
// WPUA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x1061);	// @ (0x20C * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUA,1)
// WPUA<WPUA2>
extern volatile __bit                   WPUA2               __at(0x1062);	// @ (0x20C * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPUA,2)
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
// CRCXORL<XOR1>
extern volatile __bit                   XOR1                __at(0x3CB9);	// @ (0x797 * 8 + 1)
#define                                 XOR1_bit            _BIT_ACCESS(CRCXORL,1)
// CRCXORH<XOR10>
extern volatile __bit                   XOR10               __at(0x3CC2);	// @ (0x798 * 8 + 2)
#define                                 XOR10_bit           _BIT_ACCESS(CRCXORH,2)
// CRCXORH<XOR11>
extern volatile __bit                   XOR11               __at(0x3CC3);	// @ (0x798 * 8 + 3)
#define                                 XOR11_bit           _BIT_ACCESS(CRCXORH,3)
// CRCXORH<XOR12>
extern volatile __bit                   XOR12               __at(0x3CC4);	// @ (0x798 * 8 + 4)
#define                                 XOR12_bit           _BIT_ACCESS(CRCXORH,4)
// CRCXORH<XOR13>
extern volatile __bit                   XOR13               __at(0x3CC5);	// @ (0x798 * 8 + 5)
#define                                 XOR13_bit           _BIT_ACCESS(CRCXORH,5)
// CRCXORH<XOR14>
extern volatile __bit                   XOR14               __at(0x3CC6);	// @ (0x798 * 8 + 6)
#define                                 XOR14_bit           _BIT_ACCESS(CRCXORH,6)
// CRCXORH<XOR15>
extern volatile __bit                   XOR15               __at(0x3CC7);	// @ (0x798 * 8 + 7)
#define                                 XOR15_bit           _BIT_ACCESS(CRCXORH,7)
// CRCXORL<XOR2>
extern volatile __bit                   XOR2                __at(0x3CBA);	// @ (0x797 * 8 + 2)
#define                                 XOR2_bit            _BIT_ACCESS(CRCXORL,2)
// CRCXORL<XOR3>
extern volatile __bit                   XOR3                __at(0x3CBB);	// @ (0x797 * 8 + 3)
#define                                 XOR3_bit            _BIT_ACCESS(CRCXORL,3)
// CRCXORL<XOR4>
extern volatile __bit                   XOR4                __at(0x3CBC);	// @ (0x797 * 8 + 4)
#define                                 XOR4_bit            _BIT_ACCESS(CRCXORL,4)
// CRCXORL<XOR5>
extern volatile __bit                   XOR5                __at(0x3CBD);	// @ (0x797 * 8 + 5)
#define                                 XOR5_bit            _BIT_ACCESS(CRCXORL,5)
// CRCXORL<XOR6>
extern volatile __bit                   XOR6                __at(0x3CBE);	// @ (0x797 * 8 + 6)
#define                                 XOR6_bit            _BIT_ACCESS(CRCXORL,6)
// CRCXORL<XOR7>
extern volatile __bit                   XOR7                __at(0x3CBF);	// @ (0x797 * 8 + 7)
#define                                 XOR7_bit            _BIT_ACCESS(CRCXORL,7)
// CRCXORH<XOR8>
extern volatile __bit                   XOR8                __at(0x3CC0);	// @ (0x798 * 8 + 0)
#define                                 XOR8_bit            _BIT_ACCESS(CRCXORH,0)
// CRCXORH<XOR9>
extern volatile __bit                   XOR9                __at(0x3CC1);	// @ (0x798 * 8 + 1)
#define                                 XOR9_bit            _BIT_ACCESS(CRCXORH,1)
// ZCD1CON<ZCD1EN>
extern volatile __bit                   ZCD1EN              __at(0x8E7);	// @ (0x11C * 8 + 7)
#define                                 ZCD1EN_bit          _BIT_ACCESS(ZCD1CON,7)
// ZCD1CON<ZCD1INTN>
extern volatile __bit                   ZCD1INTN            __at(0x8E0);	// @ (0x11C * 8 + 0)
#define                                 ZCD1INTN_bit        _BIT_ACCESS(ZCD1CON,0)
// ZCD1CON<ZCD1INTP>
extern volatile __bit                   ZCD1INTP            __at(0x8E1);	// @ (0x11C * 8 + 1)
#define                                 ZCD1INTP_bit        _BIT_ACCESS(ZCD1CON,1)
// ZCD1CON<ZCD1OE>
extern volatile __bit                   ZCD1OE              __at(0x8E6);	// @ (0x11C * 8 + 6)
#define                                 ZCD1OE_bit          _BIT_ACCESS(ZCD1CON,6)
// ZCD1CON<ZCD1OUT>
extern volatile __bit                   ZCD1OUT             __at(0x8E5);	// @ (0x11C * 8 + 5)
#define                                 ZCD1OUT_bit         _BIT_ACCESS(ZCD1CON,5)
// ZCD1CON<ZCD1POL>
extern volatile __bit                   ZCD1POL             __at(0x8E4);	// @ (0x11C * 8 + 4)
#define                                 ZCD1POL_bit         _BIT_ACCESS(ZCD1CON,4)
// PIE3<ZCDIE>
extern volatile __bit                   ZCDIE               __at(0x49C);	// @ (0x93 * 8 + 4)
#define                                 ZCDIE_bit           _BIT_ACCESS(PIE3,4)
// PIR3<ZCDIF>
extern volatile __bit                   ZCDIF               __at(0x9C);	// @ (0x13 * 8 + 4)
#define                                 ZCDIF_bit           _BIT_ACCESS(PIR3,4)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// STATUS_SHAD<Z_SHAD>
extern volatile __bit                   Z_SHAD              __at(0x7F22);	// @ (0xFE4 * 8 + 2)
#define                                 Z_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,2)
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
// PCON<nWDTWV>
extern volatile __bit                   nWDTWV              __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 nWDTWV_bit          _BIT_ACCESS(PCON,5)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC12F1612_H_
