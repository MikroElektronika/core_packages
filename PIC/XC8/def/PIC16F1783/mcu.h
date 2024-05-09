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

#ifndef _PIC16F1783_H_
#define _PIC16F1783_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F1783
 */
#ifndef _XC_H_
#warning Header file pic16f1783.h included directly. Use #include <xc.h> instead.
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
    struct {
        unsigned PORTA                  :8;
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
#define _PORTA_PORTA_POSN                                   0x0
#define _PORTA_PORTA_POSITION                               0x0
#define _PORTA_PORTA_SIZE                                   0x8
#define _PORTA_PORTA_LENGTH                                 0x8
#define _PORTA_PORTA_MASK                                   0xFF

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
    struct {
        unsigned PORTB                  :8;
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
#define _PORTB_PORTB_POSN                                   0x0
#define _PORTB_PORTB_POSITION                               0x0
#define _PORTB_PORTB_SIZE                                   0x8
#define _PORTB_PORTB_LENGTH                                 0x8
#define _PORTB_PORTB_MASK                                   0xFF

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
    struct {
        unsigned PORTC                  :8;
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
#define _PORTC_PORTC_POSN                                   0x0
#define _PORTC_PORTC_POSITION                               0x0
#define _PORTC_PORTC_SIZE                                   0x8
#define _PORTC_PORTC_LENGTH                                 0x8
#define _PORTC_PORTC_MASK                                   0xFF

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
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
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
        unsigned CCP2IF                 :1;
        unsigned C3IF                   :1;
        unsigned                        :1;
        unsigned BCL1IF                 :1;
        unsigned EEIF                   :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned OSFIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_C3IF_POSN                                     0x1
#define _PIR2_C3IF_POSITION                                 0x1
#define _PIR2_C3IF_SIZE                                     0x1
#define _PIR2_C3IF_LENGTH                                   0x1
#define _PIR2_C3IF_MASK                                     0x2
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_EEIF_POSN                                     0x4
#define _PIR2_EEIF_POSITION                                 0x4
#define _PIR2_EEIF_SIZE                                     0x1
#define _PIR2_EEIF_LENGTH                                   0x1
#define _PIR2_EEIF_MASK                                     0x10
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

// Register: PIR4
#define PIR4 PIR4
extern volatile unsigned char           PIR4                __at(0x014);
#ifndef _LIB_BUILD
asm("PIR4 equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1SIF               :1;
        unsigned PSMC2SIF               :1;
        unsigned                        :2;
        unsigned PSMC1TIF               :1;
        unsigned PSMC2TIF               :1;
    };
} PIR4bits_t;
extern volatile PIR4bits_t PIR4bits __at(0x014);
// bitfield macros
#define _PIR4_PSMC1SIF_POSN                                 0x0
#define _PIR4_PSMC1SIF_POSITION                             0x0
#define _PIR4_PSMC1SIF_SIZE                                 0x1
#define _PIR4_PSMC1SIF_LENGTH                               0x1
#define _PIR4_PSMC1SIF_MASK                                 0x1
#define _PIR4_PSMC2SIF_POSN                                 0x1
#define _PIR4_PSMC2SIF_POSITION                             0x1
#define _PIR4_PSMC2SIF_SIZE                                 0x1
#define _PIR4_PSMC2SIF_LENGTH                               0x1
#define _PIR4_PSMC2SIF_MASK                                 0x2
#define _PIR4_PSMC1TIF_POSN                                 0x4
#define _PIR4_PSMC1TIF_POSITION                             0x4
#define _PIR4_PSMC1TIF_SIZE                                 0x1
#define _PIR4_PSMC1TIF_LENGTH                               0x1
#define _PIR4_PSMC1TIF_MASK                                 0x10
#define _PIR4_PSMC2TIF_POSN                                 0x5
#define _PIR4_PSMC2TIF_POSITION                             0x5
#define _PIR4_PSMC2TIF_SIZE                                 0x1
#define _PIR4_PSMC2TIF_LENGTH                               0x1
#define _PIR4_PSMC2TIF_MASK                                 0x20

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
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned TMR1CS0                :1;
        unsigned TMR1CS1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
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

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x019);
#ifndef _LIB_BUILD
asm("T1GCON equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GVAL                 :1;
        unsigned T1GGO                  :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS                  :2;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x019);
// bitfield macros
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
#define _T1GCON_T1GVAL_POSN                                 0x2
#define _T1GCON_T1GVAL_POSITION                             0x2
#define _T1GCON_T1GVAL_SIZE                                 0x1
#define _T1GCON_T1GVAL_LENGTH                               0x1
#define _T1GCON_T1GVAL_MASK                                 0x4
#define _T1GCON_T1GGO_POSN                                  0x3
#define _T1GCON_T1GGO_POSITION                              0x3
#define _T1GCON_T1GGO_SIZE                                  0x1
#define _T1GCON_T1GGO_LENGTH                                0x1
#define _T1GCON_T1GGO_MASK                                  0x8
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
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x2
#define _T1GCON_T1GSS_LENGTH                                0x2
#define _T1GCON_T1GSS_MASK                                  0x3

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
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned TMR2ON                 :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
    struct {
        unsigned T2CKPS                 :2;
        unsigned                        :1;
        unsigned T2OUTPS                :4;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x01C);
// bitfield macros
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
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4
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
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_T2OUTPS_POSN                                 0x3
#define _T2CON_T2OUTPS_POSITION                             0x3
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0x78

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
    struct {
        unsigned TRISA                  :8;
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
#define _TRISA_TRISA_POSN                                   0x0
#define _TRISA_TRISA_POSITION                               0x0
#define _TRISA_TRISA_SIZE                                   0x8
#define _TRISA_TRISA_LENGTH                                 0x8
#define _TRISA_TRISA_MASK                                   0xFF

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
    struct {
        unsigned TRISB                  :8;
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
#define _TRISB_TRISB_POSN                                   0x0
#define _TRISB_TRISB_POSITION                               0x0
#define _TRISB_TRISB_SIZE                                   0x8
#define _TRISB_TRISB_LENGTH                                 0x8
#define _TRISB_TRISB_MASK                                   0xFF

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
    struct {
        unsigned TRISC                  :8;
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
#define _TRISC_TRISC_POSN                                   0x0
#define _TRISC_TRISC_POSITION                               0x0
#define _TRISC_TRISC_SIZE                                   0x8
#define _TRISC_TRISC_LENGTH                                 0x8
#define _TRISC_TRISC_MASK                                   0xFF

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0x090);
#ifndef _LIB_BUILD
asm("TRISE equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned TRISE3                 :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0x090);
// bitfield macros
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
        unsigned CCP1IE                 :1;
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
        unsigned CCP2IE                 :1;
        unsigned C3IE                   :1;
        unsigned                        :1;
        unsigned BCL1IE                 :1;
        unsigned EEIE                   :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned OSFIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_C3IE_POSN                                     0x1
#define _PIE2_C3IE_POSITION                                 0x1
#define _PIE2_C3IE_SIZE                                     0x1
#define _PIE2_C3IE_LENGTH                                   0x1
#define _PIE2_C3IE_MASK                                     0x2
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_EEIE_POSN                                     0x4
#define _PIE2_EEIE_POSITION                                 0x4
#define _PIE2_EEIE_SIZE                                     0x1
#define _PIE2_EEIE_LENGTH                                   0x1
#define _PIE2_EEIE_MASK                                     0x10
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

// Register: PIE4
#define PIE4 PIE4
extern volatile unsigned char           PIE4                __at(0x094);
#ifndef _LIB_BUILD
asm("PIE4 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1SIE               :1;
        unsigned PSMC2SIE               :1;
        unsigned                        :2;
        unsigned PSMC1TIE               :1;
        unsigned PSMC2TIE               :1;
    };
} PIE4bits_t;
extern volatile PIE4bits_t PIE4bits __at(0x094);
// bitfield macros
#define _PIE4_PSMC1SIE_POSN                                 0x0
#define _PIE4_PSMC1SIE_POSITION                             0x0
#define _PIE4_PSMC1SIE_SIZE                                 0x1
#define _PIE4_PSMC1SIE_LENGTH                               0x1
#define _PIE4_PSMC1SIE_MASK                                 0x1
#define _PIE4_PSMC2SIE_POSN                                 0x1
#define _PIE4_PSMC2SIE_POSITION                             0x1
#define _PIE4_PSMC2SIE_SIZE                                 0x1
#define _PIE4_PSMC2SIE_LENGTH                               0x1
#define _PIE4_PSMC2SIE_MASK                                 0x2
#define _PIE4_PSMC1TIE_POSN                                 0x4
#define _PIE4_PSMC1TIE_POSITION                             0x4
#define _PIE4_PSMC1TIE_SIZE                                 0x1
#define _PIE4_PSMC1TIE_LENGTH                               0x1
#define _PIE4_PSMC1TIE_MASK                                 0x10
#define _PIE4_PSMC2TIE_POSN                                 0x5
#define _PIE4_PSMC2TIE_POSITION                             0x5
#define _PIE4_PSMC2TIE_SIZE                                 0x1
#define _PIE4_PSMC2TIE_LENGTH                               0x1
#define _PIE4_PSMC2TIE_MASK                                 0x20

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x095);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
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
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
        unsigned WDTPS4                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS                  :5;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x097);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
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
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x5
#define _WDTCON_WDTPS_LENGTH                                0x5
#define _WDTCON_WDTPS_MASK                                  0x3E

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x098);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 098h");
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
    };
    struct {
        unsigned TUN                    :6;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x098);
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
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x6
#define _OSCTUNE_TUN_LENGTH                                 0x6
#define _OSCTUNE_TUN_MASK                                   0x3F

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x099);
#ifndef _LIB_BUILD
asm("OSCCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned                        :1;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
        unsigned IRCF3                  :1;
        unsigned SPLLEN                 :1;
    };
    struct {
        unsigned SCS                    :2;
        unsigned                        :1;
        unsigned IRCF                   :4;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x099);
// bitfield macros
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
#define _OSCCON_SPLLEN_POSN                                 0x7
#define _OSCCON_SPLLEN_POSITION                             0x7
#define _OSCCON_SPLLEN_SIZE                                 0x1
#define _OSCCON_SPLLEN_LENGTH                               0x1
#define _OSCCON_SPLLEN_MASK                                 0x80
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
        unsigned OSTS                   :1;
        unsigned PLLR                   :1;
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
#define _OSCSTAT_OSTS_POSN                                  0x5
#define _OSCSTAT_OSTS_POSITION                              0x5
#define _OSCSTAT_OSTS_SIZE                                  0x1
#define _OSCSTAT_OSTS_LENGTH                                0x1
#define _OSCSTAT_OSTS_MASK                                  0x20
#define _OSCSTAT_PLLR_POSN                                  0x6
#define _OSCSTAT_PLLR_POSITION                              0x6
#define _OSCSTAT_PLLR_SIZE                                  0x1
#define _OSCSTAT_PLLR_LENGTH                                0x1
#define _OSCSTAT_PLLR_MASK                                  0x40
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
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned ADRMD                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADGO                   :1;
        unsigned CHS                    :5;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
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
#define _ADCON0_ADRMD_POSN                                  0x7
#define _ADCON0_ADRMD_POSITION                              0x7
#define _ADCON0_ADRMD_SIZE                                  0x1
#define _ADCON0_ADRMD_LENGTH                                0x1
#define _ADCON0_ADRMD_MASK                                  0x80
#define _ADCON0_ADGO_POSN                                   0x1
#define _ADCON0_ADGO_POSITION                               0x1
#define _ADCON0_ADGO_SIZE                                   0x1
#define _ADCON0_ADGO_LENGTH                                 0x1
#define _ADCON0_ADGO_MASK                                   0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x5
#define _ADCON0_CHS_LENGTH                                  0x5
#define _ADCON0_CHS_MASK                                    0x7C
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned ADNREF                 :1;
        unsigned                        :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF                 :2;
        unsigned                        :2;
        unsigned ADCS                   :3;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09E);
// bitfield macros
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
#define _ADCON1_ADNREF_POSN                                 0x2
#define _ADCON1_ADNREF_POSITION                             0x2
#define _ADCON1_ADNREF_SIZE                                 0x1
#define _ADCON1_ADNREF_LENGTH                               0x1
#define _ADCON1_ADNREF_MASK                                 0x4
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
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80
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

// Register: ADCON2
#define ADCON2 ADCON2
extern volatile unsigned char           ADCON2              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON2 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CHSN0                  :1;
        unsigned CHSN1                  :1;
        unsigned CHSN2                  :1;
        unsigned CHSN3                  :1;
        unsigned TRIGSEL0               :1;
        unsigned TRIGSEL1               :1;
        unsigned TRIGSEL2               :1;
        unsigned TRIGSEL3               :1;
    };
    struct {
        unsigned CHSN                   :4;
        unsigned TRIGSEL                :4;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0x09F);
// bitfield macros
#define _ADCON2_CHSN0_POSN                                  0x0
#define _ADCON2_CHSN0_POSITION                              0x0
#define _ADCON2_CHSN0_SIZE                                  0x1
#define _ADCON2_CHSN0_LENGTH                                0x1
#define _ADCON2_CHSN0_MASK                                  0x1
#define _ADCON2_CHSN1_POSN                                  0x1
#define _ADCON2_CHSN1_POSITION                              0x1
#define _ADCON2_CHSN1_SIZE                                  0x1
#define _ADCON2_CHSN1_LENGTH                                0x1
#define _ADCON2_CHSN1_MASK                                  0x2
#define _ADCON2_CHSN2_POSN                                  0x2
#define _ADCON2_CHSN2_POSITION                              0x2
#define _ADCON2_CHSN2_SIZE                                  0x1
#define _ADCON2_CHSN2_LENGTH                                0x1
#define _ADCON2_CHSN2_MASK                                  0x4
#define _ADCON2_CHSN3_POSN                                  0x3
#define _ADCON2_CHSN3_POSITION                              0x3
#define _ADCON2_CHSN3_SIZE                                  0x1
#define _ADCON2_CHSN3_LENGTH                                0x1
#define _ADCON2_CHSN3_MASK                                  0x8
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
#define _ADCON2_CHSN_POSN                                   0x0
#define _ADCON2_CHSN_POSITION                               0x0
#define _ADCON2_CHSN_SIZE                                   0x4
#define _ADCON2_CHSN_LENGTH                                 0x4
#define _ADCON2_CHSN_MASK                                   0xF
#define _ADCON2_TRIGSEL_POSN                                0x4
#define _ADCON2_TRIGSEL_POSITION                            0x4
#define _ADCON2_TRIGSEL_SIZE                                0x4
#define _ADCON2_TRIGSEL_LENGTH                              0x4
#define _ADCON2_TRIGSEL_MASK                                0xF0

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
    struct {
        unsigned LATA                   :8;
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
#define _LATA_LATA_POSN                                     0x0
#define _LATA_LATA_POSITION                                 0x0
#define _LATA_LATA_SIZE                                     0x8
#define _LATA_LATA_LENGTH                                   0x8
#define _LATA_LATA_MASK                                     0xFF

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
    struct {
        unsigned LATB                   :8;
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
#define _LATB_LATB_POSN                                     0x0
#define _LATB_LATB_POSITION                                 0x0
#define _LATB_LATB_SIZE                                     0x8
#define _LATB_LATB_LENGTH                                   0x8
#define _LATB_LATB_MASK                                     0xFF

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
    struct {
        unsigned LATC                   :8;
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
#define _LATC_LATC_POSN                                     0x0
#define _LATC_LATC_POSITION                                 0x0
#define _LATC_LATC_SIZE                                     0x8
#define _LATC_LATC_LENGTH                                   0x8
#define _LATC_LATC_MASK                                     0xFF

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
        unsigned C1ZLF                  :1;
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
#define _CM1CON0_C1ZLF_POSN                                 0x3
#define _CM1CON0_C1ZLF_POSITION                             0x3
#define _CM1CON0_C1ZLF_SIZE                                 0x1
#define _CM1CON0_C1ZLF_LENGTH                               0x1
#define _CM1CON0_C1ZLF_MASK                                 0x8
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
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1PCH2                 :1;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH                  :3;
        unsigned C1PCH                  :3;
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
#define _CM1CON1_C1PCH0_POSN                                0x3
#define _CM1CON1_C1PCH0_POSITION                            0x3
#define _CM1CON1_C1PCH0_SIZE                                0x1
#define _CM1CON1_C1PCH0_LENGTH                              0x1
#define _CM1CON1_C1PCH0_MASK                                0x8
#define _CM1CON1_C1PCH1_POSN                                0x4
#define _CM1CON1_C1PCH1_POSITION                            0x4
#define _CM1CON1_C1PCH1_SIZE                                0x1
#define _CM1CON1_C1PCH1_LENGTH                              0x1
#define _CM1CON1_C1PCH1_MASK                                0x10
#define _CM1CON1_C1PCH2_POSN                                0x5
#define _CM1CON1_C1PCH2_POSITION                            0x5
#define _CM1CON1_C1PCH2_SIZE                                0x1
#define _CM1CON1_C1PCH2_LENGTH                              0x1
#define _CM1CON1_C1PCH2_MASK                                0x20
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
#define _CM1CON1_C1PCH_POSN                                 0x3
#define _CM1CON1_C1PCH_POSITION                             0x3
#define _CM1CON1_C1PCH_SIZE                                 0x3
#define _CM1CON1_C1PCH_LENGTH                               0x3
#define _CM1CON1_C1PCH_MASK                                 0x38

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
        unsigned C2ZLF                  :1;
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
#define _CM2CON0_C2ZLF_POSN                                 0x3
#define _CM2CON0_C2ZLF_POSITION                             0x3
#define _CM2CON0_C2ZLF_SIZE                                 0x1
#define _CM2CON0_C2ZLF_LENGTH                               0x1
#define _CM2CON0_C2ZLF_MASK                                 0x8
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
        unsigned C2PCH0                 :1;
        unsigned C2PCH1                 :1;
        unsigned C2PCH2                 :1;
        unsigned C2INTN                 :1;
        unsigned C2INTP                 :1;
    };
    struct {
        unsigned C2NCH                  :3;
        unsigned C2PCH                  :3;
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
#define _CM2CON1_C2PCH0_POSN                                0x3
#define _CM2CON1_C2PCH0_POSITION                            0x3
#define _CM2CON1_C2PCH0_SIZE                                0x1
#define _CM2CON1_C2PCH0_LENGTH                              0x1
#define _CM2CON1_C2PCH0_MASK                                0x8
#define _CM2CON1_C2PCH1_POSN                                0x4
#define _CM2CON1_C2PCH1_POSITION                            0x4
#define _CM2CON1_C2PCH1_SIZE                                0x1
#define _CM2CON1_C2PCH1_LENGTH                              0x1
#define _CM2CON1_C2PCH1_MASK                                0x10
#define _CM2CON1_C2PCH2_POSN                                0x5
#define _CM2CON1_C2PCH2_POSITION                            0x5
#define _CM2CON1_C2PCH2_SIZE                                0x1
#define _CM2CON1_C2PCH2_LENGTH                              0x1
#define _CM2CON1_C2PCH2_MASK                                0x20
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
#define _CM2CON1_C2PCH_POSN                                 0x3
#define _CM2CON1_C2PCH_POSITION                             0x3
#define _CM2CON1_C2PCH_SIZE                                 0x3
#define _CM2CON1_C2PCH_LENGTH                               0x3
#define _CM2CON1_C2PCH_MASK                                 0x38

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
        unsigned MC3OUT                 :1;
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
#define _CMOUT_MC3OUT_POSN                                  0x2
#define _CMOUT_MC3OUT_POSITION                              0x2
#define _CMOUT_MC3OUT_SIZE                                  0x1
#define _CMOUT_MC3OUT_LENGTH                                0x1
#define _CMOUT_MC3OUT_MASK                                  0x4

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
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
        unsigned CDAFVR0                :1;
        unsigned CDAFVR1                :1;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned ADFVR                  :2;
        unsigned CDAFVR                 :2;
    };
} FVRCONbits_t;
extern volatile FVRCONbits_t FVRCONbits __at(0x117);
// bitfield macros
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

// Register: DACCON0
#define DACCON0 DACCON0
extern volatile unsigned char           DACCON0             __at(0x118);
#ifndef _LIB_BUILD
asm("DACCON0 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACNSS                 :1;
        unsigned                        :1;
        unsigned DACPSS0                :1;
        unsigned DACPSS1                :1;
        unsigned DACOE2                 :1;
        unsigned DACOE1                 :1;
        unsigned                        :1;
        unsigned DACEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned DACPSS                 :2;
    };
} DACCON0bits_t;
extern volatile DACCON0bits_t DACCON0bits __at(0x118);
// bitfield macros
#define _DACCON0_DACNSS_POSN                                0x0
#define _DACCON0_DACNSS_POSITION                            0x0
#define _DACCON0_DACNSS_SIZE                                0x1
#define _DACCON0_DACNSS_LENGTH                              0x1
#define _DACCON0_DACNSS_MASK                                0x1
#define _DACCON0_DACPSS0_POSN                               0x2
#define _DACCON0_DACPSS0_POSITION                           0x2
#define _DACCON0_DACPSS0_SIZE                               0x1
#define _DACCON0_DACPSS0_LENGTH                             0x1
#define _DACCON0_DACPSS0_MASK                               0x4
#define _DACCON0_DACPSS1_POSN                               0x3
#define _DACCON0_DACPSS1_POSITION                           0x3
#define _DACCON0_DACPSS1_SIZE                               0x1
#define _DACCON0_DACPSS1_LENGTH                             0x1
#define _DACCON0_DACPSS1_MASK                               0x8
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
#define _DACCON0_DACPSS_POSN                                0x2
#define _DACCON0_DACPSS_POSITION                            0x2
#define _DACCON0_DACPSS_SIZE                                0x2
#define _DACCON0_DACPSS_LENGTH                              0x2
#define _DACCON0_DACPSS_MASK                                0xC

// Register: DACCON1
#define DACCON1 DACCON1
extern volatile unsigned char           DACCON1             __at(0x119);
#ifndef _LIB_BUILD
asm("DACCON1 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACR0                  :1;
        unsigned DACR1                  :1;
        unsigned DACR2                  :1;
        unsigned DACR3                  :1;
        unsigned DACR4                  :1;
        unsigned DACR5                  :1;
        unsigned DACR6                  :1;
        unsigned DACR7                  :1;
    };
    struct {
        unsigned DACR                   :8;
    };
} DACCON1bits_t;
extern volatile DACCON1bits_t DACCON1bits __at(0x119);
// bitfield macros
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
#define _DACCON1_DACR5_POSN                                 0x5
#define _DACCON1_DACR5_POSITION                             0x5
#define _DACCON1_DACR5_SIZE                                 0x1
#define _DACCON1_DACR5_LENGTH                               0x1
#define _DACCON1_DACR5_MASK                                 0x20
#define _DACCON1_DACR6_POSN                                 0x6
#define _DACCON1_DACR6_POSITION                             0x6
#define _DACCON1_DACR6_SIZE                                 0x1
#define _DACCON1_DACR6_LENGTH                               0x1
#define _DACCON1_DACR6_MASK                                 0x40
#define _DACCON1_DACR7_POSN                                 0x7
#define _DACCON1_DACR7_POSITION                             0x7
#define _DACCON1_DACR7_SIZE                                 0x1
#define _DACCON1_DACR7_LENGTH                               0x1
#define _DACCON1_DACR7_MASK                                 0x80
#define _DACCON1_DACR_POSN                                  0x0
#define _DACCON1_DACR_POSITION                              0x0
#define _DACCON1_DACR_SIZE                                  0x8
#define _DACCON1_DACR_LENGTH                                0x8
#define _DACCON1_DACR_MASK                                  0xFF

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x11D);
#ifndef _LIB_BUILD
asm("APFCON equ 011Dh");
#endif
// aliases
extern volatile unsigned char           APFCON0             __at(0x11D);
#ifndef _LIB_BUILD
asm("APFCON0 equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2SEL                :1;
        unsigned RXSEL                  :1;
        unsigned TXSEL                  :1;
        unsigned SDISEL                 :1;
        unsigned SCKSEL                 :1;
        unsigned SDOSEL                 :1;
        unsigned CCP1SEL                :1;
        unsigned C2OUTSEL               :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_CCP2SEL_POSN                                0x0
#define _APFCON_CCP2SEL_POSITION                            0x0
#define _APFCON_CCP2SEL_SIZE                                0x1
#define _APFCON_CCP2SEL_LENGTH                              0x1
#define _APFCON_CCP2SEL_MASK                                0x1
#define _APFCON_RXSEL_POSN                                  0x1
#define _APFCON_RXSEL_POSITION                              0x1
#define _APFCON_RXSEL_SIZE                                  0x1
#define _APFCON_RXSEL_LENGTH                                0x1
#define _APFCON_RXSEL_MASK                                  0x2
#define _APFCON_TXSEL_POSN                                  0x2
#define _APFCON_TXSEL_POSITION                              0x2
#define _APFCON_TXSEL_SIZE                                  0x1
#define _APFCON_TXSEL_LENGTH                                0x1
#define _APFCON_TXSEL_MASK                                  0x4
#define _APFCON_SDISEL_POSN                                 0x3
#define _APFCON_SDISEL_POSITION                             0x3
#define _APFCON_SDISEL_SIZE                                 0x1
#define _APFCON_SDISEL_LENGTH                               0x1
#define _APFCON_SDISEL_MASK                                 0x8
#define _APFCON_SCKSEL_POSN                                 0x4
#define _APFCON_SCKSEL_POSITION                             0x4
#define _APFCON_SCKSEL_SIZE                                 0x1
#define _APFCON_SCKSEL_LENGTH                               0x1
#define _APFCON_SCKSEL_MASK                                 0x10
#define _APFCON_SDOSEL_POSN                                 0x5
#define _APFCON_SDOSEL_POSITION                             0x5
#define _APFCON_SDOSEL_SIZE                                 0x1
#define _APFCON_SDOSEL_LENGTH                               0x1
#define _APFCON_SDOSEL_MASK                                 0x20
#define _APFCON_CCP1SEL_POSN                                0x6
#define _APFCON_CCP1SEL_POSITION                            0x6
#define _APFCON_CCP1SEL_SIZE                                0x1
#define _APFCON_CCP1SEL_LENGTH                              0x1
#define _APFCON_CCP1SEL_MASK                                0x40
#define _APFCON_C2OUTSEL_POSN                               0x7
#define _APFCON_C2OUTSEL_POSITION                           0x7
#define _APFCON_C2OUTSEL_SIZE                               0x1
#define _APFCON_C2OUTSEL_LENGTH                             0x1
#define _APFCON_C2OUTSEL_MASK                               0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCP2SEL                :1;
        unsigned RXSEL                  :1;
        unsigned TXSEL                  :1;
        unsigned SDISEL                 :1;
        unsigned SCKSEL                 :1;
        unsigned SDOSEL                 :1;
        unsigned CCP1SEL                :1;
        unsigned C2OUTSEL               :1;
    };
} APFCON0bits_t;
extern volatile APFCON0bits_t APFCON0bits __at(0x11D);
// bitfield macros
#define _APFCON0_CCP2SEL_POSN                               0x0
#define _APFCON0_CCP2SEL_POSITION                           0x0
#define _APFCON0_CCP2SEL_SIZE                               0x1
#define _APFCON0_CCP2SEL_LENGTH                             0x1
#define _APFCON0_CCP2SEL_MASK                               0x1
#define _APFCON0_RXSEL_POSN                                 0x1
#define _APFCON0_RXSEL_POSITION                             0x1
#define _APFCON0_RXSEL_SIZE                                 0x1
#define _APFCON0_RXSEL_LENGTH                               0x1
#define _APFCON0_RXSEL_MASK                                 0x2
#define _APFCON0_TXSEL_POSN                                 0x2
#define _APFCON0_TXSEL_POSITION                             0x2
#define _APFCON0_TXSEL_SIZE                                 0x1
#define _APFCON0_TXSEL_LENGTH                               0x1
#define _APFCON0_TXSEL_MASK                                 0x4
#define _APFCON0_SDISEL_POSN                                0x3
#define _APFCON0_SDISEL_POSITION                            0x3
#define _APFCON0_SDISEL_SIZE                                0x1
#define _APFCON0_SDISEL_LENGTH                              0x1
#define _APFCON0_SDISEL_MASK                                0x8
#define _APFCON0_SCKSEL_POSN                                0x4
#define _APFCON0_SCKSEL_POSITION                            0x4
#define _APFCON0_SCKSEL_SIZE                                0x1
#define _APFCON0_SCKSEL_LENGTH                              0x1
#define _APFCON0_SCKSEL_MASK                                0x10
#define _APFCON0_SDOSEL_POSN                                0x5
#define _APFCON0_SDOSEL_POSITION                            0x5
#define _APFCON0_SDOSEL_SIZE                                0x1
#define _APFCON0_SDOSEL_LENGTH                              0x1
#define _APFCON0_SDOSEL_MASK                                0x20
#define _APFCON0_CCP1SEL_POSN                               0x6
#define _APFCON0_CCP1SEL_POSITION                           0x6
#define _APFCON0_CCP1SEL_SIZE                               0x1
#define _APFCON0_CCP1SEL_LENGTH                             0x1
#define _APFCON0_CCP1SEL_MASK                               0x40
#define _APFCON0_C2OUTSEL_POSN                              0x7
#define _APFCON0_C2OUTSEL_POSITION                          0x7
#define _APFCON0_C2OUTSEL_SIZE                              0x1
#define _APFCON0_C2OUTSEL_LENGTH                            0x1
#define _APFCON0_C2OUTSEL_MASK                              0x80

// Register: CM3CON0
#define CM3CON0 CM3CON0
extern volatile unsigned char           CM3CON0             __at(0x11E);
#ifndef _LIB_BUILD
asm("CM3CON0 equ 011Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C3SYNC                 :1;
        unsigned C3HYS                  :1;
        unsigned C3SP                   :1;
        unsigned C3ZLF                  :1;
        unsigned C3POL                  :1;
        unsigned C3OE                   :1;
        unsigned C3OUT                  :1;
        unsigned C3ON                   :1;
    };
} CM3CON0bits_t;
extern volatile CM3CON0bits_t CM3CON0bits __at(0x11E);
// bitfield macros
#define _CM3CON0_C3SYNC_POSN                                0x0
#define _CM3CON0_C3SYNC_POSITION                            0x0
#define _CM3CON0_C3SYNC_SIZE                                0x1
#define _CM3CON0_C3SYNC_LENGTH                              0x1
#define _CM3CON0_C3SYNC_MASK                                0x1
#define _CM3CON0_C3HYS_POSN                                 0x1
#define _CM3CON0_C3HYS_POSITION                             0x1
#define _CM3CON0_C3HYS_SIZE                                 0x1
#define _CM3CON0_C3HYS_LENGTH                               0x1
#define _CM3CON0_C3HYS_MASK                                 0x2
#define _CM3CON0_C3SP_POSN                                  0x2
#define _CM3CON0_C3SP_POSITION                              0x2
#define _CM3CON0_C3SP_SIZE                                  0x1
#define _CM3CON0_C3SP_LENGTH                                0x1
#define _CM3CON0_C3SP_MASK                                  0x4
#define _CM3CON0_C3ZLF_POSN                                 0x3
#define _CM3CON0_C3ZLF_POSITION                             0x3
#define _CM3CON0_C3ZLF_SIZE                                 0x1
#define _CM3CON0_C3ZLF_LENGTH                               0x1
#define _CM3CON0_C3ZLF_MASK                                 0x8
#define _CM3CON0_C3POL_POSN                                 0x4
#define _CM3CON0_C3POL_POSITION                             0x4
#define _CM3CON0_C3POL_SIZE                                 0x1
#define _CM3CON0_C3POL_LENGTH                               0x1
#define _CM3CON0_C3POL_MASK                                 0x10
#define _CM3CON0_C3OE_POSN                                  0x5
#define _CM3CON0_C3OE_POSITION                              0x5
#define _CM3CON0_C3OE_SIZE                                  0x1
#define _CM3CON0_C3OE_LENGTH                                0x1
#define _CM3CON0_C3OE_MASK                                  0x20
#define _CM3CON0_C3OUT_POSN                                 0x6
#define _CM3CON0_C3OUT_POSITION                             0x6
#define _CM3CON0_C3OUT_SIZE                                 0x1
#define _CM3CON0_C3OUT_LENGTH                               0x1
#define _CM3CON0_C3OUT_MASK                                 0x40
#define _CM3CON0_C3ON_POSN                                  0x7
#define _CM3CON0_C3ON_POSITION                              0x7
#define _CM3CON0_C3ON_SIZE                                  0x1
#define _CM3CON0_C3ON_LENGTH                                0x1
#define _CM3CON0_C3ON_MASK                                  0x80

// Register: CM3CON1
#define CM3CON1 CM3CON1
extern volatile unsigned char           CM3CON1             __at(0x11F);
#ifndef _LIB_BUILD
asm("CM3CON1 equ 011Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C3NCH0                 :1;
        unsigned C3NCH1                 :1;
        unsigned C3NCH2                 :1;
        unsigned C3PCH0                 :1;
        unsigned C3PCH1                 :1;
        unsigned C3PCH2                 :1;
        unsigned C3INTN                 :1;
        unsigned C3INTP                 :1;
    };
    struct {
        unsigned C3NCH                  :3;
        unsigned C3PCH                  :3;
    };
} CM3CON1bits_t;
extern volatile CM3CON1bits_t CM3CON1bits __at(0x11F);
// bitfield macros
#define _CM3CON1_C3NCH0_POSN                                0x0
#define _CM3CON1_C3NCH0_POSITION                            0x0
#define _CM3CON1_C3NCH0_SIZE                                0x1
#define _CM3CON1_C3NCH0_LENGTH                              0x1
#define _CM3CON1_C3NCH0_MASK                                0x1
#define _CM3CON1_C3NCH1_POSN                                0x1
#define _CM3CON1_C3NCH1_POSITION                            0x1
#define _CM3CON1_C3NCH1_SIZE                                0x1
#define _CM3CON1_C3NCH1_LENGTH                              0x1
#define _CM3CON1_C3NCH1_MASK                                0x2
#define _CM3CON1_C3NCH2_POSN                                0x2
#define _CM3CON1_C3NCH2_POSITION                            0x2
#define _CM3CON1_C3NCH2_SIZE                                0x1
#define _CM3CON1_C3NCH2_LENGTH                              0x1
#define _CM3CON1_C3NCH2_MASK                                0x4
#define _CM3CON1_C3PCH0_POSN                                0x3
#define _CM3CON1_C3PCH0_POSITION                            0x3
#define _CM3CON1_C3PCH0_SIZE                                0x1
#define _CM3CON1_C3PCH0_LENGTH                              0x1
#define _CM3CON1_C3PCH0_MASK                                0x8
#define _CM3CON1_C3PCH1_POSN                                0x4
#define _CM3CON1_C3PCH1_POSITION                            0x4
#define _CM3CON1_C3PCH1_SIZE                                0x1
#define _CM3CON1_C3PCH1_LENGTH                              0x1
#define _CM3CON1_C3PCH1_MASK                                0x10
#define _CM3CON1_C3PCH2_POSN                                0x5
#define _CM3CON1_C3PCH2_POSITION                            0x5
#define _CM3CON1_C3PCH2_SIZE                                0x1
#define _CM3CON1_C3PCH2_LENGTH                              0x1
#define _CM3CON1_C3PCH2_MASK                                0x20
#define _CM3CON1_C3INTN_POSN                                0x6
#define _CM3CON1_C3INTN_POSITION                            0x6
#define _CM3CON1_C3INTN_SIZE                                0x1
#define _CM3CON1_C3INTN_LENGTH                              0x1
#define _CM3CON1_C3INTN_MASK                                0x40
#define _CM3CON1_C3INTP_POSN                                0x7
#define _CM3CON1_C3INTP_POSITION                            0x7
#define _CM3CON1_C3INTP_SIZE                                0x1
#define _CM3CON1_C3INTP_LENGTH                              0x1
#define _CM3CON1_C3INTP_MASK                                0x80
#define _CM3CON1_C3NCH_POSN                                 0x0
#define _CM3CON1_C3NCH_POSITION                             0x0
#define _CM3CON1_C3NCH_SIZE                                 0x3
#define _CM3CON1_C3NCH_LENGTH                               0x3
#define _CM3CON1_C3NCH_MASK                                 0x7
#define _CM3CON1_C3PCH_POSN                                 0x3
#define _CM3CON1_C3PCH_POSITION                             0x3
#define _CM3CON1_C3PCH_SIZE                                 0x3
#define _CM3CON1_C3PCH_LENGTH                               0x3
#define _CM3CON1_C3PCH_MASK                                 0x38

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
        unsigned                        :1;
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

// Register: EEADR
#define EEADR EEADR
extern volatile unsigned short          EEADR               __at(0x191);
#ifndef _LIB_BUILD
asm("EEADR equ 0191h");
#endif

// Register: EEADRL
#define EEADRL EEADRL
extern volatile unsigned char           EEADRL              __at(0x191);
#ifndef _LIB_BUILD
asm("EEADRL equ 0191h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADRL                 :8;
    };
} EEADRLbits_t;
extern volatile EEADRLbits_t EEADRLbits __at(0x191);
// bitfield macros
#define _EEADRL_EEADRL_POSN                                 0x0
#define _EEADRL_EEADRL_POSITION                             0x0
#define _EEADRL_EEADRL_SIZE                                 0x8
#define _EEADRL_EEADRL_LENGTH                               0x8
#define _EEADRL_EEADRL_MASK                                 0xFF

// Register: EEADRH
#define EEADRH EEADRH
extern volatile unsigned char           EEADRH              __at(0x192);
#ifndef _LIB_BUILD
asm("EEADRH equ 0192h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADRH                 :7;
    };
} EEADRHbits_t;
extern volatile EEADRHbits_t EEADRHbits __at(0x192);
// bitfield macros
#define _EEADRH_EEADRH_POSN                                 0x0
#define _EEADRH_EEADRH_POSITION                             0x0
#define _EEADRH_EEADRH_SIZE                                 0x7
#define _EEADRH_EEADRH_LENGTH                               0x7
#define _EEADRH_EEADRH_MASK                                 0x7F

// Register: EEDAT
#define EEDAT EEDAT
extern volatile unsigned short          EEDAT               __at(0x193);
#ifndef _LIB_BUILD
asm("EEDAT equ 0193h");
#endif

// Register: EEDATL
#define EEDATL EEDATL
extern volatile unsigned char           EEDATL              __at(0x193);
#ifndef _LIB_BUILD
asm("EEDATL equ 0193h");
#endif
// aliases
extern volatile unsigned char           EEDATA              __at(0x193);
#ifndef _LIB_BUILD
asm("EEDATA equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATL                 :8;
    };
} EEDATLbits_t;
extern volatile EEDATLbits_t EEDATLbits __at(0x193);
// bitfield macros
#define _EEDATL_EEDATL_POSN                                 0x0
#define _EEDATL_EEDATL_POSITION                             0x0
#define _EEDATL_EEDATL_SIZE                                 0x8
#define _EEDATL_EEDATL_LENGTH                               0x8
#define _EEDATL_EEDATL_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned EEDATL                 :8;
    };
} EEDATAbits_t;
extern volatile EEDATAbits_t EEDATAbits __at(0x193);
// bitfield macros
#define _EEDATA_EEDATL_POSN                                 0x0
#define _EEDATA_EEDATL_POSITION                             0x0
#define _EEDATA_EEDATL_SIZE                                 0x8
#define _EEDATA_EEDATL_LENGTH                               0x8
#define _EEDATA_EEDATL_MASK                                 0xFF

// Register: EEDATH
#define EEDATH EEDATH
extern volatile unsigned char           EEDATH              __at(0x194);
#ifndef _LIB_BUILD
asm("EEDATH equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATH                 :6;
    };
} EEDATHbits_t;
extern volatile EEDATHbits_t EEDATHbits __at(0x194);
// bitfield macros
#define _EEDATH_EEDATH_POSN                                 0x0
#define _EEDATH_EEDATH_POSITION                             0x0
#define _EEDATH_EEDATH_SIZE                                 0x6
#define _EEDATH_EEDATH_LENGTH                               0x6
#define _EEDATH_EEDATH_MASK                                 0x3F

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0x195);
#ifndef _LIB_BUILD
asm("EECON1 equ 0195h");
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
        unsigned EEPGD                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x195);
// bitfield macros
#define _EECON1_RD_POSN                                     0x0
#define _EECON1_RD_POSITION                                 0x0
#define _EECON1_RD_SIZE                                     0x1
#define _EECON1_RD_LENGTH                                   0x1
#define _EECON1_RD_MASK                                     0x1
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
#define _EECON1_LWLO_POSN                                   0x5
#define _EECON1_LWLO_POSITION                               0x5
#define _EECON1_LWLO_SIZE                                   0x1
#define _EECON1_LWLO_LENGTH                                 0x1
#define _EECON1_LWLO_MASK                                   0x20
#define _EECON1_CFGS_POSN                                   0x6
#define _EECON1_CFGS_POSITION                               0x6
#define _EECON1_CFGS_SIZE                                   0x1
#define _EECON1_CFGS_LENGTH                                 0x1
#define _EECON1_CFGS_MASK                                   0x40
#define _EECON1_EEPGD_POSN                                  0x7
#define _EECON1_EEPGD_POSITION                              0x7
#define _EECON1_EEPGD_SIZE                                  0x1
#define _EECON1_EEPGD_LENGTH                                0x1
#define _EECON1_EEPGD_MASK                                  0x80

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0x196);
#ifndef _LIB_BUILD
asm("EECON2 equ 0196h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EECON2                 :8;
    };
} EECON2bits_t;
extern volatile EECON2bits_t EECON2bits __at(0x196);
// bitfield macros
#define _EECON2_EECON2_POSN                                 0x0
#define _EECON2_EECON2_POSITION                             0x0
#define _EECON2_EECON2_SIZE                                 0x8
#define _EECON2_EECON2_LENGTH                               0x8
#define _EECON2_EECON2_MASK                                 0xFF

// Register: VREGCON
#define VREGCON VREGCON
extern volatile unsigned char           VREGCON             __at(0x197);
#ifndef _LIB_BUILD
asm("VREGCON equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned VREGPM                 :1;
    };
} VREGCONbits_t;
extern volatile VREGCONbits_t VREGCONbits __at(0x197);
// bitfield macros
#define _VREGCON_VREGPM_POSN                                0x1
#define _VREGCON_VREGPM_POSITION                            0x1
#define _VREGCON_VREGPM_SIZE                                0x1
#define _VREGCON_VREGPM_LENGTH                              0x1
#define _VREGCON_VREGPM_MASK                                0x2

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
extern volatile unsigned char           TXREG1              __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG1 equ 019Ah");
#endif
extern volatile unsigned char           TXREG               __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG equ 019Ah");
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
} TXREG1bits_t;
extern volatile TXREG1bits_t TXREG1bits __at(0x19A);
// bitfield macros
#define _TXREG1_TX1REG_POSN                                 0x0
#define _TXREG1_TX1REG_POSITION                             0x0
#define _TXREG1_TX1REG_SIZE                                 0x8
#define _TXREG1_TX1REG_LENGTH                               0x8
#define _TXREG1_TX1REG_MASK                                 0xFF
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

// Register: SP1BRG
#define SP1BRG SP1BRG
extern volatile unsigned short          SP1BRG              __at(0x19B);
#ifndef _LIB_BUILD
asm("SP1BRG equ 019Bh");
#endif
// aliases
extern volatile unsigned short          SPBRG               __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRG equ 019Bh");
#endif

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
extern volatile unsigned char           SP1BRGL             __at(0x19B);
#ifndef _LIB_BUILD
asm("SP1BRGL equ 019Bh");
#endif
// aliases
extern volatile unsigned char           SPBRG1              __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 019Bh");
#endif
extern volatile unsigned char           SPBRGL              __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRGL equ 019Bh");
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
} SPBRG1bits_t;
extern volatile SPBRG1bits_t SPBRG1bits __at(0x19B);
// bitfield macros
#define _SPBRG1_SP1BRGL_POSN                                0x0
#define _SPBRG1_SP1BRGL_POSITION                            0x0
#define _SPBRG1_SP1BRGL_SIZE                                0x8
#define _SPBRG1_SP1BRGL_LENGTH                              0x8
#define _SPBRG1_SP1BRGL_MASK                                0xFF
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
extern volatile unsigned char           RCSTA1              __at(0x19D);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 019Dh");
#endif
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

// Register: TX1STA
#define TX1STA TX1STA
extern volatile unsigned char           TX1STA              __at(0x19E);
#ifndef _LIB_BUILD
asm("TX1STA equ 019Eh");
#endif
// aliases
extern volatile unsigned char           TXSTA1              __at(0x19E);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 019Eh");
#endif
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

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
extern volatile unsigned char           BAUD1CON            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUD1CON equ 019Fh");
#endif
// aliases
extern volatile unsigned char           BAUDCON1            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 019Fh");
#endif
extern volatile unsigned char           BAUDCTL1            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCTL1 equ 019Fh");
#endif
extern volatile unsigned char           BAUDCON             __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON equ 019Fh");
#endif
extern volatile unsigned char           BAUDCTL             __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 019Fh");
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
} BAUDCTL1bits_t;
extern volatile BAUDCTL1bits_t BAUDCTL1bits __at(0x19F);
// bitfield macros
#define _BAUDCTL1_ABDEN_POSN                                0x0
#define _BAUDCTL1_ABDEN_POSITION                            0x0
#define _BAUDCTL1_ABDEN_SIZE                                0x1
#define _BAUDCTL1_ABDEN_LENGTH                              0x1
#define _BAUDCTL1_ABDEN_MASK                                0x1
#define _BAUDCTL1_WUE_POSN                                  0x1
#define _BAUDCTL1_WUE_POSITION                              0x1
#define _BAUDCTL1_WUE_SIZE                                  0x1
#define _BAUDCTL1_WUE_LENGTH                                0x1
#define _BAUDCTL1_WUE_MASK                                  0x2
#define _BAUDCTL1_BRG16_POSN                                0x3
#define _BAUDCTL1_BRG16_POSITION                            0x3
#define _BAUDCTL1_BRG16_SIZE                                0x1
#define _BAUDCTL1_BRG16_LENGTH                              0x1
#define _BAUDCTL1_BRG16_MASK                                0x8
#define _BAUDCTL1_SCKP_POSN                                 0x4
#define _BAUDCTL1_SCKP_POSITION                             0x4
#define _BAUDCTL1_SCKP_SIZE                                 0x1
#define _BAUDCTL1_SCKP_LENGTH                               0x1
#define _BAUDCTL1_SCKP_MASK                                 0x10
#define _BAUDCTL1_RCIDL_POSN                                0x6
#define _BAUDCTL1_RCIDL_POSITION                            0x6
#define _BAUDCTL1_RCIDL_SIZE                                0x1
#define _BAUDCTL1_RCIDL_LENGTH                              0x1
#define _BAUDCTL1_RCIDL_MASK                                0x40
#define _BAUDCTL1_ABDOVF_POSN                               0x7
#define _BAUDCTL1_ABDOVF_POSITION                           0x7
#define _BAUDCTL1_ABDOVF_SIZE                               0x1
#define _BAUDCTL1_ABDOVF_LENGTH                             0x1
#define _BAUDCTL1_ABDOVF_MASK                               0x80
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
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0x19F);
// bitfield macros
#define _BAUDCTL_ABDEN_POSN                                 0x0
#define _BAUDCTL_ABDEN_POSITION                             0x0
#define _BAUDCTL_ABDEN_SIZE                                 0x1
#define _BAUDCTL_ABDEN_LENGTH                               0x1
#define _BAUDCTL_ABDEN_MASK                                 0x1
#define _BAUDCTL_WUE_POSN                                   0x1
#define _BAUDCTL_WUE_POSITION                               0x1
#define _BAUDCTL_WUE_SIZE                                   0x1
#define _BAUDCTL_WUE_LENGTH                                 0x1
#define _BAUDCTL_WUE_MASK                                   0x2
#define _BAUDCTL_BRG16_POSN                                 0x3
#define _BAUDCTL_BRG16_POSITION                             0x3
#define _BAUDCTL_BRG16_SIZE                                 0x1
#define _BAUDCTL_BRG16_LENGTH                               0x1
#define _BAUDCTL_BRG16_MASK                                 0x8
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80

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
        unsigned WPUA6                  :1;
        unsigned WPUA7                  :1;
    };
    struct {
        unsigned WPUA                   :8;
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
#define _WPUA_WPUA6_POSN                                    0x6
#define _WPUA_WPUA6_POSITION                                0x6
#define _WPUA_WPUA6_SIZE                                    0x1
#define _WPUA_WPUA6_LENGTH                                  0x1
#define _WPUA_WPUA6_MASK                                    0x40
#define _WPUA_WPUA7_POSN                                    0x7
#define _WPUA_WPUA7_POSITION                                0x7
#define _WPUA_WPUA7_SIZE                                    0x1
#define _WPUA_WPUA7_LENGTH                                  0x1
#define _WPUA_WPUA7_MASK                                    0x80
#define _WPUA_WPUA_POSN                                     0x0
#define _WPUA_WPUA_POSITION                                 0x0
#define _WPUA_WPUA_SIZE                                     0x8
#define _WPUA_WPUA_LENGTH                                   0x8
#define _WPUA_WPUA_MASK                                     0xFF

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

// Register: WPUC
#define WPUC WPUC
extern volatile unsigned char           WPUC                __at(0x20E);
#ifndef _LIB_BUILD
asm("WPUC equ 020Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUC0                  :1;
        unsigned WPUC1                  :1;
        unsigned WPUC2                  :1;
        unsigned WPUC3                  :1;
        unsigned WPUC4                  :1;
        unsigned WPUC5                  :1;
        unsigned WPUC6                  :1;
        unsigned WPUC7                  :1;
    };
    struct {
        unsigned WPUC                   :8;
    };
} WPUCbits_t;
extern volatile WPUCbits_t WPUCbits __at(0x20E);
// bitfield macros
#define _WPUC_WPUC0_POSN                                    0x0
#define _WPUC_WPUC0_POSITION                                0x0
#define _WPUC_WPUC0_SIZE                                    0x1
#define _WPUC_WPUC0_LENGTH                                  0x1
#define _WPUC_WPUC0_MASK                                    0x1
#define _WPUC_WPUC1_POSN                                    0x1
#define _WPUC_WPUC1_POSITION                                0x1
#define _WPUC_WPUC1_SIZE                                    0x1
#define _WPUC_WPUC1_LENGTH                                  0x1
#define _WPUC_WPUC1_MASK                                    0x2
#define _WPUC_WPUC2_POSN                                    0x2
#define _WPUC_WPUC2_POSITION                                0x2
#define _WPUC_WPUC2_SIZE                                    0x1
#define _WPUC_WPUC2_LENGTH                                  0x1
#define _WPUC_WPUC2_MASK                                    0x4
#define _WPUC_WPUC3_POSN                                    0x3
#define _WPUC_WPUC3_POSITION                                0x3
#define _WPUC_WPUC3_SIZE                                    0x1
#define _WPUC_WPUC3_LENGTH                                  0x1
#define _WPUC_WPUC3_MASK                                    0x8
#define _WPUC_WPUC4_POSN                                    0x4
#define _WPUC_WPUC4_POSITION                                0x4
#define _WPUC_WPUC4_SIZE                                    0x1
#define _WPUC_WPUC4_LENGTH                                  0x1
#define _WPUC_WPUC4_MASK                                    0x10
#define _WPUC_WPUC5_POSN                                    0x5
#define _WPUC_WPUC5_POSITION                                0x5
#define _WPUC_WPUC5_SIZE                                    0x1
#define _WPUC_WPUC5_LENGTH                                  0x1
#define _WPUC_WPUC5_MASK                                    0x20
#define _WPUC_WPUC6_POSN                                    0x6
#define _WPUC_WPUC6_POSITION                                0x6
#define _WPUC_WPUC6_SIZE                                    0x1
#define _WPUC_WPUC6_LENGTH                                  0x1
#define _WPUC_WPUC6_MASK                                    0x40
#define _WPUC_WPUC7_POSN                                    0x7
#define _WPUC_WPUC7_POSITION                                0x7
#define _WPUC_WPUC7_SIZE                                    0x1
#define _WPUC_WPUC7_LENGTH                                  0x1
#define _WPUC_WPUC7_MASK                                    0x80
#define _WPUC_WPUC_POSN                                     0x0
#define _WPUC_WPUC_POSITION                                 0x0
#define _WPUC_WPUC_SIZE                                     0x8
#define _WPUC_WPUC_LENGTH                                   0x8
#define _WPUC_WPUC_MASK                                     0xFF

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

// Register: SSPBUF
#define SSPBUF SSPBUF
extern volatile unsigned char           SSPBUF              __at(0x211);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0211h");
#endif
// aliases
extern volatile unsigned char           SSP1BUF             __at(0x211);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0211h");
#endif
// bitfield definitions
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
// alias bitfield definitions
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

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0x212);
#ifndef _LIB_BUILD
asm("SSPADD equ 0212h");
#endif
// aliases
extern volatile unsigned char           SSP1ADD             __at(0x212);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0212h");
#endif
// bitfield definitions
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
// alias bitfield definitions
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

// Register: SSPMSK
#define SSPMSK SSPMSK
extern volatile unsigned char           SSPMSK              __at(0x213);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0213h");
#endif
// aliases
extern volatile unsigned char           SSP1MSK             __at(0x213);
#ifndef _LIB_BUILD
asm("SSP1MSK equ 0213h");
#endif
// bitfield definitions
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
// alias bitfield definitions
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

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
extern volatile unsigned char           SSPSTAT             __at(0x214);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0214h");
#endif
// aliases
extern volatile unsigned char           SSP1STAT            __at(0x214);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0214h");
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

// Register: SSPCON1
#define SSPCON1 SSPCON1
extern volatile unsigned char           SSPCON1             __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0215h");
#endif
// aliases
extern volatile unsigned char           SSP1CON             __at(0x215);
#ifndef _LIB_BUILD
asm("SSP1CON equ 0215h");
#endif
extern volatile unsigned char           SSPCON              __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON equ 0215h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0x215);
// bitfield macros
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
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
    };
} SSP1CONbits_t;
extern volatile SSP1CONbits_t SSP1CONbits __at(0x215);
// bitfield macros
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
#define _SSP1CON_SSPM_POSN                                  0x0
#define _SSP1CON_SSPM_POSITION                              0x0
#define _SSP1CON_SSPM_SIZE                                  0x4
#define _SSP1CON_SSPM_LENGTH                                0x4
#define _SSP1CON_SSPM_MASK                                  0xF
typedef union {
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
    };
} SSPCONbits_t;
extern volatile SSPCONbits_t SSPCONbits __at(0x215);
// bitfield macros
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

// Register: SSPCON2
#define SSPCON2 SSPCON2
extern volatile unsigned char           SSPCON2             __at(0x216);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0216h");
#endif
// aliases
extern volatile unsigned char           SSP1CON2            __at(0x216);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0216h");
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

// Register: SSPCON3
#define SSPCON3 SSPCON3
extern volatile unsigned char           SSPCON3             __at(0x217);
#ifndef _LIB_BUILD
asm("SSPCON3 equ 0217h");
#endif
// aliases
extern volatile unsigned char           SSP1CON3            __at(0x217);
#ifndef _LIB_BUILD
asm("SSP1CON3 equ 0217h");
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

// Register: ODCONA
#define ODCONA ODCONA
extern volatile unsigned char           ODCONA              __at(0x28C);
#ifndef _LIB_BUILD
asm("ODCONA equ 028Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCONA0                :1;
        unsigned ODCONA1                :1;
        unsigned ODCONA2                :1;
        unsigned ODCONA3                :1;
        unsigned ODCONA4                :1;
        unsigned ODCONA5                :1;
        unsigned ODCONA6                :1;
        unsigned ODCONA7                :1;
    };
    struct {
        unsigned ODCONA                 :8;
    };
} ODCONAbits_t;
extern volatile ODCONAbits_t ODCONAbits __at(0x28C);
// bitfield macros
#define _ODCONA_ODCONA0_POSN                                0x0
#define _ODCONA_ODCONA0_POSITION                            0x0
#define _ODCONA_ODCONA0_SIZE                                0x1
#define _ODCONA_ODCONA0_LENGTH                              0x1
#define _ODCONA_ODCONA0_MASK                                0x1
#define _ODCONA_ODCONA1_POSN                                0x1
#define _ODCONA_ODCONA1_POSITION                            0x1
#define _ODCONA_ODCONA1_SIZE                                0x1
#define _ODCONA_ODCONA1_LENGTH                              0x1
#define _ODCONA_ODCONA1_MASK                                0x2
#define _ODCONA_ODCONA2_POSN                                0x2
#define _ODCONA_ODCONA2_POSITION                            0x2
#define _ODCONA_ODCONA2_SIZE                                0x1
#define _ODCONA_ODCONA2_LENGTH                              0x1
#define _ODCONA_ODCONA2_MASK                                0x4
#define _ODCONA_ODCONA3_POSN                                0x3
#define _ODCONA_ODCONA3_POSITION                            0x3
#define _ODCONA_ODCONA3_SIZE                                0x1
#define _ODCONA_ODCONA3_LENGTH                              0x1
#define _ODCONA_ODCONA3_MASK                                0x8
#define _ODCONA_ODCONA4_POSN                                0x4
#define _ODCONA_ODCONA4_POSITION                            0x4
#define _ODCONA_ODCONA4_SIZE                                0x1
#define _ODCONA_ODCONA4_LENGTH                              0x1
#define _ODCONA_ODCONA4_MASK                                0x10
#define _ODCONA_ODCONA5_POSN                                0x5
#define _ODCONA_ODCONA5_POSITION                            0x5
#define _ODCONA_ODCONA5_SIZE                                0x1
#define _ODCONA_ODCONA5_LENGTH                              0x1
#define _ODCONA_ODCONA5_MASK                                0x20
#define _ODCONA_ODCONA6_POSN                                0x6
#define _ODCONA_ODCONA6_POSITION                            0x6
#define _ODCONA_ODCONA6_SIZE                                0x1
#define _ODCONA_ODCONA6_LENGTH                              0x1
#define _ODCONA_ODCONA6_MASK                                0x40
#define _ODCONA_ODCONA7_POSN                                0x7
#define _ODCONA_ODCONA7_POSITION                            0x7
#define _ODCONA_ODCONA7_SIZE                                0x1
#define _ODCONA_ODCONA7_LENGTH                              0x1
#define _ODCONA_ODCONA7_MASK                                0x80
#define _ODCONA_ODCONA_POSN                                 0x0
#define _ODCONA_ODCONA_POSITION                             0x0
#define _ODCONA_ODCONA_SIZE                                 0x8
#define _ODCONA_ODCONA_LENGTH                               0x8
#define _ODCONA_ODCONA_MASK                                 0xFF

// Register: ODCONB
#define ODCONB ODCONB
extern volatile unsigned char           ODCONB              __at(0x28D);
#ifndef _LIB_BUILD
asm("ODCONB equ 028Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCONB0                :1;
        unsigned ODCONB1                :1;
        unsigned ODCONB2                :1;
        unsigned ODCONB3                :1;
        unsigned ODCONB4                :1;
        unsigned ODCONB5                :1;
        unsigned ODCONB6                :1;
        unsigned ODCONB7                :1;
    };
    struct {
        unsigned ODCONB                 :8;
    };
} ODCONBbits_t;
extern volatile ODCONBbits_t ODCONBbits __at(0x28D);
// bitfield macros
#define _ODCONB_ODCONB0_POSN                                0x0
#define _ODCONB_ODCONB0_POSITION                            0x0
#define _ODCONB_ODCONB0_SIZE                                0x1
#define _ODCONB_ODCONB0_LENGTH                              0x1
#define _ODCONB_ODCONB0_MASK                                0x1
#define _ODCONB_ODCONB1_POSN                                0x1
#define _ODCONB_ODCONB1_POSITION                            0x1
#define _ODCONB_ODCONB1_SIZE                                0x1
#define _ODCONB_ODCONB1_LENGTH                              0x1
#define _ODCONB_ODCONB1_MASK                                0x2
#define _ODCONB_ODCONB2_POSN                                0x2
#define _ODCONB_ODCONB2_POSITION                            0x2
#define _ODCONB_ODCONB2_SIZE                                0x1
#define _ODCONB_ODCONB2_LENGTH                              0x1
#define _ODCONB_ODCONB2_MASK                                0x4
#define _ODCONB_ODCONB3_POSN                                0x3
#define _ODCONB_ODCONB3_POSITION                            0x3
#define _ODCONB_ODCONB3_SIZE                                0x1
#define _ODCONB_ODCONB3_LENGTH                              0x1
#define _ODCONB_ODCONB3_MASK                                0x8
#define _ODCONB_ODCONB4_POSN                                0x4
#define _ODCONB_ODCONB4_POSITION                            0x4
#define _ODCONB_ODCONB4_SIZE                                0x1
#define _ODCONB_ODCONB4_LENGTH                              0x1
#define _ODCONB_ODCONB4_MASK                                0x10
#define _ODCONB_ODCONB5_POSN                                0x5
#define _ODCONB_ODCONB5_POSITION                            0x5
#define _ODCONB_ODCONB5_SIZE                                0x1
#define _ODCONB_ODCONB5_LENGTH                              0x1
#define _ODCONB_ODCONB5_MASK                                0x20
#define _ODCONB_ODCONB6_POSN                                0x6
#define _ODCONB_ODCONB6_POSITION                            0x6
#define _ODCONB_ODCONB6_SIZE                                0x1
#define _ODCONB_ODCONB6_LENGTH                              0x1
#define _ODCONB_ODCONB6_MASK                                0x40
#define _ODCONB_ODCONB7_POSN                                0x7
#define _ODCONB_ODCONB7_POSITION                            0x7
#define _ODCONB_ODCONB7_SIZE                                0x1
#define _ODCONB_ODCONB7_LENGTH                              0x1
#define _ODCONB_ODCONB7_MASK                                0x80
#define _ODCONB_ODCONB_POSN                                 0x0
#define _ODCONB_ODCONB_POSITION                             0x0
#define _ODCONB_ODCONB_SIZE                                 0x8
#define _ODCONB_ODCONB_LENGTH                               0x8
#define _ODCONB_ODCONB_MASK                                 0xFF

// Register: ODCONC
#define ODCONC ODCONC
extern volatile unsigned char           ODCONC              __at(0x28E);
#ifndef _LIB_BUILD
asm("ODCONC equ 028Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCONC0                :1;
        unsigned ODCONC1                :1;
        unsigned ODCONC2                :1;
        unsigned ODCONC3                :1;
        unsigned ODCONC4                :1;
        unsigned ODCONC5                :1;
        unsigned ODCONC6                :1;
        unsigned ODCONC7                :1;
    };
    struct {
        unsigned ODCONC                 :8;
    };
} ODCONCbits_t;
extern volatile ODCONCbits_t ODCONCbits __at(0x28E);
// bitfield macros
#define _ODCONC_ODCONC0_POSN                                0x0
#define _ODCONC_ODCONC0_POSITION                            0x0
#define _ODCONC_ODCONC0_SIZE                                0x1
#define _ODCONC_ODCONC0_LENGTH                              0x1
#define _ODCONC_ODCONC0_MASK                                0x1
#define _ODCONC_ODCONC1_POSN                                0x1
#define _ODCONC_ODCONC1_POSITION                            0x1
#define _ODCONC_ODCONC1_SIZE                                0x1
#define _ODCONC_ODCONC1_LENGTH                              0x1
#define _ODCONC_ODCONC1_MASK                                0x2
#define _ODCONC_ODCONC2_POSN                                0x2
#define _ODCONC_ODCONC2_POSITION                            0x2
#define _ODCONC_ODCONC2_SIZE                                0x1
#define _ODCONC_ODCONC2_LENGTH                              0x1
#define _ODCONC_ODCONC2_MASK                                0x4
#define _ODCONC_ODCONC3_POSN                                0x3
#define _ODCONC_ODCONC3_POSITION                            0x3
#define _ODCONC_ODCONC3_SIZE                                0x1
#define _ODCONC_ODCONC3_LENGTH                              0x1
#define _ODCONC_ODCONC3_MASK                                0x8
#define _ODCONC_ODCONC4_POSN                                0x4
#define _ODCONC_ODCONC4_POSITION                            0x4
#define _ODCONC_ODCONC4_SIZE                                0x1
#define _ODCONC_ODCONC4_LENGTH                              0x1
#define _ODCONC_ODCONC4_MASK                                0x10
#define _ODCONC_ODCONC5_POSN                                0x5
#define _ODCONC_ODCONC5_POSITION                            0x5
#define _ODCONC_ODCONC5_SIZE                                0x1
#define _ODCONC_ODCONC5_LENGTH                              0x1
#define _ODCONC_ODCONC5_MASK                                0x20
#define _ODCONC_ODCONC6_POSN                                0x6
#define _ODCONC_ODCONC6_POSITION                            0x6
#define _ODCONC_ODCONC6_SIZE                                0x1
#define _ODCONC_ODCONC6_LENGTH                              0x1
#define _ODCONC_ODCONC6_MASK                                0x40
#define _ODCONC_ODCONC7_POSN                                0x7
#define _ODCONC_ODCONC7_POSITION                            0x7
#define _ODCONC_ODCONC7_SIZE                                0x1
#define _ODCONC_ODCONC7_LENGTH                              0x1
#define _ODCONC_ODCONC7_MASK                                0x80
#define _ODCONC_ODCONC_POSN                                 0x0
#define _ODCONC_ODCONC_POSITION                             0x0
#define _ODCONC_ODCONC_SIZE                                 0x8
#define _ODCONC_ODCONC_LENGTH                               0x8
#define _ODCONC_ODCONC_MASK                                 0xFF

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
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x293);
// bitfield macros
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
#define _CCP1CON_P1M0_POSN                                  0x6
#define _CCP1CON_P1M0_POSITION                              0x6
#define _CCP1CON_P1M0_SIZE                                  0x1
#define _CCP1CON_P1M0_LENGTH                                0x1
#define _CCP1CON_P1M0_MASK                                  0x40
#define _CCP1CON_P1M1_POSN                                  0x7
#define _CCP1CON_P1M1_POSITION                              0x7
#define _CCP1CON_P1M1_SIZE                                  0x1
#define _CCP1CON_P1M1_LENGTH                                0x1
#define _CCP1CON_P1M1_MASK                                  0x80
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
#define _CCP1CON_P1M_POSN                                   0x6
#define _CCP1CON_P1M_POSITION                               0x6
#define _CCP1CON_P1M_SIZE                                   0x2
#define _CCP1CON_P1M_LENGTH                                 0x2
#define _CCP1CON_P1M_MASK                                   0xC0

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
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
        unsigned P2M0                   :1;
        unsigned P2M1                   :1;
    };
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
        unsigned P2M                    :2;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x29A);
// bitfield macros
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
#define _CCP2CON_P2M0_POSN                                  0x6
#define _CCP2CON_P2M0_POSITION                              0x6
#define _CCP2CON_P2M0_SIZE                                  0x1
#define _CCP2CON_P2M0_LENGTH                                0x1
#define _CCP2CON_P2M0_MASK                                  0x40
#define _CCP2CON_P2M1_POSN                                  0x7
#define _CCP2CON_P2M1_POSITION                              0x7
#define _CCP2CON_P2M1_SIZE                                  0x1
#define _CCP2CON_P2M1_LENGTH                                0x1
#define _CCP2CON_P2M1_MASK                                  0x80
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
#define _CCP2CON_P2M_POSN                                   0x6
#define _CCP2CON_P2M_POSITION                               0x6
#define _CCP2CON_P2M_SIZE                                   0x2
#define _CCP2CON_P2M_LENGTH                                 0x2
#define _CCP2CON_P2M_MASK                                   0xC0

// Register: SLRCONA
#define SLRCONA SLRCONA
extern volatile unsigned char           SLRCONA             __at(0x30C);
#ifndef _LIB_BUILD
asm("SLRCONA equ 030Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRCONA0               :1;
        unsigned SLRCONA1               :1;
        unsigned SLRCONA2               :1;
        unsigned SLRCONA3               :1;
        unsigned SLRCONA4               :1;
        unsigned SLRCONA5               :1;
        unsigned SLRCONA6               :1;
        unsigned SLRCONA7               :1;
    };
    struct {
        unsigned SLRCONA                :8;
    };
} SLRCONAbits_t;
extern volatile SLRCONAbits_t SLRCONAbits __at(0x30C);
// bitfield macros
#define _SLRCONA_SLRCONA0_POSN                              0x0
#define _SLRCONA_SLRCONA0_POSITION                          0x0
#define _SLRCONA_SLRCONA0_SIZE                              0x1
#define _SLRCONA_SLRCONA0_LENGTH                            0x1
#define _SLRCONA_SLRCONA0_MASK                              0x1
#define _SLRCONA_SLRCONA1_POSN                              0x1
#define _SLRCONA_SLRCONA1_POSITION                          0x1
#define _SLRCONA_SLRCONA1_SIZE                              0x1
#define _SLRCONA_SLRCONA1_LENGTH                            0x1
#define _SLRCONA_SLRCONA1_MASK                              0x2
#define _SLRCONA_SLRCONA2_POSN                              0x2
#define _SLRCONA_SLRCONA2_POSITION                          0x2
#define _SLRCONA_SLRCONA2_SIZE                              0x1
#define _SLRCONA_SLRCONA2_LENGTH                            0x1
#define _SLRCONA_SLRCONA2_MASK                              0x4
#define _SLRCONA_SLRCONA3_POSN                              0x3
#define _SLRCONA_SLRCONA3_POSITION                          0x3
#define _SLRCONA_SLRCONA3_SIZE                              0x1
#define _SLRCONA_SLRCONA3_LENGTH                            0x1
#define _SLRCONA_SLRCONA3_MASK                              0x8
#define _SLRCONA_SLRCONA4_POSN                              0x4
#define _SLRCONA_SLRCONA4_POSITION                          0x4
#define _SLRCONA_SLRCONA4_SIZE                              0x1
#define _SLRCONA_SLRCONA4_LENGTH                            0x1
#define _SLRCONA_SLRCONA4_MASK                              0x10
#define _SLRCONA_SLRCONA5_POSN                              0x5
#define _SLRCONA_SLRCONA5_POSITION                          0x5
#define _SLRCONA_SLRCONA5_SIZE                              0x1
#define _SLRCONA_SLRCONA5_LENGTH                            0x1
#define _SLRCONA_SLRCONA5_MASK                              0x20
#define _SLRCONA_SLRCONA6_POSN                              0x6
#define _SLRCONA_SLRCONA6_POSITION                          0x6
#define _SLRCONA_SLRCONA6_SIZE                              0x1
#define _SLRCONA_SLRCONA6_LENGTH                            0x1
#define _SLRCONA_SLRCONA6_MASK                              0x40
#define _SLRCONA_SLRCONA7_POSN                              0x7
#define _SLRCONA_SLRCONA7_POSITION                          0x7
#define _SLRCONA_SLRCONA7_SIZE                              0x1
#define _SLRCONA_SLRCONA7_LENGTH                            0x1
#define _SLRCONA_SLRCONA7_MASK                              0x80
#define _SLRCONA_SLRCONA_POSN                               0x0
#define _SLRCONA_SLRCONA_POSITION                           0x0
#define _SLRCONA_SLRCONA_SIZE                               0x8
#define _SLRCONA_SLRCONA_LENGTH                             0x8
#define _SLRCONA_SLRCONA_MASK                               0xFF

// Register: SLRCONB
#define SLRCONB SLRCONB
extern volatile unsigned char           SLRCONB             __at(0x30D);
#ifndef _LIB_BUILD
asm("SLRCONB equ 030Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRCONB0               :1;
        unsigned SLRCONB1               :1;
        unsigned SLRCONB2               :1;
        unsigned SLRCONB3               :1;
        unsigned SLRCONB4               :1;
        unsigned SLRCONB5               :1;
        unsigned SLRCONB6               :1;
        unsigned SLRCONB7               :1;
    };
    struct {
        unsigned SLRCONB                :8;
    };
} SLRCONBbits_t;
extern volatile SLRCONBbits_t SLRCONBbits __at(0x30D);
// bitfield macros
#define _SLRCONB_SLRCONB0_POSN                              0x0
#define _SLRCONB_SLRCONB0_POSITION                          0x0
#define _SLRCONB_SLRCONB0_SIZE                              0x1
#define _SLRCONB_SLRCONB0_LENGTH                            0x1
#define _SLRCONB_SLRCONB0_MASK                              0x1
#define _SLRCONB_SLRCONB1_POSN                              0x1
#define _SLRCONB_SLRCONB1_POSITION                          0x1
#define _SLRCONB_SLRCONB1_SIZE                              0x1
#define _SLRCONB_SLRCONB1_LENGTH                            0x1
#define _SLRCONB_SLRCONB1_MASK                              0x2
#define _SLRCONB_SLRCONB2_POSN                              0x2
#define _SLRCONB_SLRCONB2_POSITION                          0x2
#define _SLRCONB_SLRCONB2_SIZE                              0x1
#define _SLRCONB_SLRCONB2_LENGTH                            0x1
#define _SLRCONB_SLRCONB2_MASK                              0x4
#define _SLRCONB_SLRCONB3_POSN                              0x3
#define _SLRCONB_SLRCONB3_POSITION                          0x3
#define _SLRCONB_SLRCONB3_SIZE                              0x1
#define _SLRCONB_SLRCONB3_LENGTH                            0x1
#define _SLRCONB_SLRCONB3_MASK                              0x8
#define _SLRCONB_SLRCONB4_POSN                              0x4
#define _SLRCONB_SLRCONB4_POSITION                          0x4
#define _SLRCONB_SLRCONB4_SIZE                              0x1
#define _SLRCONB_SLRCONB4_LENGTH                            0x1
#define _SLRCONB_SLRCONB4_MASK                              0x10
#define _SLRCONB_SLRCONB5_POSN                              0x5
#define _SLRCONB_SLRCONB5_POSITION                          0x5
#define _SLRCONB_SLRCONB5_SIZE                              0x1
#define _SLRCONB_SLRCONB5_LENGTH                            0x1
#define _SLRCONB_SLRCONB5_MASK                              0x20
#define _SLRCONB_SLRCONB6_POSN                              0x6
#define _SLRCONB_SLRCONB6_POSITION                          0x6
#define _SLRCONB_SLRCONB6_SIZE                              0x1
#define _SLRCONB_SLRCONB6_LENGTH                            0x1
#define _SLRCONB_SLRCONB6_MASK                              0x40
#define _SLRCONB_SLRCONB7_POSN                              0x7
#define _SLRCONB_SLRCONB7_POSITION                          0x7
#define _SLRCONB_SLRCONB7_SIZE                              0x1
#define _SLRCONB_SLRCONB7_LENGTH                            0x1
#define _SLRCONB_SLRCONB7_MASK                              0x80
#define _SLRCONB_SLRCONB_POSN                               0x0
#define _SLRCONB_SLRCONB_POSITION                           0x0
#define _SLRCONB_SLRCONB_SIZE                               0x8
#define _SLRCONB_SLRCONB_LENGTH                             0x8
#define _SLRCONB_SLRCONB_MASK                               0xFF

// Register: SLRCONC
#define SLRCONC SLRCONC
extern volatile unsigned char           SLRCONC             __at(0x30E);
#ifndef _LIB_BUILD
asm("SLRCONC equ 030Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRCONC0               :1;
        unsigned SLRCONC1               :1;
        unsigned SLRCONC2               :1;
        unsigned SLRCONC3               :1;
        unsigned SLRCONC4               :1;
        unsigned SLRCONC5               :1;
        unsigned SLRCONC6               :1;
        unsigned SLRCONC7               :1;
    };
    struct {
        unsigned SLRCONC                :8;
    };
} SLRCONCbits_t;
extern volatile SLRCONCbits_t SLRCONCbits __at(0x30E);
// bitfield macros
#define _SLRCONC_SLRCONC0_POSN                              0x0
#define _SLRCONC_SLRCONC0_POSITION                          0x0
#define _SLRCONC_SLRCONC0_SIZE                              0x1
#define _SLRCONC_SLRCONC0_LENGTH                            0x1
#define _SLRCONC_SLRCONC0_MASK                              0x1
#define _SLRCONC_SLRCONC1_POSN                              0x1
#define _SLRCONC_SLRCONC1_POSITION                          0x1
#define _SLRCONC_SLRCONC1_SIZE                              0x1
#define _SLRCONC_SLRCONC1_LENGTH                            0x1
#define _SLRCONC_SLRCONC1_MASK                              0x2
#define _SLRCONC_SLRCONC2_POSN                              0x2
#define _SLRCONC_SLRCONC2_POSITION                          0x2
#define _SLRCONC_SLRCONC2_SIZE                              0x1
#define _SLRCONC_SLRCONC2_LENGTH                            0x1
#define _SLRCONC_SLRCONC2_MASK                              0x4
#define _SLRCONC_SLRCONC3_POSN                              0x3
#define _SLRCONC_SLRCONC3_POSITION                          0x3
#define _SLRCONC_SLRCONC3_SIZE                              0x1
#define _SLRCONC_SLRCONC3_LENGTH                            0x1
#define _SLRCONC_SLRCONC3_MASK                              0x8
#define _SLRCONC_SLRCONC4_POSN                              0x4
#define _SLRCONC_SLRCONC4_POSITION                          0x4
#define _SLRCONC_SLRCONC4_SIZE                              0x1
#define _SLRCONC_SLRCONC4_LENGTH                            0x1
#define _SLRCONC_SLRCONC4_MASK                              0x10
#define _SLRCONC_SLRCONC5_POSN                              0x5
#define _SLRCONC_SLRCONC5_POSITION                          0x5
#define _SLRCONC_SLRCONC5_SIZE                              0x1
#define _SLRCONC_SLRCONC5_LENGTH                            0x1
#define _SLRCONC_SLRCONC5_MASK                              0x20
#define _SLRCONC_SLRCONC6_POSN                              0x6
#define _SLRCONC_SLRCONC6_POSITION                          0x6
#define _SLRCONC_SLRCONC6_SIZE                              0x1
#define _SLRCONC_SLRCONC6_LENGTH                            0x1
#define _SLRCONC_SLRCONC6_MASK                              0x40
#define _SLRCONC_SLRCONC7_POSN                              0x7
#define _SLRCONC_SLRCONC7_POSITION                          0x7
#define _SLRCONC_SLRCONC7_SIZE                              0x1
#define _SLRCONC_SLRCONC7_LENGTH                            0x1
#define _SLRCONC_SLRCONC7_MASK                              0x80
#define _SLRCONC_SLRCONC_POSN                               0x0
#define _SLRCONC_SLRCONC_POSITION                           0x0
#define _SLRCONC_SLRCONC_SIZE                               0x8
#define _SLRCONC_SLRCONC_LENGTH                             0x8
#define _SLRCONC_SLRCONC_MASK                               0xFF

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
        unsigned INLVLA6                :1;
        unsigned INLVLA7                :1;
    };
    struct {
        unsigned INLVLA                 :8;
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
#define _INLVLA_INLVLA6_POSN                                0x6
#define _INLVLA_INLVLA6_POSITION                            0x6
#define _INLVLA_INLVLA6_SIZE                                0x1
#define _INLVLA_INLVLA6_LENGTH                              0x1
#define _INLVLA_INLVLA6_MASK                                0x40
#define _INLVLA_INLVLA7_POSN                                0x7
#define _INLVLA_INLVLA7_POSITION                            0x7
#define _INLVLA_INLVLA7_SIZE                                0x1
#define _INLVLA_INLVLA7_LENGTH                              0x1
#define _INLVLA_INLVLA7_MASK                                0x80
#define _INLVLA_INLVLA_POSN                                 0x0
#define _INLVLA_INLVLA_POSITION                             0x0
#define _INLVLA_INLVLA_SIZE                                 0x8
#define _INLVLA_INLVLA_LENGTH                               0x8
#define _INLVLA_INLVLA_MASK                                 0xFF

// Register: INLVLB
#define INLVLB INLVLB
extern volatile unsigned char           INLVLB              __at(0x38D);
#ifndef _LIB_BUILD
asm("INLVLB equ 038Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLB0                :1;
        unsigned INLVLB1                :1;
        unsigned INLVLB2                :1;
        unsigned INLVLB3                :1;
        unsigned INLVLB4                :1;
        unsigned INLVLB5                :1;
        unsigned INLVLB6                :1;
        unsigned INLVLB7                :1;
    };
    struct {
        unsigned INLVLB                 :8;
    };
} INLVLBbits_t;
extern volatile INLVLBbits_t INLVLBbits __at(0x38D);
// bitfield macros
#define _INLVLB_INLVLB0_POSN                                0x0
#define _INLVLB_INLVLB0_POSITION                            0x0
#define _INLVLB_INLVLB0_SIZE                                0x1
#define _INLVLB_INLVLB0_LENGTH                              0x1
#define _INLVLB_INLVLB0_MASK                                0x1
#define _INLVLB_INLVLB1_POSN                                0x1
#define _INLVLB_INLVLB1_POSITION                            0x1
#define _INLVLB_INLVLB1_SIZE                                0x1
#define _INLVLB_INLVLB1_LENGTH                              0x1
#define _INLVLB_INLVLB1_MASK                                0x2
#define _INLVLB_INLVLB2_POSN                                0x2
#define _INLVLB_INLVLB2_POSITION                            0x2
#define _INLVLB_INLVLB2_SIZE                                0x1
#define _INLVLB_INLVLB2_LENGTH                              0x1
#define _INLVLB_INLVLB2_MASK                                0x4
#define _INLVLB_INLVLB3_POSN                                0x3
#define _INLVLB_INLVLB3_POSITION                            0x3
#define _INLVLB_INLVLB3_SIZE                                0x1
#define _INLVLB_INLVLB3_LENGTH                              0x1
#define _INLVLB_INLVLB3_MASK                                0x8
#define _INLVLB_INLVLB4_POSN                                0x4
#define _INLVLB_INLVLB4_POSITION                            0x4
#define _INLVLB_INLVLB4_SIZE                                0x1
#define _INLVLB_INLVLB4_LENGTH                              0x1
#define _INLVLB_INLVLB4_MASK                                0x10
#define _INLVLB_INLVLB5_POSN                                0x5
#define _INLVLB_INLVLB5_POSITION                            0x5
#define _INLVLB_INLVLB5_SIZE                                0x1
#define _INLVLB_INLVLB5_LENGTH                              0x1
#define _INLVLB_INLVLB5_MASK                                0x20
#define _INLVLB_INLVLB6_POSN                                0x6
#define _INLVLB_INLVLB6_POSITION                            0x6
#define _INLVLB_INLVLB6_SIZE                                0x1
#define _INLVLB_INLVLB6_LENGTH                              0x1
#define _INLVLB_INLVLB6_MASK                                0x40
#define _INLVLB_INLVLB7_POSN                                0x7
#define _INLVLB_INLVLB7_POSITION                            0x7
#define _INLVLB_INLVLB7_SIZE                                0x1
#define _INLVLB_INLVLB7_LENGTH                              0x1
#define _INLVLB_INLVLB7_MASK                                0x80
#define _INLVLB_INLVLB_POSN                                 0x0
#define _INLVLB_INLVLB_POSITION                             0x0
#define _INLVLB_INLVLB_SIZE                                 0x8
#define _INLVLB_INLVLB_LENGTH                               0x8
#define _INLVLB_INLVLB_MASK                                 0xFF

// Register: INLVLC
#define INLVLC INLVLC
extern volatile unsigned char           INLVLC              __at(0x38E);
#ifndef _LIB_BUILD
asm("INLVLC equ 038Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLC0                :1;
        unsigned INLVLC1                :1;
        unsigned INLVLC2                :1;
        unsigned INLVLC3                :1;
        unsigned INLVLC4                :1;
        unsigned INLVLC5                :1;
        unsigned INLVLC6                :1;
        unsigned INLVLC7                :1;
    };
    struct {
        unsigned INLVLC                 :8;
    };
} INLVLCbits_t;
extern volatile INLVLCbits_t INLVLCbits __at(0x38E);
// bitfield macros
#define _INLVLC_INLVLC0_POSN                                0x0
#define _INLVLC_INLVLC0_POSITION                            0x0
#define _INLVLC_INLVLC0_SIZE                                0x1
#define _INLVLC_INLVLC0_LENGTH                              0x1
#define _INLVLC_INLVLC0_MASK                                0x1
#define _INLVLC_INLVLC1_POSN                                0x1
#define _INLVLC_INLVLC1_POSITION                            0x1
#define _INLVLC_INLVLC1_SIZE                                0x1
#define _INLVLC_INLVLC1_LENGTH                              0x1
#define _INLVLC_INLVLC1_MASK                                0x2
#define _INLVLC_INLVLC2_POSN                                0x2
#define _INLVLC_INLVLC2_POSITION                            0x2
#define _INLVLC_INLVLC2_SIZE                                0x1
#define _INLVLC_INLVLC2_LENGTH                              0x1
#define _INLVLC_INLVLC2_MASK                                0x4
#define _INLVLC_INLVLC3_POSN                                0x3
#define _INLVLC_INLVLC3_POSITION                            0x3
#define _INLVLC_INLVLC3_SIZE                                0x1
#define _INLVLC_INLVLC3_LENGTH                              0x1
#define _INLVLC_INLVLC3_MASK                                0x8
#define _INLVLC_INLVLC4_POSN                                0x4
#define _INLVLC_INLVLC4_POSITION                            0x4
#define _INLVLC_INLVLC4_SIZE                                0x1
#define _INLVLC_INLVLC4_LENGTH                              0x1
#define _INLVLC_INLVLC4_MASK                                0x10
#define _INLVLC_INLVLC5_POSN                                0x5
#define _INLVLC_INLVLC5_POSITION                            0x5
#define _INLVLC_INLVLC5_SIZE                                0x1
#define _INLVLC_INLVLC5_LENGTH                              0x1
#define _INLVLC_INLVLC5_MASK                                0x20
#define _INLVLC_INLVLC6_POSN                                0x6
#define _INLVLC_INLVLC6_POSITION                            0x6
#define _INLVLC_INLVLC6_SIZE                                0x1
#define _INLVLC_INLVLC6_LENGTH                              0x1
#define _INLVLC_INLVLC6_MASK                                0x40
#define _INLVLC_INLVLC7_POSN                                0x7
#define _INLVLC_INLVLC7_POSITION                            0x7
#define _INLVLC_INLVLC7_SIZE                                0x1
#define _INLVLC_INLVLC7_LENGTH                              0x1
#define _INLVLC_INLVLC7_MASK                                0x80
#define _INLVLC_INLVLC_POSN                                 0x0
#define _INLVLC_INLVLC_POSITION                             0x0
#define _INLVLC_INLVLC_SIZE                                 0x8
#define _INLVLC_INLVLC_LENGTH                               0x8
#define _INLVLC_INLVLC_MASK                                 0xFF

// Register: INLVLE
#define INLVLE INLVLE
extern volatile unsigned char           INLVLE              __at(0x390);
#ifndef _LIB_BUILD
asm("INLVLE equ 0390h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned INLVLE3                :1;
    };
} INLVLEbits_t;
extern volatile INLVLEbits_t INLVLEbits __at(0x390);
// bitfield macros
#define _INLVLE_INLVLE3_POSN                                0x3
#define _INLVLE_INLVLE3_POSITION                            0x3
#define _INLVLE_INLVLE3_SIZE                                0x1
#define _INLVLE_INLVLE3_LENGTH                              0x1
#define _INLVLE_INLVLE3_MASK                                0x8

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
        unsigned IOCAP6                 :1;
        unsigned IOCAP7                 :1;
    };
    struct {
        unsigned IOCAP                  :8;
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
#define _IOCAP_IOCAP6_POSN                                  0x6
#define _IOCAP_IOCAP6_POSITION                              0x6
#define _IOCAP_IOCAP6_SIZE                                  0x1
#define _IOCAP_IOCAP6_LENGTH                                0x1
#define _IOCAP_IOCAP6_MASK                                  0x40
#define _IOCAP_IOCAP7_POSN                                  0x7
#define _IOCAP_IOCAP7_POSITION                              0x7
#define _IOCAP_IOCAP7_SIZE                                  0x1
#define _IOCAP_IOCAP7_LENGTH                                0x1
#define _IOCAP_IOCAP7_MASK                                  0x80
#define _IOCAP_IOCAP_POSN                                   0x0
#define _IOCAP_IOCAP_POSITION                               0x0
#define _IOCAP_IOCAP_SIZE                                   0x8
#define _IOCAP_IOCAP_LENGTH                                 0x8
#define _IOCAP_IOCAP_MASK                                   0xFF

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
        unsigned IOCAN6                 :1;
        unsigned IOCAN7                 :1;
    };
    struct {
        unsigned IOCAN                  :8;
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
#define _IOCAN_IOCAN6_POSN                                  0x6
#define _IOCAN_IOCAN6_POSITION                              0x6
#define _IOCAN_IOCAN6_SIZE                                  0x1
#define _IOCAN_IOCAN6_LENGTH                                0x1
#define _IOCAN_IOCAN6_MASK                                  0x40
#define _IOCAN_IOCAN7_POSN                                  0x7
#define _IOCAN_IOCAN7_POSITION                              0x7
#define _IOCAN_IOCAN7_SIZE                                  0x1
#define _IOCAN_IOCAN7_LENGTH                                0x1
#define _IOCAN_IOCAN7_MASK                                  0x80
#define _IOCAN_IOCAN_POSN                                   0x0
#define _IOCAN_IOCAN_POSITION                               0x0
#define _IOCAN_IOCAN_SIZE                                   0x8
#define _IOCAN_IOCAN_LENGTH                                 0x8
#define _IOCAN_IOCAN_MASK                                   0xFF

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
        unsigned IOCAF6                 :1;
        unsigned IOCAF7                 :1;
    };
    struct {
        unsigned IOCAF                  :8;
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
#define _IOCAF_IOCAF6_POSN                                  0x6
#define _IOCAF_IOCAF6_POSITION                              0x6
#define _IOCAF_IOCAF6_SIZE                                  0x1
#define _IOCAF_IOCAF6_LENGTH                                0x1
#define _IOCAF_IOCAF6_MASK                                  0x40
#define _IOCAF_IOCAF7_POSN                                  0x7
#define _IOCAF_IOCAF7_POSITION                              0x7
#define _IOCAF_IOCAF7_SIZE                                  0x1
#define _IOCAF_IOCAF7_LENGTH                                0x1
#define _IOCAF_IOCAF7_MASK                                  0x80
#define _IOCAF_IOCAF_POSN                                   0x0
#define _IOCAF_IOCAF_POSITION                               0x0
#define _IOCAF_IOCAF_SIZE                                   0x8
#define _IOCAF_IOCAF_LENGTH                                 0x8
#define _IOCAF_IOCAF_MASK                                   0xFF

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

// Register: IOCCP
#define IOCCP IOCCP
extern volatile unsigned char           IOCCP               __at(0x397);
#ifndef _LIB_BUILD
asm("IOCCP equ 0397h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCP0                 :1;
        unsigned IOCCP1                 :1;
        unsigned IOCCP2                 :1;
        unsigned IOCCP3                 :1;
        unsigned IOCCP4                 :1;
        unsigned IOCCP5                 :1;
        unsigned IOCCP6                 :1;
        unsigned IOCCP7                 :1;
    };
    struct {
        unsigned IOCCP                  :8;
    };
} IOCCPbits_t;
extern volatile IOCCPbits_t IOCCPbits __at(0x397);
// bitfield macros
#define _IOCCP_IOCCP0_POSN                                  0x0
#define _IOCCP_IOCCP0_POSITION                              0x0
#define _IOCCP_IOCCP0_SIZE                                  0x1
#define _IOCCP_IOCCP0_LENGTH                                0x1
#define _IOCCP_IOCCP0_MASK                                  0x1
#define _IOCCP_IOCCP1_POSN                                  0x1
#define _IOCCP_IOCCP1_POSITION                              0x1
#define _IOCCP_IOCCP1_SIZE                                  0x1
#define _IOCCP_IOCCP1_LENGTH                                0x1
#define _IOCCP_IOCCP1_MASK                                  0x2
#define _IOCCP_IOCCP2_POSN                                  0x2
#define _IOCCP_IOCCP2_POSITION                              0x2
#define _IOCCP_IOCCP2_SIZE                                  0x1
#define _IOCCP_IOCCP2_LENGTH                                0x1
#define _IOCCP_IOCCP2_MASK                                  0x4
#define _IOCCP_IOCCP3_POSN                                  0x3
#define _IOCCP_IOCCP3_POSITION                              0x3
#define _IOCCP_IOCCP3_SIZE                                  0x1
#define _IOCCP_IOCCP3_LENGTH                                0x1
#define _IOCCP_IOCCP3_MASK                                  0x8
#define _IOCCP_IOCCP4_POSN                                  0x4
#define _IOCCP_IOCCP4_POSITION                              0x4
#define _IOCCP_IOCCP4_SIZE                                  0x1
#define _IOCCP_IOCCP4_LENGTH                                0x1
#define _IOCCP_IOCCP4_MASK                                  0x10
#define _IOCCP_IOCCP5_POSN                                  0x5
#define _IOCCP_IOCCP5_POSITION                              0x5
#define _IOCCP_IOCCP5_SIZE                                  0x1
#define _IOCCP_IOCCP5_LENGTH                                0x1
#define _IOCCP_IOCCP5_MASK                                  0x20
#define _IOCCP_IOCCP6_POSN                                  0x6
#define _IOCCP_IOCCP6_POSITION                              0x6
#define _IOCCP_IOCCP6_SIZE                                  0x1
#define _IOCCP_IOCCP6_LENGTH                                0x1
#define _IOCCP_IOCCP6_MASK                                  0x40
#define _IOCCP_IOCCP7_POSN                                  0x7
#define _IOCCP_IOCCP7_POSITION                              0x7
#define _IOCCP_IOCCP7_SIZE                                  0x1
#define _IOCCP_IOCCP7_LENGTH                                0x1
#define _IOCCP_IOCCP7_MASK                                  0x80
#define _IOCCP_IOCCP_POSN                                   0x0
#define _IOCCP_IOCCP_POSITION                               0x0
#define _IOCCP_IOCCP_SIZE                                   0x8
#define _IOCCP_IOCCP_LENGTH                                 0x8
#define _IOCCP_IOCCP_MASK                                   0xFF

// Register: IOCCN
#define IOCCN IOCCN
extern volatile unsigned char           IOCCN               __at(0x398);
#ifndef _LIB_BUILD
asm("IOCCN equ 0398h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCN0                 :1;
        unsigned IOCCN1                 :1;
        unsigned IOCCN2                 :1;
        unsigned IOCCN3                 :1;
        unsigned IOCCN4                 :1;
        unsigned IOCCN5                 :1;
        unsigned IOCCN6                 :1;
        unsigned IOCCN7                 :1;
    };
    struct {
        unsigned IOCCN                  :8;
    };
} IOCCNbits_t;
extern volatile IOCCNbits_t IOCCNbits __at(0x398);
// bitfield macros
#define _IOCCN_IOCCN0_POSN                                  0x0
#define _IOCCN_IOCCN0_POSITION                              0x0
#define _IOCCN_IOCCN0_SIZE                                  0x1
#define _IOCCN_IOCCN0_LENGTH                                0x1
#define _IOCCN_IOCCN0_MASK                                  0x1
#define _IOCCN_IOCCN1_POSN                                  0x1
#define _IOCCN_IOCCN1_POSITION                              0x1
#define _IOCCN_IOCCN1_SIZE                                  0x1
#define _IOCCN_IOCCN1_LENGTH                                0x1
#define _IOCCN_IOCCN1_MASK                                  0x2
#define _IOCCN_IOCCN2_POSN                                  0x2
#define _IOCCN_IOCCN2_POSITION                              0x2
#define _IOCCN_IOCCN2_SIZE                                  0x1
#define _IOCCN_IOCCN2_LENGTH                                0x1
#define _IOCCN_IOCCN2_MASK                                  0x4
#define _IOCCN_IOCCN3_POSN                                  0x3
#define _IOCCN_IOCCN3_POSITION                              0x3
#define _IOCCN_IOCCN3_SIZE                                  0x1
#define _IOCCN_IOCCN3_LENGTH                                0x1
#define _IOCCN_IOCCN3_MASK                                  0x8
#define _IOCCN_IOCCN4_POSN                                  0x4
#define _IOCCN_IOCCN4_POSITION                              0x4
#define _IOCCN_IOCCN4_SIZE                                  0x1
#define _IOCCN_IOCCN4_LENGTH                                0x1
#define _IOCCN_IOCCN4_MASK                                  0x10
#define _IOCCN_IOCCN5_POSN                                  0x5
#define _IOCCN_IOCCN5_POSITION                              0x5
#define _IOCCN_IOCCN5_SIZE                                  0x1
#define _IOCCN_IOCCN5_LENGTH                                0x1
#define _IOCCN_IOCCN5_MASK                                  0x20
#define _IOCCN_IOCCN6_POSN                                  0x6
#define _IOCCN_IOCCN6_POSITION                              0x6
#define _IOCCN_IOCCN6_SIZE                                  0x1
#define _IOCCN_IOCCN6_LENGTH                                0x1
#define _IOCCN_IOCCN6_MASK                                  0x40
#define _IOCCN_IOCCN7_POSN                                  0x7
#define _IOCCN_IOCCN7_POSITION                              0x7
#define _IOCCN_IOCCN7_SIZE                                  0x1
#define _IOCCN_IOCCN7_LENGTH                                0x1
#define _IOCCN_IOCCN7_MASK                                  0x80
#define _IOCCN_IOCCN_POSN                                   0x0
#define _IOCCN_IOCCN_POSITION                               0x0
#define _IOCCN_IOCCN_SIZE                                   0x8
#define _IOCCN_IOCCN_LENGTH                                 0x8
#define _IOCCN_IOCCN_MASK                                   0xFF

// Register: IOCCF
#define IOCCF IOCCF
extern volatile unsigned char           IOCCF               __at(0x399);
#ifndef _LIB_BUILD
asm("IOCCF equ 0399h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCF0                 :1;
        unsigned IOCCF1                 :1;
        unsigned IOCCF2                 :1;
        unsigned IOCCF3                 :1;
        unsigned IOCCF4                 :1;
        unsigned IOCCF5                 :1;
        unsigned IOCCF6                 :1;
        unsigned IOCCF7                 :1;
    };
    struct {
        unsigned IOCCF                  :8;
    };
} IOCCFbits_t;
extern volatile IOCCFbits_t IOCCFbits __at(0x399);
// bitfield macros
#define _IOCCF_IOCCF0_POSN                                  0x0
#define _IOCCF_IOCCF0_POSITION                              0x0
#define _IOCCF_IOCCF0_SIZE                                  0x1
#define _IOCCF_IOCCF0_LENGTH                                0x1
#define _IOCCF_IOCCF0_MASK                                  0x1
#define _IOCCF_IOCCF1_POSN                                  0x1
#define _IOCCF_IOCCF1_POSITION                              0x1
#define _IOCCF_IOCCF1_SIZE                                  0x1
#define _IOCCF_IOCCF1_LENGTH                                0x1
#define _IOCCF_IOCCF1_MASK                                  0x2
#define _IOCCF_IOCCF2_POSN                                  0x2
#define _IOCCF_IOCCF2_POSITION                              0x2
#define _IOCCF_IOCCF2_SIZE                                  0x1
#define _IOCCF_IOCCF2_LENGTH                                0x1
#define _IOCCF_IOCCF2_MASK                                  0x4
#define _IOCCF_IOCCF3_POSN                                  0x3
#define _IOCCF_IOCCF3_POSITION                              0x3
#define _IOCCF_IOCCF3_SIZE                                  0x1
#define _IOCCF_IOCCF3_LENGTH                                0x1
#define _IOCCF_IOCCF3_MASK                                  0x8
#define _IOCCF_IOCCF4_POSN                                  0x4
#define _IOCCF_IOCCF4_POSITION                              0x4
#define _IOCCF_IOCCF4_SIZE                                  0x1
#define _IOCCF_IOCCF4_LENGTH                                0x1
#define _IOCCF_IOCCF4_MASK                                  0x10
#define _IOCCF_IOCCF5_POSN                                  0x5
#define _IOCCF_IOCCF5_POSITION                              0x5
#define _IOCCF_IOCCF5_SIZE                                  0x1
#define _IOCCF_IOCCF5_LENGTH                                0x1
#define _IOCCF_IOCCF5_MASK                                  0x20
#define _IOCCF_IOCCF6_POSN                                  0x6
#define _IOCCF_IOCCF6_POSITION                              0x6
#define _IOCCF_IOCCF6_SIZE                                  0x1
#define _IOCCF_IOCCF6_LENGTH                                0x1
#define _IOCCF_IOCCF6_MASK                                  0x40
#define _IOCCF_IOCCF7_POSN                                  0x7
#define _IOCCF_IOCCF7_POSITION                              0x7
#define _IOCCF_IOCCF7_SIZE                                  0x1
#define _IOCCF_IOCCF7_LENGTH                                0x1
#define _IOCCF_IOCCF7_MASK                                  0x80
#define _IOCCF_IOCCF_POSN                                   0x0
#define _IOCCF_IOCCF_POSITION                               0x0
#define _IOCCF_IOCCF_SIZE                                   0x8
#define _IOCCF_IOCCF_LENGTH                                 0x8
#define _IOCCF_IOCCF_MASK                                   0xFF

// Register: IOCEP
#define IOCEP IOCEP
extern volatile unsigned char           IOCEP               __at(0x39D);
#ifndef _LIB_BUILD
asm("IOCEP equ 039Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned IOCEP3                 :1;
    };
} IOCEPbits_t;
extern volatile IOCEPbits_t IOCEPbits __at(0x39D);
// bitfield macros
#define _IOCEP_IOCEP3_POSN                                  0x3
#define _IOCEP_IOCEP3_POSITION                              0x3
#define _IOCEP_IOCEP3_SIZE                                  0x1
#define _IOCEP_IOCEP3_LENGTH                                0x1
#define _IOCEP_IOCEP3_MASK                                  0x8

// Register: IOCEN
#define IOCEN IOCEN
extern volatile unsigned char           IOCEN               __at(0x39E);
#ifndef _LIB_BUILD
asm("IOCEN equ 039Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned IOCEN3                 :1;
    };
} IOCENbits_t;
extern volatile IOCENbits_t IOCENbits __at(0x39E);
// bitfield macros
#define _IOCEN_IOCEN3_POSN                                  0x3
#define _IOCEN_IOCEN3_POSITION                              0x3
#define _IOCEN_IOCEN3_SIZE                                  0x1
#define _IOCEN_IOCEN3_LENGTH                                0x1
#define _IOCEN_IOCEN3_MASK                                  0x8

// Register: IOCEF
#define IOCEF IOCEF
extern volatile unsigned char           IOCEF               __at(0x39F);
#ifndef _LIB_BUILD
asm("IOCEF equ 039Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned IOCEF3                 :1;
    };
} IOCEFbits_t;
extern volatile IOCEFbits_t IOCEFbits __at(0x39F);
// bitfield macros
#define _IOCEF_IOCEF3_POSN                                  0x3
#define _IOCEF_IOCEF3_POSITION                              0x3
#define _IOCEF_IOCEF3_SIZE                                  0x1
#define _IOCEF_IOCEF3_LENGTH                                0x1
#define _IOCEF_IOCEF3_MASK                                  0x8

// Register: OPA1CON
#define OPA1CON OPA1CON
extern volatile unsigned char           OPA1CON             __at(0x511);
#ifndef _LIB_BUILD
asm("OPA1CON equ 0511h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OPA1CH0                :1;
        unsigned OPA1CH1                :1;
        unsigned                        :4;
        unsigned OPA1SP                 :1;
        unsigned OPA1EN                 :1;
    };
    struct {
        unsigned OPA1CH                 :2;
    };
} OPA1CONbits_t;
extern volatile OPA1CONbits_t OPA1CONbits __at(0x511);
// bitfield macros
#define _OPA1CON_OPA1CH0_POSN                               0x0
#define _OPA1CON_OPA1CH0_POSITION                           0x0
#define _OPA1CON_OPA1CH0_SIZE                               0x1
#define _OPA1CON_OPA1CH0_LENGTH                             0x1
#define _OPA1CON_OPA1CH0_MASK                               0x1
#define _OPA1CON_OPA1CH1_POSN                               0x1
#define _OPA1CON_OPA1CH1_POSITION                           0x1
#define _OPA1CON_OPA1CH1_SIZE                               0x1
#define _OPA1CON_OPA1CH1_LENGTH                             0x1
#define _OPA1CON_OPA1CH1_MASK                               0x2
#define _OPA1CON_OPA1SP_POSN                                0x6
#define _OPA1CON_OPA1SP_POSITION                            0x6
#define _OPA1CON_OPA1SP_SIZE                                0x1
#define _OPA1CON_OPA1SP_LENGTH                              0x1
#define _OPA1CON_OPA1SP_MASK                                0x40
#define _OPA1CON_OPA1EN_POSN                                0x7
#define _OPA1CON_OPA1EN_POSITION                            0x7
#define _OPA1CON_OPA1EN_SIZE                                0x1
#define _OPA1CON_OPA1EN_LENGTH                              0x1
#define _OPA1CON_OPA1EN_MASK                                0x80
#define _OPA1CON_OPA1CH_POSN                                0x0
#define _OPA1CON_OPA1CH_POSITION                            0x0
#define _OPA1CON_OPA1CH_SIZE                                0x2
#define _OPA1CON_OPA1CH_LENGTH                              0x2
#define _OPA1CON_OPA1CH_MASK                                0x3

// Register: OPA2CON
#define OPA2CON OPA2CON
extern volatile unsigned char           OPA2CON             __at(0x513);
#ifndef _LIB_BUILD
asm("OPA2CON equ 0513h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OPA2CH0                :1;
        unsigned OPA2CH1                :1;
        unsigned                        :4;
        unsigned OPA2SP                 :1;
        unsigned OPA2EN                 :1;
    };
    struct {
        unsigned OPA2CH                 :2;
    };
} OPA2CONbits_t;
extern volatile OPA2CONbits_t OPA2CONbits __at(0x513);
// bitfield macros
#define _OPA2CON_OPA2CH0_POSN                               0x0
#define _OPA2CON_OPA2CH0_POSITION                           0x0
#define _OPA2CON_OPA2CH0_SIZE                               0x1
#define _OPA2CON_OPA2CH0_LENGTH                             0x1
#define _OPA2CON_OPA2CH0_MASK                               0x1
#define _OPA2CON_OPA2CH1_POSN                               0x1
#define _OPA2CON_OPA2CH1_POSITION                           0x1
#define _OPA2CON_OPA2CH1_SIZE                               0x1
#define _OPA2CON_OPA2CH1_LENGTH                             0x1
#define _OPA2CON_OPA2CH1_MASK                               0x2
#define _OPA2CON_OPA2SP_POSN                                0x6
#define _OPA2CON_OPA2SP_POSITION                            0x6
#define _OPA2CON_OPA2SP_SIZE                                0x1
#define _OPA2CON_OPA2SP_LENGTH                              0x1
#define _OPA2CON_OPA2SP_MASK                                0x40
#define _OPA2CON_OPA2EN_POSN                                0x7
#define _OPA2CON_OPA2EN_POSITION                            0x7
#define _OPA2CON_OPA2EN_SIZE                                0x1
#define _OPA2CON_OPA2EN_LENGTH                              0x1
#define _OPA2CON_OPA2EN_MASK                                0x80
#define _OPA2CON_OPA2CH_POSN                                0x0
#define _OPA2CON_OPA2CH_POSITION                            0x0
#define _OPA2CON_OPA2CH_SIZE                                0x2
#define _OPA2CON_OPA2CH_LENGTH                              0x2
#define _OPA2CON_OPA2CH_MASK                                0x3

// Register: CLKRCON
#define CLKRCON CLKRCON
extern volatile unsigned char           CLKRCON             __at(0x51A);
#ifndef _LIB_BUILD
asm("CLKRCON equ 051Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLKRDIV0               :1;
        unsigned CLKRDIV1               :1;
        unsigned CLKRDIV2               :1;
        unsigned CLKRDC0                :1;
        unsigned CLKRDC1                :1;
        unsigned CLKRSLR                :1;
        unsigned CLKROE                 :1;
        unsigned CLKREN                 :1;
    };
    struct {
        unsigned CLKRDIV                :3;
        unsigned CLKRDC                 :2;
    };
} CLKRCONbits_t;
extern volatile CLKRCONbits_t CLKRCONbits __at(0x51A);
// bitfield macros
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

// Register: PSMC1CON
#define PSMC1CON PSMC1CON
extern volatile unsigned char           PSMC1CON            __at(0x811);
#ifndef _LIB_BUILD
asm("PSMC1CON equ 0811h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1MODE                 :4;
        unsigned P1DBRE                 :1;
        unsigned P1DBFE                 :1;
        unsigned PSMC1LD                :1;
        unsigned PSMC1EN                :1;
    };
    struct {
        unsigned P1MODE0                :1;
        unsigned P1MODE1                :1;
        unsigned P1MODE2                :1;
        unsigned P1MODE3                :1;
    };
} PSMC1CONbits_t;
extern volatile PSMC1CONbits_t PSMC1CONbits __at(0x811);
// bitfield macros
#define _PSMC1CON_P1MODE_POSN                               0x0
#define _PSMC1CON_P1MODE_POSITION                           0x0
#define _PSMC1CON_P1MODE_SIZE                               0x4
#define _PSMC1CON_P1MODE_LENGTH                             0x4
#define _PSMC1CON_P1MODE_MASK                               0xF
#define _PSMC1CON_P1DBRE_POSN                               0x4
#define _PSMC1CON_P1DBRE_POSITION                           0x4
#define _PSMC1CON_P1DBRE_SIZE                               0x1
#define _PSMC1CON_P1DBRE_LENGTH                             0x1
#define _PSMC1CON_P1DBRE_MASK                               0x10
#define _PSMC1CON_P1DBFE_POSN                               0x5
#define _PSMC1CON_P1DBFE_POSITION                           0x5
#define _PSMC1CON_P1DBFE_SIZE                               0x1
#define _PSMC1CON_P1DBFE_LENGTH                             0x1
#define _PSMC1CON_P1DBFE_MASK                               0x20
#define _PSMC1CON_PSMC1LD_POSN                              0x6
#define _PSMC1CON_PSMC1LD_POSITION                          0x6
#define _PSMC1CON_PSMC1LD_SIZE                              0x1
#define _PSMC1CON_PSMC1LD_LENGTH                            0x1
#define _PSMC1CON_PSMC1LD_MASK                              0x40
#define _PSMC1CON_PSMC1EN_POSN                              0x7
#define _PSMC1CON_PSMC1EN_POSITION                          0x7
#define _PSMC1CON_PSMC1EN_SIZE                              0x1
#define _PSMC1CON_PSMC1EN_LENGTH                            0x1
#define _PSMC1CON_PSMC1EN_MASK                              0x80
#define _PSMC1CON_P1MODE0_POSN                              0x0
#define _PSMC1CON_P1MODE0_POSITION                          0x0
#define _PSMC1CON_P1MODE0_SIZE                              0x1
#define _PSMC1CON_P1MODE0_LENGTH                            0x1
#define _PSMC1CON_P1MODE0_MASK                              0x1
#define _PSMC1CON_P1MODE1_POSN                              0x1
#define _PSMC1CON_P1MODE1_POSITION                          0x1
#define _PSMC1CON_P1MODE1_SIZE                              0x1
#define _PSMC1CON_P1MODE1_LENGTH                            0x1
#define _PSMC1CON_P1MODE1_MASK                              0x2
#define _PSMC1CON_P1MODE2_POSN                              0x2
#define _PSMC1CON_P1MODE2_POSITION                          0x2
#define _PSMC1CON_P1MODE2_SIZE                              0x1
#define _PSMC1CON_P1MODE2_LENGTH                            0x1
#define _PSMC1CON_P1MODE2_MASK                              0x4
#define _PSMC1CON_P1MODE3_POSN                              0x3
#define _PSMC1CON_P1MODE3_POSITION                          0x3
#define _PSMC1CON_P1MODE3_SIZE                              0x1
#define _PSMC1CON_P1MODE3_LENGTH                            0x1
#define _PSMC1CON_P1MODE3_MASK                              0x8

// Register: PSMC1MDL
#define PSMC1MDL PSMC1MDL
extern volatile unsigned char           PSMC1MDL            __at(0x812);
#ifndef _LIB_BUILD
asm("PSMC1MDL equ 0812h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1MSRC                 :4;
        unsigned                        :1;
        unsigned P1MDLBIT               :1;
        unsigned P1MDLPOL               :1;
        unsigned P1MDLEN                :1;
    };
    struct {
        unsigned P1MSRC0                :1;
        unsigned P1MSRC1                :1;
        unsigned P1MSRC2                :1;
        unsigned P1MSRC3                :1;
    };
} PSMC1MDLbits_t;
extern volatile PSMC1MDLbits_t PSMC1MDLbits __at(0x812);
// bitfield macros
#define _PSMC1MDL_P1MSRC_POSN                               0x0
#define _PSMC1MDL_P1MSRC_POSITION                           0x0
#define _PSMC1MDL_P1MSRC_SIZE                               0x4
#define _PSMC1MDL_P1MSRC_LENGTH                             0x4
#define _PSMC1MDL_P1MSRC_MASK                               0xF
#define _PSMC1MDL_P1MDLBIT_POSN                             0x5
#define _PSMC1MDL_P1MDLBIT_POSITION                         0x5
#define _PSMC1MDL_P1MDLBIT_SIZE                             0x1
#define _PSMC1MDL_P1MDLBIT_LENGTH                           0x1
#define _PSMC1MDL_P1MDLBIT_MASK                             0x20
#define _PSMC1MDL_P1MDLPOL_POSN                             0x6
#define _PSMC1MDL_P1MDLPOL_POSITION                         0x6
#define _PSMC1MDL_P1MDLPOL_SIZE                             0x1
#define _PSMC1MDL_P1MDLPOL_LENGTH                           0x1
#define _PSMC1MDL_P1MDLPOL_MASK                             0x40
#define _PSMC1MDL_P1MDLEN_POSN                              0x7
#define _PSMC1MDL_P1MDLEN_POSITION                          0x7
#define _PSMC1MDL_P1MDLEN_SIZE                              0x1
#define _PSMC1MDL_P1MDLEN_LENGTH                            0x1
#define _PSMC1MDL_P1MDLEN_MASK                              0x80
#define _PSMC1MDL_P1MSRC0_POSN                              0x0
#define _PSMC1MDL_P1MSRC0_POSITION                          0x0
#define _PSMC1MDL_P1MSRC0_SIZE                              0x1
#define _PSMC1MDL_P1MSRC0_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC0_MASK                              0x1
#define _PSMC1MDL_P1MSRC1_POSN                              0x1
#define _PSMC1MDL_P1MSRC1_POSITION                          0x1
#define _PSMC1MDL_P1MSRC1_SIZE                              0x1
#define _PSMC1MDL_P1MSRC1_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC1_MASK                              0x2
#define _PSMC1MDL_P1MSRC2_POSN                              0x2
#define _PSMC1MDL_P1MSRC2_POSITION                          0x2
#define _PSMC1MDL_P1MSRC2_SIZE                              0x1
#define _PSMC1MDL_P1MSRC2_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC2_MASK                              0x4
#define _PSMC1MDL_P1MSRC3_POSN                              0x3
#define _PSMC1MDL_P1MSRC3_POSITION                          0x3
#define _PSMC1MDL_P1MSRC3_SIZE                              0x1
#define _PSMC1MDL_P1MSRC3_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC3_MASK                              0x8

// Register: PSMC1SYNC
#define PSMC1SYNC PSMC1SYNC
extern volatile unsigned char           PSMC1SYNC           __at(0x813);
#ifndef _LIB_BUILD
asm("PSMC1SYNC equ 0813h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1SYNC0                :1;
        unsigned P1SYNC1                :1;
    };
} PSMC1SYNCbits_t;
extern volatile PSMC1SYNCbits_t PSMC1SYNCbits __at(0x813);
// bitfield macros
#define _PSMC1SYNC_P1SYNC0_POSN                             0x0
#define _PSMC1SYNC_P1SYNC0_POSITION                         0x0
#define _PSMC1SYNC_P1SYNC0_SIZE                             0x1
#define _PSMC1SYNC_P1SYNC0_LENGTH                           0x1
#define _PSMC1SYNC_P1SYNC0_MASK                             0x1
#define _PSMC1SYNC_P1SYNC1_POSN                             0x1
#define _PSMC1SYNC_P1SYNC1_POSITION                         0x1
#define _PSMC1SYNC_P1SYNC1_SIZE                             0x1
#define _PSMC1SYNC_P1SYNC1_LENGTH                           0x1
#define _PSMC1SYNC_P1SYNC1_MASK                             0x2

// Register: PSMC1CLK
#define PSMC1CLK PSMC1CLK
extern volatile unsigned char           PSMC1CLK            __at(0x814);
#ifndef _LIB_BUILD
asm("PSMC1CLK equ 0814h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1CSRC0                :1;
        unsigned P1CSRC1                :1;
        unsigned                        :2;
        unsigned P1CPRE0                :1;
        unsigned P1CPRE1                :1;
    };
    struct {
        unsigned P1CSRC                 :2;
        unsigned                        :2;
        unsigned P1CPRE                 :2;
    };
} PSMC1CLKbits_t;
extern volatile PSMC1CLKbits_t PSMC1CLKbits __at(0x814);
// bitfield macros
#define _PSMC1CLK_P1CSRC0_POSN                              0x0
#define _PSMC1CLK_P1CSRC0_POSITION                          0x0
#define _PSMC1CLK_P1CSRC0_SIZE                              0x1
#define _PSMC1CLK_P1CSRC0_LENGTH                            0x1
#define _PSMC1CLK_P1CSRC0_MASK                              0x1
#define _PSMC1CLK_P1CSRC1_POSN                              0x1
#define _PSMC1CLK_P1CSRC1_POSITION                          0x1
#define _PSMC1CLK_P1CSRC1_SIZE                              0x1
#define _PSMC1CLK_P1CSRC1_LENGTH                            0x1
#define _PSMC1CLK_P1CSRC1_MASK                              0x2
#define _PSMC1CLK_P1CPRE0_POSN                              0x4
#define _PSMC1CLK_P1CPRE0_POSITION                          0x4
#define _PSMC1CLK_P1CPRE0_SIZE                              0x1
#define _PSMC1CLK_P1CPRE0_LENGTH                            0x1
#define _PSMC1CLK_P1CPRE0_MASK                              0x10
#define _PSMC1CLK_P1CPRE1_POSN                              0x5
#define _PSMC1CLK_P1CPRE1_POSITION                          0x5
#define _PSMC1CLK_P1CPRE1_SIZE                              0x1
#define _PSMC1CLK_P1CPRE1_LENGTH                            0x1
#define _PSMC1CLK_P1CPRE1_MASK                              0x20
#define _PSMC1CLK_P1CSRC_POSN                               0x0
#define _PSMC1CLK_P1CSRC_POSITION                           0x0
#define _PSMC1CLK_P1CSRC_SIZE                               0x2
#define _PSMC1CLK_P1CSRC_LENGTH                             0x2
#define _PSMC1CLK_P1CSRC_MASK                               0x3
#define _PSMC1CLK_P1CPRE_POSN                               0x4
#define _PSMC1CLK_P1CPRE_POSITION                           0x4
#define _PSMC1CLK_P1CPRE_SIZE                               0x2
#define _PSMC1CLK_P1CPRE_LENGTH                             0x2
#define _PSMC1CLK_P1CPRE_MASK                               0x30

// Register: PSMC1OEN
#define PSMC1OEN PSMC1OEN
extern volatile unsigned char           PSMC1OEN            __at(0x815);
#ifndef _LIB_BUILD
asm("PSMC1OEN equ 0815h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1OEA                  :1;
        unsigned P1OEB                  :1;
        unsigned P1OEC                  :1;
        unsigned P1OED                  :1;
        unsigned P1OEE                  :1;
        unsigned P1OEF                  :1;
    };
} PSMC1OENbits_t;
extern volatile PSMC1OENbits_t PSMC1OENbits __at(0x815);
// bitfield macros
#define _PSMC1OEN_P1OEA_POSN                                0x0
#define _PSMC1OEN_P1OEA_POSITION                            0x0
#define _PSMC1OEN_P1OEA_SIZE                                0x1
#define _PSMC1OEN_P1OEA_LENGTH                              0x1
#define _PSMC1OEN_P1OEA_MASK                                0x1
#define _PSMC1OEN_P1OEB_POSN                                0x1
#define _PSMC1OEN_P1OEB_POSITION                            0x1
#define _PSMC1OEN_P1OEB_SIZE                                0x1
#define _PSMC1OEN_P1OEB_LENGTH                              0x1
#define _PSMC1OEN_P1OEB_MASK                                0x2
#define _PSMC1OEN_P1OEC_POSN                                0x2
#define _PSMC1OEN_P1OEC_POSITION                            0x2
#define _PSMC1OEN_P1OEC_SIZE                                0x1
#define _PSMC1OEN_P1OEC_LENGTH                              0x1
#define _PSMC1OEN_P1OEC_MASK                                0x4
#define _PSMC1OEN_P1OED_POSN                                0x3
#define _PSMC1OEN_P1OED_POSITION                            0x3
#define _PSMC1OEN_P1OED_SIZE                                0x1
#define _PSMC1OEN_P1OED_LENGTH                              0x1
#define _PSMC1OEN_P1OED_MASK                                0x8
#define _PSMC1OEN_P1OEE_POSN                                0x4
#define _PSMC1OEN_P1OEE_POSITION                            0x4
#define _PSMC1OEN_P1OEE_SIZE                                0x1
#define _PSMC1OEN_P1OEE_LENGTH                              0x1
#define _PSMC1OEN_P1OEE_MASK                                0x10
#define _PSMC1OEN_P1OEF_POSN                                0x5
#define _PSMC1OEN_P1OEF_POSITION                            0x5
#define _PSMC1OEN_P1OEF_SIZE                                0x1
#define _PSMC1OEN_P1OEF_LENGTH                              0x1
#define _PSMC1OEN_P1OEF_MASK                                0x20

// Register: PSMC1POL
#define PSMC1POL PSMC1POL
extern volatile unsigned char           PSMC1POL            __at(0x816);
#ifndef _LIB_BUILD
asm("PSMC1POL equ 0816h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1POLA                 :1;
        unsigned P1POLB                 :1;
        unsigned P1POLC                 :1;
        unsigned P1POLD                 :1;
        unsigned P1POLE                 :1;
        unsigned P1POLF                 :1;
        unsigned P1INPOL                :1;
    };
} PSMC1POLbits_t;
extern volatile PSMC1POLbits_t PSMC1POLbits __at(0x816);
// bitfield macros
#define _PSMC1POL_P1POLA_POSN                               0x0
#define _PSMC1POL_P1POLA_POSITION                           0x0
#define _PSMC1POL_P1POLA_SIZE                               0x1
#define _PSMC1POL_P1POLA_LENGTH                             0x1
#define _PSMC1POL_P1POLA_MASK                               0x1
#define _PSMC1POL_P1POLB_POSN                               0x1
#define _PSMC1POL_P1POLB_POSITION                           0x1
#define _PSMC1POL_P1POLB_SIZE                               0x1
#define _PSMC1POL_P1POLB_LENGTH                             0x1
#define _PSMC1POL_P1POLB_MASK                               0x2
#define _PSMC1POL_P1POLC_POSN                               0x2
#define _PSMC1POL_P1POLC_POSITION                           0x2
#define _PSMC1POL_P1POLC_SIZE                               0x1
#define _PSMC1POL_P1POLC_LENGTH                             0x1
#define _PSMC1POL_P1POLC_MASK                               0x4
#define _PSMC1POL_P1POLD_POSN                               0x3
#define _PSMC1POL_P1POLD_POSITION                           0x3
#define _PSMC1POL_P1POLD_SIZE                               0x1
#define _PSMC1POL_P1POLD_LENGTH                             0x1
#define _PSMC1POL_P1POLD_MASK                               0x8
#define _PSMC1POL_P1POLE_POSN                               0x4
#define _PSMC1POL_P1POLE_POSITION                           0x4
#define _PSMC1POL_P1POLE_SIZE                               0x1
#define _PSMC1POL_P1POLE_LENGTH                             0x1
#define _PSMC1POL_P1POLE_MASK                               0x10
#define _PSMC1POL_P1POLF_POSN                               0x5
#define _PSMC1POL_P1POLF_POSITION                           0x5
#define _PSMC1POL_P1POLF_SIZE                               0x1
#define _PSMC1POL_P1POLF_LENGTH                             0x1
#define _PSMC1POL_P1POLF_MASK                               0x20
#define _PSMC1POL_P1INPOL_POSN                              0x6
#define _PSMC1POL_P1INPOL_POSITION                          0x6
#define _PSMC1POL_P1INPOL_SIZE                              0x1
#define _PSMC1POL_P1INPOL_LENGTH                            0x1
#define _PSMC1POL_P1INPOL_MASK                              0x40

// Register: PSMC1BLNK
#define PSMC1BLNK PSMC1BLNK
extern volatile unsigned char           PSMC1BLNK           __at(0x817);
#ifndef _LIB_BUILD
asm("PSMC1BLNK equ 0817h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1REBM                 :2;
        unsigned                        :2;
        unsigned P1FEBM                 :2;
    };
    struct {
        unsigned P1REBM0                :1;
        unsigned P1REBM1                :1;
        unsigned                        :2;
        unsigned P1FEBM0                :1;
        unsigned P1FEBM1                :1;
    };
} PSMC1BLNKbits_t;
extern volatile PSMC1BLNKbits_t PSMC1BLNKbits __at(0x817);
// bitfield macros
#define _PSMC1BLNK_P1REBM_POSN                              0x0
#define _PSMC1BLNK_P1REBM_POSITION                          0x0
#define _PSMC1BLNK_P1REBM_SIZE                              0x2
#define _PSMC1BLNK_P1REBM_LENGTH                            0x2
#define _PSMC1BLNK_P1REBM_MASK                              0x3
#define _PSMC1BLNK_P1FEBM_POSN                              0x4
#define _PSMC1BLNK_P1FEBM_POSITION                          0x4
#define _PSMC1BLNK_P1FEBM_SIZE                              0x2
#define _PSMC1BLNK_P1FEBM_LENGTH                            0x2
#define _PSMC1BLNK_P1FEBM_MASK                              0x30
#define _PSMC1BLNK_P1REBM0_POSN                             0x0
#define _PSMC1BLNK_P1REBM0_POSITION                         0x0
#define _PSMC1BLNK_P1REBM0_SIZE                             0x1
#define _PSMC1BLNK_P1REBM0_LENGTH                           0x1
#define _PSMC1BLNK_P1REBM0_MASK                             0x1
#define _PSMC1BLNK_P1REBM1_POSN                             0x1
#define _PSMC1BLNK_P1REBM1_POSITION                         0x1
#define _PSMC1BLNK_P1REBM1_SIZE                             0x1
#define _PSMC1BLNK_P1REBM1_LENGTH                           0x1
#define _PSMC1BLNK_P1REBM1_MASK                             0x2
#define _PSMC1BLNK_P1FEBM0_POSN                             0x4
#define _PSMC1BLNK_P1FEBM0_POSITION                         0x4
#define _PSMC1BLNK_P1FEBM0_SIZE                             0x1
#define _PSMC1BLNK_P1FEBM0_LENGTH                           0x1
#define _PSMC1BLNK_P1FEBM0_MASK                             0x10
#define _PSMC1BLNK_P1FEBM1_POSN                             0x5
#define _PSMC1BLNK_P1FEBM1_POSITION                         0x5
#define _PSMC1BLNK_P1FEBM1_SIZE                             0x1
#define _PSMC1BLNK_P1FEBM1_LENGTH                           0x1
#define _PSMC1BLNK_P1FEBM1_MASK                             0x20

// Register: PSMC1REBS
#define PSMC1REBS PSMC1REBS
extern volatile unsigned char           PSMC1REBS           __at(0x818);
#ifndef _LIB_BUILD
asm("PSMC1REBS equ 0818h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P1REBSC1               :1;
        unsigned P1REBSC2               :1;
        unsigned P1REBSC3               :1;
        unsigned                        :3;
        unsigned P1REBSIN               :1;
    };
} PSMC1REBSbits_t;
extern volatile PSMC1REBSbits_t PSMC1REBSbits __at(0x818);
// bitfield macros
#define _PSMC1REBS_P1REBSC1_POSN                            0x1
#define _PSMC1REBS_P1REBSC1_POSITION                        0x1
#define _PSMC1REBS_P1REBSC1_SIZE                            0x1
#define _PSMC1REBS_P1REBSC1_LENGTH                          0x1
#define _PSMC1REBS_P1REBSC1_MASK                            0x2
#define _PSMC1REBS_P1REBSC2_POSN                            0x2
#define _PSMC1REBS_P1REBSC2_POSITION                        0x2
#define _PSMC1REBS_P1REBSC2_SIZE                            0x1
#define _PSMC1REBS_P1REBSC2_LENGTH                          0x1
#define _PSMC1REBS_P1REBSC2_MASK                            0x4
#define _PSMC1REBS_P1REBSC3_POSN                            0x3
#define _PSMC1REBS_P1REBSC3_POSITION                        0x3
#define _PSMC1REBS_P1REBSC3_SIZE                            0x1
#define _PSMC1REBS_P1REBSC3_LENGTH                          0x1
#define _PSMC1REBS_P1REBSC3_MASK                            0x8
#define _PSMC1REBS_P1REBSIN_POSN                            0x7
#define _PSMC1REBS_P1REBSIN_POSITION                        0x7
#define _PSMC1REBS_P1REBSIN_SIZE                            0x1
#define _PSMC1REBS_P1REBSIN_LENGTH                          0x1
#define _PSMC1REBS_P1REBSIN_MASK                            0x80

// Register: PSMC1FEBS
#define PSMC1FEBS PSMC1FEBS
extern volatile unsigned char           PSMC1FEBS           __at(0x819);
#ifndef _LIB_BUILD
asm("PSMC1FEBS equ 0819h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P1FEBSC1               :1;
        unsigned P1FEBSC2               :1;
        unsigned P1FEBSC3               :1;
        unsigned                        :3;
        unsigned P1FEBSIN               :1;
    };
} PSMC1FEBSbits_t;
extern volatile PSMC1FEBSbits_t PSMC1FEBSbits __at(0x819);
// bitfield macros
#define _PSMC1FEBS_P1FEBSC1_POSN                            0x1
#define _PSMC1FEBS_P1FEBSC1_POSITION                        0x1
#define _PSMC1FEBS_P1FEBSC1_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSC1_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSC1_MASK                            0x2
#define _PSMC1FEBS_P1FEBSC2_POSN                            0x2
#define _PSMC1FEBS_P1FEBSC2_POSITION                        0x2
#define _PSMC1FEBS_P1FEBSC2_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSC2_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSC2_MASK                            0x4
#define _PSMC1FEBS_P1FEBSC3_POSN                            0x3
#define _PSMC1FEBS_P1FEBSC3_POSITION                        0x3
#define _PSMC1FEBS_P1FEBSC3_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSC3_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSC3_MASK                            0x8
#define _PSMC1FEBS_P1FEBSIN_POSN                            0x7
#define _PSMC1FEBS_P1FEBSIN_POSITION                        0x7
#define _PSMC1FEBS_P1FEBSIN_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSIN_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSIN_MASK                            0x80

// Register: PSMC1PHS
#define PSMC1PHS PSMC1PHS
extern volatile unsigned char           PSMC1PHS            __at(0x81A);
#ifndef _LIB_BUILD
asm("PSMC1PHS equ 081Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1PHST                 :1;
        unsigned P1PHSC1                :1;
        unsigned P1PHSC2                :1;
        unsigned P1PHSC3                :1;
        unsigned                        :3;
        unsigned P1PHSIN                :1;
    };
} PSMC1PHSbits_t;
extern volatile PSMC1PHSbits_t PSMC1PHSbits __at(0x81A);
// bitfield macros
#define _PSMC1PHS_P1PHST_POSN                               0x0
#define _PSMC1PHS_P1PHST_POSITION                           0x0
#define _PSMC1PHS_P1PHST_SIZE                               0x1
#define _PSMC1PHS_P1PHST_LENGTH                             0x1
#define _PSMC1PHS_P1PHST_MASK                               0x1
#define _PSMC1PHS_P1PHSC1_POSN                              0x1
#define _PSMC1PHS_P1PHSC1_POSITION                          0x1
#define _PSMC1PHS_P1PHSC1_SIZE                              0x1
#define _PSMC1PHS_P1PHSC1_LENGTH                            0x1
#define _PSMC1PHS_P1PHSC1_MASK                              0x2
#define _PSMC1PHS_P1PHSC2_POSN                              0x2
#define _PSMC1PHS_P1PHSC2_POSITION                          0x2
#define _PSMC1PHS_P1PHSC2_SIZE                              0x1
#define _PSMC1PHS_P1PHSC2_LENGTH                            0x1
#define _PSMC1PHS_P1PHSC2_MASK                              0x4
#define _PSMC1PHS_P1PHSC3_POSN                              0x3
#define _PSMC1PHS_P1PHSC3_POSITION                          0x3
#define _PSMC1PHS_P1PHSC3_SIZE                              0x1
#define _PSMC1PHS_P1PHSC3_LENGTH                            0x1
#define _PSMC1PHS_P1PHSC3_MASK                              0x8
#define _PSMC1PHS_P1PHSIN_POSN                              0x7
#define _PSMC1PHS_P1PHSIN_POSITION                          0x7
#define _PSMC1PHS_P1PHSIN_SIZE                              0x1
#define _PSMC1PHS_P1PHSIN_LENGTH                            0x1
#define _PSMC1PHS_P1PHSIN_MASK                              0x80

// Register: PSMC1DCS
#define PSMC1DCS PSMC1DCS
extern volatile unsigned char           PSMC1DCS            __at(0x81B);
#ifndef _LIB_BUILD
asm("PSMC1DCS equ 081Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1DCST                 :1;
        unsigned P1DCSC1                :1;
        unsigned P1DCSC2                :1;
        unsigned P1DCSC3                :1;
        unsigned                        :3;
        unsigned P1DCSIN                :1;
    };
} PSMC1DCSbits_t;
extern volatile PSMC1DCSbits_t PSMC1DCSbits __at(0x81B);
// bitfield macros
#define _PSMC1DCS_P1DCST_POSN                               0x0
#define _PSMC1DCS_P1DCST_POSITION                           0x0
#define _PSMC1DCS_P1DCST_SIZE                               0x1
#define _PSMC1DCS_P1DCST_LENGTH                             0x1
#define _PSMC1DCS_P1DCST_MASK                               0x1
#define _PSMC1DCS_P1DCSC1_POSN                              0x1
#define _PSMC1DCS_P1DCSC1_POSITION                          0x1
#define _PSMC1DCS_P1DCSC1_SIZE                              0x1
#define _PSMC1DCS_P1DCSC1_LENGTH                            0x1
#define _PSMC1DCS_P1DCSC1_MASK                              0x2
#define _PSMC1DCS_P1DCSC2_POSN                              0x2
#define _PSMC1DCS_P1DCSC2_POSITION                          0x2
#define _PSMC1DCS_P1DCSC2_SIZE                              0x1
#define _PSMC1DCS_P1DCSC2_LENGTH                            0x1
#define _PSMC1DCS_P1DCSC2_MASK                              0x4
#define _PSMC1DCS_P1DCSC3_POSN                              0x3
#define _PSMC1DCS_P1DCSC3_POSITION                          0x3
#define _PSMC1DCS_P1DCSC3_SIZE                              0x1
#define _PSMC1DCS_P1DCSC3_LENGTH                            0x1
#define _PSMC1DCS_P1DCSC3_MASK                              0x8
#define _PSMC1DCS_P1DCSIN_POSN                              0x7
#define _PSMC1DCS_P1DCSIN_POSITION                          0x7
#define _PSMC1DCS_P1DCSIN_SIZE                              0x1
#define _PSMC1DCS_P1DCSIN_LENGTH                            0x1
#define _PSMC1DCS_P1DCSIN_MASK                              0x80

// Register: PSMC1PRS
#define PSMC1PRS PSMC1PRS
extern volatile unsigned char           PSMC1PRS            __at(0x81C);
#ifndef _LIB_BUILD
asm("PSMC1PRS equ 081Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1PRST                 :1;
        unsigned P1PRSC1                :1;
        unsigned P1PRSC2                :1;
        unsigned P1PRSC3                :1;
        unsigned                        :3;
        unsigned P1PRSIN                :1;
    };
} PSMC1PRSbits_t;
extern volatile PSMC1PRSbits_t PSMC1PRSbits __at(0x81C);
// bitfield macros
#define _PSMC1PRS_P1PRST_POSN                               0x0
#define _PSMC1PRS_P1PRST_POSITION                           0x0
#define _PSMC1PRS_P1PRST_SIZE                               0x1
#define _PSMC1PRS_P1PRST_LENGTH                             0x1
#define _PSMC1PRS_P1PRST_MASK                               0x1
#define _PSMC1PRS_P1PRSC1_POSN                              0x1
#define _PSMC1PRS_P1PRSC1_POSITION                          0x1
#define _PSMC1PRS_P1PRSC1_SIZE                              0x1
#define _PSMC1PRS_P1PRSC1_LENGTH                            0x1
#define _PSMC1PRS_P1PRSC1_MASK                              0x2
#define _PSMC1PRS_P1PRSC2_POSN                              0x2
#define _PSMC1PRS_P1PRSC2_POSITION                          0x2
#define _PSMC1PRS_P1PRSC2_SIZE                              0x1
#define _PSMC1PRS_P1PRSC2_LENGTH                            0x1
#define _PSMC1PRS_P1PRSC2_MASK                              0x4
#define _PSMC1PRS_P1PRSC3_POSN                              0x3
#define _PSMC1PRS_P1PRSC3_POSITION                          0x3
#define _PSMC1PRS_P1PRSC3_SIZE                              0x1
#define _PSMC1PRS_P1PRSC3_LENGTH                            0x1
#define _PSMC1PRS_P1PRSC3_MASK                              0x8
#define _PSMC1PRS_P1PRSIN_POSN                              0x7
#define _PSMC1PRS_P1PRSIN_POSITION                          0x7
#define _PSMC1PRS_P1PRSIN_SIZE                              0x1
#define _PSMC1PRS_P1PRSIN_LENGTH                            0x1
#define _PSMC1PRS_P1PRSIN_MASK                              0x80

// Register: PSMC1ASDC
#define PSMC1ASDC PSMC1ASDC
extern volatile unsigned char           PSMC1ASDC           __at(0x81D);
#ifndef _LIB_BUILD
asm("PSMC1ASDC equ 081Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1ASDOV                :1;
        unsigned                        :4;
        unsigned P1ARSEN                :1;
        unsigned P1ASDEN                :1;
        unsigned P1ASE                  :1;
    };
} PSMC1ASDCbits_t;
extern volatile PSMC1ASDCbits_t PSMC1ASDCbits __at(0x81D);
// bitfield macros
#define _PSMC1ASDC_P1ASDOV_POSN                             0x0
#define _PSMC1ASDC_P1ASDOV_POSITION                         0x0
#define _PSMC1ASDC_P1ASDOV_SIZE                             0x1
#define _PSMC1ASDC_P1ASDOV_LENGTH                           0x1
#define _PSMC1ASDC_P1ASDOV_MASK                             0x1
#define _PSMC1ASDC_P1ARSEN_POSN                             0x5
#define _PSMC1ASDC_P1ARSEN_POSITION                         0x5
#define _PSMC1ASDC_P1ARSEN_SIZE                             0x1
#define _PSMC1ASDC_P1ARSEN_LENGTH                           0x1
#define _PSMC1ASDC_P1ARSEN_MASK                             0x20
#define _PSMC1ASDC_P1ASDEN_POSN                             0x6
#define _PSMC1ASDC_P1ASDEN_POSITION                         0x6
#define _PSMC1ASDC_P1ASDEN_SIZE                             0x1
#define _PSMC1ASDC_P1ASDEN_LENGTH                           0x1
#define _PSMC1ASDC_P1ASDEN_MASK                             0x40
#define _PSMC1ASDC_P1ASE_POSN                               0x7
#define _PSMC1ASDC_P1ASE_POSITION                           0x7
#define _PSMC1ASDC_P1ASE_SIZE                               0x1
#define _PSMC1ASDC_P1ASE_LENGTH                             0x1
#define _PSMC1ASDC_P1ASE_MASK                               0x80

// Register: PSMC1ASDL
#define PSMC1ASDL PSMC1ASDL
extern volatile unsigned char           PSMC1ASDL           __at(0x81E);
#ifndef _LIB_BUILD
asm("PSMC1ASDL equ 081Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1ASDLA                :1;
        unsigned P1ASDLB                :1;
        unsigned P1ASDLC                :1;
        unsigned P1ASDLD                :1;
        unsigned P1ASDLE                :1;
        unsigned P1ASDLF                :1;
    };
} PSMC1ASDLbits_t;
extern volatile PSMC1ASDLbits_t PSMC1ASDLbits __at(0x81E);
// bitfield macros
#define _PSMC1ASDL_P1ASDLA_POSN                             0x0
#define _PSMC1ASDL_P1ASDLA_POSITION                         0x0
#define _PSMC1ASDL_P1ASDLA_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLA_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLA_MASK                             0x1
#define _PSMC1ASDL_P1ASDLB_POSN                             0x1
#define _PSMC1ASDL_P1ASDLB_POSITION                         0x1
#define _PSMC1ASDL_P1ASDLB_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLB_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLB_MASK                             0x2
#define _PSMC1ASDL_P1ASDLC_POSN                             0x2
#define _PSMC1ASDL_P1ASDLC_POSITION                         0x2
#define _PSMC1ASDL_P1ASDLC_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLC_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLC_MASK                             0x4
#define _PSMC1ASDL_P1ASDLD_POSN                             0x3
#define _PSMC1ASDL_P1ASDLD_POSITION                         0x3
#define _PSMC1ASDL_P1ASDLD_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLD_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLD_MASK                             0x8
#define _PSMC1ASDL_P1ASDLE_POSN                             0x4
#define _PSMC1ASDL_P1ASDLE_POSITION                         0x4
#define _PSMC1ASDL_P1ASDLE_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLE_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLE_MASK                             0x10
#define _PSMC1ASDL_P1ASDLF_POSN                             0x5
#define _PSMC1ASDL_P1ASDLF_POSITION                         0x5
#define _PSMC1ASDL_P1ASDLF_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLF_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLF_MASK                             0x20

// Register: PSMC1ASDS
#define PSMC1ASDS PSMC1ASDS
extern volatile unsigned char           PSMC1ASDS           __at(0x81F);
#ifndef _LIB_BUILD
asm("PSMC1ASDS equ 081Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P1ASDSC1               :1;
        unsigned P1ASDSC2               :1;
        unsigned P1ASDSC3               :1;
        unsigned                        :3;
        unsigned P1ASDSIN               :1;
    };
} PSMC1ASDSbits_t;
extern volatile PSMC1ASDSbits_t PSMC1ASDSbits __at(0x81F);
// bitfield macros
#define _PSMC1ASDS_P1ASDSC1_POSN                            0x1
#define _PSMC1ASDS_P1ASDSC1_POSITION                        0x1
#define _PSMC1ASDS_P1ASDSC1_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSC1_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSC1_MASK                            0x2
#define _PSMC1ASDS_P1ASDSC2_POSN                            0x2
#define _PSMC1ASDS_P1ASDSC2_POSITION                        0x2
#define _PSMC1ASDS_P1ASDSC2_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSC2_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSC2_MASK                            0x4
#define _PSMC1ASDS_P1ASDSC3_POSN                            0x3
#define _PSMC1ASDS_P1ASDSC3_POSITION                        0x3
#define _PSMC1ASDS_P1ASDSC3_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSC3_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSC3_MASK                            0x8
#define _PSMC1ASDS_P1ASDSIN_POSN                            0x7
#define _PSMC1ASDS_P1ASDSIN_POSITION                        0x7
#define _PSMC1ASDS_P1ASDSIN_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSIN_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSIN_MASK                            0x80

// Register: PSMC1INT
#define PSMC1INT PSMC1INT
extern volatile unsigned char           PSMC1INT            __at(0x820);
#ifndef _LIB_BUILD
asm("PSMC1INT equ 0820h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1TPRIF                :1;
        unsigned P1TDCIF                :1;
        unsigned P1TPHIF                :1;
        unsigned P1TOVIF                :1;
        unsigned P1TPRIE                :1;
        unsigned P1TDCIE                :1;
        unsigned P1TPHIE                :1;
        unsigned P1TOVIE                :1;
    };
} PSMC1INTbits_t;
extern volatile PSMC1INTbits_t PSMC1INTbits __at(0x820);
// bitfield macros
#define _PSMC1INT_P1TPRIF_POSN                              0x0
#define _PSMC1INT_P1TPRIF_POSITION                          0x0
#define _PSMC1INT_P1TPRIF_SIZE                              0x1
#define _PSMC1INT_P1TPRIF_LENGTH                            0x1
#define _PSMC1INT_P1TPRIF_MASK                              0x1
#define _PSMC1INT_P1TDCIF_POSN                              0x1
#define _PSMC1INT_P1TDCIF_POSITION                          0x1
#define _PSMC1INT_P1TDCIF_SIZE                              0x1
#define _PSMC1INT_P1TDCIF_LENGTH                            0x1
#define _PSMC1INT_P1TDCIF_MASK                              0x2
#define _PSMC1INT_P1TPHIF_POSN                              0x2
#define _PSMC1INT_P1TPHIF_POSITION                          0x2
#define _PSMC1INT_P1TPHIF_SIZE                              0x1
#define _PSMC1INT_P1TPHIF_LENGTH                            0x1
#define _PSMC1INT_P1TPHIF_MASK                              0x4
#define _PSMC1INT_P1TOVIF_POSN                              0x3
#define _PSMC1INT_P1TOVIF_POSITION                          0x3
#define _PSMC1INT_P1TOVIF_SIZE                              0x1
#define _PSMC1INT_P1TOVIF_LENGTH                            0x1
#define _PSMC1INT_P1TOVIF_MASK                              0x8
#define _PSMC1INT_P1TPRIE_POSN                              0x4
#define _PSMC1INT_P1TPRIE_POSITION                          0x4
#define _PSMC1INT_P1TPRIE_SIZE                              0x1
#define _PSMC1INT_P1TPRIE_LENGTH                            0x1
#define _PSMC1INT_P1TPRIE_MASK                              0x10
#define _PSMC1INT_P1TDCIE_POSN                              0x5
#define _PSMC1INT_P1TDCIE_POSITION                          0x5
#define _PSMC1INT_P1TDCIE_SIZE                              0x1
#define _PSMC1INT_P1TDCIE_LENGTH                            0x1
#define _PSMC1INT_P1TDCIE_MASK                              0x20
#define _PSMC1INT_P1TPHIE_POSN                              0x6
#define _PSMC1INT_P1TPHIE_POSITION                          0x6
#define _PSMC1INT_P1TPHIE_SIZE                              0x1
#define _PSMC1INT_P1TPHIE_LENGTH                            0x1
#define _PSMC1INT_P1TPHIE_MASK                              0x40
#define _PSMC1INT_P1TOVIE_POSN                              0x7
#define _PSMC1INT_P1TOVIE_POSITION                          0x7
#define _PSMC1INT_P1TOVIE_SIZE                              0x1
#define _PSMC1INT_P1TOVIE_LENGTH                            0x1
#define _PSMC1INT_P1TOVIE_MASK                              0x80

// Register: PSMC1PH
#define PSMC1PH PSMC1PH
extern volatile unsigned short          PSMC1PH             __at(0x821);
#ifndef _LIB_BUILD
asm("PSMC1PH equ 0821h");
#endif

// Register: PSMC1PHL
#define PSMC1PHL PSMC1PHL
extern volatile unsigned char           PSMC1PHL            __at(0x821);
#ifndef _LIB_BUILD
asm("PSMC1PHL equ 0821h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PH0               :1;
        unsigned PSMC1PH1               :1;
        unsigned PSMC1PH2               :1;
        unsigned PSMC1PH3               :1;
        unsigned PSMC1PH4               :1;
        unsigned PSMC1PH5               :1;
        unsigned PSMC1PH6               :1;
        unsigned PSMC1PH7               :1;
    };
} PSMC1PHLbits_t;
extern volatile PSMC1PHLbits_t PSMC1PHLbits __at(0x821);
// bitfield macros
#define _PSMC1PHL_PSMC1PH0_POSN                             0x0
#define _PSMC1PHL_PSMC1PH0_POSITION                         0x0
#define _PSMC1PHL_PSMC1PH0_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH0_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH0_MASK                             0x1
#define _PSMC1PHL_PSMC1PH1_POSN                             0x1
#define _PSMC1PHL_PSMC1PH1_POSITION                         0x1
#define _PSMC1PHL_PSMC1PH1_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH1_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH1_MASK                             0x2
#define _PSMC1PHL_PSMC1PH2_POSN                             0x2
#define _PSMC1PHL_PSMC1PH2_POSITION                         0x2
#define _PSMC1PHL_PSMC1PH2_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH2_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH2_MASK                             0x4
#define _PSMC1PHL_PSMC1PH3_POSN                             0x3
#define _PSMC1PHL_PSMC1PH3_POSITION                         0x3
#define _PSMC1PHL_PSMC1PH3_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH3_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH3_MASK                             0x8
#define _PSMC1PHL_PSMC1PH4_POSN                             0x4
#define _PSMC1PHL_PSMC1PH4_POSITION                         0x4
#define _PSMC1PHL_PSMC1PH4_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH4_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH4_MASK                             0x10
#define _PSMC1PHL_PSMC1PH5_POSN                             0x5
#define _PSMC1PHL_PSMC1PH5_POSITION                         0x5
#define _PSMC1PHL_PSMC1PH5_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH5_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH5_MASK                             0x20
#define _PSMC1PHL_PSMC1PH6_POSN                             0x6
#define _PSMC1PHL_PSMC1PH6_POSITION                         0x6
#define _PSMC1PHL_PSMC1PH6_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH6_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH6_MASK                             0x40
#define _PSMC1PHL_PSMC1PH7_POSN                             0x7
#define _PSMC1PHL_PSMC1PH7_POSITION                         0x7
#define _PSMC1PHL_PSMC1PH7_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH7_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH7_MASK                             0x80

// Register: PSMC1PHH
#define PSMC1PHH PSMC1PHH
extern volatile unsigned char           PSMC1PHH            __at(0x822);
#ifndef _LIB_BUILD
asm("PSMC1PHH equ 0822h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PH8               :1;
        unsigned PSMC1PH9               :1;
        unsigned PSMC1PH10              :1;
        unsigned PSMC1PH11              :1;
        unsigned PSMC1PH12              :1;
        unsigned PSMC1PH13              :1;
        unsigned PSMC1PH14              :1;
        unsigned PSMC1PH15              :1;
    };
} PSMC1PHHbits_t;
extern volatile PSMC1PHHbits_t PSMC1PHHbits __at(0x822);
// bitfield macros
#define _PSMC1PHH_PSMC1PH8_POSN                             0x0
#define _PSMC1PHH_PSMC1PH8_POSITION                         0x0
#define _PSMC1PHH_PSMC1PH8_SIZE                             0x1
#define _PSMC1PHH_PSMC1PH8_LENGTH                           0x1
#define _PSMC1PHH_PSMC1PH8_MASK                             0x1
#define _PSMC1PHH_PSMC1PH9_POSN                             0x1
#define _PSMC1PHH_PSMC1PH9_POSITION                         0x1
#define _PSMC1PHH_PSMC1PH9_SIZE                             0x1
#define _PSMC1PHH_PSMC1PH9_LENGTH                           0x1
#define _PSMC1PHH_PSMC1PH9_MASK                             0x2
#define _PSMC1PHH_PSMC1PH10_POSN                            0x2
#define _PSMC1PHH_PSMC1PH10_POSITION                        0x2
#define _PSMC1PHH_PSMC1PH10_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH10_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH10_MASK                            0x4
#define _PSMC1PHH_PSMC1PH11_POSN                            0x3
#define _PSMC1PHH_PSMC1PH11_POSITION                        0x3
#define _PSMC1PHH_PSMC1PH11_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH11_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH11_MASK                            0x8
#define _PSMC1PHH_PSMC1PH12_POSN                            0x4
#define _PSMC1PHH_PSMC1PH12_POSITION                        0x4
#define _PSMC1PHH_PSMC1PH12_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH12_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH12_MASK                            0x10
#define _PSMC1PHH_PSMC1PH13_POSN                            0x5
#define _PSMC1PHH_PSMC1PH13_POSITION                        0x5
#define _PSMC1PHH_PSMC1PH13_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH13_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH13_MASK                            0x20
#define _PSMC1PHH_PSMC1PH14_POSN                            0x6
#define _PSMC1PHH_PSMC1PH14_POSITION                        0x6
#define _PSMC1PHH_PSMC1PH14_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH14_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH14_MASK                            0x40
#define _PSMC1PHH_PSMC1PH15_POSN                            0x7
#define _PSMC1PHH_PSMC1PH15_POSITION                        0x7
#define _PSMC1PHH_PSMC1PH15_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH15_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH15_MASK                            0x80

// Register: PSMC1DC
#define PSMC1DC PSMC1DC
extern volatile unsigned short          PSMC1DC             __at(0x823);
#ifndef _LIB_BUILD
asm("PSMC1DC equ 0823h");
#endif

// Register: PSMC1DCL
#define PSMC1DCL PSMC1DCL
extern volatile unsigned char           PSMC1DCL            __at(0x823);
#ifndef _LIB_BUILD
asm("PSMC1DCL equ 0823h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DC0               :1;
        unsigned PSMC1DC1               :1;
        unsigned PSMC1DC2               :1;
        unsigned PSMC1DC3               :1;
        unsigned PSMC1DC4               :1;
        unsigned PSMC1DC5               :1;
        unsigned PSMC1DC6               :1;
        unsigned PSMC1DC7               :1;
    };
} PSMC1DCLbits_t;
extern volatile PSMC1DCLbits_t PSMC1DCLbits __at(0x823);
// bitfield macros
#define _PSMC1DCL_PSMC1DC0_POSN                             0x0
#define _PSMC1DCL_PSMC1DC0_POSITION                         0x0
#define _PSMC1DCL_PSMC1DC0_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC0_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC0_MASK                             0x1
#define _PSMC1DCL_PSMC1DC1_POSN                             0x1
#define _PSMC1DCL_PSMC1DC1_POSITION                         0x1
#define _PSMC1DCL_PSMC1DC1_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC1_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC1_MASK                             0x2
#define _PSMC1DCL_PSMC1DC2_POSN                             0x2
#define _PSMC1DCL_PSMC1DC2_POSITION                         0x2
#define _PSMC1DCL_PSMC1DC2_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC2_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC2_MASK                             0x4
#define _PSMC1DCL_PSMC1DC3_POSN                             0x3
#define _PSMC1DCL_PSMC1DC3_POSITION                         0x3
#define _PSMC1DCL_PSMC1DC3_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC3_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC3_MASK                             0x8
#define _PSMC1DCL_PSMC1DC4_POSN                             0x4
#define _PSMC1DCL_PSMC1DC4_POSITION                         0x4
#define _PSMC1DCL_PSMC1DC4_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC4_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC4_MASK                             0x10
#define _PSMC1DCL_PSMC1DC5_POSN                             0x5
#define _PSMC1DCL_PSMC1DC5_POSITION                         0x5
#define _PSMC1DCL_PSMC1DC5_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC5_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC5_MASK                             0x20
#define _PSMC1DCL_PSMC1DC6_POSN                             0x6
#define _PSMC1DCL_PSMC1DC6_POSITION                         0x6
#define _PSMC1DCL_PSMC1DC6_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC6_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC6_MASK                             0x40
#define _PSMC1DCL_PSMC1DC7_POSN                             0x7
#define _PSMC1DCL_PSMC1DC7_POSITION                         0x7
#define _PSMC1DCL_PSMC1DC7_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC7_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC7_MASK                             0x80

// Register: PSMC1DCH
#define PSMC1DCH PSMC1DCH
extern volatile unsigned char           PSMC1DCH            __at(0x824);
#ifndef _LIB_BUILD
asm("PSMC1DCH equ 0824h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DC8               :1;
        unsigned PSMC1DC9               :1;
        unsigned PSMC1DC10              :1;
        unsigned PSMC1DC11              :1;
        unsigned PSMC1DC12              :1;
        unsigned PSMC1DC13              :1;
        unsigned PSMC1DC14              :1;
        unsigned PSMC1DC15              :1;
    };
} PSMC1DCHbits_t;
extern volatile PSMC1DCHbits_t PSMC1DCHbits __at(0x824);
// bitfield macros
#define _PSMC1DCH_PSMC1DC8_POSN                             0x0
#define _PSMC1DCH_PSMC1DC8_POSITION                         0x0
#define _PSMC1DCH_PSMC1DC8_SIZE                             0x1
#define _PSMC1DCH_PSMC1DC8_LENGTH                           0x1
#define _PSMC1DCH_PSMC1DC8_MASK                             0x1
#define _PSMC1DCH_PSMC1DC9_POSN                             0x1
#define _PSMC1DCH_PSMC1DC9_POSITION                         0x1
#define _PSMC1DCH_PSMC1DC9_SIZE                             0x1
#define _PSMC1DCH_PSMC1DC9_LENGTH                           0x1
#define _PSMC1DCH_PSMC1DC9_MASK                             0x2
#define _PSMC1DCH_PSMC1DC10_POSN                            0x2
#define _PSMC1DCH_PSMC1DC10_POSITION                        0x2
#define _PSMC1DCH_PSMC1DC10_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC10_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC10_MASK                            0x4
#define _PSMC1DCH_PSMC1DC11_POSN                            0x3
#define _PSMC1DCH_PSMC1DC11_POSITION                        0x3
#define _PSMC1DCH_PSMC1DC11_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC11_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC11_MASK                            0x8
#define _PSMC1DCH_PSMC1DC12_POSN                            0x4
#define _PSMC1DCH_PSMC1DC12_POSITION                        0x4
#define _PSMC1DCH_PSMC1DC12_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC12_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC12_MASK                            0x10
#define _PSMC1DCH_PSMC1DC13_POSN                            0x5
#define _PSMC1DCH_PSMC1DC13_POSITION                        0x5
#define _PSMC1DCH_PSMC1DC13_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC13_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC13_MASK                            0x20
#define _PSMC1DCH_PSMC1DC14_POSN                            0x6
#define _PSMC1DCH_PSMC1DC14_POSITION                        0x6
#define _PSMC1DCH_PSMC1DC14_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC14_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC14_MASK                            0x40
#define _PSMC1DCH_PSMC1DC15_POSN                            0x7
#define _PSMC1DCH_PSMC1DC15_POSITION                        0x7
#define _PSMC1DCH_PSMC1DC15_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC15_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC15_MASK                            0x80

// Register: PSMC1PR
#define PSMC1PR PSMC1PR
extern volatile unsigned short          PSMC1PR             __at(0x825);
#ifndef _LIB_BUILD
asm("PSMC1PR equ 0825h");
#endif

// Register: PSMC1PRL
#define PSMC1PRL PSMC1PRL
extern volatile unsigned char           PSMC1PRL            __at(0x825);
#ifndef _LIB_BUILD
asm("PSMC1PRL equ 0825h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PR0               :1;
        unsigned PSMC1PR1               :1;
        unsigned PSMC1PR2               :1;
        unsigned PSMC1PR3               :1;
        unsigned PSMC1PR4               :1;
        unsigned PSMC1PR5               :1;
        unsigned PSMC1PR6               :1;
        unsigned PSMC1PR7               :1;
    };
} PSMC1PRLbits_t;
extern volatile PSMC1PRLbits_t PSMC1PRLbits __at(0x825);
// bitfield macros
#define _PSMC1PRL_PSMC1PR0_POSN                             0x0
#define _PSMC1PRL_PSMC1PR0_POSITION                         0x0
#define _PSMC1PRL_PSMC1PR0_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR0_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR0_MASK                             0x1
#define _PSMC1PRL_PSMC1PR1_POSN                             0x1
#define _PSMC1PRL_PSMC1PR1_POSITION                         0x1
#define _PSMC1PRL_PSMC1PR1_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR1_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR1_MASK                             0x2
#define _PSMC1PRL_PSMC1PR2_POSN                             0x2
#define _PSMC1PRL_PSMC1PR2_POSITION                         0x2
#define _PSMC1PRL_PSMC1PR2_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR2_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR2_MASK                             0x4
#define _PSMC1PRL_PSMC1PR3_POSN                             0x3
#define _PSMC1PRL_PSMC1PR3_POSITION                         0x3
#define _PSMC1PRL_PSMC1PR3_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR3_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR3_MASK                             0x8
#define _PSMC1PRL_PSMC1PR4_POSN                             0x4
#define _PSMC1PRL_PSMC1PR4_POSITION                         0x4
#define _PSMC1PRL_PSMC1PR4_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR4_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR4_MASK                             0x10
#define _PSMC1PRL_PSMC1PR5_POSN                             0x5
#define _PSMC1PRL_PSMC1PR5_POSITION                         0x5
#define _PSMC1PRL_PSMC1PR5_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR5_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR5_MASK                             0x20
#define _PSMC1PRL_PSMC1PR6_POSN                             0x6
#define _PSMC1PRL_PSMC1PR6_POSITION                         0x6
#define _PSMC1PRL_PSMC1PR6_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR6_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR6_MASK                             0x40
#define _PSMC1PRL_PSMC1PR7_POSN                             0x7
#define _PSMC1PRL_PSMC1PR7_POSITION                         0x7
#define _PSMC1PRL_PSMC1PR7_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR7_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR7_MASK                             0x80

// Register: PSMC1PRH
#define PSMC1PRH PSMC1PRH
extern volatile unsigned char           PSMC1PRH            __at(0x826);
#ifndef _LIB_BUILD
asm("PSMC1PRH equ 0826h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PR8               :1;
        unsigned PSMC1PR9               :1;
        unsigned PSMC1PR10              :1;
        unsigned PSMC1PR11              :1;
        unsigned PSMC1PR12              :1;
        unsigned PSMC1PR13              :1;
        unsigned PSMC1PR14              :1;
        unsigned PSMC1PR15              :1;
    };
} PSMC1PRHbits_t;
extern volatile PSMC1PRHbits_t PSMC1PRHbits __at(0x826);
// bitfield macros
#define _PSMC1PRH_PSMC1PR8_POSN                             0x0
#define _PSMC1PRH_PSMC1PR8_POSITION                         0x0
#define _PSMC1PRH_PSMC1PR8_SIZE                             0x1
#define _PSMC1PRH_PSMC1PR8_LENGTH                           0x1
#define _PSMC1PRH_PSMC1PR8_MASK                             0x1
#define _PSMC1PRH_PSMC1PR9_POSN                             0x1
#define _PSMC1PRH_PSMC1PR9_POSITION                         0x1
#define _PSMC1PRH_PSMC1PR9_SIZE                             0x1
#define _PSMC1PRH_PSMC1PR9_LENGTH                           0x1
#define _PSMC1PRH_PSMC1PR9_MASK                             0x2
#define _PSMC1PRH_PSMC1PR10_POSN                            0x2
#define _PSMC1PRH_PSMC1PR10_POSITION                        0x2
#define _PSMC1PRH_PSMC1PR10_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR10_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR10_MASK                            0x4
#define _PSMC1PRH_PSMC1PR11_POSN                            0x3
#define _PSMC1PRH_PSMC1PR11_POSITION                        0x3
#define _PSMC1PRH_PSMC1PR11_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR11_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR11_MASK                            0x8
#define _PSMC1PRH_PSMC1PR12_POSN                            0x4
#define _PSMC1PRH_PSMC1PR12_POSITION                        0x4
#define _PSMC1PRH_PSMC1PR12_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR12_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR12_MASK                            0x10
#define _PSMC1PRH_PSMC1PR13_POSN                            0x5
#define _PSMC1PRH_PSMC1PR13_POSITION                        0x5
#define _PSMC1PRH_PSMC1PR13_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR13_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR13_MASK                            0x20
#define _PSMC1PRH_PSMC1PR14_POSN                            0x6
#define _PSMC1PRH_PSMC1PR14_POSITION                        0x6
#define _PSMC1PRH_PSMC1PR14_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR14_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR14_MASK                            0x40
#define _PSMC1PRH_PSMC1PR15_POSN                            0x7
#define _PSMC1PRH_PSMC1PR15_POSITION                        0x7
#define _PSMC1PRH_PSMC1PR15_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR15_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR15_MASK                            0x80

// Register: PSMC1TMR
#define PSMC1TMR PSMC1TMR
extern volatile unsigned short          PSMC1TMR            __at(0x827);
#ifndef _LIB_BUILD
asm("PSMC1TMR equ 0827h");
#endif

// Register: PSMC1TMRL
#define PSMC1TMRL PSMC1TMRL
extern volatile unsigned char           PSMC1TMRL           __at(0x827);
#ifndef _LIB_BUILD
asm("PSMC1TMRL equ 0827h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1TMR0              :1;
        unsigned PSMC1TMR1              :1;
        unsigned PSMC1TMR2              :1;
        unsigned PSMC1TMR3              :1;
        unsigned PSMC1TMR4              :1;
        unsigned PSMC1TMR5              :1;
        unsigned PSMC1TMR6              :1;
        unsigned PSMC1TMR7              :1;
    };
} PSMC1TMRLbits_t;
extern volatile PSMC1TMRLbits_t PSMC1TMRLbits __at(0x827);
// bitfield macros
#define _PSMC1TMRL_PSMC1TMR0_POSN                           0x0
#define _PSMC1TMRL_PSMC1TMR0_POSITION                       0x0
#define _PSMC1TMRL_PSMC1TMR0_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR0_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR0_MASK                           0x1
#define _PSMC1TMRL_PSMC1TMR1_POSN                           0x1
#define _PSMC1TMRL_PSMC1TMR1_POSITION                       0x1
#define _PSMC1TMRL_PSMC1TMR1_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR1_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR1_MASK                           0x2
#define _PSMC1TMRL_PSMC1TMR2_POSN                           0x2
#define _PSMC1TMRL_PSMC1TMR2_POSITION                       0x2
#define _PSMC1TMRL_PSMC1TMR2_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR2_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR2_MASK                           0x4
#define _PSMC1TMRL_PSMC1TMR3_POSN                           0x3
#define _PSMC1TMRL_PSMC1TMR3_POSITION                       0x3
#define _PSMC1TMRL_PSMC1TMR3_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR3_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR3_MASK                           0x8
#define _PSMC1TMRL_PSMC1TMR4_POSN                           0x4
#define _PSMC1TMRL_PSMC1TMR4_POSITION                       0x4
#define _PSMC1TMRL_PSMC1TMR4_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR4_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR4_MASK                           0x10
#define _PSMC1TMRL_PSMC1TMR5_POSN                           0x5
#define _PSMC1TMRL_PSMC1TMR5_POSITION                       0x5
#define _PSMC1TMRL_PSMC1TMR5_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR5_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR5_MASK                           0x20
#define _PSMC1TMRL_PSMC1TMR6_POSN                           0x6
#define _PSMC1TMRL_PSMC1TMR6_POSITION                       0x6
#define _PSMC1TMRL_PSMC1TMR6_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR6_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR6_MASK                           0x40
#define _PSMC1TMRL_PSMC1TMR7_POSN                           0x7
#define _PSMC1TMRL_PSMC1TMR7_POSITION                       0x7
#define _PSMC1TMRL_PSMC1TMR7_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR7_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR7_MASK                           0x80

// Register: PSMC1TMRH
#define PSMC1TMRH PSMC1TMRH
extern volatile unsigned char           PSMC1TMRH           __at(0x828);
#ifndef _LIB_BUILD
asm("PSMC1TMRH equ 0828h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1TMR8              :1;
        unsigned PSMC1TMR9              :1;
        unsigned PSMC1TMR10             :1;
        unsigned PSMC1TMR11             :1;
        unsigned PSMC1TMR12             :1;
        unsigned PSMC1TMR13             :1;
        unsigned PSMC1TMR14             :1;
        unsigned PSMC1TMR15             :1;
    };
} PSMC1TMRHbits_t;
extern volatile PSMC1TMRHbits_t PSMC1TMRHbits __at(0x828);
// bitfield macros
#define _PSMC1TMRH_PSMC1TMR8_POSN                           0x0
#define _PSMC1TMRH_PSMC1TMR8_POSITION                       0x0
#define _PSMC1TMRH_PSMC1TMR8_SIZE                           0x1
#define _PSMC1TMRH_PSMC1TMR8_LENGTH                         0x1
#define _PSMC1TMRH_PSMC1TMR8_MASK                           0x1
#define _PSMC1TMRH_PSMC1TMR9_POSN                           0x1
#define _PSMC1TMRH_PSMC1TMR9_POSITION                       0x1
#define _PSMC1TMRH_PSMC1TMR9_SIZE                           0x1
#define _PSMC1TMRH_PSMC1TMR9_LENGTH                         0x1
#define _PSMC1TMRH_PSMC1TMR9_MASK                           0x2
#define _PSMC1TMRH_PSMC1TMR10_POSN                          0x2
#define _PSMC1TMRH_PSMC1TMR10_POSITION                      0x2
#define _PSMC1TMRH_PSMC1TMR10_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR10_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR10_MASK                          0x4
#define _PSMC1TMRH_PSMC1TMR11_POSN                          0x3
#define _PSMC1TMRH_PSMC1TMR11_POSITION                      0x3
#define _PSMC1TMRH_PSMC1TMR11_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR11_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR11_MASK                          0x8
#define _PSMC1TMRH_PSMC1TMR12_POSN                          0x4
#define _PSMC1TMRH_PSMC1TMR12_POSITION                      0x4
#define _PSMC1TMRH_PSMC1TMR12_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR12_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR12_MASK                          0x10
#define _PSMC1TMRH_PSMC1TMR13_POSN                          0x5
#define _PSMC1TMRH_PSMC1TMR13_POSITION                      0x5
#define _PSMC1TMRH_PSMC1TMR13_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR13_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR13_MASK                          0x20
#define _PSMC1TMRH_PSMC1TMR14_POSN                          0x6
#define _PSMC1TMRH_PSMC1TMR14_POSITION                      0x6
#define _PSMC1TMRH_PSMC1TMR14_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR14_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR14_MASK                          0x40
#define _PSMC1TMRH_PSMC1TMR15_POSN                          0x7
#define _PSMC1TMRH_PSMC1TMR15_POSITION                      0x7
#define _PSMC1TMRH_PSMC1TMR15_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR15_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR15_MASK                          0x80

// Register: PSMC1DBR
#define PSMC1DBR PSMC1DBR
extern volatile unsigned char           PSMC1DBR            __at(0x829);
#ifndef _LIB_BUILD
asm("PSMC1DBR equ 0829h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DBR0              :1;
        unsigned PSMC1DBR1              :1;
        unsigned PSMC1DBR2              :1;
        unsigned PSMC1DBR3              :1;
        unsigned PSMC1DBR4              :1;
        unsigned PSMC1DBR5              :1;
        unsigned PSMC1DBR6              :1;
        unsigned PSMC1DBR7              :1;
    };
} PSMC1DBRbits_t;
extern volatile PSMC1DBRbits_t PSMC1DBRbits __at(0x829);
// bitfield macros
#define _PSMC1DBR_PSMC1DBR0_POSN                            0x0
#define _PSMC1DBR_PSMC1DBR0_POSITION                        0x0
#define _PSMC1DBR_PSMC1DBR0_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR0_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR0_MASK                            0x1
#define _PSMC1DBR_PSMC1DBR1_POSN                            0x1
#define _PSMC1DBR_PSMC1DBR1_POSITION                        0x1
#define _PSMC1DBR_PSMC1DBR1_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR1_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR1_MASK                            0x2
#define _PSMC1DBR_PSMC1DBR2_POSN                            0x2
#define _PSMC1DBR_PSMC1DBR2_POSITION                        0x2
#define _PSMC1DBR_PSMC1DBR2_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR2_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR2_MASK                            0x4
#define _PSMC1DBR_PSMC1DBR3_POSN                            0x3
#define _PSMC1DBR_PSMC1DBR3_POSITION                        0x3
#define _PSMC1DBR_PSMC1DBR3_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR3_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR3_MASK                            0x8
#define _PSMC1DBR_PSMC1DBR4_POSN                            0x4
#define _PSMC1DBR_PSMC1DBR4_POSITION                        0x4
#define _PSMC1DBR_PSMC1DBR4_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR4_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR4_MASK                            0x10
#define _PSMC1DBR_PSMC1DBR5_POSN                            0x5
#define _PSMC1DBR_PSMC1DBR5_POSITION                        0x5
#define _PSMC1DBR_PSMC1DBR5_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR5_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR5_MASK                            0x20
#define _PSMC1DBR_PSMC1DBR6_POSN                            0x6
#define _PSMC1DBR_PSMC1DBR6_POSITION                        0x6
#define _PSMC1DBR_PSMC1DBR6_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR6_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR6_MASK                            0x40
#define _PSMC1DBR_PSMC1DBR7_POSN                            0x7
#define _PSMC1DBR_PSMC1DBR7_POSITION                        0x7
#define _PSMC1DBR_PSMC1DBR7_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR7_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR7_MASK                            0x80

// Register: PSMC1DBF
#define PSMC1DBF PSMC1DBF
extern volatile unsigned char           PSMC1DBF            __at(0x82A);
#ifndef _LIB_BUILD
asm("PSMC1DBF equ 082Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DBF0              :1;
        unsigned PSMC1DBF1              :1;
        unsigned PSMC1DBF2              :1;
        unsigned PSMC1DBF3              :1;
        unsigned PSMC1DBF4              :1;
        unsigned PSMC1DBF5              :1;
        unsigned PSMC1DBF6              :1;
        unsigned PSMC1DBF7              :1;
    };
} PSMC1DBFbits_t;
extern volatile PSMC1DBFbits_t PSMC1DBFbits __at(0x82A);
// bitfield macros
#define _PSMC1DBF_PSMC1DBF0_POSN                            0x0
#define _PSMC1DBF_PSMC1DBF0_POSITION                        0x0
#define _PSMC1DBF_PSMC1DBF0_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF0_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF0_MASK                            0x1
#define _PSMC1DBF_PSMC1DBF1_POSN                            0x1
#define _PSMC1DBF_PSMC1DBF1_POSITION                        0x1
#define _PSMC1DBF_PSMC1DBF1_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF1_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF1_MASK                            0x2
#define _PSMC1DBF_PSMC1DBF2_POSN                            0x2
#define _PSMC1DBF_PSMC1DBF2_POSITION                        0x2
#define _PSMC1DBF_PSMC1DBF2_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF2_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF2_MASK                            0x4
#define _PSMC1DBF_PSMC1DBF3_POSN                            0x3
#define _PSMC1DBF_PSMC1DBF3_POSITION                        0x3
#define _PSMC1DBF_PSMC1DBF3_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF3_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF3_MASK                            0x8
#define _PSMC1DBF_PSMC1DBF4_POSN                            0x4
#define _PSMC1DBF_PSMC1DBF4_POSITION                        0x4
#define _PSMC1DBF_PSMC1DBF4_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF4_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF4_MASK                            0x10
#define _PSMC1DBF_PSMC1DBF5_POSN                            0x5
#define _PSMC1DBF_PSMC1DBF5_POSITION                        0x5
#define _PSMC1DBF_PSMC1DBF5_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF5_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF5_MASK                            0x20
#define _PSMC1DBF_PSMC1DBF6_POSN                            0x6
#define _PSMC1DBF_PSMC1DBF6_POSITION                        0x6
#define _PSMC1DBF_PSMC1DBF6_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF6_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF6_MASK                            0x40
#define _PSMC1DBF_PSMC1DBF7_POSN                            0x7
#define _PSMC1DBF_PSMC1DBF7_POSITION                        0x7
#define _PSMC1DBF_PSMC1DBF7_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF7_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF7_MASK                            0x80

// Register: PSMC1BLKR
#define PSMC1BLKR PSMC1BLKR
extern volatile unsigned char           PSMC1BLKR           __at(0x82B);
#ifndef _LIB_BUILD
asm("PSMC1BLKR equ 082Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1BLKR0             :1;
        unsigned PSMC1BLKR1             :1;
        unsigned PSMC1BLKR2             :1;
        unsigned PSMC1BLKR3             :1;
        unsigned PSMC1BLKR4             :1;
        unsigned PSMC1BLKR5             :1;
        unsigned PSMC1BLKR6             :1;
        unsigned PSMC1BLKR7             :1;
    };
} PSMC1BLKRbits_t;
extern volatile PSMC1BLKRbits_t PSMC1BLKRbits __at(0x82B);
// bitfield macros
#define _PSMC1BLKR_PSMC1BLKR0_POSN                          0x0
#define _PSMC1BLKR_PSMC1BLKR0_POSITION                      0x0
#define _PSMC1BLKR_PSMC1BLKR0_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR0_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR0_MASK                          0x1
#define _PSMC1BLKR_PSMC1BLKR1_POSN                          0x1
#define _PSMC1BLKR_PSMC1BLKR1_POSITION                      0x1
#define _PSMC1BLKR_PSMC1BLKR1_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR1_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR1_MASK                          0x2
#define _PSMC1BLKR_PSMC1BLKR2_POSN                          0x2
#define _PSMC1BLKR_PSMC1BLKR2_POSITION                      0x2
#define _PSMC1BLKR_PSMC1BLKR2_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR2_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR2_MASK                          0x4
#define _PSMC1BLKR_PSMC1BLKR3_POSN                          0x3
#define _PSMC1BLKR_PSMC1BLKR3_POSITION                      0x3
#define _PSMC1BLKR_PSMC1BLKR3_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR3_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR3_MASK                          0x8
#define _PSMC1BLKR_PSMC1BLKR4_POSN                          0x4
#define _PSMC1BLKR_PSMC1BLKR4_POSITION                      0x4
#define _PSMC1BLKR_PSMC1BLKR4_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR4_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR4_MASK                          0x10
#define _PSMC1BLKR_PSMC1BLKR5_POSN                          0x5
#define _PSMC1BLKR_PSMC1BLKR5_POSITION                      0x5
#define _PSMC1BLKR_PSMC1BLKR5_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR5_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR5_MASK                          0x20
#define _PSMC1BLKR_PSMC1BLKR6_POSN                          0x6
#define _PSMC1BLKR_PSMC1BLKR6_POSITION                      0x6
#define _PSMC1BLKR_PSMC1BLKR6_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR6_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR6_MASK                          0x40
#define _PSMC1BLKR_PSMC1BLKR7_POSN                          0x7
#define _PSMC1BLKR_PSMC1BLKR7_POSITION                      0x7
#define _PSMC1BLKR_PSMC1BLKR7_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR7_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR7_MASK                          0x80

// Register: PSMC1BLKF
#define PSMC1BLKF PSMC1BLKF
extern volatile unsigned char           PSMC1BLKF           __at(0x82C);
#ifndef _LIB_BUILD
asm("PSMC1BLKF equ 082Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1BLKF0             :1;
        unsigned PSMC1BLKF1             :1;
        unsigned PSMC1BLKF2             :1;
        unsigned PSMC1BLKF3             :1;
        unsigned PSMC1BLKF4             :1;
        unsigned PSMC1BLKF5             :1;
        unsigned PSMC1BLKF6             :1;
        unsigned PSMC1BLKF7             :1;
    };
} PSMC1BLKFbits_t;
extern volatile PSMC1BLKFbits_t PSMC1BLKFbits __at(0x82C);
// bitfield macros
#define _PSMC1BLKF_PSMC1BLKF0_POSN                          0x0
#define _PSMC1BLKF_PSMC1BLKF0_POSITION                      0x0
#define _PSMC1BLKF_PSMC1BLKF0_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF0_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF0_MASK                          0x1
#define _PSMC1BLKF_PSMC1BLKF1_POSN                          0x1
#define _PSMC1BLKF_PSMC1BLKF1_POSITION                      0x1
#define _PSMC1BLKF_PSMC1BLKF1_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF1_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF1_MASK                          0x2
#define _PSMC1BLKF_PSMC1BLKF2_POSN                          0x2
#define _PSMC1BLKF_PSMC1BLKF2_POSITION                      0x2
#define _PSMC1BLKF_PSMC1BLKF2_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF2_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF2_MASK                          0x4
#define _PSMC1BLKF_PSMC1BLKF3_POSN                          0x3
#define _PSMC1BLKF_PSMC1BLKF3_POSITION                      0x3
#define _PSMC1BLKF_PSMC1BLKF3_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF3_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF3_MASK                          0x8
#define _PSMC1BLKF_PSMC1BLKF4_POSN                          0x4
#define _PSMC1BLKF_PSMC1BLKF4_POSITION                      0x4
#define _PSMC1BLKF_PSMC1BLKF4_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF4_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF4_MASK                          0x10
#define _PSMC1BLKF_PSMC1BLKF5_POSN                          0x5
#define _PSMC1BLKF_PSMC1BLKF5_POSITION                      0x5
#define _PSMC1BLKF_PSMC1BLKF5_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF5_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF5_MASK                          0x20
#define _PSMC1BLKF_PSMC1BLKF6_POSN                          0x6
#define _PSMC1BLKF_PSMC1BLKF6_POSITION                      0x6
#define _PSMC1BLKF_PSMC1BLKF6_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF6_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF6_MASK                          0x40
#define _PSMC1BLKF_PSMC1BLKF7_POSN                          0x7
#define _PSMC1BLKF_PSMC1BLKF7_POSITION                      0x7
#define _PSMC1BLKF_PSMC1BLKF7_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF7_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF7_MASK                          0x80

// Register: PSMC1FFA
#define PSMC1FFA PSMC1FFA
extern volatile unsigned char           PSMC1FFA            __at(0x82D);
#ifndef _LIB_BUILD
asm("PSMC1FFA equ 082Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1FFA0              :1;
        unsigned PSMC1FFA1              :1;
        unsigned PSMC1FFA2              :1;
        unsigned PSMC1FFA3              :1;
    };
} PSMC1FFAbits_t;
extern volatile PSMC1FFAbits_t PSMC1FFAbits __at(0x82D);
// bitfield macros
#define _PSMC1FFA_PSMC1FFA0_POSN                            0x0
#define _PSMC1FFA_PSMC1FFA0_POSITION                        0x0
#define _PSMC1FFA_PSMC1FFA0_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA0_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA0_MASK                            0x1
#define _PSMC1FFA_PSMC1FFA1_POSN                            0x1
#define _PSMC1FFA_PSMC1FFA1_POSITION                        0x1
#define _PSMC1FFA_PSMC1FFA1_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA1_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA1_MASK                            0x2
#define _PSMC1FFA_PSMC1FFA2_POSN                            0x2
#define _PSMC1FFA_PSMC1FFA2_POSITION                        0x2
#define _PSMC1FFA_PSMC1FFA2_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA2_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA2_MASK                            0x4
#define _PSMC1FFA_PSMC1FFA3_POSN                            0x3
#define _PSMC1FFA_PSMC1FFA3_POSITION                        0x3
#define _PSMC1FFA_PSMC1FFA3_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA3_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA3_MASK                            0x8

// Register: PSMC1STR0
#define PSMC1STR0 PSMC1STR0
extern volatile unsigned char           PSMC1STR0           __at(0x82E);
#ifndef _LIB_BUILD
asm("PSMC1STR0 equ 082Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1STRA                 :1;
        unsigned P1STRB                 :1;
        unsigned P1STRC                 :1;
        unsigned P1STRD                 :1;
        unsigned P1STRE                 :1;
        unsigned P1STRF                 :1;
    };
} PSMC1STR0bits_t;
extern volatile PSMC1STR0bits_t PSMC1STR0bits __at(0x82E);
// bitfield macros
#define _PSMC1STR0_P1STRA_POSN                              0x0
#define _PSMC1STR0_P1STRA_POSITION                          0x0
#define _PSMC1STR0_P1STRA_SIZE                              0x1
#define _PSMC1STR0_P1STRA_LENGTH                            0x1
#define _PSMC1STR0_P1STRA_MASK                              0x1
#define _PSMC1STR0_P1STRB_POSN                              0x1
#define _PSMC1STR0_P1STRB_POSITION                          0x1
#define _PSMC1STR0_P1STRB_SIZE                              0x1
#define _PSMC1STR0_P1STRB_LENGTH                            0x1
#define _PSMC1STR0_P1STRB_MASK                              0x2
#define _PSMC1STR0_P1STRC_POSN                              0x2
#define _PSMC1STR0_P1STRC_POSITION                          0x2
#define _PSMC1STR0_P1STRC_SIZE                              0x1
#define _PSMC1STR0_P1STRC_LENGTH                            0x1
#define _PSMC1STR0_P1STRC_MASK                              0x4
#define _PSMC1STR0_P1STRD_POSN                              0x3
#define _PSMC1STR0_P1STRD_POSITION                          0x3
#define _PSMC1STR0_P1STRD_SIZE                              0x1
#define _PSMC1STR0_P1STRD_LENGTH                            0x1
#define _PSMC1STR0_P1STRD_MASK                              0x8
#define _PSMC1STR0_P1STRE_POSN                              0x4
#define _PSMC1STR0_P1STRE_POSITION                          0x4
#define _PSMC1STR0_P1STRE_SIZE                              0x1
#define _PSMC1STR0_P1STRE_LENGTH                            0x1
#define _PSMC1STR0_P1STRE_MASK                              0x10
#define _PSMC1STR0_P1STRF_POSN                              0x5
#define _PSMC1STR0_P1STRF_POSITION                          0x5
#define _PSMC1STR0_P1STRF_SIZE                              0x1
#define _PSMC1STR0_P1STRF_LENGTH                            0x1
#define _PSMC1STR0_P1STRF_MASK                              0x20

// Register: PSMC1STR1
#define PSMC1STR1 PSMC1STR1
extern volatile unsigned char           PSMC1STR1           __at(0x82F);
#ifndef _LIB_BUILD
asm("PSMC1STR1 equ 082Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1HSMEN                :1;
        unsigned P1LSMEN                :1;
        unsigned                        :5;
        unsigned P1SSYNC                :1;
    };
} PSMC1STR1bits_t;
extern volatile PSMC1STR1bits_t PSMC1STR1bits __at(0x82F);
// bitfield macros
#define _PSMC1STR1_P1HSMEN_POSN                             0x0
#define _PSMC1STR1_P1HSMEN_POSITION                         0x0
#define _PSMC1STR1_P1HSMEN_SIZE                             0x1
#define _PSMC1STR1_P1HSMEN_LENGTH                           0x1
#define _PSMC1STR1_P1HSMEN_MASK                             0x1
#define _PSMC1STR1_P1LSMEN_POSN                             0x1
#define _PSMC1STR1_P1LSMEN_POSITION                         0x1
#define _PSMC1STR1_P1LSMEN_SIZE                             0x1
#define _PSMC1STR1_P1LSMEN_LENGTH                           0x1
#define _PSMC1STR1_P1LSMEN_MASK                             0x2
#define _PSMC1STR1_P1SSYNC_POSN                             0x7
#define _PSMC1STR1_P1SSYNC_POSITION                         0x7
#define _PSMC1STR1_P1SSYNC_SIZE                             0x1
#define _PSMC1STR1_P1SSYNC_LENGTH                           0x1
#define _PSMC1STR1_P1SSYNC_MASK                             0x80

// Register: PSMC2CON
#define PSMC2CON PSMC2CON
extern volatile unsigned char           PSMC2CON            __at(0x831);
#ifndef _LIB_BUILD
asm("PSMC2CON equ 0831h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2MODE                 :4;
        unsigned P2DBRE                 :1;
        unsigned P2DBFE                 :1;
        unsigned PSMC2LD                :1;
        unsigned PSMC2EN                :1;
    };
    struct {
        unsigned P2MODE0                :1;
        unsigned P2MODE1                :1;
        unsigned P2MODE2                :1;
        unsigned P2MODE3                :1;
    };
} PSMC2CONbits_t;
extern volatile PSMC2CONbits_t PSMC2CONbits __at(0x831);
// bitfield macros
#define _PSMC2CON_P2MODE_POSN                               0x0
#define _PSMC2CON_P2MODE_POSITION                           0x0
#define _PSMC2CON_P2MODE_SIZE                               0x4
#define _PSMC2CON_P2MODE_LENGTH                             0x4
#define _PSMC2CON_P2MODE_MASK                               0xF
#define _PSMC2CON_P2DBRE_POSN                               0x4
#define _PSMC2CON_P2DBRE_POSITION                           0x4
#define _PSMC2CON_P2DBRE_SIZE                               0x1
#define _PSMC2CON_P2DBRE_LENGTH                             0x1
#define _PSMC2CON_P2DBRE_MASK                               0x10
#define _PSMC2CON_P2DBFE_POSN                               0x5
#define _PSMC2CON_P2DBFE_POSITION                           0x5
#define _PSMC2CON_P2DBFE_SIZE                               0x1
#define _PSMC2CON_P2DBFE_LENGTH                             0x1
#define _PSMC2CON_P2DBFE_MASK                               0x20
#define _PSMC2CON_PSMC2LD_POSN                              0x6
#define _PSMC2CON_PSMC2LD_POSITION                          0x6
#define _PSMC2CON_PSMC2LD_SIZE                              0x1
#define _PSMC2CON_PSMC2LD_LENGTH                            0x1
#define _PSMC2CON_PSMC2LD_MASK                              0x40
#define _PSMC2CON_PSMC2EN_POSN                              0x7
#define _PSMC2CON_PSMC2EN_POSITION                          0x7
#define _PSMC2CON_PSMC2EN_SIZE                              0x1
#define _PSMC2CON_PSMC2EN_LENGTH                            0x1
#define _PSMC2CON_PSMC2EN_MASK                              0x80
#define _PSMC2CON_P2MODE0_POSN                              0x0
#define _PSMC2CON_P2MODE0_POSITION                          0x0
#define _PSMC2CON_P2MODE0_SIZE                              0x1
#define _PSMC2CON_P2MODE0_LENGTH                            0x1
#define _PSMC2CON_P2MODE0_MASK                              0x1
#define _PSMC2CON_P2MODE1_POSN                              0x1
#define _PSMC2CON_P2MODE1_POSITION                          0x1
#define _PSMC2CON_P2MODE1_SIZE                              0x1
#define _PSMC2CON_P2MODE1_LENGTH                            0x1
#define _PSMC2CON_P2MODE1_MASK                              0x2
#define _PSMC2CON_P2MODE2_POSN                              0x2
#define _PSMC2CON_P2MODE2_POSITION                          0x2
#define _PSMC2CON_P2MODE2_SIZE                              0x1
#define _PSMC2CON_P2MODE2_LENGTH                            0x1
#define _PSMC2CON_P2MODE2_MASK                              0x4
#define _PSMC2CON_P2MODE3_POSN                              0x3
#define _PSMC2CON_P2MODE3_POSITION                          0x3
#define _PSMC2CON_P2MODE3_SIZE                              0x1
#define _PSMC2CON_P2MODE3_LENGTH                            0x1
#define _PSMC2CON_P2MODE3_MASK                              0x8

// Register: PSMC2MDL
#define PSMC2MDL PSMC2MDL
extern volatile unsigned char           PSMC2MDL            __at(0x832);
#ifndef _LIB_BUILD
asm("PSMC2MDL equ 0832h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2MSRC                 :4;
        unsigned                        :1;
        unsigned P2MDLBIT               :1;
        unsigned P2MDLPOL               :1;
        unsigned P2MDLEN                :1;
    };
    struct {
        unsigned P2MSRC0                :1;
        unsigned P2MSRC1                :1;
        unsigned P2MSRC2                :1;
        unsigned P2MSRC3                :1;
    };
} PSMC2MDLbits_t;
extern volatile PSMC2MDLbits_t PSMC2MDLbits __at(0x832);
// bitfield macros
#define _PSMC2MDL_P2MSRC_POSN                               0x0
#define _PSMC2MDL_P2MSRC_POSITION                           0x0
#define _PSMC2MDL_P2MSRC_SIZE                               0x4
#define _PSMC2MDL_P2MSRC_LENGTH                             0x4
#define _PSMC2MDL_P2MSRC_MASK                               0xF
#define _PSMC2MDL_P2MDLBIT_POSN                             0x5
#define _PSMC2MDL_P2MDLBIT_POSITION                         0x5
#define _PSMC2MDL_P2MDLBIT_SIZE                             0x1
#define _PSMC2MDL_P2MDLBIT_LENGTH                           0x1
#define _PSMC2MDL_P2MDLBIT_MASK                             0x20
#define _PSMC2MDL_P2MDLPOL_POSN                             0x6
#define _PSMC2MDL_P2MDLPOL_POSITION                         0x6
#define _PSMC2MDL_P2MDLPOL_SIZE                             0x1
#define _PSMC2MDL_P2MDLPOL_LENGTH                           0x1
#define _PSMC2MDL_P2MDLPOL_MASK                             0x40
#define _PSMC2MDL_P2MDLEN_POSN                              0x7
#define _PSMC2MDL_P2MDLEN_POSITION                          0x7
#define _PSMC2MDL_P2MDLEN_SIZE                              0x1
#define _PSMC2MDL_P2MDLEN_LENGTH                            0x1
#define _PSMC2MDL_P2MDLEN_MASK                              0x80
#define _PSMC2MDL_P2MSRC0_POSN                              0x0
#define _PSMC2MDL_P2MSRC0_POSITION                          0x0
#define _PSMC2MDL_P2MSRC0_SIZE                              0x1
#define _PSMC2MDL_P2MSRC0_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC0_MASK                              0x1
#define _PSMC2MDL_P2MSRC1_POSN                              0x1
#define _PSMC2MDL_P2MSRC1_POSITION                          0x1
#define _PSMC2MDL_P2MSRC1_SIZE                              0x1
#define _PSMC2MDL_P2MSRC1_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC1_MASK                              0x2
#define _PSMC2MDL_P2MSRC2_POSN                              0x2
#define _PSMC2MDL_P2MSRC2_POSITION                          0x2
#define _PSMC2MDL_P2MSRC2_SIZE                              0x1
#define _PSMC2MDL_P2MSRC2_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC2_MASK                              0x4
#define _PSMC2MDL_P2MSRC3_POSN                              0x3
#define _PSMC2MDL_P2MSRC3_POSITION                          0x3
#define _PSMC2MDL_P2MSRC3_SIZE                              0x1
#define _PSMC2MDL_P2MSRC3_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC3_MASK                              0x8

// Register: PSMC2SYNC
#define PSMC2SYNC PSMC2SYNC
extern volatile unsigned char           PSMC2SYNC           __at(0x833);
#ifndef _LIB_BUILD
asm("PSMC2SYNC equ 0833h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2SYNC0                :1;
        unsigned P2SYNC1                :1;
    };
} PSMC2SYNCbits_t;
extern volatile PSMC2SYNCbits_t PSMC2SYNCbits __at(0x833);
// bitfield macros
#define _PSMC2SYNC_P2SYNC0_POSN                             0x0
#define _PSMC2SYNC_P2SYNC0_POSITION                         0x0
#define _PSMC2SYNC_P2SYNC0_SIZE                             0x1
#define _PSMC2SYNC_P2SYNC0_LENGTH                           0x1
#define _PSMC2SYNC_P2SYNC0_MASK                             0x1
#define _PSMC2SYNC_P2SYNC1_POSN                             0x1
#define _PSMC2SYNC_P2SYNC1_POSITION                         0x1
#define _PSMC2SYNC_P2SYNC1_SIZE                             0x1
#define _PSMC2SYNC_P2SYNC1_LENGTH                           0x1
#define _PSMC2SYNC_P2SYNC1_MASK                             0x2

// Register: PSMC2CLK
#define PSMC2CLK PSMC2CLK
extern volatile unsigned char           PSMC2CLK            __at(0x834);
#ifndef _LIB_BUILD
asm("PSMC2CLK equ 0834h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2CSRC0                :1;
        unsigned P2CSRC1                :1;
        unsigned                        :2;
        unsigned P2CPRE0                :1;
        unsigned P2CPRE1                :1;
    };
    struct {
        unsigned P2CSRC                 :2;
        unsigned                        :2;
        unsigned P2CPRE                 :2;
    };
} PSMC2CLKbits_t;
extern volatile PSMC2CLKbits_t PSMC2CLKbits __at(0x834);
// bitfield macros
#define _PSMC2CLK_P2CSRC0_POSN                              0x0
#define _PSMC2CLK_P2CSRC0_POSITION                          0x0
#define _PSMC2CLK_P2CSRC0_SIZE                              0x1
#define _PSMC2CLK_P2CSRC0_LENGTH                            0x1
#define _PSMC2CLK_P2CSRC0_MASK                              0x1
#define _PSMC2CLK_P2CSRC1_POSN                              0x1
#define _PSMC2CLK_P2CSRC1_POSITION                          0x1
#define _PSMC2CLK_P2CSRC1_SIZE                              0x1
#define _PSMC2CLK_P2CSRC1_LENGTH                            0x1
#define _PSMC2CLK_P2CSRC1_MASK                              0x2
#define _PSMC2CLK_P2CPRE0_POSN                              0x4
#define _PSMC2CLK_P2CPRE0_POSITION                          0x4
#define _PSMC2CLK_P2CPRE0_SIZE                              0x1
#define _PSMC2CLK_P2CPRE0_LENGTH                            0x1
#define _PSMC2CLK_P2CPRE0_MASK                              0x10
#define _PSMC2CLK_P2CPRE1_POSN                              0x5
#define _PSMC2CLK_P2CPRE1_POSITION                          0x5
#define _PSMC2CLK_P2CPRE1_SIZE                              0x1
#define _PSMC2CLK_P2CPRE1_LENGTH                            0x1
#define _PSMC2CLK_P2CPRE1_MASK                              0x20
#define _PSMC2CLK_P2CSRC_POSN                               0x0
#define _PSMC2CLK_P2CSRC_POSITION                           0x0
#define _PSMC2CLK_P2CSRC_SIZE                               0x2
#define _PSMC2CLK_P2CSRC_LENGTH                             0x2
#define _PSMC2CLK_P2CSRC_MASK                               0x3
#define _PSMC2CLK_P2CPRE_POSN                               0x4
#define _PSMC2CLK_P2CPRE_POSITION                           0x4
#define _PSMC2CLK_P2CPRE_SIZE                               0x2
#define _PSMC2CLK_P2CPRE_LENGTH                             0x2
#define _PSMC2CLK_P2CPRE_MASK                               0x30

// Register: PSMC2OEN
#define PSMC2OEN PSMC2OEN
extern volatile unsigned char           PSMC2OEN            __at(0x835);
#ifndef _LIB_BUILD
asm("PSMC2OEN equ 0835h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2OEA                  :1;
        unsigned P2OEB                  :1;
    };
} PSMC2OENbits_t;
extern volatile PSMC2OENbits_t PSMC2OENbits __at(0x835);
// bitfield macros
#define _PSMC2OEN_P2OEA_POSN                                0x0
#define _PSMC2OEN_P2OEA_POSITION                            0x0
#define _PSMC2OEN_P2OEA_SIZE                                0x1
#define _PSMC2OEN_P2OEA_LENGTH                              0x1
#define _PSMC2OEN_P2OEA_MASK                                0x1
#define _PSMC2OEN_P2OEB_POSN                                0x1
#define _PSMC2OEN_P2OEB_POSITION                            0x1
#define _PSMC2OEN_P2OEB_SIZE                                0x1
#define _PSMC2OEN_P2OEB_LENGTH                              0x1
#define _PSMC2OEN_P2OEB_MASK                                0x2

// Register: PSMC2POL
#define PSMC2POL PSMC2POL
extern volatile unsigned char           PSMC2POL            __at(0x836);
#ifndef _LIB_BUILD
asm("PSMC2POL equ 0836h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2POLA                 :1;
        unsigned P2POLB                 :1;
        unsigned                        :4;
        unsigned P2INPOL                :1;
    };
} PSMC2POLbits_t;
extern volatile PSMC2POLbits_t PSMC2POLbits __at(0x836);
// bitfield macros
#define _PSMC2POL_P2POLA_POSN                               0x0
#define _PSMC2POL_P2POLA_POSITION                           0x0
#define _PSMC2POL_P2POLA_SIZE                               0x1
#define _PSMC2POL_P2POLA_LENGTH                             0x1
#define _PSMC2POL_P2POLA_MASK                               0x1
#define _PSMC2POL_P2POLB_POSN                               0x1
#define _PSMC2POL_P2POLB_POSITION                           0x1
#define _PSMC2POL_P2POLB_SIZE                               0x1
#define _PSMC2POL_P2POLB_LENGTH                             0x1
#define _PSMC2POL_P2POLB_MASK                               0x2
#define _PSMC2POL_P2INPOL_POSN                              0x6
#define _PSMC2POL_P2INPOL_POSITION                          0x6
#define _PSMC2POL_P2INPOL_SIZE                              0x1
#define _PSMC2POL_P2INPOL_LENGTH                            0x1
#define _PSMC2POL_P2INPOL_MASK                              0x40

// Register: PSMC2BLNK
#define PSMC2BLNK PSMC2BLNK
extern volatile unsigned char           PSMC2BLNK           __at(0x837);
#ifndef _LIB_BUILD
asm("PSMC2BLNK equ 0837h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2REBM                 :2;
        unsigned                        :2;
        unsigned P2FEBM                 :2;
    };
    struct {
        unsigned P2REBM0                :1;
        unsigned P2REBM1                :1;
        unsigned                        :2;
        unsigned P2FEBM0                :1;
        unsigned P2FEBM1                :1;
    };
} PSMC2BLNKbits_t;
extern volatile PSMC2BLNKbits_t PSMC2BLNKbits __at(0x837);
// bitfield macros
#define _PSMC2BLNK_P2REBM_POSN                              0x0
#define _PSMC2BLNK_P2REBM_POSITION                          0x0
#define _PSMC2BLNK_P2REBM_SIZE                              0x2
#define _PSMC2BLNK_P2REBM_LENGTH                            0x2
#define _PSMC2BLNK_P2REBM_MASK                              0x3
#define _PSMC2BLNK_P2FEBM_POSN                              0x4
#define _PSMC2BLNK_P2FEBM_POSITION                          0x4
#define _PSMC2BLNK_P2FEBM_SIZE                              0x2
#define _PSMC2BLNK_P2FEBM_LENGTH                            0x2
#define _PSMC2BLNK_P2FEBM_MASK                              0x30
#define _PSMC2BLNK_P2REBM0_POSN                             0x0
#define _PSMC2BLNK_P2REBM0_POSITION                         0x0
#define _PSMC2BLNK_P2REBM0_SIZE                             0x1
#define _PSMC2BLNK_P2REBM0_LENGTH                           0x1
#define _PSMC2BLNK_P2REBM0_MASK                             0x1
#define _PSMC2BLNK_P2REBM1_POSN                             0x1
#define _PSMC2BLNK_P2REBM1_POSITION                         0x1
#define _PSMC2BLNK_P2REBM1_SIZE                             0x1
#define _PSMC2BLNK_P2REBM1_LENGTH                           0x1
#define _PSMC2BLNK_P2REBM1_MASK                             0x2
#define _PSMC2BLNK_P2FEBM0_POSN                             0x4
#define _PSMC2BLNK_P2FEBM0_POSITION                         0x4
#define _PSMC2BLNK_P2FEBM0_SIZE                             0x1
#define _PSMC2BLNK_P2FEBM0_LENGTH                           0x1
#define _PSMC2BLNK_P2FEBM0_MASK                             0x10
#define _PSMC2BLNK_P2FEBM1_POSN                             0x5
#define _PSMC2BLNK_P2FEBM1_POSITION                         0x5
#define _PSMC2BLNK_P2FEBM1_SIZE                             0x1
#define _PSMC2BLNK_P2FEBM1_LENGTH                           0x1
#define _PSMC2BLNK_P2FEBM1_MASK                             0x20

// Register: PSMC2REBS
#define PSMC2REBS PSMC2REBS
extern volatile unsigned char           PSMC2REBS           __at(0x838);
#ifndef _LIB_BUILD
asm("PSMC2REBS equ 0838h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P2REBSC1               :1;
        unsigned P2REBSC2               :1;
        unsigned P2REBSC3               :1;
        unsigned                        :3;
        unsigned P2REBSIN               :1;
    };
} PSMC2REBSbits_t;
extern volatile PSMC2REBSbits_t PSMC2REBSbits __at(0x838);
// bitfield macros
#define _PSMC2REBS_P2REBSC1_POSN                            0x1
#define _PSMC2REBS_P2REBSC1_POSITION                        0x1
#define _PSMC2REBS_P2REBSC1_SIZE                            0x1
#define _PSMC2REBS_P2REBSC1_LENGTH                          0x1
#define _PSMC2REBS_P2REBSC1_MASK                            0x2
#define _PSMC2REBS_P2REBSC2_POSN                            0x2
#define _PSMC2REBS_P2REBSC2_POSITION                        0x2
#define _PSMC2REBS_P2REBSC2_SIZE                            0x1
#define _PSMC2REBS_P2REBSC2_LENGTH                          0x1
#define _PSMC2REBS_P2REBSC2_MASK                            0x4
#define _PSMC2REBS_P2REBSC3_POSN                            0x3
#define _PSMC2REBS_P2REBSC3_POSITION                        0x3
#define _PSMC2REBS_P2REBSC3_SIZE                            0x1
#define _PSMC2REBS_P2REBSC3_LENGTH                          0x1
#define _PSMC2REBS_P2REBSC3_MASK                            0x8
#define _PSMC2REBS_P2REBSIN_POSN                            0x7
#define _PSMC2REBS_P2REBSIN_POSITION                        0x7
#define _PSMC2REBS_P2REBSIN_SIZE                            0x1
#define _PSMC2REBS_P2REBSIN_LENGTH                          0x1
#define _PSMC2REBS_P2REBSIN_MASK                            0x80

// Register: PSMC2FEBS
#define PSMC2FEBS PSMC2FEBS
extern volatile unsigned char           PSMC2FEBS           __at(0x839);
#ifndef _LIB_BUILD
asm("PSMC2FEBS equ 0839h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P2FEBSC1               :1;
        unsigned P2FEBSC2               :1;
        unsigned P2FEBSC3               :1;
        unsigned                        :3;
        unsigned P2FEBSIN               :1;
    };
} PSMC2FEBSbits_t;
extern volatile PSMC2FEBSbits_t PSMC2FEBSbits __at(0x839);
// bitfield macros
#define _PSMC2FEBS_P2FEBSC1_POSN                            0x1
#define _PSMC2FEBS_P2FEBSC1_POSITION                        0x1
#define _PSMC2FEBS_P2FEBSC1_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSC1_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSC1_MASK                            0x2
#define _PSMC2FEBS_P2FEBSC2_POSN                            0x2
#define _PSMC2FEBS_P2FEBSC2_POSITION                        0x2
#define _PSMC2FEBS_P2FEBSC2_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSC2_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSC2_MASK                            0x4
#define _PSMC2FEBS_P2FEBSC3_POSN                            0x3
#define _PSMC2FEBS_P2FEBSC3_POSITION                        0x3
#define _PSMC2FEBS_P2FEBSC3_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSC3_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSC3_MASK                            0x8
#define _PSMC2FEBS_P2FEBSIN_POSN                            0x7
#define _PSMC2FEBS_P2FEBSIN_POSITION                        0x7
#define _PSMC2FEBS_P2FEBSIN_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSIN_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSIN_MASK                            0x80

// Register: PSMC2PHS
#define PSMC2PHS PSMC2PHS
extern volatile unsigned char           PSMC2PHS            __at(0x83A);
#ifndef _LIB_BUILD
asm("PSMC2PHS equ 083Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2PHST                 :1;
        unsigned P2PHSC1                :1;
        unsigned P2PHSC2                :1;
        unsigned P2PHSC3                :1;
        unsigned                        :3;
        unsigned P2PHSIN                :1;
    };
} PSMC2PHSbits_t;
extern volatile PSMC2PHSbits_t PSMC2PHSbits __at(0x83A);
// bitfield macros
#define _PSMC2PHS_P2PHST_POSN                               0x0
#define _PSMC2PHS_P2PHST_POSITION                           0x0
#define _PSMC2PHS_P2PHST_SIZE                               0x1
#define _PSMC2PHS_P2PHST_LENGTH                             0x1
#define _PSMC2PHS_P2PHST_MASK                               0x1
#define _PSMC2PHS_P2PHSC1_POSN                              0x1
#define _PSMC2PHS_P2PHSC1_POSITION                          0x1
#define _PSMC2PHS_P2PHSC1_SIZE                              0x1
#define _PSMC2PHS_P2PHSC1_LENGTH                            0x1
#define _PSMC2PHS_P2PHSC1_MASK                              0x2
#define _PSMC2PHS_P2PHSC2_POSN                              0x2
#define _PSMC2PHS_P2PHSC2_POSITION                          0x2
#define _PSMC2PHS_P2PHSC2_SIZE                              0x1
#define _PSMC2PHS_P2PHSC2_LENGTH                            0x1
#define _PSMC2PHS_P2PHSC2_MASK                              0x4
#define _PSMC2PHS_P2PHSC3_POSN                              0x3
#define _PSMC2PHS_P2PHSC3_POSITION                          0x3
#define _PSMC2PHS_P2PHSC3_SIZE                              0x1
#define _PSMC2PHS_P2PHSC3_LENGTH                            0x1
#define _PSMC2PHS_P2PHSC3_MASK                              0x8
#define _PSMC2PHS_P2PHSIN_POSN                              0x7
#define _PSMC2PHS_P2PHSIN_POSITION                          0x7
#define _PSMC2PHS_P2PHSIN_SIZE                              0x1
#define _PSMC2PHS_P2PHSIN_LENGTH                            0x1
#define _PSMC2PHS_P2PHSIN_MASK                              0x80

// Register: PSMC2DCS
#define PSMC2DCS PSMC2DCS
extern volatile unsigned char           PSMC2DCS            __at(0x83B);
#ifndef _LIB_BUILD
asm("PSMC2DCS equ 083Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2DCST                 :1;
        unsigned P2DCSC1                :1;
        unsigned P2DCSC2                :1;
        unsigned P2DCSC3                :1;
        unsigned                        :3;
        unsigned P2DCSIN                :1;
    };
} PSMC2DCSbits_t;
extern volatile PSMC2DCSbits_t PSMC2DCSbits __at(0x83B);
// bitfield macros
#define _PSMC2DCS_P2DCST_POSN                               0x0
#define _PSMC2DCS_P2DCST_POSITION                           0x0
#define _PSMC2DCS_P2DCST_SIZE                               0x1
#define _PSMC2DCS_P2DCST_LENGTH                             0x1
#define _PSMC2DCS_P2DCST_MASK                               0x1
#define _PSMC2DCS_P2DCSC1_POSN                              0x1
#define _PSMC2DCS_P2DCSC1_POSITION                          0x1
#define _PSMC2DCS_P2DCSC1_SIZE                              0x1
#define _PSMC2DCS_P2DCSC1_LENGTH                            0x1
#define _PSMC2DCS_P2DCSC1_MASK                              0x2
#define _PSMC2DCS_P2DCSC2_POSN                              0x2
#define _PSMC2DCS_P2DCSC2_POSITION                          0x2
#define _PSMC2DCS_P2DCSC2_SIZE                              0x1
#define _PSMC2DCS_P2DCSC2_LENGTH                            0x1
#define _PSMC2DCS_P2DCSC2_MASK                              0x4
#define _PSMC2DCS_P2DCSC3_POSN                              0x3
#define _PSMC2DCS_P2DCSC3_POSITION                          0x3
#define _PSMC2DCS_P2DCSC3_SIZE                              0x1
#define _PSMC2DCS_P2DCSC3_LENGTH                            0x1
#define _PSMC2DCS_P2DCSC3_MASK                              0x8
#define _PSMC2DCS_P2DCSIN_POSN                              0x7
#define _PSMC2DCS_P2DCSIN_POSITION                          0x7
#define _PSMC2DCS_P2DCSIN_SIZE                              0x1
#define _PSMC2DCS_P2DCSIN_LENGTH                            0x1
#define _PSMC2DCS_P2DCSIN_MASK                              0x80

// Register: PSMC2PRS
#define PSMC2PRS PSMC2PRS
extern volatile unsigned char           PSMC2PRS            __at(0x83C);
#ifndef _LIB_BUILD
asm("PSMC2PRS equ 083Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2PRST                 :1;
        unsigned P2PRSC1                :1;
        unsigned P2PRSC2                :1;
        unsigned P2PRSC3                :1;
        unsigned                        :3;
        unsigned P2PRSIN                :1;
    };
} PSMC2PRSbits_t;
extern volatile PSMC2PRSbits_t PSMC2PRSbits __at(0x83C);
// bitfield macros
#define _PSMC2PRS_P2PRST_POSN                               0x0
#define _PSMC2PRS_P2PRST_POSITION                           0x0
#define _PSMC2PRS_P2PRST_SIZE                               0x1
#define _PSMC2PRS_P2PRST_LENGTH                             0x1
#define _PSMC2PRS_P2PRST_MASK                               0x1
#define _PSMC2PRS_P2PRSC1_POSN                              0x1
#define _PSMC2PRS_P2PRSC1_POSITION                          0x1
#define _PSMC2PRS_P2PRSC1_SIZE                              0x1
#define _PSMC2PRS_P2PRSC1_LENGTH                            0x1
#define _PSMC2PRS_P2PRSC1_MASK                              0x2
#define _PSMC2PRS_P2PRSC2_POSN                              0x2
#define _PSMC2PRS_P2PRSC2_POSITION                          0x2
#define _PSMC2PRS_P2PRSC2_SIZE                              0x1
#define _PSMC2PRS_P2PRSC2_LENGTH                            0x1
#define _PSMC2PRS_P2PRSC2_MASK                              0x4
#define _PSMC2PRS_P2PRSC3_POSN                              0x3
#define _PSMC2PRS_P2PRSC3_POSITION                          0x3
#define _PSMC2PRS_P2PRSC3_SIZE                              0x1
#define _PSMC2PRS_P2PRSC3_LENGTH                            0x1
#define _PSMC2PRS_P2PRSC3_MASK                              0x8
#define _PSMC2PRS_P2PRSIN_POSN                              0x7
#define _PSMC2PRS_P2PRSIN_POSITION                          0x7
#define _PSMC2PRS_P2PRSIN_SIZE                              0x1
#define _PSMC2PRS_P2PRSIN_LENGTH                            0x1
#define _PSMC2PRS_P2PRSIN_MASK                              0x80

// Register: PSMC2ASDC
#define PSMC2ASDC PSMC2ASDC
extern volatile unsigned char           PSMC2ASDC           __at(0x83D);
#ifndef _LIB_BUILD
asm("PSMC2ASDC equ 083Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2ASDOV                :1;
        unsigned                        :4;
        unsigned P2ARSEN                :1;
        unsigned P2ASDEN                :1;
        unsigned P2ASE                  :1;
    };
} PSMC2ASDCbits_t;
extern volatile PSMC2ASDCbits_t PSMC2ASDCbits __at(0x83D);
// bitfield macros
#define _PSMC2ASDC_P2ASDOV_POSN                             0x0
#define _PSMC2ASDC_P2ASDOV_POSITION                         0x0
#define _PSMC2ASDC_P2ASDOV_SIZE                             0x1
#define _PSMC2ASDC_P2ASDOV_LENGTH                           0x1
#define _PSMC2ASDC_P2ASDOV_MASK                             0x1
#define _PSMC2ASDC_P2ARSEN_POSN                             0x5
#define _PSMC2ASDC_P2ARSEN_POSITION                         0x5
#define _PSMC2ASDC_P2ARSEN_SIZE                             0x1
#define _PSMC2ASDC_P2ARSEN_LENGTH                           0x1
#define _PSMC2ASDC_P2ARSEN_MASK                             0x20
#define _PSMC2ASDC_P2ASDEN_POSN                             0x6
#define _PSMC2ASDC_P2ASDEN_POSITION                         0x6
#define _PSMC2ASDC_P2ASDEN_SIZE                             0x1
#define _PSMC2ASDC_P2ASDEN_LENGTH                           0x1
#define _PSMC2ASDC_P2ASDEN_MASK                             0x40
#define _PSMC2ASDC_P2ASE_POSN                               0x7
#define _PSMC2ASDC_P2ASE_POSITION                           0x7
#define _PSMC2ASDC_P2ASE_SIZE                               0x1
#define _PSMC2ASDC_P2ASE_LENGTH                             0x1
#define _PSMC2ASDC_P2ASE_MASK                               0x80

// Register: PSMC2ASDL
#define PSMC2ASDL PSMC2ASDL
extern volatile unsigned char           PSMC2ASDL           __at(0x83E);
#ifndef _LIB_BUILD
asm("PSMC2ASDL equ 083Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2ASDLA                :1;
        unsigned P2ASDLB                :1;
    };
} PSMC2ASDLbits_t;
extern volatile PSMC2ASDLbits_t PSMC2ASDLbits __at(0x83E);
// bitfield macros
#define _PSMC2ASDL_P2ASDLA_POSN                             0x0
#define _PSMC2ASDL_P2ASDLA_POSITION                         0x0
#define _PSMC2ASDL_P2ASDLA_SIZE                             0x1
#define _PSMC2ASDL_P2ASDLA_LENGTH                           0x1
#define _PSMC2ASDL_P2ASDLA_MASK                             0x1
#define _PSMC2ASDL_P2ASDLB_POSN                             0x1
#define _PSMC2ASDL_P2ASDLB_POSITION                         0x1
#define _PSMC2ASDL_P2ASDLB_SIZE                             0x1
#define _PSMC2ASDL_P2ASDLB_LENGTH                           0x1
#define _PSMC2ASDL_P2ASDLB_MASK                             0x2

// Register: PSMC2ASDS
#define PSMC2ASDS PSMC2ASDS
extern volatile unsigned char           PSMC2ASDS           __at(0x83F);
#ifndef _LIB_BUILD
asm("PSMC2ASDS equ 083Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P2ASDSC1               :1;
        unsigned P2ASDSC2               :1;
        unsigned P2ASDSC3               :1;
        unsigned                        :3;
        unsigned P2ASDSIN               :1;
    };
} PSMC2ASDSbits_t;
extern volatile PSMC2ASDSbits_t PSMC2ASDSbits __at(0x83F);
// bitfield macros
#define _PSMC2ASDS_P2ASDSC1_POSN                            0x1
#define _PSMC2ASDS_P2ASDSC1_POSITION                        0x1
#define _PSMC2ASDS_P2ASDSC1_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSC1_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSC1_MASK                            0x2
#define _PSMC2ASDS_P2ASDSC2_POSN                            0x2
#define _PSMC2ASDS_P2ASDSC2_POSITION                        0x2
#define _PSMC2ASDS_P2ASDSC2_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSC2_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSC2_MASK                            0x4
#define _PSMC2ASDS_P2ASDSC3_POSN                            0x3
#define _PSMC2ASDS_P2ASDSC3_POSITION                        0x3
#define _PSMC2ASDS_P2ASDSC3_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSC3_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSC3_MASK                            0x8
#define _PSMC2ASDS_P2ASDSIN_POSN                            0x7
#define _PSMC2ASDS_P2ASDSIN_POSITION                        0x7
#define _PSMC2ASDS_P2ASDSIN_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSIN_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSIN_MASK                            0x80

// Register: PSMC2INT
#define PSMC2INT PSMC2INT
extern volatile unsigned char           PSMC2INT            __at(0x840);
#ifndef _LIB_BUILD
asm("PSMC2INT equ 0840h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2TPRIF                :1;
        unsigned P2TDCIF                :1;
        unsigned P2TPHIF                :1;
        unsigned P2TOVIF                :1;
        unsigned P2TPRIE                :1;
        unsigned P2TDCIE                :1;
        unsigned P2TPHIE                :1;
        unsigned P2TOVIE                :1;
    };
} PSMC2INTbits_t;
extern volatile PSMC2INTbits_t PSMC2INTbits __at(0x840);
// bitfield macros
#define _PSMC2INT_P2TPRIF_POSN                              0x0
#define _PSMC2INT_P2TPRIF_POSITION                          0x0
#define _PSMC2INT_P2TPRIF_SIZE                              0x1
#define _PSMC2INT_P2TPRIF_LENGTH                            0x1
#define _PSMC2INT_P2TPRIF_MASK                              0x1
#define _PSMC2INT_P2TDCIF_POSN                              0x1
#define _PSMC2INT_P2TDCIF_POSITION                          0x1
#define _PSMC2INT_P2TDCIF_SIZE                              0x1
#define _PSMC2INT_P2TDCIF_LENGTH                            0x1
#define _PSMC2INT_P2TDCIF_MASK                              0x2
#define _PSMC2INT_P2TPHIF_POSN                              0x2
#define _PSMC2INT_P2TPHIF_POSITION                          0x2
#define _PSMC2INT_P2TPHIF_SIZE                              0x1
#define _PSMC2INT_P2TPHIF_LENGTH                            0x1
#define _PSMC2INT_P2TPHIF_MASK                              0x4
#define _PSMC2INT_P2TOVIF_POSN                              0x3
#define _PSMC2INT_P2TOVIF_POSITION                          0x3
#define _PSMC2INT_P2TOVIF_SIZE                              0x1
#define _PSMC2INT_P2TOVIF_LENGTH                            0x1
#define _PSMC2INT_P2TOVIF_MASK                              0x8
#define _PSMC2INT_P2TPRIE_POSN                              0x4
#define _PSMC2INT_P2TPRIE_POSITION                          0x4
#define _PSMC2INT_P2TPRIE_SIZE                              0x1
#define _PSMC2INT_P2TPRIE_LENGTH                            0x1
#define _PSMC2INT_P2TPRIE_MASK                              0x10
#define _PSMC2INT_P2TDCIE_POSN                              0x5
#define _PSMC2INT_P2TDCIE_POSITION                          0x5
#define _PSMC2INT_P2TDCIE_SIZE                              0x1
#define _PSMC2INT_P2TDCIE_LENGTH                            0x1
#define _PSMC2INT_P2TDCIE_MASK                              0x20
#define _PSMC2INT_P2TPHIE_POSN                              0x6
#define _PSMC2INT_P2TPHIE_POSITION                          0x6
#define _PSMC2INT_P2TPHIE_SIZE                              0x1
#define _PSMC2INT_P2TPHIE_LENGTH                            0x1
#define _PSMC2INT_P2TPHIE_MASK                              0x40
#define _PSMC2INT_P2TOVIE_POSN                              0x7
#define _PSMC2INT_P2TOVIE_POSITION                          0x7
#define _PSMC2INT_P2TOVIE_SIZE                              0x1
#define _PSMC2INT_P2TOVIE_LENGTH                            0x1
#define _PSMC2INT_P2TOVIE_MASK                              0x80

// Register: PSMC2PH
#define PSMC2PH PSMC2PH
extern volatile unsigned short          PSMC2PH             __at(0x841);
#ifndef _LIB_BUILD
asm("PSMC2PH equ 0841h");
#endif

// Register: PSMC2PHL
#define PSMC2PHL PSMC2PHL
extern volatile unsigned char           PSMC2PHL            __at(0x841);
#ifndef _LIB_BUILD
asm("PSMC2PHL equ 0841h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PH0               :1;
        unsigned PSMC2PH1               :1;
        unsigned PSMC2PH2               :1;
        unsigned PSMC2PH3               :1;
        unsigned PSMC2PH4               :1;
        unsigned PSMC2PH5               :1;
        unsigned PSMC2PH6               :1;
        unsigned PSMC2PH7               :1;
    };
} PSMC2PHLbits_t;
extern volatile PSMC2PHLbits_t PSMC2PHLbits __at(0x841);
// bitfield macros
#define _PSMC2PHL_PSMC2PH0_POSN                             0x0
#define _PSMC2PHL_PSMC2PH0_POSITION                         0x0
#define _PSMC2PHL_PSMC2PH0_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH0_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH0_MASK                             0x1
#define _PSMC2PHL_PSMC2PH1_POSN                             0x1
#define _PSMC2PHL_PSMC2PH1_POSITION                         0x1
#define _PSMC2PHL_PSMC2PH1_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH1_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH1_MASK                             0x2
#define _PSMC2PHL_PSMC2PH2_POSN                             0x2
#define _PSMC2PHL_PSMC2PH2_POSITION                         0x2
#define _PSMC2PHL_PSMC2PH2_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH2_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH2_MASK                             0x4
#define _PSMC2PHL_PSMC2PH3_POSN                             0x3
#define _PSMC2PHL_PSMC2PH3_POSITION                         0x3
#define _PSMC2PHL_PSMC2PH3_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH3_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH3_MASK                             0x8
#define _PSMC2PHL_PSMC2PH4_POSN                             0x4
#define _PSMC2PHL_PSMC2PH4_POSITION                         0x4
#define _PSMC2PHL_PSMC2PH4_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH4_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH4_MASK                             0x10
#define _PSMC2PHL_PSMC2PH5_POSN                             0x5
#define _PSMC2PHL_PSMC2PH5_POSITION                         0x5
#define _PSMC2PHL_PSMC2PH5_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH5_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH5_MASK                             0x20
#define _PSMC2PHL_PSMC2PH6_POSN                             0x6
#define _PSMC2PHL_PSMC2PH6_POSITION                         0x6
#define _PSMC2PHL_PSMC2PH6_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH6_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH6_MASK                             0x40
#define _PSMC2PHL_PSMC2PH7_POSN                             0x7
#define _PSMC2PHL_PSMC2PH7_POSITION                         0x7
#define _PSMC2PHL_PSMC2PH7_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH7_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH7_MASK                             0x80

// Register: PSMC2PHH
#define PSMC2PHH PSMC2PHH
extern volatile unsigned char           PSMC2PHH            __at(0x842);
#ifndef _LIB_BUILD
asm("PSMC2PHH equ 0842h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PH8               :1;
        unsigned PSMC2PH9               :1;
        unsigned PSMC2PH10              :1;
        unsigned PSMC2PH11              :1;
        unsigned PSMC2PH12              :1;
        unsigned PSMC2PH13              :1;
        unsigned PSMC2PH14              :1;
        unsigned PSMC2PH15              :1;
    };
} PSMC2PHHbits_t;
extern volatile PSMC2PHHbits_t PSMC2PHHbits __at(0x842);
// bitfield macros
#define _PSMC2PHH_PSMC2PH8_POSN                             0x0
#define _PSMC2PHH_PSMC2PH8_POSITION                         0x0
#define _PSMC2PHH_PSMC2PH8_SIZE                             0x1
#define _PSMC2PHH_PSMC2PH8_LENGTH                           0x1
#define _PSMC2PHH_PSMC2PH8_MASK                             0x1
#define _PSMC2PHH_PSMC2PH9_POSN                             0x1
#define _PSMC2PHH_PSMC2PH9_POSITION                         0x1
#define _PSMC2PHH_PSMC2PH9_SIZE                             0x1
#define _PSMC2PHH_PSMC2PH9_LENGTH                           0x1
#define _PSMC2PHH_PSMC2PH9_MASK                             0x2
#define _PSMC2PHH_PSMC2PH10_POSN                            0x2
#define _PSMC2PHH_PSMC2PH10_POSITION                        0x2
#define _PSMC2PHH_PSMC2PH10_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH10_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH10_MASK                            0x4
#define _PSMC2PHH_PSMC2PH11_POSN                            0x3
#define _PSMC2PHH_PSMC2PH11_POSITION                        0x3
#define _PSMC2PHH_PSMC2PH11_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH11_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH11_MASK                            0x8
#define _PSMC2PHH_PSMC2PH12_POSN                            0x4
#define _PSMC2PHH_PSMC2PH12_POSITION                        0x4
#define _PSMC2PHH_PSMC2PH12_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH12_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH12_MASK                            0x10
#define _PSMC2PHH_PSMC2PH13_POSN                            0x5
#define _PSMC2PHH_PSMC2PH13_POSITION                        0x5
#define _PSMC2PHH_PSMC2PH13_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH13_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH13_MASK                            0x20
#define _PSMC2PHH_PSMC2PH14_POSN                            0x6
#define _PSMC2PHH_PSMC2PH14_POSITION                        0x6
#define _PSMC2PHH_PSMC2PH14_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH14_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH14_MASK                            0x40
#define _PSMC2PHH_PSMC2PH15_POSN                            0x7
#define _PSMC2PHH_PSMC2PH15_POSITION                        0x7
#define _PSMC2PHH_PSMC2PH15_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH15_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH15_MASK                            0x80

// Register: PSMC2DC
#define PSMC2DC PSMC2DC
extern volatile unsigned short          PSMC2DC             __at(0x843);
#ifndef _LIB_BUILD
asm("PSMC2DC equ 0843h");
#endif

// Register: PSMC2DCL
#define PSMC2DCL PSMC2DCL
extern volatile unsigned char           PSMC2DCL            __at(0x843);
#ifndef _LIB_BUILD
asm("PSMC2DCL equ 0843h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DC0               :1;
        unsigned PSMC2DC1               :1;
        unsigned PSMC2DC2               :1;
        unsigned PSMC2DC3               :1;
        unsigned PSMC2DC4               :1;
        unsigned PSMC2DC5               :1;
        unsigned PSMC2DC6               :1;
        unsigned PSMC2DC7               :1;
    };
} PSMC2DCLbits_t;
extern volatile PSMC2DCLbits_t PSMC2DCLbits __at(0x843);
// bitfield macros
#define _PSMC2DCL_PSMC2DC0_POSN                             0x0
#define _PSMC2DCL_PSMC2DC0_POSITION                         0x0
#define _PSMC2DCL_PSMC2DC0_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC0_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC0_MASK                             0x1
#define _PSMC2DCL_PSMC2DC1_POSN                             0x1
#define _PSMC2DCL_PSMC2DC1_POSITION                         0x1
#define _PSMC2DCL_PSMC2DC1_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC1_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC1_MASK                             0x2
#define _PSMC2DCL_PSMC2DC2_POSN                             0x2
#define _PSMC2DCL_PSMC2DC2_POSITION                         0x2
#define _PSMC2DCL_PSMC2DC2_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC2_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC2_MASK                             0x4
#define _PSMC2DCL_PSMC2DC3_POSN                             0x3
#define _PSMC2DCL_PSMC2DC3_POSITION                         0x3
#define _PSMC2DCL_PSMC2DC3_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC3_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC3_MASK                             0x8
#define _PSMC2DCL_PSMC2DC4_POSN                             0x4
#define _PSMC2DCL_PSMC2DC4_POSITION                         0x4
#define _PSMC2DCL_PSMC2DC4_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC4_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC4_MASK                             0x10
#define _PSMC2DCL_PSMC2DC5_POSN                             0x5
#define _PSMC2DCL_PSMC2DC5_POSITION                         0x5
#define _PSMC2DCL_PSMC2DC5_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC5_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC5_MASK                             0x20
#define _PSMC2DCL_PSMC2DC6_POSN                             0x6
#define _PSMC2DCL_PSMC2DC6_POSITION                         0x6
#define _PSMC2DCL_PSMC2DC6_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC6_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC6_MASK                             0x40
#define _PSMC2DCL_PSMC2DC7_POSN                             0x7
#define _PSMC2DCL_PSMC2DC7_POSITION                         0x7
#define _PSMC2DCL_PSMC2DC7_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC7_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC7_MASK                             0x80

// Register: PSMC2DCH
#define PSMC2DCH PSMC2DCH
extern volatile unsigned char           PSMC2DCH            __at(0x844);
#ifndef _LIB_BUILD
asm("PSMC2DCH equ 0844h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DC8               :1;
        unsigned PSMC2DC9               :1;
        unsigned PSMC2DC10              :1;
        unsigned PSMC2DC11              :1;
        unsigned PSMC2DC12              :1;
        unsigned PSMC2DC13              :1;
        unsigned PSMC2DC14              :1;
        unsigned PSMC2DC15              :1;
    };
} PSMC2DCHbits_t;
extern volatile PSMC2DCHbits_t PSMC2DCHbits __at(0x844);
// bitfield macros
#define _PSMC2DCH_PSMC2DC8_POSN                             0x0
#define _PSMC2DCH_PSMC2DC8_POSITION                         0x0
#define _PSMC2DCH_PSMC2DC8_SIZE                             0x1
#define _PSMC2DCH_PSMC2DC8_LENGTH                           0x1
#define _PSMC2DCH_PSMC2DC8_MASK                             0x1
#define _PSMC2DCH_PSMC2DC9_POSN                             0x1
#define _PSMC2DCH_PSMC2DC9_POSITION                         0x1
#define _PSMC2DCH_PSMC2DC9_SIZE                             0x1
#define _PSMC2DCH_PSMC2DC9_LENGTH                           0x1
#define _PSMC2DCH_PSMC2DC9_MASK                             0x2
#define _PSMC2DCH_PSMC2DC10_POSN                            0x2
#define _PSMC2DCH_PSMC2DC10_POSITION                        0x2
#define _PSMC2DCH_PSMC2DC10_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC10_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC10_MASK                            0x4
#define _PSMC2DCH_PSMC2DC11_POSN                            0x3
#define _PSMC2DCH_PSMC2DC11_POSITION                        0x3
#define _PSMC2DCH_PSMC2DC11_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC11_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC11_MASK                            0x8
#define _PSMC2DCH_PSMC2DC12_POSN                            0x4
#define _PSMC2DCH_PSMC2DC12_POSITION                        0x4
#define _PSMC2DCH_PSMC2DC12_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC12_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC12_MASK                            0x10
#define _PSMC2DCH_PSMC2DC13_POSN                            0x5
#define _PSMC2DCH_PSMC2DC13_POSITION                        0x5
#define _PSMC2DCH_PSMC2DC13_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC13_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC13_MASK                            0x20
#define _PSMC2DCH_PSMC2DC14_POSN                            0x6
#define _PSMC2DCH_PSMC2DC14_POSITION                        0x6
#define _PSMC2DCH_PSMC2DC14_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC14_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC14_MASK                            0x40
#define _PSMC2DCH_PSMC2DC15_POSN                            0x7
#define _PSMC2DCH_PSMC2DC15_POSITION                        0x7
#define _PSMC2DCH_PSMC2DC15_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC15_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC15_MASK                            0x80

// Register: PSMC2PR
#define PSMC2PR PSMC2PR
extern volatile unsigned short          PSMC2PR             __at(0x845);
#ifndef _LIB_BUILD
asm("PSMC2PR equ 0845h");
#endif

// Register: PSMC2PRL
#define PSMC2PRL PSMC2PRL
extern volatile unsigned char           PSMC2PRL            __at(0x845);
#ifndef _LIB_BUILD
asm("PSMC2PRL equ 0845h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PR0               :1;
        unsigned PSMC2PR1               :1;
        unsigned PSMC2PR2               :1;
        unsigned PSMC2PR3               :1;
        unsigned PSMC2PR4               :1;
        unsigned PSMC2PR5               :1;
        unsigned PSMC2PR6               :1;
        unsigned PSMC2PR7               :1;
    };
} PSMC2PRLbits_t;
extern volatile PSMC2PRLbits_t PSMC2PRLbits __at(0x845);
// bitfield macros
#define _PSMC2PRL_PSMC2PR0_POSN                             0x0
#define _PSMC2PRL_PSMC2PR0_POSITION                         0x0
#define _PSMC2PRL_PSMC2PR0_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR0_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR0_MASK                             0x1
#define _PSMC2PRL_PSMC2PR1_POSN                             0x1
#define _PSMC2PRL_PSMC2PR1_POSITION                         0x1
#define _PSMC2PRL_PSMC2PR1_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR1_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR1_MASK                             0x2
#define _PSMC2PRL_PSMC2PR2_POSN                             0x2
#define _PSMC2PRL_PSMC2PR2_POSITION                         0x2
#define _PSMC2PRL_PSMC2PR2_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR2_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR2_MASK                             0x4
#define _PSMC2PRL_PSMC2PR3_POSN                             0x3
#define _PSMC2PRL_PSMC2PR3_POSITION                         0x3
#define _PSMC2PRL_PSMC2PR3_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR3_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR3_MASK                             0x8
#define _PSMC2PRL_PSMC2PR4_POSN                             0x4
#define _PSMC2PRL_PSMC2PR4_POSITION                         0x4
#define _PSMC2PRL_PSMC2PR4_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR4_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR4_MASK                             0x10
#define _PSMC2PRL_PSMC2PR5_POSN                             0x5
#define _PSMC2PRL_PSMC2PR5_POSITION                         0x5
#define _PSMC2PRL_PSMC2PR5_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR5_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR5_MASK                             0x20
#define _PSMC2PRL_PSMC2PR6_POSN                             0x6
#define _PSMC2PRL_PSMC2PR6_POSITION                         0x6
#define _PSMC2PRL_PSMC2PR6_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR6_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR6_MASK                             0x40
#define _PSMC2PRL_PSMC2PR7_POSN                             0x7
#define _PSMC2PRL_PSMC2PR7_POSITION                         0x7
#define _PSMC2PRL_PSMC2PR7_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR7_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR7_MASK                             0x80

// Register: PSMC2PRH
#define PSMC2PRH PSMC2PRH
extern volatile unsigned char           PSMC2PRH            __at(0x846);
#ifndef _LIB_BUILD
asm("PSMC2PRH equ 0846h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PR8               :1;
        unsigned PSMC2PR9               :1;
        unsigned PSMC2PR10              :1;
        unsigned PSMC2PR11              :1;
        unsigned PSMC2PR12              :1;
        unsigned PSMC2PR13              :1;
        unsigned PSMC2PR14              :1;
        unsigned PSMC2PR15              :1;
    };
} PSMC2PRHbits_t;
extern volatile PSMC2PRHbits_t PSMC2PRHbits __at(0x846);
// bitfield macros
#define _PSMC2PRH_PSMC2PR8_POSN                             0x0
#define _PSMC2PRH_PSMC2PR8_POSITION                         0x0
#define _PSMC2PRH_PSMC2PR8_SIZE                             0x1
#define _PSMC2PRH_PSMC2PR8_LENGTH                           0x1
#define _PSMC2PRH_PSMC2PR8_MASK                             0x1
#define _PSMC2PRH_PSMC2PR9_POSN                             0x1
#define _PSMC2PRH_PSMC2PR9_POSITION                         0x1
#define _PSMC2PRH_PSMC2PR9_SIZE                             0x1
#define _PSMC2PRH_PSMC2PR9_LENGTH                           0x1
#define _PSMC2PRH_PSMC2PR9_MASK                             0x2
#define _PSMC2PRH_PSMC2PR10_POSN                            0x2
#define _PSMC2PRH_PSMC2PR10_POSITION                        0x2
#define _PSMC2PRH_PSMC2PR10_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR10_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR10_MASK                            0x4
#define _PSMC2PRH_PSMC2PR11_POSN                            0x3
#define _PSMC2PRH_PSMC2PR11_POSITION                        0x3
#define _PSMC2PRH_PSMC2PR11_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR11_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR11_MASK                            0x8
#define _PSMC2PRH_PSMC2PR12_POSN                            0x4
#define _PSMC2PRH_PSMC2PR12_POSITION                        0x4
#define _PSMC2PRH_PSMC2PR12_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR12_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR12_MASK                            0x10
#define _PSMC2PRH_PSMC2PR13_POSN                            0x5
#define _PSMC2PRH_PSMC2PR13_POSITION                        0x5
#define _PSMC2PRH_PSMC2PR13_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR13_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR13_MASK                            0x20
#define _PSMC2PRH_PSMC2PR14_POSN                            0x6
#define _PSMC2PRH_PSMC2PR14_POSITION                        0x6
#define _PSMC2PRH_PSMC2PR14_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR14_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR14_MASK                            0x40
#define _PSMC2PRH_PSMC2PR15_POSN                            0x7
#define _PSMC2PRH_PSMC2PR15_POSITION                        0x7
#define _PSMC2PRH_PSMC2PR15_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR15_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR15_MASK                            0x80

// Register: PSMC2TMR
#define PSMC2TMR PSMC2TMR
extern volatile unsigned short          PSMC2TMR            __at(0x847);
#ifndef _LIB_BUILD
asm("PSMC2TMR equ 0847h");
#endif

// Register: PSMC2TMRL
#define PSMC2TMRL PSMC2TMRL
extern volatile unsigned char           PSMC2TMRL           __at(0x847);
#ifndef _LIB_BUILD
asm("PSMC2TMRL equ 0847h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2TMR0              :1;
        unsigned PSMC2TMR1              :1;
        unsigned PSMC2TMR2              :1;
        unsigned PSMC2TMR3              :1;
        unsigned PSMC2TMR4              :1;
        unsigned PSMC2TMR5              :1;
        unsigned PSMC2TMR6              :1;
        unsigned PSMC2TMR7              :1;
    };
} PSMC2TMRLbits_t;
extern volatile PSMC2TMRLbits_t PSMC2TMRLbits __at(0x847);
// bitfield macros
#define _PSMC2TMRL_PSMC2TMR0_POSN                           0x0
#define _PSMC2TMRL_PSMC2TMR0_POSITION                       0x0
#define _PSMC2TMRL_PSMC2TMR0_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR0_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR0_MASK                           0x1
#define _PSMC2TMRL_PSMC2TMR1_POSN                           0x1
#define _PSMC2TMRL_PSMC2TMR1_POSITION                       0x1
#define _PSMC2TMRL_PSMC2TMR1_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR1_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR1_MASK                           0x2
#define _PSMC2TMRL_PSMC2TMR2_POSN                           0x2
#define _PSMC2TMRL_PSMC2TMR2_POSITION                       0x2
#define _PSMC2TMRL_PSMC2TMR2_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR2_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR2_MASK                           0x4
#define _PSMC2TMRL_PSMC2TMR3_POSN                           0x3
#define _PSMC2TMRL_PSMC2TMR3_POSITION                       0x3
#define _PSMC2TMRL_PSMC2TMR3_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR3_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR3_MASK                           0x8
#define _PSMC2TMRL_PSMC2TMR4_POSN                           0x4
#define _PSMC2TMRL_PSMC2TMR4_POSITION                       0x4
#define _PSMC2TMRL_PSMC2TMR4_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR4_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR4_MASK                           0x10
#define _PSMC2TMRL_PSMC2TMR5_POSN                           0x5
#define _PSMC2TMRL_PSMC2TMR5_POSITION                       0x5
#define _PSMC2TMRL_PSMC2TMR5_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR5_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR5_MASK                           0x20
#define _PSMC2TMRL_PSMC2TMR6_POSN                           0x6
#define _PSMC2TMRL_PSMC2TMR6_POSITION                       0x6
#define _PSMC2TMRL_PSMC2TMR6_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR6_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR6_MASK                           0x40
#define _PSMC2TMRL_PSMC2TMR7_POSN                           0x7
#define _PSMC2TMRL_PSMC2TMR7_POSITION                       0x7
#define _PSMC2TMRL_PSMC2TMR7_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR7_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR7_MASK                           0x80

// Register: PSMC2TMRH
#define PSMC2TMRH PSMC2TMRH
extern volatile unsigned char           PSMC2TMRH           __at(0x848);
#ifndef _LIB_BUILD
asm("PSMC2TMRH equ 0848h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2TMR8              :1;
        unsigned PSMC2TMR9              :1;
        unsigned PSMC2TMR10             :1;
        unsigned PSMC2TMR11             :1;
        unsigned PSMC2TMR12             :1;
        unsigned PSMC2TMR13             :1;
        unsigned PSMC2TMR14             :1;
        unsigned PSMC2TMR15             :1;
    };
} PSMC2TMRHbits_t;
extern volatile PSMC2TMRHbits_t PSMC2TMRHbits __at(0x848);
// bitfield macros
#define _PSMC2TMRH_PSMC2TMR8_POSN                           0x0
#define _PSMC2TMRH_PSMC2TMR8_POSITION                       0x0
#define _PSMC2TMRH_PSMC2TMR8_SIZE                           0x1
#define _PSMC2TMRH_PSMC2TMR8_LENGTH                         0x1
#define _PSMC2TMRH_PSMC2TMR8_MASK                           0x1
#define _PSMC2TMRH_PSMC2TMR9_POSN                           0x1
#define _PSMC2TMRH_PSMC2TMR9_POSITION                       0x1
#define _PSMC2TMRH_PSMC2TMR9_SIZE                           0x1
#define _PSMC2TMRH_PSMC2TMR9_LENGTH                         0x1
#define _PSMC2TMRH_PSMC2TMR9_MASK                           0x2
#define _PSMC2TMRH_PSMC2TMR10_POSN                          0x2
#define _PSMC2TMRH_PSMC2TMR10_POSITION                      0x2
#define _PSMC2TMRH_PSMC2TMR10_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR10_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR10_MASK                          0x4
#define _PSMC2TMRH_PSMC2TMR11_POSN                          0x3
#define _PSMC2TMRH_PSMC2TMR11_POSITION                      0x3
#define _PSMC2TMRH_PSMC2TMR11_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR11_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR11_MASK                          0x8
#define _PSMC2TMRH_PSMC2TMR12_POSN                          0x4
#define _PSMC2TMRH_PSMC2TMR12_POSITION                      0x4
#define _PSMC2TMRH_PSMC2TMR12_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR12_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR12_MASK                          0x10
#define _PSMC2TMRH_PSMC2TMR13_POSN                          0x5
#define _PSMC2TMRH_PSMC2TMR13_POSITION                      0x5
#define _PSMC2TMRH_PSMC2TMR13_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR13_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR13_MASK                          0x20
#define _PSMC2TMRH_PSMC2TMR14_POSN                          0x6
#define _PSMC2TMRH_PSMC2TMR14_POSITION                      0x6
#define _PSMC2TMRH_PSMC2TMR14_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR14_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR14_MASK                          0x40
#define _PSMC2TMRH_PSMC2TMR15_POSN                          0x7
#define _PSMC2TMRH_PSMC2TMR15_POSITION                      0x7
#define _PSMC2TMRH_PSMC2TMR15_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR15_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR15_MASK                          0x80

// Register: PSMC2DBR
#define PSMC2DBR PSMC2DBR
extern volatile unsigned char           PSMC2DBR            __at(0x849);
#ifndef _LIB_BUILD
asm("PSMC2DBR equ 0849h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DBR0              :1;
        unsigned PSMC2DBR1              :1;
        unsigned PSMC2DBR2              :1;
        unsigned PSMC2DBR3              :1;
        unsigned PSMC2DBR4              :1;
        unsigned PSMC2DBR5              :1;
        unsigned PSMC2DBR6              :1;
        unsigned PSMC2DBR7              :1;
    };
} PSMC2DBRbits_t;
extern volatile PSMC2DBRbits_t PSMC2DBRbits __at(0x849);
// bitfield macros
#define _PSMC2DBR_PSMC2DBR0_POSN                            0x0
#define _PSMC2DBR_PSMC2DBR0_POSITION                        0x0
#define _PSMC2DBR_PSMC2DBR0_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR0_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR0_MASK                            0x1
#define _PSMC2DBR_PSMC2DBR1_POSN                            0x1
#define _PSMC2DBR_PSMC2DBR1_POSITION                        0x1
#define _PSMC2DBR_PSMC2DBR1_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR1_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR1_MASK                            0x2
#define _PSMC2DBR_PSMC2DBR2_POSN                            0x2
#define _PSMC2DBR_PSMC2DBR2_POSITION                        0x2
#define _PSMC2DBR_PSMC2DBR2_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR2_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR2_MASK                            0x4
#define _PSMC2DBR_PSMC2DBR3_POSN                            0x3
#define _PSMC2DBR_PSMC2DBR3_POSITION                        0x3
#define _PSMC2DBR_PSMC2DBR3_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR3_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR3_MASK                            0x8
#define _PSMC2DBR_PSMC2DBR4_POSN                            0x4
#define _PSMC2DBR_PSMC2DBR4_POSITION                        0x4
#define _PSMC2DBR_PSMC2DBR4_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR4_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR4_MASK                            0x10
#define _PSMC2DBR_PSMC2DBR5_POSN                            0x5
#define _PSMC2DBR_PSMC2DBR5_POSITION                        0x5
#define _PSMC2DBR_PSMC2DBR5_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR5_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR5_MASK                            0x20
#define _PSMC2DBR_PSMC2DBR6_POSN                            0x6
#define _PSMC2DBR_PSMC2DBR6_POSITION                        0x6
#define _PSMC2DBR_PSMC2DBR6_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR6_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR6_MASK                            0x40
#define _PSMC2DBR_PSMC2DBR7_POSN                            0x7
#define _PSMC2DBR_PSMC2DBR7_POSITION                        0x7
#define _PSMC2DBR_PSMC2DBR7_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR7_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR7_MASK                            0x80

// Register: PSMC2DBF
#define PSMC2DBF PSMC2DBF
extern volatile unsigned char           PSMC2DBF            __at(0x84A);
#ifndef _LIB_BUILD
asm("PSMC2DBF equ 084Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DBF0              :1;
        unsigned PSMC2DBF1              :1;
        unsigned PSMC2DBF2              :1;
        unsigned PSMC2DBF3              :1;
        unsigned PSMC2DBF4              :1;
        unsigned PSMC2DBF5              :1;
        unsigned PSMC2DBF6              :1;
        unsigned PSMC2DBF7              :1;
    };
} PSMC2DBFbits_t;
extern volatile PSMC2DBFbits_t PSMC2DBFbits __at(0x84A);
// bitfield macros
#define _PSMC2DBF_PSMC2DBF0_POSN                            0x0
#define _PSMC2DBF_PSMC2DBF0_POSITION                        0x0
#define _PSMC2DBF_PSMC2DBF0_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF0_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF0_MASK                            0x1
#define _PSMC2DBF_PSMC2DBF1_POSN                            0x1
#define _PSMC2DBF_PSMC2DBF1_POSITION                        0x1
#define _PSMC2DBF_PSMC2DBF1_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF1_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF1_MASK                            0x2
#define _PSMC2DBF_PSMC2DBF2_POSN                            0x2
#define _PSMC2DBF_PSMC2DBF2_POSITION                        0x2
#define _PSMC2DBF_PSMC2DBF2_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF2_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF2_MASK                            0x4
#define _PSMC2DBF_PSMC2DBF3_POSN                            0x3
#define _PSMC2DBF_PSMC2DBF3_POSITION                        0x3
#define _PSMC2DBF_PSMC2DBF3_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF3_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF3_MASK                            0x8
#define _PSMC2DBF_PSMC2DBF4_POSN                            0x4
#define _PSMC2DBF_PSMC2DBF4_POSITION                        0x4
#define _PSMC2DBF_PSMC2DBF4_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF4_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF4_MASK                            0x10
#define _PSMC2DBF_PSMC2DBF5_POSN                            0x5
#define _PSMC2DBF_PSMC2DBF5_POSITION                        0x5
#define _PSMC2DBF_PSMC2DBF5_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF5_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF5_MASK                            0x20
#define _PSMC2DBF_PSMC2DBF6_POSN                            0x6
#define _PSMC2DBF_PSMC2DBF6_POSITION                        0x6
#define _PSMC2DBF_PSMC2DBF6_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF6_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF6_MASK                            0x40
#define _PSMC2DBF_PSMC2DBF7_POSN                            0x7
#define _PSMC2DBF_PSMC2DBF7_POSITION                        0x7
#define _PSMC2DBF_PSMC2DBF7_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF7_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF7_MASK                            0x80

// Register: PSMC2BLKR
#define PSMC2BLKR PSMC2BLKR
extern volatile unsigned char           PSMC2BLKR           __at(0x84B);
#ifndef _LIB_BUILD
asm("PSMC2BLKR equ 084Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2BLKR0             :1;
        unsigned PSMC2BLKR1             :1;
        unsigned PSMC2BLKR2             :1;
        unsigned PSMC2BLKR3             :1;
        unsigned PSMC2BLKR4             :1;
        unsigned PSMC2BLKR5             :1;
        unsigned PSMC2BLKR6             :1;
        unsigned PSMC2BLKR7             :1;
    };
} PSMC2BLKRbits_t;
extern volatile PSMC2BLKRbits_t PSMC2BLKRbits __at(0x84B);
// bitfield macros
#define _PSMC2BLKR_PSMC2BLKR0_POSN                          0x0
#define _PSMC2BLKR_PSMC2BLKR0_POSITION                      0x0
#define _PSMC2BLKR_PSMC2BLKR0_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR0_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR0_MASK                          0x1
#define _PSMC2BLKR_PSMC2BLKR1_POSN                          0x1
#define _PSMC2BLKR_PSMC2BLKR1_POSITION                      0x1
#define _PSMC2BLKR_PSMC2BLKR1_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR1_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR1_MASK                          0x2
#define _PSMC2BLKR_PSMC2BLKR2_POSN                          0x2
#define _PSMC2BLKR_PSMC2BLKR2_POSITION                      0x2
#define _PSMC2BLKR_PSMC2BLKR2_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR2_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR2_MASK                          0x4
#define _PSMC2BLKR_PSMC2BLKR3_POSN                          0x3
#define _PSMC2BLKR_PSMC2BLKR3_POSITION                      0x3
#define _PSMC2BLKR_PSMC2BLKR3_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR3_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR3_MASK                          0x8
#define _PSMC2BLKR_PSMC2BLKR4_POSN                          0x4
#define _PSMC2BLKR_PSMC2BLKR4_POSITION                      0x4
#define _PSMC2BLKR_PSMC2BLKR4_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR4_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR4_MASK                          0x10
#define _PSMC2BLKR_PSMC2BLKR5_POSN                          0x5
#define _PSMC2BLKR_PSMC2BLKR5_POSITION                      0x5
#define _PSMC2BLKR_PSMC2BLKR5_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR5_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR5_MASK                          0x20
#define _PSMC2BLKR_PSMC2BLKR6_POSN                          0x6
#define _PSMC2BLKR_PSMC2BLKR6_POSITION                      0x6
#define _PSMC2BLKR_PSMC2BLKR6_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR6_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR6_MASK                          0x40
#define _PSMC2BLKR_PSMC2BLKR7_POSN                          0x7
#define _PSMC2BLKR_PSMC2BLKR7_POSITION                      0x7
#define _PSMC2BLKR_PSMC2BLKR7_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR7_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR7_MASK                          0x80

// Register: PSMC2BLKF
#define PSMC2BLKF PSMC2BLKF
extern volatile unsigned char           PSMC2BLKF           __at(0x84C);
#ifndef _LIB_BUILD
asm("PSMC2BLKF equ 084Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2BLKF0             :1;
        unsigned PSMC2BLKF1             :1;
        unsigned PSMC2BLKF2             :1;
        unsigned PSMC2BLKF3             :1;
        unsigned PSMC2BLKF4             :1;
        unsigned PSMC2BLKF5             :1;
        unsigned PSMC2BLKF6             :1;
        unsigned PSMC2BLKF7             :1;
    };
} PSMC2BLKFbits_t;
extern volatile PSMC2BLKFbits_t PSMC2BLKFbits __at(0x84C);
// bitfield macros
#define _PSMC2BLKF_PSMC2BLKF0_POSN                          0x0
#define _PSMC2BLKF_PSMC2BLKF0_POSITION                      0x0
#define _PSMC2BLKF_PSMC2BLKF0_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF0_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF0_MASK                          0x1
#define _PSMC2BLKF_PSMC2BLKF1_POSN                          0x1
#define _PSMC2BLKF_PSMC2BLKF1_POSITION                      0x1
#define _PSMC2BLKF_PSMC2BLKF1_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF1_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF1_MASK                          0x2
#define _PSMC2BLKF_PSMC2BLKF2_POSN                          0x2
#define _PSMC2BLKF_PSMC2BLKF2_POSITION                      0x2
#define _PSMC2BLKF_PSMC2BLKF2_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF2_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF2_MASK                          0x4
#define _PSMC2BLKF_PSMC2BLKF3_POSN                          0x3
#define _PSMC2BLKF_PSMC2BLKF3_POSITION                      0x3
#define _PSMC2BLKF_PSMC2BLKF3_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF3_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF3_MASK                          0x8
#define _PSMC2BLKF_PSMC2BLKF4_POSN                          0x4
#define _PSMC2BLKF_PSMC2BLKF4_POSITION                      0x4
#define _PSMC2BLKF_PSMC2BLKF4_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF4_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF4_MASK                          0x10
#define _PSMC2BLKF_PSMC2BLKF5_POSN                          0x5
#define _PSMC2BLKF_PSMC2BLKF5_POSITION                      0x5
#define _PSMC2BLKF_PSMC2BLKF5_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF5_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF5_MASK                          0x20
#define _PSMC2BLKF_PSMC2BLKF6_POSN                          0x6
#define _PSMC2BLKF_PSMC2BLKF6_POSITION                      0x6
#define _PSMC2BLKF_PSMC2BLKF6_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF6_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF6_MASK                          0x40
#define _PSMC2BLKF_PSMC2BLKF7_POSN                          0x7
#define _PSMC2BLKF_PSMC2BLKF7_POSITION                      0x7
#define _PSMC2BLKF_PSMC2BLKF7_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF7_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF7_MASK                          0x80

// Register: PSMC2FFA
#define PSMC2FFA PSMC2FFA
extern volatile unsigned char           PSMC2FFA            __at(0x84D);
#ifndef _LIB_BUILD
asm("PSMC2FFA equ 084Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2FFA0              :1;
        unsigned PSMC2FFA1              :1;
        unsigned PSMC2FFA2              :1;
        unsigned PSMC2FFA3              :1;
    };
} PSMC2FFAbits_t;
extern volatile PSMC2FFAbits_t PSMC2FFAbits __at(0x84D);
// bitfield macros
#define _PSMC2FFA_PSMC2FFA0_POSN                            0x0
#define _PSMC2FFA_PSMC2FFA0_POSITION                        0x0
#define _PSMC2FFA_PSMC2FFA0_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA0_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA0_MASK                            0x1
#define _PSMC2FFA_PSMC2FFA1_POSN                            0x1
#define _PSMC2FFA_PSMC2FFA1_POSITION                        0x1
#define _PSMC2FFA_PSMC2FFA1_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA1_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA1_MASK                            0x2
#define _PSMC2FFA_PSMC2FFA2_POSN                            0x2
#define _PSMC2FFA_PSMC2FFA2_POSITION                        0x2
#define _PSMC2FFA_PSMC2FFA2_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA2_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA2_MASK                            0x4
#define _PSMC2FFA_PSMC2FFA3_POSN                            0x3
#define _PSMC2FFA_PSMC2FFA3_POSITION                        0x3
#define _PSMC2FFA_PSMC2FFA3_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA3_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA3_MASK                            0x8

// Register: PSMC2STR0
#define PSMC2STR0 PSMC2STR0
extern volatile unsigned char           PSMC2STR0           __at(0x84E);
#ifndef _LIB_BUILD
asm("PSMC2STR0 equ 084Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2STRA                 :1;
        unsigned P2STRB                 :1;
    };
} PSMC2STR0bits_t;
extern volatile PSMC2STR0bits_t PSMC2STR0bits __at(0x84E);
// bitfield macros
#define _PSMC2STR0_P2STRA_POSN                              0x0
#define _PSMC2STR0_P2STRA_POSITION                          0x0
#define _PSMC2STR0_P2STRA_SIZE                              0x1
#define _PSMC2STR0_P2STRA_LENGTH                            0x1
#define _PSMC2STR0_P2STRA_MASK                              0x1
#define _PSMC2STR0_P2STRB_POSN                              0x1
#define _PSMC2STR0_P2STRB_POSITION                          0x1
#define _PSMC2STR0_P2STRB_SIZE                              0x1
#define _PSMC2STR0_P2STRB_LENGTH                            0x1
#define _PSMC2STR0_P2STRB_MASK                              0x2

// Register: PSMC2STR1
#define PSMC2STR1 PSMC2STR1
extern volatile unsigned char           PSMC2STR1           __at(0x84F);
#ifndef _LIB_BUILD
asm("PSMC2STR1 equ 084Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2HSMEN                :1;
        unsigned P2LSMEN                :1;
        unsigned                        :5;
        unsigned P2SSYNC                :1;
    };
} PSMC2STR1bits_t;
extern volatile PSMC2STR1bits_t PSMC2STR1bits __at(0x84F);
// bitfield macros
#define _PSMC2STR1_P2HSMEN_POSN                             0x0
#define _PSMC2STR1_P2HSMEN_POSITION                         0x0
#define _PSMC2STR1_P2HSMEN_SIZE                             0x1
#define _PSMC2STR1_P2HSMEN_LENGTH                           0x1
#define _PSMC2STR1_P2HSMEN_MASK                             0x1
#define _PSMC2STR1_P2LSMEN_POSN                             0x1
#define _PSMC2STR1_P2LSMEN_POSITION                         0x1
#define _PSMC2STR1_P2LSMEN_SIZE                             0x1
#define _PSMC2STR1_P2LSMEN_LENGTH                           0x1
#define _PSMC2STR1_P2LSMEN_MASK                             0x2
#define _PSMC2STR1_P2SSYNC_POSN                             0x7
#define _PSMC2STR1_P2SSYNC_POSITION                         0x7
#define _PSMC2STR1_P2SSYNC_SIZE                             0x1
#define _PSMC2STR1_P2SSYNC_LENGTH                           0x1
#define _PSMC2STR1_P2SSYNC_MASK                             0x80

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
// BAUD1CON<ABDEN>
extern volatile __bit                   ABDEN               __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUD1CON,0)
// BAUD1CON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0xCFF);	// @ (0x19F * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUD1CON,7)
// SSPCON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x10B5);	// @ (0x216 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x10B4);	// @ (0x216 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x10B6);	// @ (0x216 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSPCON2,6)
// SSPCON3<ACKTIM>
extern volatile __bit                   ACKTIM              __at(0x10BF);	// @ (0x217 * 8 + 7)
#define                                 ACKTIM_bit          _BIT_ACCESS(SSPCON3,7)
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
// RC1STA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RC1STA,3)
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
// ADCON1<ADNREF>
extern volatile __bit                   ADNREF              __at(0x4F2);	// @ (0x9E * 8 + 2)
#define                                 ADNREF_bit          _BIT_ACCESS(ADCON1,2)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON1<ADPREF0>
extern volatile __bit                   ADPREF0             __at(0x4F0);	// @ (0x9E * 8 + 0)
#define                                 ADPREF0_bit         _BIT_ACCESS(ADCON1,0)
// ADCON1<ADPREF1>
extern volatile __bit                   ADPREF1             __at(0x4F1);	// @ (0x9E * 8 + 1)
#define                                 ADPREF1_bit         _BIT_ACCESS(ADCON1,1)
// ADCON0<ADRMD>
extern volatile __bit                   ADRMD               __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 ADRMD_bit           _BIT_ACCESS(ADCON0,7)
// SSPCON3<AHEN>
extern volatile __bit                   AHEN                __at(0x10B9);	// @ (0x217 * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSPCON3,1)
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
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR2,3)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x10A0);	// @ (0x214 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// SSPCON3<BOEN>
extern volatile __bit                   BOEN                __at(0x10BC);	// @ (0x217 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSPCON3,4)
// BORCON<BORFS>
extern volatile __bit                   BORFS               __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 BORFS_bit           _BIT_ACCESS(BORCON,6)
// BORCON<BORRDY>
extern volatile __bit                   BORRDY              __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BORRDY_bit          _BIT_ACCESS(BORCON,0)
// BAUD1CON<BRG16>
extern volatile __bit                   BRG16               __at(0xCFB);	// @ (0x19F * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUD1CON,3)
// TX1STA<BRGH>
extern volatile __bit                   BRGH                __at(0xCF2);	// @ (0x19E * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TX1STA,2)
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
extern volatile __bit                   C1PCH0              __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 C1PCH0_bit          _BIT_ACCESS(CM1CON1,3)
// CM1CON1<C1PCH1>
extern volatile __bit                   C1PCH1              __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 C1PCH1_bit          _BIT_ACCESS(CM1CON1,4)
// CM1CON1<C1PCH2>
extern volatile __bit                   C1PCH2              __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 C1PCH2_bit          _BIT_ACCESS(CM1CON1,5)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 C1SYNC_bit          _BIT_ACCESS(CM1CON0,0)
// CM1CON0<C1ZLF>
extern volatile __bit                   C1ZLF               __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 C1ZLF_bit           _BIT_ACCESS(CM1CON0,3)
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
// APFCON<C2OUTSEL>
extern volatile __bit                   C2OUTSEL            __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 C2OUTSEL_bit        _BIT_ACCESS(APFCON,7)
// CM2CON1<C2PCH0>
extern volatile __bit                   C2PCH0              __at(0x8A3);	// @ (0x114 * 8 + 3)
#define                                 C2PCH0_bit          _BIT_ACCESS(CM2CON1,3)
// CM2CON1<C2PCH1>
extern volatile __bit                   C2PCH1              __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 C2PCH1_bit          _BIT_ACCESS(CM2CON1,4)
// CM2CON1<C2PCH2>
extern volatile __bit                   C2PCH2              __at(0x8A5);	// @ (0x114 * 8 + 5)
#define                                 C2PCH2_bit          _BIT_ACCESS(CM2CON1,5)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x89C);	// @ (0x113 * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 C2SP_bit            _BIT_ACCESS(CM2CON0,2)
// CM2CON0<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON0,0)
// CM2CON0<C2ZLF>
extern volatile __bit                   C2ZLF               __at(0x89B);	// @ (0x113 * 8 + 3)
#define                                 C2ZLF_bit           _BIT_ACCESS(CM2CON0,3)
// CM3CON0<C3HYS>
extern volatile __bit                   C3HYS               __at(0x8F1);	// @ (0x11E * 8 + 1)
#define                                 C3HYS_bit           _BIT_ACCESS(CM3CON0,1)
// PIE2<C3IE>
extern volatile __bit                   C3IE                __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 C3IE_bit            _BIT_ACCESS(PIE2,1)
// PIR2<C3IF>
extern volatile __bit                   C3IF                __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 C3IF_bit            _BIT_ACCESS(PIR2,1)
// CM3CON1<C3INTN>
extern volatile __bit                   C3INTN              __at(0x8FE);	// @ (0x11F * 8 + 6)
#define                                 C3INTN_bit          _BIT_ACCESS(CM3CON1,6)
// CM3CON1<C3INTP>
extern volatile __bit                   C3INTP              __at(0x8FF);	// @ (0x11F * 8 + 7)
#define                                 C3INTP_bit          _BIT_ACCESS(CM3CON1,7)
// CM3CON1<C3NCH0>
extern volatile __bit                   C3NCH0              __at(0x8F8);	// @ (0x11F * 8 + 0)
#define                                 C3NCH0_bit          _BIT_ACCESS(CM3CON1,0)
// CM3CON1<C3NCH1>
extern volatile __bit                   C3NCH1              __at(0x8F9);	// @ (0x11F * 8 + 1)
#define                                 C3NCH1_bit          _BIT_ACCESS(CM3CON1,1)
// CM3CON1<C3NCH2>
extern volatile __bit                   C3NCH2              __at(0x8FA);	// @ (0x11F * 8 + 2)
#define                                 C3NCH2_bit          _BIT_ACCESS(CM3CON1,2)
// CM3CON0<C3OE>
extern volatile __bit                   C3OE                __at(0x8F5);	// @ (0x11E * 8 + 5)
#define                                 C3OE_bit            _BIT_ACCESS(CM3CON0,5)
// CM3CON0<C3ON>
extern volatile __bit                   C3ON                __at(0x8F7);	// @ (0x11E * 8 + 7)
#define                                 C3ON_bit            _BIT_ACCESS(CM3CON0,7)
// CM3CON0<C3OUT>
extern volatile __bit                   C3OUT               __at(0x8F6);	// @ (0x11E * 8 + 6)
#define                                 C3OUT_bit           _BIT_ACCESS(CM3CON0,6)
// CM3CON1<C3PCH0>
extern volatile __bit                   C3PCH0              __at(0x8FB);	// @ (0x11F * 8 + 3)
#define                                 C3PCH0_bit          _BIT_ACCESS(CM3CON1,3)
// CM3CON1<C3PCH1>
extern volatile __bit                   C3PCH1              __at(0x8FC);	// @ (0x11F * 8 + 4)
#define                                 C3PCH1_bit          _BIT_ACCESS(CM3CON1,4)
// CM3CON1<C3PCH2>
extern volatile __bit                   C3PCH2              __at(0x8FD);	// @ (0x11F * 8 + 5)
#define                                 C3PCH2_bit          _BIT_ACCESS(CM3CON1,5)
// CM3CON0<C3POL>
extern volatile __bit                   C3POL               __at(0x8F4);	// @ (0x11E * 8 + 4)
#define                                 C3POL_bit           _BIT_ACCESS(CM3CON0,4)
// CM3CON0<C3SP>
extern volatile __bit                   C3SP                __at(0x8F2);	// @ (0x11E * 8 + 2)
#define                                 C3SP_bit            _BIT_ACCESS(CM3CON0,2)
// CM3CON0<C3SYNC>
extern volatile __bit                   C3SYNC              __at(0x8F0);	// @ (0x11E * 8 + 0)
#define                                 C3SYNC_bit          _BIT_ACCESS(CM3CON0,0)
// CM3CON0<C3ZLF>
extern volatile __bit                   C3ZLF               __at(0x8F3);	// @ (0x11E * 8 + 3)
#define                                 C3ZLF_bit           _BIT_ACCESS(CM3CON0,3)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
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
// APFCON<CCP1SEL>
extern volatile __bit                   CCP1SEL             __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 CCP1SEL_bit         _BIT_ACCESS(APFCON,6)
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
// FVRCON<CDAFVR0>
extern volatile __bit                   CDAFVR0             __at(0x8BA);	// @ (0x117 * 8 + 2)
#define                                 CDAFVR0_bit         _BIT_ACCESS(FVRCON,2)
// FVRCON<CDAFVR1>
extern volatile __bit                   CDAFVR1             __at(0x8BB);	// @ (0x117 * 8 + 3)
#define                                 CDAFVR1_bit         _BIT_ACCESS(FVRCON,3)
// EECON1<CFGS>
extern volatile __bit                   CFGS                __at(0xCAE);	// @ (0x195 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(EECON1,6)
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
// ADCON2<CHSN0>
extern volatile __bit                   CHSN0               __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 CHSN0_bit           _BIT_ACCESS(ADCON2,0)
// ADCON2<CHSN1>
extern volatile __bit                   CHSN1               __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 CHSN1_bit           _BIT_ACCESS(ADCON2,1)
// ADCON2<CHSN2>
extern volatile __bit                   CHSN2               __at(0x4FA);	// @ (0x9F * 8 + 2)
#define                                 CHSN2_bit           _BIT_ACCESS(ADCON2,2)
// ADCON2<CHSN3>
extern volatile __bit                   CHSN3               __at(0x4FB);	// @ (0x9F * 8 + 3)
#define                                 CHSN3_bit           _BIT_ACCESS(ADCON2,3)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x10A6);	// @ (0x214 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON1<CKP>
extern volatile __bit                   CKP                 __at(0x10AC);	// @ (0x215 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON1,4)
// CLKRCON<CLKRDC0>
extern volatile __bit                   CLKRDC0             __at(0x28D3);	// @ (0x51A * 8 + 3)
#define                                 CLKRDC0_bit         _BIT_ACCESS(CLKRCON,3)
// CLKRCON<CLKRDC1>
extern volatile __bit                   CLKRDC1             __at(0x28D4);	// @ (0x51A * 8 + 4)
#define                                 CLKRDC1_bit         _BIT_ACCESS(CLKRCON,4)
// CLKRCON<CLKRDIV0>
extern volatile __bit                   CLKRDIV0            __at(0x28D0);	// @ (0x51A * 8 + 0)
#define                                 CLKRDIV0_bit        _BIT_ACCESS(CLKRCON,0)
// CLKRCON<CLKRDIV1>
extern volatile __bit                   CLKRDIV1            __at(0x28D1);	// @ (0x51A * 8 + 1)
#define                                 CLKRDIV1_bit        _BIT_ACCESS(CLKRCON,1)
// CLKRCON<CLKRDIV2>
extern volatile __bit                   CLKRDIV2            __at(0x28D2);	// @ (0x51A * 8 + 2)
#define                                 CLKRDIV2_bit        _BIT_ACCESS(CLKRCON,2)
// CLKRCON<CLKREN>
extern volatile __bit                   CLKREN              __at(0x28D7);	// @ (0x51A * 8 + 7)
#define                                 CLKREN_bit          _BIT_ACCESS(CLKRCON,7)
// CLKRCON<CLKROE>
extern volatile __bit                   CLKROE              __at(0x28D6);	// @ (0x51A * 8 + 6)
#define                                 CLKROE_bit          _BIT_ACCESS(CLKRCON,6)
// CLKRCON<CLKRSLR>
extern volatile __bit                   CLKRSLR             __at(0x28D5);	// @ (0x51A * 8 + 5)
#define                                 CLKRSLR_bit         _BIT_ACCESS(CLKRCON,5)
// RC1STA<CREN>
extern volatile __bit                   CREN                __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RC1STA,4)
// TX1STA<CSRC>
extern volatile __bit                   CSRC                __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TX1STA,7)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// DACCON0<DACEN>
extern volatile __bit                   DACEN               __at(0x8C7);	// @ (0x118 * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(DACCON0,7)
// DACCON0<DACNSS>
extern volatile __bit                   DACNSS              __at(0x8C0);	// @ (0x118 * 8 + 0)
#define                                 DACNSS_bit          _BIT_ACCESS(DACCON0,0)
// DACCON0<DACOE1>
extern volatile __bit                   DACOE1              __at(0x8C5);	// @ (0x118 * 8 + 5)
#define                                 DACOE1_bit          _BIT_ACCESS(DACCON0,5)
// DACCON0<DACOE2>
extern volatile __bit                   DACOE2              __at(0x8C4);	// @ (0x118 * 8 + 4)
#define                                 DACOE2_bit          _BIT_ACCESS(DACCON0,4)
// DACCON0<DACPSS0>
extern volatile __bit                   DACPSS0             __at(0x8C2);	// @ (0x118 * 8 + 2)
#define                                 DACPSS0_bit         _BIT_ACCESS(DACCON0,2)
// DACCON0<DACPSS1>
extern volatile __bit                   DACPSS1             __at(0x8C3);	// @ (0x118 * 8 + 3)
#define                                 DACPSS1_bit         _BIT_ACCESS(DACCON0,3)
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
// DACCON1<DACR5>
extern volatile __bit                   DACR5               __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 DACR5_bit           _BIT_ACCESS(DACCON1,5)
// DACCON1<DACR6>
extern volatile __bit                   DACR6               __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 DACR6_bit           _BIT_ACCESS(DACCON1,6)
// DACCON1<DACR7>
extern volatile __bit                   DACR7               __at(0x8CF);	// @ (0x119 * 8 + 7)
#define                                 DACR7_bit           _BIT_ACCESS(DACCON1,7)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
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
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// SSPCON3<DHEN>
extern volatile __bit                   DHEN                __at(0x10B8);	// @ (0x217 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSPCON3,0)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x10A5);	// @ (0x214 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// PIE2<EEIE>
extern volatile __bit                   EEIE                __at(0x494);	// @ (0x92 * 8 + 4)
#define                                 EEIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<EEIF>
extern volatile __bit                   EEIF                __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 EEIF_bit            _BIT_ACCESS(PIR2,4)
// EECON1<EEPGD>
extern volatile __bit                   EEPGD               __at(0xCAF);	// @ (0x195 * 8 + 7)
#define                                 EEPGD_bit           _BIT_ACCESS(EECON1,7)
// RC1STA<FERR>
extern volatile __bit                   FERR                __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RC1STA,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// SSPCON2<GCEN>
extern volatile __bit                   GCEN                __at(0x10B7);	// @ (0x216 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSPCON2,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// OSCSTAT<HFIOFL>
extern volatile __bit                   HFIOFL              __at(0x4D3);	// @ (0x9A * 8 + 3)
#define                                 HFIOFL_bit          _BIT_ACCESS(OSCSTAT,3)
// OSCSTAT<HFIOFR>
extern volatile __bit                   HFIOFR              __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 HFIOFR_bit          _BIT_ACCESS(OSCSTAT,4)
// OSCSTAT<HFIOFS>
extern volatile __bit                   HFIOFS              __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 HFIOFS_bit          _BIT_ACCESS(OSCSTAT,0)
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
// INLVLA<INLVLA6>
extern volatile __bit                   INLVLA6             __at(0x1C66);	// @ (0x38C * 8 + 6)
#define                                 INLVLA6_bit         _BIT_ACCESS(INLVLA,6)
// INLVLA<INLVLA7>
extern volatile __bit                   INLVLA7             __at(0x1C67);	// @ (0x38C * 8 + 7)
#define                                 INLVLA7_bit         _BIT_ACCESS(INLVLA,7)
// INLVLB<INLVLB0>
extern volatile __bit                   INLVLB0             __at(0x1C68);	// @ (0x38D * 8 + 0)
#define                                 INLVLB0_bit         _BIT_ACCESS(INLVLB,0)
// INLVLB<INLVLB1>
extern volatile __bit                   INLVLB1             __at(0x1C69);	// @ (0x38D * 8 + 1)
#define                                 INLVLB1_bit         _BIT_ACCESS(INLVLB,1)
// INLVLB<INLVLB2>
extern volatile __bit                   INLVLB2             __at(0x1C6A);	// @ (0x38D * 8 + 2)
#define                                 INLVLB2_bit         _BIT_ACCESS(INLVLB,2)
// INLVLB<INLVLB3>
extern volatile __bit                   INLVLB3             __at(0x1C6B);	// @ (0x38D * 8 + 3)
#define                                 INLVLB3_bit         _BIT_ACCESS(INLVLB,3)
// INLVLB<INLVLB4>
extern volatile __bit                   INLVLB4             __at(0x1C6C);	// @ (0x38D * 8 + 4)
#define                                 INLVLB4_bit         _BIT_ACCESS(INLVLB,4)
// INLVLB<INLVLB5>
extern volatile __bit                   INLVLB5             __at(0x1C6D);	// @ (0x38D * 8 + 5)
#define                                 INLVLB5_bit         _BIT_ACCESS(INLVLB,5)
// INLVLB<INLVLB6>
extern volatile __bit                   INLVLB6             __at(0x1C6E);	// @ (0x38D * 8 + 6)
#define                                 INLVLB6_bit         _BIT_ACCESS(INLVLB,6)
// INLVLB<INLVLB7>
extern volatile __bit                   INLVLB7             __at(0x1C6F);	// @ (0x38D * 8 + 7)
#define                                 INLVLB7_bit         _BIT_ACCESS(INLVLB,7)
// INLVLC<INLVLC0>
extern volatile __bit                   INLVLC0             __at(0x1C70);	// @ (0x38E * 8 + 0)
#define                                 INLVLC0_bit         _BIT_ACCESS(INLVLC,0)
// INLVLC<INLVLC1>
extern volatile __bit                   INLVLC1             __at(0x1C71);	// @ (0x38E * 8 + 1)
#define                                 INLVLC1_bit         _BIT_ACCESS(INLVLC,1)
// INLVLC<INLVLC2>
extern volatile __bit                   INLVLC2             __at(0x1C72);	// @ (0x38E * 8 + 2)
#define                                 INLVLC2_bit         _BIT_ACCESS(INLVLC,2)
// INLVLC<INLVLC3>
extern volatile __bit                   INLVLC3             __at(0x1C73);	// @ (0x38E * 8 + 3)
#define                                 INLVLC3_bit         _BIT_ACCESS(INLVLC,3)
// INLVLC<INLVLC4>
extern volatile __bit                   INLVLC4             __at(0x1C74);	// @ (0x38E * 8 + 4)
#define                                 INLVLC4_bit         _BIT_ACCESS(INLVLC,4)
// INLVLC<INLVLC5>
extern volatile __bit                   INLVLC5             __at(0x1C75);	// @ (0x38E * 8 + 5)
#define                                 INLVLC5_bit         _BIT_ACCESS(INLVLC,5)
// INLVLC<INLVLC6>
extern volatile __bit                   INLVLC6             __at(0x1C76);	// @ (0x38E * 8 + 6)
#define                                 INLVLC6_bit         _BIT_ACCESS(INLVLC,6)
// INLVLC<INLVLC7>
extern volatile __bit                   INLVLC7             __at(0x1C77);	// @ (0x38E * 8 + 7)
#define                                 INLVLC7_bit         _BIT_ACCESS(INLVLC,7)
// INLVLE<INLVLE3>
extern volatile __bit                   INLVLE3             __at(0x1C83);	// @ (0x390 * 8 + 3)
#define                                 INLVLE3_bit         _BIT_ACCESS(INLVLE,3)
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
// IOCAF<IOCAF6>
extern volatile __bit                   IOCAF6              __at(0x1C9E);	// @ (0x393 * 8 + 6)
#define                                 IOCAF6_bit          _BIT_ACCESS(IOCAF,6)
// IOCAF<IOCAF7>
extern volatile __bit                   IOCAF7              __at(0x1C9F);	// @ (0x393 * 8 + 7)
#define                                 IOCAF7_bit          _BIT_ACCESS(IOCAF,7)
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
// IOCAN<IOCAN6>
extern volatile __bit                   IOCAN6              __at(0x1C96);	// @ (0x392 * 8 + 6)
#define                                 IOCAN6_bit          _BIT_ACCESS(IOCAN,6)
// IOCAN<IOCAN7>
extern volatile __bit                   IOCAN7              __at(0x1C97);	// @ (0x392 * 8 + 7)
#define                                 IOCAN7_bit          _BIT_ACCESS(IOCAN,7)
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
// IOCAP<IOCAP6>
extern volatile __bit                   IOCAP6              __at(0x1C8E);	// @ (0x391 * 8 + 6)
#define                                 IOCAP6_bit          _BIT_ACCESS(IOCAP,6)
// IOCAP<IOCAP7>
extern volatile __bit                   IOCAP7              __at(0x1C8F);	// @ (0x391 * 8 + 7)
#define                                 IOCAP7_bit          _BIT_ACCESS(IOCAP,7)
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
// IOCCF<IOCCF0>
extern volatile __bit                   IOCCF0              __at(0x1CC8);	// @ (0x399 * 8 + 0)
#define                                 IOCCF0_bit          _BIT_ACCESS(IOCCF,0)
// IOCCF<IOCCF1>
extern volatile __bit                   IOCCF1              __at(0x1CC9);	// @ (0x399 * 8 + 1)
#define                                 IOCCF1_bit          _BIT_ACCESS(IOCCF,1)
// IOCCF<IOCCF2>
extern volatile __bit                   IOCCF2              __at(0x1CCA);	// @ (0x399 * 8 + 2)
#define                                 IOCCF2_bit          _BIT_ACCESS(IOCCF,2)
// IOCCF<IOCCF3>
extern volatile __bit                   IOCCF3              __at(0x1CCB);	// @ (0x399 * 8 + 3)
#define                                 IOCCF3_bit          _BIT_ACCESS(IOCCF,3)
// IOCCF<IOCCF4>
extern volatile __bit                   IOCCF4              __at(0x1CCC);	// @ (0x399 * 8 + 4)
#define                                 IOCCF4_bit          _BIT_ACCESS(IOCCF,4)
// IOCCF<IOCCF5>
extern volatile __bit                   IOCCF5              __at(0x1CCD);	// @ (0x399 * 8 + 5)
#define                                 IOCCF5_bit          _BIT_ACCESS(IOCCF,5)
// IOCCF<IOCCF6>
extern volatile __bit                   IOCCF6              __at(0x1CCE);	// @ (0x399 * 8 + 6)
#define                                 IOCCF6_bit          _BIT_ACCESS(IOCCF,6)
// IOCCF<IOCCF7>
extern volatile __bit                   IOCCF7              __at(0x1CCF);	// @ (0x399 * 8 + 7)
#define                                 IOCCF7_bit          _BIT_ACCESS(IOCCF,7)
// IOCCN<IOCCN0>
extern volatile __bit                   IOCCN0              __at(0x1CC0);	// @ (0x398 * 8 + 0)
#define                                 IOCCN0_bit          _BIT_ACCESS(IOCCN,0)
// IOCCN<IOCCN1>
extern volatile __bit                   IOCCN1              __at(0x1CC1);	// @ (0x398 * 8 + 1)
#define                                 IOCCN1_bit          _BIT_ACCESS(IOCCN,1)
// IOCCN<IOCCN2>
extern volatile __bit                   IOCCN2              __at(0x1CC2);	// @ (0x398 * 8 + 2)
#define                                 IOCCN2_bit          _BIT_ACCESS(IOCCN,2)
// IOCCN<IOCCN3>
extern volatile __bit                   IOCCN3              __at(0x1CC3);	// @ (0x398 * 8 + 3)
#define                                 IOCCN3_bit          _BIT_ACCESS(IOCCN,3)
// IOCCN<IOCCN4>
extern volatile __bit                   IOCCN4              __at(0x1CC4);	// @ (0x398 * 8 + 4)
#define                                 IOCCN4_bit          _BIT_ACCESS(IOCCN,4)
// IOCCN<IOCCN5>
extern volatile __bit                   IOCCN5              __at(0x1CC5);	// @ (0x398 * 8 + 5)
#define                                 IOCCN5_bit          _BIT_ACCESS(IOCCN,5)
// IOCCN<IOCCN6>
extern volatile __bit                   IOCCN6              __at(0x1CC6);	// @ (0x398 * 8 + 6)
#define                                 IOCCN6_bit          _BIT_ACCESS(IOCCN,6)
// IOCCN<IOCCN7>
extern volatile __bit                   IOCCN7              __at(0x1CC7);	// @ (0x398 * 8 + 7)
#define                                 IOCCN7_bit          _BIT_ACCESS(IOCCN,7)
// IOCCP<IOCCP0>
extern volatile __bit                   IOCCP0              __at(0x1CB8);	// @ (0x397 * 8 + 0)
#define                                 IOCCP0_bit          _BIT_ACCESS(IOCCP,0)
// IOCCP<IOCCP1>
extern volatile __bit                   IOCCP1              __at(0x1CB9);	// @ (0x397 * 8 + 1)
#define                                 IOCCP1_bit          _BIT_ACCESS(IOCCP,1)
// IOCCP<IOCCP2>
extern volatile __bit                   IOCCP2              __at(0x1CBA);	// @ (0x397 * 8 + 2)
#define                                 IOCCP2_bit          _BIT_ACCESS(IOCCP,2)
// IOCCP<IOCCP3>
extern volatile __bit                   IOCCP3              __at(0x1CBB);	// @ (0x397 * 8 + 3)
#define                                 IOCCP3_bit          _BIT_ACCESS(IOCCP,3)
// IOCCP<IOCCP4>
extern volatile __bit                   IOCCP4              __at(0x1CBC);	// @ (0x397 * 8 + 4)
#define                                 IOCCP4_bit          _BIT_ACCESS(IOCCP,4)
// IOCCP<IOCCP5>
extern volatile __bit                   IOCCP5              __at(0x1CBD);	// @ (0x397 * 8 + 5)
#define                                 IOCCP5_bit          _BIT_ACCESS(IOCCP,5)
// IOCCP<IOCCP6>
extern volatile __bit                   IOCCP6              __at(0x1CBE);	// @ (0x397 * 8 + 6)
#define                                 IOCCP6_bit          _BIT_ACCESS(IOCCP,6)
// IOCCP<IOCCP7>
extern volatile __bit                   IOCCP7              __at(0x1CBF);	// @ (0x397 * 8 + 7)
#define                                 IOCCP7_bit          _BIT_ACCESS(IOCCP,7)
// IOCEF<IOCEF3>
extern volatile __bit                   IOCEF3              __at(0x1CFB);	// @ (0x39F * 8 + 3)
#define                                 IOCEF3_bit          _BIT_ACCESS(IOCEF,3)
// IOCEN<IOCEN3>
extern volatile __bit                   IOCEN3              __at(0x1CF3);	// @ (0x39E * 8 + 3)
#define                                 IOCEN3_bit          _BIT_ACCESS(IOCEN,3)
// IOCEP<IOCEP3>
extern volatile __bit                   IOCEP3              __at(0x1CEB);	// @ (0x39D * 8 + 3)
#define                                 IOCEP3_bit          _BIT_ACCESS(IOCEP,3)
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
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// EECON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(EECON1,5)
// CMOUT<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 MC1OUT_bit          _BIT_ACCESS(CMOUT,0)
// CMOUT<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x8A9);	// @ (0x115 * 8 + 1)
#define                                 MC2OUT_bit          _BIT_ACCESS(CMOUT,1)
// CMOUT<MC3OUT>
extern volatile __bit                   MC3OUT              __at(0x8AA);	// @ (0x115 * 8 + 2)
#define                                 MC3OUT_bit          _BIT_ACCESS(CMOUT,2)
// OSCSTAT<MFIOFR>
extern volatile __bit                   MFIOFR              __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 MFIOFR_bit          _BIT_ACCESS(OSCSTAT,2)
// ODCONA<ODCONA0>
extern volatile __bit                   ODCONA0             __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 ODCONA0_bit         _BIT_ACCESS(ODCONA,0)
// ODCONA<ODCONA1>
extern volatile __bit                   ODCONA1             __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 ODCONA1_bit         _BIT_ACCESS(ODCONA,1)
// ODCONA<ODCONA2>
extern volatile __bit                   ODCONA2             __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 ODCONA2_bit         _BIT_ACCESS(ODCONA,2)
// ODCONA<ODCONA3>
extern volatile __bit                   ODCONA3             __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 ODCONA3_bit         _BIT_ACCESS(ODCONA,3)
// ODCONA<ODCONA4>
extern volatile __bit                   ODCONA4             __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 ODCONA4_bit         _BIT_ACCESS(ODCONA,4)
// ODCONA<ODCONA5>
extern volatile __bit                   ODCONA5             __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 ODCONA5_bit         _BIT_ACCESS(ODCONA,5)
// ODCONA<ODCONA6>
extern volatile __bit                   ODCONA6             __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 ODCONA6_bit         _BIT_ACCESS(ODCONA,6)
// ODCONA<ODCONA7>
extern volatile __bit                   ODCONA7             __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 ODCONA7_bit         _BIT_ACCESS(ODCONA,7)
// ODCONB<ODCONB0>
extern volatile __bit                   ODCONB0             __at(0x1468);	// @ (0x28D * 8 + 0)
#define                                 ODCONB0_bit         _BIT_ACCESS(ODCONB,0)
// ODCONB<ODCONB1>
extern volatile __bit                   ODCONB1             __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 ODCONB1_bit         _BIT_ACCESS(ODCONB,1)
// ODCONB<ODCONB2>
extern volatile __bit                   ODCONB2             __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 ODCONB2_bit         _BIT_ACCESS(ODCONB,2)
// ODCONB<ODCONB3>
extern volatile __bit                   ODCONB3             __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 ODCONB3_bit         _BIT_ACCESS(ODCONB,3)
// ODCONB<ODCONB4>
extern volatile __bit                   ODCONB4             __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 ODCONB4_bit         _BIT_ACCESS(ODCONB,4)
// ODCONB<ODCONB5>
extern volatile __bit                   ODCONB5             __at(0x146D);	// @ (0x28D * 8 + 5)
#define                                 ODCONB5_bit         _BIT_ACCESS(ODCONB,5)
// ODCONB<ODCONB6>
extern volatile __bit                   ODCONB6             __at(0x146E);	// @ (0x28D * 8 + 6)
#define                                 ODCONB6_bit         _BIT_ACCESS(ODCONB,6)
// ODCONB<ODCONB7>
extern volatile __bit                   ODCONB7             __at(0x146F);	// @ (0x28D * 8 + 7)
#define                                 ODCONB7_bit         _BIT_ACCESS(ODCONB,7)
// ODCONC<ODCONC0>
extern volatile __bit                   ODCONC0             __at(0x1470);	// @ (0x28E * 8 + 0)
#define                                 ODCONC0_bit         _BIT_ACCESS(ODCONC,0)
// ODCONC<ODCONC1>
extern volatile __bit                   ODCONC1             __at(0x1471);	// @ (0x28E * 8 + 1)
#define                                 ODCONC1_bit         _BIT_ACCESS(ODCONC,1)
// ODCONC<ODCONC2>
extern volatile __bit                   ODCONC2             __at(0x1472);	// @ (0x28E * 8 + 2)
#define                                 ODCONC2_bit         _BIT_ACCESS(ODCONC,2)
// ODCONC<ODCONC3>
extern volatile __bit                   ODCONC3             __at(0x1473);	// @ (0x28E * 8 + 3)
#define                                 ODCONC3_bit         _BIT_ACCESS(ODCONC,3)
// ODCONC<ODCONC4>
extern volatile __bit                   ODCONC4             __at(0x1474);	// @ (0x28E * 8 + 4)
#define                                 ODCONC4_bit         _BIT_ACCESS(ODCONC,4)
// ODCONC<ODCONC5>
extern volatile __bit                   ODCONC5             __at(0x1475);	// @ (0x28E * 8 + 5)
#define                                 ODCONC5_bit         _BIT_ACCESS(ODCONC,5)
// ODCONC<ODCONC6>
extern volatile __bit                   ODCONC6             __at(0x1476);	// @ (0x28E * 8 + 6)
#define                                 ODCONC6_bit         _BIT_ACCESS(ODCONC,6)
// ODCONC<ODCONC7>
extern volatile __bit                   ODCONC7             __at(0x1477);	// @ (0x28E * 8 + 7)
#define                                 ODCONC7_bit         _BIT_ACCESS(ODCONC,7)
// RC1STA<OERR>
extern volatile __bit                   OERR                __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RC1STA,1)
// OPA1CON<OPA1CH0>
extern volatile __bit                   OPA1CH0             __at(0x2888);	// @ (0x511 * 8 + 0)
#define                                 OPA1CH0_bit         _BIT_ACCESS(OPA1CON,0)
// OPA1CON<OPA1CH1>
extern volatile __bit                   OPA1CH1             __at(0x2889);	// @ (0x511 * 8 + 1)
#define                                 OPA1CH1_bit         _BIT_ACCESS(OPA1CON,1)
// OPA1CON<OPA1EN>
extern volatile __bit                   OPA1EN              __at(0x288F);	// @ (0x511 * 8 + 7)
#define                                 OPA1EN_bit          _BIT_ACCESS(OPA1CON,7)
// OPA1CON<OPA1SP>
extern volatile __bit                   OPA1SP              __at(0x288E);	// @ (0x511 * 8 + 6)
#define                                 OPA1SP_bit          _BIT_ACCESS(OPA1CON,6)
// OPA2CON<OPA2CH0>
extern volatile __bit                   OPA2CH0             __at(0x2898);	// @ (0x513 * 8 + 0)
#define                                 OPA2CH0_bit         _BIT_ACCESS(OPA2CON,0)
// OPA2CON<OPA2CH1>
extern volatile __bit                   OPA2CH1             __at(0x2899);	// @ (0x513 * 8 + 1)
#define                                 OPA2CH1_bit         _BIT_ACCESS(OPA2CON,1)
// OPA2CON<OPA2EN>
extern volatile __bit                   OPA2EN              __at(0x289F);	// @ (0x513 * 8 + 7)
#define                                 OPA2EN_bit          _BIT_ACCESS(OPA2CON,7)
// OPA2CON<OPA2SP>
extern volatile __bit                   OPA2SP              __at(0x289E);	// @ (0x513 * 8 + 6)
#define                                 OPA2SP_bit          _BIT_ACCESS(OPA2CON,6)
// PIE2<OSFIE>
extern volatile __bit                   OSFIE               __at(0x497);	// @ (0x92 * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<OSFIF>
extern volatile __bit                   OSFIF               __at(0x97);	// @ (0x12 * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR2,7)
// OSCSTAT<OSTS>
extern volatile __bit                   OSTS                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OSTS_bit            _BIT_ACCESS(OSCSTAT,5)
// PSMC1ASDC<P1ARSEN>
extern volatile __bit                   P1ARSEN             __at(0x40ED);	// @ (0x81D * 8 + 5)
#define                                 P1ARSEN_bit         _BIT_ACCESS(PSMC1ASDC,5)
// PSMC1ASDC<P1ASDEN>
extern volatile __bit                   P1ASDEN             __at(0x40EE);	// @ (0x81D * 8 + 6)
#define                                 P1ASDEN_bit         _BIT_ACCESS(PSMC1ASDC,6)
// PSMC1ASDL<P1ASDLA>
extern volatile __bit                   P1ASDLA             __at(0x40F0);	// @ (0x81E * 8 + 0)
#define                                 P1ASDLA_bit         _BIT_ACCESS(PSMC1ASDL,0)
// PSMC1ASDL<P1ASDLB>
extern volatile __bit                   P1ASDLB             __at(0x40F1);	// @ (0x81E * 8 + 1)
#define                                 P1ASDLB_bit         _BIT_ACCESS(PSMC1ASDL,1)
// PSMC1ASDL<P1ASDLC>
extern volatile __bit                   P1ASDLC             __at(0x40F2);	// @ (0x81E * 8 + 2)
#define                                 P1ASDLC_bit         _BIT_ACCESS(PSMC1ASDL,2)
// PSMC1ASDL<P1ASDLD>
extern volatile __bit                   P1ASDLD             __at(0x40F3);	// @ (0x81E * 8 + 3)
#define                                 P1ASDLD_bit         _BIT_ACCESS(PSMC1ASDL,3)
// PSMC1ASDL<P1ASDLE>
extern volatile __bit                   P1ASDLE             __at(0x40F4);	// @ (0x81E * 8 + 4)
#define                                 P1ASDLE_bit         _BIT_ACCESS(PSMC1ASDL,4)
// PSMC1ASDL<P1ASDLF>
extern volatile __bit                   P1ASDLF             __at(0x40F5);	// @ (0x81E * 8 + 5)
#define                                 P1ASDLF_bit         _BIT_ACCESS(PSMC1ASDL,5)
// PSMC1ASDC<P1ASDOV>
extern volatile __bit                   P1ASDOV             __at(0x40E8);	// @ (0x81D * 8 + 0)
#define                                 P1ASDOV_bit         _BIT_ACCESS(PSMC1ASDC,0)
// PSMC1ASDS<P1ASDSC1>
extern volatile __bit                   P1ASDSC1            __at(0x40F9);	// @ (0x81F * 8 + 1)
#define                                 P1ASDSC1_bit        _BIT_ACCESS(PSMC1ASDS,1)
// PSMC1ASDS<P1ASDSC2>
extern volatile __bit                   P1ASDSC2            __at(0x40FA);	// @ (0x81F * 8 + 2)
#define                                 P1ASDSC2_bit        _BIT_ACCESS(PSMC1ASDS,2)
// PSMC1ASDS<P1ASDSC3>
extern volatile __bit                   P1ASDSC3            __at(0x40FB);	// @ (0x81F * 8 + 3)
#define                                 P1ASDSC3_bit        _BIT_ACCESS(PSMC1ASDS,3)
// PSMC1ASDS<P1ASDSIN>
extern volatile __bit                   P1ASDSIN            __at(0x40FF);	// @ (0x81F * 8 + 7)
#define                                 P1ASDSIN_bit        _BIT_ACCESS(PSMC1ASDS,7)
// PSMC1ASDC<P1ASE>
extern volatile __bit                   P1ASE               __at(0x40EF);	// @ (0x81D * 8 + 7)
#define                                 P1ASE_bit           _BIT_ACCESS(PSMC1ASDC,7)
// PSMC1CLK<P1CPRE0>
extern volatile __bit                   P1CPRE0             __at(0x40A4);	// @ (0x814 * 8 + 4)
#define                                 P1CPRE0_bit         _BIT_ACCESS(PSMC1CLK,4)
// PSMC1CLK<P1CPRE1>
extern volatile __bit                   P1CPRE1             __at(0x40A5);	// @ (0x814 * 8 + 5)
#define                                 P1CPRE1_bit         _BIT_ACCESS(PSMC1CLK,5)
// PSMC1CLK<P1CSRC0>
extern volatile __bit                   P1CSRC0             __at(0x40A0);	// @ (0x814 * 8 + 0)
#define                                 P1CSRC0_bit         _BIT_ACCESS(PSMC1CLK,0)
// PSMC1CLK<P1CSRC1>
extern volatile __bit                   P1CSRC1             __at(0x40A1);	// @ (0x814 * 8 + 1)
#define                                 P1CSRC1_bit         _BIT_ACCESS(PSMC1CLK,1)
// PSMC1CON<P1DBFE>
extern volatile __bit                   P1DBFE              __at(0x408D);	// @ (0x811 * 8 + 5)
#define                                 P1DBFE_bit          _BIT_ACCESS(PSMC1CON,5)
// PSMC1CON<P1DBRE>
extern volatile __bit                   P1DBRE              __at(0x408C);	// @ (0x811 * 8 + 4)
#define                                 P1DBRE_bit          _BIT_ACCESS(PSMC1CON,4)
// PSMC1DCS<P1DCSC1>
extern volatile __bit                   P1DCSC1             __at(0x40D9);	// @ (0x81B * 8 + 1)
#define                                 P1DCSC1_bit         _BIT_ACCESS(PSMC1DCS,1)
// PSMC1DCS<P1DCSC2>
extern volatile __bit                   P1DCSC2             __at(0x40DA);	// @ (0x81B * 8 + 2)
#define                                 P1DCSC2_bit         _BIT_ACCESS(PSMC1DCS,2)
// PSMC1DCS<P1DCSC3>
extern volatile __bit                   P1DCSC3             __at(0x40DB);	// @ (0x81B * 8 + 3)
#define                                 P1DCSC3_bit         _BIT_ACCESS(PSMC1DCS,3)
// PSMC1DCS<P1DCSIN>
extern volatile __bit                   P1DCSIN             __at(0x40DF);	// @ (0x81B * 8 + 7)
#define                                 P1DCSIN_bit         _BIT_ACCESS(PSMC1DCS,7)
// PSMC1DCS<P1DCST>
extern volatile __bit                   P1DCST              __at(0x40D8);	// @ (0x81B * 8 + 0)
#define                                 P1DCST_bit          _BIT_ACCESS(PSMC1DCS,0)
// PSMC1BLNK<P1FEBM0>
extern volatile __bit                   P1FEBM0             __at(0x40BC);	// @ (0x817 * 8 + 4)
#define                                 P1FEBM0_bit         _BIT_ACCESS(PSMC1BLNK,4)
// PSMC1BLNK<P1FEBM1>
extern volatile __bit                   P1FEBM1             __at(0x40BD);	// @ (0x817 * 8 + 5)
#define                                 P1FEBM1_bit         _BIT_ACCESS(PSMC1BLNK,5)
// PSMC1FEBS<P1FEBSC1>
extern volatile __bit                   P1FEBSC1            __at(0x40C9);	// @ (0x819 * 8 + 1)
#define                                 P1FEBSC1_bit        _BIT_ACCESS(PSMC1FEBS,1)
// PSMC1FEBS<P1FEBSC2>
extern volatile __bit                   P1FEBSC2            __at(0x40CA);	// @ (0x819 * 8 + 2)
#define                                 P1FEBSC2_bit        _BIT_ACCESS(PSMC1FEBS,2)
// PSMC1FEBS<P1FEBSC3>
extern volatile __bit                   P1FEBSC3            __at(0x40CB);	// @ (0x819 * 8 + 3)
#define                                 P1FEBSC3_bit        _BIT_ACCESS(PSMC1FEBS,3)
// PSMC1FEBS<P1FEBSIN>
extern volatile __bit                   P1FEBSIN            __at(0x40CF);	// @ (0x819 * 8 + 7)
#define                                 P1FEBSIN_bit        _BIT_ACCESS(PSMC1FEBS,7)
// PSMC1STR1<P1HSMEN>
extern volatile __bit                   P1HSMEN             __at(0x4178);	// @ (0x82F * 8 + 0)
#define                                 P1HSMEN_bit         _BIT_ACCESS(PSMC1STR1,0)
// PSMC1POL<P1INPOL>
extern volatile __bit                   P1INPOL             __at(0x40B6);	// @ (0x816 * 8 + 6)
#define                                 P1INPOL_bit         _BIT_ACCESS(PSMC1POL,6)
// PSMC1STR1<P1LSMEN>
extern volatile __bit                   P1LSMEN             __at(0x4179);	// @ (0x82F * 8 + 1)
#define                                 P1LSMEN_bit         _BIT_ACCESS(PSMC1STR1,1)
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0x149E);	// @ (0x293 * 8 + 6)
#define                                 P1M0_bit            _BIT_ACCESS(CCP1CON,6)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x149F);	// @ (0x293 * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// PSMC1MDL<P1MDLBIT>
extern volatile __bit                   P1MDLBIT            __at(0x4095);	// @ (0x812 * 8 + 5)
#define                                 P1MDLBIT_bit        _BIT_ACCESS(PSMC1MDL,5)
// PSMC1MDL<P1MDLEN>
extern volatile __bit                   P1MDLEN             __at(0x4097);	// @ (0x812 * 8 + 7)
#define                                 P1MDLEN_bit         _BIT_ACCESS(PSMC1MDL,7)
// PSMC1MDL<P1MDLPOL>
extern volatile __bit                   P1MDLPOL            __at(0x4096);	// @ (0x812 * 8 + 6)
#define                                 P1MDLPOL_bit        _BIT_ACCESS(PSMC1MDL,6)
// PSMC1CON<P1MODE0>
extern volatile __bit                   P1MODE0             __at(0x4088);	// @ (0x811 * 8 + 0)
#define                                 P1MODE0_bit         _BIT_ACCESS(PSMC1CON,0)
// PSMC1CON<P1MODE1>
extern volatile __bit                   P1MODE1             __at(0x4089);	// @ (0x811 * 8 + 1)
#define                                 P1MODE1_bit         _BIT_ACCESS(PSMC1CON,1)
// PSMC1CON<P1MODE2>
extern volatile __bit                   P1MODE2             __at(0x408A);	// @ (0x811 * 8 + 2)
#define                                 P1MODE2_bit         _BIT_ACCESS(PSMC1CON,2)
// PSMC1CON<P1MODE3>
extern volatile __bit                   P1MODE3             __at(0x408B);	// @ (0x811 * 8 + 3)
#define                                 P1MODE3_bit         _BIT_ACCESS(PSMC1CON,3)
// PSMC1MDL<P1MSRC0>
extern volatile __bit                   P1MSRC0             __at(0x4090);	// @ (0x812 * 8 + 0)
#define                                 P1MSRC0_bit         _BIT_ACCESS(PSMC1MDL,0)
// PSMC1MDL<P1MSRC1>
extern volatile __bit                   P1MSRC1             __at(0x4091);	// @ (0x812 * 8 + 1)
#define                                 P1MSRC1_bit         _BIT_ACCESS(PSMC1MDL,1)
// PSMC1MDL<P1MSRC2>
extern volatile __bit                   P1MSRC2             __at(0x4092);	// @ (0x812 * 8 + 2)
#define                                 P1MSRC2_bit         _BIT_ACCESS(PSMC1MDL,2)
// PSMC1MDL<P1MSRC3>
extern volatile __bit                   P1MSRC3             __at(0x4093);	// @ (0x812 * 8 + 3)
#define                                 P1MSRC3_bit         _BIT_ACCESS(PSMC1MDL,3)
// PSMC1OEN<P1OEA>
extern volatile __bit                   P1OEA               __at(0x40A8);	// @ (0x815 * 8 + 0)
#define                                 P1OEA_bit           _BIT_ACCESS(PSMC1OEN,0)
// PSMC1OEN<P1OEB>
extern volatile __bit                   P1OEB               __at(0x40A9);	// @ (0x815 * 8 + 1)
#define                                 P1OEB_bit           _BIT_ACCESS(PSMC1OEN,1)
// PSMC1OEN<P1OEC>
extern volatile __bit                   P1OEC               __at(0x40AA);	// @ (0x815 * 8 + 2)
#define                                 P1OEC_bit           _BIT_ACCESS(PSMC1OEN,2)
// PSMC1OEN<P1OED>
extern volatile __bit                   P1OED               __at(0x40AB);	// @ (0x815 * 8 + 3)
#define                                 P1OED_bit           _BIT_ACCESS(PSMC1OEN,3)
// PSMC1OEN<P1OEE>
extern volatile __bit                   P1OEE               __at(0x40AC);	// @ (0x815 * 8 + 4)
#define                                 P1OEE_bit           _BIT_ACCESS(PSMC1OEN,4)
// PSMC1OEN<P1OEF>
extern volatile __bit                   P1OEF               __at(0x40AD);	// @ (0x815 * 8 + 5)
#define                                 P1OEF_bit           _BIT_ACCESS(PSMC1OEN,5)
// PSMC1PHS<P1PHSC1>
extern volatile __bit                   P1PHSC1             __at(0x40D1);	// @ (0x81A * 8 + 1)
#define                                 P1PHSC1_bit         _BIT_ACCESS(PSMC1PHS,1)
// PSMC1PHS<P1PHSC2>
extern volatile __bit                   P1PHSC2             __at(0x40D2);	// @ (0x81A * 8 + 2)
#define                                 P1PHSC2_bit         _BIT_ACCESS(PSMC1PHS,2)
// PSMC1PHS<P1PHSC3>
extern volatile __bit                   P1PHSC3             __at(0x40D3);	// @ (0x81A * 8 + 3)
#define                                 P1PHSC3_bit         _BIT_ACCESS(PSMC1PHS,3)
// PSMC1PHS<P1PHSIN>
extern volatile __bit                   P1PHSIN             __at(0x40D7);	// @ (0x81A * 8 + 7)
#define                                 P1PHSIN_bit         _BIT_ACCESS(PSMC1PHS,7)
// PSMC1PHS<P1PHST>
extern volatile __bit                   P1PHST              __at(0x40D0);	// @ (0x81A * 8 + 0)
#define                                 P1PHST_bit          _BIT_ACCESS(PSMC1PHS,0)
// PSMC1POL<P1POLA>
extern volatile __bit                   P1POLA              __at(0x40B0);	// @ (0x816 * 8 + 0)
#define                                 P1POLA_bit          _BIT_ACCESS(PSMC1POL,0)
// PSMC1POL<P1POLB>
extern volatile __bit                   P1POLB              __at(0x40B1);	// @ (0x816 * 8 + 1)
#define                                 P1POLB_bit          _BIT_ACCESS(PSMC1POL,1)
// PSMC1POL<P1POLC>
extern volatile __bit                   P1POLC              __at(0x40B2);	// @ (0x816 * 8 + 2)
#define                                 P1POLC_bit          _BIT_ACCESS(PSMC1POL,2)
// PSMC1POL<P1POLD>
extern volatile __bit                   P1POLD              __at(0x40B3);	// @ (0x816 * 8 + 3)
#define                                 P1POLD_bit          _BIT_ACCESS(PSMC1POL,3)
// PSMC1POL<P1POLE>
extern volatile __bit                   P1POLE              __at(0x40B4);	// @ (0x816 * 8 + 4)
#define                                 P1POLE_bit          _BIT_ACCESS(PSMC1POL,4)
// PSMC1POL<P1POLF>
extern volatile __bit                   P1POLF              __at(0x40B5);	// @ (0x816 * 8 + 5)
#define                                 P1POLF_bit          _BIT_ACCESS(PSMC1POL,5)
// PSMC1PRS<P1PRSC1>
extern volatile __bit                   P1PRSC1             __at(0x40E1);	// @ (0x81C * 8 + 1)
#define                                 P1PRSC1_bit         _BIT_ACCESS(PSMC1PRS,1)
// PSMC1PRS<P1PRSC2>
extern volatile __bit                   P1PRSC2             __at(0x40E2);	// @ (0x81C * 8 + 2)
#define                                 P1PRSC2_bit         _BIT_ACCESS(PSMC1PRS,2)
// PSMC1PRS<P1PRSC3>
extern volatile __bit                   P1PRSC3             __at(0x40E3);	// @ (0x81C * 8 + 3)
#define                                 P1PRSC3_bit         _BIT_ACCESS(PSMC1PRS,3)
// PSMC1PRS<P1PRSIN>
extern volatile __bit                   P1PRSIN             __at(0x40E7);	// @ (0x81C * 8 + 7)
#define                                 P1PRSIN_bit         _BIT_ACCESS(PSMC1PRS,7)
// PSMC1PRS<P1PRST>
extern volatile __bit                   P1PRST              __at(0x40E0);	// @ (0x81C * 8 + 0)
#define                                 P1PRST_bit          _BIT_ACCESS(PSMC1PRS,0)
// PSMC1BLNK<P1REBM0>
extern volatile __bit                   P1REBM0             __at(0x40B8);	// @ (0x817 * 8 + 0)
#define                                 P1REBM0_bit         _BIT_ACCESS(PSMC1BLNK,0)
// PSMC1BLNK<P1REBM1>
extern volatile __bit                   P1REBM1             __at(0x40B9);	// @ (0x817 * 8 + 1)
#define                                 P1REBM1_bit         _BIT_ACCESS(PSMC1BLNK,1)
// PSMC1REBS<P1REBSC1>
extern volatile __bit                   P1REBSC1            __at(0x40C1);	// @ (0x818 * 8 + 1)
#define                                 P1REBSC1_bit        _BIT_ACCESS(PSMC1REBS,1)
// PSMC1REBS<P1REBSC2>
extern volatile __bit                   P1REBSC2            __at(0x40C2);	// @ (0x818 * 8 + 2)
#define                                 P1REBSC2_bit        _BIT_ACCESS(PSMC1REBS,2)
// PSMC1REBS<P1REBSC3>
extern volatile __bit                   P1REBSC3            __at(0x40C3);	// @ (0x818 * 8 + 3)
#define                                 P1REBSC3_bit        _BIT_ACCESS(PSMC1REBS,3)
// PSMC1REBS<P1REBSIN>
extern volatile __bit                   P1REBSIN            __at(0x40C7);	// @ (0x818 * 8 + 7)
#define                                 P1REBSIN_bit        _BIT_ACCESS(PSMC1REBS,7)
// PSMC1STR1<P1SSYNC>
extern volatile __bit                   P1SSYNC             __at(0x417F);	// @ (0x82F * 8 + 7)
#define                                 P1SSYNC_bit         _BIT_ACCESS(PSMC1STR1,7)
// PSMC1STR0<P1STRA>
extern volatile __bit                   P1STRA              __at(0x4170);	// @ (0x82E * 8 + 0)
#define                                 P1STRA_bit          _BIT_ACCESS(PSMC1STR0,0)
// PSMC1STR0<P1STRB>
extern volatile __bit                   P1STRB              __at(0x4171);	// @ (0x82E * 8 + 1)
#define                                 P1STRB_bit          _BIT_ACCESS(PSMC1STR0,1)
// PSMC1STR0<P1STRC>
extern volatile __bit                   P1STRC              __at(0x4172);	// @ (0x82E * 8 + 2)
#define                                 P1STRC_bit          _BIT_ACCESS(PSMC1STR0,2)
// PSMC1STR0<P1STRD>
extern volatile __bit                   P1STRD              __at(0x4173);	// @ (0x82E * 8 + 3)
#define                                 P1STRD_bit          _BIT_ACCESS(PSMC1STR0,3)
// PSMC1STR0<P1STRE>
extern volatile __bit                   P1STRE              __at(0x4174);	// @ (0x82E * 8 + 4)
#define                                 P1STRE_bit          _BIT_ACCESS(PSMC1STR0,4)
// PSMC1STR0<P1STRF>
extern volatile __bit                   P1STRF              __at(0x4175);	// @ (0x82E * 8 + 5)
#define                                 P1STRF_bit          _BIT_ACCESS(PSMC1STR0,5)
// PSMC1SYNC<P1SYNC0>
extern volatile __bit                   P1SYNC0             __at(0x4098);	// @ (0x813 * 8 + 0)
#define                                 P1SYNC0_bit         _BIT_ACCESS(PSMC1SYNC,0)
// PSMC1SYNC<P1SYNC1>
extern volatile __bit                   P1SYNC1             __at(0x4099);	// @ (0x813 * 8 + 1)
#define                                 P1SYNC1_bit         _BIT_ACCESS(PSMC1SYNC,1)
// PSMC1INT<P1TDCIE>
extern volatile __bit                   P1TDCIE             __at(0x4105);	// @ (0x820 * 8 + 5)
#define                                 P1TDCIE_bit         _BIT_ACCESS(PSMC1INT,5)
// PSMC1INT<P1TDCIF>
extern volatile __bit                   P1TDCIF             __at(0x4101);	// @ (0x820 * 8 + 1)
#define                                 P1TDCIF_bit         _BIT_ACCESS(PSMC1INT,1)
// PSMC1INT<P1TOVIE>
extern volatile __bit                   P1TOVIE             __at(0x4107);	// @ (0x820 * 8 + 7)
#define                                 P1TOVIE_bit         _BIT_ACCESS(PSMC1INT,7)
// PSMC1INT<P1TOVIF>
extern volatile __bit                   P1TOVIF             __at(0x4103);	// @ (0x820 * 8 + 3)
#define                                 P1TOVIF_bit         _BIT_ACCESS(PSMC1INT,3)
// PSMC1INT<P1TPHIE>
extern volatile __bit                   P1TPHIE             __at(0x4106);	// @ (0x820 * 8 + 6)
#define                                 P1TPHIE_bit         _BIT_ACCESS(PSMC1INT,6)
// PSMC1INT<P1TPHIF>
extern volatile __bit                   P1TPHIF             __at(0x4102);	// @ (0x820 * 8 + 2)
#define                                 P1TPHIF_bit         _BIT_ACCESS(PSMC1INT,2)
// PSMC1INT<P1TPRIE>
extern volatile __bit                   P1TPRIE             __at(0x4104);	// @ (0x820 * 8 + 4)
#define                                 P1TPRIE_bit         _BIT_ACCESS(PSMC1INT,4)
// PSMC1INT<P1TPRIF>
extern volatile __bit                   P1TPRIF             __at(0x4100);	// @ (0x820 * 8 + 0)
#define                                 P1TPRIF_bit         _BIT_ACCESS(PSMC1INT,0)
// PSMC2ASDC<P2ARSEN>
extern volatile __bit                   P2ARSEN             __at(0x41ED);	// @ (0x83D * 8 + 5)
#define                                 P2ARSEN_bit         _BIT_ACCESS(PSMC2ASDC,5)
// PSMC2ASDC<P2ASDEN>
extern volatile __bit                   P2ASDEN             __at(0x41EE);	// @ (0x83D * 8 + 6)
#define                                 P2ASDEN_bit         _BIT_ACCESS(PSMC2ASDC,6)
// PSMC2ASDL<P2ASDLA>
extern volatile __bit                   P2ASDLA             __at(0x41F0);	// @ (0x83E * 8 + 0)
#define                                 P2ASDLA_bit         _BIT_ACCESS(PSMC2ASDL,0)
// PSMC2ASDL<P2ASDLB>
extern volatile __bit                   P2ASDLB             __at(0x41F1);	// @ (0x83E * 8 + 1)
#define                                 P2ASDLB_bit         _BIT_ACCESS(PSMC2ASDL,1)
// PSMC2ASDC<P2ASDOV>
extern volatile __bit                   P2ASDOV             __at(0x41E8);	// @ (0x83D * 8 + 0)
#define                                 P2ASDOV_bit         _BIT_ACCESS(PSMC2ASDC,0)
// PSMC2ASDS<P2ASDSC1>
extern volatile __bit                   P2ASDSC1            __at(0x41F9);	// @ (0x83F * 8 + 1)
#define                                 P2ASDSC1_bit        _BIT_ACCESS(PSMC2ASDS,1)
// PSMC2ASDS<P2ASDSC2>
extern volatile __bit                   P2ASDSC2            __at(0x41FA);	// @ (0x83F * 8 + 2)
#define                                 P2ASDSC2_bit        _BIT_ACCESS(PSMC2ASDS,2)
// PSMC2ASDS<P2ASDSC3>
extern volatile __bit                   P2ASDSC3            __at(0x41FB);	// @ (0x83F * 8 + 3)
#define                                 P2ASDSC3_bit        _BIT_ACCESS(PSMC2ASDS,3)
// PSMC2ASDS<P2ASDSIN>
extern volatile __bit                   P2ASDSIN            __at(0x41FF);	// @ (0x83F * 8 + 7)
#define                                 P2ASDSIN_bit        _BIT_ACCESS(PSMC2ASDS,7)
// PSMC2ASDC<P2ASE>
extern volatile __bit                   P2ASE               __at(0x41EF);	// @ (0x83D * 8 + 7)
#define                                 P2ASE_bit           _BIT_ACCESS(PSMC2ASDC,7)
// PSMC2CLK<P2CPRE0>
extern volatile __bit                   P2CPRE0             __at(0x41A4);	// @ (0x834 * 8 + 4)
#define                                 P2CPRE0_bit         _BIT_ACCESS(PSMC2CLK,4)
// PSMC2CLK<P2CPRE1>
extern volatile __bit                   P2CPRE1             __at(0x41A5);	// @ (0x834 * 8 + 5)
#define                                 P2CPRE1_bit         _BIT_ACCESS(PSMC2CLK,5)
// PSMC2CLK<P2CSRC0>
extern volatile __bit                   P2CSRC0             __at(0x41A0);	// @ (0x834 * 8 + 0)
#define                                 P2CSRC0_bit         _BIT_ACCESS(PSMC2CLK,0)
// PSMC2CLK<P2CSRC1>
extern volatile __bit                   P2CSRC1             __at(0x41A1);	// @ (0x834 * 8 + 1)
#define                                 P2CSRC1_bit         _BIT_ACCESS(PSMC2CLK,1)
// PSMC2CON<P2DBFE>
extern volatile __bit                   P2DBFE              __at(0x418D);	// @ (0x831 * 8 + 5)
#define                                 P2DBFE_bit          _BIT_ACCESS(PSMC2CON,5)
// PSMC2CON<P2DBRE>
extern volatile __bit                   P2DBRE              __at(0x418C);	// @ (0x831 * 8 + 4)
#define                                 P2DBRE_bit          _BIT_ACCESS(PSMC2CON,4)
// PSMC2DCS<P2DCSC1>
extern volatile __bit                   P2DCSC1             __at(0x41D9);	// @ (0x83B * 8 + 1)
#define                                 P2DCSC1_bit         _BIT_ACCESS(PSMC2DCS,1)
// PSMC2DCS<P2DCSC2>
extern volatile __bit                   P2DCSC2             __at(0x41DA);	// @ (0x83B * 8 + 2)
#define                                 P2DCSC2_bit         _BIT_ACCESS(PSMC2DCS,2)
// PSMC2DCS<P2DCSC3>
extern volatile __bit                   P2DCSC3             __at(0x41DB);	// @ (0x83B * 8 + 3)
#define                                 P2DCSC3_bit         _BIT_ACCESS(PSMC2DCS,3)
// PSMC2DCS<P2DCSIN>
extern volatile __bit                   P2DCSIN             __at(0x41DF);	// @ (0x83B * 8 + 7)
#define                                 P2DCSIN_bit         _BIT_ACCESS(PSMC2DCS,7)
// PSMC2DCS<P2DCST>
extern volatile __bit                   P2DCST              __at(0x41D8);	// @ (0x83B * 8 + 0)
#define                                 P2DCST_bit          _BIT_ACCESS(PSMC2DCS,0)
// PSMC2BLNK<P2FEBM0>
extern volatile __bit                   P2FEBM0             __at(0x41BC);	// @ (0x837 * 8 + 4)
#define                                 P2FEBM0_bit         _BIT_ACCESS(PSMC2BLNK,4)
// PSMC2BLNK<P2FEBM1>
extern volatile __bit                   P2FEBM1             __at(0x41BD);	// @ (0x837 * 8 + 5)
#define                                 P2FEBM1_bit         _BIT_ACCESS(PSMC2BLNK,5)
// PSMC2FEBS<P2FEBSC1>
extern volatile __bit                   P2FEBSC1            __at(0x41C9);	// @ (0x839 * 8 + 1)
#define                                 P2FEBSC1_bit        _BIT_ACCESS(PSMC2FEBS,1)
// PSMC2FEBS<P2FEBSC2>
extern volatile __bit                   P2FEBSC2            __at(0x41CA);	// @ (0x839 * 8 + 2)
#define                                 P2FEBSC2_bit        _BIT_ACCESS(PSMC2FEBS,2)
// PSMC2FEBS<P2FEBSC3>
extern volatile __bit                   P2FEBSC3            __at(0x41CB);	// @ (0x839 * 8 + 3)
#define                                 P2FEBSC3_bit        _BIT_ACCESS(PSMC2FEBS,3)
// PSMC2FEBS<P2FEBSIN>
extern volatile __bit                   P2FEBSIN            __at(0x41CF);	// @ (0x839 * 8 + 7)
#define                                 P2FEBSIN_bit        _BIT_ACCESS(PSMC2FEBS,7)
// PSMC2STR1<P2HSMEN>
extern volatile __bit                   P2HSMEN             __at(0x4278);	// @ (0x84F * 8 + 0)
#define                                 P2HSMEN_bit         _BIT_ACCESS(PSMC2STR1,0)
// PSMC2POL<P2INPOL>
extern volatile __bit                   P2INPOL             __at(0x41B6);	// @ (0x836 * 8 + 6)
#define                                 P2INPOL_bit         _BIT_ACCESS(PSMC2POL,6)
// PSMC2STR1<P2LSMEN>
extern volatile __bit                   P2LSMEN             __at(0x4279);	// @ (0x84F * 8 + 1)
#define                                 P2LSMEN_bit         _BIT_ACCESS(PSMC2STR1,1)
// CCP2CON<P2M0>
extern volatile __bit                   P2M0                __at(0x14D6);	// @ (0x29A * 8 + 6)
#define                                 P2M0_bit            _BIT_ACCESS(CCP2CON,6)
// CCP2CON<P2M1>
extern volatile __bit                   P2M1                __at(0x14D7);	// @ (0x29A * 8 + 7)
#define                                 P2M1_bit            _BIT_ACCESS(CCP2CON,7)
// PSMC2MDL<P2MDLBIT>
extern volatile __bit                   P2MDLBIT            __at(0x4195);	// @ (0x832 * 8 + 5)
#define                                 P2MDLBIT_bit        _BIT_ACCESS(PSMC2MDL,5)
// PSMC2MDL<P2MDLEN>
extern volatile __bit                   P2MDLEN             __at(0x4197);	// @ (0x832 * 8 + 7)
#define                                 P2MDLEN_bit         _BIT_ACCESS(PSMC2MDL,7)
// PSMC2MDL<P2MDLPOL>
extern volatile __bit                   P2MDLPOL            __at(0x4196);	// @ (0x832 * 8 + 6)
#define                                 P2MDLPOL_bit        _BIT_ACCESS(PSMC2MDL,6)
// PSMC2CON<P2MODE0>
extern volatile __bit                   P2MODE0             __at(0x4188);	// @ (0x831 * 8 + 0)
#define                                 P2MODE0_bit         _BIT_ACCESS(PSMC2CON,0)
// PSMC2CON<P2MODE1>
extern volatile __bit                   P2MODE1             __at(0x4189);	// @ (0x831 * 8 + 1)
#define                                 P2MODE1_bit         _BIT_ACCESS(PSMC2CON,1)
// PSMC2CON<P2MODE2>
extern volatile __bit                   P2MODE2             __at(0x418A);	// @ (0x831 * 8 + 2)
#define                                 P2MODE2_bit         _BIT_ACCESS(PSMC2CON,2)
// PSMC2CON<P2MODE3>
extern volatile __bit                   P2MODE3             __at(0x418B);	// @ (0x831 * 8 + 3)
#define                                 P2MODE3_bit         _BIT_ACCESS(PSMC2CON,3)
// PSMC2MDL<P2MSRC0>
extern volatile __bit                   P2MSRC0             __at(0x4190);	// @ (0x832 * 8 + 0)
#define                                 P2MSRC0_bit         _BIT_ACCESS(PSMC2MDL,0)
// PSMC2MDL<P2MSRC1>
extern volatile __bit                   P2MSRC1             __at(0x4191);	// @ (0x832 * 8 + 1)
#define                                 P2MSRC1_bit         _BIT_ACCESS(PSMC2MDL,1)
// PSMC2MDL<P2MSRC2>
extern volatile __bit                   P2MSRC2             __at(0x4192);	// @ (0x832 * 8 + 2)
#define                                 P2MSRC2_bit         _BIT_ACCESS(PSMC2MDL,2)
// PSMC2MDL<P2MSRC3>
extern volatile __bit                   P2MSRC3             __at(0x4193);	// @ (0x832 * 8 + 3)
#define                                 P2MSRC3_bit         _BIT_ACCESS(PSMC2MDL,3)
// PSMC2OEN<P2OEA>
extern volatile __bit                   P2OEA               __at(0x41A8);	// @ (0x835 * 8 + 0)
#define                                 P2OEA_bit           _BIT_ACCESS(PSMC2OEN,0)
// PSMC2OEN<P2OEB>
extern volatile __bit                   P2OEB               __at(0x41A9);	// @ (0x835 * 8 + 1)
#define                                 P2OEB_bit           _BIT_ACCESS(PSMC2OEN,1)
// PSMC2PHS<P2PHSC1>
extern volatile __bit                   P2PHSC1             __at(0x41D1);	// @ (0x83A * 8 + 1)
#define                                 P2PHSC1_bit         _BIT_ACCESS(PSMC2PHS,1)
// PSMC2PHS<P2PHSC2>
extern volatile __bit                   P2PHSC2             __at(0x41D2);	// @ (0x83A * 8 + 2)
#define                                 P2PHSC2_bit         _BIT_ACCESS(PSMC2PHS,2)
// PSMC2PHS<P2PHSC3>
extern volatile __bit                   P2PHSC3             __at(0x41D3);	// @ (0x83A * 8 + 3)
#define                                 P2PHSC3_bit         _BIT_ACCESS(PSMC2PHS,3)
// PSMC2PHS<P2PHSIN>
extern volatile __bit                   P2PHSIN             __at(0x41D7);	// @ (0x83A * 8 + 7)
#define                                 P2PHSIN_bit         _BIT_ACCESS(PSMC2PHS,7)
// PSMC2PHS<P2PHST>
extern volatile __bit                   P2PHST              __at(0x41D0);	// @ (0x83A * 8 + 0)
#define                                 P2PHST_bit          _BIT_ACCESS(PSMC2PHS,0)
// PSMC2POL<P2POLA>
extern volatile __bit                   P2POLA              __at(0x41B0);	// @ (0x836 * 8 + 0)
#define                                 P2POLA_bit          _BIT_ACCESS(PSMC2POL,0)
// PSMC2POL<P2POLB>
extern volatile __bit                   P2POLB              __at(0x41B1);	// @ (0x836 * 8 + 1)
#define                                 P2POLB_bit          _BIT_ACCESS(PSMC2POL,1)
// PSMC2PRS<P2PRSC1>
extern volatile __bit                   P2PRSC1             __at(0x41E1);	// @ (0x83C * 8 + 1)
#define                                 P2PRSC1_bit         _BIT_ACCESS(PSMC2PRS,1)
// PSMC2PRS<P2PRSC2>
extern volatile __bit                   P2PRSC2             __at(0x41E2);	// @ (0x83C * 8 + 2)
#define                                 P2PRSC2_bit         _BIT_ACCESS(PSMC2PRS,2)
// PSMC2PRS<P2PRSC3>
extern volatile __bit                   P2PRSC3             __at(0x41E3);	// @ (0x83C * 8 + 3)
#define                                 P2PRSC3_bit         _BIT_ACCESS(PSMC2PRS,3)
// PSMC2PRS<P2PRSIN>
extern volatile __bit                   P2PRSIN             __at(0x41E7);	// @ (0x83C * 8 + 7)
#define                                 P2PRSIN_bit         _BIT_ACCESS(PSMC2PRS,7)
// PSMC2PRS<P2PRST>
extern volatile __bit                   P2PRST              __at(0x41E0);	// @ (0x83C * 8 + 0)
#define                                 P2PRST_bit          _BIT_ACCESS(PSMC2PRS,0)
// PSMC2BLNK<P2REBM0>
extern volatile __bit                   P2REBM0             __at(0x41B8);	// @ (0x837 * 8 + 0)
#define                                 P2REBM0_bit         _BIT_ACCESS(PSMC2BLNK,0)
// PSMC2BLNK<P2REBM1>
extern volatile __bit                   P2REBM1             __at(0x41B9);	// @ (0x837 * 8 + 1)
#define                                 P2REBM1_bit         _BIT_ACCESS(PSMC2BLNK,1)
// PSMC2REBS<P2REBSC1>
extern volatile __bit                   P2REBSC1            __at(0x41C1);	// @ (0x838 * 8 + 1)
#define                                 P2REBSC1_bit        _BIT_ACCESS(PSMC2REBS,1)
// PSMC2REBS<P2REBSC2>
extern volatile __bit                   P2REBSC2            __at(0x41C2);	// @ (0x838 * 8 + 2)
#define                                 P2REBSC2_bit        _BIT_ACCESS(PSMC2REBS,2)
// PSMC2REBS<P2REBSC3>
extern volatile __bit                   P2REBSC3            __at(0x41C3);	// @ (0x838 * 8 + 3)
#define                                 P2REBSC3_bit        _BIT_ACCESS(PSMC2REBS,3)
// PSMC2REBS<P2REBSIN>
extern volatile __bit                   P2REBSIN            __at(0x41C7);	// @ (0x838 * 8 + 7)
#define                                 P2REBSIN_bit        _BIT_ACCESS(PSMC2REBS,7)
// PSMC2STR1<P2SSYNC>
extern volatile __bit                   P2SSYNC             __at(0x427F);	// @ (0x84F * 8 + 7)
#define                                 P2SSYNC_bit         _BIT_ACCESS(PSMC2STR1,7)
// PSMC2STR0<P2STRA>
extern volatile __bit                   P2STRA              __at(0x4270);	// @ (0x84E * 8 + 0)
#define                                 P2STRA_bit          _BIT_ACCESS(PSMC2STR0,0)
// PSMC2STR0<P2STRB>
extern volatile __bit                   P2STRB              __at(0x4271);	// @ (0x84E * 8 + 1)
#define                                 P2STRB_bit          _BIT_ACCESS(PSMC2STR0,1)
// PSMC2SYNC<P2SYNC0>
extern volatile __bit                   P2SYNC0             __at(0x4198);	// @ (0x833 * 8 + 0)
#define                                 P2SYNC0_bit         _BIT_ACCESS(PSMC2SYNC,0)
// PSMC2SYNC<P2SYNC1>
extern volatile __bit                   P2SYNC1             __at(0x4199);	// @ (0x833 * 8 + 1)
#define                                 P2SYNC1_bit         _BIT_ACCESS(PSMC2SYNC,1)
// PSMC2INT<P2TDCIE>
extern volatile __bit                   P2TDCIE             __at(0x4205);	// @ (0x840 * 8 + 5)
#define                                 P2TDCIE_bit         _BIT_ACCESS(PSMC2INT,5)
// PSMC2INT<P2TDCIF>
extern volatile __bit                   P2TDCIF             __at(0x4201);	// @ (0x840 * 8 + 1)
#define                                 P2TDCIF_bit         _BIT_ACCESS(PSMC2INT,1)
// PSMC2INT<P2TOVIE>
extern volatile __bit                   P2TOVIE             __at(0x4207);	// @ (0x840 * 8 + 7)
#define                                 P2TOVIE_bit         _BIT_ACCESS(PSMC2INT,7)
// PSMC2INT<P2TOVIF>
extern volatile __bit                   P2TOVIF             __at(0x4203);	// @ (0x840 * 8 + 3)
#define                                 P2TOVIF_bit         _BIT_ACCESS(PSMC2INT,3)
// PSMC2INT<P2TPHIE>
extern volatile __bit                   P2TPHIE             __at(0x4206);	// @ (0x840 * 8 + 6)
#define                                 P2TPHIE_bit         _BIT_ACCESS(PSMC2INT,6)
// PSMC2INT<P2TPHIF>
extern volatile __bit                   P2TPHIF             __at(0x4202);	// @ (0x840 * 8 + 2)
#define                                 P2TPHIF_bit         _BIT_ACCESS(PSMC2INT,2)
// PSMC2INT<P2TPRIE>
extern volatile __bit                   P2TPRIE             __at(0x4204);	// @ (0x840 * 8 + 4)
#define                                 P2TPRIE_bit         _BIT_ACCESS(PSMC2INT,4)
// PSMC2INT<P2TPRIF>
extern volatile __bit                   P2TPRIF             __at(0x4200);	// @ (0x840 * 8 + 0)
#define                                 P2TPRIF_bit         _BIT_ACCESS(PSMC2INT,0)
// SSPCON3<PCIE>
extern volatile __bit                   PCIE                __at(0x10BE);	// @ (0x217 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSPCON3,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSPCON2<PEN>
extern volatile __bit                   PEN                 __at(0x10B2);	// @ (0x216 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSPCON2,2)
// OSCSTAT<PLLR>
extern volatile __bit                   PLLR                __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 PLLR_bit            _BIT_ACCESS(OSCSTAT,6)
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
// PSMC1BLKF<PSMC1BLKF0>
extern volatile __bit                   PSMC1BLKF0          __at(0x4160);	// @ (0x82C * 8 + 0)
#define                                 PSMC1BLKF0_bit      _BIT_ACCESS(PSMC1BLKF,0)
// PSMC1BLKF<PSMC1BLKF1>
extern volatile __bit                   PSMC1BLKF1          __at(0x4161);	// @ (0x82C * 8 + 1)
#define                                 PSMC1BLKF1_bit      _BIT_ACCESS(PSMC1BLKF,1)
// PSMC1BLKF<PSMC1BLKF2>
extern volatile __bit                   PSMC1BLKF2          __at(0x4162);	// @ (0x82C * 8 + 2)
#define                                 PSMC1BLKF2_bit      _BIT_ACCESS(PSMC1BLKF,2)
// PSMC1BLKF<PSMC1BLKF3>
extern volatile __bit                   PSMC1BLKF3          __at(0x4163);	// @ (0x82C * 8 + 3)
#define                                 PSMC1BLKF3_bit      _BIT_ACCESS(PSMC1BLKF,3)
// PSMC1BLKF<PSMC1BLKF4>
extern volatile __bit                   PSMC1BLKF4          __at(0x4164);	// @ (0x82C * 8 + 4)
#define                                 PSMC1BLKF4_bit      _BIT_ACCESS(PSMC1BLKF,4)
// PSMC1BLKF<PSMC1BLKF5>
extern volatile __bit                   PSMC1BLKF5          __at(0x4165);	// @ (0x82C * 8 + 5)
#define                                 PSMC1BLKF5_bit      _BIT_ACCESS(PSMC1BLKF,5)
// PSMC1BLKF<PSMC1BLKF6>
extern volatile __bit                   PSMC1BLKF6          __at(0x4166);	// @ (0x82C * 8 + 6)
#define                                 PSMC1BLKF6_bit      _BIT_ACCESS(PSMC1BLKF,6)
// PSMC1BLKF<PSMC1BLKF7>
extern volatile __bit                   PSMC1BLKF7          __at(0x4167);	// @ (0x82C * 8 + 7)
#define                                 PSMC1BLKF7_bit      _BIT_ACCESS(PSMC1BLKF,7)
// PSMC1BLKR<PSMC1BLKR0>
extern volatile __bit                   PSMC1BLKR0          __at(0x4158);	// @ (0x82B * 8 + 0)
#define                                 PSMC1BLKR0_bit      _BIT_ACCESS(PSMC1BLKR,0)
// PSMC1BLKR<PSMC1BLKR1>
extern volatile __bit                   PSMC1BLKR1          __at(0x4159);	// @ (0x82B * 8 + 1)
#define                                 PSMC1BLKR1_bit      _BIT_ACCESS(PSMC1BLKR,1)
// PSMC1BLKR<PSMC1BLKR2>
extern volatile __bit                   PSMC1BLKR2          __at(0x415A);	// @ (0x82B * 8 + 2)
#define                                 PSMC1BLKR2_bit      _BIT_ACCESS(PSMC1BLKR,2)
// PSMC1BLKR<PSMC1BLKR3>
extern volatile __bit                   PSMC1BLKR3          __at(0x415B);	// @ (0x82B * 8 + 3)
#define                                 PSMC1BLKR3_bit      _BIT_ACCESS(PSMC1BLKR,3)
// PSMC1BLKR<PSMC1BLKR4>
extern volatile __bit                   PSMC1BLKR4          __at(0x415C);	// @ (0x82B * 8 + 4)
#define                                 PSMC1BLKR4_bit      _BIT_ACCESS(PSMC1BLKR,4)
// PSMC1BLKR<PSMC1BLKR5>
extern volatile __bit                   PSMC1BLKR5          __at(0x415D);	// @ (0x82B * 8 + 5)
#define                                 PSMC1BLKR5_bit      _BIT_ACCESS(PSMC1BLKR,5)
// PSMC1BLKR<PSMC1BLKR6>
extern volatile __bit                   PSMC1BLKR6          __at(0x415E);	// @ (0x82B * 8 + 6)
#define                                 PSMC1BLKR6_bit      _BIT_ACCESS(PSMC1BLKR,6)
// PSMC1BLKR<PSMC1BLKR7>
extern volatile __bit                   PSMC1BLKR7          __at(0x415F);	// @ (0x82B * 8 + 7)
#define                                 PSMC1BLKR7_bit      _BIT_ACCESS(PSMC1BLKR,7)
// PSMC1DBF<PSMC1DBF0>
extern volatile __bit                   PSMC1DBF0           __at(0x4150);	// @ (0x82A * 8 + 0)
#define                                 PSMC1DBF0_bit       _BIT_ACCESS(PSMC1DBF,0)
// PSMC1DBF<PSMC1DBF1>
extern volatile __bit                   PSMC1DBF1           __at(0x4151);	// @ (0x82A * 8 + 1)
#define                                 PSMC1DBF1_bit       _BIT_ACCESS(PSMC1DBF,1)
// PSMC1DBF<PSMC1DBF2>
extern volatile __bit                   PSMC1DBF2           __at(0x4152);	// @ (0x82A * 8 + 2)
#define                                 PSMC1DBF2_bit       _BIT_ACCESS(PSMC1DBF,2)
// PSMC1DBF<PSMC1DBF3>
extern volatile __bit                   PSMC1DBF3           __at(0x4153);	// @ (0x82A * 8 + 3)
#define                                 PSMC1DBF3_bit       _BIT_ACCESS(PSMC1DBF,3)
// PSMC1DBF<PSMC1DBF4>
extern volatile __bit                   PSMC1DBF4           __at(0x4154);	// @ (0x82A * 8 + 4)
#define                                 PSMC1DBF4_bit       _BIT_ACCESS(PSMC1DBF,4)
// PSMC1DBF<PSMC1DBF5>
extern volatile __bit                   PSMC1DBF5           __at(0x4155);	// @ (0x82A * 8 + 5)
#define                                 PSMC1DBF5_bit       _BIT_ACCESS(PSMC1DBF,5)
// PSMC1DBF<PSMC1DBF6>
extern volatile __bit                   PSMC1DBF6           __at(0x4156);	// @ (0x82A * 8 + 6)
#define                                 PSMC1DBF6_bit       _BIT_ACCESS(PSMC1DBF,6)
// PSMC1DBF<PSMC1DBF7>
extern volatile __bit                   PSMC1DBF7           __at(0x4157);	// @ (0x82A * 8 + 7)
#define                                 PSMC1DBF7_bit       _BIT_ACCESS(PSMC1DBF,7)
// PSMC1DBR<PSMC1DBR0>
extern volatile __bit                   PSMC1DBR0           __at(0x4148);	// @ (0x829 * 8 + 0)
#define                                 PSMC1DBR0_bit       _BIT_ACCESS(PSMC1DBR,0)
// PSMC1DBR<PSMC1DBR1>
extern volatile __bit                   PSMC1DBR1           __at(0x4149);	// @ (0x829 * 8 + 1)
#define                                 PSMC1DBR1_bit       _BIT_ACCESS(PSMC1DBR,1)
// PSMC1DBR<PSMC1DBR2>
extern volatile __bit                   PSMC1DBR2           __at(0x414A);	// @ (0x829 * 8 + 2)
#define                                 PSMC1DBR2_bit       _BIT_ACCESS(PSMC1DBR,2)
// PSMC1DBR<PSMC1DBR3>
extern volatile __bit                   PSMC1DBR3           __at(0x414B);	// @ (0x829 * 8 + 3)
#define                                 PSMC1DBR3_bit       _BIT_ACCESS(PSMC1DBR,3)
// PSMC1DBR<PSMC1DBR4>
extern volatile __bit                   PSMC1DBR4           __at(0x414C);	// @ (0x829 * 8 + 4)
#define                                 PSMC1DBR4_bit       _BIT_ACCESS(PSMC1DBR,4)
// PSMC1DBR<PSMC1DBR5>
extern volatile __bit                   PSMC1DBR5           __at(0x414D);	// @ (0x829 * 8 + 5)
#define                                 PSMC1DBR5_bit       _BIT_ACCESS(PSMC1DBR,5)
// PSMC1DBR<PSMC1DBR6>
extern volatile __bit                   PSMC1DBR6           __at(0x414E);	// @ (0x829 * 8 + 6)
#define                                 PSMC1DBR6_bit       _BIT_ACCESS(PSMC1DBR,6)
// PSMC1DBR<PSMC1DBR7>
extern volatile __bit                   PSMC1DBR7           __at(0x414F);	// @ (0x829 * 8 + 7)
#define                                 PSMC1DBR7_bit       _BIT_ACCESS(PSMC1DBR,7)
// PSMC1DCL<PSMC1DC0>
extern volatile __bit                   PSMC1DC0            __at(0x4118);	// @ (0x823 * 8 + 0)
#define                                 PSMC1DC0_bit        _BIT_ACCESS(PSMC1DCL,0)
// PSMC1DCL<PSMC1DC1>
extern volatile __bit                   PSMC1DC1            __at(0x4119);	// @ (0x823 * 8 + 1)
#define                                 PSMC1DC1_bit        _BIT_ACCESS(PSMC1DCL,1)
// PSMC1DCH<PSMC1DC10>
extern volatile __bit                   PSMC1DC10           __at(0x4122);	// @ (0x824 * 8 + 2)
#define                                 PSMC1DC10_bit       _BIT_ACCESS(PSMC1DCH,2)
// PSMC1DCH<PSMC1DC11>
extern volatile __bit                   PSMC1DC11           __at(0x4123);	// @ (0x824 * 8 + 3)
#define                                 PSMC1DC11_bit       _BIT_ACCESS(PSMC1DCH,3)
// PSMC1DCH<PSMC1DC12>
extern volatile __bit                   PSMC1DC12           __at(0x4124);	// @ (0x824 * 8 + 4)
#define                                 PSMC1DC12_bit       _BIT_ACCESS(PSMC1DCH,4)
// PSMC1DCH<PSMC1DC13>
extern volatile __bit                   PSMC1DC13           __at(0x4125);	// @ (0x824 * 8 + 5)
#define                                 PSMC1DC13_bit       _BIT_ACCESS(PSMC1DCH,5)
// PSMC1DCH<PSMC1DC14>
extern volatile __bit                   PSMC1DC14           __at(0x4126);	// @ (0x824 * 8 + 6)
#define                                 PSMC1DC14_bit       _BIT_ACCESS(PSMC1DCH,6)
// PSMC1DCH<PSMC1DC15>
extern volatile __bit                   PSMC1DC15           __at(0x4127);	// @ (0x824 * 8 + 7)
#define                                 PSMC1DC15_bit       _BIT_ACCESS(PSMC1DCH,7)
// PSMC1DCL<PSMC1DC2>
extern volatile __bit                   PSMC1DC2            __at(0x411A);	// @ (0x823 * 8 + 2)
#define                                 PSMC1DC2_bit        _BIT_ACCESS(PSMC1DCL,2)
// PSMC1DCL<PSMC1DC3>
extern volatile __bit                   PSMC1DC3            __at(0x411B);	// @ (0x823 * 8 + 3)
#define                                 PSMC1DC3_bit        _BIT_ACCESS(PSMC1DCL,3)
// PSMC1DCL<PSMC1DC4>
extern volatile __bit                   PSMC1DC4            __at(0x411C);	// @ (0x823 * 8 + 4)
#define                                 PSMC1DC4_bit        _BIT_ACCESS(PSMC1DCL,4)
// PSMC1DCL<PSMC1DC5>
extern volatile __bit                   PSMC1DC5            __at(0x411D);	// @ (0x823 * 8 + 5)
#define                                 PSMC1DC5_bit        _BIT_ACCESS(PSMC1DCL,5)
// PSMC1DCL<PSMC1DC6>
extern volatile __bit                   PSMC1DC6            __at(0x411E);	// @ (0x823 * 8 + 6)
#define                                 PSMC1DC6_bit        _BIT_ACCESS(PSMC1DCL,6)
// PSMC1DCL<PSMC1DC7>
extern volatile __bit                   PSMC1DC7            __at(0x411F);	// @ (0x823 * 8 + 7)
#define                                 PSMC1DC7_bit        _BIT_ACCESS(PSMC1DCL,7)
// PSMC1DCH<PSMC1DC8>
extern volatile __bit                   PSMC1DC8            __at(0x4120);	// @ (0x824 * 8 + 0)
#define                                 PSMC1DC8_bit        _BIT_ACCESS(PSMC1DCH,0)
// PSMC1DCH<PSMC1DC9>
extern volatile __bit                   PSMC1DC9            __at(0x4121);	// @ (0x824 * 8 + 1)
#define                                 PSMC1DC9_bit        _BIT_ACCESS(PSMC1DCH,1)
// PSMC1CON<PSMC1EN>
extern volatile __bit                   PSMC1EN             __at(0x408F);	// @ (0x811 * 8 + 7)
#define                                 PSMC1EN_bit         _BIT_ACCESS(PSMC1CON,7)
// PSMC1FFA<PSMC1FFA0>
extern volatile __bit                   PSMC1FFA0           __at(0x4168);	// @ (0x82D * 8 + 0)
#define                                 PSMC1FFA0_bit       _BIT_ACCESS(PSMC1FFA,0)
// PSMC1FFA<PSMC1FFA1>
extern volatile __bit                   PSMC1FFA1           __at(0x4169);	// @ (0x82D * 8 + 1)
#define                                 PSMC1FFA1_bit       _BIT_ACCESS(PSMC1FFA,1)
// PSMC1FFA<PSMC1FFA2>
extern volatile __bit                   PSMC1FFA2           __at(0x416A);	// @ (0x82D * 8 + 2)
#define                                 PSMC1FFA2_bit       _BIT_ACCESS(PSMC1FFA,2)
// PSMC1FFA<PSMC1FFA3>
extern volatile __bit                   PSMC1FFA3           __at(0x416B);	// @ (0x82D * 8 + 3)
#define                                 PSMC1FFA3_bit       _BIT_ACCESS(PSMC1FFA,3)
// PSMC1CON<PSMC1LD>
extern volatile __bit                   PSMC1LD             __at(0x408E);	// @ (0x811 * 8 + 6)
#define                                 PSMC1LD_bit         _BIT_ACCESS(PSMC1CON,6)
// PSMC1PHL<PSMC1PH0>
extern volatile __bit                   PSMC1PH0            __at(0x4108);	// @ (0x821 * 8 + 0)
#define                                 PSMC1PH0_bit        _BIT_ACCESS(PSMC1PHL,0)
// PSMC1PHL<PSMC1PH1>
extern volatile __bit                   PSMC1PH1            __at(0x4109);	// @ (0x821 * 8 + 1)
#define                                 PSMC1PH1_bit        _BIT_ACCESS(PSMC1PHL,1)
// PSMC1PHH<PSMC1PH10>
extern volatile __bit                   PSMC1PH10           __at(0x4112);	// @ (0x822 * 8 + 2)
#define                                 PSMC1PH10_bit       _BIT_ACCESS(PSMC1PHH,2)
// PSMC1PHH<PSMC1PH11>
extern volatile __bit                   PSMC1PH11           __at(0x4113);	// @ (0x822 * 8 + 3)
#define                                 PSMC1PH11_bit       _BIT_ACCESS(PSMC1PHH,3)
// PSMC1PHH<PSMC1PH12>
extern volatile __bit                   PSMC1PH12           __at(0x4114);	// @ (0x822 * 8 + 4)
#define                                 PSMC1PH12_bit       _BIT_ACCESS(PSMC1PHH,4)
// PSMC1PHH<PSMC1PH13>
extern volatile __bit                   PSMC1PH13           __at(0x4115);	// @ (0x822 * 8 + 5)
#define                                 PSMC1PH13_bit       _BIT_ACCESS(PSMC1PHH,5)
// PSMC1PHH<PSMC1PH14>
extern volatile __bit                   PSMC1PH14           __at(0x4116);	// @ (0x822 * 8 + 6)
#define                                 PSMC1PH14_bit       _BIT_ACCESS(PSMC1PHH,6)
// PSMC1PHH<PSMC1PH15>
extern volatile __bit                   PSMC1PH15           __at(0x4117);	// @ (0x822 * 8 + 7)
#define                                 PSMC1PH15_bit       _BIT_ACCESS(PSMC1PHH,7)
// PSMC1PHL<PSMC1PH2>
extern volatile __bit                   PSMC1PH2            __at(0x410A);	// @ (0x821 * 8 + 2)
#define                                 PSMC1PH2_bit        _BIT_ACCESS(PSMC1PHL,2)
// PSMC1PHL<PSMC1PH3>
extern volatile __bit                   PSMC1PH3            __at(0x410B);	// @ (0x821 * 8 + 3)
#define                                 PSMC1PH3_bit        _BIT_ACCESS(PSMC1PHL,3)
// PSMC1PHL<PSMC1PH4>
extern volatile __bit                   PSMC1PH4            __at(0x410C);	// @ (0x821 * 8 + 4)
#define                                 PSMC1PH4_bit        _BIT_ACCESS(PSMC1PHL,4)
// PSMC1PHL<PSMC1PH5>
extern volatile __bit                   PSMC1PH5            __at(0x410D);	// @ (0x821 * 8 + 5)
#define                                 PSMC1PH5_bit        _BIT_ACCESS(PSMC1PHL,5)
// PSMC1PHL<PSMC1PH6>
extern volatile __bit                   PSMC1PH6            __at(0x410E);	// @ (0x821 * 8 + 6)
#define                                 PSMC1PH6_bit        _BIT_ACCESS(PSMC1PHL,6)
// PSMC1PHL<PSMC1PH7>
extern volatile __bit                   PSMC1PH7            __at(0x410F);	// @ (0x821 * 8 + 7)
#define                                 PSMC1PH7_bit        _BIT_ACCESS(PSMC1PHL,7)
// PSMC1PHH<PSMC1PH8>
extern volatile __bit                   PSMC1PH8            __at(0x4110);	// @ (0x822 * 8 + 0)
#define                                 PSMC1PH8_bit        _BIT_ACCESS(PSMC1PHH,0)
// PSMC1PHH<PSMC1PH9>
extern volatile __bit                   PSMC1PH9            __at(0x4111);	// @ (0x822 * 8 + 1)
#define                                 PSMC1PH9_bit        _BIT_ACCESS(PSMC1PHH,1)
// PSMC1PRL<PSMC1PR0>
extern volatile __bit                   PSMC1PR0            __at(0x4128);	// @ (0x825 * 8 + 0)
#define                                 PSMC1PR0_bit        _BIT_ACCESS(PSMC1PRL,0)
// PSMC1PRL<PSMC1PR1>
extern volatile __bit                   PSMC1PR1            __at(0x4129);	// @ (0x825 * 8 + 1)
#define                                 PSMC1PR1_bit        _BIT_ACCESS(PSMC1PRL,1)
// PSMC1PRH<PSMC1PR10>
extern volatile __bit                   PSMC1PR10           __at(0x4132);	// @ (0x826 * 8 + 2)
#define                                 PSMC1PR10_bit       _BIT_ACCESS(PSMC1PRH,2)
// PSMC1PRH<PSMC1PR11>
extern volatile __bit                   PSMC1PR11           __at(0x4133);	// @ (0x826 * 8 + 3)
#define                                 PSMC1PR11_bit       _BIT_ACCESS(PSMC1PRH,3)
// PSMC1PRH<PSMC1PR12>
extern volatile __bit                   PSMC1PR12           __at(0x4134);	// @ (0x826 * 8 + 4)
#define                                 PSMC1PR12_bit       _BIT_ACCESS(PSMC1PRH,4)
// PSMC1PRH<PSMC1PR13>
extern volatile __bit                   PSMC1PR13           __at(0x4135);	// @ (0x826 * 8 + 5)
#define                                 PSMC1PR13_bit       _BIT_ACCESS(PSMC1PRH,5)
// PSMC1PRH<PSMC1PR14>
extern volatile __bit                   PSMC1PR14           __at(0x4136);	// @ (0x826 * 8 + 6)
#define                                 PSMC1PR14_bit       _BIT_ACCESS(PSMC1PRH,6)
// PSMC1PRH<PSMC1PR15>
extern volatile __bit                   PSMC1PR15           __at(0x4137);	// @ (0x826 * 8 + 7)
#define                                 PSMC1PR15_bit       _BIT_ACCESS(PSMC1PRH,7)
// PSMC1PRL<PSMC1PR2>
extern volatile __bit                   PSMC1PR2            __at(0x412A);	// @ (0x825 * 8 + 2)
#define                                 PSMC1PR2_bit        _BIT_ACCESS(PSMC1PRL,2)
// PSMC1PRL<PSMC1PR3>
extern volatile __bit                   PSMC1PR3            __at(0x412B);	// @ (0x825 * 8 + 3)
#define                                 PSMC1PR3_bit        _BIT_ACCESS(PSMC1PRL,3)
// PSMC1PRL<PSMC1PR4>
extern volatile __bit                   PSMC1PR4            __at(0x412C);	// @ (0x825 * 8 + 4)
#define                                 PSMC1PR4_bit        _BIT_ACCESS(PSMC1PRL,4)
// PSMC1PRL<PSMC1PR5>
extern volatile __bit                   PSMC1PR5            __at(0x412D);	// @ (0x825 * 8 + 5)
#define                                 PSMC1PR5_bit        _BIT_ACCESS(PSMC1PRL,5)
// PSMC1PRL<PSMC1PR6>
extern volatile __bit                   PSMC1PR6            __at(0x412E);	// @ (0x825 * 8 + 6)
#define                                 PSMC1PR6_bit        _BIT_ACCESS(PSMC1PRL,6)
// PSMC1PRL<PSMC1PR7>
extern volatile __bit                   PSMC1PR7            __at(0x412F);	// @ (0x825 * 8 + 7)
#define                                 PSMC1PR7_bit        _BIT_ACCESS(PSMC1PRL,7)
// PSMC1PRH<PSMC1PR8>
extern volatile __bit                   PSMC1PR8            __at(0x4130);	// @ (0x826 * 8 + 0)
#define                                 PSMC1PR8_bit        _BIT_ACCESS(PSMC1PRH,0)
// PSMC1PRH<PSMC1PR9>
extern volatile __bit                   PSMC1PR9            __at(0x4131);	// @ (0x826 * 8 + 1)
#define                                 PSMC1PR9_bit        _BIT_ACCESS(PSMC1PRH,1)
// PIE4<PSMC1SIE>
extern volatile __bit                   PSMC1SIE            __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 PSMC1SIE_bit        _BIT_ACCESS(PIE4,0)
// PIR4<PSMC1SIF>
extern volatile __bit                   PSMC1SIF            __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 PSMC1SIF_bit        _BIT_ACCESS(PIR4,0)
// PIE4<PSMC1TIE>
extern volatile __bit                   PSMC1TIE            __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 PSMC1TIE_bit        _BIT_ACCESS(PIE4,4)
// PIR4<PSMC1TIF>
extern volatile __bit                   PSMC1TIF            __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 PSMC1TIF_bit        _BIT_ACCESS(PIR4,4)
// PSMC1TMRL<PSMC1TMR0>
extern volatile __bit                   PSMC1TMR0           __at(0x4138);	// @ (0x827 * 8 + 0)
#define                                 PSMC1TMR0_bit       _BIT_ACCESS(PSMC1TMRL,0)
// PSMC1TMRL<PSMC1TMR1>
extern volatile __bit                   PSMC1TMR1           __at(0x4139);	// @ (0x827 * 8 + 1)
#define                                 PSMC1TMR1_bit       _BIT_ACCESS(PSMC1TMRL,1)
// PSMC1TMRH<PSMC1TMR10>
extern volatile __bit                   PSMC1TMR10          __at(0x4142);	// @ (0x828 * 8 + 2)
#define                                 PSMC1TMR10_bit      _BIT_ACCESS(PSMC1TMRH,2)
// PSMC1TMRH<PSMC1TMR11>
extern volatile __bit                   PSMC1TMR11          __at(0x4143);	// @ (0x828 * 8 + 3)
#define                                 PSMC1TMR11_bit      _BIT_ACCESS(PSMC1TMRH,3)
// PSMC1TMRH<PSMC1TMR12>
extern volatile __bit                   PSMC1TMR12          __at(0x4144);	// @ (0x828 * 8 + 4)
#define                                 PSMC1TMR12_bit      _BIT_ACCESS(PSMC1TMRH,4)
// PSMC1TMRH<PSMC1TMR13>
extern volatile __bit                   PSMC1TMR13          __at(0x4145);	// @ (0x828 * 8 + 5)
#define                                 PSMC1TMR13_bit      _BIT_ACCESS(PSMC1TMRH,5)
// PSMC1TMRH<PSMC1TMR14>
extern volatile __bit                   PSMC1TMR14          __at(0x4146);	// @ (0x828 * 8 + 6)
#define                                 PSMC1TMR14_bit      _BIT_ACCESS(PSMC1TMRH,6)
// PSMC1TMRH<PSMC1TMR15>
extern volatile __bit                   PSMC1TMR15          __at(0x4147);	// @ (0x828 * 8 + 7)
#define                                 PSMC1TMR15_bit      _BIT_ACCESS(PSMC1TMRH,7)
// PSMC1TMRL<PSMC1TMR2>
extern volatile __bit                   PSMC1TMR2           __at(0x413A);	// @ (0x827 * 8 + 2)
#define                                 PSMC1TMR2_bit       _BIT_ACCESS(PSMC1TMRL,2)
// PSMC1TMRL<PSMC1TMR3>
extern volatile __bit                   PSMC1TMR3           __at(0x413B);	// @ (0x827 * 8 + 3)
#define                                 PSMC1TMR3_bit       _BIT_ACCESS(PSMC1TMRL,3)
// PSMC1TMRL<PSMC1TMR4>
extern volatile __bit                   PSMC1TMR4           __at(0x413C);	// @ (0x827 * 8 + 4)
#define                                 PSMC1TMR4_bit       _BIT_ACCESS(PSMC1TMRL,4)
// PSMC1TMRL<PSMC1TMR5>
extern volatile __bit                   PSMC1TMR5           __at(0x413D);	// @ (0x827 * 8 + 5)
#define                                 PSMC1TMR5_bit       _BIT_ACCESS(PSMC1TMRL,5)
// PSMC1TMRL<PSMC1TMR6>
extern volatile __bit                   PSMC1TMR6           __at(0x413E);	// @ (0x827 * 8 + 6)
#define                                 PSMC1TMR6_bit       _BIT_ACCESS(PSMC1TMRL,6)
// PSMC1TMRL<PSMC1TMR7>
extern volatile __bit                   PSMC1TMR7           __at(0x413F);	// @ (0x827 * 8 + 7)
#define                                 PSMC1TMR7_bit       _BIT_ACCESS(PSMC1TMRL,7)
// PSMC1TMRH<PSMC1TMR8>
extern volatile __bit                   PSMC1TMR8           __at(0x4140);	// @ (0x828 * 8 + 0)
#define                                 PSMC1TMR8_bit       _BIT_ACCESS(PSMC1TMRH,0)
// PSMC1TMRH<PSMC1TMR9>
extern volatile __bit                   PSMC1TMR9           __at(0x4141);	// @ (0x828 * 8 + 1)
#define                                 PSMC1TMR9_bit       _BIT_ACCESS(PSMC1TMRH,1)
// PSMC2BLKF<PSMC2BLKF0>
extern volatile __bit                   PSMC2BLKF0          __at(0x4260);	// @ (0x84C * 8 + 0)
#define                                 PSMC2BLKF0_bit      _BIT_ACCESS(PSMC2BLKF,0)
// PSMC2BLKF<PSMC2BLKF1>
extern volatile __bit                   PSMC2BLKF1          __at(0x4261);	// @ (0x84C * 8 + 1)
#define                                 PSMC2BLKF1_bit      _BIT_ACCESS(PSMC2BLKF,1)
// PSMC2BLKF<PSMC2BLKF2>
extern volatile __bit                   PSMC2BLKF2          __at(0x4262);	// @ (0x84C * 8 + 2)
#define                                 PSMC2BLKF2_bit      _BIT_ACCESS(PSMC2BLKF,2)
// PSMC2BLKF<PSMC2BLKF3>
extern volatile __bit                   PSMC2BLKF3          __at(0x4263);	// @ (0x84C * 8 + 3)
#define                                 PSMC2BLKF3_bit      _BIT_ACCESS(PSMC2BLKF,3)
// PSMC2BLKF<PSMC2BLKF4>
extern volatile __bit                   PSMC2BLKF4          __at(0x4264);	// @ (0x84C * 8 + 4)
#define                                 PSMC2BLKF4_bit      _BIT_ACCESS(PSMC2BLKF,4)
// PSMC2BLKF<PSMC2BLKF5>
extern volatile __bit                   PSMC2BLKF5          __at(0x4265);	// @ (0x84C * 8 + 5)
#define                                 PSMC2BLKF5_bit      _BIT_ACCESS(PSMC2BLKF,5)
// PSMC2BLKF<PSMC2BLKF6>
extern volatile __bit                   PSMC2BLKF6          __at(0x4266);	// @ (0x84C * 8 + 6)
#define                                 PSMC2BLKF6_bit      _BIT_ACCESS(PSMC2BLKF,6)
// PSMC2BLKF<PSMC2BLKF7>
extern volatile __bit                   PSMC2BLKF7          __at(0x4267);	// @ (0x84C * 8 + 7)
#define                                 PSMC2BLKF7_bit      _BIT_ACCESS(PSMC2BLKF,7)
// PSMC2BLKR<PSMC2BLKR0>
extern volatile __bit                   PSMC2BLKR0          __at(0x4258);	// @ (0x84B * 8 + 0)
#define                                 PSMC2BLKR0_bit      _BIT_ACCESS(PSMC2BLKR,0)
// PSMC2BLKR<PSMC2BLKR1>
extern volatile __bit                   PSMC2BLKR1          __at(0x4259);	// @ (0x84B * 8 + 1)
#define                                 PSMC2BLKR1_bit      _BIT_ACCESS(PSMC2BLKR,1)
// PSMC2BLKR<PSMC2BLKR2>
extern volatile __bit                   PSMC2BLKR2          __at(0x425A);	// @ (0x84B * 8 + 2)
#define                                 PSMC2BLKR2_bit      _BIT_ACCESS(PSMC2BLKR,2)
// PSMC2BLKR<PSMC2BLKR3>
extern volatile __bit                   PSMC2BLKR3          __at(0x425B);	// @ (0x84B * 8 + 3)
#define                                 PSMC2BLKR3_bit      _BIT_ACCESS(PSMC2BLKR,3)
// PSMC2BLKR<PSMC2BLKR4>
extern volatile __bit                   PSMC2BLKR4          __at(0x425C);	// @ (0x84B * 8 + 4)
#define                                 PSMC2BLKR4_bit      _BIT_ACCESS(PSMC2BLKR,4)
// PSMC2BLKR<PSMC2BLKR5>
extern volatile __bit                   PSMC2BLKR5          __at(0x425D);	// @ (0x84B * 8 + 5)
#define                                 PSMC2BLKR5_bit      _BIT_ACCESS(PSMC2BLKR,5)
// PSMC2BLKR<PSMC2BLKR6>
extern volatile __bit                   PSMC2BLKR6          __at(0x425E);	// @ (0x84B * 8 + 6)
#define                                 PSMC2BLKR6_bit      _BIT_ACCESS(PSMC2BLKR,6)
// PSMC2BLKR<PSMC2BLKR7>
extern volatile __bit                   PSMC2BLKR7          __at(0x425F);	// @ (0x84B * 8 + 7)
#define                                 PSMC2BLKR7_bit      _BIT_ACCESS(PSMC2BLKR,7)
// PSMC2DBF<PSMC2DBF0>
extern volatile __bit                   PSMC2DBF0           __at(0x4250);	// @ (0x84A * 8 + 0)
#define                                 PSMC2DBF0_bit       _BIT_ACCESS(PSMC2DBF,0)
// PSMC2DBF<PSMC2DBF1>
extern volatile __bit                   PSMC2DBF1           __at(0x4251);	// @ (0x84A * 8 + 1)
#define                                 PSMC2DBF1_bit       _BIT_ACCESS(PSMC2DBF,1)
// PSMC2DBF<PSMC2DBF2>
extern volatile __bit                   PSMC2DBF2           __at(0x4252);	// @ (0x84A * 8 + 2)
#define                                 PSMC2DBF2_bit       _BIT_ACCESS(PSMC2DBF,2)
// PSMC2DBF<PSMC2DBF3>
extern volatile __bit                   PSMC2DBF3           __at(0x4253);	// @ (0x84A * 8 + 3)
#define                                 PSMC2DBF3_bit       _BIT_ACCESS(PSMC2DBF,3)
// PSMC2DBF<PSMC2DBF4>
extern volatile __bit                   PSMC2DBF4           __at(0x4254);	// @ (0x84A * 8 + 4)
#define                                 PSMC2DBF4_bit       _BIT_ACCESS(PSMC2DBF,4)
// PSMC2DBF<PSMC2DBF5>
extern volatile __bit                   PSMC2DBF5           __at(0x4255);	// @ (0x84A * 8 + 5)
#define                                 PSMC2DBF5_bit       _BIT_ACCESS(PSMC2DBF,5)
// PSMC2DBF<PSMC2DBF6>
extern volatile __bit                   PSMC2DBF6           __at(0x4256);	// @ (0x84A * 8 + 6)
#define                                 PSMC2DBF6_bit       _BIT_ACCESS(PSMC2DBF,6)
// PSMC2DBF<PSMC2DBF7>
extern volatile __bit                   PSMC2DBF7           __at(0x4257);	// @ (0x84A * 8 + 7)
#define                                 PSMC2DBF7_bit       _BIT_ACCESS(PSMC2DBF,7)
// PSMC2DBR<PSMC2DBR0>
extern volatile __bit                   PSMC2DBR0           __at(0x4248);	// @ (0x849 * 8 + 0)
#define                                 PSMC2DBR0_bit       _BIT_ACCESS(PSMC2DBR,0)
// PSMC2DBR<PSMC2DBR1>
extern volatile __bit                   PSMC2DBR1           __at(0x4249);	// @ (0x849 * 8 + 1)
#define                                 PSMC2DBR1_bit       _BIT_ACCESS(PSMC2DBR,1)
// PSMC2DBR<PSMC2DBR2>
extern volatile __bit                   PSMC2DBR2           __at(0x424A);	// @ (0x849 * 8 + 2)
#define                                 PSMC2DBR2_bit       _BIT_ACCESS(PSMC2DBR,2)
// PSMC2DBR<PSMC2DBR3>
extern volatile __bit                   PSMC2DBR3           __at(0x424B);	// @ (0x849 * 8 + 3)
#define                                 PSMC2DBR3_bit       _BIT_ACCESS(PSMC2DBR,3)
// PSMC2DBR<PSMC2DBR4>
extern volatile __bit                   PSMC2DBR4           __at(0x424C);	// @ (0x849 * 8 + 4)
#define                                 PSMC2DBR4_bit       _BIT_ACCESS(PSMC2DBR,4)
// PSMC2DBR<PSMC2DBR5>
extern volatile __bit                   PSMC2DBR5           __at(0x424D);	// @ (0x849 * 8 + 5)
#define                                 PSMC2DBR5_bit       _BIT_ACCESS(PSMC2DBR,5)
// PSMC2DBR<PSMC2DBR6>
extern volatile __bit                   PSMC2DBR6           __at(0x424E);	// @ (0x849 * 8 + 6)
#define                                 PSMC2DBR6_bit       _BIT_ACCESS(PSMC2DBR,6)
// PSMC2DBR<PSMC2DBR7>
extern volatile __bit                   PSMC2DBR7           __at(0x424F);	// @ (0x849 * 8 + 7)
#define                                 PSMC2DBR7_bit       _BIT_ACCESS(PSMC2DBR,7)
// PSMC2DCL<PSMC2DC0>
extern volatile __bit                   PSMC2DC0            __at(0x4218);	// @ (0x843 * 8 + 0)
#define                                 PSMC2DC0_bit        _BIT_ACCESS(PSMC2DCL,0)
// PSMC2DCL<PSMC2DC1>
extern volatile __bit                   PSMC2DC1            __at(0x4219);	// @ (0x843 * 8 + 1)
#define                                 PSMC2DC1_bit        _BIT_ACCESS(PSMC2DCL,1)
// PSMC2DCH<PSMC2DC10>
extern volatile __bit                   PSMC2DC10           __at(0x4222);	// @ (0x844 * 8 + 2)
#define                                 PSMC2DC10_bit       _BIT_ACCESS(PSMC2DCH,2)
// PSMC2DCH<PSMC2DC11>
extern volatile __bit                   PSMC2DC11           __at(0x4223);	// @ (0x844 * 8 + 3)
#define                                 PSMC2DC11_bit       _BIT_ACCESS(PSMC2DCH,3)
// PSMC2DCH<PSMC2DC12>
extern volatile __bit                   PSMC2DC12           __at(0x4224);	// @ (0x844 * 8 + 4)
#define                                 PSMC2DC12_bit       _BIT_ACCESS(PSMC2DCH,4)
// PSMC2DCH<PSMC2DC13>
extern volatile __bit                   PSMC2DC13           __at(0x4225);	// @ (0x844 * 8 + 5)
#define                                 PSMC2DC13_bit       _BIT_ACCESS(PSMC2DCH,5)
// PSMC2DCH<PSMC2DC14>
extern volatile __bit                   PSMC2DC14           __at(0x4226);	// @ (0x844 * 8 + 6)
#define                                 PSMC2DC14_bit       _BIT_ACCESS(PSMC2DCH,6)
// PSMC2DCH<PSMC2DC15>
extern volatile __bit                   PSMC2DC15           __at(0x4227);	// @ (0x844 * 8 + 7)
#define                                 PSMC2DC15_bit       _BIT_ACCESS(PSMC2DCH,7)
// PSMC2DCL<PSMC2DC2>
extern volatile __bit                   PSMC2DC2            __at(0x421A);	// @ (0x843 * 8 + 2)
#define                                 PSMC2DC2_bit        _BIT_ACCESS(PSMC2DCL,2)
// PSMC2DCL<PSMC2DC3>
extern volatile __bit                   PSMC2DC3            __at(0x421B);	// @ (0x843 * 8 + 3)
#define                                 PSMC2DC3_bit        _BIT_ACCESS(PSMC2DCL,3)
// PSMC2DCL<PSMC2DC4>
extern volatile __bit                   PSMC2DC4            __at(0x421C);	// @ (0x843 * 8 + 4)
#define                                 PSMC2DC4_bit        _BIT_ACCESS(PSMC2DCL,4)
// PSMC2DCL<PSMC2DC5>
extern volatile __bit                   PSMC2DC5            __at(0x421D);	// @ (0x843 * 8 + 5)
#define                                 PSMC2DC5_bit        _BIT_ACCESS(PSMC2DCL,5)
// PSMC2DCL<PSMC2DC6>
extern volatile __bit                   PSMC2DC6            __at(0x421E);	// @ (0x843 * 8 + 6)
#define                                 PSMC2DC6_bit        _BIT_ACCESS(PSMC2DCL,6)
// PSMC2DCL<PSMC2DC7>
extern volatile __bit                   PSMC2DC7            __at(0x421F);	// @ (0x843 * 8 + 7)
#define                                 PSMC2DC7_bit        _BIT_ACCESS(PSMC2DCL,7)
// PSMC2DCH<PSMC2DC8>
extern volatile __bit                   PSMC2DC8            __at(0x4220);	// @ (0x844 * 8 + 0)
#define                                 PSMC2DC8_bit        _BIT_ACCESS(PSMC2DCH,0)
// PSMC2DCH<PSMC2DC9>
extern volatile __bit                   PSMC2DC9            __at(0x4221);	// @ (0x844 * 8 + 1)
#define                                 PSMC2DC9_bit        _BIT_ACCESS(PSMC2DCH,1)
// PSMC2CON<PSMC2EN>
extern volatile __bit                   PSMC2EN             __at(0x418F);	// @ (0x831 * 8 + 7)
#define                                 PSMC2EN_bit         _BIT_ACCESS(PSMC2CON,7)
// PSMC2FFA<PSMC2FFA0>
extern volatile __bit                   PSMC2FFA0           __at(0x4268);	// @ (0x84D * 8 + 0)
#define                                 PSMC2FFA0_bit       _BIT_ACCESS(PSMC2FFA,0)
// PSMC2FFA<PSMC2FFA1>
extern volatile __bit                   PSMC2FFA1           __at(0x4269);	// @ (0x84D * 8 + 1)
#define                                 PSMC2FFA1_bit       _BIT_ACCESS(PSMC2FFA,1)
// PSMC2FFA<PSMC2FFA2>
extern volatile __bit                   PSMC2FFA2           __at(0x426A);	// @ (0x84D * 8 + 2)
#define                                 PSMC2FFA2_bit       _BIT_ACCESS(PSMC2FFA,2)
// PSMC2FFA<PSMC2FFA3>
extern volatile __bit                   PSMC2FFA3           __at(0x426B);	// @ (0x84D * 8 + 3)
#define                                 PSMC2FFA3_bit       _BIT_ACCESS(PSMC2FFA,3)
// PSMC2CON<PSMC2LD>
extern volatile __bit                   PSMC2LD             __at(0x418E);	// @ (0x831 * 8 + 6)
#define                                 PSMC2LD_bit         _BIT_ACCESS(PSMC2CON,6)
// PSMC2PHL<PSMC2PH0>
extern volatile __bit                   PSMC2PH0            __at(0x4208);	// @ (0x841 * 8 + 0)
#define                                 PSMC2PH0_bit        _BIT_ACCESS(PSMC2PHL,0)
// PSMC2PHL<PSMC2PH1>
extern volatile __bit                   PSMC2PH1            __at(0x4209);	// @ (0x841 * 8 + 1)
#define                                 PSMC2PH1_bit        _BIT_ACCESS(PSMC2PHL,1)
// PSMC2PHH<PSMC2PH10>
extern volatile __bit                   PSMC2PH10           __at(0x4212);	// @ (0x842 * 8 + 2)
#define                                 PSMC2PH10_bit       _BIT_ACCESS(PSMC2PHH,2)
// PSMC2PHH<PSMC2PH11>
extern volatile __bit                   PSMC2PH11           __at(0x4213);	// @ (0x842 * 8 + 3)
#define                                 PSMC2PH11_bit       _BIT_ACCESS(PSMC2PHH,3)
// PSMC2PHH<PSMC2PH12>
extern volatile __bit                   PSMC2PH12           __at(0x4214);	// @ (0x842 * 8 + 4)
#define                                 PSMC2PH12_bit       _BIT_ACCESS(PSMC2PHH,4)
// PSMC2PHH<PSMC2PH13>
extern volatile __bit                   PSMC2PH13           __at(0x4215);	// @ (0x842 * 8 + 5)
#define                                 PSMC2PH13_bit       _BIT_ACCESS(PSMC2PHH,5)
// PSMC2PHH<PSMC2PH14>
extern volatile __bit                   PSMC2PH14           __at(0x4216);	// @ (0x842 * 8 + 6)
#define                                 PSMC2PH14_bit       _BIT_ACCESS(PSMC2PHH,6)
// PSMC2PHH<PSMC2PH15>
extern volatile __bit                   PSMC2PH15           __at(0x4217);	// @ (0x842 * 8 + 7)
#define                                 PSMC2PH15_bit       _BIT_ACCESS(PSMC2PHH,7)
// PSMC2PHL<PSMC2PH2>
extern volatile __bit                   PSMC2PH2            __at(0x420A);	// @ (0x841 * 8 + 2)
#define                                 PSMC2PH2_bit        _BIT_ACCESS(PSMC2PHL,2)
// PSMC2PHL<PSMC2PH3>
extern volatile __bit                   PSMC2PH3            __at(0x420B);	// @ (0x841 * 8 + 3)
#define                                 PSMC2PH3_bit        _BIT_ACCESS(PSMC2PHL,3)
// PSMC2PHL<PSMC2PH4>
extern volatile __bit                   PSMC2PH4            __at(0x420C);	// @ (0x841 * 8 + 4)
#define                                 PSMC2PH4_bit        _BIT_ACCESS(PSMC2PHL,4)
// PSMC2PHL<PSMC2PH5>
extern volatile __bit                   PSMC2PH5            __at(0x420D);	// @ (0x841 * 8 + 5)
#define                                 PSMC2PH5_bit        _BIT_ACCESS(PSMC2PHL,5)
// PSMC2PHL<PSMC2PH6>
extern volatile __bit                   PSMC2PH6            __at(0x420E);	// @ (0x841 * 8 + 6)
#define                                 PSMC2PH6_bit        _BIT_ACCESS(PSMC2PHL,6)
// PSMC2PHL<PSMC2PH7>
extern volatile __bit                   PSMC2PH7            __at(0x420F);	// @ (0x841 * 8 + 7)
#define                                 PSMC2PH7_bit        _BIT_ACCESS(PSMC2PHL,7)
// PSMC2PHH<PSMC2PH8>
extern volatile __bit                   PSMC2PH8            __at(0x4210);	// @ (0x842 * 8 + 0)
#define                                 PSMC2PH8_bit        _BIT_ACCESS(PSMC2PHH,0)
// PSMC2PHH<PSMC2PH9>
extern volatile __bit                   PSMC2PH9            __at(0x4211);	// @ (0x842 * 8 + 1)
#define                                 PSMC2PH9_bit        _BIT_ACCESS(PSMC2PHH,1)
// PSMC2PRL<PSMC2PR0>
extern volatile __bit                   PSMC2PR0            __at(0x4228);	// @ (0x845 * 8 + 0)
#define                                 PSMC2PR0_bit        _BIT_ACCESS(PSMC2PRL,0)
// PSMC2PRL<PSMC2PR1>
extern volatile __bit                   PSMC2PR1            __at(0x4229);	// @ (0x845 * 8 + 1)
#define                                 PSMC2PR1_bit        _BIT_ACCESS(PSMC2PRL,1)
// PSMC2PRH<PSMC2PR10>
extern volatile __bit                   PSMC2PR10           __at(0x4232);	// @ (0x846 * 8 + 2)
#define                                 PSMC2PR10_bit       _BIT_ACCESS(PSMC2PRH,2)
// PSMC2PRH<PSMC2PR11>
extern volatile __bit                   PSMC2PR11           __at(0x4233);	// @ (0x846 * 8 + 3)
#define                                 PSMC2PR11_bit       _BIT_ACCESS(PSMC2PRH,3)
// PSMC2PRH<PSMC2PR12>
extern volatile __bit                   PSMC2PR12           __at(0x4234);	// @ (0x846 * 8 + 4)
#define                                 PSMC2PR12_bit       _BIT_ACCESS(PSMC2PRH,4)
// PSMC2PRH<PSMC2PR13>
extern volatile __bit                   PSMC2PR13           __at(0x4235);	// @ (0x846 * 8 + 5)
#define                                 PSMC2PR13_bit       _BIT_ACCESS(PSMC2PRH,5)
// PSMC2PRH<PSMC2PR14>
extern volatile __bit                   PSMC2PR14           __at(0x4236);	// @ (0x846 * 8 + 6)
#define                                 PSMC2PR14_bit       _BIT_ACCESS(PSMC2PRH,6)
// PSMC2PRH<PSMC2PR15>
extern volatile __bit                   PSMC2PR15           __at(0x4237);	// @ (0x846 * 8 + 7)
#define                                 PSMC2PR15_bit       _BIT_ACCESS(PSMC2PRH,7)
// PSMC2PRL<PSMC2PR2>
extern volatile __bit                   PSMC2PR2            __at(0x422A);	// @ (0x845 * 8 + 2)
#define                                 PSMC2PR2_bit        _BIT_ACCESS(PSMC2PRL,2)
// PSMC2PRL<PSMC2PR3>
extern volatile __bit                   PSMC2PR3            __at(0x422B);	// @ (0x845 * 8 + 3)
#define                                 PSMC2PR3_bit        _BIT_ACCESS(PSMC2PRL,3)
// PSMC2PRL<PSMC2PR4>
extern volatile __bit                   PSMC2PR4            __at(0x422C);	// @ (0x845 * 8 + 4)
#define                                 PSMC2PR4_bit        _BIT_ACCESS(PSMC2PRL,4)
// PSMC2PRL<PSMC2PR5>
extern volatile __bit                   PSMC2PR5            __at(0x422D);	// @ (0x845 * 8 + 5)
#define                                 PSMC2PR5_bit        _BIT_ACCESS(PSMC2PRL,5)
// PSMC2PRL<PSMC2PR6>
extern volatile __bit                   PSMC2PR6            __at(0x422E);	// @ (0x845 * 8 + 6)
#define                                 PSMC2PR6_bit        _BIT_ACCESS(PSMC2PRL,6)
// PSMC2PRL<PSMC2PR7>
extern volatile __bit                   PSMC2PR7            __at(0x422F);	// @ (0x845 * 8 + 7)
#define                                 PSMC2PR7_bit        _BIT_ACCESS(PSMC2PRL,7)
// PSMC2PRH<PSMC2PR8>
extern volatile __bit                   PSMC2PR8            __at(0x4230);	// @ (0x846 * 8 + 0)
#define                                 PSMC2PR8_bit        _BIT_ACCESS(PSMC2PRH,0)
// PSMC2PRH<PSMC2PR9>
extern volatile __bit                   PSMC2PR9            __at(0x4231);	// @ (0x846 * 8 + 1)
#define                                 PSMC2PR9_bit        _BIT_ACCESS(PSMC2PRH,1)
// PIE4<PSMC2SIE>
extern volatile __bit                   PSMC2SIE            __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 PSMC2SIE_bit        _BIT_ACCESS(PIE4,1)
// PIR4<PSMC2SIF>
extern volatile __bit                   PSMC2SIF            __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 PSMC2SIF_bit        _BIT_ACCESS(PIR4,1)
// PIE4<PSMC2TIE>
extern volatile __bit                   PSMC2TIE            __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 PSMC2TIE_bit        _BIT_ACCESS(PIE4,5)
// PIR4<PSMC2TIF>
extern volatile __bit                   PSMC2TIF            __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 PSMC2TIF_bit        _BIT_ACCESS(PIR4,5)
// PSMC2TMRL<PSMC2TMR0>
extern volatile __bit                   PSMC2TMR0           __at(0x4238);	// @ (0x847 * 8 + 0)
#define                                 PSMC2TMR0_bit       _BIT_ACCESS(PSMC2TMRL,0)
// PSMC2TMRL<PSMC2TMR1>
extern volatile __bit                   PSMC2TMR1           __at(0x4239);	// @ (0x847 * 8 + 1)
#define                                 PSMC2TMR1_bit       _BIT_ACCESS(PSMC2TMRL,1)
// PSMC2TMRH<PSMC2TMR10>
extern volatile __bit                   PSMC2TMR10          __at(0x4242);	// @ (0x848 * 8 + 2)
#define                                 PSMC2TMR10_bit      _BIT_ACCESS(PSMC2TMRH,2)
// PSMC2TMRH<PSMC2TMR11>
extern volatile __bit                   PSMC2TMR11          __at(0x4243);	// @ (0x848 * 8 + 3)
#define                                 PSMC2TMR11_bit      _BIT_ACCESS(PSMC2TMRH,3)
// PSMC2TMRH<PSMC2TMR12>
extern volatile __bit                   PSMC2TMR12          __at(0x4244);	// @ (0x848 * 8 + 4)
#define                                 PSMC2TMR12_bit      _BIT_ACCESS(PSMC2TMRH,4)
// PSMC2TMRH<PSMC2TMR13>
extern volatile __bit                   PSMC2TMR13          __at(0x4245);	// @ (0x848 * 8 + 5)
#define                                 PSMC2TMR13_bit      _BIT_ACCESS(PSMC2TMRH,5)
// PSMC2TMRH<PSMC2TMR14>
extern volatile __bit                   PSMC2TMR14          __at(0x4246);	// @ (0x848 * 8 + 6)
#define                                 PSMC2TMR14_bit      _BIT_ACCESS(PSMC2TMRH,6)
// PSMC2TMRH<PSMC2TMR15>
extern volatile __bit                   PSMC2TMR15          __at(0x4247);	// @ (0x848 * 8 + 7)
#define                                 PSMC2TMR15_bit      _BIT_ACCESS(PSMC2TMRH,7)
// PSMC2TMRL<PSMC2TMR2>
extern volatile __bit                   PSMC2TMR2           __at(0x423A);	// @ (0x847 * 8 + 2)
#define                                 PSMC2TMR2_bit       _BIT_ACCESS(PSMC2TMRL,2)
// PSMC2TMRL<PSMC2TMR3>
extern volatile __bit                   PSMC2TMR3           __at(0x423B);	// @ (0x847 * 8 + 3)
#define                                 PSMC2TMR3_bit       _BIT_ACCESS(PSMC2TMRL,3)
// PSMC2TMRL<PSMC2TMR4>
extern volatile __bit                   PSMC2TMR4           __at(0x423C);	// @ (0x847 * 8 + 4)
#define                                 PSMC2TMR4_bit       _BIT_ACCESS(PSMC2TMRL,4)
// PSMC2TMRL<PSMC2TMR5>
extern volatile __bit                   PSMC2TMR5           __at(0x423D);	// @ (0x847 * 8 + 5)
#define                                 PSMC2TMR5_bit       _BIT_ACCESS(PSMC2TMRL,5)
// PSMC2TMRL<PSMC2TMR6>
extern volatile __bit                   PSMC2TMR6           __at(0x423E);	// @ (0x847 * 8 + 6)
#define                                 PSMC2TMR6_bit       _BIT_ACCESS(PSMC2TMRL,6)
// PSMC2TMRL<PSMC2TMR7>
extern volatile __bit                   PSMC2TMR7           __at(0x423F);	// @ (0x847 * 8 + 7)
#define                                 PSMC2TMR7_bit       _BIT_ACCESS(PSMC2TMRL,7)
// PSMC2TMRH<PSMC2TMR8>
extern volatile __bit                   PSMC2TMR8           __at(0x4240);	// @ (0x848 * 8 + 0)
#define                                 PSMC2TMR8_bit       _BIT_ACCESS(PSMC2TMRH,0)
// PSMC2TMRH<PSMC2TMR9>
extern volatile __bit                   PSMC2TMR9           __at(0x4241);	// @ (0x848 * 8 + 1)
#define                                 PSMC2TMR9_bit       _BIT_ACCESS(PSMC2TMRH,1)
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
// SSPCON2<RCEN>
extern volatile __bit                   RCEN                __at(0x10B3);	// @ (0x216 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSPCON2,3)
// BAUD1CON<RCIDL>
extern volatile __bit                   RCIDL               __at(0xCFE);	// @ (0x19F * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUD1CON,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// SSPCON2<RSEN>
extern volatile __bit                   RSEN                __at(0x10B1);	// @ (0x216 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSPCON2,1)
// RC1STA<RX9>
extern volatile __bit                   RX9                 __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RC1STA,6)
// RC1STA<RX9D>
extern volatile __bit                   RX9D                __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RC1STA,0)
// APFCON<RXSEL>
extern volatile __bit                   RXSEL               __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 RXSEL_bit           _BIT_ACCESS(APFCON,1)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x10A2);	// @ (0x214 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// SSPCON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0x10BA);	// @ (0x217 * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSPCON3,2)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// SSPCON3<SCIE>
extern volatile __bit                   SCIE                __at(0x10BD);	// @ (0x217 * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSPCON3,5)
// BAUD1CON<SCKP>
extern volatile __bit                   SCKP                __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUD1CON,4)
// APFCON<SCKSEL>
extern volatile __bit                   SCKSEL              __at(0x8EC);	// @ (0x11D * 8 + 4)
#define                                 SCKSEL_bit          _BIT_ACCESS(APFCON,4)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// SSPCON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x10BB);	// @ (0x217 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSPCON3,3)
// APFCON<SDISEL>
extern volatile __bit                   SDISEL              __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 SDISEL_bit          _BIT_ACCESS(APFCON,3)
// APFCON<SDOSEL>
extern volatile __bit                   SDOSEL              __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 SDOSEL_bit          _BIT_ACCESS(APFCON,5)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x10B0);	// @ (0x216 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// TX1STA<SENDB>
extern volatile __bit                   SENDB               __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TX1STA,3)
// SLRCONA<SLRCONA0>
extern volatile __bit                   SLRCONA0            __at(0x1860);	// @ (0x30C * 8 + 0)
#define                                 SLRCONA0_bit        _BIT_ACCESS(SLRCONA,0)
// SLRCONA<SLRCONA1>
extern volatile __bit                   SLRCONA1            __at(0x1861);	// @ (0x30C * 8 + 1)
#define                                 SLRCONA1_bit        _BIT_ACCESS(SLRCONA,1)
// SLRCONA<SLRCONA2>
extern volatile __bit                   SLRCONA2            __at(0x1862);	// @ (0x30C * 8 + 2)
#define                                 SLRCONA2_bit        _BIT_ACCESS(SLRCONA,2)
// SLRCONA<SLRCONA3>
extern volatile __bit                   SLRCONA3            __at(0x1863);	// @ (0x30C * 8 + 3)
#define                                 SLRCONA3_bit        _BIT_ACCESS(SLRCONA,3)
// SLRCONA<SLRCONA4>
extern volatile __bit                   SLRCONA4            __at(0x1864);	// @ (0x30C * 8 + 4)
#define                                 SLRCONA4_bit        _BIT_ACCESS(SLRCONA,4)
// SLRCONA<SLRCONA5>
extern volatile __bit                   SLRCONA5            __at(0x1865);	// @ (0x30C * 8 + 5)
#define                                 SLRCONA5_bit        _BIT_ACCESS(SLRCONA,5)
// SLRCONA<SLRCONA6>
extern volatile __bit                   SLRCONA6            __at(0x1866);	// @ (0x30C * 8 + 6)
#define                                 SLRCONA6_bit        _BIT_ACCESS(SLRCONA,6)
// SLRCONA<SLRCONA7>
extern volatile __bit                   SLRCONA7            __at(0x1867);	// @ (0x30C * 8 + 7)
#define                                 SLRCONA7_bit        _BIT_ACCESS(SLRCONA,7)
// SLRCONB<SLRCONB0>
extern volatile __bit                   SLRCONB0            __at(0x1868);	// @ (0x30D * 8 + 0)
#define                                 SLRCONB0_bit        _BIT_ACCESS(SLRCONB,0)
// SLRCONB<SLRCONB1>
extern volatile __bit                   SLRCONB1            __at(0x1869);	// @ (0x30D * 8 + 1)
#define                                 SLRCONB1_bit        _BIT_ACCESS(SLRCONB,1)
// SLRCONB<SLRCONB2>
extern volatile __bit                   SLRCONB2            __at(0x186A);	// @ (0x30D * 8 + 2)
#define                                 SLRCONB2_bit        _BIT_ACCESS(SLRCONB,2)
// SLRCONB<SLRCONB3>
extern volatile __bit                   SLRCONB3            __at(0x186B);	// @ (0x30D * 8 + 3)
#define                                 SLRCONB3_bit        _BIT_ACCESS(SLRCONB,3)
// SLRCONB<SLRCONB4>
extern volatile __bit                   SLRCONB4            __at(0x186C);	// @ (0x30D * 8 + 4)
#define                                 SLRCONB4_bit        _BIT_ACCESS(SLRCONB,4)
// SLRCONB<SLRCONB5>
extern volatile __bit                   SLRCONB5            __at(0x186D);	// @ (0x30D * 8 + 5)
#define                                 SLRCONB5_bit        _BIT_ACCESS(SLRCONB,5)
// SLRCONB<SLRCONB6>
extern volatile __bit                   SLRCONB6            __at(0x186E);	// @ (0x30D * 8 + 6)
#define                                 SLRCONB6_bit        _BIT_ACCESS(SLRCONB,6)
// SLRCONB<SLRCONB7>
extern volatile __bit                   SLRCONB7            __at(0x186F);	// @ (0x30D * 8 + 7)
#define                                 SLRCONB7_bit        _BIT_ACCESS(SLRCONB,7)
// SLRCONC<SLRCONC0>
extern volatile __bit                   SLRCONC0            __at(0x1870);	// @ (0x30E * 8 + 0)
#define                                 SLRCONC0_bit        _BIT_ACCESS(SLRCONC,0)
// SLRCONC<SLRCONC1>
extern volatile __bit                   SLRCONC1            __at(0x1871);	// @ (0x30E * 8 + 1)
#define                                 SLRCONC1_bit        _BIT_ACCESS(SLRCONC,1)
// SLRCONC<SLRCONC2>
extern volatile __bit                   SLRCONC2            __at(0x1872);	// @ (0x30E * 8 + 2)
#define                                 SLRCONC2_bit        _BIT_ACCESS(SLRCONC,2)
// SLRCONC<SLRCONC3>
extern volatile __bit                   SLRCONC3            __at(0x1873);	// @ (0x30E * 8 + 3)
#define                                 SLRCONC3_bit        _BIT_ACCESS(SLRCONC,3)
// SLRCONC<SLRCONC4>
extern volatile __bit                   SLRCONC4            __at(0x1874);	// @ (0x30E * 8 + 4)
#define                                 SLRCONC4_bit        _BIT_ACCESS(SLRCONC,4)
// SLRCONC<SLRCONC5>
extern volatile __bit                   SLRCONC5            __at(0x1875);	// @ (0x30E * 8 + 5)
#define                                 SLRCONC5_bit        _BIT_ACCESS(SLRCONC,5)
// SLRCONC<SLRCONC6>
extern volatile __bit                   SLRCONC6            __at(0x1876);	// @ (0x30E * 8 + 6)
#define                                 SLRCONC6_bit        _BIT_ACCESS(SLRCONC,6)
// SLRCONC<SLRCONC7>
extern volatile __bit                   SLRCONC7            __at(0x1877);	// @ (0x30E * 8 + 7)
#define                                 SLRCONC7_bit        _BIT_ACCESS(SLRCONC,7)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x10A7);	// @ (0x214 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// RC1STA<SPEN>
extern volatile __bit                   SPEN                __at(0xCEF);	// @ (0x19D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RC1STA,7)
// OSCCON<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCCON,7)
// RC1STA<SREN>
extern volatile __bit                   SREN                __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RC1STA,5)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// SSPCON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x10AD);	// @ (0x215 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON1,5)
// SSPCON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x10A8);	// @ (0x215 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSPCON1,0)
// SSPCON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x10A9);	// @ (0x215 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSPCON1,1)
// SSPCON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x10AA);	// @ (0x215 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSPCON1,2)
// SSPCON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x10AB);	// @ (0x215 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON1,3)
// SSPCON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x10AE);	// @ (0x215 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON1,6)
// PCON<STKOVF>
extern volatile __bit                   STKOVF              __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON,7)
// PCON<STKUNF>
extern volatile __bit                   STKUNF              __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON,6)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TX1STA<SYNC>
extern volatile __bit                   SYNC                __at(0xCF4);	// @ (0x19E * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TX1STA,4)
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
// TRISE<TRISE3>
extern volatile __bit                   TRISE3              __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 TRISE3_bit          _BIT_ACCESS(TRISE,3)
// TX1STA<TRMT>
extern volatile __bit                   TRMT                __at(0xCF1);	// @ (0x19E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TX1STA,1)
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
// TX1STA<TX9>
extern volatile __bit                   TX9                 __at(0xCF6);	// @ (0x19E * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TX1STA,6)
// TX1STA<TX9D>
extern volatile __bit                   TX9D                __at(0xCF0);	// @ (0x19E * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TX1STA,0)
// TX1STA<TXEN>
extern volatile __bit                   TXEN                __at(0xCF5);	// @ (0x19E * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TX1STA,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// APFCON<TXSEL>
extern volatile __bit                   TXSEL               __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 TXSEL_bit           _BIT_ACCESS(APFCON,2)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x10A1);	// @ (0x214 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// VREGCON<VREGPM>
extern volatile __bit                   VREGPM              __at(0xCB9);	// @ (0x197 * 8 + 1)
#define                                 VREGPM_bit          _BIT_ACCESS(VREGCON,1)
// SSPCON1<WCOL>
extern volatile __bit                   WCOL                __at(0x10AF);	// @ (0x215 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON1,7)
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
// WPUA<WPUA6>
extern volatile __bit                   WPUA6               __at(0x1066);	// @ (0x20C * 8 + 6)
#define                                 WPUA6_bit           _BIT_ACCESS(WPUA,6)
// WPUA<WPUA7>
extern volatile __bit                   WPUA7               __at(0x1067);	// @ (0x20C * 8 + 7)
#define                                 WPUA7_bit           _BIT_ACCESS(WPUA,7)
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
// WPUC<WPUC0>
extern volatile __bit                   WPUC0               __at(0x1070);	// @ (0x20E * 8 + 0)
#define                                 WPUC0_bit           _BIT_ACCESS(WPUC,0)
// WPUC<WPUC1>
extern volatile __bit                   WPUC1               __at(0x1071);	// @ (0x20E * 8 + 1)
#define                                 WPUC1_bit           _BIT_ACCESS(WPUC,1)
// WPUC<WPUC2>
extern volatile __bit                   WPUC2               __at(0x1072);	// @ (0x20E * 8 + 2)
#define                                 WPUC2_bit           _BIT_ACCESS(WPUC,2)
// WPUC<WPUC3>
extern volatile __bit                   WPUC3               __at(0x1073);	// @ (0x20E * 8 + 3)
#define                                 WPUC3_bit           _BIT_ACCESS(WPUC,3)
// WPUC<WPUC4>
extern volatile __bit                   WPUC4               __at(0x1074);	// @ (0x20E * 8 + 4)
#define                                 WPUC4_bit           _BIT_ACCESS(WPUC,4)
// WPUC<WPUC5>
extern volatile __bit                   WPUC5               __at(0x1075);	// @ (0x20E * 8 + 5)
#define                                 WPUC5_bit           _BIT_ACCESS(WPUC,5)
// WPUC<WPUC6>
extern volatile __bit                   WPUC6               __at(0x1076);	// @ (0x20E * 8 + 6)
#define                                 WPUC6_bit           _BIT_ACCESS(WPUC,6)
// WPUC<WPUC7>
extern volatile __bit                   WPUC7               __at(0x1077);	// @ (0x20E * 8 + 7)
#define                                 WPUC7_bit           _BIT_ACCESS(WPUC,7)
// WPUE<WPUE3>
extern volatile __bit                   WPUE3               __at(0x1083);	// @ (0x210 * 8 + 3)
#define                                 WPUE3_bit           _BIT_ACCESS(WPUE,3)
// EECON1<WR>
extern volatile __bit                   WR                  __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
// BAUD1CON<WUE>
extern volatile __bit                   WUE                 __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUD1CON,1)
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

#endif // _PIC16F1783_H_
