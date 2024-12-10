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

#ifndef _PIC16LF1567_H_
#define _PIC16LF1567_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF1567
 */
#ifndef _XC_H_
#warning Header file pic16lf1567.h included directly. Use #include <xc.h> instead.
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
        unsigned SSP2IF                 :1;
        unsigned SSP1IF                 :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
    struct {
        unsigned                        :6;
        unsigned AD1IF                  :1;
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
#define _PIR1_SSP2IF_POSN                                   0x2
#define _PIR1_SSP2IF_POSITION                               0x2
#define _PIR1_SSP2IF_SIZE                                   0x1
#define _PIR1_SSP2IF_LENGTH                                 0x1
#define _PIR1_SSP2IF_MASK                                   0x4
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
#define _PIR1_AD1IF_POSN                                    0x6
#define _PIR1_AD1IF_POSITION                                0x6
#define _PIR1_AD1IF_SIZE                                    0x1
#define _PIR1_AD1IF_LENGTH                                  0x1
#define _PIR1_AD1IF_MASK                                    0x40

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
        unsigned TMR4IF                 :1;
        unsigned BCL2IF                 :1;
        unsigned BCL1IF                 :1;
        unsigned                        :2;
        unsigned AD2IF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_TMR4IF_POSN                                   0x1
#define _PIR2_TMR4IF_POSITION                               0x1
#define _PIR2_TMR4IF_SIZE                                   0x1
#define _PIR2_TMR4IF_LENGTH                                 0x1
#define _PIR2_TMR4IF_MASK                                   0x2
#define _PIR2_BCL2IF_POSN                                   0x2
#define _PIR2_BCL2IF_POSITION                               0x2
#define _PIR2_BCL2IF_SIZE                                   0x1
#define _PIR2_BCL2IF_LENGTH                                 0x1
#define _PIR2_BCL2IF_MASK                                   0x4
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_AD2IF_POSN                                    0x6
#define _PIR2_AD2IF_POSITION                                0x6
#define _PIR2_AD2IF_SIZE                                    0x1
#define _PIR2_AD2IF_LENGTH                                  0x1
#define _PIR2_AD2IF_MASK                                    0x40

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
        unsigned T1GSS                  :1;
        unsigned                        :1;
        unsigned T1GVAL                 :1;
        unsigned T1GGO_nDONE            :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS0                 :1;
        unsigned                        :2;
        unsigned GO                     :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x019);
// bitfield macros
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x1
#define _T1GCON_T1GSS_LENGTH                                0x1
#define _T1GCON_T1GSS_MASK                                  0x1
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
#define _T1GCON_GO_POSN                                     0x3
#define _T1GCON_GO_POSITION                                 0x3
#define _T1GCON_GO_SIZE                                     0x1
#define _T1GCON_GO_LENGTH                                   0x1
#define _T1GCON_GO_MASK                                     0x8

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
        unsigned SSP2IE                 :1;
        unsigned SSP1IE                 :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIE                  :1;
        unsigned                        :2;
        unsigned AD1IE                  :1;
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
#define _PIE1_SSP2IE_POSN                                   0x2
#define _PIE1_SSP2IE_POSITION                               0x2
#define _PIE1_SSP2IE_SIZE                                   0x1
#define _PIE1_SSP2IE_LENGTH                                 0x1
#define _PIE1_SSP2IE_MASK                                   0x4
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
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
#define _PIE1_AD1IE_POSN                                    0x6
#define _PIE1_AD1IE_POSITION                                0x6
#define _PIE1_AD1IE_SIZE                                    0x1
#define _PIE1_AD1IE_LENGTH                                  0x1
#define _PIE1_AD1IE_MASK                                    0x40

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
        unsigned TMR4IE                 :1;
        unsigned BCL2IE                 :1;
        unsigned BCL1IE                 :1;
        unsigned                        :2;
        unsigned AD2IE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_TMR4IE_POSN                                   0x1
#define _PIE2_TMR4IE_POSITION                               0x1
#define _PIE2_TMR4IE_SIZE                                   0x1
#define _PIE2_TMR4IE_LENGTH                                 0x1
#define _PIE2_TMR4IE_MASK                                   0x2
#define _PIE2_BCL2IE_POSN                                   0x2
#define _PIE2_BCL2IE_POSITION                               0x2
#define _PIE2_BCL2IE_SIZE                                   0x1
#define _PIE2_BCL2IE_LENGTH                                 0x1
#define _PIE2_BCL2IE_MASK                                   0x4
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_AD2IE_POSN                                    0x6
#define _PIE2_AD2IE_POSITION                                0x6
#define _PIE2_AD2IE_SIZE                                    0x1
#define _PIE2_AD2IE_LENGTH                                  0x1
#define _PIE2_AD2IE_MASK                                    0x40

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
        unsigned                        :2;
        unsigned HFIOFR                 :1;
        unsigned                        :1;
        unsigned PLLSR                  :1;
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
#define _OSCSTAT_PLLSR_POSN                                 0x6
#define _OSCSTAT_PLLSR_POSITION                             0x6
#define _OSCSTAT_PLLSR_SIZE                                 0x1
#define _OSCSTAT_PLLSR_LENGTH                               0x1
#define _OSCSTAT_PLLSR_MASK                                 0x40

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
        unsigned CHS                    :6;
    };
    struct {
        unsigned AD1ON                  :1;
        unsigned ADGO                   :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
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
#define _ADCON0_CHS_SIZE                                    0x6
#define _ADCON0_CHS_LENGTH                                  0x6
#define _ADCON0_CHS_MASK                                    0xFC
#define _ADCON0_AD1ON_POSN                                  0x0
#define _ADCON0_AD1ON_POSITION                              0x0
#define _ADCON0_AD1ON_SIZE                                  0x1
#define _ADCON0_AD1ON_LENGTH                                0x1
#define _ADCON0_AD1ON_MASK                                  0x1
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
#define _ADCON0_CHS5_POSN                                   0x7
#define _ADCON0_CHS5_POSITION                               0x7
#define _ADCON0_CHS5_SIZE                                   0x1
#define _ADCON0_CHS5_LENGTH                                 0x1
#define _ADCON0_CHS5_MASK                                   0x80
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
        unsigned GO_nDONE_ALL           :1;
        unsigned ADNREF                 :1;
        unsigned ADCS                   :3;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned GO_ALL                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09E);
// bitfield macros
#define _ADCON1_ADPREF_POSN                                 0x0
#define _ADCON1_ADPREF_POSITION                             0x0
#define _ADCON1_ADPREF_SIZE                                 0x2
#define _ADCON1_ADPREF_LENGTH                               0x2
#define _ADCON1_ADPREF_MASK                                 0x3
#define _ADCON1_GO_nDONE_ALL_POSN                           0x2
#define _ADCON1_GO_nDONE_ALL_POSITION                       0x2
#define _ADCON1_GO_nDONE_ALL_SIZE                           0x1
#define _ADCON1_GO_nDONE_ALL_LENGTH                         0x1
#define _ADCON1_GO_nDONE_ALL_MASK                           0x4
#define _ADCON1_ADNREF_POSN                                 0x3
#define _ADCON1_ADNREF_POSITION                             0x3
#define _ADCON1_ADNREF_SIZE                                 0x1
#define _ADCON1_ADNREF_LENGTH                               0x1
#define _ADCON1_ADNREF_MASK                                 0x8
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
#define _ADCON1_GO_ALL_POSN                                 0x2
#define _ADCON1_GO_ALL_POSITION                             0x2
#define _ADCON1_GO_ALL_SIZE                                 0x1
#define _ADCON1_GO_ALL_LENGTH                               0x1
#define _ADCON1_GO_ALL_MASK                                 0x4

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
        unsigned GRDASEL                :1;
        unsigned GRDBSEL                :1;
        unsigned                        :3;
        unsigned SSSEL                  :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_GRDASEL_POSN                                0x0
#define _APFCON_GRDASEL_POSITION                            0x0
#define _APFCON_GRDASEL_SIZE                                0x1
#define _APFCON_GRDASEL_LENGTH                              0x1
#define _APFCON_GRDASEL_MASK                                0x1
#define _APFCON_GRDBSEL_POSN                                0x1
#define _APFCON_GRDBSEL_POSITION                            0x1
#define _APFCON_GRDBSEL_SIZE                                0x1
#define _APFCON_GRDBSEL_LENGTH                              0x1
#define _APFCON_GRDBSEL_MASK                                0x2
#define _APFCON_SSSEL_POSN                                  0x5
#define _APFCON_SSSEL_POSITION                              0x5
#define _APFCON_SSSEL_SIZE                                  0x1
#define _APFCON_SSSEL_LENGTH                                0x1
#define _APFCON_SSSEL_MASK                                  0x20

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
        unsigned ANSA4                  :1;
        unsigned ANSA5                  :1;
        unsigned ANSA6                  :1;
        unsigned ANSA7                  :1;
    };
    struct {
        unsigned ANSELA                 :8;
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
#define _ANSELA_ANSA4_POSN                                  0x4
#define _ANSELA_ANSA4_POSITION                              0x4
#define _ANSELA_ANSA4_SIZE                                  0x1
#define _ANSELA_ANSA4_LENGTH                                0x1
#define _ANSELA_ANSA4_MASK                                  0x10
#define _ANSELA_ANSA5_POSN                                  0x5
#define _ANSELA_ANSA5_POSITION                              0x5
#define _ANSELA_ANSA5_SIZE                                  0x1
#define _ANSELA_ANSA5_LENGTH                                0x1
#define _ANSELA_ANSA5_MASK                                  0x20
#define _ANSELA_ANSA6_POSN                                  0x6
#define _ANSELA_ANSA6_POSITION                              0x6
#define _ANSELA_ANSA6_SIZE                                  0x1
#define _ANSELA_ANSA6_LENGTH                                0x1
#define _ANSELA_ANSA6_MASK                                  0x40
#define _ANSELA_ANSA7_POSN                                  0x7
#define _ANSELA_ANSA7_POSITION                              0x7
#define _ANSELA_ANSA7_SIZE                                  0x1
#define _ANSELA_ANSA7_LENGTH                                0x1
#define _ANSELA_ANSA7_MASK                                  0x80
#define _ANSELA_ANSELA_POSN                                 0x0
#define _ANSELA_ANSELA_POSITION                             0x0
#define _ANSELA_ANSELA_SIZE                                 0x8
#define _ANSELA_ANSELA_LENGTH                               0x8
#define _ANSELA_ANSELA_MASK                                 0xFF

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
        unsigned ANSB6                  :1;
        unsigned ANSB7                  :1;
    };
    struct {
        unsigned ANSELB                 :8;
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
#define _ANSELB_ANSB6_POSN                                  0x6
#define _ANSELB_ANSB6_POSITION                              0x6
#define _ANSELB_ANSB6_SIZE                                  0x1
#define _ANSELB_ANSB6_LENGTH                                0x1
#define _ANSELB_ANSB6_MASK                                  0x40
#define _ANSELB_ANSB7_POSN                                  0x7
#define _ANSELB_ANSB7_POSITION                              0x7
#define _ANSELB_ANSB7_SIZE                                  0x1
#define _ANSELB_ANSB7_LENGTH                                0x1
#define _ANSELB_ANSB7_MASK                                  0x80
#define _ANSELB_ANSELB_POSN                                 0x0
#define _ANSELB_ANSELB_POSITION                             0x0
#define _ANSELB_ANSELB_SIZE                                 0x8
#define _ANSELB_ANSELB_LENGTH                               0x8
#define _ANSELB_ANSELB_MASK                                 0xFF

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
        unsigned ANSC4                  :1;
        unsigned ANSC5                  :1;
        unsigned ANSC6                  :1;
        unsigned ANSC7                  :1;
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
#define _ANSELC_ANSC4_POSN                                  0x4
#define _ANSELC_ANSC4_POSITION                              0x4
#define _ANSELC_ANSC4_SIZE                                  0x1
#define _ANSELC_ANSC4_LENGTH                                0x1
#define _ANSELC_ANSC4_MASK                                  0x10
#define _ANSELC_ANSC5_POSN                                  0x5
#define _ANSELC_ANSC5_POSITION                              0x5
#define _ANSELC_ANSC5_SIZE                                  0x1
#define _ANSELC_ANSC5_LENGTH                                0x1
#define _ANSELC_ANSC5_MASK                                  0x20
#define _ANSELC_ANSC6_POSN                                  0x6
#define _ANSELC_ANSC6_POSITION                              0x6
#define _ANSELC_ANSC6_SIZE                                  0x1
#define _ANSELC_ANSC6_LENGTH                                0x1
#define _ANSELC_ANSC6_MASK                                  0x40
#define _ANSELC_ANSC7_POSN                                  0x7
#define _ANSELC_ANSC7_POSITION                              0x7
#define _ANSELC_ANSC7_SIZE                                  0x1
#define _ANSELC_ANSC7_LENGTH                                0x1
#define _ANSELC_ANSC7_MASK                                  0x80
#define _ANSELC_ANSELC_POSN                                 0x0
#define _ANSELC_ANSELC_POSITION                             0x0
#define _ANSELC_ANSELC_SIZE                                 0x8
#define _ANSELC_ANSELC_LENGTH                               0x8
#define _ANSELC_ANSELC_MASK                                 0xFF

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
        unsigned ANSD4                  :1;
        unsigned ANSD5                  :1;
        unsigned ANSD6                  :1;
        unsigned ANSD7                  :1;
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
#define _ANSELD_ANSD4_POSN                                  0x4
#define _ANSELD_ANSD4_POSITION                              0x4
#define _ANSELD_ANSD4_SIZE                                  0x1
#define _ANSELD_ANSD4_LENGTH                                0x1
#define _ANSELD_ANSD4_MASK                                  0x10
#define _ANSELD_ANSD5_POSN                                  0x5
#define _ANSELD_ANSD5_POSITION                              0x5
#define _ANSELD_ANSD5_SIZE                                  0x1
#define _ANSELD_ANSD5_LENGTH                                0x1
#define _ANSELD_ANSD5_MASK                                  0x20
#define _ANSELD_ANSD6_POSN                                  0x6
#define _ANSELD_ANSD6_POSITION                              0x6
#define _ANSELD_ANSD6_SIZE                                  0x1
#define _ANSELD_ANSD6_LENGTH                                0x1
#define _ANSELD_ANSD6_MASK                                  0x40
#define _ANSELD_ANSD7_POSN                                  0x7
#define _ANSELD_ANSD7_POSITION                              0x7
#define _ANSELD_ANSD7_SIZE                                  0x1
#define _ANSELD_ANSD7_LENGTH                                0x1
#define _ANSELD_ANSD7_MASK                                  0x80
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
        unsigned ANSELE                 :8;
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
#define _ANSELE_ANSELE_SIZE                                 0x8
#define _ANSELE_ANSELE_LENGTH                               0x8
#define _ANSELE_ANSELE_MASK                                 0xFF

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

// Register: WPUE
#define WPUE WPUE
extern volatile unsigned char           WPUE                __at(0x210);
#ifndef _LIB_BUILD
asm("WPUE equ 0210h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned WPUE3                  :1;
    };
    struct {
        unsigned WPUE                   :8;
    };
} WPUEbits_t;
extern volatile WPUEbits_t WPUEbits __at(0x210);
// bitfield macros
#define _WPUE_WPUE3_POSN                                    0x3
#define _WPUE_WPUE3_POSITION                                0x3
#define _WPUE_WPUE3_SIZE                                    0x1
#define _WPUE_WPUE3_LENGTH                                  0x1
#define _WPUE_WPUE3_MASK                                    0x8
#define _WPUE_WPUE_POSN                                     0x0
#define _WPUE_WPUE_POSITION                                 0x0
#define _WPUE_WPUE_SIZE                                     0x8
#define _WPUE_WPUE_LENGTH                                   0x8
#define _WPUE_WPUE_MASK                                     0xFF

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
        unsigned SSP1BUF0               :1;
        unsigned SSP1BUF1               :1;
        unsigned SSP1BUF2               :1;
        unsigned SSP1BUF3               :1;
        unsigned SSP1BUF4               :1;
        unsigned SSP1BUF5               :1;
        unsigned SSP1BUF6               :1;
        unsigned SSP1BUF7               :1;
    };
    struct {
        unsigned BUF                    :8;
    };
    struct {
        unsigned BUF0                   :1;
        unsigned BUF1                   :1;
        unsigned BUF2                   :1;
        unsigned BUF3                   :1;
        unsigned BUF4                   :1;
        unsigned BUF5                   :1;
        unsigned BUF6                   :1;
        unsigned BUF7                   :1;
    };
    struct {
        unsigned SSP1BUF                :8;
    };
} SSP1BUFbits_t;
extern volatile SSP1BUFbits_t SSP1BUFbits __at(0x211);
// bitfield macros
#define _SSP1BUF_SSP1BUF0_POSN                              0x0
#define _SSP1BUF_SSP1BUF0_POSITION                          0x0
#define _SSP1BUF_SSP1BUF0_SIZE                              0x1
#define _SSP1BUF_SSP1BUF0_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF0_MASK                              0x1
#define _SSP1BUF_SSP1BUF1_POSN                              0x1
#define _SSP1BUF_SSP1BUF1_POSITION                          0x1
#define _SSP1BUF_SSP1BUF1_SIZE                              0x1
#define _SSP1BUF_SSP1BUF1_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF1_MASK                              0x2
#define _SSP1BUF_SSP1BUF2_POSN                              0x2
#define _SSP1BUF_SSP1BUF2_POSITION                          0x2
#define _SSP1BUF_SSP1BUF2_SIZE                              0x1
#define _SSP1BUF_SSP1BUF2_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF2_MASK                              0x4
#define _SSP1BUF_SSP1BUF3_POSN                              0x3
#define _SSP1BUF_SSP1BUF3_POSITION                          0x3
#define _SSP1BUF_SSP1BUF3_SIZE                              0x1
#define _SSP1BUF_SSP1BUF3_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF3_MASK                              0x8
#define _SSP1BUF_SSP1BUF4_POSN                              0x4
#define _SSP1BUF_SSP1BUF4_POSITION                          0x4
#define _SSP1BUF_SSP1BUF4_SIZE                              0x1
#define _SSP1BUF_SSP1BUF4_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF4_MASK                              0x10
#define _SSP1BUF_SSP1BUF5_POSN                              0x5
#define _SSP1BUF_SSP1BUF5_POSITION                          0x5
#define _SSP1BUF_SSP1BUF5_SIZE                              0x1
#define _SSP1BUF_SSP1BUF5_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF5_MASK                              0x20
#define _SSP1BUF_SSP1BUF6_POSN                              0x6
#define _SSP1BUF_SSP1BUF6_POSITION                          0x6
#define _SSP1BUF_SSP1BUF6_SIZE                              0x1
#define _SSP1BUF_SSP1BUF6_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF6_MASK                              0x40
#define _SSP1BUF_SSP1BUF7_POSN                              0x7
#define _SSP1BUF_SSP1BUF7_POSITION                          0x7
#define _SSP1BUF_SSP1BUF7_SIZE                              0x1
#define _SSP1BUF_SSP1BUF7_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF7_MASK                              0x80
#define _SSP1BUF_BUF_POSN                                   0x0
#define _SSP1BUF_BUF_POSITION                               0x0
#define _SSP1BUF_BUF_SIZE                                   0x8
#define _SSP1BUF_BUF_LENGTH                                 0x8
#define _SSP1BUF_BUF_MASK                                   0xFF
#define _SSP1BUF_BUF0_POSN                                  0x0
#define _SSP1BUF_BUF0_POSITION                              0x0
#define _SSP1BUF_BUF0_SIZE                                  0x1
#define _SSP1BUF_BUF0_LENGTH                                0x1
#define _SSP1BUF_BUF0_MASK                                  0x1
#define _SSP1BUF_BUF1_POSN                                  0x1
#define _SSP1BUF_BUF1_POSITION                              0x1
#define _SSP1BUF_BUF1_SIZE                                  0x1
#define _SSP1BUF_BUF1_LENGTH                                0x1
#define _SSP1BUF_BUF1_MASK                                  0x2
#define _SSP1BUF_BUF2_POSN                                  0x2
#define _SSP1BUF_BUF2_POSITION                              0x2
#define _SSP1BUF_BUF2_SIZE                                  0x1
#define _SSP1BUF_BUF2_LENGTH                                0x1
#define _SSP1BUF_BUF2_MASK                                  0x4
#define _SSP1BUF_BUF3_POSN                                  0x3
#define _SSP1BUF_BUF3_POSITION                              0x3
#define _SSP1BUF_BUF3_SIZE                                  0x1
#define _SSP1BUF_BUF3_LENGTH                                0x1
#define _SSP1BUF_BUF3_MASK                                  0x8
#define _SSP1BUF_BUF4_POSN                                  0x4
#define _SSP1BUF_BUF4_POSITION                              0x4
#define _SSP1BUF_BUF4_SIZE                                  0x1
#define _SSP1BUF_BUF4_LENGTH                                0x1
#define _SSP1BUF_BUF4_MASK                                  0x10
#define _SSP1BUF_BUF5_POSN                                  0x5
#define _SSP1BUF_BUF5_POSITION                              0x5
#define _SSP1BUF_BUF5_SIZE                                  0x1
#define _SSP1BUF_BUF5_LENGTH                                0x1
#define _SSP1BUF_BUF5_MASK                                  0x20
#define _SSP1BUF_BUF6_POSN                                  0x6
#define _SSP1BUF_BUF6_POSITION                              0x6
#define _SSP1BUF_BUF6_SIZE                                  0x1
#define _SSP1BUF_BUF6_LENGTH                                0x1
#define _SSP1BUF_BUF6_MASK                                  0x40
#define _SSP1BUF_BUF7_POSN                                  0x7
#define _SSP1BUF_BUF7_POSITION                              0x7
#define _SSP1BUF_BUF7_SIZE                                  0x1
#define _SSP1BUF_BUF7_LENGTH                                0x1
#define _SSP1BUF_BUF7_MASK                                  0x80
#define _SSP1BUF_SSP1BUF_POSN                               0x0
#define _SSP1BUF_SSP1BUF_POSITION                           0x0
#define _SSP1BUF_SSP1BUF_SIZE                               0x8
#define _SSP1BUF_SSP1BUF_LENGTH                             0x8
#define _SSP1BUF_SSP1BUF_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1BUF0               :1;
        unsigned SSP1BUF1               :1;
        unsigned SSP1BUF2               :1;
        unsigned SSP1BUF3               :1;
        unsigned SSP1BUF4               :1;
        unsigned SSP1BUF5               :1;
        unsigned SSP1BUF6               :1;
        unsigned SSP1BUF7               :1;
    };
    struct {
        unsigned BUF                    :8;
    };
    struct {
        unsigned BUF0                   :1;
        unsigned BUF1                   :1;
        unsigned BUF2                   :1;
        unsigned BUF3                   :1;
        unsigned BUF4                   :1;
        unsigned BUF5                   :1;
        unsigned BUF6                   :1;
        unsigned BUF7                   :1;
    };
    struct {
        unsigned SSP1BUF                :8;
    };
} SSPBUFbits_t;
extern volatile SSPBUFbits_t SSPBUFbits __at(0x211);
// bitfield macros
#define _SSPBUF_SSP1BUF0_POSN                               0x0
#define _SSPBUF_SSP1BUF0_POSITION                           0x0
#define _SSPBUF_SSP1BUF0_SIZE                               0x1
#define _SSPBUF_SSP1BUF0_LENGTH                             0x1
#define _SSPBUF_SSP1BUF0_MASK                               0x1
#define _SSPBUF_SSP1BUF1_POSN                               0x1
#define _SSPBUF_SSP1BUF1_POSITION                           0x1
#define _SSPBUF_SSP1BUF1_SIZE                               0x1
#define _SSPBUF_SSP1BUF1_LENGTH                             0x1
#define _SSPBUF_SSP1BUF1_MASK                               0x2
#define _SSPBUF_SSP1BUF2_POSN                               0x2
#define _SSPBUF_SSP1BUF2_POSITION                           0x2
#define _SSPBUF_SSP1BUF2_SIZE                               0x1
#define _SSPBUF_SSP1BUF2_LENGTH                             0x1
#define _SSPBUF_SSP1BUF2_MASK                               0x4
#define _SSPBUF_SSP1BUF3_POSN                               0x3
#define _SSPBUF_SSP1BUF3_POSITION                           0x3
#define _SSPBUF_SSP1BUF3_SIZE                               0x1
#define _SSPBUF_SSP1BUF3_LENGTH                             0x1
#define _SSPBUF_SSP1BUF3_MASK                               0x8
#define _SSPBUF_SSP1BUF4_POSN                               0x4
#define _SSPBUF_SSP1BUF4_POSITION                           0x4
#define _SSPBUF_SSP1BUF4_SIZE                               0x1
#define _SSPBUF_SSP1BUF4_LENGTH                             0x1
#define _SSPBUF_SSP1BUF4_MASK                               0x10
#define _SSPBUF_SSP1BUF5_POSN                               0x5
#define _SSPBUF_SSP1BUF5_POSITION                           0x5
#define _SSPBUF_SSP1BUF5_SIZE                               0x1
#define _SSPBUF_SSP1BUF5_LENGTH                             0x1
#define _SSPBUF_SSP1BUF5_MASK                               0x20
#define _SSPBUF_SSP1BUF6_POSN                               0x6
#define _SSPBUF_SSP1BUF6_POSITION                           0x6
#define _SSPBUF_SSP1BUF6_SIZE                               0x1
#define _SSPBUF_SSP1BUF6_LENGTH                             0x1
#define _SSPBUF_SSP1BUF6_MASK                               0x40
#define _SSPBUF_SSP1BUF7_POSN                               0x7
#define _SSPBUF_SSP1BUF7_POSITION                           0x7
#define _SSPBUF_SSP1BUF7_SIZE                               0x1
#define _SSPBUF_SSP1BUF7_LENGTH                             0x1
#define _SSPBUF_SSP1BUF7_MASK                               0x80
#define _SSPBUF_BUF_POSN                                    0x0
#define _SSPBUF_BUF_POSITION                                0x0
#define _SSPBUF_BUF_SIZE                                    0x8
#define _SSPBUF_BUF_LENGTH                                  0x8
#define _SSPBUF_BUF_MASK                                    0xFF
#define _SSPBUF_BUF0_POSN                                   0x0
#define _SSPBUF_BUF0_POSITION                               0x0
#define _SSPBUF_BUF0_SIZE                                   0x1
#define _SSPBUF_BUF0_LENGTH                                 0x1
#define _SSPBUF_BUF0_MASK                                   0x1
#define _SSPBUF_BUF1_POSN                                   0x1
#define _SSPBUF_BUF1_POSITION                               0x1
#define _SSPBUF_BUF1_SIZE                                   0x1
#define _SSPBUF_BUF1_LENGTH                                 0x1
#define _SSPBUF_BUF1_MASK                                   0x2
#define _SSPBUF_BUF2_POSN                                   0x2
#define _SSPBUF_BUF2_POSITION                               0x2
#define _SSPBUF_BUF2_SIZE                                   0x1
#define _SSPBUF_BUF2_LENGTH                                 0x1
#define _SSPBUF_BUF2_MASK                                   0x4
#define _SSPBUF_BUF3_POSN                                   0x3
#define _SSPBUF_BUF3_POSITION                               0x3
#define _SSPBUF_BUF3_SIZE                                   0x1
#define _SSPBUF_BUF3_LENGTH                                 0x1
#define _SSPBUF_BUF3_MASK                                   0x8
#define _SSPBUF_BUF4_POSN                                   0x4
#define _SSPBUF_BUF4_POSITION                               0x4
#define _SSPBUF_BUF4_SIZE                                   0x1
#define _SSPBUF_BUF4_LENGTH                                 0x1
#define _SSPBUF_BUF4_MASK                                   0x10
#define _SSPBUF_BUF5_POSN                                   0x5
#define _SSPBUF_BUF5_POSITION                               0x5
#define _SSPBUF_BUF5_SIZE                                   0x1
#define _SSPBUF_BUF5_LENGTH                                 0x1
#define _SSPBUF_BUF5_MASK                                   0x20
#define _SSPBUF_BUF6_POSN                                   0x6
#define _SSPBUF_BUF6_POSITION                               0x6
#define _SSPBUF_BUF6_SIZE                                   0x1
#define _SSPBUF_BUF6_LENGTH                                 0x1
#define _SSPBUF_BUF6_MASK                                   0x40
#define _SSPBUF_BUF7_POSN                                   0x7
#define _SSPBUF_BUF7_POSITION                               0x7
#define _SSPBUF_BUF7_SIZE                                   0x1
#define _SSPBUF_BUF7_LENGTH                                 0x1
#define _SSPBUF_BUF7_MASK                                   0x80
#define _SSPBUF_SSP1BUF_POSN                                0x0
#define _SSPBUF_SSP1BUF_POSITION                            0x0
#define _SSPBUF_SSP1BUF_SIZE                                0x8
#define _SSPBUF_SSP1BUF_LENGTH                              0x8
#define _SSPBUF_SSP1BUF_MASK                                0xFF

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
        unsigned SSP1ADD0               :1;
        unsigned SSP1ADD1               :1;
        unsigned SSP1ADD2               :1;
        unsigned SSP1ADD3               :1;
        unsigned SSP1ADD4               :1;
        unsigned SSP1ADD5               :1;
        unsigned SSP1ADD6               :1;
        unsigned SSP1ADD7               :1;
    };
    struct {
        unsigned ADD                    :8;
    };
    struct {
        unsigned ADD0                   :1;
        unsigned ADD1                   :1;
        unsigned ADD2                   :1;
        unsigned ADD3                   :1;
        unsigned ADD4                   :1;
        unsigned ADD5                   :1;
        unsigned ADD6                   :1;
        unsigned ADD7                   :1;
    };
    struct {
        unsigned SSP1ADD                :8;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0x212);
// bitfield macros
#define _SSP1ADD_SSP1ADD0_POSN                              0x0
#define _SSP1ADD_SSP1ADD0_POSITION                          0x0
#define _SSP1ADD_SSP1ADD0_SIZE                              0x1
#define _SSP1ADD_SSP1ADD0_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD0_MASK                              0x1
#define _SSP1ADD_SSP1ADD1_POSN                              0x1
#define _SSP1ADD_SSP1ADD1_POSITION                          0x1
#define _SSP1ADD_SSP1ADD1_SIZE                              0x1
#define _SSP1ADD_SSP1ADD1_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD1_MASK                              0x2
#define _SSP1ADD_SSP1ADD2_POSN                              0x2
#define _SSP1ADD_SSP1ADD2_POSITION                          0x2
#define _SSP1ADD_SSP1ADD2_SIZE                              0x1
#define _SSP1ADD_SSP1ADD2_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD2_MASK                              0x4
#define _SSP1ADD_SSP1ADD3_POSN                              0x3
#define _SSP1ADD_SSP1ADD3_POSITION                          0x3
#define _SSP1ADD_SSP1ADD3_SIZE                              0x1
#define _SSP1ADD_SSP1ADD3_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD3_MASK                              0x8
#define _SSP1ADD_SSP1ADD4_POSN                              0x4
#define _SSP1ADD_SSP1ADD4_POSITION                          0x4
#define _SSP1ADD_SSP1ADD4_SIZE                              0x1
#define _SSP1ADD_SSP1ADD4_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD4_MASK                              0x10
#define _SSP1ADD_SSP1ADD5_POSN                              0x5
#define _SSP1ADD_SSP1ADD5_POSITION                          0x5
#define _SSP1ADD_SSP1ADD5_SIZE                              0x1
#define _SSP1ADD_SSP1ADD5_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD5_MASK                              0x20
#define _SSP1ADD_SSP1ADD6_POSN                              0x6
#define _SSP1ADD_SSP1ADD6_POSITION                          0x6
#define _SSP1ADD_SSP1ADD6_SIZE                              0x1
#define _SSP1ADD_SSP1ADD6_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD6_MASK                              0x40
#define _SSP1ADD_SSP1ADD7_POSN                              0x7
#define _SSP1ADD_SSP1ADD7_POSITION                          0x7
#define _SSP1ADD_SSP1ADD7_SIZE                              0x1
#define _SSP1ADD_SSP1ADD7_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD7_MASK                              0x80
#define _SSP1ADD_ADD_POSN                                   0x0
#define _SSP1ADD_ADD_POSITION                               0x0
#define _SSP1ADD_ADD_SIZE                                   0x8
#define _SSP1ADD_ADD_LENGTH                                 0x8
#define _SSP1ADD_ADD_MASK                                   0xFF
#define _SSP1ADD_ADD0_POSN                                  0x0
#define _SSP1ADD_ADD0_POSITION                              0x0
#define _SSP1ADD_ADD0_SIZE                                  0x1
#define _SSP1ADD_ADD0_LENGTH                                0x1
#define _SSP1ADD_ADD0_MASK                                  0x1
#define _SSP1ADD_ADD1_POSN                                  0x1
#define _SSP1ADD_ADD1_POSITION                              0x1
#define _SSP1ADD_ADD1_SIZE                                  0x1
#define _SSP1ADD_ADD1_LENGTH                                0x1
#define _SSP1ADD_ADD1_MASK                                  0x2
#define _SSP1ADD_ADD2_POSN                                  0x2
#define _SSP1ADD_ADD2_POSITION                              0x2
#define _SSP1ADD_ADD2_SIZE                                  0x1
#define _SSP1ADD_ADD2_LENGTH                                0x1
#define _SSP1ADD_ADD2_MASK                                  0x4
#define _SSP1ADD_ADD3_POSN                                  0x3
#define _SSP1ADD_ADD3_POSITION                              0x3
#define _SSP1ADD_ADD3_SIZE                                  0x1
#define _SSP1ADD_ADD3_LENGTH                                0x1
#define _SSP1ADD_ADD3_MASK                                  0x8
#define _SSP1ADD_ADD4_POSN                                  0x4
#define _SSP1ADD_ADD4_POSITION                              0x4
#define _SSP1ADD_ADD4_SIZE                                  0x1
#define _SSP1ADD_ADD4_LENGTH                                0x1
#define _SSP1ADD_ADD4_MASK                                  0x10
#define _SSP1ADD_ADD5_POSN                                  0x5
#define _SSP1ADD_ADD5_POSITION                              0x5
#define _SSP1ADD_ADD5_SIZE                                  0x1
#define _SSP1ADD_ADD5_LENGTH                                0x1
#define _SSP1ADD_ADD5_MASK                                  0x20
#define _SSP1ADD_ADD6_POSN                                  0x6
#define _SSP1ADD_ADD6_POSITION                              0x6
#define _SSP1ADD_ADD6_SIZE                                  0x1
#define _SSP1ADD_ADD6_LENGTH                                0x1
#define _SSP1ADD_ADD6_MASK                                  0x40
#define _SSP1ADD_ADD7_POSN                                  0x7
#define _SSP1ADD_ADD7_POSITION                              0x7
#define _SSP1ADD_ADD7_SIZE                                  0x1
#define _SSP1ADD_ADD7_LENGTH                                0x1
#define _SSP1ADD_ADD7_MASK                                  0x80
#define _SSP1ADD_SSP1ADD_POSN                               0x0
#define _SSP1ADD_SSP1ADD_POSITION                           0x0
#define _SSP1ADD_SSP1ADD_SIZE                               0x8
#define _SSP1ADD_SSP1ADD_LENGTH                             0x8
#define _SSP1ADD_SSP1ADD_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1ADD0               :1;
        unsigned SSP1ADD1               :1;
        unsigned SSP1ADD2               :1;
        unsigned SSP1ADD3               :1;
        unsigned SSP1ADD4               :1;
        unsigned SSP1ADD5               :1;
        unsigned SSP1ADD6               :1;
        unsigned SSP1ADD7               :1;
    };
    struct {
        unsigned ADD                    :8;
    };
    struct {
        unsigned ADD0                   :1;
        unsigned ADD1                   :1;
        unsigned ADD2                   :1;
        unsigned ADD3                   :1;
        unsigned ADD4                   :1;
        unsigned ADD5                   :1;
        unsigned ADD6                   :1;
        unsigned ADD7                   :1;
    };
    struct {
        unsigned SSP1ADD                :8;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0x212);
// bitfield macros
#define _SSPADD_SSP1ADD0_POSN                               0x0
#define _SSPADD_SSP1ADD0_POSITION                           0x0
#define _SSPADD_SSP1ADD0_SIZE                               0x1
#define _SSPADD_SSP1ADD0_LENGTH                             0x1
#define _SSPADD_SSP1ADD0_MASK                               0x1
#define _SSPADD_SSP1ADD1_POSN                               0x1
#define _SSPADD_SSP1ADD1_POSITION                           0x1
#define _SSPADD_SSP1ADD1_SIZE                               0x1
#define _SSPADD_SSP1ADD1_LENGTH                             0x1
#define _SSPADD_SSP1ADD1_MASK                               0x2
#define _SSPADD_SSP1ADD2_POSN                               0x2
#define _SSPADD_SSP1ADD2_POSITION                           0x2
#define _SSPADD_SSP1ADD2_SIZE                               0x1
#define _SSPADD_SSP1ADD2_LENGTH                             0x1
#define _SSPADD_SSP1ADD2_MASK                               0x4
#define _SSPADD_SSP1ADD3_POSN                               0x3
#define _SSPADD_SSP1ADD3_POSITION                           0x3
#define _SSPADD_SSP1ADD3_SIZE                               0x1
#define _SSPADD_SSP1ADD3_LENGTH                             0x1
#define _SSPADD_SSP1ADD3_MASK                               0x8
#define _SSPADD_SSP1ADD4_POSN                               0x4
#define _SSPADD_SSP1ADD4_POSITION                           0x4
#define _SSPADD_SSP1ADD4_SIZE                               0x1
#define _SSPADD_SSP1ADD4_LENGTH                             0x1
#define _SSPADD_SSP1ADD4_MASK                               0x10
#define _SSPADD_SSP1ADD5_POSN                               0x5
#define _SSPADD_SSP1ADD5_POSITION                           0x5
#define _SSPADD_SSP1ADD5_SIZE                               0x1
#define _SSPADD_SSP1ADD5_LENGTH                             0x1
#define _SSPADD_SSP1ADD5_MASK                               0x20
#define _SSPADD_SSP1ADD6_POSN                               0x6
#define _SSPADD_SSP1ADD6_POSITION                           0x6
#define _SSPADD_SSP1ADD6_SIZE                               0x1
#define _SSPADD_SSP1ADD6_LENGTH                             0x1
#define _SSPADD_SSP1ADD6_MASK                               0x40
#define _SSPADD_SSP1ADD7_POSN                               0x7
#define _SSPADD_SSP1ADD7_POSITION                           0x7
#define _SSPADD_SSP1ADD7_SIZE                               0x1
#define _SSPADD_SSP1ADD7_LENGTH                             0x1
#define _SSPADD_SSP1ADD7_MASK                               0x80
#define _SSPADD_ADD_POSN                                    0x0
#define _SSPADD_ADD_POSITION                                0x0
#define _SSPADD_ADD_SIZE                                    0x8
#define _SSPADD_ADD_LENGTH                                  0x8
#define _SSPADD_ADD_MASK                                    0xFF
#define _SSPADD_ADD0_POSN                                   0x0
#define _SSPADD_ADD0_POSITION                               0x0
#define _SSPADD_ADD0_SIZE                                   0x1
#define _SSPADD_ADD0_LENGTH                                 0x1
#define _SSPADD_ADD0_MASK                                   0x1
#define _SSPADD_ADD1_POSN                                   0x1
#define _SSPADD_ADD1_POSITION                               0x1
#define _SSPADD_ADD1_SIZE                                   0x1
#define _SSPADD_ADD1_LENGTH                                 0x1
#define _SSPADD_ADD1_MASK                                   0x2
#define _SSPADD_ADD2_POSN                                   0x2
#define _SSPADD_ADD2_POSITION                               0x2
#define _SSPADD_ADD2_SIZE                                   0x1
#define _SSPADD_ADD2_LENGTH                                 0x1
#define _SSPADD_ADD2_MASK                                   0x4
#define _SSPADD_ADD3_POSN                                   0x3
#define _SSPADD_ADD3_POSITION                               0x3
#define _SSPADD_ADD3_SIZE                                   0x1
#define _SSPADD_ADD3_LENGTH                                 0x1
#define _SSPADD_ADD3_MASK                                   0x8
#define _SSPADD_ADD4_POSN                                   0x4
#define _SSPADD_ADD4_POSITION                               0x4
#define _SSPADD_ADD4_SIZE                                   0x1
#define _SSPADD_ADD4_LENGTH                                 0x1
#define _SSPADD_ADD4_MASK                                   0x10
#define _SSPADD_ADD5_POSN                                   0x5
#define _SSPADD_ADD5_POSITION                               0x5
#define _SSPADD_ADD5_SIZE                                   0x1
#define _SSPADD_ADD5_LENGTH                                 0x1
#define _SSPADD_ADD5_MASK                                   0x20
#define _SSPADD_ADD6_POSN                                   0x6
#define _SSPADD_ADD6_POSITION                               0x6
#define _SSPADD_ADD6_SIZE                                   0x1
#define _SSPADD_ADD6_LENGTH                                 0x1
#define _SSPADD_ADD6_MASK                                   0x40
#define _SSPADD_ADD7_POSN                                   0x7
#define _SSPADD_ADD7_POSITION                               0x7
#define _SSPADD_ADD7_SIZE                                   0x1
#define _SSPADD_ADD7_LENGTH                                 0x1
#define _SSPADD_ADD7_MASK                                   0x80
#define _SSPADD_SSP1ADD_POSN                                0x0
#define _SSPADD_SSP1ADD_POSITION                            0x0
#define _SSPADD_SSP1ADD_SIZE                                0x8
#define _SSPADD_SSP1ADD_LENGTH                              0x8
#define _SSPADD_SSP1ADD_MASK                                0xFF

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
        unsigned SSP1MSK0               :1;
        unsigned SSP1MSK1               :1;
        unsigned SSP1MSK2               :1;
        unsigned SSP1MSK3               :1;
        unsigned SSP1MSK4               :1;
        unsigned SSP1MSK5               :1;
        unsigned SSP1MSK6               :1;
        unsigned SSP1MSK7               :1;
    };
    struct {
        unsigned MSK                    :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned SSP1MSK                :8;
    };
} SSP1MSKbits_t;
extern volatile SSP1MSKbits_t SSP1MSKbits __at(0x213);
// bitfield macros
#define _SSP1MSK_SSP1MSK0_POSN                              0x0
#define _SSP1MSK_SSP1MSK0_POSITION                          0x0
#define _SSP1MSK_SSP1MSK0_SIZE                              0x1
#define _SSP1MSK_SSP1MSK0_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK0_MASK                              0x1
#define _SSP1MSK_SSP1MSK1_POSN                              0x1
#define _SSP1MSK_SSP1MSK1_POSITION                          0x1
#define _SSP1MSK_SSP1MSK1_SIZE                              0x1
#define _SSP1MSK_SSP1MSK1_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK1_MASK                              0x2
#define _SSP1MSK_SSP1MSK2_POSN                              0x2
#define _SSP1MSK_SSP1MSK2_POSITION                          0x2
#define _SSP1MSK_SSP1MSK2_SIZE                              0x1
#define _SSP1MSK_SSP1MSK2_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK2_MASK                              0x4
#define _SSP1MSK_SSP1MSK3_POSN                              0x3
#define _SSP1MSK_SSP1MSK3_POSITION                          0x3
#define _SSP1MSK_SSP1MSK3_SIZE                              0x1
#define _SSP1MSK_SSP1MSK3_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK3_MASK                              0x8
#define _SSP1MSK_SSP1MSK4_POSN                              0x4
#define _SSP1MSK_SSP1MSK4_POSITION                          0x4
#define _SSP1MSK_SSP1MSK4_SIZE                              0x1
#define _SSP1MSK_SSP1MSK4_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK4_MASK                              0x10
#define _SSP1MSK_SSP1MSK5_POSN                              0x5
#define _SSP1MSK_SSP1MSK5_POSITION                          0x5
#define _SSP1MSK_SSP1MSK5_SIZE                              0x1
#define _SSP1MSK_SSP1MSK5_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK5_MASK                              0x20
#define _SSP1MSK_SSP1MSK6_POSN                              0x6
#define _SSP1MSK_SSP1MSK6_POSITION                          0x6
#define _SSP1MSK_SSP1MSK6_SIZE                              0x1
#define _SSP1MSK_SSP1MSK6_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK6_MASK                              0x40
#define _SSP1MSK_SSP1MSK7_POSN                              0x7
#define _SSP1MSK_SSP1MSK7_POSITION                          0x7
#define _SSP1MSK_SSP1MSK7_SIZE                              0x1
#define _SSP1MSK_SSP1MSK7_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK7_MASK                              0x80
#define _SSP1MSK_MSK_POSN                                   0x0
#define _SSP1MSK_MSK_POSITION                               0x0
#define _SSP1MSK_MSK_SIZE                                   0x8
#define _SSP1MSK_MSK_LENGTH                                 0x8
#define _SSP1MSK_MSK_MASK                                   0xFF
#define _SSP1MSK_MSK0_POSN                                  0x0
#define _SSP1MSK_MSK0_POSITION                              0x0
#define _SSP1MSK_MSK0_SIZE                                  0x1
#define _SSP1MSK_MSK0_LENGTH                                0x1
#define _SSP1MSK_MSK0_MASK                                  0x1
#define _SSP1MSK_MSK1_POSN                                  0x1
#define _SSP1MSK_MSK1_POSITION                              0x1
#define _SSP1MSK_MSK1_SIZE                                  0x1
#define _SSP1MSK_MSK1_LENGTH                                0x1
#define _SSP1MSK_MSK1_MASK                                  0x2
#define _SSP1MSK_MSK2_POSN                                  0x2
#define _SSP1MSK_MSK2_POSITION                              0x2
#define _SSP1MSK_MSK2_SIZE                                  0x1
#define _SSP1MSK_MSK2_LENGTH                                0x1
#define _SSP1MSK_MSK2_MASK                                  0x4
#define _SSP1MSK_MSK3_POSN                                  0x3
#define _SSP1MSK_MSK3_POSITION                              0x3
#define _SSP1MSK_MSK3_SIZE                                  0x1
#define _SSP1MSK_MSK3_LENGTH                                0x1
#define _SSP1MSK_MSK3_MASK                                  0x8
#define _SSP1MSK_MSK4_POSN                                  0x4
#define _SSP1MSK_MSK4_POSITION                              0x4
#define _SSP1MSK_MSK4_SIZE                                  0x1
#define _SSP1MSK_MSK4_LENGTH                                0x1
#define _SSP1MSK_MSK4_MASK                                  0x10
#define _SSP1MSK_MSK5_POSN                                  0x5
#define _SSP1MSK_MSK5_POSITION                              0x5
#define _SSP1MSK_MSK5_SIZE                                  0x1
#define _SSP1MSK_MSK5_LENGTH                                0x1
#define _SSP1MSK_MSK5_MASK                                  0x20
#define _SSP1MSK_MSK6_POSN                                  0x6
#define _SSP1MSK_MSK6_POSITION                              0x6
#define _SSP1MSK_MSK6_SIZE                                  0x1
#define _SSP1MSK_MSK6_LENGTH                                0x1
#define _SSP1MSK_MSK6_MASK                                  0x40
#define _SSP1MSK_MSK7_POSN                                  0x7
#define _SSP1MSK_MSK7_POSITION                              0x7
#define _SSP1MSK_MSK7_SIZE                                  0x1
#define _SSP1MSK_MSK7_LENGTH                                0x1
#define _SSP1MSK_MSK7_MASK                                  0x80
#define _SSP1MSK_SSP1MSK_POSN                               0x0
#define _SSP1MSK_SSP1MSK_POSITION                           0x0
#define _SSP1MSK_SSP1MSK_SIZE                               0x8
#define _SSP1MSK_SSP1MSK_LENGTH                             0x8
#define _SSP1MSK_SSP1MSK_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1MSK0               :1;
        unsigned SSP1MSK1               :1;
        unsigned SSP1MSK2               :1;
        unsigned SSP1MSK3               :1;
        unsigned SSP1MSK4               :1;
        unsigned SSP1MSK5               :1;
        unsigned SSP1MSK6               :1;
        unsigned SSP1MSK7               :1;
    };
    struct {
        unsigned MSK                    :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned SSP1MSK                :8;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0x213);
// bitfield macros
#define _SSPMSK_SSP1MSK0_POSN                               0x0
#define _SSPMSK_SSP1MSK0_POSITION                           0x0
#define _SSPMSK_SSP1MSK0_SIZE                               0x1
#define _SSPMSK_SSP1MSK0_LENGTH                             0x1
#define _SSPMSK_SSP1MSK0_MASK                               0x1
#define _SSPMSK_SSP1MSK1_POSN                               0x1
#define _SSPMSK_SSP1MSK1_POSITION                           0x1
#define _SSPMSK_SSP1MSK1_SIZE                               0x1
#define _SSPMSK_SSP1MSK1_LENGTH                             0x1
#define _SSPMSK_SSP1MSK1_MASK                               0x2
#define _SSPMSK_SSP1MSK2_POSN                               0x2
#define _SSPMSK_SSP1MSK2_POSITION                           0x2
#define _SSPMSK_SSP1MSK2_SIZE                               0x1
#define _SSPMSK_SSP1MSK2_LENGTH                             0x1
#define _SSPMSK_SSP1MSK2_MASK                               0x4
#define _SSPMSK_SSP1MSK3_POSN                               0x3
#define _SSPMSK_SSP1MSK3_POSITION                           0x3
#define _SSPMSK_SSP1MSK3_SIZE                               0x1
#define _SSPMSK_SSP1MSK3_LENGTH                             0x1
#define _SSPMSK_SSP1MSK3_MASK                               0x8
#define _SSPMSK_SSP1MSK4_POSN                               0x4
#define _SSPMSK_SSP1MSK4_POSITION                           0x4
#define _SSPMSK_SSP1MSK4_SIZE                               0x1
#define _SSPMSK_SSP1MSK4_LENGTH                             0x1
#define _SSPMSK_SSP1MSK4_MASK                               0x10
#define _SSPMSK_SSP1MSK5_POSN                               0x5
#define _SSPMSK_SSP1MSK5_POSITION                           0x5
#define _SSPMSK_SSP1MSK5_SIZE                               0x1
#define _SSPMSK_SSP1MSK5_LENGTH                             0x1
#define _SSPMSK_SSP1MSK5_MASK                               0x20
#define _SSPMSK_SSP1MSK6_POSN                               0x6
#define _SSPMSK_SSP1MSK6_POSITION                           0x6
#define _SSPMSK_SSP1MSK6_SIZE                               0x1
#define _SSPMSK_SSP1MSK6_LENGTH                             0x1
#define _SSPMSK_SSP1MSK6_MASK                               0x40
#define _SSPMSK_SSP1MSK7_POSN                               0x7
#define _SSPMSK_SSP1MSK7_POSITION                           0x7
#define _SSPMSK_SSP1MSK7_SIZE                               0x1
#define _SSPMSK_SSP1MSK7_LENGTH                             0x1
#define _SSPMSK_SSP1MSK7_MASK                               0x80
#define _SSPMSK_MSK_POSN                                    0x0
#define _SSPMSK_MSK_POSITION                                0x0
#define _SSPMSK_MSK_SIZE                                    0x8
#define _SSPMSK_MSK_LENGTH                                  0x8
#define _SSPMSK_MSK_MASK                                    0xFF
#define _SSPMSK_MSK0_POSN                                   0x0
#define _SSPMSK_MSK0_POSITION                               0x0
#define _SSPMSK_MSK0_SIZE                                   0x1
#define _SSPMSK_MSK0_LENGTH                                 0x1
#define _SSPMSK_MSK0_MASK                                   0x1
#define _SSPMSK_MSK1_POSN                                   0x1
#define _SSPMSK_MSK1_POSITION                               0x1
#define _SSPMSK_MSK1_SIZE                                   0x1
#define _SSPMSK_MSK1_LENGTH                                 0x1
#define _SSPMSK_MSK1_MASK                                   0x2
#define _SSPMSK_MSK2_POSN                                   0x2
#define _SSPMSK_MSK2_POSITION                               0x2
#define _SSPMSK_MSK2_SIZE                                   0x1
#define _SSPMSK_MSK2_LENGTH                                 0x1
#define _SSPMSK_MSK2_MASK                                   0x4
#define _SSPMSK_MSK3_POSN                                   0x3
#define _SSPMSK_MSK3_POSITION                               0x3
#define _SSPMSK_MSK3_SIZE                                   0x1
#define _SSPMSK_MSK3_LENGTH                                 0x1
#define _SSPMSK_MSK3_MASK                                   0x8
#define _SSPMSK_MSK4_POSN                                   0x4
#define _SSPMSK_MSK4_POSITION                               0x4
#define _SSPMSK_MSK4_SIZE                                   0x1
#define _SSPMSK_MSK4_LENGTH                                 0x1
#define _SSPMSK_MSK4_MASK                                   0x10
#define _SSPMSK_MSK5_POSN                                   0x5
#define _SSPMSK_MSK5_POSITION                               0x5
#define _SSPMSK_MSK5_SIZE                                   0x1
#define _SSPMSK_MSK5_LENGTH                                 0x1
#define _SSPMSK_MSK5_MASK                                   0x20
#define _SSPMSK_MSK6_POSN                                   0x6
#define _SSPMSK_MSK6_POSITION                               0x6
#define _SSPMSK_MSK6_SIZE                                   0x1
#define _SSPMSK_MSK6_LENGTH                                 0x1
#define _SSPMSK_MSK6_MASK                                   0x40
#define _SSPMSK_MSK7_POSN                                   0x7
#define _SSPMSK_MSK7_POSITION                               0x7
#define _SSPMSK_MSK7_SIZE                                   0x1
#define _SSPMSK_MSK7_LENGTH                                 0x1
#define _SSPMSK_MSK7_MASK                                   0x80
#define _SSPMSK_SSP1MSK_POSN                                0x0
#define _SSPMSK_SSP1MSK_POSITION                            0x0
#define _SSPMSK_SSP1MSK_SIZE                                0x8
#define _SSPMSK_SSP1MSK_LENGTH                              0x8
#define _SSPMSK_SSP1MSK_MASK                                0xFF

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
extern volatile unsigned char           SSP1CON             __at(0x215);
#ifndef _LIB_BUILD
asm("SSP1CON equ 0215h");
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
} SSP1CONbits_t;
extern volatile SSP1CONbits_t SSP1CONbits __at(0x215);
// bitfield macros
#define _SSP1CON_SSPM_POSN                                  0x0
#define _SSP1CON_SSPM_POSITION                              0x0
#define _SSP1CON_SSPM_SIZE                                  0x4
#define _SSP1CON_SSPM_LENGTH                                0x4
#define _SSP1CON_SSPM_MASK                                  0xF
#define _SSP1CON_CKP_POSN                                   0x4
#define _SSP1CON_CKP_POSITION                               0x4
#define _SSP1CON_CKP_SIZE                                   0x1
#define _SSP1CON_CKP_LENGTH                                 0x1
#define _SSP1CON_CKP_MASK                                   0x10
#define _SSP1CON_SSPEN_POSN                                 0x5
#define _SSP1CON_SSPEN_POSITION                             0x5
#define _SSP1CON_SSPEN_SIZE                                 0x1
#define _SSP1CON_SSPEN_LENGTH                               0x1
#define _SSP1CON_SSPEN_MASK                                 0x20
#define _SSP1CON_SSPOV_POSN                                 0x6
#define _SSP1CON_SSPOV_POSITION                             0x6
#define _SSP1CON_SSPOV_SIZE                                 0x1
#define _SSP1CON_SSPOV_LENGTH                               0x1
#define _SSP1CON_SSPOV_MASK                                 0x40
#define _SSP1CON_WCOL_POSN                                  0x7
#define _SSP1CON_WCOL_POSITION                              0x7
#define _SSP1CON_WCOL_SIZE                                  0x1
#define _SSP1CON_WCOL_LENGTH                                0x1
#define _SSP1CON_WCOL_MASK                                  0x80
#define _SSP1CON_SSPM0_POSN                                 0x0
#define _SSP1CON_SSPM0_POSITION                             0x0
#define _SSP1CON_SSPM0_SIZE                                 0x1
#define _SSP1CON_SSPM0_LENGTH                               0x1
#define _SSP1CON_SSPM0_MASK                                 0x1
#define _SSP1CON_SSPM1_POSN                                 0x1
#define _SSP1CON_SSPM1_POSITION                             0x1
#define _SSP1CON_SSPM1_SIZE                                 0x1
#define _SSP1CON_SSPM1_LENGTH                               0x1
#define _SSP1CON_SSPM1_MASK                                 0x2
#define _SSP1CON_SSPM2_POSN                                 0x2
#define _SSP1CON_SSPM2_POSITION                             0x2
#define _SSP1CON_SSPM2_SIZE                                 0x1
#define _SSP1CON_SSPM2_LENGTH                               0x1
#define _SSP1CON_SSPM2_MASK                                 0x4
#define _SSP1CON_SSPM3_POSN                                 0x3
#define _SSP1CON_SSPM3_POSITION                             0x3
#define _SSP1CON_SSPM3_SIZE                                 0x1
#define _SSP1CON_SSPM3_LENGTH                               0x1
#define _SSP1CON_SSPM3_MASK                                 0x8

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

// Register: SSPLVL
#define SSPLVL SSPLVL
extern volatile unsigned char           SSPLVL              __at(0x218);
#ifndef _LIB_BUILD
asm("SSPLVL equ 0218h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned S1ILS                  :1;
        unsigned                        :3;
        unsigned S2ILS                  :1;
    };
} SSPLVLbits_t;
extern volatile SSPLVLbits_t SSPLVLbits __at(0x218);
// bitfield macros
#define _SSPLVL_S1ILS_POSN                                  0x0
#define _SSPLVL_S1ILS_POSITION                              0x0
#define _SSPLVL_S1ILS_SIZE                                  0x1
#define _SSPLVL_S1ILS_LENGTH                                0x1
#define _SSPLVL_S1ILS_MASK                                  0x1
#define _SSPLVL_S2ILS_POSN                                  0x4
#define _SSPLVL_S2ILS_POSITION                              0x4
#define _SSPLVL_S2ILS_SIZE                                  0x1
#define _SSPLVL_S2ILS_LENGTH                                0x1
#define _SSPLVL_S2ILS_MASK                                  0x10

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
extern volatile unsigned char           SSP2BUF             __at(0x219);
#ifndef _LIB_BUILD
asm("SSP2BUF equ 0219h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2BUF0               :1;
        unsigned SSP2BUF1               :1;
        unsigned SSP2BUF2               :1;
        unsigned SSP2BUF3               :1;
        unsigned SSP2BUF4               :1;
        unsigned SSP2BUF5               :1;
        unsigned SSP2BUF6               :1;
        unsigned SSP2BUF7               :1;
    };
    struct {
        unsigned BUF                    :8;
    };
    struct {
        unsigned BUF0                   :1;
        unsigned BUF1                   :1;
        unsigned BUF2                   :1;
        unsigned BUF3                   :1;
        unsigned BUF4                   :1;
        unsigned BUF5                   :1;
        unsigned BUF6                   :1;
        unsigned BUF7                   :1;
    };
    struct {
        unsigned SSP2BUF                :8;
    };
} SSP2BUFbits_t;
extern volatile SSP2BUFbits_t SSP2BUFbits __at(0x219);
// bitfield macros
#define _SSP2BUF_SSP2BUF0_POSN                              0x0
#define _SSP2BUF_SSP2BUF0_POSITION                          0x0
#define _SSP2BUF_SSP2BUF0_SIZE                              0x1
#define _SSP2BUF_SSP2BUF0_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF0_MASK                              0x1
#define _SSP2BUF_SSP2BUF1_POSN                              0x1
#define _SSP2BUF_SSP2BUF1_POSITION                          0x1
#define _SSP2BUF_SSP2BUF1_SIZE                              0x1
#define _SSP2BUF_SSP2BUF1_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF1_MASK                              0x2
#define _SSP2BUF_SSP2BUF2_POSN                              0x2
#define _SSP2BUF_SSP2BUF2_POSITION                          0x2
#define _SSP2BUF_SSP2BUF2_SIZE                              0x1
#define _SSP2BUF_SSP2BUF2_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF2_MASK                              0x4
#define _SSP2BUF_SSP2BUF3_POSN                              0x3
#define _SSP2BUF_SSP2BUF3_POSITION                          0x3
#define _SSP2BUF_SSP2BUF3_SIZE                              0x1
#define _SSP2BUF_SSP2BUF3_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF3_MASK                              0x8
#define _SSP2BUF_SSP2BUF4_POSN                              0x4
#define _SSP2BUF_SSP2BUF4_POSITION                          0x4
#define _SSP2BUF_SSP2BUF4_SIZE                              0x1
#define _SSP2BUF_SSP2BUF4_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF4_MASK                              0x10
#define _SSP2BUF_SSP2BUF5_POSN                              0x5
#define _SSP2BUF_SSP2BUF5_POSITION                          0x5
#define _SSP2BUF_SSP2BUF5_SIZE                              0x1
#define _SSP2BUF_SSP2BUF5_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF5_MASK                              0x20
#define _SSP2BUF_SSP2BUF6_POSN                              0x6
#define _SSP2BUF_SSP2BUF6_POSITION                          0x6
#define _SSP2BUF_SSP2BUF6_SIZE                              0x1
#define _SSP2BUF_SSP2BUF6_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF6_MASK                              0x40
#define _SSP2BUF_SSP2BUF7_POSN                              0x7
#define _SSP2BUF_SSP2BUF7_POSITION                          0x7
#define _SSP2BUF_SSP2BUF7_SIZE                              0x1
#define _SSP2BUF_SSP2BUF7_LENGTH                            0x1
#define _SSP2BUF_SSP2BUF7_MASK                              0x80
#define _SSP2BUF_BUF_POSN                                   0x0
#define _SSP2BUF_BUF_POSITION                               0x0
#define _SSP2BUF_BUF_SIZE                                   0x8
#define _SSP2BUF_BUF_LENGTH                                 0x8
#define _SSP2BUF_BUF_MASK                                   0xFF
#define _SSP2BUF_BUF0_POSN                                  0x0
#define _SSP2BUF_BUF0_POSITION                              0x0
#define _SSP2BUF_BUF0_SIZE                                  0x1
#define _SSP2BUF_BUF0_LENGTH                                0x1
#define _SSP2BUF_BUF0_MASK                                  0x1
#define _SSP2BUF_BUF1_POSN                                  0x1
#define _SSP2BUF_BUF1_POSITION                              0x1
#define _SSP2BUF_BUF1_SIZE                                  0x1
#define _SSP2BUF_BUF1_LENGTH                                0x1
#define _SSP2BUF_BUF1_MASK                                  0x2
#define _SSP2BUF_BUF2_POSN                                  0x2
#define _SSP2BUF_BUF2_POSITION                              0x2
#define _SSP2BUF_BUF2_SIZE                                  0x1
#define _SSP2BUF_BUF2_LENGTH                                0x1
#define _SSP2BUF_BUF2_MASK                                  0x4
#define _SSP2BUF_BUF3_POSN                                  0x3
#define _SSP2BUF_BUF3_POSITION                              0x3
#define _SSP2BUF_BUF3_SIZE                                  0x1
#define _SSP2BUF_BUF3_LENGTH                                0x1
#define _SSP2BUF_BUF3_MASK                                  0x8
#define _SSP2BUF_BUF4_POSN                                  0x4
#define _SSP2BUF_BUF4_POSITION                              0x4
#define _SSP2BUF_BUF4_SIZE                                  0x1
#define _SSP2BUF_BUF4_LENGTH                                0x1
#define _SSP2BUF_BUF4_MASK                                  0x10
#define _SSP2BUF_BUF5_POSN                                  0x5
#define _SSP2BUF_BUF5_POSITION                              0x5
#define _SSP2BUF_BUF5_SIZE                                  0x1
#define _SSP2BUF_BUF5_LENGTH                                0x1
#define _SSP2BUF_BUF5_MASK                                  0x20
#define _SSP2BUF_BUF6_POSN                                  0x6
#define _SSP2BUF_BUF6_POSITION                              0x6
#define _SSP2BUF_BUF6_SIZE                                  0x1
#define _SSP2BUF_BUF6_LENGTH                                0x1
#define _SSP2BUF_BUF6_MASK                                  0x40
#define _SSP2BUF_BUF7_POSN                                  0x7
#define _SSP2BUF_BUF7_POSITION                              0x7
#define _SSP2BUF_BUF7_SIZE                                  0x1
#define _SSP2BUF_BUF7_LENGTH                                0x1
#define _SSP2BUF_BUF7_MASK                                  0x80
#define _SSP2BUF_SSP2BUF_POSN                               0x0
#define _SSP2BUF_SSP2BUF_POSITION                           0x0
#define _SSP2BUF_SSP2BUF_SIZE                               0x8
#define _SSP2BUF_SSP2BUF_LENGTH                             0x8
#define _SSP2BUF_SSP2BUF_MASK                               0xFF

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
extern volatile unsigned char           SSP2ADD             __at(0x21A);
#ifndef _LIB_BUILD
asm("SSP2ADD equ 021Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2ADD0               :1;
        unsigned SSP2ADD1               :1;
        unsigned SSP2ADD2               :1;
        unsigned SSP2ADD3               :1;
        unsigned SSP2ADD4               :1;
        unsigned SSP2ADD5               :1;
        unsigned SSP2ADD6               :1;
        unsigned SSP2ADD7               :1;
    };
    struct {
        unsigned ADD                    :8;
    };
    struct {
        unsigned ADD0                   :1;
        unsigned ADD1                   :1;
        unsigned ADD2                   :1;
        unsigned ADD3                   :1;
        unsigned ADD4                   :1;
        unsigned ADD5                   :1;
        unsigned ADD6                   :1;
        unsigned ADD7                   :1;
    };
    struct {
        unsigned SSP2ADD                :8;
    };
} SSP2ADDbits_t;
extern volatile SSP2ADDbits_t SSP2ADDbits __at(0x21A);
// bitfield macros
#define _SSP2ADD_SSP2ADD0_POSN                              0x0
#define _SSP2ADD_SSP2ADD0_POSITION                          0x0
#define _SSP2ADD_SSP2ADD0_SIZE                              0x1
#define _SSP2ADD_SSP2ADD0_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD0_MASK                              0x1
#define _SSP2ADD_SSP2ADD1_POSN                              0x1
#define _SSP2ADD_SSP2ADD1_POSITION                          0x1
#define _SSP2ADD_SSP2ADD1_SIZE                              0x1
#define _SSP2ADD_SSP2ADD1_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD1_MASK                              0x2
#define _SSP2ADD_SSP2ADD2_POSN                              0x2
#define _SSP2ADD_SSP2ADD2_POSITION                          0x2
#define _SSP2ADD_SSP2ADD2_SIZE                              0x1
#define _SSP2ADD_SSP2ADD2_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD2_MASK                              0x4
#define _SSP2ADD_SSP2ADD3_POSN                              0x3
#define _SSP2ADD_SSP2ADD3_POSITION                          0x3
#define _SSP2ADD_SSP2ADD3_SIZE                              0x1
#define _SSP2ADD_SSP2ADD3_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD3_MASK                              0x8
#define _SSP2ADD_SSP2ADD4_POSN                              0x4
#define _SSP2ADD_SSP2ADD4_POSITION                          0x4
#define _SSP2ADD_SSP2ADD4_SIZE                              0x1
#define _SSP2ADD_SSP2ADD4_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD4_MASK                              0x10
#define _SSP2ADD_SSP2ADD5_POSN                              0x5
#define _SSP2ADD_SSP2ADD5_POSITION                          0x5
#define _SSP2ADD_SSP2ADD5_SIZE                              0x1
#define _SSP2ADD_SSP2ADD5_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD5_MASK                              0x20
#define _SSP2ADD_SSP2ADD6_POSN                              0x6
#define _SSP2ADD_SSP2ADD6_POSITION                          0x6
#define _SSP2ADD_SSP2ADD6_SIZE                              0x1
#define _SSP2ADD_SSP2ADD6_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD6_MASK                              0x40
#define _SSP2ADD_SSP2ADD7_POSN                              0x7
#define _SSP2ADD_SSP2ADD7_POSITION                          0x7
#define _SSP2ADD_SSP2ADD7_SIZE                              0x1
#define _SSP2ADD_SSP2ADD7_LENGTH                            0x1
#define _SSP2ADD_SSP2ADD7_MASK                              0x80
#define _SSP2ADD_ADD_POSN                                   0x0
#define _SSP2ADD_ADD_POSITION                               0x0
#define _SSP2ADD_ADD_SIZE                                   0x8
#define _SSP2ADD_ADD_LENGTH                                 0x8
#define _SSP2ADD_ADD_MASK                                   0xFF
#define _SSP2ADD_ADD0_POSN                                  0x0
#define _SSP2ADD_ADD0_POSITION                              0x0
#define _SSP2ADD_ADD0_SIZE                                  0x1
#define _SSP2ADD_ADD0_LENGTH                                0x1
#define _SSP2ADD_ADD0_MASK                                  0x1
#define _SSP2ADD_ADD1_POSN                                  0x1
#define _SSP2ADD_ADD1_POSITION                              0x1
#define _SSP2ADD_ADD1_SIZE                                  0x1
#define _SSP2ADD_ADD1_LENGTH                                0x1
#define _SSP2ADD_ADD1_MASK                                  0x2
#define _SSP2ADD_ADD2_POSN                                  0x2
#define _SSP2ADD_ADD2_POSITION                              0x2
#define _SSP2ADD_ADD2_SIZE                                  0x1
#define _SSP2ADD_ADD2_LENGTH                                0x1
#define _SSP2ADD_ADD2_MASK                                  0x4
#define _SSP2ADD_ADD3_POSN                                  0x3
#define _SSP2ADD_ADD3_POSITION                              0x3
#define _SSP2ADD_ADD3_SIZE                                  0x1
#define _SSP2ADD_ADD3_LENGTH                                0x1
#define _SSP2ADD_ADD3_MASK                                  0x8
#define _SSP2ADD_ADD4_POSN                                  0x4
#define _SSP2ADD_ADD4_POSITION                              0x4
#define _SSP2ADD_ADD4_SIZE                                  0x1
#define _SSP2ADD_ADD4_LENGTH                                0x1
#define _SSP2ADD_ADD4_MASK                                  0x10
#define _SSP2ADD_ADD5_POSN                                  0x5
#define _SSP2ADD_ADD5_POSITION                              0x5
#define _SSP2ADD_ADD5_SIZE                                  0x1
#define _SSP2ADD_ADD5_LENGTH                                0x1
#define _SSP2ADD_ADD5_MASK                                  0x20
#define _SSP2ADD_ADD6_POSN                                  0x6
#define _SSP2ADD_ADD6_POSITION                              0x6
#define _SSP2ADD_ADD6_SIZE                                  0x1
#define _SSP2ADD_ADD6_LENGTH                                0x1
#define _SSP2ADD_ADD6_MASK                                  0x40
#define _SSP2ADD_ADD7_POSN                                  0x7
#define _SSP2ADD_ADD7_POSITION                              0x7
#define _SSP2ADD_ADD7_SIZE                                  0x1
#define _SSP2ADD_ADD7_LENGTH                                0x1
#define _SSP2ADD_ADD7_MASK                                  0x80
#define _SSP2ADD_SSP2ADD_POSN                               0x0
#define _SSP2ADD_SSP2ADD_POSITION                           0x0
#define _SSP2ADD_SSP2ADD_SIZE                               0x8
#define _SSP2ADD_SSP2ADD_LENGTH                             0x8
#define _SSP2ADD_SSP2ADD_MASK                               0xFF

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
extern volatile unsigned char           SSP2MSK             __at(0x21B);
#ifndef _LIB_BUILD
asm("SSP2MSK equ 021Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2MSK0               :1;
        unsigned SSP2MSK1               :1;
        unsigned SSP2MSK2               :1;
        unsigned SSP2MSK3               :1;
        unsigned SSP2MSK4               :1;
        unsigned SSP2MSK5               :1;
        unsigned SSP2MSK6               :1;
        unsigned SSP2MSK7               :1;
    };
    struct {
        unsigned MSK                    :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned SSP2MSK                :8;
    };
} SSP2MSKbits_t;
extern volatile SSP2MSKbits_t SSP2MSKbits __at(0x21B);
// bitfield macros
#define _SSP2MSK_SSP2MSK0_POSN                              0x0
#define _SSP2MSK_SSP2MSK0_POSITION                          0x0
#define _SSP2MSK_SSP2MSK0_SIZE                              0x1
#define _SSP2MSK_SSP2MSK0_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK0_MASK                              0x1
#define _SSP2MSK_SSP2MSK1_POSN                              0x1
#define _SSP2MSK_SSP2MSK1_POSITION                          0x1
#define _SSP2MSK_SSP2MSK1_SIZE                              0x1
#define _SSP2MSK_SSP2MSK1_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK1_MASK                              0x2
#define _SSP2MSK_SSP2MSK2_POSN                              0x2
#define _SSP2MSK_SSP2MSK2_POSITION                          0x2
#define _SSP2MSK_SSP2MSK2_SIZE                              0x1
#define _SSP2MSK_SSP2MSK2_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK2_MASK                              0x4
#define _SSP2MSK_SSP2MSK3_POSN                              0x3
#define _SSP2MSK_SSP2MSK3_POSITION                          0x3
#define _SSP2MSK_SSP2MSK3_SIZE                              0x1
#define _SSP2MSK_SSP2MSK3_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK3_MASK                              0x8
#define _SSP2MSK_SSP2MSK4_POSN                              0x4
#define _SSP2MSK_SSP2MSK4_POSITION                          0x4
#define _SSP2MSK_SSP2MSK4_SIZE                              0x1
#define _SSP2MSK_SSP2MSK4_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK4_MASK                              0x10
#define _SSP2MSK_SSP2MSK5_POSN                              0x5
#define _SSP2MSK_SSP2MSK5_POSITION                          0x5
#define _SSP2MSK_SSP2MSK5_SIZE                              0x1
#define _SSP2MSK_SSP2MSK5_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK5_MASK                              0x20
#define _SSP2MSK_SSP2MSK6_POSN                              0x6
#define _SSP2MSK_SSP2MSK6_POSITION                          0x6
#define _SSP2MSK_SSP2MSK6_SIZE                              0x1
#define _SSP2MSK_SSP2MSK6_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK6_MASK                              0x40
#define _SSP2MSK_SSP2MSK7_POSN                              0x7
#define _SSP2MSK_SSP2MSK7_POSITION                          0x7
#define _SSP2MSK_SSP2MSK7_SIZE                              0x1
#define _SSP2MSK_SSP2MSK7_LENGTH                            0x1
#define _SSP2MSK_SSP2MSK7_MASK                              0x80
#define _SSP2MSK_MSK_POSN                                   0x0
#define _SSP2MSK_MSK_POSITION                               0x0
#define _SSP2MSK_MSK_SIZE                                   0x8
#define _SSP2MSK_MSK_LENGTH                                 0x8
#define _SSP2MSK_MSK_MASK                                   0xFF
#define _SSP2MSK_MSK0_POSN                                  0x0
#define _SSP2MSK_MSK0_POSITION                              0x0
#define _SSP2MSK_MSK0_SIZE                                  0x1
#define _SSP2MSK_MSK0_LENGTH                                0x1
#define _SSP2MSK_MSK0_MASK                                  0x1
#define _SSP2MSK_MSK1_POSN                                  0x1
#define _SSP2MSK_MSK1_POSITION                              0x1
#define _SSP2MSK_MSK1_SIZE                                  0x1
#define _SSP2MSK_MSK1_LENGTH                                0x1
#define _SSP2MSK_MSK1_MASK                                  0x2
#define _SSP2MSK_MSK2_POSN                                  0x2
#define _SSP2MSK_MSK2_POSITION                              0x2
#define _SSP2MSK_MSK2_SIZE                                  0x1
#define _SSP2MSK_MSK2_LENGTH                                0x1
#define _SSP2MSK_MSK2_MASK                                  0x4
#define _SSP2MSK_MSK3_POSN                                  0x3
#define _SSP2MSK_MSK3_POSITION                              0x3
#define _SSP2MSK_MSK3_SIZE                                  0x1
#define _SSP2MSK_MSK3_LENGTH                                0x1
#define _SSP2MSK_MSK3_MASK                                  0x8
#define _SSP2MSK_MSK4_POSN                                  0x4
#define _SSP2MSK_MSK4_POSITION                              0x4
#define _SSP2MSK_MSK4_SIZE                                  0x1
#define _SSP2MSK_MSK4_LENGTH                                0x1
#define _SSP2MSK_MSK4_MASK                                  0x10
#define _SSP2MSK_MSK5_POSN                                  0x5
#define _SSP2MSK_MSK5_POSITION                              0x5
#define _SSP2MSK_MSK5_SIZE                                  0x1
#define _SSP2MSK_MSK5_LENGTH                                0x1
#define _SSP2MSK_MSK5_MASK                                  0x20
#define _SSP2MSK_MSK6_POSN                                  0x6
#define _SSP2MSK_MSK6_POSITION                              0x6
#define _SSP2MSK_MSK6_SIZE                                  0x1
#define _SSP2MSK_MSK6_LENGTH                                0x1
#define _SSP2MSK_MSK6_MASK                                  0x40
#define _SSP2MSK_MSK7_POSN                                  0x7
#define _SSP2MSK_MSK7_POSITION                              0x7
#define _SSP2MSK_MSK7_SIZE                                  0x1
#define _SSP2MSK_MSK7_LENGTH                                0x1
#define _SSP2MSK_MSK7_MASK                                  0x80
#define _SSP2MSK_SSP2MSK_POSN                               0x0
#define _SSP2MSK_SSP2MSK_POSITION                           0x0
#define _SSP2MSK_SSP2MSK_SIZE                               0x8
#define _SSP2MSK_SSP2MSK_LENGTH                             0x8
#define _SSP2MSK_SSP2MSK_MASK                               0xFF

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
// aliases
extern volatile unsigned char           SSP2CON             __at(0x21D);
#ifndef _LIB_BUILD
asm("SSP2CON equ 021Dh");
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
} SSP2CONbits_t;
extern volatile SSP2CONbits_t SSP2CONbits __at(0x21D);
// bitfield macros
#define _SSP2CON_SSPM_POSN                                  0x0
#define _SSP2CON_SSPM_POSITION                              0x0
#define _SSP2CON_SSPM_SIZE                                  0x4
#define _SSP2CON_SSPM_LENGTH                                0x4
#define _SSP2CON_SSPM_MASK                                  0xF
#define _SSP2CON_CKP_POSN                                   0x4
#define _SSP2CON_CKP_POSITION                               0x4
#define _SSP2CON_CKP_SIZE                                   0x1
#define _SSP2CON_CKP_LENGTH                                 0x1
#define _SSP2CON_CKP_MASK                                   0x10
#define _SSP2CON_SSPEN_POSN                                 0x5
#define _SSP2CON_SSPEN_POSITION                             0x5
#define _SSP2CON_SSPEN_SIZE                                 0x1
#define _SSP2CON_SSPEN_LENGTH                               0x1
#define _SSP2CON_SSPEN_MASK                                 0x20
#define _SSP2CON_SSPOV_POSN                                 0x6
#define _SSP2CON_SSPOV_POSITION                             0x6
#define _SSP2CON_SSPOV_SIZE                                 0x1
#define _SSP2CON_SSPOV_LENGTH                               0x1
#define _SSP2CON_SSPOV_MASK                                 0x40
#define _SSP2CON_WCOL_POSN                                  0x7
#define _SSP2CON_WCOL_POSITION                              0x7
#define _SSP2CON_WCOL_SIZE                                  0x1
#define _SSP2CON_WCOL_LENGTH                                0x1
#define _SSP2CON_WCOL_MASK                                  0x80
#define _SSP2CON_SSPM0_POSN                                 0x0
#define _SSP2CON_SSPM0_POSITION                             0x0
#define _SSP2CON_SSPM0_SIZE                                 0x1
#define _SSP2CON_SSPM0_LENGTH                               0x1
#define _SSP2CON_SSPM0_MASK                                 0x1
#define _SSP2CON_SSPM1_POSN                                 0x1
#define _SSP2CON_SSPM1_POSITION                             0x1
#define _SSP2CON_SSPM1_SIZE                                 0x1
#define _SSP2CON_SSPM1_LENGTH                               0x1
#define _SSP2CON_SSPM1_MASK                                 0x2
#define _SSP2CON_SSPM2_POSN                                 0x2
#define _SSP2CON_SSPM2_POSITION                             0x2
#define _SSP2CON_SSPM2_SIZE                                 0x1
#define _SSP2CON_SSPM2_LENGTH                               0x1
#define _SSP2CON_SSPM2_MASK                                 0x4
#define _SSP2CON_SSPM3_POSN                                 0x3
#define _SSP2CON_SSPM3_POSITION                             0x3
#define _SSP2CON_SSPM3_SIZE                                 0x1
#define _SSP2CON_SSPM3_LENGTH                               0x1
#define _SSP2CON_SSPM3_MASK                                 0x8

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

// Register: PWMTMRS
#define PWMTMRS PWMTMRS
extern volatile unsigned char           PWMTMRS             __at(0x61D);
#ifndef _LIB_BUILD
asm("PWMTMRS equ 061Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1TSEL                 :1;
        unsigned                        :1;
        unsigned P2TSEL                 :1;
    };
} PWMTMRSbits_t;
extern volatile PWMTMRSbits_t PWMTMRSbits __at(0x61D);
// bitfield macros
#define _PWMTMRS_P1TSEL_POSN                                0x0
#define _PWMTMRS_P1TSEL_POSITION                            0x0
#define _PWMTMRS_P1TSEL_SIZE                                0x1
#define _PWMTMRS_P1TSEL_LENGTH                              0x1
#define _PWMTMRS_P1TSEL_MASK                                0x1
#define _PWMTMRS_P2TSEL_POSN                                0x2
#define _PWMTMRS_P2TSEL_POSITION                            0x2
#define _PWMTMRS_P2TSEL_SIZE                                0x1
#define _PWMTMRS_P2TSEL_LENGTH                              0x1
#define _PWMTMRS_P2TSEL_MASK                                0x4

// Register: PWM1AOE
#define PWM1AOE PWM1AOE
extern volatile unsigned char           PWM1AOE             __at(0x61E);
#ifndef _LIB_BUILD
asm("PWM1AOE equ 061Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1OE                 :4;
    };
    struct {
        unsigned PWM1OE0                :1;
        unsigned PWM1OE1                :1;
        unsigned PWM1OE2                :1;
        unsigned PWM1OE3                :1;
    };
} PWM1AOEbits_t;
extern volatile PWM1AOEbits_t PWM1AOEbits __at(0x61E);
// bitfield macros
#define _PWM1AOE_PWM1OE_POSN                                0x0
#define _PWM1AOE_PWM1OE_POSITION                            0x0
#define _PWM1AOE_PWM1OE_SIZE                                0x4
#define _PWM1AOE_PWM1OE_LENGTH                              0x4
#define _PWM1AOE_PWM1OE_MASK                                0xF
#define _PWM1AOE_PWM1OE0_POSN                               0x0
#define _PWM1AOE_PWM1OE0_POSITION                           0x0
#define _PWM1AOE_PWM1OE0_SIZE                               0x1
#define _PWM1AOE_PWM1OE0_LENGTH                             0x1
#define _PWM1AOE_PWM1OE0_MASK                               0x1
#define _PWM1AOE_PWM1OE1_POSN                               0x1
#define _PWM1AOE_PWM1OE1_POSITION                           0x1
#define _PWM1AOE_PWM1OE1_SIZE                               0x1
#define _PWM1AOE_PWM1OE1_LENGTH                             0x1
#define _PWM1AOE_PWM1OE1_MASK                               0x2
#define _PWM1AOE_PWM1OE2_POSN                               0x2
#define _PWM1AOE_PWM1OE2_POSITION                           0x2
#define _PWM1AOE_PWM1OE2_SIZE                               0x1
#define _PWM1AOE_PWM1OE2_LENGTH                             0x1
#define _PWM1AOE_PWM1OE2_MASK                               0x4
#define _PWM1AOE_PWM1OE3_POSN                               0x3
#define _PWM1AOE_PWM1OE3_POSITION                           0x3
#define _PWM1AOE_PWM1OE3_SIZE                               0x1
#define _PWM1AOE_PWM1OE3_LENGTH                             0x1
#define _PWM1AOE_PWM1OE3_MASK                               0x8

// Register: PWM2AOE
#define PWM2AOE PWM2AOE
extern volatile unsigned char           PWM2AOE             __at(0x61F);
#ifndef _LIB_BUILD
asm("PWM2AOE equ 061Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM2OE                 :4;
    };
    struct {
        unsigned PWM2OE0                :1;
        unsigned PWM2OE1                :1;
        unsigned PWM2OE2                :1;
        unsigned PWM2OE3                :1;
    };
} PWM2AOEbits_t;
extern volatile PWM2AOEbits_t PWM2AOEbits __at(0x61F);
// bitfield macros
#define _PWM2AOE_PWM2OE_POSN                                0x0
#define _PWM2AOE_PWM2OE_POSITION                            0x0
#define _PWM2AOE_PWM2OE_SIZE                                0x4
#define _PWM2AOE_PWM2OE_LENGTH                              0x4
#define _PWM2AOE_PWM2OE_MASK                                0xF
#define _PWM2AOE_PWM2OE0_POSN                               0x0
#define _PWM2AOE_PWM2OE0_POSITION                           0x0
#define _PWM2AOE_PWM2OE0_SIZE                               0x1
#define _PWM2AOE_PWM2OE0_LENGTH                             0x1
#define _PWM2AOE_PWM2OE0_MASK                               0x1
#define _PWM2AOE_PWM2OE1_POSN                               0x1
#define _PWM2AOE_PWM2OE1_POSITION                           0x1
#define _PWM2AOE_PWM2OE1_SIZE                               0x1
#define _PWM2AOE_PWM2OE1_LENGTH                             0x1
#define _PWM2AOE_PWM2OE1_MASK                               0x2
#define _PWM2AOE_PWM2OE2_POSN                               0x2
#define _PWM2AOE_PWM2OE2_POSITION                           0x2
#define _PWM2AOE_PWM2OE2_SIZE                               0x1
#define _PWM2AOE_PWM2OE2_LENGTH                             0x1
#define _PWM2AOE_PWM2OE2_MASK                               0x4
#define _PWM2AOE_PWM2OE3_POSN                               0x3
#define _PWM2AOE_PWM2OE3_POSITION                           0x3
#define _PWM2AOE_PWM2OE3_SIZE                               0x1
#define _PWM2AOE_PWM2OE3_LENGTH                             0x1
#define _PWM2AOE_PWM2OE3_MASK                               0x8

// Register: ADCTX
#define ADCTX ADCTX
extern volatile unsigned char           ADCTX               __at(0x691);
#ifndef _LIB_BUILD
asm("ADCTX equ 0691h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned A1TX0                  :1;
        unsigned A1TX1                  :1;
        unsigned A1TX2                  :1;
        unsigned                        :1;
        unsigned A2TX0                  :1;
        unsigned A2TX1                  :1;
        unsigned A2TX2                  :1;
    };
} ADCTXbits_t;
extern volatile ADCTXbits_t ADCTXbits __at(0x691);
// bitfield macros
#define _ADCTX_A1TX0_POSN                                   0x0
#define _ADCTX_A1TX0_POSITION                               0x0
#define _ADCTX_A1TX0_SIZE                                   0x1
#define _ADCTX_A1TX0_LENGTH                                 0x1
#define _ADCTX_A1TX0_MASK                                   0x1
#define _ADCTX_A1TX1_POSN                                   0x1
#define _ADCTX_A1TX1_POSITION                               0x1
#define _ADCTX_A1TX1_SIZE                                   0x1
#define _ADCTX_A1TX1_LENGTH                                 0x1
#define _ADCTX_A1TX1_MASK                                   0x2
#define _ADCTX_A1TX2_POSN                                   0x2
#define _ADCTX_A1TX2_POSITION                               0x2
#define _ADCTX_A1TX2_SIZE                                   0x1
#define _ADCTX_A1TX2_LENGTH                                 0x1
#define _ADCTX_A1TX2_MASK                                   0x4
#define _ADCTX_A2TX0_POSN                                   0x4
#define _ADCTX_A2TX0_POSITION                               0x4
#define _ADCTX_A2TX0_SIZE                                   0x1
#define _ADCTX_A2TX0_LENGTH                                 0x1
#define _ADCTX_A2TX0_MASK                                   0x10
#define _ADCTX_A2TX1_POSN                                   0x5
#define _ADCTX_A2TX1_POSITION                               0x5
#define _ADCTX_A2TX1_SIZE                                   0x1
#define _ADCTX_A2TX1_LENGTH                                 0x1
#define _ADCTX_A2TX1_MASK                                   0x20
#define _ADCTX_A2TX2_POSN                                   0x6
#define _ADCTX_A2TX2_POSITION                               0x6
#define _ADCTX_A2TX2_SIZE                                   0x1
#define _ADCTX_A2TX2_LENGTH                                 0x1
#define _ADCTX_A2TX2_MASK                                   0x40

// Register: AD1TX
#define AD1TX AD1TX
extern volatile unsigned short          AD1TX               __at(0x692);
#ifndef _LIB_BUILD
asm("AD1TX equ 0692h");
#endif
// aliases
extern volatile unsigned short          AAD1TX              __at(0x692);
#ifndef _LIB_BUILD
asm("AAD1TX equ 0692h");
#endif

// Register: AD1TX0
#define AD1TX0 AD1TX0
extern volatile unsigned char           AD1TX0              __at(0x692);
#ifndef _LIB_BUILD
asm("AD1TX0 equ 0692h");
#endif
// aliases
extern volatile unsigned char           AAD1TX0             __at(0x692);
#ifndef _LIB_BUILD
asm("AAD1TX0 equ 0692h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX10                   :1;
        unsigned TX11                   :1;
        unsigned TX12                   :1;
        unsigned TX13                   :1;
        unsigned TX14                   :1;
        unsigned TX15                   :1;
        unsigned TX16                   :1;
        unsigned TX17                   :1;
    };
} AD1TX0bits_t;
extern volatile AD1TX0bits_t AD1TX0bits __at(0x692);
// bitfield macros
#define _AD1TX0_TX10_POSN                                   0x0
#define _AD1TX0_TX10_POSITION                               0x0
#define _AD1TX0_TX10_SIZE                                   0x1
#define _AD1TX0_TX10_LENGTH                                 0x1
#define _AD1TX0_TX10_MASK                                   0x1
#define _AD1TX0_TX11_POSN                                   0x1
#define _AD1TX0_TX11_POSITION                               0x1
#define _AD1TX0_TX11_SIZE                                   0x1
#define _AD1TX0_TX11_LENGTH                                 0x1
#define _AD1TX0_TX11_MASK                                   0x2
#define _AD1TX0_TX12_POSN                                   0x2
#define _AD1TX0_TX12_POSITION                               0x2
#define _AD1TX0_TX12_SIZE                                   0x1
#define _AD1TX0_TX12_LENGTH                                 0x1
#define _AD1TX0_TX12_MASK                                   0x4
#define _AD1TX0_TX13_POSN                                   0x3
#define _AD1TX0_TX13_POSITION                               0x3
#define _AD1TX0_TX13_SIZE                                   0x1
#define _AD1TX0_TX13_LENGTH                                 0x1
#define _AD1TX0_TX13_MASK                                   0x8
#define _AD1TX0_TX14_POSN                                   0x4
#define _AD1TX0_TX14_POSITION                               0x4
#define _AD1TX0_TX14_SIZE                                   0x1
#define _AD1TX0_TX14_LENGTH                                 0x1
#define _AD1TX0_TX14_MASK                                   0x10
#define _AD1TX0_TX15_POSN                                   0x5
#define _AD1TX0_TX15_POSITION                               0x5
#define _AD1TX0_TX15_SIZE                                   0x1
#define _AD1TX0_TX15_LENGTH                                 0x1
#define _AD1TX0_TX15_MASK                                   0x20
#define _AD1TX0_TX16_POSN                                   0x6
#define _AD1TX0_TX16_POSITION                               0x6
#define _AD1TX0_TX16_SIZE                                   0x1
#define _AD1TX0_TX16_LENGTH                                 0x1
#define _AD1TX0_TX16_MASK                                   0x40
#define _AD1TX0_TX17_POSN                                   0x7
#define _AD1TX0_TX17_POSITION                               0x7
#define _AD1TX0_TX17_SIZE                                   0x1
#define _AD1TX0_TX17_LENGTH                                 0x1
#define _AD1TX0_TX17_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX10                   :1;
        unsigned TX11                   :1;
        unsigned TX12                   :1;
        unsigned TX13                   :1;
        unsigned TX14                   :1;
        unsigned TX15                   :1;
        unsigned TX16                   :1;
        unsigned TX17                   :1;
    };
} AAD1TX0bits_t;
extern volatile AAD1TX0bits_t AAD1TX0bits __at(0x692);
// bitfield macros
#define _AAD1TX0_TX10_POSN                                  0x0
#define _AAD1TX0_TX10_POSITION                              0x0
#define _AAD1TX0_TX10_SIZE                                  0x1
#define _AAD1TX0_TX10_LENGTH                                0x1
#define _AAD1TX0_TX10_MASK                                  0x1
#define _AAD1TX0_TX11_POSN                                  0x1
#define _AAD1TX0_TX11_POSITION                              0x1
#define _AAD1TX0_TX11_SIZE                                  0x1
#define _AAD1TX0_TX11_LENGTH                                0x1
#define _AAD1TX0_TX11_MASK                                  0x2
#define _AAD1TX0_TX12_POSN                                  0x2
#define _AAD1TX0_TX12_POSITION                              0x2
#define _AAD1TX0_TX12_SIZE                                  0x1
#define _AAD1TX0_TX12_LENGTH                                0x1
#define _AAD1TX0_TX12_MASK                                  0x4
#define _AAD1TX0_TX13_POSN                                  0x3
#define _AAD1TX0_TX13_POSITION                              0x3
#define _AAD1TX0_TX13_SIZE                                  0x1
#define _AAD1TX0_TX13_LENGTH                                0x1
#define _AAD1TX0_TX13_MASK                                  0x8
#define _AAD1TX0_TX14_POSN                                  0x4
#define _AAD1TX0_TX14_POSITION                              0x4
#define _AAD1TX0_TX14_SIZE                                  0x1
#define _AAD1TX0_TX14_LENGTH                                0x1
#define _AAD1TX0_TX14_MASK                                  0x10
#define _AAD1TX0_TX15_POSN                                  0x5
#define _AAD1TX0_TX15_POSITION                              0x5
#define _AAD1TX0_TX15_SIZE                                  0x1
#define _AAD1TX0_TX15_LENGTH                                0x1
#define _AAD1TX0_TX15_MASK                                  0x20
#define _AAD1TX0_TX16_POSN                                  0x6
#define _AAD1TX0_TX16_POSITION                              0x6
#define _AAD1TX0_TX16_SIZE                                  0x1
#define _AAD1TX0_TX16_LENGTH                                0x1
#define _AAD1TX0_TX16_MASK                                  0x40
#define _AAD1TX0_TX17_POSN                                  0x7
#define _AAD1TX0_TX17_POSITION                              0x7
#define _AAD1TX0_TX17_SIZE                                  0x1
#define _AAD1TX0_TX17_LENGTH                                0x1
#define _AAD1TX0_TX17_MASK                                  0x80

// Register: AD1TX1
#define AD1TX1 AD1TX1
extern volatile unsigned char           AD1TX1              __at(0x693);
#ifndef _LIB_BUILD
asm("AD1TX1 equ 0693h");
#endif
// aliases
extern volatile unsigned char           AAD1TX1             __at(0x693);
#ifndef _LIB_BUILD
asm("AAD1TX1 equ 0693h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX18                   :1;
        unsigned TX19                   :1;
        unsigned TX30                   :1;
        unsigned TX31                   :1;
        unsigned TX32                   :1;
        unsigned TX33                   :1;
        unsigned TX34                   :1;
        unsigned TX35                   :1;
    };
} AD1TX1bits_t;
extern volatile AD1TX1bits_t AD1TX1bits __at(0x693);
// bitfield macros
#define _AD1TX1_TX18_POSN                                   0x0
#define _AD1TX1_TX18_POSITION                               0x0
#define _AD1TX1_TX18_SIZE                                   0x1
#define _AD1TX1_TX18_LENGTH                                 0x1
#define _AD1TX1_TX18_MASK                                   0x1
#define _AD1TX1_TX19_POSN                                   0x1
#define _AD1TX1_TX19_POSITION                               0x1
#define _AD1TX1_TX19_SIZE                                   0x1
#define _AD1TX1_TX19_LENGTH                                 0x1
#define _AD1TX1_TX19_MASK                                   0x2
#define _AD1TX1_TX30_POSN                                   0x2
#define _AD1TX1_TX30_POSITION                               0x2
#define _AD1TX1_TX30_SIZE                                   0x1
#define _AD1TX1_TX30_LENGTH                                 0x1
#define _AD1TX1_TX30_MASK                                   0x4
#define _AD1TX1_TX31_POSN                                   0x3
#define _AD1TX1_TX31_POSITION                               0x3
#define _AD1TX1_TX31_SIZE                                   0x1
#define _AD1TX1_TX31_LENGTH                                 0x1
#define _AD1TX1_TX31_MASK                                   0x8
#define _AD1TX1_TX32_POSN                                   0x4
#define _AD1TX1_TX32_POSITION                               0x4
#define _AD1TX1_TX32_SIZE                                   0x1
#define _AD1TX1_TX32_LENGTH                                 0x1
#define _AD1TX1_TX32_MASK                                   0x10
#define _AD1TX1_TX33_POSN                                   0x5
#define _AD1TX1_TX33_POSITION                               0x5
#define _AD1TX1_TX33_SIZE                                   0x1
#define _AD1TX1_TX33_LENGTH                                 0x1
#define _AD1TX1_TX33_MASK                                   0x20
#define _AD1TX1_TX34_POSN                                   0x6
#define _AD1TX1_TX34_POSITION                               0x6
#define _AD1TX1_TX34_SIZE                                   0x1
#define _AD1TX1_TX34_LENGTH                                 0x1
#define _AD1TX1_TX34_MASK                                   0x40
#define _AD1TX1_TX35_POSN                                   0x7
#define _AD1TX1_TX35_POSITION                               0x7
#define _AD1TX1_TX35_SIZE                                   0x1
#define _AD1TX1_TX35_LENGTH                                 0x1
#define _AD1TX1_TX35_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX18                   :1;
        unsigned TX19                   :1;
        unsigned TX30                   :1;
        unsigned TX31                   :1;
        unsigned TX32                   :1;
        unsigned TX33                   :1;
        unsigned TX34                   :1;
        unsigned TX35                   :1;
    };
} AAD1TX1bits_t;
extern volatile AAD1TX1bits_t AAD1TX1bits __at(0x693);
// bitfield macros
#define _AAD1TX1_TX18_POSN                                  0x0
#define _AAD1TX1_TX18_POSITION                              0x0
#define _AAD1TX1_TX18_SIZE                                  0x1
#define _AAD1TX1_TX18_LENGTH                                0x1
#define _AAD1TX1_TX18_MASK                                  0x1
#define _AAD1TX1_TX19_POSN                                  0x1
#define _AAD1TX1_TX19_POSITION                              0x1
#define _AAD1TX1_TX19_SIZE                                  0x1
#define _AAD1TX1_TX19_LENGTH                                0x1
#define _AAD1TX1_TX19_MASK                                  0x2
#define _AAD1TX1_TX30_POSN                                  0x2
#define _AAD1TX1_TX30_POSITION                              0x2
#define _AAD1TX1_TX30_SIZE                                  0x1
#define _AAD1TX1_TX30_LENGTH                                0x1
#define _AAD1TX1_TX30_MASK                                  0x4
#define _AAD1TX1_TX31_POSN                                  0x3
#define _AAD1TX1_TX31_POSITION                              0x3
#define _AAD1TX1_TX31_SIZE                                  0x1
#define _AAD1TX1_TX31_LENGTH                                0x1
#define _AAD1TX1_TX31_MASK                                  0x8
#define _AAD1TX1_TX32_POSN                                  0x4
#define _AAD1TX1_TX32_POSITION                              0x4
#define _AAD1TX1_TX32_SIZE                                  0x1
#define _AAD1TX1_TX32_LENGTH                                0x1
#define _AAD1TX1_TX32_MASK                                  0x10
#define _AAD1TX1_TX33_POSN                                  0x5
#define _AAD1TX1_TX33_POSITION                              0x5
#define _AAD1TX1_TX33_SIZE                                  0x1
#define _AAD1TX1_TX33_LENGTH                                0x1
#define _AAD1TX1_TX33_MASK                                  0x20
#define _AAD1TX1_TX34_POSN                                  0x6
#define _AAD1TX1_TX34_POSITION                              0x6
#define _AAD1TX1_TX34_SIZE                                  0x1
#define _AAD1TX1_TX34_LENGTH                                0x1
#define _AAD1TX1_TX34_MASK                                  0x40
#define _AAD1TX1_TX35_POSN                                  0x7
#define _AAD1TX1_TX35_POSITION                              0x7
#define _AAD1TX1_TX35_SIZE                                  0x1
#define _AAD1TX1_TX35_LENGTH                                0x1
#define _AAD1TX1_TX35_MASK                                  0x80

// Register: AD2TX
#define AD2TX AD2TX
extern volatile unsigned short          AD2TX               __at(0x694);
#ifndef _LIB_BUILD
asm("AD2TX equ 0694h");
#endif
// aliases
extern volatile unsigned short          AAD2TX              __at(0x694);
#ifndef _LIB_BUILD
asm("AAD2TX equ 0694h");
#endif

// Register: AD2TX0
#define AD2TX0 AD2TX0
extern volatile unsigned char           AD2TX0              __at(0x694);
#ifndef _LIB_BUILD
asm("AD2TX0 equ 0694h");
#endif
// aliases
extern volatile unsigned char           AAD2TX0             __at(0x694);
#ifndef _LIB_BUILD
asm("AAD2TX0 equ 0694h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX20                   :1;
        unsigned TX21                   :1;
        unsigned TX22                   :1;
        unsigned TX23                   :1;
        unsigned TX24                   :1;
        unsigned TX25                   :1;
        unsigned TX26                   :1;
        unsigned TX27                   :1;
    };
} AD2TX0bits_t;
extern volatile AD2TX0bits_t AD2TX0bits __at(0x694);
// bitfield macros
#define _AD2TX0_TX20_POSN                                   0x0
#define _AD2TX0_TX20_POSITION                               0x0
#define _AD2TX0_TX20_SIZE                                   0x1
#define _AD2TX0_TX20_LENGTH                                 0x1
#define _AD2TX0_TX20_MASK                                   0x1
#define _AD2TX0_TX21_POSN                                   0x1
#define _AD2TX0_TX21_POSITION                               0x1
#define _AD2TX0_TX21_SIZE                                   0x1
#define _AD2TX0_TX21_LENGTH                                 0x1
#define _AD2TX0_TX21_MASK                                   0x2
#define _AD2TX0_TX22_POSN                                   0x2
#define _AD2TX0_TX22_POSITION                               0x2
#define _AD2TX0_TX22_SIZE                                   0x1
#define _AD2TX0_TX22_LENGTH                                 0x1
#define _AD2TX0_TX22_MASK                                   0x4
#define _AD2TX0_TX23_POSN                                   0x3
#define _AD2TX0_TX23_POSITION                               0x3
#define _AD2TX0_TX23_SIZE                                   0x1
#define _AD2TX0_TX23_LENGTH                                 0x1
#define _AD2TX0_TX23_MASK                                   0x8
#define _AD2TX0_TX24_POSN                                   0x4
#define _AD2TX0_TX24_POSITION                               0x4
#define _AD2TX0_TX24_SIZE                                   0x1
#define _AD2TX0_TX24_LENGTH                                 0x1
#define _AD2TX0_TX24_MASK                                   0x10
#define _AD2TX0_TX25_POSN                                   0x5
#define _AD2TX0_TX25_POSITION                               0x5
#define _AD2TX0_TX25_SIZE                                   0x1
#define _AD2TX0_TX25_LENGTH                                 0x1
#define _AD2TX0_TX25_MASK                                   0x20
#define _AD2TX0_TX26_POSN                                   0x6
#define _AD2TX0_TX26_POSITION                               0x6
#define _AD2TX0_TX26_SIZE                                   0x1
#define _AD2TX0_TX26_LENGTH                                 0x1
#define _AD2TX0_TX26_MASK                                   0x40
#define _AD2TX0_TX27_POSN                                   0x7
#define _AD2TX0_TX27_POSITION                               0x7
#define _AD2TX0_TX27_SIZE                                   0x1
#define _AD2TX0_TX27_LENGTH                                 0x1
#define _AD2TX0_TX27_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX20                   :1;
        unsigned TX21                   :1;
        unsigned TX22                   :1;
        unsigned TX23                   :1;
        unsigned TX24                   :1;
        unsigned TX25                   :1;
        unsigned TX26                   :1;
        unsigned TX27                   :1;
    };
} AAD2TX0bits_t;
extern volatile AAD2TX0bits_t AAD2TX0bits __at(0x694);
// bitfield macros
#define _AAD2TX0_TX20_POSN                                  0x0
#define _AAD2TX0_TX20_POSITION                              0x0
#define _AAD2TX0_TX20_SIZE                                  0x1
#define _AAD2TX0_TX20_LENGTH                                0x1
#define _AAD2TX0_TX20_MASK                                  0x1
#define _AAD2TX0_TX21_POSN                                  0x1
#define _AAD2TX0_TX21_POSITION                              0x1
#define _AAD2TX0_TX21_SIZE                                  0x1
#define _AAD2TX0_TX21_LENGTH                                0x1
#define _AAD2TX0_TX21_MASK                                  0x2
#define _AAD2TX0_TX22_POSN                                  0x2
#define _AAD2TX0_TX22_POSITION                              0x2
#define _AAD2TX0_TX22_SIZE                                  0x1
#define _AAD2TX0_TX22_LENGTH                                0x1
#define _AAD2TX0_TX22_MASK                                  0x4
#define _AAD2TX0_TX23_POSN                                  0x3
#define _AAD2TX0_TX23_POSITION                              0x3
#define _AAD2TX0_TX23_SIZE                                  0x1
#define _AAD2TX0_TX23_LENGTH                                0x1
#define _AAD2TX0_TX23_MASK                                  0x8
#define _AAD2TX0_TX24_POSN                                  0x4
#define _AAD2TX0_TX24_POSITION                              0x4
#define _AAD2TX0_TX24_SIZE                                  0x1
#define _AAD2TX0_TX24_LENGTH                                0x1
#define _AAD2TX0_TX24_MASK                                  0x10
#define _AAD2TX0_TX25_POSN                                  0x5
#define _AAD2TX0_TX25_POSITION                              0x5
#define _AAD2TX0_TX25_SIZE                                  0x1
#define _AAD2TX0_TX25_LENGTH                                0x1
#define _AAD2TX0_TX25_MASK                                  0x20
#define _AAD2TX0_TX26_POSN                                  0x6
#define _AAD2TX0_TX26_POSITION                              0x6
#define _AAD2TX0_TX26_SIZE                                  0x1
#define _AAD2TX0_TX26_LENGTH                                0x1
#define _AAD2TX0_TX26_MASK                                  0x40
#define _AAD2TX0_TX27_POSN                                  0x7
#define _AAD2TX0_TX27_POSITION                              0x7
#define _AAD2TX0_TX27_SIZE                                  0x1
#define _AAD2TX0_TX27_LENGTH                                0x1
#define _AAD2TX0_TX27_MASK                                  0x80

// Register: AD2TX1
#define AD2TX1 AD2TX1
extern volatile unsigned char           AD2TX1              __at(0x695);
#ifndef _LIB_BUILD
asm("AD2TX1 equ 0695h");
#endif
// aliases
extern volatile unsigned char           AAD2TX1             __at(0x695);
#ifndef _LIB_BUILD
asm("AAD2TX1 equ 0695h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX28                   :1;
        unsigned TX29                   :1;
        unsigned TX40                   :1;
        unsigned TX41                   :1;
        unsigned TX42                   :1;
        unsigned TX43                   :1;
        unsigned TX44                   :1;
        unsigned TX45                   :1;
    };
} AD2TX1bits_t;
extern volatile AD2TX1bits_t AD2TX1bits __at(0x695);
// bitfield macros
#define _AD2TX1_TX28_POSN                                   0x0
#define _AD2TX1_TX28_POSITION                               0x0
#define _AD2TX1_TX28_SIZE                                   0x1
#define _AD2TX1_TX28_LENGTH                                 0x1
#define _AD2TX1_TX28_MASK                                   0x1
#define _AD2TX1_TX29_POSN                                   0x1
#define _AD2TX1_TX29_POSITION                               0x1
#define _AD2TX1_TX29_SIZE                                   0x1
#define _AD2TX1_TX29_LENGTH                                 0x1
#define _AD2TX1_TX29_MASK                                   0x2
#define _AD2TX1_TX40_POSN                                   0x2
#define _AD2TX1_TX40_POSITION                               0x2
#define _AD2TX1_TX40_SIZE                                   0x1
#define _AD2TX1_TX40_LENGTH                                 0x1
#define _AD2TX1_TX40_MASK                                   0x4
#define _AD2TX1_TX41_POSN                                   0x3
#define _AD2TX1_TX41_POSITION                               0x3
#define _AD2TX1_TX41_SIZE                                   0x1
#define _AD2TX1_TX41_LENGTH                                 0x1
#define _AD2TX1_TX41_MASK                                   0x8
#define _AD2TX1_TX42_POSN                                   0x4
#define _AD2TX1_TX42_POSITION                               0x4
#define _AD2TX1_TX42_SIZE                                   0x1
#define _AD2TX1_TX42_LENGTH                                 0x1
#define _AD2TX1_TX42_MASK                                   0x10
#define _AD2TX1_TX43_POSN                                   0x5
#define _AD2TX1_TX43_POSITION                               0x5
#define _AD2TX1_TX43_SIZE                                   0x1
#define _AD2TX1_TX43_LENGTH                                 0x1
#define _AD2TX1_TX43_MASK                                   0x20
#define _AD2TX1_TX44_POSN                                   0x6
#define _AD2TX1_TX44_POSITION                               0x6
#define _AD2TX1_TX44_SIZE                                   0x1
#define _AD2TX1_TX44_LENGTH                                 0x1
#define _AD2TX1_TX44_MASK                                   0x40
#define _AD2TX1_TX45_POSN                                   0x7
#define _AD2TX1_TX45_POSITION                               0x7
#define _AD2TX1_TX45_SIZE                                   0x1
#define _AD2TX1_TX45_LENGTH                                 0x1
#define _AD2TX1_TX45_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX28                   :1;
        unsigned TX29                   :1;
        unsigned TX40                   :1;
        unsigned TX41                   :1;
        unsigned TX42                   :1;
        unsigned TX43                   :1;
        unsigned TX44                   :1;
        unsigned TX45                   :1;
    };
} AAD2TX1bits_t;
extern volatile AAD2TX1bits_t AAD2TX1bits __at(0x695);
// bitfield macros
#define _AAD2TX1_TX28_POSN                                  0x0
#define _AAD2TX1_TX28_POSITION                              0x0
#define _AAD2TX1_TX28_SIZE                                  0x1
#define _AAD2TX1_TX28_LENGTH                                0x1
#define _AAD2TX1_TX28_MASK                                  0x1
#define _AAD2TX1_TX29_POSN                                  0x1
#define _AAD2TX1_TX29_POSITION                              0x1
#define _AAD2TX1_TX29_SIZE                                  0x1
#define _AAD2TX1_TX29_LENGTH                                0x1
#define _AAD2TX1_TX29_MASK                                  0x2
#define _AAD2TX1_TX40_POSN                                  0x2
#define _AAD2TX1_TX40_POSITION                              0x2
#define _AAD2TX1_TX40_SIZE                                  0x1
#define _AAD2TX1_TX40_LENGTH                                0x1
#define _AAD2TX1_TX40_MASK                                  0x4
#define _AAD2TX1_TX41_POSN                                  0x3
#define _AAD2TX1_TX41_POSITION                              0x3
#define _AAD2TX1_TX41_SIZE                                  0x1
#define _AAD2TX1_TX41_LENGTH                                0x1
#define _AAD2TX1_TX41_MASK                                  0x8
#define _AAD2TX1_TX42_POSN                                  0x4
#define _AAD2TX1_TX42_POSITION                              0x4
#define _AAD2TX1_TX42_SIZE                                  0x1
#define _AAD2TX1_TX42_LENGTH                                0x1
#define _AAD2TX1_TX42_MASK                                  0x10
#define _AAD2TX1_TX43_POSN                                  0x5
#define _AAD2TX1_TX43_POSITION                              0x5
#define _AAD2TX1_TX43_SIZE                                  0x1
#define _AAD2TX1_TX43_LENGTH                                0x1
#define _AAD2TX1_TX43_MASK                                  0x20
#define _AAD2TX1_TX44_POSN                                  0x6
#define _AAD2TX1_TX44_POSITION                              0x6
#define _AAD2TX1_TX44_SIZE                                  0x1
#define _AAD2TX1_TX44_LENGTH                                0x1
#define _AAD2TX1_TX44_MASK                                  0x40
#define _AAD2TX1_TX45_POSN                                  0x7
#define _AAD2TX1_TX45_POSITION                              0x7
#define _AAD2TX1_TX45_SIZE                                  0x1
#define _AAD2TX1_TX45_LENGTH                                0x1
#define _AAD2TX1_TX45_MASK                                  0x80

// Register: AD1CON0
#define AD1CON0 AD1CON0
extern volatile unsigned char           AD1CON0             __at(0x711);
#ifndef _LIB_BUILD
asm("AD1CON0 equ 0711h");
#endif
// aliases
extern volatile unsigned char           AADCON0             __at(0x711);
#ifndef _LIB_BUILD
asm("AADCON0 equ 0711h");
#endif
extern volatile unsigned char           AAD1CON0            __at(0x711);
#ifndef _LIB_BUILD
asm("AAD1CON0 equ 0711h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO                     :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned AD1ON                  :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_nDONE1              :1;
    };
} AD1CON0bits_t;
extern volatile AD1CON0bits_t AD1CON0bits __at(0x711);
// bitfield macros
#define _AD1CON0_ADON_POSN                                  0x0
#define _AD1CON0_ADON_POSITION                              0x0
#define _AD1CON0_ADON_SIZE                                  0x1
#define _AD1CON0_ADON_LENGTH                                0x1
#define _AD1CON0_ADON_MASK                                  0x1
#define _AD1CON0_GO_POSN                                    0x1
#define _AD1CON0_GO_POSITION                                0x1
#define _AD1CON0_GO_SIZE                                    0x1
#define _AD1CON0_GO_LENGTH                                  0x1
#define _AD1CON0_GO_MASK                                    0x2
#define _AD1CON0_CHS_POSN                                   0x2
#define _AD1CON0_CHS_POSITION                               0x2
#define _AD1CON0_CHS_SIZE                                   0x6
#define _AD1CON0_CHS_LENGTH                                 0x6
#define _AD1CON0_CHS_MASK                                   0xFC
#define _AD1CON0_AD1ON_POSN                                 0x0
#define _AD1CON0_AD1ON_POSITION                             0x0
#define _AD1CON0_AD1ON_SIZE                                 0x1
#define _AD1CON0_AD1ON_LENGTH                               0x1
#define _AD1CON0_AD1ON_MASK                                 0x1
#define _AD1CON0_GO_nDONE_POSN                              0x1
#define _AD1CON0_GO_nDONE_POSITION                          0x1
#define _AD1CON0_GO_nDONE_SIZE                              0x1
#define _AD1CON0_GO_nDONE_LENGTH                            0x1
#define _AD1CON0_GO_nDONE_MASK                              0x2
#define _AD1CON0_CHS0_POSN                                  0x2
#define _AD1CON0_CHS0_POSITION                              0x2
#define _AD1CON0_CHS0_SIZE                                  0x1
#define _AD1CON0_CHS0_LENGTH                                0x1
#define _AD1CON0_CHS0_MASK                                  0x4
#define _AD1CON0_CHS1_POSN                                  0x3
#define _AD1CON0_CHS1_POSITION                              0x3
#define _AD1CON0_CHS1_SIZE                                  0x1
#define _AD1CON0_CHS1_LENGTH                                0x1
#define _AD1CON0_CHS1_MASK                                  0x8
#define _AD1CON0_CHS2_POSN                                  0x4
#define _AD1CON0_CHS2_POSITION                              0x4
#define _AD1CON0_CHS2_SIZE                                  0x1
#define _AD1CON0_CHS2_LENGTH                                0x1
#define _AD1CON0_CHS2_MASK                                  0x10
#define _AD1CON0_CHS3_POSN                                  0x5
#define _AD1CON0_CHS3_POSITION                              0x5
#define _AD1CON0_CHS3_SIZE                                  0x1
#define _AD1CON0_CHS3_LENGTH                                0x1
#define _AD1CON0_CHS3_MASK                                  0x20
#define _AD1CON0_CHS4_POSN                                  0x6
#define _AD1CON0_CHS4_POSITION                              0x6
#define _AD1CON0_CHS4_SIZE                                  0x1
#define _AD1CON0_CHS4_LENGTH                                0x1
#define _AD1CON0_CHS4_MASK                                  0x40
#define _AD1CON0_CHS5_POSN                                  0x7
#define _AD1CON0_CHS5_POSITION                              0x7
#define _AD1CON0_CHS5_SIZE                                  0x1
#define _AD1CON0_CHS5_LENGTH                                0x1
#define _AD1CON0_CHS5_MASK                                  0x80
#define _AD1CON0_GO_nDONE1_POSN                             0x1
#define _AD1CON0_GO_nDONE1_POSITION                         0x1
#define _AD1CON0_GO_nDONE1_SIZE                             0x1
#define _AD1CON0_GO_nDONE1_LENGTH                           0x1
#define _AD1CON0_GO_nDONE1_MASK                             0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO                     :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned AD1ON                  :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_nDONE1              :1;
    };
} AADCON0bits_t;
extern volatile AADCON0bits_t AADCON0bits __at(0x711);
// bitfield macros
#define _AADCON0_ADON_POSN                                  0x0
#define _AADCON0_ADON_POSITION                              0x0
#define _AADCON0_ADON_SIZE                                  0x1
#define _AADCON0_ADON_LENGTH                                0x1
#define _AADCON0_ADON_MASK                                  0x1
#define _AADCON0_GO_POSN                                    0x1
#define _AADCON0_GO_POSITION                                0x1
#define _AADCON0_GO_SIZE                                    0x1
#define _AADCON0_GO_LENGTH                                  0x1
#define _AADCON0_GO_MASK                                    0x2
#define _AADCON0_CHS_POSN                                   0x2
#define _AADCON0_CHS_POSITION                               0x2
#define _AADCON0_CHS_SIZE                                   0x6
#define _AADCON0_CHS_LENGTH                                 0x6
#define _AADCON0_CHS_MASK                                   0xFC
#define _AADCON0_AD1ON_POSN                                 0x0
#define _AADCON0_AD1ON_POSITION                             0x0
#define _AADCON0_AD1ON_SIZE                                 0x1
#define _AADCON0_AD1ON_LENGTH                               0x1
#define _AADCON0_AD1ON_MASK                                 0x1
#define _AADCON0_GO_nDONE_POSN                              0x1
#define _AADCON0_GO_nDONE_POSITION                          0x1
#define _AADCON0_GO_nDONE_SIZE                              0x1
#define _AADCON0_GO_nDONE_LENGTH                            0x1
#define _AADCON0_GO_nDONE_MASK                              0x2
#define _AADCON0_CHS0_POSN                                  0x2
#define _AADCON0_CHS0_POSITION                              0x2
#define _AADCON0_CHS0_SIZE                                  0x1
#define _AADCON0_CHS0_LENGTH                                0x1
#define _AADCON0_CHS0_MASK                                  0x4
#define _AADCON0_CHS1_POSN                                  0x3
#define _AADCON0_CHS1_POSITION                              0x3
#define _AADCON0_CHS1_SIZE                                  0x1
#define _AADCON0_CHS1_LENGTH                                0x1
#define _AADCON0_CHS1_MASK                                  0x8
#define _AADCON0_CHS2_POSN                                  0x4
#define _AADCON0_CHS2_POSITION                              0x4
#define _AADCON0_CHS2_SIZE                                  0x1
#define _AADCON0_CHS2_LENGTH                                0x1
#define _AADCON0_CHS2_MASK                                  0x10
#define _AADCON0_CHS3_POSN                                  0x5
#define _AADCON0_CHS3_POSITION                              0x5
#define _AADCON0_CHS3_SIZE                                  0x1
#define _AADCON0_CHS3_LENGTH                                0x1
#define _AADCON0_CHS3_MASK                                  0x20
#define _AADCON0_CHS4_POSN                                  0x6
#define _AADCON0_CHS4_POSITION                              0x6
#define _AADCON0_CHS4_SIZE                                  0x1
#define _AADCON0_CHS4_LENGTH                                0x1
#define _AADCON0_CHS4_MASK                                  0x40
#define _AADCON0_CHS5_POSN                                  0x7
#define _AADCON0_CHS5_POSITION                              0x7
#define _AADCON0_CHS5_SIZE                                  0x1
#define _AADCON0_CHS5_LENGTH                                0x1
#define _AADCON0_CHS5_MASK                                  0x80
#define _AADCON0_GO_nDONE1_POSN                             0x1
#define _AADCON0_GO_nDONE1_POSITION                         0x1
#define _AADCON0_GO_nDONE1_SIZE                             0x1
#define _AADCON0_GO_nDONE1_LENGTH                           0x1
#define _AADCON0_GO_nDONE1_MASK                             0x2
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO                     :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned AD1ON                  :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_nDONE1              :1;
    };
} AAD1CON0bits_t;
extern volatile AAD1CON0bits_t AAD1CON0bits __at(0x711);
// bitfield macros
#define _AAD1CON0_ADON_POSN                                 0x0
#define _AAD1CON0_ADON_POSITION                             0x0
#define _AAD1CON0_ADON_SIZE                                 0x1
#define _AAD1CON0_ADON_LENGTH                               0x1
#define _AAD1CON0_ADON_MASK                                 0x1
#define _AAD1CON0_GO_POSN                                   0x1
#define _AAD1CON0_GO_POSITION                               0x1
#define _AAD1CON0_GO_SIZE                                   0x1
#define _AAD1CON0_GO_LENGTH                                 0x1
#define _AAD1CON0_GO_MASK                                   0x2
#define _AAD1CON0_CHS_POSN                                  0x2
#define _AAD1CON0_CHS_POSITION                              0x2
#define _AAD1CON0_CHS_SIZE                                  0x6
#define _AAD1CON0_CHS_LENGTH                                0x6
#define _AAD1CON0_CHS_MASK                                  0xFC
#define _AAD1CON0_AD1ON_POSN                                0x0
#define _AAD1CON0_AD1ON_POSITION                            0x0
#define _AAD1CON0_AD1ON_SIZE                                0x1
#define _AAD1CON0_AD1ON_LENGTH                              0x1
#define _AAD1CON0_AD1ON_MASK                                0x1
#define _AAD1CON0_GO_nDONE_POSN                             0x1
#define _AAD1CON0_GO_nDONE_POSITION                         0x1
#define _AAD1CON0_GO_nDONE_SIZE                             0x1
#define _AAD1CON0_GO_nDONE_LENGTH                           0x1
#define _AAD1CON0_GO_nDONE_MASK                             0x2
#define _AAD1CON0_CHS0_POSN                                 0x2
#define _AAD1CON0_CHS0_POSITION                             0x2
#define _AAD1CON0_CHS0_SIZE                                 0x1
#define _AAD1CON0_CHS0_LENGTH                               0x1
#define _AAD1CON0_CHS0_MASK                                 0x4
#define _AAD1CON0_CHS1_POSN                                 0x3
#define _AAD1CON0_CHS1_POSITION                             0x3
#define _AAD1CON0_CHS1_SIZE                                 0x1
#define _AAD1CON0_CHS1_LENGTH                               0x1
#define _AAD1CON0_CHS1_MASK                                 0x8
#define _AAD1CON0_CHS2_POSN                                 0x4
#define _AAD1CON0_CHS2_POSITION                             0x4
#define _AAD1CON0_CHS2_SIZE                                 0x1
#define _AAD1CON0_CHS2_LENGTH                               0x1
#define _AAD1CON0_CHS2_MASK                                 0x10
#define _AAD1CON0_CHS3_POSN                                 0x5
#define _AAD1CON0_CHS3_POSITION                             0x5
#define _AAD1CON0_CHS3_SIZE                                 0x1
#define _AAD1CON0_CHS3_LENGTH                               0x1
#define _AAD1CON0_CHS3_MASK                                 0x20
#define _AAD1CON0_CHS4_POSN                                 0x6
#define _AAD1CON0_CHS4_POSITION                             0x6
#define _AAD1CON0_CHS4_SIZE                                 0x1
#define _AAD1CON0_CHS4_LENGTH                               0x1
#define _AAD1CON0_CHS4_MASK                                 0x40
#define _AAD1CON0_CHS5_POSN                                 0x7
#define _AAD1CON0_CHS5_POSITION                             0x7
#define _AAD1CON0_CHS5_SIZE                                 0x1
#define _AAD1CON0_CHS5_LENGTH                               0x1
#define _AAD1CON0_CHS5_MASK                                 0x80
#define _AAD1CON0_GO_nDONE1_POSN                            0x1
#define _AAD1CON0_GO_nDONE1_POSITION                        0x1
#define _AAD1CON0_GO_nDONE1_SIZE                            0x1
#define _AAD1CON0_GO_nDONE1_LENGTH                          0x1
#define _AAD1CON0_GO_nDONE1_MASK                            0x2

// Register: ADCOMCON
#define ADCOMCON ADCOMCON
extern volatile unsigned char           ADCOMCON            __at(0x712);
#ifndef _LIB_BUILD
asm("ADCOMCON equ 0712h");
#endif
// aliases
extern volatile unsigned char           AADCON1             __at(0x712);
#ifndef _LIB_BUILD
asm("AADCON1 equ 0712h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPREF                 :2;
        unsigned GO_nDONE_ALL           :1;
        unsigned ADNREF                 :1;
        unsigned ADCS                   :3;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned GO_ALL                 :1;
        unsigned                        :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCOMCONbits_t;
extern volatile ADCOMCONbits_t ADCOMCONbits __at(0x712);
// bitfield macros
#define _ADCOMCON_ADPREF_POSN                               0x0
#define _ADCOMCON_ADPREF_POSITION                           0x0
#define _ADCOMCON_ADPREF_SIZE                               0x2
#define _ADCOMCON_ADPREF_LENGTH                             0x2
#define _ADCOMCON_ADPREF_MASK                               0x3
#define _ADCOMCON_GO_nDONE_ALL_POSN                         0x2
#define _ADCOMCON_GO_nDONE_ALL_POSITION                     0x2
#define _ADCOMCON_GO_nDONE_ALL_SIZE                         0x1
#define _ADCOMCON_GO_nDONE_ALL_LENGTH                       0x1
#define _ADCOMCON_GO_nDONE_ALL_MASK                         0x4
#define _ADCOMCON_ADNREF_POSN                               0x3
#define _ADCOMCON_ADNREF_POSITION                           0x3
#define _ADCOMCON_ADNREF_SIZE                               0x1
#define _ADCOMCON_ADNREF_LENGTH                             0x1
#define _ADCOMCON_ADNREF_MASK                               0x8
#define _ADCOMCON_ADCS_POSN                                 0x4
#define _ADCOMCON_ADCS_POSITION                             0x4
#define _ADCOMCON_ADCS_SIZE                                 0x3
#define _ADCOMCON_ADCS_LENGTH                               0x3
#define _ADCOMCON_ADCS_MASK                                 0x70
#define _ADCOMCON_ADFM_POSN                                 0x7
#define _ADCOMCON_ADFM_POSITION                             0x7
#define _ADCOMCON_ADFM_SIZE                                 0x1
#define _ADCOMCON_ADFM_LENGTH                               0x1
#define _ADCOMCON_ADFM_MASK                                 0x80
#define _ADCOMCON_ADPREF0_POSN                              0x0
#define _ADCOMCON_ADPREF0_POSITION                          0x0
#define _ADCOMCON_ADPREF0_SIZE                              0x1
#define _ADCOMCON_ADPREF0_LENGTH                            0x1
#define _ADCOMCON_ADPREF0_MASK                              0x1
#define _ADCOMCON_ADPREF1_POSN                              0x1
#define _ADCOMCON_ADPREF1_POSITION                          0x1
#define _ADCOMCON_ADPREF1_SIZE                              0x1
#define _ADCOMCON_ADPREF1_LENGTH                            0x1
#define _ADCOMCON_ADPREF1_MASK                              0x2
#define _ADCOMCON_GO_ALL_POSN                               0x2
#define _ADCOMCON_GO_ALL_POSITION                           0x2
#define _ADCOMCON_GO_ALL_SIZE                               0x1
#define _ADCOMCON_GO_ALL_LENGTH                             0x1
#define _ADCOMCON_GO_ALL_MASK                               0x4
#define _ADCOMCON_ADCS0_POSN                                0x4
#define _ADCOMCON_ADCS0_POSITION                            0x4
#define _ADCOMCON_ADCS0_SIZE                                0x1
#define _ADCOMCON_ADCS0_LENGTH                              0x1
#define _ADCOMCON_ADCS0_MASK                                0x10
#define _ADCOMCON_ADCS1_POSN                                0x5
#define _ADCOMCON_ADCS1_POSITION                            0x5
#define _ADCOMCON_ADCS1_SIZE                                0x1
#define _ADCOMCON_ADCS1_LENGTH                              0x1
#define _ADCOMCON_ADCS1_MASK                                0x20
#define _ADCOMCON_ADCS2_POSN                                0x6
#define _ADCOMCON_ADCS2_POSITION                            0x6
#define _ADCOMCON_ADCS2_SIZE                                0x1
#define _ADCOMCON_ADCS2_LENGTH                              0x1
#define _ADCOMCON_ADCS2_MASK                                0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADPREF                 :2;
        unsigned GO_nDONE_ALL           :1;
        unsigned ADNREF                 :1;
        unsigned ADCS                   :3;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned GO_ALL                 :1;
        unsigned                        :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} AADCON1bits_t;
extern volatile AADCON1bits_t AADCON1bits __at(0x712);
// bitfield macros
#define _AADCON1_ADPREF_POSN                                0x0
#define _AADCON1_ADPREF_POSITION                            0x0
#define _AADCON1_ADPREF_SIZE                                0x2
#define _AADCON1_ADPREF_LENGTH                              0x2
#define _AADCON1_ADPREF_MASK                                0x3
#define _AADCON1_GO_nDONE_ALL_POSN                          0x2
#define _AADCON1_GO_nDONE_ALL_POSITION                      0x2
#define _AADCON1_GO_nDONE_ALL_SIZE                          0x1
#define _AADCON1_GO_nDONE_ALL_LENGTH                        0x1
#define _AADCON1_GO_nDONE_ALL_MASK                          0x4
#define _AADCON1_ADNREF_POSN                                0x3
#define _AADCON1_ADNREF_POSITION                            0x3
#define _AADCON1_ADNREF_SIZE                                0x1
#define _AADCON1_ADNREF_LENGTH                              0x1
#define _AADCON1_ADNREF_MASK                                0x8
#define _AADCON1_ADCS_POSN                                  0x4
#define _AADCON1_ADCS_POSITION                              0x4
#define _AADCON1_ADCS_SIZE                                  0x3
#define _AADCON1_ADCS_LENGTH                                0x3
#define _AADCON1_ADCS_MASK                                  0x70
#define _AADCON1_ADFM_POSN                                  0x7
#define _AADCON1_ADFM_POSITION                              0x7
#define _AADCON1_ADFM_SIZE                                  0x1
#define _AADCON1_ADFM_LENGTH                                0x1
#define _AADCON1_ADFM_MASK                                  0x80
#define _AADCON1_ADPREF0_POSN                               0x0
#define _AADCON1_ADPREF0_POSITION                           0x0
#define _AADCON1_ADPREF0_SIZE                               0x1
#define _AADCON1_ADPREF0_LENGTH                             0x1
#define _AADCON1_ADPREF0_MASK                               0x1
#define _AADCON1_ADPREF1_POSN                               0x1
#define _AADCON1_ADPREF1_POSITION                           0x1
#define _AADCON1_ADPREF1_SIZE                               0x1
#define _AADCON1_ADPREF1_LENGTH                             0x1
#define _AADCON1_ADPREF1_MASK                               0x2
#define _AADCON1_GO_ALL_POSN                                0x2
#define _AADCON1_GO_ALL_POSITION                            0x2
#define _AADCON1_GO_ALL_SIZE                                0x1
#define _AADCON1_GO_ALL_LENGTH                              0x1
#define _AADCON1_GO_ALL_MASK                                0x4
#define _AADCON1_ADCS0_POSN                                 0x4
#define _AADCON1_ADCS0_POSITION                             0x4
#define _AADCON1_ADCS0_SIZE                                 0x1
#define _AADCON1_ADCS0_LENGTH                               0x1
#define _AADCON1_ADCS0_MASK                                 0x10
#define _AADCON1_ADCS1_POSN                                 0x5
#define _AADCON1_ADCS1_POSITION                             0x5
#define _AADCON1_ADCS1_SIZE                                 0x1
#define _AADCON1_ADCS1_LENGTH                               0x1
#define _AADCON1_ADCS1_MASK                                 0x20
#define _AADCON1_ADCS2_POSN                                 0x6
#define _AADCON1_ADCS2_POSITION                             0x6
#define _AADCON1_ADCS2_SIZE                                 0x1
#define _AADCON1_ADCS2_LENGTH                               0x1
#define _AADCON1_ADCS2_MASK                                 0x40

// Register: AD1CON2
#define AD1CON2 AD1CON2
extern volatile unsigned char           AD1CON2             __at(0x713);
#ifndef _LIB_BUILD
asm("AD1CON2 equ 0713h");
#endif
// aliases
extern volatile unsigned char           AADCON2             __at(0x713);
#ifndef _LIB_BUILD
asm("AADCON2 equ 0713h");
#endif
extern volatile unsigned char           AAD1CON2            __at(0x713);
#ifndef _LIB_BUILD
asm("AAD1CON2 equ 0713h");
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
} AD1CON2bits_t;
extern volatile AD1CON2bits_t AD1CON2bits __at(0x713);
// bitfield macros
#define _AD1CON2_TRIGSEL_POSN                               0x4
#define _AD1CON2_TRIGSEL_POSITION                           0x4
#define _AD1CON2_TRIGSEL_SIZE                               0x3
#define _AD1CON2_TRIGSEL_LENGTH                             0x3
#define _AD1CON2_TRIGSEL_MASK                               0x70
#define _AD1CON2_TRIGSEL0_POSN                              0x4
#define _AD1CON2_TRIGSEL0_POSITION                          0x4
#define _AD1CON2_TRIGSEL0_SIZE                              0x1
#define _AD1CON2_TRIGSEL0_LENGTH                            0x1
#define _AD1CON2_TRIGSEL0_MASK                              0x10
#define _AD1CON2_TRIGSEL1_POSN                              0x5
#define _AD1CON2_TRIGSEL1_POSITION                          0x5
#define _AD1CON2_TRIGSEL1_SIZE                              0x1
#define _AD1CON2_TRIGSEL1_LENGTH                            0x1
#define _AD1CON2_TRIGSEL1_MASK                              0x20
#define _AD1CON2_TRIGSEL2_POSN                              0x6
#define _AD1CON2_TRIGSEL2_POSITION                          0x6
#define _AD1CON2_TRIGSEL2_SIZE                              0x1
#define _AD1CON2_TRIGSEL2_LENGTH                            0x1
#define _AD1CON2_TRIGSEL2_MASK                              0x40
// alias bitfield definitions
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
} AADCON2bits_t;
extern volatile AADCON2bits_t AADCON2bits __at(0x713);
// bitfield macros
#define _AADCON2_TRIGSEL_POSN                               0x4
#define _AADCON2_TRIGSEL_POSITION                           0x4
#define _AADCON2_TRIGSEL_SIZE                               0x3
#define _AADCON2_TRIGSEL_LENGTH                             0x3
#define _AADCON2_TRIGSEL_MASK                               0x70
#define _AADCON2_TRIGSEL0_POSN                              0x4
#define _AADCON2_TRIGSEL0_POSITION                          0x4
#define _AADCON2_TRIGSEL0_SIZE                              0x1
#define _AADCON2_TRIGSEL0_LENGTH                            0x1
#define _AADCON2_TRIGSEL0_MASK                              0x10
#define _AADCON2_TRIGSEL1_POSN                              0x5
#define _AADCON2_TRIGSEL1_POSITION                          0x5
#define _AADCON2_TRIGSEL1_SIZE                              0x1
#define _AADCON2_TRIGSEL1_LENGTH                            0x1
#define _AADCON2_TRIGSEL1_MASK                              0x20
#define _AADCON2_TRIGSEL2_POSN                              0x6
#define _AADCON2_TRIGSEL2_POSITION                          0x6
#define _AADCON2_TRIGSEL2_SIZE                              0x1
#define _AADCON2_TRIGSEL2_LENGTH                            0x1
#define _AADCON2_TRIGSEL2_MASK                              0x40
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
} AAD1CON2bits_t;
extern volatile AAD1CON2bits_t AAD1CON2bits __at(0x713);
// bitfield macros
#define _AAD1CON2_TRIGSEL_POSN                              0x4
#define _AAD1CON2_TRIGSEL_POSITION                          0x4
#define _AAD1CON2_TRIGSEL_SIZE                              0x3
#define _AAD1CON2_TRIGSEL_LENGTH                            0x3
#define _AAD1CON2_TRIGSEL_MASK                              0x70
#define _AAD1CON2_TRIGSEL0_POSN                             0x4
#define _AAD1CON2_TRIGSEL0_POSITION                         0x4
#define _AAD1CON2_TRIGSEL0_SIZE                             0x1
#define _AAD1CON2_TRIGSEL0_LENGTH                           0x1
#define _AAD1CON2_TRIGSEL0_MASK                             0x10
#define _AAD1CON2_TRIGSEL1_POSN                             0x5
#define _AAD1CON2_TRIGSEL1_POSITION                         0x5
#define _AAD1CON2_TRIGSEL1_SIZE                             0x1
#define _AAD1CON2_TRIGSEL1_LENGTH                           0x1
#define _AAD1CON2_TRIGSEL1_MASK                             0x20
#define _AAD1CON2_TRIGSEL2_POSN                             0x6
#define _AAD1CON2_TRIGSEL2_POSITION                         0x6
#define _AAD1CON2_TRIGSEL2_SIZE                             0x1
#define _AAD1CON2_TRIGSEL2_LENGTH                           0x1
#define _AAD1CON2_TRIGSEL2_MASK                             0x40

// Register: AD1CON3
#define AD1CON3 AD1CON3
extern volatile unsigned char           AD1CON3             __at(0x714);
#ifndef _LIB_BUILD
asm("AD1CON3 equ 0714h");
#endif
// aliases
extern volatile unsigned char           AADCON3             __at(0x714);
#ifndef _LIB_BUILD
asm("AADCON3 equ 0714h");
#endif
extern volatile unsigned char           AAD1CON3            __at(0x714);
#ifndef _LIB_BUILD
asm("AAD1CON3 equ 0714h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AD1DSEN                :1;
        unsigned AD1IPEN                :1;
        unsigned                        :4;
        unsigned AD1IPPOL               :1;
        unsigned AD1EPPOL               :1;
    };
    struct {
        unsigned ADDSEN                 :1;
        unsigned ADIPEN                 :1;
        unsigned                        :4;
        unsigned ADIPPOL                :1;
        unsigned ADEPPOL                :1;
    };
} AD1CON3bits_t;
extern volatile AD1CON3bits_t AD1CON3bits __at(0x714);
// bitfield macros
#define _AD1CON3_AD1DSEN_POSN                               0x0
#define _AD1CON3_AD1DSEN_POSITION                           0x0
#define _AD1CON3_AD1DSEN_SIZE                               0x1
#define _AD1CON3_AD1DSEN_LENGTH                             0x1
#define _AD1CON3_AD1DSEN_MASK                               0x1
#define _AD1CON3_AD1IPEN_POSN                               0x1
#define _AD1CON3_AD1IPEN_POSITION                           0x1
#define _AD1CON3_AD1IPEN_SIZE                               0x1
#define _AD1CON3_AD1IPEN_LENGTH                             0x1
#define _AD1CON3_AD1IPEN_MASK                               0x2
#define _AD1CON3_AD1IPPOL_POSN                              0x6
#define _AD1CON3_AD1IPPOL_POSITION                          0x6
#define _AD1CON3_AD1IPPOL_SIZE                              0x1
#define _AD1CON3_AD1IPPOL_LENGTH                            0x1
#define _AD1CON3_AD1IPPOL_MASK                              0x40
#define _AD1CON3_AD1EPPOL_POSN                              0x7
#define _AD1CON3_AD1EPPOL_POSITION                          0x7
#define _AD1CON3_AD1EPPOL_SIZE                              0x1
#define _AD1CON3_AD1EPPOL_LENGTH                            0x1
#define _AD1CON3_AD1EPPOL_MASK                              0x80
#define _AD1CON3_ADDSEN_POSN                                0x0
#define _AD1CON3_ADDSEN_POSITION                            0x0
#define _AD1CON3_ADDSEN_SIZE                                0x1
#define _AD1CON3_ADDSEN_LENGTH                              0x1
#define _AD1CON3_ADDSEN_MASK                                0x1
#define _AD1CON3_ADIPEN_POSN                                0x1
#define _AD1CON3_ADIPEN_POSITION                            0x1
#define _AD1CON3_ADIPEN_SIZE                                0x1
#define _AD1CON3_ADIPEN_LENGTH                              0x1
#define _AD1CON3_ADIPEN_MASK                                0x2
#define _AD1CON3_ADIPPOL_POSN                               0x6
#define _AD1CON3_ADIPPOL_POSITION                           0x6
#define _AD1CON3_ADIPPOL_SIZE                               0x1
#define _AD1CON3_ADIPPOL_LENGTH                             0x1
#define _AD1CON3_ADIPPOL_MASK                               0x40
#define _AD1CON3_ADEPPOL_POSN                               0x7
#define _AD1CON3_ADEPPOL_POSITION                           0x7
#define _AD1CON3_ADEPPOL_SIZE                               0x1
#define _AD1CON3_ADEPPOL_LENGTH                             0x1
#define _AD1CON3_ADEPPOL_MASK                               0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned AD1DSEN                :1;
        unsigned AD1IPEN                :1;
        unsigned                        :4;
        unsigned AD1IPPOL               :1;
        unsigned AD1EPPOL               :1;
    };
    struct {
        unsigned ADDSEN                 :1;
        unsigned ADIPEN                 :1;
        unsigned                        :4;
        unsigned ADIPPOL                :1;
        unsigned ADEPPOL                :1;
    };
} AADCON3bits_t;
extern volatile AADCON3bits_t AADCON3bits __at(0x714);
// bitfield macros
#define _AADCON3_AD1DSEN_POSN                               0x0
#define _AADCON3_AD1DSEN_POSITION                           0x0
#define _AADCON3_AD1DSEN_SIZE                               0x1
#define _AADCON3_AD1DSEN_LENGTH                             0x1
#define _AADCON3_AD1DSEN_MASK                               0x1
#define _AADCON3_AD1IPEN_POSN                               0x1
#define _AADCON3_AD1IPEN_POSITION                           0x1
#define _AADCON3_AD1IPEN_SIZE                               0x1
#define _AADCON3_AD1IPEN_LENGTH                             0x1
#define _AADCON3_AD1IPEN_MASK                               0x2
#define _AADCON3_AD1IPPOL_POSN                              0x6
#define _AADCON3_AD1IPPOL_POSITION                          0x6
#define _AADCON3_AD1IPPOL_SIZE                              0x1
#define _AADCON3_AD1IPPOL_LENGTH                            0x1
#define _AADCON3_AD1IPPOL_MASK                              0x40
#define _AADCON3_AD1EPPOL_POSN                              0x7
#define _AADCON3_AD1EPPOL_POSITION                          0x7
#define _AADCON3_AD1EPPOL_SIZE                              0x1
#define _AADCON3_AD1EPPOL_LENGTH                            0x1
#define _AADCON3_AD1EPPOL_MASK                              0x80
#define _AADCON3_ADDSEN_POSN                                0x0
#define _AADCON3_ADDSEN_POSITION                            0x0
#define _AADCON3_ADDSEN_SIZE                                0x1
#define _AADCON3_ADDSEN_LENGTH                              0x1
#define _AADCON3_ADDSEN_MASK                                0x1
#define _AADCON3_ADIPEN_POSN                                0x1
#define _AADCON3_ADIPEN_POSITION                            0x1
#define _AADCON3_ADIPEN_SIZE                                0x1
#define _AADCON3_ADIPEN_LENGTH                              0x1
#define _AADCON3_ADIPEN_MASK                                0x2
#define _AADCON3_ADIPPOL_POSN                               0x6
#define _AADCON3_ADIPPOL_POSITION                           0x6
#define _AADCON3_ADIPPOL_SIZE                               0x1
#define _AADCON3_ADIPPOL_LENGTH                             0x1
#define _AADCON3_ADIPPOL_MASK                               0x40
#define _AADCON3_ADEPPOL_POSN                               0x7
#define _AADCON3_ADEPPOL_POSITION                           0x7
#define _AADCON3_ADEPPOL_SIZE                               0x1
#define _AADCON3_ADEPPOL_LENGTH                             0x1
#define _AADCON3_ADEPPOL_MASK                               0x80
typedef union {
    struct {
        unsigned AD1DSEN                :1;
        unsigned AD1IPEN                :1;
        unsigned                        :4;
        unsigned AD1IPPOL               :1;
        unsigned AD1EPPOL               :1;
    };
    struct {
        unsigned ADDSEN                 :1;
        unsigned ADIPEN                 :1;
        unsigned                        :4;
        unsigned ADIPPOL                :1;
        unsigned ADEPPOL                :1;
    };
} AAD1CON3bits_t;
extern volatile AAD1CON3bits_t AAD1CON3bits __at(0x714);
// bitfield macros
#define _AAD1CON3_AD1DSEN_POSN                              0x0
#define _AAD1CON3_AD1DSEN_POSITION                          0x0
#define _AAD1CON3_AD1DSEN_SIZE                              0x1
#define _AAD1CON3_AD1DSEN_LENGTH                            0x1
#define _AAD1CON3_AD1DSEN_MASK                              0x1
#define _AAD1CON3_AD1IPEN_POSN                              0x1
#define _AAD1CON3_AD1IPEN_POSITION                          0x1
#define _AAD1CON3_AD1IPEN_SIZE                              0x1
#define _AAD1CON3_AD1IPEN_LENGTH                            0x1
#define _AAD1CON3_AD1IPEN_MASK                              0x2
#define _AAD1CON3_AD1IPPOL_POSN                             0x6
#define _AAD1CON3_AD1IPPOL_POSITION                         0x6
#define _AAD1CON3_AD1IPPOL_SIZE                             0x1
#define _AAD1CON3_AD1IPPOL_LENGTH                           0x1
#define _AAD1CON3_AD1IPPOL_MASK                             0x40
#define _AAD1CON3_AD1EPPOL_POSN                             0x7
#define _AAD1CON3_AD1EPPOL_POSITION                         0x7
#define _AAD1CON3_AD1EPPOL_SIZE                             0x1
#define _AAD1CON3_AD1EPPOL_LENGTH                           0x1
#define _AAD1CON3_AD1EPPOL_MASK                             0x80
#define _AAD1CON3_ADDSEN_POSN                               0x0
#define _AAD1CON3_ADDSEN_POSITION                           0x0
#define _AAD1CON3_ADDSEN_SIZE                               0x1
#define _AAD1CON3_ADDSEN_LENGTH                             0x1
#define _AAD1CON3_ADDSEN_MASK                               0x1
#define _AAD1CON3_ADIPEN_POSN                               0x1
#define _AAD1CON3_ADIPEN_POSITION                           0x1
#define _AAD1CON3_ADIPEN_SIZE                               0x1
#define _AAD1CON3_ADIPEN_LENGTH                             0x1
#define _AAD1CON3_ADIPEN_MASK                               0x2
#define _AAD1CON3_ADIPPOL_POSN                              0x6
#define _AAD1CON3_ADIPPOL_POSITION                          0x6
#define _AAD1CON3_ADIPPOL_SIZE                              0x1
#define _AAD1CON3_ADIPPOL_LENGTH                            0x1
#define _AAD1CON3_ADIPPOL_MASK                              0x40
#define _AAD1CON3_ADEPPOL_POSN                              0x7
#define _AAD1CON3_ADEPPOL_POSITION                          0x7
#define _AAD1CON3_ADEPPOL_SIZE                              0x1
#define _AAD1CON3_ADEPPOL_LENGTH                            0x1
#define _AAD1CON3_ADEPPOL_MASK                              0x80

// Register: ADSTAT
#define ADSTAT ADSTAT
extern volatile unsigned char           ADSTAT              __at(0x715);
#ifndef _LIB_BUILD
asm("ADSTAT equ 0715h");
#endif
// aliases
extern volatile unsigned char           AADSTAT             __at(0x715);
#ifndef _LIB_BUILD
asm("AADSTAT equ 0715h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AD1STG                 :2;
        unsigned AD1CONV                :1;
        unsigned                        :1;
        unsigned AD2STG                 :2;
        unsigned AD2CONV                :1;
    };
    struct {
        unsigned ADSTG                  :2;
        unsigned ADCONV                 :1;
    };
    struct {
        unsigned AD1STG0                :1;
        unsigned AD1STG1                :1;
        unsigned                        :2;
        unsigned AD2STG0                :1;
        unsigned AD2STG1                :1;
    };
} ADSTATbits_t;
extern volatile ADSTATbits_t ADSTATbits __at(0x715);
// bitfield macros
#define _ADSTAT_AD1STG_POSN                                 0x0
#define _ADSTAT_AD1STG_POSITION                             0x0
#define _ADSTAT_AD1STG_SIZE                                 0x2
#define _ADSTAT_AD1STG_LENGTH                               0x2
#define _ADSTAT_AD1STG_MASK                                 0x3
#define _ADSTAT_AD1CONV_POSN                                0x2
#define _ADSTAT_AD1CONV_POSITION                            0x2
#define _ADSTAT_AD1CONV_SIZE                                0x1
#define _ADSTAT_AD1CONV_LENGTH                              0x1
#define _ADSTAT_AD1CONV_MASK                                0x4
#define _ADSTAT_AD2STG_POSN                                 0x4
#define _ADSTAT_AD2STG_POSITION                             0x4
#define _ADSTAT_AD2STG_SIZE                                 0x2
#define _ADSTAT_AD2STG_LENGTH                               0x2
#define _ADSTAT_AD2STG_MASK                                 0x30
#define _ADSTAT_AD2CONV_POSN                                0x6
#define _ADSTAT_AD2CONV_POSITION                            0x6
#define _ADSTAT_AD2CONV_SIZE                                0x1
#define _ADSTAT_AD2CONV_LENGTH                              0x1
#define _ADSTAT_AD2CONV_MASK                                0x40
#define _ADSTAT_ADSTG_POSN                                  0x0
#define _ADSTAT_ADSTG_POSITION                              0x0
#define _ADSTAT_ADSTG_SIZE                                  0x2
#define _ADSTAT_ADSTG_LENGTH                                0x2
#define _ADSTAT_ADSTG_MASK                                  0x3
#define _ADSTAT_ADCONV_POSN                                 0x2
#define _ADSTAT_ADCONV_POSITION                             0x2
#define _ADSTAT_ADCONV_SIZE                                 0x1
#define _ADSTAT_ADCONV_LENGTH                               0x1
#define _ADSTAT_ADCONV_MASK                                 0x4
#define _ADSTAT_AD1STG0_POSN                                0x0
#define _ADSTAT_AD1STG0_POSITION                            0x0
#define _ADSTAT_AD1STG0_SIZE                                0x1
#define _ADSTAT_AD1STG0_LENGTH                              0x1
#define _ADSTAT_AD1STG0_MASK                                0x1
#define _ADSTAT_AD1STG1_POSN                                0x1
#define _ADSTAT_AD1STG1_POSITION                            0x1
#define _ADSTAT_AD1STG1_SIZE                                0x1
#define _ADSTAT_AD1STG1_LENGTH                              0x1
#define _ADSTAT_AD1STG1_MASK                                0x2
#define _ADSTAT_AD2STG0_POSN                                0x4
#define _ADSTAT_AD2STG0_POSITION                            0x4
#define _ADSTAT_AD2STG0_SIZE                                0x1
#define _ADSTAT_AD2STG0_LENGTH                              0x1
#define _ADSTAT_AD2STG0_MASK                                0x10
#define _ADSTAT_AD2STG1_POSN                                0x5
#define _ADSTAT_AD2STG1_POSITION                            0x5
#define _ADSTAT_AD2STG1_SIZE                                0x1
#define _ADSTAT_AD2STG1_LENGTH                              0x1
#define _ADSTAT_AD2STG1_MASK                                0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned AD1STG                 :2;
        unsigned AD1CONV                :1;
        unsigned                        :1;
        unsigned AD2STG                 :2;
        unsigned AD2CONV                :1;
    };
    struct {
        unsigned ADSTG                  :2;
        unsigned ADCONV                 :1;
    };
    struct {
        unsigned AD1STG0                :1;
        unsigned AD1STG1                :1;
        unsigned                        :2;
        unsigned AD2STG0                :1;
        unsigned AD2STG1                :1;
    };
} AADSTATbits_t;
extern volatile AADSTATbits_t AADSTATbits __at(0x715);
// bitfield macros
#define _AADSTAT_AD1STG_POSN                                0x0
#define _AADSTAT_AD1STG_POSITION                            0x0
#define _AADSTAT_AD1STG_SIZE                                0x2
#define _AADSTAT_AD1STG_LENGTH                              0x2
#define _AADSTAT_AD1STG_MASK                                0x3
#define _AADSTAT_AD1CONV_POSN                               0x2
#define _AADSTAT_AD1CONV_POSITION                           0x2
#define _AADSTAT_AD1CONV_SIZE                               0x1
#define _AADSTAT_AD1CONV_LENGTH                             0x1
#define _AADSTAT_AD1CONV_MASK                               0x4
#define _AADSTAT_AD2STG_POSN                                0x4
#define _AADSTAT_AD2STG_POSITION                            0x4
#define _AADSTAT_AD2STG_SIZE                                0x2
#define _AADSTAT_AD2STG_LENGTH                              0x2
#define _AADSTAT_AD2STG_MASK                                0x30
#define _AADSTAT_AD2CONV_POSN                               0x6
#define _AADSTAT_AD2CONV_POSITION                           0x6
#define _AADSTAT_AD2CONV_SIZE                               0x1
#define _AADSTAT_AD2CONV_LENGTH                             0x1
#define _AADSTAT_AD2CONV_MASK                               0x40
#define _AADSTAT_ADSTG_POSN                                 0x0
#define _AADSTAT_ADSTG_POSITION                             0x0
#define _AADSTAT_ADSTG_SIZE                                 0x2
#define _AADSTAT_ADSTG_LENGTH                               0x2
#define _AADSTAT_ADSTG_MASK                                 0x3
#define _AADSTAT_ADCONV_POSN                                0x2
#define _AADSTAT_ADCONV_POSITION                            0x2
#define _AADSTAT_ADCONV_SIZE                                0x1
#define _AADSTAT_ADCONV_LENGTH                              0x1
#define _AADSTAT_ADCONV_MASK                                0x4
#define _AADSTAT_AD1STG0_POSN                               0x0
#define _AADSTAT_AD1STG0_POSITION                           0x0
#define _AADSTAT_AD1STG0_SIZE                               0x1
#define _AADSTAT_AD1STG0_LENGTH                             0x1
#define _AADSTAT_AD1STG0_MASK                               0x1
#define _AADSTAT_AD1STG1_POSN                               0x1
#define _AADSTAT_AD1STG1_POSITION                           0x1
#define _AADSTAT_AD1STG1_SIZE                               0x1
#define _AADSTAT_AD1STG1_LENGTH                             0x1
#define _AADSTAT_AD1STG1_MASK                               0x2
#define _AADSTAT_AD2STG0_POSN                               0x4
#define _AADSTAT_AD2STG0_POSITION                           0x4
#define _AADSTAT_AD2STG0_SIZE                               0x1
#define _AADSTAT_AD2STG0_LENGTH                             0x1
#define _AADSTAT_AD2STG0_MASK                               0x10
#define _AADSTAT_AD2STG1_POSN                               0x5
#define _AADSTAT_AD2STG1_POSITION                           0x5
#define _AADSTAT_AD2STG1_SIZE                               0x1
#define _AADSTAT_AD2STG1_LENGTH                             0x1
#define _AADSTAT_AD2STG1_MASK                               0x20

// Register: AD1PRECON
#define AD1PRECON AD1PRECON
extern volatile unsigned char           AD1PRECON           __at(0x716);
#ifndef _LIB_BUILD
asm("AD1PRECON equ 0716h");
#endif
// aliases
extern volatile unsigned char           AADPRE              __at(0x716);
#ifndef _LIB_BUILD
asm("AADPRE equ 0716h");
#endif
extern volatile unsigned char           AD1PRE              __at(0x716);
#ifndef _LIB_BUILD
asm("AD1PRE equ 0716h");
#endif
extern volatile unsigned char           AAD1PRE             __at(0x716);
#ifndef _LIB_BUILD
asm("AAD1PRE equ 0716h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AD1PRECONbits_t;
extern volatile AD1PRECONbits_t AD1PRECONbits __at(0x716);
// bitfield macros
#define _AD1PRECON_ADPRE_POSN                               0x0
#define _AD1PRECON_ADPRE_POSITION                           0x0
#define _AD1PRECON_ADPRE_SIZE                               0x7
#define _AD1PRECON_ADPRE_LENGTH                             0x7
#define _AD1PRECON_ADPRE_MASK                               0x7F
#define _AD1PRECON_ADPRE0_POSN                              0x0
#define _AD1PRECON_ADPRE0_POSITION                          0x0
#define _AD1PRECON_ADPRE0_SIZE                              0x1
#define _AD1PRECON_ADPRE0_LENGTH                            0x1
#define _AD1PRECON_ADPRE0_MASK                              0x1
#define _AD1PRECON_ADPRE1_POSN                              0x1
#define _AD1PRECON_ADPRE1_POSITION                          0x1
#define _AD1PRECON_ADPRE1_SIZE                              0x1
#define _AD1PRECON_ADPRE1_LENGTH                            0x1
#define _AD1PRECON_ADPRE1_MASK                              0x2
#define _AD1PRECON_ADPRE2_POSN                              0x2
#define _AD1PRECON_ADPRE2_POSITION                          0x2
#define _AD1PRECON_ADPRE2_SIZE                              0x1
#define _AD1PRECON_ADPRE2_LENGTH                            0x1
#define _AD1PRECON_ADPRE2_MASK                              0x4
#define _AD1PRECON_ADPRE3_POSN                              0x3
#define _AD1PRECON_ADPRE3_POSITION                          0x3
#define _AD1PRECON_ADPRE3_SIZE                              0x1
#define _AD1PRECON_ADPRE3_LENGTH                            0x1
#define _AD1PRECON_ADPRE3_MASK                              0x8
#define _AD1PRECON_ADPRE4_POSN                              0x4
#define _AD1PRECON_ADPRE4_POSITION                          0x4
#define _AD1PRECON_ADPRE4_SIZE                              0x1
#define _AD1PRECON_ADPRE4_LENGTH                            0x1
#define _AD1PRECON_ADPRE4_MASK                              0x10
#define _AD1PRECON_ADPRE5_POSN                              0x5
#define _AD1PRECON_ADPRE5_POSITION                          0x5
#define _AD1PRECON_ADPRE5_SIZE                              0x1
#define _AD1PRECON_ADPRE5_LENGTH                            0x1
#define _AD1PRECON_ADPRE5_MASK                              0x20
#define _AD1PRECON_ADPRE6_POSN                              0x6
#define _AD1PRECON_ADPRE6_POSITION                          0x6
#define _AD1PRECON_ADPRE6_SIZE                              0x1
#define _AD1PRECON_ADPRE6_LENGTH                            0x1
#define _AD1PRECON_ADPRE6_MASK                              0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AADPREbits_t;
extern volatile AADPREbits_t AADPREbits __at(0x716);
// bitfield macros
#define _AADPRE_ADPRE_POSN                                  0x0
#define _AADPRE_ADPRE_POSITION                              0x0
#define _AADPRE_ADPRE_SIZE                                  0x7
#define _AADPRE_ADPRE_LENGTH                                0x7
#define _AADPRE_ADPRE_MASK                                  0x7F
#define _AADPRE_ADPRE0_POSN                                 0x0
#define _AADPRE_ADPRE0_POSITION                             0x0
#define _AADPRE_ADPRE0_SIZE                                 0x1
#define _AADPRE_ADPRE0_LENGTH                               0x1
#define _AADPRE_ADPRE0_MASK                                 0x1
#define _AADPRE_ADPRE1_POSN                                 0x1
#define _AADPRE_ADPRE1_POSITION                             0x1
#define _AADPRE_ADPRE1_SIZE                                 0x1
#define _AADPRE_ADPRE1_LENGTH                               0x1
#define _AADPRE_ADPRE1_MASK                                 0x2
#define _AADPRE_ADPRE2_POSN                                 0x2
#define _AADPRE_ADPRE2_POSITION                             0x2
#define _AADPRE_ADPRE2_SIZE                                 0x1
#define _AADPRE_ADPRE2_LENGTH                               0x1
#define _AADPRE_ADPRE2_MASK                                 0x4
#define _AADPRE_ADPRE3_POSN                                 0x3
#define _AADPRE_ADPRE3_POSITION                             0x3
#define _AADPRE_ADPRE3_SIZE                                 0x1
#define _AADPRE_ADPRE3_LENGTH                               0x1
#define _AADPRE_ADPRE3_MASK                                 0x8
#define _AADPRE_ADPRE4_POSN                                 0x4
#define _AADPRE_ADPRE4_POSITION                             0x4
#define _AADPRE_ADPRE4_SIZE                                 0x1
#define _AADPRE_ADPRE4_LENGTH                               0x1
#define _AADPRE_ADPRE4_MASK                                 0x10
#define _AADPRE_ADPRE5_POSN                                 0x5
#define _AADPRE_ADPRE5_POSITION                             0x5
#define _AADPRE_ADPRE5_SIZE                                 0x1
#define _AADPRE_ADPRE5_LENGTH                               0x1
#define _AADPRE_ADPRE5_MASK                                 0x20
#define _AADPRE_ADPRE6_POSN                                 0x6
#define _AADPRE_ADPRE6_POSITION                             0x6
#define _AADPRE_ADPRE6_SIZE                                 0x1
#define _AADPRE_ADPRE6_LENGTH                               0x1
#define _AADPRE_ADPRE6_MASK                                 0x40
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AD1PREbits_t;
extern volatile AD1PREbits_t AD1PREbits __at(0x716);
// bitfield macros
#define _AD1PRE_ADPRE_POSN                                  0x0
#define _AD1PRE_ADPRE_POSITION                              0x0
#define _AD1PRE_ADPRE_SIZE                                  0x7
#define _AD1PRE_ADPRE_LENGTH                                0x7
#define _AD1PRE_ADPRE_MASK                                  0x7F
#define _AD1PRE_ADPRE0_POSN                                 0x0
#define _AD1PRE_ADPRE0_POSITION                             0x0
#define _AD1PRE_ADPRE0_SIZE                                 0x1
#define _AD1PRE_ADPRE0_LENGTH                               0x1
#define _AD1PRE_ADPRE0_MASK                                 0x1
#define _AD1PRE_ADPRE1_POSN                                 0x1
#define _AD1PRE_ADPRE1_POSITION                             0x1
#define _AD1PRE_ADPRE1_SIZE                                 0x1
#define _AD1PRE_ADPRE1_LENGTH                               0x1
#define _AD1PRE_ADPRE1_MASK                                 0x2
#define _AD1PRE_ADPRE2_POSN                                 0x2
#define _AD1PRE_ADPRE2_POSITION                             0x2
#define _AD1PRE_ADPRE2_SIZE                                 0x1
#define _AD1PRE_ADPRE2_LENGTH                               0x1
#define _AD1PRE_ADPRE2_MASK                                 0x4
#define _AD1PRE_ADPRE3_POSN                                 0x3
#define _AD1PRE_ADPRE3_POSITION                             0x3
#define _AD1PRE_ADPRE3_SIZE                                 0x1
#define _AD1PRE_ADPRE3_LENGTH                               0x1
#define _AD1PRE_ADPRE3_MASK                                 0x8
#define _AD1PRE_ADPRE4_POSN                                 0x4
#define _AD1PRE_ADPRE4_POSITION                             0x4
#define _AD1PRE_ADPRE4_SIZE                                 0x1
#define _AD1PRE_ADPRE4_LENGTH                               0x1
#define _AD1PRE_ADPRE4_MASK                                 0x10
#define _AD1PRE_ADPRE5_POSN                                 0x5
#define _AD1PRE_ADPRE5_POSITION                             0x5
#define _AD1PRE_ADPRE5_SIZE                                 0x1
#define _AD1PRE_ADPRE5_LENGTH                               0x1
#define _AD1PRE_ADPRE5_MASK                                 0x20
#define _AD1PRE_ADPRE6_POSN                                 0x6
#define _AD1PRE_ADPRE6_POSITION                             0x6
#define _AD1PRE_ADPRE6_SIZE                                 0x1
#define _AD1PRE_ADPRE6_LENGTH                               0x1
#define _AD1PRE_ADPRE6_MASK                                 0x40
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AAD1PREbits_t;
extern volatile AAD1PREbits_t AAD1PREbits __at(0x716);
// bitfield macros
#define _AAD1PRE_ADPRE_POSN                                 0x0
#define _AAD1PRE_ADPRE_POSITION                             0x0
#define _AAD1PRE_ADPRE_SIZE                                 0x7
#define _AAD1PRE_ADPRE_LENGTH                               0x7
#define _AAD1PRE_ADPRE_MASK                                 0x7F
#define _AAD1PRE_ADPRE0_POSN                                0x0
#define _AAD1PRE_ADPRE0_POSITION                            0x0
#define _AAD1PRE_ADPRE0_SIZE                                0x1
#define _AAD1PRE_ADPRE0_LENGTH                              0x1
#define _AAD1PRE_ADPRE0_MASK                                0x1
#define _AAD1PRE_ADPRE1_POSN                                0x1
#define _AAD1PRE_ADPRE1_POSITION                            0x1
#define _AAD1PRE_ADPRE1_SIZE                                0x1
#define _AAD1PRE_ADPRE1_LENGTH                              0x1
#define _AAD1PRE_ADPRE1_MASK                                0x2
#define _AAD1PRE_ADPRE2_POSN                                0x2
#define _AAD1PRE_ADPRE2_POSITION                            0x2
#define _AAD1PRE_ADPRE2_SIZE                                0x1
#define _AAD1PRE_ADPRE2_LENGTH                              0x1
#define _AAD1PRE_ADPRE2_MASK                                0x4
#define _AAD1PRE_ADPRE3_POSN                                0x3
#define _AAD1PRE_ADPRE3_POSITION                            0x3
#define _AAD1PRE_ADPRE3_SIZE                                0x1
#define _AAD1PRE_ADPRE3_LENGTH                              0x1
#define _AAD1PRE_ADPRE3_MASK                                0x8
#define _AAD1PRE_ADPRE4_POSN                                0x4
#define _AAD1PRE_ADPRE4_POSITION                            0x4
#define _AAD1PRE_ADPRE4_SIZE                                0x1
#define _AAD1PRE_ADPRE4_LENGTH                              0x1
#define _AAD1PRE_ADPRE4_MASK                                0x10
#define _AAD1PRE_ADPRE5_POSN                                0x5
#define _AAD1PRE_ADPRE5_POSITION                            0x5
#define _AAD1PRE_ADPRE5_SIZE                                0x1
#define _AAD1PRE_ADPRE5_LENGTH                              0x1
#define _AAD1PRE_ADPRE5_MASK                                0x20
#define _AAD1PRE_ADPRE6_POSN                                0x6
#define _AAD1PRE_ADPRE6_POSITION                            0x6
#define _AAD1PRE_ADPRE6_SIZE                                0x1
#define _AAD1PRE_ADPRE6_LENGTH                              0x1
#define _AAD1PRE_ADPRE6_MASK                                0x40

// Register: AD1ACQCON
#define AD1ACQCON AD1ACQCON
extern volatile unsigned char           AD1ACQCON           __at(0x717);
#ifndef _LIB_BUILD
asm("AD1ACQCON equ 0717h");
#endif
// aliases
extern volatile unsigned char           AADACQ              __at(0x717);
#ifndef _LIB_BUILD
asm("AADACQ equ 0717h");
#endif
extern volatile unsigned char           AD1ACQ              __at(0x717);
#ifndef _LIB_BUILD
asm("AD1ACQ equ 0717h");
#endif
extern volatile unsigned char           AAD1ACQ             __at(0x717);
#ifndef _LIB_BUILD
asm("AAD1ACQ equ 0717h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AD1ACQCONbits_t;
extern volatile AD1ACQCONbits_t AD1ACQCONbits __at(0x717);
// bitfield macros
#define _AD1ACQCON_ADACQ_POSN                               0x0
#define _AD1ACQCON_ADACQ_POSITION                           0x0
#define _AD1ACQCON_ADACQ_SIZE                               0x7
#define _AD1ACQCON_ADACQ_LENGTH                             0x7
#define _AD1ACQCON_ADACQ_MASK                               0x7F
#define _AD1ACQCON_ADACQ0_POSN                              0x0
#define _AD1ACQCON_ADACQ0_POSITION                          0x0
#define _AD1ACQCON_ADACQ0_SIZE                              0x1
#define _AD1ACQCON_ADACQ0_LENGTH                            0x1
#define _AD1ACQCON_ADACQ0_MASK                              0x1
#define _AD1ACQCON_ADACQ1_POSN                              0x1
#define _AD1ACQCON_ADACQ1_POSITION                          0x1
#define _AD1ACQCON_ADACQ1_SIZE                              0x1
#define _AD1ACQCON_ADACQ1_LENGTH                            0x1
#define _AD1ACQCON_ADACQ1_MASK                              0x2
#define _AD1ACQCON_ADACQ2_POSN                              0x2
#define _AD1ACQCON_ADACQ2_POSITION                          0x2
#define _AD1ACQCON_ADACQ2_SIZE                              0x1
#define _AD1ACQCON_ADACQ2_LENGTH                            0x1
#define _AD1ACQCON_ADACQ2_MASK                              0x4
#define _AD1ACQCON_ADACQ3_POSN                              0x3
#define _AD1ACQCON_ADACQ3_POSITION                          0x3
#define _AD1ACQCON_ADACQ3_SIZE                              0x1
#define _AD1ACQCON_ADACQ3_LENGTH                            0x1
#define _AD1ACQCON_ADACQ3_MASK                              0x8
#define _AD1ACQCON_ADACQ4_POSN                              0x4
#define _AD1ACQCON_ADACQ4_POSITION                          0x4
#define _AD1ACQCON_ADACQ4_SIZE                              0x1
#define _AD1ACQCON_ADACQ4_LENGTH                            0x1
#define _AD1ACQCON_ADACQ4_MASK                              0x10
#define _AD1ACQCON_ADACQ5_POSN                              0x5
#define _AD1ACQCON_ADACQ5_POSITION                          0x5
#define _AD1ACQCON_ADACQ5_SIZE                              0x1
#define _AD1ACQCON_ADACQ5_LENGTH                            0x1
#define _AD1ACQCON_ADACQ5_MASK                              0x20
#define _AD1ACQCON_ADACQ6_POSN                              0x6
#define _AD1ACQCON_ADACQ6_POSITION                          0x6
#define _AD1ACQCON_ADACQ6_SIZE                              0x1
#define _AD1ACQCON_ADACQ6_LENGTH                            0x1
#define _AD1ACQCON_ADACQ6_MASK                              0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AADACQbits_t;
extern volatile AADACQbits_t AADACQbits __at(0x717);
// bitfield macros
#define _AADACQ_ADACQ_POSN                                  0x0
#define _AADACQ_ADACQ_POSITION                              0x0
#define _AADACQ_ADACQ_SIZE                                  0x7
#define _AADACQ_ADACQ_LENGTH                                0x7
#define _AADACQ_ADACQ_MASK                                  0x7F
#define _AADACQ_ADACQ0_POSN                                 0x0
#define _AADACQ_ADACQ0_POSITION                             0x0
#define _AADACQ_ADACQ0_SIZE                                 0x1
#define _AADACQ_ADACQ0_LENGTH                               0x1
#define _AADACQ_ADACQ0_MASK                                 0x1
#define _AADACQ_ADACQ1_POSN                                 0x1
#define _AADACQ_ADACQ1_POSITION                             0x1
#define _AADACQ_ADACQ1_SIZE                                 0x1
#define _AADACQ_ADACQ1_LENGTH                               0x1
#define _AADACQ_ADACQ1_MASK                                 0x2
#define _AADACQ_ADACQ2_POSN                                 0x2
#define _AADACQ_ADACQ2_POSITION                             0x2
#define _AADACQ_ADACQ2_SIZE                                 0x1
#define _AADACQ_ADACQ2_LENGTH                               0x1
#define _AADACQ_ADACQ2_MASK                                 0x4
#define _AADACQ_ADACQ3_POSN                                 0x3
#define _AADACQ_ADACQ3_POSITION                             0x3
#define _AADACQ_ADACQ3_SIZE                                 0x1
#define _AADACQ_ADACQ3_LENGTH                               0x1
#define _AADACQ_ADACQ3_MASK                                 0x8
#define _AADACQ_ADACQ4_POSN                                 0x4
#define _AADACQ_ADACQ4_POSITION                             0x4
#define _AADACQ_ADACQ4_SIZE                                 0x1
#define _AADACQ_ADACQ4_LENGTH                               0x1
#define _AADACQ_ADACQ4_MASK                                 0x10
#define _AADACQ_ADACQ5_POSN                                 0x5
#define _AADACQ_ADACQ5_POSITION                             0x5
#define _AADACQ_ADACQ5_SIZE                                 0x1
#define _AADACQ_ADACQ5_LENGTH                               0x1
#define _AADACQ_ADACQ5_MASK                                 0x20
#define _AADACQ_ADACQ6_POSN                                 0x6
#define _AADACQ_ADACQ6_POSITION                             0x6
#define _AADACQ_ADACQ6_SIZE                                 0x1
#define _AADACQ_ADACQ6_LENGTH                               0x1
#define _AADACQ_ADACQ6_MASK                                 0x40
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AD1ACQbits_t;
extern volatile AD1ACQbits_t AD1ACQbits __at(0x717);
// bitfield macros
#define _AD1ACQ_ADACQ_POSN                                  0x0
#define _AD1ACQ_ADACQ_POSITION                              0x0
#define _AD1ACQ_ADACQ_SIZE                                  0x7
#define _AD1ACQ_ADACQ_LENGTH                                0x7
#define _AD1ACQ_ADACQ_MASK                                  0x7F
#define _AD1ACQ_ADACQ0_POSN                                 0x0
#define _AD1ACQ_ADACQ0_POSITION                             0x0
#define _AD1ACQ_ADACQ0_SIZE                                 0x1
#define _AD1ACQ_ADACQ0_LENGTH                               0x1
#define _AD1ACQ_ADACQ0_MASK                                 0x1
#define _AD1ACQ_ADACQ1_POSN                                 0x1
#define _AD1ACQ_ADACQ1_POSITION                             0x1
#define _AD1ACQ_ADACQ1_SIZE                                 0x1
#define _AD1ACQ_ADACQ1_LENGTH                               0x1
#define _AD1ACQ_ADACQ1_MASK                                 0x2
#define _AD1ACQ_ADACQ2_POSN                                 0x2
#define _AD1ACQ_ADACQ2_POSITION                             0x2
#define _AD1ACQ_ADACQ2_SIZE                                 0x1
#define _AD1ACQ_ADACQ2_LENGTH                               0x1
#define _AD1ACQ_ADACQ2_MASK                                 0x4
#define _AD1ACQ_ADACQ3_POSN                                 0x3
#define _AD1ACQ_ADACQ3_POSITION                             0x3
#define _AD1ACQ_ADACQ3_SIZE                                 0x1
#define _AD1ACQ_ADACQ3_LENGTH                               0x1
#define _AD1ACQ_ADACQ3_MASK                                 0x8
#define _AD1ACQ_ADACQ4_POSN                                 0x4
#define _AD1ACQ_ADACQ4_POSITION                             0x4
#define _AD1ACQ_ADACQ4_SIZE                                 0x1
#define _AD1ACQ_ADACQ4_LENGTH                               0x1
#define _AD1ACQ_ADACQ4_MASK                                 0x10
#define _AD1ACQ_ADACQ5_POSN                                 0x5
#define _AD1ACQ_ADACQ5_POSITION                             0x5
#define _AD1ACQ_ADACQ5_SIZE                                 0x1
#define _AD1ACQ_ADACQ5_LENGTH                               0x1
#define _AD1ACQ_ADACQ5_MASK                                 0x20
#define _AD1ACQ_ADACQ6_POSN                                 0x6
#define _AD1ACQ_ADACQ6_POSITION                             0x6
#define _AD1ACQ_ADACQ6_SIZE                                 0x1
#define _AD1ACQ_ADACQ6_LENGTH                               0x1
#define _AD1ACQ_ADACQ6_MASK                                 0x40
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AAD1ACQbits_t;
extern volatile AAD1ACQbits_t AAD1ACQbits __at(0x717);
// bitfield macros
#define _AAD1ACQ_ADACQ_POSN                                 0x0
#define _AAD1ACQ_ADACQ_POSITION                             0x0
#define _AAD1ACQ_ADACQ_SIZE                                 0x7
#define _AAD1ACQ_ADACQ_LENGTH                               0x7
#define _AAD1ACQ_ADACQ_MASK                                 0x7F
#define _AAD1ACQ_ADACQ0_POSN                                0x0
#define _AAD1ACQ_ADACQ0_POSITION                            0x0
#define _AAD1ACQ_ADACQ0_SIZE                                0x1
#define _AAD1ACQ_ADACQ0_LENGTH                              0x1
#define _AAD1ACQ_ADACQ0_MASK                                0x1
#define _AAD1ACQ_ADACQ1_POSN                                0x1
#define _AAD1ACQ_ADACQ1_POSITION                            0x1
#define _AAD1ACQ_ADACQ1_SIZE                                0x1
#define _AAD1ACQ_ADACQ1_LENGTH                              0x1
#define _AAD1ACQ_ADACQ1_MASK                                0x2
#define _AAD1ACQ_ADACQ2_POSN                                0x2
#define _AAD1ACQ_ADACQ2_POSITION                            0x2
#define _AAD1ACQ_ADACQ2_SIZE                                0x1
#define _AAD1ACQ_ADACQ2_LENGTH                              0x1
#define _AAD1ACQ_ADACQ2_MASK                                0x4
#define _AAD1ACQ_ADACQ3_POSN                                0x3
#define _AAD1ACQ_ADACQ3_POSITION                            0x3
#define _AAD1ACQ_ADACQ3_SIZE                                0x1
#define _AAD1ACQ_ADACQ3_LENGTH                              0x1
#define _AAD1ACQ_ADACQ3_MASK                                0x8
#define _AAD1ACQ_ADACQ4_POSN                                0x4
#define _AAD1ACQ_ADACQ4_POSITION                            0x4
#define _AAD1ACQ_ADACQ4_SIZE                                0x1
#define _AAD1ACQ_ADACQ4_LENGTH                              0x1
#define _AAD1ACQ_ADACQ4_MASK                                0x10
#define _AAD1ACQ_ADACQ5_POSN                                0x5
#define _AAD1ACQ_ADACQ5_POSITION                            0x5
#define _AAD1ACQ_ADACQ5_SIZE                                0x1
#define _AAD1ACQ_ADACQ5_LENGTH                              0x1
#define _AAD1ACQ_ADACQ5_MASK                                0x20
#define _AAD1ACQ_ADACQ6_POSN                                0x6
#define _AAD1ACQ_ADACQ6_POSITION                            0x6
#define _AAD1ACQ_ADACQ6_SIZE                                0x1
#define _AAD1ACQ_ADACQ6_LENGTH                              0x1
#define _AAD1ACQ_ADACQ6_MASK                                0x40

// Register: AD1GRD
#define AD1GRD AD1GRD
extern volatile unsigned char           AD1GRD              __at(0x718);
#ifndef _LIB_BUILD
asm("AD1GRD equ 0718h");
#endif
// aliases
extern volatile unsigned char           AADGRD              __at(0x718);
#ifndef _LIB_BUILD
asm("AADGRD equ 0718h");
#endif
extern volatile unsigned char           AAD1GRD             __at(0x718);
#ifndef _LIB_BUILD
asm("AAD1GRD equ 0718h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX1POL                 :1;
        unsigned                        :4;
        unsigned GRD1POL                :1;
        unsigned GRD1AOE                :1;
        unsigned GRD1BOE                :1;
    };
    struct {
        unsigned TXPOL                  :1;
        unsigned                        :4;
        unsigned GRDPOL                 :1;
        unsigned GRDAOE                 :1;
        unsigned GRDBOE                 :1;
    };
} AD1GRDbits_t;
extern volatile AD1GRDbits_t AD1GRDbits __at(0x718);
// bitfield macros
#define _AD1GRD_TX1POL_POSN                                 0x0
#define _AD1GRD_TX1POL_POSITION                             0x0
#define _AD1GRD_TX1POL_SIZE                                 0x1
#define _AD1GRD_TX1POL_LENGTH                               0x1
#define _AD1GRD_TX1POL_MASK                                 0x1
#define _AD1GRD_GRD1POL_POSN                                0x5
#define _AD1GRD_GRD1POL_POSITION                            0x5
#define _AD1GRD_GRD1POL_SIZE                                0x1
#define _AD1GRD_GRD1POL_LENGTH                              0x1
#define _AD1GRD_GRD1POL_MASK                                0x20
#define _AD1GRD_GRD1AOE_POSN                                0x6
#define _AD1GRD_GRD1AOE_POSITION                            0x6
#define _AD1GRD_GRD1AOE_SIZE                                0x1
#define _AD1GRD_GRD1AOE_LENGTH                              0x1
#define _AD1GRD_GRD1AOE_MASK                                0x40
#define _AD1GRD_GRD1BOE_POSN                                0x7
#define _AD1GRD_GRD1BOE_POSITION                            0x7
#define _AD1GRD_GRD1BOE_SIZE                                0x1
#define _AD1GRD_GRD1BOE_LENGTH                              0x1
#define _AD1GRD_GRD1BOE_MASK                                0x80
#define _AD1GRD_TXPOL_POSN                                  0x0
#define _AD1GRD_TXPOL_POSITION                              0x0
#define _AD1GRD_TXPOL_SIZE                                  0x1
#define _AD1GRD_TXPOL_LENGTH                                0x1
#define _AD1GRD_TXPOL_MASK                                  0x1
#define _AD1GRD_GRDPOL_POSN                                 0x5
#define _AD1GRD_GRDPOL_POSITION                             0x5
#define _AD1GRD_GRDPOL_SIZE                                 0x1
#define _AD1GRD_GRDPOL_LENGTH                               0x1
#define _AD1GRD_GRDPOL_MASK                                 0x20
#define _AD1GRD_GRDAOE_POSN                                 0x6
#define _AD1GRD_GRDAOE_POSITION                             0x6
#define _AD1GRD_GRDAOE_SIZE                                 0x1
#define _AD1GRD_GRDAOE_LENGTH                               0x1
#define _AD1GRD_GRDAOE_MASK                                 0x40
#define _AD1GRD_GRDBOE_POSN                                 0x7
#define _AD1GRD_GRDBOE_POSITION                             0x7
#define _AD1GRD_GRDBOE_SIZE                                 0x1
#define _AD1GRD_GRDBOE_LENGTH                               0x1
#define _AD1GRD_GRDBOE_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX1POL                 :1;
        unsigned                        :4;
        unsigned GRD1POL                :1;
        unsigned GRD1AOE                :1;
        unsigned GRD1BOE                :1;
    };
    struct {
        unsigned TXPOL                  :1;
        unsigned                        :4;
        unsigned GRDPOL                 :1;
        unsigned GRDAOE                 :1;
        unsigned GRDBOE                 :1;
    };
} AADGRDbits_t;
extern volatile AADGRDbits_t AADGRDbits __at(0x718);
// bitfield macros
#define _AADGRD_TX1POL_POSN                                 0x0
#define _AADGRD_TX1POL_POSITION                             0x0
#define _AADGRD_TX1POL_SIZE                                 0x1
#define _AADGRD_TX1POL_LENGTH                               0x1
#define _AADGRD_TX1POL_MASK                                 0x1
#define _AADGRD_GRD1POL_POSN                                0x5
#define _AADGRD_GRD1POL_POSITION                            0x5
#define _AADGRD_GRD1POL_SIZE                                0x1
#define _AADGRD_GRD1POL_LENGTH                              0x1
#define _AADGRD_GRD1POL_MASK                                0x20
#define _AADGRD_GRD1AOE_POSN                                0x6
#define _AADGRD_GRD1AOE_POSITION                            0x6
#define _AADGRD_GRD1AOE_SIZE                                0x1
#define _AADGRD_GRD1AOE_LENGTH                              0x1
#define _AADGRD_GRD1AOE_MASK                                0x40
#define _AADGRD_GRD1BOE_POSN                                0x7
#define _AADGRD_GRD1BOE_POSITION                            0x7
#define _AADGRD_GRD1BOE_SIZE                                0x1
#define _AADGRD_GRD1BOE_LENGTH                              0x1
#define _AADGRD_GRD1BOE_MASK                                0x80
#define _AADGRD_TXPOL_POSN                                  0x0
#define _AADGRD_TXPOL_POSITION                              0x0
#define _AADGRD_TXPOL_SIZE                                  0x1
#define _AADGRD_TXPOL_LENGTH                                0x1
#define _AADGRD_TXPOL_MASK                                  0x1
#define _AADGRD_GRDPOL_POSN                                 0x5
#define _AADGRD_GRDPOL_POSITION                             0x5
#define _AADGRD_GRDPOL_SIZE                                 0x1
#define _AADGRD_GRDPOL_LENGTH                               0x1
#define _AADGRD_GRDPOL_MASK                                 0x20
#define _AADGRD_GRDAOE_POSN                                 0x6
#define _AADGRD_GRDAOE_POSITION                             0x6
#define _AADGRD_GRDAOE_SIZE                                 0x1
#define _AADGRD_GRDAOE_LENGTH                               0x1
#define _AADGRD_GRDAOE_MASK                                 0x40
#define _AADGRD_GRDBOE_POSN                                 0x7
#define _AADGRD_GRDBOE_POSITION                             0x7
#define _AADGRD_GRDBOE_SIZE                                 0x1
#define _AADGRD_GRDBOE_LENGTH                               0x1
#define _AADGRD_GRDBOE_MASK                                 0x80
typedef union {
    struct {
        unsigned TX1POL                 :1;
        unsigned                        :4;
        unsigned GRD1POL                :1;
        unsigned GRD1AOE                :1;
        unsigned GRD1BOE                :1;
    };
    struct {
        unsigned TXPOL                  :1;
        unsigned                        :4;
        unsigned GRDPOL                 :1;
        unsigned GRDAOE                 :1;
        unsigned GRDBOE                 :1;
    };
} AAD1GRDbits_t;
extern volatile AAD1GRDbits_t AAD1GRDbits __at(0x718);
// bitfield macros
#define _AAD1GRD_TX1POL_POSN                                0x0
#define _AAD1GRD_TX1POL_POSITION                            0x0
#define _AAD1GRD_TX1POL_SIZE                                0x1
#define _AAD1GRD_TX1POL_LENGTH                              0x1
#define _AAD1GRD_TX1POL_MASK                                0x1
#define _AAD1GRD_GRD1POL_POSN                               0x5
#define _AAD1GRD_GRD1POL_POSITION                           0x5
#define _AAD1GRD_GRD1POL_SIZE                               0x1
#define _AAD1GRD_GRD1POL_LENGTH                             0x1
#define _AAD1GRD_GRD1POL_MASK                               0x20
#define _AAD1GRD_GRD1AOE_POSN                               0x6
#define _AAD1GRD_GRD1AOE_POSITION                           0x6
#define _AAD1GRD_GRD1AOE_SIZE                               0x1
#define _AAD1GRD_GRD1AOE_LENGTH                             0x1
#define _AAD1GRD_GRD1AOE_MASK                               0x40
#define _AAD1GRD_GRD1BOE_POSN                               0x7
#define _AAD1GRD_GRD1BOE_POSITION                           0x7
#define _AAD1GRD_GRD1BOE_SIZE                               0x1
#define _AAD1GRD_GRD1BOE_LENGTH                             0x1
#define _AAD1GRD_GRD1BOE_MASK                               0x80
#define _AAD1GRD_TXPOL_POSN                                 0x0
#define _AAD1GRD_TXPOL_POSITION                             0x0
#define _AAD1GRD_TXPOL_SIZE                                 0x1
#define _AAD1GRD_TXPOL_LENGTH                               0x1
#define _AAD1GRD_TXPOL_MASK                                 0x1
#define _AAD1GRD_GRDPOL_POSN                                0x5
#define _AAD1GRD_GRDPOL_POSITION                            0x5
#define _AAD1GRD_GRDPOL_SIZE                                0x1
#define _AAD1GRD_GRDPOL_LENGTH                              0x1
#define _AAD1GRD_GRDPOL_MASK                                0x20
#define _AAD1GRD_GRDAOE_POSN                                0x6
#define _AAD1GRD_GRDAOE_POSITION                            0x6
#define _AAD1GRD_GRDAOE_SIZE                                0x1
#define _AAD1GRD_GRDAOE_LENGTH                              0x1
#define _AAD1GRD_GRDAOE_MASK                                0x40
#define _AAD1GRD_GRDBOE_POSN                                0x7
#define _AAD1GRD_GRDBOE_POSITION                            0x7
#define _AAD1GRD_GRDBOE_SIZE                                0x1
#define _AAD1GRD_GRDBOE_LENGTH                              0x1
#define _AAD1GRD_GRDBOE_MASK                                0x80

// Register: AD1CAPCON
#define AD1CAPCON AD1CAPCON
extern volatile unsigned char           AD1CAPCON           __at(0x719);
#ifndef _LIB_BUILD
asm("AD1CAPCON equ 0719h");
#endif
// aliases
extern volatile unsigned char           AADCAP              __at(0x719);
#ifndef _LIB_BUILD
asm("AADCAP equ 0719h");
#endif
extern volatile unsigned char           AAD1CAP             __at(0x719);
#ifndef _LIB_BUILD
asm("AAD1CAP equ 0719h");
#endif
extern volatile unsigned char           AAD1CAPCON          __at(0x719);
#ifndef _LIB_BUILD
asm("AAD1CAPCON equ 0719h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD1CAP                :4;
    };
} AD1CAPCONbits_t;
extern volatile AD1CAPCONbits_t AD1CAPCONbits __at(0x719);
// bitfield macros
#define _AD1CAPCON_ADDCAP_POSN                              0x0
#define _AD1CAPCON_ADDCAP_POSITION                          0x0
#define _AD1CAPCON_ADDCAP_SIZE                              0x4
#define _AD1CAPCON_ADDCAP_LENGTH                            0x4
#define _AD1CAPCON_ADDCAP_MASK                              0xF
#define _AD1CAPCON_ADCAP_POSN                               0x0
#define _AD1CAPCON_ADCAP_POSITION                           0x0
#define _AD1CAPCON_ADCAP_SIZE                               0x4
#define _AD1CAPCON_ADCAP_LENGTH                             0x4
#define _AD1CAPCON_ADCAP_MASK                               0xF
#define _AD1CAPCON_ADDCAP0_POSN                             0x0
#define _AD1CAPCON_ADDCAP0_POSITION                         0x0
#define _AD1CAPCON_ADDCAP0_SIZE                             0x1
#define _AD1CAPCON_ADDCAP0_LENGTH                           0x1
#define _AD1CAPCON_ADDCAP0_MASK                             0x1
#define _AD1CAPCON_ADDCAP1_POSN                             0x1
#define _AD1CAPCON_ADDCAP1_POSITION                         0x1
#define _AD1CAPCON_ADDCAP1_SIZE                             0x1
#define _AD1CAPCON_ADDCAP1_LENGTH                           0x1
#define _AD1CAPCON_ADDCAP1_MASK                             0x2
#define _AD1CAPCON_ADDCAP2_POSN                             0x2
#define _AD1CAPCON_ADDCAP2_POSITION                         0x2
#define _AD1CAPCON_ADDCAP2_SIZE                             0x1
#define _AD1CAPCON_ADDCAP2_LENGTH                           0x1
#define _AD1CAPCON_ADDCAP2_MASK                             0x4
#define _AD1CAPCON_ADDCAP3_POSN                             0x3
#define _AD1CAPCON_ADDCAP3_POSITION                         0x3
#define _AD1CAPCON_ADDCAP3_SIZE                             0x1
#define _AD1CAPCON_ADDCAP3_LENGTH                           0x1
#define _AD1CAPCON_ADDCAP3_MASK                             0x8
#define _AD1CAPCON_ADD1CAP_POSN                             0x0
#define _AD1CAPCON_ADD1CAP_POSITION                         0x0
#define _AD1CAPCON_ADD1CAP_SIZE                             0x4
#define _AD1CAPCON_ADD1CAP_LENGTH                           0x4
#define _AD1CAPCON_ADD1CAP_MASK                             0xF
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD1CAP                :4;
    };
} AADCAPbits_t;
extern volatile AADCAPbits_t AADCAPbits __at(0x719);
// bitfield macros
#define _AADCAP_ADDCAP_POSN                                 0x0
#define _AADCAP_ADDCAP_POSITION                             0x0
#define _AADCAP_ADDCAP_SIZE                                 0x4
#define _AADCAP_ADDCAP_LENGTH                               0x4
#define _AADCAP_ADDCAP_MASK                                 0xF
#define _AADCAP_ADCAP_POSN                                  0x0
#define _AADCAP_ADCAP_POSITION                              0x0
#define _AADCAP_ADCAP_SIZE                                  0x4
#define _AADCAP_ADCAP_LENGTH                                0x4
#define _AADCAP_ADCAP_MASK                                  0xF
#define _AADCAP_ADDCAP0_POSN                                0x0
#define _AADCAP_ADDCAP0_POSITION                            0x0
#define _AADCAP_ADDCAP0_SIZE                                0x1
#define _AADCAP_ADDCAP0_LENGTH                              0x1
#define _AADCAP_ADDCAP0_MASK                                0x1
#define _AADCAP_ADDCAP1_POSN                                0x1
#define _AADCAP_ADDCAP1_POSITION                            0x1
#define _AADCAP_ADDCAP1_SIZE                                0x1
#define _AADCAP_ADDCAP1_LENGTH                              0x1
#define _AADCAP_ADDCAP1_MASK                                0x2
#define _AADCAP_ADDCAP2_POSN                                0x2
#define _AADCAP_ADDCAP2_POSITION                            0x2
#define _AADCAP_ADDCAP2_SIZE                                0x1
#define _AADCAP_ADDCAP2_LENGTH                              0x1
#define _AADCAP_ADDCAP2_MASK                                0x4
#define _AADCAP_ADDCAP3_POSN                                0x3
#define _AADCAP_ADDCAP3_POSITION                            0x3
#define _AADCAP_ADDCAP3_SIZE                                0x1
#define _AADCAP_ADDCAP3_LENGTH                              0x1
#define _AADCAP_ADDCAP3_MASK                                0x8
#define _AADCAP_ADD1CAP_POSN                                0x0
#define _AADCAP_ADD1CAP_POSITION                            0x0
#define _AADCAP_ADD1CAP_SIZE                                0x4
#define _AADCAP_ADD1CAP_LENGTH                              0x4
#define _AADCAP_ADD1CAP_MASK                                0xF
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD1CAP                :4;
    };
} AAD1CAPbits_t;
extern volatile AAD1CAPbits_t AAD1CAPbits __at(0x719);
// bitfield macros
#define _AAD1CAP_ADDCAP_POSN                                0x0
#define _AAD1CAP_ADDCAP_POSITION                            0x0
#define _AAD1CAP_ADDCAP_SIZE                                0x4
#define _AAD1CAP_ADDCAP_LENGTH                              0x4
#define _AAD1CAP_ADDCAP_MASK                                0xF
#define _AAD1CAP_ADCAP_POSN                                 0x0
#define _AAD1CAP_ADCAP_POSITION                             0x0
#define _AAD1CAP_ADCAP_SIZE                                 0x4
#define _AAD1CAP_ADCAP_LENGTH                               0x4
#define _AAD1CAP_ADCAP_MASK                                 0xF
#define _AAD1CAP_ADDCAP0_POSN                               0x0
#define _AAD1CAP_ADDCAP0_POSITION                           0x0
#define _AAD1CAP_ADDCAP0_SIZE                               0x1
#define _AAD1CAP_ADDCAP0_LENGTH                             0x1
#define _AAD1CAP_ADDCAP0_MASK                               0x1
#define _AAD1CAP_ADDCAP1_POSN                               0x1
#define _AAD1CAP_ADDCAP1_POSITION                           0x1
#define _AAD1CAP_ADDCAP1_SIZE                               0x1
#define _AAD1CAP_ADDCAP1_LENGTH                             0x1
#define _AAD1CAP_ADDCAP1_MASK                               0x2
#define _AAD1CAP_ADDCAP2_POSN                               0x2
#define _AAD1CAP_ADDCAP2_POSITION                           0x2
#define _AAD1CAP_ADDCAP2_SIZE                               0x1
#define _AAD1CAP_ADDCAP2_LENGTH                             0x1
#define _AAD1CAP_ADDCAP2_MASK                               0x4
#define _AAD1CAP_ADDCAP3_POSN                               0x3
#define _AAD1CAP_ADDCAP3_POSITION                           0x3
#define _AAD1CAP_ADDCAP3_SIZE                               0x1
#define _AAD1CAP_ADDCAP3_LENGTH                             0x1
#define _AAD1CAP_ADDCAP3_MASK                               0x8
#define _AAD1CAP_ADD1CAP_POSN                               0x0
#define _AAD1CAP_ADD1CAP_POSITION                           0x0
#define _AAD1CAP_ADD1CAP_SIZE                               0x4
#define _AAD1CAP_ADD1CAP_LENGTH                             0x4
#define _AAD1CAP_ADD1CAP_MASK                               0xF
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD1CAP                :4;
    };
} AAD1CAPCONbits_t;
extern volatile AAD1CAPCONbits_t AAD1CAPCONbits __at(0x719);
// bitfield macros
#define _AAD1CAPCON_ADDCAP_POSN                             0x0
#define _AAD1CAPCON_ADDCAP_POSITION                         0x0
#define _AAD1CAPCON_ADDCAP_SIZE                             0x4
#define _AAD1CAPCON_ADDCAP_LENGTH                           0x4
#define _AAD1CAPCON_ADDCAP_MASK                             0xF
#define _AAD1CAPCON_ADCAP_POSN                              0x0
#define _AAD1CAPCON_ADCAP_POSITION                          0x0
#define _AAD1CAPCON_ADCAP_SIZE                              0x4
#define _AAD1CAPCON_ADCAP_LENGTH                            0x4
#define _AAD1CAPCON_ADCAP_MASK                              0xF
#define _AAD1CAPCON_ADDCAP0_POSN                            0x0
#define _AAD1CAPCON_ADDCAP0_POSITION                        0x0
#define _AAD1CAPCON_ADDCAP0_SIZE                            0x1
#define _AAD1CAPCON_ADDCAP0_LENGTH                          0x1
#define _AAD1CAPCON_ADDCAP0_MASK                            0x1
#define _AAD1CAPCON_ADDCAP1_POSN                            0x1
#define _AAD1CAPCON_ADDCAP1_POSITION                        0x1
#define _AAD1CAPCON_ADDCAP1_SIZE                            0x1
#define _AAD1CAPCON_ADDCAP1_LENGTH                          0x1
#define _AAD1CAPCON_ADDCAP1_MASK                            0x2
#define _AAD1CAPCON_ADDCAP2_POSN                            0x2
#define _AAD1CAPCON_ADDCAP2_POSITION                        0x2
#define _AAD1CAPCON_ADDCAP2_SIZE                            0x1
#define _AAD1CAPCON_ADDCAP2_LENGTH                          0x1
#define _AAD1CAPCON_ADDCAP2_MASK                            0x4
#define _AAD1CAPCON_ADDCAP3_POSN                            0x3
#define _AAD1CAPCON_ADDCAP3_POSITION                        0x3
#define _AAD1CAPCON_ADDCAP3_SIZE                            0x1
#define _AAD1CAPCON_ADDCAP3_LENGTH                          0x1
#define _AAD1CAPCON_ADDCAP3_MASK                            0x8
#define _AAD1CAPCON_ADD1CAP_POSN                            0x0
#define _AAD1CAPCON_ADD1CAP_POSITION                        0x0
#define _AAD1CAPCON_ADD1CAP_SIZE                            0x4
#define _AAD1CAPCON_ADD1CAP_LENGTH                          0x4
#define _AAD1CAPCON_ADD1CAP_MASK                            0xF

// Register: AAD1RES0
#define AAD1RES0 AAD1RES0
extern volatile unsigned short          AAD1RES0            __at(0x71A);
#ifndef _LIB_BUILD
asm("AAD1RES0 equ 071Ah");
#endif
// aliases
extern volatile unsigned short          AD1RES0             __at(0x71A);
#ifndef _LIB_BUILD
asm("AD1RES0 equ 071Ah");
#endif
extern volatile unsigned short          ADRES0              __at(0x71A);
#ifndef _LIB_BUILD
asm("ADRES0 equ 071Ah");
#endif

// Register: AAD1RES0L
#define AAD1RES0L AAD1RES0L
extern volatile unsigned char           AAD1RES0L           __at(0x71A);
#ifndef _LIB_BUILD
asm("AAD1RES0L equ 071Ah");
#endif
// aliases
extern volatile unsigned char           AD1RES0L            __at(0x71A);
#ifndef _LIB_BUILD
asm("AD1RES0L equ 071Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} AAD1RES0Lbits_t;
extern volatile AAD1RES0Lbits_t AAD1RES0Lbits __at(0x71A);
// bitfield macros
#define _AAD1RES0L_ADRESL_POSN                              0x0
#define _AAD1RES0L_ADRESL_POSITION                          0x0
#define _AAD1RES0L_ADRESL_SIZE                              0x8
#define _AAD1RES0L_ADRESL_LENGTH                            0x8
#define _AAD1RES0L_ADRESL_MASK                              0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} AD1RES0Lbits_t;
extern volatile AD1RES0Lbits_t AD1RES0Lbits __at(0x71A);
// bitfield macros
#define _AD1RES0L_ADRESL_POSN                               0x0
#define _AD1RES0L_ADRESL_POSITION                           0x0
#define _AD1RES0L_ADRESL_SIZE                               0x8
#define _AD1RES0L_ADRESL_LENGTH                             0x8
#define _AD1RES0L_ADRESL_MASK                               0xFF

// Register: AAD1RES0H
#define AAD1RES0H AAD1RES0H
extern volatile unsigned char           AAD1RES0H           __at(0x71B);
#ifndef _LIB_BUILD
asm("AAD1RES0H equ 071Bh");
#endif
// aliases
extern volatile unsigned char           AD1RES0H            __at(0x71B);
#ifndef _LIB_BUILD
asm("AD1RES0H equ 071Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} AAD1RES0Hbits_t;
extern volatile AAD1RES0Hbits_t AAD1RES0Hbits __at(0x71B);
// bitfield macros
#define _AAD1RES0H_ADRESH_POSN                              0x0
#define _AAD1RES0H_ADRESH_POSITION                          0x0
#define _AAD1RES0H_ADRESH_SIZE                              0x8
#define _AAD1RES0H_ADRESH_LENGTH                            0x8
#define _AAD1RES0H_ADRESH_MASK                              0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} AD1RES0Hbits_t;
extern volatile AD1RES0Hbits_t AD1RES0Hbits __at(0x71B);
// bitfield macros
#define _AD1RES0H_ADRESH_POSN                               0x0
#define _AD1RES0H_ADRESH_POSITION                           0x0
#define _AD1RES0H_ADRESH_SIZE                               0x8
#define _AD1RES0H_ADRESH_LENGTH                             0x8
#define _AD1RES0H_ADRESH_MASK                               0xFF

// Register: AAD1RES1
#define AAD1RES1 AAD1RES1
extern volatile unsigned short          AAD1RES1            __at(0x71C);
#ifndef _LIB_BUILD
asm("AAD1RES1 equ 071Ch");
#endif
// aliases
extern volatile unsigned short          AD1RES1             __at(0x71C);
#ifndef _LIB_BUILD
asm("AD1RES1 equ 071Ch");
#endif
extern volatile unsigned short          ADRES1              __at(0x71C);
#ifndef _LIB_BUILD
asm("ADRES1 equ 071Ch");
#endif

// Register: AAD1RES1L
#define AAD1RES1L AAD1RES1L
extern volatile unsigned char           AAD1RES1L           __at(0x71C);
#ifndef _LIB_BUILD
asm("AAD1RES1L equ 071Ch");
#endif
// aliases
extern volatile unsigned char           AD1RES1L            __at(0x71C);
#ifndef _LIB_BUILD
asm("AD1RES1L equ 071Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} AAD1RES1Lbits_t;
extern volatile AAD1RES1Lbits_t AAD1RES1Lbits __at(0x71C);
// bitfield macros
#define _AAD1RES1L_ADRESL_POSN                              0x0
#define _AAD1RES1L_ADRESL_POSITION                          0x0
#define _AAD1RES1L_ADRESL_SIZE                              0x8
#define _AAD1RES1L_ADRESL_LENGTH                            0x8
#define _AAD1RES1L_ADRESL_MASK                              0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} AD1RES1Lbits_t;
extern volatile AD1RES1Lbits_t AD1RES1Lbits __at(0x71C);
// bitfield macros
#define _AD1RES1L_ADRESL_POSN                               0x0
#define _AD1RES1L_ADRESL_POSITION                           0x0
#define _AD1RES1L_ADRESL_SIZE                               0x8
#define _AD1RES1L_ADRESL_LENGTH                             0x8
#define _AD1RES1L_ADRESL_MASK                               0xFF

// Register: AAD1RES1H
#define AAD1RES1H AAD1RES1H
extern volatile unsigned char           AAD1RES1H           __at(0x71D);
#ifndef _LIB_BUILD
asm("AAD1RES1H equ 071Dh");
#endif
// aliases
extern volatile unsigned char           AD1RES1H            __at(0x71D);
#ifndef _LIB_BUILD
asm("AD1RES1H equ 071Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} AAD1RES1Hbits_t;
extern volatile AAD1RES1Hbits_t AAD1RES1Hbits __at(0x71D);
// bitfield macros
#define _AAD1RES1H_ADRESH_POSN                              0x0
#define _AAD1RES1H_ADRESH_POSITION                          0x0
#define _AAD1RES1H_ADRESH_SIZE                              0x8
#define _AAD1RES1H_ADRESH_LENGTH                            0x8
#define _AAD1RES1H_ADRESH_MASK                              0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} AD1RES1Hbits_t;
extern volatile AD1RES1Hbits_t AD1RES1Hbits __at(0x71D);
// bitfield macros
#define _AD1RES1H_ADRESH_POSN                               0x0
#define _AD1RES1H_ADRESH_POSITION                           0x0
#define _AD1RES1H_ADRESH_SIZE                               0x8
#define _AD1RES1H_ADRESH_LENGTH                             0x8
#define _AD1RES1H_ADRESH_MASK                               0xFF

// Register: AD1CH
#define AD1CH AD1CH
extern volatile unsigned short          AD1CH               __at(0x71E);
#ifndef _LIB_BUILD
asm("AD1CH equ 071Eh");
#endif
// aliases
extern volatile unsigned short          AAD1CH              __at(0x71E);
#ifndef _LIB_BUILD
asm("AAD1CH equ 071Eh");
#endif

// Register: AD1CH0
#define AD1CH0 AD1CH0
extern volatile unsigned char           AD1CH0              __at(0x71E);
#ifndef _LIB_BUILD
asm("AD1CH0 equ 071Eh");
#endif
// aliases
extern volatile unsigned char           AAD1CH0             __at(0x71E);
#ifndef _LIB_BUILD
asm("AAD1CH0 equ 071Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CH10                   :1;
        unsigned CH11                   :1;
        unsigned CH12                   :1;
        unsigned CH13                   :1;
        unsigned CH14                   :1;
        unsigned CH15                   :1;
        unsigned CH16                   :1;
        unsigned CHS17                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CH17                   :1;
    };
} AD1CH0bits_t;
extern volatile AD1CH0bits_t AD1CH0bits __at(0x71E);
// bitfield macros
#define _AD1CH0_CH10_POSN                                   0x0
#define _AD1CH0_CH10_POSITION                               0x0
#define _AD1CH0_CH10_SIZE                                   0x1
#define _AD1CH0_CH10_LENGTH                                 0x1
#define _AD1CH0_CH10_MASK                                   0x1
#define _AD1CH0_CH11_POSN                                   0x1
#define _AD1CH0_CH11_POSITION                               0x1
#define _AD1CH0_CH11_SIZE                                   0x1
#define _AD1CH0_CH11_LENGTH                                 0x1
#define _AD1CH0_CH11_MASK                                   0x2
#define _AD1CH0_CH12_POSN                                   0x2
#define _AD1CH0_CH12_POSITION                               0x2
#define _AD1CH0_CH12_SIZE                                   0x1
#define _AD1CH0_CH12_LENGTH                                 0x1
#define _AD1CH0_CH12_MASK                                   0x4
#define _AD1CH0_CH13_POSN                                   0x3
#define _AD1CH0_CH13_POSITION                               0x3
#define _AD1CH0_CH13_SIZE                                   0x1
#define _AD1CH0_CH13_LENGTH                                 0x1
#define _AD1CH0_CH13_MASK                                   0x8
#define _AD1CH0_CH14_POSN                                   0x4
#define _AD1CH0_CH14_POSITION                               0x4
#define _AD1CH0_CH14_SIZE                                   0x1
#define _AD1CH0_CH14_LENGTH                                 0x1
#define _AD1CH0_CH14_MASK                                   0x10
#define _AD1CH0_CH15_POSN                                   0x5
#define _AD1CH0_CH15_POSITION                               0x5
#define _AD1CH0_CH15_SIZE                                   0x1
#define _AD1CH0_CH15_LENGTH                                 0x1
#define _AD1CH0_CH15_MASK                                   0x20
#define _AD1CH0_CH16_POSN                                   0x6
#define _AD1CH0_CH16_POSITION                               0x6
#define _AD1CH0_CH16_SIZE                                   0x1
#define _AD1CH0_CH16_LENGTH                                 0x1
#define _AD1CH0_CH16_MASK                                   0x40
#define _AD1CH0_CHS17_POSN                                  0x7
#define _AD1CH0_CHS17_POSITION                              0x7
#define _AD1CH0_CHS17_SIZE                                  0x1
#define _AD1CH0_CHS17_LENGTH                                0x1
#define _AD1CH0_CHS17_MASK                                  0x80
#define _AD1CH0_CH17_POSN                                   0x7
#define _AD1CH0_CH17_POSITION                               0x7
#define _AD1CH0_CH17_SIZE                                   0x1
#define _AD1CH0_CH17_LENGTH                                 0x1
#define _AD1CH0_CH17_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CH10                   :1;
        unsigned CH11                   :1;
        unsigned CH12                   :1;
        unsigned CH13                   :1;
        unsigned CH14                   :1;
        unsigned CH15                   :1;
        unsigned CH16                   :1;
        unsigned CHS17                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CH17                   :1;
    };
} AAD1CH0bits_t;
extern volatile AAD1CH0bits_t AAD1CH0bits __at(0x71E);
// bitfield macros
#define _AAD1CH0_CH10_POSN                                  0x0
#define _AAD1CH0_CH10_POSITION                              0x0
#define _AAD1CH0_CH10_SIZE                                  0x1
#define _AAD1CH0_CH10_LENGTH                                0x1
#define _AAD1CH0_CH10_MASK                                  0x1
#define _AAD1CH0_CH11_POSN                                  0x1
#define _AAD1CH0_CH11_POSITION                              0x1
#define _AAD1CH0_CH11_SIZE                                  0x1
#define _AAD1CH0_CH11_LENGTH                                0x1
#define _AAD1CH0_CH11_MASK                                  0x2
#define _AAD1CH0_CH12_POSN                                  0x2
#define _AAD1CH0_CH12_POSITION                              0x2
#define _AAD1CH0_CH12_SIZE                                  0x1
#define _AAD1CH0_CH12_LENGTH                                0x1
#define _AAD1CH0_CH12_MASK                                  0x4
#define _AAD1CH0_CH13_POSN                                  0x3
#define _AAD1CH0_CH13_POSITION                              0x3
#define _AAD1CH0_CH13_SIZE                                  0x1
#define _AAD1CH0_CH13_LENGTH                                0x1
#define _AAD1CH0_CH13_MASK                                  0x8
#define _AAD1CH0_CH14_POSN                                  0x4
#define _AAD1CH0_CH14_POSITION                              0x4
#define _AAD1CH0_CH14_SIZE                                  0x1
#define _AAD1CH0_CH14_LENGTH                                0x1
#define _AAD1CH0_CH14_MASK                                  0x10
#define _AAD1CH0_CH15_POSN                                  0x5
#define _AAD1CH0_CH15_POSITION                              0x5
#define _AAD1CH0_CH15_SIZE                                  0x1
#define _AAD1CH0_CH15_LENGTH                                0x1
#define _AAD1CH0_CH15_MASK                                  0x20
#define _AAD1CH0_CH16_POSN                                  0x6
#define _AAD1CH0_CH16_POSITION                              0x6
#define _AAD1CH0_CH16_SIZE                                  0x1
#define _AAD1CH0_CH16_LENGTH                                0x1
#define _AAD1CH0_CH16_MASK                                  0x40
#define _AAD1CH0_CHS17_POSN                                 0x7
#define _AAD1CH0_CHS17_POSITION                             0x7
#define _AAD1CH0_CHS17_SIZE                                 0x1
#define _AAD1CH0_CHS17_LENGTH                               0x1
#define _AAD1CH0_CHS17_MASK                                 0x80
#define _AAD1CH0_CH17_POSN                                  0x7
#define _AAD1CH0_CH17_POSITION                              0x7
#define _AAD1CH0_CH17_SIZE                                  0x1
#define _AAD1CH0_CH17_LENGTH                                0x1
#define _AAD1CH0_CH17_MASK                                  0x80

// Register: AD1CH1
#define AD1CH1 AD1CH1
extern volatile unsigned char           AD1CH1              __at(0x71F);
#ifndef _LIB_BUILD
asm("AD1CH1 equ 071Fh");
#endif
// aliases
extern volatile unsigned char           AAD1CH1             __at(0x71F);
#ifndef _LIB_BUILD
asm("AAD1CH1 equ 071Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CH18                   :1;
        unsigned CH19                   :1;
        unsigned CH30                   :1;
        unsigned CH31                   :1;
        unsigned CH32                   :1;
        unsigned CH33                   :1;
        unsigned CH34                   :1;
        unsigned CH35                   :1;
    };
} AD1CH1bits_t;
extern volatile AD1CH1bits_t AD1CH1bits __at(0x71F);
// bitfield macros
#define _AD1CH1_CH18_POSN                                   0x0
#define _AD1CH1_CH18_POSITION                               0x0
#define _AD1CH1_CH18_SIZE                                   0x1
#define _AD1CH1_CH18_LENGTH                                 0x1
#define _AD1CH1_CH18_MASK                                   0x1
#define _AD1CH1_CH19_POSN                                   0x1
#define _AD1CH1_CH19_POSITION                               0x1
#define _AD1CH1_CH19_SIZE                                   0x1
#define _AD1CH1_CH19_LENGTH                                 0x1
#define _AD1CH1_CH19_MASK                                   0x2
#define _AD1CH1_CH30_POSN                                   0x2
#define _AD1CH1_CH30_POSITION                               0x2
#define _AD1CH1_CH30_SIZE                                   0x1
#define _AD1CH1_CH30_LENGTH                                 0x1
#define _AD1CH1_CH30_MASK                                   0x4
#define _AD1CH1_CH31_POSN                                   0x3
#define _AD1CH1_CH31_POSITION                               0x3
#define _AD1CH1_CH31_SIZE                                   0x1
#define _AD1CH1_CH31_LENGTH                                 0x1
#define _AD1CH1_CH31_MASK                                   0x8
#define _AD1CH1_CH32_POSN                                   0x4
#define _AD1CH1_CH32_POSITION                               0x4
#define _AD1CH1_CH32_SIZE                                   0x1
#define _AD1CH1_CH32_LENGTH                                 0x1
#define _AD1CH1_CH32_MASK                                   0x10
#define _AD1CH1_CH33_POSN                                   0x5
#define _AD1CH1_CH33_POSITION                               0x5
#define _AD1CH1_CH33_SIZE                                   0x1
#define _AD1CH1_CH33_LENGTH                                 0x1
#define _AD1CH1_CH33_MASK                                   0x20
#define _AD1CH1_CH34_POSN                                   0x6
#define _AD1CH1_CH34_POSITION                               0x6
#define _AD1CH1_CH34_SIZE                                   0x1
#define _AD1CH1_CH34_LENGTH                                 0x1
#define _AD1CH1_CH34_MASK                                   0x40
#define _AD1CH1_CH35_POSN                                   0x7
#define _AD1CH1_CH35_POSITION                               0x7
#define _AD1CH1_CH35_SIZE                                   0x1
#define _AD1CH1_CH35_LENGTH                                 0x1
#define _AD1CH1_CH35_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CH18                   :1;
        unsigned CH19                   :1;
        unsigned CH30                   :1;
        unsigned CH31                   :1;
        unsigned CH32                   :1;
        unsigned CH33                   :1;
        unsigned CH34                   :1;
        unsigned CH35                   :1;
    };
} AAD1CH1bits_t;
extern volatile AAD1CH1bits_t AAD1CH1bits __at(0x71F);
// bitfield macros
#define _AAD1CH1_CH18_POSN                                  0x0
#define _AAD1CH1_CH18_POSITION                              0x0
#define _AAD1CH1_CH18_SIZE                                  0x1
#define _AAD1CH1_CH18_LENGTH                                0x1
#define _AAD1CH1_CH18_MASK                                  0x1
#define _AAD1CH1_CH19_POSN                                  0x1
#define _AAD1CH1_CH19_POSITION                              0x1
#define _AAD1CH1_CH19_SIZE                                  0x1
#define _AAD1CH1_CH19_LENGTH                                0x1
#define _AAD1CH1_CH19_MASK                                  0x2
#define _AAD1CH1_CH30_POSN                                  0x2
#define _AAD1CH1_CH30_POSITION                              0x2
#define _AAD1CH1_CH30_SIZE                                  0x1
#define _AAD1CH1_CH30_LENGTH                                0x1
#define _AAD1CH1_CH30_MASK                                  0x4
#define _AAD1CH1_CH31_POSN                                  0x3
#define _AAD1CH1_CH31_POSITION                              0x3
#define _AAD1CH1_CH31_SIZE                                  0x1
#define _AAD1CH1_CH31_LENGTH                                0x1
#define _AAD1CH1_CH31_MASK                                  0x8
#define _AAD1CH1_CH32_POSN                                  0x4
#define _AAD1CH1_CH32_POSITION                              0x4
#define _AAD1CH1_CH32_SIZE                                  0x1
#define _AAD1CH1_CH32_LENGTH                                0x1
#define _AAD1CH1_CH32_MASK                                  0x10
#define _AAD1CH1_CH33_POSN                                  0x5
#define _AAD1CH1_CH33_POSITION                              0x5
#define _AAD1CH1_CH33_SIZE                                  0x1
#define _AAD1CH1_CH33_LENGTH                                0x1
#define _AAD1CH1_CH33_MASK                                  0x20
#define _AAD1CH1_CH34_POSN                                  0x6
#define _AAD1CH1_CH34_POSITION                              0x6
#define _AAD1CH1_CH34_SIZE                                  0x1
#define _AAD1CH1_CH34_LENGTH                                0x1
#define _AAD1CH1_CH34_MASK                                  0x40
#define _AAD1CH1_CH35_POSN                                  0x7
#define _AAD1CH1_CH35_POSITION                              0x7
#define _AAD1CH1_CH35_SIZE                                  0x1
#define _AAD1CH1_CH35_LENGTH                                0x1
#define _AAD1CH1_CH35_MASK                                  0x80

// Register: AD2CON0
#define AD2CON0 AD2CON0
extern volatile unsigned char           AD2CON0             __at(0x791);
#ifndef _LIB_BUILD
asm("AD2CON0 equ 0791h");
#endif
// aliases
extern volatile unsigned char           AAD2CON0            __at(0x791);
#ifndef _LIB_BUILD
asm("AAD2CON0 equ 0791h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO                     :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned AD2ON                  :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_nDONE2              :1;
    };
} AD2CON0bits_t;
extern volatile AD2CON0bits_t AD2CON0bits __at(0x791);
// bitfield macros
#define _AD2CON0_ADON_POSN                                  0x0
#define _AD2CON0_ADON_POSITION                              0x0
#define _AD2CON0_ADON_SIZE                                  0x1
#define _AD2CON0_ADON_LENGTH                                0x1
#define _AD2CON0_ADON_MASK                                  0x1
#define _AD2CON0_GO_POSN                                    0x1
#define _AD2CON0_GO_POSITION                                0x1
#define _AD2CON0_GO_SIZE                                    0x1
#define _AD2CON0_GO_LENGTH                                  0x1
#define _AD2CON0_GO_MASK                                    0x2
#define _AD2CON0_CHS_POSN                                   0x2
#define _AD2CON0_CHS_POSITION                               0x2
#define _AD2CON0_CHS_SIZE                                   0x6
#define _AD2CON0_CHS_LENGTH                                 0x6
#define _AD2CON0_CHS_MASK                                   0xFC
#define _AD2CON0_AD2ON_POSN                                 0x0
#define _AD2CON0_AD2ON_POSITION                             0x0
#define _AD2CON0_AD2ON_SIZE                                 0x1
#define _AD2CON0_AD2ON_LENGTH                               0x1
#define _AD2CON0_AD2ON_MASK                                 0x1
#define _AD2CON0_GO_nDONE_POSN                              0x1
#define _AD2CON0_GO_nDONE_POSITION                          0x1
#define _AD2CON0_GO_nDONE_SIZE                              0x1
#define _AD2CON0_GO_nDONE_LENGTH                            0x1
#define _AD2CON0_GO_nDONE_MASK                              0x2
#define _AD2CON0_CHS0_POSN                                  0x2
#define _AD2CON0_CHS0_POSITION                              0x2
#define _AD2CON0_CHS0_SIZE                                  0x1
#define _AD2CON0_CHS0_LENGTH                                0x1
#define _AD2CON0_CHS0_MASK                                  0x4
#define _AD2CON0_CHS1_POSN                                  0x3
#define _AD2CON0_CHS1_POSITION                              0x3
#define _AD2CON0_CHS1_SIZE                                  0x1
#define _AD2CON0_CHS1_LENGTH                                0x1
#define _AD2CON0_CHS1_MASK                                  0x8
#define _AD2CON0_CHS2_POSN                                  0x4
#define _AD2CON0_CHS2_POSITION                              0x4
#define _AD2CON0_CHS2_SIZE                                  0x1
#define _AD2CON0_CHS2_LENGTH                                0x1
#define _AD2CON0_CHS2_MASK                                  0x10
#define _AD2CON0_CHS3_POSN                                  0x5
#define _AD2CON0_CHS3_POSITION                              0x5
#define _AD2CON0_CHS3_SIZE                                  0x1
#define _AD2CON0_CHS3_LENGTH                                0x1
#define _AD2CON0_CHS3_MASK                                  0x20
#define _AD2CON0_CHS4_POSN                                  0x6
#define _AD2CON0_CHS4_POSITION                              0x6
#define _AD2CON0_CHS4_SIZE                                  0x1
#define _AD2CON0_CHS4_LENGTH                                0x1
#define _AD2CON0_CHS4_MASK                                  0x40
#define _AD2CON0_CHS5_POSN                                  0x7
#define _AD2CON0_CHS5_POSITION                              0x7
#define _AD2CON0_CHS5_SIZE                                  0x1
#define _AD2CON0_CHS5_LENGTH                                0x1
#define _AD2CON0_CHS5_MASK                                  0x80
#define _AD2CON0_GO_nDONE2_POSN                             0x1
#define _AD2CON0_GO_nDONE2_POSITION                         0x1
#define _AD2CON0_GO_nDONE2_SIZE                             0x1
#define _AD2CON0_GO_nDONE2_LENGTH                           0x1
#define _AD2CON0_GO_nDONE2_MASK                             0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO                     :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned AD2ON                  :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_nDONE2              :1;
    };
} AAD2CON0bits_t;
extern volatile AAD2CON0bits_t AAD2CON0bits __at(0x791);
// bitfield macros
#define _AAD2CON0_ADON_POSN                                 0x0
#define _AAD2CON0_ADON_POSITION                             0x0
#define _AAD2CON0_ADON_SIZE                                 0x1
#define _AAD2CON0_ADON_LENGTH                               0x1
#define _AAD2CON0_ADON_MASK                                 0x1
#define _AAD2CON0_GO_POSN                                   0x1
#define _AAD2CON0_GO_POSITION                               0x1
#define _AAD2CON0_GO_SIZE                                   0x1
#define _AAD2CON0_GO_LENGTH                                 0x1
#define _AAD2CON0_GO_MASK                                   0x2
#define _AAD2CON0_CHS_POSN                                  0x2
#define _AAD2CON0_CHS_POSITION                              0x2
#define _AAD2CON0_CHS_SIZE                                  0x6
#define _AAD2CON0_CHS_LENGTH                                0x6
#define _AAD2CON0_CHS_MASK                                  0xFC
#define _AAD2CON0_AD2ON_POSN                                0x0
#define _AAD2CON0_AD2ON_POSITION                            0x0
#define _AAD2CON0_AD2ON_SIZE                                0x1
#define _AAD2CON0_AD2ON_LENGTH                              0x1
#define _AAD2CON0_AD2ON_MASK                                0x1
#define _AAD2CON0_GO_nDONE_POSN                             0x1
#define _AAD2CON0_GO_nDONE_POSITION                         0x1
#define _AAD2CON0_GO_nDONE_SIZE                             0x1
#define _AAD2CON0_GO_nDONE_LENGTH                           0x1
#define _AAD2CON0_GO_nDONE_MASK                             0x2
#define _AAD2CON0_CHS0_POSN                                 0x2
#define _AAD2CON0_CHS0_POSITION                             0x2
#define _AAD2CON0_CHS0_SIZE                                 0x1
#define _AAD2CON0_CHS0_LENGTH                               0x1
#define _AAD2CON0_CHS0_MASK                                 0x4
#define _AAD2CON0_CHS1_POSN                                 0x3
#define _AAD2CON0_CHS1_POSITION                             0x3
#define _AAD2CON0_CHS1_SIZE                                 0x1
#define _AAD2CON0_CHS1_LENGTH                               0x1
#define _AAD2CON0_CHS1_MASK                                 0x8
#define _AAD2CON0_CHS2_POSN                                 0x4
#define _AAD2CON0_CHS2_POSITION                             0x4
#define _AAD2CON0_CHS2_SIZE                                 0x1
#define _AAD2CON0_CHS2_LENGTH                               0x1
#define _AAD2CON0_CHS2_MASK                                 0x10
#define _AAD2CON0_CHS3_POSN                                 0x5
#define _AAD2CON0_CHS3_POSITION                             0x5
#define _AAD2CON0_CHS3_SIZE                                 0x1
#define _AAD2CON0_CHS3_LENGTH                               0x1
#define _AAD2CON0_CHS3_MASK                                 0x20
#define _AAD2CON0_CHS4_POSN                                 0x6
#define _AAD2CON0_CHS4_POSITION                             0x6
#define _AAD2CON0_CHS4_SIZE                                 0x1
#define _AAD2CON0_CHS4_LENGTH                               0x1
#define _AAD2CON0_CHS4_MASK                                 0x40
#define _AAD2CON0_CHS5_POSN                                 0x7
#define _AAD2CON0_CHS5_POSITION                             0x7
#define _AAD2CON0_CHS5_SIZE                                 0x1
#define _AAD2CON0_CHS5_LENGTH                               0x1
#define _AAD2CON0_CHS5_MASK                                 0x80
#define _AAD2CON0_GO_nDONE2_POSN                            0x1
#define _AAD2CON0_GO_nDONE2_POSITION                        0x1
#define _AAD2CON0_GO_nDONE2_SIZE                            0x1
#define _AAD2CON0_GO_nDONE2_LENGTH                          0x1
#define _AAD2CON0_GO_nDONE2_MASK                            0x2

// Register: AD2CON2
#define AD2CON2 AD2CON2
extern volatile unsigned char           AD2CON2             __at(0x793);
#ifndef _LIB_BUILD
asm("AD2CON2 equ 0793h");
#endif
// aliases
extern volatile unsigned char           AAD2CON2            __at(0x793);
#ifndef _LIB_BUILD
asm("AAD2CON2 equ 0793h");
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
} AD2CON2bits_t;
extern volatile AD2CON2bits_t AD2CON2bits __at(0x793);
// bitfield macros
#define _AD2CON2_TRIGSEL_POSN                               0x4
#define _AD2CON2_TRIGSEL_POSITION                           0x4
#define _AD2CON2_TRIGSEL_SIZE                               0x3
#define _AD2CON2_TRIGSEL_LENGTH                             0x3
#define _AD2CON2_TRIGSEL_MASK                               0x70
#define _AD2CON2_TRIGSEL0_POSN                              0x4
#define _AD2CON2_TRIGSEL0_POSITION                          0x4
#define _AD2CON2_TRIGSEL0_SIZE                              0x1
#define _AD2CON2_TRIGSEL0_LENGTH                            0x1
#define _AD2CON2_TRIGSEL0_MASK                              0x10
#define _AD2CON2_TRIGSEL1_POSN                              0x5
#define _AD2CON2_TRIGSEL1_POSITION                          0x5
#define _AD2CON2_TRIGSEL1_SIZE                              0x1
#define _AD2CON2_TRIGSEL1_LENGTH                            0x1
#define _AD2CON2_TRIGSEL1_MASK                              0x20
#define _AD2CON2_TRIGSEL2_POSN                              0x6
#define _AD2CON2_TRIGSEL2_POSITION                          0x6
#define _AD2CON2_TRIGSEL2_SIZE                              0x1
#define _AD2CON2_TRIGSEL2_LENGTH                            0x1
#define _AD2CON2_TRIGSEL2_MASK                              0x40
// alias bitfield definitions
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
} AAD2CON2bits_t;
extern volatile AAD2CON2bits_t AAD2CON2bits __at(0x793);
// bitfield macros
#define _AAD2CON2_TRIGSEL_POSN                              0x4
#define _AAD2CON2_TRIGSEL_POSITION                          0x4
#define _AAD2CON2_TRIGSEL_SIZE                              0x3
#define _AAD2CON2_TRIGSEL_LENGTH                            0x3
#define _AAD2CON2_TRIGSEL_MASK                              0x70
#define _AAD2CON2_TRIGSEL0_POSN                             0x4
#define _AAD2CON2_TRIGSEL0_POSITION                         0x4
#define _AAD2CON2_TRIGSEL0_SIZE                             0x1
#define _AAD2CON2_TRIGSEL0_LENGTH                           0x1
#define _AAD2CON2_TRIGSEL0_MASK                             0x10
#define _AAD2CON2_TRIGSEL1_POSN                             0x5
#define _AAD2CON2_TRIGSEL1_POSITION                         0x5
#define _AAD2CON2_TRIGSEL1_SIZE                             0x1
#define _AAD2CON2_TRIGSEL1_LENGTH                           0x1
#define _AAD2CON2_TRIGSEL1_MASK                             0x20
#define _AAD2CON2_TRIGSEL2_POSN                             0x6
#define _AAD2CON2_TRIGSEL2_POSITION                         0x6
#define _AAD2CON2_TRIGSEL2_SIZE                             0x1
#define _AAD2CON2_TRIGSEL2_LENGTH                           0x1
#define _AAD2CON2_TRIGSEL2_MASK                             0x40

// Register: AD2CON3
#define AD2CON3 AD2CON3
extern volatile unsigned char           AD2CON3             __at(0x794);
#ifndef _LIB_BUILD
asm("AD2CON3 equ 0794h");
#endif
// aliases
extern volatile unsigned char           AAD2CON3            __at(0x794);
#ifndef _LIB_BUILD
asm("AAD2CON3 equ 0794h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AD2DSEN                :1;
        unsigned AD2IPEN                :1;
        unsigned                        :4;
        unsigned AD2IPPOL               :1;
        unsigned AD2EPPOL               :1;
    };
    struct {
        unsigned ADDSEN                 :1;
        unsigned ADIPEN                 :1;
        unsigned                        :4;
        unsigned ADIPPOL                :1;
        unsigned ADEPPOL                :1;
    };
} AD2CON3bits_t;
extern volatile AD2CON3bits_t AD2CON3bits __at(0x794);
// bitfield macros
#define _AD2CON3_AD2DSEN_POSN                               0x0
#define _AD2CON3_AD2DSEN_POSITION                           0x0
#define _AD2CON3_AD2DSEN_SIZE                               0x1
#define _AD2CON3_AD2DSEN_LENGTH                             0x1
#define _AD2CON3_AD2DSEN_MASK                               0x1
#define _AD2CON3_AD2IPEN_POSN                               0x1
#define _AD2CON3_AD2IPEN_POSITION                           0x1
#define _AD2CON3_AD2IPEN_SIZE                               0x1
#define _AD2CON3_AD2IPEN_LENGTH                             0x1
#define _AD2CON3_AD2IPEN_MASK                               0x2
#define _AD2CON3_AD2IPPOL_POSN                              0x6
#define _AD2CON3_AD2IPPOL_POSITION                          0x6
#define _AD2CON3_AD2IPPOL_SIZE                              0x1
#define _AD2CON3_AD2IPPOL_LENGTH                            0x1
#define _AD2CON3_AD2IPPOL_MASK                              0x40
#define _AD2CON3_AD2EPPOL_POSN                              0x7
#define _AD2CON3_AD2EPPOL_POSITION                          0x7
#define _AD2CON3_AD2EPPOL_SIZE                              0x1
#define _AD2CON3_AD2EPPOL_LENGTH                            0x1
#define _AD2CON3_AD2EPPOL_MASK                              0x80
#define _AD2CON3_ADDSEN_POSN                                0x0
#define _AD2CON3_ADDSEN_POSITION                            0x0
#define _AD2CON3_ADDSEN_SIZE                                0x1
#define _AD2CON3_ADDSEN_LENGTH                              0x1
#define _AD2CON3_ADDSEN_MASK                                0x1
#define _AD2CON3_ADIPEN_POSN                                0x1
#define _AD2CON3_ADIPEN_POSITION                            0x1
#define _AD2CON3_ADIPEN_SIZE                                0x1
#define _AD2CON3_ADIPEN_LENGTH                              0x1
#define _AD2CON3_ADIPEN_MASK                                0x2
#define _AD2CON3_ADIPPOL_POSN                               0x6
#define _AD2CON3_ADIPPOL_POSITION                           0x6
#define _AD2CON3_ADIPPOL_SIZE                               0x1
#define _AD2CON3_ADIPPOL_LENGTH                             0x1
#define _AD2CON3_ADIPPOL_MASK                               0x40
#define _AD2CON3_ADEPPOL_POSN                               0x7
#define _AD2CON3_ADEPPOL_POSITION                           0x7
#define _AD2CON3_ADEPPOL_SIZE                               0x1
#define _AD2CON3_ADEPPOL_LENGTH                             0x1
#define _AD2CON3_ADEPPOL_MASK                               0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned AD2DSEN                :1;
        unsigned AD2IPEN                :1;
        unsigned                        :4;
        unsigned AD2IPPOL               :1;
        unsigned AD2EPPOL               :1;
    };
    struct {
        unsigned ADDSEN                 :1;
        unsigned ADIPEN                 :1;
        unsigned                        :4;
        unsigned ADIPPOL                :1;
        unsigned ADEPPOL                :1;
    };
} AAD2CON3bits_t;
extern volatile AAD2CON3bits_t AAD2CON3bits __at(0x794);
// bitfield macros
#define _AAD2CON3_AD2DSEN_POSN                              0x0
#define _AAD2CON3_AD2DSEN_POSITION                          0x0
#define _AAD2CON3_AD2DSEN_SIZE                              0x1
#define _AAD2CON3_AD2DSEN_LENGTH                            0x1
#define _AAD2CON3_AD2DSEN_MASK                              0x1
#define _AAD2CON3_AD2IPEN_POSN                              0x1
#define _AAD2CON3_AD2IPEN_POSITION                          0x1
#define _AAD2CON3_AD2IPEN_SIZE                              0x1
#define _AAD2CON3_AD2IPEN_LENGTH                            0x1
#define _AAD2CON3_AD2IPEN_MASK                              0x2
#define _AAD2CON3_AD2IPPOL_POSN                             0x6
#define _AAD2CON3_AD2IPPOL_POSITION                         0x6
#define _AAD2CON3_AD2IPPOL_SIZE                             0x1
#define _AAD2CON3_AD2IPPOL_LENGTH                           0x1
#define _AAD2CON3_AD2IPPOL_MASK                             0x40
#define _AAD2CON3_AD2EPPOL_POSN                             0x7
#define _AAD2CON3_AD2EPPOL_POSITION                         0x7
#define _AAD2CON3_AD2EPPOL_SIZE                             0x1
#define _AAD2CON3_AD2EPPOL_LENGTH                           0x1
#define _AAD2CON3_AD2EPPOL_MASK                             0x80
#define _AAD2CON3_ADDSEN_POSN                               0x0
#define _AAD2CON3_ADDSEN_POSITION                           0x0
#define _AAD2CON3_ADDSEN_SIZE                               0x1
#define _AAD2CON3_ADDSEN_LENGTH                             0x1
#define _AAD2CON3_ADDSEN_MASK                               0x1
#define _AAD2CON3_ADIPEN_POSN                               0x1
#define _AAD2CON3_ADIPEN_POSITION                           0x1
#define _AAD2CON3_ADIPEN_SIZE                               0x1
#define _AAD2CON3_ADIPEN_LENGTH                             0x1
#define _AAD2CON3_ADIPEN_MASK                               0x2
#define _AAD2CON3_ADIPPOL_POSN                              0x6
#define _AAD2CON3_ADIPPOL_POSITION                          0x6
#define _AAD2CON3_ADIPPOL_SIZE                              0x1
#define _AAD2CON3_ADIPPOL_LENGTH                            0x1
#define _AAD2CON3_ADIPPOL_MASK                              0x40
#define _AAD2CON3_ADEPPOL_POSN                              0x7
#define _AAD2CON3_ADEPPOL_POSITION                          0x7
#define _AAD2CON3_ADEPPOL_SIZE                              0x1
#define _AAD2CON3_ADEPPOL_LENGTH                            0x1
#define _AAD2CON3_ADEPPOL_MASK                              0x80

// Register: AD2PRECON
#define AD2PRECON AD2PRECON
extern volatile unsigned char           AD2PRECON           __at(0x796);
#ifndef _LIB_BUILD
asm("AD2PRECON equ 0796h");
#endif
// aliases
extern volatile unsigned char           AD2PRE              __at(0x796);
#ifndef _LIB_BUILD
asm("AD2PRE equ 0796h");
#endif
extern volatile unsigned char           AAD2PRE             __at(0x796);
#ifndef _LIB_BUILD
asm("AAD2PRE equ 0796h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AD2PRECONbits_t;
extern volatile AD2PRECONbits_t AD2PRECONbits __at(0x796);
// bitfield macros
#define _AD2PRECON_ADPRE_POSN                               0x0
#define _AD2PRECON_ADPRE_POSITION                           0x0
#define _AD2PRECON_ADPRE_SIZE                               0x7
#define _AD2PRECON_ADPRE_LENGTH                             0x7
#define _AD2PRECON_ADPRE_MASK                               0x7F
#define _AD2PRECON_ADPRE0_POSN                              0x0
#define _AD2PRECON_ADPRE0_POSITION                          0x0
#define _AD2PRECON_ADPRE0_SIZE                              0x1
#define _AD2PRECON_ADPRE0_LENGTH                            0x1
#define _AD2PRECON_ADPRE0_MASK                              0x1
#define _AD2PRECON_ADPRE1_POSN                              0x1
#define _AD2PRECON_ADPRE1_POSITION                          0x1
#define _AD2PRECON_ADPRE1_SIZE                              0x1
#define _AD2PRECON_ADPRE1_LENGTH                            0x1
#define _AD2PRECON_ADPRE1_MASK                              0x2
#define _AD2PRECON_ADPRE2_POSN                              0x2
#define _AD2PRECON_ADPRE2_POSITION                          0x2
#define _AD2PRECON_ADPRE2_SIZE                              0x1
#define _AD2PRECON_ADPRE2_LENGTH                            0x1
#define _AD2PRECON_ADPRE2_MASK                              0x4
#define _AD2PRECON_ADPRE3_POSN                              0x3
#define _AD2PRECON_ADPRE3_POSITION                          0x3
#define _AD2PRECON_ADPRE3_SIZE                              0x1
#define _AD2PRECON_ADPRE3_LENGTH                            0x1
#define _AD2PRECON_ADPRE3_MASK                              0x8
#define _AD2PRECON_ADPRE4_POSN                              0x4
#define _AD2PRECON_ADPRE4_POSITION                          0x4
#define _AD2PRECON_ADPRE4_SIZE                              0x1
#define _AD2PRECON_ADPRE4_LENGTH                            0x1
#define _AD2PRECON_ADPRE4_MASK                              0x10
#define _AD2PRECON_ADPRE5_POSN                              0x5
#define _AD2PRECON_ADPRE5_POSITION                          0x5
#define _AD2PRECON_ADPRE5_SIZE                              0x1
#define _AD2PRECON_ADPRE5_LENGTH                            0x1
#define _AD2PRECON_ADPRE5_MASK                              0x20
#define _AD2PRECON_ADPRE6_POSN                              0x6
#define _AD2PRECON_ADPRE6_POSITION                          0x6
#define _AD2PRECON_ADPRE6_SIZE                              0x1
#define _AD2PRECON_ADPRE6_LENGTH                            0x1
#define _AD2PRECON_ADPRE6_MASK                              0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AD2PREbits_t;
extern volatile AD2PREbits_t AD2PREbits __at(0x796);
// bitfield macros
#define _AD2PRE_ADPRE_POSN                                  0x0
#define _AD2PRE_ADPRE_POSITION                              0x0
#define _AD2PRE_ADPRE_SIZE                                  0x7
#define _AD2PRE_ADPRE_LENGTH                                0x7
#define _AD2PRE_ADPRE_MASK                                  0x7F
#define _AD2PRE_ADPRE0_POSN                                 0x0
#define _AD2PRE_ADPRE0_POSITION                             0x0
#define _AD2PRE_ADPRE0_SIZE                                 0x1
#define _AD2PRE_ADPRE0_LENGTH                               0x1
#define _AD2PRE_ADPRE0_MASK                                 0x1
#define _AD2PRE_ADPRE1_POSN                                 0x1
#define _AD2PRE_ADPRE1_POSITION                             0x1
#define _AD2PRE_ADPRE1_SIZE                                 0x1
#define _AD2PRE_ADPRE1_LENGTH                               0x1
#define _AD2PRE_ADPRE1_MASK                                 0x2
#define _AD2PRE_ADPRE2_POSN                                 0x2
#define _AD2PRE_ADPRE2_POSITION                             0x2
#define _AD2PRE_ADPRE2_SIZE                                 0x1
#define _AD2PRE_ADPRE2_LENGTH                               0x1
#define _AD2PRE_ADPRE2_MASK                                 0x4
#define _AD2PRE_ADPRE3_POSN                                 0x3
#define _AD2PRE_ADPRE3_POSITION                             0x3
#define _AD2PRE_ADPRE3_SIZE                                 0x1
#define _AD2PRE_ADPRE3_LENGTH                               0x1
#define _AD2PRE_ADPRE3_MASK                                 0x8
#define _AD2PRE_ADPRE4_POSN                                 0x4
#define _AD2PRE_ADPRE4_POSITION                             0x4
#define _AD2PRE_ADPRE4_SIZE                                 0x1
#define _AD2PRE_ADPRE4_LENGTH                               0x1
#define _AD2PRE_ADPRE4_MASK                                 0x10
#define _AD2PRE_ADPRE5_POSN                                 0x5
#define _AD2PRE_ADPRE5_POSITION                             0x5
#define _AD2PRE_ADPRE5_SIZE                                 0x1
#define _AD2PRE_ADPRE5_LENGTH                               0x1
#define _AD2PRE_ADPRE5_MASK                                 0x20
#define _AD2PRE_ADPRE6_POSN                                 0x6
#define _AD2PRE_ADPRE6_POSITION                             0x6
#define _AD2PRE_ADPRE6_SIZE                                 0x1
#define _AD2PRE_ADPRE6_LENGTH                               0x1
#define _AD2PRE_ADPRE6_MASK                                 0x40
typedef union {
    struct {
        unsigned ADPRE                  :7;
    };
    struct {
        unsigned ADPRE0                 :1;
        unsigned ADPRE1                 :1;
        unsigned ADPRE2                 :1;
        unsigned ADPRE3                 :1;
        unsigned ADPRE4                 :1;
        unsigned ADPRE5                 :1;
        unsigned ADPRE6                 :1;
    };
} AAD2PREbits_t;
extern volatile AAD2PREbits_t AAD2PREbits __at(0x796);
// bitfield macros
#define _AAD2PRE_ADPRE_POSN                                 0x0
#define _AAD2PRE_ADPRE_POSITION                             0x0
#define _AAD2PRE_ADPRE_SIZE                                 0x7
#define _AAD2PRE_ADPRE_LENGTH                               0x7
#define _AAD2PRE_ADPRE_MASK                                 0x7F
#define _AAD2PRE_ADPRE0_POSN                                0x0
#define _AAD2PRE_ADPRE0_POSITION                            0x0
#define _AAD2PRE_ADPRE0_SIZE                                0x1
#define _AAD2PRE_ADPRE0_LENGTH                              0x1
#define _AAD2PRE_ADPRE0_MASK                                0x1
#define _AAD2PRE_ADPRE1_POSN                                0x1
#define _AAD2PRE_ADPRE1_POSITION                            0x1
#define _AAD2PRE_ADPRE1_SIZE                                0x1
#define _AAD2PRE_ADPRE1_LENGTH                              0x1
#define _AAD2PRE_ADPRE1_MASK                                0x2
#define _AAD2PRE_ADPRE2_POSN                                0x2
#define _AAD2PRE_ADPRE2_POSITION                            0x2
#define _AAD2PRE_ADPRE2_SIZE                                0x1
#define _AAD2PRE_ADPRE2_LENGTH                              0x1
#define _AAD2PRE_ADPRE2_MASK                                0x4
#define _AAD2PRE_ADPRE3_POSN                                0x3
#define _AAD2PRE_ADPRE3_POSITION                            0x3
#define _AAD2PRE_ADPRE3_SIZE                                0x1
#define _AAD2PRE_ADPRE3_LENGTH                              0x1
#define _AAD2PRE_ADPRE3_MASK                                0x8
#define _AAD2PRE_ADPRE4_POSN                                0x4
#define _AAD2PRE_ADPRE4_POSITION                            0x4
#define _AAD2PRE_ADPRE4_SIZE                                0x1
#define _AAD2PRE_ADPRE4_LENGTH                              0x1
#define _AAD2PRE_ADPRE4_MASK                                0x10
#define _AAD2PRE_ADPRE5_POSN                                0x5
#define _AAD2PRE_ADPRE5_POSITION                            0x5
#define _AAD2PRE_ADPRE5_SIZE                                0x1
#define _AAD2PRE_ADPRE5_LENGTH                              0x1
#define _AAD2PRE_ADPRE5_MASK                                0x20
#define _AAD2PRE_ADPRE6_POSN                                0x6
#define _AAD2PRE_ADPRE6_POSITION                            0x6
#define _AAD2PRE_ADPRE6_SIZE                                0x1
#define _AAD2PRE_ADPRE6_LENGTH                              0x1
#define _AAD2PRE_ADPRE6_MASK                                0x40

// Register: AD2ACQCON
#define AD2ACQCON AD2ACQCON
extern volatile unsigned char           AD2ACQCON           __at(0x797);
#ifndef _LIB_BUILD
asm("AD2ACQCON equ 0797h");
#endif
// aliases
extern volatile unsigned char           AD2ACQ              __at(0x797);
#ifndef _LIB_BUILD
asm("AD2ACQ equ 0797h");
#endif
extern volatile unsigned char           AAD2ACQ             __at(0x797);
#ifndef _LIB_BUILD
asm("AAD2ACQ equ 0797h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AD2ACQCONbits_t;
extern volatile AD2ACQCONbits_t AD2ACQCONbits __at(0x797);
// bitfield macros
#define _AD2ACQCON_ADACQ_POSN                               0x0
#define _AD2ACQCON_ADACQ_POSITION                           0x0
#define _AD2ACQCON_ADACQ_SIZE                               0x7
#define _AD2ACQCON_ADACQ_LENGTH                             0x7
#define _AD2ACQCON_ADACQ_MASK                               0x7F
#define _AD2ACQCON_ADACQ0_POSN                              0x0
#define _AD2ACQCON_ADACQ0_POSITION                          0x0
#define _AD2ACQCON_ADACQ0_SIZE                              0x1
#define _AD2ACQCON_ADACQ0_LENGTH                            0x1
#define _AD2ACQCON_ADACQ0_MASK                              0x1
#define _AD2ACQCON_ADACQ1_POSN                              0x1
#define _AD2ACQCON_ADACQ1_POSITION                          0x1
#define _AD2ACQCON_ADACQ1_SIZE                              0x1
#define _AD2ACQCON_ADACQ1_LENGTH                            0x1
#define _AD2ACQCON_ADACQ1_MASK                              0x2
#define _AD2ACQCON_ADACQ2_POSN                              0x2
#define _AD2ACQCON_ADACQ2_POSITION                          0x2
#define _AD2ACQCON_ADACQ2_SIZE                              0x1
#define _AD2ACQCON_ADACQ2_LENGTH                            0x1
#define _AD2ACQCON_ADACQ2_MASK                              0x4
#define _AD2ACQCON_ADACQ3_POSN                              0x3
#define _AD2ACQCON_ADACQ3_POSITION                          0x3
#define _AD2ACQCON_ADACQ3_SIZE                              0x1
#define _AD2ACQCON_ADACQ3_LENGTH                            0x1
#define _AD2ACQCON_ADACQ3_MASK                              0x8
#define _AD2ACQCON_ADACQ4_POSN                              0x4
#define _AD2ACQCON_ADACQ4_POSITION                          0x4
#define _AD2ACQCON_ADACQ4_SIZE                              0x1
#define _AD2ACQCON_ADACQ4_LENGTH                            0x1
#define _AD2ACQCON_ADACQ4_MASK                              0x10
#define _AD2ACQCON_ADACQ5_POSN                              0x5
#define _AD2ACQCON_ADACQ5_POSITION                          0x5
#define _AD2ACQCON_ADACQ5_SIZE                              0x1
#define _AD2ACQCON_ADACQ5_LENGTH                            0x1
#define _AD2ACQCON_ADACQ5_MASK                              0x20
#define _AD2ACQCON_ADACQ6_POSN                              0x6
#define _AD2ACQCON_ADACQ6_POSITION                          0x6
#define _AD2ACQCON_ADACQ6_SIZE                              0x1
#define _AD2ACQCON_ADACQ6_LENGTH                            0x1
#define _AD2ACQCON_ADACQ6_MASK                              0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AD2ACQbits_t;
extern volatile AD2ACQbits_t AD2ACQbits __at(0x797);
// bitfield macros
#define _AD2ACQ_ADACQ_POSN                                  0x0
#define _AD2ACQ_ADACQ_POSITION                              0x0
#define _AD2ACQ_ADACQ_SIZE                                  0x7
#define _AD2ACQ_ADACQ_LENGTH                                0x7
#define _AD2ACQ_ADACQ_MASK                                  0x7F
#define _AD2ACQ_ADACQ0_POSN                                 0x0
#define _AD2ACQ_ADACQ0_POSITION                             0x0
#define _AD2ACQ_ADACQ0_SIZE                                 0x1
#define _AD2ACQ_ADACQ0_LENGTH                               0x1
#define _AD2ACQ_ADACQ0_MASK                                 0x1
#define _AD2ACQ_ADACQ1_POSN                                 0x1
#define _AD2ACQ_ADACQ1_POSITION                             0x1
#define _AD2ACQ_ADACQ1_SIZE                                 0x1
#define _AD2ACQ_ADACQ1_LENGTH                               0x1
#define _AD2ACQ_ADACQ1_MASK                                 0x2
#define _AD2ACQ_ADACQ2_POSN                                 0x2
#define _AD2ACQ_ADACQ2_POSITION                             0x2
#define _AD2ACQ_ADACQ2_SIZE                                 0x1
#define _AD2ACQ_ADACQ2_LENGTH                               0x1
#define _AD2ACQ_ADACQ2_MASK                                 0x4
#define _AD2ACQ_ADACQ3_POSN                                 0x3
#define _AD2ACQ_ADACQ3_POSITION                             0x3
#define _AD2ACQ_ADACQ3_SIZE                                 0x1
#define _AD2ACQ_ADACQ3_LENGTH                               0x1
#define _AD2ACQ_ADACQ3_MASK                                 0x8
#define _AD2ACQ_ADACQ4_POSN                                 0x4
#define _AD2ACQ_ADACQ4_POSITION                             0x4
#define _AD2ACQ_ADACQ4_SIZE                                 0x1
#define _AD2ACQ_ADACQ4_LENGTH                               0x1
#define _AD2ACQ_ADACQ4_MASK                                 0x10
#define _AD2ACQ_ADACQ5_POSN                                 0x5
#define _AD2ACQ_ADACQ5_POSITION                             0x5
#define _AD2ACQ_ADACQ5_SIZE                                 0x1
#define _AD2ACQ_ADACQ5_LENGTH                               0x1
#define _AD2ACQ_ADACQ5_MASK                                 0x20
#define _AD2ACQ_ADACQ6_POSN                                 0x6
#define _AD2ACQ_ADACQ6_POSITION                             0x6
#define _AD2ACQ_ADACQ6_SIZE                                 0x1
#define _AD2ACQ_ADACQ6_LENGTH                               0x1
#define _AD2ACQ_ADACQ6_MASK                                 0x40
typedef union {
    struct {
        unsigned ADACQ                  :7;
    };
    struct {
        unsigned ADACQ0                 :1;
        unsigned ADACQ1                 :1;
        unsigned ADACQ2                 :1;
        unsigned ADACQ3                 :1;
        unsigned ADACQ4                 :1;
        unsigned ADACQ5                 :1;
        unsigned ADACQ6                 :1;
    };
} AAD2ACQbits_t;
extern volatile AAD2ACQbits_t AAD2ACQbits __at(0x797);
// bitfield macros
#define _AAD2ACQ_ADACQ_POSN                                 0x0
#define _AAD2ACQ_ADACQ_POSITION                             0x0
#define _AAD2ACQ_ADACQ_SIZE                                 0x7
#define _AAD2ACQ_ADACQ_LENGTH                               0x7
#define _AAD2ACQ_ADACQ_MASK                                 0x7F
#define _AAD2ACQ_ADACQ0_POSN                                0x0
#define _AAD2ACQ_ADACQ0_POSITION                            0x0
#define _AAD2ACQ_ADACQ0_SIZE                                0x1
#define _AAD2ACQ_ADACQ0_LENGTH                              0x1
#define _AAD2ACQ_ADACQ0_MASK                                0x1
#define _AAD2ACQ_ADACQ1_POSN                                0x1
#define _AAD2ACQ_ADACQ1_POSITION                            0x1
#define _AAD2ACQ_ADACQ1_SIZE                                0x1
#define _AAD2ACQ_ADACQ1_LENGTH                              0x1
#define _AAD2ACQ_ADACQ1_MASK                                0x2
#define _AAD2ACQ_ADACQ2_POSN                                0x2
#define _AAD2ACQ_ADACQ2_POSITION                            0x2
#define _AAD2ACQ_ADACQ2_SIZE                                0x1
#define _AAD2ACQ_ADACQ2_LENGTH                              0x1
#define _AAD2ACQ_ADACQ2_MASK                                0x4
#define _AAD2ACQ_ADACQ3_POSN                                0x3
#define _AAD2ACQ_ADACQ3_POSITION                            0x3
#define _AAD2ACQ_ADACQ3_SIZE                                0x1
#define _AAD2ACQ_ADACQ3_LENGTH                              0x1
#define _AAD2ACQ_ADACQ3_MASK                                0x8
#define _AAD2ACQ_ADACQ4_POSN                                0x4
#define _AAD2ACQ_ADACQ4_POSITION                            0x4
#define _AAD2ACQ_ADACQ4_SIZE                                0x1
#define _AAD2ACQ_ADACQ4_LENGTH                              0x1
#define _AAD2ACQ_ADACQ4_MASK                                0x10
#define _AAD2ACQ_ADACQ5_POSN                                0x5
#define _AAD2ACQ_ADACQ5_POSITION                            0x5
#define _AAD2ACQ_ADACQ5_SIZE                                0x1
#define _AAD2ACQ_ADACQ5_LENGTH                              0x1
#define _AAD2ACQ_ADACQ5_MASK                                0x20
#define _AAD2ACQ_ADACQ6_POSN                                0x6
#define _AAD2ACQ_ADACQ6_POSITION                            0x6
#define _AAD2ACQ_ADACQ6_SIZE                                0x1
#define _AAD2ACQ_ADACQ6_LENGTH                              0x1
#define _AAD2ACQ_ADACQ6_MASK                                0x40

// Register: AD2GRD
#define AD2GRD AD2GRD
extern volatile unsigned char           AD2GRD              __at(0x798);
#ifndef _LIB_BUILD
asm("AD2GRD equ 0798h");
#endif
// aliases
extern volatile unsigned char           AAD2GRD             __at(0x798);
#ifndef _LIB_BUILD
asm("AAD2GRD equ 0798h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX2POL                 :1;
        unsigned                        :4;
        unsigned GRD2POL                :1;
        unsigned GRD2AOE                :1;
        unsigned GRD2BOE                :1;
    };
    struct {
        unsigned TXPOL                  :1;
        unsigned                        :4;
        unsigned GRDPOL                 :1;
        unsigned GRDAOE                 :1;
        unsigned GRDBOE                 :1;
    };
} AD2GRDbits_t;
extern volatile AD2GRDbits_t AD2GRDbits __at(0x798);
// bitfield macros
#define _AD2GRD_TX2POL_POSN                                 0x0
#define _AD2GRD_TX2POL_POSITION                             0x0
#define _AD2GRD_TX2POL_SIZE                                 0x1
#define _AD2GRD_TX2POL_LENGTH                               0x1
#define _AD2GRD_TX2POL_MASK                                 0x1
#define _AD2GRD_GRD2POL_POSN                                0x5
#define _AD2GRD_GRD2POL_POSITION                            0x5
#define _AD2GRD_GRD2POL_SIZE                                0x1
#define _AD2GRD_GRD2POL_LENGTH                              0x1
#define _AD2GRD_GRD2POL_MASK                                0x20
#define _AD2GRD_GRD2AOE_POSN                                0x6
#define _AD2GRD_GRD2AOE_POSITION                            0x6
#define _AD2GRD_GRD2AOE_SIZE                                0x1
#define _AD2GRD_GRD2AOE_LENGTH                              0x1
#define _AD2GRD_GRD2AOE_MASK                                0x40
#define _AD2GRD_GRD2BOE_POSN                                0x7
#define _AD2GRD_GRD2BOE_POSITION                            0x7
#define _AD2GRD_GRD2BOE_SIZE                                0x1
#define _AD2GRD_GRD2BOE_LENGTH                              0x1
#define _AD2GRD_GRD2BOE_MASK                                0x80
#define _AD2GRD_TXPOL_POSN                                  0x0
#define _AD2GRD_TXPOL_POSITION                              0x0
#define _AD2GRD_TXPOL_SIZE                                  0x1
#define _AD2GRD_TXPOL_LENGTH                                0x1
#define _AD2GRD_TXPOL_MASK                                  0x1
#define _AD2GRD_GRDPOL_POSN                                 0x5
#define _AD2GRD_GRDPOL_POSITION                             0x5
#define _AD2GRD_GRDPOL_SIZE                                 0x1
#define _AD2GRD_GRDPOL_LENGTH                               0x1
#define _AD2GRD_GRDPOL_MASK                                 0x20
#define _AD2GRD_GRDAOE_POSN                                 0x6
#define _AD2GRD_GRDAOE_POSITION                             0x6
#define _AD2GRD_GRDAOE_SIZE                                 0x1
#define _AD2GRD_GRDAOE_LENGTH                               0x1
#define _AD2GRD_GRDAOE_MASK                                 0x40
#define _AD2GRD_GRDBOE_POSN                                 0x7
#define _AD2GRD_GRDBOE_POSITION                             0x7
#define _AD2GRD_GRDBOE_SIZE                                 0x1
#define _AD2GRD_GRDBOE_LENGTH                               0x1
#define _AD2GRD_GRDBOE_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX2POL                 :1;
        unsigned                        :4;
        unsigned GRD2POL                :1;
        unsigned GRD2AOE                :1;
        unsigned GRD2BOE                :1;
    };
    struct {
        unsigned TXPOL                  :1;
        unsigned                        :4;
        unsigned GRDPOL                 :1;
        unsigned GRDAOE                 :1;
        unsigned GRDBOE                 :1;
    };
} AAD2GRDbits_t;
extern volatile AAD2GRDbits_t AAD2GRDbits __at(0x798);
// bitfield macros
#define _AAD2GRD_TX2POL_POSN                                0x0
#define _AAD2GRD_TX2POL_POSITION                            0x0
#define _AAD2GRD_TX2POL_SIZE                                0x1
#define _AAD2GRD_TX2POL_LENGTH                              0x1
#define _AAD2GRD_TX2POL_MASK                                0x1
#define _AAD2GRD_GRD2POL_POSN                               0x5
#define _AAD2GRD_GRD2POL_POSITION                           0x5
#define _AAD2GRD_GRD2POL_SIZE                               0x1
#define _AAD2GRD_GRD2POL_LENGTH                             0x1
#define _AAD2GRD_GRD2POL_MASK                               0x20
#define _AAD2GRD_GRD2AOE_POSN                               0x6
#define _AAD2GRD_GRD2AOE_POSITION                           0x6
#define _AAD2GRD_GRD2AOE_SIZE                               0x1
#define _AAD2GRD_GRD2AOE_LENGTH                             0x1
#define _AAD2GRD_GRD2AOE_MASK                               0x40
#define _AAD2GRD_GRD2BOE_POSN                               0x7
#define _AAD2GRD_GRD2BOE_POSITION                           0x7
#define _AAD2GRD_GRD2BOE_SIZE                               0x1
#define _AAD2GRD_GRD2BOE_LENGTH                             0x1
#define _AAD2GRD_GRD2BOE_MASK                               0x80
#define _AAD2GRD_TXPOL_POSN                                 0x0
#define _AAD2GRD_TXPOL_POSITION                             0x0
#define _AAD2GRD_TXPOL_SIZE                                 0x1
#define _AAD2GRD_TXPOL_LENGTH                               0x1
#define _AAD2GRD_TXPOL_MASK                                 0x1
#define _AAD2GRD_GRDPOL_POSN                                0x5
#define _AAD2GRD_GRDPOL_POSITION                            0x5
#define _AAD2GRD_GRDPOL_SIZE                                0x1
#define _AAD2GRD_GRDPOL_LENGTH                              0x1
#define _AAD2GRD_GRDPOL_MASK                                0x20
#define _AAD2GRD_GRDAOE_POSN                                0x6
#define _AAD2GRD_GRDAOE_POSITION                            0x6
#define _AAD2GRD_GRDAOE_SIZE                                0x1
#define _AAD2GRD_GRDAOE_LENGTH                              0x1
#define _AAD2GRD_GRDAOE_MASK                                0x40
#define _AAD2GRD_GRDBOE_POSN                                0x7
#define _AAD2GRD_GRDBOE_POSITION                            0x7
#define _AAD2GRD_GRDBOE_SIZE                                0x1
#define _AAD2GRD_GRDBOE_LENGTH                              0x1
#define _AAD2GRD_GRDBOE_MASK                                0x80

// Register: AD2CAPCON
#define AD2CAPCON AD2CAPCON
extern volatile unsigned char           AD2CAPCON           __at(0x799);
#ifndef _LIB_BUILD
asm("AD2CAPCON equ 0799h");
#endif
// aliases
extern volatile unsigned char           AAD2CAP             __at(0x799);
#ifndef _LIB_BUILD
asm("AAD2CAP equ 0799h");
#endif
extern volatile unsigned char           AAD2CAPCON          __at(0x799);
#ifndef _LIB_BUILD
asm("AAD2CAPCON equ 0799h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD2CAP                :4;
    };
} AD2CAPCONbits_t;
extern volatile AD2CAPCONbits_t AD2CAPCONbits __at(0x799);
// bitfield macros
#define _AD2CAPCON_ADDCAP_POSN                              0x0
#define _AD2CAPCON_ADDCAP_POSITION                          0x0
#define _AD2CAPCON_ADDCAP_SIZE                              0x4
#define _AD2CAPCON_ADDCAP_LENGTH                            0x4
#define _AD2CAPCON_ADDCAP_MASK                              0xF
#define _AD2CAPCON_ADCAP_POSN                               0x0
#define _AD2CAPCON_ADCAP_POSITION                           0x0
#define _AD2CAPCON_ADCAP_SIZE                               0x4
#define _AD2CAPCON_ADCAP_LENGTH                             0x4
#define _AD2CAPCON_ADCAP_MASK                               0xF
#define _AD2CAPCON_ADDCAP0_POSN                             0x0
#define _AD2CAPCON_ADDCAP0_POSITION                         0x0
#define _AD2CAPCON_ADDCAP0_SIZE                             0x1
#define _AD2CAPCON_ADDCAP0_LENGTH                           0x1
#define _AD2CAPCON_ADDCAP0_MASK                             0x1
#define _AD2CAPCON_ADDCAP1_POSN                             0x1
#define _AD2CAPCON_ADDCAP1_POSITION                         0x1
#define _AD2CAPCON_ADDCAP1_SIZE                             0x1
#define _AD2CAPCON_ADDCAP1_LENGTH                           0x1
#define _AD2CAPCON_ADDCAP1_MASK                             0x2
#define _AD2CAPCON_ADDCAP2_POSN                             0x2
#define _AD2CAPCON_ADDCAP2_POSITION                         0x2
#define _AD2CAPCON_ADDCAP2_SIZE                             0x1
#define _AD2CAPCON_ADDCAP2_LENGTH                           0x1
#define _AD2CAPCON_ADDCAP2_MASK                             0x4
#define _AD2CAPCON_ADDCAP3_POSN                             0x3
#define _AD2CAPCON_ADDCAP3_POSITION                         0x3
#define _AD2CAPCON_ADDCAP3_SIZE                             0x1
#define _AD2CAPCON_ADDCAP3_LENGTH                           0x1
#define _AD2CAPCON_ADDCAP3_MASK                             0x8
#define _AD2CAPCON_ADD2CAP_POSN                             0x0
#define _AD2CAPCON_ADD2CAP_POSITION                         0x0
#define _AD2CAPCON_ADD2CAP_SIZE                             0x4
#define _AD2CAPCON_ADD2CAP_LENGTH                           0x4
#define _AD2CAPCON_ADD2CAP_MASK                             0xF
// alias bitfield definitions
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD2CAP                :4;
    };
} AAD2CAPbits_t;
extern volatile AAD2CAPbits_t AAD2CAPbits __at(0x799);
// bitfield macros
#define _AAD2CAP_ADDCAP_POSN                                0x0
#define _AAD2CAP_ADDCAP_POSITION                            0x0
#define _AAD2CAP_ADDCAP_SIZE                                0x4
#define _AAD2CAP_ADDCAP_LENGTH                              0x4
#define _AAD2CAP_ADDCAP_MASK                                0xF
#define _AAD2CAP_ADCAP_POSN                                 0x0
#define _AAD2CAP_ADCAP_POSITION                             0x0
#define _AAD2CAP_ADCAP_SIZE                                 0x4
#define _AAD2CAP_ADCAP_LENGTH                               0x4
#define _AAD2CAP_ADCAP_MASK                                 0xF
#define _AAD2CAP_ADDCAP0_POSN                               0x0
#define _AAD2CAP_ADDCAP0_POSITION                           0x0
#define _AAD2CAP_ADDCAP0_SIZE                               0x1
#define _AAD2CAP_ADDCAP0_LENGTH                             0x1
#define _AAD2CAP_ADDCAP0_MASK                               0x1
#define _AAD2CAP_ADDCAP1_POSN                               0x1
#define _AAD2CAP_ADDCAP1_POSITION                           0x1
#define _AAD2CAP_ADDCAP1_SIZE                               0x1
#define _AAD2CAP_ADDCAP1_LENGTH                             0x1
#define _AAD2CAP_ADDCAP1_MASK                               0x2
#define _AAD2CAP_ADDCAP2_POSN                               0x2
#define _AAD2CAP_ADDCAP2_POSITION                           0x2
#define _AAD2CAP_ADDCAP2_SIZE                               0x1
#define _AAD2CAP_ADDCAP2_LENGTH                             0x1
#define _AAD2CAP_ADDCAP2_MASK                               0x4
#define _AAD2CAP_ADDCAP3_POSN                               0x3
#define _AAD2CAP_ADDCAP3_POSITION                           0x3
#define _AAD2CAP_ADDCAP3_SIZE                               0x1
#define _AAD2CAP_ADDCAP3_LENGTH                             0x1
#define _AAD2CAP_ADDCAP3_MASK                               0x8
#define _AAD2CAP_ADD2CAP_POSN                               0x0
#define _AAD2CAP_ADD2CAP_POSITION                           0x0
#define _AAD2CAP_ADD2CAP_SIZE                               0x4
#define _AAD2CAP_ADD2CAP_LENGTH                             0x4
#define _AAD2CAP_ADD2CAP_MASK                               0xF
typedef union {
    struct {
        unsigned ADDCAP                 :4;
    };
    struct {
        unsigned ADCAP                  :4;
    };
    struct {
        unsigned ADDCAP0                :1;
        unsigned ADDCAP1                :1;
        unsigned ADDCAP2                :1;
        unsigned ADDCAP3                :1;
    };
    struct {
        unsigned ADD2CAP                :4;
    };
} AAD2CAPCONbits_t;
extern volatile AAD2CAPCONbits_t AAD2CAPCONbits __at(0x799);
// bitfield macros
#define _AAD2CAPCON_ADDCAP_POSN                             0x0
#define _AAD2CAPCON_ADDCAP_POSITION                         0x0
#define _AAD2CAPCON_ADDCAP_SIZE                             0x4
#define _AAD2CAPCON_ADDCAP_LENGTH                           0x4
#define _AAD2CAPCON_ADDCAP_MASK                             0xF
#define _AAD2CAPCON_ADCAP_POSN                              0x0
#define _AAD2CAPCON_ADCAP_POSITION                          0x0
#define _AAD2CAPCON_ADCAP_SIZE                              0x4
#define _AAD2CAPCON_ADCAP_LENGTH                            0x4
#define _AAD2CAPCON_ADCAP_MASK                              0xF
#define _AAD2CAPCON_ADDCAP0_POSN                            0x0
#define _AAD2CAPCON_ADDCAP0_POSITION                        0x0
#define _AAD2CAPCON_ADDCAP0_SIZE                            0x1
#define _AAD2CAPCON_ADDCAP0_LENGTH                          0x1
#define _AAD2CAPCON_ADDCAP0_MASK                            0x1
#define _AAD2CAPCON_ADDCAP1_POSN                            0x1
#define _AAD2CAPCON_ADDCAP1_POSITION                        0x1
#define _AAD2CAPCON_ADDCAP1_SIZE                            0x1
#define _AAD2CAPCON_ADDCAP1_LENGTH                          0x1
#define _AAD2CAPCON_ADDCAP1_MASK                            0x2
#define _AAD2CAPCON_ADDCAP2_POSN                            0x2
#define _AAD2CAPCON_ADDCAP2_POSITION                        0x2
#define _AAD2CAPCON_ADDCAP2_SIZE                            0x1
#define _AAD2CAPCON_ADDCAP2_LENGTH                          0x1
#define _AAD2CAPCON_ADDCAP2_MASK                            0x4
#define _AAD2CAPCON_ADDCAP3_POSN                            0x3
#define _AAD2CAPCON_ADDCAP3_POSITION                        0x3
#define _AAD2CAPCON_ADDCAP3_SIZE                            0x1
#define _AAD2CAPCON_ADDCAP3_LENGTH                          0x1
#define _AAD2CAPCON_ADDCAP3_MASK                            0x8
#define _AAD2CAPCON_ADD2CAP_POSN                            0x0
#define _AAD2CAPCON_ADD2CAP_POSITION                        0x0
#define _AAD2CAPCON_ADD2CAP_SIZE                            0x4
#define _AAD2CAPCON_ADD2CAP_LENGTH                          0x4
#define _AAD2CAPCON_ADD2CAP_MASK                            0xF

// Register: AAD2RES0
#define AAD2RES0 AAD2RES0
extern volatile unsigned short          AAD2RES0            __at(0x79A);
#ifndef _LIB_BUILD
asm("AAD2RES0 equ 079Ah");
#endif
// aliases
extern volatile unsigned short          AD2RES0             __at(0x79A);
#ifndef _LIB_BUILD
asm("AD2RES0 equ 079Ah");
#endif

// Register: AAD2RES0L
#define AAD2RES0L AAD2RES0L
extern volatile unsigned char           AAD2RES0L           __at(0x79A);
#ifndef _LIB_BUILD
asm("AAD2RES0L equ 079Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} AAD2RES0Lbits_t;
extern volatile AAD2RES0Lbits_t AAD2RES0Lbits __at(0x79A);
// bitfield macros
#define _AAD2RES0L_ADRESL_POSN                              0x0
#define _AAD2RES0L_ADRESL_POSITION                          0x0
#define _AAD2RES0L_ADRESL_SIZE                              0x8
#define _AAD2RES0L_ADRESL_LENGTH                            0x8
#define _AAD2RES0L_ADRESL_MASK                              0xFF

// Register: AAD2RES0H
#define AAD2RES0H AAD2RES0H
extern volatile unsigned char           AAD2RES0H           __at(0x79B);
#ifndef _LIB_BUILD
asm("AAD2RES0H equ 079Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} AAD2RES0Hbits_t;
extern volatile AAD2RES0Hbits_t AAD2RES0Hbits __at(0x79B);
// bitfield macros
#define _AAD2RES0H_ADRESH_POSN                              0x0
#define _AAD2RES0H_ADRESH_POSITION                          0x0
#define _AAD2RES0H_ADRESH_SIZE                              0x8
#define _AAD2RES0H_ADRESH_LENGTH                            0x8
#define _AAD2RES0H_ADRESH_MASK                              0xFF

// Register: AAD2RES1
#define AAD2RES1 AAD2RES1
extern volatile unsigned short          AAD2RES1            __at(0x79C);
#ifndef _LIB_BUILD
asm("AAD2RES1 equ 079Ch");
#endif
// aliases
extern volatile unsigned short          AD2RES1             __at(0x79C);
#ifndef _LIB_BUILD
asm("AD2RES1 equ 079Ch");
#endif

// Register: AAD2RES1L
#define AAD2RES1L AAD2RES1L
extern volatile unsigned char           AAD2RES1L           __at(0x79C);
#ifndef _LIB_BUILD
asm("AAD2RES1L equ 079Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} AAD2RES1Lbits_t;
extern volatile AAD2RES1Lbits_t AAD2RES1Lbits __at(0x79C);
// bitfield macros
#define _AAD2RES1L_ADRESL_POSN                              0x0
#define _AAD2RES1L_ADRESL_POSITION                          0x0
#define _AAD2RES1L_ADRESL_SIZE                              0x8
#define _AAD2RES1L_ADRESL_LENGTH                            0x8
#define _AAD2RES1L_ADRESL_MASK                              0xFF

// Register: AAD2RES1H
#define AAD2RES1H AAD2RES1H
extern volatile unsigned char           AAD2RES1H           __at(0x79D);
#ifndef _LIB_BUILD
asm("AAD2RES1H equ 079Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} AAD2RES1Hbits_t;
extern volatile AAD2RES1Hbits_t AAD2RES1Hbits __at(0x79D);
// bitfield macros
#define _AAD2RES1H_ADRESH_POSN                              0x0
#define _AAD2RES1H_ADRESH_POSITION                          0x0
#define _AAD2RES1H_ADRESH_SIZE                              0x8
#define _AAD2RES1H_ADRESH_LENGTH                            0x8
#define _AAD2RES1H_ADRESH_MASK                              0xFF

// Register: AD2CH
#define AD2CH AD2CH
extern volatile unsigned short          AD2CH               __at(0x79E);
#ifndef _LIB_BUILD
asm("AD2CH equ 079Eh");
#endif
// aliases
extern volatile unsigned short          AAD2CH              __at(0x79E);
#ifndef _LIB_BUILD
asm("AAD2CH equ 079Eh");
#endif

// Register: AD2CH0
#define AD2CH0 AD2CH0
extern volatile unsigned char           AD2CH0              __at(0x79E);
#ifndef _LIB_BUILD
asm("AD2CH0 equ 079Eh");
#endif
// aliases
extern volatile unsigned char           AAD2CH0             __at(0x79E);
#ifndef _LIB_BUILD
asm("AAD2CH0 equ 079Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CH20                   :1;
        unsigned CH21                   :1;
        unsigned CH22                   :1;
        unsigned CH23                   :1;
        unsigned CH24                   :1;
        unsigned CH25                   :1;
        unsigned CH26                   :1;
        unsigned CH27                   :1;
    };
} AD2CH0bits_t;
extern volatile AD2CH0bits_t AD2CH0bits __at(0x79E);
// bitfield macros
#define _AD2CH0_CH20_POSN                                   0x0
#define _AD2CH0_CH20_POSITION                               0x0
#define _AD2CH0_CH20_SIZE                                   0x1
#define _AD2CH0_CH20_LENGTH                                 0x1
#define _AD2CH0_CH20_MASK                                   0x1
#define _AD2CH0_CH21_POSN                                   0x1
#define _AD2CH0_CH21_POSITION                               0x1
#define _AD2CH0_CH21_SIZE                                   0x1
#define _AD2CH0_CH21_LENGTH                                 0x1
#define _AD2CH0_CH21_MASK                                   0x2
#define _AD2CH0_CH22_POSN                                   0x2
#define _AD2CH0_CH22_POSITION                               0x2
#define _AD2CH0_CH22_SIZE                                   0x1
#define _AD2CH0_CH22_LENGTH                                 0x1
#define _AD2CH0_CH22_MASK                                   0x4
#define _AD2CH0_CH23_POSN                                   0x3
#define _AD2CH0_CH23_POSITION                               0x3
#define _AD2CH0_CH23_SIZE                                   0x1
#define _AD2CH0_CH23_LENGTH                                 0x1
#define _AD2CH0_CH23_MASK                                   0x8
#define _AD2CH0_CH24_POSN                                   0x4
#define _AD2CH0_CH24_POSITION                               0x4
#define _AD2CH0_CH24_SIZE                                   0x1
#define _AD2CH0_CH24_LENGTH                                 0x1
#define _AD2CH0_CH24_MASK                                   0x10
#define _AD2CH0_CH25_POSN                                   0x5
#define _AD2CH0_CH25_POSITION                               0x5
#define _AD2CH0_CH25_SIZE                                   0x1
#define _AD2CH0_CH25_LENGTH                                 0x1
#define _AD2CH0_CH25_MASK                                   0x20
#define _AD2CH0_CH26_POSN                                   0x6
#define _AD2CH0_CH26_POSITION                               0x6
#define _AD2CH0_CH26_SIZE                                   0x1
#define _AD2CH0_CH26_LENGTH                                 0x1
#define _AD2CH0_CH26_MASK                                   0x40
#define _AD2CH0_CH27_POSN                                   0x7
#define _AD2CH0_CH27_POSITION                               0x7
#define _AD2CH0_CH27_SIZE                                   0x1
#define _AD2CH0_CH27_LENGTH                                 0x1
#define _AD2CH0_CH27_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CH20                   :1;
        unsigned CH21                   :1;
        unsigned CH22                   :1;
        unsigned CH23                   :1;
        unsigned CH24                   :1;
        unsigned CH25                   :1;
        unsigned CH26                   :1;
        unsigned CH27                   :1;
    };
} AAD2CH0bits_t;
extern volatile AAD2CH0bits_t AAD2CH0bits __at(0x79E);
// bitfield macros
#define _AAD2CH0_CH20_POSN                                  0x0
#define _AAD2CH0_CH20_POSITION                              0x0
#define _AAD2CH0_CH20_SIZE                                  0x1
#define _AAD2CH0_CH20_LENGTH                                0x1
#define _AAD2CH0_CH20_MASK                                  0x1
#define _AAD2CH0_CH21_POSN                                  0x1
#define _AAD2CH0_CH21_POSITION                              0x1
#define _AAD2CH0_CH21_SIZE                                  0x1
#define _AAD2CH0_CH21_LENGTH                                0x1
#define _AAD2CH0_CH21_MASK                                  0x2
#define _AAD2CH0_CH22_POSN                                  0x2
#define _AAD2CH0_CH22_POSITION                              0x2
#define _AAD2CH0_CH22_SIZE                                  0x1
#define _AAD2CH0_CH22_LENGTH                                0x1
#define _AAD2CH0_CH22_MASK                                  0x4
#define _AAD2CH0_CH23_POSN                                  0x3
#define _AAD2CH0_CH23_POSITION                              0x3
#define _AAD2CH0_CH23_SIZE                                  0x1
#define _AAD2CH0_CH23_LENGTH                                0x1
#define _AAD2CH0_CH23_MASK                                  0x8
#define _AAD2CH0_CH24_POSN                                  0x4
#define _AAD2CH0_CH24_POSITION                              0x4
#define _AAD2CH0_CH24_SIZE                                  0x1
#define _AAD2CH0_CH24_LENGTH                                0x1
#define _AAD2CH0_CH24_MASK                                  0x10
#define _AAD2CH0_CH25_POSN                                  0x5
#define _AAD2CH0_CH25_POSITION                              0x5
#define _AAD2CH0_CH25_SIZE                                  0x1
#define _AAD2CH0_CH25_LENGTH                                0x1
#define _AAD2CH0_CH25_MASK                                  0x20
#define _AAD2CH0_CH26_POSN                                  0x6
#define _AAD2CH0_CH26_POSITION                              0x6
#define _AAD2CH0_CH26_SIZE                                  0x1
#define _AAD2CH0_CH26_LENGTH                                0x1
#define _AAD2CH0_CH26_MASK                                  0x40
#define _AAD2CH0_CH27_POSN                                  0x7
#define _AAD2CH0_CH27_POSITION                              0x7
#define _AAD2CH0_CH27_SIZE                                  0x1
#define _AAD2CH0_CH27_LENGTH                                0x1
#define _AAD2CH0_CH27_MASK                                  0x80

// Register: AD2CH1
#define AD2CH1 AD2CH1
extern volatile unsigned char           AD2CH1              __at(0x79F);
#ifndef _LIB_BUILD
asm("AD2CH1 equ 079Fh");
#endif
// aliases
extern volatile unsigned char           AAD2CH1             __at(0x79F);
#ifndef _LIB_BUILD
asm("AAD2CH1 equ 079Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CH28                   :1;
        unsigned CH29                   :1;
        unsigned CH40                   :1;
        unsigned CH41                   :1;
        unsigned CH42                   :1;
        unsigned CH43                   :1;
        unsigned CH44                   :1;
        unsigned CH45                   :1;
    };
} AD2CH1bits_t;
extern volatile AD2CH1bits_t AD2CH1bits __at(0x79F);
// bitfield macros
#define _AD2CH1_CH28_POSN                                   0x0
#define _AD2CH1_CH28_POSITION                               0x0
#define _AD2CH1_CH28_SIZE                                   0x1
#define _AD2CH1_CH28_LENGTH                                 0x1
#define _AD2CH1_CH28_MASK                                   0x1
#define _AD2CH1_CH29_POSN                                   0x1
#define _AD2CH1_CH29_POSITION                               0x1
#define _AD2CH1_CH29_SIZE                                   0x1
#define _AD2CH1_CH29_LENGTH                                 0x1
#define _AD2CH1_CH29_MASK                                   0x2
#define _AD2CH1_CH40_POSN                                   0x2
#define _AD2CH1_CH40_POSITION                               0x2
#define _AD2CH1_CH40_SIZE                                   0x1
#define _AD2CH1_CH40_LENGTH                                 0x1
#define _AD2CH1_CH40_MASK                                   0x4
#define _AD2CH1_CH41_POSN                                   0x3
#define _AD2CH1_CH41_POSITION                               0x3
#define _AD2CH1_CH41_SIZE                                   0x1
#define _AD2CH1_CH41_LENGTH                                 0x1
#define _AD2CH1_CH41_MASK                                   0x8
#define _AD2CH1_CH42_POSN                                   0x4
#define _AD2CH1_CH42_POSITION                               0x4
#define _AD2CH1_CH42_SIZE                                   0x1
#define _AD2CH1_CH42_LENGTH                                 0x1
#define _AD2CH1_CH42_MASK                                   0x10
#define _AD2CH1_CH43_POSN                                   0x5
#define _AD2CH1_CH43_POSITION                               0x5
#define _AD2CH1_CH43_SIZE                                   0x1
#define _AD2CH1_CH43_LENGTH                                 0x1
#define _AD2CH1_CH43_MASK                                   0x20
#define _AD2CH1_CH44_POSN                                   0x6
#define _AD2CH1_CH44_POSITION                               0x6
#define _AD2CH1_CH44_SIZE                                   0x1
#define _AD2CH1_CH44_LENGTH                                 0x1
#define _AD2CH1_CH44_MASK                                   0x40
#define _AD2CH1_CH45_POSN                                   0x7
#define _AD2CH1_CH45_POSITION                               0x7
#define _AD2CH1_CH45_SIZE                                   0x1
#define _AD2CH1_CH45_LENGTH                                 0x1
#define _AD2CH1_CH45_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CH28                   :1;
        unsigned CH29                   :1;
        unsigned CH40                   :1;
        unsigned CH41                   :1;
        unsigned CH42                   :1;
        unsigned CH43                   :1;
        unsigned CH44                   :1;
        unsigned CH45                   :1;
    };
} AAD2CH1bits_t;
extern volatile AAD2CH1bits_t AAD2CH1bits __at(0x79F);
// bitfield macros
#define _AAD2CH1_CH28_POSN                                  0x0
#define _AAD2CH1_CH28_POSITION                              0x0
#define _AAD2CH1_CH28_SIZE                                  0x1
#define _AAD2CH1_CH28_LENGTH                                0x1
#define _AAD2CH1_CH28_MASK                                  0x1
#define _AAD2CH1_CH29_POSN                                  0x1
#define _AAD2CH1_CH29_POSITION                              0x1
#define _AAD2CH1_CH29_SIZE                                  0x1
#define _AAD2CH1_CH29_LENGTH                                0x1
#define _AAD2CH1_CH29_MASK                                  0x2
#define _AAD2CH1_CH40_POSN                                  0x2
#define _AAD2CH1_CH40_POSITION                              0x2
#define _AAD2CH1_CH40_SIZE                                  0x1
#define _AAD2CH1_CH40_LENGTH                                0x1
#define _AAD2CH1_CH40_MASK                                  0x4
#define _AAD2CH1_CH41_POSN                                  0x3
#define _AAD2CH1_CH41_POSITION                              0x3
#define _AAD2CH1_CH41_SIZE                                  0x1
#define _AAD2CH1_CH41_LENGTH                                0x1
#define _AAD2CH1_CH41_MASK                                  0x8
#define _AAD2CH1_CH42_POSN                                  0x4
#define _AAD2CH1_CH42_POSITION                              0x4
#define _AAD2CH1_CH42_SIZE                                  0x1
#define _AAD2CH1_CH42_LENGTH                                0x1
#define _AAD2CH1_CH42_MASK                                  0x10
#define _AAD2CH1_CH43_POSN                                  0x5
#define _AAD2CH1_CH43_POSITION                              0x5
#define _AAD2CH1_CH43_SIZE                                  0x1
#define _AAD2CH1_CH43_LENGTH                                0x1
#define _AAD2CH1_CH43_MASK                                  0x20
#define _AAD2CH1_CH44_POSN                                  0x6
#define _AAD2CH1_CH44_POSITION                              0x6
#define _AAD2CH1_CH44_SIZE                                  0x1
#define _AAD2CH1_CH44_LENGTH                                0x1
#define _AAD2CH1_CH44_MASK                                  0x40
#define _AAD2CH1_CH45_POSN                                  0x7
#define _AAD2CH1_CH45_POSITION                              0x7
#define _AAD2CH1_CH45_SIZE                                  0x1
#define _AAD2CH1_CH45_LENGTH                                0x1
#define _AAD2CH1_CH45_MASK                                  0x80

// Register: ICDIO
#define ICDIO ICDIO
extern volatile unsigned char           ICDIO               __at(0xF8C);
#ifndef _LIB_BUILD
asm("ICDIO equ 0F8Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned TRIS_ICDCLK            :1;
        unsigned TRIS_ICDDAT            :1;
        unsigned LAT_ICDCLK             :1;
        unsigned LAT_ICDDAT             :1;
        unsigned PORT_ICDCLK            :1;
        unsigned PORT_ICDDAT            :1;
    };
} ICDIObits_t;
extern volatile ICDIObits_t ICDIObits __at(0xF8C);
// bitfield macros
#define _ICDIO_TRIS_ICDCLK_POSN                             0x2
#define _ICDIO_TRIS_ICDCLK_POSITION                         0x2
#define _ICDIO_TRIS_ICDCLK_SIZE                             0x1
#define _ICDIO_TRIS_ICDCLK_LENGTH                           0x1
#define _ICDIO_TRIS_ICDCLK_MASK                             0x4
#define _ICDIO_TRIS_ICDDAT_POSN                             0x3
#define _ICDIO_TRIS_ICDDAT_POSITION                         0x3
#define _ICDIO_TRIS_ICDDAT_SIZE                             0x1
#define _ICDIO_TRIS_ICDDAT_LENGTH                           0x1
#define _ICDIO_TRIS_ICDDAT_MASK                             0x8
#define _ICDIO_LAT_ICDCLK_POSN                              0x4
#define _ICDIO_LAT_ICDCLK_POSITION                          0x4
#define _ICDIO_LAT_ICDCLK_SIZE                              0x1
#define _ICDIO_LAT_ICDCLK_LENGTH                            0x1
#define _ICDIO_LAT_ICDCLK_MASK                              0x10
#define _ICDIO_LAT_ICDDAT_POSN                              0x5
#define _ICDIO_LAT_ICDDAT_POSITION                          0x5
#define _ICDIO_LAT_ICDDAT_SIZE                              0x1
#define _ICDIO_LAT_ICDDAT_LENGTH                            0x1
#define _ICDIO_LAT_ICDDAT_MASK                              0x20
#define _ICDIO_PORT_ICDCLK_POSN                             0x6
#define _ICDIO_PORT_ICDCLK_POSITION                         0x6
#define _ICDIO_PORT_ICDCLK_SIZE                             0x1
#define _ICDIO_PORT_ICDCLK_LENGTH                           0x1
#define _ICDIO_PORT_ICDCLK_MASK                             0x40
#define _ICDIO_PORT_ICDDAT_POSN                             0x7
#define _ICDIO_PORT_ICDDAT_POSITION                         0x7
#define _ICDIO_PORT_ICDDAT_SIZE                             0x1
#define _ICDIO_PORT_ICDDAT_LENGTH                           0x1
#define _ICDIO_PORT_ICDDAT_MASK                             0x80

// Register: ICDCON0
#define ICDCON0 ICDCON0
extern volatile unsigned char           ICDCON0             __at(0xF8D);
#ifndef _LIB_BUILD
asm("ICDCON0 equ 0F8Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RSTVEC                 :1;
        unsigned                        :2;
        unsigned DBGINEX                :1;
        unsigned                        :1;
        unsigned SSTEP                  :1;
        unsigned FREEZ                  :1;
        unsigned INBUG                  :1;
    };
} ICDCON0bits_t;
extern volatile ICDCON0bits_t ICDCON0bits __at(0xF8D);
// bitfield macros
#define _ICDCON0_RSTVEC_POSN                                0x0
#define _ICDCON0_RSTVEC_POSITION                            0x0
#define _ICDCON0_RSTVEC_SIZE                                0x1
#define _ICDCON0_RSTVEC_LENGTH                              0x1
#define _ICDCON0_RSTVEC_MASK                                0x1
#define _ICDCON0_DBGINEX_POSN                               0x3
#define _ICDCON0_DBGINEX_POSITION                           0x3
#define _ICDCON0_DBGINEX_SIZE                               0x1
#define _ICDCON0_DBGINEX_LENGTH                             0x1
#define _ICDCON0_DBGINEX_MASK                               0x8
#define _ICDCON0_SSTEP_POSN                                 0x5
#define _ICDCON0_SSTEP_POSITION                             0x5
#define _ICDCON0_SSTEP_SIZE                                 0x1
#define _ICDCON0_SSTEP_LENGTH                               0x1
#define _ICDCON0_SSTEP_MASK                                 0x20
#define _ICDCON0_FREEZ_POSN                                 0x6
#define _ICDCON0_FREEZ_POSITION                             0x6
#define _ICDCON0_FREEZ_SIZE                                 0x1
#define _ICDCON0_FREEZ_LENGTH                               0x1
#define _ICDCON0_FREEZ_MASK                                 0x40
#define _ICDCON0_INBUG_POSN                                 0x7
#define _ICDCON0_INBUG_POSITION                             0x7
#define _ICDCON0_INBUG_SIZE                                 0x1
#define _ICDCON0_INBUG_LENGTH                               0x1
#define _ICDCON0_INBUG_MASK                                 0x80

// Register: ICDSTAT
#define ICDSTAT ICDSTAT
extern volatile unsigned char           ICDSTAT             __at(0xF91);
#ifndef _LIB_BUILD
asm("ICDSTAT equ 0F91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned USRHLTF                :1;
        unsigned                        :4;
        unsigned TRP0HLTF               :1;
        unsigned TRP1HLTF               :1;
    };
} ICDSTATbits_t;
extern volatile ICDSTATbits_t ICDSTATbits __at(0xF91);
// bitfield macros
#define _ICDSTAT_USRHLTF_POSN                               0x1
#define _ICDSTAT_USRHLTF_POSITION                           0x1
#define _ICDSTAT_USRHLTF_SIZE                               0x1
#define _ICDSTAT_USRHLTF_LENGTH                             0x1
#define _ICDSTAT_USRHLTF_MASK                               0x2
#define _ICDSTAT_TRP0HLTF_POSN                              0x6
#define _ICDSTAT_TRP0HLTF_POSITION                          0x6
#define _ICDSTAT_TRP0HLTF_SIZE                              0x1
#define _ICDSTAT_TRP0HLTF_LENGTH                            0x1
#define _ICDSTAT_TRP0HLTF_MASK                              0x40
#define _ICDSTAT_TRP1HLTF_POSN                              0x7
#define _ICDSTAT_TRP1HLTF_POSITION                          0x7
#define _ICDSTAT_TRP1HLTF_SIZE                              0x1
#define _ICDSTAT_TRP1HLTF_LENGTH                            0x1
#define _ICDSTAT_TRP1HLTF_MASK                              0x80

// Register: ICDINSTL
#define ICDINSTL ICDINSTL
extern volatile unsigned char           ICDINSTL            __at(0xF96);
#ifndef _LIB_BUILD
asm("ICDINSTL equ 0F96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DBGIN0                 :1;
        unsigned DBGIN1                 :1;
        unsigned DBGIN2                 :1;
        unsigned DBGIN3                 :1;
        unsigned DBGIN4                 :1;
        unsigned DBGIN5                 :1;
        unsigned DBGIN6                 :1;
        unsigned DBGIN7                 :1;
    };
} ICDINSTLbits_t;
extern volatile ICDINSTLbits_t ICDINSTLbits __at(0xF96);
// bitfield macros
#define _ICDINSTL_DBGIN0_POSN                               0x0
#define _ICDINSTL_DBGIN0_POSITION                           0x0
#define _ICDINSTL_DBGIN0_SIZE                               0x1
#define _ICDINSTL_DBGIN0_LENGTH                             0x1
#define _ICDINSTL_DBGIN0_MASK                               0x1
#define _ICDINSTL_DBGIN1_POSN                               0x1
#define _ICDINSTL_DBGIN1_POSITION                           0x1
#define _ICDINSTL_DBGIN1_SIZE                               0x1
#define _ICDINSTL_DBGIN1_LENGTH                             0x1
#define _ICDINSTL_DBGIN1_MASK                               0x2
#define _ICDINSTL_DBGIN2_POSN                               0x2
#define _ICDINSTL_DBGIN2_POSITION                           0x2
#define _ICDINSTL_DBGIN2_SIZE                               0x1
#define _ICDINSTL_DBGIN2_LENGTH                             0x1
#define _ICDINSTL_DBGIN2_MASK                               0x4
#define _ICDINSTL_DBGIN3_POSN                               0x3
#define _ICDINSTL_DBGIN3_POSITION                           0x3
#define _ICDINSTL_DBGIN3_SIZE                               0x1
#define _ICDINSTL_DBGIN3_LENGTH                             0x1
#define _ICDINSTL_DBGIN3_MASK                               0x8
#define _ICDINSTL_DBGIN4_POSN                               0x4
#define _ICDINSTL_DBGIN4_POSITION                           0x4
#define _ICDINSTL_DBGIN4_SIZE                               0x1
#define _ICDINSTL_DBGIN4_LENGTH                             0x1
#define _ICDINSTL_DBGIN4_MASK                               0x10
#define _ICDINSTL_DBGIN5_POSN                               0x5
#define _ICDINSTL_DBGIN5_POSITION                           0x5
#define _ICDINSTL_DBGIN5_SIZE                               0x1
#define _ICDINSTL_DBGIN5_LENGTH                             0x1
#define _ICDINSTL_DBGIN5_MASK                               0x20
#define _ICDINSTL_DBGIN6_POSN                               0x6
#define _ICDINSTL_DBGIN6_POSITION                           0x6
#define _ICDINSTL_DBGIN6_SIZE                               0x1
#define _ICDINSTL_DBGIN6_LENGTH                             0x1
#define _ICDINSTL_DBGIN6_MASK                               0x40
#define _ICDINSTL_DBGIN7_POSN                               0x7
#define _ICDINSTL_DBGIN7_POSITION                           0x7
#define _ICDINSTL_DBGIN7_SIZE                               0x1
#define _ICDINSTL_DBGIN7_LENGTH                             0x1
#define _ICDINSTL_DBGIN7_MASK                               0x80

// Register: ICDINSTH
#define ICDINSTH ICDINSTH
extern volatile unsigned char           ICDINSTH            __at(0xF97);
#ifndef _LIB_BUILD
asm("ICDINSTH equ 0F97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DBGIN8                 :1;
        unsigned DBGIN9                 :1;
        unsigned DBGIN10                :1;
        unsigned DBGIN11                :1;
        unsigned DBGIN12                :1;
        unsigned DBGIN13                :1;
    };
} ICDINSTHbits_t;
extern volatile ICDINSTHbits_t ICDINSTHbits __at(0xF97);
// bitfield macros
#define _ICDINSTH_DBGIN8_POSN                               0x0
#define _ICDINSTH_DBGIN8_POSITION                           0x0
#define _ICDINSTH_DBGIN8_SIZE                               0x1
#define _ICDINSTH_DBGIN8_LENGTH                             0x1
#define _ICDINSTH_DBGIN8_MASK                               0x1
#define _ICDINSTH_DBGIN9_POSN                               0x1
#define _ICDINSTH_DBGIN9_POSITION                           0x1
#define _ICDINSTH_DBGIN9_SIZE                               0x1
#define _ICDINSTH_DBGIN9_LENGTH                             0x1
#define _ICDINSTH_DBGIN9_MASK                               0x2
#define _ICDINSTH_DBGIN10_POSN                              0x2
#define _ICDINSTH_DBGIN10_POSITION                          0x2
#define _ICDINSTH_DBGIN10_SIZE                              0x1
#define _ICDINSTH_DBGIN10_LENGTH                            0x1
#define _ICDINSTH_DBGIN10_MASK                              0x4
#define _ICDINSTH_DBGIN11_POSN                              0x3
#define _ICDINSTH_DBGIN11_POSITION                          0x3
#define _ICDINSTH_DBGIN11_SIZE                              0x1
#define _ICDINSTH_DBGIN11_LENGTH                            0x1
#define _ICDINSTH_DBGIN11_MASK                              0x8
#define _ICDINSTH_DBGIN12_POSN                              0x4
#define _ICDINSTH_DBGIN12_POSITION                          0x4
#define _ICDINSTH_DBGIN12_SIZE                              0x1
#define _ICDINSTH_DBGIN12_LENGTH                            0x1
#define _ICDINSTH_DBGIN12_MASK                              0x10
#define _ICDINSTH_DBGIN13_POSN                              0x5
#define _ICDINSTH_DBGIN13_POSITION                          0x5
#define _ICDINSTH_DBGIN13_SIZE                              0x1
#define _ICDINSTH_DBGIN13_LENGTH                            0x1
#define _ICDINSTH_DBGIN13_MASK                              0x20

// Register: ICDBK0CON
#define ICDBK0CON ICDBK0CON
extern volatile unsigned char           ICDBK0CON           __at(0xF9C);
#ifndef _LIB_BUILD
asm("ICDBK0CON equ 0F9Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BKHLT                  :1;
        unsigned                        :6;
        unsigned BKEN                   :1;
    };
} ICDBK0CONbits_t;
extern volatile ICDBK0CONbits_t ICDBK0CONbits __at(0xF9C);
// bitfield macros
#define _ICDBK0CON_BKHLT_POSN                               0x0
#define _ICDBK0CON_BKHLT_POSITION                           0x0
#define _ICDBK0CON_BKHLT_SIZE                               0x1
#define _ICDBK0CON_BKHLT_LENGTH                             0x1
#define _ICDBK0CON_BKHLT_MASK                               0x1
#define _ICDBK0CON_BKEN_POSN                                0x7
#define _ICDBK0CON_BKEN_POSITION                            0x7
#define _ICDBK0CON_BKEN_SIZE                                0x1
#define _ICDBK0CON_BKEN_LENGTH                              0x1
#define _ICDBK0CON_BKEN_MASK                                0x80

// Register: ICDBK0L
#define ICDBK0L ICDBK0L
extern volatile unsigned char           ICDBK0L             __at(0xF9D);
#ifndef _LIB_BUILD
asm("ICDBK0L equ 0F9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BKA0                   :1;
        unsigned BKA1                   :1;
        unsigned BKA2                   :1;
        unsigned BKA3                   :1;
        unsigned BKA4                   :1;
        unsigned BKA5                   :1;
        unsigned BKA6                   :1;
        unsigned BKA7                   :1;
    };
} ICDBK0Lbits_t;
extern volatile ICDBK0Lbits_t ICDBK0Lbits __at(0xF9D);
// bitfield macros
#define _ICDBK0L_BKA0_POSN                                  0x0
#define _ICDBK0L_BKA0_POSITION                              0x0
#define _ICDBK0L_BKA0_SIZE                                  0x1
#define _ICDBK0L_BKA0_LENGTH                                0x1
#define _ICDBK0L_BKA0_MASK                                  0x1
#define _ICDBK0L_BKA1_POSN                                  0x1
#define _ICDBK0L_BKA1_POSITION                              0x1
#define _ICDBK0L_BKA1_SIZE                                  0x1
#define _ICDBK0L_BKA1_LENGTH                                0x1
#define _ICDBK0L_BKA1_MASK                                  0x2
#define _ICDBK0L_BKA2_POSN                                  0x2
#define _ICDBK0L_BKA2_POSITION                              0x2
#define _ICDBK0L_BKA2_SIZE                                  0x1
#define _ICDBK0L_BKA2_LENGTH                                0x1
#define _ICDBK0L_BKA2_MASK                                  0x4
#define _ICDBK0L_BKA3_POSN                                  0x3
#define _ICDBK0L_BKA3_POSITION                              0x3
#define _ICDBK0L_BKA3_SIZE                                  0x1
#define _ICDBK0L_BKA3_LENGTH                                0x1
#define _ICDBK0L_BKA3_MASK                                  0x8
#define _ICDBK0L_BKA4_POSN                                  0x4
#define _ICDBK0L_BKA4_POSITION                              0x4
#define _ICDBK0L_BKA4_SIZE                                  0x1
#define _ICDBK0L_BKA4_LENGTH                                0x1
#define _ICDBK0L_BKA4_MASK                                  0x10
#define _ICDBK0L_BKA5_POSN                                  0x5
#define _ICDBK0L_BKA5_POSITION                              0x5
#define _ICDBK0L_BKA5_SIZE                                  0x1
#define _ICDBK0L_BKA5_LENGTH                                0x1
#define _ICDBK0L_BKA5_MASK                                  0x20
#define _ICDBK0L_BKA6_POSN                                  0x6
#define _ICDBK0L_BKA6_POSITION                              0x6
#define _ICDBK0L_BKA6_SIZE                                  0x1
#define _ICDBK0L_BKA6_LENGTH                                0x1
#define _ICDBK0L_BKA6_MASK                                  0x40
#define _ICDBK0L_BKA7_POSN                                  0x7
#define _ICDBK0L_BKA7_POSITION                              0x7
#define _ICDBK0L_BKA7_SIZE                                  0x1
#define _ICDBK0L_BKA7_LENGTH                                0x1
#define _ICDBK0L_BKA7_MASK                                  0x80

// Register: ICDBK0H
#define ICDBK0H ICDBK0H
extern volatile unsigned char           ICDBK0H             __at(0xF9E);
#ifndef _LIB_BUILD
asm("ICDBK0H equ 0F9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BKA8                   :1;
        unsigned BKA9                   :1;
        unsigned BKA10                  :1;
        unsigned BKA11                  :1;
        unsigned BKA12                  :1;
        unsigned BKA13                  :1;
        unsigned BKA14                  :1;
    };
} ICDBK0Hbits_t;
extern volatile ICDBK0Hbits_t ICDBK0Hbits __at(0xF9E);
// bitfield macros
#define _ICDBK0H_BKA8_POSN                                  0x0
#define _ICDBK0H_BKA8_POSITION                              0x0
#define _ICDBK0H_BKA8_SIZE                                  0x1
#define _ICDBK0H_BKA8_LENGTH                                0x1
#define _ICDBK0H_BKA8_MASK                                  0x1
#define _ICDBK0H_BKA9_POSN                                  0x1
#define _ICDBK0H_BKA9_POSITION                              0x1
#define _ICDBK0H_BKA9_SIZE                                  0x1
#define _ICDBK0H_BKA9_LENGTH                                0x1
#define _ICDBK0H_BKA9_MASK                                  0x2
#define _ICDBK0H_BKA10_POSN                                 0x2
#define _ICDBK0H_BKA10_POSITION                             0x2
#define _ICDBK0H_BKA10_SIZE                                 0x1
#define _ICDBK0H_BKA10_LENGTH                               0x1
#define _ICDBK0H_BKA10_MASK                                 0x4
#define _ICDBK0H_BKA11_POSN                                 0x3
#define _ICDBK0H_BKA11_POSITION                             0x3
#define _ICDBK0H_BKA11_SIZE                                 0x1
#define _ICDBK0H_BKA11_LENGTH                               0x1
#define _ICDBK0H_BKA11_MASK                                 0x8
#define _ICDBK0H_BKA12_POSN                                 0x4
#define _ICDBK0H_BKA12_POSITION                             0x4
#define _ICDBK0H_BKA12_SIZE                                 0x1
#define _ICDBK0H_BKA12_LENGTH                               0x1
#define _ICDBK0H_BKA12_MASK                                 0x10
#define _ICDBK0H_BKA13_POSN                                 0x5
#define _ICDBK0H_BKA13_POSITION                             0x5
#define _ICDBK0H_BKA13_SIZE                                 0x1
#define _ICDBK0H_BKA13_LENGTH                               0x1
#define _ICDBK0H_BKA13_MASK                                 0x20
#define _ICDBK0H_BKA14_POSN                                 0x6
#define _ICDBK0H_BKA14_POSITION                             0x6
#define _ICDBK0H_BKA14_SIZE                                 0x1
#define _ICDBK0H_BKA14_LENGTH                               0x1
#define _ICDBK0H_BKA14_MASK                                 0x40

// Register: BSRICDSHAD
#define BSRICDSHAD BSRICDSHAD
extern volatile unsigned char           BSRICDSHAD          __at(0xFE3);
#ifndef _LIB_BUILD
asm("BSRICDSHAD equ 0FE3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR_ICDSHAD            :5;
    };
} BSRICDSHADbits_t;
extern volatile BSRICDSHADbits_t BSRICDSHADbits __at(0xFE3);
// bitfield macros
#define _BSRICDSHAD_BSR_ICDSHAD_POSN                        0x0
#define _BSRICDSHAD_BSR_ICDSHAD_POSITION                    0x0
#define _BSRICDSHAD_BSR_ICDSHAD_SIZE                        0x5
#define _BSRICDSHAD_BSR_ICDSHAD_LENGTH                      0x5
#define _BSRICDSHAD_BSR_ICDSHAD_MASK                        0x1F

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
// ADCTX<A1TX0>
extern volatile __bit                   A1TX0               __at(0x3488);	// @ (0x691 * 8 + 0)
#define                                 A1TX0_bit           _BIT_ACCESS(ADCTX,0)
// ADCTX<A1TX1>
extern volatile __bit                   A1TX1               __at(0x3489);	// @ (0x691 * 8 + 1)
#define                                 A1TX1_bit           _BIT_ACCESS(ADCTX,1)
// ADCTX<A1TX2>
extern volatile __bit                   A1TX2               __at(0x348A);	// @ (0x691 * 8 + 2)
#define                                 A1TX2_bit           _BIT_ACCESS(ADCTX,2)
// ADCTX<A2TX0>
extern volatile __bit                   A2TX0               __at(0x348C);	// @ (0x691 * 8 + 4)
#define                                 A2TX0_bit           _BIT_ACCESS(ADCTX,4)
// ADCTX<A2TX1>
extern volatile __bit                   A2TX1               __at(0x348D);	// @ (0x691 * 8 + 5)
#define                                 A2TX1_bit           _BIT_ACCESS(ADCTX,5)
// ADCTX<A2TX2>
extern volatile __bit                   A2TX2               __at(0x348E);	// @ (0x691 * 8 + 6)
#define                                 A2TX2_bit           _BIT_ACCESS(ADCTX,6)
// BAUDCON<ABDEN>
extern volatile __bit                   ABDEN               __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON,0)
// BAUDCON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0xCFF);	// @ (0x19F * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON,7)
// ADSTAT<AD1CONV>
extern volatile __bit                   AD1CONV             __at(0x38AA);	// @ (0x715 * 8 + 2)
#define                                 AD1CONV_bit         _BIT_ACCESS(ADSTAT,2)
// AD1CON3<AD1DSEN>
extern volatile __bit                   AD1DSEN             __at(0x38A0);	// @ (0x714 * 8 + 0)
#define                                 AD1DSEN_bit         _BIT_ACCESS(AD1CON3,0)
// AD1CON3<AD1EPPOL>
extern volatile __bit                   AD1EPPOL            __at(0x38A7);	// @ (0x714 * 8 + 7)
#define                                 AD1EPPOL_bit        _BIT_ACCESS(AD1CON3,7)
// PIE1<AD1IE>
extern volatile __bit                   AD1IE               __at(0x48E);	// @ (0x91 * 8 + 6)
#define                                 AD1IE_bit           _BIT_ACCESS(PIE1,6)
// PIR1<AD1IF>
extern volatile __bit                   AD1IF               __at(0x8E);	// @ (0x11 * 8 + 6)
#define                                 AD1IF_bit           _BIT_ACCESS(PIR1,6)
// AD1CON3<AD1IPEN>
extern volatile __bit                   AD1IPEN             __at(0x38A1);	// @ (0x714 * 8 + 1)
#define                                 AD1IPEN_bit         _BIT_ACCESS(AD1CON3,1)
// AD1CON3<AD1IPPOL>
extern volatile __bit                   AD1IPPOL            __at(0x38A6);	// @ (0x714 * 8 + 6)
#define                                 AD1IPPOL_bit        _BIT_ACCESS(AD1CON3,6)
// ADSTAT<AD1STG0>
extern volatile __bit                   AD1STG0             __at(0x38A8);	// @ (0x715 * 8 + 0)
#define                                 AD1STG0_bit         _BIT_ACCESS(ADSTAT,0)
// ADSTAT<AD1STG1>
extern volatile __bit                   AD1STG1             __at(0x38A9);	// @ (0x715 * 8 + 1)
#define                                 AD1STG1_bit         _BIT_ACCESS(ADSTAT,1)
// ADSTAT<AD2CONV>
extern volatile __bit                   AD2CONV             __at(0x38AE);	// @ (0x715 * 8 + 6)
#define                                 AD2CONV_bit         _BIT_ACCESS(ADSTAT,6)
// AD2CON3<AD2DSEN>
extern volatile __bit                   AD2DSEN             __at(0x3CA0);	// @ (0x794 * 8 + 0)
#define                                 AD2DSEN_bit         _BIT_ACCESS(AD2CON3,0)
// AD2CON3<AD2EPPOL>
extern volatile __bit                   AD2EPPOL            __at(0x3CA7);	// @ (0x794 * 8 + 7)
#define                                 AD2EPPOL_bit        _BIT_ACCESS(AD2CON3,7)
// PIE2<AD2IE>
extern volatile __bit                   AD2IE               __at(0x496);	// @ (0x92 * 8 + 6)
#define                                 AD2IE_bit           _BIT_ACCESS(PIE2,6)
// PIR2<AD2IF>
extern volatile __bit                   AD2IF               __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 AD2IF_bit           _BIT_ACCESS(PIR2,6)
// AD2CON3<AD2IPEN>
extern volatile __bit                   AD2IPEN             __at(0x3CA1);	// @ (0x794 * 8 + 1)
#define                                 AD2IPEN_bit         _BIT_ACCESS(AD2CON3,1)
// AD2CON3<AD2IPPOL>
extern volatile __bit                   AD2IPPOL            __at(0x3CA6);	// @ (0x794 * 8 + 6)
#define                                 AD2IPPOL_bit        _BIT_ACCESS(AD2CON3,6)
// AD2CON0<AD2ON>
extern volatile __bit                   AD2ON               __at(0x3C88);	// @ (0x791 * 8 + 0)
#define                                 AD2ON_bit           _BIT_ACCESS(AD2CON0,0)
// ADSTAT<AD2STG0>
extern volatile __bit                   AD2STG0             __at(0x38AC);	// @ (0x715 * 8 + 4)
#define                                 AD2STG0_bit         _BIT_ACCESS(ADSTAT,4)
// ADSTAT<AD2STG1>
extern volatile __bit                   AD2STG1             __at(0x38AD);	// @ (0x715 * 8 + 5)
#define                                 AD2STG1_bit         _BIT_ACCESS(ADSTAT,5)
// ADSTAT<ADCONV>
extern volatile __bit                   ADCONV              __at(0x38AA);	// @ (0x715 * 8 + 2)
#define                                 ADCONV_bit          _BIT_ACCESS(ADSTAT,2)
// ADCOMCON<ADCS0>
extern volatile __bit                   ADCS0               __at(0x3894);	// @ (0x712 * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCOMCON,4)
// ADCOMCON<ADCS1>
extern volatile __bit                   ADCS1               __at(0x3895);	// @ (0x712 * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCOMCON,5)
// ADCOMCON<ADCS2>
extern volatile __bit                   ADCS2               __at(0x3896);	// @ (0x712 * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCOMCON,6)
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
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
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC64);	// @ (0x18C * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELA<ANSA5>
extern volatile __bit                   ANSA5               __at(0xC65);	// @ (0x18C * 8 + 5)
#define                                 ANSA5_bit           _BIT_ACCESS(ANSELA,5)
// ANSELA<ANSA6>
extern volatile __bit                   ANSA6               __at(0xC66);	// @ (0x18C * 8 + 6)
#define                                 ANSA6_bit           _BIT_ACCESS(ANSELA,6)
// ANSELA<ANSA7>
extern volatile __bit                   ANSA7               __at(0xC67);	// @ (0x18C * 8 + 7)
#define                                 ANSA7_bit           _BIT_ACCESS(ANSELA,7)
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
// ANSELB<ANSB6>
extern volatile __bit                   ANSB6               __at(0xC6E);	// @ (0x18D * 8 + 6)
#define                                 ANSB6_bit           _BIT_ACCESS(ANSELB,6)
// ANSELB<ANSB7>
extern volatile __bit                   ANSB7               __at(0xC6F);	// @ (0x18D * 8 + 7)
#define                                 ANSB7_bit           _BIT_ACCESS(ANSELB,7)
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
// ANSELC<ANSC4>
extern volatile __bit                   ANSC4               __at(0xC74);	// @ (0x18E * 8 + 4)
#define                                 ANSC4_bit           _BIT_ACCESS(ANSELC,4)
// ANSELC<ANSC5>
extern volatile __bit                   ANSC5               __at(0xC75);	// @ (0x18E * 8 + 5)
#define                                 ANSC5_bit           _BIT_ACCESS(ANSELC,5)
// ANSELC<ANSC6>
extern volatile __bit                   ANSC6               __at(0xC76);	// @ (0x18E * 8 + 6)
#define                                 ANSC6_bit           _BIT_ACCESS(ANSELC,6)
// ANSELC<ANSC7>
extern volatile __bit                   ANSC7               __at(0xC77);	// @ (0x18E * 8 + 7)
#define                                 ANSC7_bit           _BIT_ACCESS(ANSELC,7)
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
// ANSELD<ANSD4>
extern volatile __bit                   ANSD4               __at(0xC7C);	// @ (0x18F * 8 + 4)
#define                                 ANSD4_bit           _BIT_ACCESS(ANSELD,4)
// ANSELD<ANSD5>
extern volatile __bit                   ANSD5               __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 ANSD5_bit           _BIT_ACCESS(ANSELD,5)
// ANSELD<ANSD6>
extern volatile __bit                   ANSD6               __at(0xC7E);	// @ (0x18F * 8 + 6)
#define                                 ANSD6_bit           _BIT_ACCESS(ANSELD,6)
// ANSELD<ANSD7>
extern volatile __bit                   ANSD7               __at(0xC7F);	// @ (0x18F * 8 + 7)
#define                                 ANSD7_bit           _BIT_ACCESS(ANSELD,7)
// ANSELE<ANSE0>
extern volatile __bit                   ANSE0               __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 ANSE0_bit           _BIT_ACCESS(ANSELE,0)
// ANSELE<ANSE1>
extern volatile __bit                   ANSE1               __at(0xC81);	// @ (0x190 * 8 + 1)
#define                                 ANSE1_bit           _BIT_ACCESS(ANSELE,1)
// ANSELE<ANSE2>
extern volatile __bit                   ANSE2               __at(0xC82);	// @ (0x190 * 8 + 2)
#define                                 ANSE2_bit           _BIT_ACCESS(ANSELE,2)
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR2,3)
// PIE2<BCL2IE>
extern volatile __bit                   BCL2IE              __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 BCL2IE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<BCL2IF>
extern volatile __bit                   BCL2IF              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 BCL2IF_bit          _BIT_ACCESS(PIR2,2)
// ICDBK0L<BKA0>
extern volatile __bit                   BKA0                __at(0x7CE8);	// @ (0xF9D * 8 + 0)
#define                                 BKA0_bit            _BIT_ACCESS(ICDBK0L,0)
// ICDBK0L<BKA1>
extern volatile __bit                   BKA1                __at(0x7CE9);	// @ (0xF9D * 8 + 1)
#define                                 BKA1_bit            _BIT_ACCESS(ICDBK0L,1)
// ICDBK0H<BKA10>
extern volatile __bit                   BKA10               __at(0x7CF2);	// @ (0xF9E * 8 + 2)
#define                                 BKA10_bit           _BIT_ACCESS(ICDBK0H,2)
// ICDBK0H<BKA11>
extern volatile __bit                   BKA11               __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 BKA11_bit           _BIT_ACCESS(ICDBK0H,3)
// ICDBK0H<BKA12>
extern volatile __bit                   BKA12               __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 BKA12_bit           _BIT_ACCESS(ICDBK0H,4)
// ICDBK0H<BKA13>
extern volatile __bit                   BKA13               __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 BKA13_bit           _BIT_ACCESS(ICDBK0H,5)
// ICDBK0H<BKA14>
extern volatile __bit                   BKA14               __at(0x7CF6);	// @ (0xF9E * 8 + 6)
#define                                 BKA14_bit           _BIT_ACCESS(ICDBK0H,6)
// ICDBK0L<BKA2>
extern volatile __bit                   BKA2                __at(0x7CEA);	// @ (0xF9D * 8 + 2)
#define                                 BKA2_bit            _BIT_ACCESS(ICDBK0L,2)
// ICDBK0L<BKA3>
extern volatile __bit                   BKA3                __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 BKA3_bit            _BIT_ACCESS(ICDBK0L,3)
// ICDBK0L<BKA4>
extern volatile __bit                   BKA4                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 BKA4_bit            _BIT_ACCESS(ICDBK0L,4)
// ICDBK0L<BKA5>
extern volatile __bit                   BKA5                __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 BKA5_bit            _BIT_ACCESS(ICDBK0L,5)
// ICDBK0L<BKA6>
extern volatile __bit                   BKA6                __at(0x7CEE);	// @ (0xF9D * 8 + 6)
#define                                 BKA6_bit            _BIT_ACCESS(ICDBK0L,6)
// ICDBK0L<BKA7>
extern volatile __bit                   BKA7                __at(0x7CEF);	// @ (0xF9D * 8 + 7)
#define                                 BKA7_bit            _BIT_ACCESS(ICDBK0L,7)
// ICDBK0H<BKA8>
extern volatile __bit                   BKA8                __at(0x7CF0);	// @ (0xF9E * 8 + 0)
#define                                 BKA8_bit            _BIT_ACCESS(ICDBK0H,0)
// ICDBK0H<BKA9>
extern volatile __bit                   BKA9                __at(0x7CF1);	// @ (0xF9E * 8 + 1)
#define                                 BKA9_bit            _BIT_ACCESS(ICDBK0H,1)
// ICDBK0CON<BKEN>
extern volatile __bit                   BKEN                __at(0x7CE7);	// @ (0xF9C * 8 + 7)
#define                                 BKEN_bit            _BIT_ACCESS(ICDBK0CON,7)
// ICDBK0CON<BKHLT>
extern volatile __bit                   BKHLT               __at(0x7CE0);	// @ (0xF9C * 8 + 0)
#define                                 BKHLT_bit           _BIT_ACCESS(ICDBK0CON,0)
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
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PMCON1<CFGS>
extern volatile __bit                   CFGS                __at(0xCAE);	// @ (0x195 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(PMCON1,6)
// AD1CH0<CH10>
extern volatile __bit                   CH10                __at(0x38F0);	// @ (0x71E * 8 + 0)
#define                                 CH10_bit            _BIT_ACCESS(AD1CH0,0)
// AD1CH0<CH11>
extern volatile __bit                   CH11                __at(0x38F1);	// @ (0x71E * 8 + 1)
#define                                 CH11_bit            _BIT_ACCESS(AD1CH0,1)
// AD1CH0<CH12>
extern volatile __bit                   CH12                __at(0x38F2);	// @ (0x71E * 8 + 2)
#define                                 CH12_bit            _BIT_ACCESS(AD1CH0,2)
// AD1CH0<CH13>
extern volatile __bit                   CH13                __at(0x38F3);	// @ (0x71E * 8 + 3)
#define                                 CH13_bit            _BIT_ACCESS(AD1CH0,3)
// AD1CH0<CH14>
extern volatile __bit                   CH14                __at(0x38F4);	// @ (0x71E * 8 + 4)
#define                                 CH14_bit            _BIT_ACCESS(AD1CH0,4)
// AD1CH0<CH15>
extern volatile __bit                   CH15                __at(0x38F5);	// @ (0x71E * 8 + 5)
#define                                 CH15_bit            _BIT_ACCESS(AD1CH0,5)
// AD1CH0<CH16>
extern volatile __bit                   CH16                __at(0x38F6);	// @ (0x71E * 8 + 6)
#define                                 CH16_bit            _BIT_ACCESS(AD1CH0,6)
// AD1CH0<CH17>
extern volatile __bit                   CH17                __at(0x38F7);	// @ (0x71E * 8 + 7)
#define                                 CH17_bit            _BIT_ACCESS(AD1CH0,7)
// AD1CH1<CH18>
extern volatile __bit                   CH18                __at(0x38F8);	// @ (0x71F * 8 + 0)
#define                                 CH18_bit            _BIT_ACCESS(AD1CH1,0)
// AD1CH1<CH19>
extern volatile __bit                   CH19                __at(0x38F9);	// @ (0x71F * 8 + 1)
#define                                 CH19_bit            _BIT_ACCESS(AD1CH1,1)
// AD2CH0<CH20>
extern volatile __bit                   CH20                __at(0x3CF0);	// @ (0x79E * 8 + 0)
#define                                 CH20_bit            _BIT_ACCESS(AD2CH0,0)
// AD2CH0<CH21>
extern volatile __bit                   CH21                __at(0x3CF1);	// @ (0x79E * 8 + 1)
#define                                 CH21_bit            _BIT_ACCESS(AD2CH0,1)
// AD2CH0<CH22>
extern volatile __bit                   CH22                __at(0x3CF2);	// @ (0x79E * 8 + 2)
#define                                 CH22_bit            _BIT_ACCESS(AD2CH0,2)
// AD2CH0<CH23>
extern volatile __bit                   CH23                __at(0x3CF3);	// @ (0x79E * 8 + 3)
#define                                 CH23_bit            _BIT_ACCESS(AD2CH0,3)
// AD2CH0<CH24>
extern volatile __bit                   CH24                __at(0x3CF4);	// @ (0x79E * 8 + 4)
#define                                 CH24_bit            _BIT_ACCESS(AD2CH0,4)
// AD2CH0<CH25>
extern volatile __bit                   CH25                __at(0x3CF5);	// @ (0x79E * 8 + 5)
#define                                 CH25_bit            _BIT_ACCESS(AD2CH0,5)
// AD2CH0<CH26>
extern volatile __bit                   CH26                __at(0x3CF6);	// @ (0x79E * 8 + 6)
#define                                 CH26_bit            _BIT_ACCESS(AD2CH0,6)
// AD2CH0<CH27>
extern volatile __bit                   CH27                __at(0x3CF7);	// @ (0x79E * 8 + 7)
#define                                 CH27_bit            _BIT_ACCESS(AD2CH0,7)
// AD2CH1<CH28>
extern volatile __bit                   CH28                __at(0x3CF8);	// @ (0x79F * 8 + 0)
#define                                 CH28_bit            _BIT_ACCESS(AD2CH1,0)
// AD2CH1<CH29>
extern volatile __bit                   CH29                __at(0x3CF9);	// @ (0x79F * 8 + 1)
#define                                 CH29_bit            _BIT_ACCESS(AD2CH1,1)
// AD1CH1<CH30>
extern volatile __bit                   CH30                __at(0x38FA);	// @ (0x71F * 8 + 2)
#define                                 CH30_bit            _BIT_ACCESS(AD1CH1,2)
// AD1CH1<CH31>
extern volatile __bit                   CH31                __at(0x38FB);	// @ (0x71F * 8 + 3)
#define                                 CH31_bit            _BIT_ACCESS(AD1CH1,3)
// AD1CH1<CH32>
extern volatile __bit                   CH32                __at(0x38FC);	// @ (0x71F * 8 + 4)
#define                                 CH32_bit            _BIT_ACCESS(AD1CH1,4)
// AD1CH1<CH33>
extern volatile __bit                   CH33                __at(0x38FD);	// @ (0x71F * 8 + 5)
#define                                 CH33_bit            _BIT_ACCESS(AD1CH1,5)
// AD1CH1<CH34>
extern volatile __bit                   CH34                __at(0x38FE);	// @ (0x71F * 8 + 6)
#define                                 CH34_bit            _BIT_ACCESS(AD1CH1,6)
// AD1CH1<CH35>
extern volatile __bit                   CH35                __at(0x38FF);	// @ (0x71F * 8 + 7)
#define                                 CH35_bit            _BIT_ACCESS(AD1CH1,7)
// AD2CH1<CH40>
extern volatile __bit                   CH40                __at(0x3CFA);	// @ (0x79F * 8 + 2)
#define                                 CH40_bit            _BIT_ACCESS(AD2CH1,2)
// AD2CH1<CH41>
extern volatile __bit                   CH41                __at(0x3CFB);	// @ (0x79F * 8 + 3)
#define                                 CH41_bit            _BIT_ACCESS(AD2CH1,3)
// AD2CH1<CH42>
extern volatile __bit                   CH42                __at(0x3CFC);	// @ (0x79F * 8 + 4)
#define                                 CH42_bit            _BIT_ACCESS(AD2CH1,4)
// AD2CH1<CH43>
extern volatile __bit                   CH43                __at(0x3CFD);	// @ (0x79F * 8 + 5)
#define                                 CH43_bit            _BIT_ACCESS(AD2CH1,5)
// AD2CH1<CH44>
extern volatile __bit                   CH44                __at(0x3CFE);	// @ (0x79F * 8 + 6)
#define                                 CH44_bit            _BIT_ACCESS(AD2CH1,6)
// AD2CH1<CH45>
extern volatile __bit                   CH45                __at(0x3CFF);	// @ (0x79F * 8 + 7)
#define                                 CH45_bit            _BIT_ACCESS(AD2CH1,7)
// AD1CH0<CHS17>
extern volatile __bit                   CHS17               __at(0x38F7);	// @ (0x71E * 8 + 7)
#define                                 CHS17_bit           _BIT_ACCESS(AD1CH0,7)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// ICDINSTL<DBGIN0>
extern volatile __bit                   DBGIN0              __at(0x7CB0);	// @ (0xF96 * 8 + 0)
#define                                 DBGIN0_bit          _BIT_ACCESS(ICDINSTL,0)
// ICDINSTL<DBGIN1>
extern volatile __bit                   DBGIN1              __at(0x7CB1);	// @ (0xF96 * 8 + 1)
#define                                 DBGIN1_bit          _BIT_ACCESS(ICDINSTL,1)
// ICDINSTH<DBGIN10>
extern volatile __bit                   DBGIN10             __at(0x7CBA);	// @ (0xF97 * 8 + 2)
#define                                 DBGIN10_bit         _BIT_ACCESS(ICDINSTH,2)
// ICDINSTH<DBGIN11>
extern volatile __bit                   DBGIN11             __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 DBGIN11_bit         _BIT_ACCESS(ICDINSTH,3)
// ICDINSTH<DBGIN12>
extern volatile __bit                   DBGIN12             __at(0x7CBC);	// @ (0xF97 * 8 + 4)
#define                                 DBGIN12_bit         _BIT_ACCESS(ICDINSTH,4)
// ICDINSTH<DBGIN13>
extern volatile __bit                   DBGIN13             __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 DBGIN13_bit         _BIT_ACCESS(ICDINSTH,5)
// ICDINSTL<DBGIN2>
extern volatile __bit                   DBGIN2              __at(0x7CB2);	// @ (0xF96 * 8 + 2)
#define                                 DBGIN2_bit          _BIT_ACCESS(ICDINSTL,2)
// ICDINSTL<DBGIN3>
extern volatile __bit                   DBGIN3              __at(0x7CB3);	// @ (0xF96 * 8 + 3)
#define                                 DBGIN3_bit          _BIT_ACCESS(ICDINSTL,3)
// ICDINSTL<DBGIN4>
extern volatile __bit                   DBGIN4              __at(0x7CB4);	// @ (0xF96 * 8 + 4)
#define                                 DBGIN4_bit          _BIT_ACCESS(ICDINSTL,4)
// ICDINSTL<DBGIN5>
extern volatile __bit                   DBGIN5              __at(0x7CB5);	// @ (0xF96 * 8 + 5)
#define                                 DBGIN5_bit          _BIT_ACCESS(ICDINSTL,5)
// ICDINSTL<DBGIN6>
extern volatile __bit                   DBGIN6              __at(0x7CB6);	// @ (0xF96 * 8 + 6)
#define                                 DBGIN6_bit          _BIT_ACCESS(ICDINSTL,6)
// ICDINSTL<DBGIN7>
extern volatile __bit                   DBGIN7              __at(0x7CB7);	// @ (0xF96 * 8 + 7)
#define                                 DBGIN7_bit          _BIT_ACCESS(ICDINSTL,7)
// ICDINSTH<DBGIN8>
extern volatile __bit                   DBGIN8              __at(0x7CB8);	// @ (0xF97 * 8 + 0)
#define                                 DBGIN8_bit          _BIT_ACCESS(ICDINSTH,0)
// ICDINSTH<DBGIN9>
extern volatile __bit                   DBGIN9              __at(0x7CB9);	// @ (0xF97 * 8 + 1)
#define                                 DBGIN9_bit          _BIT_ACCESS(ICDINSTH,1)
// ICDCON0<DBGINEX>
extern volatile __bit                   DBGINEX             __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 DBGINEX_bit         _BIT_ACCESS(ICDCON0,3)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// PMCON1<FREE>
extern volatile __bit                   FREE                __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(PMCON1,4)
// ICDCON0<FREEZ>
extern volatile __bit                   FREEZ               __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 FREEZ_bit           _BIT_ACCESS(ICDCON0,6)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// AD1CON0<GO_nDONE1>
extern volatile __bit                   GO_nDONE1           __at(0x3889);	// @ (0x711 * 8 + 1)
#define                                 GO_nDONE1_bit       _BIT_ACCESS(AD1CON0,1)
// AD2CON0<GO_nDONE2>
extern volatile __bit                   GO_nDONE2           __at(0x3C89);	// @ (0x791 * 8 + 1)
#define                                 GO_nDONE2_bit       _BIT_ACCESS(AD2CON0,1)
// AD1GRD<GRD1AOE>
extern volatile __bit                   GRD1AOE             __at(0x38C6);	// @ (0x718 * 8 + 6)
#define                                 GRD1AOE_bit         _BIT_ACCESS(AD1GRD,6)
// AD1GRD<GRD1BOE>
extern volatile __bit                   GRD1BOE             __at(0x38C7);	// @ (0x718 * 8 + 7)
#define                                 GRD1BOE_bit         _BIT_ACCESS(AD1GRD,7)
// AD1GRD<GRD1POL>
extern volatile __bit                   GRD1POL             __at(0x38C5);	// @ (0x718 * 8 + 5)
#define                                 GRD1POL_bit         _BIT_ACCESS(AD1GRD,5)
// AD2GRD<GRD2AOE>
extern volatile __bit                   GRD2AOE             __at(0x3CC6);	// @ (0x798 * 8 + 6)
#define                                 GRD2AOE_bit         _BIT_ACCESS(AD2GRD,6)
// AD2GRD<GRD2BOE>
extern volatile __bit                   GRD2BOE             __at(0x3CC7);	// @ (0x798 * 8 + 7)
#define                                 GRD2BOE_bit         _BIT_ACCESS(AD2GRD,7)
// AD2GRD<GRD2POL>
extern volatile __bit                   GRD2POL             __at(0x3CC5);	// @ (0x798 * 8 + 5)
#define                                 GRD2POL_bit         _BIT_ACCESS(AD2GRD,5)
// APFCON<GRDASEL>
extern volatile __bit                   GRDASEL             __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 GRDASEL_bit         _BIT_ACCESS(APFCON,0)
// APFCON<GRDBSEL>
extern volatile __bit                   GRDBSEL             __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 GRDBSEL_bit         _BIT_ACCESS(APFCON,1)
// OSCSTAT<HFIOFR>
extern volatile __bit                   HFIOFR              __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 HFIOFR_bit          _BIT_ACCESS(OSCSTAT,4)
// OSCSTAT<HFIOFS>
extern volatile __bit                   HFIOFS              __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 HFIOFS_bit          _BIT_ACCESS(OSCSTAT,0)
// ICDCON0<INBUG>
extern volatile __bit                   INBUG               __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 INBUG_bit           _BIT_ACCESS(ICDCON0,7)
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
// ICDIO<LAT_ICDCLK>
extern volatile __bit                   LAT_ICDCLK          __at(0x7C64);	// @ (0xF8C * 8 + 4)
#define                                 LAT_ICDCLK_bit      _BIT_ACCESS(ICDIO,4)
// ICDIO<LAT_ICDDAT>
extern volatile __bit                   LAT_ICDDAT          __at(0x7C65);	// @ (0xF8C * 8 + 5)
#define                                 LAT_ICDDAT_bit      _BIT_ACCESS(ICDIO,5)
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// PWMTMRS<P1TSEL>
extern volatile __bit                   P1TSEL              __at(0x30E8);	// @ (0x61D * 8 + 0)
#define                                 P1TSEL_bit          _BIT_ACCESS(PWMTMRS,0)
// PWMTMRS<P2TSEL>
extern volatile __bit                   P2TSEL              __at(0x30EA);	// @ (0x61D * 8 + 2)
#define                                 P2TSEL_bit          _BIT_ACCESS(PWMTMRS,2)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// OSCSTAT<PLLSR>
extern volatile __bit                   PLLSR               __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 PLLSR_bit           _BIT_ACCESS(OSCSTAT,6)
// ICDIO<PORT_ICDCLK>
extern volatile __bit                   PORT_ICDCLK         __at(0x7C66);	// @ (0xF8C * 8 + 6)
#define                                 PORT_ICDCLK_bit     _BIT_ACCESS(ICDIO,6)
// ICDIO<PORT_ICDDAT>
extern volatile __bit                   PORT_ICDDAT         __at(0x7C67);	// @ (0xF8C * 8 + 7)
#define                                 PORT_ICDDAT_bit     _BIT_ACCESS(ICDIO,7)
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
// PWM1AOE<PWM1OE0>
extern volatile __bit                   PWM1OE0             __at(0x30F0);	// @ (0x61E * 8 + 0)
#define                                 PWM1OE0_bit         _BIT_ACCESS(PWM1AOE,0)
// PWM1AOE<PWM1OE1>
extern volatile __bit                   PWM1OE1             __at(0x30F1);	// @ (0x61E * 8 + 1)
#define                                 PWM1OE1_bit         _BIT_ACCESS(PWM1AOE,1)
// PWM1AOE<PWM1OE2>
extern volatile __bit                   PWM1OE2             __at(0x30F2);	// @ (0x61E * 8 + 2)
#define                                 PWM1OE2_bit         _BIT_ACCESS(PWM1AOE,2)
// PWM1AOE<PWM1OE3>
extern volatile __bit                   PWM1OE3             __at(0x30F3);	// @ (0x61E * 8 + 3)
#define                                 PWM1OE3_bit         _BIT_ACCESS(PWM1AOE,3)
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
// PWM2AOE<PWM2OE0>
extern volatile __bit                   PWM2OE0             __at(0x30F8);	// @ (0x61F * 8 + 0)
#define                                 PWM2OE0_bit         _BIT_ACCESS(PWM2AOE,0)
// PWM2AOE<PWM2OE1>
extern volatile __bit                   PWM2OE1             __at(0x30F9);	// @ (0x61F * 8 + 1)
#define                                 PWM2OE1_bit         _BIT_ACCESS(PWM2AOE,1)
// PWM2AOE<PWM2OE2>
extern volatile __bit                   PWM2OE2             __at(0x30FA);	// @ (0x61F * 8 + 2)
#define                                 PWM2OE2_bit         _BIT_ACCESS(PWM2AOE,2)
// PWM2AOE<PWM2OE3>
extern volatile __bit                   PWM2OE3             __at(0x30FB);	// @ (0x61F * 8 + 3)
#define                                 PWM2OE3_bit         _BIT_ACCESS(PWM2AOE,3)
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
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x76);	// @ (0xE * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x77);	// @ (0xE * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
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
// ICDCON0<RSTVEC>
extern volatile __bit                   RSTVEC              __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 RSTVEC_bit          _BIT_ACCESS(ICDCON0,0)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// SSPLVL<S1ILS>
extern volatile __bit                   S1ILS               __at(0x10C0);	// @ (0x218 * 8 + 0)
#define                                 S1ILS_bit           _BIT_ACCESS(SSPLVL,0)
// SSPLVL<S2ILS>
extern volatile __bit                   S2ILS               __at(0x10C4);	// @ (0x218 * 8 + 4)
#define                                 S2ILS_bit           _BIT_ACCESS(SSPLVL,4)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xCEF);	// @ (0x19D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// OSCCON<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCCON,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// SSP1ADD<SSP1ADD0>
extern volatile __bit                   SSP1ADD0            __at(0x1090);	// @ (0x212 * 8 + 0)
#define                                 SSP1ADD0_bit        _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<SSP1ADD1>
extern volatile __bit                   SSP1ADD1            __at(0x1091);	// @ (0x212 * 8 + 1)
#define                                 SSP1ADD1_bit        _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<SSP1ADD2>
extern volatile __bit                   SSP1ADD2            __at(0x1092);	// @ (0x212 * 8 + 2)
#define                                 SSP1ADD2_bit        _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<SSP1ADD3>
extern volatile __bit                   SSP1ADD3            __at(0x1093);	// @ (0x212 * 8 + 3)
#define                                 SSP1ADD3_bit        _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<SSP1ADD4>
extern volatile __bit                   SSP1ADD4            __at(0x1094);	// @ (0x212 * 8 + 4)
#define                                 SSP1ADD4_bit        _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<SSP1ADD5>
extern volatile __bit                   SSP1ADD5            __at(0x1095);	// @ (0x212 * 8 + 5)
#define                                 SSP1ADD5_bit        _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<SSP1ADD6>
extern volatile __bit                   SSP1ADD6            __at(0x1096);	// @ (0x212 * 8 + 6)
#define                                 SSP1ADD6_bit        _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<SSP1ADD7>
extern volatile __bit                   SSP1ADD7            __at(0x1097);	// @ (0x212 * 8 + 7)
#define                                 SSP1ADD7_bit        _BIT_ACCESS(SSP1ADD,7)
// SSP1BUF<SSP1BUF0>
extern volatile __bit                   SSP1BUF0            __at(0x1088);	// @ (0x211 * 8 + 0)
#define                                 SSP1BUF0_bit        _BIT_ACCESS(SSP1BUF,0)
// SSP1BUF<SSP1BUF1>
extern volatile __bit                   SSP1BUF1            __at(0x1089);	// @ (0x211 * 8 + 1)
#define                                 SSP1BUF1_bit        _BIT_ACCESS(SSP1BUF,1)
// SSP1BUF<SSP1BUF2>
extern volatile __bit                   SSP1BUF2            __at(0x108A);	// @ (0x211 * 8 + 2)
#define                                 SSP1BUF2_bit        _BIT_ACCESS(SSP1BUF,2)
// SSP1BUF<SSP1BUF3>
extern volatile __bit                   SSP1BUF3            __at(0x108B);	// @ (0x211 * 8 + 3)
#define                                 SSP1BUF3_bit        _BIT_ACCESS(SSP1BUF,3)
// SSP1BUF<SSP1BUF4>
extern volatile __bit                   SSP1BUF4            __at(0x108C);	// @ (0x211 * 8 + 4)
#define                                 SSP1BUF4_bit        _BIT_ACCESS(SSP1BUF,4)
// SSP1BUF<SSP1BUF5>
extern volatile __bit                   SSP1BUF5            __at(0x108D);	// @ (0x211 * 8 + 5)
#define                                 SSP1BUF5_bit        _BIT_ACCESS(SSP1BUF,5)
// SSP1BUF<SSP1BUF6>
extern volatile __bit                   SSP1BUF6            __at(0x108E);	// @ (0x211 * 8 + 6)
#define                                 SSP1BUF6_bit        _BIT_ACCESS(SSP1BUF,6)
// SSP1BUF<SSP1BUF7>
extern volatile __bit                   SSP1BUF7            __at(0x108F);	// @ (0x211 * 8 + 7)
#define                                 SSP1BUF7_bit        _BIT_ACCESS(SSP1BUF,7)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// SSP1MSK<SSP1MSK0>
extern volatile __bit                   SSP1MSK0            __at(0x1098);	// @ (0x213 * 8 + 0)
#define                                 SSP1MSK0_bit        _BIT_ACCESS(SSP1MSK,0)
// SSP1MSK<SSP1MSK1>
extern volatile __bit                   SSP1MSK1            __at(0x1099);	// @ (0x213 * 8 + 1)
#define                                 SSP1MSK1_bit        _BIT_ACCESS(SSP1MSK,1)
// SSP1MSK<SSP1MSK2>
extern volatile __bit                   SSP1MSK2            __at(0x109A);	// @ (0x213 * 8 + 2)
#define                                 SSP1MSK2_bit        _BIT_ACCESS(SSP1MSK,2)
// SSP1MSK<SSP1MSK3>
extern volatile __bit                   SSP1MSK3            __at(0x109B);	// @ (0x213 * 8 + 3)
#define                                 SSP1MSK3_bit        _BIT_ACCESS(SSP1MSK,3)
// SSP1MSK<SSP1MSK4>
extern volatile __bit                   SSP1MSK4            __at(0x109C);	// @ (0x213 * 8 + 4)
#define                                 SSP1MSK4_bit        _BIT_ACCESS(SSP1MSK,4)
// SSP1MSK<SSP1MSK5>
extern volatile __bit                   SSP1MSK5            __at(0x109D);	// @ (0x213 * 8 + 5)
#define                                 SSP1MSK5_bit        _BIT_ACCESS(SSP1MSK,5)
// SSP1MSK<SSP1MSK6>
extern volatile __bit                   SSP1MSK6            __at(0x109E);	// @ (0x213 * 8 + 6)
#define                                 SSP1MSK6_bit        _BIT_ACCESS(SSP1MSK,6)
// SSP1MSK<SSP1MSK7>
extern volatile __bit                   SSP1MSK7            __at(0x109F);	// @ (0x213 * 8 + 7)
#define                                 SSP1MSK7_bit        _BIT_ACCESS(SSP1MSK,7)
// SSP2ADD<SSP2ADD0>
extern volatile __bit                   SSP2ADD0            __at(0x10D0);	// @ (0x21A * 8 + 0)
#define                                 SSP2ADD0_bit        _BIT_ACCESS(SSP2ADD,0)
// SSP2ADD<SSP2ADD1>
extern volatile __bit                   SSP2ADD1            __at(0x10D1);	// @ (0x21A * 8 + 1)
#define                                 SSP2ADD1_bit        _BIT_ACCESS(SSP2ADD,1)
// SSP2ADD<SSP2ADD2>
extern volatile __bit                   SSP2ADD2            __at(0x10D2);	// @ (0x21A * 8 + 2)
#define                                 SSP2ADD2_bit        _BIT_ACCESS(SSP2ADD,2)
// SSP2ADD<SSP2ADD3>
extern volatile __bit                   SSP2ADD3            __at(0x10D3);	// @ (0x21A * 8 + 3)
#define                                 SSP2ADD3_bit        _BIT_ACCESS(SSP2ADD,3)
// SSP2ADD<SSP2ADD4>
extern volatile __bit                   SSP2ADD4            __at(0x10D4);	// @ (0x21A * 8 + 4)
#define                                 SSP2ADD4_bit        _BIT_ACCESS(SSP2ADD,4)
// SSP2ADD<SSP2ADD5>
extern volatile __bit                   SSP2ADD5            __at(0x10D5);	// @ (0x21A * 8 + 5)
#define                                 SSP2ADD5_bit        _BIT_ACCESS(SSP2ADD,5)
// SSP2ADD<SSP2ADD6>
extern volatile __bit                   SSP2ADD6            __at(0x10D6);	// @ (0x21A * 8 + 6)
#define                                 SSP2ADD6_bit        _BIT_ACCESS(SSP2ADD,6)
// SSP2ADD<SSP2ADD7>
extern volatile __bit                   SSP2ADD7            __at(0x10D7);	// @ (0x21A * 8 + 7)
#define                                 SSP2ADD7_bit        _BIT_ACCESS(SSP2ADD,7)
// SSP2BUF<SSP2BUF0>
extern volatile __bit                   SSP2BUF0            __at(0x10C8);	// @ (0x219 * 8 + 0)
#define                                 SSP2BUF0_bit        _BIT_ACCESS(SSP2BUF,0)
// SSP2BUF<SSP2BUF1>
extern volatile __bit                   SSP2BUF1            __at(0x10C9);	// @ (0x219 * 8 + 1)
#define                                 SSP2BUF1_bit        _BIT_ACCESS(SSP2BUF,1)
// SSP2BUF<SSP2BUF2>
extern volatile __bit                   SSP2BUF2            __at(0x10CA);	// @ (0x219 * 8 + 2)
#define                                 SSP2BUF2_bit        _BIT_ACCESS(SSP2BUF,2)
// SSP2BUF<SSP2BUF3>
extern volatile __bit                   SSP2BUF3            __at(0x10CB);	// @ (0x219 * 8 + 3)
#define                                 SSP2BUF3_bit        _BIT_ACCESS(SSP2BUF,3)
// SSP2BUF<SSP2BUF4>
extern volatile __bit                   SSP2BUF4            __at(0x10CC);	// @ (0x219 * 8 + 4)
#define                                 SSP2BUF4_bit        _BIT_ACCESS(SSP2BUF,4)
// SSP2BUF<SSP2BUF5>
extern volatile __bit                   SSP2BUF5            __at(0x10CD);	// @ (0x219 * 8 + 5)
#define                                 SSP2BUF5_bit        _BIT_ACCESS(SSP2BUF,5)
// SSP2BUF<SSP2BUF6>
extern volatile __bit                   SSP2BUF6            __at(0x10CE);	// @ (0x219 * 8 + 6)
#define                                 SSP2BUF6_bit        _BIT_ACCESS(SSP2BUF,6)
// SSP2BUF<SSP2BUF7>
extern volatile __bit                   SSP2BUF7            __at(0x10CF);	// @ (0x219 * 8 + 7)
#define                                 SSP2BUF7_bit        _BIT_ACCESS(SSP2BUF,7)
// PIE1<SSP2IE>
extern volatile __bit                   SSP2IE              __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 SSP2IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<SSP2IF>
extern volatile __bit                   SSP2IF              __at(0x8A);	// @ (0x11 * 8 + 2)
#define                                 SSP2IF_bit          _BIT_ACCESS(PIR1,2)
// SSP2MSK<SSP2MSK0>
extern volatile __bit                   SSP2MSK0            __at(0x10D8);	// @ (0x21B * 8 + 0)
#define                                 SSP2MSK0_bit        _BIT_ACCESS(SSP2MSK,0)
// SSP2MSK<SSP2MSK1>
extern volatile __bit                   SSP2MSK1            __at(0x10D9);	// @ (0x21B * 8 + 1)
#define                                 SSP2MSK1_bit        _BIT_ACCESS(SSP2MSK,1)
// SSP2MSK<SSP2MSK2>
extern volatile __bit                   SSP2MSK2            __at(0x10DA);	// @ (0x21B * 8 + 2)
#define                                 SSP2MSK2_bit        _BIT_ACCESS(SSP2MSK,2)
// SSP2MSK<SSP2MSK3>
extern volatile __bit                   SSP2MSK3            __at(0x10DB);	// @ (0x21B * 8 + 3)
#define                                 SSP2MSK3_bit        _BIT_ACCESS(SSP2MSK,3)
// SSP2MSK<SSP2MSK4>
extern volatile __bit                   SSP2MSK4            __at(0x10DC);	// @ (0x21B * 8 + 4)
#define                                 SSP2MSK4_bit        _BIT_ACCESS(SSP2MSK,4)
// SSP2MSK<SSP2MSK5>
extern volatile __bit                   SSP2MSK5            __at(0x10DD);	// @ (0x21B * 8 + 5)
#define                                 SSP2MSK5_bit        _BIT_ACCESS(SSP2MSK,5)
// SSP2MSK<SSP2MSK6>
extern volatile __bit                   SSP2MSK6            __at(0x10DE);	// @ (0x21B * 8 + 6)
#define                                 SSP2MSK6_bit        _BIT_ACCESS(SSP2MSK,6)
// SSP2MSK<SSP2MSK7>
extern volatile __bit                   SSP2MSK7            __at(0x10DF);	// @ (0x21B * 8 + 7)
#define                                 SSP2MSK7_bit        _BIT_ACCESS(SSP2MSK,7)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// APFCON<SSSEL>
extern volatile __bit                   SSSEL               __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 SSSEL_bit           _BIT_ACCESS(APFCON,5)
// ICDCON0<SSTEP>
extern volatile __bit                   SSTEP               __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 SSTEP_bit           _BIT_ACCESS(ICDCON0,5)
// PCON<STKOVF>
extern volatile __bit                   STKOVF              __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON,7)
// PCON<STKUNF>
extern volatile __bit                   STKUNF              __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON,6)
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
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS>
extern volatile __bit                   T1GSS               __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 T1GSS_bit           _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0xCA);	// @ (0x19 * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
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
// PIE2<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 TMR4IE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<TMR4IF>
extern volatile __bit                   TMR4IF              __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 TMR4IF_bit          _BIT_ACCESS(PIR2,1)
// T4CON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x20BA);	// @ (0x417 * 8 + 2)
#define                                 TMR4ON_bit          _BIT_ACCESS(T4CON,2)
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
// ICDIO<TRIS_ICDCLK>
extern volatile __bit                   TRIS_ICDCLK         __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 TRIS_ICDCLK_bit     _BIT_ACCESS(ICDIO,2)
// ICDIO<TRIS_ICDDAT>
extern volatile __bit                   TRIS_ICDDAT         __at(0x7C63);	// @ (0xF8C * 8 + 3)
#define                                 TRIS_ICDDAT_bit     _BIT_ACCESS(ICDIO,3)
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0xCF1);	// @ (0x19E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// ICDSTAT<TRP0HLTF>
extern volatile __bit                   TRP0HLTF            __at(0x7C8E);	// @ (0xF91 * 8 + 6)
#define                                 TRP0HLTF_bit        _BIT_ACCESS(ICDSTAT,6)
// ICDSTAT<TRP1HLTF>
extern volatile __bit                   TRP1HLTF            __at(0x7C8F);	// @ (0xF91 * 8 + 7)
#define                                 TRP1HLTF_bit        _BIT_ACCESS(ICDSTAT,7)
// FVRCON<TSEN>
extern volatile __bit                   TSEN                __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 TSEN_bit            _BIT_ACCESS(FVRCON,5)
// FVRCON<TSRNG>
extern volatile __bit                   TSRNG               __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 TSRNG_bit           _BIT_ACCESS(FVRCON,4)
// AD1TX0<TX10>
extern volatile __bit                   TX10                __at(0x3490);	// @ (0x692 * 8 + 0)
#define                                 TX10_bit            _BIT_ACCESS(AD1TX0,0)
// AD1TX0<TX11>
extern volatile __bit                   TX11                __at(0x3491);	// @ (0x692 * 8 + 1)
#define                                 TX11_bit            _BIT_ACCESS(AD1TX0,1)
// AD1TX0<TX12>
extern volatile __bit                   TX12                __at(0x3492);	// @ (0x692 * 8 + 2)
#define                                 TX12_bit            _BIT_ACCESS(AD1TX0,2)
// AD1TX0<TX13>
extern volatile __bit                   TX13                __at(0x3493);	// @ (0x692 * 8 + 3)
#define                                 TX13_bit            _BIT_ACCESS(AD1TX0,3)
// AD1TX0<TX14>
extern volatile __bit                   TX14                __at(0x3494);	// @ (0x692 * 8 + 4)
#define                                 TX14_bit            _BIT_ACCESS(AD1TX0,4)
// AD1TX0<TX15>
extern volatile __bit                   TX15                __at(0x3495);	// @ (0x692 * 8 + 5)
#define                                 TX15_bit            _BIT_ACCESS(AD1TX0,5)
// AD1TX0<TX16>
extern volatile __bit                   TX16                __at(0x3496);	// @ (0x692 * 8 + 6)
#define                                 TX16_bit            _BIT_ACCESS(AD1TX0,6)
// AD1TX0<TX17>
extern volatile __bit                   TX17                __at(0x3497);	// @ (0x692 * 8 + 7)
#define                                 TX17_bit            _BIT_ACCESS(AD1TX0,7)
// AD1TX1<TX18>
extern volatile __bit                   TX18                __at(0x3498);	// @ (0x693 * 8 + 0)
#define                                 TX18_bit            _BIT_ACCESS(AD1TX1,0)
// AD1TX1<TX19>
extern volatile __bit                   TX19                __at(0x3499);	// @ (0x693 * 8 + 1)
#define                                 TX19_bit            _BIT_ACCESS(AD1TX1,1)
// AD1GRD<TX1POL>
extern volatile __bit                   TX1POL              __at(0x38C0);	// @ (0x718 * 8 + 0)
#define                                 TX1POL_bit          _BIT_ACCESS(AD1GRD,0)
// AD2TX0<TX20>
extern volatile __bit                   TX20                __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 TX20_bit            _BIT_ACCESS(AD2TX0,0)
// AD2TX0<TX21>
extern volatile __bit                   TX21                __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 TX21_bit            _BIT_ACCESS(AD2TX0,1)
// AD2TX0<TX22>
extern volatile __bit                   TX22                __at(0x34A2);	// @ (0x694 * 8 + 2)
#define                                 TX22_bit            _BIT_ACCESS(AD2TX0,2)
// AD2TX0<TX23>
extern volatile __bit                   TX23                __at(0x34A3);	// @ (0x694 * 8 + 3)
#define                                 TX23_bit            _BIT_ACCESS(AD2TX0,3)
// AD2TX0<TX24>
extern volatile __bit                   TX24                __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 TX24_bit            _BIT_ACCESS(AD2TX0,4)
// AD2TX0<TX25>
extern volatile __bit                   TX25                __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 TX25_bit            _BIT_ACCESS(AD2TX0,5)
// AD2TX0<TX26>
extern volatile __bit                   TX26                __at(0x34A6);	// @ (0x694 * 8 + 6)
#define                                 TX26_bit            _BIT_ACCESS(AD2TX0,6)
// AD2TX0<TX27>
extern volatile __bit                   TX27                __at(0x34A7);	// @ (0x694 * 8 + 7)
#define                                 TX27_bit            _BIT_ACCESS(AD2TX0,7)
// AD2TX1<TX28>
extern volatile __bit                   TX28                __at(0x34A8);	// @ (0x695 * 8 + 0)
#define                                 TX28_bit            _BIT_ACCESS(AD2TX1,0)
// AD2TX1<TX29>
extern volatile __bit                   TX29                __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 TX29_bit            _BIT_ACCESS(AD2TX1,1)
// AD2GRD<TX2POL>
extern volatile __bit                   TX2POL              __at(0x3CC0);	// @ (0x798 * 8 + 0)
#define                                 TX2POL_bit          _BIT_ACCESS(AD2GRD,0)
// AD1TX1<TX30>
extern volatile __bit                   TX30                __at(0x349A);	// @ (0x693 * 8 + 2)
#define                                 TX30_bit            _BIT_ACCESS(AD1TX1,2)
// AD1TX1<TX31>
extern volatile __bit                   TX31                __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 TX31_bit            _BIT_ACCESS(AD1TX1,3)
// AD1TX1<TX32>
extern volatile __bit                   TX32                __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 TX32_bit            _BIT_ACCESS(AD1TX1,4)
// AD1TX1<TX33>
extern volatile __bit                   TX33                __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 TX33_bit            _BIT_ACCESS(AD1TX1,5)
// AD1TX1<TX34>
extern volatile __bit                   TX34                __at(0x349E);	// @ (0x693 * 8 + 6)
#define                                 TX34_bit            _BIT_ACCESS(AD1TX1,6)
// AD1TX1<TX35>
extern volatile __bit                   TX35                __at(0x349F);	// @ (0x693 * 8 + 7)
#define                                 TX35_bit            _BIT_ACCESS(AD1TX1,7)
// AD2TX1<TX40>
extern volatile __bit                   TX40                __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 TX40_bit            _BIT_ACCESS(AD2TX1,2)
// AD2TX1<TX41>
extern volatile __bit                   TX41                __at(0x34AB);	// @ (0x695 * 8 + 3)
#define                                 TX41_bit            _BIT_ACCESS(AD2TX1,3)
// AD2TX1<TX42>
extern volatile __bit                   TX42                __at(0x34AC);	// @ (0x695 * 8 + 4)
#define                                 TX42_bit            _BIT_ACCESS(AD2TX1,4)
// AD2TX1<TX43>
extern volatile __bit                   TX43                __at(0x34AD);	// @ (0x695 * 8 + 5)
#define                                 TX43_bit            _BIT_ACCESS(AD2TX1,5)
// AD2TX1<TX44>
extern volatile __bit                   TX44                __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 TX44_bit            _BIT_ACCESS(AD2TX1,6)
// AD2TX1<TX45>
extern volatile __bit                   TX45                __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 TX45_bit            _BIT_ACCESS(AD2TX1,7)
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
// ICDSTAT<USRHLTF>
extern volatile __bit                   USRHLTF             __at(0x7C89);	// @ (0xF91 * 8 + 1)
#define                                 USRHLTF_bit         _BIT_ACCESS(ICDSTAT,1)
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
// WPUE<WPUE3>
extern volatile __bit                   WPUE3               __at(0x1083);	// @ (0x210 * 8 + 3)
#define                                 WPUE3_bit           _BIT_ACCESS(WPUE,3)
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
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC16LF1567_H_
