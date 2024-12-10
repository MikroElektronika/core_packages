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

#ifndef _PIC16F916_H_
#define _PIC16F916_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F916
 */
#ifndef _XC_H_
#warning Header file pic16f916.h included directly. Use #include <xc.h> instead.
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

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0x009);
#ifndef _LIB_BUILD
asm("PORTE equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned RE3                    :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0x009);
// bitfield macros
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
        unsigned EEIF                   :1;
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
#define _PIR1_EEIF_POSN                                     0x7
#define _PIR1_EEIF_POSITION                                 0x7
#define _PIR1_EEIF_SIZE                                     0x1
#define _PIR1_EEIF_LENGTH                                   0x1
#define _PIR1_EEIF_MASK                                     0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x00D);
#ifndef _LIB_BUILD
asm("PIR2 equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned LVDIF                  :1;
        unsigned                        :1;
        unsigned LCDIF                  :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned OSFIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x00D);
// bitfield macros
#define _PIR2_LVDIF_POSN                                    0x2
#define _PIR2_LVDIF_POSITION                                0x2
#define _PIR2_LVDIF_SIZE                                    0x1
#define _PIR2_LVDIF_LENGTH                                  0x1
#define _PIR2_LVDIF_MASK                                    0x4
#define _PIR2_LCDIF_POSN                                    0x4
#define _PIR2_LCDIF_POSITION                                0x4
#define _PIR2_LCDIF_SIZE                                    0x1
#define _PIR2_LCDIF_LENGTH                                  0x1
#define _PIR2_LCDIF_MASK                                    0x10
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
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned T1GE                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
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
#define _T1CON_T1GE_POSN                                    0x6
#define _T1CON_T1GE_POSITION                                0x6
#define _T1CON_T1GE_SIZE                                    0x1
#define _T1CON_T1GE_LENGTH                                  0x1
#define _T1CON_T1GE_MASK                                    0x40
#define _T1CON_T1INSYNC_POSN                                0x2
#define _T1CON_T1INSYNC_POSITION                            0x2
#define _T1CON_T1INSYNC_SIZE                                0x1
#define _T1CON_T1INSYNC_LENGTH                              0x1
#define _T1CON_T1INSYNC_MASK                                0x4

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
        unsigned CCP1Y                  :1;
        unsigned CCP1X                  :1;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x017);
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
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
        unsigned CHS                    :3;
        unsigned VCFG                   :2;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
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
#define _ADCON0_CHS_SIZE                                    0x3
#define _ADCON0_CHS_LENGTH                                  0x3
#define _ADCON0_CHS_MASK                                    0x1C
#define _ADCON0_VCFG_POSN                                   0x5
#define _ADCON0_VCFG_POSITION                               0x5
#define _ADCON0_VCFG_SIZE                                   0x2
#define _ADCON0_VCFG_LENGTH                                 0x2
#define _ADCON0_VCFG_MASK                                   0x60
#define _ADCON0_ADFM_POSN                                   0x7
#define _ADCON0_ADFM_POSITION                               0x7
#define _ADCON0_ADFM_SIZE                                   0x1
#define _ADCON0_ADFM_LENGTH                                 0x1
#define _ADCON0_ADFM_MASK                                   0x80
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
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
#define _ADCON0_VCFG0_POSN                                  0x5
#define _ADCON0_VCFG0_POSITION                              0x5
#define _ADCON0_VCFG0_SIZE                                  0x1
#define _ADCON0_VCFG0_LENGTH                                0x1
#define _ADCON0_VCFG0_MASK                                  0x20
#define _ADCON0_VCFG1_POSN                                  0x6
#define _ADCON0_VCFG1_POSITION                              0x6
#define _ADCON0_VCFG1_SIZE                                  0x1
#define _ADCON0_VCFG1_LENGTH                                0x1
#define _ADCON0_VCFG1_MASK                                  0x40
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2

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

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0x089);
#ifndef _LIB_BUILD
asm("TRISE equ 089h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned TRISE3                 :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0x089);
// bitfield macros
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
        unsigned EEIE                   :1;
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
#define _PIE1_EEIE_POSN                                     0x7
#define _PIE1_EEIE_POSITION                                 0x7
#define _PIE1_EEIE_SIZE                                     0x1
#define _PIE1_EEIE_LENGTH                                   0x1
#define _PIE1_EEIE_MASK                                     0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x08D);
#ifndef _LIB_BUILD
asm("PIE2 equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned LVDIE                  :1;
        unsigned                        :1;
        unsigned LCDIE                  :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned OSFIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x08D);
// bitfield macros
#define _PIE2_LVDIE_POSN                                    0x2
#define _PIE2_LVDIE_POSITION                                0x2
#define _PIE2_LVDIE_SIZE                                    0x1
#define _PIE2_LVDIE_LENGTH                                  0x1
#define _PIE2_LVDIE_MASK                                    0x4
#define _PIE2_LCDIE_POSN                                    0x4
#define _PIE2_LCDIE_POSITION                                0x4
#define _PIE2_LCDIE_SIZE                                    0x1
#define _PIE2_LCDIE_LENGTH                                  0x1
#define _PIE2_LCDIE_MASK                                    0x10
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

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0x091);
#ifndef _LIB_BUILD
asm("ANSEL equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AN                     :8;
    };
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned AN4                    :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x091);
// bitfield macros
#define _ANSEL_AN_POSN                                      0x0
#define _ANSEL_AN_POSITION                                  0x0
#define _ANSEL_AN_SIZE                                      0x8
#define _ANSEL_AN_LENGTH                                    0x8
#define _ANSEL_AN_MASK                                      0xFF
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
#define _ANSEL_AN0_POSN                                     0x0
#define _ANSEL_AN0_POSITION                                 0x0
#define _ANSEL_AN0_SIZE                                     0x1
#define _ANSEL_AN0_LENGTH                                   0x1
#define _ANSEL_AN0_MASK                                     0x1
#define _ANSEL_AN1_POSN                                     0x1
#define _ANSEL_AN1_POSITION                                 0x1
#define _ANSEL_AN1_SIZE                                     0x1
#define _ANSEL_AN1_LENGTH                                   0x1
#define _ANSEL_AN1_MASK                                     0x2
#define _ANSEL_AN2_POSN                                     0x2
#define _ANSEL_AN2_POSITION                                 0x2
#define _ANSEL_AN2_SIZE                                     0x1
#define _ANSEL_AN2_LENGTH                                   0x1
#define _ANSEL_AN2_MASK                                     0x4
#define _ANSEL_AN3_POSN                                     0x3
#define _ANSEL_AN3_POSITION                                 0x3
#define _ANSEL_AN3_SIZE                                     0x1
#define _ANSEL_AN3_LENGTH                                   0x1
#define _ANSEL_AN3_MASK                                     0x8
#define _ANSEL_AN4_POSN                                     0x4
#define _ANSEL_AN4_POSITION                                 0x4
#define _ANSEL_AN4_SIZE                                     0x1
#define _ANSEL_AN4_LENGTH                                   0x1
#define _ANSEL_AN4_MASK                                     0x10

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
// aliases
extern volatile unsigned char           WPU                 __at(0x095);
#ifndef _LIB_BUILD
asm("WPU equ 095h");
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
    struct {
        unsigned WPU0                   :1;
        unsigned WPU1                   :1;
        unsigned WPU2                   :1;
        unsigned WPU3                   :1;
        unsigned WPU4                   :1;
        unsigned WPU5                   :1;
        unsigned WPU6                   :1;
        unsigned WPU7                   :1;
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
#define _WPUB_WPU0_POSN                                     0x0
#define _WPUB_WPU0_POSITION                                 0x0
#define _WPUB_WPU0_SIZE                                     0x1
#define _WPUB_WPU0_LENGTH                                   0x1
#define _WPUB_WPU0_MASK                                     0x1
#define _WPUB_WPU1_POSN                                     0x1
#define _WPUB_WPU1_POSITION                                 0x1
#define _WPUB_WPU1_SIZE                                     0x1
#define _WPUB_WPU1_LENGTH                                   0x1
#define _WPUB_WPU1_MASK                                     0x2
#define _WPUB_WPU2_POSN                                     0x2
#define _WPUB_WPU2_POSITION                                 0x2
#define _WPUB_WPU2_SIZE                                     0x1
#define _WPUB_WPU2_LENGTH                                   0x1
#define _WPUB_WPU2_MASK                                     0x4
#define _WPUB_WPU3_POSN                                     0x3
#define _WPUB_WPU3_POSITION                                 0x3
#define _WPUB_WPU3_SIZE                                     0x1
#define _WPUB_WPU3_LENGTH                                   0x1
#define _WPUB_WPU3_MASK                                     0x8
#define _WPUB_WPU4_POSN                                     0x4
#define _WPUB_WPU4_POSITION                                 0x4
#define _WPUB_WPU4_SIZE                                     0x1
#define _WPUB_WPU4_LENGTH                                   0x1
#define _WPUB_WPU4_MASK                                     0x10
#define _WPUB_WPU5_POSN                                     0x5
#define _WPUB_WPU5_POSITION                                 0x5
#define _WPUB_WPU5_SIZE                                     0x1
#define _WPUB_WPU5_LENGTH                                   0x1
#define _WPUB_WPU5_MASK                                     0x20
#define _WPUB_WPU6_POSN                                     0x6
#define _WPUB_WPU6_POSITION                                 0x6
#define _WPUB_WPU6_SIZE                                     0x1
#define _WPUB_WPU6_LENGTH                                   0x1
#define _WPUB_WPU6_MASK                                     0x40
#define _WPUB_WPU7_POSN                                     0x7
#define _WPUB_WPU7_POSITION                                 0x7
#define _WPUB_WPU7_SIZE                                     0x1
#define _WPUB_WPU7_LENGTH                                   0x1
#define _WPUB_WPU7_MASK                                     0x80
// alias bitfield definitions
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
    struct {
        unsigned WPU0                   :1;
        unsigned WPU1                   :1;
        unsigned WPU2                   :1;
        unsigned WPU3                   :1;
        unsigned WPU4                   :1;
        unsigned WPU5                   :1;
        unsigned WPU6                   :1;
        unsigned WPU7                   :1;
    };
} WPUbits_t;
extern volatile WPUbits_t WPUbits __at(0x095);
// bitfield macros
#define _WPU_WPUB_POSN                                      0x0
#define _WPU_WPUB_POSITION                                  0x0
#define _WPU_WPUB_SIZE                                      0x8
#define _WPU_WPUB_LENGTH                                    0x8
#define _WPU_WPUB_MASK                                      0xFF
#define _WPU_WPUB0_POSN                                     0x0
#define _WPU_WPUB0_POSITION                                 0x0
#define _WPU_WPUB0_SIZE                                     0x1
#define _WPU_WPUB0_LENGTH                                   0x1
#define _WPU_WPUB0_MASK                                     0x1
#define _WPU_WPUB1_POSN                                     0x1
#define _WPU_WPUB1_POSITION                                 0x1
#define _WPU_WPUB1_SIZE                                     0x1
#define _WPU_WPUB1_LENGTH                                   0x1
#define _WPU_WPUB1_MASK                                     0x2
#define _WPU_WPUB2_POSN                                     0x2
#define _WPU_WPUB2_POSITION                                 0x2
#define _WPU_WPUB2_SIZE                                     0x1
#define _WPU_WPUB2_LENGTH                                   0x1
#define _WPU_WPUB2_MASK                                     0x4
#define _WPU_WPUB3_POSN                                     0x3
#define _WPU_WPUB3_POSITION                                 0x3
#define _WPU_WPUB3_SIZE                                     0x1
#define _WPU_WPUB3_LENGTH                                   0x1
#define _WPU_WPUB3_MASK                                     0x8
#define _WPU_WPUB4_POSN                                     0x4
#define _WPU_WPUB4_POSITION                                 0x4
#define _WPU_WPUB4_SIZE                                     0x1
#define _WPU_WPUB4_LENGTH                                   0x1
#define _WPU_WPUB4_MASK                                     0x10
#define _WPU_WPUB5_POSN                                     0x5
#define _WPU_WPUB5_POSITION                                 0x5
#define _WPU_WPUB5_SIZE                                     0x1
#define _WPU_WPUB5_LENGTH                                   0x1
#define _WPU_WPUB5_MASK                                     0x20
#define _WPU_WPUB6_POSN                                     0x6
#define _WPU_WPUB6_POSITION                                 0x6
#define _WPU_WPUB6_SIZE                                     0x1
#define _WPU_WPUB6_LENGTH                                   0x1
#define _WPU_WPUB6_MASK                                     0x40
#define _WPU_WPUB7_POSN                                     0x7
#define _WPU_WPUB7_POSITION                                 0x7
#define _WPU_WPUB7_SIZE                                     0x1
#define _WPU_WPUB7_LENGTH                                   0x1
#define _WPU_WPUB7_MASK                                     0x80
#define _WPU_WPU0_POSN                                      0x0
#define _WPU_WPU0_POSITION                                  0x0
#define _WPU_WPU0_SIZE                                      0x1
#define _WPU_WPU0_LENGTH                                    0x1
#define _WPU_WPU0_MASK                                      0x1
#define _WPU_WPU1_POSN                                      0x1
#define _WPU_WPU1_POSITION                                  0x1
#define _WPU_WPU1_SIZE                                      0x1
#define _WPU_WPU1_LENGTH                                    0x1
#define _WPU_WPU1_MASK                                      0x2
#define _WPU_WPU2_POSN                                      0x2
#define _WPU_WPU2_POSITION                                  0x2
#define _WPU_WPU2_SIZE                                      0x1
#define _WPU_WPU2_LENGTH                                    0x1
#define _WPU_WPU2_MASK                                      0x4
#define _WPU_WPU3_POSN                                      0x3
#define _WPU_WPU3_POSITION                                  0x3
#define _WPU_WPU3_SIZE                                      0x1
#define _WPU_WPU3_LENGTH                                    0x1
#define _WPU_WPU3_MASK                                      0x8
#define _WPU_WPU4_POSN                                      0x4
#define _WPU_WPU4_POSITION                                  0x4
#define _WPU_WPU4_SIZE                                      0x1
#define _WPU_WPU4_LENGTH                                    0x1
#define _WPU_WPU4_MASK                                      0x10
#define _WPU_WPU5_POSN                                      0x5
#define _WPU_WPU5_POSITION                                  0x5
#define _WPU_WPU5_SIZE                                      0x1
#define _WPU_WPU5_LENGTH                                    0x1
#define _WPU_WPU5_MASK                                      0x20
#define _WPU_WPU6_POSN                                      0x6
#define _WPU_WPU6_POSITION                                  0x6
#define _WPU_WPU6_SIZE                                      0x1
#define _WPU_WPU6_LENGTH                                    0x1
#define _WPU_WPU6_MASK                                      0x40
#define _WPU_WPU7_POSN                                      0x7
#define _WPU_WPU7_POSITION                                  0x7
#define _WPU_WPU7_SIZE                                      0x1
#define _WPU_WPU7_LENGTH                                    0x1
#define _WPU_WPU7_MASK                                      0x80

// Register: IOCB
#define IOCB IOCB
extern volatile unsigned char           IOCB                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCB equ 096h");
#endif
// aliases
extern volatile unsigned char           IOC                 __at(0x096);
#ifndef _LIB_BUILD
asm("IOC equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCB                   :4;
    };
    struct {
        unsigned                        :4;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned IOC4                   :1;
        unsigned IOC5                   :1;
        unsigned IOC6                   :1;
        unsigned IOC7                   :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits __at(0x096);
// bitfield macros
#define _IOCB_IOCB_POSN                                     0x4
#define _IOCB_IOCB_POSITION                                 0x4
#define _IOCB_IOCB_SIZE                                     0x4
#define _IOCB_IOCB_LENGTH                                   0x4
#define _IOCB_IOCB_MASK                                     0xF0
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
#define _IOCB_IOC4_POSN                                     0x4
#define _IOCB_IOC4_POSITION                                 0x4
#define _IOCB_IOC4_SIZE                                     0x1
#define _IOCB_IOC4_LENGTH                                   0x1
#define _IOCB_IOC4_MASK                                     0x10
#define _IOCB_IOC5_POSN                                     0x5
#define _IOCB_IOC5_POSITION                                 0x5
#define _IOCB_IOC5_SIZE                                     0x1
#define _IOCB_IOC5_LENGTH                                   0x1
#define _IOCB_IOC5_MASK                                     0x20
#define _IOCB_IOC6_POSN                                     0x6
#define _IOCB_IOC6_POSITION                                 0x6
#define _IOCB_IOC6_SIZE                                     0x1
#define _IOCB_IOC6_LENGTH                                   0x1
#define _IOCB_IOC6_MASK                                     0x40
#define _IOCB_IOC7_POSN                                     0x7
#define _IOCB_IOC7_POSITION                                 0x7
#define _IOCB_IOC7_SIZE                                     0x1
#define _IOCB_IOC7_LENGTH                                   0x1
#define _IOCB_IOC7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCB                   :4;
    };
    struct {
        unsigned                        :4;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned IOC4                   :1;
        unsigned IOC5                   :1;
        unsigned IOC6                   :1;
        unsigned IOC7                   :1;
    };
} IOCbits_t;
extern volatile IOCbits_t IOCbits __at(0x096);
// bitfield macros
#define _IOC_IOCB_POSN                                      0x4
#define _IOC_IOCB_POSITION                                  0x4
#define _IOC_IOCB_SIZE                                      0x4
#define _IOC_IOCB_LENGTH                                    0x4
#define _IOC_IOCB_MASK                                      0xF0
#define _IOC_IOCB4_POSN                                     0x4
#define _IOC_IOCB4_POSITION                                 0x4
#define _IOC_IOCB4_SIZE                                     0x1
#define _IOC_IOCB4_LENGTH                                   0x1
#define _IOC_IOCB4_MASK                                     0x10
#define _IOC_IOCB5_POSN                                     0x5
#define _IOC_IOCB5_POSITION                                 0x5
#define _IOC_IOCB5_SIZE                                     0x1
#define _IOC_IOCB5_LENGTH                                   0x1
#define _IOC_IOCB5_MASK                                     0x20
#define _IOC_IOCB6_POSN                                     0x6
#define _IOC_IOCB6_POSITION                                 0x6
#define _IOC_IOCB6_SIZE                                     0x1
#define _IOC_IOCB6_LENGTH                                   0x1
#define _IOC_IOCB6_MASK                                     0x40
#define _IOC_IOCB7_POSN                                     0x7
#define _IOC_IOCB7_POSITION                                 0x7
#define _IOC_IOCB7_SIZE                                     0x1
#define _IOC_IOCB7_LENGTH                                   0x1
#define _IOC_IOCB7_MASK                                     0x80
#define _IOC_IOC4_POSN                                      0x4
#define _IOC_IOC4_POSITION                                  0x4
#define _IOC_IOC4_SIZE                                      0x1
#define _IOC_IOC4_LENGTH                                    0x1
#define _IOC_IOC4_MASK                                      0x10
#define _IOC_IOC5_POSN                                      0x5
#define _IOC_IOC5_POSITION                                  0x5
#define _IOC_IOC5_SIZE                                      0x1
#define _IOC_IOC5_LENGTH                                    0x1
#define _IOC_IOC5_MASK                                      0x20
#define _IOC_IOC6_POSN                                      0x6
#define _IOC_IOC6_POSITION                                  0x6
#define _IOC_IOC6_SIZE                                      0x1
#define _IOC_IOC6_LENGTH                                    0x1
#define _IOC_IOC6_MASK                                      0x40
#define _IOC_IOC7_POSN                                      0x7
#define _IOC_IOC7_POSITION                                  0x7
#define _IOC_IOC7_SIZE                                      0x1
#define _IOC_IOC7_LENGTH                                    0x1
#define _IOC_IOC7_MASK                                      0x80

