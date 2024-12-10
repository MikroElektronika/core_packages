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

#ifndef _PIC16CR926_H_
#define _PIC16CR926_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16CR926
 */
#ifndef _XC_H_
#warning Header file pic16cr926.h included directly. Use #include <xc.h> instead.
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
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
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
        unsigned                        :2;
        unsigned ADIF                   :1;
        unsigned LCDIF                  :1;
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
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_LCDIF_POSN                                    0x7
#define _PIR1_LCDIF_POSITION                                0x7
#define _PIR1_LCDIF_SIZE                                    0x1
#define _PIR1_LCDIF_LENGTH                                  0x1
#define _PIR1_LCDIF_MASK                                    0x80

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
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
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
        unsigned                        :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :3;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :2;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :2;
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
#define _ADCON0_GO_nDONE_POSN                               0x2
#define _ADCON0_GO_nDONE_POSITION                           0x2
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x4
#define _ADCON0_CHS_POSN                                    0x3
#define _ADCON0_CHS_POSITION                                0x3
#define _ADCON0_CHS_SIZE                                    0x3
#define _ADCON0_CHS_LENGTH                                  0x3
#define _ADCON0_CHS_MASK                                    0x38
#define _ADCON0_ADCS_POSN                                   0x6
#define _ADCON0_ADCS_POSITION                               0x6
#define _ADCON0_ADCS_SIZE                                   0x2
#define _ADCON0_ADCS_LENGTH                                 0x2
#define _ADCON0_ADCS_MASK                                   0xC0
#define _ADCON0_GO_POSN                                     0x2
#define _ADCON0_GO_POSITION                                 0x2
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x4
#define _ADCON0_CHS0_POSN                                   0x3
#define _ADCON0_CHS0_POSITION                               0x3
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x8
#define _ADCON0_CHS1_POSN                                   0x4
#define _ADCON0_CHS1_POSITION                               0x4
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x10
#define _ADCON0_CHS2_POSN                                   0x5
#define _ADCON0_CHS2_POSITION                               0x5
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x20
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
#define _ADCON0_nDONE_POSN                                  0x2
#define _ADCON0_nDONE_POSITION                              0x2
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x4
#define _ADCON0_GO_DONE_POSN                                0x2
#define _ADCON0_GO_DONE_POSITION                            0x2
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x4

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
        unsigned _PS0                    :1;  // Note: Changed by MikroE
        unsigned _PS1                    :1;  // Note: Changed by MikroE
        unsigned _PS2                    :1;  // Note: Changed by MikroE
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
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned PSPMODE                :1;
        unsigned IBOV                   :1;
        unsigned OBF                    :1;
        unsigned IBF                    :1;
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
#define _TRISE_PSPMODE_POSN                                 0x4
#define _TRISE_PSPMODE_POSITION                             0x4
#define _TRISE_PSPMODE_SIZE                                 0x1
#define _TRISE_PSPMODE_LENGTH                               0x1
#define _TRISE_PSPMODE_MASK                                 0x10
#define _TRISE_IBOV_POSN                                    0x5
#define _TRISE_IBOV_POSITION                                0x5
#define _TRISE_IBOV_SIZE                                    0x1
#define _TRISE_IBOV_LENGTH                                  0x1
#define _TRISE_IBOV_MASK                                    0x20
#define _TRISE_OBF_POSN                                     0x6
#define _TRISE_OBF_POSITION                                 0x6
#define _TRISE_OBF_SIZE                                     0x1
#define _TRISE_OBF_LENGTH                                   0x1
#define _TRISE_OBF_MASK                                     0x40
#define _TRISE_IBF_POSN                                     0x7
#define _TRISE_IBF_POSITION                                 0x7
#define _TRISE_IBF_SIZE                                     0x1
#define _TRISE_IBF_LENGTH                                   0x1
#define _TRISE_IBF_MASK                                     0x80

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
        unsigned                        :2;
        unsigned ADIE                   :1;
        unsigned LCDIE                  :1;
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
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_LCDIE_POSN                                    0x7
#define _PIE1_LCDIE_POSITION                                0x7
#define _PIE1_LCDIE_SIZE                                    0x1
#define _PIE1_LCDIE_LENGTH                                  0x1
#define _PIE1_LCDIE_MASK                                    0x80

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
        unsigned PCFG                   :4;
        unsigned                        :3;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x4
#define _ADCON1_PCFG_LENGTH                                 0x4
#define _ADCON1_PCFG_MASK                                   0xF
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80
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

// Register: PORTF
#define PORTF PORTF
extern volatile unsigned char           PORTF               __at(0x107);
#ifndef _LIB_BUILD
asm("PORTF equ 0107h");
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
extern volatile PORTFbits_t PORTFbits __at(0x107);
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
extern volatile unsigned char           PORTG               __at(0x108);
#ifndef _LIB_BUILD
asm("PORTG equ 0108h");
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
        unsigned RG6                    :1;
        unsigned RG7                    :1;
    };
} PORTGbits_t;
extern volatile PORTGbits_t PORTGbits __at(0x108);
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

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x10C);
#ifndef _LIB_BUILD
asm("PMCON1 equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x10C);
// bitfield macros
#define _PMCON1_RD_POSN                                     0x0
#define _PMCON1_RD_POSITION                                 0x0
#define _PMCON1_RD_SIZE                                     0x1
#define _PMCON1_RD_LENGTH                                   0x1
#define _PMCON1_RD_MASK                                     0x1

// Register: LCDSE
#define LCDSE LCDSE
extern volatile unsigned char           LCDSE               __at(0x10D);
#ifndef _LIB_BUILD
asm("LCDSE equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE0                    :1;
        unsigned SE5                    :1;
        unsigned SE9                    :1;
        unsigned SE12                   :1;
        unsigned SE16                   :1;
        unsigned SE20                   :1;
        unsigned SE27                   :1;
        unsigned SE29                   :1;
    };
} LCDSEbits_t;
extern volatile LCDSEbits_t LCDSEbits __at(0x10D);
// bitfield macros
#define _LCDSE_SE0_POSN                                     0x0
#define _LCDSE_SE0_POSITION                                 0x0
#define _LCDSE_SE0_SIZE                                     0x1
#define _LCDSE_SE0_LENGTH                                   0x1
#define _LCDSE_SE0_MASK                                     0x1
#define _LCDSE_SE5_POSN                                     0x1
#define _LCDSE_SE5_POSITION                                 0x1
#define _LCDSE_SE5_SIZE                                     0x1
#define _LCDSE_SE5_LENGTH                                   0x1
#define _LCDSE_SE5_MASK                                     0x2
#define _LCDSE_SE9_POSN                                     0x2
#define _LCDSE_SE9_POSITION                                 0x2
#define _LCDSE_SE9_SIZE                                     0x1
#define _LCDSE_SE9_LENGTH                                   0x1
#define _LCDSE_SE9_MASK                                     0x4
#define _LCDSE_SE12_POSN                                    0x3
#define _LCDSE_SE12_POSITION                                0x3
#define _LCDSE_SE12_SIZE                                    0x1
#define _LCDSE_SE12_LENGTH                                  0x1
#define _LCDSE_SE12_MASK                                    0x8
#define _LCDSE_SE16_POSN                                    0x4
#define _LCDSE_SE16_POSITION                                0x4
#define _LCDSE_SE16_SIZE                                    0x1
#define _LCDSE_SE16_LENGTH                                  0x1
#define _LCDSE_SE16_MASK                                    0x10
#define _LCDSE_SE20_POSN                                    0x5
#define _LCDSE_SE20_POSITION                                0x5
#define _LCDSE_SE20_SIZE                                    0x1
#define _LCDSE_SE20_LENGTH                                  0x1
#define _LCDSE_SE20_MASK                                    0x20
#define _LCDSE_SE27_POSN                                    0x6
#define _LCDSE_SE27_POSITION                                0x6
#define _LCDSE_SE27_SIZE                                    0x1
#define _LCDSE_SE27_LENGTH                                  0x1
#define _LCDSE_SE27_MASK                                    0x40
#define _LCDSE_SE29_POSN                                    0x7
#define _LCDSE_SE29_POSITION                                0x7
#define _LCDSE_SE29_SIZE                                    0x1
#define _LCDSE_SE29_LENGTH                                  0x1
#define _LCDSE_SE29_MASK                                    0x80

// Register: LCDPS
#define LCDPS LCDPS
extern volatile unsigned char           LCDPS               __at(0x10E);
#ifndef _LIB_BUILD
asm("LCDPS equ 010Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LP                     :4;
    };
    struct {
        unsigned LP0                    :1;
        unsigned LP1                    :1;
        unsigned LP2                    :1;
        unsigned LP3                    :1;
    };
} LCDPSbits_t;
extern volatile LCDPSbits_t LCDPSbits __at(0x10E);
// bitfield macros
#define _LCDPS_LP_POSN                                      0x0
#define _LCDPS_LP_POSITION                                  0x0
#define _LCDPS_LP_SIZE                                      0x4
#define _LCDPS_LP_LENGTH                                    0x4
#define _LCDPS_LP_MASK                                      0xF
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

