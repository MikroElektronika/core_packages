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

#ifndef _PIC16LF1936_H_
#define _PIC16LF1936_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF1936
 */
#ifndef _XC_H_
#warning Header file pic16lf1936.h included directly. Use #include <xc.h> instead.
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
        unsigned SSPIF                  :1;
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
        unsigned                        :1;
        unsigned LCDIF                  :1;
        unsigned BCLIF                  :1;
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
#define _PIR2_LCDIF_POSN                                    0x2
#define _PIR2_LCDIF_POSITION                                0x2
#define _PIR2_LCDIF_SIZE                                    0x1
#define _PIR2_LCDIF_LENGTH                                  0x1
#define _PIR2_LCDIF_MASK                                    0x4
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8
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

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x013);
#ifndef _LIB_BUILD
asm("PIR3 equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR4IF                 :1;
        unsigned                        :1;
        unsigned TMR6IF                 :1;
        unsigned CCP3IF                 :1;
        unsigned CCP4IF                 :1;
        unsigned CCP5IF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x013);
// bitfield macros
#define _PIR3_TMR4IF_POSN                                   0x1
#define _PIR3_TMR4IF_POSITION                               0x1
#define _PIR3_TMR4IF_SIZE                                   0x1
#define _PIR3_TMR4IF_LENGTH                                 0x1
#define _PIR3_TMR4IF_MASK                                   0x2
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

// Register: CPSCON0
#define CPSCON0 CPSCON0
extern volatile unsigned char           CPSCON0             __at(0x01E);
#ifndef _LIB_BUILD
asm("CPSCON0 equ 01Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0XCS                  :1;
        unsigned CPSOUT                 :1;
        unsigned CPSRNG                 :2;
        unsigned                        :3;
        unsigned CPSON                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CPSRNG0                :1;
        unsigned CPSRNG1                :1;
    };
} CPSCON0bits_t;
extern volatile CPSCON0bits_t CPSCON0bits __at(0x01E);
// bitfield macros
#define _CPSCON0_T0XCS_POSN                                 0x0
#define _CPSCON0_T0XCS_POSITION                             0x0
#define _CPSCON0_T0XCS_SIZE                                 0x1
#define _CPSCON0_T0XCS_LENGTH                               0x1
#define _CPSCON0_T0XCS_MASK                                 0x1
#define _CPSCON0_CPSOUT_POSN                                0x1
#define _CPSCON0_CPSOUT_POSITION                            0x1
#define _CPSCON0_CPSOUT_SIZE                                0x1
#define _CPSCON0_CPSOUT_LENGTH                              0x1
#define _CPSCON0_CPSOUT_MASK                                0x2
#define _CPSCON0_CPSRNG_POSN                                0x2
#define _CPSCON0_CPSRNG_POSITION                            0x2
#define _CPSCON0_CPSRNG_SIZE                                0x2
#define _CPSCON0_CPSRNG_LENGTH                              0x2
#define _CPSCON0_CPSRNG_MASK                                0xC
#define _CPSCON0_CPSON_POSN                                 0x7
#define _CPSCON0_CPSON_POSITION                             0x7
#define _CPSCON0_CPSON_SIZE                                 0x1
#define _CPSCON0_CPSON_LENGTH                               0x1
#define _CPSCON0_CPSON_MASK                                 0x80
#define _CPSCON0_CPSRNG0_POSN                               0x2
#define _CPSCON0_CPSRNG0_POSITION                           0x2
#define _CPSCON0_CPSRNG0_SIZE                               0x1
#define _CPSCON0_CPSRNG0_LENGTH                             0x1
#define _CPSCON0_CPSRNG0_MASK                               0x4
#define _CPSCON0_CPSRNG1_POSN                               0x3
#define _CPSCON0_CPSRNG1_POSITION                           0x3
#define _CPSCON0_CPSRNG1_SIZE                               0x1
#define _CPSCON0_CPSRNG1_LENGTH                             0x1
#define _CPSCON0_CPSRNG1_MASK                               0x8

// Register: CPSCON1
#define CPSCON1 CPSCON1
extern volatile unsigned char           CPSCON1             __at(0x01F);
#ifndef _LIB_BUILD
asm("CPSCON1 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CPSCH                  :3;
    };
    struct {
        unsigned CPSCH0                 :1;
        unsigned CPSCH1                 :1;
        unsigned CPSCH2                 :1;
    };
} CPSCON1bits_t;
extern volatile CPSCON1bits_t CPSCON1bits __at(0x01F);
// bitfield macros
#define _CPSCON1_CPSCH_POSN                                 0x0
#define _CPSCON1_CPSCH_POSITION                             0x0
#define _CPSCON1_CPSCH_SIZE                                 0x3
#define _CPSCON1_CPSCH_LENGTH                               0x3
#define _CPSCON1_CPSCH_MASK                                 0x7
#define _CPSCON1_CPSCH0_POSN                                0x0
#define _CPSCON1_CPSCH0_POSITION                            0x0
#define _CPSCON1_CPSCH0_SIZE                                0x1
#define _CPSCON1_CPSCH0_LENGTH                              0x1
#define _CPSCON1_CPSCH0_MASK                                0x1
#define _CPSCON1_CPSCH1_POSN                                0x1
#define _CPSCON1_CPSCH1_POSITION                            0x1
#define _CPSCON1_CPSCH1_SIZE                                0x1
#define _CPSCON1_CPSCH1_LENGTH                              0x1
#define _CPSCON1_CPSCH1_MASK                                0x2
#define _CPSCON1_CPSCH2_POSN                                0x2
#define _CPSCON1_CPSCH2_POSITION                            0x2
#define _CPSCON1_CPSCH2_SIZE                                0x1
#define _CPSCON1_CPSCH2_LENGTH                              0x1
#define _CPSCON1_CPSCH2_MASK                                0x4

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
        unsigned SSPIE                  :1;
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
        unsigned                        :1;
        unsigned LCDIE                  :1;
        unsigned BCLIE                  :1;
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
#define _PIE2_LCDIE_POSN                                    0x2
#define _PIE2_LCDIE_POSITION                                0x2
#define _PIE2_LCDIE_SIZE                                    0x1
#define _PIE2_LCDIE_LENGTH                                  0x1
#define _PIE2_LCDIE_MASK                                    0x4
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8
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

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x093);
#ifndef _LIB_BUILD
asm("PIE3 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR4IE                 :1;
        unsigned                        :1;
        unsigned TMR6IE                 :1;
        unsigned CCP3IE                 :1;
        unsigned CCP4IE                 :1;
        unsigned CCP5IE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x093);
// bitfield macros
#define _PIE3_TMR4IE_POSN                                   0x1
#define _PIE3_TMR4IE_POSITION                               0x1
#define _PIE3_TMR4IE_SIZE                                   0x1
#define _PIE3_TMR4IE_LENGTH                                 0x1
#define _PIE3_TMR4IE_MASK                                   0x2
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
        unsigned                        :2;
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
        unsigned ADNREF                 :1;
        unsigned                        :1;
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
#define _ADCON1_ADNREF_POSN                                 0x2
#define _ADCON1_ADNREF_POSITION                             0x2
#define _ADCON1_ADNREF_SIZE                                 0x1
#define _ADCON1_ADNREF_LENGTH                               0x1
#define _ADCON1_ADNREF_MASK                                 0x4
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

// Register: LATE
#define LATE LATE
extern volatile unsigned char           LATE                __at(0x110);
#ifndef _LIB_BUILD
asm("LATE equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned LATE3                  :1;
    };
} LATEbits_t;
extern volatile LATEbits_t LATEbits __at(0x110);
// bitfield macros
#define _LATE_LATE3_POSN                                    0x3
#define _LATE_LATE3_POSITION                                0x3
#define _LATE_LATE3_SIZE                                    0x1
#define _LATE_LATE3_LENGTH                                  0x1
#define _LATE_LATE3_MASK                                    0x8

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
        unsigned C1NCH                  :2;
        unsigned                        :2;
        unsigned C1PCH                  :2;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned                        :2;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
    };
} CM1CON1bits_t;
extern volatile CM1CON1bits_t CM1CON1bits __at(0x112);
// bitfield macros
#define _CM1CON1_C1NCH_POSN                                 0x0
#define _CM1CON1_C1NCH_POSITION                             0x0
#define _CM1CON1_C1NCH_SIZE                                 0x2
#define _CM1CON1_C1NCH_LENGTH                               0x2
#define _CM1CON1_C1NCH_MASK                                 0x3
#define _CM1CON1_C1PCH_POSN                                 0x4
#define _CM1CON1_C1PCH_POSITION                             0x4
#define _CM1CON1_C1PCH_SIZE                                 0x2
#define _CM1CON1_C1PCH_LENGTH                               0x2
#define _CM1CON1_C1PCH_MASK                                 0x30
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
        unsigned C2NCH                  :2;
        unsigned                        :2;
        unsigned C2PCH                  :2;
        unsigned C2INTN                 :1;
        unsigned C2INTP                 :1;
    };
    struct {
        unsigned C2NCH0                 :1;
        unsigned C2NCH1                 :1;
        unsigned                        :2;
        unsigned C2PCH0                 :1;
        unsigned C2PCH1                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0x114);
// bitfield macros
#define _CM2CON1_C2NCH_POSN                                 0x0
#define _CM2CON1_C2NCH_POSITION                             0x0
#define _CM2CON1_C2NCH_SIZE                                 0x2
#define _CM2CON1_C2NCH_LENGTH                               0x2
#define _CM2CON1_C2NCH_MASK                                 0x3
#define _CM2CON1_C2PCH_POSN                                 0x4
#define _CM2CON1_C2PCH_POSITION                             0x4
#define _CM2CON1_C2PCH_SIZE                                 0x2
#define _CM2CON1_C2PCH_LENGTH                               0x2
#define _CM2CON1_C2PCH_MASK                                 0x30
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
        unsigned                        :6;
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
        unsigned DACNSS                 :1;
        unsigned                        :1;
        unsigned DACPSS                 :2;
        unsigned                        :1;
        unsigned DACOE                  :1;
        unsigned DACLPS                 :1;
        unsigned DACEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned DACPSS0                :1;
        unsigned DACPSS1                :1;
    };
} DACCON0bits_t;
extern volatile DACCON0bits_t DACCON0bits __at(0x118);
// bitfield macros
#define _DACCON0_DACNSS_POSN                                0x0
#define _DACCON0_DACNSS_POSITION                            0x0
#define _DACCON0_DACNSS_SIZE                                0x1
#define _DACCON0_DACNSS_LENGTH                              0x1
#define _DACCON0_DACNSS_MASK                                0x1
#define _DACCON0_DACPSS_POSN                                0x2
#define _DACCON0_DACPSS_POSITION                            0x2
#define _DACCON0_DACPSS_SIZE                                0x2
#define _DACCON0_DACPSS_LENGTH                              0x2
#define _DACCON0_DACPSS_MASK                                0xC
#define _DACCON0_DACOE_POSN                                 0x5
#define _DACCON0_DACOE_POSITION                             0x5
#define _DACCON0_DACOE_SIZE                                 0x1
#define _DACCON0_DACOE_LENGTH                               0x1
#define _DACCON0_DACOE_MASK                                 0x20
#define _DACCON0_DACLPS_POSN                                0x6
#define _DACCON0_DACLPS_POSITION                            0x6
#define _DACCON0_DACLPS_SIZE                                0x1
#define _DACCON0_DACLPS_LENGTH                              0x1
#define _DACCON0_DACLPS_MASK                                0x40
#define _DACCON0_DACEN_POSN                                 0x7
#define _DACCON0_DACEN_POSITION                             0x7
#define _DACCON0_DACEN_SIZE                                 0x1
#define _DACCON0_DACEN_LENGTH                               0x1
#define _DACCON0_DACEN_MASK                                 0x80
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

