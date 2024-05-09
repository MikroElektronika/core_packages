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

#ifndef _PIC16F887_H_
#define _PIC16F887_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F887
 */
#ifndef _XC_H_
#warning Header file pic16f887.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: INDF
#define INDF INDF
extern volatile unsigned char           INDF                __at(0x000);
#ifndef _LIB_BUILD
asm("INDF equ 00h");
#endif

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned char           TMR0                __at(0x001);
#ifndef _LIB_BUILD
asm("TMR0 equ 01h");
#endif

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0x002);
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif

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
        unsigned RP                     :2;
        unsigned IRP                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned RP0                    :1;
        unsigned RP1                    :1;
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
#define _STATUS_RP_POSN                                     0x5
#define _STATUS_RP_POSITION                                 0x5
#define _STATUS_RP_SIZE                                     0x2
#define _STATUS_RP_LENGTH                                   0x2
#define _STATUS_RP_MASK                                     0x60
#define _STATUS_IRP_POSN                                    0x7
#define _STATUS_IRP_POSITION                                0x7
#define _STATUS_IRP_SIZE                                    0x1
#define _STATUS_IRP_LENGTH                                  0x1
#define _STATUS_IRP_MASK                                    0x80
#define _STATUS_RP0_POSN                                    0x5
#define _STATUS_RP0_POSITION                                0x5
#define _STATUS_RP0_SIZE                                    0x1
#define _STATUS_RP0_LENGTH                                  0x1
#define _STATUS_RP0_MASK                                    0x20
#define _STATUS_RP1_POSN                                    0x6
#define _STATUS_RP1_POSITION                                0x6
#define _STATUS_RP1_SIZE                                    0x1
#define _STATUS_RP1_LENGTH                                  0x1
#define _STATUS_RP1_MASK                                    0x40
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

// Register: FSR
#define FSR FSR
extern volatile unsigned char           FSR                 __at(0x004);
#ifndef _LIB_BUILD
asm("FSR equ 04h");
#endif

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0x005);
#ifndef _LIB_BUILD
asm("PORTA equ 05h");
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
extern volatile PORTAbits_t PORTAbits __at(0x005);
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
extern volatile unsigned char           PORTB               __at(0x006);
#ifndef _LIB_BUILD
asm("PORTB equ 06h");
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
extern volatile PORTBbits_t PORTBbits __at(0x006);
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
extern volatile unsigned char           PORTC               __at(0x007);
#ifndef _LIB_BUILD
asm("PORTC equ 07h");
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
extern volatile PORTCbits_t PORTCbits __at(0x007);
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
extern volatile unsigned char           PORTD               __at(0x008);
#ifndef _LIB_BUILD
asm("PORTD equ 08h");
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
extern volatile PORTDbits_t PORTDbits __at(0x008);
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
extern volatile unsigned char           PORTE               __at(0x009);
#ifndef _LIB_BUILD
asm("PORTE equ 09h");
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
extern volatile PORTEbits_t PORTEbits __at(0x009);
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

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RBIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RBIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned TMR0IF                 :1;
        unsigned                        :2;
        unsigned TMR0IE                 :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
#define _INTCON_INTF_POSN                                   0x1
#define _INTCON_INTF_POSITION                               0x1
#define _INTCON_INTF_SIZE                                   0x1
#define _INTCON_INTF_LENGTH                                 0x1
#define _INTCON_INTF_MASK                                   0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_RBIE_POSN                                   0x3
#define _INTCON_RBIE_POSITION                               0x3
#define _INTCON_RBIE_SIZE                                   0x1
#define _INTCON_RBIE_LENGTH                                 0x1
#define _INTCON_RBIE_MASK                                   0x8
#define _INTCON_INTE_POSN                                   0x4
#define _INTCON_INTE_POSITION                               0x4
#define _INTCON_INTE_SIZE                                   0x1
#define _INTCON_INTE_LENGTH                                 0x1
#define _INTCON_INTE_MASK                                   0x10
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
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x00C);
#ifndef _LIB_BUILD
asm("PIR1 equ 0Ch");
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
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
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

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x00D);
#ifndef _LIB_BUILD
asm("PIR2 equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IF                 :1;
        unsigned                        :1;
        unsigned ULPWUIF                :1;
        unsigned BCLIF                  :1;
        unsigned EEIF                   :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned OSFIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x00D);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_ULPWUIF_POSN                                  0x2
#define _PIR2_ULPWUIF_POSITION                              0x2
#define _PIR2_ULPWUIF_SIZE                                  0x1
#define _PIR2_ULPWUIF_LENGTH                                0x1
#define _PIR2_ULPWUIF_MASK                                  0x4
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

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x00E);
#ifndef _LIB_BUILD
asm("TMR1 equ 0Eh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x00E);
#ifndef _LIB_BUILD
asm("TMR1L equ 0Eh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR1H equ 0Fh");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x010);
#ifndef _LIB_BUILD
asm("T1CON equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1GE                 :1;
        unsigned T1GINV                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned                        :1;
        unsigned T1GIV                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x010);
// bitfield macros
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
#define _T1CON_TMR1GE_POSN                                  0x6
#define _T1CON_TMR1GE_POSITION                              0x6
#define _T1CON_TMR1GE_SIZE                                  0x1
#define _T1CON_TMR1GE_LENGTH                                0x1
#define _T1CON_TMR1GE_MASK                                  0x40
#define _T1CON_T1GINV_POSN                                  0x7
#define _T1CON_T1GINV_POSITION                              0x7
#define _T1CON_T1GINV_SIZE                                  0x1
#define _T1CON_T1GINV_LENGTH                                0x1
#define _T1CON_T1GINV_MASK                                  0x80
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
#define _T1CON_T1GIV_POSN                                   0x7
#define _T1CON_T1GIV_POSITION                               0x7
#define _T1CON_T1GIV_SIZE                                   0x1
#define _T1CON_T1GIV_LENGTH                                 0x1
#define _T1CON_T1GIV_MASK                                   0x80
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x011);
#ifndef _LIB_BUILD
asm("TMR2 equ 011h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x012);
#ifndef _LIB_BUILD
asm("T2CON equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned TOUTPS                 :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x012);
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
#define _T2CON_TOUTPS_POSN                                  0x3
#define _T2CON_TOUTPS_POSITION                              0x3
#define _T2CON_TOUTPS_SIZE                                  0x4
#define _T2CON_TOUTPS_LENGTH                                0x4
#define _T2CON_TOUTPS_MASK                                  0x78
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
#define _T2CON_TOUTPS0_POSN                                 0x3
#define _T2CON_TOUTPS0_POSITION                             0x3
#define _T2CON_TOUTPS0_SIZE                                 0x1
#define _T2CON_TOUTPS0_LENGTH                               0x1
#define _T2CON_TOUTPS0_MASK                                 0x8
#define _T2CON_TOUTPS1_POSN                                 0x4
#define _T2CON_TOUTPS1_POSITION                             0x4
#define _T2CON_TOUTPS1_SIZE                                 0x1
#define _T2CON_TOUTPS1_LENGTH                               0x1
#define _T2CON_TOUTPS1_MASK                                 0x10
#define _T2CON_TOUTPS2_POSN                                 0x5
#define _T2CON_TOUTPS2_POSITION                             0x5
#define _T2CON_TOUTPS2_SIZE                                 0x1
#define _T2CON_TOUTPS2_LENGTH                               0x1
#define _T2CON_TOUTPS2_MASK                                 0x20
#define _T2CON_TOUTPS3_POSN                                 0x6
#define _T2CON_TOUTPS3_POSITION                             0x6
#define _T2CON_TOUTPS3_SIZE                                 0x1
#define _T2CON_TOUTPS3_LENGTH                               0x1
#define _T2CON_TOUTPS3_MASK                                 0x40

// Register: SSPBUF
#define SSPBUF SSPBUF
extern volatile unsigned char           SSPBUF              __at(0x013);
#ifndef _LIB_BUILD
asm("SSPBUF equ 013h");
#endif

// Register: SSPCON
#define SSPCON SSPCON
extern volatile unsigned char           SSPCON              __at(0x014);
#ifndef _LIB_BUILD
asm("SSPCON equ 014h");
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
} SSPCONbits_t;
extern volatile SSPCONbits_t SSPCONbits __at(0x014);
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

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0x015);
#ifndef _LIB_BUILD
asm("CCPR1 equ 015h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x015);
#ifndef _LIB_BUILD
asm("CCPR1L equ 015h");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x016);
#ifndef _LIB_BUILD
asm("CCPR1H equ 016h");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x017);
#ifndef _LIB_BUILD
asm("CCP1CON equ 017h");
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
    struct {
        unsigned                        :4;
        unsigned CCP1Y                  :1;
        unsigned CCP1X                  :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x017);
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
#define _CCP1CON_CCP1Y_POSN                                 0x4
#define _CCP1CON_CCP1Y_POSITION                             0x4
#define _CCP1CON_CCP1Y_SIZE                                 0x1
#define _CCP1CON_CCP1Y_LENGTH                               0x1
#define _CCP1CON_CCP1Y_MASK                                 0x10
#define _CCP1CON_CCP1X_POSN                                 0x5
#define _CCP1CON_CCP1X_POSITION                             0x5
#define _CCP1CON_CCP1X_SIZE                                 0x1
#define _CCP1CON_CCP1X_LENGTH                               0x1
#define _CCP1CON_CCP1X_MASK                                 0x20

// Register: RCSTA
#define RCSTA RCSTA
extern volatile unsigned char           RCSTA               __at(0x018);
#ifndef _LIB_BUILD
asm("RCSTA equ 018h");
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
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0x018);
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

// Register: TXREG
#define TXREG TXREG
extern volatile unsigned char           TXREG               __at(0x019);
#ifndef _LIB_BUILD
asm("TXREG equ 019h");
#endif

