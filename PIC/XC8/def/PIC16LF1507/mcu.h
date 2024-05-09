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

#ifndef _PIC16LF1507_H_
#define _PIC16LF1507_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF1507
 */
#ifndef _XC_H_
#warning Header file pic16lf1507.h included directly. Use #include <xc.h> instead.
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

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0x00D);
#ifndef _LIB_BUILD
asm("PORTB equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x00D);
// bitfield macros
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
        unsigned                        :4;
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
        unsigned NCO1IF                 :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_NCO1IF_POSN                                   0x2
#define _PIR2_NCO1IF_POSITION                               0x2
#define _PIR2_NCO1IF_SIZE                                   0x1
#define _PIR2_NCO1IF_LENGTH                                 0x1
#define _PIR2_NCO1IF_MASK                                   0x4

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x013);
#ifndef _LIB_BUILD
asm("PIR3 equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLC1IF                 :1;
        unsigned CLC2IF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x013);
// bitfield macros
#define _PIR3_CLC1IF_POSN                                   0x0
#define _PIR3_CLC1IF_POSITION                               0x0
#define _PIR3_CLC1IF_SIZE                                   0x1
#define _PIR3_CLC1IF_LENGTH                                 0x1
#define _PIR3_CLC1IF_MASK                                   0x1
#define _PIR3_CLC2IF_POSN                                   0x1
#define _PIR3_CLC2IF_POSITION                               0x1
#define _PIR3_CLC2IF_SIZE                                   0x1
#define _PIR3_CLC2IF_LENGTH                                 0x1
#define _PIR3_CLC2IF_MASK                                   0x2

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
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
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

// Register: TRISB
#define TRISB TRISB
extern volatile unsigned char           TRISB               __at(0x08D);
#ifndef _LIB_BUILD
asm("TRISB equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0x08D);
// bitfield macros
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
        unsigned                        :4;
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
        unsigned NCO1IE                 :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_NCO1IE_POSN                                   0x2
#define _PIE2_NCO1IE_POSITION                               0x2
#define _PIE2_NCO1IE_SIZE                                   0x1
#define _PIE2_NCO1IE_LENGTH                                 0x1
#define _PIE2_NCO1IE_MASK                                   0x4

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x093);
#ifndef _LIB_BUILD
asm("PIE3 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLC1IE                 :1;
        unsigned CLC2IE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x093);
// bitfield macros
#define _PIE3_CLC1IE_POSN                                   0x0
#define _PIE3_CLC1IE_POSITION                               0x0
#define _PIE3_CLC1IE_SIZE                                   0x1
#define _PIE3_CLC1IE_LENGTH                                 0x1
#define _PIE3_CLC1IE_MASK                                   0x1
#define _PIE3_CLC2IE_POSN                                   0x1
#define _PIE3_CLC2IE_POSITION                               0x1
#define _PIE3_CLC2IE_SIZE                                   0x1
#define _PIE3_CLC2IE_LENGTH                                 0x1
#define _PIE3_CLC2IE_MASK                                   0x2

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
        unsigned                        :1;
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

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0x10D);
#ifndef _LIB_BUILD
asm("LATB equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0x10D);
// bitfield macros
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
        unsigned NCO1SEL                :1;
        unsigned CLC1SEL                :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_NCO1SEL_POSN                                0x0
#define _APFCON_NCO1SEL_POSITION                            0x0
#define _APFCON_NCO1SEL_SIZE                                0x1
#define _APFCON_NCO1SEL_LENGTH                              0x1
#define _APFCON_NCO1SEL_MASK                                0x1
#define _APFCON_CLC1SEL_POSN                                0x1
#define _APFCON_CLC1SEL_POSITION                            0x1
#define _APFCON_CLC1SEL_SIZE                                0x1
#define _APFCON_CLC1SEL_LENGTH                              0x1
#define _APFCON_CLC1SEL_MASK                                0x2

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

// Register: ANSELB
#define ANSELB ANSELB
extern volatile unsigned char           ANSELB              __at(0x18D);
#ifndef _LIB_BUILD
asm("ANSELB equ 018Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ANSB4                  :1;
        unsigned ANSB5                  :1;
    };
    struct {
        unsigned ANSELB                 :6;
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0x18D);
// bitfield macros
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
        unsigned                        :2;
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

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0x20D);
#ifndef _LIB_BUILD
asm("WPUB equ 020Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
        unsigned WPUB7                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WPUB                   :4;
    };
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __at(0x20D);
// bitfield macros
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
#define _WPUB_WPUB_POSN                                     0x4
#define _WPUB_WPUB_POSITION                                 0x4
#define _WPUB_WPUB_SIZE                                     0x4
#define _WPUB_WPUB_LENGTH                                   0x4
#define _WPUB_WPUB_MASK                                     0xF0

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

// Register: IOCBP
#define IOCBP IOCBP
extern volatile unsigned char           IOCBP               __at(0x394);
#ifndef _LIB_BUILD
asm("IOCBP equ 0394h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCBP4                 :1;
        unsigned IOCBP5                 :1;
        unsigned IOCBP6                 :1;
        unsigned IOCBP7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned IOCBP                  :4;
    };
} IOCBPbits_t;
extern volatile IOCBPbits_t IOCBPbits __at(0x394);
// bitfield macros
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
#define _IOCBP_IOCBP_POSN                                   0x4
#define _IOCBP_IOCBP_POSITION                               0x4
#define _IOCBP_IOCBP_SIZE                                   0x4
#define _IOCBP_IOCBP_LENGTH                                 0x4
#define _IOCBP_IOCBP_MASK                                   0xF0

// Register: IOCBN
#define IOCBN IOCBN
extern volatile unsigned char           IOCBN               __at(0x395);
#ifndef _LIB_BUILD
asm("IOCBN equ 0395h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCBN4                 :1;
        unsigned IOCBN5                 :1;
        unsigned IOCBN6                 :1;
        unsigned IOCBN7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned IOCBN                  :4;
    };
} IOCBNbits_t;
extern volatile IOCBNbits_t IOCBNbits __at(0x395);
// bitfield macros
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
#define _IOCBN_IOCBN_POSN                                   0x4
#define _IOCBN_IOCBN_POSITION                               0x4
#define _IOCBN_IOCBN_SIZE                                   0x4
#define _IOCBN_IOCBN_LENGTH                                 0x4
#define _IOCBN_IOCBN_MASK                                   0xF0

// Register: IOCBF
#define IOCBF IOCBF
extern volatile unsigned char           IOCBF               __at(0x396);
#ifndef _LIB_BUILD
asm("IOCBF equ 0396h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCBF4                 :1;
        unsigned IOCBF5                 :1;
        unsigned IOCBF6                 :1;
        unsigned IOCBF7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned IOCBF                  :4;
    };
} IOCBFbits_t;
extern volatile IOCBFbits_t IOCBFbits __at(0x396);
// bitfield macros
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
#define _IOCBF_IOCBF_POSN                                   0x4
#define _IOCBF_IOCBF_POSITION                               0x4
#define _IOCBF_IOCBF_SIZE                                   0x4
#define _IOCBF_IOCBF_LENGTH                                 0x4
#define _IOCBF_IOCBF_MASK                                   0xF0

// Register: NCO1ACC
#define NCO1ACC NCO1ACC
#ifndef __CCI__
extern volatile __uint24                NCO1ACC             __at(0x498);
#endif
#ifndef _LIB_BUILD
asm("NCO1ACC equ 0498h");
#endif

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
extern volatile unsigned char           NCO1ACCL            __at(0x498);
#ifndef _LIB_BUILD
asm("NCO1ACCL equ 0498h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC0               :1;
        unsigned NCO1ACC1               :1;
        unsigned NCO1ACC2               :1;
        unsigned NCO1ACC3               :1;
        unsigned NCO1ACC4               :1;
        unsigned NCO1ACC5               :1;
        unsigned NCO1ACC6               :1;
        unsigned NCO1ACC7               :1;
    };
} NCO1ACCLbits_t;
extern volatile NCO1ACCLbits_t NCO1ACCLbits __at(0x498);
// bitfield macros
#define _NCO1ACCL_NCO1ACC0_POSN                             0x0
#define _NCO1ACCL_NCO1ACC0_POSITION                         0x0
#define _NCO1ACCL_NCO1ACC0_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC0_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC0_MASK                             0x1
#define _NCO1ACCL_NCO1ACC1_POSN                             0x1
#define _NCO1ACCL_NCO1ACC1_POSITION                         0x1
#define _NCO1ACCL_NCO1ACC1_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC1_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC1_MASK                             0x2
#define _NCO1ACCL_NCO1ACC2_POSN                             0x2
#define _NCO1ACCL_NCO1ACC2_POSITION                         0x2
#define _NCO1ACCL_NCO1ACC2_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC2_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC2_MASK                             0x4
#define _NCO1ACCL_NCO1ACC3_POSN                             0x3
#define _NCO1ACCL_NCO1ACC3_POSITION                         0x3
#define _NCO1ACCL_NCO1ACC3_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC3_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC3_MASK                             0x8
#define _NCO1ACCL_NCO1ACC4_POSN                             0x4
#define _NCO1ACCL_NCO1ACC4_POSITION                         0x4
#define _NCO1ACCL_NCO1ACC4_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC4_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC4_MASK                             0x10
#define _NCO1ACCL_NCO1ACC5_POSN                             0x5
#define _NCO1ACCL_NCO1ACC5_POSITION                         0x5
#define _NCO1ACCL_NCO1ACC5_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC5_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC5_MASK                             0x20
#define _NCO1ACCL_NCO1ACC6_POSN                             0x6
#define _NCO1ACCL_NCO1ACC6_POSITION                         0x6
#define _NCO1ACCL_NCO1ACC6_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC6_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC6_MASK                             0x40
#define _NCO1ACCL_NCO1ACC7_POSN                             0x7
#define _NCO1ACCL_NCO1ACC7_POSITION                         0x7
#define _NCO1ACCL_NCO1ACC7_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC7_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC7_MASK                             0x80

// Register: NCO1ACCH
#define NCO1ACCH NCO1ACCH
extern volatile unsigned char           NCO1ACCH            __at(0x499);
#ifndef _LIB_BUILD
asm("NCO1ACCH equ 0499h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC8               :1;
        unsigned NCO1ACC9               :1;
        unsigned NCO1ACC10              :1;
        unsigned NCO1ACC11              :1;
        unsigned NCO1ACC12              :1;
        unsigned NCO1ACC13              :1;
        unsigned NCO1ACC14              :1;
        unsigned NCO1ACC15              :1;
    };
} NCO1ACCHbits_t;
extern volatile NCO1ACCHbits_t NCO1ACCHbits __at(0x499);
// bitfield macros
#define _NCO1ACCH_NCO1ACC8_POSN                             0x0
#define _NCO1ACCH_NCO1ACC8_POSITION                         0x0
#define _NCO1ACCH_NCO1ACC8_SIZE                             0x1
#define _NCO1ACCH_NCO1ACC8_LENGTH                           0x1
#define _NCO1ACCH_NCO1ACC8_MASK                             0x1
#define _NCO1ACCH_NCO1ACC9_POSN                             0x1
#define _NCO1ACCH_NCO1ACC9_POSITION                         0x1
#define _NCO1ACCH_NCO1ACC9_SIZE                             0x1
#define _NCO1ACCH_NCO1ACC9_LENGTH                           0x1
#define _NCO1ACCH_NCO1ACC9_MASK                             0x2
#define _NCO1ACCH_NCO1ACC10_POSN                            0x2
#define _NCO1ACCH_NCO1ACC10_POSITION                        0x2
#define _NCO1ACCH_NCO1ACC10_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC10_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC10_MASK                            0x4
#define _NCO1ACCH_NCO1ACC11_POSN                            0x3
#define _NCO1ACCH_NCO1ACC11_POSITION                        0x3
#define _NCO1ACCH_NCO1ACC11_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC11_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC11_MASK                            0x8
#define _NCO1ACCH_NCO1ACC12_POSN                            0x4
#define _NCO1ACCH_NCO1ACC12_POSITION                        0x4
#define _NCO1ACCH_NCO1ACC12_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC12_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC12_MASK                            0x10
#define _NCO1ACCH_NCO1ACC13_POSN                            0x5
#define _NCO1ACCH_NCO1ACC13_POSITION                        0x5
#define _NCO1ACCH_NCO1ACC13_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC13_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC13_MASK                            0x20
#define _NCO1ACCH_NCO1ACC14_POSN                            0x6
#define _NCO1ACCH_NCO1ACC14_POSITION                        0x6
#define _NCO1ACCH_NCO1ACC14_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC14_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC14_MASK                            0x40
#define _NCO1ACCH_NCO1ACC15_POSN                            0x7
#define _NCO1ACCH_NCO1ACC15_POSITION                        0x7
#define _NCO1ACCH_NCO1ACC15_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC15_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC15_MASK                            0x80

// Register: NCO1ACCU
#define NCO1ACCU NCO1ACCU
extern volatile unsigned char           NCO1ACCU            __at(0x49A);
#ifndef _LIB_BUILD
asm("NCO1ACCU equ 049Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC16              :1;
        unsigned NCO1ACC17              :1;
        unsigned NCO1ACC18              :1;
        unsigned NCO1ACC19              :1;
    };
} NCO1ACCUbits_t;
extern volatile NCO1ACCUbits_t NCO1ACCUbits __at(0x49A);
// bitfield macros
#define _NCO1ACCU_NCO1ACC16_POSN                            0x0
#define _NCO1ACCU_NCO1ACC16_POSITION                        0x0
#define _NCO1ACCU_NCO1ACC16_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC16_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC16_MASK                            0x1
#define _NCO1ACCU_NCO1ACC17_POSN                            0x1
#define _NCO1ACCU_NCO1ACC17_POSITION                        0x1
#define _NCO1ACCU_NCO1ACC17_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC17_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC17_MASK                            0x2
#define _NCO1ACCU_NCO1ACC18_POSN                            0x2
#define _NCO1ACCU_NCO1ACC18_POSITION                        0x2
#define _NCO1ACCU_NCO1ACC18_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC18_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC18_MASK                            0x4
#define _NCO1ACCU_NCO1ACC19_POSN                            0x3
#define _NCO1ACCU_NCO1ACC19_POSITION                        0x3
#define _NCO1ACCU_NCO1ACC19_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC19_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC19_MASK                            0x8

// Register: NCO1INC
#define NCO1INC NCO1INC
#ifndef __CCI__
extern volatile __uint24                NCO1INC             __at(0x49B);
#endif
#ifndef _LIB_BUILD
asm("NCO1INC equ 049Bh");
#endif

// Register: NCO1INCL
#define NCO1INCL NCO1INCL
extern volatile unsigned char           NCO1INCL            __at(0x49B);
#ifndef _LIB_BUILD
asm("NCO1INCL equ 049Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC0               :1;
        unsigned NCO1INC1               :1;
        unsigned NCO1INC2               :1;
        unsigned NCO1INC3               :1;
        unsigned NCO1INC4               :1;
        unsigned NCO1INC5               :1;
        unsigned NCO1INC6               :1;
        unsigned NCO1INC7               :1;
    };
} NCO1INCLbits_t;
extern volatile NCO1INCLbits_t NCO1INCLbits __at(0x49B);
// bitfield macros
#define _NCO1INCL_NCO1INC0_POSN                             0x0
#define _NCO1INCL_NCO1INC0_POSITION                         0x0
#define _NCO1INCL_NCO1INC0_SIZE                             0x1
#define _NCO1INCL_NCO1INC0_LENGTH                           0x1
#define _NCO1INCL_NCO1INC0_MASK                             0x1
#define _NCO1INCL_NCO1INC1_POSN                             0x1
#define _NCO1INCL_NCO1INC1_POSITION                         0x1
#define _NCO1INCL_NCO1INC1_SIZE                             0x1
#define _NCO1INCL_NCO1INC1_LENGTH                           0x1
#define _NCO1INCL_NCO1INC1_MASK                             0x2
#define _NCO1INCL_NCO1INC2_POSN                             0x2
#define _NCO1INCL_NCO1INC2_POSITION                         0x2
#define _NCO1INCL_NCO1INC2_SIZE                             0x1
#define _NCO1INCL_NCO1INC2_LENGTH                           0x1
#define _NCO1INCL_NCO1INC2_MASK                             0x4
#define _NCO1INCL_NCO1INC3_POSN                             0x3
#define _NCO1INCL_NCO1INC3_POSITION                         0x3
#define _NCO1INCL_NCO1INC3_SIZE                             0x1
#define _NCO1INCL_NCO1INC3_LENGTH                           0x1
#define _NCO1INCL_NCO1INC3_MASK                             0x8
#define _NCO1INCL_NCO1INC4_POSN                             0x4
#define _NCO1INCL_NCO1INC4_POSITION                         0x4
#define _NCO1INCL_NCO1INC4_SIZE                             0x1
#define _NCO1INCL_NCO1INC4_LENGTH                           0x1
#define _NCO1INCL_NCO1INC4_MASK                             0x10
#define _NCO1INCL_NCO1INC5_POSN                             0x5
#define _NCO1INCL_NCO1INC5_POSITION                         0x5
#define _NCO1INCL_NCO1INC5_SIZE                             0x1
#define _NCO1INCL_NCO1INC5_LENGTH                           0x1
#define _NCO1INCL_NCO1INC5_MASK                             0x20
#define _NCO1INCL_NCO1INC6_POSN                             0x6
#define _NCO1INCL_NCO1INC6_POSITION                         0x6
#define _NCO1INCL_NCO1INC6_SIZE                             0x1
#define _NCO1INCL_NCO1INC6_LENGTH                           0x1
#define _NCO1INCL_NCO1INC6_MASK                             0x40
#define _NCO1INCL_NCO1INC7_POSN                             0x7
#define _NCO1INCL_NCO1INC7_POSITION                         0x7
#define _NCO1INCL_NCO1INC7_SIZE                             0x1
#define _NCO1INCL_NCO1INC7_LENGTH                           0x1
#define _NCO1INCL_NCO1INC7_MASK                             0x80

// Register: NCO1INCH
#define NCO1INCH NCO1INCH
extern volatile unsigned char           NCO1INCH            __at(0x49C);
#ifndef _LIB_BUILD
asm("NCO1INCH equ 049Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC8               :1;
        unsigned NCO1INC9               :1;
        unsigned NCO1INC10              :1;
        unsigned NCO1INC11              :1;
        unsigned NCO1INC12              :1;
        unsigned NCO1INC13              :1;
        unsigned NCO1INC14              :1;
        unsigned NCO1INC15              :1;
    };
} NCO1INCHbits_t;
extern volatile NCO1INCHbits_t NCO1INCHbits __at(0x49C);
// bitfield macros
#define _NCO1INCH_NCO1INC8_POSN                             0x0
#define _NCO1INCH_NCO1INC8_POSITION                         0x0
#define _NCO1INCH_NCO1INC8_SIZE                             0x1
#define _NCO1INCH_NCO1INC8_LENGTH                           0x1
#define _NCO1INCH_NCO1INC8_MASK                             0x1
#define _NCO1INCH_NCO1INC9_POSN                             0x1
#define _NCO1INCH_NCO1INC9_POSITION                         0x1
#define _NCO1INCH_NCO1INC9_SIZE                             0x1
#define _NCO1INCH_NCO1INC9_LENGTH                           0x1
#define _NCO1INCH_NCO1INC9_MASK                             0x2
#define _NCO1INCH_NCO1INC10_POSN                            0x2
#define _NCO1INCH_NCO1INC10_POSITION                        0x2
#define _NCO1INCH_NCO1INC10_SIZE                            0x1
#define _NCO1INCH_NCO1INC10_LENGTH                          0x1
#define _NCO1INCH_NCO1INC10_MASK                            0x4
#define _NCO1INCH_NCO1INC11_POSN                            0x3
#define _NCO1INCH_NCO1INC11_POSITION                        0x3
#define _NCO1INCH_NCO1INC11_SIZE                            0x1
#define _NCO1INCH_NCO1INC11_LENGTH                          0x1
#define _NCO1INCH_NCO1INC11_MASK                            0x8
#define _NCO1INCH_NCO1INC12_POSN                            0x4
#define _NCO1INCH_NCO1INC12_POSITION                        0x4
#define _NCO1INCH_NCO1INC12_SIZE                            0x1
#define _NCO1INCH_NCO1INC12_LENGTH                          0x1
#define _NCO1INCH_NCO1INC12_MASK                            0x10
#define _NCO1INCH_NCO1INC13_POSN                            0x5
#define _NCO1INCH_NCO1INC13_POSITION                        0x5
#define _NCO1INCH_NCO1INC13_SIZE                            0x1
#define _NCO1INCH_NCO1INC13_LENGTH                          0x1
#define _NCO1INCH_NCO1INC13_MASK                            0x20
#define _NCO1INCH_NCO1INC14_POSN                            0x6
#define _NCO1INCH_NCO1INC14_POSITION                        0x6
#define _NCO1INCH_NCO1INC14_SIZE                            0x1
#define _NCO1INCH_NCO1INC14_LENGTH                          0x1
#define _NCO1INCH_NCO1INC14_MASK                            0x40
#define _NCO1INCH_NCO1INC15_POSN                            0x7
#define _NCO1INCH_NCO1INC15_POSITION                        0x7
#define _NCO1INCH_NCO1INC15_SIZE                            0x1
#define _NCO1INCH_NCO1INC15_LENGTH                          0x1
#define _NCO1INCH_NCO1INC15_MASK                            0x80

// Register: NCO1INCU
#define NCO1INCU NCO1INCU
extern volatile unsigned char           NCO1INCU            __at(0x49D);
#ifndef _LIB_BUILD
asm("NCO1INCU equ 049Dh");
#endif

// Register: NCO1CON
#define NCO1CON NCO1CON
extern volatile unsigned char           NCO1CON             __at(0x49E);
#ifndef _LIB_BUILD
asm("NCO1CON equ 049Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned N1PFM                  :1;
        unsigned                        :3;
        unsigned N1POL                  :1;
        unsigned N1OUT                  :1;
        unsigned N1OE                   :1;
        unsigned N1EN                   :1;
    };
} NCO1CONbits_t;
extern volatile NCO1CONbits_t NCO1CONbits __at(0x49E);
// bitfield macros
#define _NCO1CON_N1PFM_POSN                                 0x0
#define _NCO1CON_N1PFM_POSITION                             0x0
#define _NCO1CON_N1PFM_SIZE                                 0x1
#define _NCO1CON_N1PFM_LENGTH                               0x1
#define _NCO1CON_N1PFM_MASK                                 0x1
#define _NCO1CON_N1POL_POSN                                 0x4
#define _NCO1CON_N1POL_POSITION                             0x4
#define _NCO1CON_N1POL_SIZE                                 0x1
#define _NCO1CON_N1POL_LENGTH                               0x1
#define _NCO1CON_N1POL_MASK                                 0x10
#define _NCO1CON_N1OUT_POSN                                 0x5
#define _NCO1CON_N1OUT_POSITION                             0x5
#define _NCO1CON_N1OUT_SIZE                                 0x1
#define _NCO1CON_N1OUT_LENGTH                               0x1
#define _NCO1CON_N1OUT_MASK                                 0x20
#define _NCO1CON_N1OE_POSN                                  0x6
#define _NCO1CON_N1OE_POSITION                              0x6
#define _NCO1CON_N1OE_SIZE                                  0x1
#define _NCO1CON_N1OE_LENGTH                                0x1
#define _NCO1CON_N1OE_MASK                                  0x40
#define _NCO1CON_N1EN_POSN                                  0x7
#define _NCO1CON_N1EN_POSITION                              0x7
#define _NCO1CON_N1EN_SIZE                                  0x1
#define _NCO1CON_N1EN_LENGTH                                0x1
#define _NCO1CON_N1EN_MASK                                  0x80