// Register: CMCON1
#define CMCON1 CMCON1
extern volatile unsigned char           CMCON1              __at(0x097);
#ifndef _LIB_BUILD
asm("CMCON1 equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned T1GSS                  :1;
    };
} CMCON1bits_t;
extern volatile CMCON1bits_t CMCON1bits __at(0x097);
// bitfield macros
#define _CMCON1_C2SYNC_POSN                                 0x0
#define _CMCON1_C2SYNC_POSITION                             0x0
#define _CMCON1_C2SYNC_SIZE                                 0x1
#define _CMCON1_C2SYNC_LENGTH                               0x1
#define _CMCON1_C2SYNC_MASK                                 0x1
#define _CMCON1_T1GSS_POSN                                  0x1
#define _CMCON1_T1GSS_POSITION                              0x1
#define _CMCON1_T1GSS_SIZE                                  0x1
#define _CMCON1_T1GSS_LENGTH                                0x1
#define _CMCON1_T1GSS_MASK                                  0x2

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

// Register: CMCON0
#define CMCON0 CMCON0
extern volatile unsigned char           CMCON0              __at(0x09C);
#ifndef _LIB_BUILD
asm("CMCON0 equ 09Ch");
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
} CMCON0bits_t;
extern volatile CMCON0bits_t CMCON0bits __at(0x09C);
// bitfield macros
#define _CMCON0_CM_POSN                                     0x0
#define _CMCON0_CM_POSITION                                 0x0
#define _CMCON0_CM_SIZE                                     0x3
#define _CMCON0_CM_LENGTH                                   0x3
#define _CMCON0_CM_MASK                                     0x7
#define _CMCON0_CIS_POSN                                    0x3
#define _CMCON0_CIS_POSITION                                0x3
#define _CMCON0_CIS_SIZE                                    0x1
#define _CMCON0_CIS_LENGTH                                  0x1
#define _CMCON0_CIS_MASK                                    0x8
#define _CMCON0_C1INV_POSN                                  0x4
#define _CMCON0_C1INV_POSITION                              0x4
#define _CMCON0_C1INV_SIZE                                  0x1
#define _CMCON0_C1INV_LENGTH                                0x1
#define _CMCON0_C1INV_MASK                                  0x10
#define _CMCON0_C2INV_POSN                                  0x5
#define _CMCON0_C2INV_POSITION                              0x5
#define _CMCON0_C2INV_SIZE                                  0x1
#define _CMCON0_C2INV_LENGTH                                0x1
#define _CMCON0_C2INV_MASK                                  0x20
#define _CMCON0_C1OUT_POSN                                  0x6
#define _CMCON0_C1OUT_POSITION                              0x6
#define _CMCON0_C1OUT_SIZE                                  0x1
#define _CMCON0_C1OUT_LENGTH                                0x1
#define _CMCON0_C1OUT_MASK                                  0x40
#define _CMCON0_C2OUT_POSN                                  0x7
#define _CMCON0_C2OUT_POSITION                              0x7
#define _CMCON0_C2OUT_SIZE                                  0x1
#define _CMCON0_C2OUT_LENGTH                                0x1
#define _CMCON0_C2OUT_MASK                                  0x80
#define _CMCON0_CM0_POSN                                    0x0
#define _CMCON0_CM0_POSITION                                0x0
#define _CMCON0_CM0_SIZE                                    0x1
#define _CMCON0_CM0_LENGTH                                  0x1
#define _CMCON0_CM0_MASK                                    0x1
#define _CMCON0_CM1_POSN                                    0x1
#define _CMCON0_CM1_POSITION                                0x1
#define _CMCON0_CM1_SIZE                                    0x1
#define _CMCON0_CM1_LENGTH                                  0x1
#define _CMCON0_CM1_MASK                                    0x2
#define _CMCON0_CM2_POSN                                    0x2
#define _CMCON0_CM2_POSITION                                0x2
#define _CMCON0_CM2_SIZE                                    0x1
#define _CMCON0_CM2_LENGTH                                  0x1
#define _CMCON0_CM2_MASK                                    0x4

// Register: VRCON
#define VRCON VRCON
extern volatile unsigned char           VRCON               __at(0x09D);
#ifndef _LIB_BUILD
asm("VRCON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR                     :4;
        unsigned                        :1;
        unsigned VRR                    :1;
        unsigned                        :1;
        unsigned VREN                   :1;
    };
    struct {
        unsigned VR0                    :1;
        unsigned VR1                    :1;
        unsigned VR2                    :1;
        unsigned VR3                    :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __at(0x09D);
// bitfield macros
#define _VRCON_VR_POSN                                      0x0
#define _VRCON_VR_POSITION                                  0x0
#define _VRCON_VR_SIZE                                      0x4
#define _VRCON_VR_LENGTH                                    0x4
#define _VRCON_VR_MASK                                      0xF
#define _VRCON_VRR_POSN                                     0x5
#define _VRCON_VRR_POSITION                                 0x5
#define _VRCON_VRR_SIZE                                     0x1
#define _VRCON_VRR_LENGTH                                   0x1
#define _VRCON_VRR_MASK                                     0x20
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
        unsigned ADCS                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
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
        unsigned SWDTE                  :1;
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
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1
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

// Register: LCDCON
#define LCDCON LCDCON
extern volatile unsigned char           LCDCON              __at(0x107);
#ifndef _LIB_BUILD
asm("LCDCON equ 0107h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LMUX                   :2;
        unsigned CS                     :2;
        unsigned VLCDEN                 :1;
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
extern volatile LCDCONbits_t LCDCONbits __at(0x107);
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
#define _LCDCON_VLCDEN_POSN                                 0x4
#define _LCDCON_VLCDEN_POSITION                             0x4
#define _LCDCON_VLCDEN_SIZE                                 0x1
#define _LCDCON_VLCDEN_LENGTH                               0x1
#define _LCDCON_VLCDEN_MASK                                 0x10
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
extern volatile unsigned char           LCDPS               __at(0x108);
#ifndef _LIB_BUILD
asm("LCDPS equ 0108h");
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
extern volatile LCDPSbits_t LCDPSbits __at(0x108);
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

// Register: LVDCON
#define LVDCON LVDCON
extern volatile unsigned char           LVDCON              __at(0x109);
#ifndef _LIB_BUILD
asm("LVDCON equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LVDL                   :3;
        unsigned                        :1;
        unsigned LVDEN                  :1;
        unsigned IRVST                  :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
    };
} LVDCONbits_t;
extern volatile LVDCONbits_t LVDCONbits __at(0x109);
// bitfield macros
#define _LVDCON_LVDL_POSN                                   0x0
#define _LVDCON_LVDL_POSITION                               0x0
#define _LVDCON_LVDL_SIZE                                   0x3
#define _LVDCON_LVDL_LENGTH                                 0x3
#define _LVDCON_LVDL_MASK                                   0x7
#define _LVDCON_LVDEN_POSN                                  0x4
#define _LVDCON_LVDEN_POSITION                              0x4
#define _LVDCON_LVDEN_SIZE                                  0x1
#define _LVDCON_LVDEN_LENGTH                                0x1
#define _LVDCON_LVDEN_MASK                                  0x10
#define _LVDCON_IRVST_POSN                                  0x5
#define _LVDCON_IRVST_POSITION                              0x5
#define _LVDCON_IRVST_SIZE                                  0x1
#define _LVDCON_IRVST_LENGTH                                0x1
#define _LVDCON_IRVST_MASK                                  0x20
#define _LVDCON_LVDL0_POSN                                  0x0
#define _LVDCON_LVDL0_POSITION                              0x0
#define _LVDCON_LVDL0_SIZE                                  0x1
#define _LVDCON_LVDL0_LENGTH                                0x1
#define _LVDCON_LVDL0_MASK                                  0x1
#define _LVDCON_LVDL1_POSN                                  0x1
#define _LVDCON_LVDL1_POSITION                              0x1
#define _LVDCON_LVDL1_SIZE                                  0x1
#define _LVDCON_LVDL1_LENGTH                                0x1
#define _LVDCON_LVDL1_MASK                                  0x2
#define _LVDCON_LVDL2_POSN                                  0x2
#define _LVDCON_LVDL2_POSITION                              0x2
#define _LVDCON_LVDL2_SIZE                                  0x1
#define _LVDCON_LVDL2_LENGTH                                0x1
#define _LVDCON_LVDL2_MASK                                  0x4

// Register: EEDATL
#define EEDATL EEDATL
extern volatile unsigned char           EEDATL              __at(0x10C);
#ifndef _LIB_BUILD
asm("EEDATL equ 010Ch");
#endif
// aliases
extern volatile unsigned char           EEDATA              __at(0x10C);
#ifndef _LIB_BUILD
asm("EEDATA equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATL                 :8;
    };
    struct {
        unsigned EEDATL0                :1;
        unsigned EEDATL1                :1;
        unsigned EEDATL2                :1;
        unsigned EEDATL3                :1;
        unsigned EEDATL4                :1;
        unsigned EEDATL5                :1;
        unsigned EEDATL6                :1;
        unsigned EEDATL7                :1;
    };
} EEDATLbits_t;
extern volatile EEDATLbits_t EEDATLbits __at(0x10C);
// bitfield macros
#define _EEDATL_EEDATL_POSN                                 0x0
#define _EEDATL_EEDATL_POSITION                             0x0
#define _EEDATL_EEDATL_SIZE                                 0x8
#define _EEDATL_EEDATL_LENGTH                               0x8
#define _EEDATL_EEDATL_MASK                                 0xFF
#define _EEDATL_EEDATL0_POSN                                0x0
#define _EEDATL_EEDATL0_POSITION                            0x0
#define _EEDATL_EEDATL0_SIZE                                0x1
#define _EEDATL_EEDATL0_LENGTH                              0x1
#define _EEDATL_EEDATL0_MASK                                0x1
#define _EEDATL_EEDATL1_POSN                                0x1
#define _EEDATL_EEDATL1_POSITION                            0x1
#define _EEDATL_EEDATL1_SIZE                                0x1
#define _EEDATL_EEDATL1_LENGTH                              0x1
#define _EEDATL_EEDATL1_MASK                                0x2
#define _EEDATL_EEDATL2_POSN                                0x2
#define _EEDATL_EEDATL2_POSITION                            0x2
#define _EEDATL_EEDATL2_SIZE                                0x1
#define _EEDATL_EEDATL2_LENGTH                              0x1
#define _EEDATL_EEDATL2_MASK                                0x4
#define _EEDATL_EEDATL3_POSN                                0x3
#define _EEDATL_EEDATL3_POSITION                            0x3
#define _EEDATL_EEDATL3_SIZE                                0x1
#define _EEDATL_EEDATL3_LENGTH                              0x1
#define _EEDATL_EEDATL3_MASK                                0x8
#define _EEDATL_EEDATL4_POSN                                0x4
#define _EEDATL_EEDATL4_POSITION                            0x4
#define _EEDATL_EEDATL4_SIZE                                0x1
#define _EEDATL_EEDATL4_LENGTH                              0x1
#define _EEDATL_EEDATL4_MASK                                0x10
#define _EEDATL_EEDATL5_POSN                                0x5
#define _EEDATL_EEDATL5_POSITION                            0x5
#define _EEDATL_EEDATL5_SIZE                                0x1
#define _EEDATL_EEDATL5_LENGTH                              0x1
#define _EEDATL_EEDATL5_MASK                                0x20
#define _EEDATL_EEDATL6_POSN                                0x6
#define _EEDATL_EEDATL6_POSITION                            0x6
#define _EEDATL_EEDATL6_SIZE                                0x1
#define _EEDATL_EEDATL6_LENGTH                              0x1
#define _EEDATL_EEDATL6_MASK                                0x40
#define _EEDATL_EEDATL7_POSN                                0x7
#define _EEDATL_EEDATL7_POSITION                            0x7
#define _EEDATL_EEDATL7_SIZE                                0x1
#define _EEDATL_EEDATL7_LENGTH                              0x1
#define _EEDATL_EEDATL7_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned EEDATL                 :8;
    };
    struct {
        unsigned EEDATL0                :1;
        unsigned EEDATL1                :1;
        unsigned EEDATL2                :1;
        unsigned EEDATL3                :1;
        unsigned EEDATL4                :1;
        unsigned EEDATL5                :1;
        unsigned EEDATL6                :1;
        unsigned EEDATL7                :1;
    };
} EEDATAbits_t;
extern volatile EEDATAbits_t EEDATAbits __at(0x10C);
// bitfield macros
#define _EEDATA_EEDATL_POSN                                 0x0
#define _EEDATA_EEDATL_POSITION                             0x0
#define _EEDATA_EEDATL_SIZE                                 0x8
#define _EEDATA_EEDATL_LENGTH                               0x8
#define _EEDATA_EEDATL_MASK                                 0xFF
#define _EEDATA_EEDATL0_POSN                                0x0
#define _EEDATA_EEDATL0_POSITION                            0x0
#define _EEDATA_EEDATL0_SIZE                                0x1
#define _EEDATA_EEDATL0_LENGTH                              0x1
#define _EEDATA_EEDATL0_MASK                                0x1
#define _EEDATA_EEDATL1_POSN                                0x1
#define _EEDATA_EEDATL1_POSITION                            0x1
#define _EEDATA_EEDATL1_SIZE                                0x1
#define _EEDATA_EEDATL1_LENGTH                              0x1
#define _EEDATA_EEDATL1_MASK                                0x2
#define _EEDATA_EEDATL2_POSN                                0x2
#define _EEDATA_EEDATL2_POSITION                            0x2
#define _EEDATA_EEDATL2_SIZE                                0x1
#define _EEDATA_EEDATL2_LENGTH                              0x1
#define _EEDATA_EEDATL2_MASK                                0x4
#define _EEDATA_EEDATL3_POSN                                0x3
#define _EEDATA_EEDATL3_POSITION                            0x3
#define _EEDATA_EEDATL3_SIZE                                0x1
#define _EEDATA_EEDATL3_LENGTH                              0x1
#define _EEDATA_EEDATL3_MASK                                0x8
#define _EEDATA_EEDATL4_POSN                                0x4
#define _EEDATA_EEDATL4_POSITION                            0x4
#define _EEDATA_EEDATL4_SIZE                                0x1
#define _EEDATA_EEDATL4_LENGTH                              0x1
#define _EEDATA_EEDATL4_MASK                                0x10
#define _EEDATA_EEDATL5_POSN                                0x5
#define _EEDATA_EEDATL5_POSITION                            0x5
#define _EEDATA_EEDATL5_SIZE                                0x1
#define _EEDATA_EEDATL5_LENGTH                              0x1
#define _EEDATA_EEDATL5_MASK                                0x20
#define _EEDATA_EEDATL6_POSN                                0x6
#define _EEDATA_EEDATL6_POSITION                            0x6
#define _EEDATA_EEDATL6_SIZE                                0x1
#define _EEDATA_EEDATL6_LENGTH                              0x1
#define _EEDATA_EEDATL6_MASK                                0x40
#define _EEDATA_EEDATL7_POSN                                0x7
#define _EEDATA_EEDATL7_POSITION                            0x7
#define _EEDATA_EEDATL7_SIZE                                0x1
#define _EEDATA_EEDATL7_LENGTH                              0x1
#define _EEDATA_EEDATL7_MASK                                0x80

// Register: EEADRL
#define EEADRL EEADRL
extern volatile unsigned char           EEADRL              __at(0x10D);
#ifndef _LIB_BUILD
asm("EEADRL equ 010Dh");
#endif
// aliases
extern volatile unsigned char           EEADR               __at(0x10D);
#ifndef _LIB_BUILD
asm("EEADR equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADRL                 :8;
    };
    struct {
        unsigned EEADRL0                :1;
        unsigned EEADRL1                :1;
        unsigned EEADRL2                :1;
        unsigned EEADRL3                :1;
        unsigned EEADRL4                :1;
        unsigned EEADRL5                :1;
        unsigned EEADRL6                :1;
        unsigned EEADRL7                :1;
    };
} EEADRLbits_t;
extern volatile EEADRLbits_t EEADRLbits __at(0x10D);
// bitfield macros
#define _EEADRL_EEADRL_POSN                                 0x0
#define _EEADRL_EEADRL_POSITION                             0x0
#define _EEADRL_EEADRL_SIZE                                 0x8
#define _EEADRL_EEADRL_LENGTH                               0x8
#define _EEADRL_EEADRL_MASK                                 0xFF
#define _EEADRL_EEADRL0_POSN                                0x0
#define _EEADRL_EEADRL0_POSITION                            0x0
#define _EEADRL_EEADRL0_SIZE                                0x1
#define _EEADRL_EEADRL0_LENGTH                              0x1
#define _EEADRL_EEADRL0_MASK                                0x1
#define _EEADRL_EEADRL1_POSN                                0x1
#define _EEADRL_EEADRL1_POSITION                            0x1
#define _EEADRL_EEADRL1_SIZE                                0x1
#define _EEADRL_EEADRL1_LENGTH                              0x1
#define _EEADRL_EEADRL1_MASK                                0x2
#define _EEADRL_EEADRL2_POSN                                0x2
#define _EEADRL_EEADRL2_POSITION                            0x2
#define _EEADRL_EEADRL2_SIZE                                0x1
#define _EEADRL_EEADRL2_LENGTH                              0x1
#define _EEADRL_EEADRL2_MASK                                0x4
#define _EEADRL_EEADRL3_POSN                                0x3
#define _EEADRL_EEADRL3_POSITION                            0x3
#define _EEADRL_EEADRL3_SIZE                                0x1
#define _EEADRL_EEADRL3_LENGTH                              0x1
#define _EEADRL_EEADRL3_MASK                                0x8
#define _EEADRL_EEADRL4_POSN                                0x4
#define _EEADRL_EEADRL4_POSITION                            0x4
#define _EEADRL_EEADRL4_SIZE                                0x1
#define _EEADRL_EEADRL4_LENGTH                              0x1
#define _EEADRL_EEADRL4_MASK                                0x10
#define _EEADRL_EEADRL5_POSN                                0x5
#define _EEADRL_EEADRL5_POSITION                            0x5
#define _EEADRL_EEADRL5_SIZE                                0x1
#define _EEADRL_EEADRL5_LENGTH                              0x1
#define _EEADRL_EEADRL5_MASK                                0x20
#define _EEADRL_EEADRL6_POSN                                0x6
#define _EEADRL_EEADRL6_POSITION                            0x6
#define _EEADRL_EEADRL6_SIZE                                0x1
#define _EEADRL_EEADRL6_LENGTH                              0x1
#define _EEADRL_EEADRL6_MASK                                0x40
#define _EEADRL_EEADRL7_POSN                                0x7
#define _EEADRL_EEADRL7_POSITION                            0x7
#define _EEADRL_EEADRL7_SIZE                                0x1
#define _EEADRL_EEADRL7_LENGTH                              0x1
#define _EEADRL_EEADRL7_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned EEADRL                 :8;
    };
    struct {
        unsigned EEADRL0                :1;
        unsigned EEADRL1                :1;
        unsigned EEADRL2                :1;
        unsigned EEADRL3                :1;
        unsigned EEADRL4                :1;
        unsigned EEADRL5                :1;
        unsigned EEADRL6                :1;
        unsigned EEADRL7                :1;
    };
} EEADRbits_t;
extern volatile EEADRbits_t EEADRbits __at(0x10D);
// bitfield macros
#define _EEADR_EEADRL_POSN                                  0x0
#define _EEADR_EEADRL_POSITION                              0x0
#define _EEADR_EEADRL_SIZE                                  0x8
#define _EEADR_EEADRL_LENGTH                                0x8
#define _EEADR_EEADRL_MASK                                  0xFF
#define _EEADR_EEADRL0_POSN                                 0x0
#define _EEADR_EEADRL0_POSITION                             0x0
#define _EEADR_EEADRL0_SIZE                                 0x1
#define _EEADR_EEADRL0_LENGTH                               0x1
#define _EEADR_EEADRL0_MASK                                 0x1
#define _EEADR_EEADRL1_POSN                                 0x1
#define _EEADR_EEADRL1_POSITION                             0x1
#define _EEADR_EEADRL1_SIZE                                 0x1
#define _EEADR_EEADRL1_LENGTH                               0x1
#define _EEADR_EEADRL1_MASK                                 0x2
#define _EEADR_EEADRL2_POSN                                 0x2
#define _EEADR_EEADRL2_POSITION                             0x2
#define _EEADR_EEADRL2_SIZE                                 0x1
#define _EEADR_EEADRL2_LENGTH                               0x1
#define _EEADR_EEADRL2_MASK                                 0x4
#define _EEADR_EEADRL3_POSN                                 0x3
#define _EEADR_EEADRL3_POSITION                             0x3
#define _EEADR_EEADRL3_SIZE                                 0x1
#define _EEADR_EEADRL3_LENGTH                               0x1
#define _EEADR_EEADRL3_MASK                                 0x8
#define _EEADR_EEADRL4_POSN                                 0x4
#define _EEADR_EEADRL4_POSITION                             0x4
#define _EEADR_EEADRL4_SIZE                                 0x1
#define _EEADR_EEADRL4_LENGTH                               0x1
#define _EEADR_EEADRL4_MASK                                 0x10
#define _EEADR_EEADRL5_POSN                                 0x5
#define _EEADR_EEADRL5_POSITION                             0x5
#define _EEADR_EEADRL5_SIZE                                 0x1
#define _EEADR_EEADRL5_LENGTH                               0x1
#define _EEADR_EEADRL5_MASK                                 0x20
#define _EEADR_EEADRL6_POSN                                 0x6
#define _EEADR_EEADRL6_POSITION                             0x6
#define _EEADR_EEADRL6_SIZE                                 0x1
#define _EEADR_EEADRL6_LENGTH                               0x1
#define _EEADR_EEADRL6_MASK                                 0x40
#define _EEADR_EEADRL7_POSN                                 0x7
#define _EEADR_EEADRL7_POSITION                             0x7
#define _EEADR_EEADRL7_SIZE                                 0x1
#define _EEADR_EEADRL7_LENGTH                               0x1
#define _EEADR_EEADRL7_MASK                                 0x80