// Register: LCDCON
#define LCDCON LCDCON
extern volatile unsigned char           LCDCON              __at(0x10F);
#ifndef _LIB_BUILD
asm("LCDCON equ 010Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LMUX                   :2;
        unsigned CS                     :2;
        unsigned VGEN                   :1;
        unsigned                        :1;
        unsigned SLPEN                  :1;
        unsigned LCDEN                  :1;
    };
    struct {
        unsigned LMUX0                  :1;
        unsigned LMUX1                  :1;
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned BIAS                   :1;
        unsigned WERR                   :1;
    };
} LCDCONbits_t;
extern volatile LCDCONbits_t LCDCONbits __at(0x10F);
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
#define _LCDCON_VGEN_POSN                                   0x4
#define _LCDCON_VGEN_POSITION                               0x4
#define _LCDCON_VGEN_SIZE                                   0x1
#define _LCDCON_VGEN_LENGTH                                 0x1
#define _LCDCON_VGEN_MASK                                   0x10
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
#define _LCDCON_BIAS_POSN                                   0x4
#define _LCDCON_BIAS_POSITION                               0x4
#define _LCDCON_BIAS_SIZE                                   0x1
#define _LCDCON_BIAS_LENGTH                                 0x1
#define _LCDCON_BIAS_MASK                                   0x10
#define _LCDCON_WERR_POSN                                   0x5
#define _LCDCON_WERR_POSITION                               0x5
#define _LCDCON_WERR_SIZE                                   0x1
#define _LCDCON_WERR_LENGTH                                 0x1
#define _LCDCON_WERR_MASK                                   0x20

// Register: LCDD00
#define LCDD00 LCDD00
extern volatile unsigned char           LCDD00              __at(0x110);
#ifndef _LIB_BUILD
asm("LCDD00 equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG00                  :1;
        unsigned SEG01                  :1;
        unsigned SEG02                  :1;
        unsigned SEG03                  :1;
        unsigned SEG04                  :1;
        unsigned SEG05                  :1;
        unsigned SEG06                  :1;
        unsigned SEG07                  :1;
    };
} LCDD00bits_t;
extern volatile LCDD00bits_t LCDD00bits __at(0x110);
// bitfield macros
#define _LCDD00_SEG00_POSN                                  0x0
#define _LCDD00_SEG00_POSITION                              0x0
#define _LCDD00_SEG00_SIZE                                  0x1
#define _LCDD00_SEG00_LENGTH                                0x1
#define _LCDD00_SEG00_MASK                                  0x1
#define _LCDD00_SEG01_POSN                                  0x1
#define _LCDD00_SEG01_POSITION                              0x1
#define _LCDD00_SEG01_SIZE                                  0x1
#define _LCDD00_SEG01_LENGTH                                0x1
#define _LCDD00_SEG01_MASK                                  0x2
#define _LCDD00_SEG02_POSN                                  0x2
#define _LCDD00_SEG02_POSITION                              0x2
#define _LCDD00_SEG02_SIZE                                  0x1
#define _LCDD00_SEG02_LENGTH                                0x1
#define _LCDD00_SEG02_MASK                                  0x4
#define _LCDD00_SEG03_POSN                                  0x3
#define _LCDD00_SEG03_POSITION                              0x3
#define _LCDD00_SEG03_SIZE                                  0x1
#define _LCDD00_SEG03_LENGTH                                0x1
#define _LCDD00_SEG03_MASK                                  0x8
#define _LCDD00_SEG04_POSN                                  0x4
#define _LCDD00_SEG04_POSITION                              0x4
#define _LCDD00_SEG04_SIZE                                  0x1
#define _LCDD00_SEG04_LENGTH                                0x1
#define _LCDD00_SEG04_MASK                                  0x10
#define _LCDD00_SEG05_POSN                                  0x5
#define _LCDD00_SEG05_POSITION                              0x5
#define _LCDD00_SEG05_SIZE                                  0x1
#define _LCDD00_SEG05_LENGTH                                0x1
#define _LCDD00_SEG05_MASK                                  0x20
#define _LCDD00_SEG06_POSN                                  0x6
#define _LCDD00_SEG06_POSITION                              0x6
#define _LCDD00_SEG06_SIZE                                  0x1
#define _LCDD00_SEG06_LENGTH                                0x1
#define _LCDD00_SEG06_MASK                                  0x40
#define _LCDD00_SEG07_POSN                                  0x7
#define _LCDD00_SEG07_POSITION                              0x7
#define _LCDD00_SEG07_SIZE                                  0x1
#define _LCDD00_SEG07_LENGTH                                0x1
#define _LCDD00_SEG07_MASK                                  0x80

// Register: LCDD01
#define LCDD01 LCDD01
extern volatile unsigned char           LCDD01              __at(0x111);
#ifndef _LIB_BUILD
asm("LCDD01 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG08                  :1;
        unsigned SEG09                  :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
} LCDD01bits_t;
extern volatile LCDD01bits_t LCDD01bits __at(0x111);
// bitfield macros
#define _LCDD01_SEG08_POSN                                  0x0
#define _LCDD01_SEG08_POSITION                              0x0
#define _LCDD01_SEG08_SIZE                                  0x1
#define _LCDD01_SEG08_LENGTH                                0x1
#define _LCDD01_SEG08_MASK                                  0x1
#define _LCDD01_SEG09_POSN                                  0x1
#define _LCDD01_SEG09_POSITION                              0x1
#define _LCDD01_SEG09_SIZE                                  0x1
#define _LCDD01_SEG09_LENGTH                                0x1
#define _LCDD01_SEG09_MASK                                  0x2
#define _LCDD01_SEG10_POSN                                  0x2
#define _LCDD01_SEG10_POSITION                              0x2
#define _LCDD01_SEG10_SIZE                                  0x1
#define _LCDD01_SEG10_LENGTH                                0x1
#define _LCDD01_SEG10_MASK                                  0x4
#define _LCDD01_SEG11_POSN                                  0x3
#define _LCDD01_SEG11_POSITION                              0x3
#define _LCDD01_SEG11_SIZE                                  0x1
#define _LCDD01_SEG11_LENGTH                                0x1
#define _LCDD01_SEG11_MASK                                  0x8
#define _LCDD01_SEG12_POSN                                  0x4
#define _LCDD01_SEG12_POSITION                              0x4
#define _LCDD01_SEG12_SIZE                                  0x1
#define _LCDD01_SEG12_LENGTH                                0x1
#define _LCDD01_SEG12_MASK                                  0x10
#define _LCDD01_SEG13_POSN                                  0x5
#define _LCDD01_SEG13_POSITION                              0x5
#define _LCDD01_SEG13_SIZE                                  0x1
#define _LCDD01_SEG13_LENGTH                                0x1
#define _LCDD01_SEG13_MASK                                  0x20
#define _LCDD01_SEG14_POSN                                  0x6
#define _LCDD01_SEG14_POSITION                              0x6
#define _LCDD01_SEG14_SIZE                                  0x1
#define _LCDD01_SEG14_LENGTH                                0x1
#define _LCDD01_SEG14_MASK                                  0x40
#define _LCDD01_SEG15_POSN                                  0x7
#define _LCDD01_SEG15_POSITION                              0x7
#define _LCDD01_SEG15_SIZE                                  0x1
#define _LCDD01_SEG15_LENGTH                                0x1
#define _LCDD01_SEG15_MASK                                  0x80

// Register: LCDD02
#define LCDD02 LCDD02
extern volatile unsigned char           LCDD02              __at(0x112);
#ifndef _LIB_BUILD
asm("LCDD02 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16                  :1;
        unsigned SEG17                  :1;
        unsigned SEG18                  :1;
        unsigned SEG19                  :1;
        unsigned SEG20                  :1;
        unsigned SEG21                  :1;
        unsigned SEG22                  :1;
        unsigned SEG23                  :1;
    };
} LCDD02bits_t;
extern volatile LCDD02bits_t LCDD02bits __at(0x112);
// bitfield macros
#define _LCDD02_SEG16_POSN                                  0x0
#define _LCDD02_SEG16_POSITION                              0x0
#define _LCDD02_SEG16_SIZE                                  0x1
#define _LCDD02_SEG16_LENGTH                                0x1
#define _LCDD02_SEG16_MASK                                  0x1
#define _LCDD02_SEG17_POSN                                  0x1
#define _LCDD02_SEG17_POSITION                              0x1
#define _LCDD02_SEG17_SIZE                                  0x1
#define _LCDD02_SEG17_LENGTH                                0x1
#define _LCDD02_SEG17_MASK                                  0x2
#define _LCDD02_SEG18_POSN                                  0x2
#define _LCDD02_SEG18_POSITION                              0x2
#define _LCDD02_SEG18_SIZE                                  0x1
#define _LCDD02_SEG18_LENGTH                                0x1
#define _LCDD02_SEG18_MASK                                  0x4
#define _LCDD02_SEG19_POSN                                  0x3
#define _LCDD02_SEG19_POSITION                              0x3
#define _LCDD02_SEG19_SIZE                                  0x1
#define _LCDD02_SEG19_LENGTH                                0x1
#define _LCDD02_SEG19_MASK                                  0x8
#define _LCDD02_SEG20_POSN                                  0x4
#define _LCDD02_SEG20_POSITION                              0x4
#define _LCDD02_SEG20_SIZE                                  0x1
#define _LCDD02_SEG20_LENGTH                                0x1
#define _LCDD02_SEG20_MASK                                  0x10
#define _LCDD02_SEG21_POSN                                  0x5
#define _LCDD02_SEG21_POSITION                              0x5
#define _LCDD02_SEG21_SIZE                                  0x1
#define _LCDD02_SEG21_LENGTH                                0x1
#define _LCDD02_SEG21_MASK                                  0x20
#define _LCDD02_SEG22_POSN                                  0x6
#define _LCDD02_SEG22_POSITION                              0x6
#define _LCDD02_SEG22_SIZE                                  0x1
#define _LCDD02_SEG22_LENGTH                                0x1
#define _LCDD02_SEG22_MASK                                  0x40
#define _LCDD02_SEG23_POSN                                  0x7
#define _LCDD02_SEG23_POSITION                              0x7
#define _LCDD02_SEG23_SIZE                                  0x1
#define _LCDD02_SEG23_LENGTH                                0x1
#define _LCDD02_SEG23_MASK                                  0x80