// Register: SRCON0
#define SRCON0 SRCON0
extern volatile unsigned char           SRCON0              __at(0x11A);
#ifndef _LIB_BUILD
asm("SRCON0 equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SRPR                   :1;
        unsigned SRPS                   :1;
        unsigned SRNQEN                 :1;
        unsigned SRQEN                  :1;
        unsigned SRCLK                  :3;
        unsigned SRLEN                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SRCLK0                 :1;
        unsigned SRCLK1                 :1;
        unsigned SRCLK2                 :1;
    };
} SRCON0bits_t;
extern volatile SRCON0bits_t SRCON0bits __at(0x11A);
// bitfield macros
#define _SRCON0_SRPR_POSN                                   0x0
#define _SRCON0_SRPR_POSITION                               0x0
#define _SRCON0_SRPR_SIZE                                   0x1
#define _SRCON0_SRPR_LENGTH                                 0x1
#define _SRCON0_SRPR_MASK                                   0x1
#define _SRCON0_SRPS_POSN                                   0x1
#define _SRCON0_SRPS_POSITION                               0x1
#define _SRCON0_SRPS_SIZE                                   0x1
#define _SRCON0_SRPS_LENGTH                                 0x1
#define _SRCON0_SRPS_MASK                                   0x2
#define _SRCON0_SRNQEN_POSN                                 0x2
#define _SRCON0_SRNQEN_POSITION                             0x2
#define _SRCON0_SRNQEN_SIZE                                 0x1
#define _SRCON0_SRNQEN_LENGTH                               0x1
#define _SRCON0_SRNQEN_MASK                                 0x4
#define _SRCON0_SRQEN_POSN                                  0x3
#define _SRCON0_SRQEN_POSITION                              0x3
#define _SRCON0_SRQEN_SIZE                                  0x1
#define _SRCON0_SRQEN_LENGTH                                0x1
#define _SRCON0_SRQEN_MASK                                  0x8
#define _SRCON0_SRCLK_POSN                                  0x4
#define _SRCON0_SRCLK_POSITION                              0x4
#define _SRCON0_SRCLK_SIZE                                  0x3
#define _SRCON0_SRCLK_LENGTH                                0x3
#define _SRCON0_SRCLK_MASK                                  0x70
#define _SRCON0_SRLEN_POSN                                  0x7
#define _SRCON0_SRLEN_POSITION                              0x7
#define _SRCON0_SRLEN_SIZE                                  0x1
#define _SRCON0_SRLEN_LENGTH                                0x1
#define _SRCON0_SRLEN_MASK                                  0x80
#define _SRCON0_SRCLK0_POSN                                 0x4
#define _SRCON0_SRCLK0_POSITION                             0x4
#define _SRCON0_SRCLK0_SIZE                                 0x1
#define _SRCON0_SRCLK0_LENGTH                               0x1
#define _SRCON0_SRCLK0_MASK                                 0x10
#define _SRCON0_SRCLK1_POSN                                 0x5
#define _SRCON0_SRCLK1_POSITION                             0x5
#define _SRCON0_SRCLK1_SIZE                                 0x1
#define _SRCON0_SRCLK1_LENGTH                               0x1
#define _SRCON0_SRCLK1_MASK                                 0x20
#define _SRCON0_SRCLK2_POSN                                 0x6
#define _SRCON0_SRCLK2_POSITION                             0x6
#define _SRCON0_SRCLK2_SIZE                                 0x1
#define _SRCON0_SRCLK2_LENGTH                               0x1
#define _SRCON0_SRCLK2_MASK                                 0x40

// Register: SRCON1
#define SRCON1 SRCON1
extern volatile unsigned char           SRCON1              __at(0x11B);
#ifndef _LIB_BUILD
asm("SRCON1 equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SRRC1E                 :1;
        unsigned SRRC2E                 :1;
        unsigned SRRCKE                 :1;
        unsigned SRRPE                  :1;
        unsigned SRSC1E                 :1;
        unsigned SRSC2E                 :1;
        unsigned SRSCKE                 :1;
        unsigned SRSPE                  :1;
    };
} SRCON1bits_t;
extern volatile SRCON1bits_t SRCON1bits __at(0x11B);
// bitfield macros
#define _SRCON1_SRRC1E_POSN                                 0x0
#define _SRCON1_SRRC1E_POSITION                             0x0
#define _SRCON1_SRRC1E_SIZE                                 0x1
#define _SRCON1_SRRC1E_LENGTH                               0x1
#define _SRCON1_SRRC1E_MASK                                 0x1
#define _SRCON1_SRRC2E_POSN                                 0x1
#define _SRCON1_SRRC2E_POSITION                             0x1
#define _SRCON1_SRRC2E_SIZE                                 0x1
#define _SRCON1_SRRC2E_LENGTH                               0x1
#define _SRCON1_SRRC2E_MASK                                 0x2
#define _SRCON1_SRRCKE_POSN                                 0x2
#define _SRCON1_SRRCKE_POSITION                             0x2
#define _SRCON1_SRRCKE_SIZE                                 0x1
#define _SRCON1_SRRCKE_LENGTH                               0x1
#define _SRCON1_SRRCKE_MASK                                 0x4
#define _SRCON1_SRRPE_POSN                                  0x3
#define _SRCON1_SRRPE_POSITION                              0x3
#define _SRCON1_SRRPE_SIZE                                  0x1
#define _SRCON1_SRRPE_LENGTH                                0x1
#define _SRCON1_SRRPE_MASK                                  0x8
#define _SRCON1_SRSC1E_POSN                                 0x4
#define _SRCON1_SRSC1E_POSITION                             0x4
#define _SRCON1_SRSC1E_SIZE                                 0x1
#define _SRCON1_SRSC1E_LENGTH                               0x1
#define _SRCON1_SRSC1E_MASK                                 0x10
#define _SRCON1_SRSC2E_POSN                                 0x5
#define _SRCON1_SRSC2E_POSITION                             0x5
#define _SRCON1_SRSC2E_SIZE                                 0x1
#define _SRCON1_SRSC2E_LENGTH                               0x1
#define _SRCON1_SRSC2E_MASK                                 0x20
#define _SRCON1_SRSCKE_POSN                                 0x6
#define _SRCON1_SRSCKE_POSITION                             0x6
#define _SRCON1_SRSCKE_SIZE                                 0x1
#define _SRCON1_SRSCKE_LENGTH                               0x1
#define _SRCON1_SRSCKE_MASK                                 0x40
#define _SRCON1_SRSPE_POSN                                  0x7
#define _SRCON1_SRSPE_POSITION                              0x7
#define _SRCON1_SRSPE_SIZE                                  0x1
#define _SRCON1_SRSPE_LENGTH                                0x1
#define _SRCON1_SRSPE_MASK                                  0x80

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
        unsigned SSSEL                  :1;
        unsigned C2OUTSEL               :1;
        unsigned SRNQSEL                :1;
        unsigned P2BSEL                 :1;
        unsigned T1GSEL                 :1;
        unsigned CCP3SEL                :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_CCP2SEL_POSN                                0x0
#define _APFCON_CCP2SEL_POSITION                            0x0
#define _APFCON_CCP2SEL_SIZE                                0x1
#define _APFCON_CCP2SEL_LENGTH                              0x1
#define _APFCON_CCP2SEL_MASK                                0x1
#define _APFCON_SSSEL_POSN                                  0x1
#define _APFCON_SSSEL_POSITION                              0x1
#define _APFCON_SSSEL_SIZE                                  0x1
#define _APFCON_SSSEL_LENGTH                                0x1
#define _APFCON_SSSEL_MASK                                  0x2
#define _APFCON_C2OUTSEL_POSN                               0x2
#define _APFCON_C2OUTSEL_POSITION                           0x2
#define _APFCON_C2OUTSEL_SIZE                               0x1
#define _APFCON_C2OUTSEL_LENGTH                             0x1
#define _APFCON_C2OUTSEL_MASK                               0x4
#define _APFCON_SRNQSEL_POSN                                0x3
#define _APFCON_SRNQSEL_POSITION                            0x3
#define _APFCON_SRNQSEL_SIZE                                0x1
#define _APFCON_SRNQSEL_LENGTH                              0x1
#define _APFCON_SRNQSEL_MASK                                0x8
#define _APFCON_P2BSEL_POSN                                 0x4
#define _APFCON_P2BSEL_POSITION                             0x4
#define _APFCON_P2BSEL_SIZE                                 0x1
#define _APFCON_P2BSEL_LENGTH                               0x1
#define _APFCON_P2BSEL_MASK                                 0x10
#define _APFCON_T1GSEL_POSN                                 0x5
#define _APFCON_T1GSEL_POSITION                             0x5
#define _APFCON_T1GSEL_SIZE                                 0x1
#define _APFCON_T1GSEL_LENGTH                               0x1
#define _APFCON_T1GSEL_MASK                                 0x20
#define _APFCON_CCP3SEL_POSN                                0x6
#define _APFCON_CCP3SEL_POSITION                            0x6
#define _APFCON_CCP3SEL_SIZE                                0x1
#define _APFCON_CCP3SEL_LENGTH                              0x1
#define _APFCON_CCP3SEL_MASK                                0x40

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
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SP1BRGLbits_t;
extern volatile SP1BRGLbits_t SP1BRGLbits __at(0x19B);
// bitfield macros
#define _SP1BRGL_SPBRGL_POSN                                0x0
#define _SP1BRGL_SPBRGL_POSITION                            0x0
#define _SP1BRGL_SPBRGL_SIZE                                0x8
#define _SP1BRGL_SPBRGL_LENGTH                              0x8
#define _SP1BRGL_SPBRGL_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __at(0x19B);
// bitfield macros
#define _SPBRG_SPBRGL_POSN                                  0x0
#define _SPBRG_SPBRGL_POSITION                              0x0
#define _SPBRG_SPBRGL_SIZE                                  0x8
#define _SPBRG_SPBRGL_LENGTH                                0x8
#define _SPBRG_SPBRGL_MASK                                  0xFF
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
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH                 :8;
    };
} SP1BRGHbits_t;
extern volatile SP1BRGHbits_t SP1BRGHbits __at(0x19C);
// bitfield macros
#define _SP1BRGH_SPBRGH_POSN                                0x0
#define _SP1BRGH_SPBRGH_POSITION                            0x0
#define _SP1BRGH_SPBRGH_SIZE                                0x8
#define _SP1BRGH_SPBRGH_LENGTH                              0x8
#define _SP1BRGH_SPBRGH_MASK                                0xFF
// alias bitfield definitions
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

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0x212);
#ifndef _LIB_BUILD
asm("SSPADD equ 0212h");
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

// Register: SSPMSK
#define SSPMSK SSPMSK
extern volatile unsigned char           SSPMSK              __at(0x213);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0213h");
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

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
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

// Register: SSPCON1
#define SSPCON1 SSPCON1
extern volatile unsigned char           SSPCON1             __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0215h");
#endif
// aliases
extern volatile unsigned char           SSPCON              __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON equ 0215h");
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

// Register: SSPCON2
#define SSPCON2 SSPCON2
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

// Register: SSPCON3
#define SSPCON3 SSPCON3
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
        unsigned P1M                    :2;
    };
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
#define _CCP1CON_P1M_POSN                                   0x6
#define _CCP1CON_P1M_POSITION                               0x6
#define _CCP1CON_P1M_SIZE                                   0x2
#define _CCP1CON_P1M_LENGTH                                 0x2
#define _CCP1CON_P1M_MASK                                   0xC0
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

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0x294);
#ifndef _LIB_BUILD
asm("PWM1CON equ 0294h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1DC                   :7;
        unsigned P1RSEN                 :1;
    };
    struct {
        unsigned P1DC0                  :1;
        unsigned P1DC1                  :1;
        unsigned P1DC2                  :1;
        unsigned P1DC3                  :1;
        unsigned P1DC4                  :1;
        unsigned P1DC5                  :1;
        unsigned P1DC6                  :1;
        unsigned PWM1RSEN               :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0x294);
// bitfield macros
#define _PWM1CON_P1DC_POSN                                  0x0
#define _PWM1CON_P1DC_POSITION                              0x0
#define _PWM1CON_P1DC_SIZE                                  0x7
#define _PWM1CON_P1DC_LENGTH                                0x7
#define _PWM1CON_P1DC_MASK                                  0x7F
#define _PWM1CON_P1RSEN_POSN                                0x7
#define _PWM1CON_P1RSEN_POSITION                            0x7
#define _PWM1CON_P1RSEN_SIZE                                0x1
#define _PWM1CON_P1RSEN_LENGTH                              0x1
#define _PWM1CON_P1RSEN_MASK                                0x80
#define _PWM1CON_P1DC0_POSN                                 0x0
#define _PWM1CON_P1DC0_POSITION                             0x0
#define _PWM1CON_P1DC0_SIZE                                 0x1
#define _PWM1CON_P1DC0_LENGTH                               0x1
#define _PWM1CON_P1DC0_MASK                                 0x1
#define _PWM1CON_P1DC1_POSN                                 0x1
#define _PWM1CON_P1DC1_POSITION                             0x1
#define _PWM1CON_P1DC1_SIZE                                 0x1
#define _PWM1CON_P1DC1_LENGTH                               0x1
#define _PWM1CON_P1DC1_MASK                                 0x2
#define _PWM1CON_P1DC2_POSN                                 0x2
#define _PWM1CON_P1DC2_POSITION                             0x2
#define _PWM1CON_P1DC2_SIZE                                 0x1
#define _PWM1CON_P1DC2_LENGTH                               0x1
#define _PWM1CON_P1DC2_MASK                                 0x4
#define _PWM1CON_P1DC3_POSN                                 0x3
#define _PWM1CON_P1DC3_POSITION                             0x3
#define _PWM1CON_P1DC3_SIZE                                 0x1
#define _PWM1CON_P1DC3_LENGTH                               0x1
#define _PWM1CON_P1DC3_MASK                                 0x8
#define _PWM1CON_P1DC4_POSN                                 0x4
#define _PWM1CON_P1DC4_POSITION                             0x4
#define _PWM1CON_P1DC4_SIZE                                 0x1
#define _PWM1CON_P1DC4_LENGTH                               0x1
#define _PWM1CON_P1DC4_MASK                                 0x10
#define _PWM1CON_P1DC5_POSN                                 0x5
#define _PWM1CON_P1DC5_POSITION                             0x5
#define _PWM1CON_P1DC5_SIZE                                 0x1
#define _PWM1CON_P1DC5_LENGTH                               0x1
#define _PWM1CON_P1DC5_MASK                                 0x20
#define _PWM1CON_P1DC6_POSN                                 0x6
#define _PWM1CON_P1DC6_POSITION                             0x6
#define _PWM1CON_P1DC6_SIZE                                 0x1
#define _PWM1CON_P1DC6_LENGTH                               0x1
#define _PWM1CON_P1DC6_MASK                                 0x40
#define _PWM1CON_PWM1RSEN_POSN                              0x7
#define _PWM1CON_PWM1RSEN_POSITION                          0x7
#define _PWM1CON_PWM1RSEN_SIZE                              0x1
#define _PWM1CON_PWM1RSEN_LENGTH                            0x1
#define _PWM1CON_PWM1RSEN_MASK                              0x80

