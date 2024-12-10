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

#ifndef _PIC16LF1527_H_
#define _PIC16LF1527_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF1527
 */
#ifndef _XC_H_
#warning Header file pic16lf1527.h included directly. Use #include <xc.h> instead.
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
        unsigned RA6                    :1;
        unsigned RA7                    :1;
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

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0x00D);
#ifndef _LIB_BUILD
asm("PORTB equ 0Dh");
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
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x00D);
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
        unsigned RC6                    :1;
        unsigned RC7                    :1;
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

// Register: PORTD
#define PORTD PORTD
extern volatile unsigned char           PORTD               __at(0x00F);
#ifndef _LIB_BUILD
asm("PORTD equ 0Fh");
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
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits __at(0x00F);
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

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0x010);
#ifndef _LIB_BUILD
asm("PORTE equ 010h");
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
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0x010);
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
        unsigned SSP1IF                 :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
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
#define _PIR1_SSP1IF_POSN                                   0x3
#define _PIR1_SSP1IF_POSITION                               0x3
#define _PIR1_SSP1IF_SIZE                                   0x1
#define _PIR1_SSP1IF_LENGTH                                 0x1
#define _PIR1_SSP1IF_MASK                                   0x8
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
#define _PIR1_TMR1GIF_POSN                                  0x7
#define _PIR1_TMR1GIF_POSITION                              0x7
#define _PIR1_TMR1GIF_SIZE                                  0x1
#define _PIR1_TMR1GIF_LENGTH                                0x1
#define _PIR1_TMR1GIF_MASK                                  0x80
#define _PIR1_SSPIF_POSN                                    0x3
#define _PIR1_SSPIF_POSITION                                0x3
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x8
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
        unsigned TMR8IF                 :1;
        unsigned TMR10IF                :1;
        unsigned BCL1IF                 :1;
        unsigned                        :1;
        unsigned TMR3GIF                :1;
        unsigned TMR5GIF                :1;
        unsigned OSFIF                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_TMR8IF_POSN                                   0x1
#define _PIR2_TMR8IF_POSITION                               0x1
#define _PIR2_TMR8IF_SIZE                                   0x1
#define _PIR2_TMR8IF_LENGTH                                 0x1
#define _PIR2_TMR8IF_MASK                                   0x2
#define _PIR2_TMR10IF_POSN                                  0x2
#define _PIR2_TMR10IF_POSITION                              0x2
#define _PIR2_TMR10IF_SIZE                                  0x1
#define _PIR2_TMR10IF_LENGTH                                0x1
#define _PIR2_TMR10IF_MASK                                  0x4
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_TMR3GIF_POSN                                  0x5
#define _PIR2_TMR3GIF_POSITION                              0x5
#define _PIR2_TMR3GIF_SIZE                                  0x1
#define _PIR2_TMR3GIF_LENGTH                                0x1
#define _PIR2_TMR3GIF_MASK                                  0x20
#define _PIR2_TMR5GIF_POSN                                  0x6
#define _PIR2_TMR5GIF_POSITION                              0x6
#define _PIR2_TMR5GIF_SIZE                                  0x1
#define _PIR2_TMR5GIF_LENGTH                                0x1
#define _PIR2_TMR5GIF_MASK                                  0x40
#define _PIR2_OSFIF_POSN                                    0x7
#define _PIR2_OSFIF_POSITION                                0x7
#define _PIR2_OSFIF_SIZE                                    0x1
#define _PIR2_OSFIF_LENGTH                                  0x1
#define _PIR2_OSFIF_MASK                                    0x80
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x013);
#ifndef _LIB_BUILD
asm("PIR3 equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3IF                 :1;
        unsigned TMR4IF                 :1;
        unsigned TMR5IF                 :1;
        unsigned TMR6IF                 :1;
        unsigned CCP3IF                 :1;
        unsigned CCP4IF                 :1;
        unsigned CCP5IF                 :1;
        unsigned CCP6IF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x013);
// bitfield macros
#define _PIR3_TMR3IF_POSN                                   0x0
#define _PIR3_TMR3IF_POSITION                               0x0
#define _PIR3_TMR3IF_SIZE                                   0x1
#define _PIR3_TMR3IF_LENGTH                                 0x1
#define _PIR3_TMR3IF_MASK                                   0x1
#define _PIR3_TMR4IF_POSN                                   0x1
#define _PIR3_TMR4IF_POSITION                               0x1
#define _PIR3_TMR4IF_SIZE                                   0x1
#define _PIR3_TMR4IF_LENGTH                                 0x1
#define _PIR3_TMR4IF_MASK                                   0x2
#define _PIR3_TMR5IF_POSN                                   0x2
#define _PIR3_TMR5IF_POSITION                               0x2
#define _PIR3_TMR5IF_SIZE                                   0x1
#define _PIR3_TMR5IF_LENGTH                                 0x1
#define _PIR3_TMR5IF_MASK                                   0x4
#define _PIR3_TMR6IF_POSN                                   0x3
#define _PIR3_TMR6IF_POSITION                               0x3
#define _PIR3_TMR6IF_SIZE                                   0x1
#define _PIR3_TMR6IF_LENGTH                                 0x1
#define _PIR3_TMR6IF_MASK                                   0x8
#define _PIR3_CCP3IF_POSN                                   0x4
#define _PIR3_CCP3IF_POSITION                               0x4
#define _PIR3_CCP3IF_SIZE                                   0x1
#define _PIR3_CCP3IF_LENGTH                                 0x1
#define _PIR3_CCP3IF_MASK                                   0x10
#define _PIR3_CCP4IF_POSN                                   0x5
#define _PIR3_CCP4IF_POSITION                               0x5
#define _PIR3_CCP4IF_SIZE                                   0x1
#define _PIR3_CCP4IF_LENGTH                                 0x1
#define _PIR3_CCP4IF_MASK                                   0x20
#define _PIR3_CCP5IF_POSN                                   0x6
#define _PIR3_CCP5IF_POSITION                               0x6
#define _PIR3_CCP5IF_SIZE                                   0x1
#define _PIR3_CCP5IF_LENGTH                                 0x1
#define _PIR3_CCP5IF_MASK                                   0x40
#define _PIR3_CCP6IF_POSN                                   0x7
#define _PIR3_CCP6IF_POSITION                               0x7
#define _PIR3_CCP6IF_SIZE                                   0x1
#define _PIR3_CCP6IF_LENGTH                                 0x1
#define _PIR3_CCP6IF_MASK                                   0x80

// Register: PIR4
#define PIR4 PIR4
extern volatile unsigned char           PIR4                __at(0x014);
#ifndef _LIB_BUILD
asm("PIR4 equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2IF                 :1;
        unsigned BCL2IF                 :1;
        unsigned CCP7IF                 :1;
        unsigned CCP8IF                 :1;
        unsigned TX2IF                  :1;
        unsigned RC2IF                  :1;
        unsigned CCP9IF                 :1;
        unsigned CCP10IF                :1;
    };
} PIR4bits_t;
extern volatile PIR4bits_t PIR4bits __at(0x014);
// bitfield macros
#define _PIR4_SSP2IF_POSN                                   0x0
#define _PIR4_SSP2IF_POSITION                               0x0
#define _PIR4_SSP2IF_SIZE                                   0x1
#define _PIR4_SSP2IF_LENGTH                                 0x1
#define _PIR4_SSP2IF_MASK                                   0x1
#define _PIR4_BCL2IF_POSN                                   0x1
#define _PIR4_BCL2IF_POSITION                               0x1
#define _PIR4_BCL2IF_SIZE                                   0x1
#define _PIR4_BCL2IF_LENGTH                                 0x1
#define _PIR4_BCL2IF_MASK                                   0x2
#define _PIR4_CCP7IF_POSN                                   0x2
#define _PIR4_CCP7IF_POSITION                               0x2
#define _PIR4_CCP7IF_SIZE                                   0x1
#define _PIR4_CCP7IF_LENGTH                                 0x1
#define _PIR4_CCP7IF_MASK                                   0x4
#define _PIR4_CCP8IF_POSN                                   0x3
#define _PIR4_CCP8IF_POSITION                               0x3
#define _PIR4_CCP8IF_SIZE                                   0x1
#define _PIR4_CCP8IF_LENGTH                                 0x1
#define _PIR4_CCP8IF_MASK                                   0x8
#define _PIR4_TX2IF_POSN                                    0x4
#define _PIR4_TX2IF_POSITION                                0x4
#define _PIR4_TX2IF_SIZE                                    0x1
#define _PIR4_TX2IF_LENGTH                                  0x1
#define _PIR4_TX2IF_MASK                                    0x10
#define _PIR4_RC2IF_POSN                                    0x5
#define _PIR4_RC2IF_POSITION                                0x5
#define _PIR4_RC2IF_SIZE                                    0x1
#define _PIR4_RC2IF_LENGTH                                  0x1
#define _PIR4_RC2IF_MASK                                    0x20
#define _PIR4_CCP9IF_POSN                                   0x6
#define _PIR4_CCP9IF_POSITION                               0x6
#define _PIR4_CCP9IF_SIZE                                   0x1
#define _PIR4_CCP9IF_LENGTH                                 0x1
#define _PIR4_CCP9IF_MASK                                   0x40
#define _PIR4_CCP10IF_POSN                                  0x7
#define _PIR4_CCP10IF_POSITION                              0x7
#define _PIR4_CCP10IF_SIZE                                  0x1
#define _PIR4_CCP10IF_LENGTH                                0x1
#define _PIR4_CCP10IF_MASK                                  0x80

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
        unsigned SOSCEN                 :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
    };
    struct {
        unsigned                        :3;
        unsigned T1OSCEN                :1;
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
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
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
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
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
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0x01B);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 01Bh");  // Note: Changed by MikroE
#endif
// bitfield definitions
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
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
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

// Register: TRISB
#define TRISB TRISB
extern volatile unsigned char           TRISB               __at(0x08D);
#ifndef _LIB_BUILD
asm("TRISB equ 08Dh");
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
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0x08D);
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
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
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

// Register: TRISD
#define TRISD TRISD
extern volatile unsigned char           TRISD               __at(0x08F);
#ifndef _LIB_BUILD
asm("TRISD equ 08Fh");
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
} TRISDbits_t;
extern volatile TRISDbits_t TRISDbits __at(0x08F);
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

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0x090);
#ifndef _LIB_BUILD
asm("TRISE equ 090h");
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
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0x090);
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
        unsigned SSP1IE                 :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
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
#define _PIE1_SSP1IE_POSN                                   0x3
#define _PIE1_SSP1IE_POSITION                               0x3
#define _PIE1_SSP1IE_SIZE                                   0x1
#define _PIE1_SSP1IE_LENGTH                                 0x1
#define _PIE1_SSP1IE_MASK                                   0x8
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
#define _PIE1_TMR1GIE_POSN                                  0x7
#define _PIE1_TMR1GIE_POSITION                              0x7
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x80
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
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
        unsigned TMR8IE                 :1;
        unsigned TMR10IE                :1;
        unsigned BCL1IE                 :1;
        unsigned                        :1;
        unsigned TMR3GIE                :1;
        unsigned TMR5GIE                :1;
        unsigned OSFIE                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_TMR8IE_POSN                                   0x1
#define _PIE2_TMR8IE_POSITION                               0x1
#define _PIE2_TMR8IE_SIZE                                   0x1
#define _PIE2_TMR8IE_LENGTH                                 0x1
#define _PIE2_TMR8IE_MASK                                   0x2
#define _PIE2_TMR10IE_POSN                                  0x2
#define _PIE2_TMR10IE_POSITION                              0x2
#define _PIE2_TMR10IE_SIZE                                  0x1
#define _PIE2_TMR10IE_LENGTH                                0x1
#define _PIE2_TMR10IE_MASK                                  0x4
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_TMR3GIE_POSN                                  0x5
#define _PIE2_TMR3GIE_POSITION                              0x5
#define _PIE2_TMR3GIE_SIZE                                  0x1
#define _PIE2_TMR3GIE_LENGTH                                0x1
#define _PIE2_TMR3GIE_MASK                                  0x20
#define _PIE2_TMR5GIE_POSN                                  0x6
#define _PIE2_TMR5GIE_POSITION                              0x6
#define _PIE2_TMR5GIE_SIZE                                  0x1
#define _PIE2_TMR5GIE_LENGTH                                0x1
#define _PIE2_TMR5GIE_MASK                                  0x40
#define _PIE2_OSFIE_POSN                                    0x7
#define _PIE2_OSFIE_POSITION                                0x7
#define _PIE2_OSFIE_SIZE                                    0x1
#define _PIE2_OSFIE_LENGTH                                  0x1
#define _PIE2_OSFIE_MASK                                    0x80
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x093);
#ifndef _LIB_BUILD
asm("PIE3 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3IE                 :1;
        unsigned TMR4IE                 :1;
        unsigned TMR5IE                 :1;
        unsigned TMR6IE                 :1;
        unsigned CCP3IE                 :1;
        unsigned CCP4IE                 :1;
        unsigned CCP5IE                 :1;
        unsigned CCP6IE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x093);
// bitfield macros
#define _PIE3_TMR3IE_POSN                                   0x0
#define _PIE3_TMR3IE_POSITION                               0x0
#define _PIE3_TMR3IE_SIZE                                   0x1
#define _PIE3_TMR3IE_LENGTH                                 0x1
#define _PIE3_TMR3IE_MASK                                   0x1
#define _PIE3_TMR4IE_POSN                                   0x1
#define _PIE3_TMR4IE_POSITION                               0x1
#define _PIE3_TMR4IE_SIZE                                   0x1
#define _PIE3_TMR4IE_LENGTH                                 0x1
#define _PIE3_TMR4IE_MASK                                   0x2
#define _PIE3_TMR5IE_POSN                                   0x2
#define _PIE3_TMR5IE_POSITION                               0x2
#define _PIE3_TMR5IE_SIZE                                   0x1
#define _PIE3_TMR5IE_LENGTH                                 0x1
#define _PIE3_TMR5IE_MASK                                   0x4
#define _PIE3_TMR6IE_POSN                                   0x3
#define _PIE3_TMR6IE_POSITION                               0x3
#define _PIE3_TMR6IE_SIZE                                   0x1
#define _PIE3_TMR6IE_LENGTH                                 0x1
#define _PIE3_TMR6IE_MASK                                   0x8
#define _PIE3_CCP3IE_POSN                                   0x4
#define _PIE3_CCP3IE_POSITION                               0x4
#define _PIE3_CCP3IE_SIZE                                   0x1
#define _PIE3_CCP3IE_LENGTH                                 0x1
#define _PIE3_CCP3IE_MASK                                   0x10
#define _PIE3_CCP4IE_POSN                                   0x5
#define _PIE3_CCP4IE_POSITION                               0x5
#define _PIE3_CCP4IE_SIZE                                   0x1
#define _PIE3_CCP4IE_LENGTH                                 0x1
#define _PIE3_CCP4IE_MASK                                   0x20
#define _PIE3_CCP5IE_POSN                                   0x6
#define _PIE3_CCP5IE_POSITION                               0x6
#define _PIE3_CCP5IE_SIZE                                   0x1
#define _PIE3_CCP5IE_LENGTH                                 0x1
#define _PIE3_CCP5IE_MASK                                   0x40
#define _PIE3_CCP6IE_POSN                                   0x7
#define _PIE3_CCP6IE_POSITION                               0x7
#define _PIE3_CCP6IE_SIZE                                   0x1
#define _PIE3_CCP6IE_LENGTH                                 0x1
#define _PIE3_CCP6IE_MASK                                   0x80

// Register: PIE4
#define PIE4 PIE4
extern volatile unsigned char           PIE4                __at(0x094);
#ifndef _LIB_BUILD
asm("PIE4 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2IE                 :1;
        unsigned BCL2IE                 :1;
        unsigned CCP7IE                 :1;
        unsigned CCP8IE                 :1;
        unsigned TX2IE                  :1;
        unsigned RC2IE                  :1;
        unsigned CCP9IE                 :1;
        unsigned CCP10IE                :1;
    };
} PIE4bits_t;
extern volatile PIE4bits_t PIE4bits __at(0x094);
// bitfield macros
#define _PIE4_SSP2IE_POSN                                   0x0
#define _PIE4_SSP2IE_POSITION                               0x0
#define _PIE4_SSP2IE_SIZE                                   0x1
#define _PIE4_SSP2IE_LENGTH                                 0x1
#define _PIE4_SSP2IE_MASK                                   0x1
#define _PIE4_BCL2IE_POSN                                   0x1
#define _PIE4_BCL2IE_POSITION                               0x1
#define _PIE4_BCL2IE_SIZE                                   0x1
#define _PIE4_BCL2IE_LENGTH                                 0x1
#define _PIE4_BCL2IE_MASK                                   0x2
#define _PIE4_CCP7IE_POSN                                   0x2
#define _PIE4_CCP7IE_POSITION                               0x2
#define _PIE4_CCP7IE_SIZE                                   0x1
#define _PIE4_CCP7IE_LENGTH                                 0x1
#define _PIE4_CCP7IE_MASK                                   0x4
#define _PIE4_CCP8IE_POSN                                   0x3
#define _PIE4_CCP8IE_POSITION                               0x3
#define _PIE4_CCP8IE_SIZE                                   0x1
#define _PIE4_CCP8IE_LENGTH                                 0x1
#define _PIE4_CCP8IE_MASK                                   0x8
#define _PIE4_TX2IE_POSN                                    0x4
#define _PIE4_TX2IE_POSITION                                0x4
#define _PIE4_TX2IE_SIZE                                    0x1
#define _PIE4_TX2IE_LENGTH                                  0x1
#define _PIE4_TX2IE_MASK                                    0x10
#define _PIE4_RC2IE_POSN                                    0x5
#define _PIE4_RC2IE_POSITION                                0x5
#define _PIE4_RC2IE_SIZE                                    0x1
#define _PIE4_RC2IE_LENGTH                                  0x1
#define _PIE4_RC2IE_MASK                                    0x20
#define _PIE4_CCP9IE_POSN                                   0x6
#define _PIE4_CCP9IE_POSITION                               0x6
#define _PIE4_CCP9IE_SIZE                                   0x1
#define _PIE4_CCP9IE_LENGTH                                 0x1
#define _PIE4_CCP9IE_MASK                                   0x40
#define _PIE4_CCP10IE_POSN                                  0x7
#define _PIE4_CCP10IE_POSITION                              0x7
#define _PIE4_CCP10IE_SIZE                                  0x1
#define _PIE4_CCP10IE_LENGTH                                0x1
#define _PIE4_CCP10IE_MASK                                  0x80

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
        unsigned                        :2;
        unsigned HFIOFR                 :1;
        unsigned OSTS                   :1;
        unsigned                        :1;
        unsigned SOSCR                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned T1OSCR                 :1;
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
#define _OSCSTAT_SOSCR_POSN                                 0x7
#define _OSCSTAT_SOSCR_POSITION                             0x7
#define _OSCSTAT_SOSCR_SIZE                                 0x1
#define _OSCSTAT_SOSCR_LENGTH                               0x1
#define _OSCSTAT_SOSCR_MASK                                 0x80
#define _OSCSTAT_T1OSCR_POSN                                0x7
#define _OSCSTAT_T1OSCR_POSITION                            0x7
#define _OSCSTAT_T1OSCR_SIZE                                0x1
#define _OSCSTAT_T1OSCR_LENGTH                              0x1
#define _OSCSTAT_T1OSCR_MASK                                0x80

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
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
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

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0x10D);
#ifndef _LIB_BUILD
asm("LATB equ 010Dh");
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
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0x10D);
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
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
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

// Register: LATD
#define LATD LATD
extern volatile unsigned char           LATD                __at(0x10F);
#ifndef _LIB_BUILD
asm("LATD equ 010Fh");
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
        unsigned LATD                   :8;
    };
} LATDbits_t;
extern volatile LATDbits_t LATDbits __at(0x10F);
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
#define _LATD_LATD_POSN                                     0x0
#define _LATD_LATD_POSITION                                 0x0
#define _LATD_LATD_SIZE                                     0x8
#define _LATD_LATD_LENGTH                                   0x8
#define _LATD_LATD_MASK                                     0xFF

// Register: LATE
#define LATE LATE
extern volatile unsigned char           LATE                __at(0x110);
#ifndef _LIB_BUILD
asm("LATE equ 0110h");
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
} LATEbits_t;
extern volatile LATEbits_t LATEbits __at(0x110);
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
        unsigned                        :2;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
    };
} FVRCONbits_t;
extern volatile FVRCONbits_t FVRCONbits __at(0x117);
// bitfield macros
#define _FVRCON_ADFVR_POSN                                  0x0
#define _FVRCON_ADFVR_POSITION                              0x0
#define _FVRCON_ADFVR_SIZE                                  0x2
#define _FVRCON_ADFVR_LENGTH                                0x2
#define _FVRCON_ADFVR_MASK                                  0x3
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

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x11D);
#ifndef _LIB_BUILD
asm("APFCON equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2SEL                :1;
        unsigned T3CKISEL               :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_CCP2SEL_POSN                                0x0
#define _APFCON_CCP2SEL_POSITION                            0x0
#define _APFCON_CCP2SEL_SIZE                                0x1
#define _APFCON_CCP2SEL_LENGTH                              0x1
#define _APFCON_CCP2SEL_MASK                                0x1
#define _APFCON_T3CKISEL_POSN                               0x1
#define _APFCON_T3CKISEL_POSITION                           0x1
#define _APFCON_T3CKISEL_SIZE                               0x1
#define _APFCON_T3CKISEL_LENGTH                             0x1
#define _APFCON_T3CKISEL_MASK                               0x2

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
        unsigned ANSA3                  :1;
        unsigned                        :1;
        unsigned ANSA5                  :1;
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
#define _ANSELA_ANSA3_POSN                                  0x3
#define _ANSELA_ANSA3_POSITION                              0x3
#define _ANSELA_ANSA3_SIZE                                  0x1
#define _ANSELA_ANSA3_LENGTH                                0x1
#define _ANSELA_ANSA3_MASK                                  0x8
#define _ANSELA_ANSA5_POSN                                  0x5
#define _ANSELA_ANSA5_POSITION                              0x5
#define _ANSELA_ANSA5_SIZE                                  0x1
#define _ANSELA_ANSA5_LENGTH                                0x1
#define _ANSELA_ANSA5_MASK                                  0x20
#define _ANSELA_ANSELA_POSN                                 0x0
#define _ANSELA_ANSELA_POSITION                             0x0
#define _ANSELA_ANSELA_SIZE                                 0x6
#define _ANSELA_ANSELA_LENGTH                               0x6
#define _ANSELA_ANSELA_MASK                                 0x3F

// Register: ANSELB
#define ANSELB ANSELB
extern volatile unsigned char           ANSELB              __at(0x18D);
#ifndef _LIB_BUILD
asm("ANSELB equ 018Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSB0                  :1;
        unsigned ANSB1                  :1;
        unsigned ANSB2                  :1;
        unsigned ANSB3                  :1;
        unsigned ANSB4                  :1;
        unsigned ANSB5                  :1;
    };
    struct {
        unsigned ANSELB                 :6;
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0x18D);
// bitfield macros
#define _ANSELB_ANSB0_POSN                                  0x0
#define _ANSELB_ANSB0_POSITION                              0x0
#define _ANSELB_ANSB0_SIZE                                  0x1
#define _ANSELB_ANSB0_LENGTH                                0x1
#define _ANSELB_ANSB0_MASK                                  0x1
#define _ANSELB_ANSB1_POSN                                  0x1
#define _ANSELB_ANSB1_POSITION                              0x1
#define _ANSELB_ANSB1_SIZE                                  0x1
#define _ANSELB_ANSB1_LENGTH                                0x1
#define _ANSELB_ANSB1_MASK                                  0x2
#define _ANSELB_ANSB2_POSN                                  0x2
#define _ANSELB_ANSB2_POSITION                              0x2
#define _ANSELB_ANSB2_SIZE                                  0x1
#define _ANSELB_ANSB2_LENGTH                                0x1
#define _ANSELB_ANSB2_MASK                                  0x4
#define _ANSELB_ANSB3_POSN                                  0x3
#define _ANSELB_ANSB3_POSITION                              0x3
#define _ANSELB_ANSB3_SIZE                                  0x1
#define _ANSELB_ANSB3_LENGTH                                0x1
#define _ANSELB_ANSB3_MASK                                  0x8
#define _ANSELB_ANSB4_POSN                                  0x4
#define _ANSELB_ANSB4_POSITION                              0x4
#define _ANSELB_ANSB4_SIZE                                  0x1
#define _ANSELB_ANSB4_LENGTH                                0x1
#define _ANSELB_ANSB4_MASK                                  0x10
#define _ANSELB_ANSB5_POSN                                  0x5
#define _ANSELB_ANSB5_POSITION                              0x5
#define _ANSELB_ANSB5_SIZE                                  0x1
#define _ANSELB_ANSB5_LENGTH                                0x1
#define _ANSELB_ANSB5_MASK                                  0x20
#define _ANSELB_ANSELB_POSN                                 0x0
#define _ANSELB_ANSELB_POSITION                             0x0
#define _ANSELB_ANSELB_SIZE                                 0x6
#define _ANSELB_ANSELB_LENGTH                               0x6
#define _ANSELB_ANSELB_MASK                                 0x3F

// Register: ANSELD
#define ANSELD ANSELD
extern volatile unsigned char           ANSELD              __at(0x18F);
#ifndef _LIB_BUILD
asm("ANSELD equ 018Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSD0                  :1;
        unsigned ANSD1                  :1;
        unsigned ANSD2                  :1;
        unsigned ANSD3                  :1;
    };
    struct {
        unsigned ANSELD                 :8;
    };
} ANSELDbits_t;
extern volatile ANSELDbits_t ANSELDbits __at(0x18F);
// bitfield macros
#define _ANSELD_ANSD0_POSN                                  0x0
#define _ANSELD_ANSD0_POSITION                              0x0
#define _ANSELD_ANSD0_SIZE                                  0x1
#define _ANSELD_ANSD0_LENGTH                                0x1
#define _ANSELD_ANSD0_MASK                                  0x1
#define _ANSELD_ANSD1_POSN                                  0x1
#define _ANSELD_ANSD1_POSITION                              0x1
#define _ANSELD_ANSD1_SIZE                                  0x1
#define _ANSELD_ANSD1_LENGTH                                0x1
#define _ANSELD_ANSD1_MASK                                  0x2
#define _ANSELD_ANSD2_POSN                                  0x2
#define _ANSELD_ANSD2_POSITION                              0x2
#define _ANSELD_ANSD2_SIZE                                  0x1
#define _ANSELD_ANSD2_LENGTH                                0x1
#define _ANSELD_ANSD2_MASK                                  0x4
#define _ANSELD_ANSD3_POSN                                  0x3
#define _ANSELD_ANSD3_POSITION                              0x3
#define _ANSELD_ANSD3_SIZE                                  0x1
#define _ANSELD_ANSD3_LENGTH                                0x1
#define _ANSELD_ANSD3_MASK                                  0x8
#define _ANSELD_ANSELD_POSN                                 0x0
#define _ANSELD_ANSELD_POSITION                             0x0
#define _ANSELD_ANSELD_SIZE                                 0x8
#define _ANSELD_ANSELD_LENGTH                               0x8
#define _ANSELD_ANSELD_MASK                                 0xFF

// Register: ANSELE
#define ANSELE ANSELE
extern volatile unsigned char           ANSELE              __at(0x190);
#ifndef _LIB_BUILD
asm("ANSELE equ 0190h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSE0                  :1;
        unsigned ANSE1                  :1;
        unsigned ANSE2                  :1;
    };
    struct {
        unsigned ANSELE                 :3;
    };
} ANSELEbits_t;
extern volatile ANSELEbits_t ANSELEbits __at(0x190);
// bitfield macros
#define _ANSELE_ANSE0_POSN                                  0x0
#define _ANSELE_ANSE0_POSITION                              0x0
#define _ANSELE_ANSE0_SIZE                                  0x1
#define _ANSELE_ANSE0_LENGTH                                0x1
#define _ANSELE_ANSE0_MASK                                  0x1
#define _ANSELE_ANSE1_POSN                                  0x1
#define _ANSELE_ANSE1_POSITION                              0x1
#define _ANSELE_ANSE1_SIZE                                  0x1
#define _ANSELE_ANSE1_LENGTH                                0x1
#define _ANSELE_ANSE1_MASK                                  0x2
#define _ANSELE_ANSE2_POSN                                  0x2
#define _ANSELE_ANSE2_POSITION                              0x2
#define _ANSELE_ANSE2_SIZE                                  0x1
#define _ANSELE_ANSE2_LENGTH                                0x1
#define _ANSELE_ANSE2_MASK                                  0x4
#define _ANSELE_ANSELE_POSN                                 0x0
#define _ANSELE_ANSELE_POSITION                             0x0
#define _ANSELE_ANSELE_SIZE                                 0x3
#define _ANSELE_ANSELE_LENGTH                               0x3
#define _ANSELE_ANSELE_MASK                                 0x7

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

// Register: RC1REG
#define RC1REG RC1REG
extern volatile unsigned char           RC1REG              __at(0x199);
#ifndef _LIB_BUILD
asm("RC1REG equ 0199h");
#endif
// aliases
extern volatile unsigned char           RCREG               __at(0x199);
#ifndef _LIB_BUILD
asm("RCREG equ 0199h");
#endif
extern volatile unsigned char           RCREG1              __at(0x199);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RC1REGbits_t;
extern volatile RC1REGbits_t RC1REGbits __at(0x199);
// bitfield macros
#define _RC1REG_RC1REG_POSN                                 0x0
#define _RC1REG_RC1REG_POSITION                             0x0
#define _RC1REG_RC1REG_SIZE                                 0x8
#define _RC1REG_RC1REG_LENGTH                               0x8
#define _RC1REG_RC1REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RCREGbits_t;
extern volatile RCREGbits_t RCREGbits __at(0x199);
// bitfield macros
#define _RCREG_RC1REG_POSN                                  0x0
#define _RCREG_RC1REG_POSITION                              0x0
#define _RCREG_RC1REG_SIZE                                  0x8
#define _RCREG_RC1REG_LENGTH                                0x8
#define _RCREG_RC1REG_MASK                                  0xFF
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RCREG1bits_t;
extern volatile RCREG1bits_t RCREG1bits __at(0x199);
// bitfield macros
#define _RCREG1_RC1REG_POSN                                 0x0
#define _RCREG1_RC1REG_POSITION                             0x0
#define _RCREG1_RC1REG_SIZE                                 0x8
#define _RCREG1_RC1REG_LENGTH                               0x8
#define _RCREG1_RC1REG_MASK                                 0xFF

// Register: TX1REG
#define TX1REG TX1REG
extern volatile unsigned char           TX1REG              __at(0x19A);
#ifndef _LIB_BUILD
asm("TX1REG equ 019Ah");
#endif
// aliases
extern volatile unsigned char           TXREG               __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG equ 019Ah");
#endif
extern volatile unsigned char           TXREG1              __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG1 equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TX1REGbits_t;
extern volatile TX1REGbits_t TX1REGbits __at(0x19A);
// bitfield macros
#define _TX1REG_TX1REG_POSN                                 0x0
#define _TX1REG_TX1REG_POSITION                             0x0
#define _TX1REG_TX1REG_SIZE                                 0x8
#define _TX1REG_TX1REG_LENGTH                               0x8
#define _TX1REG_TX1REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TXREGbits_t;
extern volatile TXREGbits_t TXREGbits __at(0x19A);
// bitfield macros
#define _TXREG_TX1REG_POSN                                  0x0
#define _TXREG_TX1REG_POSITION                              0x0
#define _TXREG_TX1REG_SIZE                                  0x8
#define _TXREG_TX1REG_LENGTH                                0x8
#define _TXREG_TX1REG_MASK                                  0xFF
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TXREG1bits_t;
extern volatile TXREG1bits_t TXREG1bits __at(0x19A);
// bitfield macros
#define _TXREG1_TX1REG_POSN                                 0x0
#define _TXREG1_TX1REG_POSITION                             0x0
#define _TXREG1_TX1REG_SIZE                                 0x8
#define _TXREG1_TX1REG_LENGTH                               0x8
#define _TXREG1_TX1REG_MASK                                 0xFF