// Register: LCDD03
#define LCDD03 LCDD03
extern volatile unsigned char           LCDD03              __at(0x113);
#ifndef _LIB_BUILD
asm("LCDD03 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24                  :1;
        unsigned SEG25                  :1;
        unsigned SEG26                  :1;
        unsigned SEG27                  :1;
        unsigned SEG28                  :1;
        unsigned SEG29                  :1;
        unsigned SEG30                  :1;
        unsigned SEG31                  :1;
    };
} LCDD03bits_t;
extern volatile LCDD03bits_t LCDD03bits __at(0x113);
// bitfield macros
#define _LCDD03_SEG24_POSN                                  0x0
#define _LCDD03_SEG24_POSITION                              0x0
#define _LCDD03_SEG24_SIZE                                  0x1
#define _LCDD03_SEG24_LENGTH                                0x1
#define _LCDD03_SEG24_MASK                                  0x1
#define _LCDD03_SEG25_POSN                                  0x1
#define _LCDD03_SEG25_POSITION                              0x1
#define _LCDD03_SEG25_SIZE                                  0x1
#define _LCDD03_SEG25_LENGTH                                0x1
#define _LCDD03_SEG25_MASK                                  0x2
#define _LCDD03_SEG26_POSN                                  0x2
#define _LCDD03_SEG26_POSITION                              0x2
#define _LCDD03_SEG26_SIZE                                  0x1
#define _LCDD03_SEG26_LENGTH                                0x1
#define _LCDD03_SEG26_MASK                                  0x4
#define _LCDD03_SEG27_POSN                                  0x3
#define _LCDD03_SEG27_POSITION                              0x3
#define _LCDD03_SEG27_SIZE                                  0x1
#define _LCDD03_SEG27_LENGTH                                0x1
#define _LCDD03_SEG27_MASK                                  0x8
#define _LCDD03_SEG28_POSN                                  0x4
#define _LCDD03_SEG28_POSITION                              0x4
#define _LCDD03_SEG28_SIZE                                  0x1
#define _LCDD03_SEG28_LENGTH                                0x1
#define _LCDD03_SEG28_MASK                                  0x10
#define _LCDD03_SEG29_POSN                                  0x5
#define _LCDD03_SEG29_POSITION                              0x5
#define _LCDD03_SEG29_SIZE                                  0x1
#define _LCDD03_SEG29_LENGTH                                0x1
#define _LCDD03_SEG29_MASK                                  0x20
#define _LCDD03_SEG30_POSN                                  0x6
#define _LCDD03_SEG30_POSITION                              0x6
#define _LCDD03_SEG30_SIZE                                  0x1
#define _LCDD03_SEG30_LENGTH                                0x1
#define _LCDD03_SEG30_MASK                                  0x40
#define _LCDD03_SEG31_POSN                                  0x7
#define _LCDD03_SEG31_POSITION                              0x7
#define _LCDD03_SEG31_SIZE                                  0x1
#define _LCDD03_SEG31_LENGTH                                0x1
#define _LCDD03_SEG31_MASK                                  0x80

// Register: LCDD04
#define LCDD04 LCDD04
extern volatile unsigned char           LCDD04              __at(0x114);
#ifndef _LIB_BUILD
asm("LCDD04 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG00                  :1;
        unsigned SEG01                  :1;
        unsigned SEG02                  :1;
        unsigned SEG03                  :1;
        unsigned SEG04                  :1;
        unsigned SEG05                  :1;
        unsigned SEG06                  :1;
        unsigned SEG07                  :1;
    };
} LCDD04bits_t;
extern volatile LCDD04bits_t LCDD04bits __at(0x114);
// bitfield macros
#define _LCDD04_SEG00_POSN                                  0x0
#define _LCDD04_SEG00_POSITION                              0x0
#define _LCDD04_SEG00_SIZE                                  0x1
#define _LCDD04_SEG00_LENGTH                                0x1
#define _LCDD04_SEG00_MASK                                  0x1
#define _LCDD04_SEG01_POSN                                  0x1
#define _LCDD04_SEG01_POSITION                              0x1
#define _LCDD04_SEG01_SIZE                                  0x1
#define _LCDD04_SEG01_LENGTH                                0x1
#define _LCDD04_SEG01_MASK                                  0x2
#define _LCDD04_SEG02_POSN                                  0x2
#define _LCDD04_SEG02_POSITION                              0x2
#define _LCDD04_SEG02_SIZE                                  0x1
#define _LCDD04_SEG02_LENGTH                                0x1
#define _LCDD04_SEG02_MASK                                  0x4
#define _LCDD04_SEG03_POSN                                  0x3
#define _LCDD04_SEG03_POSITION                              0x3
#define _LCDD04_SEG03_SIZE                                  0x1
#define _LCDD04_SEG03_LENGTH                                0x1
#define _LCDD04_SEG03_MASK                                  0x8
#define _LCDD04_SEG04_POSN                                  0x4
#define _LCDD04_SEG04_POSITION                              0x4
#define _LCDD04_SEG04_SIZE                                  0x1
#define _LCDD04_SEG04_LENGTH                                0x1
#define _LCDD04_SEG04_MASK                                  0x10
#define _LCDD04_SEG05_POSN                                  0x5
#define _LCDD04_SEG05_POSITION                              0x5
#define _LCDD04_SEG05_SIZE                                  0x1
#define _LCDD04_SEG05_LENGTH                                0x1
#define _LCDD04_SEG05_MASK                                  0x20
#define _LCDD04_SEG06_POSN                                  0x6
#define _LCDD04_SEG06_POSITION                              0x6
#define _LCDD04_SEG06_SIZE                                  0x1
#define _LCDD04_SEG06_LENGTH                                0x1
#define _LCDD04_SEG06_MASK                                  0x40
#define _LCDD04_SEG07_POSN                                  0x7
#define _LCDD04_SEG07_POSITION                              0x7
#define _LCDD04_SEG07_SIZE                                  0x1
#define _LCDD04_SEG07_LENGTH                                0x1
#define _LCDD04_SEG07_MASK                                  0x80

// Register: LCDD05
#define LCDD05 LCDD05
extern volatile unsigned char           LCDD05              __at(0x115);
#ifndef _LIB_BUILD
asm("LCDD05 equ 0115h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG08                  :1;
        unsigned SEG09                  :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
} LCDD05bits_t;
extern volatile LCDD05bits_t LCDD05bits __at(0x115);
// bitfield macros
#define _LCDD05_SEG08_POSN                                  0x0
#define _LCDD05_SEG08_POSITION                              0x0
#define _LCDD05_SEG08_SIZE                                  0x1
#define _LCDD05_SEG08_LENGTH                                0x1
#define _LCDD05_SEG08_MASK                                  0x1
#define _LCDD05_SEG09_POSN                                  0x1
#define _LCDD05_SEG09_POSITION                              0x1
#define _LCDD05_SEG09_SIZE                                  0x1
#define _LCDD05_SEG09_LENGTH                                0x1
#define _LCDD05_SEG09_MASK                                  0x2
#define _LCDD05_SEG10_POSN                                  0x2
#define _LCDD05_SEG10_POSITION                              0x2
#define _LCDD05_SEG10_SIZE                                  0x1
#define _LCDD05_SEG10_LENGTH                                0x1
#define _LCDD05_SEG10_MASK                                  0x4
#define _LCDD05_SEG11_POSN                                  0x3
#define _LCDD05_SEG11_POSITION                              0x3
#define _LCDD05_SEG11_SIZE                                  0x1
#define _LCDD05_SEG11_LENGTH                                0x1
#define _LCDD05_SEG11_MASK                                  0x8
#define _LCDD05_SEG12_POSN                                  0x4
#define _LCDD05_SEG12_POSITION                              0x4
#define _LCDD05_SEG12_SIZE                                  0x1
#define _LCDD05_SEG12_LENGTH                                0x1
#define _LCDD05_SEG12_MASK                                  0x10
#define _LCDD05_SEG13_POSN                                  0x5
#define _LCDD05_SEG13_POSITION                              0x5
#define _LCDD05_SEG13_SIZE                                  0x1
#define _LCDD05_SEG13_LENGTH                                0x1
#define _LCDD05_SEG13_MASK                                  0x20
#define _LCDD05_SEG14_POSN                                  0x6
#define _LCDD05_SEG14_POSITION                              0x6
#define _LCDD05_SEG14_SIZE                                  0x1
#define _LCDD05_SEG14_LENGTH                                0x1
#define _LCDD05_SEG14_MASK                                  0x40
#define _LCDD05_SEG15_POSN                                  0x7
#define _LCDD05_SEG15_POSITION                              0x7
#define _LCDD05_SEG15_SIZE                                  0x1
#define _LCDD05_SEG15_LENGTH                                0x1
#define _LCDD05_SEG15_MASK                                  0x80