// Register: EEDATH
#define EEDATH EEDATH
extern volatile unsigned char           EEDATH              __at(0x10E);
#ifndef _LIB_BUILD
asm("EEDATH equ 010Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATH0                :1;
        unsigned EEDATH1                :1;
        unsigned EEDATH2                :1;
        unsigned EEDATH3                :1;
        unsigned EEDATH4                :1;
        unsigned EEDATH5                :1;
    };
} EEDATHbits_t;
extern volatile EEDATHbits_t EEDATHbits __at(0x10E);
// bitfield macros
#define _EEDATH_EEDATH0_POSN                                0x0
#define _EEDATH_EEDATH0_POSITION                            0x0
#define _EEDATH_EEDATH0_SIZE                                0x1
#define _EEDATH_EEDATH0_LENGTH                              0x1
#define _EEDATH_EEDATH0_MASK                                0x1
#define _EEDATH_EEDATH1_POSN                                0x1
#define _EEDATH_EEDATH1_POSITION                            0x1
#define _EEDATH_EEDATH1_SIZE                                0x1
#define _EEDATH_EEDATH1_LENGTH                              0x1
#define _EEDATH_EEDATH1_MASK                                0x2
#define _EEDATH_EEDATH2_POSN                                0x2
#define _EEDATH_EEDATH2_POSITION                            0x2
#define _EEDATH_EEDATH2_SIZE                                0x1
#define _EEDATH_EEDATH2_LENGTH                              0x1
#define _EEDATH_EEDATH2_MASK                                0x4
#define _EEDATH_EEDATH3_POSN                                0x3
#define _EEDATH_EEDATH3_POSITION                            0x3
#define _EEDATH_EEDATH3_SIZE                                0x1
#define _EEDATH_EEDATH3_LENGTH                              0x1
#define _EEDATH_EEDATH3_MASK                                0x8
#define _EEDATH_EEDATH4_POSN                                0x4
#define _EEDATH_EEDATH4_POSITION                            0x4
#define _EEDATH_EEDATH4_SIZE                                0x1
#define _EEDATH_EEDATH4_LENGTH                              0x1
#define _EEDATH_EEDATH4_MASK                                0x10
#define _EEDATH_EEDATH5_POSN                                0x5
#define _EEDATH_EEDATH5_POSITION                            0x5
#define _EEDATH_EEDATH5_SIZE                                0x1
#define _EEDATH_EEDATH5_LENGTH                              0x1
#define _EEDATH_EEDATH5_MASK                                0x20

// Register: EEADRH
#define EEADRH EEADRH
extern volatile unsigned char           EEADRH              __at(0x10F);
#ifndef _LIB_BUILD
asm("EEADRH equ 010Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADRH0                :1;
        unsigned EEADRH1                :1;
        unsigned EEADRH2                :1;
        unsigned EEADRH3                :1;
        unsigned EEADRH4                :1;
    };
} EEADRHbits_t;
extern volatile EEADRHbits_t EEADRHbits __at(0x10F);
// bitfield macros
#define _EEADRH_EEADRH0_POSN                                0x0
#define _EEADRH_EEADRH0_POSITION                            0x0
#define _EEADRH_EEADRH0_SIZE                                0x1
#define _EEADRH_EEADRH0_LENGTH                              0x1
#define _EEADRH_EEADRH0_MASK                                0x1
#define _EEADRH_EEADRH1_POSN                                0x1
#define _EEADRH_EEADRH1_POSITION                            0x1
#define _EEADRH_EEADRH1_SIZE                                0x1
#define _EEADRH_EEADRH1_LENGTH                              0x1
#define _EEADRH_EEADRH1_MASK                                0x2
#define _EEADRH_EEADRH2_POSN                                0x2
#define _EEADRH_EEADRH2_POSITION                            0x2
#define _EEADRH_EEADRH2_SIZE                                0x1
#define _EEADRH_EEADRH2_LENGTH                              0x1
#define _EEADRH_EEADRH2_MASK                                0x4
#define _EEADRH_EEADRH3_POSN                                0x3
#define _EEADRH_EEADRH3_POSITION                            0x3
#define _EEADRH_EEADRH3_SIZE                                0x1
#define _EEADRH_EEADRH3_LENGTH                              0x1
#define _EEADRH_EEADRH3_MASK                                0x8
#define _EEADRH_EEADRH4_POSN                                0x4
#define _EEADRH_EEADRH4_POSITION                            0x4
#define _EEADRH_EEADRH4_SIZE                                0x1
#define _EEADRH_EEADRH4_LENGTH                              0x1
#define _EEADRH_EEADRH4_MASK                                0x10

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
extern volatile unsigned char           LCDDATA0            __at(0x110);
#ifndef _LIB_BUILD
asm("LCDDATA0 equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0                   :1;
        unsigned SEG1                   :1;
        unsigned SEG2                   :1;
        unsigned SEG3                   :1;
        unsigned SEG4                   :1;
        unsigned SEG5                   :1;
        unsigned SEG6                   :1;
        unsigned SEG7                   :1;
    };
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
    struct {
        unsigned S0C0                   :1;
        unsigned S1C0                   :1;
        unsigned S2C0                   :1;
        unsigned S3C0                   :1;
        unsigned S4C0                   :1;
        unsigned S5C0                   :1;
        unsigned S6C0                   :1;
        unsigned S7C0                   :1;
    };
} LCDDATA0bits_t;
extern volatile LCDDATA0bits_t LCDDATA0bits __at(0x110);
// bitfield macros
#define _LCDDATA0_SEG0_POSN                                 0x0
#define _LCDDATA0_SEG0_POSITION                             0x0
#define _LCDDATA0_SEG0_SIZE                                 0x1
#define _LCDDATA0_SEG0_LENGTH                               0x1
#define _LCDDATA0_SEG0_MASK                                 0x1
#define _LCDDATA0_SEG1_POSN                                 0x1
#define _LCDDATA0_SEG1_POSITION                             0x1
#define _LCDDATA0_SEG1_SIZE                                 0x1
#define _LCDDATA0_SEG1_LENGTH                               0x1
#define _LCDDATA0_SEG1_MASK                                 0x2
#define _LCDDATA0_SEG2_POSN                                 0x2
#define _LCDDATA0_SEG2_POSITION                             0x2
#define _LCDDATA0_SEG2_SIZE                                 0x1
#define _LCDDATA0_SEG2_LENGTH                               0x1
#define _LCDDATA0_SEG2_MASK                                 0x4
#define _LCDDATA0_SEG3_POSN                                 0x3
#define _LCDDATA0_SEG3_POSITION                             0x3
#define _LCDDATA0_SEG3_SIZE                                 0x1
#define _LCDDATA0_SEG3_LENGTH                               0x1
#define _LCDDATA0_SEG3_MASK                                 0x8
#define _LCDDATA0_SEG4_POSN                                 0x4
#define _LCDDATA0_SEG4_POSITION                             0x4
#define _LCDDATA0_SEG4_SIZE                                 0x1
#define _LCDDATA0_SEG4_LENGTH                               0x1
#define _LCDDATA0_SEG4_MASK                                 0x10
#define _LCDDATA0_SEG5_POSN                                 0x5
#define _LCDDATA0_SEG5_POSITION                             0x5
#define _LCDDATA0_SEG5_SIZE                                 0x1
#define _LCDDATA0_SEG5_LENGTH                               0x1
#define _LCDDATA0_SEG5_MASK                                 0x20
#define _LCDDATA0_SEG6_POSN                                 0x6
#define _LCDDATA0_SEG6_POSITION                             0x6
#define _LCDDATA0_SEG6_SIZE                                 0x1
#define _LCDDATA0_SEG6_LENGTH                               0x1
#define _LCDDATA0_SEG6_MASK                                 0x40
#define _LCDDATA0_SEG7_POSN                                 0x7
#define _LCDDATA0_SEG7_POSITION                             0x7
#define _LCDDATA0_SEG7_SIZE                                 0x1
#define _LCDDATA0_SEG7_LENGTH                               0x1
#define _LCDDATA0_SEG7_MASK                                 0x80
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
#define _LCDDATA0_S0C0_POSN                                 0x0
#define _LCDDATA0_S0C0_POSITION                             0x0
#define _LCDDATA0_S0C0_SIZE                                 0x1
#define _LCDDATA0_S0C0_LENGTH                               0x1
#define _LCDDATA0_S0C0_MASK                                 0x1
#define _LCDDATA0_S1C0_POSN                                 0x1
#define _LCDDATA0_S1C0_POSITION                             0x1
#define _LCDDATA0_S1C0_SIZE                                 0x1
#define _LCDDATA0_S1C0_LENGTH                               0x1
#define _LCDDATA0_S1C0_MASK                                 0x2
#define _LCDDATA0_S2C0_POSN                                 0x2
#define _LCDDATA0_S2C0_POSITION                             0x2
#define _LCDDATA0_S2C0_SIZE                                 0x1
#define _LCDDATA0_S2C0_LENGTH                               0x1
#define _LCDDATA0_S2C0_MASK                                 0x4
#define _LCDDATA0_S3C0_POSN                                 0x3
#define _LCDDATA0_S3C0_POSITION                             0x3
#define _LCDDATA0_S3C0_SIZE                                 0x1
#define _LCDDATA0_S3C0_LENGTH                               0x1
#define _LCDDATA0_S3C0_MASK                                 0x8
#define _LCDDATA0_S4C0_POSN                                 0x4
#define _LCDDATA0_S4C0_POSITION                             0x4
#define _LCDDATA0_S4C0_SIZE                                 0x1
#define _LCDDATA0_S4C0_LENGTH                               0x1
#define _LCDDATA0_S4C0_MASK                                 0x10
#define _LCDDATA0_S5C0_POSN                                 0x5
#define _LCDDATA0_S5C0_POSITION                             0x5
#define _LCDDATA0_S5C0_SIZE                                 0x1
#define _LCDDATA0_S5C0_LENGTH                               0x1
#define _LCDDATA0_S5C0_MASK                                 0x20
#define _LCDDATA0_S6C0_POSN                                 0x6
#define _LCDDATA0_S6C0_POSITION                             0x6
#define _LCDDATA0_S6C0_SIZE                                 0x1
#define _LCDDATA0_S6C0_LENGTH                               0x1
#define _LCDDATA0_S6C0_MASK                                 0x40
#define _LCDDATA0_S7C0_POSN                                 0x7
#define _LCDDATA0_S7C0_POSITION                             0x7
#define _LCDDATA0_S7C0_SIZE                                 0x1
#define _LCDDATA0_S7C0_LENGTH                               0x1
#define _LCDDATA0_S7C0_MASK                                 0x80

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
extern volatile unsigned char           LCDDATA1            __at(0x111);
#ifndef _LIB_BUILD
asm("LCDDATA1 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
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
    struct {
        unsigned S8C0                   :1;
        unsigned S9C0                   :1;
        unsigned S10C0                  :1;
        unsigned S11C0                  :1;
        unsigned S12C0                  :1;
        unsigned S13C0                  :1;
        unsigned S14C0                  :1;
        unsigned S15C0                  :1;
    };
} LCDDATA1bits_t;
extern volatile LCDDATA1bits_t LCDDATA1bits __at(0x111);
// bitfield macros
#define _LCDDATA1_SEG8_POSN                                 0x0
#define _LCDDATA1_SEG8_POSITION                             0x0
#define _LCDDATA1_SEG8_SIZE                                 0x1
#define _LCDDATA1_SEG8_LENGTH                               0x1
#define _LCDDATA1_SEG8_MASK                                 0x1
#define _LCDDATA1_SEG9_POSN                                 0x1
#define _LCDDATA1_SEG9_POSITION                             0x1
#define _LCDDATA1_SEG9_SIZE                                 0x1
#define _LCDDATA1_SEG9_LENGTH                               0x1
#define _LCDDATA1_SEG9_MASK                                 0x2
#define _LCDDATA1_SEG10_POSN                                0x2
#define _LCDDATA1_SEG10_POSITION                            0x2
#define _LCDDATA1_SEG10_SIZE                                0x1
#define _LCDDATA1_SEG10_LENGTH                              0x1
#define _LCDDATA1_SEG10_MASK                                0x4
#define _LCDDATA1_SEG11_POSN                                0x3
#define _LCDDATA1_SEG11_POSITION                            0x3
#define _LCDDATA1_SEG11_SIZE                                0x1
#define _LCDDATA1_SEG11_LENGTH                              0x1
#define _LCDDATA1_SEG11_MASK                                0x8
#define _LCDDATA1_SEG12_POSN                                0x4
#define _LCDDATA1_SEG12_POSITION                            0x4
#define _LCDDATA1_SEG12_SIZE                                0x1
#define _LCDDATA1_SEG12_LENGTH                              0x1
#define _LCDDATA1_SEG12_MASK                                0x10
#define _LCDDATA1_SEG13_POSN                                0x5
#define _LCDDATA1_SEG13_POSITION                            0x5
#define _LCDDATA1_SEG13_SIZE                                0x1
#define _LCDDATA1_SEG13_LENGTH                              0x1
#define _LCDDATA1_SEG13_MASK                                0x20
#define _LCDDATA1_SEG14_POSN                                0x6
#define _LCDDATA1_SEG14_POSITION                            0x6
#define _LCDDATA1_SEG14_SIZE                                0x1
#define _LCDDATA1_SEG14_LENGTH                              0x1
#define _LCDDATA1_SEG14_MASK                                0x40
#define _LCDDATA1_SEG15_POSN                                0x7
#define _LCDDATA1_SEG15_POSITION                            0x7
#define _LCDDATA1_SEG15_SIZE                                0x1
#define _LCDDATA1_SEG15_LENGTH                              0x1
#define _LCDDATA1_SEG15_MASK                                0x80
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
#define _LCDDATA1_S8C0_POSN                                 0x0
#define _LCDDATA1_S8C0_POSITION                             0x0
#define _LCDDATA1_S8C0_SIZE                                 0x1
#define _LCDDATA1_S8C0_LENGTH                               0x1
#define _LCDDATA1_S8C0_MASK                                 0x1
#define _LCDDATA1_S9C0_POSN                                 0x1
#define _LCDDATA1_S9C0_POSITION                             0x1
#define _LCDDATA1_S9C0_SIZE                                 0x1
#define _LCDDATA1_S9C0_LENGTH                               0x1
#define _LCDDATA1_S9C0_MASK                                 0x2
#define _LCDDATA1_S10C0_POSN                                0x2
#define _LCDDATA1_S10C0_POSITION                            0x2
#define _LCDDATA1_S10C0_SIZE                                0x1
#define _LCDDATA1_S10C0_LENGTH                              0x1
#define _LCDDATA1_S10C0_MASK                                0x4
#define _LCDDATA1_S11C0_POSN                                0x3
#define _LCDDATA1_S11C0_POSITION                            0x3
#define _LCDDATA1_S11C0_SIZE                                0x1
#define _LCDDATA1_S11C0_LENGTH                              0x1
#define _LCDDATA1_S11C0_MASK                                0x8
#define _LCDDATA1_S12C0_POSN                                0x4
#define _LCDDATA1_S12C0_POSITION                            0x4
#define _LCDDATA1_S12C0_SIZE                                0x1
#define _LCDDATA1_S12C0_LENGTH                              0x1
#define _LCDDATA1_S12C0_MASK                                0x10
#define _LCDDATA1_S13C0_POSN                                0x5
#define _LCDDATA1_S13C0_POSITION                            0x5
#define _LCDDATA1_S13C0_SIZE                                0x1
#define _LCDDATA1_S13C0_LENGTH                              0x1
#define _LCDDATA1_S13C0_MASK                                0x20
#define _LCDDATA1_S14C0_POSN                                0x6
#define _LCDDATA1_S14C0_POSITION                            0x6
#define _LCDDATA1_S14C0_SIZE                                0x1
#define _LCDDATA1_S14C0_LENGTH                              0x1
#define _LCDDATA1_S14C0_MASK                                0x40
#define _LCDDATA1_S15C0_POSN                                0x7
#define _LCDDATA1_S15C0_POSITION                            0x7
#define _LCDDATA1_S15C0_SIZE                                0x1
#define _LCDDATA1_S15C0_LENGTH                              0x1
#define _LCDDATA1_S15C0_MASK                                0x80