// Register: SP1BRG
#define SP1BRG SP1BRG
extern volatile unsigned short          SP1BRG              __at(0x19B);
#ifndef _LIB_BUILD
asm("SP1BRG equ 019Bh");
#endif

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
extern volatile unsigned char           SP1BRGL             __at(0x19B);
#ifndef _LIB_BUILD
asm("SP1BRGL equ 019Bh");
#endif
// aliases
extern volatile unsigned char           SPBRG               __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRG equ 019Bh");
#endif
extern volatile unsigned char           SPBRGL              __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRGL equ 019Bh");
#endif
extern volatile unsigned char           SPBRGL1             __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRGL1 equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SP1BRGLbits_t;
extern volatile SP1BRGLbits_t SP1BRGLbits __at(0x19B);
// bitfield macros
#define _SP1BRGL_SP1BRGL_POSN                               0x0
#define _SP1BRGL_SP1BRGL_POSITION                           0x0
#define _SP1BRGL_SP1BRGL_SIZE                               0x8
#define _SP1BRGL_SP1BRGL_LENGTH                             0x8
#define _SP1BRGL_SP1BRGL_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __at(0x19B);
// bitfield macros
#define _SPBRG_SP1BRGL_POSN                                 0x0
#define _SPBRG_SP1BRGL_POSITION                             0x0
#define _SPBRG_SP1BRGL_SIZE                                 0x8
#define _SPBRG_SP1BRGL_LENGTH                               0x8
#define _SPBRG_SP1BRGL_MASK                                 0xFF
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGLbits_t;
extern volatile SPBRGLbits_t SPBRGLbits __at(0x19B);
// bitfield macros
#define _SPBRGL_SP1BRGL_POSN                                0x0
#define _SPBRGL_SP1BRGL_POSITION                            0x0
#define _SPBRGL_SP1BRGL_SIZE                                0x8
#define _SPBRGL_SP1BRGL_LENGTH                              0x8
#define _SPBRGL_SP1BRGL_MASK                                0xFF
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGL1bits_t;
extern volatile SPBRGL1bits_t SPBRGL1bits __at(0x19B);
// bitfield macros
#define _SPBRGL1_SP1BRGL_POSN                               0x0
#define _SPBRGL1_SP1BRGL_POSITION                           0x0
#define _SPBRGL1_SP1BRGL_SIZE                               0x8
#define _SPBRGL1_SP1BRGL_LENGTH                             0x8
#define _SPBRGL1_SP1BRGL_MASK                               0xFF

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
extern volatile unsigned char           SP1BRGH             __at(0x19C);
#ifndef _LIB_BUILD
asm("SP1BRGH equ 019Ch");
#endif
// aliases
extern volatile unsigned char           SPBRGH              __at(0x19C);
#ifndef _LIB_BUILD
asm("SPBRGH equ 019Ch");
#endif
extern volatile unsigned char           SPBRGH1             __at(0x19C);
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SP1BRGHbits_t;
extern volatile SP1BRGHbits_t SP1BRGHbits __at(0x19C);
// bitfield macros
#define _SP1BRGH_SP1BRGH_POSN                               0x0
#define _SP1BRGH_SP1BRGH_POSITION                           0x0
#define _SP1BRGH_SP1BRGH_SIZE                               0x8
#define _SP1BRGH_SP1BRGH_LENGTH                             0x8
#define _SP1BRGH_SP1BRGH_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0x19C);
// bitfield macros
#define _SPBRGH_SP1BRGH_POSN                                0x0
#define _SPBRGH_SP1BRGH_POSITION                            0x0
#define _SPBRGH_SP1BRGH_SIZE                                0x8
#define _SPBRGH_SP1BRGH_LENGTH                              0x8
#define _SPBRGH_SP1BRGH_MASK                                0xFF
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SPBRGH1bits_t;
extern volatile SPBRGH1bits_t SPBRGH1bits __at(0x19C);
// bitfield macros
#define _SPBRGH1_SP1BRGH_POSN                               0x0
#define _SPBRGH1_SP1BRGH_POSITION                           0x0
#define _SPBRGH1_SP1BRGH_SIZE                               0x8
#define _SPBRGH1_SP1BRGH_LENGTH                             0x8
#define _SPBRGH1_SP1BRGH_MASK                               0xFF

// Register: RC1STA
#define RC1STA RC1STA
extern volatile unsigned char           RC1STA              __at(0x19D);
#ifndef _LIB_BUILD
asm("RC1STA equ 019Dh");
#endif
// aliases
extern volatile unsigned char           RCSTA               __at(0x19D);
#ifndef _LIB_BUILD
asm("RCSTA equ 019Dh");
#endif
extern volatile unsigned char           RCSTA1              __at(0x19D);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 019Dh");
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
} RC1STAbits_t;
extern volatile RC1STAbits_t RC1STAbits __at(0x19D);
// bitfield macros
#define _RC1STA_RX9D_POSN                                   0x0
#define _RC1STA_RX9D_POSITION                               0x0
#define _RC1STA_RX9D_SIZE                                   0x1
#define _RC1STA_RX9D_LENGTH                                 0x1
#define _RC1STA_RX9D_MASK                                   0x1
#define _RC1STA_OERR_POSN                                   0x1
#define _RC1STA_OERR_POSITION                               0x1
#define _RC1STA_OERR_SIZE                                   0x1
#define _RC1STA_OERR_LENGTH                                 0x1
#define _RC1STA_OERR_MASK                                   0x2
#define _RC1STA_FERR_POSN                                   0x2
#define _RC1STA_FERR_POSITION                               0x2
#define _RC1STA_FERR_SIZE                                   0x1
#define _RC1STA_FERR_LENGTH                                 0x1
#define _RC1STA_FERR_MASK                                   0x4
#define _RC1STA_ADDEN_POSN                                  0x3
#define _RC1STA_ADDEN_POSITION                              0x3
#define _RC1STA_ADDEN_SIZE                                  0x1
#define _RC1STA_ADDEN_LENGTH                                0x1
#define _RC1STA_ADDEN_MASK                                  0x8
#define _RC1STA_CREN_POSN                                   0x4
#define _RC1STA_CREN_POSITION                               0x4
#define _RC1STA_CREN_SIZE                                   0x1
#define _RC1STA_CREN_LENGTH                                 0x1
#define _RC1STA_CREN_MASK                                   0x10
#define _RC1STA_SREN_POSN                                   0x5
#define _RC1STA_SREN_POSITION                               0x5
#define _RC1STA_SREN_SIZE                                   0x1
#define _RC1STA_SREN_LENGTH                                 0x1
#define _RC1STA_SREN_MASK                                   0x20
#define _RC1STA_RX9_POSN                                    0x6
#define _RC1STA_RX9_POSITION                                0x6
#define _RC1STA_RX9_SIZE                                    0x1
#define _RC1STA_RX9_LENGTH                                  0x1
#define _RC1STA_RX9_MASK                                    0x40
#define _RC1STA_SPEN_POSN                                   0x7
#define _RC1STA_SPEN_POSITION                               0x7
#define _RC1STA_SPEN_SIZE                                   0x1
#define _RC1STA_SPEN_LENGTH                                 0x1
#define _RC1STA_SPEN_MASK                                   0x80
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
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits __at(0x19D);
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

// Register: TX1STA
#define TX1STA TX1STA
extern volatile unsigned char           TX1STA              __at(0x19E);
#ifndef _LIB_BUILD
asm("TX1STA equ 019Eh");
#endif
// aliases
extern volatile unsigned char           TXSTA               __at(0x19E);
#ifndef _LIB_BUILD
asm("TXSTA equ 019Eh");
#endif
extern volatile unsigned char           TXSTA1              __at(0x19E);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 019Eh");
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
} TX1STAbits_t;
extern volatile TX1STAbits_t TX1STAbits __at(0x19E);
// bitfield macros
#define _TX1STA_TX9D_POSN                                   0x0
#define _TX1STA_TX9D_POSITION                               0x0
#define _TX1STA_TX9D_SIZE                                   0x1
#define _TX1STA_TX9D_LENGTH                                 0x1
#define _TX1STA_TX9D_MASK                                   0x1
#define _TX1STA_TRMT_POSN                                   0x1
#define _TX1STA_TRMT_POSITION                               0x1
#define _TX1STA_TRMT_SIZE                                   0x1
#define _TX1STA_TRMT_LENGTH                                 0x1
#define _TX1STA_TRMT_MASK                                   0x2
#define _TX1STA_BRGH_POSN                                   0x2
#define _TX1STA_BRGH_POSITION                               0x2
#define _TX1STA_BRGH_SIZE                                   0x1
#define _TX1STA_BRGH_LENGTH                                 0x1
#define _TX1STA_BRGH_MASK                                   0x4
#define _TX1STA_SENDB_POSN                                  0x3
#define _TX1STA_SENDB_POSITION                              0x3
#define _TX1STA_SENDB_SIZE                                  0x1
#define _TX1STA_SENDB_LENGTH                                0x1
#define _TX1STA_SENDB_MASK                                  0x8
#define _TX1STA_SYNC_POSN                                   0x4
#define _TX1STA_SYNC_POSITION                               0x4
#define _TX1STA_SYNC_SIZE                                   0x1
#define _TX1STA_SYNC_LENGTH                                 0x1
#define _TX1STA_SYNC_MASK                                   0x10
#define _TX1STA_TXEN_POSN                                   0x5
#define _TX1STA_TXEN_POSITION                               0x5
#define _TX1STA_TXEN_SIZE                                   0x1
#define _TX1STA_TXEN_LENGTH                                 0x1
#define _TX1STA_TXEN_MASK                                   0x20
#define _TX1STA_TX9_POSN                                    0x6
#define _TX1STA_TX9_POSITION                                0x6
#define _TX1STA_TX9_SIZE                                    0x1
#define _TX1STA_TX9_LENGTH                                  0x1
#define _TX1STA_TX9_MASK                                    0x40
#define _TX1STA_CSRC_POSN                                   0x7
#define _TX1STA_CSRC_POSITION                               0x7
#define _TX1STA_CSRC_SIZE                                   0x1
#define _TX1STA_CSRC_LENGTH                                 0x1
#define _TX1STA_CSRC_MASK                                   0x80
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
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits __at(0x19E);
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

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
extern volatile unsigned char           BAUD1CON            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUD1CON equ 019Fh");
#endif
// aliases
extern volatile unsigned char           BAUDCON             __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON equ 019Fh");
#endif
extern volatile unsigned char           BAUDCON1            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 019Fh");
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
} BAUD1CONbits_t;
extern volatile BAUD1CONbits_t BAUD1CONbits __at(0x19F);
// bitfield macros
#define _BAUD1CON_ABDEN_POSN                                0x0
#define _BAUD1CON_ABDEN_POSITION                            0x0
#define _BAUD1CON_ABDEN_SIZE                                0x1
#define _BAUD1CON_ABDEN_LENGTH                              0x1
#define _BAUD1CON_ABDEN_MASK                                0x1
#define _BAUD1CON_WUE_POSN                                  0x1
#define _BAUD1CON_WUE_POSITION                              0x1
#define _BAUD1CON_WUE_SIZE                                  0x1
#define _BAUD1CON_WUE_LENGTH                                0x1
#define _BAUD1CON_WUE_MASK                                  0x2
#define _BAUD1CON_BRG16_POSN                                0x3
#define _BAUD1CON_BRG16_POSITION                            0x3
#define _BAUD1CON_BRG16_SIZE                                0x1
#define _BAUD1CON_BRG16_LENGTH                              0x1
#define _BAUD1CON_BRG16_MASK                                0x8
#define _BAUD1CON_SCKP_POSN                                 0x4
#define _BAUD1CON_SCKP_POSITION                             0x4
#define _BAUD1CON_SCKP_SIZE                                 0x1
#define _BAUD1CON_SCKP_LENGTH                               0x1
#define _BAUD1CON_SCKP_MASK                                 0x10
#define _BAUD1CON_RCIDL_POSN                                0x6
#define _BAUD1CON_RCIDL_POSITION                            0x6
#define _BAUD1CON_RCIDL_SIZE                                0x1
#define _BAUD1CON_RCIDL_LENGTH                              0x1
#define _BAUD1CON_RCIDL_MASK                                0x40
#define _BAUD1CON_ABDOVF_POSN                               0x7
#define _BAUD1CON_ABDOVF_POSITION                           0x7
#define _BAUD1CON_ABDOVF_SIZE                               0x1
#define _BAUD1CON_ABDOVF_LENGTH                             0x1
#define _BAUD1CON_ABDOVF_MASK                               0x80
// alias bitfield definitions
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
} BAUDCON1bits_t;
extern volatile BAUDCON1bits_t BAUDCON1bits __at(0x19F);
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
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
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

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0x20D);
#ifndef _LIB_BUILD
asm("WPUB equ 020Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUB0                  :1;
        unsigned WPUB1                  :1;
        unsigned WPUB2                  :1;
        unsigned WPUB3                  :1;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
        unsigned WPUB7                  :1;
    };
    struct {
        unsigned WPUB                   :8;
    };
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __at(0x20D);
// bitfield macros
#define _WPUB_WPUB0_POSN                                    0x0
#define _WPUB_WPUB0_POSITION                                0x0
#define _WPUB_WPUB0_SIZE                                    0x1
#define _WPUB_WPUB0_LENGTH                                  0x1
#define _WPUB_WPUB0_MASK                                    0x1
#define _WPUB_WPUB1_POSN                                    0x1
#define _WPUB_WPUB1_POSITION                                0x1
#define _WPUB_WPUB1_SIZE                                    0x1
#define _WPUB_WPUB1_LENGTH                                  0x1
#define _WPUB_WPUB1_MASK                                    0x2
#define _WPUB_WPUB2_POSN                                    0x2
#define _WPUB_WPUB2_POSITION                                0x2
#define _WPUB_WPUB2_SIZE                                    0x1
#define _WPUB_WPUB2_LENGTH                                  0x1
#define _WPUB_WPUB2_MASK                                    0x4
#define _WPUB_WPUB3_POSN                                    0x3
#define _WPUB_WPUB3_POSITION                                0x3
#define _WPUB_WPUB3_SIZE                                    0x1
#define _WPUB_WPUB3_LENGTH                                  0x1
#define _WPUB_WPUB3_MASK                                    0x8
#define _WPUB_WPUB4_POSN                                    0x4
#define _WPUB_WPUB4_POSITION                                0x4
#define _WPUB_WPUB4_SIZE                                    0x1
#define _WPUB_WPUB4_LENGTH                                  0x1
#define _WPUB_WPUB4_MASK                                    0x10
#define _WPUB_WPUB5_POSN                                    0x5
#define _WPUB_WPUB5_POSITION                                0x5
#define _WPUB_WPUB5_SIZE                                    0x1
#define _WPUB_WPUB5_LENGTH                                  0x1
#define _WPUB_WPUB5_MASK                                    0x20
#define _WPUB_WPUB6_POSN                                    0x6
#define _WPUB_WPUB6_POSITION                                0x6
#define _WPUB_WPUB6_SIZE                                    0x1
#define _WPUB_WPUB6_LENGTH                                  0x1
#define _WPUB_WPUB6_MASK                                    0x40
#define _WPUB_WPUB7_POSN                                    0x7
#define _WPUB_WPUB7_POSITION                                0x7
#define _WPUB_WPUB7_SIZE                                    0x1
#define _WPUB_WPUB7_LENGTH                                  0x1
#define _WPUB_WPUB7_MASK                                    0x80
#define _WPUB_WPUB_POSN                                     0x0
#define _WPUB_WPUB_POSITION                                 0x0
#define _WPUB_WPUB_SIZE                                     0x8
#define _WPUB_WPUB_LENGTH                                   0x8
#define _WPUB_WPUB_MASK                                     0xFF

// Register: WPUD
#define WPUD WPUD
extern volatile unsigned char           WPUD                __at(0x20F);
#ifndef _LIB_BUILD
asm("WPUD equ 020Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUD0                  :1;
        unsigned WPUD1                  :1;
        unsigned WPUD2                  :1;
        unsigned WPUD3                  :1;
        unsigned WPUD4                  :1;
        unsigned WPUD5                  :1;
        unsigned WPUD6                  :1;
        unsigned WPUD7                  :1;
    };
} WPUDbits_t;
extern volatile WPUDbits_t WPUDbits __at(0x20F);
// bitfield macros
#define _WPUD_WPUD0_POSN                                    0x0
#define _WPUD_WPUD0_POSITION                                0x0
#define _WPUD_WPUD0_SIZE                                    0x1
#define _WPUD_WPUD0_LENGTH                                  0x1
#define _WPUD_WPUD0_MASK                                    0x1
#define _WPUD_WPUD1_POSN                                    0x1
#define _WPUD_WPUD1_POSITION                                0x1
#define _WPUD_WPUD1_SIZE                                    0x1
#define _WPUD_WPUD1_LENGTH                                  0x1
#define _WPUD_WPUD1_MASK                                    0x2
#define _WPUD_WPUD2_POSN                                    0x2
#define _WPUD_WPUD2_POSITION                                0x2
#define _WPUD_WPUD2_SIZE                                    0x1
#define _WPUD_WPUD2_LENGTH                                  0x1
#define _WPUD_WPUD2_MASK                                    0x4
#define _WPUD_WPUD3_POSN                                    0x3
#define _WPUD_WPUD3_POSITION                                0x3
#define _WPUD_WPUD3_SIZE                                    0x1
#define _WPUD_WPUD3_LENGTH                                  0x1
#define _WPUD_WPUD3_MASK                                    0x8
#define _WPUD_WPUD4_POSN                                    0x4
#define _WPUD_WPUD4_POSITION                                0x4
#define _WPUD_WPUD4_SIZE                                    0x1
#define _WPUD_WPUD4_LENGTH                                  0x1
#define _WPUD_WPUD4_MASK                                    0x10
#define _WPUD_WPUD5_POSN                                    0x5
#define _WPUD_WPUD5_POSITION                                0x5
#define _WPUD_WPUD5_SIZE                                    0x1
#define _WPUD_WPUD5_LENGTH                                  0x1
#define _WPUD_WPUD5_MASK                                    0x20
#define _WPUD_WPUD6_POSN                                    0x6
#define _WPUD_WPUD6_POSITION                                0x6
#define _WPUD_WPUD6_SIZE                                    0x1
#define _WPUD_WPUD6_LENGTH                                  0x1
#define _WPUD_WPUD6_MASK                                    0x40
#define _WPUD_WPUD7_POSN                                    0x7
#define _WPUD_WPUD7_POSITION                                0x7
#define _WPUD_WPUD7_SIZE                                    0x1
#define _WPUD_WPUD7_LENGTH                                  0x1
#define _WPUD_WPUD7_MASK                                    0x80

// Register: WPUE
#define WPUE WPUE
extern volatile unsigned char           WPUE                __at(0x210);
#ifndef _LIB_BUILD
asm("WPUE equ 0210h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUE0                  :1;
        unsigned WPUE1                  :1;
        unsigned WPUE2                  :1;
        unsigned WPUE3                  :1;
        unsigned WPUE4                  :1;
        unsigned WPUE5                  :1;
        unsigned WPUE6                  :1;
        unsigned WPUE7                  :1;
    };
} WPUEbits_t;
extern volatile WPUEbits_t WPUEbits __at(0x210);
// bitfield macros
#define _WPUE_WPUE0_POSN                                    0x0
#define _WPUE_WPUE0_POSITION                                0x0
#define _WPUE_WPUE0_SIZE                                    0x1
#define _WPUE_WPUE0_LENGTH                                  0x1
#define _WPUE_WPUE0_MASK                                    0x1
#define _WPUE_WPUE1_POSN                                    0x1
#define _WPUE_WPUE1_POSITION                                0x1
#define _WPUE_WPUE1_SIZE                                    0x1
#define _WPUE_WPUE1_LENGTH                                  0x1
#define _WPUE_WPUE1_MASK                                    0x2
#define _WPUE_WPUE2_POSN                                    0x2
#define _WPUE_WPUE2_POSITION                                0x2
#define _WPUE_WPUE2_SIZE                                    0x1
#define _WPUE_WPUE2_LENGTH                                  0x1
#define _WPUE_WPUE2_MASK                                    0x4
#define _WPUE_WPUE3_POSN                                    0x3
#define _WPUE_WPUE3_POSITION                                0x3
#define _WPUE_WPUE3_SIZE                                    0x1
#define _WPUE_WPUE3_LENGTH                                  0x1
#define _WPUE_WPUE3_MASK                                    0x8
#define _WPUE_WPUE4_POSN                                    0x4
#define _WPUE_WPUE4_POSITION                                0x4
#define _WPUE_WPUE4_SIZE                                    0x1
#define _WPUE_WPUE4_LENGTH                                  0x1
#define _WPUE_WPUE4_MASK                                    0x10
#define _WPUE_WPUE5_POSN                                    0x5
#define _WPUE_WPUE5_POSITION                                0x5
#define _WPUE_WPUE5_SIZE                                    0x1
#define _WPUE_WPUE5_LENGTH                                  0x1
#define _WPUE_WPUE5_MASK                                    0x20
#define _WPUE_WPUE6_POSN                                    0x6
#define _WPUE_WPUE6_POSITION                                0x6
#define _WPUE_WPUE6_SIZE                                    0x1
#define _WPUE_WPUE6_LENGTH                                  0x1
#define _WPUE_WPUE6_MASK                                    0x40
#define _WPUE_WPUE7_POSN                                    0x7
#define _WPUE_WPUE7_POSITION                                0x7
#define _WPUE_WPUE7_SIZE                                    0x1
#define _WPUE_WPUE7_LENGTH                                  0x1
#define _WPUE_WPUE7_MASK                                    0x80

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
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0x215);
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
} SSPCONbits_t;
extern volatile SSPCONbits_t SSPCONbits __at(0x215);
// bitfield macros
#define _SSPCON_SSPM_POSN                                   0x0
#define _SSPCON_SSPM_POSITION                               0x0
#define _SSPCON_SSPM_SIZE                                   0x4
#define _SSPCON_SSPM_LENGTH                                 0x4
#define _SSPCON_SSPM_MASK                                   0xF
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
#define _SSPCON_SSPM0_POSN                                  0x0
#define _SSPCON_SSPM0_POSITION                              0x0
#define _SSPCON_SSPM0_SIZE                                  0x1
#define _SSPCON_SSPM0_LENGTH                                0x1
#define _SSPCON_SSPM0_MASK                                  0x1
#define _SSPCON_SSPM1_POSN                                  0x1
#define _SSPCON_SSPM1_POSITION                              0x1
#define _SSPCON_SSPM1_SIZE                                  0x1
#define _SSPCON_SSPM1_LENGTH                                0x1
#define _SSPCON_SSPM1_MASK                                  0x2
#define _SSPCON_SSPM2_POSN                                  0x2
#define _SSPCON_SSPM2_POSITION                              0x2
#define _SSPCON_SSPM2_SIZE                                  0x1
#define _SSPCON_SSPM2_LENGTH                                0x1
#define _SSPCON_SSPM2_MASK                                  0x4
#define _SSPCON_SSPM3_POSN                                  0x3
#define _SSPCON_SSPM3_POSITION                              0x3
#define _SSPCON_SSPM3_SIZE                                  0x1
#define _SSPCON_SSPM3_LENGTH                                0x1
#define _SSPCON_SSPM3_MASK                                  0x8
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
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0x215);
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

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
extern volatile unsigned char           SSP2BUF             __at(0x219);
#ifndef _LIB_BUILD
asm("SSP2BUF equ 0219h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP2BUFbits_t;
extern volatile SSP2BUFbits_t SSP2BUFbits __at(0x219);
// bitfield macros
#define _SSP2BUF_SSPBUF_POSN                                0x0
#define _SSP2BUF_SSPBUF_POSITION                            0x0
#define _SSP2BUF_SSPBUF_SIZE                                0x8
#define _SSP2BUF_SSPBUF_LENGTH                              0x8
#define _SSP2BUF_SSPBUF_MASK                                0xFF

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
extern volatile unsigned char           SSP2ADD             __at(0x21A);
#ifndef _LIB_BUILD
asm("SSP2ADD equ 021Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSP2ADDbits_t;
extern volatile SSP2ADDbits_t SSP2ADDbits __at(0x21A);
// bitfield macros
#define _SSP2ADD_SSPADD_POSN                                0x0
#define _SSP2ADD_SSPADD_POSITION                            0x0
#define _SSP2ADD_SSPADD_SIZE                                0x8
#define _SSP2ADD_SSPADD_LENGTH                              0x8
#define _SSP2ADD_SSPADD_MASK                                0xFF

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
extern volatile unsigned char           SSP2MSK             __at(0x21B);
#ifndef _LIB_BUILD
asm("SSP2MSK equ 021Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSP2MSKbits_t;
extern volatile SSP2MSKbits_t SSP2MSKbits __at(0x21B);
// bitfield macros
#define _SSP2MSK_SSPMSK_POSN                                0x0
#define _SSP2MSK_SSPMSK_POSITION                            0x0
#define _SSP2MSK_SSPMSK_SIZE                                0x8
#define _SSP2MSK_SSPMSK_LENGTH                              0x8
#define _SSP2MSK_SSPMSK_MASK                                0xFF

// Register: SSP2STAT
#define SSP2STAT SSP2STAT
extern volatile unsigned char           SSP2STAT            __at(0x21C);
#ifndef _LIB_BUILD
asm("SSP2STAT equ 021Ch");
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
} SSP2STATbits_t;
extern volatile SSP2STATbits_t SSP2STATbits __at(0x21C);
// bitfield macros
#define _SSP2STAT_BF_POSN                                   0x0
#define _SSP2STAT_BF_POSITION                               0x0
#define _SSP2STAT_BF_SIZE                                   0x1
#define _SSP2STAT_BF_LENGTH                                 0x1
#define _SSP2STAT_BF_MASK                                   0x1
#define _SSP2STAT_UA_POSN                                   0x1
#define _SSP2STAT_UA_POSITION                               0x1
#define _SSP2STAT_UA_SIZE                                   0x1
#define _SSP2STAT_UA_LENGTH                                 0x1
#define _SSP2STAT_UA_MASK                                   0x2
#define _SSP2STAT_R_nW_POSN                                 0x2
#define _SSP2STAT_R_nW_POSITION                             0x2
#define _SSP2STAT_R_nW_SIZE                                 0x1
#define _SSP2STAT_R_nW_LENGTH                               0x1
#define _SSP2STAT_R_nW_MASK                                 0x4
#define _SSP2STAT_S_POSN                                    0x3
#define _SSP2STAT_S_POSITION                                0x3
#define _SSP2STAT_S_SIZE                                    0x1
#define _SSP2STAT_S_LENGTH                                  0x1
#define _SSP2STAT_S_MASK                                    0x8
#define _SSP2STAT_P_POSN                                    0x4
#define _SSP2STAT_P_POSITION                                0x4
#define _SSP2STAT_P_SIZE                                    0x1
#define _SSP2STAT_P_LENGTH                                  0x1
#define _SSP2STAT_P_MASK                                    0x10
#define _SSP2STAT_D_nA_POSN                                 0x5
#define _SSP2STAT_D_nA_POSITION                             0x5
#define _SSP2STAT_D_nA_SIZE                                 0x1
#define _SSP2STAT_D_nA_LENGTH                               0x1
#define _SSP2STAT_D_nA_MASK                                 0x20
#define _SSP2STAT_CKE_POSN                                  0x6
#define _SSP2STAT_CKE_POSITION                              0x6
#define _SSP2STAT_CKE_SIZE                                  0x1
#define _SSP2STAT_CKE_LENGTH                                0x1
#define _SSP2STAT_CKE_MASK                                  0x40
#define _SSP2STAT_SMP_POSN                                  0x7
#define _SSP2STAT_SMP_POSITION                              0x7
#define _SSP2STAT_SMP_SIZE                                  0x1
#define _SSP2STAT_SMP_LENGTH                                0x1
#define _SSP2STAT_SMP_MASK                                  0x80

// Register: SSP2CON1
#define SSP2CON1 SSP2CON1
extern volatile unsigned char           SSP2CON1            __at(0x21D);
#ifndef _LIB_BUILD
asm("SSP2CON1 equ 021Dh");
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
} SSP2CON1bits_t;
extern volatile SSP2CON1bits_t SSP2CON1bits __at(0x21D);
// bitfield macros
#define _SSP2CON1_SSPM_POSN                                 0x0
#define _SSP2CON1_SSPM_POSITION                             0x0
#define _SSP2CON1_SSPM_SIZE                                 0x4
#define _SSP2CON1_SSPM_LENGTH                               0x4
#define _SSP2CON1_SSPM_MASK                                 0xF
#define _SSP2CON1_CKP_POSN                                  0x4
#define _SSP2CON1_CKP_POSITION                              0x4
#define _SSP2CON1_CKP_SIZE                                  0x1
#define _SSP2CON1_CKP_LENGTH                                0x1
#define _SSP2CON1_CKP_MASK                                  0x10
#define _SSP2CON1_SSPEN_POSN                                0x5
#define _SSP2CON1_SSPEN_POSITION                            0x5
#define _SSP2CON1_SSPEN_SIZE                                0x1
#define _SSP2CON1_SSPEN_LENGTH                              0x1
#define _SSP2CON1_SSPEN_MASK                                0x20
#define _SSP2CON1_SSPOV_POSN                                0x6
#define _SSP2CON1_SSPOV_POSITION                            0x6
#define _SSP2CON1_SSPOV_SIZE                                0x1
#define _SSP2CON1_SSPOV_LENGTH                              0x1
#define _SSP2CON1_SSPOV_MASK                                0x40
#define _SSP2CON1_WCOL_POSN                                 0x7
#define _SSP2CON1_WCOL_POSITION                             0x7
#define _SSP2CON1_WCOL_SIZE                                 0x1
#define _SSP2CON1_WCOL_LENGTH                               0x1
#define _SSP2CON1_WCOL_MASK                                 0x80
#define _SSP2CON1_SSPM0_POSN                                0x0
#define _SSP2CON1_SSPM0_POSITION                            0x0
#define _SSP2CON1_SSPM0_SIZE                                0x1
#define _SSP2CON1_SSPM0_LENGTH                              0x1
#define _SSP2CON1_SSPM0_MASK                                0x1
#define _SSP2CON1_SSPM1_POSN                                0x1
#define _SSP2CON1_SSPM1_POSITION                            0x1
#define _SSP2CON1_SSPM1_SIZE                                0x1
#define _SSP2CON1_SSPM1_LENGTH                              0x1
#define _SSP2CON1_SSPM1_MASK                                0x2
#define _SSP2CON1_SSPM2_POSN                                0x2
#define _SSP2CON1_SSPM2_POSITION                            0x2
#define _SSP2CON1_SSPM2_SIZE                                0x1
#define _SSP2CON1_SSPM2_LENGTH                              0x1
#define _SSP2CON1_SSPM2_MASK                                0x4
#define _SSP2CON1_SSPM3_POSN                                0x3
#define _SSP2CON1_SSPM3_POSITION                            0x3
#define _SSP2CON1_SSPM3_SIZE                                0x1
#define _SSP2CON1_SSPM3_LENGTH                              0x1
#define _SSP2CON1_SSPM3_MASK                                0x8

// Register: SSP2CON2
#define SSP2CON2 SSP2CON2
extern volatile unsigned char           SSP2CON2            __at(0x21E);
#ifndef _LIB_BUILD
asm("SSP2CON2 equ 021Eh");
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
} SSP2CON2bits_t;
extern volatile SSP2CON2bits_t SSP2CON2bits __at(0x21E);
// bitfield macros
#define _SSP2CON2_SEN_POSN                                  0x0
#define _SSP2CON2_SEN_POSITION                              0x0
#define _SSP2CON2_SEN_SIZE                                  0x1
#define _SSP2CON2_SEN_LENGTH                                0x1
#define _SSP2CON2_SEN_MASK                                  0x1
#define _SSP2CON2_RSEN_POSN                                 0x1
#define _SSP2CON2_RSEN_POSITION                             0x1
#define _SSP2CON2_RSEN_SIZE                                 0x1
#define _SSP2CON2_RSEN_LENGTH                               0x1
#define _SSP2CON2_RSEN_MASK                                 0x2
#define _SSP2CON2_PEN_POSN                                  0x2
#define _SSP2CON2_PEN_POSITION                              0x2
#define _SSP2CON2_PEN_SIZE                                  0x1
#define _SSP2CON2_PEN_LENGTH                                0x1
#define _SSP2CON2_PEN_MASK                                  0x4
#define _SSP2CON2_RCEN_POSN                                 0x3
#define _SSP2CON2_RCEN_POSITION                             0x3
#define _SSP2CON2_RCEN_SIZE                                 0x1
#define _SSP2CON2_RCEN_LENGTH                               0x1
#define _SSP2CON2_RCEN_MASK                                 0x8
#define _SSP2CON2_ACKEN_POSN                                0x4
#define _SSP2CON2_ACKEN_POSITION                            0x4
#define _SSP2CON2_ACKEN_SIZE                                0x1
#define _SSP2CON2_ACKEN_LENGTH                              0x1
#define _SSP2CON2_ACKEN_MASK                                0x10
#define _SSP2CON2_ACKDT_POSN                                0x5
#define _SSP2CON2_ACKDT_POSITION                            0x5
#define _SSP2CON2_ACKDT_SIZE                                0x1
#define _SSP2CON2_ACKDT_LENGTH                              0x1
#define _SSP2CON2_ACKDT_MASK                                0x20
#define _SSP2CON2_ACKSTAT_POSN                              0x6
#define _SSP2CON2_ACKSTAT_POSITION                          0x6
#define _SSP2CON2_ACKSTAT_SIZE                              0x1
#define _SSP2CON2_ACKSTAT_LENGTH                            0x1
#define _SSP2CON2_ACKSTAT_MASK                              0x40
#define _SSP2CON2_GCEN_POSN                                 0x7
#define _SSP2CON2_GCEN_POSITION                             0x7
#define _SSP2CON2_GCEN_SIZE                                 0x1
#define _SSP2CON2_GCEN_LENGTH                               0x1
#define _SSP2CON2_GCEN_MASK                                 0x80