// Register: LCDD06
#define LCDD06 LCDD06
extern volatile unsigned char           LCDD06              __at(0x116);
#ifndef _LIB_BUILD
asm("LCDD06 equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16                  :1;
        unsigned SEG17                  :1;
        unsigned SEG18                  :1;
        unsigned SEG19                  :1;
        unsigned SEG20                  :1;
        unsigned SEG21                  :1;
        unsigned SEG22                  :1;
        unsigned SEG23                  :1;
    };
} LCDD06bits_t;
extern volatile LCDD06bits_t LCDD06bits __at(0x116);
// bitfield macros
#define _LCDD06_SEG16_POSN                                  0x0
#define _LCDD06_SEG16_POSITION                              0x0
#define _LCDD06_SEG16_SIZE                                  0x1
#define _LCDD06_SEG16_LENGTH                                0x1
#define _LCDD06_SEG16_MASK                                  0x1
#define _LCDD06_SEG17_POSN                                  0x1
#define _LCDD06_SEG17_POSITION                              0x1
#define _LCDD06_SEG17_SIZE                                  0x1
#define _LCDD06_SEG17_LENGTH                                0x1
#define _LCDD06_SEG17_MASK                                  0x2
#define _LCDD06_SEG18_POSN                                  0x2
#define _LCDD06_SEG18_POSITION                              0x2
#define _LCDD06_SEG18_SIZE                                  0x1
#define _LCDD06_SEG18_LENGTH                                0x1
#define _LCDD06_SEG18_MASK                                  0x4
#define _LCDD06_SEG19_POSN                                  0x3
#define _LCDD06_SEG19_POSITION                              0x3
#define _LCDD06_SEG19_SIZE                                  0x1
#define _LCDD06_SEG19_LENGTH                                0x1
#define _LCDD06_SEG19_MASK                                  0x8
#define _LCDD06_SEG20_POSN                                  0x4
#define _LCDD06_SEG20_POSITION                              0x4
#define _LCDD06_SEG20_SIZE                                  0x1
#define _LCDD06_SEG20_LENGTH                                0x1
#define _LCDD06_SEG20_MASK                                  0x10
#define _LCDD06_SEG21_POSN                                  0x5
#define _LCDD06_SEG21_POSITION                              0x5
#define _LCDD06_SEG21_SIZE                                  0x1
#define _LCDD06_SEG21_LENGTH                                0x1
#define _LCDD06_SEG21_MASK                                  0x20
#define _LCDD06_SEG22_POSN                                  0x6
#define _LCDD06_SEG22_POSITION                              0x6
#define _LCDD06_SEG22_SIZE                                  0x1
#define _LCDD06_SEG22_LENGTH                                0x1
#define _LCDD06_SEG22_MASK                                  0x40
#define _LCDD06_SEG23_POSN                                  0x7
#define _LCDD06_SEG23_POSITION                              0x7
#define _LCDD06_SEG23_SIZE                                  0x1
#define _LCDD06_SEG23_LENGTH                                0x1
#define _LCDD06_SEG23_MASK                                  0x80

// Register: LCDD07
#define LCDD07 LCDD07
extern volatile unsigned char           LCDD07              __at(0x117);
#ifndef _LIB_BUILD
asm("LCDD07 equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24                  :1;
        unsigned SEG25                  :1;
        unsigned SEG26                  :1;
        unsigned SEG27                  :1;
        unsigned SEG28                  :1;
        unsigned SEG29                  :1;
        unsigned SEG30                  :1;
        unsigned SEG31                  :1;
    };
} LCDD07bits_t;
extern volatile LCDD07bits_t LCDD07bits __at(0x117);
// bitfield macros
#define _LCDD07_SEG24_POSN                                  0x0
#define _LCDD07_SEG24_POSITION                              0x0
#define _LCDD07_SEG24_SIZE                                  0x1
#define _LCDD07_SEG24_LENGTH                                0x1
#define _LCDD07_SEG24_MASK                                  0x1
#define _LCDD07_SEG25_POSN                                  0x1
#define _LCDD07_SEG25_POSITION                              0x1
#define _LCDD07_SEG25_SIZE                                  0x1
#define _LCDD07_SEG25_LENGTH                                0x1
#define _LCDD07_SEG25_MASK                                  0x2
#define _LCDD07_SEG26_POSN                                  0x2
#define _LCDD07_SEG26_POSITION                              0x2
#define _LCDD07_SEG26_SIZE                                  0x1
#define _LCDD07_SEG26_LENGTH                                0x1
#define _LCDD07_SEG26_MASK                                  0x4
#define _LCDD07_SEG27_POSN                                  0x3
#define _LCDD07_SEG27_POSITION                              0x3
#define _LCDD07_SEG27_SIZE                                  0x1
#define _LCDD07_SEG27_LENGTH                                0x1
#define _LCDD07_SEG27_MASK                                  0x8
#define _LCDD07_SEG28_POSN                                  0x4
#define _LCDD07_SEG28_POSITION                              0x4
#define _LCDD07_SEG28_SIZE                                  0x1
#define _LCDD07_SEG28_LENGTH                                0x1
#define _LCDD07_SEG28_MASK                                  0x10
#define _LCDD07_SEG29_POSN                                  0x5
#define _LCDD07_SEG29_POSITION                              0x5
#define _LCDD07_SEG29_SIZE                                  0x1
#define _LCDD07_SEG29_LENGTH                                0x1
#define _LCDD07_SEG29_MASK                                  0x20
#define _LCDD07_SEG30_POSN                                  0x6
#define _LCDD07_SEG30_POSITION                              0x6
#define _LCDD07_SEG30_SIZE                                  0x1
#define _LCDD07_SEG30_LENGTH                                0x1
#define _LCDD07_SEG30_MASK                                  0x40
#define _LCDD07_SEG31_POSN                                  0x7
#define _LCDD07_SEG31_POSITION                              0x7
#define _LCDD07_SEG31_SIZE                                  0x1
#define _LCDD07_SEG31_LENGTH                                0x1
#define _LCDD07_SEG31_MASK                                  0x80

// Register: LCDD08
#define LCDD08 LCDD08
extern volatile unsigned char           LCDD08              __at(0x118);
#ifndef _LIB_BUILD
asm("LCDD08 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG00                  :1;
        unsigned SEG01                  :1;
        unsigned SEG02                  :1;
        unsigned SEG03                  :1;
        unsigned SEG04                  :1;
        unsigned SEG05                  :1;
        unsigned SEG06                  :1;
        unsigned SEG07                  :1;
    };
} LCDD08bits_t;
extern volatile LCDD08bits_t LCDD08bits __at(0x118);
// bitfield macros
#define _LCDD08_SEG00_POSN                                  0x0
#define _LCDD08_SEG00_POSITION                              0x0
#define _LCDD08_SEG00_SIZE                                  0x1
#define _LCDD08_SEG00_LENGTH                                0x1
#define _LCDD08_SEG00_MASK                                  0x1
#define _LCDD08_SEG01_POSN                                  0x1
#define _LCDD08_SEG01_POSITION                              0x1
#define _LCDD08_SEG01_SIZE                                  0x1
#define _LCDD08_SEG01_LENGTH                                0x1
#define _LCDD08_SEG01_MASK                                  0x2
#define _LCDD08_SEG02_POSN                                  0x2
#define _LCDD08_SEG02_POSITION                              0x2
#define _LCDD08_SEG02_SIZE                                  0x1
#define _LCDD08_SEG02_LENGTH                                0x1
#define _LCDD08_SEG02_MASK                                  0x4
#define _LCDD08_SEG03_POSN                                  0x3
#define _LCDD08_SEG03_POSITION                              0x3
#define _LCDD08_SEG03_SIZE                                  0x1
#define _LCDD08_SEG03_LENGTH                                0x1
#define _LCDD08_SEG03_MASK                                  0x8
#define _LCDD08_SEG04_POSN                                  0x4
#define _LCDD08_SEG04_POSITION                              0x4
#define _LCDD08_SEG04_SIZE                                  0x1
#define _LCDD08_SEG04_LENGTH                                0x1
#define _LCDD08_SEG04_MASK                                  0x10
#define _LCDD08_SEG05_POSN                                  0x5
#define _LCDD08_SEG05_POSITION                              0x5
#define _LCDD08_SEG05_SIZE                                  0x1
#define _LCDD08_SEG05_LENGTH                                0x1
#define _LCDD08_SEG05_MASK                                  0x20
#define _LCDD08_SEG06_POSN                                  0x6
#define _LCDD08_SEG06_POSITION                              0x6
#define _LCDD08_SEG06_SIZE                                  0x1
#define _LCDD08_SEG06_LENGTH                                0x1
#define _LCDD08_SEG06_MASK                                  0x40
#define _LCDD08_SEG07_POSN                                  0x7
#define _LCDD08_SEG07_POSITION                              0x7
#define _LCDD08_SEG07_SIZE                                  0x1
#define _LCDD08_SEG07_LENGTH                                0x1
#define _LCDD08_SEG07_MASK                                  0x80

