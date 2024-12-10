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

#ifndef _PIC16LF1903_H_
#define _PIC16LF1903_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF1903
 */
#ifndef _XC_H_
#warning Header file pic16lf1903.h included directly. Use #include <xc.h> instead.
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
        unsigned BSR0                   :1;
        unsigned BSR1                   :1;
        unsigned BSR2                   :1;
        unsigned BSR3                   :1;
        unsigned BSR4                   :1;
    };
    struct {
        unsigned BSR                    :5;
    };
} BSRbits_t;
extern volatile BSRbits_t BSRbits __at(0x008);
// bitfield macros
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
#define _BSR_BSR_POSN                                       0x0
#define _BSR_BSR_POSITION                                   0x0
#define _BSR_BSR_SIZE                                       0x5
#define _BSR_BSR_LENGTH                                     0x5
#define _BSR_BSR_MASK                                       0x1F

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

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0x010);
#ifndef _LIB_BUILD
asm("PORTE equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned RE3                    :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0x010);
// bitfield macros
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
        unsigned                        :5;
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
        unsigned                        :2;
        unsigned LCDIF                  :1;
        unsigned                        :1;
        unsigned EEIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_LCDIF_POSN                                    0x2
#define _PIR2_LCDIF_POSITION                                0x2
#define _PIR2_LCDIF_SIZE                                    0x1
#define _PIR2_LCDIF_LENGTH                                  0x1
#define _PIR2_LCDIF_MASK                                    0x4
#define _PIR2_EEIF_POSN                                     0x4
#define _PIR2_EEIF_POSITION                                 0x4
#define _PIR2_EEIF_SIZE                                     0x1
#define _PIR2_EEIF_LENGTH                                   0x1
#define _PIR2_EEIF_MASK                                     0x10

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
        unsigned                        :1;
        unsigned T1GGO                  :1;
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
#define _T1GCON_T1GGO_POSN                                  0x3
#define _T1GCON_T1GGO_POSITION                              0x3
#define _T1GCON_T1GGO_SIZE                                  0x1
#define _T1GCON_T1GGO_LENGTH                                0x1
#define _T1GCON_T1GGO_MASK                                  0x8

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

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0x090);
#ifndef _LIB_BUILD
asm("TRISE equ 090h");
#endif

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
        unsigned                        :5;
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
        unsigned                        :2;
        unsigned LCDIE                  :1;
        unsigned                        :1;
        unsigned EEIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_LCDIE_POSN                                    0x2
#define _PIE2_LCDIE_POSITION                                0x2
#define _PIE2_LCDIE_SIZE                                    0x1
#define _PIE2_LCDIE_LENGTH                                  0x1
#define _PIE2_LCDIE_MASK                                    0x4
#define _PIE2_EEIE_POSN                                     0x4
#define _PIE2_EEIE_POSITION                                 0x4
#define _PIE2_EEIE_SIZE                                     0x1
#define _PIE2_EEIE_LENGTH                                   0x1
#define _PIE2_EEIE_MASK                                     0x10

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x095);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned _PS0                    :1;  // Note: Changed by MikroE
        unsigned _PS1                    :1;  // Note: Changed by MikroE
        unsigned _PS2                    :1;  // Note: Changed by MikroE
        unsigned PSA                    :1;
        unsigned TMR0SE                 :1;
        unsigned TMR0CS                 :1;
        unsigned INTEDG                 :1;
        unsigned nWPUEN                 :1;
    };
    struct {
        unsigned PS                     :3;
        unsigned                        :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __at(0x095);
// bitfield macros
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
#define _OPTION_REG_PS_POSN                                 0x0
#define _OPTION_REG_PS_POSITION                             0x0
#define _OPTION_REG_PS_SIZE                                 0x3
#define _OPTION_REG_PS_LENGTH                               0x3
#define _OPTION_REG_PS_MASK                                 0x7
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
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
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
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2

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
        unsigned CDAFVR                 :2;
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
#define _FVRCON_CDAFVR_POSN                                 0x2
#define _FVRCON_CDAFVR_POSITION                             0x2
#define _FVRCON_CDAFVR_SIZE                                 0x2
#define _FVRCON_CDAFVR_LENGTH                               0x2
#define _FVRCON_CDAFVR_MASK                                 0xC

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
} WPUEbits_t;
extern volatile WPUEbits_t WPUEbits __at(0x210);
// bitfield macros
#define _WPUE_WPUE3_POSN                                    0x3
#define _WPUE_WPUE3_POSITION                                0x3
#define _WPUE_WPUE3_SIZE                                    0x1
#define _WPUE_WPUE3_LENGTH                                  0x1
#define _WPUE_WPUE3_MASK                                    0x8

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

// Register: LCDCON
#define LCDCON LCDCON
extern volatile unsigned char           LCDCON              __at(0x791);
#ifndef _LIB_BUILD
asm("LCDCON equ 0791h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LMUX                   :2;
        unsigned CS                     :2;
        unsigned                        :1;
        unsigned WERR                   :1;
        unsigned SLPEN                  :1;
        unsigned LCDEN                  :1;
    };
    struct {
        unsigned LMUX0                  :1;
        unsigned LMUX1                  :1;
        unsigned CS0                    :1;
        unsigned CS1                    :1;
    };
} LCDCONbits_t;
extern volatile LCDCONbits_t LCDCONbits __at(0x791);
// bitfield macros
#define _LCDCON_LMUX_POSN                                   0x0
#define _LCDCON_LMUX_POSITION                               0x0
#define _LCDCON_LMUX_SIZE                                   0x2
#define _LCDCON_LMUX_LENGTH                                 0x2
#define _LCDCON_LMUX_MASK                                   0x3
#define _LCDCON_CS_POSN                                     0x2
#define _LCDCON_CS_POSITION                                 0x2
#define _LCDCON_CS_SIZE                                     0x2
#define _LCDCON_CS_LENGTH                                   0x2
#define _LCDCON_CS_MASK                                     0xC
#define _LCDCON_WERR_POSN                                   0x5
#define _LCDCON_WERR_POSITION                               0x5
#define _LCDCON_WERR_SIZE                                   0x1
#define _LCDCON_WERR_LENGTH                                 0x1
#define _LCDCON_WERR_MASK                                   0x20
#define _LCDCON_SLPEN_POSN                                  0x6
#define _LCDCON_SLPEN_POSITION                              0x6
#define _LCDCON_SLPEN_SIZE                                  0x1
#define _LCDCON_SLPEN_LENGTH                                0x1
#define _LCDCON_SLPEN_MASK                                  0x40
#define _LCDCON_LCDEN_POSN                                  0x7
#define _LCDCON_LCDEN_POSITION                              0x7
#define _LCDCON_LCDEN_SIZE                                  0x1
#define _LCDCON_LCDEN_LENGTH                                0x1
#define _LCDCON_LCDEN_MASK                                  0x80
#define _LCDCON_LMUX0_POSN                                  0x0
#define _LCDCON_LMUX0_POSITION                              0x0
#define _LCDCON_LMUX0_SIZE                                  0x1
#define _LCDCON_LMUX0_LENGTH                                0x1
#define _LCDCON_LMUX0_MASK                                  0x1
#define _LCDCON_LMUX1_POSN                                  0x1
#define _LCDCON_LMUX1_POSITION                              0x1
#define _LCDCON_LMUX1_SIZE                                  0x1
#define _LCDCON_LMUX1_LENGTH                                0x1
#define _LCDCON_LMUX1_MASK                                  0x2
#define _LCDCON_CS0_POSN                                    0x2
#define _LCDCON_CS0_POSITION                                0x2
#define _LCDCON_CS0_SIZE                                    0x1
#define _LCDCON_CS0_LENGTH                                  0x1
#define _LCDCON_CS0_MASK                                    0x4
#define _LCDCON_CS1_POSN                                    0x3
#define _LCDCON_CS1_POSITION                                0x3
#define _LCDCON_CS1_SIZE                                    0x1
#define _LCDCON_CS1_LENGTH                                  0x1
#define _LCDCON_CS1_MASK                                    0x8

// Register: LCDPS
#define LCDPS LCDPS
extern volatile unsigned char           LCDPS               __at(0x792);
#ifndef _LIB_BUILD
asm("LCDPS equ 0792h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LP                     :4;
        unsigned WA                     :1;
        unsigned LCDA                   :1;
        unsigned BIASMD                 :1;
        unsigned WFT                    :1;
    };
    struct {
        unsigned LP0                    :1;
        unsigned LP1                    :1;
        unsigned LP2                    :1;
        unsigned LP3                    :1;
    };
} LCDPSbits_t;
extern volatile LCDPSbits_t LCDPSbits __at(0x792);
// bitfield macros
#define _LCDPS_LP_POSN                                      0x0
#define _LCDPS_LP_POSITION                                  0x0
#define _LCDPS_LP_SIZE                                      0x4
#define _LCDPS_LP_LENGTH                                    0x4
#define _LCDPS_LP_MASK                                      0xF
#define _LCDPS_WA_POSN                                      0x4
#define _LCDPS_WA_POSITION                                  0x4
#define _LCDPS_WA_SIZE                                      0x1
#define _LCDPS_WA_LENGTH                                    0x1
#define _LCDPS_WA_MASK                                      0x10
#define _LCDPS_LCDA_POSN                                    0x5
#define _LCDPS_LCDA_POSITION                                0x5
#define _LCDPS_LCDA_SIZE                                    0x1
#define _LCDPS_LCDA_LENGTH                                  0x1
#define _LCDPS_LCDA_MASK                                    0x20
#define _LCDPS_BIASMD_POSN                                  0x6
#define _LCDPS_BIASMD_POSITION                              0x6
#define _LCDPS_BIASMD_SIZE                                  0x1
#define _LCDPS_BIASMD_LENGTH                                0x1
#define _LCDPS_BIASMD_MASK                                  0x40
#define _LCDPS_WFT_POSN                                     0x7
#define _LCDPS_WFT_POSITION                                 0x7
#define _LCDPS_WFT_SIZE                                     0x1
#define _LCDPS_WFT_LENGTH                                   0x1
#define _LCDPS_WFT_MASK                                     0x80
#define _LCDPS_LP0_POSN                                     0x0
#define _LCDPS_LP0_POSITION                                 0x0
#define _LCDPS_LP0_SIZE                                     0x1
#define _LCDPS_LP0_LENGTH                                   0x1
#define _LCDPS_LP0_MASK                                     0x1
#define _LCDPS_LP1_POSN                                     0x1
#define _LCDPS_LP1_POSITION                                 0x1
#define _LCDPS_LP1_SIZE                                     0x1
#define _LCDPS_LP1_LENGTH                                   0x1
#define _LCDPS_LP1_MASK                                     0x2
#define _LCDPS_LP2_POSN                                     0x2
#define _LCDPS_LP2_POSITION                                 0x2
#define _LCDPS_LP2_SIZE                                     0x1
#define _LCDPS_LP2_LENGTH                                   0x1
#define _LCDPS_LP2_MASK                                     0x4
#define _LCDPS_LP3_POSN                                     0x3
#define _LCDPS_LP3_POSITION                                 0x3
#define _LCDPS_LP3_SIZE                                     0x1
#define _LCDPS_LP3_LENGTH                                   0x1
#define _LCDPS_LP3_MASK                                     0x8