// Register: LCDDATA3
#define LCDDATA3 LCDDATA3
extern volatile unsigned char           LCDDATA3            __at(0x113);
#ifndef _LIB_BUILD
asm("LCDDATA3 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0                   :1;
        unsigned SEG1                   :1;
        unsigned SEG2                   :1;
        unsigned SEG3                   :1;
        unsigned SEG4                   :1;
        unsigned SEG5                   :1;
        unsigned SEG6                   :1;
        unsigned SEG7                   :1;
    };
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
    struct {
        unsigned S0C1                   :1;
        unsigned S1C1                   :1;
        unsigned S2C1                   :1;
        unsigned S3C1                   :1;
        unsigned S4C1                   :1;
        unsigned S5C1                   :1;
        unsigned S6C1                   :1;
        unsigned S7C1                   :1;
    };
} LCDDATA3bits_t;
extern volatile LCDDATA3bits_t LCDDATA3bits __at(0x113);
// bitfield macros
#define _LCDDATA3_SEG0_POSN                                 0x0
#define _LCDDATA3_SEG0_POSITION                             0x0
#define _LCDDATA3_SEG0_SIZE                                 0x1
#define _LCDDATA3_SEG0_LENGTH                               0x1
#define _LCDDATA3_SEG0_MASK                                 0x1
#define _LCDDATA3_SEG1_POSN                                 0x1
#define _LCDDATA3_SEG1_POSITION                             0x1
#define _LCDDATA3_SEG1_SIZE                                 0x1
#define _LCDDATA3_SEG1_LENGTH                               0x1
#define _LCDDATA3_SEG1_MASK                                 0x2
#define _LCDDATA3_SEG2_POSN                                 0x2
#define _LCDDATA3_SEG2_POSITION                             0x2
#define _LCDDATA3_SEG2_SIZE                                 0x1
#define _LCDDATA3_SEG2_LENGTH                               0x1
#define _LCDDATA3_SEG2_MASK                                 0x4
#define _LCDDATA3_SEG3_POSN                                 0x3
#define _LCDDATA3_SEG3_POSITION                             0x3
#define _LCDDATA3_SEG3_SIZE                                 0x1
#define _LCDDATA3_SEG3_LENGTH                               0x1
#define _LCDDATA3_SEG3_MASK                                 0x8
#define _LCDDATA3_SEG4_POSN                                 0x4
#define _LCDDATA3_SEG4_POSITION                             0x4
#define _LCDDATA3_SEG4_SIZE                                 0x1
#define _LCDDATA3_SEG4_LENGTH                               0x1
#define _LCDDATA3_SEG4_MASK                                 0x10
#define _LCDDATA3_SEG5_POSN                                 0x5
#define _LCDDATA3_SEG5_POSITION                             0x5
#define _LCDDATA3_SEG5_SIZE                                 0x1
#define _LCDDATA3_SEG5_LENGTH                               0x1
#define _LCDDATA3_SEG5_MASK                                 0x20
#define _LCDDATA3_SEG6_POSN                                 0x6
#define _LCDDATA3_SEG6_POSITION                             0x6
#define _LCDDATA3_SEG6_SIZE                                 0x1
#define _LCDDATA3_SEG6_LENGTH                               0x1
#define _LCDDATA3_SEG6_MASK                                 0x40
#define _LCDDATA3_SEG7_POSN                                 0x7
#define _LCDDATA3_SEG7_POSITION                             0x7
#define _LCDDATA3_SEG7_SIZE                                 0x1
#define _LCDDATA3_SEG7_LENGTH                               0x1
#define _LCDDATA3_SEG7_MASK                                 0x80
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
#define _LCDDATA3_S0C1_POSN                                 0x0
#define _LCDDATA3_S0C1_POSITION                             0x0
#define _LCDDATA3_S0C1_SIZE                                 0x1
#define _LCDDATA3_S0C1_LENGTH                               0x1
#define _LCDDATA3_S0C1_MASK                                 0x1
#define _LCDDATA3_S1C1_POSN                                 0x1
#define _LCDDATA3_S1C1_POSITION                             0x1
#define _LCDDATA3_S1C1_SIZE                                 0x1
#define _LCDDATA3_S1C1_LENGTH                               0x1
#define _LCDDATA3_S1C1_MASK                                 0x2
#define _LCDDATA3_S2C1_POSN                                 0x2
#define _LCDDATA3_S2C1_POSITION                             0x2
#define _LCDDATA3_S2C1_SIZE                                 0x1
#define _LCDDATA3_S2C1_LENGTH                               0x1
#define _LCDDATA3_S2C1_MASK                                 0x4
#define _LCDDATA3_S3C1_POSN                                 0x3
#define _LCDDATA3_S3C1_POSITION                             0x3
#define _LCDDATA3_S3C1_SIZE                                 0x1
#define _LCDDATA3_S3C1_LENGTH                               0x1
#define _LCDDATA3_S3C1_MASK                                 0x8
#define _LCDDATA3_S4C1_POSN                                 0x4
#define _LCDDATA3_S4C1_POSITION                             0x4
#define _LCDDATA3_S4C1_SIZE                                 0x1
#define _LCDDATA3_S4C1_LENGTH                               0x1
#define _LCDDATA3_S4C1_MASK                                 0x10
#define _LCDDATA3_S5C1_POSN                                 0x5
#define _LCDDATA3_S5C1_POSITION                             0x5
#define _LCDDATA3_S5C1_SIZE                                 0x1
#define _LCDDATA3_S5C1_LENGTH                               0x1
#define _LCDDATA3_S5C1_MASK                                 0x20
#define _LCDDATA3_S6C1_POSN                                 0x6
#define _LCDDATA3_S6C1_POSITION                             0x6
#define _LCDDATA3_S6C1_SIZE                                 0x1
#define _LCDDATA3_S6C1_LENGTH                               0x1
#define _LCDDATA3_S6C1_MASK                                 0x40
#define _LCDDATA3_S7C1_POSN                                 0x7
#define _LCDDATA3_S7C1_POSITION                             0x7
#define _LCDDATA3_S7C1_SIZE                                 0x1
#define _LCDDATA3_S7C1_LENGTH                               0x1
#define _LCDDATA3_S7C1_MASK                                 0x80

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
extern volatile unsigned char           LCDDATA4            __at(0x114);
#ifndef _LIB_BUILD
asm("LCDDATA4 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
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
    struct {
        unsigned S8C1                   :1;
        unsigned S9C1                   :1;
        unsigned S10C1                  :1;
        unsigned S11C1                  :1;
        unsigned S12C1                  :1;
        unsigned S13C1                  :1;
        unsigned S14C1                  :1;
        unsigned S15C1                  :1;
    };
} LCDDATA4bits_t;
extern volatile LCDDATA4bits_t LCDDATA4bits __at(0x114);
// bitfield macros
#define _LCDDATA4_SEG8_POSN                                 0x0
#define _LCDDATA4_SEG8_POSITION                             0x0
#define _LCDDATA4_SEG8_SIZE                                 0x1
#define _LCDDATA4_SEG8_LENGTH                               0x1
#define _LCDDATA4_SEG8_MASK                                 0x1
#define _LCDDATA4_SEG9_POSN                                 0x1
#define _LCDDATA4_SEG9_POSITION                             0x1
#define _LCDDATA4_SEG9_SIZE                                 0x1
#define _LCDDATA4_SEG9_LENGTH                               0x1
#define _LCDDATA4_SEG9_MASK                                 0x2
#define _LCDDATA4_SEG10_POSN                                0x2
#define _LCDDATA4_SEG10_POSITION                            0x2
#define _LCDDATA4_SEG10_SIZE                                0x1
#define _LCDDATA4_SEG10_LENGTH                              0x1
#define _LCDDATA4_SEG10_MASK                                0x4
#define _LCDDATA4_SEG11_POSN                                0x3
#define _LCDDATA4_SEG11_POSITION                            0x3
#define _LCDDATA4_SEG11_SIZE                                0x1
#define _LCDDATA4_SEG11_LENGTH                              0x1
#define _LCDDATA4_SEG11_MASK                                0x8
#define _LCDDATA4_SEG12_POSN                                0x4
#define _LCDDATA4_SEG12_POSITION                            0x4
#define _LCDDATA4_SEG12_SIZE                                0x1
#define _LCDDATA4_SEG12_LENGTH                              0x1
#define _LCDDATA4_SEG12_MASK                                0x10
#define _LCDDATA4_SEG13_POSN                                0x5
#define _LCDDATA4_SEG13_POSITION                            0x5
#define _LCDDATA4_SEG13_SIZE                                0x1
#define _LCDDATA4_SEG13_LENGTH                              0x1
#define _LCDDATA4_SEG13_MASK                                0x20
#define _LCDDATA4_SEG14_POSN                                0x6
#define _LCDDATA4_SEG14_POSITION                            0x6
#define _LCDDATA4_SEG14_SIZE                                0x1
#define _LCDDATA4_SEG14_LENGTH                              0x1
#define _LCDDATA4_SEG14_MASK                                0x40
#define _LCDDATA4_SEG15_POSN                                0x7
#define _LCDDATA4_SEG15_POSITION                            0x7
#define _LCDDATA4_SEG15_SIZE                                0x1
#define _LCDDATA4_SEG15_LENGTH                              0x1
#define _LCDDATA4_SEG15_MASK                                0x80
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
#define _LCDDATA4_S8C1_POSN                                 0x0
#define _LCDDATA4_S8C1_POSITION                             0x0
#define _LCDDATA4_S8C1_SIZE                                 0x1
#define _LCDDATA4_S8C1_LENGTH                               0x1
#define _LCDDATA4_S8C1_MASK                                 0x1
#define _LCDDATA4_S9C1_POSN                                 0x1
#define _LCDDATA4_S9C1_POSITION                             0x1
#define _LCDDATA4_S9C1_SIZE                                 0x1
#define _LCDDATA4_S9C1_LENGTH                               0x1
#define _LCDDATA4_S9C1_MASK                                 0x2
#define _LCDDATA4_S10C1_POSN                                0x2
#define _LCDDATA4_S10C1_POSITION                            0x2
#define _LCDDATA4_S10C1_SIZE                                0x1
#define _LCDDATA4_S10C1_LENGTH                              0x1
#define _LCDDATA4_S10C1_MASK                                0x4
#define _LCDDATA4_S11C1_POSN                                0x3
#define _LCDDATA4_S11C1_POSITION                            0x3
#define _LCDDATA4_S11C1_SIZE                                0x1
#define _LCDDATA4_S11C1_LENGTH                              0x1
#define _LCDDATA4_S11C1_MASK                                0x8
#define _LCDDATA4_S12C1_POSN                                0x4
#define _LCDDATA4_S12C1_POSITION                            0x4
#define _LCDDATA4_S12C1_SIZE                                0x1
#define _LCDDATA4_S12C1_LENGTH                              0x1
#define _LCDDATA4_S12C1_MASK                                0x10
#define _LCDDATA4_S13C1_POSN                                0x5
#define _LCDDATA4_S13C1_POSITION                            0x5
#define _LCDDATA4_S13C1_SIZE                                0x1
#define _LCDDATA4_S13C1_LENGTH                              0x1
#define _LCDDATA4_S13C1_MASK                                0x20
#define _LCDDATA4_S14C1_POSN                                0x6
#define _LCDDATA4_S14C1_POSITION                            0x6
#define _LCDDATA4_S14C1_SIZE                                0x1
#define _LCDDATA4_S14C1_LENGTH                              0x1
#define _LCDDATA4_S14C1_MASK                                0x40
#define _LCDDATA4_S15C1_POSN                                0x7
#define _LCDDATA4_S15C1_POSITION                            0x7
#define _LCDDATA4_S15C1_SIZE                                0x1
#define _LCDDATA4_S15C1_LENGTH                              0x1
#define _LCDDATA4_S15C1_MASK                                0x80

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
extern volatile unsigned char           LCDDATA6            __at(0x116);
#ifndef _LIB_BUILD
asm("LCDDATA6 equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0                   :1;
        unsigned SEG1                   :1;
        unsigned SEG2                   :1;
        unsigned SEG3                   :1;
        unsigned SEG4                   :1;
        unsigned SEG5                   :1;
        unsigned SEG6                   :1;
        unsigned SEG7                   :1;
    };
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
    struct {
        unsigned S0C2                   :1;
        unsigned S1C2                   :1;
        unsigned S2C2                   :1;
        unsigned S3C2                   :1;
        unsigned S4C2                   :1;
        unsigned S5C2                   :1;
        unsigned S6C2                   :1;
        unsigned S7C2                   :1;
    };
} LCDDATA6bits_t;
extern volatile LCDDATA6bits_t LCDDATA6bits __at(0x116);
// bitfield macros
#define _LCDDATA6_SEG0_POSN                                 0x0
#define _LCDDATA6_SEG0_POSITION                             0x0
#define _LCDDATA6_SEG0_SIZE                                 0x1
#define _LCDDATA6_SEG0_LENGTH                               0x1
#define _LCDDATA6_SEG0_MASK                                 0x1
#define _LCDDATA6_SEG1_POSN                                 0x1
#define _LCDDATA6_SEG1_POSITION                             0x1
#define _LCDDATA6_SEG1_SIZE                                 0x1
#define _LCDDATA6_SEG1_LENGTH                               0x1
#define _LCDDATA6_SEG1_MASK                                 0x2
#define _LCDDATA6_SEG2_POSN                                 0x2
#define _LCDDATA6_SEG2_POSITION                             0x2
#define _LCDDATA6_SEG2_SIZE                                 0x1
#define _LCDDATA6_SEG2_LENGTH                               0x1
#define _LCDDATA6_SEG2_MASK                                 0x4
#define _LCDDATA6_SEG3_POSN                                 0x3
#define _LCDDATA6_SEG3_POSITION                             0x3
#define _LCDDATA6_SEG3_SIZE                                 0x1
#define _LCDDATA6_SEG3_LENGTH                               0x1
#define _LCDDATA6_SEG3_MASK                                 0x8
#define _LCDDATA6_SEG4_POSN                                 0x4
#define _LCDDATA6_SEG4_POSITION                             0x4
#define _LCDDATA6_SEG4_SIZE                                 0x1
#define _LCDDATA6_SEG4_LENGTH                               0x1
#define _LCDDATA6_SEG4_MASK                                 0x10
#define _LCDDATA6_SEG5_POSN                                 0x5
#define _LCDDATA6_SEG5_POSITION                             0x5
#define _LCDDATA6_SEG5_SIZE                                 0x1
#define _LCDDATA6_SEG5_LENGTH                               0x1
#define _LCDDATA6_SEG5_MASK                                 0x20
#define _LCDDATA6_SEG6_POSN                                 0x6
#define _LCDDATA6_SEG6_POSITION                             0x6
#define _LCDDATA6_SEG6_SIZE                                 0x1
#define _LCDDATA6_SEG6_LENGTH                               0x1
#define _LCDDATA6_SEG6_MASK                                 0x40
#define _LCDDATA6_SEG7_POSN                                 0x7
#define _LCDDATA6_SEG7_POSITION                             0x7
#define _LCDDATA6_SEG7_SIZE                                 0x1
#define _LCDDATA6_SEG7_LENGTH                               0x1
#define _LCDDATA6_SEG7_MASK                                 0x80
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
#define _LCDDATA6_S0C2_POSN                                 0x0
#define _LCDDATA6_S0C2_POSITION                             0x0
#define _LCDDATA6_S0C2_SIZE                                 0x1
#define _LCDDATA6_S0C2_LENGTH                               0x1
#define _LCDDATA6_S0C2_MASK                                 0x1
#define _LCDDATA6_S1C2_POSN                                 0x1
#define _LCDDATA6_S1C2_POSITION                             0x1
#define _LCDDATA6_S1C2_SIZE                                 0x1
#define _LCDDATA6_S1C2_LENGTH                               0x1
#define _LCDDATA6_S1C2_MASK                                 0x2
#define _LCDDATA6_S2C2_POSN                                 0x2
#define _LCDDATA6_S2C2_POSITION                             0x2
#define _LCDDATA6_S2C2_SIZE                                 0x1
#define _LCDDATA6_S2C2_LENGTH                               0x1
#define _LCDDATA6_S2C2_MASK                                 0x4
#define _LCDDATA6_S3C2_POSN                                 0x3
#define _LCDDATA6_S3C2_POSITION                             0x3
#define _LCDDATA6_S3C2_SIZE                                 0x1
#define _LCDDATA6_S3C2_LENGTH                               0x1
#define _LCDDATA6_S3C2_MASK                                 0x8
#define _LCDDATA6_S4C2_POSN                                 0x4
#define _LCDDATA6_S4C2_POSITION                             0x4
#define _LCDDATA6_S4C2_SIZE                                 0x1
#define _LCDDATA6_S4C2_LENGTH                               0x1
#define _LCDDATA6_S4C2_MASK                                 0x10
#define _LCDDATA6_S5C2_POSN                                 0x5
#define _LCDDATA6_S5C2_POSITION                             0x5
#define _LCDDATA6_S5C2_SIZE                                 0x1
#define _LCDDATA6_S5C2_LENGTH                               0x1
#define _LCDDATA6_S5C2_MASK                                 0x20
#define _LCDDATA6_S6C2_POSN                                 0x6
#define _LCDDATA6_S6C2_POSITION                             0x6
#define _LCDDATA6_S6C2_SIZE                                 0x1
#define _LCDDATA6_S6C2_LENGTH                               0x1
#define _LCDDATA6_S6C2_MASK                                 0x40
#define _LCDDATA6_S7C2_POSN                                 0x7
#define _LCDDATA6_S7C2_POSITION                             0x7
#define _LCDDATA6_S7C2_SIZE                                 0x1
#define _LCDDATA6_S7C2_LENGTH                               0x1
#define _LCDDATA6_S7C2_MASK                                 0x80

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
extern volatile unsigned char           LCDDATA7            __at(0x117);
#ifndef _LIB_BUILD
asm("LCDDATA7 equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
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
    struct {
        unsigned S8C2                   :1;
        unsigned S9C2                   :1;
        unsigned S10C2                  :1;
        unsigned S11C2                  :1;
        unsigned S12C2                  :1;
        unsigned S13C2                  :1;
        unsigned S14C2                  :1;
        unsigned S15C2                  :1;
    };
} LCDDATA7bits_t;
extern volatile LCDDATA7bits_t LCDDATA7bits __at(0x117);
// bitfield macros
#define _LCDDATA7_SEG8_POSN                                 0x0
#define _LCDDATA7_SEG8_POSITION                             0x0
#define _LCDDATA7_SEG8_SIZE                                 0x1
#define _LCDDATA7_SEG8_LENGTH                               0x1
#define _LCDDATA7_SEG8_MASK                                 0x1
#define _LCDDATA7_SEG9_POSN                                 0x1
#define _LCDDATA7_SEG9_POSITION                             0x1
#define _LCDDATA7_SEG9_SIZE                                 0x1
#define _LCDDATA7_SEG9_LENGTH                               0x1
#define _LCDDATA7_SEG9_MASK                                 0x2
#define _LCDDATA7_SEG10_POSN                                0x2
#define _LCDDATA7_SEG10_POSITION                            0x2
#define _LCDDATA7_SEG10_SIZE                                0x1
#define _LCDDATA7_SEG10_LENGTH                              0x1
#define _LCDDATA7_SEG10_MASK                                0x4
#define _LCDDATA7_SEG11_POSN                                0x3
#define _LCDDATA7_SEG11_POSITION                            0x3
#define _LCDDATA7_SEG11_SIZE                                0x1
#define _LCDDATA7_SEG11_LENGTH                              0x1
#define _LCDDATA7_SEG11_MASK                                0x8
#define _LCDDATA7_SEG12_POSN                                0x4
#define _LCDDATA7_SEG12_POSITION                            0x4
#define _LCDDATA7_SEG12_SIZE                                0x1
#define _LCDDATA7_SEG12_LENGTH                              0x1
#define _LCDDATA7_SEG12_MASK                                0x10
#define _LCDDATA7_SEG13_POSN                                0x5
#define _LCDDATA7_SEG13_POSITION                            0x5
#define _LCDDATA7_SEG13_SIZE                                0x1
#define _LCDDATA7_SEG13_LENGTH                              0x1
#define _LCDDATA7_SEG13_MASK                                0x20
#define _LCDDATA7_SEG14_POSN                                0x6
#define _LCDDATA7_SEG14_POSITION                            0x6
#define _LCDDATA7_SEG14_SIZE                                0x1
#define _LCDDATA7_SEG14_LENGTH                              0x1
#define _LCDDATA7_SEG14_MASK                                0x40
#define _LCDDATA7_SEG15_POSN                                0x7
#define _LCDDATA7_SEG15_POSITION                            0x7
#define _LCDDATA7_SEG15_SIZE                                0x1
#define _LCDDATA7_SEG15_LENGTH                              0x1
#define _LCDDATA7_SEG15_MASK                                0x80
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
#define _LCDDATA7_S8C2_POSN                                 0x0
#define _LCDDATA7_S8C2_POSITION                             0x0
#define _LCDDATA7_S8C2_SIZE                                 0x1
#define _LCDDATA7_S8C2_LENGTH                               0x1
#define _LCDDATA7_S8C2_MASK                                 0x1
#define _LCDDATA7_S9C2_POSN                                 0x1
#define _LCDDATA7_S9C2_POSITION                             0x1
#define _LCDDATA7_S9C2_SIZE                                 0x1
#define _LCDDATA7_S9C2_LENGTH                               0x1
#define _LCDDATA7_S9C2_MASK                                 0x2
#define _LCDDATA7_S10C2_POSN                                0x2
#define _LCDDATA7_S10C2_POSITION                            0x2
#define _LCDDATA7_S10C2_SIZE                                0x1
#define _LCDDATA7_S10C2_LENGTH                              0x1
#define _LCDDATA7_S10C2_MASK                                0x4
#define _LCDDATA7_S11C2_POSN                                0x3
#define _LCDDATA7_S11C2_POSITION                            0x3
#define _LCDDATA7_S11C2_SIZE                                0x1
#define _LCDDATA7_S11C2_LENGTH                              0x1
#define _LCDDATA7_S11C2_MASK                                0x8
#define _LCDDATA7_S12C2_POSN                                0x4
#define _LCDDATA7_S12C2_POSITION                            0x4
#define _LCDDATA7_S12C2_SIZE                                0x1
#define _LCDDATA7_S12C2_LENGTH                              0x1
#define _LCDDATA7_S12C2_MASK                                0x10
#define _LCDDATA7_S13C2_POSN                                0x5
#define _LCDDATA7_S13C2_POSITION                            0x5
#define _LCDDATA7_S13C2_SIZE                                0x1
#define _LCDDATA7_S13C2_LENGTH                              0x1
#define _LCDDATA7_S13C2_MASK                                0x20
#define _LCDDATA7_S14C2_POSN                                0x6
#define _LCDDATA7_S14C2_POSITION                            0x6
#define _LCDDATA7_S14C2_SIZE                                0x1
#define _LCDDATA7_S14C2_LENGTH                              0x1
#define _LCDDATA7_S14C2_MASK                                0x40
#define _LCDDATA7_S15C2_POSN                                0x7
#define _LCDDATA7_S15C2_POSITION                            0x7
#define _LCDDATA7_S15C2_SIZE                                0x1
#define _LCDDATA7_S15C2_LENGTH                              0x1
#define _LCDDATA7_S15C2_MASK                                0x80

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
extern volatile unsigned char           LCDDATA9            __at(0x119);
#ifndef _LIB_BUILD
asm("LCDDATA9 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0                   :1;
        unsigned SEG1                   :1;
        unsigned SEG2                   :1;
        unsigned SEG3                   :1;
        unsigned SEG4                   :1;
        unsigned SEG5                   :1;
        unsigned SEG6                   :1;
        unsigned SEG7                   :1;
    };
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
    struct {
        unsigned S0C3                   :1;
        unsigned S1C3                   :1;
        unsigned S2C3                   :1;
        unsigned S3C3                   :1;
        unsigned S4C3                   :1;
        unsigned S5C3                   :1;
        unsigned S6C3                   :1;
        unsigned S7C3                   :1;
    };
} LCDDATA9bits_t;
extern volatile LCDDATA9bits_t LCDDATA9bits __at(0x119);
// bitfield macros
#define _LCDDATA9_SEG0_POSN                                 0x0
#define _LCDDATA9_SEG0_POSITION                             0x0
#define _LCDDATA9_SEG0_SIZE                                 0x1
#define _LCDDATA9_SEG0_LENGTH                               0x1
#define _LCDDATA9_SEG0_MASK                                 0x1
#define _LCDDATA9_SEG1_POSN                                 0x1
#define _LCDDATA9_SEG1_POSITION                             0x1
#define _LCDDATA9_SEG1_SIZE                                 0x1
#define _LCDDATA9_SEG1_LENGTH                               0x1
#define _LCDDATA9_SEG1_MASK                                 0x2
#define _LCDDATA9_SEG2_POSN                                 0x2
#define _LCDDATA9_SEG2_POSITION                             0x2
#define _LCDDATA9_SEG2_SIZE                                 0x1
#define _LCDDATA9_SEG2_LENGTH                               0x1
#define _LCDDATA9_SEG2_MASK                                 0x4
#define _LCDDATA9_SEG3_POSN                                 0x3
#define _LCDDATA9_SEG3_POSITION                             0x3
#define _LCDDATA9_SEG3_SIZE                                 0x1
#define _LCDDATA9_SEG3_LENGTH                               0x1
#define _LCDDATA9_SEG3_MASK                                 0x8
#define _LCDDATA9_SEG4_POSN                                 0x4
#define _LCDDATA9_SEG4_POSITION                             0x4
#define _LCDDATA9_SEG4_SIZE                                 0x1
#define _LCDDATA9_SEG4_LENGTH                               0x1
#define _LCDDATA9_SEG4_MASK                                 0x10
#define _LCDDATA9_SEG5_POSN                                 0x5
#define _LCDDATA9_SEG5_POSITION                             0x5
#define _LCDDATA9_SEG5_SIZE                                 0x1
#define _LCDDATA9_SEG5_LENGTH                               0x1
#define _LCDDATA9_SEG5_MASK                                 0x20
#define _LCDDATA9_SEG6_POSN                                 0x6
#define _LCDDATA9_SEG6_POSITION                             0x6
#define _LCDDATA9_SEG6_SIZE                                 0x1
#define _LCDDATA9_SEG6_LENGTH                               0x1
#define _LCDDATA9_SEG6_MASK                                 0x40
#define _LCDDATA9_SEG7_POSN                                 0x7
#define _LCDDATA9_SEG7_POSITION                             0x7
#define _LCDDATA9_SEG7_SIZE                                 0x1
#define _LCDDATA9_SEG7_LENGTH                               0x1
#define _LCDDATA9_SEG7_MASK                                 0x80
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
#define _LCDDATA9_S0C3_POSN                                 0x0
#define _LCDDATA9_S0C3_POSITION                             0x0
#define _LCDDATA9_S0C3_SIZE                                 0x1
#define _LCDDATA9_S0C3_LENGTH                               0x1
#define _LCDDATA9_S0C3_MASK                                 0x1
#define _LCDDATA9_S1C3_POSN                                 0x1
#define _LCDDATA9_S1C3_POSITION                             0x1
#define _LCDDATA9_S1C3_SIZE                                 0x1
#define _LCDDATA9_S1C3_LENGTH                               0x1
#define _LCDDATA9_S1C3_MASK                                 0x2
#define _LCDDATA9_S2C3_POSN                                 0x2
#define _LCDDATA9_S2C3_POSITION                             0x2
#define _LCDDATA9_S2C3_SIZE                                 0x1
#define _LCDDATA9_S2C3_LENGTH                               0x1
#define _LCDDATA9_S2C3_MASK                                 0x4
#define _LCDDATA9_S3C3_POSN                                 0x3
#define _LCDDATA9_S3C3_POSITION                             0x3
#define _LCDDATA9_S3C3_SIZE                                 0x1
#define _LCDDATA9_S3C3_LENGTH                               0x1
#define _LCDDATA9_S3C3_MASK                                 0x8
#define _LCDDATA9_S4C3_POSN                                 0x4
#define _LCDDATA9_S4C3_POSITION                             0x4
#define _LCDDATA9_S4C3_SIZE                                 0x1
#define _LCDDATA9_S4C3_LENGTH                               0x1
#define _LCDDATA9_S4C3_MASK                                 0x10
#define _LCDDATA9_S5C3_POSN                                 0x5
#define _LCDDATA9_S5C3_POSITION                             0x5
#define _LCDDATA9_S5C3_SIZE                                 0x1
#define _LCDDATA9_S5C3_LENGTH                               0x1
#define _LCDDATA9_S5C3_MASK                                 0x20
#define _LCDDATA9_S6C3_POSN                                 0x6
#define _LCDDATA9_S6C3_POSITION                             0x6
#define _LCDDATA9_S6C3_SIZE                                 0x1
#define _LCDDATA9_S6C3_LENGTH                               0x1
#define _LCDDATA9_S6C3_MASK                                 0x40
#define _LCDDATA9_S7C3_POSN                                 0x7
#define _LCDDATA9_S7C3_POSITION                             0x7
#define _LCDDATA9_S7C3_SIZE                                 0x1
#define _LCDDATA9_S7C3_LENGTH                               0x1
#define _LCDDATA9_S7C3_MASK                                 0x80

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
extern volatile unsigned char           LCDDATA10           __at(0x11A);
#ifndef _LIB_BUILD
asm("LCDDATA10 equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
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
    struct {
        unsigned S8C3                   :1;
        unsigned S9C3                   :1;
        unsigned S10C3                  :1;
        unsigned S11C3                  :1;
        unsigned S12C3                  :1;
        unsigned S13C3                  :1;
        unsigned S14C3                  :1;
        unsigned S15C3                  :1;
    };
} LCDDATA10bits_t;
extern volatile LCDDATA10bits_t LCDDATA10bits __at(0x11A);
// bitfield macros
#define _LCDDATA10_SEG8_POSN                                0x0
#define _LCDDATA10_SEG8_POSITION                            0x0
#define _LCDDATA10_SEG8_SIZE                                0x1
#define _LCDDATA10_SEG8_LENGTH                              0x1
#define _LCDDATA10_SEG8_MASK                                0x1
#define _LCDDATA10_SEG9_POSN                                0x1
#define _LCDDATA10_SEG9_POSITION                            0x1
#define _LCDDATA10_SEG9_SIZE                                0x1
#define _LCDDATA10_SEG9_LENGTH                              0x1
#define _LCDDATA10_SEG9_MASK                                0x2
#define _LCDDATA10_SEG10_POSN                               0x2
#define _LCDDATA10_SEG10_POSITION                           0x2
#define _LCDDATA10_SEG10_SIZE                               0x1
#define _LCDDATA10_SEG10_LENGTH                             0x1
#define _LCDDATA10_SEG10_MASK                               0x4
#define _LCDDATA10_SEG11_POSN                               0x3
#define _LCDDATA10_SEG11_POSITION                           0x3
#define _LCDDATA10_SEG11_SIZE                               0x1
#define _LCDDATA10_SEG11_LENGTH                             0x1
#define _LCDDATA10_SEG11_MASK                               0x8
#define _LCDDATA10_SEG12_POSN                               0x4
#define _LCDDATA10_SEG12_POSITION                           0x4
#define _LCDDATA10_SEG12_SIZE                               0x1
#define _LCDDATA10_SEG12_LENGTH                             0x1
#define _LCDDATA10_SEG12_MASK                               0x10
#define _LCDDATA10_SEG13_POSN                               0x5
#define _LCDDATA10_SEG13_POSITION                           0x5
#define _LCDDATA10_SEG13_SIZE                               0x1
#define _LCDDATA10_SEG13_LENGTH                             0x1
#define _LCDDATA10_SEG13_MASK                               0x20
#define _LCDDATA10_SEG14_POSN                               0x6
#define _LCDDATA10_SEG14_POSITION                           0x6
#define _LCDDATA10_SEG14_SIZE                               0x1
#define _LCDDATA10_SEG14_LENGTH                             0x1
#define _LCDDATA10_SEG14_MASK                               0x40
#define _LCDDATA10_SEG15_POSN                               0x7
#define _LCDDATA10_SEG15_POSITION                           0x7
#define _LCDDATA10_SEG15_SIZE                               0x1
#define _LCDDATA10_SEG15_LENGTH                             0x1
#define _LCDDATA10_SEG15_MASK                               0x80
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
#define _LCDDATA10_S8C3_POSN                                0x0
#define _LCDDATA10_S8C3_POSITION                            0x0
#define _LCDDATA10_S8C3_SIZE                                0x1
#define _LCDDATA10_S8C3_LENGTH                              0x1
#define _LCDDATA10_S8C3_MASK                                0x1
#define _LCDDATA10_S9C3_POSN                                0x1
#define _LCDDATA10_S9C3_POSITION                            0x1
#define _LCDDATA10_S9C3_SIZE                                0x1
#define _LCDDATA10_S9C3_LENGTH                              0x1
#define _LCDDATA10_S9C3_MASK                                0x2
#define _LCDDATA10_S10C3_POSN                               0x2
#define _LCDDATA10_S10C3_POSITION                           0x2
#define _LCDDATA10_S10C3_SIZE                               0x1
#define _LCDDATA10_S10C3_LENGTH                             0x1
#define _LCDDATA10_S10C3_MASK                               0x4
#define _LCDDATA10_S11C3_POSN                               0x3
#define _LCDDATA10_S11C3_POSITION                           0x3
#define _LCDDATA10_S11C3_SIZE                               0x1
#define _LCDDATA10_S11C3_LENGTH                             0x1
#define _LCDDATA10_S11C3_MASK                               0x8
#define _LCDDATA10_S12C3_POSN                               0x4
#define _LCDDATA10_S12C3_POSITION                           0x4
#define _LCDDATA10_S12C3_SIZE                               0x1
#define _LCDDATA10_S12C3_LENGTH                             0x1
#define _LCDDATA10_S12C3_MASK                               0x10
#define _LCDDATA10_S13C3_POSN                               0x5
#define _LCDDATA10_S13C3_POSITION                           0x5
#define _LCDDATA10_S13C3_SIZE                               0x1
#define _LCDDATA10_S13C3_LENGTH                             0x1
#define _LCDDATA10_S13C3_MASK                               0x20
#define _LCDDATA10_S14C3_POSN                               0x6
#define _LCDDATA10_S14C3_POSITION                           0x6
#define _LCDDATA10_S14C3_SIZE                               0x1
#define _LCDDATA10_S14C3_LENGTH                             0x1
#define _LCDDATA10_S14C3_MASK                               0x40
#define _LCDDATA10_S15C3_POSN                               0x7
#define _LCDDATA10_S15C3_POSITION                           0x7
#define _LCDDATA10_S15C3_SIZE                               0x1
#define _LCDDATA10_S15C3_LENGTH                             0x1
#define _LCDDATA10_S15C3_MASK                               0x80