// Register: NCO1CLK
#define NCO1CLK NCO1CLK
extern volatile unsigned char           NCO1CLK             __at(0x49F);
#ifndef _LIB_BUILD
asm("NCO1CLK equ 049Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned N1CKS                  :4;
        unsigned                        :1;
        unsigned N1PWS                  :3;
    };
    struct {
        unsigned N1CKS0                 :1;
        unsigned N1CKS1                 :1;
        unsigned                        :3;
        unsigned N1PWS0                 :1;
        unsigned N1PWS1                 :1;
        unsigned N1PWS2                 :1;
    };
} NCO1CLKbits_t;
extern volatile NCO1CLKbits_t NCO1CLKbits __at(0x49F);
// bitfield macros
#define _NCO1CLK_N1CKS_POSN                                 0x0
#define _NCO1CLK_N1CKS_POSITION                             0x0
#define _NCO1CLK_N1CKS_SIZE                                 0x4
#define _NCO1CLK_N1CKS_LENGTH                               0x4
#define _NCO1CLK_N1CKS_MASK                                 0xF
#define _NCO1CLK_N1PWS_POSN                                 0x5
#define _NCO1CLK_N1PWS_POSITION                             0x5
#define _NCO1CLK_N1PWS_SIZE                                 0x3
#define _NCO1CLK_N1PWS_LENGTH                               0x3
#define _NCO1CLK_N1PWS_MASK                                 0xE0
#define _NCO1CLK_N1CKS0_POSN                                0x0
#define _NCO1CLK_N1CKS0_POSITION                            0x0
#define _NCO1CLK_N1CKS0_SIZE                                0x1
#define _NCO1CLK_N1CKS0_LENGTH                              0x1
#define _NCO1CLK_N1CKS0_MASK                                0x1
#define _NCO1CLK_N1CKS1_POSN                                0x1
#define _NCO1CLK_N1CKS1_POSITION                            0x1
#define _NCO1CLK_N1CKS1_SIZE                                0x1
#define _NCO1CLK_N1CKS1_LENGTH                              0x1
#define _NCO1CLK_N1CKS1_MASK                                0x2
#define _NCO1CLK_N1PWS0_POSN                                0x5
#define _NCO1CLK_N1PWS0_POSITION                            0x5
#define _NCO1CLK_N1PWS0_SIZE                                0x1
#define _NCO1CLK_N1PWS0_LENGTH                              0x1
#define _NCO1CLK_N1PWS0_MASK                                0x20
#define _NCO1CLK_N1PWS1_POSN                                0x6
#define _NCO1CLK_N1PWS1_POSITION                            0x6
#define _NCO1CLK_N1PWS1_SIZE                                0x1
#define _NCO1CLK_N1PWS1_LENGTH                              0x1
#define _NCO1CLK_N1PWS1_MASK                                0x40
#define _NCO1CLK_N1PWS2_POSN                                0x7
#define _NCO1CLK_N1PWS2_POSITION                            0x7
#define _NCO1CLK_N1PWS2_SIZE                                0x1
#define _NCO1CLK_N1PWS2_LENGTH                              0x1
#define _NCO1CLK_N1PWS2_MASK                                0x80

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

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
extern volatile unsigned char           PWM3DCL             __at(0x617);
#ifndef _LIB_BUILD
asm("PWM3DCL equ 0617h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM3DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM3DCL0               :1;
        unsigned PWM3DCL1               :1;
    };
} PWM3DCLbits_t;
extern volatile PWM3DCLbits_t PWM3DCLbits __at(0x617);
// bitfield macros
#define _PWM3DCL_PWM3DCL_POSN                               0x6
#define _PWM3DCL_PWM3DCL_POSITION                           0x6
#define _PWM3DCL_PWM3DCL_SIZE                               0x2
#define _PWM3DCL_PWM3DCL_LENGTH                             0x2
#define _PWM3DCL_PWM3DCL_MASK                               0xC0
#define _PWM3DCL_PWM3DCL0_POSN                              0x6
#define _PWM3DCL_PWM3DCL0_POSITION                          0x6
#define _PWM3DCL_PWM3DCL0_SIZE                              0x1
#define _PWM3DCL_PWM3DCL0_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL0_MASK                              0x40
#define _PWM3DCL_PWM3DCL1_POSN                              0x7
#define _PWM3DCL_PWM3DCL1_POSITION                          0x7
#define _PWM3DCL_PWM3DCL1_SIZE                              0x1
#define _PWM3DCL_PWM3DCL1_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL1_MASK                              0x80

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
extern volatile unsigned char           PWM3DCH             __at(0x618);
#ifndef _LIB_BUILD
asm("PWM3DCH equ 0618h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM3DCH                :8;
    };
    struct {
        unsigned PWM3DCH0               :1;
        unsigned PWM3DCH1               :1;
        unsigned PWM3DCH2               :1;
        unsigned PWM3DCH3               :1;
        unsigned PWM3DCH4               :1;
        unsigned PWM3DCH5               :1;
        unsigned PWM3DCH6               :1;
        unsigned PWM3DCH7               :1;
    };
} PWM3DCHbits_t;
extern volatile PWM3DCHbits_t PWM3DCHbits __at(0x618);
// bitfield macros
#define _PWM3DCH_PWM3DCH_POSN                               0x0
#define _PWM3DCH_PWM3DCH_POSITION                           0x0
#define _PWM3DCH_PWM3DCH_SIZE                               0x8
#define _PWM3DCH_PWM3DCH_LENGTH                             0x8
#define _PWM3DCH_PWM3DCH_MASK                               0xFF
#define _PWM3DCH_PWM3DCH0_POSN                              0x0
#define _PWM3DCH_PWM3DCH0_POSITION                          0x0
#define _PWM3DCH_PWM3DCH0_SIZE                              0x1
#define _PWM3DCH_PWM3DCH0_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH0_MASK                              0x1
#define _PWM3DCH_PWM3DCH1_POSN                              0x1
#define _PWM3DCH_PWM3DCH1_POSITION                          0x1
#define _PWM3DCH_PWM3DCH1_SIZE                              0x1
#define _PWM3DCH_PWM3DCH1_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH1_MASK                              0x2
#define _PWM3DCH_PWM3DCH2_POSN                              0x2
#define _PWM3DCH_PWM3DCH2_POSITION                          0x2
#define _PWM3DCH_PWM3DCH2_SIZE                              0x1
#define _PWM3DCH_PWM3DCH2_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH2_MASK                              0x4
#define _PWM3DCH_PWM3DCH3_POSN                              0x3
#define _PWM3DCH_PWM3DCH3_POSITION                          0x3
#define _PWM3DCH_PWM3DCH3_SIZE                              0x1
#define _PWM3DCH_PWM3DCH3_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH3_MASK                              0x8
#define _PWM3DCH_PWM3DCH4_POSN                              0x4
#define _PWM3DCH_PWM3DCH4_POSITION                          0x4
#define _PWM3DCH_PWM3DCH4_SIZE                              0x1
#define _PWM3DCH_PWM3DCH4_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH4_MASK                              0x10
#define _PWM3DCH_PWM3DCH5_POSN                              0x5
#define _PWM3DCH_PWM3DCH5_POSITION                          0x5
#define _PWM3DCH_PWM3DCH5_SIZE                              0x1
#define _PWM3DCH_PWM3DCH5_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH5_MASK                              0x20
#define _PWM3DCH_PWM3DCH6_POSN                              0x6
#define _PWM3DCH_PWM3DCH6_POSITION                          0x6
#define _PWM3DCH_PWM3DCH6_SIZE                              0x1
#define _PWM3DCH_PWM3DCH6_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH6_MASK                              0x40
#define _PWM3DCH_PWM3DCH7_POSN                              0x7
#define _PWM3DCH_PWM3DCH7_POSITION                          0x7
#define _PWM3DCH_PWM3DCH7_SIZE                              0x1
#define _PWM3DCH_PWM3DCH7_LENGTH                            0x1
#define _PWM3DCH_PWM3DCH7_MASK                              0x80

// Register: PWM3CON
#define PWM3CON PWM3CON
extern volatile unsigned char           PWM3CON             __at(0x619);
#ifndef _LIB_BUILD
asm("PWM3CON equ 0619h");
#endif
// aliases
extern volatile unsigned char           PWM3CON0            __at(0x619);
#ifndef _LIB_BUILD
asm("PWM3CON0 equ 0619h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM3POL                :1;
        unsigned PWM3OUT                :1;
        unsigned PWM3OE                 :1;
        unsigned PWM3EN                 :1;
    };
} PWM3CONbits_t;
extern volatile PWM3CONbits_t PWM3CONbits __at(0x619);
// bitfield macros
#define _PWM3CON_PWM3POL_POSN                               0x4
#define _PWM3CON_PWM3POL_POSITION                           0x4
#define _PWM3CON_PWM3POL_SIZE                               0x1
#define _PWM3CON_PWM3POL_LENGTH                             0x1
#define _PWM3CON_PWM3POL_MASK                               0x10
#define _PWM3CON_PWM3OUT_POSN                               0x5
#define _PWM3CON_PWM3OUT_POSITION                           0x5
#define _PWM3CON_PWM3OUT_SIZE                               0x1
#define _PWM3CON_PWM3OUT_LENGTH                             0x1
#define _PWM3CON_PWM3OUT_MASK                               0x20
#define _PWM3CON_PWM3OE_POSN                                0x6
#define _PWM3CON_PWM3OE_POSITION                            0x6
#define _PWM3CON_PWM3OE_SIZE                                0x1
#define _PWM3CON_PWM3OE_LENGTH                              0x1
#define _PWM3CON_PWM3OE_MASK                                0x40
#define _PWM3CON_PWM3EN_POSN                                0x7
#define _PWM3CON_PWM3EN_POSITION                            0x7
#define _PWM3CON_PWM3EN_SIZE                                0x1
#define _PWM3CON_PWM3EN_LENGTH                              0x1
#define _PWM3CON_PWM3EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM3POL                :1;
        unsigned PWM3OUT                :1;
        unsigned PWM3OE                 :1;
        unsigned PWM3EN                 :1;
    };
} PWM3CON0bits_t;
extern volatile PWM3CON0bits_t PWM3CON0bits __at(0x619);
// bitfield macros
#define _PWM3CON0_PWM3POL_POSN                              0x4
#define _PWM3CON0_PWM3POL_POSITION                          0x4
#define _PWM3CON0_PWM3POL_SIZE                              0x1
#define _PWM3CON0_PWM3POL_LENGTH                            0x1
#define _PWM3CON0_PWM3POL_MASK                              0x10
#define _PWM3CON0_PWM3OUT_POSN                              0x5
#define _PWM3CON0_PWM3OUT_POSITION                          0x5
#define _PWM3CON0_PWM3OUT_SIZE                              0x1
#define _PWM3CON0_PWM3OUT_LENGTH                            0x1
#define _PWM3CON0_PWM3OUT_MASK                              0x20
#define _PWM3CON0_PWM3OE_POSN                               0x6
#define _PWM3CON0_PWM3OE_POSITION                           0x6
#define _PWM3CON0_PWM3OE_SIZE                               0x1
#define _PWM3CON0_PWM3OE_LENGTH                             0x1
#define _PWM3CON0_PWM3OE_MASK                               0x40
#define _PWM3CON0_PWM3EN_POSN                               0x7
#define _PWM3CON0_PWM3EN_POSITION                           0x7
#define _PWM3CON0_PWM3EN_SIZE                               0x1
#define _PWM3CON0_PWM3EN_LENGTH                             0x1
#define _PWM3CON0_PWM3EN_MASK                               0x80

// Register: PWM4DCL
#define PWM4DCL PWM4DCL
extern volatile unsigned char           PWM4DCL             __at(0x61A);
#ifndef _LIB_BUILD
asm("PWM4DCL equ 061Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM4DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM4DCL0               :1;
        unsigned PWM4DCL1               :1;
    };
} PWM4DCLbits_t;
extern volatile PWM4DCLbits_t PWM4DCLbits __at(0x61A);
// bitfield macros
#define _PWM4DCL_PWM4DCL_POSN                               0x6
#define _PWM4DCL_PWM4DCL_POSITION                           0x6
#define _PWM4DCL_PWM4DCL_SIZE                               0x2
#define _PWM4DCL_PWM4DCL_LENGTH                             0x2
#define _PWM4DCL_PWM4DCL_MASK                               0xC0
#define _PWM4DCL_PWM4DCL0_POSN                              0x6
#define _PWM4DCL_PWM4DCL0_POSITION                          0x6
#define _PWM4DCL_PWM4DCL0_SIZE                              0x1
#define _PWM4DCL_PWM4DCL0_LENGTH                            0x1
#define _PWM4DCL_PWM4DCL0_MASK                              0x40
#define _PWM4DCL_PWM4DCL1_POSN                              0x7
#define _PWM4DCL_PWM4DCL1_POSITION                          0x7
#define _PWM4DCL_PWM4DCL1_SIZE                              0x1
#define _PWM4DCL_PWM4DCL1_LENGTH                            0x1
#define _PWM4DCL_PWM4DCL1_MASK                              0x80

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
extern volatile unsigned char           PWM4DCH             __at(0x61B);
#ifndef _LIB_BUILD
asm("PWM4DCH equ 061Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM4DCH                :8;
    };
    struct {
        unsigned PWM4DCH0               :1;
        unsigned PWM4DCH1               :1;
        unsigned PWM4DCH2               :1;
        unsigned PWM4DCH3               :1;
        unsigned PWM4DCH4               :1;
        unsigned PWM4DCH5               :1;
        unsigned PWM4DCH6               :1;
        unsigned PWM4DCH7               :1;
    };
} PWM4DCHbits_t;
extern volatile PWM4DCHbits_t PWM4DCHbits __at(0x61B);
// bitfield macros
#define _PWM4DCH_PWM4DCH_POSN                               0x0
#define _PWM4DCH_PWM4DCH_POSITION                           0x0
#define _PWM4DCH_PWM4DCH_SIZE                               0x8
#define _PWM4DCH_PWM4DCH_LENGTH                             0x8
#define _PWM4DCH_PWM4DCH_MASK                               0xFF
#define _PWM4DCH_PWM4DCH0_POSN                              0x0
#define _PWM4DCH_PWM4DCH0_POSITION                          0x0
#define _PWM4DCH_PWM4DCH0_SIZE                              0x1
#define _PWM4DCH_PWM4DCH0_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH0_MASK                              0x1
#define _PWM4DCH_PWM4DCH1_POSN                              0x1
#define _PWM4DCH_PWM4DCH1_POSITION                          0x1
#define _PWM4DCH_PWM4DCH1_SIZE                              0x1
#define _PWM4DCH_PWM4DCH1_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH1_MASK                              0x2
#define _PWM4DCH_PWM4DCH2_POSN                              0x2
#define _PWM4DCH_PWM4DCH2_POSITION                          0x2
#define _PWM4DCH_PWM4DCH2_SIZE                              0x1
#define _PWM4DCH_PWM4DCH2_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH2_MASK                              0x4
#define _PWM4DCH_PWM4DCH3_POSN                              0x3
#define _PWM4DCH_PWM4DCH3_POSITION                          0x3
#define _PWM4DCH_PWM4DCH3_SIZE                              0x1
#define _PWM4DCH_PWM4DCH3_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH3_MASK                              0x8
#define _PWM4DCH_PWM4DCH4_POSN                              0x4
#define _PWM4DCH_PWM4DCH4_POSITION                          0x4
#define _PWM4DCH_PWM4DCH4_SIZE                              0x1
#define _PWM4DCH_PWM4DCH4_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH4_MASK                              0x10
#define _PWM4DCH_PWM4DCH5_POSN                              0x5
#define _PWM4DCH_PWM4DCH5_POSITION                          0x5
#define _PWM4DCH_PWM4DCH5_SIZE                              0x1
#define _PWM4DCH_PWM4DCH5_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH5_MASK                              0x20
#define _PWM4DCH_PWM4DCH6_POSN                              0x6
#define _PWM4DCH_PWM4DCH6_POSITION                          0x6
#define _PWM4DCH_PWM4DCH6_SIZE                              0x1
#define _PWM4DCH_PWM4DCH6_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH6_MASK                              0x40
#define _PWM4DCH_PWM4DCH7_POSN                              0x7
#define _PWM4DCH_PWM4DCH7_POSITION                          0x7
#define _PWM4DCH_PWM4DCH7_SIZE                              0x1
#define _PWM4DCH_PWM4DCH7_LENGTH                            0x1
#define _PWM4DCH_PWM4DCH7_MASK                              0x80

// Register: PWM4CON
#define PWM4CON PWM4CON
extern volatile unsigned char           PWM4CON             __at(0x61C);
#ifndef _LIB_BUILD
asm("PWM4CON equ 061Ch");
#endif
// aliases
extern volatile unsigned char           PWM4CON0            __at(0x61C);
#ifndef _LIB_BUILD
asm("PWM4CON0 equ 061Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM4POL                :1;
        unsigned PWM4OUT                :1;
        unsigned PWM4OE                 :1;
        unsigned PWM4EN                 :1;
    };
} PWM4CONbits_t;
extern volatile PWM4CONbits_t PWM4CONbits __at(0x61C);
// bitfield macros
#define _PWM4CON_PWM4POL_POSN                               0x4
#define _PWM4CON_PWM4POL_POSITION                           0x4
#define _PWM4CON_PWM4POL_SIZE                               0x1
#define _PWM4CON_PWM4POL_LENGTH                             0x1
#define _PWM4CON_PWM4POL_MASK                               0x10
#define _PWM4CON_PWM4OUT_POSN                               0x5
#define _PWM4CON_PWM4OUT_POSITION                           0x5
#define _PWM4CON_PWM4OUT_SIZE                               0x1
#define _PWM4CON_PWM4OUT_LENGTH                             0x1
#define _PWM4CON_PWM4OUT_MASK                               0x20
#define _PWM4CON_PWM4OE_POSN                                0x6
#define _PWM4CON_PWM4OE_POSITION                            0x6
#define _PWM4CON_PWM4OE_SIZE                                0x1
#define _PWM4CON_PWM4OE_LENGTH                              0x1
#define _PWM4CON_PWM4OE_MASK                                0x40
#define _PWM4CON_PWM4EN_POSN                                0x7
#define _PWM4CON_PWM4EN_POSITION                            0x7
#define _PWM4CON_PWM4EN_SIZE                                0x1
#define _PWM4CON_PWM4EN_LENGTH                              0x1
#define _PWM4CON_PWM4EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM4POL                :1;
        unsigned PWM4OUT                :1;
        unsigned PWM4OE                 :1;
        unsigned PWM4EN                 :1;
    };
} PWM4CON0bits_t;
extern volatile PWM4CON0bits_t PWM4CON0bits __at(0x61C);
// bitfield macros
#define _PWM4CON0_PWM4POL_POSN                              0x4
#define _PWM4CON0_PWM4POL_POSITION                          0x4
#define _PWM4CON0_PWM4POL_SIZE                              0x1
#define _PWM4CON0_PWM4POL_LENGTH                            0x1
#define _PWM4CON0_PWM4POL_MASK                              0x10
#define _PWM4CON0_PWM4OUT_POSN                              0x5
#define _PWM4CON0_PWM4OUT_POSITION                          0x5
#define _PWM4CON0_PWM4OUT_SIZE                              0x1
#define _PWM4CON0_PWM4OUT_LENGTH                            0x1
#define _PWM4CON0_PWM4OUT_MASK                              0x20
#define _PWM4CON0_PWM4OE_POSN                               0x6
#define _PWM4CON0_PWM4OE_POSITION                           0x6
#define _PWM4CON0_PWM4OE_SIZE                               0x1
#define _PWM4CON0_PWM4OE_LENGTH                             0x1
#define _PWM4CON0_PWM4OE_MASK                               0x40
#define _PWM4CON0_PWM4EN_POSN                               0x7
#define _PWM4CON0_PWM4EN_POSITION                           0x7
#define _PWM4CON0_PWM4EN_SIZE                               0x1
#define _PWM4CON0_PWM4EN_LENGTH                             0x1
#define _PWM4CON0_PWM4EN_MASK                               0x80

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
extern volatile unsigned char           CWG1DBR             __at(0x691);
#ifndef _LIB_BUILD
asm("CWG1DBR equ 0691h");
#endif
// bitfield definitions
typedef union {
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

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
extern volatile unsigned char           CWG1CON0            __at(0x693);
#ifndef _LIB_BUILD
asm("CWG1CON0 equ 0693h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1CS0                  :1;
        unsigned                        :2;
        unsigned G1POLA                 :1;
        unsigned G1POLB                 :1;
        unsigned G1OEA                  :1;
        unsigned G1OEB                  :1;
        unsigned G1EN                   :1;
    };
    struct {
        unsigned G1CS                   :2;
    };
} CWG1CON0bits_t;
extern volatile CWG1CON0bits_t CWG1CON0bits __at(0x693);
// bitfield macros
#define _CWG1CON0_G1CS0_POSN                                0x0
#define _CWG1CON0_G1CS0_POSITION                            0x0
#define _CWG1CON0_G1CS0_SIZE                                0x1
#define _CWG1CON0_G1CS0_LENGTH                              0x1
#define _CWG1CON0_G1CS0_MASK                                0x1
#define _CWG1CON0_G1POLA_POSN                               0x3
#define _CWG1CON0_G1POLA_POSITION                           0x3
#define _CWG1CON0_G1POLA_SIZE                               0x1
#define _CWG1CON0_G1POLA_LENGTH                             0x1
#define _CWG1CON0_G1POLA_MASK                               0x8
#define _CWG1CON0_G1POLB_POSN                               0x4
#define _CWG1CON0_G1POLB_POSITION                           0x4
#define _CWG1CON0_G1POLB_SIZE                               0x1
#define _CWG1CON0_G1POLB_LENGTH                             0x1
#define _CWG1CON0_G1POLB_MASK                               0x10
#define _CWG1CON0_G1OEA_POSN                                0x5
#define _CWG1CON0_G1OEA_POSITION                            0x5
#define _CWG1CON0_G1OEA_SIZE                                0x1
#define _CWG1CON0_G1OEA_LENGTH                              0x1
#define _CWG1CON0_G1OEA_MASK                                0x20
#define _CWG1CON0_G1OEB_POSN                                0x6
#define _CWG1CON0_G1OEB_POSITION                            0x6
#define _CWG1CON0_G1OEB_SIZE                                0x1
#define _CWG1CON0_G1OEB_LENGTH                              0x1
#define _CWG1CON0_G1OEB_MASK                                0x40
#define _CWG1CON0_G1EN_POSN                                 0x7
#define _CWG1CON0_G1EN_POSITION                             0x7
#define _CWG1CON0_G1EN_SIZE                                 0x1
#define _CWG1CON0_G1EN_LENGTH                               0x1
#define _CWG1CON0_G1EN_MASK                                 0x80
#define _CWG1CON0_G1CS_POSN                                 0x0
#define _CWG1CON0_G1CS_POSITION                             0x0
#define _CWG1CON0_G1CS_SIZE                                 0x2
#define _CWG1CON0_G1CS_LENGTH                               0x2
#define _CWG1CON0_G1CS_MASK                                 0x3

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
extern volatile unsigned char           CWG1CON1            __at(0x694);
#ifndef _LIB_BUILD
asm("CWG1CON1 equ 0694h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1IS0                  :1;
        unsigned G1IS1                  :1;
        unsigned G1IS2                  :1;
        unsigned                        :1;
        unsigned G1ASDLA                :2;
        unsigned G1ASDLB                :2;
    };
    struct {
        unsigned G1IS                   :4;
        unsigned G1ASDLA0               :1;
        unsigned G1ASDLA1               :1;
        unsigned G1ASDLB0               :1;
        unsigned G1ASDLB1               :1;
    };
} CWG1CON1bits_t;
extern volatile CWG1CON1bits_t CWG1CON1bits __at(0x694);
// bitfield macros
#define _CWG1CON1_G1IS0_POSN                                0x0
#define _CWG1CON1_G1IS0_POSITION                            0x0
#define _CWG1CON1_G1IS0_SIZE                                0x1
#define _CWG1CON1_G1IS0_LENGTH                              0x1
#define _CWG1CON1_G1IS0_MASK                                0x1
#define _CWG1CON1_G1IS1_POSN                                0x1
#define _CWG1CON1_G1IS1_POSITION                            0x1
#define _CWG1CON1_G1IS1_SIZE                                0x1
#define _CWG1CON1_G1IS1_LENGTH                              0x1
#define _CWG1CON1_G1IS1_MASK                                0x2
#define _CWG1CON1_G1IS2_POSN                                0x2
#define _CWG1CON1_G1IS2_POSITION                            0x2
#define _CWG1CON1_G1IS2_SIZE                                0x1
#define _CWG1CON1_G1IS2_LENGTH                              0x1
#define _CWG1CON1_G1IS2_MASK                                0x4
#define _CWG1CON1_G1ASDLA_POSN                              0x4
#define _CWG1CON1_G1ASDLA_POSITION                          0x4
#define _CWG1CON1_G1ASDLA_SIZE                              0x2
#define _CWG1CON1_G1ASDLA_LENGTH                            0x2
#define _CWG1CON1_G1ASDLA_MASK                              0x30
#define _CWG1CON1_G1ASDLB_POSN                              0x6
#define _CWG1CON1_G1ASDLB_POSITION                          0x6
#define _CWG1CON1_G1ASDLB_SIZE                              0x2
#define _CWG1CON1_G1ASDLB_LENGTH                            0x2
#define _CWG1CON1_G1ASDLB_MASK                              0xC0
#define _CWG1CON1_G1IS_POSN                                 0x0
#define _CWG1CON1_G1IS_POSITION                             0x0
#define _CWG1CON1_G1IS_SIZE                                 0x4
#define _CWG1CON1_G1IS_LENGTH                               0x4
#define _CWG1CON1_G1IS_MASK                                 0xF
#define _CWG1CON1_G1ASDLA0_POSN                             0x4
#define _CWG1CON1_G1ASDLA0_POSITION                         0x4
#define _CWG1CON1_G1ASDLA0_SIZE                             0x1
#define _CWG1CON1_G1ASDLA0_LENGTH                           0x1
#define _CWG1CON1_G1ASDLA0_MASK                             0x10
#define _CWG1CON1_G1ASDLA1_POSN                             0x5
#define _CWG1CON1_G1ASDLA1_POSITION                         0x5
#define _CWG1CON1_G1ASDLA1_SIZE                             0x1
#define _CWG1CON1_G1ASDLA1_LENGTH                           0x1
#define _CWG1CON1_G1ASDLA1_MASK                             0x20
#define _CWG1CON1_G1ASDLB0_POSN                             0x6
#define _CWG1CON1_G1ASDLB0_POSITION                         0x6
#define _CWG1CON1_G1ASDLB0_SIZE                             0x1
#define _CWG1CON1_G1ASDLB0_LENGTH                           0x1
#define _CWG1CON1_G1ASDLB0_MASK                             0x40
#define _CWG1CON1_G1ASDLB1_POSN                             0x7
#define _CWG1CON1_G1ASDLB1_POSITION                         0x7
#define _CWG1CON1_G1ASDLB1_SIZE                             0x1
#define _CWG1CON1_G1ASDLB1_LENGTH                           0x1
#define _CWG1CON1_G1ASDLB1_MASK                             0x80