// Register: LCDREF
#define LCDREF LCDREF
extern volatile unsigned char           LCDREF              __at(0x793);
#ifndef _LIB_BUILD
asm("LCDREF equ 0793h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned VLCD1PE                :1;
        unsigned VLCD2PE                :1;
        unsigned VLCD3PE                :1;
        unsigned                        :1;
        unsigned LCDIRI                 :1;
        unsigned                        :1;
        unsigned LCDIRE                 :1;
    };
} LCDREFbits_t;
extern volatile LCDREFbits_t LCDREFbits __at(0x793);
// bitfield macros
#define _LCDREF_VLCD1PE_POSN                                0x1
#define _LCDREF_VLCD1PE_POSITION                            0x1
#define _LCDREF_VLCD1PE_SIZE                                0x1
#define _LCDREF_VLCD1PE_LENGTH                              0x1
#define _LCDREF_VLCD1PE_MASK                                0x2
#define _LCDREF_VLCD2PE_POSN                                0x2
#define _LCDREF_VLCD2PE_POSITION                            0x2
#define _LCDREF_VLCD2PE_SIZE                                0x1
#define _LCDREF_VLCD2PE_LENGTH                              0x1
#define _LCDREF_VLCD2PE_MASK                                0x4
#define _LCDREF_VLCD3PE_POSN                                0x3
#define _LCDREF_VLCD3PE_POSITION                            0x3
#define _LCDREF_VLCD3PE_SIZE                                0x1
#define _LCDREF_VLCD3PE_LENGTH                              0x1
#define _LCDREF_VLCD3PE_MASK                                0x8
#define _LCDREF_LCDIRI_POSN                                 0x5
#define _LCDREF_LCDIRI_POSITION                             0x5
#define _LCDREF_LCDIRI_SIZE                                 0x1
#define _LCDREF_LCDIRI_LENGTH                               0x1
#define _LCDREF_LCDIRI_MASK                                 0x20
#define _LCDREF_LCDIRE_POSN                                 0x7
#define _LCDREF_LCDIRE_POSITION                             0x7
#define _LCDREF_LCDIRE_SIZE                                 0x1
#define _LCDREF_LCDIRE_LENGTH                               0x1
#define _LCDREF_LCDIRE_MASK                                 0x80

// Register: LCDCST
#define LCDCST LCDCST
extern volatile unsigned char           LCDCST              __at(0x794);
#ifndef _LIB_BUILD
asm("LCDCST equ 0794h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDCST                 :3;
    };
    struct {
        unsigned LCDCST0                :1;
        unsigned LCDCST1                :1;
        unsigned LCDCST2                :1;
    };
} LCDCSTbits_t;
extern volatile LCDCSTbits_t LCDCSTbits __at(0x794);
// bitfield macros
#define _LCDCST_LCDCST_POSN                                 0x0
#define _LCDCST_LCDCST_POSITION                             0x0
#define _LCDCST_LCDCST_SIZE                                 0x3
#define _LCDCST_LCDCST_LENGTH                               0x3
#define _LCDCST_LCDCST_MASK                                 0x7
#define _LCDCST_LCDCST0_POSN                                0x0
#define _LCDCST_LCDCST0_POSITION                            0x0
#define _LCDCST_LCDCST0_SIZE                                0x1
#define _LCDCST_LCDCST0_LENGTH                              0x1
#define _LCDCST_LCDCST0_MASK                                0x1
#define _LCDCST_LCDCST1_POSN                                0x1
#define _LCDCST_LCDCST1_POSITION                            0x1
#define _LCDCST_LCDCST1_SIZE                                0x1
#define _LCDCST_LCDCST1_LENGTH                              0x1
#define _LCDCST_LCDCST1_MASK                                0x2
#define _LCDCST_LCDCST2_POSN                                0x2
#define _LCDCST_LCDCST2_POSITION                            0x2
#define _LCDCST_LCDCST2_SIZE                                0x1
#define _LCDCST_LCDCST2_LENGTH                              0x1
#define _LCDCST_LCDCST2_MASK                                0x4

// Register: LCDRL
#define LCDRL LCDRL
extern volatile unsigned char           LCDRL               __at(0x795);
#ifndef _LIB_BUILD
asm("LCDRL equ 0795h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LRLAT                  :3;
        unsigned                        :1;
        unsigned LRLBP                  :2;
        unsigned LRLAP                  :2;
    };
    struct {
        unsigned LRLAT0                 :1;
        unsigned LRLAT1                 :1;
        unsigned LRLAT2                 :1;
        unsigned                        :1;
        unsigned LRLBP0                 :1;
        unsigned LRLBP1                 :1;
        unsigned LRLAP0                 :1;
        unsigned LRLAP1                 :1;
    };
} LCDRLbits_t;
extern volatile LCDRLbits_t LCDRLbits __at(0x795);
// bitfield macros
#define _LCDRL_LRLAT_POSN                                   0x0
#define _LCDRL_LRLAT_POSITION                               0x0
#define _LCDRL_LRLAT_SIZE                                   0x3
#define _LCDRL_LRLAT_LENGTH                                 0x3
#define _LCDRL_LRLAT_MASK                                   0x7
#define _LCDRL_LRLBP_POSN                                   0x4
#define _LCDRL_LRLBP_POSITION                               0x4
#define _LCDRL_LRLBP_SIZE                                   0x2
#define _LCDRL_LRLBP_LENGTH                                 0x2
#define _LCDRL_LRLBP_MASK                                   0x30
#define _LCDRL_LRLAP_POSN                                   0x6
#define _LCDRL_LRLAP_POSITION                               0x6
#define _LCDRL_LRLAP_SIZE                                   0x2
#define _LCDRL_LRLAP_LENGTH                                 0x2
#define _LCDRL_LRLAP_MASK                                   0xC0
#define _LCDRL_LRLAT0_POSN                                  0x0
#define _LCDRL_LRLAT0_POSITION                              0x0
#define _LCDRL_LRLAT0_SIZE                                  0x1
#define _LCDRL_LRLAT0_LENGTH                                0x1
#define _LCDRL_LRLAT0_MASK                                  0x1
#define _LCDRL_LRLAT1_POSN                                  0x1
#define _LCDRL_LRLAT1_POSITION                              0x1
#define _LCDRL_LRLAT1_SIZE                                  0x1
#define _LCDRL_LRLAT1_LENGTH                                0x1
#define _LCDRL_LRLAT1_MASK                                  0x2
#define _LCDRL_LRLAT2_POSN                                  0x2
#define _LCDRL_LRLAT2_POSITION                              0x2
#define _LCDRL_LRLAT2_SIZE                                  0x1
#define _LCDRL_LRLAT2_LENGTH                                0x1
#define _LCDRL_LRLAT2_MASK                                  0x4
#define _LCDRL_LRLBP0_POSN                                  0x4
#define _LCDRL_LRLBP0_POSITION                              0x4
#define _LCDRL_LRLBP0_SIZE                                  0x1
#define _LCDRL_LRLBP0_LENGTH                                0x1
#define _LCDRL_LRLBP0_MASK                                  0x10
#define _LCDRL_LRLBP1_POSN                                  0x5
#define _LCDRL_LRLBP1_POSITION                              0x5
#define _LCDRL_LRLBP1_SIZE                                  0x1
#define _LCDRL_LRLBP1_LENGTH                                0x1
#define _LCDRL_LRLBP1_MASK                                  0x20
#define _LCDRL_LRLAP0_POSN                                  0x6
#define _LCDRL_LRLAP0_POSITION                              0x6
#define _LCDRL_LRLAP0_SIZE                                  0x1
#define _LCDRL_LRLAP0_LENGTH                                0x1
#define _LCDRL_LRLAP0_MASK                                  0x40
#define _LCDRL_LRLAP1_POSN                                  0x7
#define _LCDRL_LRLAP1_POSITION                              0x7
#define _LCDRL_LRLAP1_SIZE                                  0x1
#define _LCDRL_LRLAP1_LENGTH                                0x1
#define _LCDRL_LRLAP1_MASK                                  0x80

// Register: LCDSE0
#define LCDSE0 LCDSE0
extern volatile unsigned char           LCDSE0              __at(0x798);
#ifndef _LIB_BUILD
asm("LCDSE0 equ 0798h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE0                    :1;
        unsigned SE1                    :1;
        unsigned SE2                    :1;
        unsigned SE3                    :1;
        unsigned SE4                    :1;
        unsigned SE5                    :1;
        unsigned SE6                    :1;
        unsigned SE7                    :1;
    };
} LCDSE0bits_t;
extern volatile LCDSE0bits_t LCDSE0bits __at(0x798);
// bitfield macros
#define _LCDSE0_SE0_POSN                                    0x0
#define _LCDSE0_SE0_POSITION                                0x0
#define _LCDSE0_SE0_SIZE                                    0x1
#define _LCDSE0_SE0_LENGTH                                  0x1
#define _LCDSE0_SE0_MASK                                    0x1
#define _LCDSE0_SE1_POSN                                    0x1
#define _LCDSE0_SE1_POSITION                                0x1
#define _LCDSE0_SE1_SIZE                                    0x1
#define _LCDSE0_SE1_LENGTH                                  0x1
#define _LCDSE0_SE1_MASK                                    0x2
#define _LCDSE0_SE2_POSN                                    0x2
#define _LCDSE0_SE2_POSITION                                0x2
#define _LCDSE0_SE2_SIZE                                    0x1
#define _LCDSE0_SE2_LENGTH                                  0x1
#define _LCDSE0_SE2_MASK                                    0x4
#define _LCDSE0_SE3_POSN                                    0x3
#define _LCDSE0_SE3_POSITION                                0x3
#define _LCDSE0_SE3_SIZE                                    0x1
#define _LCDSE0_SE3_LENGTH                                  0x1
#define _LCDSE0_SE3_MASK                                    0x8
#define _LCDSE0_SE4_POSN                                    0x4
#define _LCDSE0_SE4_POSITION                                0x4
#define _LCDSE0_SE4_SIZE                                    0x1
#define _LCDSE0_SE4_LENGTH                                  0x1
#define _LCDSE0_SE4_MASK                                    0x10
#define _LCDSE0_SE5_POSN                                    0x5
#define _LCDSE0_SE5_POSITION                                0x5
#define _LCDSE0_SE5_SIZE                                    0x1
#define _LCDSE0_SE5_LENGTH                                  0x1
#define _LCDSE0_SE5_MASK                                    0x20
#define _LCDSE0_SE6_POSN                                    0x6
#define _LCDSE0_SE6_POSITION                                0x6
#define _LCDSE0_SE6_SIZE                                    0x1
#define _LCDSE0_SE6_LENGTH                                  0x1
#define _LCDSE0_SE6_MASK                                    0x40
#define _LCDSE0_SE7_POSN                                    0x7
#define _LCDSE0_SE7_POSITION                                0x7
#define _LCDSE0_SE7_SIZE                                    0x1
#define _LCDSE0_SE7_LENGTH                                  0x1
#define _LCDSE0_SE7_MASK                                    0x80