// Register: CCP1AS
#define CCP1AS CCP1AS
extern volatile unsigned char           CCP1AS              __at(0x295);
#ifndef _LIB_BUILD
asm("CCP1AS equ 0295h");
#endif
// aliases
extern volatile unsigned char           ECCP1AS             __at(0x295);
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0295h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSS1BD                 :2;
        unsigned PSS1AC                 :2;
        unsigned CCP1AS                 :3;
        unsigned CCP1ASE                :1;
    };
    struct {
        unsigned PSS1BD0                :1;
        unsigned PSS1BD1                :1;
        unsigned PSS1AC0                :1;
        unsigned PSS1AC1                :1;
        unsigned CCP1AS0                :1;
        unsigned CCP1AS1                :1;
        unsigned CCP1AS2                :1;
    };
} CCP1ASbits_t;
extern volatile CCP1ASbits_t CCP1ASbits __at(0x295);
// bitfield macros
#define _CCP1AS_PSS1BD_POSN                                 0x0
#define _CCP1AS_PSS1BD_POSITION                             0x0
#define _CCP1AS_PSS1BD_SIZE                                 0x2
#define _CCP1AS_PSS1BD_LENGTH                               0x2
#define _CCP1AS_PSS1BD_MASK                                 0x3
#define _CCP1AS_PSS1AC_POSN                                 0x2
#define _CCP1AS_PSS1AC_POSITION                             0x2
#define _CCP1AS_PSS1AC_SIZE                                 0x2
#define _CCP1AS_PSS1AC_LENGTH                               0x2
#define _CCP1AS_PSS1AC_MASK                                 0xC
#define _CCP1AS_CCP1AS_POSN                                 0x4
#define _CCP1AS_CCP1AS_POSITION                             0x4
#define _CCP1AS_CCP1AS_SIZE                                 0x3
#define _CCP1AS_CCP1AS_LENGTH                               0x3
#define _CCP1AS_CCP1AS_MASK                                 0x70
#define _CCP1AS_CCP1ASE_POSN                                0x7
#define _CCP1AS_CCP1ASE_POSITION                            0x7
#define _CCP1AS_CCP1ASE_SIZE                                0x1
#define _CCP1AS_CCP1ASE_LENGTH                              0x1
#define _CCP1AS_CCP1ASE_MASK                                0x80
#define _CCP1AS_PSS1BD0_POSN                                0x0
#define _CCP1AS_PSS1BD0_POSITION                            0x0
#define _CCP1AS_PSS1BD0_SIZE                                0x1
#define _CCP1AS_PSS1BD0_LENGTH                              0x1
#define _CCP1AS_PSS1BD0_MASK                                0x1
#define _CCP1AS_PSS1BD1_POSN                                0x1
#define _CCP1AS_PSS1BD1_POSITION                            0x1
#define _CCP1AS_PSS1BD1_SIZE                                0x1
#define _CCP1AS_PSS1BD1_LENGTH                              0x1
#define _CCP1AS_PSS1BD1_MASK                                0x2
#define _CCP1AS_PSS1AC0_POSN                                0x2
#define _CCP1AS_PSS1AC0_POSITION                            0x2
#define _CCP1AS_PSS1AC0_SIZE                                0x1
#define _CCP1AS_PSS1AC0_LENGTH                              0x1
#define _CCP1AS_PSS1AC0_MASK                                0x4
#define _CCP1AS_PSS1AC1_POSN                                0x3
#define _CCP1AS_PSS1AC1_POSITION                            0x3
#define _CCP1AS_PSS1AC1_SIZE                                0x1
#define _CCP1AS_PSS1AC1_LENGTH                              0x1
#define _CCP1AS_PSS1AC1_MASK                                0x8
#define _CCP1AS_CCP1AS0_POSN                                0x4
#define _CCP1AS_CCP1AS0_POSITION                            0x4
#define _CCP1AS_CCP1AS0_SIZE                                0x1
#define _CCP1AS_CCP1AS0_LENGTH                              0x1
#define _CCP1AS_CCP1AS0_MASK                                0x10
#define _CCP1AS_CCP1AS1_POSN                                0x5
#define _CCP1AS_CCP1AS1_POSITION                            0x5
#define _CCP1AS_CCP1AS1_SIZE                                0x1
#define _CCP1AS_CCP1AS1_LENGTH                              0x1
#define _CCP1AS_CCP1AS1_MASK                                0x20
#define _CCP1AS_CCP1AS2_POSN                                0x6
#define _CCP1AS_CCP1AS2_POSITION                            0x6
#define _CCP1AS_CCP1AS2_SIZE                                0x1
#define _CCP1AS_CCP1AS2_LENGTH                              0x1
#define _CCP1AS_CCP1AS2_MASK                                0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned PSS1BD                 :2;
        unsigned PSS1AC                 :2;
        unsigned CCP1AS                 :3;
        unsigned CCP1ASE                :1;
    };
    struct {
        unsigned PSS1BD0                :1;
        unsigned PSS1BD1                :1;
        unsigned PSS1AC0                :1;
        unsigned PSS1AC1                :1;
        unsigned CCP1AS0                :1;
        unsigned CCP1AS1                :1;
        unsigned CCP1AS2                :1;
    };
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits __at(0x295);
// bitfield macros
#define _ECCP1AS_PSS1BD_POSN                                0x0
#define _ECCP1AS_PSS1BD_POSITION                            0x0
#define _ECCP1AS_PSS1BD_SIZE                                0x2
#define _ECCP1AS_PSS1BD_LENGTH                              0x2
#define _ECCP1AS_PSS1BD_MASK                                0x3
#define _ECCP1AS_PSS1AC_POSN                                0x2
#define _ECCP1AS_PSS1AC_POSITION                            0x2
#define _ECCP1AS_PSS1AC_SIZE                                0x2
#define _ECCP1AS_PSS1AC_LENGTH                              0x2
#define _ECCP1AS_PSS1AC_MASK                                0xC
#define _ECCP1AS_CCP1AS_POSN                                0x4
#define _ECCP1AS_CCP1AS_POSITION                            0x4
#define _ECCP1AS_CCP1AS_SIZE                                0x3
#define _ECCP1AS_CCP1AS_LENGTH                              0x3
#define _ECCP1AS_CCP1AS_MASK                                0x70
#define _ECCP1AS_CCP1ASE_POSN                               0x7
#define _ECCP1AS_CCP1ASE_POSITION                           0x7
#define _ECCP1AS_CCP1ASE_SIZE                               0x1
#define _ECCP1AS_CCP1ASE_LENGTH                             0x1
#define _ECCP1AS_CCP1ASE_MASK                               0x80
#define _ECCP1AS_PSS1BD0_POSN                               0x0
#define _ECCP1AS_PSS1BD0_POSITION                           0x0
#define _ECCP1AS_PSS1BD0_SIZE                               0x1
#define _ECCP1AS_PSS1BD0_LENGTH                             0x1
#define _ECCP1AS_PSS1BD0_MASK                               0x1
#define _ECCP1AS_PSS1BD1_POSN                               0x1
#define _ECCP1AS_PSS1BD1_POSITION                           0x1
#define _ECCP1AS_PSS1BD1_SIZE                               0x1
#define _ECCP1AS_PSS1BD1_LENGTH                             0x1
#define _ECCP1AS_PSS1BD1_MASK                               0x2
#define _ECCP1AS_PSS1AC0_POSN                               0x2
#define _ECCP1AS_PSS1AC0_POSITION                           0x2
#define _ECCP1AS_PSS1AC0_SIZE                               0x1
#define _ECCP1AS_PSS1AC0_LENGTH                             0x1
#define _ECCP1AS_PSS1AC0_MASK                               0x4
#define _ECCP1AS_PSS1AC1_POSN                               0x3
#define _ECCP1AS_PSS1AC1_POSITION                           0x3
#define _ECCP1AS_PSS1AC1_SIZE                               0x1
#define _ECCP1AS_PSS1AC1_LENGTH                             0x1
#define _ECCP1AS_PSS1AC1_MASK                               0x8
#define _ECCP1AS_CCP1AS0_POSN                               0x4
#define _ECCP1AS_CCP1AS0_POSITION                           0x4
#define _ECCP1AS_CCP1AS0_SIZE                               0x1
#define _ECCP1AS_CCP1AS0_LENGTH                             0x1
#define _ECCP1AS_CCP1AS0_MASK                               0x10
#define _ECCP1AS_CCP1AS1_POSN                               0x5
#define _ECCP1AS_CCP1AS1_POSITION                           0x5
#define _ECCP1AS_CCP1AS1_SIZE                               0x1
#define _ECCP1AS_CCP1AS1_LENGTH                             0x1
#define _ECCP1AS_CCP1AS1_MASK                               0x20
#define _ECCP1AS_CCP1AS2_POSN                               0x6
#define _ECCP1AS_CCP1AS2_POSITION                           0x6
#define _ECCP1AS_CCP1AS2_SIZE                               0x1
#define _ECCP1AS_CCP1AS2_LENGTH                             0x1
#define _ECCP1AS_CCP1AS2_MASK                               0x40

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
extern volatile unsigned char           PSTR1CON            __at(0x296);
#ifndef _LIB_BUILD
asm("PSTR1CON equ 0296h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STR1A                  :1;
        unsigned STR1B                  :1;
        unsigned STR1C                  :1;
        unsigned STR1D                  :1;
        unsigned STR1SYNC               :1;
    };
} PSTR1CONbits_t;
extern volatile PSTR1CONbits_t PSTR1CONbits __at(0x296);
// bitfield macros
#define _PSTR1CON_STR1A_POSN                                0x0
#define _PSTR1CON_STR1A_POSITION                            0x0
#define _PSTR1CON_STR1A_SIZE                                0x1
#define _PSTR1CON_STR1A_LENGTH                              0x1
#define _PSTR1CON_STR1A_MASK                                0x1
#define _PSTR1CON_STR1B_POSN                                0x1
#define _PSTR1CON_STR1B_POSITION                            0x1
#define _PSTR1CON_STR1B_SIZE                                0x1
#define _PSTR1CON_STR1B_LENGTH                              0x1
#define _PSTR1CON_STR1B_MASK                                0x2
#define _PSTR1CON_STR1C_POSN                                0x2
#define _PSTR1CON_STR1C_POSITION                            0x2
#define _PSTR1CON_STR1C_SIZE                                0x1
#define _PSTR1CON_STR1C_LENGTH                              0x1
#define _PSTR1CON_STR1C_MASK                                0x4
#define _PSTR1CON_STR1D_POSN                                0x3
#define _PSTR1CON_STR1D_POSITION                            0x3
#define _PSTR1CON_STR1D_SIZE                                0x1
#define _PSTR1CON_STR1D_LENGTH                              0x1
#define _PSTR1CON_STR1D_MASK                                0x8
#define _PSTR1CON_STR1SYNC_POSN                             0x4
#define _PSTR1CON_STR1SYNC_POSITION                         0x4
#define _PSTR1CON_STR1SYNC_SIZE                             0x1
#define _PSTR1CON_STR1SYNC_LENGTH                           0x1
#define _PSTR1CON_STR1SYNC_MASK                             0x10

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
        unsigned P2M                    :2;
    };
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
#define _CCP2CON_P2M_POSN                                   0x6
#define _CCP2CON_P2M_POSITION                               0x6
#define _CCP2CON_P2M_SIZE                                   0x2
#define _CCP2CON_P2M_LENGTH                                 0x2
#define _CCP2CON_P2M_MASK                                   0xC0
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