// Register: SSP2CON3
#define SSP2CON3 SSP2CON3
extern volatile unsigned char           SSP2CON3            __at(0x21F);
#ifndef _LIB_BUILD
asm("SSP2CON3 equ 021Fh");
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
} SSP2CON3bits_t;
extern volatile SSP2CON3bits_t SSP2CON3bits __at(0x21F);
// bitfield macros
#define _SSP2CON3_DHEN_POSN                                 0x0
#define _SSP2CON3_DHEN_POSITION                             0x0
#define _SSP2CON3_DHEN_SIZE                                 0x1
#define _SSP2CON3_DHEN_LENGTH                               0x1
#define _SSP2CON3_DHEN_MASK                                 0x1
#define _SSP2CON3_AHEN_POSN                                 0x1
#define _SSP2CON3_AHEN_POSITION                             0x1
#define _SSP2CON3_AHEN_SIZE                                 0x1
#define _SSP2CON3_AHEN_LENGTH                               0x1
#define _SSP2CON3_AHEN_MASK                                 0x2
#define _SSP2CON3_SBCDE_POSN                                0x2
#define _SSP2CON3_SBCDE_POSITION                            0x2
#define _SSP2CON3_SBCDE_SIZE                                0x1
#define _SSP2CON3_SBCDE_LENGTH                              0x1
#define _SSP2CON3_SBCDE_MASK                                0x4
#define _SSP2CON3_SDAHT_POSN                                0x3
#define _SSP2CON3_SDAHT_POSITION                            0x3
#define _SSP2CON3_SDAHT_SIZE                                0x1
#define _SSP2CON3_SDAHT_LENGTH                              0x1
#define _SSP2CON3_SDAHT_MASK                                0x8
#define _SSP2CON3_BOEN_POSN                                 0x4
#define _SSP2CON3_BOEN_POSITION                             0x4
#define _SSP2CON3_BOEN_SIZE                                 0x1
#define _SSP2CON3_BOEN_LENGTH                               0x1
#define _SSP2CON3_BOEN_MASK                                 0x10
#define _SSP2CON3_SCIE_POSN                                 0x5
#define _SSP2CON3_SCIE_POSITION                             0x5
#define _SSP2CON3_SCIE_SIZE                                 0x1
#define _SSP2CON3_SCIE_LENGTH                               0x1
#define _SSP2CON3_SCIE_MASK                                 0x20
#define _SSP2CON3_PCIE_POSN                                 0x6
#define _SSP2CON3_PCIE_POSITION                             0x6
#define _SSP2CON3_PCIE_SIZE                                 0x1
#define _SSP2CON3_PCIE_LENGTH                               0x1
#define _SSP2CON3_PCIE_MASK                                 0x40
#define _SSP2CON3_ACKTIM_POSN                               0x7
#define _SSP2CON3_ACKTIM_POSITION                           0x7
#define _SSP2CON3_ACKTIM_SIZE                               0x1
#define _SSP2CON3_ACKTIM_LENGTH                             0x1
#define _SSP2CON3_ACKTIM_MASK                               0x80

// Register: PORTF
#define PORTF PORTF
extern volatile unsigned char           PORTF               __at(0x28C);
#ifndef _LIB_BUILD
asm("PORTF equ 028Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RF0                    :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
} PORTFbits_t;
extern volatile PORTFbits_t PORTFbits __at(0x28C);
// bitfield macros
#define _PORTF_RF0_POSN                                     0x0
#define _PORTF_RF0_POSITION                                 0x0
#define _PORTF_RF0_SIZE                                     0x1
#define _PORTF_RF0_LENGTH                                   0x1
#define _PORTF_RF0_MASK                                     0x1
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

// Register: PORTG
#define PORTG PORTG
extern volatile unsigned char           PORTG               __at(0x28D);
#ifndef _LIB_BUILD
asm("PORTG equ 028Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
        unsigned RG5                    :1;
    };
} PORTGbits_t;
extern volatile PORTGbits_t PORTGbits __at(0x28D);
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
#define _PORTG_RG5_POSN                                     0x5
#define _PORTG_RG5_POSITION                                 0x5
#define _PORTG_RG5_SIZE                                     0x1
#define _PORTG_RG5_LENGTH                                   0x1
#define _PORTG_RG5_MASK                                     0x20

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
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0x291);
// bitfield macros
#define _CCPR1L_CCPR1L_POSN                                 0x0
#define _CCPR1L_CCPR1L_POSITION                             0x0
#define _CCPR1L_CCPR1L_SIZE                                 0x8
#define _CCPR1L_CCPR1L_LENGTH                               0x8
#define _CCPR1L_CCPR1L_MASK                                 0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x292);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0292h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0x292);
// bitfield macros
#define _CCPR1H_CCPR1H_POSN                                 0x0
#define _CCPR1H_CCPR1H_POSITION                             0x0
#define _CCPR1H_CCPR1H_SIZE                                 0x8
#define _CCPR1H_CCPR1H_LENGTH                               0x8
#define _CCPR1H_CCPR1H_MASK                                 0xFF

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x293);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0293h");
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
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x293);
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
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0x298);
// bitfield macros
#define _CCPR2L_CCPR2L_POSN                                 0x0
#define _CCPR2L_CCPR2L_POSITION                             0x0
#define _CCPR2L_CCPR2L_SIZE                                 0x8
#define _CCPR2L_CCPR2L_LENGTH                               0x8
#define _CCPR2L_CCPR2L_MASK                                 0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0x299);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0299h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0x299);
// bitfield macros
#define _CCPR2H_CCPR2H_POSN                                 0x0
#define _CCPR2H_CCPR2H_POSITION                             0x0
#define _CCPR2H_CCPR2H_SIZE                                 0x8
#define _CCPR2H_CCPR2H_LENGTH                               0x8
#define _CCPR2H_CCPR2H_MASK                                 0xFF

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0x29A);
#ifndef _LIB_BUILD
asm("CCP2CON equ 029Ah");
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
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x29A);
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

// Register: CCPTMRS0
#define CCPTMRS0 CCPTMRS0
extern volatile unsigned char           CCPTMRS0            __at(0x29D);
#ifndef _LIB_BUILD
asm("CCPTMRS0 equ 029Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1TSEL                 :2;
        unsigned C2TSEL                 :2;
        unsigned C3TSEL                 :2;
        unsigned C4TSEL                 :2;
    };
    struct {
        unsigned C1TSEL0                :1;
        unsigned C1TSEL1                :1;
        unsigned C2TSEL0                :1;
        unsigned C2TSEL1                :1;
        unsigned C3TSEL0                :1;
        unsigned C3TSEL1                :1;
        unsigned C4TSEL0                :1;
        unsigned C4TSEL1                :1;
    };
} CCPTMRS0bits_t;
extern volatile CCPTMRS0bits_t CCPTMRS0bits __at(0x29D);
// bitfield macros
#define _CCPTMRS0_C1TSEL_POSN                               0x0
#define _CCPTMRS0_C1TSEL_POSITION                           0x0
#define _CCPTMRS0_C1TSEL_SIZE                               0x2
#define _CCPTMRS0_C1TSEL_LENGTH                             0x2
#define _CCPTMRS0_C1TSEL_MASK                               0x3
#define _CCPTMRS0_C2TSEL_POSN                               0x2
#define _CCPTMRS0_C2TSEL_POSITION                           0x2
#define _CCPTMRS0_C2TSEL_SIZE                               0x2
#define _CCPTMRS0_C2TSEL_LENGTH                             0x2
#define _CCPTMRS0_C2TSEL_MASK                               0xC
#define _CCPTMRS0_C3TSEL_POSN                               0x4
#define _CCPTMRS0_C3TSEL_POSITION                           0x4
#define _CCPTMRS0_C3TSEL_SIZE                               0x2
#define _CCPTMRS0_C3TSEL_LENGTH                             0x2
#define _CCPTMRS0_C3TSEL_MASK                               0x30
#define _CCPTMRS0_C4TSEL_POSN                               0x6
#define _CCPTMRS0_C4TSEL_POSITION                           0x6
#define _CCPTMRS0_C4TSEL_SIZE                               0x2
#define _CCPTMRS0_C4TSEL_LENGTH                             0x2
#define _CCPTMRS0_C4TSEL_MASK                               0xC0
#define _CCPTMRS0_C1TSEL0_POSN                              0x0
#define _CCPTMRS0_C1TSEL0_POSITION                          0x0
#define _CCPTMRS0_C1TSEL0_SIZE                              0x1
#define _CCPTMRS0_C1TSEL0_LENGTH                            0x1
#define _CCPTMRS0_C1TSEL0_MASK                              0x1
#define _CCPTMRS0_C1TSEL1_POSN                              0x1
#define _CCPTMRS0_C1TSEL1_POSITION                          0x1
#define _CCPTMRS0_C1TSEL1_SIZE                              0x1
#define _CCPTMRS0_C1TSEL1_LENGTH                            0x1
#define _CCPTMRS0_C1TSEL1_MASK                              0x2
#define _CCPTMRS0_C2TSEL0_POSN                              0x2
#define _CCPTMRS0_C2TSEL0_POSITION                          0x2
#define _CCPTMRS0_C2TSEL0_SIZE                              0x1
#define _CCPTMRS0_C2TSEL0_LENGTH                            0x1
#define _CCPTMRS0_C2TSEL0_MASK                              0x4
#define _CCPTMRS0_C2TSEL1_POSN                              0x3
#define _CCPTMRS0_C2TSEL1_POSITION                          0x3
#define _CCPTMRS0_C2TSEL1_SIZE                              0x1
#define _CCPTMRS0_C2TSEL1_LENGTH                            0x1
#define _CCPTMRS0_C2TSEL1_MASK                              0x8
#define _CCPTMRS0_C3TSEL0_POSN                              0x4
#define _CCPTMRS0_C3TSEL0_POSITION                          0x4
#define _CCPTMRS0_C3TSEL0_SIZE                              0x1
#define _CCPTMRS0_C3TSEL0_LENGTH                            0x1
#define _CCPTMRS0_C3TSEL0_MASK                              0x10
#define _CCPTMRS0_C3TSEL1_POSN                              0x5
#define _CCPTMRS0_C3TSEL1_POSITION                          0x5
#define _CCPTMRS0_C3TSEL1_SIZE                              0x1
#define _CCPTMRS0_C3TSEL1_LENGTH                            0x1
#define _CCPTMRS0_C3TSEL1_MASK                              0x20
#define _CCPTMRS0_C4TSEL0_POSN                              0x6
#define _CCPTMRS0_C4TSEL0_POSITION                          0x6
#define _CCPTMRS0_C4TSEL0_SIZE                              0x1
#define _CCPTMRS0_C4TSEL0_LENGTH                            0x1
#define _CCPTMRS0_C4TSEL0_MASK                              0x40
#define _CCPTMRS0_C4TSEL1_POSN                              0x7
#define _CCPTMRS0_C4TSEL1_POSITION                          0x7
#define _CCPTMRS0_C4TSEL1_SIZE                              0x1
#define _CCPTMRS0_C4TSEL1_LENGTH                            0x1
#define _CCPTMRS0_C4TSEL1_MASK                              0x80

// Register: CCPTMRS1
#define CCPTMRS1 CCPTMRS1
extern volatile unsigned char           CCPTMRS1            __at(0x29E);
#ifndef _LIB_BUILD
asm("CCPTMRS1 equ 029Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C5TSEL                 :2;
        unsigned C6TSEL                 :2;
        unsigned C7TSEL                 :2;
        unsigned C8TSEL                 :2;
    };
    struct {
        unsigned C5TSEL0                :1;
        unsigned C5TSEL1                :1;
        unsigned C6TSEL0                :1;
        unsigned C6TSEL1                :1;
        unsigned C7TSEL0                :1;
        unsigned C7TSEL1                :1;
        unsigned C8TSEL0                :1;
        unsigned C8TSEL1                :1;
    };
} CCPTMRS1bits_t;
extern volatile CCPTMRS1bits_t CCPTMRS1bits __at(0x29E);
// bitfield macros
#define _CCPTMRS1_C5TSEL_POSN                               0x0
#define _CCPTMRS1_C5TSEL_POSITION                           0x0
#define _CCPTMRS1_C5TSEL_SIZE                               0x2
#define _CCPTMRS1_C5TSEL_LENGTH                             0x2
#define _CCPTMRS1_C5TSEL_MASK                               0x3
#define _CCPTMRS1_C6TSEL_POSN                               0x2
#define _CCPTMRS1_C6TSEL_POSITION                           0x2
#define _CCPTMRS1_C6TSEL_SIZE                               0x2
#define _CCPTMRS1_C6TSEL_LENGTH                             0x2
#define _CCPTMRS1_C6TSEL_MASK                               0xC
#define _CCPTMRS1_C7TSEL_POSN                               0x4
#define _CCPTMRS1_C7TSEL_POSITION                           0x4
#define _CCPTMRS1_C7TSEL_SIZE                               0x2
#define _CCPTMRS1_C7TSEL_LENGTH                             0x2
#define _CCPTMRS1_C7TSEL_MASK                               0x30
#define _CCPTMRS1_C8TSEL_POSN                               0x6
#define _CCPTMRS1_C8TSEL_POSITION                           0x6
#define _CCPTMRS1_C8TSEL_SIZE                               0x2
#define _CCPTMRS1_C8TSEL_LENGTH                             0x2
#define _CCPTMRS1_C8TSEL_MASK                               0xC0
#define _CCPTMRS1_C5TSEL0_POSN                              0x0
#define _CCPTMRS1_C5TSEL0_POSITION                          0x0
#define _CCPTMRS1_C5TSEL0_SIZE                              0x1
#define _CCPTMRS1_C5TSEL0_LENGTH                            0x1
#define _CCPTMRS1_C5TSEL0_MASK                              0x1
#define _CCPTMRS1_C5TSEL1_POSN                              0x1
#define _CCPTMRS1_C5TSEL1_POSITION                          0x1
#define _CCPTMRS1_C5TSEL1_SIZE                              0x1
#define _CCPTMRS1_C5TSEL1_LENGTH                            0x1
#define _CCPTMRS1_C5TSEL1_MASK                              0x2
#define _CCPTMRS1_C6TSEL0_POSN                              0x2
#define _CCPTMRS1_C6TSEL0_POSITION                          0x2
#define _CCPTMRS1_C6TSEL0_SIZE                              0x1
#define _CCPTMRS1_C6TSEL0_LENGTH                            0x1
#define _CCPTMRS1_C6TSEL0_MASK                              0x4
#define _CCPTMRS1_C6TSEL1_POSN                              0x3
#define _CCPTMRS1_C6TSEL1_POSITION                          0x3
#define _CCPTMRS1_C6TSEL1_SIZE                              0x1
#define _CCPTMRS1_C6TSEL1_LENGTH                            0x1
#define _CCPTMRS1_C6TSEL1_MASK                              0x8
#define _CCPTMRS1_C7TSEL0_POSN                              0x4
#define _CCPTMRS1_C7TSEL0_POSITION                          0x4
#define _CCPTMRS1_C7TSEL0_SIZE                              0x1
#define _CCPTMRS1_C7TSEL0_LENGTH                            0x1
#define _CCPTMRS1_C7TSEL0_MASK                              0x10
#define _CCPTMRS1_C7TSEL1_POSN                              0x5
#define _CCPTMRS1_C7TSEL1_POSITION                          0x5
#define _CCPTMRS1_C7TSEL1_SIZE                              0x1
#define _CCPTMRS1_C7TSEL1_LENGTH                            0x1
#define _CCPTMRS1_C7TSEL1_MASK                              0x20
#define _CCPTMRS1_C8TSEL0_POSN                              0x6
#define _CCPTMRS1_C8TSEL0_POSITION                          0x6
#define _CCPTMRS1_C8TSEL0_SIZE                              0x1
#define _CCPTMRS1_C8TSEL0_LENGTH                            0x1
#define _CCPTMRS1_C8TSEL0_MASK                              0x40
#define _CCPTMRS1_C8TSEL1_POSN                              0x7
#define _CCPTMRS1_C8TSEL1_POSITION                          0x7
#define _CCPTMRS1_C8TSEL1_SIZE                              0x1
#define _CCPTMRS1_C8TSEL1_LENGTH                            0x1
#define _CCPTMRS1_C8TSEL1_MASK                              0x80

// Register: CCPTMRS2
#define CCPTMRS2 CCPTMRS2
extern volatile unsigned char           CCPTMRS2            __at(0x29F);
#ifndef _LIB_BUILD
asm("CCPTMRS2 equ 029Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C9TSEL                 :2;
        unsigned C10TSEL                :2;
    };
    struct {
        unsigned C9TSEL0                :1;
        unsigned C9TSEL1                :1;
        unsigned C10TSEL0               :1;
        unsigned C10TSEL1               :1;
    };
} CCPTMRS2bits_t;
extern volatile CCPTMRS2bits_t CCPTMRS2bits __at(0x29F);
// bitfield macros
#define _CCPTMRS2_C9TSEL_POSN                               0x0
#define _CCPTMRS2_C9TSEL_POSITION                           0x0
#define _CCPTMRS2_C9TSEL_SIZE                               0x2
#define _CCPTMRS2_C9TSEL_LENGTH                             0x2
#define _CCPTMRS2_C9TSEL_MASK                               0x3
#define _CCPTMRS2_C10TSEL_POSN                              0x2
#define _CCPTMRS2_C10TSEL_POSITION                          0x2
#define _CCPTMRS2_C10TSEL_SIZE                              0x2
#define _CCPTMRS2_C10TSEL_LENGTH                            0x2
#define _CCPTMRS2_C10TSEL_MASK                              0xC
#define _CCPTMRS2_C9TSEL0_POSN                              0x0
#define _CCPTMRS2_C9TSEL0_POSITION                          0x0
#define _CCPTMRS2_C9TSEL0_SIZE                              0x1
#define _CCPTMRS2_C9TSEL0_LENGTH                            0x1
#define _CCPTMRS2_C9TSEL0_MASK                              0x1
#define _CCPTMRS2_C9TSEL1_POSN                              0x1
#define _CCPTMRS2_C9TSEL1_POSITION                          0x1
#define _CCPTMRS2_C9TSEL1_SIZE                              0x1
#define _CCPTMRS2_C9TSEL1_LENGTH                            0x1
#define _CCPTMRS2_C9TSEL1_MASK                              0x2
#define _CCPTMRS2_C10TSEL0_POSN                             0x2
#define _CCPTMRS2_C10TSEL0_POSITION                         0x2
#define _CCPTMRS2_C10TSEL0_SIZE                             0x1
#define _CCPTMRS2_C10TSEL0_LENGTH                           0x1
#define _CCPTMRS2_C10TSEL0_MASK                             0x4
#define _CCPTMRS2_C10TSEL1_POSN                             0x3
#define _CCPTMRS2_C10TSEL1_POSITION                         0x3
#define _CCPTMRS2_C10TSEL1_SIZE                             0x1
#define _CCPTMRS2_C10TSEL1_LENGTH                           0x1
#define _CCPTMRS2_C10TSEL1_MASK                             0x8

// Register: TRISF
#define TRISF TRISF
extern volatile unsigned char           TRISF               __at(0x30C);
#ifndef _LIB_BUILD
asm("TRISF equ 030Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISF0                 :1;
        unsigned TRISF1                 :1;
        unsigned TRISF2                 :1;
        unsigned TRISF3                 :1;
        unsigned TRISF4                 :1;
        unsigned TRISF5                 :1;
        unsigned TRISF6                 :1;
        unsigned TRISF7                 :1;
    };
} TRISFbits_t;
extern volatile TRISFbits_t TRISFbits __at(0x30C);
// bitfield macros
#define _TRISF_TRISF0_POSN                                  0x0
#define _TRISF_TRISF0_POSITION                              0x0
#define _TRISF_TRISF0_SIZE                                  0x1
#define _TRISF_TRISF0_LENGTH                                0x1
#define _TRISF_TRISF0_MASK                                  0x1
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

// Register: TRISG
#define TRISG TRISG
extern volatile unsigned char           TRISG               __at(0x30D);
#ifndef _LIB_BUILD
asm("TRISG equ 030Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
    };
} TRISGbits_t;
extern volatile TRISGbits_t TRISGbits __at(0x30D);
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

// Register: CCPR3
#define CCPR3 CCPR3
extern volatile unsigned short          CCPR3               __at(0x311);
#ifndef _LIB_BUILD
asm("CCPR3 equ 0311h");
#endif

// Register: CCPR3L
#define CCPR3L CCPR3L
extern volatile unsigned char           CCPR3L              __at(0x311);
#ifndef _LIB_BUILD
asm("CCPR3L equ 0311h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR3L                 :8;
    };
} CCPR3Lbits_t;
extern volatile CCPR3Lbits_t CCPR3Lbits __at(0x311);
// bitfield macros
#define _CCPR3L_CCPR3L_POSN                                 0x0
#define _CCPR3L_CCPR3L_POSITION                             0x0
#define _CCPR3L_CCPR3L_SIZE                                 0x8
#define _CCPR3L_CCPR3L_LENGTH                               0x8
#define _CCPR3L_CCPR3L_MASK                                 0xFF

// Register: CCPR3H
#define CCPR3H CCPR3H
extern volatile unsigned char           CCPR3H              __at(0x312);
#ifndef _LIB_BUILD
asm("CCPR3H equ 0312h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR3H                 :8;
    };
} CCPR3Hbits_t;
extern volatile CCPR3Hbits_t CCPR3Hbits __at(0x312);
// bitfield macros
#define _CCPR3H_CCPR3H_POSN                                 0x0
#define _CCPR3H_CCPR3H_POSITION                             0x0
#define _CCPR3H_CCPR3H_SIZE                                 0x8
#define _CCPR3H_CCPR3H_LENGTH                               0x8
#define _CCPR3H_CCPR3H_MASK                                 0xFF

// Register: CCP3CON
#define CCP3CON CCP3CON
extern volatile unsigned char           CCP3CON             __at(0x313);
#ifndef _LIB_BUILD
asm("CCP3CON equ 0313h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP3M                  :4;
        unsigned DC3B                   :2;
    };
    struct {
        unsigned CCP3M0                 :1;
        unsigned CCP3M1                 :1;
        unsigned CCP3M2                 :1;
        unsigned CCP3M3                 :1;
        unsigned DC3B0                  :1;
        unsigned DC3B1                  :1;
    };
} CCP3CONbits_t;
extern volatile CCP3CONbits_t CCP3CONbits __at(0x313);
// bitfield macros
#define _CCP3CON_CCP3M_POSN                                 0x0
#define _CCP3CON_CCP3M_POSITION                             0x0
#define _CCP3CON_CCP3M_SIZE                                 0x4
#define _CCP3CON_CCP3M_LENGTH                               0x4
#define _CCP3CON_CCP3M_MASK                                 0xF
#define _CCP3CON_DC3B_POSN                                  0x4
#define _CCP3CON_DC3B_POSITION                              0x4
#define _CCP3CON_DC3B_SIZE                                  0x2
#define _CCP3CON_DC3B_LENGTH                                0x2
#define _CCP3CON_DC3B_MASK                                  0x30
#define _CCP3CON_CCP3M0_POSN                                0x0
#define _CCP3CON_CCP3M0_POSITION                            0x0
#define _CCP3CON_CCP3M0_SIZE                                0x1
#define _CCP3CON_CCP3M0_LENGTH                              0x1
#define _CCP3CON_CCP3M0_MASK                                0x1
#define _CCP3CON_CCP3M1_POSN                                0x1
#define _CCP3CON_CCP3M1_POSITION                            0x1
#define _CCP3CON_CCP3M1_SIZE                                0x1
#define _CCP3CON_CCP3M1_LENGTH                              0x1
#define _CCP3CON_CCP3M1_MASK                                0x2
#define _CCP3CON_CCP3M2_POSN                                0x2
#define _CCP3CON_CCP3M2_POSITION                            0x2
#define _CCP3CON_CCP3M2_SIZE                                0x1
#define _CCP3CON_CCP3M2_LENGTH                              0x1
#define _CCP3CON_CCP3M2_MASK                                0x4
#define _CCP3CON_CCP3M3_POSN                                0x3
#define _CCP3CON_CCP3M3_POSITION                            0x3
#define _CCP3CON_CCP3M3_SIZE                                0x1
#define _CCP3CON_CCP3M3_LENGTH                              0x1
#define _CCP3CON_CCP3M3_MASK                                0x8
#define _CCP3CON_DC3B0_POSN                                 0x4
#define _CCP3CON_DC3B0_POSITION                             0x4
#define _CCP3CON_DC3B0_SIZE                                 0x1
#define _CCP3CON_DC3B0_LENGTH                               0x1
#define _CCP3CON_DC3B0_MASK                                 0x10
#define _CCP3CON_DC3B1_POSN                                 0x5
#define _CCP3CON_DC3B1_POSITION                             0x5
#define _CCP3CON_DC3B1_SIZE                                 0x1
#define _CCP3CON_DC3B1_LENGTH                               0x1
#define _CCP3CON_DC3B1_MASK                                 0x20

// Register: CCPR4
#define CCPR4 CCPR4
extern volatile unsigned short          CCPR4               __at(0x318);
#ifndef _LIB_BUILD
asm("CCPR4 equ 0318h");
#endif

// Register: CCPR4L
#define CCPR4L CCPR4L
extern volatile unsigned char           CCPR4L              __at(0x318);
#ifndef _LIB_BUILD
asm("CCPR4L equ 0318h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR4L                 :8;
    };
} CCPR4Lbits_t;
extern volatile CCPR4Lbits_t CCPR4Lbits __at(0x318);
// bitfield macros
#define _CCPR4L_CCPR4L_POSN                                 0x0
#define _CCPR4L_CCPR4L_POSITION                             0x0
#define _CCPR4L_CCPR4L_SIZE                                 0x8
#define _CCPR4L_CCPR4L_LENGTH                               0x8
#define _CCPR4L_CCPR4L_MASK                                 0xFF

// Register: CCPR4H
#define CCPR4H CCPR4H
extern volatile unsigned char           CCPR4H              __at(0x319);
#ifndef _LIB_BUILD
asm("CCPR4H equ 0319h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR4H                 :8;
    };
} CCPR4Hbits_t;
extern volatile CCPR4Hbits_t CCPR4Hbits __at(0x319);
// bitfield macros
#define _CCPR4H_CCPR4H_POSN                                 0x0
#define _CCPR4H_CCPR4H_POSITION                             0x0
#define _CCPR4H_CCPR4H_SIZE                                 0x8
#define _CCPR4H_CCPR4H_LENGTH                               0x8
#define _CCPR4H_CCPR4H_MASK                                 0xFF

// Register: CCP4CON
#define CCP4CON CCP4CON
extern volatile unsigned char           CCP4CON             __at(0x31A);
#ifndef _LIB_BUILD
asm("CCP4CON equ 031Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP4M                  :4;
        unsigned DC4B                   :2;
    };
    struct {
        unsigned CCP4M0                 :1;
        unsigned CCP4M1                 :1;
        unsigned CCP4M2                 :1;
        unsigned CCP4M3                 :1;
        unsigned DC4B0                  :1;
        unsigned DC4B1                  :1;
    };
} CCP4CONbits_t;
extern volatile CCP4CONbits_t CCP4CONbits __at(0x31A);
// bitfield macros
#define _CCP4CON_CCP4M_POSN                                 0x0
#define _CCP4CON_CCP4M_POSITION                             0x0
#define _CCP4CON_CCP4M_SIZE                                 0x4
#define _CCP4CON_CCP4M_LENGTH                               0x4
#define _CCP4CON_CCP4M_MASK                                 0xF
#define _CCP4CON_DC4B_POSN                                  0x4
#define _CCP4CON_DC4B_POSITION                              0x4
#define _CCP4CON_DC4B_SIZE                                  0x2
#define _CCP4CON_DC4B_LENGTH                                0x2
#define _CCP4CON_DC4B_MASK                                  0x30
#define _CCP4CON_CCP4M0_POSN                                0x0
#define _CCP4CON_CCP4M0_POSITION                            0x0
#define _CCP4CON_CCP4M0_SIZE                                0x1
#define _CCP4CON_CCP4M0_LENGTH                              0x1
#define _CCP4CON_CCP4M0_MASK                                0x1
#define _CCP4CON_CCP4M1_POSN                                0x1
#define _CCP4CON_CCP4M1_POSITION                            0x1
#define _CCP4CON_CCP4M1_SIZE                                0x1
#define _CCP4CON_CCP4M1_LENGTH                              0x1
#define _CCP4CON_CCP4M1_MASK                                0x2
#define _CCP4CON_CCP4M2_POSN                                0x2
#define _CCP4CON_CCP4M2_POSITION                            0x2
#define _CCP4CON_CCP4M2_SIZE                                0x1
#define _CCP4CON_CCP4M2_LENGTH                              0x1
#define _CCP4CON_CCP4M2_MASK                                0x4
#define _CCP4CON_CCP4M3_POSN                                0x3
#define _CCP4CON_CCP4M3_POSITION                            0x3
#define _CCP4CON_CCP4M3_SIZE                                0x1
#define _CCP4CON_CCP4M3_LENGTH                              0x1
#define _CCP4CON_CCP4M3_MASK                                0x8
#define _CCP4CON_DC4B0_POSN                                 0x4
#define _CCP4CON_DC4B0_POSITION                             0x4
#define _CCP4CON_DC4B0_SIZE                                 0x1
#define _CCP4CON_DC4B0_LENGTH                               0x1
#define _CCP4CON_DC4B0_MASK                                 0x10
#define _CCP4CON_DC4B1_POSN                                 0x5
#define _CCP4CON_DC4B1_POSITION                             0x5
#define _CCP4CON_DC4B1_SIZE                                 0x1
#define _CCP4CON_DC4B1_LENGTH                               0x1
#define _CCP4CON_DC4B1_MASK                                 0x20

// Register: CCPR5
#define CCPR5 CCPR5
extern volatile unsigned short          CCPR5               __at(0x31C);
#ifndef _LIB_BUILD
asm("CCPR5 equ 031Ch");
#endif

// Register: CCPR5L
#define CCPR5L CCPR5L
extern volatile unsigned char           CCPR5L              __at(0x31C);
#ifndef _LIB_BUILD
asm("CCPR5L equ 031Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR5L                 :8;
    };
} CCPR5Lbits_t;
extern volatile CCPR5Lbits_t CCPR5Lbits __at(0x31C);
// bitfield macros
#define _CCPR5L_CCPR5L_POSN                                 0x0
#define _CCPR5L_CCPR5L_POSITION                             0x0
#define _CCPR5L_CCPR5L_SIZE                                 0x8
#define _CCPR5L_CCPR5L_LENGTH                               0x8
#define _CCPR5L_CCPR5L_MASK                                 0xFF

// Register: CCPR5H
#define CCPR5H CCPR5H
extern volatile unsigned char           CCPR5H              __at(0x31D);
#ifndef _LIB_BUILD
asm("CCPR5H equ 031Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR5H                 :8;
    };
} CCPR5Hbits_t;
extern volatile CCPR5Hbits_t CCPR5Hbits __at(0x31D);
// bitfield macros
#define _CCPR5H_CCPR5H_POSN                                 0x0
#define _CCPR5H_CCPR5H_POSITION                             0x0
#define _CCPR5H_CCPR5H_SIZE                                 0x8
#define _CCPR5H_CCPR5H_LENGTH                               0x8
#define _CCPR5H_CCPR5H_MASK                                 0xFF

// Register: CCP5CON
#define CCP5CON CCP5CON
extern volatile unsigned char           CCP5CON             __at(0x31E);
#ifndef _LIB_BUILD
asm("CCP5CON equ 031Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP5M                  :4;
        unsigned DC5B                   :2;
    };
    struct {
        unsigned CCP5M0                 :1;
        unsigned CCP5M1                 :1;
        unsigned CCP5M2                 :1;
        unsigned CCP5M3                 :1;
        unsigned DC5B0                  :1;
        unsigned DC5B1                  :1;
    };
} CCP5CONbits_t;
extern volatile CCP5CONbits_t CCP5CONbits __at(0x31E);
// bitfield macros
#define _CCP5CON_CCP5M_POSN                                 0x0
#define _CCP5CON_CCP5M_POSITION                             0x0
#define _CCP5CON_CCP5M_SIZE                                 0x4
#define _CCP5CON_CCP5M_LENGTH                               0x4
#define _CCP5CON_CCP5M_MASK                                 0xF
#define _CCP5CON_DC5B_POSN                                  0x4
#define _CCP5CON_DC5B_POSITION                              0x4
#define _CCP5CON_DC5B_SIZE                                  0x2
#define _CCP5CON_DC5B_LENGTH                                0x2
#define _CCP5CON_DC5B_MASK                                  0x30
#define _CCP5CON_CCP5M0_POSN                                0x0
#define _CCP5CON_CCP5M0_POSITION                            0x0
#define _CCP5CON_CCP5M0_SIZE                                0x1
#define _CCP5CON_CCP5M0_LENGTH                              0x1
#define _CCP5CON_CCP5M0_MASK                                0x1
#define _CCP5CON_CCP5M1_POSN                                0x1
#define _CCP5CON_CCP5M1_POSITION                            0x1
#define _CCP5CON_CCP5M1_SIZE                                0x1
#define _CCP5CON_CCP5M1_LENGTH                              0x1
#define _CCP5CON_CCP5M1_MASK                                0x2
#define _CCP5CON_CCP5M2_POSN                                0x2
#define _CCP5CON_CCP5M2_POSITION                            0x2
#define _CCP5CON_CCP5M2_SIZE                                0x1
#define _CCP5CON_CCP5M2_LENGTH                              0x1
#define _CCP5CON_CCP5M2_MASK                                0x4
#define _CCP5CON_CCP5M3_POSN                                0x3
#define _CCP5CON_CCP5M3_POSITION                            0x3
#define _CCP5CON_CCP5M3_SIZE                                0x1
#define _CCP5CON_CCP5M3_LENGTH                              0x1
#define _CCP5CON_CCP5M3_MASK                                0x8
#define _CCP5CON_DC5B0_POSN                                 0x4
#define _CCP5CON_DC5B0_POSITION                             0x4
#define _CCP5CON_DC5B0_SIZE                                 0x1
#define _CCP5CON_DC5B0_LENGTH                               0x1
#define _CCP5CON_DC5B0_MASK                                 0x10
#define _CCP5CON_DC5B1_POSN                                 0x5
#define _CCP5CON_DC5B1_POSITION                             0x5
#define _CCP5CON_DC5B1_SIZE                                 0x1
#define _CCP5CON_DC5B1_LENGTH                               0x1
#define _CCP5CON_DC5B1_MASK                                 0x20