// Register: LCDSE1
#define LCDSE1 LCDSE1
extern volatile unsigned char           LCDSE1              __at(0x799);
#ifndef _LIB_BUILD
asm("LCDSE1 equ 0799h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE8                    :1;
        unsigned SE9                    :1;
        unsigned SE10                   :1;
        unsigned SE11                   :1;
        unsigned SE12                   :1;
        unsigned SE13                   :1;
        unsigned SE14                   :1;
        unsigned SE15                   :1;
    };
} LCDSE1bits_t;
extern volatile LCDSE1bits_t LCDSE1bits __at(0x799);
// bitfield macros
#define _LCDSE1_SE8_POSN                                    0x0
#define _LCDSE1_SE8_POSITION                                0x0
#define _LCDSE1_SE8_SIZE                                    0x1
#define _LCDSE1_SE8_LENGTH                                  0x1
#define _LCDSE1_SE8_MASK                                    0x1
#define _LCDSE1_SE9_POSN                                    0x1
#define _LCDSE1_SE9_POSITION                                0x1
#define _LCDSE1_SE9_SIZE                                    0x1
#define _LCDSE1_SE9_LENGTH                                  0x1
#define _LCDSE1_SE9_MASK                                    0x2
#define _LCDSE1_SE10_POSN                                   0x2
#define _LCDSE1_SE10_POSITION                               0x2
#define _LCDSE1_SE10_SIZE                                   0x1
#define _LCDSE1_SE10_LENGTH                                 0x1
#define _LCDSE1_SE10_MASK                                   0x4
#define _LCDSE1_SE11_POSN                                   0x3
#define _LCDSE1_SE11_POSITION                               0x3
#define _LCDSE1_SE11_SIZE                                   0x1
#define _LCDSE1_SE11_LENGTH                                 0x1
#define _LCDSE1_SE11_MASK                                   0x8
#define _LCDSE1_SE12_POSN                                   0x4
#define _LCDSE1_SE12_POSITION                               0x4
#define _LCDSE1_SE12_SIZE                                   0x1
#define _LCDSE1_SE12_LENGTH                                 0x1
#define _LCDSE1_SE12_MASK                                   0x10
#define _LCDSE1_SE13_POSN                                   0x5
#define _LCDSE1_SE13_POSITION                               0x5
#define _LCDSE1_SE13_SIZE                                   0x1
#define _LCDSE1_SE13_LENGTH                                 0x1
#define _LCDSE1_SE13_MASK                                   0x20
#define _LCDSE1_SE14_POSN                                   0x6
#define _LCDSE1_SE14_POSITION                               0x6
#define _LCDSE1_SE14_SIZE                                   0x1
#define _LCDSE1_SE14_LENGTH                                 0x1
#define _LCDSE1_SE14_MASK                                   0x40
#define _LCDSE1_SE15_POSN                                   0x7
#define _LCDSE1_SE15_POSITION                               0x7
#define _LCDSE1_SE15_SIZE                                   0x1
#define _LCDSE1_SE15_LENGTH                                 0x1
#define _LCDSE1_SE15_MASK                                   0x80

// Register: LCDSE3
#define LCDSE3 LCDSE3
extern volatile unsigned char           LCDSE3              __at(0x79B);
#ifndef _LIB_BUILD
asm("LCDSE3 equ 079Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE24                   :1;
        unsigned SE25                   :1;
        unsigned SE26                   :1;
    };
} LCDSE3bits_t;
extern volatile LCDSE3bits_t LCDSE3bits __at(0x79B);
// bitfield macros
#define _LCDSE3_SE24_POSN                                   0x0
#define _LCDSE3_SE24_POSITION                               0x0
#define _LCDSE3_SE24_SIZE                                   0x1
#define _LCDSE3_SE24_LENGTH                                 0x1
#define _LCDSE3_SE24_MASK                                   0x1
#define _LCDSE3_SE25_POSN                                   0x1
#define _LCDSE3_SE25_POSITION                               0x1
#define _LCDSE3_SE25_SIZE                                   0x1
#define _LCDSE3_SE25_LENGTH                                 0x1
#define _LCDSE3_SE25_MASK                                   0x2
#define _LCDSE3_SE26_POSN                                   0x2
#define _LCDSE3_SE26_POSITION                               0x2
#define _LCDSE3_SE26_SIZE                                   0x1
#define _LCDSE3_SE26_LENGTH                                 0x1
#define _LCDSE3_SE26_MASK                                   0x4

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
extern volatile unsigned char           LCDDATA0            __at(0x7A0);
#ifndef _LIB_BUILD
asm("LCDDATA0 equ 07A0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0COM0               :1;
        unsigned SEG1COM0               :1;
        unsigned SEG2COM0               :1;
        unsigned SEG3COM0               :1;
        unsigned SEG4COM0               :1;
        unsigned SEG5COM0               :1;
        unsigned SEG6COM0               :1;
        unsigned SEG7COM0               :1;
    };
} LCDDATA0bits_t;
extern volatile LCDDATA0bits_t LCDDATA0bits __at(0x7A0);
// bitfield macros
#define _LCDDATA0_SEG0COM0_POSN                             0x0
#define _LCDDATA0_SEG0COM0_POSITION                         0x0
#define _LCDDATA0_SEG0COM0_SIZE                             0x1
#define _LCDDATA0_SEG0COM0_LENGTH                           0x1
#define _LCDDATA0_SEG0COM0_MASK                             0x1
#define _LCDDATA0_SEG1COM0_POSN                             0x1
#define _LCDDATA0_SEG1COM0_POSITION                         0x1
#define _LCDDATA0_SEG1COM0_SIZE                             0x1
#define _LCDDATA0_SEG1COM0_LENGTH                           0x1
#define _LCDDATA0_SEG1COM0_MASK                             0x2
#define _LCDDATA0_SEG2COM0_POSN                             0x2
#define _LCDDATA0_SEG2COM0_POSITION                         0x2
#define _LCDDATA0_SEG2COM0_SIZE                             0x1
#define _LCDDATA0_SEG2COM0_LENGTH                           0x1
#define _LCDDATA0_SEG2COM0_MASK                             0x4
#define _LCDDATA0_SEG3COM0_POSN                             0x3
#define _LCDDATA0_SEG3COM0_POSITION                         0x3
#define _LCDDATA0_SEG3COM0_SIZE                             0x1
#define _LCDDATA0_SEG3COM0_LENGTH                           0x1
#define _LCDDATA0_SEG3COM0_MASK                             0x8
#define _LCDDATA0_SEG4COM0_POSN                             0x4
#define _LCDDATA0_SEG4COM0_POSITION                         0x4
#define _LCDDATA0_SEG4COM0_SIZE                             0x1
#define _LCDDATA0_SEG4COM0_LENGTH                           0x1
#define _LCDDATA0_SEG4COM0_MASK                             0x10
#define _LCDDATA0_SEG5COM0_POSN                             0x5
#define _LCDDATA0_SEG5COM0_POSITION                         0x5
#define _LCDDATA0_SEG5COM0_SIZE                             0x1
#define _LCDDATA0_SEG5COM0_LENGTH                           0x1
#define _LCDDATA0_SEG5COM0_MASK                             0x20
#define _LCDDATA0_SEG6COM0_POSN                             0x6
#define _LCDDATA0_SEG6COM0_POSITION                         0x6
#define _LCDDATA0_SEG6COM0_SIZE                             0x1
#define _LCDDATA0_SEG6COM0_LENGTH                           0x1
#define _LCDDATA0_SEG6COM0_MASK                             0x40
#define _LCDDATA0_SEG7COM0_POSN                             0x7
#define _LCDDATA0_SEG7COM0_POSITION                         0x7
#define _LCDDATA0_SEG7COM0_SIZE                             0x1
#define _LCDDATA0_SEG7COM0_LENGTH                           0x1
#define _LCDDATA0_SEG7COM0_MASK                             0x80

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
extern volatile unsigned char           LCDDATA1            __at(0x7A1);
#ifndef _LIB_BUILD
asm("LCDDATA1 equ 07A1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8COM0               :1;
        unsigned SEG9COM0               :1;
        unsigned SEG10COM0              :1;
        unsigned SEG11COM0              :1;
        unsigned SEG12COM0              :1;
        unsigned SEG13COM0              :1;
        unsigned SEG14COM0              :1;
        unsigned SEG15COM0              :1;
    };
} LCDDATA1bits_t;
extern volatile LCDDATA1bits_t LCDDATA1bits __at(0x7A1);
// bitfield macros
#define _LCDDATA1_SEG8COM0_POSN                             0x0
#define _LCDDATA1_SEG8COM0_POSITION                         0x0
#define _LCDDATA1_SEG8COM0_SIZE                             0x1
#define _LCDDATA1_SEG8COM0_LENGTH                           0x1
#define _LCDDATA1_SEG8COM0_MASK                             0x1
#define _LCDDATA1_SEG9COM0_POSN                             0x1
#define _LCDDATA1_SEG9COM0_POSITION                         0x1
#define _LCDDATA1_SEG9COM0_SIZE                             0x1
#define _LCDDATA1_SEG9COM0_LENGTH                           0x1
#define _LCDDATA1_SEG9COM0_MASK                             0x2
#define _LCDDATA1_SEG10COM0_POSN                            0x2
#define _LCDDATA1_SEG10COM0_POSITION                        0x2
#define _LCDDATA1_SEG10COM0_SIZE                            0x1
#define _LCDDATA1_SEG10COM0_LENGTH                          0x1
#define _LCDDATA1_SEG10COM0_MASK                            0x4
#define _LCDDATA1_SEG11COM0_POSN                            0x3
#define _LCDDATA1_SEG11COM0_POSITION                        0x3
#define _LCDDATA1_SEG11COM0_SIZE                            0x1
#define _LCDDATA1_SEG11COM0_LENGTH                          0x1
#define _LCDDATA1_SEG11COM0_MASK                            0x8
#define _LCDDATA1_SEG12COM0_POSN                            0x4
#define _LCDDATA1_SEG12COM0_POSITION                        0x4
#define _LCDDATA1_SEG12COM0_SIZE                            0x1
#define _LCDDATA1_SEG12COM0_LENGTH                          0x1
#define _LCDDATA1_SEG12COM0_MASK                            0x10
#define _LCDDATA1_SEG13COM0_POSN                            0x5
#define _LCDDATA1_SEG13COM0_POSITION                        0x5
#define _LCDDATA1_SEG13COM0_SIZE                            0x1
#define _LCDDATA1_SEG13COM0_LENGTH                          0x1
#define _LCDDATA1_SEG13COM0_MASK                            0x20
#define _LCDDATA1_SEG14COM0_POSN                            0x6
#define _LCDDATA1_SEG14COM0_POSITION                        0x6
#define _LCDDATA1_SEG14COM0_SIZE                            0x1
#define _LCDDATA1_SEG14COM0_LENGTH                          0x1
#define _LCDDATA1_SEG14COM0_MASK                            0x40
#define _LCDDATA1_SEG15COM0_POSN                            0x7
#define _LCDDATA1_SEG15COM0_POSITION                        0x7
#define _LCDDATA1_SEG15COM0_SIZE                            0x1
#define _LCDDATA1_SEG15COM0_LENGTH                          0x1
#define _LCDDATA1_SEG15COM0_MASK                            0x80