// Register: PWM2CON
#define PWM2CON PWM2CON
extern volatile unsigned char           PWM2CON             __at(0x29B);
#ifndef _LIB_BUILD
asm("PWM2CON equ 029Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2DC                   :7;
        unsigned P2RSEN                 :1;
    };
    struct {
        unsigned P2DC0                  :1;
        unsigned P2DC1                  :1;
        unsigned P2DC2                  :1;
        unsigned P2DC3                  :1;
        unsigned P2DC4                  :1;
        unsigned P2DC5                  :1;
        unsigned P2DC6                  :1;
        unsigned PWM2RSEN               :1;
    };
} PWM2CONbits_t;
extern volatile PWM2CONbits_t PWM2CONbits __at(0x29B);
// bitfield macros
#define _PWM2CON_P2DC_POSN                                  0x0
#define _PWM2CON_P2DC_POSITION                              0x0
#define _PWM2CON_P2DC_SIZE                                  0x7
#define _PWM2CON_P2DC_LENGTH                                0x7
#define _PWM2CON_P2DC_MASK                                  0x7F
#define _PWM2CON_P2RSEN_POSN                                0x7
#define _PWM2CON_P2RSEN_POSITION                            0x7
#define _PWM2CON_P2RSEN_SIZE                                0x1
#define _PWM2CON_P2RSEN_LENGTH                              0x1
#define _PWM2CON_P2RSEN_MASK                                0x80
#define _PWM2CON_P2DC0_POSN                                 0x0
#define _PWM2CON_P2DC0_POSITION                             0x0
#define _PWM2CON_P2DC0_SIZE                                 0x1
#define _PWM2CON_P2DC0_LENGTH                               0x1
#define _PWM2CON_P2DC0_MASK                                 0x1
#define _PWM2CON_P2DC1_POSN                                 0x1
#define _PWM2CON_P2DC1_POSITION                             0x1
#define _PWM2CON_P2DC1_SIZE                                 0x1
#define _PWM2CON_P2DC1_LENGTH                               0x1
#define _PWM2CON_P2DC1_MASK                                 0x2
#define _PWM2CON_P2DC2_POSN                                 0x2
#define _PWM2CON_P2DC2_POSITION                             0x2
#define _PWM2CON_P2DC2_SIZE                                 0x1
#define _PWM2CON_P2DC2_LENGTH                               0x1
#define _PWM2CON_P2DC2_MASK                                 0x4
#define _PWM2CON_P2DC3_POSN                                 0x3
#define _PWM2CON_P2DC3_POSITION                             0x3
#define _PWM2CON_P2DC3_SIZE                                 0x1
#define _PWM2CON_P2DC3_LENGTH                               0x1
#define _PWM2CON_P2DC3_MASK                                 0x8
#define _PWM2CON_P2DC4_POSN                                 0x4
#define _PWM2CON_P2DC4_POSITION                             0x4
#define _PWM2CON_P2DC4_SIZE                                 0x1
#define _PWM2CON_P2DC4_LENGTH                               0x1
#define _PWM2CON_P2DC4_MASK                                 0x10
#define _PWM2CON_P2DC5_POSN                                 0x5
#define _PWM2CON_P2DC5_POSITION                             0x5
#define _PWM2CON_P2DC5_SIZE                                 0x1
#define _PWM2CON_P2DC5_LENGTH                               0x1
#define _PWM2CON_P2DC5_MASK                                 0x20
#define _PWM2CON_P2DC6_POSN                                 0x6
#define _PWM2CON_P2DC6_POSITION                             0x6
#define _PWM2CON_P2DC6_SIZE                                 0x1
#define _PWM2CON_P2DC6_LENGTH                               0x1
#define _PWM2CON_P2DC6_MASK                                 0x40
#define _PWM2CON_PWM2RSEN_POSN                              0x7
#define _PWM2CON_PWM2RSEN_POSITION                          0x7
#define _PWM2CON_PWM2RSEN_SIZE                              0x1
#define _PWM2CON_PWM2RSEN_LENGTH                            0x1
#define _PWM2CON_PWM2RSEN_MASK                              0x80

// Register: CCP2AS
#define CCP2AS CCP2AS
extern volatile unsigned char           CCP2AS              __at(0x29C);
#ifndef _LIB_BUILD
asm("CCP2AS equ 029Ch");
#endif
// aliases
extern volatile unsigned char           ECCP2AS             __at(0x29C);
#ifndef _LIB_BUILD
asm("ECCP2AS equ 029Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSS2BD                 :2;
        unsigned PSS2AC                 :2;
        unsigned CCP2AS                 :3;
        unsigned CCP2ASE                :1;
    };
    struct {
        unsigned PSS2BD0                :1;
        unsigned PSS2BD1                :1;
        unsigned PSS2AC0                :1;
        unsigned PSS2AC1                :1;
        unsigned CCP2AS0                :1;
        unsigned CCP2AS1                :1;
        unsigned CCP2AS2                :1;
    };
} CCP2ASbits_t;
extern volatile CCP2ASbits_t CCP2ASbits __at(0x29C);
// bitfield macros
#define _CCP2AS_PSS2BD_POSN                                 0x0
#define _CCP2AS_PSS2BD_POSITION                             0x0
#define _CCP2AS_PSS2BD_SIZE                                 0x2
#define _CCP2AS_PSS2BD_LENGTH                               0x2
#define _CCP2AS_PSS2BD_MASK                                 0x3
#define _CCP2AS_PSS2AC_POSN                                 0x2
#define _CCP2AS_PSS2AC_POSITION                             0x2
#define _CCP2AS_PSS2AC_SIZE                                 0x2
#define _CCP2AS_PSS2AC_LENGTH                               0x2
#define _CCP2AS_PSS2AC_MASK                                 0xC
#define _CCP2AS_CCP2AS_POSN                                 0x4
#define _CCP2AS_CCP2AS_POSITION                             0x4
#define _CCP2AS_CCP2AS_SIZE                                 0x3
#define _CCP2AS_CCP2AS_LENGTH                               0x3
#define _CCP2AS_CCP2AS_MASK                                 0x70
#define _CCP2AS_CCP2ASE_POSN                                0x7
#define _CCP2AS_CCP2ASE_POSITION                            0x7
#define _CCP2AS_CCP2ASE_SIZE                                0x1
#define _CCP2AS_CCP2ASE_LENGTH                              0x1
#define _CCP2AS_CCP2ASE_MASK                                0x80
#define _CCP2AS_PSS2BD0_POSN                                0x0
#define _CCP2AS_PSS2BD0_POSITION                            0x0
#define _CCP2AS_PSS2BD0_SIZE                                0x1
#define _CCP2AS_PSS2BD0_LENGTH                              0x1
#define _CCP2AS_PSS2BD0_MASK                                0x1
#define _CCP2AS_PSS2BD1_POSN                                0x1
#define _CCP2AS_PSS2BD1_POSITION                            0x1
#define _CCP2AS_PSS2BD1_SIZE                                0x1
#define _CCP2AS_PSS2BD1_LENGTH                              0x1
#define _CCP2AS_PSS2BD1_MASK                                0x2
#define _CCP2AS_PSS2AC0_POSN                                0x2
#define _CCP2AS_PSS2AC0_POSITION                            0x2
#define _CCP2AS_PSS2AC0_SIZE                                0x1
#define _CCP2AS_PSS2AC0_LENGTH                              0x1
#define _CCP2AS_PSS2AC0_MASK                                0x4
#define _CCP2AS_PSS2AC1_POSN                                0x3
#define _CCP2AS_PSS2AC1_POSITION                            0x3
#define _CCP2AS_PSS2AC1_SIZE                                0x1
#define _CCP2AS_PSS2AC1_LENGTH                              0x1
#define _CCP2AS_PSS2AC1_MASK                                0x8
#define _CCP2AS_CCP2AS0_POSN                                0x4
#define _CCP2AS_CCP2AS0_POSITION                            0x4
#define _CCP2AS_CCP2AS0_SIZE                                0x1
#define _CCP2AS_CCP2AS0_LENGTH                              0x1
#define _CCP2AS_CCP2AS0_MASK                                0x10
#define _CCP2AS_CCP2AS1_POSN                                0x5
#define _CCP2AS_CCP2AS1_POSITION                            0x5
#define _CCP2AS_CCP2AS1_SIZE                                0x1
#define _CCP2AS_CCP2AS1_LENGTH                              0x1
#define _CCP2AS_CCP2AS1_MASK                                0x20
#define _CCP2AS_CCP2AS2_POSN                                0x6
#define _CCP2AS_CCP2AS2_POSITION                            0x6
#define _CCP2AS_CCP2AS2_SIZE                                0x1
#define _CCP2AS_CCP2AS2_LENGTH                              0x1
#define _CCP2AS_CCP2AS2_MASK                                0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned PSS2BD                 :2;
        unsigned PSS2AC                 :2;
        unsigned CCP2AS                 :3;
        unsigned CCP2ASE                :1;
    };
    struct {
        unsigned PSS2BD0                :1;
        unsigned PSS2BD1                :1;
        unsigned PSS2AC0                :1;
        unsigned PSS2AC1                :1;
        unsigned CCP2AS0                :1;
        unsigned CCP2AS1                :1;
        unsigned CCP2AS2                :1;
    };
} ECCP2ASbits_t;
extern volatile ECCP2ASbits_t ECCP2ASbits __at(0x29C);
// bitfield macros
#define _ECCP2AS_PSS2BD_POSN                                0x0
#define _ECCP2AS_PSS2BD_POSITION                            0x0
#define _ECCP2AS_PSS2BD_SIZE                                0x2
#define _ECCP2AS_PSS2BD_LENGTH                              0x2
#define _ECCP2AS_PSS2BD_MASK                                0x3
#define _ECCP2AS_PSS2AC_POSN                                0x2
#define _ECCP2AS_PSS2AC_POSITION                            0x2
#define _ECCP2AS_PSS2AC_SIZE                                0x2
#define _ECCP2AS_PSS2AC_LENGTH                              0x2
#define _ECCP2AS_PSS2AC_MASK                                0xC
#define _ECCP2AS_CCP2AS_POSN                                0x4
#define _ECCP2AS_CCP2AS_POSITION                            0x4
#define _ECCP2AS_CCP2AS_SIZE                                0x3
#define _ECCP2AS_CCP2AS_LENGTH                              0x3
#define _ECCP2AS_CCP2AS_MASK                                0x70
#define _ECCP2AS_CCP2ASE_POSN                               0x7
#define _ECCP2AS_CCP2ASE_POSITION                           0x7
#define _ECCP2AS_CCP2ASE_SIZE                               0x1
#define _ECCP2AS_CCP2ASE_LENGTH                             0x1
#define _ECCP2AS_CCP2ASE_MASK                               0x80
#define _ECCP2AS_PSS2BD0_POSN                               0x0
#define _ECCP2AS_PSS2BD0_POSITION                           0x0
#define _ECCP2AS_PSS2BD0_SIZE                               0x1
#define _ECCP2AS_PSS2BD0_LENGTH                             0x1
#define _ECCP2AS_PSS2BD0_MASK                               0x1
#define _ECCP2AS_PSS2BD1_POSN                               0x1
#define _ECCP2AS_PSS2BD1_POSITION                           0x1
#define _ECCP2AS_PSS2BD1_SIZE                               0x1
#define _ECCP2AS_PSS2BD1_LENGTH                             0x1
#define _ECCP2AS_PSS2BD1_MASK                               0x2
#define _ECCP2AS_PSS2AC0_POSN                               0x2
#define _ECCP2AS_PSS2AC0_POSITION                           0x2
#define _ECCP2AS_PSS2AC0_SIZE                               0x1
#define _ECCP2AS_PSS2AC0_LENGTH                             0x1
#define _ECCP2AS_PSS2AC0_MASK                               0x4
#define _ECCP2AS_PSS2AC1_POSN                               0x3
#define _ECCP2AS_PSS2AC1_POSITION                           0x3
#define _ECCP2AS_PSS2AC1_SIZE                               0x1
#define _ECCP2AS_PSS2AC1_LENGTH                             0x1
#define _ECCP2AS_PSS2AC1_MASK                               0x8
#define _ECCP2AS_CCP2AS0_POSN                               0x4
#define _ECCP2AS_CCP2AS0_POSITION                           0x4
#define _ECCP2AS_CCP2AS0_SIZE                               0x1
#define _ECCP2AS_CCP2AS0_LENGTH                             0x1
#define _ECCP2AS_CCP2AS0_MASK                               0x10
#define _ECCP2AS_CCP2AS1_POSN                               0x5
#define _ECCP2AS_CCP2AS1_POSITION                           0x5
#define _ECCP2AS_CCP2AS1_SIZE                               0x1
#define _ECCP2AS_CCP2AS1_LENGTH                             0x1
#define _ECCP2AS_CCP2AS1_MASK                               0x20
#define _ECCP2AS_CCP2AS2_POSN                               0x6
#define _ECCP2AS_CCP2AS2_POSITION                           0x6
#define _ECCP2AS_CCP2AS2_SIZE                               0x1
#define _ECCP2AS_CCP2AS2_LENGTH                             0x1
#define _ECCP2AS_CCP2AS2_MASK                               0x40

