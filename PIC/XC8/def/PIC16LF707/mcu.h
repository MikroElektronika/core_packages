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

#ifndef _PIC16LF707_H_
#define _PIC16LF707_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF707
 */
#ifndef _XC_H_
#warning Header file pic16lf707.h included directly. Use #include <xc.h> instead.
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
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned                        :1;
        unsigned AN4                    :1;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned CPSA0                  :1;
        unsigned CPSA1                  :1;
        unsigned CPSA2                  :1;
        unsigned CPSA3                  :1;
        unsigned CPSA4                  :1;
        unsigned CPSB1                  :1;
        unsigned CPSB0                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned DACOUT                 :1;
        unsigned                        :1;
        unsigned T0CKI                  :1;
        unsigned                        :1;
        unsigned CLKOUT                 :1;
        unsigned CLKIN                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TACKI                  :1;
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
#define _PORTA_CPSA0_POSN                                   0x1
#define _PORTA_CPSA0_POSITION                               0x1
#define _PORTA_CPSA0_SIZE                                   0x1
#define _PORTA_CPSA0_LENGTH                                 0x1
#define _PORTA_CPSA0_MASK                                   0x2
#define _PORTA_CPSA1_POSN                                   0x2
#define _PORTA_CPSA1_POSITION                               0x2
#define _PORTA_CPSA1_SIZE                                   0x1
#define _PORTA_CPSA1_LENGTH                                 0x1
#define _PORTA_CPSA1_MASK                                   0x4
#define _PORTA_CPSA2_POSN                                   0x3
#define _PORTA_CPSA2_POSITION                               0x3
#define _PORTA_CPSA2_SIZE                                   0x1
#define _PORTA_CPSA2_LENGTH                                 0x1
#define _PORTA_CPSA2_MASK                                   0x8
#define _PORTA_CPSA3_POSN                                   0x4
#define _PORTA_CPSA3_POSITION                               0x4
#define _PORTA_CPSA3_SIZE                                   0x1
#define _PORTA_CPSA3_LENGTH                                 0x1
#define _PORTA_CPSA3_MASK                                   0x10
#define _PORTA_CPSA4_POSN                                   0x5
#define _PORTA_CPSA4_POSITION                               0x5
#define _PORTA_CPSA4_SIZE                                   0x1
#define _PORTA_CPSA4_LENGTH                                 0x1
#define _PORTA_CPSA4_MASK                                   0x20
#define _PORTA_CPSB1_POSN                                   0x6
#define _PORTA_CPSB1_POSITION                               0x6
#define _PORTA_CPSB1_SIZE                                   0x1
#define _PORTA_CPSB1_LENGTH                                 0x1
#define _PORTA_CPSB1_MASK                                   0x40
#define _PORTA_CPSB0_POSN                                   0x7
#define _PORTA_CPSB0_POSITION                               0x7
#define _PORTA_CPSB0_SIZE                                   0x1
#define _PORTA_CPSB0_LENGTH                                 0x1
#define _PORTA_CPSB0_MASK                                   0x80
#define _PORTA_DACOUT_POSN                                  0x2
#define _PORTA_DACOUT_POSITION                              0x2
#define _PORTA_DACOUT_SIZE                                  0x1
#define _PORTA_DACOUT_LENGTH                                0x1
#define _PORTA_DACOUT_MASK                                  0x4
#define _PORTA_T0CKI_POSN                                   0x4
#define _PORTA_T0CKI_POSITION                               0x4
#define _PORTA_T0CKI_SIZE                                   0x1
#define _PORTA_T0CKI_LENGTH                                 0x1
#define _PORTA_T0CKI_MASK                                   0x10
#define _PORTA_CLKOUT_POSN                                  0x6
#define _PORTA_CLKOUT_POSITION                              0x6
#define _PORTA_CLKOUT_SIZE                                  0x1
#define _PORTA_CLKOUT_LENGTH                                0x1
#define _PORTA_CLKOUT_MASK                                  0x40
#define _PORTA_CLKIN_POSN                                   0x7
#define _PORTA_CLKIN_POSITION                               0x7
#define _PORTA_CLKIN_SIZE                                   0x1
#define _PORTA_CLKIN_LENGTH                                 0x1
#define _PORTA_CLKIN_MASK                                   0x80
#define _PORTA_TACKI_POSN                                   0x4
#define _PORTA_TACKI_POSITION                               0x4
#define _PORTA_TACKI_SIZE                                   0x1
#define _PORTA_TACKI_LENGTH                                 0x1
#define _PORTA_TACKI_MASK                                   0x10

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
    struct {
        unsigned AN12                   :1;
        unsigned AN10                   :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN11                   :1;
        unsigned AN13                   :1;
    };
    struct {
        unsigned CPSB8                  :1;
        unsigned CPSB9                  :1;
        unsigned CPSB10                 :1;
        unsigned CPSB11                 :1;
        unsigned CPSB12                 :1;
        unsigned CPSB13                 :1;
        unsigned CPSB14                 :1;
        unsigned CPSB15                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2                   :1;
        unsigned                        :1;
        unsigned T1G                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned T3CKI                  :1;
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
#define _PORTB_AN12_POSN                                    0x0
#define _PORTB_AN12_POSITION                                0x0
#define _PORTB_AN12_SIZE                                    0x1
#define _PORTB_AN12_LENGTH                                  0x1
#define _PORTB_AN12_MASK                                    0x1
#define _PORTB_AN10_POSN                                    0x1
#define _PORTB_AN10_POSITION                                0x1
#define _PORTB_AN10_SIZE                                    0x1
#define _PORTB_AN10_LENGTH                                  0x1
#define _PORTB_AN10_MASK                                    0x2
#define _PORTB_AN8_POSN                                     0x2
#define _PORTB_AN8_POSITION                                 0x2
#define _PORTB_AN8_SIZE                                     0x1
#define _PORTB_AN8_LENGTH                                   0x1
#define _PORTB_AN8_MASK                                     0x4
#define _PORTB_AN9_POSN                                     0x3
#define _PORTB_AN9_POSITION                                 0x3
#define _PORTB_AN9_SIZE                                     0x1
#define _PORTB_AN9_LENGTH                                   0x1
#define _PORTB_AN9_MASK                                     0x8
#define _PORTB_AN11_POSN                                    0x4
#define _PORTB_AN11_POSITION                                0x4
#define _PORTB_AN11_SIZE                                    0x1
#define _PORTB_AN11_LENGTH                                  0x1
#define _PORTB_AN11_MASK                                    0x10
#define _PORTB_AN13_POSN                                    0x5
#define _PORTB_AN13_POSITION                                0x5
#define _PORTB_AN13_SIZE                                    0x1
#define _PORTB_AN13_LENGTH                                  0x1
#define _PORTB_AN13_MASK                                    0x20
#define _PORTB_CPSB8_POSN                                   0x0
#define _PORTB_CPSB8_POSITION                               0x0
#define _PORTB_CPSB8_SIZE                                   0x1
#define _PORTB_CPSB8_LENGTH                                 0x1
#define _PORTB_CPSB8_MASK                                   0x1
#define _PORTB_CPSB9_POSN                                   0x1
#define _PORTB_CPSB9_POSITION                               0x1
#define _PORTB_CPSB9_SIZE                                   0x1
#define _PORTB_CPSB9_LENGTH                                 0x1
#define _PORTB_CPSB9_MASK                                   0x2
#define _PORTB_CPSB10_POSN                                  0x2
#define _PORTB_CPSB10_POSITION                              0x2
#define _PORTB_CPSB10_SIZE                                  0x1
#define _PORTB_CPSB10_LENGTH                                0x1
#define _PORTB_CPSB10_MASK                                  0x4
#define _PORTB_CPSB11_POSN                                  0x3
#define _PORTB_CPSB11_POSITION                              0x3
#define _PORTB_CPSB11_SIZE                                  0x1
#define _PORTB_CPSB11_LENGTH                                0x1
#define _PORTB_CPSB11_MASK                                  0x8
#define _PORTB_CPSB12_POSN                                  0x4
#define _PORTB_CPSB12_POSITION                              0x4
#define _PORTB_CPSB12_SIZE                                  0x1
#define _PORTB_CPSB12_LENGTH                                0x1
#define _PORTB_CPSB12_MASK                                  0x10
#define _PORTB_CPSB13_POSN                                  0x5
#define _PORTB_CPSB13_POSITION                              0x5
#define _PORTB_CPSB13_SIZE                                  0x1
#define _PORTB_CPSB13_LENGTH                                0x1
#define _PORTB_CPSB13_MASK                                  0x20
#define _PORTB_CPSB14_POSN                                  0x6
#define _PORTB_CPSB14_POSITION                              0x6
#define _PORTB_CPSB14_SIZE                                  0x1
#define _PORTB_CPSB14_LENGTH                                0x1
#define _PORTB_CPSB14_MASK                                  0x40
#define _PORTB_CPSB15_POSN                                  0x7
#define _PORTB_CPSB15_POSITION                              0x7
#define _PORTB_CPSB15_SIZE                                  0x1
#define _PORTB_CPSB15_LENGTH                                0x1
#define _PORTB_CPSB15_MASK                                  0x80
#define _PORTB_CCP2_POSN                                    0x3
#define _PORTB_CCP2_POSITION                                0x3
#define _PORTB_CCP2_SIZE                                    0x1
#define _PORTB_CCP2_LENGTH                                  0x1
#define _PORTB_CCP2_MASK                                    0x8
#define _PORTB_T1G_POSN                                     0x5
#define _PORTB_T1G_POSITION                                 0x5
#define _PORTB_T1G_SIZE                                     0x1
#define _PORTB_T1G_LENGTH                                   0x1
#define _PORTB_T1G_MASK                                     0x20
#define _PORTB_T3CKI_POSN                                   0x5
#define _PORTB_T3CKI_POSITION                               0x5
#define _PORTB_T3CKI_SIZE                                   0x1
#define _PORTB_T3CKI_LENGTH                                 0x1
#define _PORTB_T3CKI_MASK                                   0x20

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
    struct {
        unsigned CPSB2                  :1;
        unsigned CPSB3                  :1;
        unsigned CPSB4                  :1;
        unsigned                        :2;
        unsigned CPSA9                  :1;
        unsigned CPSA10                 :1;
        unsigned CPSA11                 :1;
    };
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned TBCKI                  :1;
        unsigned SCK                    :1;
        unsigned SDI                    :1;
        unsigned SDO                    :1;
        unsigned TX                     :1;
        unsigned RX                     :1;
    };
    struct {
        unsigned T1CKI                  :1;
        unsigned CCP2                   :1;
        unsigned CCP1                   :1;
        unsigned SCL                    :1;
        unsigned SDA                    :1;
        unsigned                        :1;
        unsigned CK                     :1;
        unsigned DT                     :1;
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
#define _PORTC_CPSB2_POSN                                   0x0
#define _PORTC_CPSB2_POSITION                               0x0
#define _PORTC_CPSB2_SIZE                                   0x1
#define _PORTC_CPSB2_LENGTH                                 0x1
#define _PORTC_CPSB2_MASK                                   0x1
#define _PORTC_CPSB3_POSN                                   0x1
#define _PORTC_CPSB3_POSITION                               0x1
#define _PORTC_CPSB3_SIZE                                   0x1
#define _PORTC_CPSB3_LENGTH                                 0x1
#define _PORTC_CPSB3_MASK                                   0x2
#define _PORTC_CPSB4_POSN                                   0x2
#define _PORTC_CPSB4_POSITION                               0x2
#define _PORTC_CPSB4_SIZE                                   0x1
#define _PORTC_CPSB4_LENGTH                                 0x1
#define _PORTC_CPSB4_MASK                                   0x4
#define _PORTC_CPSA9_POSN                                   0x5
#define _PORTC_CPSA9_POSITION                               0x5
#define _PORTC_CPSA9_SIZE                                   0x1
#define _PORTC_CPSA9_LENGTH                                 0x1
#define _PORTC_CPSA9_MASK                                   0x20
#define _PORTC_CPSA10_POSN                                  0x6
#define _PORTC_CPSA10_POSITION                              0x6
#define _PORTC_CPSA10_SIZE                                  0x1
#define _PORTC_CPSA10_LENGTH                                0x1
#define _PORTC_CPSA10_MASK                                  0x40
#define _PORTC_CPSA11_POSN                                  0x7
#define _PORTC_CPSA11_POSITION                              0x7
#define _PORTC_CPSA11_SIZE                                  0x1
#define _PORTC_CPSA11_LENGTH                                0x1
#define _PORTC_CPSA11_MASK                                  0x80
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
#define _PORTC_TBCKI_POSN                                   0x2
#define _PORTC_TBCKI_POSITION                               0x2
#define _PORTC_TBCKI_SIZE                                   0x1
#define _PORTC_TBCKI_LENGTH                                 0x1
#define _PORTC_TBCKI_MASK                                   0x4
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
#define _PORTC_TX_POSN                                      0x6
#define _PORTC_TX_POSITION                                  0x6
#define _PORTC_TX_SIZE                                      0x1
#define _PORTC_TX_LENGTH                                    0x1
#define _PORTC_TX_MASK                                      0x40
#define _PORTC_RX_POSN                                      0x7
#define _PORTC_RX_POSITION                                  0x7
#define _PORTC_RX_SIZE                                      0x1
#define _PORTC_RX_LENGTH                                    0x1
#define _PORTC_RX_MASK                                      0x80
#define _PORTC_T1CKI_POSN                                   0x0
#define _PORTC_T1CKI_POSITION                               0x0
#define _PORTC_T1CKI_SIZE                                   0x1
#define _PORTC_T1CKI_LENGTH                                 0x1
#define _PORTC_T1CKI_MASK                                   0x1
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
#define _PORTC_CK_POSN                                      0x6
#define _PORTC_CK_POSITION                                  0x6
#define _PORTC_CK_SIZE                                      0x1
#define _PORTC_CK_LENGTH                                    0x1
#define _PORTC_CK_MASK                                      0x40
#define _PORTC_DT_POSN                                      0x7
#define _PORTC_DT_POSITION                                  0x7
#define _PORTC_DT_SIZE                                      0x1
#define _PORTC_DT_LENGTH                                    0x1
#define _PORTC_DT_MASK                                      0x80

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
    struct {
        unsigned CPSB5                  :1;
        unsigned CPSB6                  :1;
        unsigned CPSB7                  :1;
        unsigned CPSA8                  :1;
        unsigned CPSA12                 :1;
        unsigned CPSA13                 :1;
        unsigned CPSA14                 :1;
        unsigned CPSA15                 :1;
    };
    struct {
        unsigned T3G                    :1;
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
#define _PORTD_CPSB5_POSN                                   0x0
#define _PORTD_CPSB5_POSITION                               0x0
#define _PORTD_CPSB5_SIZE                                   0x1
#define _PORTD_CPSB5_LENGTH                                 0x1
#define _PORTD_CPSB5_MASK                                   0x1
#define _PORTD_CPSB6_POSN                                   0x1
#define _PORTD_CPSB6_POSITION                               0x1
#define _PORTD_CPSB6_SIZE                                   0x1
#define _PORTD_CPSB6_LENGTH                                 0x1
#define _PORTD_CPSB6_MASK                                   0x2
#define _PORTD_CPSB7_POSN                                   0x2
#define _PORTD_CPSB7_POSITION                               0x2
#define _PORTD_CPSB7_SIZE                                   0x1
#define _PORTD_CPSB7_LENGTH                                 0x1
#define _PORTD_CPSB7_MASK                                   0x4
#define _PORTD_CPSA8_POSN                                   0x3
#define _PORTD_CPSA8_POSITION                               0x3
#define _PORTD_CPSA8_SIZE                                   0x1
#define _PORTD_CPSA8_LENGTH                                 0x1
#define _PORTD_CPSA8_MASK                                   0x8
#define _PORTD_CPSA12_POSN                                  0x4
#define _PORTD_CPSA12_POSITION                              0x4
#define _PORTD_CPSA12_SIZE                                  0x1
#define _PORTD_CPSA12_LENGTH                                0x1
#define _PORTD_CPSA12_MASK                                  0x10
#define _PORTD_CPSA13_POSN                                  0x5
#define _PORTD_CPSA13_POSITION                              0x5
#define _PORTD_CPSA13_SIZE                                  0x1
#define _PORTD_CPSA13_LENGTH                                0x1
#define _PORTD_CPSA13_MASK                                  0x20
#define _PORTD_CPSA14_POSN                                  0x6
#define _PORTD_CPSA14_POSITION                              0x6
#define _PORTD_CPSA14_SIZE                                  0x1
#define _PORTD_CPSA14_LENGTH                                0x1
#define _PORTD_CPSA14_MASK                                  0x40
#define _PORTD_CPSA15_POSN                                  0x7
#define _PORTD_CPSA15_POSITION                              0x7
#define _PORTD_CPSA15_SIZE                                  0x1
#define _PORTD_CPSA15_LENGTH                                0x1
#define _PORTD_CPSA15_MASK                                  0x80
#define _PORTD_T3G_POSN                                     0x0
#define _PORTD_T3G_POSITION                                 0x0
#define _PORTD_T3G_SIZE                                     0x1
#define _PORTD_T3G_LENGTH                                   0x1
#define _PORTD_T3G_MASK                                     0x1

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
    struct {
        unsigned AN5                    :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned nMCLR                  :1;
    };
    struct {
        unsigned CPSA5                  :1;
        unsigned CPSA6                  :1;
        unsigned CPSA7                  :1;
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
#define _PORTE_AN5_POSN                                     0x0
#define _PORTE_AN5_POSITION                                 0x0
#define _PORTE_AN5_SIZE                                     0x1
#define _PORTE_AN5_LENGTH                                   0x1
#define _PORTE_AN5_MASK                                     0x1
#define _PORTE_AN6_POSN                                     0x1
#define _PORTE_AN6_POSITION                                 0x1
#define _PORTE_AN6_SIZE                                     0x1
#define _PORTE_AN6_LENGTH                                   0x1
#define _PORTE_AN6_MASK                                     0x2
#define _PORTE_AN7_POSN                                     0x2
#define _PORTE_AN7_POSITION                                 0x2
#define _PORTE_AN7_SIZE                                     0x1
#define _PORTE_AN7_LENGTH                                   0x1
#define _PORTE_AN7_MASK                                     0x4
#define _PORTE_nMCLR_POSN                                   0x3
#define _PORTE_nMCLR_POSITION                               0x3
#define _PORTE_nMCLR_SIZE                                   0x1
#define _PORTE_nMCLR_LENGTH                                 0x1
#define _PORTE_nMCLR_MASK                                   0x8
#define _PORTE_CPSA5_POSN                                   0x0
#define _PORTE_CPSA5_POSITION                               0x0
#define _PORTE_CPSA5_SIZE                                   0x1
#define _PORTE_CPSA5_LENGTH                                 0x1
#define _PORTE_CPSA5_MASK                                   0x1
#define _PORTE_CPSA6_POSN                                   0x1
#define _PORTE_CPSA6_POSITION                               0x1
#define _PORTE_CPSA6_SIZE                                   0x1
#define _PORTE_CPSA6_LENGTH                                 0x1
#define _PORTE_CPSA6_MASK                                   0x2
#define _PORTE_CPSA7_POSN                                   0x2
#define _PORTE_CPSA7_POSITION                               0x2
#define _PORTE_CPSA7_SIZE                                   0x1
#define _PORTE_CPSA7_LENGTH                                 0x1
#define _PORTE_CPSA7_MASK                                   0x4

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :5;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x5
#define _PCLATH_PCLATH_LENGTH                               0x5
#define _PCLATH_PCLATH_MASK                                 0x1F

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
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
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
        unsigned TMR1GIF                :1;
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
#define _PIR1_TMR1GIF_POSN                                  0x7
#define _PIR1_TMR1GIF_POSITION                              0x7
#define _PIR1_TMR1GIF_SIZE                                  0x1
#define _PIR1_TMR1GIF_LENGTH                                0x1
#define _PIR1_TMR1GIF_MASK                                  0x80

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
        unsigned                        :3;
        unsigned TMRAIF                 :1;
        unsigned TMRBIF                 :1;
        unsigned TMR3IF                 :1;
        unsigned TMR3GIF                :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x00D);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_TMRAIF_POSN                                   0x4
#define _PIR2_TMRAIF_POSITION                               0x4
#define _PIR2_TMRAIF_SIZE                                   0x1
#define _PIR2_TMRAIF_LENGTH                                 0x1
#define _PIR2_TMRAIF_MASK                                   0x10
#define _PIR2_TMRBIF_POSN                                   0x5
#define _PIR2_TMRBIF_POSITION                               0x5
#define _PIR2_TMRBIF_SIZE                                   0x1
#define _PIR2_TMRBIF_LENGTH                                 0x1
#define _PIR2_TMRBIF_MASK                                   0x20
#define _PIR2_TMR3IF_POSN                                   0x6
#define _PIR2_TMR3IF_POSITION                               0x6
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x40
#define _PIR2_TMR3GIF_POSN                                  0x7
#define _PIR2_TMR3GIF_POSITION                              0x7
#define _PIR2_TMR3GIF_SIZE                                  0x1
#define _PIR2_TMR3GIF_LENGTH                                0x1
#define _PIR2_TMR3GIF_MASK                                  0x80

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
        unsigned                        :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned TMRCS0                 :1;
        unsigned TMRCS1                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x010);
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
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
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
#define _T1CON_TMRCS0_POSN                                  0x6
#define _T1CON_TMRCS0_POSITION                              0x6
#define _T1CON_TMRCS0_SIZE                                  0x1
#define _T1CON_TMRCS0_LENGTH                                0x1
#define _T1CON_TMRCS0_MASK                                  0x40
#define _T1CON_TMRCS1_POSN                                  0x7
#define _T1CON_TMRCS1_POSITION                              0x7
#define _T1CON_TMRCS1_SIZE                                  0x1
#define _T1CON_TMRCS1_LENGTH                                0x1
#define _T1CON_TMRCS1_MASK                                  0x80

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
extern volatile CCP2CONbits_t CCP2CONbits __at(0x01D);
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

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRES equ 01Eh");
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
    };
    struct {
        unsigned                        :2;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
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
        unsigned TMR0SE                 :1;
        unsigned TMR0CS                 :1;
        unsigned INTEDG                 :1;
        unsigned nRBPU                  :1;
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
        unsigned TMR1GIE                :1;
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
#define _PIE1_TMR1GIE_POSN                                  0x7
#define _PIE1_TMR1GIE_POSITION                              0x7
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x80

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
        unsigned                        :3;
        unsigned TMRAIE                 :1;
        unsigned TMRBIE                 :1;
        unsigned TMR3IE                 :1;
        unsigned TMR3GIE                :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x08D);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_TMRAIE_POSN                                   0x4