// Register: RCREG
#define RCREG RCREG
extern volatile unsigned char           RCREG               __at(0x01A);
#ifndef _LIB_BUILD
asm("RCREG equ 01Ah");
#endif

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0x01B);
#ifndef _LIB_BUILD
asm("CCPR2 equ 01Bh");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0x01B);
#ifndef _LIB_BUILD
asm("CCPR2L equ 01Bh");
#endif

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0x01C);
#ifndef _LIB_BUILD
asm("CCPR2H equ 01Ch");
#endif

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0x01D);
#ifndef _LIB_BUILD
asm("CCP2CON equ 01Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x01D);
// bitfield macros
#define _CCP2CON_CCP2M_POSN                                 0x0
#define _CCP2CON_CCP2M_POSITION                             0x0
#define _CCP2CON_CCP2M_SIZE                                 0x4
#define _CCP2CON_CCP2M_LENGTH                               0x4
#define _CCP2CON_CCP2M_MASK                                 0xF
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
#define _CCP2CON_CCP2Y_POSN                                 0x4
#define _CCP2CON_CCP2Y_POSITION                             0x4
#define _CCP2CON_CCP2Y_SIZE                                 0x1
#define _CCP2CON_CCP2Y_LENGTH                               0x1
#define _CCP2CON_CCP2Y_MASK                                 0x10
#define _CCP2CON_CCP2X_POSN                                 0x5
#define _CCP2CON_CCP2X_POSITION                             0x5
#define _CCP2CON_CCP2X_SIZE                                 0x1
#define _CCP2CON_CCP2X_LENGTH                               0x1
#define _CCP2CON_CCP2X_MASK                                 0x20

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRESH equ 01Eh");
#endif

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON0 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01F);
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
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_ADCS_POSN                                   0x6
#define _ADCON0_ADCS_POSITION                               0x6
#define _ADCON0_ADCS_SIZE                                   0x2
#define _ADCON0_ADCS_LENGTH                                 0x2
#define _ADCON0_ADCS_MASK                                   0xC0
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
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
#define _ADCON0_ADCS0_POSN                                  0x6
#define _ADCON0_ADCS0_POSITION                              0x6
#define _ADCON0_ADCS0_SIZE                                  0x1
#define _ADCON0_ADCS0_LENGTH                                0x1
#define _ADCON0_ADCS0_MASK                                  0x40
#define _ADCON0_ADCS1_POSN                                  0x7
#define _ADCON0_ADCS1_POSITION                              0x7
#define _ADCON0_ADCS1_SIZE                                  0x1
#define _ADCON0_ADCS1_LENGTH                                0x1
#define _ADCON0_ADCS1_MASK                                  0x80
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x081);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 081h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS                     :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned INTEDG                 :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __at(0x081);
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
#define _OPTION_REG_INTEDG_POSN                             0x6
#define _OPTION_REG_INTEDG_POSITION                         0x6
#define _OPTION_REG_INTEDG_SIZE                             0x1
#define _OPTION_REG_INTEDG_LENGTH                           0x1
#define _OPTION_REG_INTEDG_MASK                             0x40
#define _OPTION_REG_nRBPU_POSN                              0x7
#define _OPTION_REG_nRBPU_POSITION                          0x7
#define _OPTION_REG_nRBPU_SIZE                              0x1
#define _OPTION_REG_nRBPU_LENGTH                            0x1
#define _OPTION_REG_nRBPU_MASK                              0x80
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

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x085);
#ifndef _LIB_BUILD
asm("TRISA equ 085h");
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
extern volatile TRISAbits_t TRISAbits __at(0x085);
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
extern volatile unsigned char           TRISB               __at(0x086);
#ifndef _LIB_BUILD
asm("TRISB equ 086h");
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
extern volatile TRISBbits_t TRISBbits __at(0x086);
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
extern volatile unsigned char           TRISC               __at(0x087);
#ifndef _LIB_BUILD
asm("TRISC equ 087h");
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
extern volatile TRISCbits_t TRISCbits __at(0x087);
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
extern volatile unsigned char           TRISD               __at(0x088);
#ifndef _LIB_BUILD
asm("TRISD equ 088h");
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
extern volatile TRISDbits_t TRISDbits __at(0x088);
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
extern volatile unsigned char           TRISE               __at(0x089);
#ifndef _LIB_BUILD
asm("TRISE equ 089h");
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
extern volatile TRISEbits_t TRISEbits __at(0x089);
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
extern volatile unsigned char           PIE1                __at(0x08C);
#ifndef _LIB_BUILD
asm("PIE1 equ 08Ch");
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
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
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

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x08D);
#ifndef _LIB_BUILD
asm("PIE2 equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IE                 :1;
        unsigned                        :1;
        unsigned ULPWUIE                :1;
        unsigned BCLIE                  :1;
        unsigned EEIE                   :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned OSFIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x08D);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_ULPWUIE_POSN                                  0x2
#define _PIE2_ULPWUIE_POSITION                              0x2
#define _PIE2_ULPWUIE_SIZE                                  0x1
#define _PIE2_ULPWUIE_LENGTH                                0x1
#define _PIE2_ULPWUIE_MASK                                  0x4
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

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x08E);
#ifndef _LIB_BUILD
asm("PCON equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned                        :2;
        unsigned SBOREN                 :1;
        unsigned ULPWUE                 :1;
    };
    struct {
        unsigned nBO                    :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x08E);
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
#define _PCON_SBOREN_POSN                                   0x4
#define _PCON_SBOREN_POSITION                               0x4
#define _PCON_SBOREN_SIZE                                   0x1
#define _PCON_SBOREN_LENGTH                                 0x1
#define _PCON_SBOREN_MASK                                   0x10
#define _PCON_ULPWUE_POSN                                   0x5
#define _PCON_ULPWUE_POSITION                               0x5
#define _PCON_ULPWUE_SIZE                                   0x1
#define _PCON_ULPWUE_LENGTH                                 0x1
#define _PCON_ULPWUE_MASK                                   0x20
#define _PCON_nBO_POSN                                      0x0
#define _PCON_nBO_POSITION                                  0x0
#define _PCON_nBO_SIZE                                      0x1
#define _PCON_nBO_LENGTH                                    0x1
#define _PCON_nBO_MASK                                      0x1

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x08F);
#ifndef _LIB_BUILD
asm("OSCCON equ 08Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :1;
        unsigned LTS                    :1;
        unsigned HTS                    :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x08F);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x1
#define _OSCCON_SCS_LENGTH                                  0x1
#define _OSCCON_SCS_MASK                                    0x1
#define _OSCCON_LTS_POSN                                    0x1
#define _OSCCON_LTS_POSITION                                0x1
#define _OSCCON_LTS_SIZE                                    0x1
#define _OSCCON_LTS_LENGTH                                  0x1
#define _OSCCON_LTS_MASK                                    0x2
#define _OSCCON_HTS_POSN                                    0x2
#define _OSCCON_HTS_POSITION                                0x2
#define _OSCCON_HTS_SIZE                                    0x1
#define _OSCCON_HTS_LENGTH                                  0x1
#define _OSCCON_HTS_MASK                                    0x4
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x090);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :5;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x090);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x5
#define _OSCTUNE_TUN_LENGTH                                 0x5
#define _OSCTUNE_TUN_MASK                                   0x1F
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

// Register: SSPCON2
#define SSPCON2 SSPCON2
extern volatile unsigned char           SSPCON2             __at(0x091);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 091h");
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
extern volatile SSPCON2bits_t SSPCON2bits __at(0x091);
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

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x092);
#ifndef _LIB_BUILD
asm("PR2 equ 092h");
#endif

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0x093);
#ifndef _LIB_BUILD
asm("SSPADD equ 093h");
#endif

// Register: SSPMSK
#define SSPMSK SSPMSK
extern volatile unsigned char           SSPMSK              __at(0x093);
#ifndef _LIB_BUILD
asm("SSPMSK equ 093h");
#endif
// aliases
extern volatile unsigned char           MSK                 __at(0x093);
#ifndef _LIB_BUILD
asm("MSK equ 093h");
#endif
// bitfield definitions
typedef union {
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
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0x093);
// bitfield macros
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
// alias bitfield definitions
typedef union {
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
} MSKbits_t;
extern volatile MSKbits_t MSKbits __at(0x093);
// bitfield macros
#define _MSK_MSK0_POSN                                      0x0
#define _MSK_MSK0_POSITION                                  0x0
#define _MSK_MSK0_SIZE                                      0x1
#define _MSK_MSK0_LENGTH                                    0x1
#define _MSK_MSK0_MASK                                      0x1
#define _MSK_MSK1_POSN                                      0x1
#define _MSK_MSK1_POSITION                                  0x1
#define _MSK_MSK1_SIZE                                      0x1
#define _MSK_MSK1_LENGTH                                    0x1
#define _MSK_MSK1_MASK                                      0x2
#define _MSK_MSK2_POSN                                      0x2
#define _MSK_MSK2_POSITION                                  0x2
#define _MSK_MSK2_SIZE                                      0x1
#define _MSK_MSK2_LENGTH                                    0x1
#define _MSK_MSK2_MASK                                      0x4
#define _MSK_MSK3_POSN                                      0x3
#define _MSK_MSK3_POSITION                                  0x3
#define _MSK_MSK3_SIZE                                      0x1
#define _MSK_MSK3_LENGTH                                    0x1
#define _MSK_MSK3_MASK                                      0x8
#define _MSK_MSK4_POSN                                      0x4
#define _MSK_MSK4_POSITION                                  0x4
#define _MSK_MSK4_SIZE                                      0x1
#define _MSK_MSK4_LENGTH                                    0x1
#define _MSK_MSK4_MASK                                      0x10
#define _MSK_MSK5_POSN                                      0x5
#define _MSK_MSK5_POSITION                                  0x5
#define _MSK_MSK5_SIZE                                      0x1
#define _MSK_MSK5_LENGTH                                    0x1
#define _MSK_MSK5_MASK                                      0x20
#define _MSK_MSK6_POSN                                      0x6
#define _MSK_MSK6_POSITION                                  0x6
#define _MSK_MSK6_SIZE                                      0x1
#define _MSK_MSK6_LENGTH                                    0x1
#define _MSK_MSK6_MASK                                      0x40
#define _MSK_MSK7_POSN                                      0x7
#define _MSK_MSK7_POSITION                                  0x7
#define _MSK_MSK7_SIZE                                      0x1
#define _MSK_MSK7_LENGTH                                    0x1
#define _MSK_MSK7_MASK                                      0x80

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
extern volatile unsigned char           SSPSTAT             __at(0x094);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 094h");
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
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DATA               :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __at(0x094);
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
#define _SSPSTAT_I2C_DATA_POSN                              0x5
#define _SSPSTAT_I2C_DATA_POSITION                          0x5
#define _SSPSTAT_I2C_DATA_SIZE                              0x1
#define _SSPSTAT_I2C_DATA_LENGTH                            0x1
#define _SSPSTAT_I2C_DATA_MASK                              0x20
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

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0x095);
#ifndef _LIB_BUILD
asm("WPUB equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUB                   :8;
    };
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
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __at(0x095);
// bitfield macros
#define _WPUB_WPUB_POSN                                     0x0
#define _WPUB_WPUB_POSITION                                 0x0
#define _WPUB_WPUB_SIZE                                     0x8
#define _WPUB_WPUB_LENGTH                                   0x8
#define _WPUB_WPUB_MASK                                     0xFF
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