// Register: PSTR2CON
#define PSTR2CON PSTR2CON
extern volatile unsigned char           PSTR2CON            __at(0x29D);
#ifndef _LIB_BUILD
asm("PSTR2CON equ 029Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STR2A                  :1;
        unsigned STR2B                  :1;
        unsigned STR2C                  :1;
        unsigned STR2D                  :1;
        unsigned STR2SYNC               :1;
    };
} PSTR2CONbits_t;
extern volatile PSTR2CONbits_t PSTR2CONbits __at(0x29D);
// bitfield macros
#define _PSTR2CON_STR2A_POSN                                0x0
#define _PSTR2CON_STR2A_POSITION                            0x0
#define _PSTR2CON_STR2A_SIZE                                0x1
#define _PSTR2CON_STR2A_LENGTH                              0x1
#define _PSTR2CON_STR2A_MASK                                0x1
#define _PSTR2CON_STR2B_POSN                                0x1
#define _PSTR2CON_STR2B_POSITION                            0x1
#define _PSTR2CON_STR2B_SIZE                                0x1
#define _PSTR2CON_STR2B_LENGTH                              0x1
#define _PSTR2CON_STR2B_MASK                                0x2
#define _PSTR2CON_STR2C_POSN                                0x2
#define _PSTR2CON_STR2C_POSITION                            0x2
#define _PSTR2CON_STR2C_SIZE                                0x1
#define _PSTR2CON_STR2C_LENGTH                              0x1
#define _PSTR2CON_STR2C_MASK                                0x4
#define _PSTR2CON_STR2D_POSN                                0x3
#define _PSTR2CON_STR2D_POSITION                            0x3
#define _PSTR2CON_STR2D_SIZE                                0x1
#define _PSTR2CON_STR2D_LENGTH                              0x1
#define _PSTR2CON_STR2D_MASK                                0x8
#define _PSTR2CON_STR2SYNC_POSN                             0x4
#define _PSTR2CON_STR2SYNC_POSITION                         0x4
#define _PSTR2CON_STR2SYNC_SIZE                             0x1
#define _PSTR2CON_STR2SYNC_LENGTH                           0x1
#define _PSTR2CON_STR2SYNC_MASK                             0x10

// Register: CCPTMRS0
#define CCPTMRS0 CCPTMRS0
extern volatile unsigned char           CCPTMRS0            __at(0x29E);
#ifndef _LIB_BUILD
asm("CCPTMRS0 equ 029Eh");
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
extern volatile CCPTMRS0bits_t CCPTMRS0bits __at(0x29E);
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
extern volatile unsigned char           CCPTMRS1            __at(0x29F);
#ifndef _LIB_BUILD
asm("CCPTMRS1 equ 029Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C5TSEL                 :2;
    };
    struct {
        unsigned C5TSEL0                :1;
        unsigned C5TSEL1                :1;
    };
} CCPTMRS1bits_t;
extern volatile CCPTMRS1bits_t CCPTMRS1bits __at(0x29F);
// bitfield macros
#define _CCPTMRS1_C5TSEL_POSN                               0x0
#define _CCPTMRS1_C5TSEL_POSITION                           0x0
#define _CCPTMRS1_C5TSEL_SIZE                               0x2
#define _CCPTMRS1_C5TSEL_LENGTH                             0x2
#define _CCPTMRS1_C5TSEL_MASK                               0x3
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
        unsigned CCP3                   :4;
        unsigned DC3B                   :2;
        unsigned P3M                    :2;
    };
    struct {
        unsigned CCP3M0                 :1;
        unsigned CCP3M1                 :1;
        unsigned CCP3M2                 :1;
        unsigned CCP3M3                 :1;
        unsigned DC3B0                  :1;
        unsigned DC3B1                  :1;
        unsigned P3M0                   :1;
        unsigned P3M1                   :1;
    };
} CCP3CONbits_t;
extern volatile CCP3CONbits_t CCP3CONbits __at(0x313);
// bitfield macros
#define _CCP3CON_CCP3_POSN                                  0x0
#define _CCP3CON_CCP3_POSITION                              0x0
#define _CCP3CON_CCP3_SIZE                                  0x4
#define _CCP3CON_CCP3_LENGTH                                0x4
#define _CCP3CON_CCP3_MASK                                  0xF
#define _CCP3CON_DC3B_POSN                                  0x4
#define _CCP3CON_DC3B_POSITION                              0x4
#define _CCP3CON_DC3B_SIZE                                  0x2
#define _CCP3CON_DC3B_LENGTH                                0x2
#define _CCP3CON_DC3B_MASK                                  0x30
#define _CCP3CON_P3M_POSN                                   0x6
#define _CCP3CON_P3M_POSITION                               0x6
#define _CCP3CON_P3M_SIZE                                   0x2
#define _CCP3CON_P3M_LENGTH                                 0x2
#define _CCP3CON_P3M_MASK                                   0xC0
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
#define _CCP3CON_P3M0_POSN                                  0x6
#define _CCP3CON_P3M0_POSITION                              0x6
#define _CCP3CON_P3M0_SIZE                                  0x1
#define _CCP3CON_P3M0_LENGTH                                0x1
#define _CCP3CON_P3M0_MASK                                  0x40
#define _CCP3CON_P3M1_POSN                                  0x7
#define _CCP3CON_P3M1_POSITION                              0x7
#define _CCP3CON_P3M1_SIZE                                  0x1
#define _CCP3CON_P3M1_LENGTH                                0x1
#define _CCP3CON_P3M1_MASK                                  0x80

// Register: PWM3CON
#define PWM3CON PWM3CON
extern volatile unsigned char           PWM3CON             __at(0x314);
#ifndef _LIB_BUILD
asm("PWM3CON equ 0314h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P3DC                   :7;
        unsigned P3RSEN                 :1;
    };
    struct {
        unsigned P3DC0                  :1;
        unsigned P3DC1                  :1;
        unsigned P3DC2                  :1;
        unsigned P3DC3                  :1;
        unsigned P3DC4                  :1;
        unsigned P3DC5                  :1;
        unsigned P3DC6                  :1;
        unsigned PWM3RSEN               :1;
    };
} PWM3CONbits_t;
extern volatile PWM3CONbits_t PWM3CONbits __at(0x314);
// bitfield macros
#define _PWM3CON_P3DC_POSN                                  0x0
#define _PWM3CON_P3DC_POSITION                              0x0
#define _PWM3CON_P3DC_SIZE                                  0x7
#define _PWM3CON_P3DC_LENGTH                                0x7
#define _PWM3CON_P3DC_MASK                                  0x7F
#define _PWM3CON_P3RSEN_POSN                                0x7
#define _PWM3CON_P3RSEN_POSITION                            0x7
#define _PWM3CON_P3RSEN_SIZE                                0x1
#define _PWM3CON_P3RSEN_LENGTH                              0x1
#define _PWM3CON_P3RSEN_MASK                                0x80
#define _PWM3CON_P3DC0_POSN                                 0x0
#define _PWM3CON_P3DC0_POSITION                             0x0
#define _PWM3CON_P3DC0_SIZE                                 0x1
#define _PWM3CON_P3DC0_LENGTH                               0x1
#define _PWM3CON_P3DC0_MASK                                 0x1
#define _PWM3CON_P3DC1_POSN                                 0x1
#define _PWM3CON_P3DC1_POSITION                             0x1
#define _PWM3CON_P3DC1_SIZE                                 0x1
#define _PWM3CON_P3DC1_LENGTH                               0x1
#define _PWM3CON_P3DC1_MASK                                 0x2
#define _PWM3CON_P3DC2_POSN                                 0x2
#define _PWM3CON_P3DC2_POSITION                             0x2
#define _PWM3CON_P3DC2_SIZE                                 0x1
#define _PWM3CON_P3DC2_LENGTH                               0x1
#define _PWM3CON_P3DC2_MASK                                 0x4
#define _PWM3CON_P3DC3_POSN                                 0x3
#define _PWM3CON_P3DC3_POSITION                             0x3
#define _PWM3CON_P3DC3_SIZE                                 0x1
#define _PWM3CON_P3DC3_LENGTH                               0x1
#define _PWM3CON_P3DC3_MASK                                 0x8
#define _PWM3CON_P3DC4_POSN                                 0x4
#define _PWM3CON_P3DC4_POSITION                             0x4
#define _PWM3CON_P3DC4_SIZE                                 0x1
#define _PWM3CON_P3DC4_LENGTH                               0x1
#define _PWM3CON_P3DC4_MASK                                 0x10
#define _PWM3CON_P3DC5_POSN                                 0x5
#define _PWM3CON_P3DC5_POSITION                             0x5
#define _PWM3CON_P3DC5_SIZE                                 0x1
#define _PWM3CON_P3DC5_LENGTH                               0x1
#define _PWM3CON_P3DC5_MASK                                 0x20
#define _PWM3CON_P3DC6_POSN                                 0x6
#define _PWM3CON_P3DC6_POSITION                             0x6
#define _PWM3CON_P3DC6_SIZE                                 0x1
#define _PWM3CON_P3DC6_LENGTH                               0x1
#define _PWM3CON_P3DC6_MASK                                 0x40
#define _PWM3CON_PWM3RSEN_POSN                              0x7
#define _PWM3CON_PWM3RSEN_POSITION                          0x7
#define _PWM3CON_PWM3RSEN_SIZE                              0x1
#define _PWM3CON_PWM3RSEN_LENGTH                            0x1
#define _PWM3CON_PWM3RSEN_MASK                              0x80