// Register: LCDD09
#define LCDD09 LCDD09
extern volatile unsigned char           LCDD09              __at(0x119);
#ifndef _LIB_BUILD
asm("LCDD09 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG08                  :1;
        unsigned SEG09                  :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
} LCDD09bits_t;
extern volatile LCDD09bits_t LCDD09bits __at(0x119);
// bitfield macros
#define _LCDD09_SEG08_POSN                                  0x0
#define _LCDD09_SEG08_POSITION                              0x0
#define _LCDD09_SEG08_SIZE                                  0x1
#define _LCDD09_SEG08_LENGTH                                0x1
#define _LCDD09_SEG08_MASK                                  0x1
#define _LCDD09_SEG09_POSN                                  0x1
#define _LCDD09_SEG09_POSITION                              0x1
#define _LCDD09_SEG09_SIZE                                  0x1
#define _LCDD09_SEG09_LENGTH                                0x1
#define _LCDD09_SEG09_MASK                                  0x2
#define _LCDD09_SEG10_POSN                                  0x2
#define _LCDD09_SEG10_POSITION                              0x2
#define _LCDD09_SEG10_SIZE                                  0x1
#define _LCDD09_SEG10_LENGTH                                0x1
#define _LCDD09_SEG10_MASK                                  0x4
#define _LCDD09_SEG11_POSN                                  0x3
#define _LCDD09_SEG11_POSITION                              0x3
#define _LCDD09_SEG11_SIZE                                  0x1
#define _LCDD09_SEG11_LENGTH                                0x1
#define _LCDD09_SEG11_MASK                                  0x8
#define _LCDD09_SEG12_POSN                                  0x4
#define _LCDD09_SEG12_POSITION                              0x4
#define _LCDD09_SEG12_SIZE                                  0x1
#define _LCDD09_SEG12_LENGTH                                0x1
#define _LCDD09_SEG12_MASK                                  0x10
#define _LCDD09_SEG13_POSN                                  0x5
#define _LCDD09_SEG13_POSITION                              0x5
#define _LCDD09_SEG13_SIZE                                  0x1
#define _LCDD09_SEG13_LENGTH                                0x1
#define _LCDD09_SEG13_MASK                                  0x20
#define _LCDD09_SEG14_POSN                                  0x6
#define _LCDD09_SEG14_POSITION                              0x6
#define _LCDD09_SEG14_SIZE                                  0x1
#define _LCDD09_SEG14_LENGTH                                0x1
#define _LCDD09_SEG14_MASK                                  0x40
#define _LCDD09_SEG15_POSN                                  0x7
#define _LCDD09_SEG15_POSITION                              0x7
#define _LCDD09_SEG15_SIZE                                  0x1
#define _LCDD09_SEG15_LENGTH                                0x1
#define _LCDD09_SEG15_MASK                                  0x80

// Register: LCDD10
#define LCDD10 LCDD10
extern volatile unsigned char           LCDD10              __at(0x11A);
#ifndef _LIB_BUILD
asm("LCDD10 equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16                  :1;
        unsigned SEG17                  :1;
        unsigned SEG18                  :1;
        unsigned SEG19                  :1;
        unsigned SEG20                  :1;
        unsigned SEG21                  :1;
        unsigned SEG22                  :1;
        unsigned SEG23                  :1;
    };
} LCDD10bits_t;
extern volatile LCDD10bits_t LCDD10bits __at(0x11A);
// bitfield macros
#define _LCDD10_SEG16_POSN                                  0x0
#define _LCDD10_SEG16_POSITION                              0x0
#define _LCDD10_SEG16_SIZE                                  0x1
#define _LCDD10_SEG16_LENGTH                                0x1
#define _LCDD10_SEG16_MASK                                  0x1
#define _LCDD10_SEG17_POSN                                  0x1
#define _LCDD10_SEG17_POSITION                              0x1
#define _LCDD10_SEG17_SIZE                                  0x1
#define _LCDD10_SEG17_LENGTH                                0x1
#define _LCDD10_SEG17_MASK                                  0x2
#define _LCDD10_SEG18_POSN                                  0x2
#define _LCDD10_SEG18_POSITION                              0x2
#define _LCDD10_SEG18_SIZE                                  0x1
#define _LCDD10_SEG18_LENGTH                                0x1
#define _LCDD10_SEG18_MASK                                  0x4
#define _LCDD10_SEG19_POSN                                  0x3
#define _LCDD10_SEG19_POSITION                              0x3
#define _LCDD10_SEG19_SIZE                                  0x1
#define _LCDD10_SEG19_LENGTH                                0x1
#define _LCDD10_SEG19_MASK                                  0x8
#define _LCDD10_SEG20_POSN                                  0x4
#define _LCDD10_SEG20_POSITION                              0x4
#define _LCDD10_SEG20_SIZE                                  0x1
#define _LCDD10_SEG20_LENGTH                                0x1
#define _LCDD10_SEG20_MASK                                  0x10
#define _LCDD10_SEG21_POSN                                  0x5
#define _LCDD10_SEG21_POSITION                              0x5
#define _LCDD10_SEG21_SIZE                                  0x1
#define _LCDD10_SEG21_LENGTH                                0x1
#define _LCDD10_SEG21_MASK                                  0x20
#define _LCDD10_SEG22_POSN                                  0x6
#define _LCDD10_SEG22_POSITION                              0x6
#define _LCDD10_SEG22_SIZE                                  0x1
#define _LCDD10_SEG22_LENGTH                                0x1
#define _LCDD10_SEG22_MASK                                  0x40
#define _LCDD10_SEG23_POSN                                  0x7
#define _LCDD10_SEG23_POSITION                              0x7
#define _LCDD10_SEG23_SIZE                                  0x1
#define _LCDD10_SEG23_LENGTH                                0x1
#define _LCDD10_SEG23_MASK                                  0x80

// Register: LCDD11
#define LCDD11 LCDD11
extern volatile unsigned char           LCDD11              __at(0x11B);
#ifndef _LIB_BUILD
asm("LCDD11 equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24                  :1;
        unsigned SEG25                  :1;
        unsigned SEG26                  :1;
        unsigned SEG27                  :1;
        unsigned SEG28                  :1;
        unsigned SEG29                  :1;
        unsigned SEG30                  :1;
        unsigned SEG31                  :1;
    };
} LCDD11bits_t;
extern volatile LCDD11bits_t LCDD11bits __at(0x11B);
// bitfield macros
#define _LCDD11_SEG24_POSN                                  0x0
#define _LCDD11_SEG24_POSITION                              0x0
#define _LCDD11_SEG24_SIZE                                  0x1
#define _LCDD11_SEG24_LENGTH                                0x1
#define _LCDD11_SEG24_MASK                                  0x1
#define _LCDD11_SEG25_POSN                                  0x1
#define _LCDD11_SEG25_POSITION                              0x1
#define _LCDD11_SEG25_SIZE                                  0x1
#define _LCDD11_SEG25_LENGTH                                0x1
#define _LCDD11_SEG25_MASK                                  0x2
#define _LCDD11_SEG26_POSN                                  0x2
#define _LCDD11_SEG26_POSITION                              0x2
#define _LCDD11_SEG26_SIZE                                  0x1
#define _LCDD11_SEG26_LENGTH                                0x1
#define _LCDD11_SEG26_MASK                                  0x4
#define _LCDD11_SEG27_POSN                                  0x3
#define _LCDD11_SEG27_POSITION                              0x3
#define _LCDD11_SEG27_SIZE                                  0x1
#define _LCDD11_SEG27_LENGTH                                0x1
#define _LCDD11_SEG27_MASK                                  0x8
#define _LCDD11_SEG28_POSN                                  0x4
#define _LCDD11_SEG28_POSITION                              0x4
#define _LCDD11_SEG28_SIZE                                  0x1
#define _LCDD11_SEG28_LENGTH                                0x1
#define _LCDD11_SEG28_MASK                                  0x10
#define _LCDD11_SEG29_POSN                                  0x5
#define _LCDD11_SEG29_POSITION                              0x5
#define _LCDD11_SEG29_SIZE                                  0x1
#define _LCDD11_SEG29_LENGTH                                0x1
#define _LCDD11_SEG29_MASK                                  0x20
#define _LCDD11_SEG30_POSN                                  0x6
#define _LCDD11_SEG30_POSITION                              0x6
#define _LCDD11_SEG30_SIZE                                  0x1
#define _LCDD11_SEG30_LENGTH                                0x1
#define _LCDD11_SEG30_MASK                                  0x40
#define _LCDD11_SEG31_POSN                                  0x7
#define _LCDD11_SEG31_POSITION                              0x7
#define _LCDD11_SEG31_SIZE                                  0x1
#define _LCDD11_SEG31_LENGTH                                0x1
#define _LCDD11_SEG31_MASK                                  0x80