// Register: IOCB
#define IOCB IOCB
extern volatile unsigned char           IOCB                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCB equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCB                   :8;
    };
    struct {
        unsigned IOCB0                  :1;
        unsigned IOCB1                  :1;
        unsigned IOCB2                  :1;
        unsigned IOCB3                  :1;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits __at(0x096);
// bitfield macros
#define _IOCB_IOCB_POSN                                     0x0
#define _IOCB_IOCB_POSITION                                 0x0
#define _IOCB_IOCB_SIZE                                     0x8
#define _IOCB_IOCB_LENGTH                                   0x8
#define _IOCB_IOCB_MASK                                     0xFF
#define _IOCB_IOCB0_POSN                                    0x0
#define _IOCB_IOCB0_POSITION                                0x0
#define _IOCB_IOCB0_SIZE                                    0x1
#define _IOCB_IOCB0_LENGTH                                  0x1
#define _IOCB_IOCB0_MASK                                    0x1
#define _IOCB_IOCB1_POSN                                    0x1
#define _IOCB_IOCB1_POSITION                                0x1
#define _IOCB_IOCB1_SIZE                                    0x1
#define _IOCB_IOCB1_LENGTH                                  0x1
#define _IOCB_IOCB1_MASK                                    0x2
#define _IOCB_IOCB2_POSN                                    0x2
#define _IOCB_IOCB2_POSITION                                0x2
#define _IOCB_IOCB2_SIZE                                    0x1
#define _IOCB_IOCB2_LENGTH                                  0x1
#define _IOCB_IOCB2_MASK                                    0x4
#define _IOCB_IOCB3_POSN                                    0x3
#define _IOCB_IOCB3_POSITION                                0x3
#define _IOCB_IOCB3_SIZE                                    0x1
#define _IOCB_IOCB3_LENGTH                                  0x1
#define _IOCB_IOCB3_MASK                                    0x8
#define _IOCB_IOCB4_POSN                                    0x4
#define _IOCB_IOCB4_POSITION                                0x4
#define _IOCB_IOCB4_SIZE                                    0x1
#define _IOCB_IOCB4_LENGTH                                  0x1
#define _IOCB_IOCB4_MASK                                    0x10
#define _IOCB_IOCB5_POSN                                    0x5
#define _IOCB_IOCB5_POSITION                                0x5
#define _IOCB_IOCB5_SIZE                                    0x1
#define _IOCB_IOCB5_LENGTH                                  0x1
#define _IOCB_IOCB5_MASK                                    0x20
#define _IOCB_IOCB6_POSN                                    0x6
#define _IOCB_IOCB6_POSITION                                0x6
#define _IOCB_IOCB6_SIZE                                    0x1
#define _IOCB_IOCB6_LENGTH                                  0x1
#define _IOCB_IOCB6_MASK                                    0x40
#define _IOCB_IOCB7_POSN                                    0x7
#define _IOCB_IOCB7_POSITION                                0x7
#define _IOCB_IOCB7_SIZE                                    0x1
#define _IOCB_IOCB7_LENGTH                                  0x1
#define _IOCB_IOCB7_MASK                                    0x80

// Register: VRCON
#define VRCON VRCON
extern volatile unsigned char           VRCON               __at(0x097);
#ifndef _LIB_BUILD
asm("VRCON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR                     :4;
        unsigned VRSS                   :1;
        unsigned VRR                    :1;
        unsigned VROE                   :1;
        unsigned VREN                   :1;
    };
    struct {
        unsigned VR0                    :1;
        unsigned VR1                    :1;
        unsigned VR2                    :1;
        unsigned VR3                    :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __at(0x097);
// bitfield macros
#define _VRCON_VR_POSN                                      0x0
#define _VRCON_VR_POSITION                                  0x0
#define _VRCON_VR_SIZE                                      0x4
#define _VRCON_VR_LENGTH                                    0x4
#define _VRCON_VR_MASK                                      0xF
#define _VRCON_VRSS_POSN                                    0x4
#define _VRCON_VRSS_POSITION                                0x4
#define _VRCON_VRSS_SIZE                                    0x1
#define _VRCON_VRSS_LENGTH                                  0x1
#define _VRCON_VRSS_MASK                                    0x10
#define _VRCON_VRR_POSN                                     0x5
#define _VRCON_VRR_POSITION                                 0x5
#define _VRCON_VRR_SIZE                                     0x1
#define _VRCON_VRR_LENGTH                                   0x1
#define _VRCON_VRR_MASK                                     0x20
#define _VRCON_VROE_POSN                                    0x6
#define _VRCON_VROE_POSITION                                0x6
#define _VRCON_VROE_SIZE                                    0x1
#define _VRCON_VROE_LENGTH                                  0x1
#define _VRCON_VROE_MASK                                    0x40
#define _VRCON_VREN_POSN                                    0x7
#define _VRCON_VREN_POSITION                                0x7
#define _VRCON_VREN_SIZE                                    0x1
#define _VRCON_VREN_LENGTH                                  0x1
#define _VRCON_VREN_MASK                                    0x80
#define _VRCON_VR0_POSN                                     0x0
#define _VRCON_VR0_POSITION                                 0x0
#define _VRCON_VR0_SIZE                                     0x1
#define _VRCON_VR0_LENGTH                                   0x1
#define _VRCON_VR0_MASK                                     0x1
#define _VRCON_VR1_POSN                                     0x1
#define _VRCON_VR1_POSITION                                 0x1
#define _VRCON_VR1_SIZE                                     0x1
#define _VRCON_VR1_LENGTH                                   0x1
#define _VRCON_VR1_MASK                                     0x2
#define _VRCON_VR2_POSN                                     0x2
#define _VRCON_VR2_POSITION                                 0x2
#define _VRCON_VR2_SIZE                                     0x1
#define _VRCON_VR2_LENGTH                                   0x1
#define _VRCON_VR2_MASK                                     0x4
#define _VRCON_VR3_POSN                                     0x3
#define _VRCON_VR3_POSITION                                 0x3
#define _VRCON_VR3_SIZE                                     0x1
#define _VRCON_VR3_LENGTH                                   0x1
#define _VRCON_VR3_MASK                                     0x8

// Register: TXSTA
#define TXSTA TXSTA
extern volatile unsigned char           TXSTA               __at(0x098);
#ifndef _LIB_BUILD
asm("TXSTA equ 098h");
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
        unsigned nTX8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0x098);
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
#define _TXSTA_nTX8_POSN                                    0x6
#define _TXSTA_nTX8_POSITION                                0x6
#define _TXSTA_nTX8_SIZE                                    0x1
#define _TXSTA_nTX8_LENGTH                                  0x1
#define _TXSTA_nTX8_MASK                                    0x40
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40

// Register: SPBRG
#define SPBRG SPBRG
extern volatile unsigned char           SPBRG               __at(0x099);
#ifndef _LIB_BUILD
asm("SPBRG equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BRG0                   :1;
        unsigned BRG1                   :1;
        unsigned BRG2                   :1;
        unsigned BRG3                   :1;
        unsigned BRG4                   :1;
        unsigned BRG5                   :1;
        unsigned BRG6                   :1;
        unsigned BRG7                   :1;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __at(0x099);
// bitfield macros
#define _SPBRG_BRG0_POSN                                    0x0
#define _SPBRG_BRG0_POSITION                                0x0
#define _SPBRG_BRG0_SIZE                                    0x1
#define _SPBRG_BRG0_LENGTH                                  0x1
#define _SPBRG_BRG0_MASK                                    0x1
#define _SPBRG_BRG1_POSN                                    0x1
#define _SPBRG_BRG1_POSITION                                0x1
#define _SPBRG_BRG1_SIZE                                    0x1
#define _SPBRG_BRG1_LENGTH                                  0x1
#define _SPBRG_BRG1_MASK                                    0x2
#define _SPBRG_BRG2_POSN                                    0x2
#define _SPBRG_BRG2_POSITION                                0x2
#define _SPBRG_BRG2_SIZE                                    0x1
#define _SPBRG_BRG2_LENGTH                                  0x1
#define _SPBRG_BRG2_MASK                                    0x4
#define _SPBRG_BRG3_POSN                                    0x3
#define _SPBRG_BRG3_POSITION                                0x3
#define _SPBRG_BRG3_SIZE                                    0x1
#define _SPBRG_BRG3_LENGTH                                  0x1
#define _SPBRG_BRG3_MASK                                    0x8
#define _SPBRG_BRG4_POSN                                    0x4
#define _SPBRG_BRG4_POSITION                                0x4
#define _SPBRG_BRG4_SIZE                                    0x1
#define _SPBRG_BRG4_LENGTH                                  0x1
#define _SPBRG_BRG4_MASK                                    0x10
#define _SPBRG_BRG5_POSN                                    0x5
#define _SPBRG_BRG5_POSITION                                0x5
#define _SPBRG_BRG5_SIZE                                    0x1
#define _SPBRG_BRG5_LENGTH                                  0x1
#define _SPBRG_BRG5_MASK                                    0x20
#define _SPBRG_BRG6_POSN                                    0x6
#define _SPBRG_BRG6_POSITION                                0x6
#define _SPBRG_BRG6_SIZE                                    0x1
#define _SPBRG_BRG6_LENGTH                                  0x1
#define _SPBRG_BRG6_MASK                                    0x40
#define _SPBRG_BRG7_POSN                                    0x7
#define _SPBRG_BRG7_POSITION                                0x7
#define _SPBRG_BRG7_SIZE                                    0x1
#define _SPBRG_BRG7_LENGTH                                  0x1
#define _SPBRG_BRG7_MASK                                    0x80

// Register: SPBRGH
#define SPBRGH SPBRGH
extern volatile unsigned char           SPBRGH              __at(0x09A);
#ifndef _LIB_BUILD
asm("SPBRGH equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH                 :8;
    };
    struct {
        unsigned BRG8                   :1;
        unsigned BRG9                   :1;
        unsigned BRG10                  :1;
        unsigned BRG11                  :1;
        unsigned BRG12                  :1;
        unsigned BRG13                  :1;
        unsigned BRG14                  :1;
        unsigned BRG15                  :1;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0x09A);
// bitfield macros
#define _SPBRGH_SPBRGH_POSN                                 0x0
#define _SPBRGH_SPBRGH_POSITION                             0x0
#define _SPBRGH_SPBRGH_SIZE                                 0x8
#define _SPBRGH_SPBRGH_LENGTH                               0x8
#define _SPBRGH_SPBRGH_MASK                                 0xFF
#define _SPBRGH_BRG8_POSN                                   0x0
#define _SPBRGH_BRG8_POSITION                               0x0
#define _SPBRGH_BRG8_SIZE                                   0x1
#define _SPBRGH_BRG8_LENGTH                                 0x1
#define _SPBRGH_BRG8_MASK                                   0x1
#define _SPBRGH_BRG9_POSN                                   0x1
#define _SPBRGH_BRG9_POSITION                               0x1
#define _SPBRGH_BRG9_SIZE                                   0x1
#define _SPBRGH_BRG9_LENGTH                                 0x1
#define _SPBRGH_BRG9_MASK                                   0x2
#define _SPBRGH_BRG10_POSN                                  0x2
#define _SPBRGH_BRG10_POSITION                              0x2
#define _SPBRGH_BRG10_SIZE                                  0x1
#define _SPBRGH_BRG10_LENGTH                                0x1
#define _SPBRGH_BRG10_MASK                                  0x4
#define _SPBRGH_BRG11_POSN                                  0x3
#define _SPBRGH_BRG11_POSITION                              0x3
#define _SPBRGH_BRG11_SIZE                                  0x1
#define _SPBRGH_BRG11_LENGTH                                0x1
#define _SPBRGH_BRG11_MASK                                  0x8
#define _SPBRGH_BRG12_POSN                                  0x4
#define _SPBRGH_BRG12_POSITION                              0x4
#define _SPBRGH_BRG12_SIZE                                  0x1
#define _SPBRGH_BRG12_LENGTH                                0x1
#define _SPBRGH_BRG12_MASK                                  0x10
#define _SPBRGH_BRG13_POSN                                  0x5
#define _SPBRGH_BRG13_POSITION                              0x5
#define _SPBRGH_BRG13_SIZE                                  0x1
#define _SPBRGH_BRG13_LENGTH                                0x1
#define _SPBRGH_BRG13_MASK                                  0x20
#define _SPBRGH_BRG14_POSN                                  0x6
#define _SPBRGH_BRG14_POSITION                              0x6
#define _SPBRGH_BRG14_SIZE                                  0x1
#define _SPBRGH_BRG14_LENGTH                                0x1
#define _SPBRGH_BRG14_MASK                                  0x40
#define _SPBRGH_BRG15_POSN                                  0x7
#define _SPBRGH_BRG15_POSITION                              0x7
#define _SPBRGH_BRG15_SIZE                                  0x1
#define _SPBRGH_BRG15_LENGTH                                0x1
#define _SPBRGH_BRG15_MASK                                  0x80

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0x09B);
#ifndef _LIB_BUILD
asm("PWM1CON equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0x09B);
// bitfield macros
#define _PWM1CON_PDC_POSN                                   0x0
#define _PWM1CON_PDC_POSITION                               0x0
#define _PWM1CON_PDC_SIZE                                   0x7
#define _PWM1CON_PDC_LENGTH                                 0x7
#define _PWM1CON_PDC_MASK                                   0x7F
#define _PWM1CON_PRSEN_POSN                                 0x7
#define _PWM1CON_PRSEN_POSITION                             0x7
#define _PWM1CON_PRSEN_SIZE                                 0x1
#define _PWM1CON_PRSEN_LENGTH                               0x1
#define _PWM1CON_PRSEN_MASK                                 0x80
#define _PWM1CON_PDC0_POSN                                  0x0
#define _PWM1CON_PDC0_POSITION                              0x0
#define _PWM1CON_PDC0_SIZE                                  0x1
#define _PWM1CON_PDC0_LENGTH                                0x1
#define _PWM1CON_PDC0_MASK                                  0x1
#define _PWM1CON_PDC1_POSN                                  0x1
#define _PWM1CON_PDC1_POSITION                              0x1
#define _PWM1CON_PDC1_SIZE                                  0x1
#define _PWM1CON_PDC1_LENGTH                                0x1
#define _PWM1CON_PDC1_MASK                                  0x2
#define _PWM1CON_PDC2_POSN                                  0x2
#define _PWM1CON_PDC2_POSITION                              0x2
#define _PWM1CON_PDC2_SIZE                                  0x1
#define _PWM1CON_PDC2_LENGTH                                0x1
#define _PWM1CON_PDC2_MASK                                  0x4
#define _PWM1CON_PDC3_POSN                                  0x3
#define _PWM1CON_PDC3_POSITION                              0x3
#define _PWM1CON_PDC3_SIZE                                  0x1
#define _PWM1CON_PDC3_LENGTH                                0x1
#define _PWM1CON_PDC3_MASK                                  0x8
#define _PWM1CON_PDC4_POSN                                  0x4
#define _PWM1CON_PDC4_POSITION                              0x4
#define _PWM1CON_PDC4_SIZE                                  0x1
#define _PWM1CON_PDC4_LENGTH                                0x1
#define _PWM1CON_PDC4_MASK                                  0x10
#define _PWM1CON_PDC5_POSN                                  0x5
#define _PWM1CON_PDC5_POSITION                              0x5
#define _PWM1CON_PDC5_SIZE                                  0x1
#define _PWM1CON_PDC5_LENGTH                                0x1
#define _PWM1CON_PDC5_MASK                                  0x20
#define _PWM1CON_PDC6_POSN                                  0x6
#define _PWM1CON_PDC6_POSITION                              0x6
#define _PWM1CON_PDC6_SIZE                                  0x1
#define _PWM1CON_PDC6_LENGTH                                0x1
#define _PWM1CON_PDC6_MASK                                  0x40

// Register: ECCPAS
#define ECCPAS ECCPAS
extern volatile unsigned char           ECCPAS              __at(0x09C);
#ifndef _LIB_BUILD
asm("ECCPAS equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
} ECCPASbits_t;
extern volatile ECCPASbits_t ECCPASbits __at(0x09C);
// bitfield macros
#define _ECCPAS_PSSBD_POSN                                  0x0
#define _ECCPAS_PSSBD_POSITION                              0x0
#define _ECCPAS_PSSBD_SIZE                                  0x2
#define _ECCPAS_PSSBD_LENGTH                                0x2
#define _ECCPAS_PSSBD_MASK                                  0x3
#define _ECCPAS_PSSAC_POSN                                  0x2
#define _ECCPAS_PSSAC_POSITION                              0x2
#define _ECCPAS_PSSAC_SIZE                                  0x2
#define _ECCPAS_PSSAC_LENGTH                                0x2
#define _ECCPAS_PSSAC_MASK                                  0xC
#define _ECCPAS_ECCPAS_POSN                                 0x4
#define _ECCPAS_ECCPAS_POSITION                             0x4
#define _ECCPAS_ECCPAS_SIZE                                 0x3
#define _ECCPAS_ECCPAS_LENGTH                               0x3
#define _ECCPAS_ECCPAS_MASK                                 0x70
#define _ECCPAS_ECCPASE_POSN                                0x7
#define _ECCPAS_ECCPASE_POSITION                            0x7
#define _ECCPAS_ECCPASE_SIZE                                0x1
#define _ECCPAS_ECCPASE_LENGTH                              0x1
#define _ECCPAS_ECCPASE_MASK                                0x80
#define _ECCPAS_PSSBD0_POSN                                 0x0
#define _ECCPAS_PSSBD0_POSITION                             0x0
#define _ECCPAS_PSSBD0_SIZE                                 0x1
#define _ECCPAS_PSSBD0_LENGTH                               0x1
#define _ECCPAS_PSSBD0_MASK                                 0x1
#define _ECCPAS_PSSBD1_POSN                                 0x1
#define _ECCPAS_PSSBD1_POSITION                             0x1
#define _ECCPAS_PSSBD1_SIZE                                 0x1
#define _ECCPAS_PSSBD1_LENGTH                               0x1
#define _ECCPAS_PSSBD1_MASK                                 0x2
#define _ECCPAS_PSSAC0_POSN                                 0x2
#define _ECCPAS_PSSAC0_POSITION                             0x2
#define _ECCPAS_PSSAC0_SIZE                                 0x1
#define _ECCPAS_PSSAC0_LENGTH                               0x1
#define _ECCPAS_PSSAC0_MASK                                 0x4
#define _ECCPAS_PSSAC1_POSN                                 0x3
#define _ECCPAS_PSSAC1_POSITION                             0x3
#define _ECCPAS_PSSAC1_SIZE                                 0x1
#define _ECCPAS_PSSAC1_LENGTH                               0x1
#define _ECCPAS_PSSAC1_MASK                                 0x8
#define _ECCPAS_ECCPAS0_POSN                                0x4
#define _ECCPAS_ECCPAS0_POSITION                            0x4
#define _ECCPAS_ECCPAS0_SIZE                                0x1
#define _ECCPAS_ECCPAS0_LENGTH                              0x1
#define _ECCPAS_ECCPAS0_MASK                                0x10
#define _ECCPAS_ECCPAS1_POSN                                0x5
#define _ECCPAS_ECCPAS1_POSITION                            0x5
#define _ECCPAS_ECCPAS1_SIZE                                0x1
#define _ECCPAS_ECCPAS1_LENGTH                              0x1
#define _ECCPAS_ECCPAS1_MASK                                0x20
#define _ECCPAS_ECCPAS2_POSN                                0x6
#define _ECCPAS_ECCPAS2_POSITION                            0x6
#define _ECCPAS_ECCPAS2_SIZE                                0x1
#define _ECCPAS_ECCPAS2_LENGTH                              0x1
#define _ECCPAS_ECCPAS2_MASK                                0x40

// Register: PSTRCON
#define PSTRCON PSTRCON
extern volatile unsigned char           PSTRCON             __at(0x09D);
#ifndef _LIB_BUILD
asm("PSTRCON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STRA                   :1;
        unsigned STRB                   :1;
        unsigned STRC                   :1;
        unsigned STRD                   :1;
        unsigned STRSYNC                :1;
    };
} PSTRCONbits_t;
extern volatile PSTRCONbits_t PSTRCONbits __at(0x09D);
// bitfield macros
#define _PSTRCON_STRA_POSN                                  0x0
#define _PSTRCON_STRA_POSITION                              0x0
#define _PSTRCON_STRA_SIZE                                  0x1
#define _PSTRCON_STRA_LENGTH                                0x1
#define _PSTRCON_STRA_MASK                                  0x1
#define _PSTRCON_STRB_POSN                                  0x1
#define _PSTRCON_STRB_POSITION                              0x1
#define _PSTRCON_STRB_SIZE                                  0x1
#define _PSTRCON_STRB_LENGTH                                0x1
#define _PSTRCON_STRB_MASK                                  0x2
#define _PSTRCON_STRC_POSN                                  0x2
#define _PSTRCON_STRC_POSITION                              0x2
#define _PSTRCON_STRC_SIZE                                  0x1
#define _PSTRCON_STRC_LENGTH                                0x1
#define _PSTRCON_STRC_MASK                                  0x4
#define _PSTRCON_STRD_POSN                                  0x3
#define _PSTRCON_STRD_POSITION                              0x3
#define _PSTRCON_STRD_SIZE                                  0x1
#define _PSTRCON_STRD_LENGTH                                0x1
#define _PSTRCON_STRD_MASK                                  0x8
#define _PSTRCON_STRSYNC_POSN                               0x4
#define _PSTRCON_STRSYNC_POSITION                           0x4
#define _PSTRCON_STRSYNC_SIZE                               0x1
#define _PSTRCON_STRSYNC_LENGTH                             0x1
#define _PSTRCON_STRSYNC_MASK                               0x10

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADRESL equ 09Eh");
#endif

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
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
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x105);
#ifndef _LIB_BUILD
asm("WDTCON equ 0105h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS                  :4;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x105);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x4
#define _WDTCON_WDTPS_LENGTH                                0x4
#define _WDTCON_WDTPS_MASK                                  0x1E
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

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x107);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0107h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1CH                   :2;
        unsigned C1R                    :1;
        unsigned                        :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
    struct {
        unsigned C1CH0                  :1;
        unsigned C1CH1                  :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0x107);