// Register: LATF
#define LATF LATF
extern volatile unsigned char           LATF                __at(0x38C);
#ifndef _LIB_BUILD
asm("LATF equ 038Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATF0                  :1;
        unsigned LATF1                  :1;
        unsigned LATF2                  :1;
        unsigned LATF3                  :1;
        unsigned LATF4                  :1;
        unsigned LATF5                  :1;
        unsigned LATF6                  :1;
        unsigned LATF7                  :1;
    };
} LATFbits_t;
extern volatile LATFbits_t LATFbits __at(0x38C);
// bitfield macros
#define _LATF_LATF0_POSN                                    0x0
#define _LATF_LATF0_POSITION                                0x0
#define _LATF_LATF0_SIZE                                    0x1
#define _LATF_LATF0_LENGTH                                  0x1
#define _LATF_LATF0_MASK                                    0x1
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

// Register: LATG
#define LATG LATG
extern volatile unsigned char           LATG                __at(0x38D);
#ifndef _LIB_BUILD
asm("LATG equ 038Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATG0                  :1;
        unsigned LATG1                  :1;
        unsigned LATG2                  :1;
        unsigned LATG3                  :1;
        unsigned LATG4                  :1;
    };
} LATGbits_t;
extern volatile LATGbits_t LATGbits __at(0x38D);
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

// Register: IOCBP
#define IOCBP IOCBP
extern volatile unsigned char           IOCBP               __at(0x394);
#ifndef _LIB_BUILD
asm("IOCBP equ 0394h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCBP0                 :1;
        unsigned IOCBP1                 :1;
        unsigned IOCBP2                 :1;
        unsigned IOCBP3                 :1;
        unsigned IOCBP4                 :1;
        unsigned IOCBP5                 :1;
        unsigned IOCBP6                 :1;
        unsigned IOCBP7                 :1;
    };
    struct {
        unsigned IOCBP                  :8;
    };
} IOCBPbits_t;
extern volatile IOCBPbits_t IOCBPbits __at(0x394);
// bitfield macros
#define _IOCBP_IOCBP0_POSN                                  0x0
#define _IOCBP_IOCBP0_POSITION                              0x0
#define _IOCBP_IOCBP0_SIZE                                  0x1
#define _IOCBP_IOCBP0_LENGTH                                0x1
#define _IOCBP_IOCBP0_MASK                                  0x1
#define _IOCBP_IOCBP1_POSN                                  0x1
#define _IOCBP_IOCBP1_POSITION                              0x1
#define _IOCBP_IOCBP1_SIZE                                  0x1
#define _IOCBP_IOCBP1_LENGTH                                0x1
#define _IOCBP_IOCBP1_MASK                                  0x2
#define _IOCBP_IOCBP2_POSN                                  0x2
#define _IOCBP_IOCBP2_POSITION                              0x2
#define _IOCBP_IOCBP2_SIZE                                  0x1
#define _IOCBP_IOCBP2_LENGTH                                0x1
#define _IOCBP_IOCBP2_MASK                                  0x4
#define _IOCBP_IOCBP3_POSN                                  0x3
#define _IOCBP_IOCBP3_POSITION                              0x3
#define _IOCBP_IOCBP3_SIZE                                  0x1
#define _IOCBP_IOCBP3_LENGTH                                0x1
#define _IOCBP_IOCBP3_MASK                                  0x8
#define _IOCBP_IOCBP4_POSN                                  0x4
#define _IOCBP_IOCBP4_POSITION                              0x4
#define _IOCBP_IOCBP4_SIZE                                  0x1
#define _IOCBP_IOCBP4_LENGTH                                0x1
#define _IOCBP_IOCBP4_MASK                                  0x10
#define _IOCBP_IOCBP5_POSN                                  0x5
#define _IOCBP_IOCBP5_POSITION                              0x5
#define _IOCBP_IOCBP5_SIZE                                  0x1
#define _IOCBP_IOCBP5_LENGTH                                0x1
#define _IOCBP_IOCBP5_MASK                                  0x20
#define _IOCBP_IOCBP6_POSN                                  0x6
#define _IOCBP_IOCBP6_POSITION                              0x6
#define _IOCBP_IOCBP6_SIZE                                  0x1
#define _IOCBP_IOCBP6_LENGTH                                0x1
#define _IOCBP_IOCBP6_MASK                                  0x40
#define _IOCBP_IOCBP7_POSN                                  0x7
#define _IOCBP_IOCBP7_POSITION                              0x7
#define _IOCBP_IOCBP7_SIZE                                  0x1
#define _IOCBP_IOCBP7_LENGTH                                0x1
#define _IOCBP_IOCBP7_MASK                                  0x80
#define _IOCBP_IOCBP_POSN                                   0x0
#define _IOCBP_IOCBP_POSITION                               0x0
#define _IOCBP_IOCBP_SIZE                                   0x8
#define _IOCBP_IOCBP_LENGTH                                 0x8
#define _IOCBP_IOCBP_MASK                                   0xFF

// Register: IOCBN
#define IOCBN IOCBN
extern volatile unsigned char           IOCBN               __at(0x395);
#ifndef _LIB_BUILD
asm("IOCBN equ 0395h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCBN0                 :1;
        unsigned IOCBN1                 :1;
        unsigned IOCBN2                 :1;
        unsigned IOCBN3                 :1;
        unsigned IOCBN4                 :1;
        unsigned IOCBN5                 :1;
        unsigned IOCBN6                 :1;
        unsigned IOCBN7                 :1;
    };
    struct {
        unsigned IOCBN                  :8;
    };
} IOCBNbits_t;
extern volatile IOCBNbits_t IOCBNbits __at(0x395);
// bitfield macros
#define _IOCBN_IOCBN0_POSN                                  0x0
#define _IOCBN_IOCBN0_POSITION                              0x0
#define _IOCBN_IOCBN0_SIZE                                  0x1
#define _IOCBN_IOCBN0_LENGTH                                0x1
#define _IOCBN_IOCBN0_MASK                                  0x1
#define _IOCBN_IOCBN1_POSN                                  0x1
#define _IOCBN_IOCBN1_POSITION                              0x1
#define _IOCBN_IOCBN1_SIZE                                  0x1
#define _IOCBN_IOCBN1_LENGTH                                0x1
#define _IOCBN_IOCBN1_MASK                                  0x2
#define _IOCBN_IOCBN2_POSN                                  0x2
#define _IOCBN_IOCBN2_POSITION                              0x2
#define _IOCBN_IOCBN2_SIZE                                  0x1
#define _IOCBN_IOCBN2_LENGTH                                0x1
#define _IOCBN_IOCBN2_MASK                                  0x4
#define _IOCBN_IOCBN3_POSN                                  0x3
#define _IOCBN_IOCBN3_POSITION                              0x3
#define _IOCBN_IOCBN3_SIZE                                  0x1
#define _IOCBN_IOCBN3_LENGTH                                0x1
#define _IOCBN_IOCBN3_MASK                                  0x8
#define _IOCBN_IOCBN4_POSN                                  0x4
#define _IOCBN_IOCBN4_POSITION                              0x4
#define _IOCBN_IOCBN4_SIZE                                  0x1
#define _IOCBN_IOCBN4_LENGTH                                0x1
#define _IOCBN_IOCBN4_MASK                                  0x10
#define _IOCBN_IOCBN5_POSN                                  0x5
#define _IOCBN_IOCBN5_POSITION                              0x5
#define _IOCBN_IOCBN5_SIZE                                  0x1
#define _IOCBN_IOCBN5_LENGTH                                0x1
#define _IOCBN_IOCBN5_MASK                                  0x20
#define _IOCBN_IOCBN6_POSN                                  0x6
#define _IOCBN_IOCBN6_POSITION                              0x6
#define _IOCBN_IOCBN6_SIZE                                  0x1
#define _IOCBN_IOCBN6_LENGTH                                0x1
#define _IOCBN_IOCBN6_MASK                                  0x40
#define _IOCBN_IOCBN7_POSN                                  0x7
#define _IOCBN_IOCBN7_POSITION                              0x7
#define _IOCBN_IOCBN7_SIZE                                  0x1
#define _IOCBN_IOCBN7_LENGTH                                0x1
#define _IOCBN_IOCBN7_MASK                                  0x80
#define _IOCBN_IOCBN_POSN                                   0x0
#define _IOCBN_IOCBN_POSITION                               0x0
#define _IOCBN_IOCBN_SIZE                                   0x8
#define _IOCBN_IOCBN_LENGTH                                 0x8
#define _IOCBN_IOCBN_MASK                                   0xFF

// Register: IOCBF
#define IOCBF IOCBF
extern volatile unsigned char           IOCBF               __at(0x396);
#ifndef _LIB_BUILD
asm("IOCBF equ 0396h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCBF0                 :1;
        unsigned IOCBF1                 :1;
        unsigned IOCBF2                 :1;
        unsigned IOCBF3                 :1;
        unsigned IOCBF4                 :1;
        unsigned IOCBF5                 :1;
        unsigned IOCBF6                 :1;
        unsigned IOCBF7                 :1;
    };
    struct {
        unsigned IOCBF                  :8;
    };
} IOCBFbits_t;
extern volatile IOCBFbits_t IOCBFbits __at(0x396);
// bitfield macros
#define _IOCBF_IOCBF0_POSN                                  0x0
#define _IOCBF_IOCBF0_POSITION                              0x0
#define _IOCBF_IOCBF0_SIZE                                  0x1
#define _IOCBF_IOCBF0_LENGTH                                0x1
#define _IOCBF_IOCBF0_MASK                                  0x1
#define _IOCBF_IOCBF1_POSN                                  0x1
#define _IOCBF_IOCBF1_POSITION                              0x1
#define _IOCBF_IOCBF1_SIZE                                  0x1
#define _IOCBF_IOCBF1_LENGTH                                0x1
#define _IOCBF_IOCBF1_MASK                                  0x2
#define _IOCBF_IOCBF2_POSN                                  0x2
#define _IOCBF_IOCBF2_POSITION                              0x2
#define _IOCBF_IOCBF2_SIZE                                  0x1
#define _IOCBF_IOCBF2_LENGTH                                0x1
#define _IOCBF_IOCBF2_MASK                                  0x4
#define _IOCBF_IOCBF3_POSN                                  0x3
#define _IOCBF_IOCBF3_POSITION                              0x3
#define _IOCBF_IOCBF3_SIZE                                  0x1
#define _IOCBF_IOCBF3_LENGTH                                0x1
#define _IOCBF_IOCBF3_MASK                                  0x8
#define _IOCBF_IOCBF4_POSN                                  0x4
#define _IOCBF_IOCBF4_POSITION                              0x4
#define _IOCBF_IOCBF4_SIZE                                  0x1
#define _IOCBF_IOCBF4_LENGTH                                0x1
#define _IOCBF_IOCBF4_MASK                                  0x10
#define _IOCBF_IOCBF5_POSN                                  0x5
#define _IOCBF_IOCBF5_POSITION                              0x5
#define _IOCBF_IOCBF5_SIZE                                  0x1
#define _IOCBF_IOCBF5_LENGTH                                0x1
#define _IOCBF_IOCBF5_MASK                                  0x20
#define _IOCBF_IOCBF6_POSN                                  0x6
#define _IOCBF_IOCBF6_POSITION                              0x6
#define _IOCBF_IOCBF6_SIZE                                  0x1
#define _IOCBF_IOCBF6_LENGTH                                0x1
#define _IOCBF_IOCBF6_MASK                                  0x40
#define _IOCBF_IOCBF7_POSN                                  0x7
#define _IOCBF_IOCBF7_POSITION                              0x7
#define _IOCBF_IOCBF7_SIZE                                  0x1
#define _IOCBF_IOCBF7_LENGTH                                0x1
#define _IOCBF_IOCBF7_MASK                                  0x80
#define _IOCBF_IOCBF_POSN                                   0x0
#define _IOCBF_IOCBF_POSITION                               0x0
#define _IOCBF_IOCBF_SIZE                                   0x8
#define _IOCBF_IOCBF_LENGTH                                 0x8
#define _IOCBF_IOCBF_MASK                                   0xFF

// Register: ANSELF
#define ANSELF ANSELF
extern volatile unsigned char           ANSELF              __at(0x40C);
#ifndef _LIB_BUILD
asm("ANSELF equ 040Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSF0                  :1;
        unsigned ANSF1                  :1;
        unsigned ANSF2                  :1;
        unsigned ANSF3                  :1;
        unsigned ANSF4                  :1;
        unsigned ANSF5                  :1;
        unsigned ANSF6                  :1;
        unsigned ANSF7                  :1;
    };
} ANSELFbits_t;
extern volatile ANSELFbits_t ANSELFbits __at(0x40C);
// bitfield macros
#define _ANSELF_ANSF0_POSN                                  0x0
#define _ANSELF_ANSF0_POSITION                              0x0
#define _ANSELF_ANSF0_SIZE                                  0x1
#define _ANSELF_ANSF0_LENGTH                                0x1
#define _ANSELF_ANSF0_MASK                                  0x1
#define _ANSELF_ANSF1_POSN                                  0x1
#define _ANSELF_ANSF1_POSITION                              0x1
#define _ANSELF_ANSF1_SIZE                                  0x1
#define _ANSELF_ANSF1_LENGTH                                0x1
#define _ANSELF_ANSF1_MASK                                  0x2
#define _ANSELF_ANSF2_POSN                                  0x2
#define _ANSELF_ANSF2_POSITION                              0x2
#define _ANSELF_ANSF2_SIZE                                  0x1
#define _ANSELF_ANSF2_LENGTH                                0x1
#define _ANSELF_ANSF2_MASK                                  0x4
#define _ANSELF_ANSF3_POSN                                  0x3
#define _ANSELF_ANSF3_POSITION                              0x3
#define _ANSELF_ANSF3_SIZE                                  0x1
#define _ANSELF_ANSF3_LENGTH                                0x1
#define _ANSELF_ANSF3_MASK                                  0x8
#define _ANSELF_ANSF4_POSN                                  0x4
#define _ANSELF_ANSF4_POSITION                              0x4
#define _ANSELF_ANSF4_SIZE                                  0x1
#define _ANSELF_ANSF4_LENGTH                                0x1
#define _ANSELF_ANSF4_MASK                                  0x10
#define _ANSELF_ANSF5_POSN                                  0x5
#define _ANSELF_ANSF5_POSITION                              0x5
#define _ANSELF_ANSF5_SIZE                                  0x1
#define _ANSELF_ANSF5_LENGTH                                0x1
#define _ANSELF_ANSF5_MASK                                  0x20
#define _ANSELF_ANSF6_POSN                                  0x6
#define _ANSELF_ANSF6_POSITION                              0x6
#define _ANSELF_ANSF6_SIZE                                  0x1
#define _ANSELF_ANSF6_LENGTH                                0x1
#define _ANSELF_ANSF6_MASK                                  0x40
#define _ANSELF_ANSF7_POSN                                  0x7
#define _ANSELF_ANSF7_POSITION                              0x7
#define _ANSELF_ANSF7_SIZE                                  0x1
#define _ANSELF_ANSF7_LENGTH                                0x1
#define _ANSELF_ANSF7_MASK                                  0x80

// Register: ANSELG
#define ANSELG ANSELG
extern volatile unsigned char           ANSELG              __at(0x40D);
#ifndef _LIB_BUILD
asm("ANSELG equ 040Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ANSG1                  :1;
        unsigned ANSG2                  :1;
        unsigned ANSG3                  :1;
        unsigned ANSG4                  :1;
    };
} ANSELGbits_t;
extern volatile ANSELGbits_t ANSELGbits __at(0x40D);
// bitfield macros
#define _ANSELG_ANSG1_POSN                                  0x1
#define _ANSELG_ANSG1_POSITION                              0x1
#define _ANSELG_ANSG1_SIZE                                  0x1
#define _ANSELG_ANSG1_LENGTH                                0x1
#define _ANSELG_ANSG1_MASK                                  0x2
#define _ANSELG_ANSG2_POSN                                  0x2
#define _ANSELG_ANSG2_POSITION                              0x2
#define _ANSELG_ANSG2_SIZE                                  0x1
#define _ANSELG_ANSG2_LENGTH                                0x1
#define _ANSELG_ANSG2_MASK                                  0x4
#define _ANSELG_ANSG3_POSN                                  0x3
#define _ANSELG_ANSG3_POSITION                              0x3
#define _ANSELG_ANSG3_SIZE                                  0x1
#define _ANSELG_ANSG3_LENGTH                                0x1
#define _ANSELG_ANSG3_MASK                                  0x8
#define _ANSELG_ANSG4_POSN                                  0x4
#define _ANSELG_ANSG4_POSITION                              0x4
#define _ANSELG_ANSG4_SIZE                                  0x1
#define _ANSELG_ANSG4_LENGTH                                0x1
#define _ANSELG_ANSG4_MASK                                  0x10

// Register: TMR3
#define TMR3 TMR3
extern volatile unsigned short          TMR3                __at(0x411);
#ifndef _LIB_BUILD
asm("TMR3 equ 0411h");
#endif

// Register: TMR3L
#define TMR3L TMR3L
extern volatile unsigned char           TMR3L               __at(0x411);
#ifndef _LIB_BUILD
asm("TMR3L equ 0411h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3L                  :8;
    };
} TMR3Lbits_t;
extern volatile TMR3Lbits_t TMR3Lbits __at(0x411);
// bitfield macros
#define _TMR3L_TMR3L_POSN                                   0x0
#define _TMR3L_TMR3L_POSITION                               0x0
#define _TMR3L_TMR3L_SIZE                                   0x8
#define _TMR3L_TMR3L_LENGTH                                 0x8
#define _TMR3L_TMR3L_MASK                                   0xFF

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0x412);
#ifndef _LIB_BUILD
asm("TMR3H equ 0412h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3H                  :8;
    };
} TMR3Hbits_t;
extern volatile TMR3Hbits_t TMR3Hbits __at(0x412);
// bitfield macros
#define _TMR3H_TMR3H_POSN                                   0x0
#define _TMR3H_TMR3H_POSITION                               0x0
#define _TMR3H_TMR3H_SIZE                                   0x8
#define _TMR3H_TMR3H_LENGTH                                 0x8
#define _TMR3H_TMR3H_MASK                                   0xFF

// Register: T3CON
#define T3CON T3CON
extern volatile unsigned char           T3CON               __at(0x413);
#ifndef _LIB_BUILD
asm("T3CON equ 0413h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3ON                 :1;
        unsigned                        :1;
        unsigned nT3SYNC                :1;
        unsigned SOSCEN                 :1;
        unsigned T3CKPS                 :2;
        unsigned TMR3CS                 :2;
    };
    struct {
        unsigned                        :3;
        unsigned T3OSCEN                :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
        unsigned TMR3CS0                :1;
        unsigned TMR3CS1                :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits __at(0x413);
// bitfield macros
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_SOSCEN_POSN                                  0x3
#define _T3CON_SOSCEN_POSITION                              0x3
#define _T3CON_SOSCEN_SIZE                                  0x1
#define _T3CON_SOSCEN_LENGTH                                0x1
#define _T3CON_SOSCEN_MASK                                  0x8
#define _T3CON_T3CKPS_POSN                                  0x4
#define _T3CON_T3CKPS_POSITION                              0x4
#define _T3CON_T3CKPS_SIZE                                  0x2
#define _T3CON_T3CKPS_LENGTH                                0x2
#define _T3CON_T3CKPS_MASK                                  0x30
#define _T3CON_TMR3CS_POSN                                  0x6
#define _T3CON_TMR3CS_POSITION                              0x6
#define _T3CON_TMR3CS_SIZE                                  0x2
#define _T3CON_TMR3CS_LENGTH                                0x2
#define _T3CON_TMR3CS_MASK                                  0xC0
#define _T3CON_T3OSCEN_POSN                                 0x3
#define _T3CON_T3OSCEN_POSITION                             0x3
#define _T3CON_T3OSCEN_SIZE                                 0x1
#define _T3CON_T3OSCEN_LENGTH                               0x1
#define _T3CON_T3OSCEN_MASK                                 0x8
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
#define _T3CON_TMR3CS0_POSN                                 0x6
#define _T3CON_TMR3CS0_POSITION                             0x6
#define _T3CON_TMR3CS0_SIZE                                 0x1
#define _T3CON_TMR3CS0_LENGTH                               0x1
#define _T3CON_TMR3CS0_MASK                                 0x40
#define _T3CON_TMR3CS1_POSN                                 0x7
#define _T3CON_TMR3CS1_POSITION                             0x7
#define _T3CON_TMR3CS1_SIZE                                 0x1
#define _T3CON_TMR3CS1_LENGTH                               0x1
#define _T3CON_TMR3CS1_MASK                                 0x80

// Register: T3GCON
#define T3GCON T3GCON
extern volatile unsigned char           T3GCON              __at(0x414);
#ifndef _LIB_BUILD
asm("T3GCON equ 0414h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T3GSS                  :2;
        unsigned T3GVAL                 :1;
        unsigned T3GGO_nDONE            :1;
        unsigned T3GSPM                 :1;
        unsigned T3GTM                  :1;
        unsigned T3GPOL                 :1;
        unsigned TMR3GE                 :1;
    };
    struct {
        unsigned T3GSS0                 :1;
        unsigned T3GSS1                 :1;
    };
} T3GCONbits_t;
extern volatile T3GCONbits_t T3GCONbits __at(0x414);
// bitfield macros
#define _T3GCON_T3GSS_POSN                                  0x0
#define _T3GCON_T3GSS_POSITION                              0x0
#define _T3GCON_T3GSS_SIZE                                  0x2
#define _T3GCON_T3GSS_LENGTH                                0x2
#define _T3GCON_T3GSS_MASK                                  0x3
#define _T3GCON_T3GVAL_POSN                                 0x2
#define _T3GCON_T3GVAL_POSITION                             0x2
#define _T3GCON_T3GVAL_SIZE                                 0x1
#define _T3GCON_T3GVAL_LENGTH                               0x1
#define _T3GCON_T3GVAL_MASK                                 0x4
#define _T3GCON_T3GGO_nDONE_POSN                            0x3
#define _T3GCON_T3GGO_nDONE_POSITION                        0x3
#define _T3GCON_T3GGO_nDONE_SIZE                            0x1
#define _T3GCON_T3GGO_nDONE_LENGTH                          0x1
#define _T3GCON_T3GGO_nDONE_MASK                            0x8
#define _T3GCON_T3GSPM_POSN                                 0x4
#define _T3GCON_T3GSPM_POSITION                             0x4
#define _T3GCON_T3GSPM_SIZE                                 0x1
#define _T3GCON_T3GSPM_LENGTH                               0x1
#define _T3GCON_T3GSPM_MASK                                 0x10
#define _T3GCON_T3GTM_POSN                                  0x5
#define _T3GCON_T3GTM_POSITION                              0x5
#define _T3GCON_T3GTM_SIZE                                  0x1
#define _T3GCON_T3GTM_LENGTH                                0x1
#define _T3GCON_T3GTM_MASK                                  0x20
#define _T3GCON_T3GPOL_POSN                                 0x6
#define _T3GCON_T3GPOL_POSITION                             0x6
#define _T3GCON_T3GPOL_SIZE                                 0x1
#define _T3GCON_T3GPOL_LENGTH                               0x1
#define _T3GCON_T3GPOL_MASK                                 0x40
#define _T3GCON_TMR3GE_POSN                                 0x7
#define _T3GCON_TMR3GE_POSITION                             0x7
#define _T3GCON_TMR3GE_SIZE                                 0x1
#define _T3GCON_TMR3GE_LENGTH                               0x1
#define _T3GCON_TMR3GE_MASK                                 0x80
#define _T3GCON_T3GSS0_POSN                                 0x0
#define _T3GCON_T3GSS0_POSITION                             0x0
#define _T3GCON_T3GSS0_SIZE                                 0x1
#define _T3GCON_T3GSS0_LENGTH                               0x1
#define _T3GCON_T3GSS0_MASK                                 0x1
#define _T3GCON_T3GSS1_POSN                                 0x1
#define _T3GCON_T3GSS1_POSITION                             0x1
#define _T3GCON_T3GSS1_SIZE                                 0x1
#define _T3GCON_T3GSS1_LENGTH                               0x1
#define _T3GCON_T3GSS1_MASK                                 0x2

// Register: TMR4
#define TMR4 TMR4
extern volatile unsigned char           TMR4                __at(0x415);
#ifndef _LIB_BUILD
asm("TMR4 equ 0415h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR4                   :8;
    };
} TMR4bits_t;
extern volatile TMR4bits_t TMR4bits __at(0x415);
// bitfield macros
#define _TMR4_TMR4_POSN                                     0x0
#define _TMR4_TMR4_POSITION                                 0x0
#define _TMR4_TMR4_SIZE                                     0x8
#define _TMR4_TMR4_LENGTH                                   0x8
#define _TMR4_TMR4_MASK                                     0xFF

// Register: PR4
#define _PR4 _PR4  // Note: Changed by MikroE
extern volatile unsigned char           _PR4                 __at(0x416);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR4 equ 0416h");  // Note: Changed by MikroE
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PR4                    :8;  // Note: Changed by MikroE
    };
} PR4bits_t;
extern volatile PR4bits_t PR4bits __at(0x416);
// bitfield macros
#define _PR4_PR4_POSN                                       0x0
#define _PR4_PR4_POSITION                                   0x0
#define _PR4_PR4_SIZE                                       0x8
#define _PR4_PR4_LENGTH                                     0x8
#define _PR4_PR4_MASK                                       0xFF

// Register: T4CON
#define T4CON T4CON
extern volatile unsigned char           T4CON               __at(0x417);
#ifndef _LIB_BUILD
asm("T4CON equ 0417h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T4CKPS                 :2;
        unsigned TMR4ON                 :1;
        unsigned T4OUTPS                :4;
    };
    struct {
        unsigned T4CKPS0                :1;
        unsigned T4CKPS1                :1;
        unsigned                        :1;
        unsigned T4OUTPS0               :1;
        unsigned T4OUTPS1               :1;
        unsigned T4OUTPS2               :1;
        unsigned T4OUTPS3               :1;
    };
} T4CONbits_t;
extern volatile T4CONbits_t T4CONbits __at(0x417);
// bitfield macros
#define _T4CON_T4CKPS_POSN                                  0x0
#define _T4CON_T4CKPS_POSITION                              0x0
#define _T4CON_T4CKPS_SIZE                                  0x2
#define _T4CON_T4CKPS_LENGTH                                0x2
#define _T4CON_T4CKPS_MASK                                  0x3
#define _T4CON_TMR4ON_POSN                                  0x2
#define _T4CON_TMR4ON_POSITION                              0x2
#define _T4CON_TMR4ON_SIZE                                  0x1
#define _T4CON_TMR4ON_LENGTH                                0x1
#define _T4CON_TMR4ON_MASK                                  0x4
#define _T4CON_T4OUTPS_POSN                                 0x3
#define _T4CON_T4OUTPS_POSITION                             0x3
#define _T4CON_T4OUTPS_SIZE                                 0x4
#define _T4CON_T4OUTPS_LENGTH                               0x4
#define _T4CON_T4OUTPS_MASK                                 0x78
#define _T4CON_T4CKPS0_POSN                                 0x0
#define _T4CON_T4CKPS0_POSITION                             0x0
#define _T4CON_T4CKPS0_SIZE                                 0x1
#define _T4CON_T4CKPS0_LENGTH                               0x1
#define _T4CON_T4CKPS0_MASK                                 0x1
#define _T4CON_T4CKPS1_POSN                                 0x1
#define _T4CON_T4CKPS1_POSITION                             0x1
#define _T4CON_T4CKPS1_SIZE                                 0x1
#define _T4CON_T4CKPS1_LENGTH                               0x1
#define _T4CON_T4CKPS1_MASK                                 0x2
#define _T4CON_T4OUTPS0_POSN                                0x3
#define _T4CON_T4OUTPS0_POSITION                            0x3
#define _T4CON_T4OUTPS0_SIZE                                0x1
#define _T4CON_T4OUTPS0_LENGTH                              0x1
#define _T4CON_T4OUTPS0_MASK                                0x8
#define _T4CON_T4OUTPS1_POSN                                0x4
#define _T4CON_T4OUTPS1_POSITION                            0x4
#define _T4CON_T4OUTPS1_SIZE                                0x1
#define _T4CON_T4OUTPS1_LENGTH                              0x1
#define _T4CON_T4OUTPS1_MASK                                0x10
#define _T4CON_T4OUTPS2_POSN                                0x5
#define _T4CON_T4OUTPS2_POSITION                            0x5
#define _T4CON_T4OUTPS2_SIZE                                0x1
#define _T4CON_T4OUTPS2_LENGTH                              0x1
#define _T4CON_T4OUTPS2_MASK                                0x20
#define _T4CON_T4OUTPS3_POSN                                0x6
#define _T4CON_T4OUTPS3_POSITION                            0x6
#define _T4CON_T4OUTPS3_SIZE                                0x1
#define _T4CON_T4OUTPS3_LENGTH                              0x1
#define _T4CON_T4OUTPS3_MASK                                0x40

// Register: TMR5
#define TMR5 TMR5
extern volatile unsigned short          TMR5                __at(0x418);
#ifndef _LIB_BUILD
asm("TMR5 equ 0418h");
#endif

// Register: TMR5L
#define TMR5L TMR5L
extern volatile unsigned char           TMR5L               __at(0x418);
#ifndef _LIB_BUILD
asm("TMR5L equ 0418h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR5L                  :8;
    };
} TMR5Lbits_t;
extern volatile TMR5Lbits_t TMR5Lbits __at(0x418);
// bitfield macros
#define _TMR5L_TMR5L_POSN                                   0x0
#define _TMR5L_TMR5L_POSITION                               0x0
#define _TMR5L_TMR5L_SIZE                                   0x8
#define _TMR5L_TMR5L_LENGTH                                 0x8
#define _TMR5L_TMR5L_MASK                                   0xFF

// Register: TMR5H
#define TMR5H TMR5H
extern volatile unsigned char           TMR5H               __at(0x419);
#ifndef _LIB_BUILD
asm("TMR5H equ 0419h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR5H                  :8;
    };
} TMR5Hbits_t;
extern volatile TMR5Hbits_t TMR5Hbits __at(0x419);
// bitfield macros
#define _TMR5H_TMR5H_POSN                                   0x0
#define _TMR5H_TMR5H_POSITION                               0x0
#define _TMR5H_TMR5H_SIZE                                   0x8
#define _TMR5H_TMR5H_LENGTH                                 0x8
#define _TMR5H_TMR5H_MASK                                   0xFF

// Register: T5CON
#define T5CON T5CON
extern volatile unsigned char           T5CON               __at(0x41A);
#ifndef _LIB_BUILD
asm("T5CON equ 041Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR5ON                 :1;
        unsigned                        :1;
        unsigned nT5SYNC                :1;
        unsigned SOSCEN                 :1;
        unsigned T5CKPS                 :2;
        unsigned TMR5CS                 :2;
    };
    struct {
        unsigned                        :3;
        unsigned T5OSCEN                :1;
        unsigned T5CKPS0                :1;
        unsigned T5CKPS1                :1;
        unsigned TMR5CS0                :1;
        unsigned TMR5CS1                :1;
    };
} T5CONbits_t;
extern volatile T5CONbits_t T5CONbits __at(0x41A);
// bitfield macros
#define _T5CON_TMR5ON_POSN                                  0x0
#define _T5CON_TMR5ON_POSITION                              0x0
#define _T5CON_TMR5ON_SIZE                                  0x1
#define _T5CON_TMR5ON_LENGTH                                0x1
#define _T5CON_TMR5ON_MASK                                  0x1
#define _T5CON_nT5SYNC_POSN                                 0x2
#define _T5CON_nT5SYNC_POSITION                             0x2
#define _T5CON_nT5SYNC_SIZE                                 0x1
#define _T5CON_nT5SYNC_LENGTH                               0x1
#define _T5CON_nT5SYNC_MASK                                 0x4
#define _T5CON_SOSCEN_POSN                                  0x3
#define _T5CON_SOSCEN_POSITION                              0x3
#define _T5CON_SOSCEN_SIZE                                  0x1
#define _T5CON_SOSCEN_LENGTH                                0x1
#define _T5CON_SOSCEN_MASK                                  0x8
#define _T5CON_T5CKPS_POSN                                  0x4
#define _T5CON_T5CKPS_POSITION                              0x4
#define _T5CON_T5CKPS_SIZE                                  0x2
#define _T5CON_T5CKPS_LENGTH                                0x2
#define _T5CON_T5CKPS_MASK                                  0x30
#define _T5CON_TMR5CS_POSN                                  0x6
#define _T5CON_TMR5CS_POSITION                              0x6
#define _T5CON_TMR5CS_SIZE                                  0x2
#define _T5CON_TMR5CS_LENGTH                                0x2
#define _T5CON_TMR5CS_MASK                                  0xC0
#define _T5CON_T5OSCEN_POSN                                 0x3
#define _T5CON_T5OSCEN_POSITION                             0x3
#define _T5CON_T5OSCEN_SIZE                                 0x1
#define _T5CON_T5OSCEN_LENGTH                               0x1
#define _T5CON_T5OSCEN_MASK                                 0x8
#define _T5CON_T5CKPS0_POSN                                 0x4
#define _T5CON_T5CKPS0_POSITION                             0x4
#define _T5CON_T5CKPS0_SIZE                                 0x1
#define _T5CON_T5CKPS0_LENGTH                               0x1
#define _T5CON_T5CKPS0_MASK                                 0x10
#define _T5CON_T5CKPS1_POSN                                 0x5
#define _T5CON_T5CKPS1_POSITION                             0x5
#define _T5CON_T5CKPS1_SIZE                                 0x1
#define _T5CON_T5CKPS1_LENGTH                               0x1
#define _T5CON_T5CKPS1_MASK                                 0x20
#define _T5CON_TMR5CS0_POSN                                 0x6
#define _T5CON_TMR5CS0_POSITION                             0x6
#define _T5CON_TMR5CS0_SIZE                                 0x1
#define _T5CON_TMR5CS0_LENGTH                               0x1
#define _T5CON_TMR5CS0_MASK                                 0x40
#define _T5CON_TMR5CS1_POSN                                 0x7
#define _T5CON_TMR5CS1_POSITION                             0x7
#define _T5CON_TMR5CS1_SIZE                                 0x1
#define _T5CON_TMR5CS1_LENGTH                               0x1
#define _T5CON_TMR5CS1_MASK                                 0x80