// Register: LCDDATA3
#define LCDDATA3 LCDDATA3
extern volatile unsigned char           LCDDATA3            __at(0x7A3);
#ifndef _LIB_BUILD
asm("LCDDATA3 equ 07A3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0COM1               :1;
        unsigned SEG1COM1               :1;
        unsigned SEG2COM1               :1;
        unsigned SEG3COM1               :1;
        unsigned SEG4COM1               :1;
        unsigned SEG5COM1               :1;
        unsigned SEG6COM1               :1;
        unsigned SEG7COM1               :1;
    };
} LCDDATA3bits_t;
extern volatile LCDDATA3bits_t LCDDATA3bits __at(0x7A3);
// bitfield macros
#define _LCDDATA3_SEG0COM1_POSN                             0x0
#define _LCDDATA3_SEG0COM1_POSITION                         0x0
#define _LCDDATA3_SEG0COM1_SIZE                             0x1
#define _LCDDATA3_SEG0COM1_LENGTH                           0x1
#define _LCDDATA3_SEG0COM1_MASK                             0x1
#define _LCDDATA3_SEG1COM1_POSN                             0x1
#define _LCDDATA3_SEG1COM1_POSITION                         0x1
#define _LCDDATA3_SEG1COM1_SIZE                             0x1
#define _LCDDATA3_SEG1COM1_LENGTH                           0x1
#define _LCDDATA3_SEG1COM1_MASK                             0x2
#define _LCDDATA3_SEG2COM1_POSN                             0x2
#define _LCDDATA3_SEG2COM1_POSITION                         0x2
#define _LCDDATA3_SEG2COM1_SIZE                             0x1
#define _LCDDATA3_SEG2COM1_LENGTH                           0x1
#define _LCDDATA3_SEG2COM1_MASK                             0x4
#define _LCDDATA3_SEG3COM1_POSN                             0x3
#define _LCDDATA3_SEG3COM1_POSITION                         0x3
#define _LCDDATA3_SEG3COM1_SIZE                             0x1
#define _LCDDATA3_SEG3COM1_LENGTH                           0x1
#define _LCDDATA3_SEG3COM1_MASK                             0x8
#define _LCDDATA3_SEG4COM1_POSN                             0x4
#define _LCDDATA3_SEG4COM1_POSITION                         0x4
#define _LCDDATA3_SEG4COM1_SIZE                             0x1
#define _LCDDATA3_SEG4COM1_LENGTH                           0x1
#define _LCDDATA3_SEG4COM1_MASK                             0x10
#define _LCDDATA3_SEG5COM1_POSN                             0x5
#define _LCDDATA3_SEG5COM1_POSITION                         0x5
#define _LCDDATA3_SEG5COM1_SIZE                             0x1
#define _LCDDATA3_SEG5COM1_LENGTH                           0x1
#define _LCDDATA3_SEG5COM1_MASK                             0x20
#define _LCDDATA3_SEG6COM1_POSN                             0x6
#define _LCDDATA3_SEG6COM1_POSITION                         0x6
#define _LCDDATA3_SEG6COM1_SIZE                             0x1
#define _LCDDATA3_SEG6COM1_LENGTH                           0x1
#define _LCDDATA3_SEG6COM1_MASK                             0x40
#define _LCDDATA3_SEG7COM1_POSN                             0x7
#define _LCDDATA3_SEG7COM1_POSITION                         0x7
#define _LCDDATA3_SEG7COM1_SIZE                             0x1
#define _LCDDATA3_SEG7COM1_LENGTH                           0x1
#define _LCDDATA3_SEG7COM1_MASK                             0x80

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
extern volatile unsigned char           LCDDATA4            __at(0x7A4);
#ifndef _LIB_BUILD
asm("LCDDATA4 equ 07A4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8COM1               :1;
        unsigned SEG9COM1               :1;
        unsigned SEG10COM1              :1;
        unsigned SEG11COM1              :1;
        unsigned SEG12COM1              :1;
        unsigned SEG13COM1              :1;
        unsigned SEG14COM1              :1;
        unsigned SEG15COM1              :1;
    };
} LCDDATA4bits_t;
extern volatile LCDDATA4bits_t LCDDATA4bits __at(0x7A4);
// bitfield macros
#define _LCDDATA4_SEG8COM1_POSN                             0x0
#define _LCDDATA4_SEG8COM1_POSITION                         0x0
#define _LCDDATA4_SEG8COM1_SIZE                             0x1
#define _LCDDATA4_SEG8COM1_LENGTH                           0x1
#define _LCDDATA4_SEG8COM1_MASK                             0x1
#define _LCDDATA4_SEG9COM1_POSN                             0x1
#define _LCDDATA4_SEG9COM1_POSITION                         0x1
#define _LCDDATA4_SEG9COM1_SIZE                             0x1
#define _LCDDATA4_SEG9COM1_LENGTH                           0x1
#define _LCDDATA4_SEG9COM1_MASK                             0x2
#define _LCDDATA4_SEG10COM1_POSN                            0x2
#define _LCDDATA4_SEG10COM1_POSITION                        0x2
#define _LCDDATA4_SEG10COM1_SIZE                            0x1
#define _LCDDATA4_SEG10COM1_LENGTH                          0x1
#define _LCDDATA4_SEG10COM1_MASK                            0x4
#define _LCDDATA4_SEG11COM1_POSN                            0x3
#define _LCDDATA4_SEG11COM1_POSITION                        0x3
#define _LCDDATA4_SEG11COM1_SIZE                            0x1
#define _LCDDATA4_SEG11COM1_LENGTH                          0x1
#define _LCDDATA4_SEG11COM1_MASK                            0x8
#define _LCDDATA4_SEG12COM1_POSN                            0x4
#define _LCDDATA4_SEG12COM1_POSITION                        0x4
#define _LCDDATA4_SEG12COM1_SIZE                            0x1
#define _LCDDATA4_SEG12COM1_LENGTH                          0x1
#define _LCDDATA4_SEG12COM1_MASK                            0x10
#define _LCDDATA4_SEG13COM1_POSN                            0x5
#define _LCDDATA4_SEG13COM1_POSITION                        0x5
#define _LCDDATA4_SEG13COM1_SIZE                            0x1
#define _LCDDATA4_SEG13COM1_LENGTH                          0x1
#define _LCDDATA4_SEG13COM1_MASK                            0x20
#define _LCDDATA4_SEG14COM1_POSN                            0x6
#define _LCDDATA4_SEG14COM1_POSITION                        0x6
#define _LCDDATA4_SEG14COM1_SIZE                            0x1
#define _LCDDATA4_SEG14COM1_LENGTH                          0x1
#define _LCDDATA4_SEG14COM1_MASK                            0x40
#define _LCDDATA4_SEG15COM1_POSN                            0x7
#define _LCDDATA4_SEG15COM1_POSITION                        0x7
#define _LCDDATA4_SEG15COM1_SIZE                            0x1
#define _LCDDATA4_SEG15COM1_LENGTH                          0x1
#define _LCDDATA4_SEG15COM1_MASK                            0x80

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
extern volatile unsigned char           LCDDATA6            __at(0x7A6);
#ifndef _LIB_BUILD
asm("LCDDATA6 equ 07A6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0COM2               :1;
        unsigned SEG1COM2               :1;
        unsigned SEG2COM2               :1;
        unsigned SEG3COM2               :1;
        unsigned SEG4COM2               :1;
        unsigned SEG5COM2               :1;
        unsigned SEG6COM2               :1;
        unsigned SEG7COM2               :1;
    };
} LCDDATA6bits_t;
extern volatile LCDDATA6bits_t LCDDATA6bits __at(0x7A6);
// bitfield macros
#define _LCDDATA6_SEG0COM2_POSN                             0x0
#define _LCDDATA6_SEG0COM2_POSITION                         0x0
#define _LCDDATA6_SEG0COM2_SIZE                             0x1
#define _LCDDATA6_SEG0COM2_LENGTH                           0x1
#define _LCDDATA6_SEG0COM2_MASK                             0x1
#define _LCDDATA6_SEG1COM2_POSN                             0x1
#define _LCDDATA6_SEG1COM2_POSITION                         0x1
#define _LCDDATA6_SEG1COM2_SIZE                             0x1
#define _LCDDATA6_SEG1COM2_LENGTH                           0x1
#define _LCDDATA6_SEG1COM2_MASK                             0x2
#define _LCDDATA6_SEG2COM2_POSN                             0x2
#define _LCDDATA6_SEG2COM2_POSITION                         0x2
#define _LCDDATA6_SEG2COM2_SIZE                             0x1
#define _LCDDATA6_SEG2COM2_LENGTH                           0x1
#define _LCDDATA6_SEG2COM2_MASK                             0x4
#define _LCDDATA6_SEG3COM2_POSN                             0x3
#define _LCDDATA6_SEG3COM2_POSITION                         0x3
#define _LCDDATA6_SEG3COM2_SIZE                             0x1
#define _LCDDATA6_SEG3COM2_LENGTH                           0x1
#define _LCDDATA6_SEG3COM2_MASK                             0x8
#define _LCDDATA6_SEG4COM2_POSN                             0x4
#define _LCDDATA6_SEG4COM2_POSITION                         0x4
#define _LCDDATA6_SEG4COM2_SIZE                             0x1
#define _LCDDATA6_SEG4COM2_LENGTH                           0x1
#define _LCDDATA6_SEG4COM2_MASK                             0x10
#define _LCDDATA6_SEG5COM2_POSN                             0x5
#define _LCDDATA6_SEG5COM2_POSITION                         0x5
#define _LCDDATA6_SEG5COM2_SIZE                             0x1
#define _LCDDATA6_SEG5COM2_LENGTH                           0x1
#define _LCDDATA6_SEG5COM2_MASK                             0x20
#define _LCDDATA6_SEG6COM2_POSN                             0x6
#define _LCDDATA6_SEG6COM2_POSITION                         0x6
#define _LCDDATA6_SEG6COM2_SIZE                             0x1
#define _LCDDATA6_SEG6COM2_LENGTH                           0x1
#define _LCDDATA6_SEG6COM2_MASK                             0x40
#define _LCDDATA6_SEG7COM2_POSN                             0x7
#define _LCDDATA6_SEG7COM2_POSITION                         0x7
#define _LCDDATA6_SEG7COM2_SIZE                             0x1
#define _LCDDATA6_SEG7COM2_LENGTH                           0x1
#define _LCDDATA6_SEG7COM2_MASK                             0x80

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
extern volatile unsigned char           LCDDATA7            __at(0x7A7);
#ifndef _LIB_BUILD
asm("LCDDATA7 equ 07A7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8COM2               :1;
        unsigned SEG9COM2               :1;
        unsigned SEG10COM2              :1;
        unsigned SEG11COM2              :1;
        unsigned SEG12COM2              :1;
        unsigned SEG13COM2              :1;
        unsigned SEG14COM2              :1;
        unsigned SEG15COM2              :1;
    };
} LCDDATA7bits_t;
extern volatile LCDDATA7bits_t LCDDATA7bits __at(0x7A7);
// bitfield macros
#define _LCDDATA7_SEG8COM2_POSN                             0x0
#define _LCDDATA7_SEG8COM2_POSITION                         0x0
#define _LCDDATA7_SEG8COM2_SIZE                             0x1
#define _LCDDATA7_SEG8COM2_LENGTH                           0x1
#define _LCDDATA7_SEG8COM2_MASK                             0x1
#define _LCDDATA7_SEG9COM2_POSN                             0x1
#define _LCDDATA7_SEG9COM2_POSITION                         0x1
#define _LCDDATA7_SEG9COM2_SIZE                             0x1
#define _LCDDATA7_SEG9COM2_LENGTH                           0x1
#define _LCDDATA7_SEG9COM2_MASK                             0x2
#define _LCDDATA7_SEG10COM2_POSN                            0x2
#define _LCDDATA7_SEG10COM2_POSITION                        0x2
#define _LCDDATA7_SEG10COM2_SIZE                            0x1
#define _LCDDATA7_SEG10COM2_LENGTH                          0x1
#define _LCDDATA7_SEG10COM2_MASK                            0x4
#define _LCDDATA7_SEG11COM2_POSN                            0x3
#define _LCDDATA7_SEG11COM2_POSITION                        0x3
#define _LCDDATA7_SEG11COM2_SIZE                            0x1
#define _LCDDATA7_SEG11COM2_LENGTH                          0x1
#define _LCDDATA7_SEG11COM2_MASK                            0x8
#define _LCDDATA7_SEG12COM2_POSN                            0x4
#define _LCDDATA7_SEG12COM2_POSITION                        0x4
#define _LCDDATA7_SEG12COM2_SIZE                            0x1
#define _LCDDATA7_SEG12COM2_LENGTH                          0x1
#define _LCDDATA7_SEG12COM2_MASK                            0x10
#define _LCDDATA7_SEG13COM2_POSN                            0x5
#define _LCDDATA7_SEG13COM2_POSITION                        0x5
#define _LCDDATA7_SEG13COM2_SIZE                            0x1
#define _LCDDATA7_SEG13COM2_LENGTH                          0x1
#define _LCDDATA7_SEG13COM2_MASK                            0x20
#define _LCDDATA7_SEG14COM2_POSN                            0x6
#define _LCDDATA7_SEG14COM2_POSITION                        0x6
#define _LCDDATA7_SEG14COM2_SIZE                            0x1
#define _LCDDATA7_SEG14COM2_LENGTH                          0x1
#define _LCDDATA7_SEG14COM2_MASK                            0x40
#define _LCDDATA7_SEG15COM2_POSN                            0x7
#define _LCDDATA7_SEG15COM2_POSITION                        0x7
#define _LCDDATA7_SEG15COM2_SIZE                            0x1
#define _LCDDATA7_SEG15COM2_LENGTH                          0x1
#define _LCDDATA7_SEG15COM2_MASK                            0x80

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
extern volatile unsigned char           LCDDATA9            __at(0x7A9);
#ifndef _LIB_BUILD
asm("LCDDATA9 equ 07A9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0COM3               :1;
        unsigned SEG1COM3               :1;
        unsigned SEG2COM3               :1;
        unsigned SEG3COM3               :1;
        unsigned SEG4COM3               :1;
        unsigned SEG5COM3               :1;
        unsigned SEG6COM3               :1;
        unsigned SEG7COM3               :1;
    };
} LCDDATA9bits_t;
extern volatile LCDDATA9bits_t LCDDATA9bits __at(0x7A9);
// bitfield macros
#define _LCDDATA9_SEG0COM3_POSN                             0x0
#define _LCDDATA9_SEG0COM3_POSITION                         0x0
#define _LCDDATA9_SEG0COM3_SIZE                             0x1
#define _LCDDATA9_SEG0COM3_LENGTH                           0x1
#define _LCDDATA9_SEG0COM3_MASK                             0x1
#define _LCDDATA9_SEG1COM3_POSN                             0x1
#define _LCDDATA9_SEG1COM3_POSITION                         0x1
#define _LCDDATA9_SEG1COM3_SIZE                             0x1
#define _LCDDATA9_SEG1COM3_LENGTH                           0x1
#define _LCDDATA9_SEG1COM3_MASK                             0x2
#define _LCDDATA9_SEG2COM3_POSN                             0x2
#define _LCDDATA9_SEG2COM3_POSITION                         0x2
#define _LCDDATA9_SEG2COM3_SIZE                             0x1
#define _LCDDATA9_SEG2COM3_LENGTH                           0x1
#define _LCDDATA9_SEG2COM3_MASK                             0x4
#define _LCDDATA9_SEG3COM3_POSN                             0x3
#define _LCDDATA9_SEG3COM3_POSITION                         0x3
#define _LCDDATA9_SEG3COM3_SIZE                             0x1
#define _LCDDATA9_SEG3COM3_LENGTH                           0x1
#define _LCDDATA9_SEG3COM3_MASK                             0x8
#define _LCDDATA9_SEG4COM3_POSN                             0x4
#define _LCDDATA9_SEG4COM3_POSITION                         0x4
#define _LCDDATA9_SEG4COM3_SIZE                             0x1
#define _LCDDATA9_SEG4COM3_LENGTH                           0x1
#define _LCDDATA9_SEG4COM3_MASK                             0x10
#define _LCDDATA9_SEG5COM3_POSN                             0x5
#define _LCDDATA9_SEG5COM3_POSITION                         0x5
#define _LCDDATA9_SEG5COM3_SIZE                             0x1
#define _LCDDATA9_SEG5COM3_LENGTH                           0x1
#define _LCDDATA9_SEG5COM3_MASK                             0x20
#define _LCDDATA9_SEG6COM3_POSN                             0x6
#define _LCDDATA9_SEG6COM3_POSITION                         0x6
#define _LCDDATA9_SEG6COM3_SIZE                             0x1
#define _LCDDATA9_SEG6COM3_LENGTH                           0x1
#define _LCDDATA9_SEG6COM3_MASK                             0x40
#define _LCDDATA9_SEG7COM3_POSN                             0x7
#define _LCDDATA9_SEG7COM3_POSITION                         0x7
#define _LCDDATA9_SEG7COM3_SIZE                             0x1
#define _LCDDATA9_SEG7COM3_LENGTH                           0x1
#define _LCDDATA9_SEG7COM3_MASK                             0x80

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
extern volatile unsigned char           LCDDATA10           __at(0x7AA);
#ifndef _LIB_BUILD
asm("LCDDATA10 equ 07AAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8COM3               :1;
        unsigned SEG9COM3               :1;
        unsigned SEG10COM3              :1;
        unsigned SEG11COM3              :1;
        unsigned SEG12COM3              :1;
        unsigned SEG13COM3              :1;
        unsigned SEG14COM3              :1;
        unsigned SEG15COM3              :1;
    };
} LCDDATA10bits_t;
extern volatile LCDDATA10bits_t LCDDATA10bits __at(0x7AA);
// bitfield macros
#define _LCDDATA10_SEG8COM3_POSN                            0x0
#define _LCDDATA10_SEG8COM3_POSITION                        0x0
#define _LCDDATA10_SEG8COM3_SIZE                            0x1
#define _LCDDATA10_SEG8COM3_LENGTH                          0x1
#define _LCDDATA10_SEG8COM3_MASK                            0x1
#define _LCDDATA10_SEG9COM3_POSN                            0x1
#define _LCDDATA10_SEG9COM3_POSITION                        0x1
#define _LCDDATA10_SEG9COM3_SIZE                            0x1
#define _LCDDATA10_SEG9COM3_LENGTH                          0x1
#define _LCDDATA10_SEG9COM3_MASK                            0x2
#define _LCDDATA10_SEG10COM3_POSN                           0x2
#define _LCDDATA10_SEG10COM3_POSITION                       0x2
#define _LCDDATA10_SEG10COM3_SIZE                           0x1
#define _LCDDATA10_SEG10COM3_LENGTH                         0x1
#define _LCDDATA10_SEG10COM3_MASK                           0x4
#define _LCDDATA10_SEG11COM3_POSN                           0x3
#define _LCDDATA10_SEG11COM3_POSITION                       0x3
#define _LCDDATA10_SEG11COM3_SIZE                           0x1
#define _LCDDATA10_SEG11COM3_LENGTH                         0x1
#define _LCDDATA10_SEG11COM3_MASK                           0x8
#define _LCDDATA10_SEG12COM3_POSN                           0x4
#define _LCDDATA10_SEG12COM3_POSITION                       0x4
#define _LCDDATA10_SEG12COM3_SIZE                           0x1
#define _LCDDATA10_SEG12COM3_LENGTH                         0x1
#define _LCDDATA10_SEG12COM3_MASK                           0x10
#define _LCDDATA10_SEG13COM3_POSN                           0x5
#define _LCDDATA10_SEG13COM3_POSITION                       0x5
#define _LCDDATA10_SEG13COM3_SIZE                           0x1
#define _LCDDATA10_SEG13COM3_LENGTH                         0x1
#define _LCDDATA10_SEG13COM3_MASK                           0x20
#define _LCDDATA10_SEG14COM3_POSN                           0x6
#define _LCDDATA10_SEG14COM3_POSITION                       0x6
#define _LCDDATA10_SEG14COM3_SIZE                           0x1
#define _LCDDATA10_SEG14COM3_LENGTH                         0x1
#define _LCDDATA10_SEG14COM3_MASK                           0x40
#define _LCDDATA10_SEG15COM3_POSN                           0x7
#define _LCDDATA10_SEG15COM3_POSITION                       0x7
#define _LCDDATA10_SEG15COM3_SIZE                           0x1
#define _LCDDATA10_SEG15COM3_LENGTH                         0x1
#define _LCDDATA10_SEG15COM3_MASK                           0x80