#define _PIE2_TMRAIE_POSITION                               0x4
#define _PIE2_TMRAIE_SIZE                                   0x1
#define _PIE2_TMRAIE_LENGTH                                 0x1
#define _PIE2_TMRAIE_MASK                                   0x10
#define _PIE2_TMRBIE_POSN                                   0x5
#define _PIE2_TMRBIE_POSITION                               0x5
#define _PIE2_TMRBIE_SIZE                                   0x1
#define _PIE2_TMRBIE_LENGTH                                 0x1
#define _PIE2_TMRBIE_MASK                                   0x20
#define _PIE2_TMR3IE_POSN                                   0x6
#define _PIE2_TMR3IE_POSITION                               0x6
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x40
#define _PIE2_TMR3GIE_POSN                                  0x7
#define _PIE2_TMR3GIE_POSITION                              0x7
#define _PIE2_TMR3GIE_SIZE                                  0x1
#define _PIE2_TMR3GIE_LENGTH                                0x1
#define _PIE2_TMR3GIE_MASK                                  0x80

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

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x08F);
#ifndef _LIB_BUILD
asm("T1GCON equ 08Fh");
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
extern volatile T1GCONbits_t T1GCONbits __at(0x08F);
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

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x090);
#ifndef _LIB_BUILD
asm("OSCCON equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned ICSS                   :1;
        unsigned ICSL                   :1;
        unsigned IRCF                   :2;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x090);