// Register: T5GCON
#define T5GCON T5GCON
extern volatile unsigned char           T5GCON              __at(0x41B);
#ifndef _LIB_BUILD
asm("T5GCON equ 041Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T5GSS                  :2;
        unsigned T5GVAL                 :1;
        unsigned T5GGO_nDONE            :1;
        unsigned T5GSPM                 :1;
        unsigned T5GTM                  :1;
        unsigned T5GPOL                 :1;
        unsigned TMR5GE                 :1;
    };
    struct {
        unsigned T5GSS0                 :1;
        unsigned T5GSS1                 :1;
    };
} T5GCONbits_t;
extern volatile T5GCONbits_t T5GCONbits __at(0x41B);
// bitfield macros
#define _T5GCON_T5GSS_POSN                                  0x0
#define _T5GCON_T5GSS_POSITION                              0x0
#define _T5GCON_T5GSS_SIZE                                  0x2
#define _T5GCON_T5GSS_LENGTH                                0x2
#define _T5GCON_T5GSS_MASK                                  0x3
#define _T5GCON_T5GVAL_POSN                                 0x2
#define _T5GCON_T5GVAL_POSITION                             0x2
#define _T5GCON_T5GVAL_SIZE                                 0x1
#define _T5GCON_T5GVAL_LENGTH                               0x1
#define _T5GCON_T5GVAL_MASK                                 0x4
#define _T5GCON_T5GGO_nDONE_POSN                            0x3
#define _T5GCON_T5GGO_nDONE_POSITION                        0x3
#define _T5GCON_T5GGO_nDONE_SIZE                            0x1
#define _T5GCON_T5GGO_nDONE_LENGTH                          0x1
#define _T5GCON_T5GGO_nDONE_MASK                            0x8
#define _T5GCON_T5GSPM_POSN                                 0x4
#define _T5GCON_T5GSPM_POSITION                             0x4
#define _T5GCON_T5GSPM_SIZE                                 0x1
#define _T5GCON_T5GSPM_LENGTH                               0x1
#define _T5GCON_T5GSPM_MASK                                 0x10
#define _T5GCON_T5GTM_POSN                                  0x5
#define _T5GCON_T5GTM_POSITION                              0x5
#define _T5GCON_T5GTM_SIZE                                  0x1
#define _T5GCON_T5GTM_LENGTH                                0x1
#define _T5GCON_T5GTM_MASK                                  0x20
#define _T5GCON_T5GPOL_POSN                                 0x6
#define _T5GCON_T5GPOL_POSITION                             0x6
#define _T5GCON_T5GPOL_SIZE                                 0x1
#define _T5GCON_T5GPOL_LENGTH                               0x1
#define _T5GCON_T5GPOL_MASK                                 0x40
#define _T5GCON_TMR5GE_POSN                                 0x7
#define _T5GCON_TMR5GE_POSITION                             0x7
#define _T5GCON_TMR5GE_SIZE                                 0x1
#define _T5GCON_TMR5GE_LENGTH                               0x1
#define _T5GCON_TMR5GE_MASK                                 0x80
#define _T5GCON_T5GSS0_POSN                                 0x0
#define _T5GCON_T5GSS0_POSITION                             0x0
#define _T5GCON_T5GSS0_SIZE                                 0x1
#define _T5GCON_T5GSS0_LENGTH                               0x1
#define _T5GCON_T5GSS0_MASK                                 0x1
#define _T5GCON_T5GSS1_POSN                                 0x1
#define _T5GCON_T5GSS1_POSITION                             0x1
#define _T5GCON_T5GSS1_SIZE                                 0x1
#define _T5GCON_T5GSS1_LENGTH                               0x1
#define _T5GCON_T5GSS1_MASK                                 0x2

// Register: TMR6
#define TMR6 TMR6
extern volatile unsigned char           TMR6                __at(0x41C);
#ifndef _LIB_BUILD
asm("TMR6 equ 041Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR6                   :8;
    };
} TMR6bits_t;
extern volatile TMR6bits_t TMR6bits __at(0x41C);
// bitfield macros
#define _TMR6_TMR6_POSN                                     0x0
#define _TMR6_TMR6_POSITION                                 0x0
#define _TMR6_TMR6_SIZE                                     0x8
#define _TMR6_TMR6_LENGTH                                   0x8
#define _TMR6_TMR6_MASK                                     0xFF

// Register: PR6
#define _PR6 _PR6  // Note: Changed by MikroE
extern volatile unsigned char           _PR6                 __at(0x41D);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR6 equ 041Dh");  // Note: Changed by MikroE
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PR6                    :8;  // Note: Changed by MikroE
    };
} PR6bits_t;
extern volatile PR6bits_t PR6bits __at(0x41D);
// bitfield macros
#define _PR6_PR6_POSN                                       0x0
#define _PR6_PR6_POSITION                                   0x0
#define _PR6_PR6_SIZE                                       0x8
#define _PR6_PR6_LENGTH                                     0x8
#define _PR6_PR6_MASK                                       0xFF

// Register: T6CON
#define T6CON T6CON
extern volatile unsigned char           T6CON               __at(0x41E);
#ifndef _LIB_BUILD
asm("T6CON equ 041Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T6CKPS                 :2;
        unsigned TMR6ON                 :1;
        unsigned T6OUTPS                :4;
    };
    struct {
        unsigned T6CKPS0                :1;
        unsigned T6CKPS1                :1;
        unsigned                        :1;
        unsigned T6OUTPS0               :1;
        unsigned T6OUTPS1               :1;
        unsigned T6OUTPS2               :1;
        unsigned T6OUTPS3               :1;
    };
} T6CONbits_t;
extern volatile T6CONbits_t T6CONbits __at(0x41E);
// bitfield macros
#define _T6CON_T6CKPS_POSN                                  0x0
#define _T6CON_T6CKPS_POSITION                              0x0
#define _T6CON_T6CKPS_SIZE                                  0x2
#define _T6CON_T6CKPS_LENGTH                                0x2
#define _T6CON_T6CKPS_MASK                                  0x3
#define _T6CON_TMR6ON_POSN                                  0x2
#define _T6CON_TMR6ON_POSITION                              0x2
#define _T6CON_TMR6ON_SIZE                                  0x1
#define _T6CON_TMR6ON_LENGTH                                0x1
#define _T6CON_TMR6ON_MASK                                  0x4
#define _T6CON_T6OUTPS_POSN                                 0x3
#define _T6CON_T6OUTPS_POSITION                             0x3
#define _T6CON_T6OUTPS_SIZE                                 0x4
#define _T6CON_T6OUTPS_LENGTH                               0x4
#define _T6CON_T6OUTPS_MASK                                 0x78
#define _T6CON_T6CKPS0_POSN                                 0x0
#define _T6CON_T6CKPS0_POSITION                             0x0
#define _T6CON_T6CKPS0_SIZE                                 0x1
#define _T6CON_T6CKPS0_LENGTH                               0x1
#define _T6CON_T6CKPS0_MASK                                 0x1
#define _T6CON_T6CKPS1_POSN                                 0x1
#define _T6CON_T6CKPS1_POSITION                             0x1
#define _T6CON_T6CKPS1_SIZE                                 0x1
#define _T6CON_T6CKPS1_LENGTH                               0x1
#define _T6CON_T6CKPS1_MASK                                 0x2
#define _T6CON_T6OUTPS0_POSN                                0x3
#define _T6CON_T6OUTPS0_POSITION                            0x3
#define _T6CON_T6OUTPS0_SIZE                                0x1
#define _T6CON_T6OUTPS0_LENGTH                              0x1
#define _T6CON_T6OUTPS0_MASK                                0x8
#define _T6CON_T6OUTPS1_POSN                                0x4
#define _T6CON_T6OUTPS1_POSITION                            0x4
#define _T6CON_T6OUTPS1_SIZE                                0x1
#define _T6CON_T6OUTPS1_LENGTH                              0x1
#define _T6CON_T6OUTPS1_MASK                                0x10
#define _T6CON_T6OUTPS2_POSN                                0x5
#define _T6CON_T6OUTPS2_POSITION                            0x5
#define _T6CON_T6OUTPS2_SIZE                                0x1
#define _T6CON_T6OUTPS2_LENGTH                              0x1
#define _T6CON_T6OUTPS2_MASK                                0x20
#define _T6CON_T6OUTPS3_POSN                                0x6
#define _T6CON_T6OUTPS3_POSITION                            0x6
#define _T6CON_T6OUTPS3_SIZE                                0x1
#define _T6CON_T6OUTPS3_LENGTH                              0x1
#define _T6CON_T6OUTPS3_MASK                                0x40

// Register: WPUG
#define WPUG WPUG
extern volatile unsigned char           WPUG                __at(0x48D);
#ifndef _LIB_BUILD
asm("WPUG equ 048Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned WPUG5                  :1;
    };
} WPUGbits_t;
extern volatile WPUGbits_t WPUGbits __at(0x48D);
// bitfield macros
#define _WPUG_WPUG5_POSN                                    0x5
#define _WPUG_WPUG5_POSITION                                0x5
#define _WPUG_WPUG5_SIZE                                    0x1
#define _WPUG_WPUG5_LENGTH                                  0x1
#define _WPUG_WPUG5_MASK                                    0x20

// Register: RC2REG
#define RC2REG RC2REG
extern volatile unsigned char           RC2REG              __at(0x491);
#ifndef _LIB_BUILD
asm("RC2REG equ 0491h");
#endif
// aliases
extern volatile unsigned char           RCREG2              __at(0x491);
#ifndef _LIB_BUILD
asm("RCREG2 equ 0491h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC2REG                 :8;
    };
} RC2REGbits_t;
extern volatile RC2REGbits_t RC2REGbits __at(0x491);
// bitfield macros
#define _RC2REG_RC2REG_POSN                                 0x0
#define _RC2REG_RC2REG_POSITION                             0x0
#define _RC2REG_RC2REG_SIZE                                 0x8
#define _RC2REG_RC2REG_LENGTH                               0x8
#define _RC2REG_RC2REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned RC2REG                 :8;
    };
} RCREG2bits_t;
extern volatile RCREG2bits_t RCREG2bits __at(0x491);
// bitfield macros
#define _RCREG2_RC2REG_POSN                                 0x0
#define _RCREG2_RC2REG_POSITION                             0x0
#define _RCREG2_RC2REG_SIZE                                 0x8
#define _RCREG2_RC2REG_LENGTH                               0x8
#define _RCREG2_RC2REG_MASK                                 0xFF

// Register: TX2REG
#define TX2REG TX2REG
extern volatile unsigned char           TX2REG              __at(0x492);
#ifndef _LIB_BUILD
asm("TX2REG equ 0492h");
#endif
// aliases
extern volatile unsigned char           TXREG2              __at(0x492);
#ifndef _LIB_BUILD
asm("TXREG2 equ 0492h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX2REG                 :8;
    };
} TX2REGbits_t;
extern volatile TX2REGbits_t TX2REGbits __at(0x492);
// bitfield macros
#define _TX2REG_TX2REG_POSN                                 0x0
#define _TX2REG_TX2REG_POSITION                             0x0
#define _TX2REG_TX2REG_SIZE                                 0x8
#define _TX2REG_TX2REG_LENGTH                               0x8
#define _TX2REG_TX2REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX2REG                 :8;
    };
} TXREG2bits_t;
extern volatile TXREG2bits_t TXREG2bits __at(0x492);
// bitfield macros
#define _TXREG2_TX2REG_POSN                                 0x0
#define _TXREG2_TX2REG_POSITION                             0x0
#define _TXREG2_TX2REG_SIZE                                 0x8
#define _TXREG2_TX2REG_LENGTH                               0x8
#define _TXREG2_TX2REG_MASK                                 0xFF

// Register: SP2BRG
#define SP2BRG SP2BRG
extern volatile unsigned short          SP2BRG              __at(0x493);
#ifndef _LIB_BUILD
asm("SP2BRG equ 0493h");
#endif

// Register: SP2BRGL
#define SP2BRGL SP2BRGL
extern volatile unsigned char           SP2BRGL             __at(0x493);
#ifndef _LIB_BUILD
asm("SP2BRGL equ 0493h");
#endif
// aliases
extern volatile unsigned char           SPBRGL2             __at(0x493);
#ifndef _LIB_BUILD
asm("SPBRGL2 equ 0493h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP2BRGL                :8;
    };
} SP2BRGLbits_t;
extern volatile SP2BRGLbits_t SP2BRGLbits __at(0x493);
// bitfield macros
#define _SP2BRGL_SP2BRGL_POSN                               0x0
#define _SP2BRGL_SP2BRGL_POSITION                           0x0
#define _SP2BRGL_SP2BRGL_SIZE                               0x8
#define _SP2BRGL_SP2BRGL_LENGTH                             0x8
#define _SP2BRGL_SP2BRGL_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP2BRGL                :8;
    };
} SPBRGL2bits_t;
extern volatile SPBRGL2bits_t SPBRGL2bits __at(0x493);
// bitfield macros
#define _SPBRGL2_SP2BRGL_POSN                               0x0
#define _SPBRGL2_SP2BRGL_POSITION                           0x0
#define _SPBRGL2_SP2BRGL_SIZE                               0x8
#define _SPBRGL2_SP2BRGL_LENGTH                             0x8
#define _SPBRGL2_SP2BRGL_MASK                               0xFF

// Register: SP2BRGH
#define SP2BRGH SP2BRGH
extern volatile unsigned char           SP2BRGH             __at(0x494);
#ifndef _LIB_BUILD
asm("SP2BRGH equ 0494h");
#endif
// aliases
extern volatile unsigned char           SPBRGH2             __at(0x494);
#ifndef _LIB_BUILD
asm("SPBRGH2 equ 0494h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP2BRGH                :8;
    };
} SP2BRGHbits_t;
extern volatile SP2BRGHbits_t SP2BRGHbits __at(0x494);
// bitfield macros
#define _SP2BRGH_SP2BRGH_POSN                               0x0
#define _SP2BRGH_SP2BRGH_POSITION                           0x0
#define _SP2BRGH_SP2BRGH_SIZE                               0x8
#define _SP2BRGH_SP2BRGH_LENGTH                             0x8
#define _SP2BRGH_SP2BRGH_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP2BRGH                :8;
    };
} SPBRGH2bits_t;
extern volatile SPBRGH2bits_t SPBRGH2bits __at(0x494);
// bitfield macros
#define _SPBRGH2_SP2BRGH_POSN                               0x0
#define _SPBRGH2_SP2BRGH_POSITION                           0x0
#define _SPBRGH2_SP2BRGH_SIZE                               0x8
#define _SPBRGH2_SP2BRGH_LENGTH                             0x8
#define _SPBRGH2_SP2BRGH_MASK                               0xFF

// Register: RC2STA
#define RC2STA RC2STA
extern volatile unsigned char           RC2STA              __at(0x495);
#ifndef _LIB_BUILD
asm("RC2STA equ 0495h");
#endif
// aliases
extern volatile unsigned char           RCSTA2              __at(0x495);
#ifndef _LIB_BUILD
asm("RCSTA2 equ 0495h");
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
} RC2STAbits_t;
extern volatile RC2STAbits_t RC2STAbits __at(0x495);
// bitfield macros
#define _RC2STA_RX9D_POSN                                   0x0
#define _RC2STA_RX9D_POSITION                               0x0
#define _RC2STA_RX9D_SIZE                                   0x1
#define _RC2STA_RX9D_LENGTH                                 0x1
#define _RC2STA_RX9D_MASK                                   0x1
#define _RC2STA_OERR_POSN                                   0x1
#define _RC2STA_OERR_POSITION                               0x1
#define _RC2STA_OERR_SIZE                                   0x1
#define _RC2STA_OERR_LENGTH                                 0x1
#define _RC2STA_OERR_MASK                                   0x2
#define _RC2STA_FERR_POSN                                   0x2
#define _RC2STA_FERR_POSITION                               0x2
#define _RC2STA_FERR_SIZE                                   0x1
#define _RC2STA_FERR_LENGTH                                 0x1
#define _RC2STA_FERR_MASK                                   0x4
#define _RC2STA_ADDEN_POSN                                  0x3
#define _RC2STA_ADDEN_POSITION                              0x3
#define _RC2STA_ADDEN_SIZE                                  0x1
#define _RC2STA_ADDEN_LENGTH                                0x1
#define _RC2STA_ADDEN_MASK                                  0x8
#define _RC2STA_CREN_POSN                                   0x4
#define _RC2STA_CREN_POSITION                               0x4
#define _RC2STA_CREN_SIZE                                   0x1
#define _RC2STA_CREN_LENGTH                                 0x1
#define _RC2STA_CREN_MASK                                   0x10
#define _RC2STA_SREN_POSN                                   0x5
#define _RC2STA_SREN_POSITION                               0x5
#define _RC2STA_SREN_SIZE                                   0x1
#define _RC2STA_SREN_LENGTH                                 0x1
#define _RC2STA_SREN_MASK                                   0x20
#define _RC2STA_RX9_POSN                                    0x6
#define _RC2STA_RX9_POSITION                                0x6
#define _RC2STA_RX9_SIZE                                    0x1
#define _RC2STA_RX9_LENGTH                                  0x1
#define _RC2STA_RX9_MASK                                    0x40
#define _RC2STA_SPEN_POSN                                   0x7
#define _RC2STA_SPEN_POSITION                               0x7
#define _RC2STA_SPEN_SIZE                                   0x1
#define _RC2STA_SPEN_LENGTH                                 0x1
#define _RC2STA_SPEN_MASK                                   0x80
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
} RCSTA2bits_t;
extern volatile RCSTA2bits_t RCSTA2bits __at(0x495);
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

// Register: TX2STA
#define TX2STA TX2STA
extern volatile unsigned char           TX2STA              __at(0x496);
#ifndef _LIB_BUILD
asm("TX2STA equ 0496h");
#endif
// aliases
extern volatile unsigned char           TXSTA2              __at(0x496);
#ifndef _LIB_BUILD
asm("TXSTA2 equ 0496h");
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
} TX2STAbits_t;
extern volatile TX2STAbits_t TX2STAbits __at(0x496);
// bitfield macros
#define _TX2STA_TX9D_POSN                                   0x0
#define _TX2STA_TX9D_POSITION                               0x0
#define _TX2STA_TX9D_SIZE                                   0x1
#define _TX2STA_TX9D_LENGTH                                 0x1
#define _TX2STA_TX9D_MASK                                   0x1
#define _TX2STA_TRMT_POSN                                   0x1
#define _TX2STA_TRMT_POSITION                               0x1
#define _TX2STA_TRMT_SIZE                                   0x1
#define _TX2STA_TRMT_LENGTH                                 0x1
#define _TX2STA_TRMT_MASK                                   0x2
#define _TX2STA_BRGH_POSN                                   0x2
#define _TX2STA_BRGH_POSITION                               0x2
#define _TX2STA_BRGH_SIZE                                   0x1
#define _TX2STA_BRGH_LENGTH                                 0x1
#define _TX2STA_BRGH_MASK                                   0x4
#define _TX2STA_SENDB_POSN                                  0x3
#define _TX2STA_SENDB_POSITION                              0x3
#define _TX2STA_SENDB_SIZE                                  0x1
#define _TX2STA_SENDB_LENGTH                                0x1
#define _TX2STA_SENDB_MASK                                  0x8
#define _TX2STA_SYNC_POSN                                   0x4
#define _TX2STA_SYNC_POSITION                               0x4
#define _TX2STA_SYNC_SIZE                                   0x1
#define _TX2STA_SYNC_LENGTH                                 0x1
#define _TX2STA_SYNC_MASK                                   0x10
#define _TX2STA_TXEN_POSN                                   0x5
#define _TX2STA_TXEN_POSITION                               0x5
#define _TX2STA_TXEN_SIZE                                   0x1
#define _TX2STA_TXEN_LENGTH                                 0x1
#define _TX2STA_TXEN_MASK                                   0x20
#define _TX2STA_TX9_POSN                                    0x6
#define _TX2STA_TX9_POSITION                                0x6
#define _TX2STA_TX9_SIZE                                    0x1
#define _TX2STA_TX9_LENGTH                                  0x1
#define _TX2STA_TX9_MASK                                    0x40
#define _TX2STA_CSRC_POSN                                   0x7
#define _TX2STA_CSRC_POSITION                               0x7
#define _TX2STA_CSRC_SIZE                                   0x1
#define _TX2STA_CSRC_LENGTH                                 0x1
#define _TX2STA_CSRC_MASK                                   0x80
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
} TXSTA2bits_t;
extern volatile TXSTA2bits_t TXSTA2bits __at(0x496);
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
#define _TXSTA2_SENDB_POSN                                  0x3
#define _TXSTA2_SENDB_POSITION                              0x3
#define _TXSTA2_SENDB_SIZE                                  0x1
#define _TXSTA2_SENDB_LENGTH                                0x1
#define _TXSTA2_SENDB_MASK                                  0x8
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

// Register: BAUD2CON
#define BAUD2CON BAUD2CON
extern volatile unsigned char           BAUD2CON            __at(0x497);
#ifndef _LIB_BUILD
asm("BAUD2CON equ 0497h");
#endif
// aliases
extern volatile unsigned char           BAUDCON2            __at(0x497);
#ifndef _LIB_BUILD
asm("BAUDCON2 equ 0497h");
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
} BAUD2CONbits_t;
extern volatile BAUD2CONbits_t BAUD2CONbits __at(0x497);
// bitfield macros
#define _BAUD2CON_ABDEN_POSN                                0x0
#define _BAUD2CON_ABDEN_POSITION                            0x0
#define _BAUD2CON_ABDEN_SIZE                                0x1
#define _BAUD2CON_ABDEN_LENGTH                              0x1
#define _BAUD2CON_ABDEN_MASK                                0x1
#define _BAUD2CON_WUE_POSN                                  0x1
#define _BAUD2CON_WUE_POSITION                              0x1
#define _BAUD2CON_WUE_SIZE                                  0x1
#define _BAUD2CON_WUE_LENGTH                                0x1
#define _BAUD2CON_WUE_MASK                                  0x2
#define _BAUD2CON_BRG16_POSN                                0x3
#define _BAUD2CON_BRG16_POSITION                            0x3
#define _BAUD2CON_BRG16_SIZE                                0x1
#define _BAUD2CON_BRG16_LENGTH                              0x1
#define _BAUD2CON_BRG16_MASK                                0x8
#define _BAUD2CON_SCKP_POSN                                 0x4
#define _BAUD2CON_SCKP_POSITION                             0x4
#define _BAUD2CON_SCKP_SIZE                                 0x1
#define _BAUD2CON_SCKP_LENGTH                               0x1
#define _BAUD2CON_SCKP_MASK                                 0x10
#define _BAUD2CON_RCIDL_POSN                                0x6
#define _BAUD2CON_RCIDL_POSITION                            0x6
#define _BAUD2CON_RCIDL_SIZE                                0x1
#define _BAUD2CON_RCIDL_LENGTH                              0x1
#define _BAUD2CON_RCIDL_MASK                                0x40
#define _BAUD2CON_ABDOVF_POSN                               0x7
#define _BAUD2CON_ABDOVF_POSITION                           0x7
#define _BAUD2CON_ABDOVF_SIZE                               0x1
#define _BAUD2CON_ABDOVF_LENGTH                             0x1
#define _BAUD2CON_ABDOVF_MASK                               0x80
// alias bitfield definitions
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
} BAUDCON2bits_t;
extern volatile BAUDCON2bits_t BAUDCON2bits __at(0x497);
// bitfield macros
#define _BAUDCON2_ABDEN_POSN                                0x0
#define _BAUDCON2_ABDEN_POSITION                            0x0
#define _BAUDCON2_ABDEN_SIZE                                0x1
#define _BAUDCON2_ABDEN_LENGTH                              0x1
#define _BAUDCON2_ABDEN_MASK                                0x1
#define _BAUDCON2_WUE_POSN                                  0x1
#define _BAUDCON2_WUE_POSITION                              0x1
#define _BAUDCON2_WUE_SIZE                                  0x1
#define _BAUDCON2_WUE_LENGTH                                0x1
#define _BAUDCON2_WUE_MASK                                  0x2
#define _BAUDCON2_BRG16_POSN                                0x3
#define _BAUDCON2_BRG16_POSITION                            0x3
#define _BAUDCON2_BRG16_SIZE                                0x1
#define _BAUDCON2_BRG16_LENGTH                              0x1
#define _BAUDCON2_BRG16_MASK                                0x8
#define _BAUDCON2_SCKP_POSN                                 0x4
#define _BAUDCON2_SCKP_POSITION                             0x4
#define _BAUDCON2_SCKP_SIZE                                 0x1
#define _BAUDCON2_SCKP_LENGTH                               0x1
#define _BAUDCON2_SCKP_MASK                                 0x10
#define _BAUDCON2_RCIDL_POSN                                0x6
#define _BAUDCON2_RCIDL_POSITION                            0x6
#define _BAUDCON2_RCIDL_SIZE                                0x1
#define _BAUDCON2_RCIDL_LENGTH                              0x1
#define _BAUDCON2_RCIDL_MASK                                0x40
#define _BAUDCON2_ABDOVF_POSN                               0x7
#define _BAUDCON2_ABDOVF_POSITION                           0x7
#define _BAUDCON2_ABDOVF_SIZE                               0x1
#define _BAUDCON2_ABDOVF_LENGTH                             0x1
#define _BAUDCON2_ABDOVF_MASK                               0x80

// Register: TMR8
#define TMR8 TMR8
extern volatile unsigned char           TMR8                __at(0x595);
#ifndef _LIB_BUILD
asm("TMR8 equ 0595h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR8                   :8;
    };
} TMR8bits_t;
extern volatile TMR8bits_t TMR8bits __at(0x595);
// bitfield macros
#define _TMR8_TMR8_POSN                                     0x0
#define _TMR8_TMR8_POSITION                                 0x0
#define _TMR8_TMR8_SIZE                                     0x8
#define _TMR8_TMR8_LENGTH                                   0x8
#define _TMR8_TMR8_MASK                                     0xFF

// Register: PR8
#define _PR8 _PR8  // Note: Changed by MikroE
extern volatile unsigned char           _PR8                 __at(0x596);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR8 equ 0596h");  // Note: Changed by MikroE
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PR8                    :8;  // Note: Changed by MikroE
    };
} PR8bits_t;
extern volatile PR8bits_t PR8bits __at(0x596);
// bitfield macros
#define _PR8_PR8_POSN                                       0x0
#define _PR8_PR8_POSITION                                   0x0
#define _PR8_PR8_SIZE                                       0x8
#define _PR8_PR8_LENGTH                                     0x8
#define _PR8_PR8_MASK                                       0xFF

// Register: T8CON
#define T8CON T8CON
extern volatile unsigned char           T8CON               __at(0x597);
#ifndef _LIB_BUILD
asm("T8CON equ 0597h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T8CKPS                 :2;
        unsigned TMR8ON                 :1;
        unsigned T8OUTPS                :4;
    };
    struct {
        unsigned T8CKPS0                :1;
        unsigned T8CKPS1                :1;
        unsigned                        :1;
        unsigned T8OUTPS0               :1;
        unsigned T8OUTPS1               :1;
        unsigned T8OUTPS2               :1;
        unsigned T8OUTPS3               :1;
    };
} T8CONbits_t;
extern volatile T8CONbits_t T8CONbits __at(0x597);
// bitfield macros
#define _T8CON_T8CKPS_POSN                                  0x0
#define _T8CON_T8CKPS_POSITION                              0x0
#define _T8CON_T8CKPS_SIZE                                  0x2
#define _T8CON_T8CKPS_LENGTH                                0x2
#define _T8CON_T8CKPS_MASK                                  0x3
#define _T8CON_TMR8ON_POSN                                  0x2
#define _T8CON_TMR8ON_POSITION                              0x2
#define _T8CON_TMR8ON_SIZE                                  0x1
#define _T8CON_TMR8ON_LENGTH                                0x1
#define _T8CON_TMR8ON_MASK                                  0x4
#define _T8CON_T8OUTPS_POSN                                 0x3
#define _T8CON_T8OUTPS_POSITION                             0x3
#define _T8CON_T8OUTPS_SIZE                                 0x4
#define _T8CON_T8OUTPS_LENGTH                               0x4
#define _T8CON_T8OUTPS_MASK                                 0x78
#define _T8CON_T8CKPS0_POSN                                 0x0
#define _T8CON_T8CKPS0_POSITION                             0x0
#define _T8CON_T8CKPS0_SIZE                                 0x1
#define _T8CON_T8CKPS0_LENGTH                               0x1
#define _T8CON_T8CKPS0_MASK                                 0x1
#define _T8CON_T8CKPS1_POSN                                 0x1
#define _T8CON_T8CKPS1_POSITION                             0x1
#define _T8CON_T8CKPS1_SIZE                                 0x1
#define _T8CON_T8CKPS1_LENGTH                               0x1
#define _T8CON_T8CKPS1_MASK                                 0x2
#define _T8CON_T8OUTPS0_POSN                                0x3
#define _T8CON_T8OUTPS0_POSITION                            0x3
#define _T8CON_T8OUTPS0_SIZE                                0x1
#define _T8CON_T8OUTPS0_LENGTH                              0x1
#define _T8CON_T8OUTPS0_MASK                                0x8
#define _T8CON_T8OUTPS1_POSN                                0x4
#define _T8CON_T8OUTPS1_POSITION                            0x4
#define _T8CON_T8OUTPS1_SIZE                                0x1
#define _T8CON_T8OUTPS1_LENGTH                              0x1
#define _T8CON_T8OUTPS1_MASK                                0x10
#define _T8CON_T8OUTPS2_POSN                                0x5
#define _T8CON_T8OUTPS2_POSITION                            0x5
#define _T8CON_T8OUTPS2_SIZE                                0x1
#define _T8CON_T8OUTPS2_LENGTH                              0x1
#define _T8CON_T8OUTPS2_MASK                                0x20
#define _T8CON_T8OUTPS3_POSN                                0x6
#define _T8CON_T8OUTPS3_POSITION                            0x6
#define _T8CON_T8OUTPS3_SIZE                                0x1
#define _T8CON_T8OUTPS3_LENGTH                              0x1
#define _T8CON_T8OUTPS3_MASK                                0x40

// Register: TMR10
#define TMR10 TMR10
extern volatile unsigned char           TMR10               __at(0x59C);
#ifndef _LIB_BUILD
asm("TMR10 equ 059Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR10                  :8;
    };
} TMR10bits_t;
extern volatile TMR10bits_t TMR10bits __at(0x59C);
// bitfield macros
#define _TMR10_TMR10_POSN                                   0x0
#define _TMR10_TMR10_POSITION                               0x0
#define _TMR10_TMR10_SIZE                                   0x8
#define _TMR10_TMR10_LENGTH                                 0x8
#define _TMR10_TMR10_MASK                                   0xFF

// Register: PR10
#define PR10 PR10
extern volatile unsigned char           PR10                __at(0x59D);
#ifndef _LIB_BUILD
asm("PR10 equ 059Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR10                   :8;
    };
} PR10bits_t;
extern volatile PR10bits_t PR10bits __at(0x59D);
// bitfield macros
#define _PR10_PR10_POSN                                     0x0
#define _PR10_PR10_POSITION                                 0x0
#define _PR10_PR10_SIZE                                     0x8
#define _PR10_PR10_LENGTH                                   0x8
#define _PR10_PR10_MASK                                     0xFF