// Register: CCP3AS
#define CCP3AS CCP3AS
extern volatile unsigned char           CCP3AS              __at(0x315);
#ifndef _LIB_BUILD
asm("CCP3AS equ 0315h");
#endif
// aliases
extern volatile unsigned char           ECCP3AS             __at(0x315);
#ifndef _LIB_BUILD
asm("ECCP3AS equ 0315h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSS3BD                 :2;
        unsigned PSS3AC                 :2;
        unsigned CCP3AS                 :3;
        unsigned CCP3ASE                :1;
    };
    struct {
        unsigned PSS3BD0                :1;
        unsigned PSS3BD1                :1;
        unsigned PSS3AC0                :1;
        unsigned PSS3AC1                :1;
        unsigned CCP3AS0                :1;
        unsigned CCP3AS1                :1;
        unsigned CCP3AS2                :1;
    };
} CCP3ASbits_t;
extern volatile CCP3ASbits_t CCP3ASbits __at(0x315);
// bitfield macros
#define _CCP3AS_PSS3BD_POSN                                 0x0
#define _CCP3AS_PSS3BD_POSITION                             0x0
#define _CCP3AS_PSS3BD_SIZE                                 0x2
#define _CCP3AS_PSS3BD_LENGTH                               0x2
#define _CCP3AS_PSS3BD_MASK                                 0x3
#define _CCP3AS_PSS3AC_POSN                                 0x2
#define _CCP3AS_PSS3AC_POSITION                             0x2
#define _CCP3AS_PSS3AC_SIZE                                 0x2
#define _CCP3AS_PSS3AC_LENGTH                               0x2
#define _CCP3AS_PSS3AC_MASK                                 0xC
#define _CCP3AS_CCP3AS_POSN                                 0x4
#define _CCP3AS_CCP3AS_POSITION                             0x4
#define _CCP3AS_CCP3AS_SIZE                                 0x3
#define _CCP3AS_CCP3AS_LENGTH                               0x3
#define _CCP3AS_CCP3AS_MASK                                 0x70
#define _CCP3AS_CCP3ASE_POSN                                0x7
#define _CCP3AS_CCP3ASE_POSITION                            0x7
#define _CCP3AS_CCP3ASE_SIZE                                0x1
#define _CCP3AS_CCP3ASE_LENGTH                              0x1
#define _CCP3AS_CCP3ASE_MASK                                0x80
#define _CCP3AS_PSS3BD0_POSN                                0x0
#define _CCP3AS_PSS3BD0_POSITION                            0x0
#define _CCP3AS_PSS3BD0_SIZE                                0x1
#define _CCP3AS_PSS3BD0_LENGTH                              0x1
#define _CCP3AS_PSS3BD0_MASK                                0x1
#define _CCP3AS_PSS3BD1_POSN                                0x1
#define _CCP3AS_PSS3BD1_POSITION                            0x1
#define _CCP3AS_PSS3BD1_SIZE                                0x1
#define _CCP3AS_PSS3BD1_LENGTH                              0x1
#define _CCP3AS_PSS3BD1_MASK                                0x2
#define _CCP3AS_PSS3AC0_POSN                                0x2
#define _CCP3AS_PSS3AC0_POSITION                            0x2
#define _CCP3AS_PSS3AC0_SIZE                                0x1
#define _CCP3AS_PSS3AC0_LENGTH                              0x1
#define _CCP3AS_PSS3AC0_MASK                                0x4
#define _CCP3AS_PSS3AC1_POSN                                0x3
#define _CCP3AS_PSS3AC1_POSITION                            0x3
#define _CCP3AS_PSS3AC1_SIZE                                0x1
#define _CCP3AS_PSS3AC1_LENGTH                              0x1
#define _CCP3AS_PSS3AC1_MASK                                0x8
#define _CCP3AS_CCP3AS0_POSN                                0x4
#define _CCP3AS_CCP3AS0_POSITION                            0x4
#define _CCP3AS_CCP3AS0_SIZE                                0x1
#define _CCP3AS_CCP3AS0_LENGTH                              0x1
#define _CCP3AS_CCP3AS0_MASK                                0x10
#define _CCP3AS_CCP3AS1_POSN                                0x5
#define _CCP3AS_CCP3AS1_POSITION                            0x5
#define _CCP3AS_CCP3AS1_SIZE                                0x1
#define _CCP3AS_CCP3AS1_LENGTH                              0x1
#define _CCP3AS_CCP3AS1_MASK                                0x20
#define _CCP3AS_CCP3AS2_POSN                                0x6
#define _CCP3AS_CCP3AS2_POSITION                            0x6
#define _CCP3AS_CCP3AS2_SIZE                                0x1
#define _CCP3AS_CCP3AS2_LENGTH                              0x1
#define _CCP3AS_CCP3AS2_MASK                                0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned PSS3BD                 :2;
        unsigned PSS3AC                 :2;
        unsigned CCP3AS                 :3;
        unsigned CCP3ASE                :1;
    };
    struct {
        unsigned PSS3BD0                :1;
        unsigned PSS3BD1                :1;
        unsigned PSS3AC0                :1;
        unsigned PSS3AC1                :1;
        unsigned CCP3AS0                :1;
        unsigned CCP3AS1                :1;
        unsigned CCP3AS2                :1;
    };
} ECCP3ASbits_t;
extern volatile ECCP3ASbits_t ECCP3ASbits __at(0x315);
// bitfield macros
#define _ECCP3AS_PSS3BD_POSN                                0x0
#define _ECCP3AS_PSS3BD_POSITION                            0x0
#define _ECCP3AS_PSS3BD_SIZE                                0x2
#define _ECCP3AS_PSS3BD_LENGTH                              0x2
#define _ECCP3AS_PSS3BD_MASK                                0x3
#define _ECCP3AS_PSS3AC_POSN                                0x2
#define _ECCP3AS_PSS3AC_POSITION                            0x2
#define _ECCP3AS_PSS3AC_SIZE                                0x2
#define _ECCP3AS_PSS3AC_LENGTH                              0x2
#define _ECCP3AS_PSS3AC_MASK                                0xC
#define _ECCP3AS_CCP3AS_POSN                                0x4
#define _ECCP3AS_CCP3AS_POSITION                            0x4
#define _ECCP3AS_CCP3AS_SIZE                                0x3
#define _ECCP3AS_CCP3AS_LENGTH                              0x3
#define _ECCP3AS_CCP3AS_MASK                                0x70
#define _ECCP3AS_CCP3ASE_POSN                               0x7
#define _ECCP3AS_CCP3ASE_POSITION                           0x7
#define _ECCP3AS_CCP3ASE_SIZE                               0x1
#define _ECCP3AS_CCP3ASE_LENGTH                             0x1
#define _ECCP3AS_CCP3ASE_MASK                               0x80
#define _ECCP3AS_PSS3BD0_POSN                               0x0
#define _ECCP3AS_PSS3BD0_POSITION                           0x0
#define _ECCP3AS_PSS3BD0_SIZE                               0x1
#define _ECCP3AS_PSS3BD0_LENGTH                             0x1
#define _ECCP3AS_PSS3BD0_MASK                               0x1
#define _ECCP3AS_PSS3BD1_POSN                               0x1
#define _ECCP3AS_PSS3BD1_POSITION                           0x1
#define _ECCP3AS_PSS3BD1_SIZE                               0x1
#define _ECCP3AS_PSS3BD1_LENGTH                             0x1
#define _ECCP3AS_PSS3BD1_MASK                               0x2
#define _ECCP3AS_PSS3AC0_POSN                               0x2
#define _ECCP3AS_PSS3AC0_POSITION                           0x2
#define _ECCP3AS_PSS3AC0_SIZE                               0x1
#define _ECCP3AS_PSS3AC0_LENGTH                             0x1
#define _ECCP3AS_PSS3AC0_MASK                               0x4
#define _ECCP3AS_PSS3AC1_POSN                               0x3
#define _ECCP3AS_PSS3AC1_POSITION                           0x3
#define _ECCP3AS_PSS3AC1_SIZE                               0x1
#define _ECCP3AS_PSS3AC1_LENGTH                             0x1
#define _ECCP3AS_PSS3AC1_MASK                               0x8
#define _ECCP3AS_CCP3AS0_POSN                               0x4
#define _ECCP3AS_CCP3AS0_POSITION                           0x4
#define _ECCP3AS_CCP3AS0_SIZE                               0x1
#define _ECCP3AS_CCP3AS0_LENGTH                             0x1
#define _ECCP3AS_CCP3AS0_MASK                               0x10
#define _ECCP3AS_CCP3AS1_POSN                               0x5
#define _ECCP3AS_CCP3AS1_POSITION                           0x5
#define _ECCP3AS_CCP3AS1_SIZE                               0x1
#define _ECCP3AS_CCP3AS1_LENGTH                             0x1
#define _ECCP3AS_CCP3AS1_MASK                               0x20
#define _ECCP3AS_CCP3AS2_POSN                               0x6
#define _ECCP3AS_CCP3AS2_POSITION                           0x6
#define _ECCP3AS_CCP3AS2_SIZE                               0x1
#define _ECCP3AS_CCP3AS2_LENGTH                             0x1
#define _ECCP3AS_CCP3AS2_MASK                               0x40