// bitfield macros
#define _OSCCON_ICSS_POSN                                   0x2
#define _OSCCON_ICSS_POSITION                               0x2
#define _OSCCON_ICSS_SIZE                                   0x1
#define _OSCCON_ICSS_LENGTH                                 0x1
#define _OSCCON_ICSS_MASK                                   0x4
#define _OSCCON_ICSL_POSN                                   0x3
#define _OSCCON_ICSL_POSITION                               0x3
#define _OSCCON_ICSL_SIZE                                   0x1
#define _OSCCON_ICSL_LENGTH                                 0x1
#define _OSCCON_ICSL_MASK                                   0x8
#define _OSCCON_IRCF_POSN                                   0x4
#define _OSCCON_IRCF_POSITION                               0x4
#define _OSCCON_IRCF_SIZE                                   0x2
#define _OSCCON_IRCF_LENGTH                                 0x2
#define _OSCCON_IRCF_MASK                                   0x30
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x091);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :6;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x091);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x6
#define _OSCTUNE_TUN_LENGTH                                 0x6
#define _OSCTUNE_TUN_MASK                                   0x3F

// Register: PR2
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0x092);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 092h");  // Note: Changed by MikroE
#endif

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0x093);
#ifndef _LIB_BUILD
asm("SSPADD equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0x093);
// bitfield macros
#define _SSPADD_SSPADD_POSN                                 0x0
#define _SSPADD_SSPADD_POSITION                             0x0
#define _SSPADD_SSPADD_SIZE                                 0x8
#define _SSPADD_SSPADD_LENGTH                               0x8
#define _SSPADD_SSPADD_MASK                                 0xFF

// Register: SSPMSK
#define SSPMSK SSPMSK
extern volatile unsigned char           SSPMSK              __at(0x093);
#ifndef _LIB_BUILD
asm("SSPMSK equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0x093);
// bitfield macros
#define _SSPMSK_SSPMSK_POSN                                 0x0
#define _SSPMSK_SSPMSK_POSITION                             0x0
#define _SSPMSK_SSPMSK_SIZE                                 0x8
#define _SSPMSK_SSPMSK_LENGTH                               0x8
#define _SSPMSK_SSPMSK_MASK                                 0xFF

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

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0x095);
#ifndef _LIB_BUILD
asm("WPUB equ 095h");
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
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __at(0x095);
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

// Register: IOCB
#define IOCB IOCB
extern volatile unsigned char           IOCB                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCB equ 096h");
#endif
// bitfield definitions
typedef union {
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

// Register: T3CON
#define T3CON T3CON
extern volatile unsigned char           T3CON               __at(0x097);
#ifndef _LIB_BUILD
asm("T3CON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3ON                 :1;
        unsigned                        :1;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS                 :2;
        unsigned TMR3CS                 :2;
    };
    struct {
        unsigned                        :4;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
        unsigned TMR3CS0                :1;
        unsigned TMR3CS1                :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits __at(0x097);
// bitfield macros
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
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
        unsigned                        :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
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

// Register: SPBRG
#define SPBRG SPBRG
extern volatile unsigned char           SPBRG               __at(0x099);
#ifndef _LIB_BUILD
asm("SPBRG equ 099h");
#endif

// Register: TMR3
#define TMR3 TMR3
extern volatile unsigned short          TMR3                __at(0x09A);
#ifndef _LIB_BUILD
asm("TMR3 equ 09Ah");
#endif

// Register: TMR3L
#define TMR3L TMR3L
extern volatile unsigned char           TMR3L               __at(0x09A);
#ifndef _LIB_BUILD
asm("TMR3L equ 09Ah");
#endif

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0x09B);
#ifndef _LIB_BUILD
asm("TMR3H equ 09Bh");
#endif

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x09C);
#ifndef _LIB_BUILD
asm("APFCON equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2SEL                :1;
        unsigned SSSEL                  :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x09C);
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

// Register: FVRCON
#define FVRCON FVRCON
extern volatile unsigned char           FVRCON              __at(0x09D);
#ifndef _LIB_BUILD
asm("FVRCON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADFVR                  :2;
        unsigned CDAFVR                 :2;
        unsigned                        :1;
        unsigned                        :1;
        unsigned FVREN                  :1;
        unsigned FVRRDY                 :1;
    };
    struct {
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
        unsigned CDAFVR0                :1;
        unsigned CDAFVR1                :1;
    };
} FVRCONbits_t;
extern volatile FVRCONbits_t FVRCONbits __at(0x09D);
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
#define _FVRCON_FVREN_POSN                                  0x6
#define _FVRCON_FVREN_POSITION                              0x6
#define _FVRCON_FVREN_SIZE                                  0x1
#define _FVRCON_FVREN_LENGTH                                0x1
#define _FVRCON_FVREN_MASK                                  0x40
#define _FVRCON_FVRRDY_POSN                                 0x7
#define _FVRCON_FVRRDY_POSITION                             0x7
#define _FVRCON_FVRRDY_SIZE                                 0x1
#define _FVRCON_FVRRDY_LENGTH                               0x1
#define _FVRCON_FVRRDY_MASK                                 0x80
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

// Register: T3GCON
#define T3GCON T3GCON
extern volatile unsigned char           T3GCON              __at(0x09E);
#ifndef _LIB_BUILD
asm("T3GCON equ 09Eh");
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
extern volatile T3GCONbits_t T3GCONbits __at(0x09E);
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

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADREF                  :2;
        unsigned                        :2;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned ADREF0                 :1;
        unsigned ADREF1                 :1;
        unsigned                        :2;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_ADREF_POSN                                  0x0
#define _ADCON1_ADREF_POSITION                              0x0
#define _ADCON1_ADREF_SIZE                                  0x2
#define _ADCON1_ADREF_LENGTH                                0x2
#define _ADCON1_ADREF_MASK                                  0x3
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
#define _ADCON1_ADREF0_POSN                                 0x0
#define _ADCON1_ADREF0_POSITION                             0x0
#define _ADCON1_ADREF0_SIZE                                 0x1
#define _ADCON1_ADREF0_LENGTH                               0x1
#define _ADCON1_ADREF0_MASK                                 0x1
#define _ADCON1_ADREF1_POSN                                 0x1
#define _ADCON1_ADREF1_POSITION                             0x1
#define _ADCON1_ADREF1_SIZE                                 0x1
#define _ADCON1_ADREF1_LENGTH                               0x1
#define _ADCON1_ADREF1_MASK                                 0x2
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

// Register: TACON
#define TACON TACON
extern volatile unsigned char           TACON               __at(0x105);
#ifndef _LIB_BUILD
asm("TACON equ 0105h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TAPS                   :3;
        unsigned TAPSA                  :1;
        unsigned TASE                   :1;
        unsigned TACS                   :1;
        unsigned                        :1;
        unsigned TMRAON                 :1;
    };
    struct {
        unsigned TAPS0                  :1;
        unsigned TAPS1                  :1;
        unsigned TAPS2                  :1;
    };
    struct {
        unsigned TMRAPS                 :3;
        unsigned TMRAPSA                :1;
        unsigned TMRASE                 :1;
        unsigned TMRACS                 :1;
    };
    struct {
        unsigned TMRAPS0                :1;
        unsigned TMRAPS1                :1;
        unsigned TMRAPS2                :1;
    };
} TACONbits_t;
extern volatile TACONbits_t TACONbits __at(0x105);
// bitfield macros
#define _TACON_TAPS_POSN                                    0x0
#define _TACON_TAPS_POSITION                                0x0
#define _TACON_TAPS_SIZE                                    0x3
#define _TACON_TAPS_LENGTH                                  0x3
#define _TACON_TAPS_MASK                                    0x7
#define _TACON_TAPSA_POSN                                   0x3
#define _TACON_TAPSA_POSITION                               0x3
#define _TACON_TAPSA_SIZE                                   0x1
#define _TACON_TAPSA_LENGTH                                 0x1
#define _TACON_TAPSA_MASK                                   0x8
#define _TACON_TASE_POSN                                    0x4
#define _TACON_TASE_POSITION                                0x4
#define _TACON_TASE_SIZE                                    0x1
#define _TACON_TASE_LENGTH                                  0x1
#define _TACON_TASE_MASK                                    0x10
#define _TACON_TACS_POSN                                    0x5
#define _TACON_TACS_POSITION                                0x5
#define _TACON_TACS_SIZE                                    0x1
#define _TACON_TACS_LENGTH                                  0x1
#define _TACON_TACS_MASK                                    0x20
#define _TACON_TMRAON_POSN                                  0x7
#define _TACON_TMRAON_POSITION                              0x7
#define _TACON_TMRAON_SIZE                                  0x1
#define _TACON_TMRAON_LENGTH                                0x1
#define _TACON_TMRAON_MASK                                  0x80
#define _TACON_TAPS0_POSN                                   0x0
#define _TACON_TAPS0_POSITION                               0x0
#define _TACON_TAPS0_SIZE                                   0x1
#define _TACON_TAPS0_LENGTH                                 0x1
#define _TACON_TAPS0_MASK                                   0x1
#define _TACON_TAPS1_POSN                                   0x1
#define _TACON_TAPS1_POSITION                               0x1
#define _TACON_TAPS1_SIZE                                   0x1
#define _TACON_TAPS1_LENGTH                                 0x1
#define _TACON_TAPS1_MASK                                   0x2
#define _TACON_TAPS2_POSN                                   0x2
#define _TACON_TAPS2_POSITION                               0x2
#define _TACON_TAPS2_SIZE                                   0x1
#define _TACON_TAPS2_LENGTH                                 0x1
#define _TACON_TAPS2_MASK                                   0x4
#define _TACON_TMRAPS_POSN                                  0x0
#define _TACON_TMRAPS_POSITION                              0x0
#define _TACON_TMRAPS_SIZE                                  0x3
#define _TACON_TMRAPS_LENGTH                                0x3
#define _TACON_TMRAPS_MASK                                  0x7
#define _TACON_TMRAPSA_POSN                                 0x3
#define _TACON_TMRAPSA_POSITION                             0x3
#define _TACON_TMRAPSA_SIZE                                 0x1
#define _TACON_TMRAPSA_LENGTH                               0x1
#define _TACON_TMRAPSA_MASK                                 0x8
#define _TACON_TMRASE_POSN                                  0x4
#define _TACON_TMRASE_POSITION                              0x4
#define _TACON_TMRASE_SIZE                                  0x1
#define _TACON_TMRASE_LENGTH                                0x1
#define _TACON_TMRASE_MASK                                  0x10
#define _TACON_TMRACS_POSN                                  0x5
#define _TACON_TMRACS_POSITION                              0x5
#define _TACON_TMRACS_SIZE                                  0x1
#define _TACON_TMRACS_LENGTH                                0x1
#define _TACON_TMRACS_MASK                                  0x20
#define _TACON_TMRAPS0_POSN                                 0x0
#define _TACON_TMRAPS0_POSITION                             0x0
#define _TACON_TMRAPS0_SIZE                                 0x1
#define _TACON_TMRAPS0_LENGTH                               0x1
#define _TACON_TMRAPS0_MASK                                 0x1
#define _TACON_TMRAPS1_POSN                                 0x1
#define _TACON_TMRAPS1_POSITION                             0x1
#define _TACON_TMRAPS1_SIZE                                 0x1
#define _TACON_TMRAPS1_LENGTH                               0x1
#define _TACON_TMRAPS1_MASK                                 0x2
#define _TACON_TMRAPS2_POSN                                 0x2
#define _TACON_TMRAPS2_POSITION                             0x2
#define _TACON_TMRAPS2_SIZE                                 0x1
#define _TACON_TMRAPS2_LENGTH                               0x1
#define _TACON_TMRAPS2_MASK                                 0x4