// Register: LCDD12
#define LCDD12 LCDD12
extern volatile unsigned char           LCDD12              __at(0x11C);
#ifndef _LIB_BUILD
asm("LCDD12 equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG00                  :1;
        unsigned SEG01                  :1;
        unsigned SEG02                  :1;
        unsigned SEG03                  :1;
        unsigned SEG04                  :1;
        unsigned SEG05                  :1;
        unsigned SEG06                  :1;
        unsigned SEG07                  :1;
    };
} LCDD12bits_t;
extern volatile LCDD12bits_t LCDD12bits __at(0x11C);
// bitfield macros
#define _LCDD12_SEG00_POSN                                  0x0
#define _LCDD12_SEG00_POSITION                              0x0
#define _LCDD12_SEG00_SIZE                                  0x1
#define _LCDD12_SEG00_LENGTH                                0x1
#define _LCDD12_SEG00_MASK                                  0x1
#define _LCDD12_SEG01_POSN                                  0x1
#define _LCDD12_SEG01_POSITION                              0x1
#define _LCDD12_SEG01_SIZE                                  0x1
#define _LCDD12_SEG01_LENGTH                                0x1
#define _LCDD12_SEG01_MASK                                  0x2
#define _LCDD12_SEG02_POSN                                  0x2
#define _LCDD12_SEG02_POSITION                              0x2
#define _LCDD12_SEG02_SIZE                                  0x1
#define _LCDD12_SEG02_LENGTH                                0x1
#define _LCDD12_SEG02_MASK                                  0x4
#define _LCDD12_SEG03_POSN                                  0x3
#define _LCDD12_SEG03_POSITION                              0x3
#define _LCDD12_SEG03_SIZE                                  0x1
#define _LCDD12_SEG03_LENGTH                                0x1
#define _LCDD12_SEG03_MASK                                  0x8
#define _LCDD12_SEG04_POSN                                  0x4
#define _LCDD12_SEG04_POSITION                              0x4
#define _LCDD12_SEG04_SIZE                                  0x1
#define _LCDD12_SEG04_LENGTH                                0x1
#define _LCDD12_SEG04_MASK                                  0x10
#define _LCDD12_SEG05_POSN                                  0x5
#define _LCDD12_SEG05_POSITION                              0x5
#define _LCDD12_SEG05_SIZE                                  0x1
#define _LCDD12_SEG05_LENGTH                                0x1
#define _LCDD12_SEG05_MASK                                  0x20
#define _LCDD12_SEG06_POSN                                  0x6
#define _LCDD12_SEG06_POSITION                              0x6
#define _LCDD12_SEG06_SIZE                                  0x1
#define _LCDD12_SEG06_LENGTH                                0x1
#define _LCDD12_SEG06_MASK                                  0x40
#define _LCDD12_SEG07_POSN                                  0x7
#define _LCDD12_SEG07_POSITION                              0x7
#define _LCDD12_SEG07_SIZE                                  0x1
#define _LCDD12_SEG07_LENGTH                                0x1
#define _LCDD12_SEG07_MASK                                  0x80

// Register: LCDD13
#define LCDD13 LCDD13
extern volatile unsigned char           LCDD13              __at(0x11D);
#ifndef _LIB_BUILD
asm("LCDD13 equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG08                  :1;
        unsigned SEG09                  :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
} LCDD13bits_t;
extern volatile LCDD13bits_t LCDD13bits __at(0x11D);
// bitfield macros
#define _LCDD13_SEG08_POSN                                  0x0
#define _LCDD13_SEG08_POSITION                              0x0
#define _LCDD13_SEG08_SIZE                                  0x1
#define _LCDD13_SEG08_LENGTH                                0x1
#define _LCDD13_SEG08_MASK                                  0x1
#define _LCDD13_SEG09_POSN                                  0x1
#define _LCDD13_SEG09_POSITION                              0x1
#define _LCDD13_SEG09_SIZE                                  0x1
#define _LCDD13_SEG09_LENGTH                                0x1
#define _LCDD13_SEG09_MASK                                  0x2
#define _LCDD13_SEG10_POSN                                  0x2
#define _LCDD13_SEG10_POSITION                              0x2
#define _LCDD13_SEG10_SIZE                                  0x1
#define _LCDD13_SEG10_LENGTH                                0x1
#define _LCDD13_SEG10_MASK                                  0x4
#define _LCDD13_SEG11_POSN                                  0x3
#define _LCDD13_SEG11_POSITION                              0x3
#define _LCDD13_SEG11_SIZE                                  0x1
#define _LCDD13_SEG11_LENGTH                                0x1
#define _LCDD13_SEG11_MASK                                  0x8
#define _LCDD13_SEG12_POSN                                  0x4
#define _LCDD13_SEG12_POSITION                              0x4
#define _LCDD13_SEG12_SIZE                                  0x1
#define _LCDD13_SEG12_LENGTH                                0x1
#define _LCDD13_SEG12_MASK                                  0x10
#define _LCDD13_SEG13_POSN                                  0x5
#define _LCDD13_SEG13_POSITION                              0x5
#define _LCDD13_SEG13_SIZE                                  0x1
#define _LCDD13_SEG13_LENGTH                                0x1
#define _LCDD13_SEG13_MASK                                  0x20
#define _LCDD13_SEG14_POSN                                  0x6
#define _LCDD13_SEG14_POSITION                              0x6
#define _LCDD13_SEG14_SIZE                                  0x1
#define _LCDD13_SEG14_LENGTH                                0x1
#define _LCDD13_SEG14_MASK                                  0x40
#define _LCDD13_SEG15_POSN                                  0x7
#define _LCDD13_SEG15_POSITION                              0x7
#define _LCDD13_SEG15_SIZE                                  0x1
#define _LCDD13_SEG15_LENGTH                                0x1
#define _LCDD13_SEG15_MASK                                  0x80

// Register: LCDD14
#define LCDD14 LCDD14
extern volatile unsigned char           LCDD14              __at(0x11E);
#ifndef _LIB_BUILD
asm("LCDD14 equ 011Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16                  :1;
        unsigned SEG17                  :1;
        unsigned SEG18                  :1;
        unsigned SEG19                  :1;
        unsigned SEG20                  :1;
        unsigned SEG21                  :1;
        unsigned SEG22                  :1;
        unsigned SEG23                  :1;
    };
} LCDD14bits_t;
extern volatile LCDD14bits_t LCDD14bits __at(0x11E);
// bitfield macros
#define _LCDD14_SEG16_POSN                                  0x0
#define _LCDD14_SEG16_POSITION                              0x0
#define _LCDD14_SEG16_SIZE                                  0x1
#define _LCDD14_SEG16_LENGTH                                0x1
#define _LCDD14_SEG16_MASK                                  0x1
#define _LCDD14_SEG17_POSN                                  0x1
#define _LCDD14_SEG17_POSITION                              0x1
#define _LCDD14_SEG17_SIZE                                  0x1
#define _LCDD14_SEG17_LENGTH                                0x1
#define _LCDD14_SEG17_MASK                                  0x2
#define _LCDD14_SEG18_POSN                                  0x2
#define _LCDD14_SEG18_POSITION                              0x2
#define _LCDD14_SEG18_SIZE                                  0x1
#define _LCDD14_SEG18_LENGTH                                0x1
#define _LCDD14_SEG18_MASK                                  0x4
#define _LCDD14_SEG19_POSN                                  0x3
#define _LCDD14_SEG19_POSITION                              0x3
#define _LCDD14_SEG19_SIZE                                  0x1
#define _LCDD14_SEG19_LENGTH                                0x1
#define _LCDD14_SEG19_MASK                                  0x8
#define _LCDD14_SEG20_POSN                                  0x4
#define _LCDD14_SEG20_POSITION                              0x4
#define _LCDD14_SEG20_SIZE                                  0x1
#define _LCDD14_SEG20_LENGTH                                0x1
#define _LCDD14_SEG20_MASK                                  0x10
#define _LCDD14_SEG21_POSN                                  0x5
#define _LCDD14_SEG21_POSITION                              0x5
#define _LCDD14_SEG21_SIZE                                  0x1
#define _LCDD14_SEG21_LENGTH                                0x1
#define _LCDD14_SEG21_MASK                                  0x20
#define _LCDD14_SEG22_POSN                                  0x6
#define _LCDD14_SEG22_POSITION                              0x6
#define _LCDD14_SEG22_SIZE                                  0x1
#define _LCDD14_SEG22_LENGTH                                0x1
#define _LCDD14_SEG22_MASK                                  0x40
#define _LCDD14_SEG23_POSN                                  0x7
#define _LCDD14_SEG23_POSITION                              0x7
#define _LCDD14_SEG23_SIZE                                  0x1
#define _LCDD14_SEG23_LENGTH                                0x1
#define _LCDD14_SEG23_MASK                                  0x80