// bitfield macros
#define _CM1CON0_C1CH_POSN                                  0x0
#define _CM1CON0_C1CH_POSITION                              0x0
#define _CM1CON0_C1CH_SIZE                                  0x2
#define _CM1CON0_C1CH_LENGTH                                0x2
#define _CM1CON0_C1CH_MASK                                  0x3
#define _CM1CON0_C1R_POSN                                   0x2
#define _CM1CON0_C1R_POSITION                               0x2
#define _CM1CON0_C1R_SIZE                                   0x1
#define _CM1CON0_C1R_LENGTH                                 0x1
#define _CM1CON0_C1R_MASK                                   0x4
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
#define _CM1CON0_C1CH0_POSN                                 0x0
#define _CM1CON0_C1CH0_POSITION                             0x0
#define _CM1CON0_C1CH0_SIZE                                 0x1
#define _CM1CON0_C1CH0_LENGTH                               0x1
#define _CM1CON0_C1CH0_MASK                                 0x1
#define _CM1CON0_C1CH1_POSN                                 0x1
#define _CM1CON0_C1CH1_POSITION                             0x1
#define _CM1CON0_C1CH1_SIZE                                 0x1
#define _CM1CON0_C1CH1_LENGTH                               0x1
#define _CM1CON0_C1CH1_MASK                                 0x2

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x108);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0108h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2CH                   :2;
        unsigned C2R                    :1;
        unsigned                        :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
    struct {
        unsigned C2CH0                  :1;
        unsigned C2CH1                  :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __at(0x108);
// bitfield macros
#define _CM2CON0_C2CH_POSN                                  0x0
#define _CM2CON0_C2CH_POSITION                              0x0
#define _CM2CON0_C2CH_SIZE                                  0x2
#define _CM2CON0_C2CH_LENGTH                                0x2
#define _CM2CON0_C2CH_MASK                                  0x3
#define _CM2CON0_C2R_POSN                                   0x2
#define _CM2CON0_C2R_POSITION                               0x2
#define _CM2CON0_C2R_SIZE                                   0x1
#define _CM2CON0_C2R_LENGTH                                 0x1
#define _CM2CON0_C2R_MASK                                   0x4
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
#define _CM2CON0_C2CH0_POSN                                 0x0
#define _CM2CON0_C2CH0_POSITION                             0x0
#define _CM2CON0_C2CH0_SIZE                                 0x1
#define _CM2CON0_C2CH0_LENGTH                               0x1
#define _CM2CON0_C2CH0_MASK                                 0x1
#define _CM2CON0_C2CH1_POSN                                 0x1
#define _CM2CON0_C2CH1_POSITION                             0x1
#define _CM2CON0_C2CH1_SIZE                                 0x1
#define _CM2CON0_C2CH1_LENGTH                               0x1
#define _CM2CON0_C2CH1_MASK                                 0x2

// Register: CM2CON1
#define CM2CON1 CM2CON1
extern volatile unsigned char           CM2CON1             __at(0x109);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned T1GSS                  :1;
        unsigned                        :2;
        unsigned C2RSEL                 :1;
        unsigned C1RSEL                 :1;
        unsigned MC2OUT                 :1;
        unsigned MC1OUT                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0x109);