// Register: CPSBCON0
#define CPSBCON0 CPSBCON0
extern volatile unsigned char           CPSBCON0            __at(0x106);
#ifndef _LIB_BUILD
asm("CPSBCON0 equ 0106h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TBXCS                  :1;
        unsigned CPSBOUT                :1;
        unsigned CPSBRNG                :2;
        unsigned                        :2;
        unsigned CPSBRM                 :1;
        unsigned CPSBON                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned CPSBRNG0               :1;
        unsigned CPSBRNG1               :1;
    };
} CPSBCON0bits_t;
extern volatile CPSBCON0bits_t CPSBCON0bits __at(0x106);
// bitfield macros
#define _CPSBCON0_TBXCS_POSN                                0x0
#define _CPSBCON0_TBXCS_POSITION                            0x0
#define _CPSBCON0_TBXCS_SIZE                                0x1
#define _CPSBCON0_TBXCS_LENGTH                              0x1
#define _CPSBCON0_TBXCS_MASK                                0x1
#define _CPSBCON0_CPSBOUT_POSN                              0x1
#define _CPSBCON0_CPSBOUT_POSITION                          0x1
#define _CPSBCON0_CPSBOUT_SIZE                              0x1
#define _CPSBCON0_CPSBOUT_LENGTH                            0x1
#define _CPSBCON0_CPSBOUT_MASK                              0x2
#define _CPSBCON0_CPSBRNG_POSN                              0x2
#define _CPSBCON0_CPSBRNG_POSITION                          0x2
#define _CPSBCON0_CPSBRNG_SIZE                              0x2
#define _CPSBCON0_CPSBRNG_LENGTH                            0x2
#define _CPSBCON0_CPSBRNG_MASK                              0xC
#define _CPSBCON0_CPSBRM_POSN                               0x6
#define _CPSBCON0_CPSBRM_POSITION                           0x6
#define _CPSBCON0_CPSBRM_SIZE                               0x1
#define _CPSBCON0_CPSBRM_LENGTH                             0x1
#define _CPSBCON0_CPSBRM_MASK                               0x40
#define _CPSBCON0_CPSBON_POSN                               0x7
#define _CPSBCON0_CPSBON_POSITION                           0x7
#define _CPSBCON0_CPSBON_SIZE                               0x1
#define _CPSBCON0_CPSBON_LENGTH                             0x1
#define _CPSBCON0_CPSBON_MASK                               0x80
#define _CPSBCON0_CPSBRNG0_POSN                             0x2
#define _CPSBCON0_CPSBRNG0_POSITION                         0x2
#define _CPSBCON0_CPSBRNG0_SIZE                             0x1
#define _CPSBCON0_CPSBRNG0_LENGTH                           0x1
#define _CPSBCON0_CPSBRNG0_MASK                             0x4
#define _CPSBCON0_CPSBRNG1_POSN                             0x3
#define _CPSBCON0_CPSBRNG1_POSITION                         0x3
#define _CPSBCON0_CPSBRNG1_SIZE                             0x1
#define _CPSBCON0_CPSBRNG1_LENGTH                           0x1
#define _CPSBCON0_CPSBRNG1_MASK                             0x8

// Register: CPSBCON1
#define CPSBCON1 CPSBCON1
extern volatile unsigned char           CPSBCON1            __at(0x107);
#ifndef _LIB_BUILD
asm("CPSBCON1 equ 0107h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CPSBCH                 :4;
    };
    struct {
        unsigned CPSBCH0                :1;
        unsigned CPSBCH1                :1;
        unsigned CPSBCH2                :1;
        unsigned CPSBCH3                :1;
    };
} CPSBCON1bits_t;
extern volatile CPSBCON1bits_t CPSBCON1bits __at(0x107);
// bitfield macros
#define _CPSBCON1_CPSBCH_POSN                               0x0
#define _CPSBCON1_CPSBCH_POSITION                           0x0
#define _CPSBCON1_CPSBCH_SIZE                               0x4
#define _CPSBCON1_CPSBCH_LENGTH                             0x4
#define _CPSBCON1_CPSBCH_MASK                               0xF
#define _CPSBCON1_CPSBCH0_POSN                              0x0
#define _CPSBCON1_CPSBCH0_POSITION                          0x0
#define _CPSBCON1_CPSBCH0_SIZE                              0x1
#define _CPSBCON1_CPSBCH0_LENGTH                            0x1
#define _CPSBCON1_CPSBCH0_MASK                              0x1
#define _CPSBCON1_CPSBCH1_POSN                              0x1
#define _CPSBCON1_CPSBCH1_POSITION                          0x1
#define _CPSBCON1_CPSBCH1_SIZE                              0x1
#define _CPSBCON1_CPSBCH1_LENGTH                            0x1
#define _CPSBCON1_CPSBCH1_MASK                              0x2
#define _CPSBCON1_CPSBCH2_POSN                              0x2
#define _CPSBCON1_CPSBCH2_POSITION                          0x2
#define _CPSBCON1_CPSBCH2_SIZE                              0x1
#define _CPSBCON1_CPSBCH2_LENGTH                            0x1
#define _CPSBCON1_CPSBCH2_MASK                              0x4
#define _CPSBCON1_CPSBCH3_POSN                              0x3
#define _CPSBCON1_CPSBCH3_POSITION                          0x3
#define _CPSBCON1_CPSBCH3_SIZE                              0x1
#define _CPSBCON1_CPSBCH3_LENGTH                            0x1
#define _CPSBCON1_CPSBCH3_MASK                              0x8

// Register: CPSACON0
#define CPSACON0 CPSACON0
extern volatile unsigned char           CPSACON0            __at(0x108);
#ifndef _LIB_BUILD
asm("CPSACON0 equ 0108h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TAXCS                  :1;
        unsigned CPSAOUT                :1;
        unsigned CPSARNG                :2;
        unsigned                        :2;
        unsigned CPSARM                 :1;
        unsigned CPSAON                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned CPSARNG0               :1;
        unsigned CPSARNG1               :1;
    };
} CPSACON0bits_t;
extern volatile CPSACON0bits_t CPSACON0bits __at(0x108);
// bitfield macros
#define _CPSACON0_TAXCS_POSN                                0x0
#define _CPSACON0_TAXCS_POSITION                            0x0
#define _CPSACON0_TAXCS_SIZE                                0x1
#define _CPSACON0_TAXCS_LENGTH                              0x1
#define _CPSACON0_TAXCS_MASK                                0x1
#define _CPSACON0_CPSAOUT_POSN                              0x1
#define _CPSACON0_CPSAOUT_POSITION                          0x1
#define _CPSACON0_CPSAOUT_SIZE                              0x1
#define _CPSACON0_CPSAOUT_LENGTH                            0x1
#define _CPSACON0_CPSAOUT_MASK                              0x2
#define _CPSACON0_CPSARNG_POSN                              0x2
#define _CPSACON0_CPSARNG_POSITION                          0x2
#define _CPSACON0_CPSARNG_SIZE                              0x2
#define _CPSACON0_CPSARNG_LENGTH                            0x2
#define _CPSACON0_CPSARNG_MASK                              0xC
#define _CPSACON0_CPSARM_POSN                               0x6
#define _CPSACON0_CPSARM_POSITION                           0x6
#define _CPSACON0_CPSARM_SIZE                               0x1
#define _CPSACON0_CPSARM_LENGTH                             0x1
#define _CPSACON0_CPSARM_MASK                               0x40
#define _CPSACON0_CPSAON_POSN                               0x7
#define _CPSACON0_CPSAON_POSITION                           0x7
#define _CPSACON0_CPSAON_SIZE                               0x1
#define _CPSACON0_CPSAON_LENGTH                             0x1
#define _CPSACON0_CPSAON_MASK                               0x80
#define _CPSACON0_CPSARNG0_POSN                             0x2
#define _CPSACON0_CPSARNG0_POSITION                         0x2
#define _CPSACON0_CPSARNG0_SIZE                             0x1
#define _CPSACON0_CPSARNG0_LENGTH                           0x1
#define _CPSACON0_CPSARNG0_MASK                             0x4
#define _CPSACON0_CPSARNG1_POSN                             0x3
#define _CPSACON0_CPSARNG1_POSITION                         0x3
#define _CPSACON0_CPSARNG1_SIZE                             0x1
#define _CPSACON0_CPSARNG1_LENGTH                           0x1
#define _CPSACON0_CPSARNG1_MASK                             0x8