// Register: CWG1CON2
#define CWG1CON2 CWG1CON2
extern volatile unsigned char           CWG1CON2            __at(0x695);
#ifndef _LIB_BUILD
asm("CWG1CON2 equ 0695h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1ASDSCLC2             :1;
        unsigned G1ASDSFLT              :1;
        unsigned                        :4;
        unsigned G1ARSEN                :1;
        unsigned G1ASE                  :1;
    };
} CWG1CON2bits_t;
extern volatile CWG1CON2bits_t CWG1CON2bits __at(0x695);
// bitfield macros
#define _CWG1CON2_G1ASDSCLC2_POSN                           0x0
#define _CWG1CON2_G1ASDSCLC2_POSITION                       0x0
#define _CWG1CON2_G1ASDSCLC2_SIZE                           0x1
#define _CWG1CON2_G1ASDSCLC2_LENGTH                         0x1
#define _CWG1CON2_G1ASDSCLC2_MASK                           0x1
#define _CWG1CON2_G1ASDSFLT_POSN                            0x1
#define _CWG1CON2_G1ASDSFLT_POSITION                        0x1
#define _CWG1CON2_G1ASDSFLT_SIZE                            0x1
#define _CWG1CON2_G1ASDSFLT_LENGTH                          0x1
#define _CWG1CON2_G1ASDSFLT_MASK                            0x2
#define _CWG1CON2_G1ARSEN_POSN                              0x6
#define _CWG1CON2_G1ARSEN_POSITION                          0x6
#define _CWG1CON2_G1ARSEN_SIZE                              0x1
#define _CWG1CON2_G1ARSEN_LENGTH                            0x1
#define _CWG1CON2_G1ARSEN_MASK                              0x40
#define _CWG1CON2_G1ASE_POSN                                0x7
#define _CWG1CON2_G1ASE_POSITION                            0x7
#define _CWG1CON2_G1ASE_SIZE                                0x1
#define _CWG1CON2_G1ASE_LENGTH                              0x1
#define _CWG1CON2_G1ASE_MASK                                0x80

// Register: CLCDATA
#define CLCDATA CLCDATA
extern volatile unsigned char           CLCDATA             __at(0xF0F);
#ifndef _LIB_BUILD
asm("CLCDATA equ 0F0Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MCLC1OUT               :1;
        unsigned MCLC2OUT               :1;
    };
} CLCDATAbits_t;
extern volatile CLCDATAbits_t CLCDATAbits __at(0xF0F);
// bitfield macros
#define _CLCDATA_MCLC1OUT_POSN                              0x0
#define _CLCDATA_MCLC1OUT_POSITION                          0x0
#define _CLCDATA_MCLC1OUT_SIZE                              0x1
#define _CLCDATA_MCLC1OUT_LENGTH                            0x1
#define _CLCDATA_MCLC1OUT_MASK                              0x1
#define _CLCDATA_MCLC2OUT_POSN                              0x1
#define _CLCDATA_MCLC2OUT_POSITION                          0x1
#define _CLCDATA_MCLC2OUT_SIZE                              0x1
#define _CLCDATA_MCLC2OUT_LENGTH                            0x1
#define _CLCDATA_MCLC2OUT_MASK                              0x2

// Register: CLC1CON
#define CLC1CON CLC1CON
extern volatile unsigned char           CLC1CON             __at(0xF10);
#ifndef _LIB_BUILD
asm("CLC1CON equ 0F10h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1MODE0               :1;
        unsigned LC1MODE1               :1;
        unsigned LC1MODE2               :1;
        unsigned LC1INTN                :1;
        unsigned LC1INTP                :1;
        unsigned LC1OUT                 :1;
        unsigned LC1OE                  :1;
        unsigned LC1EN                  :1;
    };
    struct {
        unsigned LCMODE0                :1;
        unsigned LCMODE1                :1;
        unsigned LCMODE2                :1;
        unsigned LCINTN                 :1;
        unsigned LCINTP                 :1;
        unsigned LCOUT                  :1;
        unsigned LCOE                   :1;
        unsigned LCEN                   :1;
    };
    struct {
        unsigned LC1MODE                :3;
    };
} CLC1CONbits_t;
extern volatile CLC1CONbits_t CLC1CONbits __at(0xF10);
// bitfield macros
#define _CLC1CON_LC1MODE0_POSN                              0x0
#define _CLC1CON_LC1MODE0_POSITION                          0x0
#define _CLC1CON_LC1MODE0_SIZE                              0x1
#define _CLC1CON_LC1MODE0_LENGTH                            0x1
#define _CLC1CON_LC1MODE0_MASK                              0x1
#define _CLC1CON_LC1MODE1_POSN                              0x1
#define _CLC1CON_LC1MODE1_POSITION                          0x1
#define _CLC1CON_LC1MODE1_SIZE                              0x1
#define _CLC1CON_LC1MODE1_LENGTH                            0x1
#define _CLC1CON_LC1MODE1_MASK                              0x2
#define _CLC1CON_LC1MODE2_POSN                              0x2
#define _CLC1CON_LC1MODE2_POSITION                          0x2
#define _CLC1CON_LC1MODE2_SIZE                              0x1
#define _CLC1CON_LC1MODE2_LENGTH                            0x1
#define _CLC1CON_LC1MODE2_MASK                              0x4
#define _CLC1CON_LC1INTN_POSN                               0x3
#define _CLC1CON_LC1INTN_POSITION                           0x3
#define _CLC1CON_LC1INTN_SIZE                               0x1
#define _CLC1CON_LC1INTN_LENGTH                             0x1
#define _CLC1CON_LC1INTN_MASK                               0x8
#define _CLC1CON_LC1INTP_POSN                               0x4
#define _CLC1CON_LC1INTP_POSITION                           0x4
#define _CLC1CON_LC1INTP_SIZE                               0x1
#define _CLC1CON_LC1INTP_LENGTH                             0x1
#define _CLC1CON_LC1INTP_MASK                               0x10
#define _CLC1CON_LC1OUT_POSN                                0x5
#define _CLC1CON_LC1OUT_POSITION                            0x5
#define _CLC1CON_LC1OUT_SIZE                                0x1
#define _CLC1CON_LC1OUT_LENGTH                              0x1
#define _CLC1CON_LC1OUT_MASK                                0x20
#define _CLC1CON_LC1OE_POSN                                 0x6
#define _CLC1CON_LC1OE_POSITION                             0x6
#define _CLC1CON_LC1OE_SIZE                                 0x1
#define _CLC1CON_LC1OE_LENGTH                               0x1
#define _CLC1CON_LC1OE_MASK                                 0x40
#define _CLC1CON_LC1EN_POSN                                 0x7
#define _CLC1CON_LC1EN_POSITION                             0x7
#define _CLC1CON_LC1EN_SIZE                                 0x1
#define _CLC1CON_LC1EN_LENGTH                               0x1
#define _CLC1CON_LC1EN_MASK                                 0x80
#define _CLC1CON_LCMODE0_POSN                               0x0
#define _CLC1CON_LCMODE0_POSITION                           0x0
#define _CLC1CON_LCMODE0_SIZE                               0x1
#define _CLC1CON_LCMODE0_LENGTH                             0x1
#define _CLC1CON_LCMODE0_MASK                               0x1
#define _CLC1CON_LCMODE1_POSN                               0x1
#define _CLC1CON_LCMODE1_POSITION                           0x1
#define _CLC1CON_LCMODE1_SIZE                               0x1
#define _CLC1CON_LCMODE1_LENGTH                             0x1
#define _CLC1CON_LCMODE1_MASK                               0x2
#define _CLC1CON_LCMODE2_POSN                               0x2
#define _CLC1CON_LCMODE2_POSITION                           0x2
#define _CLC1CON_LCMODE2_SIZE                               0x1
#define _CLC1CON_LCMODE2_LENGTH                             0x1
#define _CLC1CON_LCMODE2_MASK                               0x4
#define _CLC1CON_LCINTN_POSN                                0x3
#define _CLC1CON_LCINTN_POSITION                            0x3
#define _CLC1CON_LCINTN_SIZE                                0x1
#define _CLC1CON_LCINTN_LENGTH                              0x1
#define _CLC1CON_LCINTN_MASK                                0x8
#define _CLC1CON_LCINTP_POSN                                0x4
#define _CLC1CON_LCINTP_POSITION                            0x4
#define _CLC1CON_LCINTP_SIZE                                0x1
#define _CLC1CON_LCINTP_LENGTH                              0x1
#define _CLC1CON_LCINTP_MASK                                0x10
#define _CLC1CON_LCOUT_POSN                                 0x5
#define _CLC1CON_LCOUT_POSITION                             0x5
#define _CLC1CON_LCOUT_SIZE                                 0x1
#define _CLC1CON_LCOUT_LENGTH                               0x1
#define _CLC1CON_LCOUT_MASK                                 0x20
#define _CLC1CON_LCOE_POSN                                  0x6
#define _CLC1CON_LCOE_POSITION                              0x6
#define _CLC1CON_LCOE_SIZE                                  0x1
#define _CLC1CON_LCOE_LENGTH                                0x1
#define _CLC1CON_LCOE_MASK                                  0x40
#define _CLC1CON_LCEN_POSN                                  0x7
#define _CLC1CON_LCEN_POSITION                              0x7
#define _CLC1CON_LCEN_SIZE                                  0x1
#define _CLC1CON_LCEN_LENGTH                                0x1
#define _CLC1CON_LCEN_MASK                                  0x80
#define _CLC1CON_LC1MODE_POSN                               0x0
#define _CLC1CON_LC1MODE_POSITION                           0x0
#define _CLC1CON_LC1MODE_SIZE                               0x3
#define _CLC1CON_LC1MODE_LENGTH                             0x3
#define _CLC1CON_LC1MODE_MASK                               0x7

// Register: CLC1POL
#define CLC1POL CLC1POL
extern volatile unsigned char           CLC1POL             __at(0xF11);
#ifndef _LIB_BUILD
asm("CLC1POL equ 0F11h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G1POL               :1;
        unsigned LC1G2POL               :1;
        unsigned LC1G3POL               :1;
        unsigned LC1G4POL               :1;
        unsigned                        :3;
        unsigned LC1POL                 :1;
    };
    struct {
        unsigned G1POL                  :1;
        unsigned G2POL                  :1;
        unsigned G3POL                  :1;
        unsigned G4POL                  :1;
        unsigned                        :3;
        unsigned POL                    :1;
    };
} CLC1POLbits_t;
extern volatile CLC1POLbits_t CLC1POLbits __at(0xF11);
// bitfield macros
#define _CLC1POL_LC1G1POL_POSN                              0x0
#define _CLC1POL_LC1G1POL_POSITION                          0x0
#define _CLC1POL_LC1G1POL_SIZE                              0x1
#define _CLC1POL_LC1G1POL_LENGTH                            0x1
#define _CLC1POL_LC1G1POL_MASK                              0x1
#define _CLC1POL_LC1G2POL_POSN                              0x1
#define _CLC1POL_LC1G2POL_POSITION                          0x1
#define _CLC1POL_LC1G2POL_SIZE                              0x1
#define _CLC1POL_LC1G2POL_LENGTH                            0x1
#define _CLC1POL_LC1G2POL_MASK                              0x2
#define _CLC1POL_LC1G3POL_POSN                              0x2
#define _CLC1POL_LC1G3POL_POSITION                          0x2
#define _CLC1POL_LC1G3POL_SIZE                              0x1
#define _CLC1POL_LC1G3POL_LENGTH                            0x1
#define _CLC1POL_LC1G3POL_MASK                              0x4
#define _CLC1POL_LC1G4POL_POSN                              0x3
#define _CLC1POL_LC1G4POL_POSITION                          0x3
#define _CLC1POL_LC1G4POL_SIZE                              0x1
#define _CLC1POL_LC1G4POL_LENGTH                            0x1
#define _CLC1POL_LC1G4POL_MASK                              0x8
#define _CLC1POL_LC1POL_POSN                                0x7
#define _CLC1POL_LC1POL_POSITION                            0x7
#define _CLC1POL_LC1POL_SIZE                                0x1
#define _CLC1POL_LC1POL_LENGTH                              0x1
#define _CLC1POL_LC1POL_MASK                                0x80
#define _CLC1POL_G1POL_POSN                                 0x0
#define _CLC1POL_G1POL_POSITION                             0x0
#define _CLC1POL_G1POL_SIZE                                 0x1
#define _CLC1POL_G1POL_LENGTH                               0x1
#define _CLC1POL_G1POL_MASK                                 0x1
#define _CLC1POL_G2POL_POSN                                 0x1
#define _CLC1POL_G2POL_POSITION                             0x1
#define _CLC1POL_G2POL_SIZE                                 0x1
#define _CLC1POL_G2POL_LENGTH                               0x1
#define _CLC1POL_G2POL_MASK                                 0x2
#define _CLC1POL_G3POL_POSN                                 0x2
#define _CLC1POL_G3POL_POSITION                             0x2
#define _CLC1POL_G3POL_SIZE                                 0x1
#define _CLC1POL_G3POL_LENGTH                               0x1
#define _CLC1POL_G3POL_MASK                                 0x4
#define _CLC1POL_G4POL_POSN                                 0x3
#define _CLC1POL_G4POL_POSITION                             0x3
#define _CLC1POL_G4POL_SIZE                                 0x1
#define _CLC1POL_G4POL_LENGTH                               0x1
#define _CLC1POL_G4POL_MASK                                 0x8
#define _CLC1POL_POL_POSN                                   0x7
#define _CLC1POL_POL_POSITION                               0x7
#define _CLC1POL_POL_SIZE                                   0x1
#define _CLC1POL_POL_LENGTH                                 0x1
#define _CLC1POL_POL_MASK                                   0x80

// Register: CLC1SEL0
#define CLC1SEL0 CLC1SEL0
extern volatile unsigned char           CLC1SEL0            __at(0xF12);
#ifndef _LIB_BUILD
asm("CLC1SEL0 equ 0F12h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D1S0                :1;
        unsigned LC1D1S1                :1;
        unsigned LC1D1S2                :1;
        unsigned                        :1;
        unsigned LC1D2S0                :1;
        unsigned LC1D2S1                :1;
        unsigned LC1D2S2                :1;
    };
    struct {
        unsigned D1S0                   :1;
        unsigned D1S1                   :1;
        unsigned D1S2                   :1;
        unsigned                        :1;
        unsigned D2S0                   :1;
        unsigned D2S1                   :1;
        unsigned D2S2                   :1;
    };
    struct {
        unsigned LC1D1S                 :3;
        unsigned                        :1;
        unsigned LC1D2S                 :3;
    };
} CLC1SEL0bits_t;
extern volatile CLC1SEL0bits_t CLC1SEL0bits __at(0xF12);
// bitfield macros
#define _CLC1SEL0_LC1D1S0_POSN                              0x0
#define _CLC1SEL0_LC1D1S0_POSITION                          0x0
#define _CLC1SEL0_LC1D1S0_SIZE                              0x1
#define _CLC1SEL0_LC1D1S0_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S0_MASK                              0x1
#define _CLC1SEL0_LC1D1S1_POSN                              0x1
#define _CLC1SEL0_LC1D1S1_POSITION                          0x1
#define _CLC1SEL0_LC1D1S1_SIZE                              0x1
#define _CLC1SEL0_LC1D1S1_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S1_MASK                              0x2
#define _CLC1SEL0_LC1D1S2_POSN                              0x2
#define _CLC1SEL0_LC1D1S2_POSITION                          0x2
#define _CLC1SEL0_LC1D1S2_SIZE                              0x1
#define _CLC1SEL0_LC1D1S2_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S2_MASK                              0x4
#define _CLC1SEL0_LC1D2S0_POSN                              0x4
#define _CLC1SEL0_LC1D2S0_POSITION                          0x4
#define _CLC1SEL0_LC1D2S0_SIZE                              0x1
#define _CLC1SEL0_LC1D2S0_LENGTH                            0x1
#define _CLC1SEL0_LC1D2S0_MASK                              0x10
#define _CLC1SEL0_LC1D2S1_POSN                              0x5
#define _CLC1SEL0_LC1D2S1_POSITION                          0x5
#define _CLC1SEL0_LC1D2S1_SIZE                              0x1
#define _CLC1SEL0_LC1D2S1_LENGTH                            0x1
#define _CLC1SEL0_LC1D2S1_MASK                              0x20
#define _CLC1SEL0_LC1D2S2_POSN                              0x6
#define _CLC1SEL0_LC1D2S2_POSITION                          0x6
#define _CLC1SEL0_LC1D2S2_SIZE                              0x1
#define _CLC1SEL0_LC1D2S2_LENGTH                            0x1
#define _CLC1SEL0_LC1D2S2_MASK                              0x40
#define _CLC1SEL0_D1S0_POSN                                 0x0
#define _CLC1SEL0_D1S0_POSITION                             0x0
#define _CLC1SEL0_D1S0_SIZE                                 0x1
#define _CLC1SEL0_D1S0_LENGTH                               0x1
#define _CLC1SEL0_D1S0_MASK                                 0x1
#define _CLC1SEL0_D1S1_POSN                                 0x1
#define _CLC1SEL0_D1S1_POSITION                             0x1
#define _CLC1SEL0_D1S1_SIZE                                 0x1
#define _CLC1SEL0_D1S1_LENGTH                               0x1
#define _CLC1SEL0_D1S1_MASK                                 0x2
#define _CLC1SEL0_D1S2_POSN                                 0x2
#define _CLC1SEL0_D1S2_POSITION                             0x2
#define _CLC1SEL0_D1S2_SIZE                                 0x1
#define _CLC1SEL0_D1S2_LENGTH                               0x1
#define _CLC1SEL0_D1S2_MASK                                 0x4
#define _CLC1SEL0_D2S0_POSN                                 0x4
#define _CLC1SEL0_D2S0_POSITION                             0x4
#define _CLC1SEL0_D2S0_SIZE                                 0x1
#define _CLC1SEL0_D2S0_LENGTH                               0x1
#define _CLC1SEL0_D2S0_MASK                                 0x10
#define _CLC1SEL0_D2S1_POSN                                 0x5
#define _CLC1SEL0_D2S1_POSITION                             0x5
#define _CLC1SEL0_D2S1_SIZE                                 0x1
#define _CLC1SEL0_D2S1_LENGTH                               0x1
#define _CLC1SEL0_D2S1_MASK                                 0x20
#define _CLC1SEL0_D2S2_POSN                                 0x6
#define _CLC1SEL0_D2S2_POSITION                             0x6
#define _CLC1SEL0_D2S2_SIZE                                 0x1
#define _CLC1SEL0_D2S2_LENGTH                               0x1
#define _CLC1SEL0_D2S2_MASK                                 0x40
#define _CLC1SEL0_LC1D1S_POSN                               0x0
#define _CLC1SEL0_LC1D1S_POSITION                           0x0
#define _CLC1SEL0_LC1D1S_SIZE                               0x3
#define _CLC1SEL0_LC1D1S_LENGTH                             0x3
#define _CLC1SEL0_LC1D1S_MASK                               0x7
#define _CLC1SEL0_LC1D2S_POSN                               0x4
#define _CLC1SEL0_LC1D2S_POSITION                           0x4
#define _CLC1SEL0_LC1D2S_SIZE                               0x3
#define _CLC1SEL0_LC1D2S_LENGTH                             0x3
#define _CLC1SEL0_LC1D2S_MASK                               0x70

// Register: CLC1SEL1
#define CLC1SEL1 CLC1SEL1
extern volatile unsigned char           CLC1SEL1            __at(0xF13);
#ifndef _LIB_BUILD
asm("CLC1SEL1 equ 0F13h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D3S0                :1;
        unsigned LC1D3S1                :1;
        unsigned LC1D3S2                :1;
        unsigned                        :1;
        unsigned LC1D4S0                :1;
        unsigned LC1D4S1                :1;
        unsigned LC1D4S2                :1;
    };
    struct {
        unsigned D3S0                   :1;
        unsigned D3S1                   :1;
        unsigned D3S2                   :1;
        unsigned                        :1;
        unsigned D4S0                   :1;
        unsigned D4S1                   :1;
        unsigned D4S2                   :1;
    };
    struct {
        unsigned LC1D3S                 :3;
        unsigned                        :1;
        unsigned LC1D4S                 :3;
    };
} CLC1SEL1bits_t;
extern volatile CLC1SEL1bits_t CLC1SEL1bits __at(0xF13);
// bitfield macros
#define _CLC1SEL1_LC1D3S0_POSN                              0x0
#define _CLC1SEL1_LC1D3S0_POSITION                          0x0
#define _CLC1SEL1_LC1D3S0_SIZE                              0x1
#define _CLC1SEL1_LC1D3S0_LENGTH                            0x1
#define _CLC1SEL1_LC1D3S0_MASK                              0x1
#define _CLC1SEL1_LC1D3S1_POSN                              0x1
#define _CLC1SEL1_LC1D3S1_POSITION                          0x1
#define _CLC1SEL1_LC1D3S1_SIZE                              0x1
#define _CLC1SEL1_LC1D3S1_LENGTH                            0x1
#define _CLC1SEL1_LC1D3S1_MASK                              0x2
#define _CLC1SEL1_LC1D3S2_POSN                              0x2
#define _CLC1SEL1_LC1D3S2_POSITION                          0x2
#define _CLC1SEL1_LC1D3S2_SIZE                              0x1
#define _CLC1SEL1_LC1D3S2_LENGTH                            0x1
#define _CLC1SEL1_LC1D3S2_MASK                              0x4
#define _CLC1SEL1_LC1D4S0_POSN                              0x4
#define _CLC1SEL1_LC1D4S0_POSITION                          0x4
#define _CLC1SEL1_LC1D4S0_SIZE                              0x1
#define _CLC1SEL1_LC1D4S0_LENGTH                            0x1
#define _CLC1SEL1_LC1D4S0_MASK                              0x10
#define _CLC1SEL1_LC1D4S1_POSN                              0x5
#define _CLC1SEL1_LC1D4S1_POSITION                          0x5
#define _CLC1SEL1_LC1D4S1_SIZE                              0x1
#define _CLC1SEL1_LC1D4S1_LENGTH                            0x1
#define _CLC1SEL1_LC1D4S1_MASK                              0x20
#define _CLC1SEL1_LC1D4S2_POSN                              0x6
#define _CLC1SEL1_LC1D4S2_POSITION                          0x6
#define _CLC1SEL1_LC1D4S2_SIZE                              0x1
#define _CLC1SEL1_LC1D4S2_LENGTH                            0x1
#define _CLC1SEL1_LC1D4S2_MASK                              0x40
#define _CLC1SEL1_D3S0_POSN                                 0x0
#define _CLC1SEL1_D3S0_POSITION                             0x0
#define _CLC1SEL1_D3S0_SIZE                                 0x1
#define _CLC1SEL1_D3S0_LENGTH                               0x1
#define _CLC1SEL1_D3S0_MASK                                 0x1
#define _CLC1SEL1_D3S1_POSN                                 0x1
#define _CLC1SEL1_D3S1_POSITION                             0x1
#define _CLC1SEL1_D3S1_SIZE                                 0x1
#define _CLC1SEL1_D3S1_LENGTH                               0x1
#define _CLC1SEL1_D3S1_MASK                                 0x2
#define _CLC1SEL1_D3S2_POSN                                 0x2
#define _CLC1SEL1_D3S2_POSITION                             0x2
#define _CLC1SEL1_D3S2_SIZE                                 0x1
#define _CLC1SEL1_D3S2_LENGTH                               0x1
#define _CLC1SEL1_D3S2_MASK                                 0x4
#define _CLC1SEL1_D4S0_POSN                                 0x4
#define _CLC1SEL1_D4S0_POSITION                             0x4
#define _CLC1SEL1_D4S0_SIZE                                 0x1
#define _CLC1SEL1_D4S0_LENGTH                               0x1
#define _CLC1SEL1_D4S0_MASK                                 0x10
#define _CLC1SEL1_D4S1_POSN                                 0x5
#define _CLC1SEL1_D4S1_POSITION                             0x5
#define _CLC1SEL1_D4S1_SIZE                                 0x1
#define _CLC1SEL1_D4S1_LENGTH                               0x1
#define _CLC1SEL1_D4S1_MASK                                 0x20
#define _CLC1SEL1_D4S2_POSN                                 0x6
#define _CLC1SEL1_D4S2_POSITION                             0x6
#define _CLC1SEL1_D4S2_SIZE                                 0x1
#define _CLC1SEL1_D4S2_LENGTH                               0x1
#define _CLC1SEL1_D4S2_MASK                                 0x40
#define _CLC1SEL1_LC1D3S_POSN                               0x0
#define _CLC1SEL1_LC1D3S_POSITION                           0x0
#define _CLC1SEL1_LC1D3S_SIZE                               0x3
#define _CLC1SEL1_LC1D3S_LENGTH                             0x3
#define _CLC1SEL1_LC1D3S_MASK                               0x7
#define _CLC1SEL1_LC1D4S_POSN                               0x4
#define _CLC1SEL1_LC1D4S_POSITION                           0x4
#define _CLC1SEL1_LC1D4S_SIZE                               0x3
#define _CLC1SEL1_LC1D4S_LENGTH                             0x3
#define _CLC1SEL1_LC1D4S_MASK                               0x70