// Register: LCDDATA12
#define LCDDATA12 LCDDATA12
extern volatile unsigned char           LCDDATA12           __at(0x7AC);
#ifndef _LIB_BUILD
asm("LCDDATA12 equ 07ACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24COM0              :1;
        unsigned SEG25COM0              :1;
        unsigned SEG26COM0              :1;
    };
} LCDDATA12bits_t;
extern volatile LCDDATA12bits_t LCDDATA12bits __at(0x7AC);
// bitfield macros
#define _LCDDATA12_SEG24COM0_POSN                           0x0
#define _LCDDATA12_SEG24COM0_POSITION                       0x0
#define _LCDDATA12_SEG24COM0_SIZE                           0x1
#define _LCDDATA12_SEG24COM0_LENGTH                         0x1
#define _LCDDATA12_SEG24COM0_MASK                           0x1
#define _LCDDATA12_SEG25COM0_POSN                           0x1
#define _LCDDATA12_SEG25COM0_POSITION                       0x1
#define _LCDDATA12_SEG25COM0_SIZE                           0x1
#define _LCDDATA12_SEG25COM0_LENGTH                         0x1
#define _LCDDATA12_SEG25COM0_MASK                           0x2
#define _LCDDATA12_SEG26COM0_POSN                           0x2
#define _LCDDATA12_SEG26COM0_POSITION                       0x2
#define _LCDDATA12_SEG26COM0_SIZE                           0x1
#define _LCDDATA12_SEG26COM0_LENGTH                         0x1
#define _LCDDATA12_SEG26COM0_MASK                           0x4

// Register: LCDDATA15
#define LCDDATA15 LCDDATA15
extern volatile unsigned char           LCDDATA15           __at(0x7AF);
#ifndef _LIB_BUILD
asm("LCDDATA15 equ 07AFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24COM1              :1;
        unsigned SEG25COM1              :1;
        unsigned SEG26COM1              :1;
    };
} LCDDATA15bits_t;
extern volatile LCDDATA15bits_t LCDDATA15bits __at(0x7AF);
// bitfield macros
#define _LCDDATA15_SEG24COM1_POSN                           0x0
#define _LCDDATA15_SEG24COM1_POSITION                       0x0
#define _LCDDATA15_SEG24COM1_SIZE                           0x1
#define _LCDDATA15_SEG24COM1_LENGTH                         0x1
#define _LCDDATA15_SEG24COM1_MASK                           0x1
#define _LCDDATA15_SEG25COM1_POSN                           0x1
#define _LCDDATA15_SEG25COM1_POSITION                       0x1
#define _LCDDATA15_SEG25COM1_SIZE                           0x1
#define _LCDDATA15_SEG25COM1_LENGTH                         0x1
#define _LCDDATA15_SEG25COM1_MASK                           0x2
#define _LCDDATA15_SEG26COM1_POSN                           0x2
#define _LCDDATA15_SEG26COM1_POSITION                       0x2
#define _LCDDATA15_SEG26COM1_SIZE                           0x1
#define _LCDDATA15_SEG26COM1_LENGTH                         0x1
#define _LCDDATA15_SEG26COM1_MASK                           0x4