// Register: CPSACON1
#define CPSACON1 CPSACON1
extern volatile unsigned char           CPSACON1            __at(0x109);
#ifndef _LIB_BUILD
asm("CPSACON1 equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CPSACH                 :4;
    };
    struct {
        unsigned CPSACH0                :1;
        unsigned CPSACH1                :1;
        unsigned CPSACH2                :1;
        unsigned CPSACH3                :1;
    };
} CPSACON1bits_t;
extern volatile CPSACON1bits_t CPSACON1bits __at(0x109);
// bitfield macros
#define _CPSACON1_CPSACH_POSN                               0x0
#define _CPSACON1_CPSACH_POSITION                           0x0
#define _CPSACON1_CPSACH_SIZE                               0x4
#define _CPSACON1_CPSACH_LENGTH                             0x4
#define _CPSACON1_CPSACH_MASK                               0xF
#define _CPSACON1_CPSACH0_POSN                              0x0
#define _CPSACON1_CPSACH0_POSITION                          0x0
#define _CPSACON1_CPSACH0_SIZE                              0x1
#define _CPSACON1_CPSACH0_LENGTH                            0x1
#define _CPSACON1_CPSACH0_MASK                              0x1
#define _CPSACON1_CPSACH1_POSN                              0x1
#define _CPSACON1_CPSACH1_POSITION                          0x1
#define _CPSACON1_CPSACH1_SIZE                              0x1
#define _CPSACON1_CPSACH1_LENGTH                            0x1
#define _CPSACON1_CPSACH1_MASK                              0x2
#define _CPSACON1_CPSACH2_POSN                              0x2
#define _CPSACON1_CPSACH2_POSITION                          0x2
#define _CPSACON1_CPSACH2_SIZE                              0x1
#define _CPSACON1_CPSACH2_LENGTH                            0x1
#define _CPSACON1_CPSACH2_MASK                              0x4
#define _CPSACON1_CPSACH3_POSN                              0x3
#define _CPSACON1_CPSACH3_POSITION                          0x3
#define _CPSACON1_CPSACH3_SIZE                              0x1
#define _CPSACON1_CPSACH3_LENGTH                            0x1
#define _CPSACON1_CPSACH3_MASK                              0x8

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x10C);
#ifndef _LIB_BUILD
asm("PMDATL equ 010Ch");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x10D);
#ifndef _LIB_BUILD
asm("PMADRL equ 010Dh");
#endif

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x10E);
#ifndef _LIB_BUILD
asm("PMDATH equ 010Eh");
#endif

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x10F);
#ifndef _LIB_BUILD
asm("PMADRH equ 010Fh");
#endif

// Register: TMRA
#define TMRA TMRA
extern volatile unsigned char           TMRA                __at(0x110);
#ifndef _LIB_BUILD
asm("TMRA equ 0110h");
#endif

// Register: TBCON
#define TBCON TBCON
extern volatile unsigned char           TBCON               __at(0x111);
#ifndef _LIB_BUILD
asm("TBCON equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TBPS                   :3;
        unsigned TBPSA                  :1;
        unsigned TBSE                   :1;
        unsigned TBCS                   :1;
        unsigned                        :1;
        unsigned TMRBON                 :1;
    };
    struct {
        unsigned TBPS0                  :1;
        unsigned TBPS1                  :1;
        unsigned TBPS2                  :1;
    };
    struct {
        unsigned TMRBPS                 :3;
        unsigned TMRBPSA                :1;
        unsigned TMRBSE                 :1;
        unsigned TMRBCS                 :1;
    };
    struct {
        unsigned TMRBPS0                :1;
        unsigned TMRBPS1                :1;
        unsigned TMRBPS2                :1;
    };
} TBCONbits_t;
extern volatile TBCONbits_t TBCONbits __at(0x111);
// bitfield macros
#define _TBCON_TBPS_POSN                                    0x0
#define _TBCON_TBPS_POSITION                                0x0
#define _TBCON_TBPS_SIZE                                    0x3
#define _TBCON_TBPS_LENGTH                                  0x3
#define _TBCON_TBPS_MASK                                    0x7
#define _TBCON_TBPSA_POSN                                   0x3
#define _TBCON_TBPSA_POSITION                               0x3
#define _TBCON_TBPSA_SIZE                                   0x1
#define _TBCON_TBPSA_LENGTH                                 0x1
#define _TBCON_TBPSA_MASK                                   0x8
#define _TBCON_TBSE_POSN                                    0x4
#define _TBCON_TBSE_POSITION                                0x4
#define _TBCON_TBSE_SIZE                                    0x1
#define _TBCON_TBSE_LENGTH                                  0x1
#define _TBCON_TBSE_MASK                                    0x10
#define _TBCON_TBCS_POSN                                    0x5
#define _TBCON_TBCS_POSITION                                0x5
#define _TBCON_TBCS_SIZE                                    0x1
#define _TBCON_TBCS_LENGTH                                  0x1
#define _TBCON_TBCS_MASK                                    0x20
#define _TBCON_TMRBON_POSN                                  0x7
#define _TBCON_TMRBON_POSITION                              0x7
#define _TBCON_TMRBON_SIZE                                  0x1
#define _TBCON_TMRBON_LENGTH                                0x1
#define _TBCON_TMRBON_MASK                                  0x80
#define _TBCON_TBPS0_POSN                                   0x0
#define _TBCON_TBPS0_POSITION                               0x0
#define _TBCON_TBPS0_SIZE                                   0x1
#define _TBCON_TBPS0_LENGTH                                 0x1
#define _TBCON_TBPS0_MASK                                   0x1
#define _TBCON_TBPS1_POSN                                   0x1
#define _TBCON_TBPS1_POSITION                               0x1
#define _TBCON_TBPS1_SIZE                                   0x1
#define _TBCON_TBPS1_LENGTH                                 0x1
#define _TBCON_TBPS1_MASK                                   0x2
#define _TBCON_TBPS2_POSN                                   0x2
#define _TBCON_TBPS2_POSITION                               0x2
#define _TBCON_TBPS2_SIZE                                   0x1
#define _TBCON_TBPS2_LENGTH                                 0x1
#define _TBCON_TBPS2_MASK                                   0x4
#define _TBCON_TMRBPS_POSN                                  0x0
#define _TBCON_TMRBPS_POSITION                              0x0
#define _TBCON_TMRBPS_SIZE                                  0x3
#define _TBCON_TMRBPS_LENGTH                                0x3
#define _TBCON_TMRBPS_MASK                                  0x7
#define _TBCON_TMRBPSA_POSN                                 0x3
#define _TBCON_TMRBPSA_POSITION                             0x3
#define _TBCON_TMRBPSA_SIZE                                 0x1
#define _TBCON_TMRBPSA_LENGTH                               0x1
#define _TBCON_TMRBPSA_MASK                                 0x8
#define _TBCON_TMRBSE_POSN                                  0x4
#define _TBCON_TMRBSE_POSITION                              0x4
#define _TBCON_TMRBSE_SIZE                                  0x1
#define _TBCON_TMRBSE_LENGTH                                0x1
#define _TBCON_TMRBSE_MASK                                  0x10
#define _TBCON_TMRBCS_POSN                                  0x5
#define _TBCON_TMRBCS_POSITION                              0x5
#define _TBCON_TMRBCS_SIZE                                  0x1
#define _TBCON_TMRBCS_LENGTH                                0x1
#define _TBCON_TMRBCS_MASK                                  0x20
#define _TBCON_TMRBPS0_POSN                                 0x0
#define _TBCON_TMRBPS0_POSITION                             0x0
#define _TBCON_TMRBPS0_SIZE                                 0x1
#define _TBCON_TMRBPS0_LENGTH                               0x1
#define _TBCON_TMRBPS0_MASK                                 0x1
#define _TBCON_TMRBPS1_POSN                                 0x1
#define _TBCON_TMRBPS1_POSITION                             0x1
#define _TBCON_TMRBPS1_SIZE                                 0x1
#define _TBCON_TMRBPS1_LENGTH                               0x1
#define _TBCON_TMRBPS1_MASK                                 0x2
#define _TBCON_TMRBPS2_POSN                                 0x2
#define _TBCON_TMRBPS2_POSITION                             0x2
#define _TBCON_TMRBPS2_SIZE                                 0x1
#define _TBCON_TMRBPS2_LENGTH                               0x1
#define _TBCON_TMRBPS2_MASK                                 0x4

// Register: TMRB
#define TMRB TMRB
extern volatile unsigned char           TMRB                __at(0x112);
#ifndef _LIB_BUILD
asm("TMRB equ 0112h");
#endif

// Register: DACCON0
#define DACCON0 DACCON0
extern volatile unsigned char           DACCON0             __at(0x113);
#ifndef _LIB_BUILD
asm("DACCON0 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
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
extern volatile DACCON0bits_t DACCON0bits __at(0x113);
// bitfield macros
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
extern volatile unsigned char           DACCON1             __at(0x114);
#ifndef _LIB_BUILD
asm("DACCON1 equ 0114h");
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
extern volatile DACCON1bits_t DACCON1bits __at(0x114);
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

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x185);
#ifndef _LIB_BUILD
asm("ANSELA equ 0185h");
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
        unsigned ANSA                   :8;
    };
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x185);
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
#define _ANSELA_ANSA_POSN                                   0x0
#define _ANSELA_ANSA_POSITION                               0x0
#define _ANSELA_ANSA_SIZE                                   0x8
#define _ANSELA_ANSA_LENGTH                                 0x8
#define _ANSELA_ANSA_MASK                                   0xFF

// Register: ANSELB
#define ANSELB ANSELB
extern volatile unsigned char           ANSELB              __at(0x186);
#ifndef _LIB_BUILD
asm("ANSELB equ 0186h");
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
        unsigned ANSB                   :8;
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0x186);
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
#define _ANSELB_ANSB_POSN                                   0x0
#define _ANSELB_ANSB_POSITION                               0x0
#define _ANSELB_ANSB_SIZE                                   0x8
#define _ANSELB_ANSB_LENGTH                                 0x8
#define _ANSELB_ANSB_MASK                                   0xFF

// Register: ANSELC
#define ANSELC ANSELC
extern volatile unsigned char           ANSELC              __at(0x187);
#ifndef _LIB_BUILD
asm("ANSELC equ 0187h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSC0                  :1;
        unsigned ANSC1                  :1;
        unsigned ANSC2                  :1;
        unsigned                        :2;
        unsigned ANSC5                  :1;
        unsigned ANSC6                  :1;
        unsigned ANSC7                  :1;
    };
    struct {
        unsigned ANSC                   :8;
    };
} ANSELCbits_t;
extern volatile ANSELCbits_t ANSELCbits __at(0x187);
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
#define _ANSELC_ANSC_POSN                                   0x0
#define _ANSELC_ANSC_POSITION                               0x0
#define _ANSELC_ANSC_SIZE                                   0x8
#define _ANSELC_ANSC_LENGTH                                 0x8
#define _ANSELC_ANSC_MASK                                   0xFF

// Register: ANSELD
#define ANSELD ANSELD
extern volatile unsigned char           ANSELD              __at(0x188);
#ifndef _LIB_BUILD
asm("ANSELD equ 0188h");
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
        unsigned ANSD                   :8;
    };
} ANSELDbits_t;
extern volatile ANSELDbits_t ANSELDbits __at(0x188);
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
#define _ANSELD_ANSD_POSN                                   0x0
#define _ANSELD_ANSD_POSITION                               0x0
#define _ANSELD_ANSD_SIZE                                   0x8
#define _ANSELD_ANSD_LENGTH                                 0x8
#define _ANSELD_ANSD_MASK                                   0xFF