// Register: T10CON
#define T10CON T10CON
extern volatile unsigned char           T10CON              __at(0x59E);
#ifndef _LIB_BUILD
asm("T10CON equ 059Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T10CKPS                :2;
        unsigned TMR10ON                :1;
        unsigned T10OUTPS               :4;
    };
    struct {
        unsigned T10CKPS0               :1;
        unsigned T10CKPS1               :1;
        unsigned                        :1;
        unsigned T10OUTPS0              :1;
        unsigned T10OUTPS1              :1;
        unsigned T10OUTPS2              :1;
        unsigned T10OUTPS3              :1;
    };
} T10CONbits_t;
extern volatile T10CONbits_t T10CONbits __at(0x59E);
// bitfield macros
#define _T10CON_T10CKPS_POSN                                0x0
#define _T10CON_T10CKPS_POSITION                            0x0
#define _T10CON_T10CKPS_SIZE                                0x2
#define _T10CON_T10CKPS_LENGTH                              0x2
#define _T10CON_T10CKPS_MASK                                0x3
#define _T10CON_TMR10ON_POSN                                0x2
#define _T10CON_TMR10ON_POSITION                            0x2
#define _T10CON_TMR10ON_SIZE                                0x1
#define _T10CON_TMR10ON_LENGTH                              0x1
#define _T10CON_TMR10ON_MASK                                0x4
#define _T10CON_T10OUTPS_POSN                               0x3
#define _T10CON_T10OUTPS_POSITION                           0x3
#define _T10CON_T10OUTPS_SIZE                               0x4
#define _T10CON_T10OUTPS_LENGTH                             0x4
#define _T10CON_T10OUTPS_MASK                               0x78
#define _T10CON_T10CKPS0_POSN                               0x0
#define _T10CON_T10CKPS0_POSITION                           0x0
#define _T10CON_T10CKPS0_SIZE                               0x1
#define _T10CON_T10CKPS0_LENGTH                             0x1
#define _T10CON_T10CKPS0_MASK                               0x1
#define _T10CON_T10CKPS1_POSN                               0x1
#define _T10CON_T10CKPS1_POSITION                           0x1
#define _T10CON_T10CKPS1_SIZE                               0x1
#define _T10CON_T10CKPS1_LENGTH                             0x1
#define _T10CON_T10CKPS1_MASK                               0x2
#define _T10CON_T10OUTPS0_POSN                              0x3
#define _T10CON_T10OUTPS0_POSITION                          0x3
#define _T10CON_T10OUTPS0_SIZE                              0x1
#define _T10CON_T10OUTPS0_LENGTH                            0x1
#define _T10CON_T10OUTPS0_MASK                              0x8
#define _T10CON_T10OUTPS1_POSN                              0x4
#define _T10CON_T10OUTPS1_POSITION                          0x4
#define _T10CON_T10OUTPS1_SIZE                              0x1
#define _T10CON_T10OUTPS1_LENGTH                            0x1
#define _T10CON_T10OUTPS1_MASK                              0x10
#define _T10CON_T10OUTPS2_POSN                              0x5
#define _T10CON_T10OUTPS2_POSITION                          0x5
#define _T10CON_T10OUTPS2_SIZE                              0x1
#define _T10CON_T10OUTPS2_LENGTH                            0x1
#define _T10CON_T10OUTPS2_MASK                              0x20
#define _T10CON_T10OUTPS3_POSN                              0x6
#define _T10CON_T10OUTPS3_POSITION                          0x6
#define _T10CON_T10OUTPS3_SIZE                              0x1
#define _T10CON_T10OUTPS3_LENGTH                            0x1
#define _T10CON_T10OUTPS3_MASK                              0x40

// Register: CCPR6
#define CCPR6 CCPR6
extern volatile unsigned short          CCPR6               __at(0x611);
#ifndef _LIB_BUILD
asm("CCPR6 equ 0611h");
#endif

// Register: CCPR6L
#define CCPR6L CCPR6L
extern volatile unsigned char           CCPR6L              __at(0x611);
#ifndef _LIB_BUILD
asm("CCPR6L equ 0611h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR6L                 :8;
    };
} CCPR6Lbits_t;
extern volatile CCPR6Lbits_t CCPR6Lbits __at(0x611);
// bitfield macros
#define _CCPR6L_CCPR6L_POSN                                 0x0
#define _CCPR6L_CCPR6L_POSITION                             0x0
#define _CCPR6L_CCPR6L_SIZE                                 0x8
#define _CCPR6L_CCPR6L_LENGTH                               0x8
#define _CCPR6L_CCPR6L_MASK                                 0xFF

// Register: CCPR6H
#define CCPR6H CCPR6H
extern volatile unsigned char           CCPR6H              __at(0x612);
#ifndef _LIB_BUILD
asm("CCPR6H equ 0612h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR6H                 :8;
    };
} CCPR6Hbits_t;
extern volatile CCPR6Hbits_t CCPR6Hbits __at(0x612);
// bitfield macros
#define _CCPR6H_CCPR6H_POSN                                 0x0
#define _CCPR6H_CCPR6H_POSITION                             0x0
#define _CCPR6H_CCPR6H_SIZE                                 0x8
#define _CCPR6H_CCPR6H_LENGTH                               0x8
#define _CCPR6H_CCPR6H_MASK                                 0xFF

// Register: CCP6CON
#define CCP6CON CCP6CON
extern volatile unsigned char           CCP6CON             __at(0x613);
#ifndef _LIB_BUILD
asm("CCP6CON equ 0613h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP6M                  :4;
        unsigned DC6B                   :2;
    };
    struct {
        unsigned CCP6M0                 :1;
        unsigned CCP6M1                 :1;
        unsigned CCP6M2                 :1;
        unsigned CCP6M3                 :1;
        unsigned DC6B0                  :1;
        unsigned DC6B1                  :1;
    };
} CCP6CONbits_t;
extern volatile CCP6CONbits_t CCP6CONbits __at(0x613);
// bitfield macros
#define _CCP6CON_CCP6M_POSN                                 0x0
#define _CCP6CON_CCP6M_POSITION                             0x0
#define _CCP6CON_CCP6M_SIZE                                 0x4
#define _CCP6CON_CCP6M_LENGTH                               0x4
#define _CCP6CON_CCP6M_MASK                                 0xF
#define _CCP6CON_DC6B_POSN                                  0x4
#define _CCP6CON_DC6B_POSITION                              0x4
#define _CCP6CON_DC6B_SIZE                                  0x2
#define _CCP6CON_DC6B_LENGTH                                0x2
#define _CCP6CON_DC6B_MASK                                  0x30
#define _CCP6CON_CCP6M0_POSN                                0x0
#define _CCP6CON_CCP6M0_POSITION                            0x0
#define _CCP6CON_CCP6M0_SIZE                                0x1
#define _CCP6CON_CCP6M0_LENGTH                              0x1
#define _CCP6CON_CCP6M0_MASK                                0x1
#define _CCP6CON_CCP6M1_POSN                                0x1
#define _CCP6CON_CCP6M1_POSITION                            0x1
#define _CCP6CON_CCP6M1_SIZE                                0x1
#define _CCP6CON_CCP6M1_LENGTH                              0x1
#define _CCP6CON_CCP6M1_MASK                                0x2
#define _CCP6CON_CCP6M2_POSN                                0x2
#define _CCP6CON_CCP6M2_POSITION                            0x2
#define _CCP6CON_CCP6M2_SIZE                                0x1
#define _CCP6CON_CCP6M2_LENGTH                              0x1
#define _CCP6CON_CCP6M2_MASK                                0x4
#define _CCP6CON_CCP6M3_POSN                                0x3
#define _CCP6CON_CCP6M3_POSITION                            0x3
#define _CCP6CON_CCP6M3_SIZE                                0x1
#define _CCP6CON_CCP6M3_LENGTH                              0x1
#define _CCP6CON_CCP6M3_MASK                                0x8
#define _CCP6CON_DC6B0_POSN                                 0x4
#define _CCP6CON_DC6B0_POSITION                             0x4
#define _CCP6CON_DC6B0_SIZE                                 0x1
#define _CCP6CON_DC6B0_LENGTH                               0x1
#define _CCP6CON_DC6B0_MASK                                 0x10
#define _CCP6CON_DC6B1_POSN                                 0x5
#define _CCP6CON_DC6B1_POSITION                             0x5
#define _CCP6CON_DC6B1_SIZE                                 0x1
#define _CCP6CON_DC6B1_LENGTH                               0x1
#define _CCP6CON_DC6B1_MASK                                 0x20

// Register: CCPR7
#define CCPR7 CCPR7
extern volatile unsigned short          CCPR7               __at(0x614);
#ifndef _LIB_BUILD
asm("CCPR7 equ 0614h");
#endif

// Register: CCPR7L
#define CCPR7L CCPR7L
extern volatile unsigned char           CCPR7L              __at(0x614);
#ifndef _LIB_BUILD
asm("CCPR7L equ 0614h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR7L                 :8;
    };
} CCPR7Lbits_t;
extern volatile CCPR7Lbits_t CCPR7Lbits __at(0x614);
// bitfield macros
#define _CCPR7L_CCPR7L_POSN                                 0x0
#define _CCPR7L_CCPR7L_POSITION                             0x0
#define _CCPR7L_CCPR7L_SIZE                                 0x8
#define _CCPR7L_CCPR7L_LENGTH                               0x8
#define _CCPR7L_CCPR7L_MASK                                 0xFF

// Register: CCPR7H
#define CCPR7H CCPR7H
extern volatile unsigned char           CCPR7H              __at(0x615);
#ifndef _LIB_BUILD
asm("CCPR7H equ 0615h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR7H                 :8;
    };
} CCPR7Hbits_t;
extern volatile CCPR7Hbits_t CCPR7Hbits __at(0x615);
// bitfield macros
#define _CCPR7H_CCPR7H_POSN                                 0x0
#define _CCPR7H_CCPR7H_POSITION                             0x0
#define _CCPR7H_CCPR7H_SIZE                                 0x8
#define _CCPR7H_CCPR7H_LENGTH                               0x8
#define _CCPR7H_CCPR7H_MASK                                 0xFF

// Register: CCP7CON
#define CCP7CON CCP7CON
extern volatile unsigned char           CCP7CON             __at(0x616);
#ifndef _LIB_BUILD
asm("CCP7CON equ 0616h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP7M                  :4;
        unsigned DC7B                   :2;
    };
    struct {
        unsigned CCP7M0                 :1;
        unsigned CCP7M1                 :1;
        unsigned CCP7M2                 :1;
        unsigned CCP7M3                 :1;
        unsigned DC7B0                  :1;
        unsigned DC7B1                  :1;
    };
} CCP7CONbits_t;
extern volatile CCP7CONbits_t CCP7CONbits __at(0x616);
// bitfield macros
#define _CCP7CON_CCP7M_POSN                                 0x0
#define _CCP7CON_CCP7M_POSITION                             0x0
#define _CCP7CON_CCP7M_SIZE                                 0x4
#define _CCP7CON_CCP7M_LENGTH                               0x4
#define _CCP7CON_CCP7M_MASK                                 0xF
#define _CCP7CON_DC7B_POSN                                  0x4
#define _CCP7CON_DC7B_POSITION                              0x4
#define _CCP7CON_DC7B_SIZE                                  0x2
#define _CCP7CON_DC7B_LENGTH                                0x2
#define _CCP7CON_DC7B_MASK                                  0x30
#define _CCP7CON_CCP7M0_POSN                                0x0
#define _CCP7CON_CCP7M0_POSITION                            0x0
#define _CCP7CON_CCP7M0_SIZE                                0x1
#define _CCP7CON_CCP7M0_LENGTH                              0x1
#define _CCP7CON_CCP7M0_MASK                                0x1
#define _CCP7CON_CCP7M1_POSN                                0x1
#define _CCP7CON_CCP7M1_POSITION                            0x1
#define _CCP7CON_CCP7M1_SIZE                                0x1
#define _CCP7CON_CCP7M1_LENGTH                              0x1
#define _CCP7CON_CCP7M1_MASK                                0x2
#define _CCP7CON_CCP7M2_POSN                                0x2
#define _CCP7CON_CCP7M2_POSITION                            0x2
#define _CCP7CON_CCP7M2_SIZE                                0x1
#define _CCP7CON_CCP7M2_LENGTH                              0x1
#define _CCP7CON_CCP7M2_MASK                                0x4
#define _CCP7CON_CCP7M3_POSN                                0x3
#define _CCP7CON_CCP7M3_POSITION                            0x3
#define _CCP7CON_CCP7M3_SIZE                                0x1
#define _CCP7CON_CCP7M3_LENGTH                              0x1
#define _CCP7CON_CCP7M3_MASK                                0x8
#define _CCP7CON_DC7B0_POSN                                 0x4
#define _CCP7CON_DC7B0_POSITION                             0x4
#define _CCP7CON_DC7B0_SIZE                                 0x1
#define _CCP7CON_DC7B0_LENGTH                               0x1
#define _CCP7CON_DC7B0_MASK                                 0x10
#define _CCP7CON_DC7B1_POSN                                 0x5
#define _CCP7CON_DC7B1_POSITION                             0x5
#define _CCP7CON_DC7B1_SIZE                                 0x1
#define _CCP7CON_DC7B1_LENGTH                               0x1
#define _CCP7CON_DC7B1_MASK                                 0x20

// Register: CCPR8
#define CCPR8 CCPR8
extern volatile unsigned short          CCPR8               __at(0x617);
#ifndef _LIB_BUILD
asm("CCPR8 equ 0617h");
#endif

// Register: CCPR8L
#define CCPR8L CCPR8L
extern volatile unsigned char           CCPR8L              __at(0x617);
#ifndef _LIB_BUILD
asm("CCPR8L equ 0617h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR8L                 :8;
    };
} CCPR8Lbits_t;
extern volatile CCPR8Lbits_t CCPR8Lbits __at(0x617);
// bitfield macros
#define _CCPR8L_CCPR8L_POSN                                 0x0
#define _CCPR8L_CCPR8L_POSITION                             0x0
#define _CCPR8L_CCPR8L_SIZE                                 0x8
#define _CCPR8L_CCPR8L_LENGTH                               0x8
#define _CCPR8L_CCPR8L_MASK                                 0xFF

// Register: CCPR8H
#define CCPR8H CCPR8H
extern volatile unsigned char           CCPR8H              __at(0x618);
#ifndef _LIB_BUILD
asm("CCPR8H equ 0618h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR8H                 :8;
    };
} CCPR8Hbits_t;
extern volatile CCPR8Hbits_t CCPR8Hbits __at(0x618);
// bitfield macros
#define _CCPR8H_CCPR8H_POSN                                 0x0
#define _CCPR8H_CCPR8H_POSITION                             0x0
#define _CCPR8H_CCPR8H_SIZE                                 0x8
#define _CCPR8H_CCPR8H_LENGTH                               0x8
#define _CCPR8H_CCPR8H_MASK                                 0xFF

// Register: CCP8CON
#define CCP8CON CCP8CON
extern volatile unsigned char           CCP8CON             __at(0x619);
#ifndef _LIB_BUILD
asm("CCP8CON equ 0619h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP8M                  :4;
        unsigned DC8B                   :2;
    };
    struct {
        unsigned CCP8M0                 :1;
        unsigned CCP8M1                 :1;
        unsigned CCP8M2                 :1;
        unsigned CCP8M3                 :1;
        unsigned DC8B0                  :1;
        unsigned DC8B1                  :1;
    };
} CCP8CONbits_t;
extern volatile CCP8CONbits_t CCP8CONbits __at(0x619);
// bitfield macros
#define _CCP8CON_CCP8M_POSN                                 0x0
#define _CCP8CON_CCP8M_POSITION                             0x0
#define _CCP8CON_CCP8M_SIZE                                 0x4
#define _CCP8CON_CCP8M_LENGTH                               0x4
#define _CCP8CON_CCP8M_MASK                                 0xF
#define _CCP8CON_DC8B_POSN                                  0x4
#define _CCP8CON_DC8B_POSITION                              0x4
#define _CCP8CON_DC8B_SIZE                                  0x2
#define _CCP8CON_DC8B_LENGTH                                0x2
#define _CCP8CON_DC8B_MASK                                  0x30
#define _CCP8CON_CCP8M0_POSN                                0x0
#define _CCP8CON_CCP8M0_POSITION                            0x0
#define _CCP8CON_CCP8M0_SIZE                                0x1
#define _CCP8CON_CCP8M0_LENGTH                              0x1
#define _CCP8CON_CCP8M0_MASK                                0x1
#define _CCP8CON_CCP8M1_POSN                                0x1
#define _CCP8CON_CCP8M1_POSITION                            0x1
#define _CCP8CON_CCP8M1_SIZE                                0x1
#define _CCP8CON_CCP8M1_LENGTH                              0x1
#define _CCP8CON_CCP8M1_MASK                                0x2
#define _CCP8CON_CCP8M2_POSN                                0x2
#define _CCP8CON_CCP8M2_POSITION                            0x2
#define _CCP8CON_CCP8M2_SIZE                                0x1
#define _CCP8CON_CCP8M2_LENGTH                              0x1
#define _CCP8CON_CCP8M2_MASK                                0x4
#define _CCP8CON_CCP8M3_POSN                                0x3
#define _CCP8CON_CCP8M3_POSITION                            0x3
#define _CCP8CON_CCP8M3_SIZE                                0x1
#define _CCP8CON_CCP8M3_LENGTH                              0x1
#define _CCP8CON_CCP8M3_MASK                                0x8
#define _CCP8CON_DC8B0_POSN                                 0x4
#define _CCP8CON_DC8B0_POSITION                             0x4
#define _CCP8CON_DC8B0_SIZE                                 0x1
#define _CCP8CON_DC8B0_LENGTH                               0x1
#define _CCP8CON_DC8B0_MASK                                 0x10
#define _CCP8CON_DC8B1_POSN                                 0x5
#define _CCP8CON_DC8B1_POSITION                             0x5
#define _CCP8CON_DC8B1_SIZE                                 0x1
#define _CCP8CON_DC8B1_LENGTH                               0x1
#define _CCP8CON_DC8B1_MASK                                 0x20

// Register: CCPR9
#define CCPR9 CCPR9
extern volatile unsigned short          CCPR9               __at(0x61A);
#ifndef _LIB_BUILD
asm("CCPR9 equ 061Ah");
#endif

// Register: CCPR9L
#define CCPR9L CCPR9L
extern volatile unsigned char           CCPR9L              __at(0x61A);
#ifndef _LIB_BUILD
asm("CCPR9L equ 061Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR9L                 :8;
    };
} CCPR9Lbits_t;
extern volatile CCPR9Lbits_t CCPR9Lbits __at(0x61A);
// bitfield macros
#define _CCPR9L_CCPR9L_POSN                                 0x0
#define _CCPR9L_CCPR9L_POSITION                             0x0
#define _CCPR9L_CCPR9L_SIZE                                 0x8
#define _CCPR9L_CCPR9L_LENGTH                               0x8
#define _CCPR9L_CCPR9L_MASK                                 0xFF

// Register: CCPR9H
#define CCPR9H CCPR9H
extern volatile unsigned char           CCPR9H              __at(0x61B);
#ifndef _LIB_BUILD
asm("CCPR9H equ 061Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR9H                 :8;
    };
} CCPR9Hbits_t;
extern volatile CCPR9Hbits_t CCPR9Hbits __at(0x61B);
// bitfield macros
#define _CCPR9H_CCPR9H_POSN                                 0x0
#define _CCPR9H_CCPR9H_POSITION                             0x0
#define _CCPR9H_CCPR9H_SIZE                                 0x8
#define _CCPR9H_CCPR9H_LENGTH                               0x8
#define _CCPR9H_CCPR9H_MASK                                 0xFF

// Register: CCP9CON
#define CCP9CON CCP9CON
extern volatile unsigned char           CCP9CON             __at(0x61C);
#ifndef _LIB_BUILD
asm("CCP9CON equ 061Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP9M                  :4;
        unsigned DC9B                   :2;
    };
    struct {
        unsigned CCP9M0                 :1;
        unsigned CCP9M1                 :1;
        unsigned CCP9M2                 :1;
        unsigned CCP9M3                 :1;
        unsigned DC9B0                  :1;
        unsigned DC9B1                  :1;
    };
} CCP9CONbits_t;
extern volatile CCP9CONbits_t CCP9CONbits __at(0x61C);
// bitfield macros
#define _CCP9CON_CCP9M_POSN                                 0x0
#define _CCP9CON_CCP9M_POSITION                             0x0
#define _CCP9CON_CCP9M_SIZE                                 0x4
#define _CCP9CON_CCP9M_LENGTH                               0x4
#define _CCP9CON_CCP9M_MASK                                 0xF
#define _CCP9CON_DC9B_POSN                                  0x4
#define _CCP9CON_DC9B_POSITION                              0x4
#define _CCP9CON_DC9B_SIZE                                  0x2
#define _CCP9CON_DC9B_LENGTH                                0x2
#define _CCP9CON_DC9B_MASK                                  0x30
#define _CCP9CON_CCP9M0_POSN                                0x0
#define _CCP9CON_CCP9M0_POSITION                            0x0
#define _CCP9CON_CCP9M0_SIZE                                0x1
#define _CCP9CON_CCP9M0_LENGTH                              0x1
#define _CCP9CON_CCP9M0_MASK                                0x1
#define _CCP9CON_CCP9M1_POSN                                0x1
#define _CCP9CON_CCP9M1_POSITION                            0x1
#define _CCP9CON_CCP9M1_SIZE                                0x1
#define _CCP9CON_CCP9M1_LENGTH                              0x1
#define _CCP9CON_CCP9M1_MASK                                0x2
#define _CCP9CON_CCP9M2_POSN                                0x2
#define _CCP9CON_CCP9M2_POSITION                            0x2
#define _CCP9CON_CCP9M2_SIZE                                0x1
#define _CCP9CON_CCP9M2_LENGTH                              0x1
#define _CCP9CON_CCP9M2_MASK                                0x4
#define _CCP9CON_CCP9M3_POSN                                0x3
#define _CCP9CON_CCP9M3_POSITION                            0x3
#define _CCP9CON_CCP9M3_SIZE                                0x1
#define _CCP9CON_CCP9M3_LENGTH                              0x1
#define _CCP9CON_CCP9M3_MASK                                0x8
#define _CCP9CON_DC9B0_POSN                                 0x4
#define _CCP9CON_DC9B0_POSITION                             0x4
#define _CCP9CON_DC9B0_SIZE                                 0x1
#define _CCP9CON_DC9B0_LENGTH                               0x1
#define _CCP9CON_DC9B0_MASK                                 0x10
#define _CCP9CON_DC9B1_POSN                                 0x5
#define _CCP9CON_DC9B1_POSITION                             0x5
#define _CCP9CON_DC9B1_SIZE                                 0x1
#define _CCP9CON_DC9B1_LENGTH                               0x1
#define _CCP9CON_DC9B1_MASK                                 0x20

// Register: CCPR10
#define CCPR10 CCPR10
extern volatile unsigned short          CCPR10              __at(0x61D);
#ifndef _LIB_BUILD
asm("CCPR10 equ 061Dh");
#endif

// Register: CCPR10L
#define CCPR10L CCPR10L
extern volatile unsigned char           CCPR10L             __at(0x61D);
#ifndef _LIB_BUILD
asm("CCPR10L equ 061Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR10L                :8;
    };
} CCPR10Lbits_t;
extern volatile CCPR10Lbits_t CCPR10Lbits __at(0x61D);
// bitfield macros
#define _CCPR10L_CCPR10L_POSN                               0x0
#define _CCPR10L_CCPR10L_POSITION                           0x0
#define _CCPR10L_CCPR10L_SIZE                               0x8
#define _CCPR10L_CCPR10L_LENGTH                             0x8
#define _CCPR10L_CCPR10L_MASK                               0xFF

// Register: CCPR10H
#define CCPR10H CCPR10H
extern volatile unsigned char           CCPR10H             __at(0x61E);
#ifndef _LIB_BUILD
asm("CCPR10H equ 061Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR10H                :8;
    };
} CCPR10Hbits_t;
extern volatile CCPR10Hbits_t CCPR10Hbits __at(0x61E);
// bitfield macros
#define _CCPR10H_CCPR10H_POSN                               0x0
#define _CCPR10H_CCPR10H_POSITION                           0x0
#define _CCPR10H_CCPR10H_SIZE                               0x8
#define _CCPR10H_CCPR10H_LENGTH                             0x8
#define _CCPR10H_CCPR10H_MASK                               0xFF