// Register: CLC1GLS0
#define CLC1GLS0 CLC1GLS0
extern volatile unsigned char           CLC1GLS0            __at(0xF14);
#ifndef _LIB_BUILD
asm("CLC1GLS0 equ 0F14h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G1D1N               :1;
        unsigned LC1G1D1T               :1;
        unsigned LC1G1D2N               :1;
        unsigned LC1G1D2T               :1;
        unsigned LC1G1D3N               :1;
        unsigned LC1G1D3T               :1;
        unsigned LC1G1D4N               :1;
        unsigned LC1G1D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS0bits_t;
extern volatile CLC1GLS0bits_t CLC1GLS0bits __at(0xF14);
// bitfield macros
#define _CLC1GLS0_LC1G1D1N_POSN                             0x0
#define _CLC1GLS0_LC1G1D1N_POSITION                         0x0
#define _CLC1GLS0_LC1G1D1N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D1N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D1N_MASK                             0x1
#define _CLC1GLS0_LC1G1D1T_POSN                             0x1
#define _CLC1GLS0_LC1G1D1T_POSITION                         0x1
#define _CLC1GLS0_LC1G1D1T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D1T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D1T_MASK                             0x2
#define _CLC1GLS0_LC1G1D2N_POSN                             0x2
#define _CLC1GLS0_LC1G1D2N_POSITION                         0x2
#define _CLC1GLS0_LC1G1D2N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D2N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D2N_MASK                             0x4
#define _CLC1GLS0_LC1G1D2T_POSN                             0x3
#define _CLC1GLS0_LC1G1D2T_POSITION                         0x3
#define _CLC1GLS0_LC1G1D2T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D2T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D2T_MASK                             0x8
#define _CLC1GLS0_LC1G1D3N_POSN                             0x4
#define _CLC1GLS0_LC1G1D3N_POSITION                         0x4
#define _CLC1GLS0_LC1G1D3N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D3N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D3N_MASK                             0x10
#define _CLC1GLS0_LC1G1D3T_POSN                             0x5
#define _CLC1GLS0_LC1G1D3T_POSITION                         0x5
#define _CLC1GLS0_LC1G1D3T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D3T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D3T_MASK                             0x20
#define _CLC1GLS0_LC1G1D4N_POSN                             0x6
#define _CLC1GLS0_LC1G1D4N_POSITION                         0x6
#define _CLC1GLS0_LC1G1D4N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D4N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D4N_MASK                             0x40
#define _CLC1GLS0_LC1G1D4T_POSN                             0x7
#define _CLC1GLS0_LC1G1D4T_POSITION                         0x7
#define _CLC1GLS0_LC1G1D4T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D4T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D4T_MASK                             0x80
#define _CLC1GLS0_D1N_POSN                                  0x0
#define _CLC1GLS0_D1N_POSITION                              0x0
#define _CLC1GLS0_D1N_SIZE                                  0x1
#define _CLC1GLS0_D1N_LENGTH                                0x1
#define _CLC1GLS0_D1N_MASK                                  0x1
#define _CLC1GLS0_D1T_POSN                                  0x1
#define _CLC1GLS0_D1T_POSITION                              0x1
#define _CLC1GLS0_D1T_SIZE                                  0x1
#define _CLC1GLS0_D1T_LENGTH                                0x1
#define _CLC1GLS0_D1T_MASK                                  0x2
#define _CLC1GLS0_D2N_POSN                                  0x2
#define _CLC1GLS0_D2N_POSITION                              0x2
#define _CLC1GLS0_D2N_SIZE                                  0x1
#define _CLC1GLS0_D2N_LENGTH                                0x1
#define _CLC1GLS0_D2N_MASK                                  0x4
#define _CLC1GLS0_D2T_POSN                                  0x3
#define _CLC1GLS0_D2T_POSITION                              0x3
#define _CLC1GLS0_D2T_SIZE                                  0x1
#define _CLC1GLS0_D2T_LENGTH                                0x1
#define _CLC1GLS0_D2T_MASK                                  0x8
#define _CLC1GLS0_D3N_POSN                                  0x4
#define _CLC1GLS0_D3N_POSITION                              0x4
#define _CLC1GLS0_D3N_SIZE                                  0x1
#define _CLC1GLS0_D3N_LENGTH                                0x1
#define _CLC1GLS0_D3N_MASK                                  0x10
#define _CLC1GLS0_D3T_POSN                                  0x5
#define _CLC1GLS0_D3T_POSITION                              0x5
#define _CLC1GLS0_D3T_SIZE                                  0x1
#define _CLC1GLS0_D3T_LENGTH                                0x1
#define _CLC1GLS0_D3T_MASK                                  0x20
#define _CLC1GLS0_D4N_POSN                                  0x6
#define _CLC1GLS0_D4N_POSITION                              0x6
#define _CLC1GLS0_D4N_SIZE                                  0x1
#define _CLC1GLS0_D4N_LENGTH                                0x1
#define _CLC1GLS0_D4N_MASK                                  0x40
#define _CLC1GLS0_D4T_POSN                                  0x7
#define _CLC1GLS0_D4T_POSITION                              0x7
#define _CLC1GLS0_D4T_SIZE                                  0x1
#define _CLC1GLS0_D4T_LENGTH                                0x1
#define _CLC1GLS0_D4T_MASK                                  0x80

// Register: CLC1GLS1
#define CLC1GLS1 CLC1GLS1
extern volatile unsigned char           CLC1GLS1            __at(0xF15);
#ifndef _LIB_BUILD
asm("CLC1GLS1 equ 0F15h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G2D1N               :1;
        unsigned LC1G2D1T               :1;
        unsigned LC1G2D2N               :1;
        unsigned LC1G2D2T               :1;
        unsigned LC1G2D3N               :1;
        unsigned LC1G2D3T               :1;
        unsigned LC1G2D4N               :1;
        unsigned LC1G2D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS1bits_t;
extern volatile CLC1GLS1bits_t CLC1GLS1bits __at(0xF15);
// bitfield macros
#define _CLC1GLS1_LC1G2D1N_POSN                             0x0
#define _CLC1GLS1_LC1G2D1N_POSITION                         0x0
#define _CLC1GLS1_LC1G2D1N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D1N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D1N_MASK                             0x1
#define _CLC1GLS1_LC1G2D1T_POSN                             0x1
#define _CLC1GLS1_LC1G2D1T_POSITION                         0x1
#define _CLC1GLS1_LC1G2D1T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D1T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D1T_MASK                             0x2
#define _CLC1GLS1_LC1G2D2N_POSN                             0x2
#define _CLC1GLS1_LC1G2D2N_POSITION                         0x2
#define _CLC1GLS1_LC1G2D2N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D2N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D2N_MASK                             0x4
#define _CLC1GLS1_LC1G2D2T_POSN                             0x3
#define _CLC1GLS1_LC1G2D2T_POSITION                         0x3
#define _CLC1GLS1_LC1G2D2T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D2T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D2T_MASK                             0x8
#define _CLC1GLS1_LC1G2D3N_POSN                             0x4
#define _CLC1GLS1_LC1G2D3N_POSITION                         0x4
#define _CLC1GLS1_LC1G2D3N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D3N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D3N_MASK                             0x10
#define _CLC1GLS1_LC1G2D3T_POSN                             0x5
#define _CLC1GLS1_LC1G2D3T_POSITION                         0x5
#define _CLC1GLS1_LC1G2D3T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D3T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D3T_MASK                             0x20
#define _CLC1GLS1_LC1G2D4N_POSN                             0x6
#define _CLC1GLS1_LC1G2D4N_POSITION                         0x6
#define _CLC1GLS1_LC1G2D4N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D4N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D4N_MASK                             0x40
#define _CLC1GLS1_LC1G2D4T_POSN                             0x7
#define _CLC1GLS1_LC1G2D4T_POSITION                         0x7
#define _CLC1GLS1_LC1G2D4T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D4T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D4T_MASK                             0x80
#define _CLC1GLS1_D1N_POSN                                  0x0
#define _CLC1GLS1_D1N_POSITION                              0x0
#define _CLC1GLS1_D1N_SIZE                                  0x1
#define _CLC1GLS1_D1N_LENGTH                                0x1
#define _CLC1GLS1_D1N_MASK                                  0x1
#define _CLC1GLS1_D1T_POSN                                  0x1
#define _CLC1GLS1_D1T_POSITION                              0x1
#define _CLC1GLS1_D1T_SIZE                                  0x1
#define _CLC1GLS1_D1T_LENGTH                                0x1
#define _CLC1GLS1_D1T_MASK                                  0x2
#define _CLC1GLS1_D2N_POSN                                  0x2
#define _CLC1GLS1_D2N_POSITION                              0x2
#define _CLC1GLS1_D2N_SIZE                                  0x1
#define _CLC1GLS1_D2N_LENGTH                                0x1
#define _CLC1GLS1_D2N_MASK                                  0x4
#define _CLC1GLS1_D2T_POSN                                  0x3
#define _CLC1GLS1_D2T_POSITION                              0x3
#define _CLC1GLS1_D2T_SIZE                                  0x1
#define _CLC1GLS1_D2T_LENGTH                                0x1
#define _CLC1GLS1_D2T_MASK                                  0x8
#define _CLC1GLS1_D3N_POSN                                  0x4
#define _CLC1GLS1_D3N_POSITION                              0x4
#define _CLC1GLS1_D3N_SIZE                                  0x1
#define _CLC1GLS1_D3N_LENGTH                                0x1
#define _CLC1GLS1_D3N_MASK                                  0x10
#define _CLC1GLS1_D3T_POSN                                  0x5
#define _CLC1GLS1_D3T_POSITION                              0x5
#define _CLC1GLS1_D3T_SIZE                                  0x1
#define _CLC1GLS1_D3T_LENGTH                                0x1
#define _CLC1GLS1_D3T_MASK                                  0x20
#define _CLC1GLS1_D4N_POSN                                  0x6
#define _CLC1GLS1_D4N_POSITION                              0x6
#define _CLC1GLS1_D4N_SIZE                                  0x1
#define _CLC1GLS1_D4N_LENGTH                                0x1
#define _CLC1GLS1_D4N_MASK                                  0x40
#define _CLC1GLS1_D4T_POSN                                  0x7
#define _CLC1GLS1_D4T_POSITION                              0x7
#define _CLC1GLS1_D4T_SIZE                                  0x1
#define _CLC1GLS1_D4T_LENGTH                                0x1
#define _CLC1GLS1_D4T_MASK                                  0x80

// Register: CLC1GLS2
#define CLC1GLS2 CLC1GLS2
extern volatile unsigned char           CLC1GLS2            __at(0xF16);
#ifndef _LIB_BUILD
asm("CLC1GLS2 equ 0F16h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G3D1N               :1;
        unsigned LC1G3D1T               :1;
        unsigned LC1G3D2N               :1;
        unsigned LC1G3D2T               :1;
        unsigned LC1G3D3N               :1;
        unsigned LC1G3D3T               :1;
        unsigned LC1G3D4N               :1;
        unsigned LC1G3D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS2bits_t;
extern volatile CLC1GLS2bits_t CLC1GLS2bits __at(0xF16);
// bitfield macros
#define _CLC1GLS2_LC1G3D1N_POSN                             0x0
#define _CLC1GLS2_LC1G3D1N_POSITION                         0x0
#define _CLC1GLS2_LC1G3D1N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D1N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D1N_MASK                             0x1
#define _CLC1GLS2_LC1G3D1T_POSN                             0x1
#define _CLC1GLS2_LC1G3D1T_POSITION                         0x1
#define _CLC1GLS2_LC1G3D1T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D1T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D1T_MASK                             0x2
#define _CLC1GLS2_LC1G3D2N_POSN                             0x2
#define _CLC1GLS2_LC1G3D2N_POSITION                         0x2
#define _CLC1GLS2_LC1G3D2N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D2N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D2N_MASK                             0x4
#define _CLC1GLS2_LC1G3D2T_POSN                             0x3
#define _CLC1GLS2_LC1G3D2T_POSITION                         0x3
#define _CLC1GLS2_LC1G3D2T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D2T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D2T_MASK                             0x8
#define _CLC1GLS2_LC1G3D3N_POSN                             0x4
#define _CLC1GLS2_LC1G3D3N_POSITION                         0x4
#define _CLC1GLS2_LC1G3D3N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D3N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D3N_MASK                             0x10
#define _CLC1GLS2_LC1G3D3T_POSN                             0x5
#define _CLC1GLS2_LC1G3D3T_POSITION                         0x5
#define _CLC1GLS2_LC1G3D3T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D3T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D3T_MASK                             0x20
#define _CLC1GLS2_LC1G3D4N_POSN                             0x6
#define _CLC1GLS2_LC1G3D4N_POSITION                         0x6
#define _CLC1GLS2_LC1G3D4N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D4N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D4N_MASK                             0x40
#define _CLC1GLS2_LC1G3D4T_POSN                             0x7
#define _CLC1GLS2_LC1G3D4T_POSITION                         0x7
#define _CLC1GLS2_LC1G3D4T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D4T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D4T_MASK                             0x80
#define _CLC1GLS2_D1N_POSN                                  0x0
#define _CLC1GLS2_D1N_POSITION                              0x0
#define _CLC1GLS2_D1N_SIZE                                  0x1
#define _CLC1GLS2_D1N_LENGTH                                0x1
#define _CLC1GLS2_D1N_MASK                                  0x1
#define _CLC1GLS2_D1T_POSN                                  0x1
#define _CLC1GLS2_D1T_POSITION                              0x1
#define _CLC1GLS2_D1T_SIZE                                  0x1
#define _CLC1GLS2_D1T_LENGTH                                0x1
#define _CLC1GLS2_D1T_MASK                                  0x2
#define _CLC1GLS2_D2N_POSN                                  0x2
#define _CLC1GLS2_D2N_POSITION                              0x2
#define _CLC1GLS2_D2N_SIZE                                  0x1
#define _CLC1GLS2_D2N_LENGTH                                0x1
#define _CLC1GLS2_D2N_MASK                                  0x4
#define _CLC1GLS2_D2T_POSN                                  0x3
#define _CLC1GLS2_D2T_POSITION                              0x3
#define _CLC1GLS2_D2T_SIZE                                  0x1
#define _CLC1GLS2_D2T_LENGTH                                0x1
#define _CLC1GLS2_D2T_MASK                                  0x8
#define _CLC1GLS2_D3N_POSN                                  0x4
#define _CLC1GLS2_D3N_POSITION                              0x4
#define _CLC1GLS2_D3N_SIZE                                  0x1
#define _CLC1GLS2_D3N_LENGTH                                0x1
#define _CLC1GLS2_D3N_MASK                                  0x10
#define _CLC1GLS2_D3T_POSN                                  0x5
#define _CLC1GLS2_D3T_POSITION                              0x5
#define _CLC1GLS2_D3T_SIZE                                  0x1
#define _CLC1GLS2_D3T_LENGTH                                0x1
#define _CLC1GLS2_D3T_MASK                                  0x20
#define _CLC1GLS2_D4N_POSN                                  0x6
#define _CLC1GLS2_D4N_POSITION                              0x6
#define _CLC1GLS2_D4N_SIZE                                  0x1
#define _CLC1GLS2_D4N_LENGTH                                0x1
#define _CLC1GLS2_D4N_MASK                                  0x40
#define _CLC1GLS2_D4T_POSN                                  0x7
#define _CLC1GLS2_D4T_POSITION                              0x7
#define _CLC1GLS2_D4T_SIZE                                  0x1
#define _CLC1GLS2_D4T_LENGTH                                0x1
#define _CLC1GLS2_D4T_MASK                                  0x80

// Register: CLC1GLS3
#define CLC1GLS3 CLC1GLS3
extern volatile unsigned char           CLC1GLS3            __at(0xF17);
#ifndef _LIB_BUILD
asm("CLC1GLS3 equ 0F17h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G4D1N               :1;
        unsigned LC1G4D1T               :1;
        unsigned LC1G4D2N               :1;
        unsigned LC1G4D2T               :1;
        unsigned LC1G4D3N               :1;
        unsigned LC1G4D3T               :1;
        unsigned LC1G4D4N               :1;
        unsigned LC1G4D4T               :1;
    };
    struct {
        unsigned G4D1N                  :1;
        unsigned G4D1T                  :1;
        unsigned G4D2N                  :1;
        unsigned G4D2T                  :1;
        unsigned G4D3N                  :1;
        unsigned G4D3T                  :1;
        unsigned G4D4N                  :1;
        unsigned G4D4T                  :1;
    };
} CLC1GLS3bits_t;
extern volatile CLC1GLS3bits_t CLC1GLS3bits __at(0xF17);
// bitfield macros
#define _CLC1GLS3_LC1G4D1N_POSN                             0x0
#define _CLC1GLS3_LC1G4D1N_POSITION                         0x0
#define _CLC1GLS3_LC1G4D1N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D1N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D1N_MASK                             0x1
#define _CLC1GLS3_LC1G4D1T_POSN                             0x1
#define _CLC1GLS3_LC1G4D1T_POSITION                         0x1
#define _CLC1GLS3_LC1G4D1T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D1T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D1T_MASK                             0x2
#define _CLC1GLS3_LC1G4D2N_POSN                             0x2
#define _CLC1GLS3_LC1G4D2N_POSITION                         0x2
#define _CLC1GLS3_LC1G4D2N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D2N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D2N_MASK                             0x4
#define _CLC1GLS3_LC1G4D2T_POSN                             0x3
#define _CLC1GLS3_LC1G4D2T_POSITION                         0x3
#define _CLC1GLS3_LC1G4D2T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D2T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D2T_MASK                             0x8
#define _CLC1GLS3_LC1G4D3N_POSN                             0x4
#define _CLC1GLS3_LC1G4D3N_POSITION                         0x4
#define _CLC1GLS3_LC1G4D3N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D3N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D3N_MASK                             0x10
#define _CLC1GLS3_LC1G4D3T_POSN                             0x5
#define _CLC1GLS3_LC1G4D3T_POSITION                         0x5
#define _CLC1GLS3_LC1G4D3T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D3T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D3T_MASK                             0x20
#define _CLC1GLS3_LC1G4D4N_POSN                             0x6
#define _CLC1GLS3_LC1G4D4N_POSITION                         0x6
#define _CLC1GLS3_LC1G4D4N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D4N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D4N_MASK                             0x40
#define _CLC1GLS3_LC1G4D4T_POSN                             0x7
#define _CLC1GLS3_LC1G4D4T_POSITION                         0x7
#define _CLC1GLS3_LC1G4D4T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D4T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D4T_MASK                             0x80
#define _CLC1GLS3_G4D1N_POSN                                0x0
#define _CLC1GLS3_G4D1N_POSITION                            0x0
#define _CLC1GLS3_G4D1N_SIZE                                0x1
#define _CLC1GLS3_G4D1N_LENGTH                              0x1
#define _CLC1GLS3_G4D1N_MASK                                0x1
#define _CLC1GLS3_G4D1T_POSN                                0x1
#define _CLC1GLS3_G4D1T_POSITION                            0x1
#define _CLC1GLS3_G4D1T_SIZE                                0x1
#define _CLC1GLS3_G4D1T_LENGTH                              0x1
#define _CLC1GLS3_G4D1T_MASK                                0x2
#define _CLC1GLS3_G4D2N_POSN                                0x2
#define _CLC1GLS3_G4D2N_POSITION                            0x2
#define _CLC1GLS3_G4D2N_SIZE                                0x1
#define _CLC1GLS3_G4D2N_LENGTH                              0x1
#define _CLC1GLS3_G4D2N_MASK                                0x4
#define _CLC1GLS3_G4D2T_POSN                                0x3
#define _CLC1GLS3_G4D2T_POSITION                            0x3
#define _CLC1GLS3_G4D2T_SIZE                                0x1
#define _CLC1GLS3_G4D2T_LENGTH                              0x1
#define _CLC1GLS3_G4D2T_MASK                                0x8
#define _CLC1GLS3_G4D3N_POSN                                0x4
#define _CLC1GLS3_G4D3N_POSITION                            0x4
#define _CLC1GLS3_G4D3N_SIZE                                0x1
#define _CLC1GLS3_G4D3N_LENGTH                              0x1
#define _CLC1GLS3_G4D3N_MASK                                0x10
#define _CLC1GLS3_G4D3T_POSN                                0x5
#define _CLC1GLS3_G4D3T_POSITION                            0x5
#define _CLC1GLS3_G4D3T_SIZE                                0x1
#define _CLC1GLS3_G4D3T_LENGTH                              0x1
#define _CLC1GLS3_G4D3T_MASK                                0x20
#define _CLC1GLS3_G4D4N_POSN                                0x6
#define _CLC1GLS3_G4D4N_POSITION                            0x6
#define _CLC1GLS3_G4D4N_SIZE                                0x1
#define _CLC1GLS3_G4D4N_LENGTH                              0x1
#define _CLC1GLS3_G4D4N_MASK                                0x40
#define _CLC1GLS3_G4D4T_POSN                                0x7
#define _CLC1GLS3_G4D4T_POSITION                            0x7
#define _CLC1GLS3_G4D4T_SIZE                                0x1
#define _CLC1GLS3_G4D4T_LENGTH                              0x1
#define _CLC1GLS3_G4D4T_MASK                                0x80

// Register: CLC2CON
#define CLC2CON CLC2CON
extern volatile unsigned char           CLC2CON             __at(0xF18);
#ifndef _LIB_BUILD
asm("CLC2CON equ 0F18h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2MODE0               :1;
        unsigned LC2MODE1               :1;
        unsigned LC2MODE2               :1;
        unsigned LC2INTN                :1;
        unsigned LC2INTP                :1;
        unsigned LC2OUT                 :1;
        unsigned LC2OE                  :1;
        unsigned LC2EN                  :1;
    };
    struct {
        unsigned LCMODE0                :1;
        unsigned LCMODE1                :1;
        unsigned LCMODE2                :1;
        unsigned LCINTN                 :1;
        unsigned LCINTP                 :1;
        unsigned LCOUT                  :1;
        unsigned LCOE                   :1;
        unsigned LCEN                   :1;
    };
    struct {
        unsigned LC2MODE                :3;
    };
} CLC2CONbits_t;
extern volatile CLC2CONbits_t CLC2CONbits __at(0xF18);
// bitfield macros
#define _CLC2CON_LC2MODE0_POSN                              0x0
#define _CLC2CON_LC2MODE0_POSITION                          0x0
#define _CLC2CON_LC2MODE0_SIZE                              0x1
#define _CLC2CON_LC2MODE0_LENGTH                            0x1
#define _CLC2CON_LC2MODE0_MASK                              0x1
#define _CLC2CON_LC2MODE1_POSN                              0x1
#define _CLC2CON_LC2MODE1_POSITION                          0x1
#define _CLC2CON_LC2MODE1_SIZE                              0x1
#define _CLC2CON_LC2MODE1_LENGTH                            0x1
#define _CLC2CON_LC2MODE1_MASK                              0x2
#define _CLC2CON_LC2MODE2_POSN                              0x2
#define _CLC2CON_LC2MODE2_POSITION                          0x2
#define _CLC2CON_LC2MODE2_SIZE                              0x1
#define _CLC2CON_LC2MODE2_LENGTH                            0x1
#define _CLC2CON_LC2MODE2_MASK                              0x4
#define _CLC2CON_LC2INTN_POSN                               0x3
#define _CLC2CON_LC2INTN_POSITION                           0x3
#define _CLC2CON_LC2INTN_SIZE                               0x1
#define _CLC2CON_LC2INTN_LENGTH                             0x1
#define _CLC2CON_LC2INTN_MASK                               0x8
#define _CLC2CON_LC2INTP_POSN                               0x4
#define _CLC2CON_LC2INTP_POSITION                           0x4
#define _CLC2CON_LC2INTP_SIZE                               0x1
#define _CLC2CON_LC2INTP_LENGTH                             0x1
#define _CLC2CON_LC2INTP_MASK                               0x10
#define _CLC2CON_LC2OUT_POSN                                0x5
#define _CLC2CON_LC2OUT_POSITION                            0x5
#define _CLC2CON_LC2OUT_SIZE                                0x1
#define _CLC2CON_LC2OUT_LENGTH                              0x1
#define _CLC2CON_LC2OUT_MASK                                0x20
#define _CLC2CON_LC2OE_POSN                                 0x6
#define _CLC2CON_LC2OE_POSITION                             0x6
#define _CLC2CON_LC2OE_SIZE                                 0x1
#define _CLC2CON_LC2OE_LENGTH                               0x1
#define _CLC2CON_LC2OE_MASK                                 0x40
#define _CLC2CON_LC2EN_POSN                                 0x7
#define _CLC2CON_LC2EN_POSITION                             0x7
#define _CLC2CON_LC2EN_SIZE                                 0x1
#define _CLC2CON_LC2EN_LENGTH                               0x1
#define _CLC2CON_LC2EN_MASK                                 0x80
#define _CLC2CON_LCMODE0_POSN                               0x0
#define _CLC2CON_LCMODE0_POSITION                           0x0
#define _CLC2CON_LCMODE0_SIZE                               0x1
#define _CLC2CON_LCMODE0_LENGTH                             0x1
#define _CLC2CON_LCMODE0_MASK                               0x1
#define _CLC2CON_LCMODE1_POSN                               0x1
#define _CLC2CON_LCMODE1_POSITION                           0x1
#define _CLC2CON_LCMODE1_SIZE                               0x1
#define _CLC2CON_LCMODE1_LENGTH                             0x1
#define _CLC2CON_LCMODE1_MASK                               0x2
#define _CLC2CON_LCMODE2_POSN                               0x2
#define _CLC2CON_LCMODE2_POSITION                           0x2
#define _CLC2CON_LCMODE2_SIZE                               0x1
#define _CLC2CON_LCMODE2_LENGTH                             0x1
#define _CLC2CON_LCMODE2_MASK                               0x4
#define _CLC2CON_LCINTN_POSN                                0x3
#define _CLC2CON_LCINTN_POSITION                            0x3
#define _CLC2CON_LCINTN_SIZE                                0x1
#define _CLC2CON_LCINTN_LENGTH                              0x1
#define _CLC2CON_LCINTN_MASK                                0x8
#define _CLC2CON_LCINTP_POSN                                0x4
#define _CLC2CON_LCINTP_POSITION                            0x4
#define _CLC2CON_LCINTP_SIZE                                0x1
#define _CLC2CON_LCINTP_LENGTH                              0x1
#define _CLC2CON_LCINTP_MASK                                0x10
#define _CLC2CON_LCOUT_POSN                                 0x5
#define _CLC2CON_LCOUT_POSITION                             0x5
#define _CLC2CON_LCOUT_SIZE                                 0x1
#define _CLC2CON_LCOUT_LENGTH                               0x1
#define _CLC2CON_LCOUT_MASK                                 0x20
#define _CLC2CON_LCOE_POSN                                  0x6
#define _CLC2CON_LCOE_POSITION                              0x6
#define _CLC2CON_LCOE_SIZE                                  0x1
#define _CLC2CON_LCOE_LENGTH                                0x1
#define _CLC2CON_LCOE_MASK                                  0x40
#define _CLC2CON_LCEN_POSN                                  0x7
#define _CLC2CON_LCEN_POSITION                              0x7
#define _CLC2CON_LCEN_SIZE                                  0x1
#define _CLC2CON_LCEN_LENGTH                                0x1
#define _CLC2CON_LCEN_MASK                                  0x80
#define _CLC2CON_LC2MODE_POSN                               0x0
#define _CLC2CON_LC2MODE_POSITION                           0x0
#define _CLC2CON_LC2MODE_SIZE                               0x3
#define _CLC2CON_LC2MODE_LENGTH                             0x3
#define _CLC2CON_LC2MODE_MASK                               0x7

// Register: CLC2POL
#define CLC2POL CLC2POL
extern volatile unsigned char           CLC2POL             __at(0xF19);
#ifndef _LIB_BUILD
asm("CLC2POL equ 0F19h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G1POL               :1;
        unsigned LC2G2POL               :1;
        unsigned LC2G3POL               :1;
        unsigned LC2G4POL               :1;
        unsigned                        :3;
        unsigned LC2POL                 :1;
    };
    struct {
        unsigned G1POL                  :1;
        unsigned G2POL                  :1;
        unsigned G3POL                  :1;
        unsigned G4POL                  :1;
        unsigned                        :3;
        unsigned POL                    :1;
    };
} CLC2POLbits_t;
extern volatile CLC2POLbits_t CLC2POLbits __at(0xF19);
// bitfield macros
#define _CLC2POL_LC2G1POL_POSN                              0x0
#define _CLC2POL_LC2G1POL_POSITION                          0x0
#define _CLC2POL_LC2G1POL_SIZE                              0x1
#define _CLC2POL_LC2G1POL_LENGTH                            0x1
#define _CLC2POL_LC2G1POL_MASK                              0x1
#define _CLC2POL_LC2G2POL_POSN                              0x1
#define _CLC2POL_LC2G2POL_POSITION                          0x1
#define _CLC2POL_LC2G2POL_SIZE                              0x1
#define _CLC2POL_LC2G2POL_LENGTH                            0x1
#define _CLC2POL_LC2G2POL_MASK                              0x2
#define _CLC2POL_LC2G3POL_POSN                              0x2
#define _CLC2POL_LC2G3POL_POSITION                          0x2
#define _CLC2POL_LC2G3POL_SIZE                              0x1
#define _CLC2POL_LC2G3POL_LENGTH                            0x1
#define _CLC2POL_LC2G3POL_MASK                              0x4
#define _CLC2POL_LC2G4POL_POSN                              0x3
#define _CLC2POL_LC2G4POL_POSITION                          0x3
#define _CLC2POL_LC2G4POL_SIZE                              0x1
#define _CLC2POL_LC2G4POL_LENGTH                            0x1
#define _CLC2POL_LC2G4POL_MASK                              0x8
#define _CLC2POL_LC2POL_POSN                                0x7
#define _CLC2POL_LC2POL_POSITION                            0x7
#define _CLC2POL_LC2POL_SIZE                                0x1
#define _CLC2POL_LC2POL_LENGTH                              0x1
#define _CLC2POL_LC2POL_MASK                                0x80
#define _CLC2POL_G1POL_POSN                                 0x0
#define _CLC2POL_G1POL_POSITION                             0x0
#define _CLC2POL_G1POL_SIZE                                 0x1
#define _CLC2POL_G1POL_LENGTH                               0x1
#define _CLC2POL_G1POL_MASK                                 0x1
#define _CLC2POL_G2POL_POSN                                 0x1
#define _CLC2POL_G2POL_POSITION                             0x1
#define _CLC2POL_G2POL_SIZE                                 0x1
#define _CLC2POL_G2POL_LENGTH                               0x1
#define _CLC2POL_G2POL_MASK                                 0x2
#define _CLC2POL_G3POL_POSN                                 0x2
#define _CLC2POL_G3POL_POSITION                             0x2
#define _CLC2POL_G3POL_SIZE                                 0x1
#define _CLC2POL_G3POL_LENGTH                               0x1
#define _CLC2POL_G3POL_MASK                                 0x4
#define _CLC2POL_G4POL_POSN                                 0x3
#define _CLC2POL_G4POL_POSITION                             0x3
#define _CLC2POL_G4POL_SIZE                                 0x1
#define _CLC2POL_G4POL_LENGTH                               0x1
#define _CLC2POL_G4POL_MASK                                 0x8
#define _CLC2POL_POL_POSN                                   0x7
#define _CLC2POL_POL_POSITION                               0x7
#define _CLC2POL_POL_SIZE                                   0x1
#define _CLC2POL_POL_LENGTH                                 0x1
#define _CLC2POL_POL_MASK                                   0x80