// Register: ANSELE
#define ANSELE ANSELE
extern volatile unsigned char           ANSELE              __at(0x189);
#ifndef _LIB_BUILD
asm("ANSELE equ 0189h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSE0                  :1;
        unsigned ANSE1                  :1;
        unsigned ANSE2                  :1;
    };
    struct {
        unsigned ANSE                   :8;
    };
} ANSELEbits_t;
extern volatile ANSELEbits_t ANSELEbits __at(0x189);
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
#define _ANSELE_ANSE_POSN                                   0x0
#define _ANSELE_ANSE_POSITION                               0x0
#define _ANSELE_ANSE_SIZE                                   0x8
#define _ANSELE_ANSE_LENGTH                                 0x8
#define _ANSELE_ANSE_MASK                                   0xFF

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x18C);
#ifndef _LIB_BUILD
asm("PMCON1 equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x18C);
// bitfield macros
#define _PMCON1_RD_POSN                                     0x0
#define _PMCON1_RD_POSITION                                 0x0
#define _PMCON1_RD_SIZE                                     0x1
#define _PMCON1_RD_LENGTH                                   0x1
#define _PMCON1_RD_MASK                                     0x1

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
extern volatile __bit                   ADCS0               __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4FE);	// @ (0x9F * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
// FVRCON<ADFVR0>
extern volatile __bit                   ADFVR0              __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 ADFVR0_bit          _BIT_ACCESS(FVRCON,0)
// FVRCON<ADFVR1>
extern volatile __bit                   ADFVR1              __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 ADFVR1_bit          _BIT_ACCESS(FVRCON,1)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON1<ADREF0>
extern volatile __bit                   ADREF0              __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 ADREF0_bit          _BIT_ACCESS(ADCON1,0)
// ADCON1<ADREF1>
extern volatile __bit                   ADREF1              __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 ADREF1_bit          _BIT_ACCESS(ADCON1,1)
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTB<AN10>
extern volatile __bit                   AN10                __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 AN10_bit            _BIT_ACCESS(PORTB,1)
// PORTB<AN11>
extern volatile __bit                   AN11                __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 AN11_bit            _BIT_ACCESS(PORTB,4)
// PORTB<AN12>
extern volatile __bit                   AN12                __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 AN12_bit            _BIT_ACCESS(PORTB,0)
// PORTB<AN13>
extern volatile __bit                   AN13                __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 AN13_bit            _BIT_ACCESS(PORTB,5)
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,5)
// PORTE<AN5>
extern volatile __bit                   AN5                 __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 AN5_bit             _BIT_ACCESS(PORTE,0)
// PORTE<AN6>
extern volatile __bit                   AN6                 __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 AN6_bit             _BIT_ACCESS(PORTE,1)
// PORTE<AN7>
extern volatile __bit                   AN7                 __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 AN7_bit             _BIT_ACCESS(PORTE,2)
// PORTB<AN8>
extern volatile __bit                   AN8                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 AN8_bit             _BIT_ACCESS(PORTB,2)
// PORTB<AN9>
extern volatile __bit                   AN9                 __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 AN9_bit             _BIT_ACCESS(PORTB,3)
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0xC28);	// @ (0x185 * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0xC29);	// @ (0x185 * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0xC2A);	// @ (0x185 * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA3>
extern volatile __bit                   ANSA3               __at(0xC2B);	// @ (0x185 * 8 + 3)
#define                                 ANSA3_bit           _BIT_ACCESS(ANSELA,3)
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC2C);	// @ (0x185 * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELA<ANSA5>
extern volatile __bit                   ANSA5               __at(0xC2D);	// @ (0x185 * 8 + 5)
#define                                 ANSA5_bit           _BIT_ACCESS(ANSELA,5)
// ANSELA<ANSA6>
extern volatile __bit                   ANSA6               __at(0xC2E);	// @ (0x185 * 8 + 6)
#define                                 ANSA6_bit           _BIT_ACCESS(ANSELA,6)
// ANSELA<ANSA7>
extern volatile __bit                   ANSA7               __at(0xC2F);	// @ (0x185 * 8 + 7)
#define                                 ANSA7_bit           _BIT_ACCESS(ANSELA,7)
// ANSELB<ANSB0>
extern volatile __bit                   ANSB0               __at(0xC30);	// @ (0x186 * 8 + 0)
#define                                 ANSB0_bit           _BIT_ACCESS(ANSELB,0)
// ANSELB<ANSB1>
extern volatile __bit                   ANSB1               __at(0xC31);	// @ (0x186 * 8 + 1)
#define                                 ANSB1_bit           _BIT_ACCESS(ANSELB,1)
// ANSELB<ANSB2>
extern volatile __bit                   ANSB2               __at(0xC32);	// @ (0x186 * 8 + 2)
#define                                 ANSB2_bit           _BIT_ACCESS(ANSELB,2)
// ANSELB<ANSB3>
extern volatile __bit                   ANSB3               __at(0xC33);	// @ (0x186 * 8 + 3)
#define                                 ANSB3_bit           _BIT_ACCESS(ANSELB,3)
// ANSELB<ANSB4>
extern volatile __bit                   ANSB4               __at(0xC34);	// @ (0x186 * 8 + 4)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSELB,4)
// ANSELB<ANSB5>
extern volatile __bit                   ANSB5               __at(0xC35);	// @ (0x186 * 8 + 5)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSELB,5)
// ANSELB<ANSB6>
extern volatile __bit                   ANSB6               __at(0xC36);	// @ (0x186 * 8 + 6)
#define                                 ANSB6_bit           _BIT_ACCESS(ANSELB,6)
// ANSELB<ANSB7>
extern volatile __bit                   ANSB7               __at(0xC37);	// @ (0x186 * 8 + 7)
#define                                 ANSB7_bit           _BIT_ACCESS(ANSELB,7)
// ANSELC<ANSC0>
extern volatile __bit                   ANSC0               __at(0xC38);	// @ (0x187 * 8 + 0)
#define                                 ANSC0_bit           _BIT_ACCESS(ANSELC,0)
// ANSELC<ANSC1>
extern volatile __bit                   ANSC1               __at(0xC39);	// @ (0x187 * 8 + 1)
#define                                 ANSC1_bit           _BIT_ACCESS(ANSELC,1)
// ANSELC<ANSC2>
extern volatile __bit                   ANSC2               __at(0xC3A);	// @ (0x187 * 8 + 2)
#define                                 ANSC2_bit           _BIT_ACCESS(ANSELC,2)
// ANSELC<ANSC5>
extern volatile __bit                   ANSC5               __at(0xC3D);	// @ (0x187 * 8 + 5)
#define                                 ANSC5_bit           _BIT_ACCESS(ANSELC,5)
// ANSELC<ANSC6>
extern volatile __bit                   ANSC6               __at(0xC3E);	// @ (0x187 * 8 + 6)
#define                                 ANSC6_bit           _BIT_ACCESS(ANSELC,6)
// ANSELC<ANSC7>
extern volatile __bit                   ANSC7               __at(0xC3F);	// @ (0x187 * 8 + 7)
#define                                 ANSC7_bit           _BIT_ACCESS(ANSELC,7)
// ANSELD<ANSD0>
extern volatile __bit                   ANSD0               __at(0xC40);	// @ (0x188 * 8 + 0)
#define                                 ANSD0_bit           _BIT_ACCESS(ANSELD,0)
// ANSELD<ANSD1>
extern volatile __bit                   ANSD1               __at(0xC41);	// @ (0x188 * 8 + 1)
#define                                 ANSD1_bit           _BIT_ACCESS(ANSELD,1)
// ANSELD<ANSD2>
extern volatile __bit                   ANSD2               __at(0xC42);	// @ (0x188 * 8 + 2)
#define                                 ANSD2_bit           _BIT_ACCESS(ANSELD,2)
// ANSELD<ANSD3>
extern volatile __bit                   ANSD3               __at(0xC43);	// @ (0x188 * 8 + 3)
#define                                 ANSD3_bit           _BIT_ACCESS(ANSELD,3)
// ANSELD<ANSD4>
extern volatile __bit                   ANSD4               __at(0xC44);	// @ (0x188 * 8 + 4)
#define                                 ANSD4_bit           _BIT_ACCESS(ANSELD,4)
// ANSELD<ANSD5>
extern volatile __bit                   ANSD5               __at(0xC45);	// @ (0x188 * 8 + 5)
#define                                 ANSD5_bit           _BIT_ACCESS(ANSELD,5)
// ANSELD<ANSD6>
extern volatile __bit                   ANSD6               __at(0xC46);	// @ (0x188 * 8 + 6)
#define                                 ANSD6_bit           _BIT_ACCESS(ANSELD,6)
// ANSELD<ANSD7>
extern volatile __bit                   ANSD7               __at(0xC47);	// @ (0x188 * 8 + 7)
#define                                 ANSD7_bit           _BIT_ACCESS(ANSELD,7)
// ANSELE<ANSE0>
extern volatile __bit                   ANSE0               __at(0xC48);	// @ (0x189 * 8 + 0)
#define                                 ANSE0_bit           _BIT_ACCESS(ANSELE,0)
// ANSELE<ANSE1>
extern volatile __bit                   ANSE1               __at(0xC49);	// @ (0x189 * 8 + 1)
#define                                 ANSE1_bit           _BIT_ACCESS(ANSELE,1)
// ANSELE<ANSE2>
extern volatile __bit                   ANSE2               __at(0xC4A);	// @ (0x189 * 8 + 2)
#define                                 ANSE2_bit           _BIT_ACCESS(ANSELE,2)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
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
// APFCON<CCP2SEL>
extern volatile __bit                   CCP2SEL             __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 CCP2SEL_bit         _BIT_ACCESS(APFCON,0)
// FVRCON<CDAFVR0>
extern volatile __bit                   CDAFVR0             __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 CDAFVR0_bit         _BIT_ACCESS(FVRCON,2)
// FVRCON<CDAFVR1>
extern volatile __bit                   CDAFVR1             __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 CDAFVR1_bit         _BIT_ACCESS(FVRCON,3)
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
// PORTC<CK>
extern volatile __bit                   CK                  __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 CK_bit              _BIT_ACCESS(PORTC,6)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON<CKP>
extern volatile __bit                   CKP                 __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON,4)
// PORTA<CLKIN>
extern volatile __bit                   CLKIN               __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 CLKIN_bit           _BIT_ACCESS(PORTA,7)
// PORTA<CLKOUT>
extern volatile __bit                   CLKOUT              __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 CLKOUT_bit          _BIT_ACCESS(PORTA,6)
// PORTA<CPSA0>
extern volatile __bit                   CPSA0               __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 CPSA0_bit           _BIT_ACCESS(PORTA,1)
// PORTA<CPSA1>
extern volatile __bit                   CPSA1               __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 CPSA1_bit           _BIT_ACCESS(PORTA,2)
// PORTC<CPSA10>
extern volatile __bit                   CPSA10              __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 CPSA10_bit          _BIT_ACCESS(PORTC,6)
// PORTC<CPSA11>
extern volatile __bit                   CPSA11              __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 CPSA11_bit          _BIT_ACCESS(PORTC,7)
// PORTD<CPSA12>
extern volatile __bit                   CPSA12              __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 CPSA12_bit          _BIT_ACCESS(PORTD,4)
// PORTD<CPSA13>
extern volatile __bit                   CPSA13              __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 CPSA13_bit          _BIT_ACCESS(PORTD,5)
// PORTD<CPSA14>
extern volatile __bit                   CPSA14              __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 CPSA14_bit          _BIT_ACCESS(PORTD,6)
// PORTD<CPSA15>
extern volatile __bit                   CPSA15              __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 CPSA15_bit          _BIT_ACCESS(PORTD,7)
// PORTA<CPSA2>
extern volatile __bit                   CPSA2               __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 CPSA2_bit           _BIT_ACCESS(PORTA,3)
// PORTA<CPSA3>
extern volatile __bit                   CPSA3               __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 CPSA3_bit           _BIT_ACCESS(PORTA,4)
// PORTA<CPSA4>
extern volatile __bit                   CPSA4               __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 CPSA4_bit           _BIT_ACCESS(PORTA,5)
// PORTE<CPSA5>
extern volatile __bit                   CPSA5               __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 CPSA5_bit           _BIT_ACCESS(PORTE,0)
// PORTE<CPSA6>
extern volatile __bit                   CPSA6               __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 CPSA6_bit           _BIT_ACCESS(PORTE,1)
// PORTE<CPSA7>
extern volatile __bit                   CPSA7               __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 CPSA7_bit           _BIT_ACCESS(PORTE,2)
// PORTD<CPSA8>
extern volatile __bit                   CPSA8               __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 CPSA8_bit           _BIT_ACCESS(PORTD,3)
// PORTC<CPSA9>
extern volatile __bit                   CPSA9               __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 CPSA9_bit           _BIT_ACCESS(PORTC,5)
// CPSACON1<CPSACH0>
extern volatile __bit                   CPSACH0             __at(0x848);	// @ (0x109 * 8 + 0)
#define                                 CPSACH0_bit         _BIT_ACCESS(CPSACON1,0)
// CPSACON1<CPSACH1>
extern volatile __bit                   CPSACH1             __at(0x849);	// @ (0x109 * 8 + 1)
#define                                 CPSACH1_bit         _BIT_ACCESS(CPSACON1,1)
// CPSACON1<CPSACH2>
extern volatile __bit                   CPSACH2             __at(0x84A);	// @ (0x109 * 8 + 2)
#define                                 CPSACH2_bit         _BIT_ACCESS(CPSACON1,2)
// CPSACON1<CPSACH3>
extern volatile __bit                   CPSACH3             __at(0x84B);	// @ (0x109 * 8 + 3)
#define                                 CPSACH3_bit         _BIT_ACCESS(CPSACON1,3)
// CPSACON0<CPSAON>
extern volatile __bit                   CPSAON              __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 CPSAON_bit          _BIT_ACCESS(CPSACON0,7)
// CPSACON0<CPSAOUT>
extern volatile __bit                   CPSAOUT             __at(0x841);	// @ (0x108 * 8 + 1)
#define                                 CPSAOUT_bit         _BIT_ACCESS(CPSACON0,1)
// CPSACON0<CPSARM>
extern volatile __bit                   CPSARM              __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 CPSARM_bit          _BIT_ACCESS(CPSACON0,6)
// CPSACON0<CPSARNG0>
extern volatile __bit                   CPSARNG0            __at(0x842);	// @ (0x108 * 8 + 2)
#define                                 CPSARNG0_bit        _BIT_ACCESS(CPSACON0,2)
// CPSACON0<CPSARNG1>
extern volatile __bit                   CPSARNG1            __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 CPSARNG1_bit        _BIT_ACCESS(CPSACON0,3)
// PORTA<CPSB0>
extern volatile __bit                   CPSB0               __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 CPSB0_bit           _BIT_ACCESS(PORTA,7)
// PORTA<CPSB1>
extern volatile __bit                   CPSB1               __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 CPSB1_bit           _BIT_ACCESS(PORTA,6)
// PORTB<CPSB10>
extern volatile __bit                   CPSB10              __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 CPSB10_bit          _BIT_ACCESS(PORTB,2)
// PORTB<CPSB11>
extern volatile __bit                   CPSB11              __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 CPSB11_bit          _BIT_ACCESS(PORTB,3)
// PORTB<CPSB12>
extern volatile __bit                   CPSB12              __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 CPSB12_bit          _BIT_ACCESS(PORTB,4)
// PORTB<CPSB13>
extern volatile __bit                   CPSB13              __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 CPSB13_bit          _BIT_ACCESS(PORTB,5)
// PORTB<CPSB14>
extern volatile __bit                   CPSB14              __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 CPSB14_bit          _BIT_ACCESS(PORTB,6)
// PORTB<CPSB15>
extern volatile __bit                   CPSB15              __at(0x37);	// @ (0x6 * 8 + 7)
#define                                 CPSB15_bit          _BIT_ACCESS(PORTB,7)
// PORTC<CPSB2>
extern volatile __bit                   CPSB2               __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 CPSB2_bit           _BIT_ACCESS(PORTC,0)
// PORTC<CPSB3>
extern volatile __bit                   CPSB3               __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 CPSB3_bit           _BIT_ACCESS(PORTC,1)
// PORTC<CPSB4>
extern volatile __bit                   CPSB4               __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 CPSB4_bit           _BIT_ACCESS(PORTC,2)
// PORTD<CPSB5>
extern volatile __bit                   CPSB5               __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 CPSB5_bit           _BIT_ACCESS(PORTD,0)
// PORTD<CPSB6>
extern volatile __bit                   CPSB6               __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 CPSB6_bit           _BIT_ACCESS(PORTD,1)
// PORTD<CPSB7>
extern volatile __bit                   CPSB7               __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 CPSB7_bit           _BIT_ACCESS(PORTD,2)
// PORTB<CPSB8>
extern volatile __bit                   CPSB8               __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 CPSB8_bit           _BIT_ACCESS(PORTB,0)
// PORTB<CPSB9>
extern volatile __bit                   CPSB9               __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 CPSB9_bit           _BIT_ACCESS(PORTB,1)
// CPSBCON1<CPSBCH0>
extern volatile __bit                   CPSBCH0             __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 CPSBCH0_bit         _BIT_ACCESS(CPSBCON1,0)
// CPSBCON1<CPSBCH1>
extern volatile __bit                   CPSBCH1             __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 CPSBCH1_bit         _BIT_ACCESS(CPSBCON1,1)
// CPSBCON1<CPSBCH2>
extern volatile __bit                   CPSBCH2             __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 CPSBCH2_bit         _BIT_ACCESS(CPSBCON1,2)
// CPSBCON1<CPSBCH3>
extern volatile __bit                   CPSBCH3             __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 CPSBCH3_bit         _BIT_ACCESS(CPSBCON1,3)
// CPSBCON0<CPSBON>
extern volatile __bit                   CPSBON              __at(0x837);	// @ (0x106 * 8 + 7)
#define                                 CPSBON_bit          _BIT_ACCESS(CPSBCON0,7)
// CPSBCON0<CPSBOUT>
extern volatile __bit                   CPSBOUT             __at(0x831);	// @ (0x106 * 8 + 1)
#define                                 CPSBOUT_bit         _BIT_ACCESS(CPSBCON0,1)
// CPSBCON0<CPSBRM>
extern volatile __bit                   CPSBRM              __at(0x836);	// @ (0x106 * 8 + 6)
#define                                 CPSBRM_bit          _BIT_ACCESS(CPSBCON0,6)
// CPSBCON0<CPSBRNG0>
extern volatile __bit                   CPSBRNG0            __at(0x832);	// @ (0x106 * 8 + 2)
#define                                 CPSBRNG0_bit        _BIT_ACCESS(CPSBCON0,2)
// CPSBCON0<CPSBRNG1>
extern volatile __bit                   CPSBRNG1            __at(0x833);	// @ (0x106 * 8 + 3)
#define                                 CPSBRNG1_bit        _BIT_ACCESS(CPSBCON0,3)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x4C7);	// @ (0x98 * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// DACCON0<DACEN>
extern volatile __bit                   DACEN               __at(0x89F);	// @ (0x113 * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(DACCON0,7)
// DACCON0<DACLPS>
extern volatile __bit                   DACLPS              __at(0x89E);	// @ (0x113 * 8 + 6)
#define                                 DACLPS_bit          _BIT_ACCESS(DACCON0,6)
// DACCON0<DACOE>
extern volatile __bit                   DACOE               __at(0x89D);	// @ (0x113 * 8 + 5)
#define                                 DACOE_bit           _BIT_ACCESS(DACCON0,5)
// PORTA<DACOUT>
extern volatile __bit                   DACOUT              __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 DACOUT_bit          _BIT_ACCESS(PORTA,2)
// DACCON0<DACPSS0>
extern volatile __bit                   DACPSS0             __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 DACPSS0_bit         _BIT_ACCESS(DACCON0,2)
// DACCON0<DACPSS1>
extern volatile __bit                   DACPSS1             __at(0x89B);	// @ (0x113 * 8 + 3)
#define                                 DACPSS1_bit         _BIT_ACCESS(DACCON0,3)
// DACCON1<DACR0>
extern volatile __bit                   DACR0               __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 DACR0_bit           _BIT_ACCESS(DACCON1,0)
// DACCON1<DACR1>
extern volatile __bit                   DACR1               __at(0x8A1);	// @ (0x114 * 8 + 1)
#define                                 DACR1_bit           _BIT_ACCESS(DACCON1,1)
// DACCON1<DACR2>
extern volatile __bit                   DACR2               __at(0x8A2);	// @ (0x114 * 8 + 2)
#define                                 DACR2_bit           _BIT_ACCESS(DACCON1,2)
// DACCON1<DACR3>
extern volatile __bit                   DACR3               __at(0x8A3);	// @ (0x114 * 8 + 3)
#define                                 DACR3_bit           _BIT_ACCESS(DACCON1,3)
// DACCON1<DACR4>
extern volatile __bit                   DACR4               __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 DACR4_bit           _BIT_ACCESS(DACCON1,4)
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
// PORTC<DT>
extern volatile __bit                   DT                  __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 DT_bit              _BIT_ACCESS(PORTC,7)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x4EE);	// @ (0x9D * 8 + 6)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,6)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// OSCCON<ICSL>
extern volatile __bit                   ICSL                __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 ICSL_bit            _BIT_ACCESS(OSCCON,3)
// OSCCON<ICSS>
extern volatile __bit                   ICSS                __at(0x482);	// @ (0x90 * 8 + 2)
#define                                 ICSS_bit            _BIT_ACCESS(OSCCON,2)
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
extern volatile __bit                   IRCF0               __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x485);	// @ (0x90 * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// PORTA<OSC1>
extern volatile __bit                   OSC1                __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 OSC1_bit            _BIT_ACCESS(PORTA,7)
// PORTA<OSC2>
extern volatile __bit                   OSC2                __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 OSC2_bit            _BIT_ACCESS(PORTA,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// OPTION_REG<PS0>
extern volatile __bit                   _PS0                 __at(0x408);	// @ (0x81 * 8 + 0)  // Note: Changed by MikroE
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   _PS1                 __at(0x409);	// @ (0x81 * 8 + 1)  // Note: Changed by MikroE
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   _PS2                 __at(0x40A);	// @ (0x81 * 8 + 2)  // Note: Changed by MikroE
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x40B);	// @ (0x81 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
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
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
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
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// PORTC<RX>
extern volatile __bit                   RX                  __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 RX_bit              _BIT_ACCESS(PORTC,7)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// PORTC<SCK>
extern volatile __bit                   SCK                 __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 SCK_bit             _BIT_ACCESS(PORTC,3)
// PORTC<SCL>
extern volatile __bit                   SCL                 __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 SCL_bit             _BIT_ACCESS(PORTC,3)
// PORTC<SDA>
extern volatile __bit                   SDA                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 SDA_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDI>
extern volatile __bit                   SDI                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 SDI_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDO>
extern volatile __bit                   SDO                 __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 SDO_bit             _BIT_ACCESS(PORTC,5)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xC7);	// @ (0x18 * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
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
// APFCON<SSSEL>
extern volatile __bit                   SSSEL               __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 SSSEL_bit           _BIT_ACCESS(APFCON,1)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0x4C4);	// @ (0x98 * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA,4)
// PORTA<T0CKI>
extern volatile __bit                   T0CKI               __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 T0CKI_bit           _BIT_ACCESS(PORTA,4)
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
// PORTC<T1CKI>
extern volatile __bit                   T1CKI               __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 T1CKI_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// PORTB<T1G>
extern volatile __bit                   T1G                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 T1G_bit             _BIT_ACCESS(PORTB,5)
// T1GCON<T1GGO_nDONE>
extern volatile __bit                   T1GGO_nDONE         __at(0x47B);	// @ (0x8F * 8 + 3)
#define                                 T1GGO_nDONE_bit     _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x478);	// @ (0x8F * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x47A);	// @ (0x8F * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// PORTC<T1OSI>
extern volatile __bit                   T1OSI               __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 T1OSI_bit           _BIT_ACCESS(PORTC,1)
// PORTC<T1OSO>
extern volatile __bit                   T1OSO               __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 T1OSO_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 T1SYNC_bit          _BIT_ACCESS(T1CON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// PORTB<T3CKI>
extern volatile __bit                   T3CKI               __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 T3CKI_bit           _BIT_ACCESS(PORTB,5)
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x4BC);	// @ (0x97 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x4BD);	// @ (0x97 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// PORTD<T3G>
extern volatile __bit                   T3G                 __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 T3G_bit             _BIT_ACCESS(PORTD,0)
// T3GCON<T3GGO_nDONE>
extern volatile __bit                   T3GGO_nDONE         __at(0x4F3);	// @ (0x9E * 8 + 3)
#define                                 T3GGO_nDONE_bit     _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GPOL>
extern volatile __bit                   T3GPOL              __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 T3GPOL_bit          _BIT_ACCESS(T3GCON,6)
// T3GCON<T3GSPM>
extern volatile __bit                   T3GSPM              __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 T3GSPM_bit          _BIT_ACCESS(T3GCON,4)
// T3GCON<T3GSS0>
extern volatile __bit                   T3GSS0              __at(0x4F0);	// @ (0x9E * 8 + 0)
#define                                 T3GSS0_bit          _BIT_ACCESS(T3GCON,0)
// T3GCON<T3GSS1>
extern volatile __bit                   T3GSS1              __at(0x4F1);	// @ (0x9E * 8 + 1)
#define                                 T3GSS1_bit          _BIT_ACCESS(T3GCON,1)
// T3GCON<T3GTM>
extern volatile __bit                   T3GTM               __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 T3GTM_bit           _BIT_ACCESS(T3GCON,5)
// T3GCON<T3GVAL>
extern volatile __bit                   T3GVAL              __at(0x4F2);	// @ (0x9E * 8 + 2)
#define                                 T3GVAL_bit          _BIT_ACCESS(T3GCON,2)
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x4BA);	// @ (0x97 * 8 + 2)
#define                                 T3SYNC_bit          _BIT_ACCESS(T3CON,2)
// PORTA<TACKI>
extern volatile __bit                   TACKI               __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 TACKI_bit           _BIT_ACCESS(PORTA,4)
// TACON<TACS>
extern volatile __bit                   TACS                __at(0x82D);	// @ (0x105 * 8 + 5)
#define                                 TACS_bit            _BIT_ACCESS(TACON,5)
// TACON<TAPS0>
extern volatile __bit                   TAPS0               __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 TAPS0_bit           _BIT_ACCESS(TACON,0)
// TACON<TAPS1>
extern volatile __bit                   TAPS1               __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 TAPS1_bit           _BIT_ACCESS(TACON,1)
// TACON<TAPS2>
extern volatile __bit                   TAPS2               __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 TAPS2_bit           _BIT_ACCESS(TACON,2)
// TACON<TAPSA>
extern volatile __bit                   TAPSA               __at(0x82B);	// @ (0x105 * 8 + 3)
#define                                 TAPSA_bit           _BIT_ACCESS(TACON,3)
// TACON<TASE>
extern volatile __bit                   TASE                __at(0x82C);	// @ (0x105 * 8 + 4)
#define                                 TASE_bit            _BIT_ACCESS(TACON,4)
// CPSACON0<TAXCS>
extern volatile __bit                   TAXCS               __at(0x840);	// @ (0x108 * 8 + 0)
#define                                 TAXCS_bit           _BIT_ACCESS(CPSACON0,0)
// PORTC<TBCKI>
extern volatile __bit                   TBCKI               __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 TBCKI_bit           _BIT_ACCESS(PORTC,2)
// TBCON<TBCS>
extern volatile __bit                   TBCS                __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 TBCS_bit            _BIT_ACCESS(TBCON,5)
// TBCON<TBPS0>
extern volatile __bit                   TBPS0               __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 TBPS0_bit           _BIT_ACCESS(TBCON,0)
// TBCON<TBPS1>
extern volatile __bit                   TBPS1               __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 TBPS1_bit           _BIT_ACCESS(TBCON,1)
// TBCON<TBPS2>
extern volatile __bit                   TBPS2               __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 TBPS2_bit           _BIT_ACCESS(TBCON,2)
// TBCON<TBPSA>
extern volatile __bit                   TBPSA               __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 TBPSA_bit           _BIT_ACCESS(TBCON,3)
// TBCON<TBSE>
extern volatile __bit                   TBSE                __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 TBSE_bit            _BIT_ACCESS(TBCON,4)
// CPSBCON0<TBXCS>
extern volatile __bit                   TBXCS               __at(0x830);	// @ (0x106 * 8 + 0)
#define                                 TBXCS_bit           _BIT_ACCESS(CPSBCON0,0)
// OPTION_REG<TMR0CS>
extern volatile __bit                   TMR0CS              __at(0x40D);	// @ (0x81 * 8 + 5)
#define                                 TMR0CS_bit          _BIT_ACCESS(OPTION_REG,5)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// OPTION_REG<TMR0SE>
extern volatile __bit                   TMR0SE              __at(0x40C);	// @ (0x81 * 8 + 4)
#define                                 TMR0SE_bit          _BIT_ACCESS(OPTION_REG,4)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x47F);	// @ (0x8F * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE1<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE1,7)
// PIR1<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x67);	// @ (0xC * 8 + 7)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR1,7)
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
// T3CON<TMR3CS0>
extern volatile __bit                   TMR3CS0             __at(0x4BE);	// @ (0x97 * 8 + 6)
#define                                 TMR3CS0_bit         _BIT_ACCESS(T3CON,6)
// T3CON<TMR3CS1>
extern volatile __bit                   TMR3CS1             __at(0x4BF);	// @ (0x97 * 8 + 7)
#define                                 TMR3CS1_bit         _BIT_ACCESS(T3CON,7)
// T3GCON<TMR3GE>
extern volatile __bit                   TMR3GE              __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 TMR3GE_bit          _BIT_ACCESS(T3GCON,7)
// PIE2<TMR3GIE>
extern volatile __bit                   TMR3GIE             __at(0x46F);	// @ (0x8D * 8 + 7)
#define                                 TMR3GIE_bit         _BIT_ACCESS(PIE2,7)
// PIR2<TMR3GIF>
extern volatile __bit                   TMR3GIF             __at(0x6F);	// @ (0xD * 8 + 7)
#define                                 TMR3GIF_bit         _BIT_ACCESS(PIR2,7)
// PIE2<TMR3IE>
extern volatile __bit                   TMR3IE              __at(0x46E);	// @ (0x8D * 8 + 6)
#define                                 TMR3IE_bit          _BIT_ACCESS(PIE2,6)
// PIR2<TMR3IF>
extern volatile __bit                   TMR3IF              __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 TMR3IF_bit          _BIT_ACCESS(PIR2,6)
// T3CON<TMR3ON>
extern volatile __bit                   TMR3ON              __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 TMR3ON_bit          _BIT_ACCESS(T3CON,0)
// TACON<TMRACS>
extern volatile __bit                   TMRACS              __at(0x82D);	// @ (0x105 * 8 + 5)
#define                                 TMRACS_bit          _BIT_ACCESS(TACON,5)
// PIE2<TMRAIE>
extern volatile __bit                   TMRAIE              __at(0x46C);	// @ (0x8D * 8 + 4)
#define                                 TMRAIE_bit          _BIT_ACCESS(PIE2,4)
// PIR2<TMRAIF>
extern volatile __bit                   TMRAIF              __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 TMRAIF_bit          _BIT_ACCESS(PIR2,4)
// TACON<TMRAON>
extern volatile __bit                   TMRAON              __at(0x82F);	// @ (0x105 * 8 + 7)
#define                                 TMRAON_bit          _BIT_ACCESS(TACON,7)
// TACON<TMRAPS0>
extern volatile __bit                   TMRAPS0             __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 TMRAPS0_bit         _BIT_ACCESS(TACON,0)
// TACON<TMRAPS1>
extern volatile __bit                   TMRAPS1             __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 TMRAPS1_bit         _BIT_ACCESS(TACON,1)
// TACON<TMRAPS2>
extern volatile __bit                   TMRAPS2             __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 TMRAPS2_bit         _BIT_ACCESS(TACON,2)
// TACON<TMRAPSA>
extern volatile __bit                   TMRAPSA             __at(0x82B);	// @ (0x105 * 8 + 3)
#define                                 TMRAPSA_bit         _BIT_ACCESS(TACON,3)
// TACON<TMRASE>
extern volatile __bit                   TMRASE              __at(0x82C);	// @ (0x105 * 8 + 4)
#define                                 TMRASE_bit          _BIT_ACCESS(TACON,4)
// TBCON<TMRBCS>
extern volatile __bit                   TMRBCS              __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 TMRBCS_bit          _BIT_ACCESS(TBCON,5)
// PIE2<TMRBIE>
extern volatile __bit                   TMRBIE              __at(0x46D);	// @ (0x8D * 8 + 5)
#define                                 TMRBIE_bit          _BIT_ACCESS(PIE2,5)
// PIR2<TMRBIF>
extern volatile __bit                   TMRBIF              __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 TMRBIF_bit          _BIT_ACCESS(PIR2,5)
// TBCON<TMRBON>
extern volatile __bit                   TMRBON              __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 TMRBON_bit          _BIT_ACCESS(TBCON,7)
// TBCON<TMRBPS0>
extern volatile __bit                   TMRBPS0             __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 TMRBPS0_bit         _BIT_ACCESS(TBCON,0)
// TBCON<TMRBPS1>
extern volatile __bit                   TMRBPS1             __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 TMRBPS1_bit         _BIT_ACCESS(TBCON,1)
// TBCON<TMRBPS2>
extern volatile __bit                   TMRBPS2             __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 TMRBPS2_bit         _BIT_ACCESS(TBCON,2)
// TBCON<TMRBPSA>
extern volatile __bit                   TMRBPSA             __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 TMRBPSA_bit         _BIT_ACCESS(TBCON,3)
// TBCON<TMRBSE>
extern volatile __bit                   TMRBSE              __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 TMRBSE_bit          _BIT_ACCESS(TBCON,4)
// T1CON<TMRCS0>
extern volatile __bit                   TMRCS0              __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 TMRCS0_bit          _BIT_ACCESS(T1CON,6)
// T1CON<TMRCS1>
extern volatile __bit                   TMRCS1              __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 TMRCS1_bit          _BIT_ACCESS(T1CON,7)
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
// PORTC<TX>
extern volatile __bit                   TX                  __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 TX_bit              _BIT_ACCESS(PORTC,6)
// TXSTA<TX9>
extern volatile __bit                   TX9                 __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9D>
extern volatile __bit                   TX9D                __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA,0)
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
// SSPCON<WCOL>
extern volatile __bit                   WCOL                __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON,7)
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
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// PORTE<nMCLR>
extern volatile __bit                   nMCLR               __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 nMCLR_bit           _BIT_ACCESS(PORTE,3)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRBPU>
extern volatile __bit                   nRBPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(OPTION_REG,7)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC16LF707_H_