// Register: LCDD15
#define LCDD15 LCDD15
extern volatile unsigned char           LCDD15              __at(0x11F);
#ifndef _LIB_BUILD
asm("LCDD15 equ 011Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG24                  :1;
        unsigned SEG25                  :1;
        unsigned SEG26                  :1;
        unsigned SEG27                  :1;
        unsigned SEG28                  :1;
        unsigned SEG29                  :1;
        unsigned SEG30                  :1;
        unsigned SEG31                  :1;
    };
} LCDD15bits_t;
extern volatile LCDD15bits_t LCDD15bits __at(0x11F);
// bitfield macros
#define _LCDD15_SEG24_POSN                                  0x0
#define _LCDD15_SEG24_POSITION                              0x0
#define _LCDD15_SEG24_SIZE                                  0x1
#define _LCDD15_SEG24_LENGTH                                0x1
#define _LCDD15_SEG24_MASK                                  0x1
#define _LCDD15_SEG25_POSN                                  0x1
#define _LCDD15_SEG25_POSITION                              0x1
#define _LCDD15_SEG25_SIZE                                  0x1
#define _LCDD15_SEG25_LENGTH                                0x1
#define _LCDD15_SEG25_MASK                                  0x2
#define _LCDD15_SEG26_POSN                                  0x2
#define _LCDD15_SEG26_POSITION                              0x2
#define _LCDD15_SEG26_SIZE                                  0x1
#define _LCDD15_SEG26_LENGTH                                0x1
#define _LCDD15_SEG26_MASK                                  0x4
#define _LCDD15_SEG27_POSN                                  0x3
#define _LCDD15_SEG27_POSITION                              0x3
#define _LCDD15_SEG27_SIZE                                  0x1
#define _LCDD15_SEG27_LENGTH                                0x1
#define _LCDD15_SEG27_MASK                                  0x8
#define _LCDD15_SEG28_POSN                                  0x4
#define _LCDD15_SEG28_POSITION                              0x4
#define _LCDD15_SEG28_SIZE                                  0x1
#define _LCDD15_SEG28_LENGTH                                0x1
#define _LCDD15_SEG28_MASK                                  0x10
#define _LCDD15_SEG29_POSN                                  0x5
#define _LCDD15_SEG29_POSITION                              0x5
#define _LCDD15_SEG29_SIZE                                  0x1
#define _LCDD15_SEG29_LENGTH                                0x1
#define _LCDD15_SEG29_MASK                                  0x20
#define _LCDD15_SEG30_POSN                                  0x6
#define _LCDD15_SEG30_POSITION                              0x6
#define _LCDD15_SEG30_SIZE                                  0x1
#define _LCDD15_SEG30_LENGTH                                0x1
#define _LCDD15_SEG30_MASK                                  0x40
#define _LCDD15_SEG31_POSN                                  0x7
#define _LCDD15_SEG31_POSITION                              0x7
#define _LCDD15_SEG31_SIZE                                  0x1
#define _LCDD15_SEG31_LENGTH                                0x1
#define _LCDD15_SEG31_MASK                                  0x80

// Register: TRISF
#define TRISF TRISF
extern volatile unsigned char           TRISF               __at(0x187);
#ifndef _LIB_BUILD
asm("TRISF equ 0187h");
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
extern volatile TRISFbits_t TRISFbits __at(0x187);
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
extern volatile unsigned char           TRISG               __at(0x188);
#ifndef _LIB_BUILD
asm("TRISG equ 0188h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
        unsigned TRISG5                 :1;
        unsigned TRISG6                 :1;
        unsigned TRISG7                 :1;
    };
} TRISGbits_t;
extern volatile TRISGbits_t TRISGbits __at(0x188);
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
#define _TRISG_TRISG5_POSN                                  0x5
#define _TRISG_TRISG5_POSITION                              0x5
#define _TRISG_TRISG5_SIZE                                  0x1
#define _TRISG_TRISG5_LENGTH                                0x1
#define _TRISG_TRISG5_MASK                                  0x20
#define _TRISG_TRISG6_POSN                                  0x6
#define _TRISG_TRISG6_POSITION                              0x6
#define _TRISG_TRISG6_SIZE                                  0x1
#define _TRISG_TRISG6_LENGTH                                0x1
#define _TRISG_TRISG6_MASK                                  0x40
#define _TRISG_TRISG7_POSN                                  0x7
#define _TRISG_TRISG7_POSITION                              0x7
#define _TRISG_TRISG7_SIZE                                  0x1
#define _TRISG_TRISG7_LENGTH                                0x1
#define _TRISG_TRISG7_MASK                                  0x80

// Register: PMDATA
#define PMDATA PMDATA
extern volatile unsigned char           PMDATA              __at(0x18C);
#ifndef _LIB_BUILD
asm("PMDATA equ 018Ch");
#endif