// Register: CLC2SEL0
#define CLC2SEL0 CLC2SEL0
extern volatile unsigned char           CLC2SEL0            __at(0xF1A);
#ifndef _LIB_BUILD
asm("CLC2SEL0 equ 0F1Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2D1S0                :1;
        unsigned LC2D1S1                :1;
        unsigned LC2D1S2                :1;
        unsigned                        :1;
        unsigned LC2D2S0                :1;
        unsigned LC2D2S1                :1;
        unsigned LC2D2S2                :1;
    };
    struct {
        unsigned D1S0                   :1;
        unsigned D1S1                   :1;
        unsigned D1S2                   :1;
        unsigned                        :1;
        unsigned D2S0                   :1;
        unsigned D2S1                   :1;
        unsigned D2S2                   :1;
    };
    struct {
        unsigned LC2D1S                 :3;
        unsigned                        :1;
        unsigned LC2D2S                 :3;
    };
} CLC2SEL0bits_t;
extern volatile CLC2SEL0bits_t CLC2SEL0bits __at(0xF1A);
// bitfield macros
#define _CLC2SEL0_LC2D1S0_POSN                              0x0
#define _CLC2SEL0_LC2D1S0_POSITION                          0x0
#define _CLC2SEL0_LC2D1S0_SIZE                              0x1
#define _CLC2SEL0_LC2D1S0_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S0_MASK                              0x1
#define _CLC2SEL0_LC2D1S1_POSN                              0x1
#define _CLC2SEL0_LC2D1S1_POSITION                          0x1
#define _CLC2SEL0_LC2D1S1_SIZE                              0x1
#define _CLC2SEL0_LC2D1S1_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S1_MASK                              0x2
#define _CLC2SEL0_LC2D1S2_POSN                              0x2
#define _CLC2SEL0_LC2D1S2_POSITION                          0x2
#define _CLC2SEL0_LC2D1S2_SIZE                              0x1
#define _CLC2SEL0_LC2D1S2_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S2_MASK                              0x4
#define _CLC2SEL0_LC2D2S0_POSN                              0x4
#define _CLC2SEL0_LC2D2S0_POSITION                          0x4
#define _CLC2SEL0_LC2D2S0_SIZE                              0x1
#define _CLC2SEL0_LC2D2S0_LENGTH                            0x1
#define _CLC2SEL0_LC2D2S0_MASK                              0x10
#define _CLC2SEL0_LC2D2S1_POSN                              0x5
#define _CLC2SEL0_LC2D2S1_POSITION                          0x5
#define _CLC2SEL0_LC2D2S1_SIZE                              0x1
#define _CLC2SEL0_LC2D2S1_LENGTH                            0x1
#define _CLC2SEL0_LC2D2S1_MASK                              0x20
#define _CLC2SEL0_LC2D2S2_POSN                              0x6
#define _CLC2SEL0_LC2D2S2_POSITION                          0x6
#define _CLC2SEL0_LC2D2S2_SIZE                              0x1
#define _CLC2SEL0_LC2D2S2_LENGTH                            0x1
#define _CLC2SEL0_LC2D2S2_MASK                              0x40
#define _CLC2SEL0_D1S0_POSN                                 0x0
#define _CLC2SEL0_D1S0_POSITION                             0x0
#define _CLC2SEL0_D1S0_SIZE                                 0x1
#define _CLC2SEL0_D1S0_LENGTH                               0x1
#define _CLC2SEL0_D1S0_MASK                                 0x1
#define _CLC2SEL0_D1S1_POSN                                 0x1
#define _CLC2SEL0_D1S1_POSITION                             0x1
#define _CLC2SEL0_D1S1_SIZE                                 0x1
#define _CLC2SEL0_D1S1_LENGTH                               0x1
#define _CLC2SEL0_D1S1_MASK                                 0x2
#define _CLC2SEL0_D1S2_POSN                                 0x2
#define _CLC2SEL0_D1S2_POSITION                             0x2
#define _CLC2SEL0_D1S2_SIZE                                 0x1
#define _CLC2SEL0_D1S2_LENGTH                               0x1
#define _CLC2SEL0_D1S2_MASK                                 0x4
#define _CLC2SEL0_D2S0_POSN                                 0x4
#define _CLC2SEL0_D2S0_POSITION                             0x4
#define _CLC2SEL0_D2S0_SIZE                                 0x1
#define _CLC2SEL0_D2S0_LENGTH                               0x1
#define _CLC2SEL0_D2S0_MASK                                 0x10
#define _CLC2SEL0_D2S1_POSN                                 0x5
#define _CLC2SEL0_D2S1_POSITION                             0x5
#define _CLC2SEL0_D2S1_SIZE                                 0x1
#define _CLC2SEL0_D2S1_LENGTH                               0x1
#define _CLC2SEL0_D2S1_MASK                                 0x20
#define _CLC2SEL0_D2S2_POSN                                 0x6
#define _CLC2SEL0_D2S2_POSITION                             0x6
#define _CLC2SEL0_D2S2_SIZE                                 0x1
#define _CLC2SEL0_D2S2_LENGTH                               0x1
#define _CLC2SEL0_D2S2_MASK                                 0x40
#define _CLC2SEL0_LC2D1S_POSN                               0x0
#define _CLC2SEL0_LC2D1S_POSITION                           0x0
#define _CLC2SEL0_LC2D1S_SIZE                               0x3
#define _CLC2SEL0_LC2D1S_LENGTH                             0x3
#define _CLC2SEL0_LC2D1S_MASK                               0x7
#define _CLC2SEL0_LC2D2S_POSN                               0x4
#define _CLC2SEL0_LC2D2S_POSITION                           0x4
#define _CLC2SEL0_LC2D2S_SIZE                               0x3
#define _CLC2SEL0_LC2D2S_LENGTH                             0x3
#define _CLC2SEL0_LC2D2S_MASK                               0x70

// Register: CLC2SEL1
#define CLC2SEL1 CLC2SEL1
extern volatile unsigned char           CLC2SEL1            __at(0xF1B);
#ifndef _LIB_BUILD
asm("CLC2SEL1 equ 0F1Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2D3S0                :1;
        unsigned LC2D3S1                :1;
        unsigned LC2D3S2                :1;
        unsigned                        :1;
        unsigned LC2D4S0                :1;
        unsigned LC2D4S1                :1;
        unsigned LC2D4S2                :1;
    };
    struct {
        unsigned D3S0                   :1;
        unsigned D3S1                   :1;
        unsigned D3S2                   :1;
        unsigned                        :1;
        unsigned D4S0                   :1;
        unsigned D4S1                   :1;
        unsigned D4S2                   :1;
    };
    struct {
        unsigned LC2D3S                 :3;
        unsigned                        :1;
        unsigned LC2D4S                 :3;
    };
} CLC2SEL1bits_t;
extern volatile CLC2SEL1bits_t CLC2SEL1bits __at(0xF1B);
// bitfield macros
#define _CLC2SEL1_LC2D3S0_POSN                              0x0
#define _CLC2SEL1_LC2D3S0_POSITION                          0x0
#define _CLC2SEL1_LC2D3S0_SIZE                              0x1
#define _CLC2SEL1_LC2D3S0_LENGTH                            0x1
#define _CLC2SEL1_LC2D3S0_MASK                              0x1
#define _CLC2SEL1_LC2D3S1_POSN                              0x1
#define _CLC2SEL1_LC2D3S1_POSITION                          0x1
#define _CLC2SEL1_LC2D3S1_SIZE                              0x1
#define _CLC2SEL1_LC2D3S1_LENGTH                            0x1
#define _CLC2SEL1_LC2D3S1_MASK                              0x2
#define _CLC2SEL1_LC2D3S2_POSN                              0x2
#define _CLC2SEL1_LC2D3S2_POSITION                          0x2
#define _CLC2SEL1_LC2D3S2_SIZE                              0x1
#define _CLC2SEL1_LC2D3S2_LENGTH                            0x1
#define _CLC2SEL1_LC2D3S2_MASK                              0x4
#define _CLC2SEL1_LC2D4S0_POSN                              0x4
#define _CLC2SEL1_LC2D4S0_POSITION                          0x4
#define _CLC2SEL1_LC2D4S0_SIZE                              0x1
#define _CLC2SEL1_LC2D4S0_LENGTH                            0x1
#define _CLC2SEL1_LC2D4S0_MASK                              0x10
#define _CLC2SEL1_LC2D4S1_POSN                              0x5
#define _CLC2SEL1_LC2D4S1_POSITION                          0x5
#define _CLC2SEL1_LC2D4S1_SIZE                              0x1
#define _CLC2SEL1_LC2D4S1_LENGTH                            0x1
#define _CLC2SEL1_LC2D4S1_MASK                              0x20
#define _CLC2SEL1_LC2D4S2_POSN                              0x6
#define _CLC2SEL1_LC2D4S2_POSITION                          0x6
#define _CLC2SEL1_LC2D4S2_SIZE                              0x1
#define _CLC2SEL1_LC2D4S2_LENGTH                            0x1
#define _CLC2SEL1_LC2D4S2_MASK                              0x40
#define _CLC2SEL1_D3S0_POSN                                 0x0
#define _CLC2SEL1_D3S0_POSITION                             0x0
#define _CLC2SEL1_D3S0_SIZE                                 0x1
#define _CLC2SEL1_D3S0_LENGTH                               0x1
#define _CLC2SEL1_D3S0_MASK                                 0x1
#define _CLC2SEL1_D3S1_POSN                                 0x1
#define _CLC2SEL1_D3S1_POSITION                             0x1
#define _CLC2SEL1_D3S1_SIZE                                 0x1
#define _CLC2SEL1_D3S1_LENGTH                               0x1
#define _CLC2SEL1_D3S1_MASK                                 0x2
#define _CLC2SEL1_D3S2_POSN                                 0x2
#define _CLC2SEL1_D3S2_POSITION                             0x2
#define _CLC2SEL1_D3S2_SIZE                                 0x1
#define _CLC2SEL1_D3S2_LENGTH                               0x1
#define _CLC2SEL1_D3S2_MASK                                 0x4
#define _CLC2SEL1_D4S0_POSN                                 0x4
#define _CLC2SEL1_D4S0_POSITION                             0x4
#define _CLC2SEL1_D4S0_SIZE                                 0x1
#define _CLC2SEL1_D4S0_LENGTH                               0x1
#define _CLC2SEL1_D4S0_MASK                                 0x10
#define _CLC2SEL1_D4S1_POSN                                 0x5
#define _CLC2SEL1_D4S1_POSITION                             0x5
#define _CLC2SEL1_D4S1_SIZE                                 0x1
#define _CLC2SEL1_D4S1_LENGTH                               0x1
#define _CLC2SEL1_D4S1_MASK                                 0x20
#define _CLC2SEL1_D4S2_POSN                                 0x6
#define _CLC2SEL1_D4S2_POSITION                             0x6
#define _CLC2SEL1_D4S2_SIZE                                 0x1
#define _CLC2SEL1_D4S2_LENGTH                               0x1
#define _CLC2SEL1_D4S2_MASK                                 0x40
#define _CLC2SEL1_LC2D3S_POSN                               0x0
#define _CLC2SEL1_LC2D3S_POSITION                           0x0
#define _CLC2SEL1_LC2D3S_SIZE                               0x3
#define _CLC2SEL1_LC2D3S_LENGTH                             0x3
#define _CLC2SEL1_LC2D3S_MASK                               0x7
#define _CLC2SEL1_LC2D4S_POSN                               0x4
#define _CLC2SEL1_LC2D4S_POSITION                           0x4
#define _CLC2SEL1_LC2D4S_SIZE                               0x3
#define _CLC2SEL1_LC2D4S_LENGTH                             0x3
#define _CLC2SEL1_LC2D4S_MASK                               0x70