// Register: LCDSE0
#define LCDSE0 LCDSE0
extern volatile unsigned char           LCDSE0              __at(0x11C);
#ifndef _LIB_BUILD
asm("LCDSE0 equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG0                   :1;
        unsigned SEG1                   :1;
        unsigned SEG2                   :1;
        unsigned SEG3                   :1;
        unsigned SEG4                   :1;
        unsigned SEG5                   :1;
        unsigned SEG6                   :1;
        unsigned SEG7                   :1;
    };
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
    struct {
        unsigned SEGEN0                 :1;
        unsigned SEGEN1                 :1;
        unsigned SEGEN2                 :1;
        unsigned SEGEN3                 :1;
        unsigned SEGEN4                 :1;
        unsigned SEGEN5                 :1;
        unsigned SEGEN6                 :1;
        unsigned SEGEN7                 :1;
    };
} LCDSE0bits_t;
extern volatile LCDSE0bits_t LCDSE0bits __at(0x11C);
// bitfield macros
#define _LCDSE0_SEG0_POSN                                   0x0
#define _LCDSE0_SEG0_POSITION                               0x0
#define _LCDSE0_SEG0_SIZE                                   0x1
#define _LCDSE0_SEG0_LENGTH                                 0x1
#define _LCDSE0_SEG0_MASK                                   0x1
#define _LCDSE0_SEG1_POSN                                   0x1
#define _LCDSE0_SEG1_POSITION                               0x1
#define _LCDSE0_SEG1_SIZE                                   0x1
#define _LCDSE0_SEG1_LENGTH                                 0x1
#define _LCDSE0_SEG1_MASK                                   0x2
#define _LCDSE0_SEG2_POSN                                   0x2
#define _LCDSE0_SEG2_POSITION                               0x2
#define _LCDSE0_SEG2_SIZE                                   0x1
#define _LCDSE0_SEG2_LENGTH                                 0x1
#define _LCDSE0_SEG2_MASK                                   0x4
#define _LCDSE0_SEG3_POSN                                   0x3
#define _LCDSE0_SEG3_POSITION                               0x3
#define _LCDSE0_SEG3_SIZE                                   0x1
#define _LCDSE0_SEG3_LENGTH                                 0x1
#define _LCDSE0_SEG3_MASK                                   0x8
#define _LCDSE0_SEG4_POSN                                   0x4
#define _LCDSE0_SEG4_POSITION                               0x4
#define _LCDSE0_SEG4_SIZE                                   0x1
#define _LCDSE0_SEG4_LENGTH                                 0x1
#define _LCDSE0_SEG4_MASK                                   0x10
#define _LCDSE0_SEG5_POSN                                   0x5
#define _LCDSE0_SEG5_POSITION                               0x5
#define _LCDSE0_SEG5_SIZE                                   0x1
#define _LCDSE0_SEG5_LENGTH                                 0x1
#define _LCDSE0_SEG5_MASK                                   0x20
#define _LCDSE0_SEG6_POSN                                   0x6
#define _LCDSE0_SEG6_POSITION                               0x6
#define _LCDSE0_SEG6_SIZE                                   0x1
#define _LCDSE0_SEG6_LENGTH                                 0x1
#define _LCDSE0_SEG6_MASK                                   0x40
#define _LCDSE0_SEG7_POSN                                   0x7
#define _LCDSE0_SEG7_POSITION                               0x7
#define _LCDSE0_SEG7_SIZE                                   0x1
#define _LCDSE0_SEG7_LENGTH                                 0x1
#define _LCDSE0_SEG7_MASK                                   0x80
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
#define _LCDSE0_SEGEN0_POSN                                 0x0
#define _LCDSE0_SEGEN0_POSITION                             0x0
#define _LCDSE0_SEGEN0_SIZE                                 0x1
#define _LCDSE0_SEGEN0_LENGTH                               0x1
#define _LCDSE0_SEGEN0_MASK                                 0x1
#define _LCDSE0_SEGEN1_POSN                                 0x1
#define _LCDSE0_SEGEN1_POSITION                             0x1
#define _LCDSE0_SEGEN1_SIZE                                 0x1
#define _LCDSE0_SEGEN1_LENGTH                               0x1
#define _LCDSE0_SEGEN1_MASK                                 0x2
#define _LCDSE0_SEGEN2_POSN                                 0x2
#define _LCDSE0_SEGEN2_POSITION                             0x2
#define _LCDSE0_SEGEN2_SIZE                                 0x1
#define _LCDSE0_SEGEN2_LENGTH                               0x1
#define _LCDSE0_SEGEN2_MASK                                 0x4
#define _LCDSE0_SEGEN3_POSN                                 0x3
#define _LCDSE0_SEGEN3_POSITION                             0x3
#define _LCDSE0_SEGEN3_SIZE                                 0x1
#define _LCDSE0_SEGEN3_LENGTH                               0x1
#define _LCDSE0_SEGEN3_MASK                                 0x8
#define _LCDSE0_SEGEN4_POSN                                 0x4
#define _LCDSE0_SEGEN4_POSITION                             0x4
#define _LCDSE0_SEGEN4_SIZE                                 0x1
#define _LCDSE0_SEGEN4_LENGTH                               0x1
#define _LCDSE0_SEGEN4_MASK                                 0x10
#define _LCDSE0_SEGEN5_POSN                                 0x5
#define _LCDSE0_SEGEN5_POSITION                             0x5
#define _LCDSE0_SEGEN5_SIZE                                 0x1
#define _LCDSE0_SEGEN5_LENGTH                               0x1
#define _LCDSE0_SEGEN5_MASK                                 0x20
#define _LCDSE0_SEGEN6_POSN                                 0x6
#define _LCDSE0_SEGEN6_POSITION                             0x6
#define _LCDSE0_SEGEN6_SIZE                                 0x1
#define _LCDSE0_SEGEN6_LENGTH                               0x1
#define _LCDSE0_SEGEN6_MASK                                 0x40
#define _LCDSE0_SEGEN7_POSN                                 0x7
#define _LCDSE0_SEGEN7_POSITION                             0x7
#define _LCDSE0_SEGEN7_SIZE                                 0x1
#define _LCDSE0_SEGEN7_LENGTH                               0x1
#define _LCDSE0_SEGEN7_MASK                                 0x80