// Register: PSTR3CON
#define PSTR3CON PSTR3CON
extern volatile unsigned char           PSTR3CON            __at(0x316);
#ifndef _LIB_BUILD
asm("PSTR3CON equ 0316h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STR3A                  :1;
        unsigned STR3B                  :1;
        unsigned STR3C                  :1;
        unsigned STR3D                  :1;
        unsigned STR3SYNC               :1;
    };
} PSTR3CONbits_t;
extern volatile PSTR3CONbits_t PSTR3CONbits __at(0x316);
// bitfield macros
#define _PSTR3CON_STR3A_POSN                                0x0
#define _PSTR3CON_STR3A_POSITION                            0x0
#define _PSTR3CON_STR3A_SIZE                                0x1
#define _PSTR3CON_STR3A_LENGTH                              0x1
#define _PSTR3CON_STR3A_MASK                                0x1
#define _PSTR3CON_STR3B_POSN                                0x1
#define _PSTR3CON_STR3B_POSITION                            0x1
#define _PSTR3CON_STR3B_SIZE                                0x1
#define _PSTR3CON_STR3B_LENGTH                              0x1
#define _PSTR3CON_STR3B_MASK                                0x2
#define _PSTR3CON_STR3C_POSN                                0x2
#define _PSTR3CON_STR3C_POSITION                            0x2
#define _PSTR3CON_STR3C_SIZE                                0x1
#define _PSTR3CON_STR3C_LENGTH                              0x1
#define _PSTR3CON_STR3C_MASK                                0x4
#define _PSTR3CON_STR3D_POSN                                0x3
#define _PSTR3CON_STR3D_POSITION                            0x3
#define _PSTR3CON_STR3D_SIZE                                0x1
#define _PSTR3CON_STR3D_LENGTH                              0x1
#define _PSTR3CON_STR3D_MASK                                0x8
#define _PSTR3CON_STR3SYNC_POSN                             0x4
#define _PSTR3CON_STR3SYNC_POSITION                         0x4
#define _PSTR3CON_STR3SYNC_SIZE                             0x1
#define _PSTR3CON_STR3SYNC_LENGTH                           0x1
#define _PSTR3CON_STR3SYNC_MASK                             0x10

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
#define PR4 PR4
extern volatile unsigned char           PR4                 __at(0x416);
#ifndef _LIB_BUILD
asm("PR4 equ 0416h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR4                    :8;
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
#define PR6 PR6
extern volatile unsigned char           PR6                 __at(0x41D);
#ifndef _LIB_BUILD
asm("PR6 equ 041Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR6                    :8;
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
        unsigned LCDIRS                 :1;
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
#define _LCDREF_LCDIRS_POSN                                 0x6
#define _LCDREF_LCDIRS_POSITION                             0x6
#define _LCDREF_LCDIRS_SIZE                                 0x1
#define _LCDREF_LCDIRS_LENGTH                               0x1
#define _LCDREF_LCDIRS_MASK                                 0x40
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
// BAUDCON<ABDEN>
extern volatile __bit                   ABDEN               __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON,0)
// BAUDCON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0xCFF);	// @ (0x19F * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON,7)
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
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
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
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x10A0);	// @ (0x214 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// LCDPS<BIASMD>
extern volatile __bit                   BIASMD              __at(0x3C96);	// @ (0x792 * 8 + 6)
#define                                 BIASMD_bit          _BIT_ACCESS(LCDPS,6)
// SSPCON3<BOEN>
extern volatile __bit                   BOEN                __at(0x10BC);	// @ (0x217 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSPCON3,4)
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
// CCPTMRS0<C1TSEL0>
extern volatile __bit                   C1TSEL0             __at(0x14F0);	// @ (0x29E * 8 + 0)
#define                                 C1TSEL0_bit         _BIT_ACCESS(CCPTMRS0,0)
// CCPTMRS0<C1TSEL1>
extern volatile __bit                   C1TSEL1             __at(0x14F1);	// @ (0x29E * 8 + 1)
#define                                 C1TSEL1_bit         _BIT_ACCESS(CCPTMRS0,1)
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
extern volatile __bit                   C2OUTSEL            __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 C2OUTSEL_bit        _BIT_ACCESS(APFCON,2)
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
// CCPTMRS0<C2TSEL0>
extern volatile __bit                   C2TSEL0             __at(0x14F2);	// @ (0x29E * 8 + 2)
#define                                 C2TSEL0_bit         _BIT_ACCESS(CCPTMRS0,2)
// CCPTMRS0<C2TSEL1>
extern volatile __bit                   C2TSEL1             __at(0x14F3);	// @ (0x29E * 8 + 3)
#define                                 C2TSEL1_bit         _BIT_ACCESS(CCPTMRS0,3)
// CCPTMRS0<C3TSEL0>
extern volatile __bit                   C3TSEL0             __at(0x14F4);	// @ (0x29E * 8 + 4)
#define                                 C3TSEL0_bit         _BIT_ACCESS(CCPTMRS0,4)
// CCPTMRS0<C3TSEL1>
extern volatile __bit                   C3TSEL1             __at(0x14F5);	// @ (0x29E * 8 + 5)
#define                                 C3TSEL1_bit         _BIT_ACCESS(CCPTMRS0,5)
// CCPTMRS0<C4TSEL0>
extern volatile __bit                   C4TSEL0             __at(0x14F6);	// @ (0x29E * 8 + 6)
#define                                 C4TSEL0_bit         _BIT_ACCESS(CCPTMRS0,6)
// CCPTMRS0<C4TSEL1>
extern volatile __bit                   C4TSEL1             __at(0x14F7);	// @ (0x29E * 8 + 7)
#define                                 C4TSEL1_bit         _BIT_ACCESS(CCPTMRS0,7)
// CCPTMRS1<C5TSEL0>
extern volatile __bit                   C5TSEL0             __at(0x14F8);	// @ (0x29F * 8 + 0)
#define                                 C5TSEL0_bit         _BIT_ACCESS(CCPTMRS1,0)
// CCPTMRS1<C5TSEL1>
extern volatile __bit                   C5TSEL1             __at(0x14F9);	// @ (0x29F * 8 + 1)
#define                                 C5TSEL1_bit         _BIT_ACCESS(CCPTMRS1,1)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// CCP1AS<CCP1AS0>
extern volatile __bit                   CCP1AS0             __at(0x14AC);	// @ (0x295 * 8 + 4)
#define                                 CCP1AS0_bit         _BIT_ACCESS(CCP1AS,4)
// CCP1AS<CCP1AS1>
extern volatile __bit                   CCP1AS1             __at(0x14AD);	// @ (0x295 * 8 + 5)
#define                                 CCP1AS1_bit         _BIT_ACCESS(CCP1AS,5)
// CCP1AS<CCP1AS2>
extern volatile __bit                   CCP1AS2             __at(0x14AE);	// @ (0x295 * 8 + 6)
#define                                 CCP1AS2_bit         _BIT_ACCESS(CCP1AS,6)
// CCP1AS<CCP1ASE>
extern volatile __bit                   CCP1ASE             __at(0x14AF);	// @ (0x295 * 8 + 7)
#define                                 CCP1ASE_bit         _BIT_ACCESS(CCP1AS,7)
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
// CCP2AS<CCP2AS0>
extern volatile __bit                   CCP2AS0             __at(0x14E4);	// @ (0x29C * 8 + 4)
#define                                 CCP2AS0_bit         _BIT_ACCESS(CCP2AS,4)
// CCP2AS<CCP2AS1>
extern volatile __bit                   CCP2AS1             __at(0x14E5);	// @ (0x29C * 8 + 5)
#define                                 CCP2AS1_bit         _BIT_ACCESS(CCP2AS,5)
// CCP2AS<CCP2AS2>
extern volatile __bit                   CCP2AS2             __at(0x14E6);	// @ (0x29C * 8 + 6)
#define                                 CCP2AS2_bit         _BIT_ACCESS(CCP2AS,6)
// CCP2AS<CCP2ASE>
extern volatile __bit                   CCP2ASE             __at(0x14E7);	// @ (0x29C * 8 + 7)
#define                                 CCP2ASE_bit         _BIT_ACCESS(CCP2AS,7)
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
// CCP3AS<CCP3AS0>
extern volatile __bit                   CCP3AS0             __at(0x18AC);	// @ (0x315 * 8 + 4)
#define                                 CCP3AS0_bit         _BIT_ACCESS(CCP3AS,4)
// CCP3AS<CCP3AS1>
extern volatile __bit                   CCP3AS1             __at(0x18AD);	// @ (0x315 * 8 + 5)
#define                                 CCP3AS1_bit         _BIT_ACCESS(CCP3AS,5)
// CCP3AS<CCP3AS2>
extern volatile __bit                   CCP3AS2             __at(0x18AE);	// @ (0x315 * 8 + 6)
#define                                 CCP3AS2_bit         _BIT_ACCESS(CCP3AS,6)
// CCP3AS<CCP3ASE>
extern volatile __bit                   CCP3ASE             __at(0x18AF);	// @ (0x315 * 8 + 7)
#define                                 CCP3ASE_bit         _BIT_ACCESS(CCP3AS,7)
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
// APFCON<CCP3SEL>
extern volatile __bit                   CCP3SEL             __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 CCP3SEL_bit         _BIT_ACCESS(APFCON,6)
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
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x10A6);	// @ (0x214 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON1<CKP>
extern volatile __bit                   CKP                 __at(0x10AC);	// @ (0x215 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON1,4)
// CPSCON1<CPSCH0>
extern volatile __bit                   CPSCH0              __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 CPSCH0_bit          _BIT_ACCESS(CPSCON1,0)
// CPSCON1<CPSCH1>
extern volatile __bit                   CPSCH1              __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 CPSCH1_bit          _BIT_ACCESS(CPSCON1,1)
// CPSCON1<CPSCH2>
extern volatile __bit                   CPSCH2              __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CPSCH2_bit          _BIT_ACCESS(CPSCON1,2)
// CPSCON0<CPSON>
extern volatile __bit                   CPSON               __at(0xF7);	// @ (0x1E * 8 + 7)
#define                                 CPSON_bit           _BIT_ACCESS(CPSCON0,7)
// CPSCON0<CPSOUT>
extern volatile __bit                   CPSOUT              __at(0xF1);	// @ (0x1E * 8 + 1)
#define                                 CPSOUT_bit          _BIT_ACCESS(CPSCON0,1)
// CPSCON0<CPSRNG0>
extern volatile __bit                   CPSRNG0             __at(0xF2);	// @ (0x1E * 8 + 2)
#define                                 CPSRNG0_bit         _BIT_ACCESS(CPSCON0,2)
// CPSCON0<CPSRNG1>
extern volatile __bit                   CPSRNG1             __at(0xF3);	// @ (0x1E * 8 + 3)
#define                                 CPSRNG1_bit         _BIT_ACCESS(CPSCON0,3)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// LCDCON<CS0>
extern volatile __bit                   CS0                 __at(0x3C8A);	// @ (0x791 * 8 + 2)
#define                                 CS0_bit             _BIT_ACCESS(LCDCON,2)
// LCDCON<CS1>
extern volatile __bit                   CS1                 __at(0x3C8B);	// @ (0x791 * 8 + 3)
#define                                 CS1_bit             _BIT_ACCESS(LCDCON,3)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// DACCON0<DACEN>
extern volatile __bit                   DACEN               __at(0x8C7);	// @ (0x118 * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(DACCON0,7)
// DACCON0<DACLPS>
extern volatile __bit                   DACLPS              __at(0x8C6);	// @ (0x118 * 8 + 6)
#define                                 DACLPS_bit          _BIT_ACCESS(DACCON0,6)
// DACCON0<DACNSS>
extern volatile __bit                   DACNSS              __at(0x8C0);	// @ (0x118 * 8 + 0)
#define                                 DACNSS_bit          _BIT_ACCESS(DACCON0,0)
// DACCON0<DACOE>
extern volatile __bit                   DACOE               __at(0x8C5);	// @ (0x118 * 8 + 5)
#define                                 DACOE_bit           _BIT_ACCESS(DACCON0,5)
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
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// SSPCON3<DHEN>
extern volatile __bit                   DHEN                __at(0x10B8);	// @ (0x217 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSPCON3,0)
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
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
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
// LATE<LATE3>
extern volatile __bit                   LATE3               __at(0x883);	// @ (0x110 * 8 + 3)
#define                                 LATE3_bit           _BIT_ACCESS(LATE,3)
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
// LCDREF<LCDIRS>
extern volatile __bit                   LCDIRS              __at(0x3C9E);	// @ (0x793 * 8 + 6)
#define                                 LCDIRS_bit          _BIT_ACCESS(LCDREF,6)
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
// EECON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(EECON1,5)
// CMOUT<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 MC1OUT_bit          _BIT_ACCESS(CMOUT,0)
// CMOUT<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x8A9);	// @ (0x115 * 8 + 1)
#define                                 MC2OUT_bit          _BIT_ACCESS(CMOUT,1)
// OSCSTAT<MFIOFR>
extern volatile __bit                   MFIOFR              __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 MFIOFR_bit          _BIT_ACCESS(OSCSTAT,2)
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
// PWM1CON<P1DC0>
extern volatile __bit                   P1DC0               __at(0x14A0);	// @ (0x294 * 8 + 0)
#define                                 P1DC0_bit           _BIT_ACCESS(PWM1CON,0)
// PWM1CON<P1DC1>
extern volatile __bit                   P1DC1               __at(0x14A1);	// @ (0x294 * 8 + 1)
#define                                 P1DC1_bit           _BIT_ACCESS(PWM1CON,1)
// PWM1CON<P1DC2>
extern volatile __bit                   P1DC2               __at(0x14A2);	// @ (0x294 * 8 + 2)
#define                                 P1DC2_bit           _BIT_ACCESS(PWM1CON,2)
// PWM1CON<P1DC3>
extern volatile __bit                   P1DC3               __at(0x14A3);	// @ (0x294 * 8 + 3)
#define                                 P1DC3_bit           _BIT_ACCESS(PWM1CON,3)
// PWM1CON<P1DC4>
extern volatile __bit                   P1DC4               __at(0x14A4);	// @ (0x294 * 8 + 4)
#define                                 P1DC4_bit           _BIT_ACCESS(PWM1CON,4)
// PWM1CON<P1DC5>
extern volatile __bit                   P1DC5               __at(0x14A5);	// @ (0x294 * 8 + 5)
#define                                 P1DC5_bit           _BIT_ACCESS(PWM1CON,5)
// PWM1CON<P1DC6>
extern volatile __bit                   P1DC6               __at(0x14A6);	// @ (0x294 * 8 + 6)
#define                                 P1DC6_bit           _BIT_ACCESS(PWM1CON,6)
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0x149E);	// @ (0x293 * 8 + 6)
#define                                 P1M0_bit            _BIT_ACCESS(CCP1CON,6)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x149F);	// @ (0x293 * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// PWM1CON<P1RSEN>
extern volatile __bit                   P1RSEN              __at(0x14A7);	// @ (0x294 * 8 + 7)
#define                                 P1RSEN_bit          _BIT_ACCESS(PWM1CON,7)
// APFCON<P2BSEL>
extern volatile __bit                   P2BSEL              __at(0x8EC);	// @ (0x11D * 8 + 4)
#define                                 P2BSEL_bit          _BIT_ACCESS(APFCON,4)
// PWM2CON<P2DC0>
extern volatile __bit                   P2DC0               __at(0x14D8);	// @ (0x29B * 8 + 0)
#define                                 P2DC0_bit           _BIT_ACCESS(PWM2CON,0)
// PWM2CON<P2DC1>
extern volatile __bit                   P2DC1               __at(0x14D9);	// @ (0x29B * 8 + 1)
#define                                 P2DC1_bit           _BIT_ACCESS(PWM2CON,1)
// PWM2CON<P2DC2>
extern volatile __bit                   P2DC2               __at(0x14DA);	// @ (0x29B * 8 + 2)
#define                                 P2DC2_bit           _BIT_ACCESS(PWM2CON,2)
// PWM2CON<P2DC3>
extern volatile __bit                   P2DC3               __at(0x14DB);	// @ (0x29B * 8 + 3)
#define                                 P2DC3_bit           _BIT_ACCESS(PWM2CON,3)
// PWM2CON<P2DC4>
extern volatile __bit                   P2DC4               __at(0x14DC);	// @ (0x29B * 8 + 4)
#define                                 P2DC4_bit           _BIT_ACCESS(PWM2CON,4)
// PWM2CON<P2DC5>
extern volatile __bit                   P2DC5               __at(0x14DD);	// @ (0x29B * 8 + 5)
#define                                 P2DC5_bit           _BIT_ACCESS(PWM2CON,5)
// PWM2CON<P2DC6>
extern volatile __bit                   P2DC6               __at(0x14DE);	// @ (0x29B * 8 + 6)
#define                                 P2DC6_bit           _BIT_ACCESS(PWM2CON,6)
// CCP2CON<P2M0>
extern volatile __bit                   P2M0                __at(0x14D6);	// @ (0x29A * 8 + 6)
#define                                 P2M0_bit            _BIT_ACCESS(CCP2CON,6)
// CCP2CON<P2M1>
extern volatile __bit                   P2M1                __at(0x14D7);	// @ (0x29A * 8 + 7)
#define                                 P2M1_bit            _BIT_ACCESS(CCP2CON,7)
// PWM2CON<P2RSEN>
extern volatile __bit                   P2RSEN              __at(0x14DF);	// @ (0x29B * 8 + 7)
#define                                 P2RSEN_bit          _BIT_ACCESS(PWM2CON,7)
// PWM3CON<P3DC0>
extern volatile __bit                   P3DC0               __at(0x18A0);	// @ (0x314 * 8 + 0)
#define                                 P3DC0_bit           _BIT_ACCESS(PWM3CON,0)
// PWM3CON<P3DC1>
extern volatile __bit                   P3DC1               __at(0x18A1);	// @ (0x314 * 8 + 1)
#define                                 P3DC1_bit           _BIT_ACCESS(PWM3CON,1)
// PWM3CON<P3DC2>
extern volatile __bit                   P3DC2               __at(0x18A2);	// @ (0x314 * 8 + 2)
#define                                 P3DC2_bit           _BIT_ACCESS(PWM3CON,2)
// PWM3CON<P3DC3>
extern volatile __bit                   P3DC3               __at(0x18A3);	// @ (0x314 * 8 + 3)
#define                                 P3DC3_bit           _BIT_ACCESS(PWM3CON,3)
// PWM3CON<P3DC4>
extern volatile __bit                   P3DC4               __at(0x18A4);	// @ (0x314 * 8 + 4)
#define                                 P3DC4_bit           _BIT_ACCESS(PWM3CON,4)
// PWM3CON<P3DC5>
extern volatile __bit                   P3DC5               __at(0x18A5);	// @ (0x314 * 8 + 5)
#define                                 P3DC5_bit           _BIT_ACCESS(PWM3CON,5)
// PWM3CON<P3DC6>
extern volatile __bit                   P3DC6               __at(0x18A6);	// @ (0x314 * 8 + 6)
#define                                 P3DC6_bit           _BIT_ACCESS(PWM3CON,6)
// CCP3CON<P3M0>
extern volatile __bit                   P3M0                __at(0x189E);	// @ (0x313 * 8 + 6)
#define                                 P3M0_bit            _BIT_ACCESS(CCP3CON,6)
// CCP3CON<P3M1>
extern volatile __bit                   P3M1                __at(0x189F);	// @ (0x313 * 8 + 7)
#define                                 P3M1_bit            _BIT_ACCESS(CCP3CON,7)
// PWM3CON<P3RSEN>
extern volatile __bit                   P3RSEN              __at(0x18A7);	// @ (0x314 * 8 + 7)
#define                                 P3RSEN_bit          _BIT_ACCESS(PWM3CON,7)
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
// CCP1AS<PSS1AC0>
extern volatile __bit                   PSS1AC0             __at(0x14AA);	// @ (0x295 * 8 + 2)
#define                                 PSS1AC0_bit         _BIT_ACCESS(CCP1AS,2)
// CCP1AS<PSS1AC1>
extern volatile __bit                   PSS1AC1             __at(0x14AB);	// @ (0x295 * 8 + 3)
#define                                 PSS1AC1_bit         _BIT_ACCESS(CCP1AS,3)
// CCP1AS<PSS1BD0>
extern volatile __bit                   PSS1BD0             __at(0x14A8);	// @ (0x295 * 8 + 0)
#define                                 PSS1BD0_bit         _BIT_ACCESS(CCP1AS,0)
// CCP1AS<PSS1BD1>
extern volatile __bit                   PSS1BD1             __at(0x14A9);	// @ (0x295 * 8 + 1)
#define                                 PSS1BD1_bit         _BIT_ACCESS(CCP1AS,1)
// CCP2AS<PSS2AC0>
extern volatile __bit                   PSS2AC0             __at(0x14E2);	// @ (0x29C * 8 + 2)
#define                                 PSS2AC0_bit         _BIT_ACCESS(CCP2AS,2)
// CCP2AS<PSS2AC1>
extern volatile __bit                   PSS2AC1             __at(0x14E3);	// @ (0x29C * 8 + 3)
#define                                 PSS2AC1_bit         _BIT_ACCESS(CCP2AS,3)
// CCP2AS<PSS2BD0>
extern volatile __bit                   PSS2BD0             __at(0x14E0);	// @ (0x29C * 8 + 0)
#define                                 PSS2BD0_bit         _BIT_ACCESS(CCP2AS,0)
// CCP2AS<PSS2BD1>
extern volatile __bit                   PSS2BD1             __at(0x14E1);	// @ (0x29C * 8 + 1)
#define                                 PSS2BD1_bit         _BIT_ACCESS(CCP2AS,1)
// CCP3AS<PSS3AC0>
extern volatile __bit                   PSS3AC0             __at(0x18AA);	// @ (0x315 * 8 + 2)
#define                                 PSS3AC0_bit         _BIT_ACCESS(CCP3AS,2)
// CCP3AS<PSS3AC1>
extern volatile __bit                   PSS3AC1             __at(0x18AB);	// @ (0x315 * 8 + 3)
#define                                 PSS3AC1_bit         _BIT_ACCESS(CCP3AS,3)
// CCP3AS<PSS3BD0>
extern volatile __bit                   PSS3BD0             __at(0x18A8);	// @ (0x315 * 8 + 0)
#define                                 PSS3BD0_bit         _BIT_ACCESS(CCP3AS,0)
// CCP3AS<PSS3BD1>
extern volatile __bit                   PSS3BD1             __at(0x18A9);	// @ (0x315 * 8 + 1)
#define                                 PSS3BD1_bit         _BIT_ACCESS(CCP3AS,1)
// PWM1CON<PWM1RSEN>
extern volatile __bit                   PWM1RSEN            __at(0x14A7);	// @ (0x294 * 8 + 7)
#define                                 PWM1RSEN_bit        _BIT_ACCESS(PWM1CON,7)
// PWM2CON<PWM2RSEN>
extern volatile __bit                   PWM2RSEN            __at(0x14DF);	// @ (0x29B * 8 + 7)
#define                                 PWM2RSEN_bit        _BIT_ACCESS(PWM2CON,7)
// PWM3CON<PWM3RSEN>
extern volatile __bit                   PWM3RSEN            __at(0x18A7);	// @ (0x314 * 8 + 7)
#define                                 PWM3RSEN_bit        _BIT_ACCESS(PWM3CON,7)
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
// BAUDCON<RCIDL>
extern volatile __bit                   RCIDL               __at(0xCFE);	// @ (0x19F * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON,6)
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
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
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
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// SSPCON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x10BB);	// @ (0x217 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSPCON3,3)
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
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x10B0);	// @ (0x216 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// LCDCON<SLPEN>
extern volatile __bit                   SLPEN               __at(0x3C8E);	// @ (0x791 * 8 + 6)
#define                                 SLPEN_bit           _BIT_ACCESS(LCDCON,6)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x10A7);	// @ (0x214 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xCEF);	// @ (0x19D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// OSCCON<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCCON,7)
// SRCON0<SRCLK0>
extern volatile __bit                   SRCLK0              __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 SRCLK0_bit          _BIT_ACCESS(SRCON0,4)
// SRCON0<SRCLK1>
extern volatile __bit                   SRCLK1              __at(0x8D5);	// @ (0x11A * 8 + 5)
#define                                 SRCLK1_bit          _BIT_ACCESS(SRCON0,5)
// SRCON0<SRCLK2>
extern volatile __bit                   SRCLK2              __at(0x8D6);	// @ (0x11A * 8 + 6)
#define                                 SRCLK2_bit          _BIT_ACCESS(SRCON0,6)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// SRCON0<SRLEN>
extern volatile __bit                   SRLEN               __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 SRLEN_bit           _BIT_ACCESS(SRCON0,7)
// SRCON0<SRNQEN>
extern volatile __bit                   SRNQEN              __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 SRNQEN_bit          _BIT_ACCESS(SRCON0,2)
// APFCON<SRNQSEL>
extern volatile __bit                   SRNQSEL             __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 SRNQSEL_bit         _BIT_ACCESS(APFCON,3)
// SRCON0<SRPR>
extern volatile __bit                   SRPR                __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 SRPR_bit            _BIT_ACCESS(SRCON0,0)
// SRCON0<SRPS>
extern volatile __bit                   SRPS                __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 SRPS_bit            _BIT_ACCESS(SRCON0,1)
// SRCON0<SRQEN>
extern volatile __bit                   SRQEN               __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 SRQEN_bit           _BIT_ACCESS(SRCON0,3)
// SRCON1<SRRC1E>
extern volatile __bit                   SRRC1E              __at(0x8D8);	// @ (0x11B * 8 + 0)
#define                                 SRRC1E_bit          _BIT_ACCESS(SRCON1,0)
// SRCON1<SRRC2E>
extern volatile __bit                   SRRC2E              __at(0x8D9);	// @ (0x11B * 8 + 1)
#define                                 SRRC2E_bit          _BIT_ACCESS(SRCON1,1)
// SRCON1<SRRCKE>
extern volatile __bit                   SRRCKE              __at(0x8DA);	// @ (0x11B * 8 + 2)
#define                                 SRRCKE_bit          _BIT_ACCESS(SRCON1,2)
// SRCON1<SRRPE>
extern volatile __bit                   SRRPE               __at(0x8DB);	// @ (0x11B * 8 + 3)
#define                                 SRRPE_bit           _BIT_ACCESS(SRCON1,3)
// SRCON1<SRSC1E>
extern volatile __bit                   SRSC1E              __at(0x8DC);	// @ (0x11B * 8 + 4)
#define                                 SRSC1E_bit          _BIT_ACCESS(SRCON1,4)
// SRCON1<SRSC2E>
extern volatile __bit                   SRSC2E              __at(0x8DD);	// @ (0x11B * 8 + 5)
#define                                 SRSC2E_bit          _BIT_ACCESS(SRCON1,5)
// SRCON1<SRSCKE>
extern volatile __bit                   SRSCKE              __at(0x8DE);	// @ (0x11B * 8 + 6)
#define                                 SRSCKE_bit          _BIT_ACCESS(SRCON1,6)
// SRCON1<SRSPE>
extern volatile __bit                   SRSPE               __at(0x8DF);	// @ (0x11B * 8 + 7)
#define                                 SRSPE_bit           _BIT_ACCESS(SRCON1,7)
// SSPCON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x10AD);	// @ (0x215 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON1,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
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
// APFCON<SSSEL>
extern volatile __bit                   SSSEL               __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 SSSEL_bit           _BIT_ACCESS(APFCON,1)
// PCON<STKOVF>
extern volatile __bit                   STKOVF              __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON,7)
// PCON<STKUNF>
extern volatile __bit                   STKUNF              __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON,6)
// PSTR1CON<STR1A>
extern volatile __bit                   STR1A               __at(0x14B0);	// @ (0x296 * 8 + 0)
#define                                 STR1A_bit           _BIT_ACCESS(PSTR1CON,0)
// PSTR1CON<STR1B>
extern volatile __bit                   STR1B               __at(0x14B1);	// @ (0x296 * 8 + 1)
#define                                 STR1B_bit           _BIT_ACCESS(PSTR1CON,1)
// PSTR1CON<STR1C>
extern volatile __bit                   STR1C               __at(0x14B2);	// @ (0x296 * 8 + 2)
#define                                 STR1C_bit           _BIT_ACCESS(PSTR1CON,2)
// PSTR1CON<STR1D>
extern volatile __bit                   STR1D               __at(0x14B3);	// @ (0x296 * 8 + 3)
#define                                 STR1D_bit           _BIT_ACCESS(PSTR1CON,3)
// PSTR1CON<STR1SYNC>
extern volatile __bit                   STR1SYNC            __at(0x14B4);	// @ (0x296 * 8 + 4)
#define                                 STR1SYNC_bit        _BIT_ACCESS(PSTR1CON,4)
// PSTR2CON<STR2A>
extern volatile __bit                   STR2A               __at(0x14E8);	// @ (0x29D * 8 + 0)
#define                                 STR2A_bit           _BIT_ACCESS(PSTR2CON,0)
// PSTR2CON<STR2B>
extern volatile __bit                   STR2B               __at(0x14E9);	// @ (0x29D * 8 + 1)
#define                                 STR2B_bit           _BIT_ACCESS(PSTR2CON,1)
// PSTR2CON<STR2C>
extern volatile __bit                   STR2C               __at(0x14EA);	// @ (0x29D * 8 + 2)
#define                                 STR2C_bit           _BIT_ACCESS(PSTR2CON,2)
// PSTR2CON<STR2D>
extern volatile __bit                   STR2D               __at(0x14EB);	// @ (0x29D * 8 + 3)
#define                                 STR2D_bit           _BIT_ACCESS(PSTR2CON,3)
// PSTR2CON<STR2SYNC>
extern volatile __bit                   STR2SYNC            __at(0x14EC);	// @ (0x29D * 8 + 4)
#define                                 STR2SYNC_bit        _BIT_ACCESS(PSTR2CON,4)
// PSTR3CON<STR3A>
extern volatile __bit                   STR3A               __at(0x18B0);	// @ (0x316 * 8 + 0)
#define                                 STR3A_bit           _BIT_ACCESS(PSTR3CON,0)
// PSTR3CON<STR3B>
extern volatile __bit                   STR3B               __at(0x18B1);	// @ (0x316 * 8 + 1)
#define                                 STR3B_bit           _BIT_ACCESS(PSTR3CON,1)
// PSTR3CON<STR3C>
extern volatile __bit                   STR3C               __at(0x18B2);	// @ (0x316 * 8 + 2)
#define                                 STR3C_bit           _BIT_ACCESS(PSTR3CON,2)
// PSTR3CON<STR3D>
extern volatile __bit                   STR3D               __at(0x18B3);	// @ (0x316 * 8 + 3)
#define                                 STR3D_bit           _BIT_ACCESS(PSTR3CON,3)
// PSTR3CON<STR3SYNC>
extern volatile __bit                   STR3SYNC            __at(0x18B4);	// @ (0x316 * 8 + 4)
#define                                 STR3SYNC_bit        _BIT_ACCESS(PSTR3CON,4)
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
// CPSCON0<T0XCS>
extern volatile __bit                   T0XCS               __at(0xF0);	// @ (0x1E * 8 + 0)
#define                                 T0XCS_bit           _BIT_ACCESS(CPSCON0,0)
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
// APFCON<T1GSEL>
extern volatile __bit                   T1GSEL              __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 T1GSEL_bit          _BIT_ACCESS(APFCON,5)
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
// PIE3<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 TMR4IE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<TMR4IF>
extern volatile __bit                   TMR4IF              __at(0x99);	// @ (0x13 * 8 + 1)
#define                                 TMR4IF_bit          _BIT_ACCESS(PIR3,1)
// T4CON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x20BA);	// @ (0x417 * 8 + 2)
#define                                 TMR4ON_bit          _BIT_ACCESS(T4CON,2)
// PIE3<TMR6IE>
extern volatile __bit                   TMR6IE              __at(0x49B);	// @ (0x93 * 8 + 3)
#define                                 TMR6IE_bit          _BIT_ACCESS(PIE3,3)
// PIR3<TMR6IF>
extern volatile __bit                   TMR6IF              __at(0x9B);	// @ (0x13 * 8 + 3)
#define                                 TMR6IF_bit          _BIT_ACCESS(PIR3,3)
// T6CON<TMR6ON>
extern volatile __bit                   TMR6ON              __at(0x20F2);	// @ (0x41E * 8 + 2)
#define                                 TMR6ON_bit          _BIT_ACCESS(T6CON,2)
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
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0xCF1);	// @ (0x19E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
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
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x10A1);	// @ (0x214 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
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
// EECON1<WR>
extern volatile __bit                   WR                  __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
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
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC16LF1936_H_