// Register: LCDDATA18
#define LCDDATA18 LCDDATA18
extern volatile unsigned char           LCDDATA18           __at(0x7B2);
#ifndef _LIB_BUILD
asm("LCDDATA18 equ 07B2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24COM2              :1;
        unsigned SEG25COM2              :1;
        unsigned SEG26COM2              :1;
    };
} LCDDATA18bits_t;
extern volatile LCDDATA18bits_t LCDDATA18bits __at(0x7B2);
// bitfield macros
#define _LCDDATA18_SEG24COM2_POSN                           0x0
#define _LCDDATA18_SEG24COM2_POSITION                       0x0
#define _LCDDATA18_SEG24COM2_SIZE                           0x1
#define _LCDDATA18_SEG24COM2_LENGTH                         0x1
#define _LCDDATA18_SEG24COM2_MASK                           0x1
#define _LCDDATA18_SEG25COM2_POSN                           0x1
#define _LCDDATA18_SEG25COM2_POSITION                       0x1
#define _LCDDATA18_SEG25COM2_SIZE                           0x1
#define _LCDDATA18_SEG25COM2_LENGTH                         0x1
#define _LCDDATA18_SEG25COM2_MASK                           0x2
#define _LCDDATA18_SEG26COM2_POSN                           0x2
#define _LCDDATA18_SEG26COM2_POSITION                       0x2
#define _LCDDATA18_SEG26COM2_SIZE                           0x1
#define _LCDDATA18_SEG26COM2_LENGTH                         0x1
#define _LCDDATA18_SEG26COM2_MASK                           0x4