// Register: PMADR
#define PMADR PMADR
extern volatile unsigned char           PMADR               __at(0x18D);
#ifndef _LIB_BUILD
asm("PMADR equ 018Dh");
#endif

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x18E);
#ifndef _LIB_BUILD
asm("PMDATH equ 018Eh");
#endif

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x18F);
#ifndef _LIB_BUILD
asm("PMADRH equ 018Fh");
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
// ADCON0<ADCS0>
extern volatile __bit                   ADCS0               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,7)
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
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// LCDCON<BIAS>
extern volatile __bit                   BIAS                __at(0x87C);	// @ (0x10F * 8 + 4)
#define                                 BIAS_bit            _BIT_ACCESS(LCDCON,4)
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
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,5)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON<CKP>
extern volatile __bit                   CKP                 __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON,4)
// LCDCON<CS0>
extern volatile __bit                   CS0                 __at(0x87A);	// @ (0x10F * 8 + 2)
#define                                 CS0_bit             _BIT_ACCESS(LCDCON,2)
// LCDCON<CS1>
extern volatile __bit                   CS1                 __at(0x87B);	// @ (0x10F * 8 + 3)
#define                                 CS1_bit             _BIT_ACCESS(LCDCON,3)
// SSPSTAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSPSTAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// SSPSTAT<D_A>
extern volatile __bit                   D_A                 __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,2)
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
// TRISE<IBF>
extern volatile __bit                   IBF                 __at(0x44F);	// @ (0x89 * 8 + 7)
#define                                 IBF_bit             _BIT_ACCESS(TRISE,7)
// TRISE<IBOV>
extern volatile __bit                   IBOV                __at(0x44D);	// @ (0x89 * 8 + 5)
#define                                 IBOV_bit            _BIT_ACCESS(TRISE,5)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// LCDCON<LCDEN>
extern volatile __bit                   LCDEN               __at(0x87F);	// @ (0x10F * 8 + 7)
#define                                 LCDEN_bit           _BIT_ACCESS(LCDCON,7)
// PIE1<LCDIE>
extern volatile __bit                   LCDIE               __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 LCDIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<LCDIF>
extern volatile __bit                   LCDIF               __at(0x67);	// @ (0xC * 8 + 7)
#define                                 LCDIF_bit           _BIT_ACCESS(PIR1,7)
// LCDCON<LMUX0>
extern volatile __bit                   LMUX0               __at(0x878);	// @ (0x10F * 8 + 0)
#define                                 LMUX0_bit           _BIT_ACCESS(LCDCON,0)
// LCDCON<LMUX1>
extern volatile __bit                   LMUX1               __at(0x879);	// @ (0x10F * 8 + 1)
#define                                 LMUX1_bit           _BIT_ACCESS(LCDCON,1)
// LCDPS<LP0>
extern volatile __bit                   LP0                 __at(0x870);	// @ (0x10E * 8 + 0)
#define                                 LP0_bit             _BIT_ACCESS(LCDPS,0)
// LCDPS<LP1>
extern volatile __bit                   LP1                 __at(0x871);	// @ (0x10E * 8 + 1)
#define                                 LP1_bit             _BIT_ACCESS(LCDPS,1)
// LCDPS<LP2>
extern volatile __bit                   LP2                 __at(0x872);	// @ (0x10E * 8 + 2)
#define                                 LP2_bit             _BIT_ACCESS(LCDPS,2)
// LCDPS<LP3>
extern volatile __bit                   LP3                 __at(0x873);	// @ (0x10E * 8 + 3)
#define                                 LP3_bit             _BIT_ACCESS(LCDPS,3)
// TRISE<OBF>
extern volatile __bit                   OBF                 __at(0x44E);	// @ (0x89 * 8 + 6)
#define                                 OBF_bit             _BIT_ACCESS(TRISE,6)
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x4FA);	// @ (0x9F * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ADCON1,2)
// ADCON1<PCFG3>
extern volatile __bit                   PCFG3               __at(0x4FB);	// @ (0x9F * 8 + 3)
#define                                 PCFG3_bit           _BIT_ACCESS(ADCON1,3)
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
// TRISE<PSPMODE>
extern volatile __bit                   PSPMODE             __at(0x44C);	// @ (0x89 * 8 + 4)
#define                                 PSPMODE_bit         _BIT_ACCESS(TRISE,4)
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
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0x860);	// @ (0x10C * 8 + 0)
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
// PORTE<RE4>
extern volatile __bit                   RE4                 __at(0x4C);	// @ (0x9 * 8 + 4)
#define                                 RE4_bit             _BIT_ACCESS(PORTE,4)
// PORTE<RE5>
extern volatile __bit                   RE5                 __at(0x4D);	// @ (0x9 * 8 + 5)
#define                                 RE5_bit             _BIT_ACCESS(PORTE,5)
// PORTE<RE6>
extern volatile __bit                   RE6                 __at(0x4E);	// @ (0x9 * 8 + 6)
#define                                 RE6_bit             _BIT_ACCESS(PORTE,6)
// PORTE<RE7>
extern volatile __bit                   RE7                 __at(0x4F);	// @ (0x9 * 8 + 7)
#define                                 RE7_bit             _BIT_ACCESS(PORTE,7)
// SSPSTAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSPSTAT,2)
// PORTF<RF0>
extern volatile __bit                   RF0                 __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 RF0_bit             _BIT_ACCESS(PORTF,0)
// PORTF<RF1>
extern volatile __bit                   RF1                 __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 RF1_bit             _BIT_ACCESS(PORTF,1)
// PORTF<RF2>
extern volatile __bit                   RF2                 __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 RF2_bit             _BIT_ACCESS(PORTF,2)
// PORTF<RF3>
extern volatile __bit                   RF3                 __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 RF3_bit             _BIT_ACCESS(PORTF,3)
// PORTF<RF4>
extern volatile __bit                   RF4                 __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 RF4_bit             _BIT_ACCESS(PORTF,4)
// PORTF<RF5>
extern volatile __bit                   RF5                 __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 RF5_bit             _BIT_ACCESS(PORTF,5)
// PORTF<RF6>
extern volatile __bit                   RF6                 __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 RF6_bit             _BIT_ACCESS(PORTF,6)
// PORTF<RF7>
extern volatile __bit                   RF7                 __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 RF7_bit             _BIT_ACCESS(PORTF,7)
// PORTG<RG0>
extern volatile __bit                   RG0                 __at(0x840);	// @ (0x108 * 8 + 0)
#define                                 RG0_bit             _BIT_ACCESS(PORTG,0)
// PORTG<RG1>
extern volatile __bit                   RG1                 __at(0x841);	// @ (0x108 * 8 + 1)
#define                                 RG1_bit             _BIT_ACCESS(PORTG,1)
// PORTG<RG2>
extern volatile __bit                   RG2                 __at(0x842);	// @ (0x108 * 8 + 2)
#define                                 RG2_bit             _BIT_ACCESS(PORTG,2)
// PORTG<RG3>
extern volatile __bit                   RG3                 __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 RG3_bit             _BIT_ACCESS(PORTG,3)
// PORTG<RG4>
extern volatile __bit                   RG4                 __at(0x844);	// @ (0x108 * 8 + 4)
#define                                 RG4_bit             _BIT_ACCESS(PORTG,4)
// PORTG<RG5>
extern volatile __bit                   RG5                 __at(0x845);	// @ (0x108 * 8 + 5)
#define                                 RG5_bit             _BIT_ACCESS(PORTG,5)
// PORTG<RG6>
extern volatile __bit                   RG6                 __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 RG6_bit             _BIT_ACCESS(PORTG,6)
// PORTG<RG7>
extern volatile __bit                   RG7                 __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 RG7_bit             _BIT_ACCESS(PORTG,7)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// SSPSTAT<R_W>
extern volatile __bit                   R_W                 __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// LCDSE<SE0>
extern volatile __bit                   SE0                 __at(0x868);	// @ (0x10D * 8 + 0)
#define                                 SE0_bit             _BIT_ACCESS(LCDSE,0)
// LCDSE<SE12>
extern volatile __bit                   SE12                __at(0x86B);	// @ (0x10D * 8 + 3)
#define                                 SE12_bit            _BIT_ACCESS(LCDSE,3)
// LCDSE<SE16>
extern volatile __bit                   SE16                __at(0x86C);	// @ (0x10D * 8 + 4)
#define                                 SE16_bit            _BIT_ACCESS(LCDSE,4)
// LCDSE<SE20>
extern volatile __bit                   SE20                __at(0x86D);	// @ (0x10D * 8 + 5)
#define                                 SE20_bit            _BIT_ACCESS(LCDSE,5)
// LCDSE<SE27>
extern volatile __bit                   SE27                __at(0x86E);	// @ (0x10D * 8 + 6)
#define                                 SE27_bit            _BIT_ACCESS(LCDSE,6)
// LCDSE<SE29>
extern volatile __bit                   SE29                __at(0x86F);	// @ (0x10D * 8 + 7)
#define                                 SE29_bit            _BIT_ACCESS(LCDSE,7)
// LCDSE<SE5>
extern volatile __bit                   SE5                 __at(0x869);	// @ (0x10D * 8 + 1)
#define                                 SE5_bit             _BIT_ACCESS(LCDSE,1)
// LCDSE<SE9>
extern volatile __bit                   SE9                 __at(0x86A);	// @ (0x10D * 8 + 2)
#define                                 SE9_bit             _BIT_ACCESS(LCDSE,2)
// LCDCON<SLPEN>
extern volatile __bit                   SLPEN               __at(0x87E);	// @ (0x10F * 8 + 6)
#define                                 SLPEN_bit           _BIT_ACCESS(LCDCON,6)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
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
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 T1INSYNC_bit        _BIT_ACCESS(T1CON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
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
// TRISE<TRISE4>
extern volatile __bit                   TRISE4              __at(0x44C);	// @ (0x89 * 8 + 4)
#define                                 TRISE4_bit          _BIT_ACCESS(TRISE,4)
// TRISE<TRISE5>
extern volatile __bit                   TRISE5              __at(0x44D);	// @ (0x89 * 8 + 5)
#define                                 TRISE5_bit          _BIT_ACCESS(TRISE,5)
// TRISE<TRISE6>
extern volatile __bit                   TRISE6              __at(0x44E);	// @ (0x89 * 8 + 6)
#define                                 TRISE6_bit          _BIT_ACCESS(TRISE,6)
// TRISE<TRISE7>
extern volatile __bit                   TRISE7              __at(0x44F);	// @ (0x89 * 8 + 7)
#define                                 TRISE7_bit          _BIT_ACCESS(TRISE,7)
// TRISF<TRISF0>
extern volatile __bit                   TRISF0              __at(0xC38);	// @ (0x187 * 8 + 0)
#define                                 TRISF0_bit          _BIT_ACCESS(TRISF,0)
// TRISF<TRISF1>
extern volatile __bit                   TRISF1              __at(0xC39);	// @ (0x187 * 8 + 1)
#define                                 TRISF1_bit          _BIT_ACCESS(TRISF,1)
// TRISF<TRISF2>
extern volatile __bit                   TRISF2              __at(0xC3A);	// @ (0x187 * 8 + 2)
#define                                 TRISF2_bit          _BIT_ACCESS(TRISF,2)
// TRISF<TRISF3>
extern volatile __bit                   TRISF3              __at(0xC3B);	// @ (0x187 * 8 + 3)
#define                                 TRISF3_bit          _BIT_ACCESS(TRISF,3)
// TRISF<TRISF4>
extern volatile __bit                   TRISF4              __at(0xC3C);	// @ (0x187 * 8 + 4)
#define                                 TRISF4_bit          _BIT_ACCESS(TRISF,4)
// TRISF<TRISF5>
extern volatile __bit                   TRISF5              __at(0xC3D);	// @ (0x187 * 8 + 5)
#define                                 TRISF5_bit          _BIT_ACCESS(TRISF,5)
// TRISF<TRISF6>
extern volatile __bit                   TRISF6              __at(0xC3E);	// @ (0x187 * 8 + 6)
#define                                 TRISF6_bit          _BIT_ACCESS(TRISF,6)
// TRISF<TRISF7>
extern volatile __bit                   TRISF7              __at(0xC3F);	// @ (0x187 * 8 + 7)
#define                                 TRISF7_bit          _BIT_ACCESS(TRISF,7)
// TRISG<TRISG0>
extern volatile __bit                   TRISG0              __at(0xC40);	// @ (0x188 * 8 + 0)
#define                                 TRISG0_bit          _BIT_ACCESS(TRISG,0)
// TRISG<TRISG1>
extern volatile __bit                   TRISG1              __at(0xC41);	// @ (0x188 * 8 + 1)
#define                                 TRISG1_bit          _BIT_ACCESS(TRISG,1)
// TRISG<TRISG2>
extern volatile __bit                   TRISG2              __at(0xC42);	// @ (0x188 * 8 + 2)
#define                                 TRISG2_bit          _BIT_ACCESS(TRISG,2)
// TRISG<TRISG3>
extern volatile __bit                   TRISG3              __at(0xC43);	// @ (0x188 * 8 + 3)
#define                                 TRISG3_bit          _BIT_ACCESS(TRISG,3)
// TRISG<TRISG4>
extern volatile __bit                   TRISG4              __at(0xC44);	// @ (0x188 * 8 + 4)
#define                                 TRISG4_bit          _BIT_ACCESS(TRISG,4)
// TRISG<TRISG5>
extern volatile __bit                   TRISG5              __at(0xC45);	// @ (0x188 * 8 + 5)
#define                                 TRISG5_bit          _BIT_ACCESS(TRISG,5)
// TRISG<TRISG6>
extern volatile __bit                   TRISG6              __at(0xC46);	// @ (0x188 * 8 + 6)
#define                                 TRISG6_bit          _BIT_ACCESS(TRISG,6)
// TRISG<TRISG7>
extern volatile __bit                   TRISG7              __at(0xC47);	// @ (0x188 * 8 + 7)
#define                                 TRISG7_bit          _BIT_ACCESS(TRISG,7)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// LCDCON<VGEN>
extern volatile __bit                   VGEN                __at(0x87C);	// @ (0x10F * 8 + 4)
#define                                 VGEN_bit            _BIT_ACCESS(LCDCON,4)
// SSPCON<WCOL>
extern volatile __bit                   WCOL                __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON,7)
// LCDCON<WERR>
extern volatile __bit                   WERR                __at(0x87D);	// @ (0x10F * 8 + 5)
#define                                 WERR_bit            _BIT_ACCESS(LCDCON,5)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSPSTAT<nA>
extern volatile __bit                   nA                  __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSPSTAT,5)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,2)
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
// SSPSTAT<nW>
extern volatile __bit                   nW                  __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSPSTAT,2)

#endif // _PIC16CR926_H_