// Register: CLC2GLS0
#define CLC2GLS0 CLC2GLS0
extern volatile unsigned char           CLC2GLS0            __at(0xF1C);
#ifndef _LIB_BUILD
asm("CLC2GLS0 equ 0F1Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G1D1N               :1;
        unsigned LC2G1D1T               :1;
        unsigned LC2G1D2N               :1;
        unsigned LC2G1D2T               :1;
        unsigned LC2G1D3N               :1;
        unsigned LC2G1D3T               :1;
        unsigned LC2G1D4N               :1;
        unsigned LC2G1D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC2GLS0bits_t;
extern volatile CLC2GLS0bits_t CLC2GLS0bits __at(0xF1C);
// bitfield macros
#define _CLC2GLS0_LC2G1D1N_POSN                             0x0
#define _CLC2GLS0_LC2G1D1N_POSITION                         0x0
#define _CLC2GLS0_LC2G1D1N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D1N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D1N_MASK                             0x1
#define _CLC2GLS0_LC2G1D1T_POSN                             0x1
#define _CLC2GLS0_LC2G1D1T_POSITION                         0x1
#define _CLC2GLS0_LC2G1D1T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D1T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D1T_MASK                             0x2
#define _CLC2GLS0_LC2G1D2N_POSN                             0x2
#define _CLC2GLS0_LC2G1D2N_POSITION                         0x2
#define _CLC2GLS0_LC2G1D2N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D2N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D2N_MASK                             0x4
#define _CLC2GLS0_LC2G1D2T_POSN                             0x3
#define _CLC2GLS0_LC2G1D2T_POSITION                         0x3
#define _CLC2GLS0_LC2G1D2T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D2T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D2T_MASK                             0x8
#define _CLC2GLS0_LC2G1D3N_POSN                             0x4
#define _CLC2GLS0_LC2G1D3N_POSITION                         0x4
#define _CLC2GLS0_LC2G1D3N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D3N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D3N_MASK                             0x10
#define _CLC2GLS0_LC2G1D3T_POSN                             0x5
#define _CLC2GLS0_LC2G1D3T_POSITION                         0x5
#define _CLC2GLS0_LC2G1D3T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D3T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D3T_MASK                             0x20
#define _CLC2GLS0_LC2G1D4N_POSN                             0x6
#define _CLC2GLS0_LC2G1D4N_POSITION                         0x6
#define _CLC2GLS0_LC2G1D4N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D4N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D4N_MASK                             0x40
#define _CLC2GLS0_LC2G1D4T_POSN                             0x7
#define _CLC2GLS0_LC2G1D4T_POSITION                         0x7
#define _CLC2GLS0_LC2G1D4T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D4T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D4T_MASK                             0x80
#define _CLC2GLS0_D1N_POSN                                  0x0
#define _CLC2GLS0_D1N_POSITION                              0x0
#define _CLC2GLS0_D1N_SIZE                                  0x1
#define _CLC2GLS0_D1N_LENGTH                                0x1
#define _CLC2GLS0_D1N_MASK                                  0x1
#define _CLC2GLS0_D1T_POSN                                  0x1
#define _CLC2GLS0_D1T_POSITION                              0x1
#define _CLC2GLS0_D1T_SIZE                                  0x1
#define _CLC2GLS0_D1T_LENGTH                                0x1
#define _CLC2GLS0_D1T_MASK                                  0x2
#define _CLC2GLS0_D2N_POSN                                  0x2
#define _CLC2GLS0_D2N_POSITION                              0x2
#define _CLC2GLS0_D2N_SIZE                                  0x1
#define _CLC2GLS0_D2N_LENGTH                                0x1
#define _CLC2GLS0_D2N_MASK                                  0x4
#define _CLC2GLS0_D2T_POSN                                  0x3
#define _CLC2GLS0_D2T_POSITION                              0x3
#define _CLC2GLS0_D2T_SIZE                                  0x1
#define _CLC2GLS0_D2T_LENGTH                                0x1
#define _CLC2GLS0_D2T_MASK                                  0x8
#define _CLC2GLS0_D3N_POSN                                  0x4
#define _CLC2GLS0_D3N_POSITION                              0x4
#define _CLC2GLS0_D3N_SIZE                                  0x1
#define _CLC2GLS0_D3N_LENGTH                                0x1
#define _CLC2GLS0_D3N_MASK                                  0x10
#define _CLC2GLS0_D3T_POSN                                  0x5
#define _CLC2GLS0_D3T_POSITION                              0x5
#define _CLC2GLS0_D3T_SIZE                                  0x1
#define _CLC2GLS0_D3T_LENGTH                                0x1
#define _CLC2GLS0_D3T_MASK                                  0x20
#define _CLC2GLS0_D4N_POSN                                  0x6
#define _CLC2GLS0_D4N_POSITION                              0x6
#define _CLC2GLS0_D4N_SIZE                                  0x1
#define _CLC2GLS0_D4N_LENGTH                                0x1
#define _CLC2GLS0_D4N_MASK                                  0x40
#define _CLC2GLS0_D4T_POSN                                  0x7
#define _CLC2GLS0_D4T_POSITION                              0x7
#define _CLC2GLS0_D4T_SIZE                                  0x1
#define _CLC2GLS0_D4T_LENGTH                                0x1
#define _CLC2GLS0_D4T_MASK                                  0x80

// Register: CLC2GLS1
#define CLC2GLS1 CLC2GLS1
extern volatile unsigned char           CLC2GLS1            __at(0xF1D);
#ifndef _LIB_BUILD
asm("CLC2GLS1 equ 0F1Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G2D1N               :1;
        unsigned LC2G2D1T               :1;
        unsigned LC2G2D2N               :1;
        unsigned LC2G2D2T               :1;
        unsigned LC2G2D3N               :1;
        unsigned LC2G2D3T               :1;
        unsigned LC2G2D4N               :1;
        unsigned LC2G2D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC2GLS1bits_t;
extern volatile CLC2GLS1bits_t CLC2GLS1bits __at(0xF1D);
// bitfield macros
#define _CLC2GLS1_LC2G2D1N_POSN                             0x0
#define _CLC2GLS1_LC2G2D1N_POSITION                         0x0
#define _CLC2GLS1_LC2G2D1N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D1N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D1N_MASK                             0x1
#define _CLC2GLS1_LC2G2D1T_POSN                             0x1
#define _CLC2GLS1_LC2G2D1T_POSITION                         0x1
#define _CLC2GLS1_LC2G2D1T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D1T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D1T_MASK                             0x2
#define _CLC2GLS1_LC2G2D2N_POSN                             0x2
#define _CLC2GLS1_LC2G2D2N_POSITION                         0x2
#define _CLC2GLS1_LC2G2D2N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D2N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D2N_MASK                             0x4
#define _CLC2GLS1_LC2G2D2T_POSN                             0x3
#define _CLC2GLS1_LC2G2D2T_POSITION                         0x3
#define _CLC2GLS1_LC2G2D2T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D2T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D2T_MASK                             0x8
#define _CLC2GLS1_LC2G2D3N_POSN                             0x4
#define _CLC2GLS1_LC2G2D3N_POSITION                         0x4
#define _CLC2GLS1_LC2G2D3N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D3N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D3N_MASK                             0x10
#define _CLC2GLS1_LC2G2D3T_POSN                             0x5
#define _CLC2GLS1_LC2G2D3T_POSITION                         0x5
#define _CLC2GLS1_LC2G2D3T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D3T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D3T_MASK                             0x20
#define _CLC2GLS1_LC2G2D4N_POSN                             0x6
#define _CLC2GLS1_LC2G2D4N_POSITION                         0x6
#define _CLC2GLS1_LC2G2D4N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D4N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D4N_MASK                             0x40
#define _CLC2GLS1_LC2G2D4T_POSN                             0x7
#define _CLC2GLS1_LC2G2D4T_POSITION                         0x7
#define _CLC2GLS1_LC2G2D4T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D4T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D4T_MASK                             0x80
#define _CLC2GLS1_D1N_POSN                                  0x0
#define _CLC2GLS1_D1N_POSITION                              0x0
#define _CLC2GLS1_D1N_SIZE                                  0x1
#define _CLC2GLS1_D1N_LENGTH                                0x1
#define _CLC2GLS1_D1N_MASK                                  0x1
#define _CLC2GLS1_D1T_POSN                                  0x1
#define _CLC2GLS1_D1T_POSITION                              0x1
#define _CLC2GLS1_D1T_SIZE                                  0x1
#define _CLC2GLS1_D1T_LENGTH                                0x1
#define _CLC2GLS1_D1T_MASK                                  0x2
#define _CLC2GLS1_D2N_POSN                                  0x2
#define _CLC2GLS1_D2N_POSITION                              0x2
#define _CLC2GLS1_D2N_SIZE                                  0x1
#define _CLC2GLS1_D2N_LENGTH                                0x1
#define _CLC2GLS1_D2N_MASK                                  0x4
#define _CLC2GLS1_D2T_POSN                                  0x3
#define _CLC2GLS1_D2T_POSITION                              0x3
#define _CLC2GLS1_D2T_SIZE                                  0x1
#define _CLC2GLS1_D2T_LENGTH                                0x1
#define _CLC2GLS1_D2T_MASK                                  0x8
#define _CLC2GLS1_D3N_POSN                                  0x4
#define _CLC2GLS1_D3N_POSITION                              0x4
#define _CLC2GLS1_D3N_SIZE                                  0x1
#define _CLC2GLS1_D3N_LENGTH                                0x1
#define _CLC2GLS1_D3N_MASK                                  0x10
#define _CLC2GLS1_D3T_POSN                                  0x5
#define _CLC2GLS1_D3T_POSITION                              0x5
#define _CLC2GLS1_D3T_SIZE                                  0x1
#define _CLC2GLS1_D3T_LENGTH                                0x1
#define _CLC2GLS1_D3T_MASK                                  0x20
#define _CLC2GLS1_D4N_POSN                                  0x6
#define _CLC2GLS1_D4N_POSITION                              0x6
#define _CLC2GLS1_D4N_SIZE                                  0x1
#define _CLC2GLS1_D4N_LENGTH                                0x1
#define _CLC2GLS1_D4N_MASK                                  0x40
#define _CLC2GLS1_D4T_POSN                                  0x7
#define _CLC2GLS1_D4T_POSITION                              0x7
#define _CLC2GLS1_D4T_SIZE                                  0x1
#define _CLC2GLS1_D4T_LENGTH                                0x1
#define _CLC2GLS1_D4T_MASK                                  0x80

// Register: CLC2GLS2
#define CLC2GLS2 CLC2GLS2
extern volatile unsigned char           CLC2GLS2            __at(0xF1E);
#ifndef _LIB_BUILD
asm("CLC2GLS2 equ 0F1Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G3D1N               :1;
        unsigned LC2G3D1T               :1;
        unsigned LC2G3D2N               :1;
        unsigned LC2G3D2T               :1;
        unsigned LC2G3D3N               :1;
        unsigned LC2G3D3T               :1;
        unsigned LC2G3D4N               :1;
        unsigned LC2G3D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC2GLS2bits_t;
extern volatile CLC2GLS2bits_t CLC2GLS2bits __at(0xF1E);
// bitfield macros
#define _CLC2GLS2_LC2G3D1N_POSN                             0x0
#define _CLC2GLS2_LC2G3D1N_POSITION                         0x0
#define _CLC2GLS2_LC2G3D1N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D1N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D1N_MASK                             0x1
#define _CLC2GLS2_LC2G3D1T_POSN                             0x1
#define _CLC2GLS2_LC2G3D1T_POSITION                         0x1
#define _CLC2GLS2_LC2G3D1T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D1T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D1T_MASK                             0x2
#define _CLC2GLS2_LC2G3D2N_POSN                             0x2
#define _CLC2GLS2_LC2G3D2N_POSITION                         0x2
#define _CLC2GLS2_LC2G3D2N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D2N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D2N_MASK                             0x4
#define _CLC2GLS2_LC2G3D2T_POSN                             0x3
#define _CLC2GLS2_LC2G3D2T_POSITION                         0x3
#define _CLC2GLS2_LC2G3D2T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D2T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D2T_MASK                             0x8
#define _CLC2GLS2_LC2G3D3N_POSN                             0x4
#define _CLC2GLS2_LC2G3D3N_POSITION                         0x4
#define _CLC2GLS2_LC2G3D3N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D3N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D3N_MASK                             0x10
#define _CLC2GLS2_LC2G3D3T_POSN                             0x5
#define _CLC2GLS2_LC2G3D3T_POSITION                         0x5
#define _CLC2GLS2_LC2G3D3T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D3T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D3T_MASK                             0x20
#define _CLC2GLS2_LC2G3D4N_POSN                             0x6
#define _CLC2GLS2_LC2G3D4N_POSITION                         0x6
#define _CLC2GLS2_LC2G3D4N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D4N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D4N_MASK                             0x40
#define _CLC2GLS2_LC2G3D4T_POSN                             0x7
#define _CLC2GLS2_LC2G3D4T_POSITION                         0x7
#define _CLC2GLS2_LC2G3D4T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D4T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D4T_MASK                             0x80
#define _CLC2GLS2_D1N_POSN                                  0x0
#define _CLC2GLS2_D1N_POSITION                              0x0
#define _CLC2GLS2_D1N_SIZE                                  0x1
#define _CLC2GLS2_D1N_LENGTH                                0x1
#define _CLC2GLS2_D1N_MASK                                  0x1
#define _CLC2GLS2_D1T_POSN                                  0x1
#define _CLC2GLS2_D1T_POSITION                              0x1
#define _CLC2GLS2_D1T_SIZE                                  0x1
#define _CLC2GLS2_D1T_LENGTH                                0x1
#define _CLC2GLS2_D1T_MASK                                  0x2
#define _CLC2GLS2_D2N_POSN                                  0x2
#define _CLC2GLS2_D2N_POSITION                              0x2
#define _CLC2GLS2_D2N_SIZE                                  0x1
#define _CLC2GLS2_D2N_LENGTH                                0x1
#define _CLC2GLS2_D2N_MASK                                  0x4
#define _CLC2GLS2_D2T_POSN                                  0x3
#define _CLC2GLS2_D2T_POSITION                              0x3
#define _CLC2GLS2_D2T_SIZE                                  0x1
#define _CLC2GLS2_D2T_LENGTH                                0x1
#define _CLC2GLS2_D2T_MASK                                  0x8
#define _CLC2GLS2_D3N_POSN                                  0x4
#define _CLC2GLS2_D3N_POSITION                              0x4
#define _CLC2GLS2_D3N_SIZE                                  0x1
#define _CLC2GLS2_D3N_LENGTH                                0x1
#define _CLC2GLS2_D3N_MASK                                  0x10
#define _CLC2GLS2_D3T_POSN                                  0x5
#define _CLC2GLS2_D3T_POSITION                              0x5
#define _CLC2GLS2_D3T_SIZE                                  0x1
#define _CLC2GLS2_D3T_LENGTH                                0x1
#define _CLC2GLS2_D3T_MASK                                  0x20
#define _CLC2GLS2_D4N_POSN                                  0x6
#define _CLC2GLS2_D4N_POSITION                              0x6
#define _CLC2GLS2_D4N_SIZE                                  0x1
#define _CLC2GLS2_D4N_LENGTH                                0x1
#define _CLC2GLS2_D4N_MASK                                  0x40
#define _CLC2GLS2_D4T_POSN                                  0x7
#define _CLC2GLS2_D4T_POSITION                              0x7
#define _CLC2GLS2_D4T_SIZE                                  0x1
#define _CLC2GLS2_D4T_LENGTH                                0x1
#define _CLC2GLS2_D4T_MASK                                  0x80

// Register: CLC2GLS3
#define CLC2GLS3 CLC2GLS3
extern volatile unsigned char           CLC2GLS3            __at(0xF1F);
#ifndef _LIB_BUILD
asm("CLC2GLS3 equ 0F1Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G4D1N               :1;
        unsigned LC2G4D1T               :1;
        unsigned LC2G4D2N               :1;
        unsigned LC2G4D2T               :1;
        unsigned LC2G4D3N               :1;
        unsigned LC2G4D3T               :1;
        unsigned LC2G4D4N               :1;
        unsigned LC2G4D4T               :1;
    };
    struct {
        unsigned G4D1N                  :1;
        unsigned G4D1T                  :1;
        unsigned G4D2N                  :1;
        unsigned G4D2T                  :1;
        unsigned G4D3N                  :1;
        unsigned G4D3T                  :1;
        unsigned G4D4N                  :1;
        unsigned G4D4T                  :1;
    };
} CLC2GLS3bits_t;
extern volatile CLC2GLS3bits_t CLC2GLS3bits __at(0xF1F);
// bitfield macros
#define _CLC2GLS3_LC2G4D1N_POSN                             0x0
#define _CLC2GLS3_LC2G4D1N_POSITION                         0x0
#define _CLC2GLS3_LC2G4D1N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D1N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D1N_MASK                             0x1
#define _CLC2GLS3_LC2G4D1T_POSN                             0x1
#define _CLC2GLS3_LC2G4D1T_POSITION                         0x1
#define _CLC2GLS3_LC2G4D1T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D1T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D1T_MASK                             0x2
#define _CLC2GLS3_LC2G4D2N_POSN                             0x2
#define _CLC2GLS3_LC2G4D2N_POSITION                         0x2
#define _CLC2GLS3_LC2G4D2N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D2N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D2N_MASK                             0x4
#define _CLC2GLS3_LC2G4D2T_POSN                             0x3
#define _CLC2GLS3_LC2G4D2T_POSITION                         0x3
#define _CLC2GLS3_LC2G4D2T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D2T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D2T_MASK                             0x8
#define _CLC2GLS3_LC2G4D3N_POSN                             0x4
#define _CLC2GLS3_LC2G4D3N_POSITION                         0x4
#define _CLC2GLS3_LC2G4D3N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D3N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D3N_MASK                             0x10
#define _CLC2GLS3_LC2G4D3T_POSN                             0x5
#define _CLC2GLS3_LC2G4D3T_POSITION                         0x5
#define _CLC2GLS3_LC2G4D3T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D3T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D3T_MASK                             0x20
#define _CLC2GLS3_LC2G4D4N_POSN                             0x6
#define _CLC2GLS3_LC2G4D4N_POSITION                         0x6
#define _CLC2GLS3_LC2G4D4N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D4N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D4N_MASK                             0x40
#define _CLC2GLS3_LC2G4D4T_POSN                             0x7
#define _CLC2GLS3_LC2G4D4T_POSITION                         0x7
#define _CLC2GLS3_LC2G4D4T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D4T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D4T_MASK                             0x80
#define _CLC2GLS3_G4D1N_POSN                                0x0
#define _CLC2GLS3_G4D1N_POSITION                            0x0
#define _CLC2GLS3_G4D1N_SIZE                                0x1
#define _CLC2GLS3_G4D1N_LENGTH                              0x1
#define _CLC2GLS3_G4D1N_MASK                                0x1
#define _CLC2GLS3_G4D1T_POSN                                0x1
#define _CLC2GLS3_G4D1T_POSITION                            0x1
#define _CLC2GLS3_G4D1T_SIZE                                0x1
#define _CLC2GLS3_G4D1T_LENGTH                              0x1
#define _CLC2GLS3_G4D1T_MASK                                0x2
#define _CLC2GLS3_G4D2N_POSN                                0x2
#define _CLC2GLS3_G4D2N_POSITION                            0x2
#define _CLC2GLS3_G4D2N_SIZE                                0x1
#define _CLC2GLS3_G4D2N_LENGTH                              0x1
#define _CLC2GLS3_G4D2N_MASK                                0x4
#define _CLC2GLS3_G4D2T_POSN                                0x3
#define _CLC2GLS3_G4D2T_POSITION                            0x3
#define _CLC2GLS3_G4D2T_SIZE                                0x1
#define _CLC2GLS3_G4D2T_LENGTH                              0x1
#define _CLC2GLS3_G4D2T_MASK                                0x8
#define _CLC2GLS3_G4D3N_POSN                                0x4
#define _CLC2GLS3_G4D3N_POSITION                            0x4
#define _CLC2GLS3_G4D3N_SIZE                                0x1
#define _CLC2GLS3_G4D3N_LENGTH                              0x1
#define _CLC2GLS3_G4D3N_MASK                                0x10
#define _CLC2GLS3_G4D3T_POSN                                0x5
#define _CLC2GLS3_G4D3T_POSITION                            0x5
#define _CLC2GLS3_G4D3T_SIZE                                0x1
#define _CLC2GLS3_G4D3T_LENGTH                              0x1
#define _CLC2GLS3_G4D3T_MASK                                0x20
#define _CLC2GLS3_G4D4N_POSN                                0x6
#define _CLC2GLS3_G4D4N_POSITION                            0x6
#define _CLC2GLS3_G4D4N_SIZE                                0x1
#define _CLC2GLS3_G4D4N_LENGTH                              0x1
#define _CLC2GLS3_G4D4N_MASK                                0x40
#define _CLC2GLS3_G4D4T_POSN                                0x7
#define _CLC2GLS3_G4D4T_POSITION                            0x7
#define _CLC2GLS3_G4D4T_SIZE                                0x1
#define _CLC2GLS3_G4D4T_LENGTH                              0x1
#define _CLC2GLS3_G4D4T_MASK                                0x80

// Register: BSR_ICDSHAD
#define BSR_ICDSHAD BSR_ICDSHAD
extern volatile unsigned char           BSR_ICDSHAD         __at(0xFE3);
#ifndef _LIB_BUILD
asm("BSR_ICDSHAD equ 0FE3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR_ICDSHAD            :5;
    };
} BSR_ICDSHADbits_t;
extern volatile BSR_ICDSHADbits_t BSR_ICDSHADbits __at(0xFE3);
// bitfield macros
#define _BSR_ICDSHAD_BSR_ICDSHAD_POSN                       0x0
#define _BSR_ICDSHAD_BSR_ICDSHAD_POSITION                   0x0
#define _BSR_ICDSHAD_BSR_ICDSHAD_SIZE                       0x5
#define _BSR_ICDSHAD_BSR_ICDSHAD_LENGTH                     0x5
#define _BSR_ICDSHAD_BSR_ICDSHAD_MASK                       0x1F

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
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC64);	// @ (0x18C * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELB<ANSB4>
extern volatile __bit                   ANSB4               __at(0xC6C);	// @ (0x18D * 8 + 4)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSELB,4)
// ANSELB<ANSB5>
extern volatile __bit                   ANSB5               __at(0xC6D);	// @ (0x18D * 8 + 5)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSELB,5)
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
// ANSELC<ANSC6>
extern volatile __bit                   ANSC6               __at(0xC76);	// @ (0x18E * 8 + 6)
#define                                 ANSC6_bit           _BIT_ACCESS(ANSELC,6)
// ANSELC<ANSC7>
extern volatile __bit                   ANSC7               __at(0xC77);	// @ (0x18E * 8 + 7)
#define                                 ANSC7_bit           _BIT_ACCESS(ANSELC,7)
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
// PIE3<CLC1IE>
extern volatile __bit                   CLC1IE              __at(0x498);	// @ (0x93 * 8 + 0)
#define                                 CLC1IE_bit          _BIT_ACCESS(PIE3,0)
// PIR3<CLC1IF>
extern volatile __bit                   CLC1IF              __at(0x98);	// @ (0x13 * 8 + 0)
#define                                 CLC1IF_bit          _BIT_ACCESS(PIR3,0)
// APFCON<CLC1SEL>
extern volatile __bit                   CLC1SEL             __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 CLC1SEL_bit         _BIT_ACCESS(APFCON,1)
// PIE3<CLC2IE>
extern volatile __bit                   CLC2IE              __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 CLC2IE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<CLC2IF>
extern volatile __bit                   CLC2IF              __at(0x99);	// @ (0x13 * 8 + 1)
#define                                 CLC2IF_bit          _BIT_ACCESS(PIR3,1)
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
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
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
// CWG1CON2<G1ARSEN>
extern volatile __bit                   G1ARSEN             __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 G1ARSEN_bit         _BIT_ACCESS(CWG1CON2,6)
// CWG1CON1<G1ASDLA0>
extern volatile __bit                   G1ASDLA0            __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 G1ASDLA0_bit        _BIT_ACCESS(CWG1CON1,4)
// CWG1CON1<G1ASDLA1>
extern volatile __bit                   G1ASDLA1            __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 G1ASDLA1_bit        _BIT_ACCESS(CWG1CON1,5)
// CWG1CON1<G1ASDLB0>
extern volatile __bit                   G1ASDLB0            __at(0x34A6);	// @ (0x694 * 8 + 6)
#define                                 G1ASDLB0_bit        _BIT_ACCESS(CWG1CON1,6)
// CWG1CON1<G1ASDLB1>
extern volatile __bit                   G1ASDLB1            __at(0x34A7);	// @ (0x694 * 8 + 7)
#define                                 G1ASDLB1_bit        _BIT_ACCESS(CWG1CON1,7)
// CWG1CON2<G1ASDSCLC2>
extern volatile __bit                   G1ASDSCLC2          __at(0x34A8);	// @ (0x695 * 8 + 0)
#define                                 G1ASDSCLC2_bit      _BIT_ACCESS(CWG1CON2,0)
// CWG1CON2<G1ASDSFLT>
extern volatile __bit                   G1ASDSFLT           __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 G1ASDSFLT_bit       _BIT_ACCESS(CWG1CON2,1)
// CWG1CON2<G1ASE>
extern volatile __bit                   G1ASE               __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 G1ASE_bit           _BIT_ACCESS(CWG1CON2,7)
// CWG1CON0<G1CS0>
extern volatile __bit                   G1CS0               __at(0x3498);	// @ (0x693 * 8 + 0)
#define                                 G1CS0_bit           _BIT_ACCESS(CWG1CON0,0)
// CWG1CON0<G1EN>
extern volatile __bit                   G1EN                __at(0x349F);	// @ (0x693 * 8 + 7)
#define                                 G1EN_bit            _BIT_ACCESS(CWG1CON0,7)
// CWG1CON1<G1IS0>
extern volatile __bit                   G1IS0               __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 G1IS0_bit           _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<G1IS1>
extern volatile __bit                   G1IS1               __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 G1IS1_bit           _BIT_ACCESS(CWG1CON1,1)
// CWG1CON1<G1IS2>
extern volatile __bit                   G1IS2               __at(0x34A2);	// @ (0x694 * 8 + 2)
#define                                 G1IS2_bit           _BIT_ACCESS(CWG1CON1,2)
// CWG1CON0<G1OEA>
extern volatile __bit                   G1OEA               __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 G1OEA_bit           _BIT_ACCESS(CWG1CON0,5)
// CWG1CON0<G1OEB>
extern volatile __bit                   G1OEB               __at(0x349E);	// @ (0x693 * 8 + 6)
#define                                 G1OEB_bit           _BIT_ACCESS(CWG1CON0,6)
// CWG1CON0<G1POLA>
extern volatile __bit                   G1POLA              __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 G1POLA_bit          _BIT_ACCESS(CWG1CON0,3)
// CWG1CON0<G1POLB>
extern volatile __bit                   G1POLB              __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 G1POLB_bit          _BIT_ACCESS(CWG1CON0,4)
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
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x865);	// @ (0x10C * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
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
// CLC1SEL0<LC1D1S0>
extern volatile __bit                   LC1D1S0             __at(0x7890);	// @ (0xF12 * 8 + 0)
#define                                 LC1D1S0_bit         _BIT_ACCESS(CLC1SEL0,0)
// CLC1SEL0<LC1D1S1>
extern volatile __bit                   LC1D1S1             __at(0x7891);	// @ (0xF12 * 8 + 1)
#define                                 LC1D1S1_bit         _BIT_ACCESS(CLC1SEL0,1)
// CLC1SEL0<LC1D1S2>
extern volatile __bit                   LC1D1S2             __at(0x7892);	// @ (0xF12 * 8 + 2)
#define                                 LC1D1S2_bit         _BIT_ACCESS(CLC1SEL0,2)
// CLC1SEL0<LC1D2S0>
extern volatile __bit                   LC1D2S0             __at(0x7894);	// @ (0xF12 * 8 + 4)
#define                                 LC1D2S0_bit         _BIT_ACCESS(CLC1SEL0,4)
// CLC1SEL0<LC1D2S1>
extern volatile __bit                   LC1D2S1             __at(0x7895);	// @ (0xF12 * 8 + 5)
#define                                 LC1D2S1_bit         _BIT_ACCESS(CLC1SEL0,5)
// CLC1SEL0<LC1D2S2>
extern volatile __bit                   LC1D2S2             __at(0x7896);	// @ (0xF12 * 8 + 6)
#define                                 LC1D2S2_bit         _BIT_ACCESS(CLC1SEL0,6)
// CLC1SEL1<LC1D3S0>
extern volatile __bit                   LC1D3S0             __at(0x7898);	// @ (0xF13 * 8 + 0)
#define                                 LC1D3S0_bit         _BIT_ACCESS(CLC1SEL1,0)
// CLC1SEL1<LC1D3S1>
extern volatile __bit                   LC1D3S1             __at(0x7899);	// @ (0xF13 * 8 + 1)
#define                                 LC1D3S1_bit         _BIT_ACCESS(CLC1SEL1,1)
// CLC1SEL1<LC1D3S2>
extern volatile __bit                   LC1D3S2             __at(0x789A);	// @ (0xF13 * 8 + 2)
#define                                 LC1D3S2_bit         _BIT_ACCESS(CLC1SEL1,2)
// CLC1SEL1<LC1D4S0>
extern volatile __bit                   LC1D4S0             __at(0x789C);	// @ (0xF13 * 8 + 4)
#define                                 LC1D4S0_bit         _BIT_ACCESS(CLC1SEL1,4)
// CLC1SEL1<LC1D4S1>
extern volatile __bit                   LC1D4S1             __at(0x789D);	// @ (0xF13 * 8 + 5)
#define                                 LC1D4S1_bit         _BIT_ACCESS(CLC1SEL1,5)
// CLC1SEL1<LC1D4S2>
extern volatile __bit                   LC1D4S2             __at(0x789E);	// @ (0xF13 * 8 + 6)
#define                                 LC1D4S2_bit         _BIT_ACCESS(CLC1SEL1,6)
// CLC1CON<LC1EN>
extern volatile __bit                   LC1EN               __at(0x7887);	// @ (0xF10 * 8 + 7)
#define                                 LC1EN_bit           _BIT_ACCESS(CLC1CON,7)
// CLC1GLS0<LC1G1D1N>
extern volatile __bit                   LC1G1D1N            __at(0x78A0);	// @ (0xF14 * 8 + 0)
#define                                 LC1G1D1N_bit        _BIT_ACCESS(CLC1GLS0,0)
// CLC1GLS0<LC1G1D1T>
extern volatile __bit                   LC1G1D1T            __at(0x78A1);	// @ (0xF14 * 8 + 1)
#define                                 LC1G1D1T_bit        _BIT_ACCESS(CLC1GLS0,1)
// CLC1GLS0<LC1G1D2N>
extern volatile __bit                   LC1G1D2N            __at(0x78A2);	// @ (0xF14 * 8 + 2)
#define                                 LC1G1D2N_bit        _BIT_ACCESS(CLC1GLS0,2)
// CLC1GLS0<LC1G1D2T>
extern volatile __bit                   LC1G1D2T            __at(0x78A3);	// @ (0xF14 * 8 + 3)
#define                                 LC1G1D2T_bit        _BIT_ACCESS(CLC1GLS0,3)
// CLC1GLS0<LC1G1D3N>
extern volatile __bit                   LC1G1D3N            __at(0x78A4);	// @ (0xF14 * 8 + 4)
#define                                 LC1G1D3N_bit        _BIT_ACCESS(CLC1GLS0,4)
// CLC1GLS0<LC1G1D3T>
extern volatile __bit                   LC1G1D3T            __at(0x78A5);	// @ (0xF14 * 8 + 5)
#define                                 LC1G1D3T_bit        _BIT_ACCESS(CLC1GLS0,5)
// CLC1GLS0<LC1G1D4N>
extern volatile __bit                   LC1G1D4N            __at(0x78A6);	// @ (0xF14 * 8 + 6)
#define                                 LC1G1D4N_bit        _BIT_ACCESS(CLC1GLS0,6)
// CLC1GLS0<LC1G1D4T>
extern volatile __bit                   LC1G1D4T            __at(0x78A7);	// @ (0xF14 * 8 + 7)
#define                                 LC1G1D4T_bit        _BIT_ACCESS(CLC1GLS0,7)
// CLC1POL<LC1G1POL>
extern volatile __bit                   LC1G1POL            __at(0x7888);	// @ (0xF11 * 8 + 0)
#define                                 LC1G1POL_bit        _BIT_ACCESS(CLC1POL,0)
// CLC1GLS1<LC1G2D1N>
extern volatile __bit                   LC1G2D1N            __at(0x78A8);	// @ (0xF15 * 8 + 0)
#define                                 LC1G2D1N_bit        _BIT_ACCESS(CLC1GLS1,0)
// CLC1GLS1<LC1G2D1T>
extern volatile __bit                   LC1G2D1T            __at(0x78A9);	// @ (0xF15 * 8 + 1)
#define                                 LC1G2D1T_bit        _BIT_ACCESS(CLC1GLS1,1)
// CLC1GLS1<LC1G2D2N>
extern volatile __bit                   LC1G2D2N            __at(0x78AA);	// @ (0xF15 * 8 + 2)
#define                                 LC1G2D2N_bit        _BIT_ACCESS(CLC1GLS1,2)
// CLC1GLS1<LC1G2D2T>
extern volatile __bit                   LC1G2D2T            __at(0x78AB);	// @ (0xF15 * 8 + 3)
#define                                 LC1G2D2T_bit        _BIT_ACCESS(CLC1GLS1,3)
// CLC1GLS1<LC1G2D3N>
extern volatile __bit                   LC1G2D3N            __at(0x78AC);	// @ (0xF15 * 8 + 4)
#define                                 LC1G2D3N_bit        _BIT_ACCESS(CLC1GLS1,4)
// CLC1GLS1<LC1G2D3T>
extern volatile __bit                   LC1G2D3T            __at(0x78AD);	// @ (0xF15 * 8 + 5)
#define                                 LC1G2D3T_bit        _BIT_ACCESS(CLC1GLS1,5)
// CLC1GLS1<LC1G2D4N>
extern volatile __bit                   LC1G2D4N            __at(0x78AE);	// @ (0xF15 * 8 + 6)
#define                                 LC1G2D4N_bit        _BIT_ACCESS(CLC1GLS1,6)
// CLC1GLS1<LC1G2D4T>
extern volatile __bit                   LC1G2D4T            __at(0x78AF);	// @ (0xF15 * 8 + 7)
#define                                 LC1G2D4T_bit        _BIT_ACCESS(CLC1GLS1,7)
// CLC1POL<LC1G2POL>
extern volatile __bit                   LC1G2POL            __at(0x7889);	// @ (0xF11 * 8 + 1)
#define                                 LC1G2POL_bit        _BIT_ACCESS(CLC1POL,1)
// CLC1GLS2<LC1G3D1N>
extern volatile __bit                   LC1G3D1N            __at(0x78B0);	// @ (0xF16 * 8 + 0)
#define                                 LC1G3D1N_bit        _BIT_ACCESS(CLC1GLS2,0)
// CLC1GLS2<LC1G3D1T>
extern volatile __bit                   LC1G3D1T            __at(0x78B1);	// @ (0xF16 * 8 + 1)
#define                                 LC1G3D1T_bit        _BIT_ACCESS(CLC1GLS2,1)
// CLC1GLS2<LC1G3D2N>
extern volatile __bit                   LC1G3D2N            __at(0x78B2);	// @ (0xF16 * 8 + 2)
#define                                 LC1G3D2N_bit        _BIT_ACCESS(CLC1GLS2,2)
// CLC1GLS2<LC1G3D2T>
extern volatile __bit                   LC1G3D2T            __at(0x78B3);	// @ (0xF16 * 8 + 3)
#define                                 LC1G3D2T_bit        _BIT_ACCESS(CLC1GLS2,3)
// CLC1GLS2<LC1G3D3N>
extern volatile __bit                   LC1G3D3N            __at(0x78B4);	// @ (0xF16 * 8 + 4)
#define                                 LC1G3D3N_bit        _BIT_ACCESS(CLC1GLS2,4)
// CLC1GLS2<LC1G3D3T>
extern volatile __bit                   LC1G3D3T            __at(0x78B5);	// @ (0xF16 * 8 + 5)
#define                                 LC1G3D3T_bit        _BIT_ACCESS(CLC1GLS2,5)
// CLC1GLS2<LC1G3D4N>
extern volatile __bit                   LC1G3D4N            __at(0x78B6);	// @ (0xF16 * 8 + 6)
#define                                 LC1G3D4N_bit        _BIT_ACCESS(CLC1GLS2,6)
// CLC1GLS2<LC1G3D4T>
extern volatile __bit                   LC1G3D4T            __at(0x78B7);	// @ (0xF16 * 8 + 7)
#define                                 LC1G3D4T_bit        _BIT_ACCESS(CLC1GLS2,7)
// CLC1POL<LC1G3POL>
extern volatile __bit                   LC1G3POL            __at(0x788A);	// @ (0xF11 * 8 + 2)
#define                                 LC1G3POL_bit        _BIT_ACCESS(CLC1POL,2)
// CLC1GLS3<LC1G4D1N>
extern volatile __bit                   LC1G4D1N            __at(0x78B8);	// @ (0xF17 * 8 + 0)
#define                                 LC1G4D1N_bit        _BIT_ACCESS(CLC1GLS3,0)
// CLC1GLS3<LC1G4D1T>
extern volatile __bit                   LC1G4D1T            __at(0x78B9);	// @ (0xF17 * 8 + 1)
#define                                 LC1G4D1T_bit        _BIT_ACCESS(CLC1GLS3,1)
// CLC1GLS3<LC1G4D2N>
extern volatile __bit                   LC1G4D2N            __at(0x78BA);	// @ (0xF17 * 8 + 2)
#define                                 LC1G4D2N_bit        _BIT_ACCESS(CLC1GLS3,2)
// CLC1GLS3<LC1G4D2T>
extern volatile __bit                   LC1G4D2T            __at(0x78BB);	// @ (0xF17 * 8 + 3)
#define                                 LC1G4D2T_bit        _BIT_ACCESS(CLC1GLS3,3)
// CLC1GLS3<LC1G4D3N>
extern volatile __bit                   LC1G4D3N            __at(0x78BC);	// @ (0xF17 * 8 + 4)
#define                                 LC1G4D3N_bit        _BIT_ACCESS(CLC1GLS3,4)
// CLC1GLS3<LC1G4D3T>
extern volatile __bit                   LC1G4D3T            __at(0x78BD);	// @ (0xF17 * 8 + 5)
#define                                 LC1G4D3T_bit        _BIT_ACCESS(CLC1GLS3,5)
// CLC1GLS3<LC1G4D4N>
extern volatile __bit                   LC1G4D4N            __at(0x78BE);	// @ (0xF17 * 8 + 6)
#define                                 LC1G4D4N_bit        _BIT_ACCESS(CLC1GLS3,6)
// CLC1GLS3<LC1G4D4T>
extern volatile __bit                   LC1G4D4T            __at(0x78BF);	// @ (0xF17 * 8 + 7)
#define                                 LC1G4D4T_bit        _BIT_ACCESS(CLC1GLS3,7)
// CLC1POL<LC1G4POL>
extern volatile __bit                   LC1G4POL            __at(0x788B);	// @ (0xF11 * 8 + 3)
#define                                 LC1G4POL_bit        _BIT_ACCESS(CLC1POL,3)
// CLC1CON<LC1INTN>
extern volatile __bit                   LC1INTN             __at(0x7883);	// @ (0xF10 * 8 + 3)
#define                                 LC1INTN_bit         _BIT_ACCESS(CLC1CON,3)
// CLC1CON<LC1INTP>
extern volatile __bit                   LC1INTP             __at(0x7884);	// @ (0xF10 * 8 + 4)
#define                                 LC1INTP_bit         _BIT_ACCESS(CLC1CON,4)
// CLC1CON<LC1MODE0>
extern volatile __bit                   LC1MODE0            __at(0x7880);	// @ (0xF10 * 8 + 0)
#define                                 LC1MODE0_bit        _BIT_ACCESS(CLC1CON,0)
// CLC1CON<LC1MODE1>
extern volatile __bit                   LC1MODE1            __at(0x7881);	// @ (0xF10 * 8 + 1)
#define                                 LC1MODE1_bit        _BIT_ACCESS(CLC1CON,1)
// CLC1CON<LC1MODE2>
extern volatile __bit                   LC1MODE2            __at(0x7882);	// @ (0xF10 * 8 + 2)
#define                                 LC1MODE2_bit        _BIT_ACCESS(CLC1CON,2)
// CLC1CON<LC1OE>
extern volatile __bit                   LC1OE               __at(0x7886);	// @ (0xF10 * 8 + 6)
#define                                 LC1OE_bit           _BIT_ACCESS(CLC1CON,6)
// CLC1CON<LC1OUT>
extern volatile __bit                   LC1OUT              __at(0x7885);	// @ (0xF10 * 8 + 5)
#define                                 LC1OUT_bit          _BIT_ACCESS(CLC1CON,5)
// CLC1POL<LC1POL>
extern volatile __bit                   LC1POL              __at(0x788F);	// @ (0xF11 * 8 + 7)
#define                                 LC1POL_bit          _BIT_ACCESS(CLC1POL,7)
// CLC2SEL0<LC2D1S0>
extern volatile __bit                   LC2D1S0             __at(0x78D0);	// @ (0xF1A * 8 + 0)
#define                                 LC2D1S0_bit         _BIT_ACCESS(CLC2SEL0,0)
// CLC2SEL0<LC2D1S1>
extern volatile __bit                   LC2D1S1             __at(0x78D1);	// @ (0xF1A * 8 + 1)
#define                                 LC2D1S1_bit         _BIT_ACCESS(CLC2SEL0,1)
// CLC2SEL0<LC2D1S2>
extern volatile __bit                   LC2D1S2             __at(0x78D2);	// @ (0xF1A * 8 + 2)
#define                                 LC2D1S2_bit         _BIT_ACCESS(CLC2SEL0,2)
// CLC2SEL0<LC2D2S0>
extern volatile __bit                   LC2D2S0             __at(0x78D4);	// @ (0xF1A * 8 + 4)
#define                                 LC2D2S0_bit         _BIT_ACCESS(CLC2SEL0,4)
// CLC2SEL0<LC2D2S1>
extern volatile __bit                   LC2D2S1             __at(0x78D5);	// @ (0xF1A * 8 + 5)
#define                                 LC2D2S1_bit         _BIT_ACCESS(CLC2SEL0,5)
// CLC2SEL0<LC2D2S2>
extern volatile __bit                   LC2D2S2             __at(0x78D6);	// @ (0xF1A * 8 + 6)
#define                                 LC2D2S2_bit         _BIT_ACCESS(CLC2SEL0,6)
// CLC2SEL1<LC2D3S0>
extern volatile __bit                   LC2D3S0             __at(0x78D8);	// @ (0xF1B * 8 + 0)
#define                                 LC2D3S0_bit         _BIT_ACCESS(CLC2SEL1,0)
// CLC2SEL1<LC2D3S1>
extern volatile __bit                   LC2D3S1             __at(0x78D9);	// @ (0xF1B * 8 + 1)
#define                                 LC2D3S1_bit         _BIT_ACCESS(CLC2SEL1,1)
// CLC2SEL1<LC2D3S2>
extern volatile __bit                   LC2D3S2             __at(0x78DA);	// @ (0xF1B * 8 + 2)
#define                                 LC2D3S2_bit         _BIT_ACCESS(CLC2SEL1,2)
// CLC2SEL1<LC2D4S0>
extern volatile __bit                   LC2D4S0             __at(0x78DC);	// @ (0xF1B * 8 + 4)
#define                                 LC2D4S0_bit         _BIT_ACCESS(CLC2SEL1,4)
// CLC2SEL1<LC2D4S1>
extern volatile __bit                   LC2D4S1             __at(0x78DD);	// @ (0xF1B * 8 + 5)
#define                                 LC2D4S1_bit         _BIT_ACCESS(CLC2SEL1,5)
// CLC2SEL1<LC2D4S2>
extern volatile __bit                   LC2D4S2             __at(0x78DE);	// @ (0xF1B * 8 + 6)
#define                                 LC2D4S2_bit         _BIT_ACCESS(CLC2SEL1,6)
// CLC2CON<LC2EN>
extern volatile __bit                   LC2EN               __at(0x78C7);	// @ (0xF18 * 8 + 7)
#define                                 LC2EN_bit           _BIT_ACCESS(CLC2CON,7)
// CLC2GLS0<LC2G1D1N>
extern volatile __bit                   LC2G1D1N            __at(0x78E0);	// @ (0xF1C * 8 + 0)
#define                                 LC2G1D1N_bit        _BIT_ACCESS(CLC2GLS0,0)
// CLC2GLS0<LC2G1D1T>
extern volatile __bit                   LC2G1D1T            __at(0x78E1);	// @ (0xF1C * 8 + 1)
#define                                 LC2G1D1T_bit        _BIT_ACCESS(CLC2GLS0,1)
// CLC2GLS0<LC2G1D2N>
extern volatile __bit                   LC2G1D2N            __at(0x78E2);	// @ (0xF1C * 8 + 2)
#define                                 LC2G1D2N_bit        _BIT_ACCESS(CLC2GLS0,2)
// CLC2GLS0<LC2G1D2T>
extern volatile __bit                   LC2G1D2T            __at(0x78E3);	// @ (0xF1C * 8 + 3)
#define                                 LC2G1D2T_bit        _BIT_ACCESS(CLC2GLS0,3)
// CLC2GLS0<LC2G1D3N>
extern volatile __bit                   LC2G1D3N            __at(0x78E4);	// @ (0xF1C * 8 + 4)
#define                                 LC2G1D3N_bit        _BIT_ACCESS(CLC2GLS0,4)
// CLC2GLS0<LC2G1D3T>
extern volatile __bit                   LC2G1D3T            __at(0x78E5);	// @ (0xF1C * 8 + 5)
#define                                 LC2G1D3T_bit        _BIT_ACCESS(CLC2GLS0,5)
// CLC2GLS0<LC2G1D4N>
extern volatile __bit                   LC2G1D4N            __at(0x78E6);	// @ (0xF1C * 8 + 6)
#define                                 LC2G1D4N_bit        _BIT_ACCESS(CLC2GLS0,6)
// CLC2GLS0<LC2G1D4T>
extern volatile __bit                   LC2G1D4T            __at(0x78E7);	// @ (0xF1C * 8 + 7)
#define                                 LC2G1D4T_bit        _BIT_ACCESS(CLC2GLS0,7)
// CLC2POL<LC2G1POL>
extern volatile __bit                   LC2G1POL            __at(0x78C8);	// @ (0xF19 * 8 + 0)
#define                                 LC2G1POL_bit        _BIT_ACCESS(CLC2POL,0)
// CLC2GLS1<LC2G2D1N>
extern volatile __bit                   LC2G2D1N            __at(0x78E8);	// @ (0xF1D * 8 + 0)
#define                                 LC2G2D1N_bit        _BIT_ACCESS(CLC2GLS1,0)
// CLC2GLS1<LC2G2D1T>
extern volatile __bit                   LC2G2D1T            __at(0x78E9);	// @ (0xF1D * 8 + 1)
#define                                 LC2G2D1T_bit        _BIT_ACCESS(CLC2GLS1,1)
// CLC2GLS1<LC2G2D2N>
extern volatile __bit                   LC2G2D2N            __at(0x78EA);	// @ (0xF1D * 8 + 2)
#define                                 LC2G2D2N_bit        _BIT_ACCESS(CLC2GLS1,2)
// CLC2GLS1<LC2G2D2T>
extern volatile __bit                   LC2G2D2T            __at(0x78EB);	// @ (0xF1D * 8 + 3)
#define                                 LC2G2D2T_bit        _BIT_ACCESS(CLC2GLS1,3)
// CLC2GLS1<LC2G2D3N>
extern volatile __bit                   LC2G2D3N            __at(0x78EC);	// @ (0xF1D * 8 + 4)
#define                                 LC2G2D3N_bit        _BIT_ACCESS(CLC2GLS1,4)
// CLC2GLS1<LC2G2D3T>
extern volatile __bit                   LC2G2D3T            __at(0x78ED);	// @ (0xF1D * 8 + 5)
#define                                 LC2G2D3T_bit        _BIT_ACCESS(CLC2GLS1,5)
// CLC2GLS1<LC2G2D4N>
extern volatile __bit                   LC2G2D4N            __at(0x78EE);	// @ (0xF1D * 8 + 6)
#define                                 LC2G2D4N_bit        _BIT_ACCESS(CLC2GLS1,6)
// CLC2GLS1<LC2G2D4T>
extern volatile __bit                   LC2G2D4T            __at(0x78EF);	// @ (0xF1D * 8 + 7)
#define                                 LC2G2D4T_bit        _BIT_ACCESS(CLC2GLS1,7)
// CLC2POL<LC2G2POL>
extern volatile __bit                   LC2G2POL            __at(0x78C9);	// @ (0xF19 * 8 + 1)
#define                                 LC2G2POL_bit        _BIT_ACCESS(CLC2POL,1)
// CLC2GLS2<LC2G3D1N>
extern volatile __bit                   LC2G3D1N            __at(0x78F0);	// @ (0xF1E * 8 + 0)
#define                                 LC2G3D1N_bit        _BIT_ACCESS(CLC2GLS2,0)
// CLC2GLS2<LC2G3D1T>
extern volatile __bit                   LC2G3D1T            __at(0x78F1);	// @ (0xF1E * 8 + 1)
#define                                 LC2G3D1T_bit        _BIT_ACCESS(CLC2GLS2,1)
// CLC2GLS2<LC2G3D2N>
extern volatile __bit                   LC2G3D2N            __at(0x78F2);	// @ (0xF1E * 8 + 2)
#define                                 LC2G3D2N_bit        _BIT_ACCESS(CLC2GLS2,2)
// CLC2GLS2<LC2G3D2T>
extern volatile __bit                   LC2G3D2T            __at(0x78F3);	// @ (0xF1E * 8 + 3)
#define                                 LC2G3D2T_bit        _BIT_ACCESS(CLC2GLS2,3)
// CLC2GLS2<LC2G3D3N>
extern volatile __bit                   LC2G3D3N            __at(0x78F4);	// @ (0xF1E * 8 + 4)
#define                                 LC2G3D3N_bit        _BIT_ACCESS(CLC2GLS2,4)
// CLC2GLS2<LC2G3D3T>
extern volatile __bit                   LC2G3D3T            __at(0x78F5);	// @ (0xF1E * 8 + 5)
#define                                 LC2G3D3T_bit        _BIT_ACCESS(CLC2GLS2,5)
// CLC2GLS2<LC2G3D4N>
extern volatile __bit                   LC2G3D4N            __at(0x78F6);	// @ (0xF1E * 8 + 6)
#define                                 LC2G3D4N_bit        _BIT_ACCESS(CLC2GLS2,6)
// CLC2GLS2<LC2G3D4T>
extern volatile __bit                   LC2G3D4T            __at(0x78F7);	// @ (0xF1E * 8 + 7)
#define                                 LC2G3D4T_bit        _BIT_ACCESS(CLC2GLS2,7)
// CLC2POL<LC2G3POL>
extern volatile __bit                   LC2G3POL            __at(0x78CA);	// @ (0xF19 * 8 + 2)
#define                                 LC2G3POL_bit        _BIT_ACCESS(CLC2POL,2)
// CLC2GLS3<LC2G4D1N>
extern volatile __bit                   LC2G4D1N            __at(0x78F8);	// @ (0xF1F * 8 + 0)
#define                                 LC2G4D1N_bit        _BIT_ACCESS(CLC2GLS3,0)
// CLC2GLS3<LC2G4D1T>
extern volatile __bit                   LC2G4D1T            __at(0x78F9);	// @ (0xF1F * 8 + 1)
#define                                 LC2G4D1T_bit        _BIT_ACCESS(CLC2GLS3,1)
// CLC2GLS3<LC2G4D2N>
extern volatile __bit                   LC2G4D2N            __at(0x78FA);	// @ (0xF1F * 8 + 2)
#define                                 LC2G4D2N_bit        _BIT_ACCESS(CLC2GLS3,2)
// CLC2GLS3<LC2G4D2T>
extern volatile __bit                   LC2G4D2T            __at(0x78FB);	// @ (0xF1F * 8 + 3)
#define                                 LC2G4D2T_bit        _BIT_ACCESS(CLC2GLS3,3)
// CLC2GLS3<LC2G4D3N>
extern volatile __bit                   LC2G4D3N            __at(0x78FC);	// @ (0xF1F * 8 + 4)
#define                                 LC2G4D3N_bit        _BIT_ACCESS(CLC2GLS3,4)
// CLC2GLS3<LC2G4D3T>
extern volatile __bit                   LC2G4D3T            __at(0x78FD);	// @ (0xF1F * 8 + 5)
#define                                 LC2G4D3T_bit        _BIT_ACCESS(CLC2GLS3,5)
// CLC2GLS3<LC2G4D4N>
extern volatile __bit                   LC2G4D4N            __at(0x78FE);	// @ (0xF1F * 8 + 6)
#define                                 LC2G4D4N_bit        _BIT_ACCESS(CLC2GLS3,6)
// CLC2GLS3<LC2G4D4T>
extern volatile __bit                   LC2G4D4T            __at(0x78FF);	// @ (0xF1F * 8 + 7)
#define                                 LC2G4D4T_bit        _BIT_ACCESS(CLC2GLS3,7)
// CLC2POL<LC2G4POL>
extern volatile __bit                   LC2G4POL            __at(0x78CB);	// @ (0xF19 * 8 + 3)
#define                                 LC2G4POL_bit        _BIT_ACCESS(CLC2POL,3)
// CLC2CON<LC2INTN>
extern volatile __bit                   LC2INTN             __at(0x78C3);	// @ (0xF18 * 8 + 3)
#define                                 LC2INTN_bit         _BIT_ACCESS(CLC2CON,3)
// CLC2CON<LC2INTP>
extern volatile __bit                   LC2INTP             __at(0x78C4);	// @ (0xF18 * 8 + 4)
#define                                 LC2INTP_bit         _BIT_ACCESS(CLC2CON,4)
// CLC2CON<LC2MODE0>
extern volatile __bit                   LC2MODE0            __at(0x78C0);	// @ (0xF18 * 8 + 0)
#define                                 LC2MODE0_bit        _BIT_ACCESS(CLC2CON,0)
// CLC2CON<LC2MODE1>
extern volatile __bit                   LC2MODE1            __at(0x78C1);	// @ (0xF18 * 8 + 1)
#define                                 LC2MODE1_bit        _BIT_ACCESS(CLC2CON,1)
// CLC2CON<LC2MODE2>
extern volatile __bit                   LC2MODE2            __at(0x78C2);	// @ (0xF18 * 8 + 2)
#define                                 LC2MODE2_bit        _BIT_ACCESS(CLC2CON,2)
// CLC2CON<LC2OE>
extern volatile __bit                   LC2OE               __at(0x78C6);	// @ (0xF18 * 8 + 6)
#define                                 LC2OE_bit           _BIT_ACCESS(CLC2CON,6)
// CLC2CON<LC2OUT>
extern volatile __bit                   LC2OUT              __at(0x78C5);	// @ (0xF18 * 8 + 5)
#define                                 LC2OUT_bit          _BIT_ACCESS(CLC2CON,5)
// CLC2POL<LC2POL>
extern volatile __bit                   LC2POL              __at(0x78CF);	// @ (0xF19 * 8 + 7)
#define                                 LC2POL_bit          _BIT_ACCESS(CLC2POL,7)
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// CLCDATA<MCLC1OUT>
extern volatile __bit                   MCLC1OUT            __at(0x7878);	// @ (0xF0F * 8 + 0)
#define                                 MCLC1OUT_bit        _BIT_ACCESS(CLCDATA,0)
// CLCDATA<MCLC2OUT>
extern volatile __bit                   MCLC2OUT            __at(0x7879);	// @ (0xF0F * 8 + 1)
#define                                 MCLC2OUT_bit        _BIT_ACCESS(CLCDATA,1)
// NCO1CLK<N1CKS0>
extern volatile __bit                   N1CKS0              __at(0x24F8);	// @ (0x49F * 8 + 0)
#define                                 N1CKS0_bit          _BIT_ACCESS(NCO1CLK,0)
// NCO1CLK<N1CKS1>
extern volatile __bit                   N1CKS1              __at(0x24F9);	// @ (0x49F * 8 + 1)
#define                                 N1CKS1_bit          _BIT_ACCESS(NCO1CLK,1)
// NCO1CON<N1EN>
extern volatile __bit                   N1EN                __at(0x24F7);	// @ (0x49E * 8 + 7)
#define                                 N1EN_bit            _BIT_ACCESS(NCO1CON,7)
// NCO1CON<N1OE>
extern volatile __bit                   N1OE                __at(0x24F6);	// @ (0x49E * 8 + 6)
#define                                 N1OE_bit            _BIT_ACCESS(NCO1CON,6)
// NCO1CON<N1OUT>
extern volatile __bit                   N1OUT               __at(0x24F5);	// @ (0x49E * 8 + 5)
#define                                 N1OUT_bit           _BIT_ACCESS(NCO1CON,5)
// NCO1CON<N1PFM>
extern volatile __bit                   N1PFM               __at(0x24F0);	// @ (0x49E * 8 + 0)
#define                                 N1PFM_bit           _BIT_ACCESS(NCO1CON,0)
// NCO1CON<N1POL>
extern volatile __bit                   N1POL               __at(0x24F4);	// @ (0x49E * 8 + 4)
#define                                 N1POL_bit           _BIT_ACCESS(NCO1CON,4)
// NCO1CLK<N1PWS0>
extern volatile __bit                   N1PWS0              __at(0x24FD);	// @ (0x49F * 8 + 5)
#define                                 N1PWS0_bit          _BIT_ACCESS(NCO1CLK,5)
// NCO1CLK<N1PWS1>
extern volatile __bit                   N1PWS1              __at(0x24FE);	// @ (0x49F * 8 + 6)
#define                                 N1PWS1_bit          _BIT_ACCESS(NCO1CLK,6)
// NCO1CLK<N1PWS2>
extern volatile __bit                   N1PWS2              __at(0x24FF);	// @ (0x49F * 8 + 7)
#define                                 N1PWS2_bit          _BIT_ACCESS(NCO1CLK,7)
// NCO1ACCL<NCO1ACC0>
extern volatile __bit                   NCO1ACC0            __at(0x24C0);	// @ (0x498 * 8 + 0)
#define                                 NCO1ACC0_bit        _BIT_ACCESS(NCO1ACCL,0)
// NCO1ACCL<NCO1ACC1>
extern volatile __bit                   NCO1ACC1            __at(0x24C1);	// @ (0x498 * 8 + 1)
#define                                 NCO1ACC1_bit        _BIT_ACCESS(NCO1ACCL,1)
// NCO1ACCH<NCO1ACC10>
extern volatile __bit                   NCO1ACC10           __at(0x24CA);	// @ (0x499 * 8 + 2)
#define                                 NCO1ACC10_bit       _BIT_ACCESS(NCO1ACCH,2)
// NCO1ACCH<NCO1ACC11>
extern volatile __bit                   NCO1ACC11           __at(0x24CB);	// @ (0x499 * 8 + 3)
#define                                 NCO1ACC11_bit       _BIT_ACCESS(NCO1ACCH,3)
// NCO1ACCH<NCO1ACC12>
extern volatile __bit                   NCO1ACC12           __at(0x24CC);	// @ (0x499 * 8 + 4)
#define                                 NCO1ACC12_bit       _BIT_ACCESS(NCO1ACCH,4)
// NCO1ACCH<NCO1ACC13>
extern volatile __bit                   NCO1ACC13           __at(0x24CD);	// @ (0x499 * 8 + 5)
#define                                 NCO1ACC13_bit       _BIT_ACCESS(NCO1ACCH,5)
// NCO1ACCH<NCO1ACC14>
extern volatile __bit                   NCO1ACC14           __at(0x24CE);	// @ (0x499 * 8 + 6)
#define                                 NCO1ACC14_bit       _BIT_ACCESS(NCO1ACCH,6)
// NCO1ACCH<NCO1ACC15>
extern volatile __bit                   NCO1ACC15           __at(0x24CF);	// @ (0x499 * 8 + 7)
#define                                 NCO1ACC15_bit       _BIT_ACCESS(NCO1ACCH,7)
// NCO1ACCU<NCO1ACC16>
extern volatile __bit                   NCO1ACC16           __at(0x24D0);	// @ (0x49A * 8 + 0)
#define                                 NCO1ACC16_bit       _BIT_ACCESS(NCO1ACCU,0)
// NCO1ACCU<NCO1ACC17>
extern volatile __bit                   NCO1ACC17           __at(0x24D1);	// @ (0x49A * 8 + 1)
#define                                 NCO1ACC17_bit       _BIT_ACCESS(NCO1ACCU,1)
// NCO1ACCU<NCO1ACC18>
extern volatile __bit                   NCO1ACC18           __at(0x24D2);	// @ (0x49A * 8 + 2)
#define                                 NCO1ACC18_bit       _BIT_ACCESS(NCO1ACCU,2)
// NCO1ACCU<NCO1ACC19>
extern volatile __bit                   NCO1ACC19           __at(0x24D3);	// @ (0x49A * 8 + 3)
#define                                 NCO1ACC19_bit       _BIT_ACCESS(NCO1ACCU,3)
// NCO1ACCL<NCO1ACC2>
extern volatile __bit                   NCO1ACC2            __at(0x24C2);	// @ (0x498 * 8 + 2)
#define                                 NCO1ACC2_bit        _BIT_ACCESS(NCO1ACCL,2)
// NCO1ACCL<NCO1ACC3>
extern volatile __bit                   NCO1ACC3            __at(0x24C3);	// @ (0x498 * 8 + 3)
#define                                 NCO1ACC3_bit        _BIT_ACCESS(NCO1ACCL,3)
// NCO1ACCL<NCO1ACC4>
extern volatile __bit                   NCO1ACC4            __at(0x24C4);	// @ (0x498 * 8 + 4)
#define                                 NCO1ACC4_bit        _BIT_ACCESS(NCO1ACCL,4)
// NCO1ACCL<NCO1ACC5>
extern volatile __bit                   NCO1ACC5            __at(0x24C5);	// @ (0x498 * 8 + 5)
#define                                 NCO1ACC5_bit        _BIT_ACCESS(NCO1ACCL,5)
// NCO1ACCL<NCO1ACC6>
extern volatile __bit                   NCO1ACC6            __at(0x24C6);	// @ (0x498 * 8 + 6)
#define                                 NCO1ACC6_bit        _BIT_ACCESS(NCO1ACCL,6)
// NCO1ACCL<NCO1ACC7>
extern volatile __bit                   NCO1ACC7            __at(0x24C7);	// @ (0x498 * 8 + 7)
#define                                 NCO1ACC7_bit        _BIT_ACCESS(NCO1ACCL,7)
// NCO1ACCH<NCO1ACC8>
extern volatile __bit                   NCO1ACC8            __at(0x24C8);	// @ (0x499 * 8 + 0)
#define                                 NCO1ACC8_bit        _BIT_ACCESS(NCO1ACCH,0)
// NCO1ACCH<NCO1ACC9>
extern volatile __bit                   NCO1ACC9            __at(0x24C9);	// @ (0x499 * 8 + 1)
#define                                 NCO1ACC9_bit        _BIT_ACCESS(NCO1ACCH,1)
// PIE2<NCO1IE>
extern volatile __bit                   NCO1IE              __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 NCO1IE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<NCO1IF>
extern volatile __bit                   NCO1IF              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 NCO1IF_bit          _BIT_ACCESS(PIR2,2)
// NCO1INCL<NCO1INC0>
extern volatile __bit                   NCO1INC0            __at(0x24D8);	// @ (0x49B * 8 + 0)
#define                                 NCO1INC0_bit        _BIT_ACCESS(NCO1INCL,0)
// NCO1INCL<NCO1INC1>
extern volatile __bit                   NCO1INC1            __at(0x24D9);	// @ (0x49B * 8 + 1)
#define                                 NCO1INC1_bit        _BIT_ACCESS(NCO1INCL,1)
// NCO1INCH<NCO1INC10>
extern volatile __bit                   NCO1INC10           __at(0x24E2);	// @ (0x49C * 8 + 2)
#define                                 NCO1INC10_bit       _BIT_ACCESS(NCO1INCH,2)
// NCO1INCH<NCO1INC11>
extern volatile __bit                   NCO1INC11           __at(0x24E3);	// @ (0x49C * 8 + 3)
#define                                 NCO1INC11_bit       _BIT_ACCESS(NCO1INCH,3)
// NCO1INCH<NCO1INC12>
extern volatile __bit                   NCO1INC12           __at(0x24E4);	// @ (0x49C * 8 + 4)
#define                                 NCO1INC12_bit       _BIT_ACCESS(NCO1INCH,4)
// NCO1INCH<NCO1INC13>
extern volatile __bit                   NCO1INC13           __at(0x24E5);	// @ (0x49C * 8 + 5)
#define                                 NCO1INC13_bit       _BIT_ACCESS(NCO1INCH,5)
// NCO1INCH<NCO1INC14>
extern volatile __bit                   NCO1INC14           __at(0x24E6);	// @ (0x49C * 8 + 6)
#define                                 NCO1INC14_bit       _BIT_ACCESS(NCO1INCH,6)
// NCO1INCH<NCO1INC15>
extern volatile __bit                   NCO1INC15           __at(0x24E7);	// @ (0x49C * 8 + 7)
#define                                 NCO1INC15_bit       _BIT_ACCESS(NCO1INCH,7)
// NCO1INCL<NCO1INC2>
extern volatile __bit                   NCO1INC2            __at(0x24DA);	// @ (0x49B * 8 + 2)
#define                                 NCO1INC2_bit        _BIT_ACCESS(NCO1INCL,2)
// NCO1INCL<NCO1INC3>
extern volatile __bit                   NCO1INC3            __at(0x24DB);	// @ (0x49B * 8 + 3)
#define                                 NCO1INC3_bit        _BIT_ACCESS(NCO1INCL,3)
// NCO1INCL<NCO1INC4>
extern volatile __bit                   NCO1INC4            __at(0x24DC);	// @ (0x49B * 8 + 4)
#define                                 NCO1INC4_bit        _BIT_ACCESS(NCO1INCL,4)
// NCO1INCL<NCO1INC5>
extern volatile __bit                   NCO1INC5            __at(0x24DD);	// @ (0x49B * 8 + 5)
#define                                 NCO1INC5_bit        _BIT_ACCESS(NCO1INCL,5)
// NCO1INCL<NCO1INC6>
extern volatile __bit                   NCO1INC6            __at(0x24DE);	// @ (0x49B * 8 + 6)
#define                                 NCO1INC6_bit        _BIT_ACCESS(NCO1INCL,6)
// NCO1INCL<NCO1INC7>
extern volatile __bit                   NCO1INC7            __at(0x24DF);	// @ (0x49B * 8 + 7)
#define                                 NCO1INC7_bit        _BIT_ACCESS(NCO1INCL,7)
// NCO1INCH<NCO1INC8>
extern volatile __bit                   NCO1INC8            __at(0x24E0);	// @ (0x49C * 8 + 0)
#define                                 NCO1INC8_bit        _BIT_ACCESS(NCO1INCH,0)
// NCO1INCH<NCO1INC9>
extern volatile __bit                   NCO1INC9            __at(0x24E1);	// @ (0x49C * 8 + 1)
#define                                 NCO1INC9_bit        _BIT_ACCESS(NCO1INCH,1)
// APFCON<NCO1SEL>
extern volatile __bit                   NCO1SEL             __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 NCO1SEL_bit         _BIT_ACCESS(APFCON,0)
// OSCSTAT<OSTS>
extern volatile __bit                   OSTS                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OSTS_bit            _BIT_ACCESS(OSCSTAT,5)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
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
// PWM2CON<PWM2OUT>
extern volatile __bit                   PWM2OUT             __at(0x30B5);	// @ (0x616 * 8 + 5)
#define                                 PWM2OUT_bit         _BIT_ACCESS(PWM2CON,5)
// PWM2CON<PWM2POL>
extern volatile __bit                   PWM2POL             __at(0x30B4);	// @ (0x616 * 8 + 4)
#define                                 PWM2POL_bit         _BIT_ACCESS(PWM2CON,4)
// PWM3DCH<PWM3DCH0>
extern volatile __bit                   PWM3DCH0            __at(0x30C0);	// @ (0x618 * 8 + 0)
#define                                 PWM3DCH0_bit        _BIT_ACCESS(PWM3DCH,0)
// PWM3DCH<PWM3DCH1>
extern volatile __bit                   PWM3DCH1            __at(0x30C1);	// @ (0x618 * 8 + 1)
#define                                 PWM3DCH1_bit        _BIT_ACCESS(PWM3DCH,1)
// PWM3DCH<PWM3DCH2>
extern volatile __bit                   PWM3DCH2            __at(0x30C2);	// @ (0x618 * 8 + 2)
#define                                 PWM3DCH2_bit        _BIT_ACCESS(PWM3DCH,2)
// PWM3DCH<PWM3DCH3>
extern volatile __bit                   PWM3DCH3            __at(0x30C3);	// @ (0x618 * 8 + 3)
#define                                 PWM3DCH3_bit        _BIT_ACCESS(PWM3DCH,3)
// PWM3DCH<PWM3DCH4>
extern volatile __bit                   PWM3DCH4            __at(0x30C4);	// @ (0x618 * 8 + 4)
#define                                 PWM3DCH4_bit        _BIT_ACCESS(PWM3DCH,4)
// PWM3DCH<PWM3DCH5>
extern volatile __bit                   PWM3DCH5            __at(0x30C5);	// @ (0x618 * 8 + 5)
#define                                 PWM3DCH5_bit        _BIT_ACCESS(PWM3DCH,5)
// PWM3DCH<PWM3DCH6>
extern volatile __bit                   PWM3DCH6            __at(0x30C6);	// @ (0x618 * 8 + 6)
#define                                 PWM3DCH6_bit        _BIT_ACCESS(PWM3DCH,6)
// PWM3DCH<PWM3DCH7>
extern volatile __bit                   PWM3DCH7            __at(0x30C7);	// @ (0x618 * 8 + 7)
#define                                 PWM3DCH7_bit        _BIT_ACCESS(PWM3DCH,7)
// PWM3DCL<PWM3DCL0>
extern volatile __bit                   PWM3DCL0            __at(0x30BE);	// @ (0x617 * 8 + 6)
#define                                 PWM3DCL0_bit        _BIT_ACCESS(PWM3DCL,6)
// PWM3DCL<PWM3DCL1>
extern volatile __bit                   PWM3DCL1            __at(0x30BF);	// @ (0x617 * 8 + 7)
#define                                 PWM3DCL1_bit        _BIT_ACCESS(PWM3DCL,7)
// PWM3CON<PWM3EN>
extern volatile __bit                   PWM3EN              __at(0x30CF);	// @ (0x619 * 8 + 7)
#define                                 PWM3EN_bit          _BIT_ACCESS(PWM3CON,7)
// PWM3CON<PWM3OE>
extern volatile __bit                   PWM3OE              __at(0x30CE);	// @ (0x619 * 8 + 6)
#define                                 PWM3OE_bit          _BIT_ACCESS(PWM3CON,6)
// PWM3CON<PWM3OUT>
extern volatile __bit                   PWM3OUT             __at(0x30CD);	// @ (0x619 * 8 + 5)
#define                                 PWM3OUT_bit         _BIT_ACCESS(PWM3CON,5)
// PWM3CON<PWM3POL>
extern volatile __bit                   PWM3POL             __at(0x30CC);	// @ (0x619 * 8 + 4)
#define                                 PWM3POL_bit         _BIT_ACCESS(PWM3CON,4)
// PWM4DCH<PWM4DCH0>
extern volatile __bit                   PWM4DCH0            __at(0x30D8);	// @ (0x61B * 8 + 0)
#define                                 PWM4DCH0_bit        _BIT_ACCESS(PWM4DCH,0)
// PWM4DCH<PWM4DCH1>
extern volatile __bit                   PWM4DCH1            __at(0x30D9);	// @ (0x61B * 8 + 1)
#define                                 PWM4DCH1_bit        _BIT_ACCESS(PWM4DCH,1)
// PWM4DCH<PWM4DCH2>
extern volatile __bit                   PWM4DCH2            __at(0x30DA);	// @ (0x61B * 8 + 2)
#define                                 PWM4DCH2_bit        _BIT_ACCESS(PWM4DCH,2)
// PWM4DCH<PWM4DCH3>
extern volatile __bit                   PWM4DCH3            __at(0x30DB);	// @ (0x61B * 8 + 3)
#define                                 PWM4DCH3_bit        _BIT_ACCESS(PWM4DCH,3)
// PWM4DCH<PWM4DCH4>
extern volatile __bit                   PWM4DCH4            __at(0x30DC);	// @ (0x61B * 8 + 4)
#define                                 PWM4DCH4_bit        _BIT_ACCESS(PWM4DCH,4)
// PWM4DCH<PWM4DCH5>
extern volatile __bit                   PWM4DCH5            __at(0x30DD);	// @ (0x61B * 8 + 5)
#define                                 PWM4DCH5_bit        _BIT_ACCESS(PWM4DCH,5)
// PWM4DCH<PWM4DCH6>
extern volatile __bit                   PWM4DCH6            __at(0x30DE);	// @ (0x61B * 8 + 6)
#define                                 PWM4DCH6_bit        _BIT_ACCESS(PWM4DCH,6)
// PWM4DCH<PWM4DCH7>
extern volatile __bit                   PWM4DCH7            __at(0x30DF);	// @ (0x61B * 8 + 7)
#define                                 PWM4DCH7_bit        _BIT_ACCESS(PWM4DCH,7)
// PWM4DCL<PWM4DCL0>
extern volatile __bit                   PWM4DCL0            __at(0x30D6);	// @ (0x61A * 8 + 6)
#define                                 PWM4DCL0_bit        _BIT_ACCESS(PWM4DCL,6)
// PWM4DCL<PWM4DCL1>
extern volatile __bit                   PWM4DCL1            __at(0x30D7);	// @ (0x61A * 8 + 7)
#define                                 PWM4DCL1_bit        _BIT_ACCESS(PWM4DCL,7)
// PWM4CON<PWM4EN>
extern volatile __bit                   PWM4EN              __at(0x30E7);	// @ (0x61C * 8 + 7)
#define                                 PWM4EN_bit          _BIT_ACCESS(PWM4CON,7)
// PWM4CON<PWM4OE>
extern volatile __bit                   PWM4OE              __at(0x30E6);	// @ (0x61C * 8 + 6)
#define                                 PWM4OE_bit          _BIT_ACCESS(PWM4CON,6)
// PWM4CON<PWM4OUT>
extern volatile __bit                   PWM4OUT             __at(0x30E5);	// @ (0x61C * 8 + 5)
#define                                 PWM4OUT_bit         _BIT_ACCESS(PWM4CON,5)
// PWM4CON<PWM4POL>
extern volatile __bit                   PWM4POL             __at(0x30E4);	// @ (0x61C * 8 + 4)
#define                                 PWM4POL_bit         _BIT_ACCESS(PWM4CON,4)
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
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0xE1);	// @ (0x1C * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
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
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 TOUTPS0_bit         _BIT_ACCESS(T2CON,3)
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0xE4);	// @ (0x1C * 8 + 4)
#define                                 TOUTPS1_bit         _BIT_ACCESS(T2CON,4)
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0xE5);	// @ (0x1C * 8 + 5)
#define                                 TOUTPS2_bit         _BIT_ACCESS(T2CON,5)
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0xE6);	// @ (0x1C * 8 + 6)
#define                                 TOUTPS3_bit         _BIT_ACCESS(T2CON,6)
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
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC16LF1507_H_