// bitfield macros
#define _CM2CON1_C2SYNC_POSN                                0x0
#define _CM2CON1_C2SYNC_POSITION                            0x0
#define _CM2CON1_C2SYNC_SIZE                                0x1
#define _CM2CON1_C2SYNC_LENGTH                              0x1
#define _CM2CON1_C2SYNC_MASK                                0x1
#define _CM2CON1_T1GSS_POSN                                 0x1
#define _CM2CON1_T1GSS_POSITION                             0x1
#define _CM2CON1_T1GSS_SIZE                                 0x1
#define _CM2CON1_T1GSS_LENGTH                               0x1
#define _CM2CON1_T1GSS_MASK                                 0x2
#define _CM2CON1_C2RSEL_POSN                                0x4
#define _CM2CON1_C2RSEL_POSITION                            0x4
#define _CM2CON1_C2RSEL_SIZE                                0x1
#define _CM2CON1_C2RSEL_LENGTH                              0x1
#define _CM2CON1_C2RSEL_MASK                                0x10
#define _CM2CON1_C1RSEL_POSN                                0x5
#define _CM2CON1_C1RSEL_POSITION                            0x5
#define _CM2CON1_C1RSEL_SIZE                                0x1
#define _CM2CON1_C1RSEL_LENGTH                              0x1
#define _CM2CON1_C1RSEL_MASK                                0x20
#define _CM2CON1_MC2OUT_POSN                                0x6
#define _CM2CON1_MC2OUT_POSITION                            0x6
#define _CM2CON1_MC2OUT_SIZE                                0x1
#define _CM2CON1_MC2OUT_LENGTH                              0x1
#define _CM2CON1_MC2OUT_MASK                                0x40
#define _CM2CON1_MC1OUT_POSN                                0x7
#define _CM2CON1_MC1OUT_POSITION                            0x7
#define _CM2CON1_MC1OUT_SIZE                                0x1
#define _CM2CON1_MC1OUT_LENGTH                              0x1
#define _CM2CON1_MC1OUT_MASK                                0x80

// Register: EEDATA
#define EEDATA EEDATA
extern volatile unsigned char           EEDATA              __at(0x10C);
#ifndef _LIB_BUILD
asm("EEDATA equ 010Ch");
#endif
// aliases
extern volatile unsigned char           EEDAT               __at(0x10C);
#ifndef _LIB_BUILD
asm("EEDAT equ 010Ch");
#endif

// Register: EEADR
#define EEADR EEADR
extern volatile unsigned char           EEADR               __at(0x10D);
#ifndef _LIB_BUILD
asm("EEADR equ 010Dh");
#endif

// Register: EEDATH
#define EEDATH EEDATH
extern volatile unsigned char           EEDATH              __at(0x10E);
#ifndef _LIB_BUILD
asm("EEDATH equ 010Eh");
#endif

// Register: EEADRH
#define EEADRH EEADRH
extern volatile unsigned char           EEADRH              __at(0x10F);
#ifndef _LIB_BUILD
asm("EEADRH equ 010Fh");
#endif

// Register: SRCON
#define SRCON SRCON
extern volatile unsigned char           SRCON               __at(0x185);
#ifndef _LIB_BUILD
asm("SRCON equ 0185h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FVREN                  :1;
        unsigned                        :1;
        unsigned PULSR                  :1;
        unsigned PULSS                  :1;
        unsigned C2REN                  :1;
        unsigned C1SEN                  :1;
        unsigned SR0                    :1;
        unsigned SR1                    :1;
    };
} SRCONbits_t;
extern volatile SRCONbits_t SRCONbits __at(0x185);
// bitfield macros
#define _SRCON_FVREN_POSN                                   0x0
#define _SRCON_FVREN_POSITION                               0x0
#define _SRCON_FVREN_SIZE                                   0x1
#define _SRCON_FVREN_LENGTH                                 0x1
#define _SRCON_FVREN_MASK                                   0x1
#define _SRCON_PULSR_POSN                                   0x2
#define _SRCON_PULSR_POSITION                               0x2
#define _SRCON_PULSR_SIZE                                   0x1
#define _SRCON_PULSR_LENGTH                                 0x1
#define _SRCON_PULSR_MASK                                   0x4
#define _SRCON_PULSS_POSN                                   0x3
#define _SRCON_PULSS_POSITION                               0x3
#define _SRCON_PULSS_SIZE                                   0x1
#define _SRCON_PULSS_LENGTH                                 0x1
#define _SRCON_PULSS_MASK                                   0x8
#define _SRCON_C2REN_POSN                                   0x4
#define _SRCON_C2REN_POSITION                               0x4
#define _SRCON_C2REN_SIZE                                   0x1
#define _SRCON_C2REN_LENGTH                                 0x1
#define _SRCON_C2REN_MASK                                   0x10
#define _SRCON_C1SEN_POSN                                   0x5
#define _SRCON_C1SEN_POSITION                               0x5
#define _SRCON_C1SEN_SIZE                                   0x1
#define _SRCON_C1SEN_LENGTH                                 0x1
#define _SRCON_C1SEN_MASK                                   0x20
#define _SRCON_SR0_POSN                                     0x6
#define _SRCON_SR0_POSITION                                 0x6
#define _SRCON_SR0_SIZE                                     0x1
#define _SRCON_SR0_LENGTH                                   0x1
#define _SRCON_SR0_MASK                                     0x40
#define _SRCON_SR1_POSN                                     0x7
#define _SRCON_SR1_POSITION                                 0x7
#define _SRCON_SR1_SIZE                                     0x1
#define _SRCON_SR1_LENGTH                                   0x1
#define _SRCON_SR1_MASK                                     0x80