// Register: LCDSE1
#define LCDSE1 LCDSE1
extern volatile unsigned char           LCDSE1              __at(0x11D);
#ifndef _LIB_BUILD
asm("LCDSE1 equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG12                  :1;
        unsigned SEG13                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
    };
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
    struct {
        unsigned SEGEN8                 :1;
        unsigned SEGEN9                 :1;
        unsigned SEGEN10                :1;
        unsigned SEGEN11                :1;
        unsigned SEGEN12                :1;
        unsigned SEGEN13                :1;
        unsigned SEGEN14                :1;
        unsigned SEGEN15                :1;
    };
} LCDSE1bits_t;
extern volatile LCDSE1bits_t LCDSE1bits __at(0x11D);
// bitfield macros
#define _LCDSE1_SEG8_POSN                                   0x0
#define _LCDSE1_SEG8_POSITION                               0x0
#define _LCDSE1_SEG8_SIZE                                   0x1
#define _LCDSE1_SEG8_LENGTH                                 0x1
#define _LCDSE1_SEG8_MASK                                   0x1
#define _LCDSE1_SEG9_POSN                                   0x1
#define _LCDSE1_SEG9_POSITION                               0x1
#define _LCDSE1_SEG9_SIZE                                   0x1
#define _LCDSE1_SEG9_LENGTH                                 0x1
#define _LCDSE1_SEG9_MASK                                   0x2
#define _LCDSE1_SEG10_POSN                                  0x2
#define _LCDSE1_SEG10_POSITION                              0x2
#define _LCDSE1_SEG10_SIZE                                  0x1
#define _LCDSE1_SEG10_LENGTH                                0x1
#define _LCDSE1_SEG10_MASK                                  0x4
#define _LCDSE1_SEG11_POSN                                  0x3
#define _LCDSE1_SEG11_POSITION                              0x3
#define _LCDSE1_SEG11_SIZE                                  0x1
#define _LCDSE1_SEG11_LENGTH                                0x1
#define _LCDSE1_SEG11_MASK                                  0x8
#define _LCDSE1_SEG12_POSN                                  0x4
#define _LCDSE1_SEG12_POSITION                              0x4
#define _LCDSE1_SEG12_SIZE                                  0x1
#define _LCDSE1_SEG12_LENGTH                                0x1
#define _LCDSE1_SEG12_MASK                                  0x10
#define _LCDSE1_SEG13_POSN                                  0x5
#define _LCDSE1_SEG13_POSITION                              0x5
#define _LCDSE1_SEG13_SIZE                                  0x1
#define _LCDSE1_SEG13_LENGTH                                0x1
#define _LCDSE1_SEG13_MASK                                  0x20
#define _LCDSE1_SEG14_POSN                                  0x6
#define _LCDSE1_SEG14_POSITION                              0x6
#define _LCDSE1_SEG14_SIZE                                  0x1
#define _LCDSE1_SEG14_LENGTH                                0x1
#define _LCDSE1_SEG14_MASK                                  0x40
#define _LCDSE1_SEG15_POSN                                  0x7
#define _LCDSE1_SEG15_POSITION                              0x7
#define _LCDSE1_SEG15_SIZE                                  0x1
#define _LCDSE1_SEG15_LENGTH                                0x1
#define _LCDSE1_SEG15_MASK                                  0x80
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
#define _LCDSE1_SEGEN8_POSN                                 0x0
#define _LCDSE1_SEGEN8_POSITION                             0x0
#define _LCDSE1_SEGEN8_SIZE                                 0x1
#define _LCDSE1_SEGEN8_LENGTH                               0x1
#define _LCDSE1_SEGEN8_MASK                                 0x1
#define _LCDSE1_SEGEN9_POSN                                 0x1
#define _LCDSE1_SEGEN9_POSITION                             0x1
#define _LCDSE1_SEGEN9_SIZE                                 0x1
#define _LCDSE1_SEGEN9_LENGTH                               0x1
#define _LCDSE1_SEGEN9_MASK                                 0x2
#define _LCDSE1_SEGEN10_POSN                                0x2
#define _LCDSE1_SEGEN10_POSITION                            0x2
#define _LCDSE1_SEGEN10_SIZE                                0x1
#define _LCDSE1_SEGEN10_LENGTH                              0x1
#define _LCDSE1_SEGEN10_MASK                                0x4
#define _LCDSE1_SEGEN11_POSN                                0x3
#define _LCDSE1_SEGEN11_POSITION                            0x3
#define _LCDSE1_SEGEN11_SIZE                                0x1
#define _LCDSE1_SEGEN11_LENGTH                              0x1
#define _LCDSE1_SEGEN11_MASK                                0x8
#define _LCDSE1_SEGEN12_POSN                                0x4
#define _LCDSE1_SEGEN12_POSITION                            0x4
#define _LCDSE1_SEGEN12_SIZE                                0x1
#define _LCDSE1_SEGEN12_LENGTH                              0x1
#define _LCDSE1_SEGEN12_MASK                                0x10
#define _LCDSE1_SEGEN13_POSN                                0x5
#define _LCDSE1_SEGEN13_POSITION                            0x5
#define _LCDSE1_SEGEN13_SIZE                                0x1
#define _LCDSE1_SEGEN13_LENGTH                              0x1
#define _LCDSE1_SEGEN13_MASK                                0x20
#define _LCDSE1_SEGEN14_POSN                                0x6
#define _LCDSE1_SEGEN14_POSITION                            0x6
#define _LCDSE1_SEGEN14_SIZE                                0x1
#define _LCDSE1_SEGEN14_LENGTH                              0x1
#define _LCDSE1_SEGEN14_MASK                                0x40
#define _LCDSE1_SEGEN15_POSN                                0x7
#define _LCDSE1_SEGEN15_POSITION                            0x7
#define _LCDSE1_SEGEN15_SIZE                                0x1
#define _LCDSE1_SEGEN15_LENGTH                              0x1
#define _LCDSE1_SEGEN15_MASK                                0x80

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
    struct {
        unsigned EERD                   :1;
        unsigned EEWR                   :1;
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
#define _EECON1_EERD_POSN                                   0x0
#define _EECON1_EERD_POSITION                               0x0
#define _EECON1_EERD_SIZE                                   0x1
#define _EECON1_EERD_LENGTH                                 0x1
#define _EECON1_EERD_MASK                                   0x1
#define _EECON1_EEWR_POSN                                   0x1
#define _EECON1_EEWR_POSITION                               0x1
#define _EECON1_EEWR_SIZE                                   0x1
#define _EECON1_EEWR_LENGTH                                 0x1
#define _EECON1_EEWR_MASK                                   0x2

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
// ADCON0<ADFM>
extern volatile __bit                   ADFM                __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON0,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ANSEL<AN0>
extern volatile __bit                   AN0                 __at(0x488);	// @ (0x91 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(ANSEL,0)
// ANSEL<AN1>
extern volatile __bit                   AN1                 __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(ANSEL,1)
// ANSEL<AN2>
extern volatile __bit                   AN2                 __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(ANSEL,2)
// ANSEL<AN3>
extern volatile __bit                   AN3                 __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(ANSEL,3)
// ANSEL<AN4>
extern volatile __bit                   AN4                 __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 AN4_bit             _BIT_ACCESS(ANSEL,4)
// ANSEL<ANS0>
extern volatile __bit                   ANS0                __at(0x488);	// @ (0x91 * 8 + 0)
#define                                 ANS0_bit            _BIT_ACCESS(ANSEL,0)
// ANSEL<ANS1>
extern volatile __bit                   ANS1                __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 ANS1_bit            _BIT_ACCESS(ANSEL,1)
// ANSEL<ANS2>
extern volatile __bit                   ANS2                __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 ANS2_bit            _BIT_ACCESS(ANSEL,2)
// ANSEL<ANS3>
extern volatile __bit                   ANS3                __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL,3)
// ANSEL<ANS4>
extern volatile __bit                   ANS4                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 ANS4_bit            _BIT_ACCESS(ANSEL,4)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// LCDPS<BIASMD>
extern volatile __bit                   BIASMD              __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 BIASMD_bit          _BIT_ACCESS(LCDPS,6)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x46D);	// @ (0x8D * 8 + 5)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,5)
// CMCON0<C1INV>
extern volatile __bit                   C1INV               __at(0x4E4);	// @ (0x9C * 8 + 4)
#define                                 C1INV_bit           _BIT_ACCESS(CMCON0,4)
// CMCON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x4E6);	// @ (0x9C * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CMCON0,6)
// PIE2<C2IE>
extern volatile __bit                   C2IE                __at(0x46E);	// @ (0x8D * 8 + 6)
#define                                 C2IE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<C2IF>
extern volatile __bit                   C2IF                __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 C2IF_bit            _BIT_ACCESS(PIR2,6)
// CMCON0<C2INV>
extern volatile __bit                   C2INV               __at(0x4E5);	// @ (0x9C * 8 + 5)
#define                                 C2INV_bit           _BIT_ACCESS(CMCON0,5)
// CMCON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x4E7);	// @ (0x9C * 8 + 7)
#define                                 C2OUT_bit           _BIT_ACCESS(CMCON0,7)
// CMCON1<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CMCON1,0)
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
extern volatile __bit                   CHS0                __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// CMCON0<CIS>
extern volatile __bit                   CIS                 __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 CIS_bit             _BIT_ACCESS(CMCON0,3)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON<CKP>
extern volatile __bit                   CKP                 __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON,4)
// CMCON0<CM0>
extern volatile __bit                   CM0                 __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 CM0_bit             _BIT_ACCESS(CMCON0,0)
// CMCON0<CM1>
extern volatile __bit                   CM1                 __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 CM1_bit             _BIT_ACCESS(CMCON0,1)
// CMCON0<CM2>
extern volatile __bit                   CM2                 __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 CM2_bit             _BIT_ACCESS(CMCON0,2)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// LCDCON<CS0>
extern volatile __bit                   CS0                 __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 CS0_bit             _BIT_ACCESS(LCDCON,2)
// LCDCON<CS1>
extern volatile __bit                   CS1                 __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 CS1_bit             _BIT_ACCESS(LCDCON,3)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x4C7);	// @ (0x98 * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
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
// EEADRH<EEADRH0>
extern volatile __bit                   EEADRH0             __at(0x878);	// @ (0x10F * 8 + 0)
#define                                 EEADRH0_bit         _BIT_ACCESS(EEADRH,0)
// EEADRH<EEADRH1>
extern volatile __bit                   EEADRH1             __at(0x879);	// @ (0x10F * 8 + 1)
#define                                 EEADRH1_bit         _BIT_ACCESS(EEADRH,1)
// EEADRH<EEADRH2>
extern volatile __bit                   EEADRH2             __at(0x87A);	// @ (0x10F * 8 + 2)
#define                                 EEADRH2_bit         _BIT_ACCESS(EEADRH,2)
// EEADRH<EEADRH3>
extern volatile __bit                   EEADRH3             __at(0x87B);	// @ (0x10F * 8 + 3)
#define                                 EEADRH3_bit         _BIT_ACCESS(EEADRH,3)
// EEADRH<EEADRH4>
extern volatile __bit                   EEADRH4             __at(0x87C);	// @ (0x10F * 8 + 4)
#define                                 EEADRH4_bit         _BIT_ACCESS(EEADRH,4)
// EEADRL<EEADRL0>
extern volatile __bit                   EEADRL0             __at(0x868);	// @ (0x10D * 8 + 0)
#define                                 EEADRL0_bit         _BIT_ACCESS(EEADRL,0)
// EEADRL<EEADRL1>
extern volatile __bit                   EEADRL1             __at(0x869);	// @ (0x10D * 8 + 1)
#define                                 EEADRL1_bit         _BIT_ACCESS(EEADRL,1)
// EEADRL<EEADRL2>
extern volatile __bit                   EEADRL2             __at(0x86A);	// @ (0x10D * 8 + 2)
#define                                 EEADRL2_bit         _BIT_ACCESS(EEADRL,2)
// EEADRL<EEADRL3>
extern volatile __bit                   EEADRL3             __at(0x86B);	// @ (0x10D * 8 + 3)
#define                                 EEADRL3_bit         _BIT_ACCESS(EEADRL,3)
// EEADRL<EEADRL4>
extern volatile __bit                   EEADRL4             __at(0x86C);	// @ (0x10D * 8 + 4)
#define                                 EEADRL4_bit         _BIT_ACCESS(EEADRL,4)
// EEADRL<EEADRL5>
extern volatile __bit                   EEADRL5             __at(0x86D);	// @ (0x10D * 8 + 5)
#define                                 EEADRL5_bit         _BIT_ACCESS(EEADRL,5)
// EEADRL<EEADRL6>
extern volatile __bit                   EEADRL6             __at(0x86E);	// @ (0x10D * 8 + 6)
#define                                 EEADRL6_bit         _BIT_ACCESS(EEADRL,6)
// EEADRL<EEADRL7>
extern volatile __bit                   EEADRL7             __at(0x86F);	// @ (0x10D * 8 + 7)
#define                                 EEADRL7_bit         _BIT_ACCESS(EEADRL,7)
// EEDATH<EEDATH0>
extern volatile __bit                   EEDATH0             __at(0x870);	// @ (0x10E * 8 + 0)
#define                                 EEDATH0_bit         _BIT_ACCESS(EEDATH,0)
// EEDATH<EEDATH1>
extern volatile __bit                   EEDATH1             __at(0x871);	// @ (0x10E * 8 + 1)
#define                                 EEDATH1_bit         _BIT_ACCESS(EEDATH,1)
// EEDATH<EEDATH2>
extern volatile __bit                   EEDATH2             __at(0x872);	// @ (0x10E * 8 + 2)
#define                                 EEDATH2_bit         _BIT_ACCESS(EEDATH,2)
// EEDATH<EEDATH3>
extern volatile __bit                   EEDATH3             __at(0x873);	// @ (0x10E * 8 + 3)
#define                                 EEDATH3_bit         _BIT_ACCESS(EEDATH,3)
// EEDATH<EEDATH4>
extern volatile __bit                   EEDATH4             __at(0x874);	// @ (0x10E * 8 + 4)
#define                                 EEDATH4_bit         _BIT_ACCESS(EEDATH,4)
// EEDATH<EEDATH5>
extern volatile __bit                   EEDATH5             __at(0x875);	// @ (0x10E * 8 + 5)
#define                                 EEDATH5_bit         _BIT_ACCESS(EEDATH,5)
// EEDATL<EEDATL0>
extern volatile __bit                   EEDATL0             __at(0x860);	// @ (0x10C * 8 + 0)
#define                                 EEDATL0_bit         _BIT_ACCESS(EEDATL,0)
// EEDATL<EEDATL1>
extern volatile __bit                   EEDATL1             __at(0x861);	// @ (0x10C * 8 + 1)
#define                                 EEDATL1_bit         _BIT_ACCESS(EEDATL,1)
// EEDATL<EEDATL2>
extern volatile __bit                   EEDATL2             __at(0x862);	// @ (0x10C * 8 + 2)
#define                                 EEDATL2_bit         _BIT_ACCESS(EEDATL,2)
// EEDATL<EEDATL3>
extern volatile __bit                   EEDATL3             __at(0x863);	// @ (0x10C * 8 + 3)
#define                                 EEDATL3_bit         _BIT_ACCESS(EEDATL,3)
// EEDATL<EEDATL4>
extern volatile __bit                   EEDATL4             __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 EEDATL4_bit         _BIT_ACCESS(EEDATL,4)
// EEDATL<EEDATL5>
extern volatile __bit                   EEDATL5             __at(0x865);	// @ (0x10C * 8 + 5)
#define                                 EEDATL5_bit         _BIT_ACCESS(EEDATL,5)
// EEDATL<EEDATL6>
extern volatile __bit                   EEDATL6             __at(0x866);	// @ (0x10C * 8 + 6)
#define                                 EEDATL6_bit         _BIT_ACCESS(EEDATL,6)
// EEDATL<EEDATL7>
extern volatile __bit                   EEDATL7             __at(0x867);	// @ (0x10C * 8 + 7)
#define                                 EEDATL7_bit         _BIT_ACCESS(EEDATL,7)
// PIE1<EEIE>
extern volatile __bit                   EEIE                __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 EEIE_bit            _BIT_ACCESS(PIE1,7)
// PIR1<EEIF>
extern volatile __bit                   EEIF                __at(0x67);	// @ (0xC * 8 + 7)
#define                                 EEIF_bit            _BIT_ACCESS(PIR1,7)
// EECON1<EEPGD>
extern volatile __bit                   EEPGD               __at(0xC67);	// @ (0x18C * 8 + 7)
#define                                 EEPGD_bit           _BIT_ACCESS(EECON1,7)
// EECON1<EERD>
extern volatile __bit                   EERD                __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 EERD_bit            _BIT_ACCESS(EECON1,0)
// EECON1<EEWR>
extern volatile __bit                   EEWR                __at(0xC61);	// @ (0x18C * 8 + 1)
#define                                 EEWR_bit            _BIT_ACCESS(EECON1,1)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
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
// IOCB<IOC4>
extern volatile __bit                   IOC4                __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOC4_bit            _BIT_ACCESS(IOCB,4)
// IOCB<IOC5>
extern volatile __bit                   IOC5                __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOC5_bit            _BIT_ACCESS(IOCB,5)
// IOCB<IOC6>
extern volatile __bit                   IOC6                __at(0x4B6);	// @ (0x96 * 8 + 6)
#define                                 IOC6_bit            _BIT_ACCESS(IOCB,6)
// IOCB<IOC7>
extern volatile __bit                   IOC7                __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 IOC7_bit            _BIT_ACCESS(IOCB,7)
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
// LVDCON<IRVST>
extern volatile __bit                   IRVST               __at(0x84D);	// @ (0x109 * 8 + 5)
#define                                 IRVST_bit           _BIT_ACCESS(LVDCON,5)
// LCDPS<LCDA>
extern volatile __bit                   LCDA                __at(0x845);	// @ (0x108 * 8 + 5)
#define                                 LCDA_bit            _BIT_ACCESS(LCDPS,5)
// LCDCON<LCDEN>
extern volatile __bit                   LCDEN               __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 LCDEN_bit           _BIT_ACCESS(LCDCON,7)
// PIE2<LCDIE>
extern volatile __bit                   LCDIE               __at(0x46C);	// @ (0x8D * 8 + 4)
#define                                 LCDIE_bit           _BIT_ACCESS(PIE2,4)
// PIR2<LCDIF>
extern volatile __bit                   LCDIF               __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 LCDIF_bit           _BIT_ACCESS(PIR2,4)
// LCDCON<LMUX0>
extern volatile __bit                   LMUX0               __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 LMUX0_bit           _BIT_ACCESS(LCDCON,0)
// LCDCON<LMUX1>
extern volatile __bit                   LMUX1               __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 LMUX1_bit           _BIT_ACCESS(LCDCON,1)
// LCDPS<LP0>
extern volatile __bit                   LP0                 __at(0x840);	// @ (0x108 * 8 + 0)
#define                                 LP0_bit             _BIT_ACCESS(LCDPS,0)
// LCDPS<LP1>
extern volatile __bit                   LP1                 __at(0x841);	// @ (0x108 * 8 + 1)
#define                                 LP1_bit             _BIT_ACCESS(LCDPS,1)
// LCDPS<LP2>
extern volatile __bit                   LP2                 __at(0x842);	// @ (0x108 * 8 + 2)
#define                                 LP2_bit             _BIT_ACCESS(LCDPS,2)
// LCDPS<LP3>
extern volatile __bit                   LP3                 __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 LP3_bit             _BIT_ACCESS(LCDPS,3)
// OSCCON<LTS>
extern volatile __bit                   LTS                 __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 LTS_bit             _BIT_ACCESS(OSCCON,1)
// LVDCON<LVDEN>
extern volatile __bit                   LVDEN               __at(0x84C);	// @ (0x109 * 8 + 4)
#define                                 LVDEN_bit           _BIT_ACCESS(LVDCON,4)
// PIE2<LVDIE>
extern volatile __bit                   LVDIE               __at(0x46A);	// @ (0x8D * 8 + 2)
#define                                 LVDIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<LVDIF>
extern volatile __bit                   LVDIF               __at(0x6A);	// @ (0xD * 8 + 2)
#define                                 LVDIF_bit           _BIT_ACCESS(PIR2,2)
// LVDCON<LVDL0>
extern volatile __bit                   LVDL0               __at(0x848);	// @ (0x109 * 8 + 0)
#define                                 LVDL0_bit           _BIT_ACCESS(LVDCON,0)
// LVDCON<LVDL1>
extern volatile __bit                   LVDL1               __at(0x849);	// @ (0x109 * 8 + 1)
#define                                 LVDL1_bit           _BIT_ACCESS(LVDCON,1)
// LVDCON<LVDL2>
extern volatile __bit                   LVDL2               __at(0x84A);	// @ (0x109 * 8 + 2)
#define                                 LVDL2_bit           _BIT_ACCESS(LVDCON,2)
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
// RCSTA<RC8_9>
extern volatile __bit                   RC8_9               __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RC8_9_bit           _BIT_ACCESS(RCSTA,6)
// RCSTA<RC9>
extern volatile __bit                   RC9                 __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RC9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RCD8>
extern volatile __bit                   RCD8                __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 RCD8_bit            _BIT_ACCESS(RCSTA,0)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
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
// LCDDATA0<S0C0>
extern volatile __bit                   S0C0                __at(0x880);	// @ (0x110 * 8 + 0)
#define                                 S0C0_bit            _BIT_ACCESS(LCDDATA0,0)
// LCDDATA3<S0C1>
extern volatile __bit                   S0C1                __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 S0C1_bit            _BIT_ACCESS(LCDDATA3,0)
// LCDDATA6<S0C2>
extern volatile __bit                   S0C2                __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 S0C2_bit            _BIT_ACCESS(LCDDATA6,0)
// LCDDATA9<S0C3>
extern volatile __bit                   S0C3                __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 S0C3_bit            _BIT_ACCESS(LCDDATA9,0)
// LCDDATA1<S10C0>
extern volatile __bit                   S10C0               __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 S10C0_bit           _BIT_ACCESS(LCDDATA1,2)
// LCDDATA4<S10C1>
extern volatile __bit                   S10C1               __at(0x8A2);	// @ (0x114 * 8 + 2)
#define                                 S10C1_bit           _BIT_ACCESS(LCDDATA4,2)
// LCDDATA7<S10C2>
extern volatile __bit                   S10C2               __at(0x8BA);	// @ (0x117 * 8 + 2)
#define                                 S10C2_bit           _BIT_ACCESS(LCDDATA7,2)
// LCDDATA10<S10C3>
extern volatile __bit                   S10C3               __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 S10C3_bit           _BIT_ACCESS(LCDDATA10,2)
// LCDDATA1<S11C0>
extern volatile __bit                   S11C0               __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 S11C0_bit           _BIT_ACCESS(LCDDATA1,3)
// LCDDATA4<S11C1>
extern volatile __bit                   S11C1               __at(0x8A3);	// @ (0x114 * 8 + 3)
#define                                 S11C1_bit           _BIT_ACCESS(LCDDATA4,3)
// LCDDATA7<S11C2>
extern volatile __bit                   S11C2               __at(0x8BB);	// @ (0x117 * 8 + 3)
#define                                 S11C2_bit           _BIT_ACCESS(LCDDATA7,3)
// LCDDATA10<S11C3>
extern volatile __bit                   S11C3               __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 S11C3_bit           _BIT_ACCESS(LCDDATA10,3)
// LCDDATA1<S12C0>
extern volatile __bit                   S12C0               __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 S12C0_bit           _BIT_ACCESS(LCDDATA1,4)
// LCDDATA4<S12C1>
extern volatile __bit                   S12C1               __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 S12C1_bit           _BIT_ACCESS(LCDDATA4,4)
// LCDDATA7<S12C2>
extern volatile __bit                   S12C2               __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 S12C2_bit           _BIT_ACCESS(LCDDATA7,4)
// LCDDATA10<S12C3>
extern volatile __bit                   S12C3               __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 S12C3_bit           _BIT_ACCESS(LCDDATA10,4)
// LCDDATA1<S13C0>
extern volatile __bit                   S13C0               __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 S13C0_bit           _BIT_ACCESS(LCDDATA1,5)
// LCDDATA4<S13C1>
extern volatile __bit                   S13C1               __at(0x8A5);	// @ (0x114 * 8 + 5)
#define                                 S13C1_bit           _BIT_ACCESS(LCDDATA4,5)
// LCDDATA7<S13C2>
extern volatile __bit                   S13C2               __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 S13C2_bit           _BIT_ACCESS(LCDDATA7,5)
// LCDDATA10<S13C3>
extern volatile __bit                   S13C3               __at(0x8D5);	// @ (0x11A * 8 + 5)
#define                                 S13C3_bit           _BIT_ACCESS(LCDDATA10,5)
// LCDDATA1<S14C0>
extern volatile __bit                   S14C0               __at(0x88E);	// @ (0x111 * 8 + 6)
#define                                 S14C0_bit           _BIT_ACCESS(LCDDATA1,6)
// LCDDATA4<S14C1>
extern volatile __bit                   S14C1               __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 S14C1_bit           _BIT_ACCESS(LCDDATA4,6)
// LCDDATA7<S14C2>
extern volatile __bit                   S14C2               __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 S14C2_bit           _BIT_ACCESS(LCDDATA7,6)
// LCDDATA10<S14C3>
extern volatile __bit                   S14C3               __at(0x8D6);	// @ (0x11A * 8 + 6)
#define                                 S14C3_bit           _BIT_ACCESS(LCDDATA10,6)
// LCDDATA1<S15C0>
extern volatile __bit                   S15C0               __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 S15C0_bit           _BIT_ACCESS(LCDDATA1,7)
// LCDDATA4<S15C1>
extern volatile __bit                   S15C1               __at(0x8A7);	// @ (0x114 * 8 + 7)
#define                                 S15C1_bit           _BIT_ACCESS(LCDDATA4,7)
// LCDDATA7<S15C2>
extern volatile __bit                   S15C2               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 S15C2_bit           _BIT_ACCESS(LCDDATA7,7)
// LCDDATA10<S15C3>
extern volatile __bit                   S15C3               __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 S15C3_bit           _BIT_ACCESS(LCDDATA10,7)
// LCDDATA0<S1C0>
extern volatile __bit                   S1C0                __at(0x881);	// @ (0x110 * 8 + 1)
#define                                 S1C0_bit            _BIT_ACCESS(LCDDATA0,1)
// LCDDATA3<S1C1>
extern volatile __bit                   S1C1                __at(0x899);	// @ (0x113 * 8 + 1)
#define                                 S1C1_bit            _BIT_ACCESS(LCDDATA3,1)
// LCDDATA6<S1C2>
extern volatile __bit                   S1C2                __at(0x8B1);	// @ (0x116 * 8 + 1)
#define                                 S1C2_bit            _BIT_ACCESS(LCDDATA6,1)
// LCDDATA9<S1C3>
extern volatile __bit                   S1C3                __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 S1C3_bit            _BIT_ACCESS(LCDDATA9,1)
// LCDDATA0<S2C0>
extern volatile __bit                   S2C0                __at(0x882);	// @ (0x110 * 8 + 2)
#define                                 S2C0_bit            _BIT_ACCESS(LCDDATA0,2)
// LCDDATA3<S2C1>
extern volatile __bit                   S2C1                __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 S2C1_bit            _BIT_ACCESS(LCDDATA3,2)
// LCDDATA6<S2C2>
extern volatile __bit                   S2C2                __at(0x8B2);	// @ (0x116 * 8 + 2)
#define                                 S2C2_bit            _BIT_ACCESS(LCDDATA6,2)
// LCDDATA9<S2C3>
extern volatile __bit                   S2C3                __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 S2C3_bit            _BIT_ACCESS(LCDDATA9,2)
// LCDDATA0<S3C0>
extern volatile __bit                   S3C0                __at(0x883);	// @ (0x110 * 8 + 3)
#define                                 S3C0_bit            _BIT_ACCESS(LCDDATA0,3)
// LCDDATA3<S3C1>
extern volatile __bit                   S3C1                __at(0x89B);	// @ (0x113 * 8 + 3)
#define                                 S3C1_bit            _BIT_ACCESS(LCDDATA3,3)
// LCDDATA6<S3C2>
extern volatile __bit                   S3C2                __at(0x8B3);	// @ (0x116 * 8 + 3)
#define                                 S3C2_bit            _BIT_ACCESS(LCDDATA6,3)
// LCDDATA9<S3C3>
extern volatile __bit                   S3C3                __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 S3C3_bit            _BIT_ACCESS(LCDDATA9,3)
// LCDDATA0<S4C0>
extern volatile __bit                   S4C0                __at(0x884);	// @ (0x110 * 8 + 4)
#define                                 S4C0_bit            _BIT_ACCESS(LCDDATA0,4)
// LCDDATA3<S4C1>
extern volatile __bit                   S4C1                __at(0x89C);	// @ (0x113 * 8 + 4)
#define                                 S4C1_bit            _BIT_ACCESS(LCDDATA3,4)
// LCDDATA6<S4C2>
extern volatile __bit                   S4C2                __at(0x8B4);	// @ (0x116 * 8 + 4)
#define                                 S4C2_bit            _BIT_ACCESS(LCDDATA6,4)
// LCDDATA9<S4C3>
extern volatile __bit                   S4C3                __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 S4C3_bit            _BIT_ACCESS(LCDDATA9,4)
// LCDDATA0<S5C0>
extern volatile __bit                   S5C0                __at(0x885);	// @ (0x110 * 8 + 5)
#define                                 S5C0_bit            _BIT_ACCESS(LCDDATA0,5)
// LCDDATA3<S5C1>
extern volatile __bit                   S5C1                __at(0x89D);	// @ (0x113 * 8 + 5)
#define                                 S5C1_bit            _BIT_ACCESS(LCDDATA3,5)
// LCDDATA6<S5C2>
extern volatile __bit                   S5C2                __at(0x8B5);	// @ (0x116 * 8 + 5)
#define                                 S5C2_bit            _BIT_ACCESS(LCDDATA6,5)
// LCDDATA9<S5C3>
extern volatile __bit                   S5C3                __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 S5C3_bit            _BIT_ACCESS(LCDDATA9,5)
// LCDDATA0<S6C0>
extern volatile __bit                   S6C0                __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 S6C0_bit            _BIT_ACCESS(LCDDATA0,6)
// LCDDATA3<S6C1>
extern volatile __bit                   S6C1                __at(0x89E);	// @ (0x113 * 8 + 6)
#define                                 S6C1_bit            _BIT_ACCESS(LCDDATA3,6)
// LCDDATA6<S6C2>
extern volatile __bit                   S6C2                __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 S6C2_bit            _BIT_ACCESS(LCDDATA6,6)
// LCDDATA9<S6C3>
extern volatile __bit                   S6C3                __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 S6C3_bit            _BIT_ACCESS(LCDDATA9,6)
// LCDDATA0<S7C0>
extern volatile __bit                   S7C0                __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 S7C0_bit            _BIT_ACCESS(LCDDATA0,7)
// LCDDATA3<S7C1>
extern volatile __bit                   S7C1                __at(0x89F);	// @ (0x113 * 8 + 7)
#define                                 S7C1_bit            _BIT_ACCESS(LCDDATA3,7)
// LCDDATA6<S7C2>
extern volatile __bit                   S7C2                __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 S7C2_bit            _BIT_ACCESS(LCDDATA6,7)
// LCDDATA9<S7C3>
extern volatile __bit                   S7C3                __at(0x8CF);	// @ (0x119 * 8 + 7)
#define                                 S7C3_bit            _BIT_ACCESS(LCDDATA9,7)
// LCDDATA1<S8C0>
extern volatile __bit                   S8C0                __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 S8C0_bit            _BIT_ACCESS(LCDDATA1,0)
// LCDDATA4<S8C1>
extern volatile __bit                   S8C1                __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 S8C1_bit            _BIT_ACCESS(LCDDATA4,0)
// LCDDATA7<S8C2>
extern volatile __bit                   S8C2                __at(0x8B8);	// @ (0x117 * 8 + 0)
#define                                 S8C2_bit            _BIT_ACCESS(LCDDATA7,0)
// LCDDATA10<S8C3>
extern volatile __bit                   S8C3                __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 S8C3_bit            _BIT_ACCESS(LCDDATA10,0)
// LCDDATA1<S9C0>
extern volatile __bit                   S9C0                __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 S9C0_bit            _BIT_ACCESS(LCDDATA1,1)
// LCDDATA4<S9C1>
extern volatile __bit                   S9C1                __at(0x8A1);	// @ (0x114 * 8 + 1)
#define                                 S9C1_bit            _BIT_ACCESS(LCDDATA4,1)
// LCDDATA7<S9C2>
extern volatile __bit                   S9C2                __at(0x8B9);	// @ (0x117 * 8 + 1)
#define                                 S9C2_bit            _BIT_ACCESS(LCDDATA7,1)
// LCDDATA10<S9C3>
extern volatile __bit                   S9C3                __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 S9C3_bit            _BIT_ACCESS(LCDDATA10,1)
// PCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 SBOREN_bit          _BIT_ACCESS(PCON,4)
// OSCCON<SCS>
extern volatile __bit                   SCS                 __at(0x478);	// @ (0x8F * 8 + 0)
#define                                 SCS_bit             _BIT_ACCESS(OSCCON,0)
// LCDSE0<SE0>
extern volatile __bit                   SE0                 __at(0x8E0);	// @ (0x11C * 8 + 0)
#define                                 SE0_bit             _BIT_ACCESS(LCDSE0,0)
// LCDSE0<SE1>
extern volatile __bit                   SE1                 __at(0x8E1);	// @ (0x11C * 8 + 1)
#define                                 SE1_bit             _BIT_ACCESS(LCDSE0,1)
// LCDSE1<SE10>
extern volatile __bit                   SE10                __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 SE10_bit            _BIT_ACCESS(LCDSE1,2)
// LCDSE1<SE11>
extern volatile __bit                   SE11                __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 SE11_bit            _BIT_ACCESS(LCDSE1,3)
// LCDSE1<SE12>
extern volatile __bit                   SE12                __at(0x8EC);	// @ (0x11D * 8 + 4)
#define                                 SE12_bit            _BIT_ACCESS(LCDSE1,4)
// LCDSE1<SE13>
extern volatile __bit                   SE13                __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 SE13_bit            _BIT_ACCESS(LCDSE1,5)
// LCDSE1<SE14>
extern volatile __bit                   SE14                __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 SE14_bit            _BIT_ACCESS(LCDSE1,6)
// LCDSE1<SE15>
extern volatile __bit                   SE15                __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 SE15_bit            _BIT_ACCESS(LCDSE1,7)
// LCDSE0<SE2>
extern volatile __bit                   SE2                 __at(0x8E2);	// @ (0x11C * 8 + 2)
#define                                 SE2_bit             _BIT_ACCESS(LCDSE0,2)
// LCDSE0<SE3>
extern volatile __bit                   SE3                 __at(0x8E3);	// @ (0x11C * 8 + 3)
#define                                 SE3_bit             _BIT_ACCESS(LCDSE0,3)
// LCDSE0<SE4>
extern volatile __bit                   SE4                 __at(0x8E4);	// @ (0x11C * 8 + 4)
#define                                 SE4_bit             _BIT_ACCESS(LCDSE0,4)
// LCDSE0<SE5>
extern volatile __bit                   SE5                 __at(0x8E5);	// @ (0x11C * 8 + 5)
#define                                 SE5_bit             _BIT_ACCESS(LCDSE0,5)
// LCDSE0<SE6>
extern volatile __bit                   SE6                 __at(0x8E6);	// @ (0x11C * 8 + 6)
#define                                 SE6_bit             _BIT_ACCESS(LCDSE0,6)
// LCDSE0<SE7>
extern volatile __bit                   SE7                 __at(0x8E7);	// @ (0x11C * 8 + 7)
#define                                 SE7_bit             _BIT_ACCESS(LCDSE0,7)
// LCDSE1<SE8>
extern volatile __bit                   SE8                 __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 SE8_bit             _BIT_ACCESS(LCDSE1,0)
// LCDSE1<SE9>
extern volatile __bit                   SE9                 __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 SE9_bit             _BIT_ACCESS(LCDSE1,1)
// LCDDATA0<SEG0COM0>
extern volatile __bit                   SEG0COM0            __at(0x880);	// @ (0x110 * 8 + 0)
#define                                 SEG0COM0_bit        _BIT_ACCESS(LCDDATA0,0)
// LCDDATA3<SEG0COM1>
extern volatile __bit                   SEG0COM1            __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 SEG0COM1_bit        _BIT_ACCESS(LCDDATA3,0)
// LCDDATA6<SEG0COM2>
extern volatile __bit                   SEG0COM2            __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 SEG0COM2_bit        _BIT_ACCESS(LCDDATA6,0)
// LCDDATA9<SEG0COM3>
extern volatile __bit                   SEG0COM3            __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 SEG0COM3_bit        _BIT_ACCESS(LCDDATA9,0)
// LCDDATA1<SEG10COM0>
extern volatile __bit                   SEG10COM0           __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 SEG10COM0_bit       _BIT_ACCESS(LCDDATA1,2)
// LCDDATA4<SEG10COM1>
extern volatile __bit                   SEG10COM1           __at(0x8A2);	// @ (0x114 * 8 + 2)
#define                                 SEG10COM1_bit       _BIT_ACCESS(LCDDATA4,2)
// LCDDATA7<SEG10COM2>
extern volatile __bit                   SEG10COM2           __at(0x8BA);	// @ (0x117 * 8 + 2)
#define                                 SEG10COM2_bit       _BIT_ACCESS(LCDDATA7,2)
// LCDDATA10<SEG10COM3>
extern volatile __bit                   SEG10COM3           __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 SEG10COM3_bit       _BIT_ACCESS(LCDDATA10,2)
// LCDDATA1<SEG11COM0>
extern volatile __bit                   SEG11COM0           __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 SEG11COM0_bit       _BIT_ACCESS(LCDDATA1,3)
// LCDDATA4<SEG11COM1>
extern volatile __bit                   SEG11COM1           __at(0x8A3);	// @ (0x114 * 8 + 3)
#define                                 SEG11COM1_bit       _BIT_ACCESS(LCDDATA4,3)
// LCDDATA7<SEG11COM2>
extern volatile __bit                   SEG11COM2           __at(0x8BB);	// @ (0x117 * 8 + 3)
#define                                 SEG11COM2_bit       _BIT_ACCESS(LCDDATA7,3)
// LCDDATA10<SEG11COM3>
extern volatile __bit                   SEG11COM3           __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 SEG11COM3_bit       _BIT_ACCESS(LCDDATA10,3)
// LCDDATA1<SEG12COM0>
extern volatile __bit                   SEG12COM0           __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 SEG12COM0_bit       _BIT_ACCESS(LCDDATA1,4)
// LCDDATA4<SEG12COM1>
extern volatile __bit                   SEG12COM1           __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 SEG12COM1_bit       _BIT_ACCESS(LCDDATA4,4)
// LCDDATA7<SEG12COM2>
extern volatile __bit                   SEG12COM2           __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 SEG12COM2_bit       _BIT_ACCESS(LCDDATA7,4)
// LCDDATA10<SEG12COM3>
extern volatile __bit                   SEG12COM3           __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 SEG12COM3_bit       _BIT_ACCESS(LCDDATA10,4)
// LCDDATA1<SEG13COM0>
extern volatile __bit                   SEG13COM0           __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 SEG13COM0_bit       _BIT_ACCESS(LCDDATA1,5)
// LCDDATA4<SEG13COM1>
extern volatile __bit                   SEG13COM1           __at(0x8A5);	// @ (0x114 * 8 + 5)
#define                                 SEG13COM1_bit       _BIT_ACCESS(LCDDATA4,5)
// LCDDATA7<SEG13COM2>
extern volatile __bit                   SEG13COM2           __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 SEG13COM2_bit       _BIT_ACCESS(LCDDATA7,5)
// LCDDATA10<SEG13COM3>
extern volatile __bit                   SEG13COM3           __at(0x8D5);	// @ (0x11A * 8 + 5)
#define                                 SEG13COM3_bit       _BIT_ACCESS(LCDDATA10,5)
// LCDDATA1<SEG14COM0>
extern volatile __bit                   SEG14COM0           __at(0x88E);	// @ (0x111 * 8 + 6)
#define                                 SEG14COM0_bit       _BIT_ACCESS(LCDDATA1,6)
// LCDDATA4<SEG14COM1>
extern volatile __bit                   SEG14COM1           __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 SEG14COM1_bit       _BIT_ACCESS(LCDDATA4,6)
// LCDDATA7<SEG14COM2>
extern volatile __bit                   SEG14COM2           __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 SEG14COM2_bit       _BIT_ACCESS(LCDDATA7,6)
// LCDDATA10<SEG14COM3>
extern volatile __bit                   SEG14COM3           __at(0x8D6);	// @ (0x11A * 8 + 6)
#define                                 SEG14COM3_bit       _BIT_ACCESS(LCDDATA10,6)
// LCDDATA1<SEG15COM0>
extern volatile __bit                   SEG15COM0           __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 SEG15COM0_bit       _BIT_ACCESS(LCDDATA1,7)
// LCDDATA4<SEG15COM1>
extern volatile __bit                   SEG15COM1           __at(0x8A7);	// @ (0x114 * 8 + 7)
#define                                 SEG15COM1_bit       _BIT_ACCESS(LCDDATA4,7)
// LCDDATA7<SEG15COM2>
extern volatile __bit                   SEG15COM2           __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 SEG15COM2_bit       _BIT_ACCESS(LCDDATA7,7)
// LCDDATA10<SEG15COM3>
extern volatile __bit                   SEG15COM3           __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 SEG15COM3_bit       _BIT_ACCESS(LCDDATA10,7)
// LCDDATA0<SEG1COM0>
extern volatile __bit                   SEG1COM0            __at(0x881);	// @ (0x110 * 8 + 1)
#define                                 SEG1COM0_bit        _BIT_ACCESS(LCDDATA0,1)
// LCDDATA3<SEG1COM1>
extern volatile __bit                   SEG1COM1            __at(0x899);	// @ (0x113 * 8 + 1)
#define                                 SEG1COM1_bit        _BIT_ACCESS(LCDDATA3,1)
// LCDDATA6<SEG1COM2>
extern volatile __bit                   SEG1COM2            __at(0x8B1);	// @ (0x116 * 8 + 1)
#define                                 SEG1COM2_bit        _BIT_ACCESS(LCDDATA6,1)
// LCDDATA9<SEG1COM3>
extern volatile __bit                   SEG1COM3            __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 SEG1COM3_bit        _BIT_ACCESS(LCDDATA9,1)
// LCDDATA0<SEG2COM0>
extern volatile __bit                   SEG2COM0            __at(0x882);	// @ (0x110 * 8 + 2)
#define                                 SEG2COM0_bit        _BIT_ACCESS(LCDDATA0,2)
// LCDDATA3<SEG2COM1>
extern volatile __bit                   SEG2COM1            __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 SEG2COM1_bit        _BIT_ACCESS(LCDDATA3,2)
// LCDDATA6<SEG2COM2>
extern volatile __bit                   SEG2COM2            __at(0x8B2);	// @ (0x116 * 8 + 2)
#define                                 SEG2COM2_bit        _BIT_ACCESS(LCDDATA6,2)
// LCDDATA9<SEG2COM3>
extern volatile __bit                   SEG2COM3            __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 SEG2COM3_bit        _BIT_ACCESS(LCDDATA9,2)
// LCDDATA0<SEG3COM0>
extern volatile __bit                   SEG3COM0            __at(0x883);	// @ (0x110 * 8 + 3)
#define                                 SEG3COM0_bit        _BIT_ACCESS(LCDDATA0,3)
// LCDDATA3<SEG3COM1>
extern volatile __bit                   SEG3COM1            __at(0x89B);	// @ (0x113 * 8 + 3)
#define                                 SEG3COM1_bit        _BIT_ACCESS(LCDDATA3,3)
// LCDDATA6<SEG3COM2>
extern volatile __bit                   SEG3COM2            __at(0x8B3);	// @ (0x116 * 8 + 3)
#define                                 SEG3COM2_bit        _BIT_ACCESS(LCDDATA6,3)
// LCDDATA9<SEG3COM3>
extern volatile __bit                   SEG3COM3            __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 SEG3COM3_bit        _BIT_ACCESS(LCDDATA9,3)
// LCDDATA0<SEG4COM0>
extern volatile __bit                   SEG4COM0            __at(0x884);	// @ (0x110 * 8 + 4)
#define                                 SEG4COM0_bit        _BIT_ACCESS(LCDDATA0,4)
// LCDDATA3<SEG4COM1>
extern volatile __bit                   SEG4COM1            __at(0x89C);	// @ (0x113 * 8 + 4)
#define                                 SEG4COM1_bit        _BIT_ACCESS(LCDDATA3,4)
// LCDDATA6<SEG4COM2>
extern volatile __bit                   SEG4COM2            __at(0x8B4);	// @ (0x116 * 8 + 4)
#define                                 SEG4COM2_bit        _BIT_ACCESS(LCDDATA6,4)
// LCDDATA9<SEG4COM3>
extern volatile __bit                   SEG4COM3            __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 SEG4COM3_bit        _BIT_ACCESS(LCDDATA9,4)
// LCDDATA0<SEG5COM0>
extern volatile __bit                   SEG5COM0            __at(0x885);	// @ (0x110 * 8 + 5)
#define                                 SEG5COM0_bit        _BIT_ACCESS(LCDDATA0,5)
// LCDDATA3<SEG5COM1>
extern volatile __bit                   SEG5COM1            __at(0x89D);	// @ (0x113 * 8 + 5)
#define                                 SEG5COM1_bit        _BIT_ACCESS(LCDDATA3,5)
// LCDDATA6<SEG5COM2>
extern volatile __bit                   SEG5COM2            __at(0x8B5);	// @ (0x116 * 8 + 5)
#define                                 SEG5COM2_bit        _BIT_ACCESS(LCDDATA6,5)
// LCDDATA9<SEG5COM3>
extern volatile __bit                   SEG5COM3            __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 SEG5COM3_bit        _BIT_ACCESS(LCDDATA9,5)
// LCDDATA0<SEG6COM0>
extern volatile __bit                   SEG6COM0            __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 SEG6COM0_bit        _BIT_ACCESS(LCDDATA0,6)
// LCDDATA3<SEG6COM1>
extern volatile __bit                   SEG6COM1            __at(0x89E);	// @ (0x113 * 8 + 6)
#define                                 SEG6COM1_bit        _BIT_ACCESS(LCDDATA3,6)
// LCDDATA6<SEG6COM2>
extern volatile __bit                   SEG6COM2            __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 SEG6COM2_bit        _BIT_ACCESS(LCDDATA6,6)
// LCDDATA9<SEG6COM3>
extern volatile __bit                   SEG6COM3            __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 SEG6COM3_bit        _BIT_ACCESS(LCDDATA9,6)
// LCDDATA0<SEG7COM0>
extern volatile __bit                   SEG7COM0            __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 SEG7COM0_bit        _BIT_ACCESS(LCDDATA0,7)
// LCDDATA3<SEG7COM1>
extern volatile __bit                   SEG7COM1            __at(0x89F);	// @ (0x113 * 8 + 7)
#define                                 SEG7COM1_bit        _BIT_ACCESS(LCDDATA3,7)
// LCDDATA6<SEG7COM2>
extern volatile __bit                   SEG7COM2            __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SEG7COM2_bit        _BIT_ACCESS(LCDDATA6,7)
// LCDDATA9<SEG7COM3>
extern volatile __bit                   SEG7COM3            __at(0x8CF);	// @ (0x119 * 8 + 7)
#define                                 SEG7COM3_bit        _BIT_ACCESS(LCDDATA9,7)
// LCDDATA1<SEG8COM0>
extern volatile __bit                   SEG8COM0            __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 SEG8COM0_bit        _BIT_ACCESS(LCDDATA1,0)
// LCDDATA4<SEG8COM1>
extern volatile __bit                   SEG8COM1            __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 SEG8COM1_bit        _BIT_ACCESS(LCDDATA4,0)
// LCDDATA7<SEG8COM2>
extern volatile __bit                   SEG8COM2            __at(0x8B8);	// @ (0x117 * 8 + 0)
#define                                 SEG8COM2_bit        _BIT_ACCESS(LCDDATA7,0)
// LCDDATA10<SEG8COM3>
extern volatile __bit                   SEG8COM3            __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 SEG8COM3_bit        _BIT_ACCESS(LCDDATA10,0)
// LCDDATA1<SEG9COM0>
extern volatile __bit                   SEG9COM0            __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 SEG9COM0_bit        _BIT_ACCESS(LCDDATA1,1)
// LCDDATA4<SEG9COM1>
extern volatile __bit                   SEG9COM1            __at(0x8A1);	// @ (0x114 * 8 + 1)
#define                                 SEG9COM1_bit        _BIT_ACCESS(LCDDATA4,1)
// LCDDATA7<SEG9COM2>
extern volatile __bit                   SEG9COM2            __at(0x8B9);	// @ (0x117 * 8 + 1)
#define                                 SEG9COM2_bit        _BIT_ACCESS(LCDDATA7,1)
// LCDDATA10<SEG9COM3>
extern volatile __bit                   SEG9COM3            __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 SEG9COM3_bit        _BIT_ACCESS(LCDDATA10,1)
// LCDSE0<SEGEN0>
extern volatile __bit                   SEGEN0              __at(0x8E0);	// @ (0x11C * 8 + 0)
#define                                 SEGEN0_bit          _BIT_ACCESS(LCDSE0,0)
// LCDSE0<SEGEN1>
extern volatile __bit                   SEGEN1              __at(0x8E1);	// @ (0x11C * 8 + 1)
#define                                 SEGEN1_bit          _BIT_ACCESS(LCDSE0,1)
// LCDSE1<SEGEN10>
extern volatile __bit                   SEGEN10             __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 SEGEN10_bit         _BIT_ACCESS(LCDSE1,2)
// LCDSE1<SEGEN11>
extern volatile __bit                   SEGEN11             __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 SEGEN11_bit         _BIT_ACCESS(LCDSE1,3)
// LCDSE1<SEGEN12>
extern volatile __bit                   SEGEN12             __at(0x8EC);	// @ (0x11D * 8 + 4)
#define                                 SEGEN12_bit         _BIT_ACCESS(LCDSE1,4)
// LCDSE1<SEGEN13>
extern volatile __bit                   SEGEN13             __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 SEGEN13_bit         _BIT_ACCESS(LCDSE1,5)
// LCDSE1<SEGEN14>
extern volatile __bit                   SEGEN14             __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 SEGEN14_bit         _BIT_ACCESS(LCDSE1,6)
// LCDSE1<SEGEN15>
extern volatile __bit                   SEGEN15             __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 SEGEN15_bit         _BIT_ACCESS(LCDSE1,7)
// LCDSE0<SEGEN2>
extern volatile __bit                   SEGEN2              __at(0x8E2);	// @ (0x11C * 8 + 2)
#define                                 SEGEN2_bit          _BIT_ACCESS(LCDSE0,2)
// LCDSE0<SEGEN3>
extern volatile __bit                   SEGEN3              __at(0x8E3);	// @ (0x11C * 8 + 3)
#define                                 SEGEN3_bit          _BIT_ACCESS(LCDSE0,3)
// LCDSE0<SEGEN4>
extern volatile __bit                   SEGEN4              __at(0x8E4);	// @ (0x11C * 8 + 4)
#define                                 SEGEN4_bit          _BIT_ACCESS(LCDSE0,4)
// LCDSE0<SEGEN5>
extern volatile __bit                   SEGEN5              __at(0x8E5);	// @ (0x11C * 8 + 5)
#define                                 SEGEN5_bit          _BIT_ACCESS(LCDSE0,5)
// LCDSE0<SEGEN6>
extern volatile __bit                   SEGEN6              __at(0x8E6);	// @ (0x11C * 8 + 6)
#define                                 SEGEN6_bit          _BIT_ACCESS(LCDSE0,6)
// LCDSE0<SEGEN7>
extern volatile __bit                   SEGEN7              __at(0x8E7);	// @ (0x11C * 8 + 7)
#define                                 SEGEN7_bit          _BIT_ACCESS(LCDSE0,7)
// LCDSE1<SEGEN8>
extern volatile __bit                   SEGEN8              __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 SEGEN8_bit          _BIT_ACCESS(LCDSE1,0)
// LCDSE1<SEGEN9>
extern volatile __bit                   SEGEN9              __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 SEGEN9_bit          _BIT_ACCESS(LCDSE1,1)
// LCDCON<SLPEN>
extern volatile __bit                   SLPEN               __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 SLPEN_bit           _BIT_ACCESS(LCDCON,6)
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
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 SWDTE_bit           _BIT_ACCESS(WDTCON,0)
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
// T1CON<T1GE>
extern volatile __bit                   T1GE                __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 T1GE_bit            _BIT_ACCESS(T1CON,6)
// T1CON<T1GINV>
extern volatile __bit                   T1GINV              __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 T1GINV_bit          _BIT_ACCESS(T1CON,7)
// CMCON1<T1GSS>
extern volatile __bit                   T1GSS               __at(0x4B9);	// @ (0x97 * 8 + 1)
#define                                 T1GSS_bit           _BIT_ACCESS(CMCON1,1)
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
// ADCON0<VCFG0>
extern volatile __bit                   VCFG0               __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON0,5)
// ADCON0<VCFG1>
extern volatile __bit                   VCFG1               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON0,6)
// LCDCON<VLCDEN>
extern volatile __bit                   VLCDEN              __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 VLCDEN_bit          _BIT_ACCESS(LCDCON,4)
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 VR0_bit             _BIT_ACCESS(VRCON,0)
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 VR1_bit             _BIT_ACCESS(VRCON,1)
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 VR2_bit             _BIT_ACCESS(VRCON,2)
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 VR3_bit             _BIT_ACCESS(VRCON,3)
// VRCON<VREN>
extern volatile __bit                   VREN                __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 VREN_bit            _BIT_ACCESS(VRCON,7)
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0x4ED);	// @ (0x9D * 8 + 5)
#define                                 VRR_bit             _BIT_ACCESS(VRCON,5)
// LCDPS<WA>
extern volatile __bit                   WA                  __at(0x844);	// @ (0x108 * 8 + 4)
#define                                 WA_bit              _BIT_ACCESS(LCDPS,4)
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
// LCDCON<WERR>
extern volatile __bit                   WERR                __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 WERR_bit            _BIT_ACCESS(LCDCON,5)
// LCDPS<WFT>
extern volatile __bit                   WFT                 __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 WFT_bit             _BIT_ACCESS(LCDPS,7)
// WPUB<WPU0>
extern volatile __bit                   WPU0                __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPU0_bit            _BIT_ACCESS(WPUB,0)
// WPUB<WPU1>
extern volatile __bit                   WPU1                __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPU1_bit            _BIT_ACCESS(WPUB,1)
// WPUB<WPU2>
extern volatile __bit                   WPU2                __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPU2_bit            _BIT_ACCESS(WPUB,2)
// WPUB<WPU3>
extern volatile __bit                   WPU3                __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 WPU3_bit            _BIT_ACCESS(WPUB,3)
// WPUB<WPU4>
extern volatile __bit                   WPU4                __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPU4_bit            _BIT_ACCESS(WPUB,4)
// WPUB<WPU5>
extern volatile __bit                   WPU5                __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPU5_bit            _BIT_ACCESS(WPUB,5)
// WPUB<WPU6>
extern volatile __bit                   WPU6                __at(0x4AE);	// @ (0x95 * 8 + 6)
#define                                 WPU6_bit            _BIT_ACCESS(WPUB,6)
// WPUB<WPU7>
extern volatile __bit                   WPU7                __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 WPU7_bit            _BIT_ACCESS(WPUB,7)
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

#endif // _PIC16F916_H_