// Register: LCDDATA21
#define LCDDATA21 LCDDATA21
extern volatile unsigned char           LCDDATA21           __at(0x7B5);
#ifndef _LIB_BUILD
asm("LCDDATA21 equ 07B5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24COM3              :1;
        unsigned SEG25COM3              :1;
        unsigned SEG26COM3              :1;
    };
} LCDDATA21bits_t;
extern volatile LCDDATA21bits_t LCDDATA21bits __at(0x7B5);
// bitfield macros
#define _LCDDATA21_SEG24COM3_POSN                           0x0
#define _LCDDATA21_SEG24COM3_POSITION                       0x0
#define _LCDDATA21_SEG24COM3_SIZE                           0x1
#define _LCDDATA21_SEG24COM3_LENGTH                         0x1
#define _LCDDATA21_SEG24COM3_MASK                           0x1
#define _LCDDATA21_SEG25COM3_POSN                           0x1
#define _LCDDATA21_SEG25COM3_POSITION                       0x1
#define _LCDDATA21_SEG25COM3_SIZE                           0x1
#define _LCDDATA21_SEG25COM3_LENGTH                         0x1
#define _LCDDATA21_SEG25COM3_MASK                           0x2
#define _LCDDATA21_SEG26COM3_POSN                           0x2
#define _LCDDATA21_SEG26COM3_POSITION                       0x2
#define _LCDDATA21_SEG26COM3_SIZE                           0x1
#define _LCDDATA21_SEG26COM3_LENGTH                         0x1
#define _LCDDATA21_SEG26COM3_MASK                           0x4

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
// LCDPS<BIASMD>
extern volatile __bit                   BIASMD              __at(0x3C96);	// @ (0x792 * 8 + 6)
#define                                 BIASMD_bit          _BIT_ACCESS(LCDPS,6)
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
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
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
// LCDCON<CS0>
extern volatile __bit                   CS0                 __at(0x3C8A);	// @ (0x791 * 8 + 2)
#define                                 CS0_bit             _BIT_ACCESS(LCDCON,2)
// LCDCON<CS1>
extern volatile __bit                   CS1                 __at(0x3C8B);	// @ (0x791 * 8 + 3)
#define                                 CS1_bit             _BIT_ACCESS(LCDCON,3)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// PIE2<EEIE>
extern volatile __bit                   EEIE                __at(0x494);	// @ (0x92 * 8 + 4)
#define                                 EEIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<EEIF>
extern volatile __bit                   EEIF                __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 EEIF_bit            _BIT_ACCESS(PIR2,4)
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
// LCDPS<LCDA>
extern volatile __bit                   LCDA                __at(0x3C95);	// @ (0x792 * 8 + 5)
#define                                 LCDA_bit            _BIT_ACCESS(LCDPS,5)
// LCDCST<LCDCST0>
extern volatile __bit                   LCDCST0             __at(0x3CA0);	// @ (0x794 * 8 + 0)
#define                                 LCDCST0_bit         _BIT_ACCESS(LCDCST,0)
// LCDCST<LCDCST1>
extern volatile __bit                   LCDCST1             __at(0x3CA1);	// @ (0x794 * 8 + 1)
#define                                 LCDCST1_bit         _BIT_ACCESS(LCDCST,1)
// LCDCST<LCDCST2>
extern volatile __bit                   LCDCST2             __at(0x3CA2);	// @ (0x794 * 8 + 2)
#define                                 LCDCST2_bit         _BIT_ACCESS(LCDCST,2)
// LCDCON<LCDEN>
extern volatile __bit                   LCDEN               __at(0x3C8F);	// @ (0x791 * 8 + 7)
#define                                 LCDEN_bit           _BIT_ACCESS(LCDCON,7)
// PIE2<LCDIE>
extern volatile __bit                   LCDIE               __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 LCDIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<LCDIF>
extern volatile __bit                   LCDIF               __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 LCDIF_bit           _BIT_ACCESS(PIR2,2)
// LCDREF<LCDIRE>
extern volatile __bit                   LCDIRE              __at(0x3C9F);	// @ (0x793 * 8 + 7)
#define                                 LCDIRE_bit          _BIT_ACCESS(LCDREF,7)
// LCDREF<LCDIRI>
extern volatile __bit                   LCDIRI              __at(0x3C9D);	// @ (0x793 * 8 + 5)
#define                                 LCDIRI_bit          _BIT_ACCESS(LCDREF,5)
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// LCDCON<LMUX0>
extern volatile __bit                   LMUX0               __at(0x3C88);	// @ (0x791 * 8 + 0)
#define                                 LMUX0_bit           _BIT_ACCESS(LCDCON,0)
// LCDCON<LMUX1>
extern volatile __bit                   LMUX1               __at(0x3C89);	// @ (0x791 * 8 + 1)
#define                                 LMUX1_bit           _BIT_ACCESS(LCDCON,1)
// LCDPS<LP0>
extern volatile __bit                   LP0                 __at(0x3C90);	// @ (0x792 * 8 + 0)
#define                                 LP0_bit             _BIT_ACCESS(LCDPS,0)
// LCDPS<LP1>
extern volatile __bit                   LP1                 __at(0x3C91);	// @ (0x792 * 8 + 1)
#define                                 LP1_bit             _BIT_ACCESS(LCDPS,1)
// LCDPS<LP2>
extern volatile __bit                   LP2                 __at(0x3C92);	// @ (0x792 * 8 + 2)
#define                                 LP2_bit             _BIT_ACCESS(LCDPS,2)
// LCDPS<LP3>
extern volatile __bit                   LP3                 __at(0x3C93);	// @ (0x792 * 8 + 3)
#define                                 LP3_bit             _BIT_ACCESS(LCDPS,3)
// LCDRL<LRLAP0>
extern volatile __bit                   LRLAP0              __at(0x3CAE);	// @ (0x795 * 8 + 6)
#define                                 LRLAP0_bit          _BIT_ACCESS(LCDRL,6)
// LCDRL<LRLAP1>
extern volatile __bit                   LRLAP1              __at(0x3CAF);	// @ (0x795 * 8 + 7)
#define                                 LRLAP1_bit          _BIT_ACCESS(LCDRL,7)
// LCDRL<LRLAT0>
extern volatile __bit                   LRLAT0              __at(0x3CA8);	// @ (0x795 * 8 + 0)
#define                                 LRLAT0_bit          _BIT_ACCESS(LCDRL,0)
// LCDRL<LRLAT1>
extern volatile __bit                   LRLAT1              __at(0x3CA9);	// @ (0x795 * 8 + 1)
#define                                 LRLAT1_bit          _BIT_ACCESS(LCDRL,1)
// LCDRL<LRLAT2>
extern volatile __bit                   LRLAT2              __at(0x3CAA);	// @ (0x795 * 8 + 2)
#define                                 LRLAT2_bit          _BIT_ACCESS(LCDRL,2)
// LCDRL<LRLBP0>
extern volatile __bit                   LRLBP0              __at(0x3CAC);	// @ (0x795 * 8 + 4)
#define                                 LRLBP0_bit          _BIT_ACCESS(LCDRL,4)
// LCDRL<LRLBP1>
extern volatile __bit                   LRLBP1              __at(0x3CAD);	// @ (0x795 * 8 + 5)
#define                                 LRLBP1_bit          _BIT_ACCESS(LCDRL,5)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
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
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// LCDSE0<SE0>
extern volatile __bit                   SE0                 __at(0x3CC0);	// @ (0x798 * 8 + 0)
#define                                 SE0_bit             _BIT_ACCESS(LCDSE0,0)
// LCDSE0<SE1>
extern volatile __bit                   SE1                 __at(0x3CC1);	// @ (0x798 * 8 + 1)
#define                                 SE1_bit             _BIT_ACCESS(LCDSE0,1)
// LCDSE1<SE10>
extern volatile __bit                   SE10                __at(0x3CCA);	// @ (0x799 * 8 + 2)
#define                                 SE10_bit            _BIT_ACCESS(LCDSE1,2)
// LCDSE1<SE11>
extern volatile __bit                   SE11                __at(0x3CCB);	// @ (0x799 * 8 + 3)
#define                                 SE11_bit            _BIT_ACCESS(LCDSE1,3)
// LCDSE1<SE12>
extern volatile __bit                   SE12                __at(0x3CCC);	// @ (0x799 * 8 + 4)
#define                                 SE12_bit            _BIT_ACCESS(LCDSE1,4)
// LCDSE1<SE13>
extern volatile __bit                   SE13                __at(0x3CCD);	// @ (0x799 * 8 + 5)
#define                                 SE13_bit            _BIT_ACCESS(LCDSE1,5)
// LCDSE1<SE14>
extern volatile __bit                   SE14                __at(0x3CCE);	// @ (0x799 * 8 + 6)
#define                                 SE14_bit            _BIT_ACCESS(LCDSE1,6)
// LCDSE1<SE15>
extern volatile __bit                   SE15                __at(0x3CCF);	// @ (0x799 * 8 + 7)
#define                                 SE15_bit            _BIT_ACCESS(LCDSE1,7)
// LCDSE0<SE2>
extern volatile __bit                   SE2                 __at(0x3CC2);	// @ (0x798 * 8 + 2)
#define                                 SE2_bit             _BIT_ACCESS(LCDSE0,2)
// LCDSE3<SE24>
extern volatile __bit                   SE24                __at(0x3CD8);	// @ (0x79B * 8 + 0)
#define                                 SE24_bit            _BIT_ACCESS(LCDSE3,0)
// LCDSE3<SE25>
extern volatile __bit                   SE25                __at(0x3CD9);	// @ (0x79B * 8 + 1)
#define                                 SE25_bit            _BIT_ACCESS(LCDSE3,1)
// LCDSE3<SE26>
extern volatile __bit                   SE26                __at(0x3CDA);	// @ (0x79B * 8 + 2)
#define                                 SE26_bit            _BIT_ACCESS(LCDSE3,2)
// LCDSE0<SE3>
extern volatile __bit                   SE3                 __at(0x3CC3);	// @ (0x798 * 8 + 3)
#define                                 SE3_bit             _BIT_ACCESS(LCDSE0,3)
// LCDSE0<SE4>
extern volatile __bit                   SE4                 __at(0x3CC4);	// @ (0x798 * 8 + 4)
#define                                 SE4_bit             _BIT_ACCESS(LCDSE0,4)
// LCDSE0<SE5>
extern volatile __bit                   SE5                 __at(0x3CC5);	// @ (0x798 * 8 + 5)
#define                                 SE5_bit             _BIT_ACCESS(LCDSE0,5)
// LCDSE0<SE6>
extern volatile __bit                   SE6                 __at(0x3CC6);	// @ (0x798 * 8 + 6)
#define                                 SE6_bit             _BIT_ACCESS(LCDSE0,6)
// LCDSE0<SE7>
extern volatile __bit                   SE7                 __at(0x3CC7);	// @ (0x798 * 8 + 7)
#define                                 SE7_bit             _BIT_ACCESS(LCDSE0,7)
// LCDSE1<SE8>
extern volatile __bit                   SE8                 __at(0x3CC8);	// @ (0x799 * 8 + 0)
#define                                 SE8_bit             _BIT_ACCESS(LCDSE1,0)
// LCDSE1<SE9>
extern volatile __bit                   SE9                 __at(0x3CC9);	// @ (0x799 * 8 + 1)
#define                                 SE9_bit             _BIT_ACCESS(LCDSE1,1)
// LCDDATA0<SEG0COM0>
extern volatile __bit                   SEG0COM0            __at(0x3D00);	// @ (0x7A0 * 8 + 0)
#define                                 SEG0COM0_bit        _BIT_ACCESS(LCDDATA0,0)
// LCDDATA3<SEG0COM1>
extern volatile __bit                   SEG0COM1            __at(0x3D18);	// @ (0x7A3 * 8 + 0)
#define                                 SEG0COM1_bit        _BIT_ACCESS(LCDDATA3,0)
// LCDDATA6<SEG0COM2>
extern volatile __bit                   SEG0COM2            __at(0x3D30);	// @ (0x7A6 * 8 + 0)
#define                                 SEG0COM2_bit        _BIT_ACCESS(LCDDATA6,0)
// LCDDATA9<SEG0COM3>
extern volatile __bit                   SEG0COM3            __at(0x3D48);	// @ (0x7A9 * 8 + 0)
#define                                 SEG0COM3_bit        _BIT_ACCESS(LCDDATA9,0)
// LCDDATA1<SEG10COM0>
extern volatile __bit                   SEG10COM0           __at(0x3D0A);	// @ (0x7A1 * 8 + 2)
#define                                 SEG10COM0_bit       _BIT_ACCESS(LCDDATA1,2)
// LCDDATA4<SEG10COM1>
extern volatile __bit                   SEG10COM1           __at(0x3D22);	// @ (0x7A4 * 8 + 2)
#define                                 SEG10COM1_bit       _BIT_ACCESS(LCDDATA4,2)
// LCDDATA7<SEG10COM2>
extern volatile __bit                   SEG10COM2           __at(0x3D3A);	// @ (0x7A7 * 8 + 2)
#define                                 SEG10COM2_bit       _BIT_ACCESS(LCDDATA7,2)
// LCDDATA10<SEG10COM3>
extern volatile __bit                   SEG10COM3           __at(0x3D52);	// @ (0x7AA * 8 + 2)
#define                                 SEG10COM3_bit       _BIT_ACCESS(LCDDATA10,2)
// LCDDATA1<SEG11COM0>
extern volatile __bit                   SEG11COM0           __at(0x3D0B);	// @ (0x7A1 * 8 + 3)
#define                                 SEG11COM0_bit       _BIT_ACCESS(LCDDATA1,3)
// LCDDATA4<SEG11COM1>
extern volatile __bit                   SEG11COM1           __at(0x3D23);	// @ (0x7A4 * 8 + 3)
#define                                 SEG11COM1_bit       _BIT_ACCESS(LCDDATA4,3)
// LCDDATA7<SEG11COM2>
extern volatile __bit                   SEG11COM2           __at(0x3D3B);	// @ (0x7A7 * 8 + 3)
#define                                 SEG11COM2_bit       _BIT_ACCESS(LCDDATA7,3)
// LCDDATA10<SEG11COM3>
extern volatile __bit                   SEG11COM3           __at(0x3D53);	// @ (0x7AA * 8 + 3)
#define                                 SEG11COM3_bit       _BIT_ACCESS(LCDDATA10,3)
// LCDDATA1<SEG12COM0>
extern volatile __bit                   SEG12COM0           __at(0x3D0C);	// @ (0x7A1 * 8 + 4)
#define                                 SEG12COM0_bit       _BIT_ACCESS(LCDDATA1,4)
// LCDDATA4<SEG12COM1>
extern volatile __bit                   SEG12COM1           __at(0x3D24);	// @ (0x7A4 * 8 + 4)
#define                                 SEG12COM1_bit       _BIT_ACCESS(LCDDATA4,4)
// LCDDATA7<SEG12COM2>
extern volatile __bit                   SEG12COM2           __at(0x3D3C);	// @ (0x7A7 * 8 + 4)
#define                                 SEG12COM2_bit       _BIT_ACCESS(LCDDATA7,4)
// LCDDATA10<SEG12COM3>
extern volatile __bit                   SEG12COM3           __at(0x3D54);	// @ (0x7AA * 8 + 4)
#define                                 SEG12COM3_bit       _BIT_ACCESS(LCDDATA10,4)
// LCDDATA1<SEG13COM0>
extern volatile __bit                   SEG13COM0           __at(0x3D0D);	// @ (0x7A1 * 8 + 5)
#define                                 SEG13COM0_bit       _BIT_ACCESS(LCDDATA1,5)
// LCDDATA4<SEG13COM1>
extern volatile __bit                   SEG13COM1           __at(0x3D25);	// @ (0x7A4 * 8 + 5)
#define                                 SEG13COM1_bit       _BIT_ACCESS(LCDDATA4,5)
// LCDDATA7<SEG13COM2>
extern volatile __bit                   SEG13COM2           __at(0x3D3D);	// @ (0x7A7 * 8 + 5)
#define                                 SEG13COM2_bit       _BIT_ACCESS(LCDDATA7,5)
// LCDDATA10<SEG13COM3>
extern volatile __bit                   SEG13COM3           __at(0x3D55);	// @ (0x7AA * 8 + 5)
#define                                 SEG13COM3_bit       _BIT_ACCESS(LCDDATA10,5)
// LCDDATA1<SEG14COM0>
extern volatile __bit                   SEG14COM0           __at(0x3D0E);	// @ (0x7A1 * 8 + 6)
#define                                 SEG14COM0_bit       _BIT_ACCESS(LCDDATA1,6)
// LCDDATA4<SEG14COM1>
extern volatile __bit                   SEG14COM1           __at(0x3D26);	// @ (0x7A4 * 8 + 6)
#define                                 SEG14COM1_bit       _BIT_ACCESS(LCDDATA4,6)
// LCDDATA7<SEG14COM2>
extern volatile __bit                   SEG14COM2           __at(0x3D3E);	// @ (0x7A7 * 8 + 6)
#define                                 SEG14COM2_bit       _BIT_ACCESS(LCDDATA7,6)
// LCDDATA10<SEG14COM3>
extern volatile __bit                   SEG14COM3           __at(0x3D56);	// @ (0x7AA * 8 + 6)
#define                                 SEG14COM3_bit       _BIT_ACCESS(LCDDATA10,6)
// LCDDATA1<SEG15COM0>
extern volatile __bit                   SEG15COM0           __at(0x3D0F);	// @ (0x7A1 * 8 + 7)
#define                                 SEG15COM0_bit       _BIT_ACCESS(LCDDATA1,7)
// LCDDATA4<SEG15COM1>
extern volatile __bit                   SEG15COM1           __at(0x3D27);	// @ (0x7A4 * 8 + 7)
#define                                 SEG15COM1_bit       _BIT_ACCESS(LCDDATA4,7)
// LCDDATA7<SEG15COM2>
extern volatile __bit                   SEG15COM2           __at(0x3D3F);	// @ (0x7A7 * 8 + 7)
#define                                 SEG15COM2_bit       _BIT_ACCESS(LCDDATA7,7)
// LCDDATA10<SEG15COM3>
extern volatile __bit                   SEG15COM3           __at(0x3D57);	// @ (0x7AA * 8 + 7)
#define                                 SEG15COM3_bit       _BIT_ACCESS(LCDDATA10,7)
// LCDDATA0<SEG1COM0>
extern volatile __bit                   SEG1COM0            __at(0x3D01);	// @ (0x7A0 * 8 + 1)
#define                                 SEG1COM0_bit        _BIT_ACCESS(LCDDATA0,1)
// LCDDATA3<SEG1COM1>
extern volatile __bit                   SEG1COM1            __at(0x3D19);	// @ (0x7A3 * 8 + 1)
#define                                 SEG1COM1_bit        _BIT_ACCESS(LCDDATA3,1)
// LCDDATA6<SEG1COM2>
extern volatile __bit                   SEG1COM2            __at(0x3D31);	// @ (0x7A6 * 8 + 1)
#define                                 SEG1COM2_bit        _BIT_ACCESS(LCDDATA6,1)
// LCDDATA9<SEG1COM3>
extern volatile __bit                   SEG1COM3            __at(0x3D49);	// @ (0x7A9 * 8 + 1)
#define                                 SEG1COM3_bit        _BIT_ACCESS(LCDDATA9,1)
// LCDDATA12<SEG24COM0>
extern volatile __bit                   SEG24COM0           __at(0x3D60);	// @ (0x7AC * 8 + 0)
#define                                 SEG24COM0_bit       _BIT_ACCESS(LCDDATA12,0)
// LCDDATA15<SEG24COM1>
extern volatile __bit                   SEG24COM1           __at(0x3D78);	// @ (0x7AF * 8 + 0)
#define                                 SEG24COM1_bit       _BIT_ACCESS(LCDDATA15,0)
// LCDDATA18<SEG24COM2>
extern volatile __bit                   SEG24COM2           __at(0x3D90);	// @ (0x7B2 * 8 + 0)
#define                                 SEG24COM2_bit       _BIT_ACCESS(LCDDATA18,0)
// LCDDATA21<SEG24COM3>
extern volatile __bit                   SEG24COM3           __at(0x3DA8);	// @ (0x7B5 * 8 + 0)
#define                                 SEG24COM3_bit       _BIT_ACCESS(LCDDATA21,0)
// LCDDATA12<SEG25COM0>
extern volatile __bit                   SEG25COM0           __at(0x3D61);	// @ (0x7AC * 8 + 1)
#define                                 SEG25COM0_bit       _BIT_ACCESS(LCDDATA12,1)
// LCDDATA15<SEG25COM1>
extern volatile __bit                   SEG25COM1           __at(0x3D79);	// @ (0x7AF * 8 + 1)
#define                                 SEG25COM1_bit       _BIT_ACCESS(LCDDATA15,1)
// LCDDATA18<SEG25COM2>
extern volatile __bit                   SEG25COM2           __at(0x3D91);	// @ (0x7B2 * 8 + 1)
#define                                 SEG25COM2_bit       _BIT_ACCESS(LCDDATA18,1)
// LCDDATA21<SEG25COM3>
extern volatile __bit                   SEG25COM3           __at(0x3DA9);	// @ (0x7B5 * 8 + 1)
#define                                 SEG25COM3_bit       _BIT_ACCESS(LCDDATA21,1)
// LCDDATA12<SEG26COM0>
extern volatile __bit                   SEG26COM0           __at(0x3D62);	// @ (0x7AC * 8 + 2)
#define                                 SEG26COM0_bit       _BIT_ACCESS(LCDDATA12,2)
// LCDDATA15<SEG26COM1>
extern volatile __bit                   SEG26COM1           __at(0x3D7A);	// @ (0x7AF * 8 + 2)
#define                                 SEG26COM1_bit       _BIT_ACCESS(LCDDATA15,2)
// LCDDATA18<SEG26COM2>
extern volatile __bit                   SEG26COM2           __at(0x3D92);	// @ (0x7B2 * 8 + 2)
#define                                 SEG26COM2_bit       _BIT_ACCESS(LCDDATA18,2)
// LCDDATA21<SEG26COM3>
extern volatile __bit                   SEG26COM3           __at(0x3DAA);	// @ (0x7B5 * 8 + 2)
#define                                 SEG26COM3_bit       _BIT_ACCESS(LCDDATA21,2)
// LCDDATA0<SEG2COM0>
extern volatile __bit                   SEG2COM0            __at(0x3D02);	// @ (0x7A0 * 8 + 2)
#define                                 SEG2COM0_bit        _BIT_ACCESS(LCDDATA0,2)
// LCDDATA3<SEG2COM1>
extern volatile __bit                   SEG2COM1            __at(0x3D1A);	// @ (0x7A3 * 8 + 2)
#define                                 SEG2COM1_bit        _BIT_ACCESS(LCDDATA3,2)
// LCDDATA6<SEG2COM2>
extern volatile __bit                   SEG2COM2            __at(0x3D32);	// @ (0x7A6 * 8 + 2)
#define                                 SEG2COM2_bit        _BIT_ACCESS(LCDDATA6,2)
// LCDDATA9<SEG2COM3>
extern volatile __bit                   SEG2COM3            __at(0x3D4A);	// @ (0x7A9 * 8 + 2)
#define                                 SEG2COM3_bit        _BIT_ACCESS(LCDDATA9,2)
// LCDDATA0<SEG3COM0>
extern volatile __bit                   SEG3COM0            __at(0x3D03);	// @ (0x7A0 * 8 + 3)
#define                                 SEG3COM0_bit        _BIT_ACCESS(LCDDATA0,3)
// LCDDATA3<SEG3COM1>
extern volatile __bit                   SEG3COM1            __at(0x3D1B);	// @ (0x7A3 * 8 + 3)
#define                                 SEG3COM1_bit        _BIT_ACCESS(LCDDATA3,3)
// LCDDATA6<SEG3COM2>
extern volatile __bit                   SEG3COM2            __at(0x3D33);	// @ (0x7A6 * 8 + 3)
#define                                 SEG3COM2_bit        _BIT_ACCESS(LCDDATA6,3)
// LCDDATA9<SEG3COM3>
extern volatile __bit                   SEG3COM3            __at(0x3D4B);	// @ (0x7A9 * 8 + 3)
#define                                 SEG3COM3_bit        _BIT_ACCESS(LCDDATA9,3)
// LCDDATA0<SEG4COM0>
extern volatile __bit                   SEG4COM0            __at(0x3D04);	// @ (0x7A0 * 8 + 4)
#define                                 SEG4COM0_bit        _BIT_ACCESS(LCDDATA0,4)
// LCDDATA3<SEG4COM1>
extern volatile __bit                   SEG4COM1            __at(0x3D1C);	// @ (0x7A3 * 8 + 4)
#define                                 SEG4COM1_bit        _BIT_ACCESS(LCDDATA3,4)
// LCDDATA6<SEG4COM2>
extern volatile __bit                   SEG4COM2            __at(0x3D34);	// @ (0x7A6 * 8 + 4)
#define                                 SEG4COM2_bit        _BIT_ACCESS(LCDDATA6,4)
// LCDDATA9<SEG4COM3>
extern volatile __bit                   SEG4COM3            __at(0x3D4C);	// @ (0x7A9 * 8 + 4)
#define                                 SEG4COM3_bit        _BIT_ACCESS(LCDDATA9,4)
// LCDDATA0<SEG5COM0>
extern volatile __bit                   SEG5COM0            __at(0x3D05);	// @ (0x7A0 * 8 + 5)
#define                                 SEG5COM0_bit        _BIT_ACCESS(LCDDATA0,5)
// LCDDATA3<SEG5COM1>
extern volatile __bit                   SEG5COM1            __at(0x3D1D);	// @ (0x7A3 * 8 + 5)
#define                                 SEG5COM1_bit        _BIT_ACCESS(LCDDATA3,5)
// LCDDATA6<SEG5COM2>
extern volatile __bit                   SEG5COM2            __at(0x3D35);	// @ (0x7A6 * 8 + 5)
#define                                 SEG5COM2_bit        _BIT_ACCESS(LCDDATA6,5)
// LCDDATA9<SEG5COM3>
extern volatile __bit                   SEG5COM3            __at(0x3D4D);	// @ (0x7A9 * 8 + 5)
#define                                 SEG5COM3_bit        _BIT_ACCESS(LCDDATA9,5)
// LCDDATA0<SEG6COM0>
extern volatile __bit                   SEG6COM0            __at(0x3D06);	// @ (0x7A0 * 8 + 6)
#define                                 SEG6COM0_bit        _BIT_ACCESS(LCDDATA0,6)
// LCDDATA3<SEG6COM1>
extern volatile __bit                   SEG6COM1            __at(0x3D1E);	// @ (0x7A3 * 8 + 6)
#define                                 SEG6COM1_bit        _BIT_ACCESS(LCDDATA3,6)
// LCDDATA6<SEG6COM2>
extern volatile __bit                   SEG6COM2            __at(0x3D36);	// @ (0x7A6 * 8 + 6)
#define                                 SEG6COM2_bit        _BIT_ACCESS(LCDDATA6,6)
// LCDDATA9<SEG6COM3>
extern volatile __bit                   SEG6COM3            __at(0x3D4E);	// @ (0x7A9 * 8 + 6)
#define                                 SEG6COM3_bit        _BIT_ACCESS(LCDDATA9,6)
// LCDDATA0<SEG7COM0>
extern volatile __bit                   SEG7COM0            __at(0x3D07);	// @ (0x7A0 * 8 + 7)
#define                                 SEG7COM0_bit        _BIT_ACCESS(LCDDATA0,7)
// LCDDATA3<SEG7COM1>
extern volatile __bit                   SEG7COM1            __at(0x3D1F);	// @ (0x7A3 * 8 + 7)
#define                                 SEG7COM1_bit        _BIT_ACCESS(LCDDATA3,7)
// LCDDATA6<SEG7COM2>
extern volatile __bit                   SEG7COM2            __at(0x3D37);	// @ (0x7A6 * 8 + 7)
#define                                 SEG7COM2_bit        _BIT_ACCESS(LCDDATA6,7)
// LCDDATA9<SEG7COM3>
extern volatile __bit                   SEG7COM3            __at(0x3D4F);	// @ (0x7A9 * 8 + 7)
#define                                 SEG7COM3_bit        _BIT_ACCESS(LCDDATA9,7)
// LCDDATA1<SEG8COM0>
extern volatile __bit                   SEG8COM0            __at(0x3D08);	// @ (0x7A1 * 8 + 0)
#define                                 SEG8COM0_bit        _BIT_ACCESS(LCDDATA1,0)
// LCDDATA4<SEG8COM1>
extern volatile __bit                   SEG8COM1            __at(0x3D20);	// @ (0x7A4 * 8 + 0)
#define                                 SEG8COM1_bit        _BIT_ACCESS(LCDDATA4,0)
// LCDDATA7<SEG8COM2>
extern volatile __bit                   SEG8COM2            __at(0x3D38);	// @ (0x7A7 * 8 + 0)
#define                                 SEG8COM2_bit        _BIT_ACCESS(LCDDATA7,0)
// LCDDATA10<SEG8COM3>
extern volatile __bit                   SEG8COM3            __at(0x3D50);	// @ (0x7AA * 8 + 0)
#define                                 SEG8COM3_bit        _BIT_ACCESS(LCDDATA10,0)
// LCDDATA1<SEG9COM0>
extern volatile __bit                   SEG9COM0            __at(0x3D09);	// @ (0x7A1 * 8 + 1)
#define                                 SEG9COM0_bit        _BIT_ACCESS(LCDDATA1,1)
// LCDDATA4<SEG9COM1>
extern volatile __bit                   SEG9COM1            __at(0x3D21);	// @ (0x7A4 * 8 + 1)
#define                                 SEG9COM1_bit        _BIT_ACCESS(LCDDATA4,1)
// LCDDATA7<SEG9COM2>
extern volatile __bit                   SEG9COM2            __at(0x3D39);	// @ (0x7A7 * 8 + 1)
#define                                 SEG9COM2_bit        _BIT_ACCESS(LCDDATA7,1)
// LCDDATA10<SEG9COM3>
extern volatile __bit                   SEG9COM3            __at(0x3D51);	// @ (0x7AA * 8 + 1)
#define                                 SEG9COM3_bit        _BIT_ACCESS(LCDDATA10,1)
// LCDCON<SLPEN>
extern volatile __bit                   SLPEN               __at(0x3C8E);	// @ (0x791 * 8 + 6)
#define                                 SLPEN_bit           _BIT_ACCESS(LCDCON,6)
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
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1GCON<T1GGO>
extern volatile __bit                   T1GGO               __at(0xCB);	// @ (0x19 * 8 + 3)
#define                                 T1GGO_bit           _BIT_ACCESS(T1GCON,3)
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
// FVRCON<TSEN>
extern volatile __bit                   TSEN                __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 TSEN_bit            _BIT_ACCESS(FVRCON,5)
// FVRCON<TSRNG>
extern volatile __bit                   TSRNG               __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 TSRNG_bit           _BIT_ACCESS(FVRCON,4)
// LCDREF<VLCD1PE>
extern volatile __bit                   VLCD1PE             __at(0x3C99);	// @ (0x793 * 8 + 1)
#define                                 VLCD1PE_bit         _BIT_ACCESS(LCDREF,1)
// LCDREF<VLCD2PE>
extern volatile __bit                   VLCD2PE             __at(0x3C9A);	// @ (0x793 * 8 + 2)
#define                                 VLCD2PE_bit         _BIT_ACCESS(LCDREF,2)
// LCDREF<VLCD3PE>
extern volatile __bit                   VLCD3PE             __at(0x3C9B);	// @ (0x793 * 8 + 3)
#define                                 VLCD3PE_bit         _BIT_ACCESS(LCDREF,3)
// LCDPS<WA>
extern volatile __bit                   WA                  __at(0x3C94);	// @ (0x792 * 8 + 4)
#define                                 WA_bit              _BIT_ACCESS(LCDPS,4)
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
// LCDCON<WERR>
extern volatile __bit                   WERR                __at(0x3C8D);	// @ (0x791 * 8 + 5)
#define                                 WERR_bit            _BIT_ACCESS(LCDCON,5)
// LCDPS<WFT>
extern volatile __bit                   WFT                 __at(0x3C97);	// @ (0x792 * 8 + 7)
#define                                 WFT_bit             _BIT_ACCESS(LCDPS,7)
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
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// STATUS_SHAD<Z_SHAD>
extern volatile __bit                   Z_SHAD              __at(0x7F22);	// @ (0xFE4 * 8 + 2)
#define                                 Z_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,2)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
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

#endif // _PIC16LF1903_H_