// Register: CCP10CON
#define CCP10CON CCP10CON
extern volatile unsigned char           CCP10CON            __at(0x61F);
#ifndef _LIB_BUILD
asm("CCP10CON equ 061Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP10M                 :4;
        unsigned DC10B                  :2;
    };
    struct {
        unsigned CCP10M0                :1;
        unsigned CCP10M1                :1;
        unsigned CCP10M2                :1;
        unsigned CCP10M3                :1;
        unsigned DC10B0                 :1;
        unsigned DC10B1                 :1;
    };
} CCP10CONbits_t;
extern volatile CCP10CONbits_t CCP10CONbits __at(0x61F);
// bitfield macros
#define _CCP10CON_CCP10M_POSN                               0x0
#define _CCP10CON_CCP10M_POSITION                           0x0
#define _CCP10CON_CCP10M_SIZE                               0x4
#define _CCP10CON_CCP10M_LENGTH                             0x4
#define _CCP10CON_CCP10M_MASK                               0xF
#define _CCP10CON_DC10B_POSN                                0x4
#define _CCP10CON_DC10B_POSITION                            0x4
#define _CCP10CON_DC10B_SIZE                                0x2
#define _CCP10CON_DC10B_LENGTH                              0x2
#define _CCP10CON_DC10B_MASK                                0x30
#define _CCP10CON_CCP10M0_POSN                              0x0
#define _CCP10CON_CCP10M0_POSITION                          0x0
#define _CCP10CON_CCP10M0_SIZE                              0x1
#define _CCP10CON_CCP10M0_LENGTH                            0x1
#define _CCP10CON_CCP10M0_MASK                              0x1
#define _CCP10CON_CCP10M1_POSN                              0x1
#define _CCP10CON_CCP10M1_POSITION                          0x1
#define _CCP10CON_CCP10M1_SIZE                              0x1
#define _CCP10CON_CCP10M1_LENGTH                            0x1
#define _CCP10CON_CCP10M1_MASK                              0x2
#define _CCP10CON_CCP10M2_POSN                              0x2
#define _CCP10CON_CCP10M2_POSITION                          0x2
#define _CCP10CON_CCP10M2_SIZE                              0x1
#define _CCP10CON_CCP10M2_LENGTH                            0x1
#define _CCP10CON_CCP10M2_MASK                              0x4
#define _CCP10CON_CCP10M3_POSN                              0x3
#define _CCP10CON_CCP10M3_POSITION                          0x3
#define _CCP10CON_CCP10M3_SIZE                              0x1
#define _CCP10CON_CCP10M3_LENGTH                            0x1
#define _CCP10CON_CCP10M3_MASK                              0x8
#define _CCP10CON_DC10B0_POSN                               0x4
#define _CCP10CON_DC10B0_POSITION                           0x4
#define _CCP10CON_DC10B0_SIZE                               0x1
#define _CCP10CON_DC10B0_LENGTH                             0x1
#define _CCP10CON_DC10B0_MASK                               0x10
#define _CCP10CON_DC10B1_POSN                               0x5
#define _CCP10CON_DC10B1_POSITION                           0x5
#define _CCP10CON_DC10B1_SIZE                               0x1
#define _CCP10CON_DC10B1_LENGTH                             0x1
#define _CCP10CON_DC10B1_MASK                               0x20

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
// ANSELA<ANSA3>
extern volatile __bit                   ANSA3               __at(0xC63);	// @ (0x18C * 8 + 3)
#define                                 ANSA3_bit           _BIT_ACCESS(ANSELA,3)
// ANSELA<ANSA5>
extern volatile __bit                   ANSA5               __at(0xC65);	// @ (0x18C * 8 + 5)
#define                                 ANSA5_bit           _BIT_ACCESS(ANSELA,5)
// ANSELB<ANSB0>
extern volatile __bit                   ANSB0               __at(0xC68);	// @ (0x18D * 8 + 0)
#define                                 ANSB0_bit           _BIT_ACCESS(ANSELB,0)
// ANSELB<ANSB1>
extern volatile __bit                   ANSB1               __at(0xC69);	// @ (0x18D * 8 + 1)
#define                                 ANSB1_bit           _BIT_ACCESS(ANSELB,1)
// ANSELB<ANSB2>
extern volatile __bit                   ANSB2               __at(0xC6A);	// @ (0x18D * 8 + 2)
#define                                 ANSB2_bit           _BIT_ACCESS(ANSELB,2)
// ANSELB<ANSB3>
extern volatile __bit                   ANSB3               __at(0xC6B);	// @ (0x18D * 8 + 3)
#define                                 ANSB3_bit           _BIT_ACCESS(ANSELB,3)
// ANSELB<ANSB4>
extern volatile __bit                   ANSB4               __at(0xC6C);	// @ (0x18D * 8 + 4)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSELB,4)
// ANSELB<ANSB5>
extern volatile __bit                   ANSB5               __at(0xC6D);	// @ (0x18D * 8 + 5)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSELB,5)
// ANSELD<ANSD0>
extern volatile __bit                   ANSD0               __at(0xC78);	// @ (0x18F * 8 + 0)
#define                                 ANSD0_bit           _BIT_ACCESS(ANSELD,0)
// ANSELD<ANSD1>
extern volatile __bit                   ANSD1               __at(0xC79);	// @ (0x18F * 8 + 1)
#define                                 ANSD1_bit           _BIT_ACCESS(ANSELD,1)
// ANSELD<ANSD2>
extern volatile __bit                   ANSD2               __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 ANSD2_bit           _BIT_ACCESS(ANSELD,2)
// ANSELD<ANSD3>
extern volatile __bit                   ANSD3               __at(0xC7B);	// @ (0x18F * 8 + 3)
#define                                 ANSD3_bit           _BIT_ACCESS(ANSELD,3)
// ANSELE<ANSE0>
extern volatile __bit                   ANSE0               __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 ANSE0_bit           _BIT_ACCESS(ANSELE,0)
// ANSELE<ANSE1>
extern volatile __bit                   ANSE1               __at(0xC81);	// @ (0x190 * 8 + 1)
#define                                 ANSE1_bit           _BIT_ACCESS(ANSELE,1)
// ANSELE<ANSE2>
extern volatile __bit                   ANSE2               __at(0xC82);	// @ (0x190 * 8 + 2)
#define                                 ANSE2_bit           _BIT_ACCESS(ANSELE,2)
// ANSELF<ANSF0>
extern volatile __bit                   ANSF0               __at(0x2060);	// @ (0x40C * 8 + 0)
#define                                 ANSF0_bit           _BIT_ACCESS(ANSELF,0)
// ANSELF<ANSF1>
extern volatile __bit                   ANSF1               __at(0x2061);	// @ (0x40C * 8 + 1)
#define                                 ANSF1_bit           _BIT_ACCESS(ANSELF,1)
// ANSELF<ANSF2>
extern volatile __bit                   ANSF2               __at(0x2062);	// @ (0x40C * 8 + 2)
#define                                 ANSF2_bit           _BIT_ACCESS(ANSELF,2)
// ANSELF<ANSF3>
extern volatile __bit                   ANSF3               __at(0x2063);	// @ (0x40C * 8 + 3)
#define                                 ANSF3_bit           _BIT_ACCESS(ANSELF,3)
// ANSELF<ANSF4>
extern volatile __bit                   ANSF4               __at(0x2064);	// @ (0x40C * 8 + 4)
#define                                 ANSF4_bit           _BIT_ACCESS(ANSELF,4)
// ANSELF<ANSF5>
extern volatile __bit                   ANSF5               __at(0x2065);	// @ (0x40C * 8 + 5)
#define                                 ANSF5_bit           _BIT_ACCESS(ANSELF,5)
// ANSELF<ANSF6>
extern volatile __bit                   ANSF6               __at(0x2066);	// @ (0x40C * 8 + 6)
#define                                 ANSF6_bit           _BIT_ACCESS(ANSELF,6)
// ANSELF<ANSF7>
extern volatile __bit                   ANSF7               __at(0x2067);	// @ (0x40C * 8 + 7)
#define                                 ANSF7_bit           _BIT_ACCESS(ANSELF,7)
// ANSELG<ANSG1>
extern volatile __bit                   ANSG1               __at(0x2069);	// @ (0x40D * 8 + 1)
#define                                 ANSG1_bit           _BIT_ACCESS(ANSELG,1)
// ANSELG<ANSG2>
extern volatile __bit                   ANSG2               __at(0x206A);	// @ (0x40D * 8 + 2)
#define                                 ANSG2_bit           _BIT_ACCESS(ANSELG,2)
// ANSELG<ANSG3>
extern volatile __bit                   ANSG3               __at(0x206B);	// @ (0x40D * 8 + 3)
#define                                 ANSG3_bit           _BIT_ACCESS(ANSELG,3)
// ANSELG<ANSG4>
extern volatile __bit                   ANSG4               __at(0x206C);	// @ (0x40D * 8 + 4)
#define                                 ANSG4_bit           _BIT_ACCESS(ANSELG,4)
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR2,3)
// PIE4<BCL2IE>
extern volatile __bit                   BCL2IE              __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 BCL2IE_bit          _BIT_ACCESS(PIE4,1)
// PIR4<BCL2IF>
extern volatile __bit                   BCL2IF              __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 BCL2IF_bit          _BIT_ACCESS(PIR4,1)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
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
// CCPTMRS2<C10TSEL0>
extern volatile __bit                   C10TSEL0            __at(0x14FA);	// @ (0x29F * 8 + 2)
#define                                 C10TSEL0_bit        _BIT_ACCESS(CCPTMRS2,2)
// CCPTMRS2<C10TSEL1>
extern volatile __bit                   C10TSEL1            __at(0x14FB);	// @ (0x29F * 8 + 3)
#define                                 C10TSEL1_bit        _BIT_ACCESS(CCPTMRS2,3)
// CCPTMRS0<C1TSEL0>
extern volatile __bit                   C1TSEL0             __at(0x14E8);	// @ (0x29D * 8 + 0)
#define                                 C1TSEL0_bit         _BIT_ACCESS(CCPTMRS0,0)
// CCPTMRS0<C1TSEL1>
extern volatile __bit                   C1TSEL1             __at(0x14E9);	// @ (0x29D * 8 + 1)
#define                                 C1TSEL1_bit         _BIT_ACCESS(CCPTMRS0,1)
// CCPTMRS0<C2TSEL0>
extern volatile __bit                   C2TSEL0             __at(0x14EA);	// @ (0x29D * 8 + 2)
#define                                 C2TSEL0_bit         _BIT_ACCESS(CCPTMRS0,2)
// CCPTMRS0<C2TSEL1>
extern volatile __bit                   C2TSEL1             __at(0x14EB);	// @ (0x29D * 8 + 3)
#define                                 C2TSEL1_bit         _BIT_ACCESS(CCPTMRS0,3)
// CCPTMRS0<C3TSEL0>
extern volatile __bit                   C3TSEL0             __at(0x14EC);	// @ (0x29D * 8 + 4)
#define                                 C3TSEL0_bit         _BIT_ACCESS(CCPTMRS0,4)
// CCPTMRS0<C3TSEL1>
extern volatile __bit                   C3TSEL1             __at(0x14ED);	// @ (0x29D * 8 + 5)
#define                                 C3TSEL1_bit         _BIT_ACCESS(CCPTMRS0,5)
// CCPTMRS0<C4TSEL0>
extern volatile __bit                   C4TSEL0             __at(0x14EE);	// @ (0x29D * 8 + 6)
#define                                 C4TSEL0_bit         _BIT_ACCESS(CCPTMRS0,6)
// CCPTMRS0<C4TSEL1>
extern volatile __bit                   C4TSEL1             __at(0x14EF);	// @ (0x29D * 8 + 7)
#define                                 C4TSEL1_bit         _BIT_ACCESS(CCPTMRS0,7)
// CCPTMRS1<C5TSEL0>
extern volatile __bit                   C5TSEL0             __at(0x14F0);	// @ (0x29E * 8 + 0)
#define                                 C5TSEL0_bit         _BIT_ACCESS(CCPTMRS1,0)
// CCPTMRS1<C5TSEL1>
extern volatile __bit                   C5TSEL1             __at(0x14F1);	// @ (0x29E * 8 + 1)
#define                                 C5TSEL1_bit         _BIT_ACCESS(CCPTMRS1,1)
// CCPTMRS1<C6TSEL0>
extern volatile __bit                   C6TSEL0             __at(0x14F2);	// @ (0x29E * 8 + 2)
#define                                 C6TSEL0_bit         _BIT_ACCESS(CCPTMRS1,2)
// CCPTMRS1<C6TSEL1>
extern volatile __bit                   C6TSEL1             __at(0x14F3);	// @ (0x29E * 8 + 3)
#define                                 C6TSEL1_bit         _BIT_ACCESS(CCPTMRS1,3)
// CCPTMRS1<C7TSEL0>
extern volatile __bit                   C7TSEL0             __at(0x14F4);	// @ (0x29E * 8 + 4)
#define                                 C7TSEL0_bit         _BIT_ACCESS(CCPTMRS1,4)
// CCPTMRS1<C7TSEL1>
extern volatile __bit                   C7TSEL1             __at(0x14F5);	// @ (0x29E * 8 + 5)
#define                                 C7TSEL1_bit         _BIT_ACCESS(CCPTMRS1,5)
// CCPTMRS1<C8TSEL0>
extern volatile __bit                   C8TSEL0             __at(0x14F6);	// @ (0x29E * 8 + 6)
#define                                 C8TSEL0_bit         _BIT_ACCESS(CCPTMRS1,6)
// CCPTMRS1<C8TSEL1>
extern volatile __bit                   C8TSEL1             __at(0x14F7);	// @ (0x29E * 8 + 7)
#define                                 C8TSEL1_bit         _BIT_ACCESS(CCPTMRS1,7)
// CCPTMRS2<C9TSEL0>
extern volatile __bit                   C9TSEL0             __at(0x14F8);	// @ (0x29F * 8 + 0)
#define                                 C9TSEL0_bit         _BIT_ACCESS(CCPTMRS2,0)
// CCPTMRS2<C9TSEL1>
extern volatile __bit                   C9TSEL1             __at(0x14F9);	// @ (0x29F * 8 + 1)
#define                                 C9TSEL1_bit         _BIT_ACCESS(CCPTMRS2,1)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PIE4<CCP10IE>
extern volatile __bit                   CCP10IE             __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 CCP10IE_bit         _BIT_ACCESS(PIE4,7)
// PIR4<CCP10IF>
extern volatile __bit                   CCP10IF             __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 CCP10IF_bit         _BIT_ACCESS(PIR4,7)
// CCP10CON<CCP10M0>
extern volatile __bit                   CCP10M0             __at(0x30F8);	// @ (0x61F * 8 + 0)
#define                                 CCP10M0_bit         _BIT_ACCESS(CCP10CON,0)
// CCP10CON<CCP10M1>
extern volatile __bit                   CCP10M1             __at(0x30F9);	// @ (0x61F * 8 + 1)
#define                                 CCP10M1_bit         _BIT_ACCESS(CCP10CON,1)
// CCP10CON<CCP10M2>
extern volatile __bit                   CCP10M2             __at(0x30FA);	// @ (0x61F * 8 + 2)
#define                                 CCP10M2_bit         _BIT_ACCESS(CCP10CON,2)
// CCP10CON<CCP10M3>
extern volatile __bit                   CCP10M3             __at(0x30FB);	// @ (0x61F * 8 + 3)
#define                                 CCP10M3_bit         _BIT_ACCESS(CCP10CON,3)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x8A);	// @ (0x11 * 8 + 2)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,2)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0x1498);	// @ (0x293 * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0x1499);	// @ (0x293 * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0x149A);	// @ (0x293 * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0x149B);	// @ (0x293 * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x490);	// @ (0x92 * 8 + 0)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR2,0)
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0x14D0);	// @ (0x29A * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x14D1);	// @ (0x29A * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x14D2);	// @ (0x29A * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x14D3);	// @ (0x29A * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// APFCON<CCP2SEL>
extern volatile __bit                   CCP2SEL             __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 CCP2SEL_bit         _BIT_ACCESS(APFCON,0)
// PIE3<CCP3IE>
extern volatile __bit                   CCP3IE              __at(0x49C);	// @ (0x93 * 8 + 4)
#define                                 CCP3IE_bit          _BIT_ACCESS(PIE3,4)
// PIR3<CCP3IF>
extern volatile __bit                   CCP3IF              __at(0x9C);	// @ (0x13 * 8 + 4)
#define                                 CCP3IF_bit          _BIT_ACCESS(PIR3,4)
// CCP3CON<CCP3M0>
extern volatile __bit                   CCP3M0              __at(0x1898);	// @ (0x313 * 8 + 0)
#define                                 CCP3M0_bit          _BIT_ACCESS(CCP3CON,0)
// CCP3CON<CCP3M1>
extern volatile __bit                   CCP3M1              __at(0x1899);	// @ (0x313 * 8 + 1)
#define                                 CCP3M1_bit          _BIT_ACCESS(CCP3CON,1)
// CCP3CON<CCP3M2>
extern volatile __bit                   CCP3M2              __at(0x189A);	// @ (0x313 * 8 + 2)
#define                                 CCP3M2_bit          _BIT_ACCESS(CCP3CON,2)
// CCP3CON<CCP3M3>
extern volatile __bit                   CCP3M3              __at(0x189B);	// @ (0x313 * 8 + 3)
#define                                 CCP3M3_bit          _BIT_ACCESS(CCP3CON,3)
// PIE3<CCP4IE>
extern volatile __bit                   CCP4IE              __at(0x49D);	// @ (0x93 * 8 + 5)
#define                                 CCP4IE_bit          _BIT_ACCESS(PIE3,5)
// PIR3<CCP4IF>
extern volatile __bit                   CCP4IF              __at(0x9D);	// @ (0x13 * 8 + 5)
#define                                 CCP4IF_bit          _BIT_ACCESS(PIR3,5)
// CCP4CON<CCP4M0>
extern volatile __bit                   CCP4M0              __at(0x18D0);	// @ (0x31A * 8 + 0)
#define                                 CCP4M0_bit          _BIT_ACCESS(CCP4CON,0)
// CCP4CON<CCP4M1>
extern volatile __bit                   CCP4M1              __at(0x18D1);	// @ (0x31A * 8 + 1)
#define                                 CCP4M1_bit          _BIT_ACCESS(CCP4CON,1)
// CCP4CON<CCP4M2>
extern volatile __bit                   CCP4M2              __at(0x18D2);	// @ (0x31A * 8 + 2)
#define                                 CCP4M2_bit          _BIT_ACCESS(CCP4CON,2)
// CCP4CON<CCP4M3>
extern volatile __bit                   CCP4M3              __at(0x18D3);	// @ (0x31A * 8 + 3)
#define                                 CCP4M3_bit          _BIT_ACCESS(CCP4CON,3)
// PIE3<CCP5IE>
extern volatile __bit                   CCP5IE              __at(0x49E);	// @ (0x93 * 8 + 6)
#define                                 CCP5IE_bit          _BIT_ACCESS(PIE3,6)
// PIR3<CCP5IF>
extern volatile __bit                   CCP5IF              __at(0x9E);	// @ (0x13 * 8 + 6)
#define                                 CCP5IF_bit          _BIT_ACCESS(PIR3,6)
// CCP5CON<CCP5M0>
extern volatile __bit                   CCP5M0              __at(0x18F0);	// @ (0x31E * 8 + 0)
#define                                 CCP5M0_bit          _BIT_ACCESS(CCP5CON,0)
// CCP5CON<CCP5M1>
extern volatile __bit                   CCP5M1              __at(0x18F1);	// @ (0x31E * 8 + 1)
#define                                 CCP5M1_bit          _BIT_ACCESS(CCP5CON,1)
// CCP5CON<CCP5M2>
extern volatile __bit                   CCP5M2              __at(0x18F2);	// @ (0x31E * 8 + 2)
#define                                 CCP5M2_bit          _BIT_ACCESS(CCP5CON,2)
// CCP5CON<CCP5M3>
extern volatile __bit                   CCP5M3              __at(0x18F3);	// @ (0x31E * 8 + 3)
#define                                 CCP5M3_bit          _BIT_ACCESS(CCP5CON,3)
// PIE3<CCP6IE>
extern volatile __bit                   CCP6IE              __at(0x49F);	// @ (0x93 * 8 + 7)
#define                                 CCP6IE_bit          _BIT_ACCESS(PIE3,7)
// PIR3<CCP6IF>
extern volatile __bit                   CCP6IF              __at(0x9F);	// @ (0x13 * 8 + 7)
#define                                 CCP6IF_bit          _BIT_ACCESS(PIR3,7)
// CCP6CON<CCP6M0>
extern volatile __bit                   CCP6M0              __at(0x3098);	// @ (0x613 * 8 + 0)
#define                                 CCP6M0_bit          _BIT_ACCESS(CCP6CON,0)
// CCP6CON<CCP6M1>
extern volatile __bit                   CCP6M1              __at(0x3099);	// @ (0x613 * 8 + 1)
#define                                 CCP6M1_bit          _BIT_ACCESS(CCP6CON,1)
// CCP6CON<CCP6M2>
extern volatile __bit                   CCP6M2              __at(0x309A);	// @ (0x613 * 8 + 2)
#define                                 CCP6M2_bit          _BIT_ACCESS(CCP6CON,2)
// CCP6CON<CCP6M3>
extern volatile __bit                   CCP6M3              __at(0x309B);	// @ (0x613 * 8 + 3)
#define                                 CCP6M3_bit          _BIT_ACCESS(CCP6CON,3)
// PIE4<CCP7IE>
extern volatile __bit                   CCP7IE              __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 CCP7IE_bit          _BIT_ACCESS(PIE4,2)
// PIR4<CCP7IF>
extern volatile __bit                   CCP7IF              __at(0xA2);	// @ (0x14 * 8 + 2)
#define                                 CCP7IF_bit          _BIT_ACCESS(PIR4,2)
// CCP7CON<CCP7M0>
extern volatile __bit                   CCP7M0              __at(0x30B0);	// @ (0x616 * 8 + 0)
#define                                 CCP7M0_bit          _BIT_ACCESS(CCP7CON,0)
// CCP7CON<CCP7M1>
extern volatile __bit                   CCP7M1              __at(0x30B1);	// @ (0x616 * 8 + 1)
#define                                 CCP7M1_bit          _BIT_ACCESS(CCP7CON,1)
// CCP7CON<CCP7M2>
extern volatile __bit                   CCP7M2              __at(0x30B2);	// @ (0x616 * 8 + 2)
#define                                 CCP7M2_bit          _BIT_ACCESS(CCP7CON,2)
// CCP7CON<CCP7M3>
extern volatile __bit                   CCP7M3              __at(0x30B3);	// @ (0x616 * 8 + 3)
#define                                 CCP7M3_bit          _BIT_ACCESS(CCP7CON,3)
// PIE4<CCP8IE>
extern volatile __bit                   CCP8IE              __at(0x4A3);	// @ (0x94 * 8 + 3)
#define                                 CCP8IE_bit          _BIT_ACCESS(PIE4,3)
// PIR4<CCP8IF>
extern volatile __bit                   CCP8IF              __at(0xA3);	// @ (0x14 * 8 + 3)
#define                                 CCP8IF_bit          _BIT_ACCESS(PIR4,3)
// CCP8CON<CCP8M0>
extern volatile __bit                   CCP8M0              __at(0x30C8);	// @ (0x619 * 8 + 0)
#define                                 CCP8M0_bit          _BIT_ACCESS(CCP8CON,0)
// CCP8CON<CCP8M1>
extern volatile __bit                   CCP8M1              __at(0x30C9);	// @ (0x619 * 8 + 1)
#define                                 CCP8M1_bit          _BIT_ACCESS(CCP8CON,1)
// CCP8CON<CCP8M2>
extern volatile __bit                   CCP8M2              __at(0x30CA);	// @ (0x619 * 8 + 2)
#define                                 CCP8M2_bit          _BIT_ACCESS(CCP8CON,2)
// CCP8CON<CCP8M3>
extern volatile __bit                   CCP8M3              __at(0x30CB);	// @ (0x619 * 8 + 3)
#define                                 CCP8M3_bit          _BIT_ACCESS(CCP8CON,3)
// PIE4<CCP9IE>
extern volatile __bit                   CCP9IE              __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CCP9IE_bit          _BIT_ACCESS(PIE4,6)
// PIR4<CCP9IF>
extern volatile __bit                   CCP9IF              __at(0xA6);	// @ (0x14 * 8 + 6)
#define                                 CCP9IF_bit          _BIT_ACCESS(PIR4,6)
// CCP9CON<CCP9M0>
extern volatile __bit                   CCP9M0              __at(0x30E0);	// @ (0x61C * 8 + 0)
#define                                 CCP9M0_bit          _BIT_ACCESS(CCP9CON,0)
// CCP9CON<CCP9M1>
extern volatile __bit                   CCP9M1              __at(0x30E1);	// @ (0x61C * 8 + 1)
#define                                 CCP9M1_bit          _BIT_ACCESS(CCP9CON,1)
// CCP9CON<CCP9M2>
extern volatile __bit                   CCP9M2              __at(0x30E2);	// @ (0x61C * 8 + 2)
#define                                 CCP9M2_bit          _BIT_ACCESS(CCP9CON,2)
// CCP9CON<CCP9M3>
extern volatile __bit                   CCP9M3              __at(0x30E3);	// @ (0x61C * 8 + 3)
#define                                 CCP9M3_bit          _BIT_ACCESS(CCP9CON,3)
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
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP10CON<DC10B0>
extern volatile __bit                   DC10B0              __at(0x30FC);	// @ (0x61F * 8 + 4)
#define                                 DC10B0_bit          _BIT_ACCESS(CCP10CON,4)
// CCP10CON<DC10B1>
extern volatile __bit                   DC10B1              __at(0x30FD);	// @ (0x61F * 8 + 5)
#define                                 DC10B1_bit          _BIT_ACCESS(CCP10CON,5)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x149C);	// @ (0x293 * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x149D);	// @ (0x293 * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0x14D4);	// @ (0x29A * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x14D5);	// @ (0x29A * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// CCP3CON<DC3B0>
extern volatile __bit                   DC3B0               __at(0x189C);	// @ (0x313 * 8 + 4)
#define                                 DC3B0_bit           _BIT_ACCESS(CCP3CON,4)
// CCP3CON<DC3B1>
extern volatile __bit                   DC3B1               __at(0x189D);	// @ (0x313 * 8 + 5)
#define                                 DC3B1_bit           _BIT_ACCESS(CCP3CON,5)
// CCP4CON<DC4B0>
extern volatile __bit                   DC4B0               __at(0x18D4);	// @ (0x31A * 8 + 4)
#define                                 DC4B0_bit           _BIT_ACCESS(CCP4CON,4)
// CCP4CON<DC4B1>
extern volatile __bit                   DC4B1               __at(0x18D5);	// @ (0x31A * 8 + 5)
#define                                 DC4B1_bit           _BIT_ACCESS(CCP4CON,5)
// CCP5CON<DC5B0>
extern volatile __bit                   DC5B0               __at(0x18F4);	// @ (0x31E * 8 + 4)
#define                                 DC5B0_bit           _BIT_ACCESS(CCP5CON,4)
// CCP5CON<DC5B1>
extern volatile __bit                   DC5B1               __at(0x18F5);	// @ (0x31E * 8 + 5)
#define                                 DC5B1_bit           _BIT_ACCESS(CCP5CON,5)
// CCP6CON<DC6B0>
extern volatile __bit                   DC6B0               __at(0x309C);	// @ (0x613 * 8 + 4)
#define                                 DC6B0_bit           _BIT_ACCESS(CCP6CON,4)
// CCP6CON<DC6B1>
extern volatile __bit                   DC6B1               __at(0x309D);	// @ (0x613 * 8 + 5)
#define                                 DC6B1_bit           _BIT_ACCESS(CCP6CON,5)
// CCP7CON<DC7B0>
extern volatile __bit                   DC7B0               __at(0x30B4);	// @ (0x616 * 8 + 4)
#define                                 DC7B0_bit           _BIT_ACCESS(CCP7CON,4)
// CCP7CON<DC7B1>
extern volatile __bit                   DC7B1               __at(0x30B5);	// @ (0x616 * 8 + 5)
#define                                 DC7B1_bit           _BIT_ACCESS(CCP7CON,5)
// CCP8CON<DC8B0>
extern volatile __bit                   DC8B0               __at(0x30CC);	// @ (0x619 * 8 + 4)
#define                                 DC8B0_bit           _BIT_ACCESS(CCP8CON,4)
// CCP8CON<DC8B1>
extern volatile __bit                   DC8B1               __at(0x30CD);	// @ (0x619 * 8 + 5)
#define                                 DC8B1_bit           _BIT_ACCESS(CCP8CON,5)
// CCP9CON<DC9B0>
extern volatile __bit                   DC9B0               __at(0x30E4);	// @ (0x61C * 8 + 4)
#define                                 DC9B0_bit           _BIT_ACCESS(CCP9CON,4)
// CCP9CON<DC9B1>
extern volatile __bit                   DC9B1               __at(0x30E5);	// @ (0x61C * 8 + 5)
#define                                 DC9B1_bit           _BIT_ACCESS(CCP9CON,5)
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// PMCON1<FREE>
extern volatile __bit                   FREE                __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(PMCON1,4)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
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
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x4AE);	// @ (0x95 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOCBF<IOCBF0>
extern volatile __bit                   IOCBF0              __at(0x1CB0);	// @ (0x396 * 8 + 0)
#define                                 IOCBF0_bit          _BIT_ACCESS(IOCBF,0)
// IOCBF<IOCBF1>
extern volatile __bit                   IOCBF1              __at(0x1CB1);	// @ (0x396 * 8 + 1)
#define                                 IOCBF1_bit          _BIT_ACCESS(IOCBF,1)
// IOCBF<IOCBF2>
extern volatile __bit                   IOCBF2              __at(0x1CB2);	// @ (0x396 * 8 + 2)
#define                                 IOCBF2_bit          _BIT_ACCESS(IOCBF,2)
// IOCBF<IOCBF3>
extern volatile __bit                   IOCBF3              __at(0x1CB3);	// @ (0x396 * 8 + 3)
#define                                 IOCBF3_bit          _BIT_ACCESS(IOCBF,3)
// IOCBF<IOCBF4>
extern volatile __bit                   IOCBF4              __at(0x1CB4);	// @ (0x396 * 8 + 4)
#define                                 IOCBF4_bit          _BIT_ACCESS(IOCBF,4)
// IOCBF<IOCBF5>
extern volatile __bit                   IOCBF5              __at(0x1CB5);	// @ (0x396 * 8 + 5)
#define                                 IOCBF5_bit          _BIT_ACCESS(IOCBF,5)
// IOCBF<IOCBF6>
extern volatile __bit                   IOCBF6              __at(0x1CB6);	// @ (0x396 * 8 + 6)
#define                                 IOCBF6_bit          _BIT_ACCESS(IOCBF,6)
// IOCBF<IOCBF7>
extern volatile __bit                   IOCBF7              __at(0x1CB7);	// @ (0x396 * 8 + 7)
#define                                 IOCBF7_bit          _BIT_ACCESS(IOCBF,7)
// IOCBN<IOCBN0>
extern volatile __bit                   IOCBN0              __at(0x1CA8);	// @ (0x395 * 8 + 0)
#define                                 IOCBN0_bit          _BIT_ACCESS(IOCBN,0)
// IOCBN<IOCBN1>
extern volatile __bit                   IOCBN1              __at(0x1CA9);	// @ (0x395 * 8 + 1)
#define                                 IOCBN1_bit          _BIT_ACCESS(IOCBN,1)
// IOCBN<IOCBN2>
extern volatile __bit                   IOCBN2              __at(0x1CAA);	// @ (0x395 * 8 + 2)
#define                                 IOCBN2_bit          _BIT_ACCESS(IOCBN,2)
// IOCBN<IOCBN3>
extern volatile __bit                   IOCBN3              __at(0x1CAB);	// @ (0x395 * 8 + 3)
#define                                 IOCBN3_bit          _BIT_ACCESS(IOCBN,3)
// IOCBN<IOCBN4>
extern volatile __bit                   IOCBN4              __at(0x1CAC);	// @ (0x395 * 8 + 4)
#define                                 IOCBN4_bit          _BIT_ACCESS(IOCBN,4)
// IOCBN<IOCBN5>
extern volatile __bit                   IOCBN5              __at(0x1CAD);	// @ (0x395 * 8 + 5)
#define                                 IOCBN5_bit          _BIT_ACCESS(IOCBN,5)
// IOCBN<IOCBN6>
extern volatile __bit                   IOCBN6              __at(0x1CAE);	// @ (0x395 * 8 + 6)
#define                                 IOCBN6_bit          _BIT_ACCESS(IOCBN,6)
// IOCBN<IOCBN7>
extern volatile __bit                   IOCBN7              __at(0x1CAF);	// @ (0x395 * 8 + 7)
#define                                 IOCBN7_bit          _BIT_ACCESS(IOCBN,7)
// IOCBP<IOCBP0>
extern volatile __bit                   IOCBP0              __at(0x1CA0);	// @ (0x394 * 8 + 0)
#define                                 IOCBP0_bit          _BIT_ACCESS(IOCBP,0)
// IOCBP<IOCBP1>
extern volatile __bit                   IOCBP1              __at(0x1CA1);	// @ (0x394 * 8 + 1)
#define                                 IOCBP1_bit          _BIT_ACCESS(IOCBP,1)
// IOCBP<IOCBP2>
extern volatile __bit                   IOCBP2              __at(0x1CA2);	// @ (0x394 * 8 + 2)
#define                                 IOCBP2_bit          _BIT_ACCESS(IOCBP,2)
// IOCBP<IOCBP3>
extern volatile __bit                   IOCBP3              __at(0x1CA3);	// @ (0x394 * 8 + 3)
#define                                 IOCBP3_bit          _BIT_ACCESS(IOCBP,3)
// IOCBP<IOCBP4>
extern volatile __bit                   IOCBP4              __at(0x1CA4);	// @ (0x394 * 8 + 4)
#define                                 IOCBP4_bit          _BIT_ACCESS(IOCBP,4)
// IOCBP<IOCBP5>
extern volatile __bit                   IOCBP5              __at(0x1CA5);	// @ (0x394 * 8 + 5)
#define                                 IOCBP5_bit          _BIT_ACCESS(IOCBP,5)
// IOCBP<IOCBP6>
extern volatile __bit                   IOCBP6              __at(0x1CA6);	// @ (0x394 * 8 + 6)
#define                                 IOCBP6_bit          _BIT_ACCESS(IOCBP,6)
// IOCBP<IOCBP7>
extern volatile __bit                   IOCBP7              __at(0x1CA7);	// @ (0x394 * 8 + 7)
#define                                 IOCBP7_bit          _BIT_ACCESS(IOCBP,7)
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
// LATA<LATA6>
extern volatile __bit                   LATA6               __at(0x866);	// @ (0x10C * 8 + 6)
#define                                 LATA6_bit           _BIT_ACCESS(LATA,6)
// LATA<LATA7>
extern volatile __bit                   LATA7               __at(0x867);	// @ (0x10C * 8 + 7)
#define                                 LATA7_bit           _BIT_ACCESS(LATA,7)
// LATB<LATB0>
extern volatile __bit                   LATB0               __at(0x868);	// @ (0x10D * 8 + 0)
#define                                 LATB0_bit           _BIT_ACCESS(LATB,0)
// LATB<LATB1>
extern volatile __bit                   LATB1               __at(0x869);	// @ (0x10D * 8 + 1)
#define                                 LATB1_bit           _BIT_ACCESS(LATB,1)
// LATB<LATB2>
extern volatile __bit                   LATB2               __at(0x86A);	// @ (0x10D * 8 + 2)
#define                                 LATB2_bit           _BIT_ACCESS(LATB,2)
// LATB<LATB3>
extern volatile __bit                   LATB3               __at(0x86B);	// @ (0x10D * 8 + 3)
#define                                 LATB3_bit           _BIT_ACCESS(LATB,3)
// LATB<LATB4>
extern volatile __bit                   LATB4               __at(0x86C);	// @ (0x10D * 8 + 4)
#define                                 LATB4_bit           _BIT_ACCESS(LATB,4)
// LATB<LATB5>
extern volatile __bit                   LATB5               __at(0x86D);	// @ (0x10D * 8 + 5)
#define                                 LATB5_bit           _BIT_ACCESS(LATB,5)
// LATB<LATB6>
extern volatile __bit                   LATB6               __at(0x86E);	// @ (0x10D * 8 + 6)
#define                                 LATB6_bit           _BIT_ACCESS(LATB,6)
// LATB<LATB7>
extern volatile __bit                   LATB7               __at(0x86F);	// @ (0x10D * 8 + 7)
#define                                 LATB7_bit           _BIT_ACCESS(LATB,7)
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
// LATC<LATC6>
extern volatile __bit                   LATC6               __at(0x876);	// @ (0x10E * 8 + 6)
#define                                 LATC6_bit           _BIT_ACCESS(LATC,6)
// LATC<LATC7>
extern volatile __bit                   LATC7               __at(0x877);	// @ (0x10E * 8 + 7)
#define                                 LATC7_bit           _BIT_ACCESS(LATC,7)
// LATD<LATD0>
extern volatile __bit                   LATD0               __at(0x878);	// @ (0x10F * 8 + 0)
#define                                 LATD0_bit           _BIT_ACCESS(LATD,0)
// LATD<LATD1>
extern volatile __bit                   LATD1               __at(0x879);	// @ (0x10F * 8 + 1)
#define                                 LATD1_bit           _BIT_ACCESS(LATD,1)
// LATD<LATD2>
extern volatile __bit                   LATD2               __at(0x87A);	// @ (0x10F * 8 + 2)
#define                                 LATD2_bit           _BIT_ACCESS(LATD,2)
// LATD<LATD3>
extern volatile __bit                   LATD3               __at(0x87B);	// @ (0x10F * 8 + 3)
#define                                 LATD3_bit           _BIT_ACCESS(LATD,3)
// LATD<LATD4>
extern volatile __bit                   LATD4               __at(0x87C);	// @ (0x10F * 8 + 4)
#define                                 LATD4_bit           _BIT_ACCESS(LATD,4)
// LATD<LATD5>
extern volatile __bit                   LATD5               __at(0x87D);	// @ (0x10F * 8 + 5)
#define                                 LATD5_bit           _BIT_ACCESS(LATD,5)
// LATD<LATD6>
extern volatile __bit                   LATD6               __at(0x87E);	// @ (0x10F * 8 + 6)
#define                                 LATD6_bit           _BIT_ACCESS(LATD,6)
// LATD<LATD7>
extern volatile __bit                   LATD7               __at(0x87F);	// @ (0x10F * 8 + 7)
#define                                 LATD7_bit           _BIT_ACCESS(LATD,7)
// LATE<LATE0>
extern volatile __bit                   LATE0               __at(0x880);	// @ (0x110 * 8 + 0)
#define                                 LATE0_bit           _BIT_ACCESS(LATE,0)
// LATE<LATE1>
extern volatile __bit                   LATE1               __at(0x881);	// @ (0x110 * 8 + 1)
#define                                 LATE1_bit           _BIT_ACCESS(LATE,1)
// LATE<LATE2>
extern volatile __bit                   LATE2               __at(0x882);	// @ (0x110 * 8 + 2)
#define                                 LATE2_bit           _BIT_ACCESS(LATE,2)
// LATE<LATE3>
extern volatile __bit                   LATE3               __at(0x883);	// @ (0x110 * 8 + 3)
#define                                 LATE3_bit           _BIT_ACCESS(LATE,3)
// LATE<LATE4>
extern volatile __bit                   LATE4               __at(0x884);	// @ (0x110 * 8 + 4)
#define                                 LATE4_bit           _BIT_ACCESS(LATE,4)
// LATE<LATE5>
extern volatile __bit                   LATE5               __at(0x885);	// @ (0x110 * 8 + 5)
#define                                 LATE5_bit           _BIT_ACCESS(LATE,5)
// LATE<LATE6>
extern volatile __bit                   LATE6               __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 LATE6_bit           _BIT_ACCESS(LATE,6)
// LATE<LATE7>
extern volatile __bit                   LATE7               __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 LATE7_bit           _BIT_ACCESS(LATE,7)
// LATF<LATF0>
extern volatile __bit                   LATF0               __at(0x1C60);	// @ (0x38C * 8 + 0)
#define                                 LATF0_bit           _BIT_ACCESS(LATF,0)
// LATF<LATF1>
extern volatile __bit                   LATF1               __at(0x1C61);	// @ (0x38C * 8 + 1)
#define                                 LATF1_bit           _BIT_ACCESS(LATF,1)
// LATF<LATF2>
extern volatile __bit                   LATF2               __at(0x1C62);	// @ (0x38C * 8 + 2)
#define                                 LATF2_bit           _BIT_ACCESS(LATF,2)
// LATF<LATF3>
extern volatile __bit                   LATF3               __at(0x1C63);	// @ (0x38C * 8 + 3)
#define                                 LATF3_bit           _BIT_ACCESS(LATF,3)
// LATF<LATF4>
extern volatile __bit                   LATF4               __at(0x1C64);	// @ (0x38C * 8 + 4)
#define                                 LATF4_bit           _BIT_ACCESS(LATF,4)
// LATF<LATF5>
extern volatile __bit                   LATF5               __at(0x1C65);	// @ (0x38C * 8 + 5)
#define                                 LATF5_bit           _BIT_ACCESS(LATF,5)
// LATF<LATF6>
extern volatile __bit                   LATF6               __at(0x1C66);	// @ (0x38C * 8 + 6)
#define                                 LATF6_bit           _BIT_ACCESS(LATF,6)
// LATF<LATF7>
extern volatile __bit                   LATF7               __at(0x1C67);	// @ (0x38C * 8 + 7)
#define                                 LATF7_bit           _BIT_ACCESS(LATF,7)
// LATG<LATG0>
extern volatile __bit                   LATG0               __at(0x1C68);	// @ (0x38D * 8 + 0)
#define                                 LATG0_bit           _BIT_ACCESS(LATG,0)
// LATG<LATG1>
extern volatile __bit                   LATG1               __at(0x1C69);	// @ (0x38D * 8 + 1)
#define                                 LATG1_bit           _BIT_ACCESS(LATG,1)
// LATG<LATG2>
extern volatile __bit                   LATG2               __at(0x1C6A);	// @ (0x38D * 8 + 2)
#define                                 LATG2_bit           _BIT_ACCESS(LATG,2)
// LATG<LATG3>
extern volatile __bit                   LATG3               __at(0x1C6B);	// @ (0x38D * 8 + 3)
#define                                 LATG3_bit           _BIT_ACCESS(LATG,3)
// LATG<LATG4>
extern volatile __bit                   LATG4               __at(0x1C6C);	// @ (0x38D * 8 + 4)
#define                                 LATG4_bit           _BIT_ACCESS(LATG,4)
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// PIE2<OSFIE>
extern volatile __bit                   OSFIE               __at(0x497);	// @ (0x92 * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<OSFIF>
extern volatile __bit                   OSFIF               __at(0x97);	// @ (0x12 * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR2,7)
// OSCSTAT<OSTS>
extern volatile __bit                   OSTS                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OSTS_bit            _BIT_ACCESS(OSCSTAT,5)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
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
// PORTA<RA6>
extern volatile __bit                   RA6                 __at(0x66);	// @ (0xC * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTA,6)
// PORTA<RA7>
extern volatile __bit                   RA7                 __at(0x67);	// @ (0xC * 8 + 7)
#define                                 RA7_bit             _BIT_ACCESS(PORTA,7)
// PORTB<RB0>
extern volatile __bit                   RB0                 __at(0x68);	// @ (0xD * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit                   RB1                 __at(0x69);	// @ (0xD * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit                   RB2                 __at(0x6A);	// @ (0xD * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit                   RB3                 __at(0x6B);	// @ (0xD * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x6F);	// @ (0xD * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x70);	// @ (0xE * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x71);	// @ (0xE * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RC1IE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RC1IF_bit           _BIT_ACCESS(PIR1,5)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x72);	// @ (0xE * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PIE4<RC2IE>
extern volatile __bit                   RC2IE               __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 RC2IE_bit           _BIT_ACCESS(PIE4,5)
// PIR4<RC2IF>
extern volatile __bit                   RC2IF               __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 RC2IF_bit           _BIT_ACCESS(PIR4,5)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x73);	// @ (0xE * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x74);	// @ (0xE * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x75);	// @ (0xE * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x76);	// @ (0xE * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x77);	// @ (0xE * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// PORTD<RD0>
extern volatile __bit                   RD0                 __at(0x78);	// @ (0xF * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit                   RD1                 __at(0x79);	// @ (0xF * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// PORTD<RD2>
extern volatile __bit                   RD2                 __at(0x7A);	// @ (0xF * 8 + 2)
#define                                 RD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<RD3>
extern volatile __bit                   RD3                 __at(0x7B);	// @ (0xF * 8 + 3)
#define                                 RD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<RD4>
extern volatile __bit                   RD4                 __at(0x7C);	// @ (0xF * 8 + 4)
#define                                 RD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<RD5>
extern volatile __bit                   RD5                 __at(0x7D);	// @ (0xF * 8 + 5)
#define                                 RD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<RD6>
extern volatile __bit                   RD6                 __at(0x7E);	// @ (0xF * 8 + 6)
#define                                 RD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<RD7>
extern volatile __bit                   RD7                 __at(0x7F);	// @ (0xF * 8 + 7)
#define                                 RD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<RE0>
extern volatile __bit                   RE0                 __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit                   RE1                 __at(0x81);	// @ (0x10 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE2>
extern volatile __bit                   RE2                 __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 RE2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// PORTE<RE4>
extern volatile __bit                   RE4                 __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 RE4_bit             _BIT_ACCESS(PORTE,4)
// PORTE<RE5>
extern volatile __bit                   RE5                 __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 RE5_bit             _BIT_ACCESS(PORTE,5)
// PORTE<RE6>
extern volatile __bit                   RE6                 __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 RE6_bit             _BIT_ACCESS(PORTE,6)
// PORTE<RE7>
extern volatile __bit                   RE7                 __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 RE7_bit             _BIT_ACCESS(PORTE,7)
// PORTF<RF0>
extern volatile __bit                   RF0                 __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 RF0_bit             _BIT_ACCESS(PORTF,0)
// PORTF<RF1>
extern volatile __bit                   RF1                 __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 RF1_bit             _BIT_ACCESS(PORTF,1)
// PORTF<RF2>
extern volatile __bit                   RF2                 __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 RF2_bit             _BIT_ACCESS(PORTF,2)
// PORTF<RF3>
extern volatile __bit                   RF3                 __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 RF3_bit             _BIT_ACCESS(PORTF,3)
// PORTF<RF4>
extern volatile __bit                   RF4                 __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 RF4_bit             _BIT_ACCESS(PORTF,4)
// PORTF<RF5>
extern volatile __bit                   RF5                 __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 RF5_bit             _BIT_ACCESS(PORTF,5)
// PORTF<RF6>
extern volatile __bit                   RF6                 __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 RF6_bit             _BIT_ACCESS(PORTF,6)
// PORTF<RF7>
extern volatile __bit                   RF7                 __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 RF7_bit             _BIT_ACCESS(PORTF,7)
// PORTG<RG0>
extern volatile __bit                   RG0                 __at(0x1468);	// @ (0x28D * 8 + 0)
#define                                 RG0_bit             _BIT_ACCESS(PORTG,0)
// PORTG<RG1>
extern volatile __bit                   RG1                 __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 RG1_bit             _BIT_ACCESS(PORTG,1)
// PORTG<RG2>
extern volatile __bit                   RG2                 __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 RG2_bit             _BIT_ACCESS(PORTG,2)
// PORTG<RG3>
extern volatile __bit                   RG3                 __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 RG3_bit             _BIT_ACCESS(PORTG,3)
// PORTG<RG4>
extern volatile __bit                   RG4                 __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 RG4_bit             _BIT_ACCESS(PORTG,4)
// PORTG<RG5>
extern volatile __bit                   RG5                 __at(0x146D);	// @ (0x28D * 8 + 5)
#define                                 RG5_bit             _BIT_ACCESS(PORTG,5)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// OSCSTAT<SOSCR>
extern volatile __bit                   SOSCR               __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 SOSCR_bit           _BIT_ACCESS(OSCSTAT,7)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// PIE4<SSP2IE>
extern volatile __bit                   SSP2IE              __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 SSP2IE_bit          _BIT_ACCESS(PIE4,0)
// PIR4<SSP2IF>
extern volatile __bit                   SSP2IF              __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 SSP2IF_bit          _BIT_ACCESS(PIR4,0)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
// PCON<STKOVF>
extern volatile __bit                   STKOVF              __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON,7)
// PCON<STKUNF>
extern volatile __bit                   STKUNF              __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON,6)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
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
// T10CON<T10CKPS0>
extern volatile __bit                   T10CKPS0            __at(0x2CF0);	// @ (0x59E * 8 + 0)
#define                                 T10CKPS0_bit        _BIT_ACCESS(T10CON,0)
// T10CON<T10CKPS1>
extern volatile __bit                   T10CKPS1            __at(0x2CF1);	// @ (0x59E * 8 + 1)
#define                                 T10CKPS1_bit        _BIT_ACCESS(T10CON,1)
// T10CON<T10OUTPS0>
extern volatile __bit                   T10OUTPS0           __at(0x2CF3);	// @ (0x59E * 8 + 3)
#define                                 T10OUTPS0_bit       _BIT_ACCESS(T10CON,3)
// T10CON<T10OUTPS1>
extern volatile __bit                   T10OUTPS1           __at(0x2CF4);	// @ (0x59E * 8 + 4)
#define                                 T10OUTPS1_bit       _BIT_ACCESS(T10CON,4)
// T10CON<T10OUTPS2>
extern volatile __bit                   T10OUTPS2           __at(0x2CF5);	// @ (0x59E * 8 + 5)
#define                                 T10OUTPS2_bit       _BIT_ACCESS(T10CON,5)
// T10CON<T10OUTPS3>
extern volatile __bit                   T10OUTPS3           __at(0x2CF6);	// @ (0x59E * 8 + 6)
#define                                 T10OUTPS3_bit       _BIT_ACCESS(T10CON,6)
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
// OSCSTAT<T1OSCR>
extern volatile __bit                   T1OSCR              __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 T1OSCR_bit          _BIT_ACCESS(OSCSTAT,7)
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
// APFCON<T3CKISEL>
extern volatile __bit                   T3CKISEL            __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 T3CKISEL_bit        _BIT_ACCESS(APFCON,1)
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x209C);	// @ (0x413 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x209D);	// @ (0x413 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// T3GCON<T3GGO_nDONE>
extern volatile __bit                   T3GGO_nDONE         __at(0x20A3);	// @ (0x414 * 8 + 3)
#define                                 T3GGO_nDONE_bit     _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GPOL>
extern volatile __bit                   T3GPOL              __at(0x20A6);	// @ (0x414 * 8 + 6)
#define                                 T3GPOL_bit          _BIT_ACCESS(T3GCON,6)
// T3GCON<T3GSPM>
extern volatile __bit                   T3GSPM              __at(0x20A4);	// @ (0x414 * 8 + 4)
#define                                 T3GSPM_bit          _BIT_ACCESS(T3GCON,4)
// T3GCON<T3GSS0>
extern volatile __bit                   T3GSS0              __at(0x20A0);	// @ (0x414 * 8 + 0)
#define                                 T3GSS0_bit          _BIT_ACCESS(T3GCON,0)
// T3GCON<T3GSS1>
extern volatile __bit                   T3GSS1              __at(0x20A1);	// @ (0x414 * 8 + 1)
#define                                 T3GSS1_bit          _BIT_ACCESS(T3GCON,1)
// T3GCON<T3GTM>
extern volatile __bit                   T3GTM               __at(0x20A5);	// @ (0x414 * 8 + 5)
#define                                 T3GTM_bit           _BIT_ACCESS(T3GCON,5)
// T3GCON<T3GVAL>
extern volatile __bit                   T3GVAL              __at(0x20A2);	// @ (0x414 * 8 + 2)
#define                                 T3GVAL_bit          _BIT_ACCESS(T3GCON,2)
// T3CON<T3OSCEN>
extern volatile __bit                   T3OSCEN             __at(0x209B);	// @ (0x413 * 8 + 3)
#define                                 T3OSCEN_bit         _BIT_ACCESS(T3CON,3)
// T4CON<T4CKPS0>
extern volatile __bit                   T4CKPS0             __at(0x20B8);	// @ (0x417 * 8 + 0)
#define                                 T4CKPS0_bit         _BIT_ACCESS(T4CON,0)
// T4CON<T4CKPS1>
extern volatile __bit                   T4CKPS1             __at(0x20B9);	// @ (0x417 * 8 + 1)
#define                                 T4CKPS1_bit         _BIT_ACCESS(T4CON,1)
// T4CON<T4OUTPS0>
extern volatile __bit                   T4OUTPS0            __at(0x20BB);	// @ (0x417 * 8 + 3)
#define                                 T4OUTPS0_bit        _BIT_ACCESS(T4CON,3)
// T4CON<T4OUTPS1>
extern volatile __bit                   T4OUTPS1            __at(0x20BC);	// @ (0x417 * 8 + 4)
#define                                 T4OUTPS1_bit        _BIT_ACCESS(T4CON,4)
// T4CON<T4OUTPS2>
extern volatile __bit                   T4OUTPS2            __at(0x20BD);	// @ (0x417 * 8 + 5)
#define                                 T4OUTPS2_bit        _BIT_ACCESS(T4CON,5)
// T4CON<T4OUTPS3>
extern volatile __bit                   T4OUTPS3            __at(0x20BE);	// @ (0x417 * 8 + 6)
#define                                 T4OUTPS3_bit        _BIT_ACCESS(T4CON,6)
// T5CON<T5CKPS0>
extern volatile __bit                   T5CKPS0             __at(0x20D4);	// @ (0x41A * 8 + 4)
#define                                 T5CKPS0_bit         _BIT_ACCESS(T5CON,4)
// T5CON<T5CKPS1>
extern volatile __bit                   T5CKPS1             __at(0x20D5);	// @ (0x41A * 8 + 5)
#define                                 T5CKPS1_bit         _BIT_ACCESS(T5CON,5)
// T5GCON<T5GGO_nDONE>
extern volatile __bit                   T5GGO_nDONE         __at(0x20DB);	// @ (0x41B * 8 + 3)
#define                                 T5GGO_nDONE_bit     _BIT_ACCESS(T5GCON,3)
// T5GCON<T5GPOL>
extern volatile __bit                   T5GPOL              __at(0x20DE);	// @ (0x41B * 8 + 6)
#define                                 T5GPOL_bit          _BIT_ACCESS(T5GCON,6)
// T5GCON<T5GSPM>
extern volatile __bit                   T5GSPM              __at(0x20DC);	// @ (0x41B * 8 + 4)
#define                                 T5GSPM_bit          _BIT_ACCESS(T5GCON,4)
// T5GCON<T5GSS0>
extern volatile __bit                   T5GSS0              __at(0x20D8);	// @ (0x41B * 8 + 0)
#define                                 T5GSS0_bit          _BIT_ACCESS(T5GCON,0)
// T5GCON<T5GSS1>
extern volatile __bit                   T5GSS1              __at(0x20D9);	// @ (0x41B * 8 + 1)
#define                                 T5GSS1_bit          _BIT_ACCESS(T5GCON,1)
// T5GCON<T5GTM>
extern volatile __bit                   T5GTM               __at(0x20DD);	// @ (0x41B * 8 + 5)
#define                                 T5GTM_bit           _BIT_ACCESS(T5GCON,5)
// T5GCON<T5GVAL>
extern volatile __bit                   T5GVAL              __at(0x20DA);	// @ (0x41B * 8 + 2)
#define                                 T5GVAL_bit          _BIT_ACCESS(T5GCON,2)
// T5CON<T5OSCEN>
extern volatile __bit                   T5OSCEN             __at(0x20D3);	// @ (0x41A * 8 + 3)
#define                                 T5OSCEN_bit         _BIT_ACCESS(T5CON,3)
// T6CON<T6CKPS0>
extern volatile __bit                   T6CKPS0             __at(0x20F0);	// @ (0x41E * 8 + 0)
#define                                 T6CKPS0_bit         _BIT_ACCESS(T6CON,0)
// T6CON<T6CKPS1>
extern volatile __bit                   T6CKPS1             __at(0x20F1);	// @ (0x41E * 8 + 1)
#define                                 T6CKPS1_bit         _BIT_ACCESS(T6CON,1)
// T6CON<T6OUTPS0>
extern volatile __bit                   T6OUTPS0            __at(0x20F3);	// @ (0x41E * 8 + 3)
#define                                 T6OUTPS0_bit        _BIT_ACCESS(T6CON,3)
// T6CON<T6OUTPS1>
extern volatile __bit                   T6OUTPS1            __at(0x20F4);	// @ (0x41E * 8 + 4)
#define                                 T6OUTPS1_bit        _BIT_ACCESS(T6CON,4)
// T6CON<T6OUTPS2>
extern volatile __bit                   T6OUTPS2            __at(0x20F5);	// @ (0x41E * 8 + 5)
#define                                 T6OUTPS2_bit        _BIT_ACCESS(T6CON,5)
// T6CON<T6OUTPS3>
extern volatile __bit                   T6OUTPS3            __at(0x20F6);	// @ (0x41E * 8 + 6)
#define                                 T6OUTPS3_bit        _BIT_ACCESS(T6CON,6)
// T8CON<T8CKPS0>
extern volatile __bit                   T8CKPS0             __at(0x2CB8);	// @ (0x597 * 8 + 0)
#define                                 T8CKPS0_bit         _BIT_ACCESS(T8CON,0)
// T8CON<T8CKPS1>
extern volatile __bit                   T8CKPS1             __at(0x2CB9);	// @ (0x597 * 8 + 1)
#define                                 T8CKPS1_bit         _BIT_ACCESS(T8CON,1)
// T8CON<T8OUTPS0>
extern volatile __bit                   T8OUTPS0            __at(0x2CBB);	// @ (0x597 * 8 + 3)
#define                                 T8OUTPS0_bit        _BIT_ACCESS(T8CON,3)
// T8CON<T8OUTPS1>
extern volatile __bit                   T8OUTPS1            __at(0x2CBC);	// @ (0x597 * 8 + 4)
#define                                 T8OUTPS1_bit        _BIT_ACCESS(T8CON,4)
// T8CON<T8OUTPS2>
extern volatile __bit                   T8OUTPS2            __at(0x2CBD);	// @ (0x597 * 8 + 5)
#define                                 T8OUTPS2_bit        _BIT_ACCESS(T8CON,5)
// T8CON<T8OUTPS3>
extern volatile __bit                   T8OUTPS3            __at(0x2CBE);	// @ (0x597 * 8 + 6)
#define                                 T8OUTPS3_bit        _BIT_ACCESS(T8CON,6)
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
// PIE2<TMR10IE>
extern volatile __bit                   TMR10IE             __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 TMR10IE_bit         _BIT_ACCESS(PIE2,2)
// PIR2<TMR10IF>
extern volatile __bit                   TMR10IF             __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TMR10IF_bit         _BIT_ACCESS(PIR2,2)
// T10CON<TMR10ON>
extern volatile __bit                   TMR10ON             __at(0x2CF2);	// @ (0x59E * 8 + 2)
#define                                 TMR10ON_bit         _BIT_ACCESS(T10CON,2)
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
// T3CON<TMR3CS0>
extern volatile __bit                   TMR3CS0             __at(0x209E);	// @ (0x413 * 8 + 6)
#define                                 TMR3CS0_bit         _BIT_ACCESS(T3CON,6)
// T3CON<TMR3CS1>
extern volatile __bit                   TMR3CS1             __at(0x209F);	// @ (0x413 * 8 + 7)
#define                                 TMR3CS1_bit         _BIT_ACCESS(T3CON,7)
// T3GCON<TMR3GE>
extern volatile __bit                   TMR3GE              __at(0x20A7);	// @ (0x414 * 8 + 7)
#define                                 TMR3GE_bit          _BIT_ACCESS(T3GCON,7)
// PIE2<TMR3GIE>
extern volatile __bit                   TMR3GIE             __at(0x495);	// @ (0x92 * 8 + 5)
#define                                 TMR3GIE_bit         _BIT_ACCESS(PIE2,5)
// PIR2<TMR3GIF>
extern volatile __bit                   TMR3GIF             __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 TMR3GIF_bit         _BIT_ACCESS(PIR2,5)
// PIE3<TMR3IE>
extern volatile __bit                   TMR3IE              __at(0x498);	// @ (0x93 * 8 + 0)
#define                                 TMR3IE_bit          _BIT_ACCESS(PIE3,0)
// PIR3<TMR3IF>
extern volatile __bit                   TMR3IF              __at(0x98);	// @ (0x13 * 8 + 0)
#define                                 TMR3IF_bit          _BIT_ACCESS(PIR3,0)
// T3CON<TMR3ON>
extern volatile __bit                   TMR3ON              __at(0x2098);	// @ (0x413 * 8 + 0)
#define                                 TMR3ON_bit          _BIT_ACCESS(T3CON,0)
// PIE3<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 TMR4IE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<TMR4IF>
extern volatile __bit                   TMR4IF              __at(0x99);	// @ (0x13 * 8 + 1)
#define                                 TMR4IF_bit          _BIT_ACCESS(PIR3,1)
// T4CON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x20BA);	// @ (0x417 * 8 + 2)
#define                                 TMR4ON_bit          _BIT_ACCESS(T4CON,2)
// T5CON<TMR5CS0>
extern volatile __bit                   TMR5CS0             __at(0x20D6);	// @ (0x41A * 8 + 6)
#define                                 TMR5CS0_bit         _BIT_ACCESS(T5CON,6)
// T5CON<TMR5CS1>
extern volatile __bit                   TMR5CS1             __at(0x20D7);	// @ (0x41A * 8 + 7)
#define                                 TMR5CS1_bit         _BIT_ACCESS(T5CON,7)
// T5GCON<TMR5GE>
extern volatile __bit                   TMR5GE              __at(0x20DF);	// @ (0x41B * 8 + 7)
#define                                 TMR5GE_bit          _BIT_ACCESS(T5GCON,7)
// PIE2<TMR5GIE>
extern volatile __bit                   TMR5GIE             __at(0x496);	// @ (0x92 * 8 + 6)
#define                                 TMR5GIE_bit         _BIT_ACCESS(PIE2,6)
// PIR2<TMR5GIF>
extern volatile __bit                   TMR5GIF             __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 TMR5GIF_bit         _BIT_ACCESS(PIR2,6)
// PIE3<TMR5IE>
extern volatile __bit                   TMR5IE              __at(0x49A);	// @ (0x93 * 8 + 2)
#define                                 TMR5IE_bit          _BIT_ACCESS(PIE3,2)
// PIR3<TMR5IF>
extern volatile __bit                   TMR5IF              __at(0x9A);	// @ (0x13 * 8 + 2)
#define                                 TMR5IF_bit          _BIT_ACCESS(PIR3,2)
// T5CON<TMR5ON>
extern volatile __bit                   TMR5ON              __at(0x20D0);	// @ (0x41A * 8 + 0)
#define                                 TMR5ON_bit          _BIT_ACCESS(T5CON,0)
// PIE3<TMR6IE>
extern volatile __bit                   TMR6IE              __at(0x49B);	// @ (0x93 * 8 + 3)
#define                                 TMR6IE_bit          _BIT_ACCESS(PIE3,3)
// PIR3<TMR6IF>
extern volatile __bit                   TMR6IF              __at(0x9B);	// @ (0x13 * 8 + 3)
#define                                 TMR6IF_bit          _BIT_ACCESS(PIR3,3)
// T6CON<TMR6ON>
extern volatile __bit                   TMR6ON              __at(0x20F2);	// @ (0x41E * 8 + 2)
#define                                 TMR6ON_bit          _BIT_ACCESS(T6CON,2)
// PIE2<TMR8IE>
extern volatile __bit                   TMR8IE              __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 TMR8IE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<TMR8IF>
extern volatile __bit                   TMR8IF              __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 TMR8IF_bit          _BIT_ACCESS(PIR2,1)
// T8CON<TMR8ON>
extern volatile __bit                   TMR8ON              __at(0x2CBA);	// @ (0x597 * 8 + 2)
#define                                 TMR8ON_bit          _BIT_ACCESS(T8CON,2)
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
// TRISA<TRISA6>
extern volatile __bit                   TRISA6              __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 TRISA6_bit          _BIT_ACCESS(TRISA,6)
// TRISA<TRISA7>
extern volatile __bit                   TRISA7              __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 TRISA7_bit          _BIT_ACCESS(TRISA,7)
// TRISB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x468);	// @ (0x8D * 8 + 0)
#define                                 TRISB0_bit          _BIT_ACCESS(TRISB,0)
// TRISB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x469);	// @ (0x8D * 8 + 1)
#define                                 TRISB1_bit          _BIT_ACCESS(TRISB,1)
// TRISB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x46A);	// @ (0x8D * 8 + 2)
#define                                 TRISB2_bit          _BIT_ACCESS(TRISB,2)
// TRISB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x46B);	// @ (0x8D * 8 + 3)
#define                                 TRISB3_bit          _BIT_ACCESS(TRISB,3)
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x46C);	// @ (0x8D * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISB,4)
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x46D);	// @ (0x8D * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISB,5)
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x46E);	// @ (0x8D * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISB,6)
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x46F);	// @ (0x8D * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISB,7)
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
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x476);	// @ (0x8E * 8 + 6)
#define                                 TRISC6_bit          _BIT_ACCESS(TRISC,6)
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x477);	// @ (0x8E * 8 + 7)
#define                                 TRISC7_bit          _BIT_ACCESS(TRISC,7)
// TRISD<TRISD0>
extern volatile __bit                   TRISD0              __at(0x478);	// @ (0x8F * 8 + 0)
#define                                 TRISD0_bit          _BIT_ACCESS(TRISD,0)
// TRISD<TRISD1>
extern volatile __bit                   TRISD1              __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 TRISD1_bit          _BIT_ACCESS(TRISD,1)
// TRISD<TRISD2>
extern volatile __bit                   TRISD2              __at(0x47A);	// @ (0x8F * 8 + 2)
#define                                 TRISD2_bit          _BIT_ACCESS(TRISD,2)
// TRISD<TRISD3>
extern volatile __bit                   TRISD3              __at(0x47B);	// @ (0x8F * 8 + 3)
#define                                 TRISD3_bit          _BIT_ACCESS(TRISD,3)
// TRISD<TRISD4>
extern volatile __bit                   TRISD4              __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 TRISD4_bit          _BIT_ACCESS(TRISD,4)
// TRISD<TRISD5>
extern volatile __bit                   TRISD5              __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 TRISD5_bit          _BIT_ACCESS(TRISD,5)
// TRISD<TRISD6>
extern volatile __bit                   TRISD6              __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 TRISD6_bit          _BIT_ACCESS(TRISD,6)
// TRISD<TRISD7>
extern volatile __bit                   TRISD7              __at(0x47F);	// @ (0x8F * 8 + 7)
#define                                 TRISD7_bit          _BIT_ACCESS(TRISD,7)
// TRISE<TRISE0>
extern volatile __bit                   TRISE0              __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 TRISE0_bit          _BIT_ACCESS(TRISE,0)
// TRISE<TRISE1>
extern volatile __bit                   TRISE1              __at(0x481);	// @ (0x90 * 8 + 1)
#define                                 TRISE1_bit          _BIT_ACCESS(TRISE,1)
// TRISE<TRISE2>
extern volatile __bit                   TRISE2              __at(0x482);	// @ (0x90 * 8 + 2)
#define                                 TRISE2_bit          _BIT_ACCESS(TRISE,2)
// TRISE<TRISE3>
extern volatile __bit                   TRISE3              __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 TRISE3_bit          _BIT_ACCESS(TRISE,3)
// TRISE<TRISE4>
extern volatile __bit                   TRISE4              __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 TRISE4_bit          _BIT_ACCESS(TRISE,4)
// TRISE<TRISE5>
extern volatile __bit                   TRISE5              __at(0x485);	// @ (0x90 * 8 + 5)
#define                                 TRISE5_bit          _BIT_ACCESS(TRISE,5)
// TRISE<TRISE6>
extern volatile __bit                   TRISE6              __at(0x486);	// @ (0x90 * 8 + 6)
#define                                 TRISE6_bit          _BIT_ACCESS(TRISE,6)
// TRISE<TRISE7>
extern volatile __bit                   TRISE7              __at(0x487);	// @ (0x90 * 8 + 7)
#define                                 TRISE7_bit          _BIT_ACCESS(TRISE,7)
// TRISF<TRISF0>
extern volatile __bit                   TRISF0              __at(0x1860);	// @ (0x30C * 8 + 0)
#define                                 TRISF0_bit          _BIT_ACCESS(TRISF,0)
// TRISF<TRISF1>
extern volatile __bit                   TRISF1              __at(0x1861);	// @ (0x30C * 8 + 1)
#define                                 TRISF1_bit          _BIT_ACCESS(TRISF,1)
// TRISF<TRISF2>
extern volatile __bit                   TRISF2              __at(0x1862);	// @ (0x30C * 8 + 2)
#define                                 TRISF2_bit          _BIT_ACCESS(TRISF,2)
// TRISF<TRISF3>
extern volatile __bit                   TRISF3              __at(0x1863);	// @ (0x30C * 8 + 3)
#define                                 TRISF3_bit          _BIT_ACCESS(TRISF,3)
// TRISF<TRISF4>
extern volatile __bit                   TRISF4              __at(0x1864);	// @ (0x30C * 8 + 4)
#define                                 TRISF4_bit          _BIT_ACCESS(TRISF,4)
// TRISF<TRISF5>
extern volatile __bit                   TRISF5              __at(0x1865);	// @ (0x30C * 8 + 5)
#define                                 TRISF5_bit          _BIT_ACCESS(TRISF,5)
// TRISF<TRISF6>
extern volatile __bit                   TRISF6              __at(0x1866);	// @ (0x30C * 8 + 6)
#define                                 TRISF6_bit          _BIT_ACCESS(TRISF,6)
// TRISF<TRISF7>
extern volatile __bit                   TRISF7              __at(0x1867);	// @ (0x30C * 8 + 7)
#define                                 TRISF7_bit          _BIT_ACCESS(TRISF,7)
// TRISG<TRISG0>
extern volatile __bit                   TRISG0              __at(0x1868);	// @ (0x30D * 8 + 0)
#define                                 TRISG0_bit          _BIT_ACCESS(TRISG,0)
// TRISG<TRISG1>
extern volatile __bit                   TRISG1              __at(0x1869);	// @ (0x30D * 8 + 1)
#define                                 TRISG1_bit          _BIT_ACCESS(TRISG,1)
// TRISG<TRISG2>
extern volatile __bit                   TRISG2              __at(0x186A);	// @ (0x30D * 8 + 2)
#define                                 TRISG2_bit          _BIT_ACCESS(TRISG,2)
// TRISG<TRISG3>
extern volatile __bit                   TRISG3              __at(0x186B);	// @ (0x30D * 8 + 3)
#define                                 TRISG3_bit          _BIT_ACCESS(TRISG,3)
// TRISG<TRISG4>
extern volatile __bit                   TRISG4              __at(0x186C);	// @ (0x30D * 8 + 4)
#define                                 TRISG4_bit          _BIT_ACCESS(TRISG,4)
// FVRCON<TSEN>
extern volatile __bit                   TSEN                __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 TSEN_bit            _BIT_ACCESS(FVRCON,5)
// FVRCON<TSRNG>
extern volatile __bit                   TSRNG               __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 TSRNG_bit           _BIT_ACCESS(FVRCON,4)
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TX1IE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TX1IF_bit           _BIT_ACCESS(PIR1,4)
// PIE4<TX2IE>
extern volatile __bit                   TX2IE               __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 TX2IE_bit           _BIT_ACCESS(PIE4,4)
// PIR4<TX2IF>
extern volatile __bit                   TX2IF               __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 TX2IF_bit           _BIT_ACCESS(PIR4,4)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
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
// WPUB<WPUB0>
extern volatile __bit                   WPUB0               __at(0x1068);	// @ (0x20D * 8 + 0)
#define                                 WPUB0_bit           _BIT_ACCESS(WPUB,0)
// WPUB<WPUB1>
extern volatile __bit                   WPUB1               __at(0x1069);	// @ (0x20D * 8 + 1)
#define                                 WPUB1_bit           _BIT_ACCESS(WPUB,1)
// WPUB<WPUB2>
extern volatile __bit                   WPUB2               __at(0x106A);	// @ (0x20D * 8 + 2)
#define                                 WPUB2_bit           _BIT_ACCESS(WPUB,2)
// WPUB<WPUB3>
extern volatile __bit                   WPUB3               __at(0x106B);	// @ (0x20D * 8 + 3)
#define                                 WPUB3_bit           _BIT_ACCESS(WPUB,3)
// WPUB<WPUB4>
extern volatile __bit                   WPUB4               __at(0x106C);	// @ (0x20D * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUB,4)
// WPUB<WPUB5>
extern volatile __bit                   WPUB5               __at(0x106D);	// @ (0x20D * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUB,5)
// WPUB<WPUB6>
extern volatile __bit                   WPUB6               __at(0x106E);	// @ (0x20D * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUB,6)
// WPUB<WPUB7>
extern volatile __bit                   WPUB7               __at(0x106F);	// @ (0x20D * 8 + 7)
#define                                 WPUB7_bit           _BIT_ACCESS(WPUB,7)
// WPUD<WPUD0>
extern volatile __bit                   WPUD0               __at(0x1078);	// @ (0x20F * 8 + 0)
#define                                 WPUD0_bit           _BIT_ACCESS(WPUD,0)
// WPUD<WPUD1>
extern volatile __bit                   WPUD1               __at(0x1079);	// @ (0x20F * 8 + 1)
#define                                 WPUD1_bit           _BIT_ACCESS(WPUD,1)
// WPUD<WPUD2>
extern volatile __bit                   WPUD2               __at(0x107A);	// @ (0x20F * 8 + 2)
#define                                 WPUD2_bit           _BIT_ACCESS(WPUD,2)
// WPUD<WPUD3>
extern volatile __bit                   WPUD3               __at(0x107B);	// @ (0x20F * 8 + 3)
#define                                 WPUD3_bit           _BIT_ACCESS(WPUD,3)
// WPUD<WPUD4>
extern volatile __bit                   WPUD4               __at(0x107C);	// @ (0x20F * 8 + 4)
#define                                 WPUD4_bit           _BIT_ACCESS(WPUD,4)
// WPUD<WPUD5>
extern volatile __bit                   WPUD5               __at(0x107D);	// @ (0x20F * 8 + 5)
#define                                 WPUD5_bit           _BIT_ACCESS(WPUD,5)
// WPUD<WPUD6>
extern volatile __bit                   WPUD6               __at(0x107E);	// @ (0x20F * 8 + 6)
#define                                 WPUD6_bit           _BIT_ACCESS(WPUD,6)
// WPUD<WPUD7>
extern volatile __bit                   WPUD7               __at(0x107F);	// @ (0x20F * 8 + 7)
#define                                 WPUD7_bit           _BIT_ACCESS(WPUD,7)
// WPUE<WPUE0>
extern volatile __bit                   WPUE0               __at(0x1080);	// @ (0x210 * 8 + 0)
#define                                 WPUE0_bit           _BIT_ACCESS(WPUE,0)
// WPUE<WPUE1>
extern volatile __bit                   WPUE1               __at(0x1081);	// @ (0x210 * 8 + 1)
#define                                 WPUE1_bit           _BIT_ACCESS(WPUE,1)
// WPUE<WPUE2>
extern volatile __bit                   WPUE2               __at(0x1082);	// @ (0x210 * 8 + 2)
#define                                 WPUE2_bit           _BIT_ACCESS(WPUE,2)
// WPUE<WPUE3>
extern volatile __bit                   WPUE3               __at(0x1083);	// @ (0x210 * 8 + 3)
#define                                 WPUE3_bit           _BIT_ACCESS(WPUE,3)
// WPUE<WPUE4>
extern volatile __bit                   WPUE4               __at(0x1084);	// @ (0x210 * 8 + 4)
#define                                 WPUE4_bit           _BIT_ACCESS(WPUE,4)
// WPUE<WPUE5>
extern volatile __bit                   WPUE5               __at(0x1085);	// @ (0x210 * 8 + 5)
#define                                 WPUE5_bit           _BIT_ACCESS(WPUE,5)
// WPUE<WPUE6>
extern volatile __bit                   WPUE6               __at(0x1086);	// @ (0x210 * 8 + 6)
#define                                 WPUE6_bit           _BIT_ACCESS(WPUE,6)
// WPUE<WPUE7>
extern volatile __bit                   WPUE7               __at(0x1087);	// @ (0x210 * 8 + 7)
#define                                 WPUE7_bit           _BIT_ACCESS(WPUE,7)
// WPUG<WPUG5>
extern volatile __bit                   WPUG5               __at(0x246D);	// @ (0x48D * 8 + 5)
#define                                 WPUG5_bit           _BIT_ACCESS(WPUG,5)
// PMCON1<WR>
extern volatile __bit                   WR                  __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(PMCON1,1)
// PMCON1<WREN>
extern volatile __bit                   WREN                __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(PMCON1,2)
// PMCON1<WRERR>
extern volatile __bit                   WRERR               __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(PMCON1,3)
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
// T3CON<nT3SYNC>
extern volatile __bit                   nT3SYNC             __at(0x209A);	// @ (0x413 * 8 + 2)
#define                                 nT3SYNC_bit         _BIT_ACCESS(T3CON,2)
// T5CON<nT5SYNC>
extern volatile __bit                   nT5SYNC             __at(0x20D2);	// @ (0x41A * 8 + 2)
#define                                 nT5SYNC_bit         _BIT_ACCESS(T5CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC16LF1527_H_