// Register: BAUDCTL
#define BAUDCTL BAUDCTL
extern volatile unsigned char           BAUDCTL             __at(0x187);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0187h");
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
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0x187);
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

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0x188);
#ifndef _LIB_BUILD
asm("ANSEL equ 0188h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x188);
// bitfield macros
#define _ANSEL_ANS0_POSN                                    0x0
#define _ANSEL_ANS0_POSITION                                0x0
#define _ANSEL_ANS0_SIZE                                    0x1
#define _ANSEL_ANS0_LENGTH                                  0x1
#define _ANSEL_ANS0_MASK                                    0x1
#define _ANSEL_ANS1_POSN                                    0x1
#define _ANSEL_ANS1_POSITION                                0x1
#define _ANSEL_ANS1_SIZE                                    0x1
#define _ANSEL_ANS1_LENGTH                                  0x1
#define _ANSEL_ANS1_MASK                                    0x2
#define _ANSEL_ANS2_POSN                                    0x2
#define _ANSEL_ANS2_POSITION                                0x2
#define _ANSEL_ANS2_SIZE                                    0x1
#define _ANSEL_ANS2_LENGTH                                  0x1
#define _ANSEL_ANS2_MASK                                    0x4
#define _ANSEL_ANS3_POSN                                    0x3
#define _ANSEL_ANS3_POSITION                                0x3
#define _ANSEL_ANS3_SIZE                                    0x1
#define _ANSEL_ANS3_LENGTH                                  0x1
#define _ANSEL_ANS3_MASK                                    0x8
#define _ANSEL_ANS4_POSN                                    0x4
#define _ANSEL_ANS4_POSITION                                0x4
#define _ANSEL_ANS4_SIZE                                    0x1
#define _ANSEL_ANS4_LENGTH                                  0x1
#define _ANSEL_ANS4_MASK                                    0x10
#define _ANSEL_ANS5_POSN                                    0x5
#define _ANSEL_ANS5_POSITION                                0x5
#define _ANSEL_ANS5_SIZE                                    0x1
#define _ANSEL_ANS5_LENGTH                                  0x1
#define _ANSEL_ANS5_MASK                                    0x20
#define _ANSEL_ANS6_POSN                                    0x6
#define _ANSEL_ANS6_POSITION                                0x6
#define _ANSEL_ANS6_SIZE                                    0x1
#define _ANSEL_ANS6_LENGTH                                  0x1
#define _ANSEL_ANS6_MASK                                    0x40
#define _ANSEL_ANS7_POSN                                    0x7
#define _ANSEL_ANS7_POSITION                                0x7
#define _ANSEL_ANS7_SIZE                                    0x1
#define _ANSEL_ANS7_LENGTH                                  0x1
#define _ANSEL_ANS7_MASK                                    0x80

// Register: ANSELH
#define ANSELH ANSELH
extern volatile unsigned char           ANSELH              __at(0x189);
#ifndef _LIB_BUILD
asm("ANSELH equ 0189h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS8                   :1;
        unsigned ANS9                   :1;
        unsigned ANS10                  :1;
        unsigned ANS11                  :1;
        unsigned ANS12                  :1;
        unsigned ANS13                  :1;
    };
} ANSELHbits_t;
extern volatile ANSELHbits_t ANSELHbits __at(0x189);
// bitfield macros
#define _ANSELH_ANS8_POSN                                   0x0
#define _ANSELH_ANS8_POSITION                               0x0
#define _ANSELH_ANS8_SIZE                                   0x1
#define _ANSELH_ANS8_LENGTH                                 0x1
#define _ANSELH_ANS8_MASK                                   0x1
#define _ANSELH_ANS9_POSN                                   0x1
#define _ANSELH_ANS9_POSITION                               0x1
#define _ANSELH_ANS9_SIZE                                   0x1
#define _ANSELH_ANS9_LENGTH                                 0x1
#define _ANSELH_ANS9_MASK                                   0x2
#define _ANSELH_ANS10_POSN                                  0x2
#define _ANSELH_ANS10_POSITION                              0x2
#define _ANSELH_ANS10_SIZE                                  0x1
#define _ANSELH_ANS10_LENGTH                                0x1
#define _ANSELH_ANS10_MASK                                  0x4
#define _ANSELH_ANS11_POSN                                  0x3
#define _ANSELH_ANS11_POSITION                              0x3
#define _ANSELH_ANS11_SIZE                                  0x1
#define _ANSELH_ANS11_LENGTH                                0x1
#define _ANSELH_ANS11_MASK                                  0x8
#define _ANSELH_ANS12_POSN                                  0x4
#define _ANSELH_ANS12_POSITION                              0x4
#define _ANSELH_ANS12_SIZE                                  0x1
#define _ANSELH_ANS12_LENGTH                                0x1
#define _ANSELH_ANS12_MASK                                  0x10
#define _ANSELH_ANS13_POSN                                  0x5
#define _ANSELH_ANS13_POSITION                              0x5
#define _ANSELH_ANS13_SIZE                                  0x1
#define _ANSELH_ANS13_LENGTH                                0x1
#define _ANSELH_ANS13_MASK                                  0x20

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0x18C);
#ifndef _LIB_BUILD
asm("EECON1 equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned                        :3;
        unsigned EEPGD                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x18C);
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
#define _EECON1_EEPGD_POSN                                  0x7
#define _EECON1_EEPGD_POSITION                              0x7
#define _EECON1_EEPGD_SIZE                                  0x1
#define _EECON1_EEPGD_LENGTH                                0x1
#define _EECON1_EEPGD_MASK                                  0x80

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0x18D);
#ifndef _LIB_BUILD
asm("EECON2 equ 018Dh");
#endif

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
// BAUDCTL<ABDEN>
extern volatile __bit                   ABDEN               __at(0xC38);	// @ (0x187 * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCTL,0)
// BAUDCTL<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0xC3F);	// @ (0x187 * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCTL,7)
// SSPCON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x48E);	// @ (0x91 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSPCON2,6)
// ADCON0<ADCS0>
extern volatile __bit                   ADCS0               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,7)
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
// ADCON1<ADFM>
extern volatile __bit                   ADFM                __at(0x4FF);	// @ (0x9F * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON1,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ANSEL<ANS0>
extern volatile __bit                   ANS0                __at(0xC40);	// @ (0x188 * 8 + 0)
#define                                 ANS0_bit            _BIT_ACCESS(ANSEL,0)
// ANSEL<ANS1>
extern volatile __bit                   ANS1                __at(0xC41);	// @ (0x188 * 8 + 1)
#define                                 ANS1_bit            _BIT_ACCESS(ANSEL,1)
// ANSELH<ANS10>
extern volatile __bit                   ANS10               __at(0xC4A);	// @ (0x189 * 8 + 2)
#define                                 ANS10_bit           _BIT_ACCESS(ANSELH,2)
// ANSELH<ANS11>
extern volatile __bit                   ANS11               __at(0xC4B);	// @ (0x189 * 8 + 3)
#define                                 ANS11_bit           _BIT_ACCESS(ANSELH,3)
// ANSELH<ANS12>
extern volatile __bit                   ANS12               __at(0xC4C);	// @ (0x189 * 8 + 4)
#define                                 ANS12_bit           _BIT_ACCESS(ANSELH,4)
// ANSELH<ANS13>
extern volatile __bit                   ANS13               __at(0xC4D);	// @ (0x189 * 8 + 5)
#define                                 ANS13_bit           _BIT_ACCESS(ANSELH,5)
// ANSEL<ANS2>
extern volatile __bit                   ANS2                __at(0xC42);	// @ (0x188 * 8 + 2)
#define                                 ANS2_bit            _BIT_ACCESS(ANSEL,2)
// ANSEL<ANS3>
extern volatile __bit                   ANS3                __at(0xC43);	// @ (0x188 * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL,3)
// ANSEL<ANS4>
extern volatile __bit                   ANS4                __at(0xC44);	// @ (0x188 * 8 + 4)
#define                                 ANS4_bit            _BIT_ACCESS(ANSEL,4)
// ANSEL<ANS5>
extern volatile __bit                   ANS5                __at(0xC45);	// @ (0x188 * 8 + 5)
#define                                 ANS5_bit            _BIT_ACCESS(ANSEL,5)
// ANSEL<ANS6>
extern volatile __bit                   ANS6                __at(0xC46);	// @ (0x188 * 8 + 6)
#define                                 ANS6_bit            _BIT_ACCESS(ANSEL,6)
// ANSEL<ANS7>
extern volatile __bit                   ANS7                __at(0xC47);	// @ (0x188 * 8 + 7)
#define                                 ANS7_bit            _BIT_ACCESS(ANSEL,7)
// ANSELH<ANS8>
extern volatile __bit                   ANS8                __at(0xC48);	// @ (0x189 * 8 + 0)
#define                                 ANS8_bit            _BIT_ACCESS(ANSELH,0)
// ANSELH<ANS9>
extern volatile __bit                   ANS9                __at(0xC49);	// @ (0x189 * 8 + 1)
#define                                 ANS9_bit            _BIT_ACCESS(ANSELH,1)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x46B);	// @ (0x8D * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x6B);	// @ (0xD * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// SPBRG<BRG0>
extern volatile __bit                   BRG0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 BRG0_bit            _BIT_ACCESS(SPBRG,0)
// SPBRG<BRG1>
extern volatile __bit                   BRG1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 BRG1_bit            _BIT_ACCESS(SPBRG,1)
// SPBRGH<BRG10>
extern volatile __bit                   BRG10               __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 BRG10_bit           _BIT_ACCESS(SPBRGH,2)
// SPBRGH<BRG11>
extern volatile __bit                   BRG11               __at(0x4D3);	// @ (0x9A * 8 + 3)
#define                                 BRG11_bit           _BIT_ACCESS(SPBRGH,3)
// SPBRGH<BRG12>
extern volatile __bit                   BRG12               __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 BRG12_bit           _BIT_ACCESS(SPBRGH,4)
// SPBRGH<BRG13>
extern volatile __bit                   BRG13               __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 BRG13_bit           _BIT_ACCESS(SPBRGH,5)
// SPBRGH<BRG14>
extern volatile __bit                   BRG14               __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 BRG14_bit           _BIT_ACCESS(SPBRGH,6)
// SPBRGH<BRG15>
extern volatile __bit                   BRG15               __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 BRG15_bit           _BIT_ACCESS(SPBRGH,7)
// BAUDCTL<BRG16>
extern volatile __bit                   BRG16               __at(0xC3B);	// @ (0x187 * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCTL,3)
// SPBRG<BRG2>
extern volatile __bit                   BRG2                __at(0x4CA);	// @ (0x99 * 8 + 2)
#define                                 BRG2_bit            _BIT_ACCESS(SPBRG,2)
// SPBRG<BRG3>
extern volatile __bit                   BRG3                __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 BRG3_bit            _BIT_ACCESS(SPBRG,3)
// SPBRG<BRG4>
extern volatile __bit                   BRG4                __at(0x4CC);	// @ (0x99 * 8 + 4)
#define                                 BRG4_bit            _BIT_ACCESS(SPBRG,4)
// SPBRG<BRG5>
extern volatile __bit                   BRG5                __at(0x4CD);	// @ (0x99 * 8 + 5)
#define                                 BRG5_bit            _BIT_ACCESS(SPBRG,5)
// SPBRG<BRG6>
extern volatile __bit                   BRG6                __at(0x4CE);	// @ (0x99 * 8 + 6)
#define                                 BRG6_bit            _BIT_ACCESS(SPBRG,6)
// SPBRG<BRG7>
extern volatile __bit                   BRG7                __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 BRG7_bit            _BIT_ACCESS(SPBRG,7)
// SPBRGH<BRG8>
extern volatile __bit                   BRG8                __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 BRG8_bit            _BIT_ACCESS(SPBRGH,0)
// SPBRGH<BRG9>
extern volatile __bit                   BRG9                __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 BRG9_bit            _BIT_ACCESS(SPBRGH,1)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// CM1CON0<C1CH0>
extern volatile __bit                   C1CH0               __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 C1CH0_bit           _BIT_ACCESS(CM1CON0,0)
// CM1CON0<C1CH1>
extern volatile __bit                   C1CH1               __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 C1CH1_bit           _BIT_ACCESS(CM1CON0,1)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x46D);	// @ (0x8D * 8 + 5)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,5)
// CM1CON0<C1OE>
extern volatile __bit                   C1OE                __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1R>
extern volatile __bit                   C1R                 __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 C1R_bit             _BIT_ACCESS(CM1CON0,2)
// CM2CON1<C1RSEL>
extern volatile __bit                   C1RSEL              __at(0x84D);	// @ (0x109 * 8 + 5)
#define                                 C1RSEL_bit          _BIT_ACCESS(CM2CON1,5)
// SRCON<C1SEN>
extern volatile __bit                   C1SEN               __at(0xC2D);	// @ (0x185 * 8 + 5)
#define                                 C1SEN_bit           _BIT_ACCESS(SRCON,5)
// CM2CON0<C2CH0>
extern volatile __bit                   C2CH0               __at(0x840);	// @ (0x108 * 8 + 0)
#define                                 C2CH0_bit           _BIT_ACCESS(CM2CON0,0)
// CM2CON0<C2CH1>
extern volatile __bit                   C2CH1               __at(0x841);	// @ (0x108 * 8 + 1)
#define                                 C2CH1_bit           _BIT_ACCESS(CM2CON0,1)
// PIE2<C2IE>
extern volatile __bit                   C2IE                __at(0x46E);	// @ (0x8D * 8 + 6)
#define                                 C2IE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<C2IF>
extern volatile __bit                   C2IF                __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 C2IF_bit            _BIT_ACCESS(PIR2,6)
// CM2CON0<C2OE>
extern volatile __bit                   C2OE                __at(0x845);	// @ (0x108 * 8 + 5)
#define                                 C2OE_bit            _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,6)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x844);	// @ (0x108 * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2R>
extern volatile __bit                   C2R                 __at(0x842);	// @ (0x108 * 8 + 2)
#define                                 C2R_bit             _BIT_ACCESS(CM2CON0,2)
// SRCON<C2REN>
extern volatile __bit                   C2REN               __at(0xC2C);	// @ (0x185 * 8 + 4)
#define                                 C2REN_bit           _BIT_ACCESS(SRCON,4)
// CM2CON1<C2RSEL>
extern volatile __bit                   C2RSEL              __at(0x84C);	// @ (0x109 * 8 + 4)
#define                                 C2RSEL_bit          _BIT_ACCESS(CM2CON1,4)
// CM2CON1<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x848);	// @ (0x109 * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON1,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x62);	// @ (0xC * 8 + 2)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,2)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0xB8);	// @ (0x17 * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0xB9);	// @ (0x17 * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0xBA);	// @ (0x17 * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0xBB);	// @ (0x17 * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// CCP1CON<CCP1X>
extern volatile __bit                   CCP1X               __at(0xBD);	// @ (0x17 * 8 + 5)
#define                                 CCP1X_bit           _BIT_ACCESS(CCP1CON,5)
// CCP1CON<CCP1Y>
extern volatile __bit                   CCP1Y               __at(0xBC);	// @ (0x17 * 8 + 4)
#define                                 CCP1Y_bit           _BIT_ACCESS(CCP1CON,4)
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x468);	// @ (0x8D * 8 + 0)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x68);	// @ (0xD * 8 + 0)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR2,0)
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0xE8);	// @ (0x1D * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0xE9);	// @ (0x1D * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0xEA);	// @ (0x1D * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0xEB);	// @ (0x1D * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// CCP2CON<CCP2X>
extern volatile __bit                   CCP2X               __at(0xED);	// @ (0x1D * 8 + 5)
#define                                 CCP2X_bit           _BIT_ACCESS(CCP2CON,5)
// CCP2CON<CCP2Y>
extern volatile __bit                   CCP2Y               __at(0xEC);	// @ (0x1D * 8 + 4)
#define                                 CCP2Y_bit           _BIT_ACCESS(CCP2CON,4)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON<CKP>
extern volatile __bit                   CKP                 __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON,4)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x4C7);	// @ (0x98 * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// SSPSTAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSPSTAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0xBC);	// @ (0x17 * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0xBD);	// @ (0x17 * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0xEC);	// @ (0x1D * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0xED);	// @ (0x1D * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// SSPSTAT<D_A>
extern volatile __bit                   D_A                 __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// ECCPAS<ECCPAS0>
extern volatile __bit                   ECCPAS0             __at(0x4E4);	// @ (0x9C * 8 + 4)
#define                                 ECCPAS0_bit         _BIT_ACCESS(ECCPAS,4)
// ECCPAS<ECCPAS1>
extern volatile __bit                   ECCPAS1             __at(0x4E5);	// @ (0x9C * 8 + 5)
#define                                 ECCPAS1_bit         _BIT_ACCESS(ECCPAS,5)
// ECCPAS<ECCPAS2>
extern volatile __bit                   ECCPAS2             __at(0x4E6);	// @ (0x9C * 8 + 6)
#define                                 ECCPAS2_bit         _BIT_ACCESS(ECCPAS,6)
// ECCPAS<ECCPASE>
extern volatile __bit                   ECCPASE             __at(0x4E7);	// @ (0x9C * 8 + 7)
#define                                 ECCPASE_bit         _BIT_ACCESS(ECCPAS,7)
// PIE2<EEIE>
extern volatile __bit                   EEIE                __at(0x46C);	// @ (0x8D * 8 + 4)
#define                                 EEIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<EEIF>
extern volatile __bit                   EEIF                __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 EEIF_bit            _BIT_ACCESS(PIR2,4)
// EECON1<EEPGD>
extern volatile __bit                   EEPGD               __at(0xC67);	// @ (0x18C * 8 + 7)
#define                                 EEPGD_bit           _BIT_ACCESS(EECON1,7)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// SRCON<FVREN>
extern volatile __bit                   FVREN               __at(0xC28);	// @ (0x185 * 8 + 0)
#define                                 FVREN_bit           _BIT_ACCESS(SRCON,0)
// SSPCON2<GCEN>
extern volatile __bit                   GCEN                __at(0x48F);	// @ (0x91 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSPCON2,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// OSCCON<HTS>
extern volatile __bit                   HTS                 __at(0x47A);	// @ (0x8F * 8 + 2)
#define                                 HTS_bit             _BIT_ACCESS(OSCCON,2)
// SSPSTAT<I2C_DATA>
extern volatile __bit                   I2C_DATA            __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 I2C_DATA_bit        _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<I2C_READ>
extern volatile __bit                   I2C_READ            __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 I2C_READ_bit        _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<I2C_START>
extern volatile __bit                   I2C_START           __at(0x4A3);	// @ (0x94 * 8 + 3)
#define                                 I2C_START_bit       _BIT_ACCESS(SSPSTAT,3)
// SSPSTAT<I2C_STOP>
extern volatile __bit                   I2C_STOP            __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 I2C_STOP_bit        _BIT_ACCESS(SSPSTAT,4)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOCB<IOCB0>
extern volatile __bit                   IOCB0               __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOCB0_bit           _BIT_ACCESS(IOCB,0)
// IOCB<IOCB1>
extern volatile __bit                   IOCB1               __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOCB1_bit           _BIT_ACCESS(IOCB,1)
// IOCB<IOCB2>
extern volatile __bit                   IOCB2               __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOCB2_bit           _BIT_ACCESS(IOCB,2)
// IOCB<IOCB3>
extern volatile __bit                   IOCB3               __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOCB3_bit           _BIT_ACCESS(IOCB,3)
// IOCB<IOCB4>
extern volatile __bit                   IOCB4               __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOCB4_bit           _BIT_ACCESS(IOCB,4)
// IOCB<IOCB5>
extern volatile __bit                   IOCB5               __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOCB5_bit           _BIT_ACCESS(IOCB,5)
// IOCB<IOCB6>
extern volatile __bit                   IOCB6               __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 IOCB6_bit           _BIT_ACCESS(IOCB,6)
// IOCB<IOCB7>
extern volatile __bit                   IOCB7               __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 IOCB7_bit           _BIT_ACCESS(IOCB,7)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,6)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// OSCCON<LTS>
extern volatile __bit                   LTS                 __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 LTS_bit             _BIT_ACCESS(OSCCON,1)
// CM2CON1<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x84F);	// @ (0x109 * 8 + 7)
#define                                 MC1OUT_bit          _BIT_ACCESS(CM2CON1,7)
// CM2CON1<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x84E);	// @ (0x109 * 8 + 6)
#define                                 MC2OUT_bit          _BIT_ACCESS(CM2CON1,6)
// SSPMSK<MSK0>
extern volatile __bit                   MSK0                __at(0x498);	// @ (0x93 * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSPMSK,0)
// SSPMSK<MSK1>
extern volatile __bit                   MSK1                __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSPMSK,1)
// SSPMSK<MSK2>
extern volatile __bit                   MSK2                __at(0x49A);	// @ (0x93 * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSPMSK,2)
// SSPMSK<MSK3>
extern volatile __bit                   MSK3                __at(0x49B);	// @ (0x93 * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSPMSK,3)
// SSPMSK<MSK4>
extern volatile __bit                   MSK4                __at(0x49C);	// @ (0x93 * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSPMSK,4)
// SSPMSK<MSK5>
extern volatile __bit                   MSK5                __at(0x49D);	// @ (0x93 * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSPMSK,5)
// SSPMSK<MSK6>
extern volatile __bit                   MSK6                __at(0x49E);	// @ (0x93 * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSPMSK,6)
// SSPMSK<MSK7>
extern volatile __bit                   MSK7                __at(0x49F);	// @ (0x93 * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSPMSK,7)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// PIE2<OSFIE>
extern volatile __bit                   OSFIE               __at(0x46F);	// @ (0x8D * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<OSFIF>
extern volatile __bit                   OSFIF               __at(0x6F);	// @ (0xD * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR2,7)
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x47B);	// @ (0x8F * 8 + 3)
#define                                 OSTS_bit            _BIT_ACCESS(OSCCON,3)
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0xBE);	// @ (0x17 * 8 + 6)
#define                                 P1M0_bit            _BIT_ACCESS(CCP1CON,6)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0xBF);	// @ (0x17 * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// PWM1CON<PDC0>
extern volatile __bit                   PDC0                __at(0x4D8);	// @ (0x9B * 8 + 0)
#define                                 PDC0_bit            _BIT_ACCESS(PWM1CON,0)
// PWM1CON<PDC1>
extern volatile __bit                   PDC1                __at(0x4D9);	// @ (0x9B * 8 + 1)
#define                                 PDC1_bit            _BIT_ACCESS(PWM1CON,1)
// PWM1CON<PDC2>
extern volatile __bit                   PDC2                __at(0x4DA);	// @ (0x9B * 8 + 2)
#define                                 PDC2_bit            _BIT_ACCESS(PWM1CON,2)
// PWM1CON<PDC3>
extern volatile __bit                   PDC3                __at(0x4DB);	// @ (0x9B * 8 + 3)
#define                                 PDC3_bit            _BIT_ACCESS(PWM1CON,3)
// PWM1CON<PDC4>
extern volatile __bit                   PDC4                __at(0x4DC);	// @ (0x9B * 8 + 4)
#define                                 PDC4_bit            _BIT_ACCESS(PWM1CON,4)
// PWM1CON<PDC5>
extern volatile __bit                   PDC5                __at(0x4DD);	// @ (0x9B * 8 + 5)
#define                                 PDC5_bit            _BIT_ACCESS(PWM1CON,5)
// PWM1CON<PDC6>
extern volatile __bit                   PDC6                __at(0x4DE);	// @ (0x9B * 8 + 6)
#define                                 PDC6_bit            _BIT_ACCESS(PWM1CON,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSPCON2<PEN>
extern volatile __bit                   PEN                 __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSPCON2,2)
// PWM1CON<PRSEN>
extern volatile __bit                   PRSEN               __at(0x4DF);	// @ (0x9B * 8 + 7)
#define                                 PRSEN_bit           _BIT_ACCESS(PWM1CON,7)
// OPTION_REG<PS0>
extern volatile __bit                   PS0                 __at(0x408);	// @ (0x81 * 8 + 0)
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   PS1                 __at(0x409);	// @ (0x81 * 8 + 1)
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   PS2                 __at(0x40A);	// @ (0x81 * 8 + 2)
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x40B);	// @ (0x81 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// ECCPAS<PSSAC0>
extern volatile __bit                   PSSAC0              __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 PSSAC0_bit          _BIT_ACCESS(ECCPAS,2)
// ECCPAS<PSSAC1>
extern volatile __bit                   PSSAC1              __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 PSSAC1_bit          _BIT_ACCESS(ECCPAS,3)
// ECCPAS<PSSBD0>
extern volatile __bit                   PSSBD0              __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 PSSBD0_bit          _BIT_ACCESS(ECCPAS,0)
// ECCPAS<PSSBD1>
extern volatile __bit                   PSSBD1              __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 PSSBD1_bit          _BIT_ACCESS(ECCPAS,1)
// SRCON<PULSR>
extern volatile __bit                   PULSR               __at(0xC2A);	// @ (0x185 * 8 + 2)
#define                                 PULSR_bit           _BIT_ACCESS(SRCON,2)
// SRCON<PULSS>
extern volatile __bit                   PULSS               __at(0xC2B);	// @ (0x185 * 8 + 3)
#define                                 PULSS_bit           _BIT_ACCESS(SRCON,3)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// PORTA<RA6>
extern volatile __bit                   RA6                 __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTA,6)
// PORTA<RA7>
extern volatile __bit                   RA7                 __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 RA7_bit             _BIT_ACCESS(PORTA,7)
// PORTB<RB0>
extern volatile __bit                   RB0                 __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit                   RB1                 __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit                   RB2                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit                   RB3                 __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x37);	// @ (0x6 * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// INTCON<RBIE>
extern volatile __bit                   RBIE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 RBIE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<RBIF>
extern volatile __bit                   RBIF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 RBIF_bit            _BIT_ACCESS(INTCON,0)
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// RCSTA<RC8_9>
extern volatile __bit                   RC8_9               __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RC8_9_bit           _BIT_ACCESS(RCSTA,6)
// RCSTA<RC9>
extern volatile __bit                   RC9                 __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RC9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RCD8>
extern volatile __bit                   RCD8                __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 RCD8_bit            _BIT_ACCESS(RCSTA,0)
// SSPCON2<RCEN>
extern volatile __bit                   RCEN                __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSPCON2,3)
// BAUDCTL<RCIDL>
extern volatile __bit                   RCIDL               __at(0xC3E);	// @ (0x187 * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCTL,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
// PORTD<RD0>
extern volatile __bit                   RD0                 __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit                   RD1                 __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// PORTD<RD2>
extern volatile __bit                   RD2                 __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 RD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<RD3>
extern volatile __bit                   RD3                 __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 RD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<RD4>
extern volatile __bit                   RD4                 __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 RD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<RD5>
extern volatile __bit                   RD5                 __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 RD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<RD6>
extern volatile __bit                   RD6                 __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 RD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<RD7>
extern volatile __bit                   RD7                 __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 RD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<RE0>
extern volatile __bit                   RE0                 __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit                   RE1                 __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE2>
extern volatile __bit                   RE2                 __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 RE2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// SSPSTAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSPSTAT,2)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// SSPCON2<RSEN>
extern volatile __bit                   RSEN                __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSPCON2,1)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// SSPSTAT<R_W>
extern volatile __bit                   R_W                 __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// PCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 SBOREN_bit          _BIT_ACCESS(PCON,4)
// BAUDCTL<SCKP>
extern volatile __bit                   SCKP                __at(0xC3C);	// @ (0x187 * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCTL,4)
// OSCCON<SCS>
extern volatile __bit                   SCS                 __at(0x478);	// @ (0x8F * 8 + 0)
#define                                 SCS_bit             _BIT_ACCESS(OSCCON,0)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x488);	// @ (0x91 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0x4C3);	// @ (0x98 * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xC7);	// @ (0x18 * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// SRCON<SR0>
extern volatile __bit                   SR0                 __at(0xC2E);	// @ (0x185 * 8 + 6)
#define                                 SR0_bit             _BIT_ACCESS(SRCON,6)
// SRCON<SR1>
extern volatile __bit                   SR1                 __at(0xC2F);	// @ (0x185 * 8 + 7)
#define                                 SR1_bit             _BIT_ACCESS(SRCON,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// SSPCON<SSPEN>
extern volatile __bit                   SSPEN               __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x63);	// @ (0xC * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
// SSPCON<SSPM0>
extern volatile __bit                   SSPM0               __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSPCON,0)
// SSPCON<SSPM1>
extern volatile __bit                   SSPM1               __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSPCON,1)
// SSPCON<SSPM2>
extern volatile __bit                   SSPM2               __at(0xA2);	// @ (0x14 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSPCON,2)
// SSPCON<SSPM3>
extern volatile __bit                   SSPM3               __at(0xA3);	// @ (0x14 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON,3)
// SSPCON<SSPOV>
extern volatile __bit                   SSPOV               __at(0xA6);	// @ (0x14 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON,6)
// PSTRCON<STRA>
extern volatile __bit                   STRA                __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 STRA_bit            _BIT_ACCESS(PSTRCON,0)
// PSTRCON<STRB>
extern volatile __bit                   STRB                __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 STRB_bit            _BIT_ACCESS(PSTRCON,1)
// PSTRCON<STRC>
extern volatile __bit                   STRC                __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 STRC_bit            _BIT_ACCESS(PSTRCON,2)
// PSTRCON<STRD>
extern volatile __bit                   STRD                __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 STRD_bit            _BIT_ACCESS(PSTRCON,3)
// PSTRCON<STRSYNC>
extern volatile __bit                   STRSYNC             __at(0x4EC);	// @ (0x9D * 8 + 4)
#define                                 STRSYNC_bit         _BIT_ACCESS(PSTRCON,4)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0x4C4);	// @ (0x98 * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA,4)
// OPTION_REG<T0CS>
extern volatile __bit                   T0CS                __at(0x40D);	// @ (0x81 * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(OPTION_REG,5)
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON,5)
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON,2)
// OPTION_REG<T0SE>
extern volatile __bit                   T0SE                __at(0x40C);	// @ (0x81 * 8 + 4)
#define                                 T0SE_bit            _BIT_ACCESS(OPTION_REG,4)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CON<T1GINV>
extern volatile __bit                   T1GINV              __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 T1GINV_bit          _BIT_ACCESS(T1CON,7)
// T1CON<T1GIV>
extern volatile __bit                   T1GIV               __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 T1GIV_bit           _BIT_ACCESS(T1CON,7)
// CM2CON1<T1GSS>
extern volatile __bit                   T1GSS               __at(0x849);	// @ (0x109 * 8 + 1)
#define                                 T1GSS_bit           _BIT_ACCESS(CM2CON1,1)
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 T1INSYNC_bit        _BIT_ACCESS(T1CON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 T1SYNC_bit          _BIT_ACCESS(T1CON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x81);	// @ (0x10 * 8 + 1)
#define                                 TMR1CS_bit          _BIT_ACCESS(T1CON,1)
// T1CON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1CON,6)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x60);	// @ (0xC * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x61);	// @ (0xC * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 TOUTPS0_bit         _BIT_ACCESS(T2CON,3)
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 TOUTPS1_bit         _BIT_ACCESS(T2CON,4)
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 TOUTPS2_bit         _BIT_ACCESS(T2CON,5)
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 TOUTPS3_bit         _BIT_ACCESS(T2CON,6)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISA,3)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TRISA<TRISA6>
extern volatile __bit                   TRISA6              __at(0x42E);	// @ (0x85 * 8 + 6)
#define                                 TRISA6_bit          _BIT_ACCESS(TRISA,6)
// TRISA<TRISA7>
extern volatile __bit                   TRISA7              __at(0x42F);	// @ (0x85 * 8 + 7)
#define                                 TRISA7_bit          _BIT_ACCESS(TRISA,7)
// TRISB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x430);	// @ (0x86 * 8 + 0)
#define                                 TRISB0_bit          _BIT_ACCESS(TRISB,0)
// TRISB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x431);	// @ (0x86 * 8 + 1)
#define                                 TRISB1_bit          _BIT_ACCESS(TRISB,1)
// TRISB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x432);	// @ (0x86 * 8 + 2)
#define                                 TRISB2_bit          _BIT_ACCESS(TRISB,2)
// TRISB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x433);	// @ (0x86 * 8 + 3)
#define                                 TRISB3_bit          _BIT_ACCESS(TRISB,3)
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x434);	// @ (0x86 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISB,4)
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x435);	// @ (0x86 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISB,5)
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x436);	// @ (0x86 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISB,6)
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x437);	// @ (0x86 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISB,7)
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x43A);	// @ (0x87 * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x43B);	// @ (0x87 * 8 + 3)
#define                                 TRISC3_bit          _BIT_ACCESS(TRISC,3)
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x43C);	// @ (0x87 * 8 + 4)
#define                                 TRISC4_bit          _BIT_ACCESS(TRISC,4)
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x43D);	// @ (0x87 * 8 + 5)
#define                                 TRISC5_bit          _BIT_ACCESS(TRISC,5)
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x43E);	// @ (0x87 * 8 + 6)
#define                                 TRISC6_bit          _BIT_ACCESS(TRISC,6)
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x43F);	// @ (0x87 * 8 + 7)
#define                                 TRISC7_bit          _BIT_ACCESS(TRISC,7)
// TRISD<TRISD0>
extern volatile __bit                   TRISD0              __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 TRISD0_bit          _BIT_ACCESS(TRISD,0)
// TRISD<TRISD1>
extern volatile __bit                   TRISD1              __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 TRISD1_bit          _BIT_ACCESS(TRISD,1)
// TRISD<TRISD2>
extern volatile __bit                   TRISD2              __at(0x442);	// @ (0x88 * 8 + 2)
#define                                 TRISD2_bit          _BIT_ACCESS(TRISD,2)
// TRISD<TRISD3>
extern volatile __bit                   TRISD3              __at(0x443);	// @ (0x88 * 8 + 3)
#define                                 TRISD3_bit          _BIT_ACCESS(TRISD,3)
// TRISD<TRISD4>
extern volatile __bit                   TRISD4              __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 TRISD4_bit          _BIT_ACCESS(TRISD,4)
// TRISD<TRISD5>
extern volatile __bit                   TRISD5              __at(0x445);	// @ (0x88 * 8 + 5)
#define                                 TRISD5_bit          _BIT_ACCESS(TRISD,5)
// TRISD<TRISD6>
extern volatile __bit                   TRISD6              __at(0x446);	// @ (0x88 * 8 + 6)
#define                                 TRISD6_bit          _BIT_ACCESS(TRISD,6)
// TRISD<TRISD7>
extern volatile __bit                   TRISD7              __at(0x447);	// @ (0x88 * 8 + 7)
#define                                 TRISD7_bit          _BIT_ACCESS(TRISD,7)
// TRISE<TRISE0>
extern volatile __bit                   TRISE0              __at(0x448);	// @ (0x89 * 8 + 0)
#define                                 TRISE0_bit          _BIT_ACCESS(TRISE,0)
// TRISE<TRISE1>
extern volatile __bit                   TRISE1              __at(0x449);	// @ (0x89 * 8 + 1)
#define                                 TRISE1_bit          _BIT_ACCESS(TRISE,1)
// TRISE<TRISE2>
extern volatile __bit                   TRISE2              __at(0x44A);	// @ (0x89 * 8 + 2)
#define                                 TRISE2_bit          _BIT_ACCESS(TRISE,2)
// TRISE<TRISE3>
extern volatile __bit                   TRISE3              __at(0x44B);	// @ (0x89 * 8 + 3)
#define                                 TRISE3_bit          _BIT_ACCESS(TRISE,3)
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0x4C1);	// @ (0x98 * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x481);	// @ (0x90 * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x482);	// @ (0x90 * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// TXSTA<TX8_9>
extern volatile __bit                   TX8_9               __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 TX8_9_bit           _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9>
extern volatile __bit                   TX9                 __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9D>
extern volatile __bit                   TX9D                __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXD8>
extern volatile __bit                   TXD8                __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 TXD8_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXEN>
extern volatile __bit                   TXEN                __at(0x4C5);	// @ (0x98 * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x64);	// @ (0xC * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// PCON<ULPWUE>
extern volatile __bit                   ULPWUE              __at(0x475);	// @ (0x8E * 8 + 5)
#define                                 ULPWUE_bit          _BIT_ACCESS(PCON,5)
// PIE2<ULPWUIE>
extern volatile __bit                   ULPWUIE             __at(0x46A);	// @ (0x8D * 8 + 2)
#define                                 ULPWUIE_bit         _BIT_ACCESS(PIE2,2)
// PIR2<ULPWUIF>
extern volatile __bit                   ULPWUIF             __at(0x6A);	// @ (0xD * 8 + 2)
#define                                 ULPWUIF_bit         _BIT_ACCESS(PIR2,2)
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,5)
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 VR0_bit             _BIT_ACCESS(VRCON,0)
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0x4B9);	// @ (0x97 * 8 + 1)
#define                                 VR1_bit             _BIT_ACCESS(VRCON,1)
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0x4BA);	// @ (0x97 * 8 + 2)
#define                                 VR2_bit             _BIT_ACCESS(VRCON,2)
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0x4BB);	// @ (0x97 * 8 + 3)
#define                                 VR3_bit             _BIT_ACCESS(VRCON,3)
// VRCON<VREN>
extern volatile __bit                   VREN                __at(0x4BF);	// @ (0x97 * 8 + 7)
#define                                 VREN_bit            _BIT_ACCESS(VRCON,7)
// VRCON<VROE>
extern volatile __bit                   VROE                __at(0x4BE);	// @ (0x97 * 8 + 6)
#define                                 VROE_bit            _BIT_ACCESS(VRCON,6)
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0x4BD);	// @ (0x97 * 8 + 5)
#define                                 VRR_bit             _BIT_ACCESS(VRCON,5)
// VRCON<VRSS>
extern volatile __bit                   VRSS                __at(0x4BC);	// @ (0x97 * 8 + 4)
#define                                 VRSS_bit            _BIT_ACCESS(VRCON,4)
// SSPCON<WCOL>
extern volatile __bit                   WCOL                __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON,7)
// WDTCON<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 WDTPS0_bit          _BIT_ACCESS(WDTCON,1)
// WDTCON<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 WDTPS1_bit          _BIT_ACCESS(WDTCON,2)
// WDTCON<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0x82B);	// @ (0x105 * 8 + 3)
#define                                 WDTPS2_bit          _BIT_ACCESS(WDTCON,3)
// WDTCON<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0x82C);	// @ (0x105 * 8 + 4)
#define                                 WDTPS3_bit          _BIT_ACCESS(WDTCON,4)
// WPUB<WPUB0>
extern volatile __bit                   WPUB0               __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPUB0_bit           _BIT_ACCESS(WPUB,0)
// WPUB<WPUB1>
extern volatile __bit                   WPUB1               __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPUB1_bit           _BIT_ACCESS(WPUB,1)
// WPUB<WPUB2>
extern volatile __bit                   WPUB2               __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPUB2_bit           _BIT_ACCESS(WPUB,2)
// WPUB<WPUB3>
extern volatile __bit                   WPUB3               __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 WPUB3_bit           _BIT_ACCESS(WPUB,3)
// WPUB<WPUB4>
extern volatile __bit                   WPUB4               __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUB,4)
// WPUB<WPUB5>
extern volatile __bit                   WPUB5               __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUB,5)
// WPUB<WPUB6>
extern volatile __bit                   WPUB6               __at(0x4AE);	// @ (0x95 * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUB,6)
// WPUB<WPUB7>
extern volatile __bit                   WPUB7               __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 WPUB7_bit           _BIT_ACCESS(WPUB,7)
// EECON1<WR>
extern volatile __bit                   WR                  __at(0xC61);	// @ (0x18C * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0xC62);	// @ (0x18C * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0xC63);	// @ (0x18C * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
// BAUDCTL<WUE>
extern volatile __bit                   WUE                 __at(0xC39);	// @ (0x187 * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCTL,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSPSTAT<nA>
extern volatile __bit                   nA                  __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSPSTAT,5)
// PCON<nBO>
extern volatile __bit                   nBO                 __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBO_bit             _BIT_ACCESS(PCON,0)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRBPU>
extern volatile __bit                   nRBPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(OPTION_REG,7)
// RCSTA<nRC8>
extern volatile __bit                   nRC8                __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 nRC8_bit            _BIT_ACCESS(RCSTA,6)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// TXSTA<nTX8>
extern volatile __bit                   nTX8                __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 nTX8_bit            _BIT_ACCESS(TXSTA,6)
// SSPSTAT<nW>
extern volatile __bit                   nW                  __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSPSTAT,2)

#endif // _PIC16F887_H_
