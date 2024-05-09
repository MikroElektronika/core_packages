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

#ifndef _PIC12LF1572_H_
#define _PIC12LF1572_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC12LF1572
 */
#ifndef _XC_H_
#warning Header file pic12lf1572.h included directly. Use #include <xc.h> instead.
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
    };
    struct {
        unsigned PORTA                  :6;
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
#define _PORTA_PORTA_POSN                                   0x0
#define _PORTA_PORTA_POSITION                               0x0
#define _PORTA_PORTA_SIZE                                   0x6
#define _PORTA_PORTA_LENGTH                                 0x6
#define _PORTA_PORTA_MASK                                   0x3F

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
        unsigned                        :2;
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
        unsigned                        :5;
        unsigned C1IF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_C1IF_POSN                                     0x5
#define _PIR2_C1IF_POSITION                                 0x5
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x20

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x013);
#ifndef _LIB_BUILD
asm("PIR3 equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM1IF                 :1;
        unsigned PWM2IF                 :1;
        unsigned PWM3IF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x013);
// bitfield macros
#define _PIR3_PWM1IF_POSN                                   0x4
#define _PIR3_PWM1IF_POSITION                               0x4
#define _PIR3_PWM1IF_SIZE                                   0x1
#define _PIR3_PWM1IF_LENGTH                                 0x1
#define _PIR3_PWM1IF_MASK                                   0x10
#define _PIR3_PWM2IF_POSN                                   0x5
#define _PIR3_PWM2IF_POSITION                               0x5
#define _PIR3_PWM2IF_SIZE                                   0x1
#define _PIR3_PWM2IF_LENGTH                                 0x1
#define _PIR3_PWM2IF_MASK                                   0x20
#define _PIR3_PWM3IF_POSN                                   0x6
#define _PIR3_PWM3IF_POSITION                               0x6
#define _PIR3_PWM3IF_SIZE                                   0x1
#define _PIR3_PWM3IF_LENGTH                                 0x1
#define _PIR3_PWM3IF_MASK                                   0x40

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
        unsigned T1GGO_nDONE            :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS                  :2;
        unsigned                        :1;
        unsigned T1GGO                  :1;
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
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x2
#define _T1GCON_T1GSS_LENGTH                                0x2
#define _T1GCON_T1GSS_MASK                                  0x3
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
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
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
    struct {
        unsigned TRISA                  :6;
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
#define _TRISA_TRISA_POSN                                   0x0
#define _TRISA_TRISA_POSITION                               0x0
#define _TRISA_TRISA_SIZE                                   0x6
#define _TRISA_TRISA_LENGTH                                 0x6
#define _TRISA_TRISA_MASK                                   0x3F

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
        unsigned                        :2;
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
        unsigned                        :5;
        unsigned C1IE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_C1IE_POSN                                     0x5
#define _PIE2_C1IE_POSITION                                 0x5
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x20

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x093);
#ifndef _LIB_BUILD
asm("PIE3 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM1IE                 :1;
        unsigned PWM2IE                 :1;
        unsigned PWM3IE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x093);
// bitfield macros
#define _PIE3_PWM1IE_POSN                                   0x4
#define _PIE3_PWM1IE_POSITION                               0x4
#define _PIE3_PWM1IE_SIZE                                   0x1
#define _PIE3_PWM1IE_LENGTH                                 0x1
#define _PIE3_PWM1IE_MASK                                   0x10
#define _PIE3_PWM2IE_POSN                                   0x5
#define _PIE3_PWM2IE_POSITION                               0x5
#define _PIE3_PWM2IE_SIZE                                   0x1
#define _PIE3_PWM2IE_LENGTH                                 0x1
#define _PIE3_PWM2IE_MASK                                   0x20
#define _PIE3_PWM3IE_POSN                                   0x6
#define _PIE3_PWM3IE_POSITION                               0x6
#define _PIE3_PWM3IE_SIZE                                   0x1
#define _PIE3_PWM3IE_LENGTH                                 0x1
#define _PIE3_PWM3IE_MASK                                   0x40

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
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned                        :2;
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
        unsigned                        :4;
        unsigned TRIGSEL0               :1;
        unsigned TRIGSEL1               :1;
        unsigned TRIGSEL2               :1;
        unsigned TRIGSEL3               :1;
    };
    struct {
        unsigned                        :4;
        unsigned TRIGSEL                :4;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0x09F);
// bitfield macros
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
        unsigned                        :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
    };
    struct {
        unsigned LATA                   :6;
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
#define _LATA_LATA_POSN                                     0x0
#define _LATA_LATA_POSITION                                 0x0
#define _LATA_LATA_SIZE                                     0x6
#define _LATA_LATA_LENGTH                                   0x6
#define _LATA_LATA_MASK                                     0x3F

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
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned C1NCH2                 :1;
        unsigned                        :1;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH                  :3;
        unsigned                        :1;
        unsigned C1PCH                  :2;
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
#define _CM1CON1_C1PCH_POSN                                 0x4
#define _CM1CON1_C1PCH_POSITION                             0x4
#define _CM1CON1_C1PCH_SIZE                                 0x2
#define _CM1CON1_C1PCH_LENGTH                               0x2
#define _CM1CON1_C1PCH_MASK                                 0x30

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
    };
} CMOUTbits_t;
extern volatile CMOUTbits_t CMOUTbits __at(0x115);
// bitfield macros
#define _CMOUT_MC1OUT_POSN                                  0x0
#define _CMOUT_MC1OUT_POSITION                              0x0
#define _CMOUT_MC1OUT_SIZE                                  0x1
#define _CMOUT_MC1OUT_LENGTH                                0x1
#define _CMOUT_MC1OUT_MASK                                  0x1

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
        unsigned                        :2;
        unsigned DACPSS0                :1;
        unsigned DACPSS1                :1;
        unsigned                        :1;
        unsigned DACOE                  :1;
        unsigned DACLPS                 :1;
        unsigned DACEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned DACPSS                 :2;
    };
} DACCON0bits_t;
extern volatile DACCON0bits_t DACCON0bits __at(0x118);
// bitfield macros
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
    };
    struct {
        unsigned DACR                   :5;
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
#define _DACCON1_DACR_POSN                                  0x0
#define _DACCON1_DACR_POSITION                              0x0
#define _DACCON1_DACR_SIZE                                  0x5
#define _DACCON1_DACR_LENGTH                                0x5
#define _DACCON1_DACR_MASK                                  0x1F

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
        unsigned P1SEL                  :1;
        unsigned P2SEL                  :1;
        unsigned TXCKSEL                :1;
        unsigned T1GSEL                 :1;
        unsigned                        :1;
        unsigned CWGBSEL                :1;
        unsigned CWGASEL                :1;
        unsigned RXDTSEL                :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_P1SEL_POSN                                  0x0
#define _APFCON_P1SEL_POSITION                              0x0
#define _APFCON_P1SEL_SIZE                                  0x1
#define _APFCON_P1SEL_LENGTH                                0x1
#define _APFCON_P1SEL_MASK                                  0x1
#define _APFCON_P2SEL_POSN                                  0x1
#define _APFCON_P2SEL_POSITION                              0x1
#define _APFCON_P2SEL_SIZE                                  0x1
#define _APFCON_P2SEL_LENGTH                                0x1
#define _APFCON_P2SEL_MASK                                  0x2
#define _APFCON_TXCKSEL_POSN                                0x2
#define _APFCON_TXCKSEL_POSITION                            0x2
#define _APFCON_TXCKSEL_SIZE                                0x1
#define _APFCON_TXCKSEL_LENGTH                              0x1
#define _APFCON_TXCKSEL_MASK                                0x4
#define _APFCON_T1GSEL_POSN                                 0x3
#define _APFCON_T1GSEL_POSITION                             0x3
#define _APFCON_T1GSEL_SIZE                                 0x1
#define _APFCON_T1GSEL_LENGTH                               0x1
#define _APFCON_T1GSEL_MASK                                 0x8
#define _APFCON_CWGBSEL_POSN                                0x5
#define _APFCON_CWGBSEL_POSITION                            0x5
#define _APFCON_CWGBSEL_SIZE                                0x1
#define _APFCON_CWGBSEL_LENGTH                              0x1
#define _APFCON_CWGBSEL_MASK                                0x20
#define _APFCON_CWGASEL_POSN                                0x6
#define _APFCON_CWGASEL_POSITION                            0x6
#define _APFCON_CWGASEL_SIZE                                0x1
#define _APFCON_CWGASEL_LENGTH                              0x1
#define _APFCON_CWGASEL_MASK                                0x40
#define _APFCON_RXDTSEL_POSN                                0x7
#define _APFCON_RXDTSEL_POSITION                            0x7
#define _APFCON_RXDTSEL_SIZE                                0x1
#define _APFCON_RXDTSEL_LENGTH                              0x1
#define _APFCON_RXDTSEL_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned P1SEL                  :1;
        unsigned P2SEL                  :1;
        unsigned TXCKSEL                :1;
        unsigned T1GSEL                 :1;
        unsigned                        :1;
        unsigned CWGBSEL                :1;
        unsigned CWGASEL                :1;
        unsigned RXDTSEL                :1;
    };
} APFCON0bits_t;
extern volatile APFCON0bits_t APFCON0bits __at(0x11D);
// bitfield macros
#define _APFCON0_P1SEL_POSN                                 0x0
#define _APFCON0_P1SEL_POSITION                             0x0
#define _APFCON0_P1SEL_SIZE                                 0x1
#define _APFCON0_P1SEL_LENGTH                               0x1
#define _APFCON0_P1SEL_MASK                                 0x1
#define _APFCON0_P2SEL_POSN                                 0x1
#define _APFCON0_P2SEL_POSITION                             0x1
#define _APFCON0_P2SEL_SIZE                                 0x1
#define _APFCON0_P2SEL_LENGTH                               0x1
#define _APFCON0_P2SEL_MASK                                 0x2
#define _APFCON0_TXCKSEL_POSN                               0x2
#define _APFCON0_TXCKSEL_POSITION                           0x2
#define _APFCON0_TXCKSEL_SIZE                               0x1
#define _APFCON0_TXCKSEL_LENGTH                             0x1
#define _APFCON0_TXCKSEL_MASK                               0x4
#define _APFCON0_T1GSEL_POSN                                0x3
#define _APFCON0_T1GSEL_POSITION                            0x3
#define _APFCON0_T1GSEL_SIZE                                0x1
#define _APFCON0_T1GSEL_LENGTH                              0x1
#define _APFCON0_T1GSEL_MASK                                0x8
#define _APFCON0_CWGBSEL_POSN                               0x5
#define _APFCON0_CWGBSEL_POSITION                           0x5
#define _APFCON0_CWGBSEL_SIZE                               0x1
#define _APFCON0_CWGBSEL_LENGTH                             0x1
#define _APFCON0_CWGBSEL_MASK                               0x20
#define _APFCON0_CWGASEL_POSN                               0x6
#define _APFCON0_CWGASEL_POSITION                           0x6
#define _APFCON0_CWGASEL_SIZE                               0x1
#define _APFCON0_CWGASEL_LENGTH                             0x1
#define _APFCON0_CWGASEL_MASK                               0x40
#define _APFCON0_RXDTSEL_POSN                               0x7
#define _APFCON0_RXDTSEL_POSITION                           0x7
#define _APFCON0_RXDTSEL_SIZE                               0x1
#define _APFCON0_RXDTSEL_LENGTH                             0x1
#define _APFCON0_RXDTSEL_MASK                               0x80

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
        unsigned ANSELA                 :5;
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
#define _ANSELA_ANSELA_SIZE                                 0x5
#define _ANSELA_ANSELA_LENGTH                               0x5
#define _ANSELA_ANSELA_MASK                                 0x1F

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

// Register: ODCONA
#define ODCONA ODCONA
extern volatile unsigned char           ODCONA              __at(0x28C);
#ifndef _LIB_BUILD
asm("ODCONA equ 028Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODA0                   :1;
        unsigned ODA1                   :1;
        unsigned ODA2                   :1;
        unsigned                        :1;
        unsigned ODA4                   :1;
        unsigned ODA5                   :1;
    };
    struct {
        unsigned ODA                    :6;
    };
} ODCONAbits_t;
extern volatile ODCONAbits_t ODCONAbits __at(0x28C);
// bitfield macros
#define _ODCONA_ODA0_POSN                                   0x0
#define _ODCONA_ODA0_POSITION                               0x0
#define _ODCONA_ODA0_SIZE                                   0x1
#define _ODCONA_ODA0_LENGTH                                 0x1
#define _ODCONA_ODA0_MASK                                   0x1
#define _ODCONA_ODA1_POSN                                   0x1
#define _ODCONA_ODA1_POSITION                               0x1
#define _ODCONA_ODA1_SIZE                                   0x1
#define _ODCONA_ODA1_LENGTH                                 0x1
#define _ODCONA_ODA1_MASK                                   0x2
#define _ODCONA_ODA2_POSN                                   0x2
#define _ODCONA_ODA2_POSITION                               0x2
#define _ODCONA_ODA2_SIZE                                   0x1
#define _ODCONA_ODA2_LENGTH                                 0x1
#define _ODCONA_ODA2_MASK                                   0x4
#define _ODCONA_ODA4_POSN                                   0x4
#define _ODCONA_ODA4_POSITION                               0x4
#define _ODCONA_ODA4_SIZE                                   0x1
#define _ODCONA_ODA4_LENGTH                                 0x1
#define _ODCONA_ODA4_MASK                                   0x10
#define _ODCONA_ODA5_POSN                                   0x5
#define _ODCONA_ODA5_POSITION                               0x5
#define _ODCONA_ODA5_SIZE                                   0x1
#define _ODCONA_ODA5_LENGTH                                 0x1
#define _ODCONA_ODA5_MASK                                   0x20
#define _ODCONA_ODA_POSN                                    0x0
#define _ODCONA_ODA_POSITION                                0x0
#define _ODCONA_ODA_SIZE                                    0x6
#define _ODCONA_ODA_LENGTH                                  0x6
#define _ODCONA_ODA_MASK                                    0x3F

// Register: SLRCONA
#define SLRCONA SLRCONA
extern volatile unsigned char           SLRCONA             __at(0x30C);
#ifndef _LIB_BUILD
asm("SLRCONA equ 030Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRA0                  :1;
        unsigned SLRA1                  :1;
        unsigned SLRA2                  :1;
        unsigned                        :1;
        unsigned SLRA4                  :1;
        unsigned SLRA5                  :1;
    };
    struct {
        unsigned SLRA                   :6;
    };
} SLRCONAbits_t;
extern volatile SLRCONAbits_t SLRCONAbits __at(0x30C);
// bitfield macros
#define _SLRCONA_SLRA0_POSN                                 0x0
#define _SLRCONA_SLRA0_POSITION                             0x0
#define _SLRCONA_SLRA0_SIZE                                 0x1
#define _SLRCONA_SLRA0_LENGTH                               0x1
#define _SLRCONA_SLRA0_MASK                                 0x1
#define _SLRCONA_SLRA1_POSN                                 0x1
#define _SLRCONA_SLRA1_POSITION                             0x1
#define _SLRCONA_SLRA1_SIZE                                 0x1
#define _SLRCONA_SLRA1_LENGTH                               0x1
#define _SLRCONA_SLRA1_MASK                                 0x2
#define _SLRCONA_SLRA2_POSN                                 0x2
#define _SLRCONA_SLRA2_POSITION                             0x2
#define _SLRCONA_SLRA2_SIZE                                 0x1
#define _SLRCONA_SLRA2_LENGTH                               0x1
#define _SLRCONA_SLRA2_MASK                                 0x4
#define _SLRCONA_SLRA4_POSN                                 0x4
#define _SLRCONA_SLRA4_POSITION                             0x4
#define _SLRCONA_SLRA4_SIZE                                 0x1
#define _SLRCONA_SLRA4_LENGTH                               0x1
#define _SLRCONA_SLRA4_MASK                                 0x10
#define _SLRCONA_SLRA5_POSN                                 0x5
#define _SLRCONA_SLRA5_POSITION                             0x5
#define _SLRCONA_SLRA5_SIZE                                 0x1
#define _SLRCONA_SLRA5_LENGTH                               0x1
#define _SLRCONA_SLRA5_MASK                                 0x20
#define _SLRCONA_SLRA_POSN                                  0x0
#define _SLRCONA_SLRA_POSITION                              0x0
#define _SLRCONA_SLRA_SIZE                                  0x6
#define _SLRCONA_SLRA_LENGTH                                0x6
#define _SLRCONA_SLRA_MASK                                  0x3F

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
    };
    struct {
        unsigned INLVLA                 :6;
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
#define _INLVLA_INLVLA_POSN                                 0x0
#define _INLVLA_INLVLA_POSITION                             0x0
#define _INLVLA_INLVLA_SIZE                                 0x6
#define _INLVLA_INLVLA_LENGTH                               0x6
#define _INLVLA_INLVLA_MASK                                 0x3F

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
        unsigned                        :1;
        unsigned G1ASDSFLT              :1;
        unsigned G1ASDSC1               :1;
        unsigned                        :3;
        unsigned G1ARSEN                :1;
        unsigned G1ASE                  :1;
    };
} CWG1CON2bits_t;
extern volatile CWG1CON2bits_t CWG1CON2bits __at(0x695);
// bitfield macros
#define _CWG1CON2_G1ASDSFLT_POSN                            0x1
#define _CWG1CON2_G1ASDSFLT_POSITION                        0x1
#define _CWG1CON2_G1ASDSFLT_SIZE                            0x1
#define _CWG1CON2_G1ASDSFLT_LENGTH                          0x1
#define _CWG1CON2_G1ASDSFLT_MASK                            0x2
#define _CWG1CON2_G1ASDSC1_POSN                             0x2
#define _CWG1CON2_G1ASDSC1_POSITION                         0x2
#define _CWG1CON2_G1ASDSC1_SIZE                             0x1
#define _CWG1CON2_G1ASDSC1_LENGTH                           0x1
#define _CWG1CON2_G1ASDSC1_MASK                             0x4
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

// Register: PWMEN
#define PWMEN PWMEN
extern volatile unsigned char           PWMEN               __at(0xD8E);
#ifndef _LIB_BUILD
asm("PWMEN equ 0D8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1EN_A               :1;
        unsigned PWM2EN_A               :1;
        unsigned PWM3EN_A               :1;
    };
    struct {
        unsigned MPWM1EN                :1;
        unsigned MPWM2EN                :1;
        unsigned MPWM3EN                :1;
    };
} PWMENbits_t;
extern volatile PWMENbits_t PWMENbits __at(0xD8E);
// bitfield macros
#define _PWMEN_PWM1EN_A_POSN                                0x0
#define _PWMEN_PWM1EN_A_POSITION                            0x0
#define _PWMEN_PWM1EN_A_SIZE                                0x1
#define _PWMEN_PWM1EN_A_LENGTH                              0x1
#define _PWMEN_PWM1EN_A_MASK                                0x1
#define _PWMEN_PWM2EN_A_POSN                                0x1
#define _PWMEN_PWM2EN_A_POSITION                            0x1
#define _PWMEN_PWM2EN_A_SIZE                                0x1
#define _PWMEN_PWM2EN_A_LENGTH                              0x1
#define _PWMEN_PWM2EN_A_MASK                                0x2
#define _PWMEN_PWM3EN_A_POSN                                0x2
#define _PWMEN_PWM3EN_A_POSITION                            0x2
#define _PWMEN_PWM3EN_A_SIZE                                0x1
#define _PWMEN_PWM3EN_A_LENGTH                              0x1
#define _PWMEN_PWM3EN_A_MASK                                0x4
#define _PWMEN_MPWM1EN_POSN                                 0x0
#define _PWMEN_MPWM1EN_POSITION                             0x0
#define _PWMEN_MPWM1EN_SIZE                                 0x1
#define _PWMEN_MPWM1EN_LENGTH                               0x1
#define _PWMEN_MPWM1EN_MASK                                 0x1
#define _PWMEN_MPWM2EN_POSN                                 0x1
#define _PWMEN_MPWM2EN_POSITION                             0x1
#define _PWMEN_MPWM2EN_SIZE                                 0x1
#define _PWMEN_MPWM2EN_LENGTH                               0x1
#define _PWMEN_MPWM2EN_MASK                                 0x2
#define _PWMEN_MPWM3EN_POSN                                 0x2
#define _PWMEN_MPWM3EN_POSITION                             0x2
#define _PWMEN_MPWM3EN_SIZE                                 0x1
#define _PWMEN_MPWM3EN_LENGTH                               0x1
#define _PWMEN_MPWM3EN_MASK                                 0x4

// Register: PWMLD
#define PWMLD PWMLD
extern volatile unsigned char           PWMLD               __at(0xD8F);
#ifndef _LIB_BUILD
asm("PWMLD equ 0D8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1LDA_A              :1;
        unsigned PWM2LDA_A              :1;
        unsigned PWM3LDA_A              :1;
    };
    struct {
        unsigned MPWM1LD                :1;
        unsigned MPWM2LD                :1;
        unsigned MPWM3LD                :1;
    };
} PWMLDbits_t;
extern volatile PWMLDbits_t PWMLDbits __at(0xD8F);
// bitfield macros
#define _PWMLD_PWM1LDA_A_POSN                               0x0
#define _PWMLD_PWM1LDA_A_POSITION                           0x0
#define _PWMLD_PWM1LDA_A_SIZE                               0x1
#define _PWMLD_PWM1LDA_A_LENGTH                             0x1
#define _PWMLD_PWM1LDA_A_MASK                               0x1
#define _PWMLD_PWM2LDA_A_POSN                               0x1
#define _PWMLD_PWM2LDA_A_POSITION                           0x1
#define _PWMLD_PWM2LDA_A_SIZE                               0x1
#define _PWMLD_PWM2LDA_A_LENGTH                             0x1
#define _PWMLD_PWM2LDA_A_MASK                               0x2
#define _PWMLD_PWM3LDA_A_POSN                               0x2
#define _PWMLD_PWM3LDA_A_POSITION                           0x2
#define _PWMLD_PWM3LDA_A_SIZE                               0x1
#define _PWMLD_PWM3LDA_A_LENGTH                             0x1
#define _PWMLD_PWM3LDA_A_MASK                               0x4
#define _PWMLD_MPWM1LD_POSN                                 0x0
#define _PWMLD_MPWM1LD_POSITION                             0x0
#define _PWMLD_MPWM1LD_SIZE                                 0x1
#define _PWMLD_MPWM1LD_LENGTH                               0x1
#define _PWMLD_MPWM1LD_MASK                                 0x1
#define _PWMLD_MPWM2LD_POSN                                 0x1
#define _PWMLD_MPWM2LD_POSITION                             0x1
#define _PWMLD_MPWM2LD_SIZE                                 0x1
#define _PWMLD_MPWM2LD_LENGTH                               0x1
#define _PWMLD_MPWM2LD_MASK                                 0x2
#define _PWMLD_MPWM3LD_POSN                                 0x2
#define _PWMLD_MPWM3LD_POSITION                             0x2
#define _PWMLD_MPWM3LD_SIZE                                 0x1
#define _PWMLD_MPWM3LD_LENGTH                               0x1
#define _PWMLD_MPWM3LD_MASK                                 0x4

// Register: PWMOUT
#define PWMOUT PWMOUT
extern volatile unsigned char           PWMOUT              __at(0xD90);
#ifndef _LIB_BUILD
asm("PWMOUT equ 0D90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1OUT_A              :1;
        unsigned PWM2OUT_A              :1;
        unsigned PWM3OUT_A              :1;
    };
    struct {
        unsigned MPWM1OUT               :1;
        unsigned MPWM2OUT               :1;
        unsigned MPWM3OUT               :1;
    };
} PWMOUTbits_t;
extern volatile PWMOUTbits_t PWMOUTbits __at(0xD90);
// bitfield macros
#define _PWMOUT_PWM1OUT_A_POSN                              0x0
#define _PWMOUT_PWM1OUT_A_POSITION                          0x0
#define _PWMOUT_PWM1OUT_A_SIZE                              0x1
#define _PWMOUT_PWM1OUT_A_LENGTH                            0x1
#define _PWMOUT_PWM1OUT_A_MASK                              0x1
#define _PWMOUT_PWM2OUT_A_POSN                              0x1
#define _PWMOUT_PWM2OUT_A_POSITION                          0x1
#define _PWMOUT_PWM2OUT_A_SIZE                              0x1
#define _PWMOUT_PWM2OUT_A_LENGTH                            0x1
#define _PWMOUT_PWM2OUT_A_MASK                              0x2
#define _PWMOUT_PWM3OUT_A_POSN                              0x2
#define _PWMOUT_PWM3OUT_A_POSITION                          0x2
#define _PWMOUT_PWM3OUT_A_SIZE                              0x1
#define _PWMOUT_PWM3OUT_A_LENGTH                            0x1
#define _PWMOUT_PWM3OUT_A_MASK                              0x4
#define _PWMOUT_MPWM1OUT_POSN                               0x0
#define _PWMOUT_MPWM1OUT_POSITION                           0x0
#define _PWMOUT_MPWM1OUT_SIZE                               0x1
#define _PWMOUT_MPWM1OUT_LENGTH                             0x1
#define _PWMOUT_MPWM1OUT_MASK                               0x1
#define _PWMOUT_MPWM2OUT_POSN                               0x1
#define _PWMOUT_MPWM2OUT_POSITION                           0x1
#define _PWMOUT_MPWM2OUT_SIZE                               0x1
#define _PWMOUT_MPWM2OUT_LENGTH                             0x1
#define _PWMOUT_MPWM2OUT_MASK                               0x2
#define _PWMOUT_MPWM3OUT_POSN                               0x2
#define _PWMOUT_MPWM3OUT_POSITION                           0x2
#define _PWMOUT_MPWM3OUT_SIZE                               0x1
#define _PWMOUT_MPWM3OUT_LENGTH                             0x1
#define _PWMOUT_MPWM3OUT_MASK                               0x4

// Register: PWM1PH
#define PWM1PH PWM1PH
extern volatile unsigned short          PWM1PH              __at(0xD91);
#ifndef _LIB_BUILD
asm("PWM1PH equ 0D91h");
#endif

// Register: PWM1PHL
#define PWM1PHL PWM1PHL
extern volatile unsigned char           PWM1PHL             __at(0xD91);
#ifndef _LIB_BUILD
asm("PWM1PHL equ 0D91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :8;
    };
    struct {
        unsigned PWM1PHL0               :1;
        unsigned PWM1PHL1               :1;
        unsigned PWM1PHL2               :1;
        unsigned PWM1PHL3               :1;
        unsigned PWM1PHL4               :1;
        unsigned PWM1PHL5               :1;
        unsigned PWM1PHL6               :1;
        unsigned PWM1PHL7               :1;
    };
    struct {
        unsigned PWM1PHL                :8;
    };
} PWM1PHLbits_t;
extern volatile PWM1PHLbits_t PWM1PHLbits __at(0xD91);
// bitfield macros
#define _PWM1PHL_PH_POSN                                    0x0
#define _PWM1PHL_PH_POSITION                                0x0
#define _PWM1PHL_PH_SIZE                                    0x8
#define _PWM1PHL_PH_LENGTH                                  0x8
#define _PWM1PHL_PH_MASK                                    0xFF
#define _PWM1PHL_PWM1PHL0_POSN                              0x0
#define _PWM1PHL_PWM1PHL0_POSITION                          0x0
#define _PWM1PHL_PWM1PHL0_SIZE                              0x1
#define _PWM1PHL_PWM1PHL0_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL0_MASK                              0x1
#define _PWM1PHL_PWM1PHL1_POSN                              0x1
#define _PWM1PHL_PWM1PHL1_POSITION                          0x1
#define _PWM1PHL_PWM1PHL1_SIZE                              0x1
#define _PWM1PHL_PWM1PHL1_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL1_MASK                              0x2
#define _PWM1PHL_PWM1PHL2_POSN                              0x2
#define _PWM1PHL_PWM1PHL2_POSITION                          0x2
#define _PWM1PHL_PWM1PHL2_SIZE                              0x1
#define _PWM1PHL_PWM1PHL2_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL2_MASK                              0x4
#define _PWM1PHL_PWM1PHL3_POSN                              0x3
#define _PWM1PHL_PWM1PHL3_POSITION                          0x3
#define _PWM1PHL_PWM1PHL3_SIZE                              0x1
#define _PWM1PHL_PWM1PHL3_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL3_MASK                              0x8
#define _PWM1PHL_PWM1PHL4_POSN                              0x4
#define _PWM1PHL_PWM1PHL4_POSITION                          0x4
#define _PWM1PHL_PWM1PHL4_SIZE                              0x1
#define _PWM1PHL_PWM1PHL4_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL4_MASK                              0x10
#define _PWM1PHL_PWM1PHL5_POSN                              0x5
#define _PWM1PHL_PWM1PHL5_POSITION                          0x5
#define _PWM1PHL_PWM1PHL5_SIZE                              0x1
#define _PWM1PHL_PWM1PHL5_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL5_MASK                              0x20
#define _PWM1PHL_PWM1PHL6_POSN                              0x6
#define _PWM1PHL_PWM1PHL6_POSITION                          0x6
#define _PWM1PHL_PWM1PHL6_SIZE                              0x1
#define _PWM1PHL_PWM1PHL6_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL6_MASK                              0x40
#define _PWM1PHL_PWM1PHL7_POSN                              0x7
#define _PWM1PHL_PWM1PHL7_POSITION                          0x7
#define _PWM1PHL_PWM1PHL7_SIZE                              0x1
#define _PWM1PHL_PWM1PHL7_LENGTH                            0x1
#define _PWM1PHL_PWM1PHL7_MASK                              0x80
#define _PWM1PHL_PWM1PHL_POSN                               0x0
#define _PWM1PHL_PWM1PHL_POSITION                           0x0
#define _PWM1PHL_PWM1PHL_SIZE                               0x8
#define _PWM1PHL_PWM1PHL_LENGTH                             0x8
#define _PWM1PHL_PWM1PHL_MASK                               0xFF

// Register: PWM1PHH
#define PWM1PHH PWM1PHH
extern volatile unsigned char           PWM1PHH             __at(0xD92);
#ifndef _LIB_BUILD
asm("PWM1PHH equ 0D92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :8;
    };
    struct {
        unsigned PWM1PHH0               :1;
        unsigned PWM1PHH1               :1;
        unsigned PWM1PHH2               :1;
        unsigned PWM1PHH3               :1;
        unsigned PWM1PHH4               :1;
        unsigned PWM1PHH5               :1;
        unsigned PWM1PHH6               :1;
        unsigned PWM1PHH7               :1;
    };
    struct {
        unsigned PWM1PHH                :8;
    };
} PWM1PHHbits_t;
extern volatile PWM1PHHbits_t PWM1PHHbits __at(0xD92);
// bitfield macros
#define _PWM1PHH_PH_POSN                                    0x0
#define _PWM1PHH_PH_POSITION                                0x0
#define _PWM1PHH_PH_SIZE                                    0x8
#define _PWM1PHH_PH_LENGTH                                  0x8
#define _PWM1PHH_PH_MASK                                    0xFF
#define _PWM1PHH_PWM1PHH0_POSN                              0x0
#define _PWM1PHH_PWM1PHH0_POSITION                          0x0
#define _PWM1PHH_PWM1PHH0_SIZE                              0x1
#define _PWM1PHH_PWM1PHH0_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH0_MASK                              0x1
#define _PWM1PHH_PWM1PHH1_POSN                              0x1
#define _PWM1PHH_PWM1PHH1_POSITION                          0x1
#define _PWM1PHH_PWM1PHH1_SIZE                              0x1
#define _PWM1PHH_PWM1PHH1_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH1_MASK                              0x2
#define _PWM1PHH_PWM1PHH2_POSN                              0x2
#define _PWM1PHH_PWM1PHH2_POSITION                          0x2
#define _PWM1PHH_PWM1PHH2_SIZE                              0x1
#define _PWM1PHH_PWM1PHH2_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH2_MASK                              0x4
#define _PWM1PHH_PWM1PHH3_POSN                              0x3
#define _PWM1PHH_PWM1PHH3_POSITION                          0x3
#define _PWM1PHH_PWM1PHH3_SIZE                              0x1
#define _PWM1PHH_PWM1PHH3_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH3_MASK                              0x8
#define _PWM1PHH_PWM1PHH4_POSN                              0x4
#define _PWM1PHH_PWM1PHH4_POSITION                          0x4
#define _PWM1PHH_PWM1PHH4_SIZE                              0x1
#define _PWM1PHH_PWM1PHH4_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH4_MASK                              0x10
#define _PWM1PHH_PWM1PHH5_POSN                              0x5
#define _PWM1PHH_PWM1PHH5_POSITION                          0x5
#define _PWM1PHH_PWM1PHH5_SIZE                              0x1
#define _PWM1PHH_PWM1PHH5_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH5_MASK                              0x20
#define _PWM1PHH_PWM1PHH6_POSN                              0x6
#define _PWM1PHH_PWM1PHH6_POSITION                          0x6
#define _PWM1PHH_PWM1PHH6_SIZE                              0x1
#define _PWM1PHH_PWM1PHH6_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH6_MASK                              0x40
#define _PWM1PHH_PWM1PHH7_POSN                              0x7
#define _PWM1PHH_PWM1PHH7_POSITION                          0x7
#define _PWM1PHH_PWM1PHH7_SIZE                              0x1
#define _PWM1PHH_PWM1PHH7_LENGTH                            0x1
#define _PWM1PHH_PWM1PHH7_MASK                              0x80
#define _PWM1PHH_PWM1PHH_POSN                               0x0
#define _PWM1PHH_PWM1PHH_POSITION                           0x0
#define _PWM1PHH_PWM1PHH_SIZE                               0x8
#define _PWM1PHH_PWM1PHH_LENGTH                             0x8
#define _PWM1PHH_PWM1PHH_MASK                               0xFF

// Register: PWM1DC
#define PWM1DC PWM1DC
extern volatile unsigned short          PWM1DC              __at(0xD93);
#ifndef _LIB_BUILD
asm("PWM1DC equ 0D93h");
#endif

// Register: PWM1DCL
#define PWM1DCL PWM1DCL
extern volatile unsigned char           PWM1DCL             __at(0xD93);
#ifndef _LIB_BUILD
asm("PWM1DCL equ 0D93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :8;
    };
    struct {
        unsigned PWM1DCL0               :1;
        unsigned PWM1DCL1               :1;
        unsigned PWM1DCL2               :1;
        unsigned PWM1DCL3               :1;
        unsigned PWM1DCL4               :1;
        unsigned PWM1DCL5               :1;
        unsigned PWM1DCL6               :1;
        unsigned PWM1DCL7               :1;
    };
    struct {
        unsigned PWM1DCL                :8;
    };
} PWM1DCLbits_t;
extern volatile PWM1DCLbits_t PWM1DCLbits __at(0xD93);
// bitfield macros
#define _PWM1DCL_DC_POSN                                    0x0
#define _PWM1DCL_DC_POSITION                                0x0
#define _PWM1DCL_DC_SIZE                                    0x8
#define _PWM1DCL_DC_LENGTH                                  0x8
#define _PWM1DCL_DC_MASK                                    0xFF
#define _PWM1DCL_PWM1DCL0_POSN                              0x0
#define _PWM1DCL_PWM1DCL0_POSITION                          0x0
#define _PWM1DCL_PWM1DCL0_SIZE                              0x1
#define _PWM1DCL_PWM1DCL0_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL0_MASK                              0x1
#define _PWM1DCL_PWM1DCL1_POSN                              0x1
#define _PWM1DCL_PWM1DCL1_POSITION                          0x1
#define _PWM1DCL_PWM1DCL1_SIZE                              0x1
#define _PWM1DCL_PWM1DCL1_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL1_MASK                              0x2
#define _PWM1DCL_PWM1DCL2_POSN                              0x2
#define _PWM1DCL_PWM1DCL2_POSITION                          0x2
#define _PWM1DCL_PWM1DCL2_SIZE                              0x1
#define _PWM1DCL_PWM1DCL2_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL2_MASK                              0x4
#define _PWM1DCL_PWM1DCL3_POSN                              0x3
#define _PWM1DCL_PWM1DCL3_POSITION                          0x3
#define _PWM1DCL_PWM1DCL3_SIZE                              0x1
#define _PWM1DCL_PWM1DCL3_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL3_MASK                              0x8
#define _PWM1DCL_PWM1DCL4_POSN                              0x4
#define _PWM1DCL_PWM1DCL4_POSITION                          0x4
#define _PWM1DCL_PWM1DCL4_SIZE                              0x1
#define _PWM1DCL_PWM1DCL4_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL4_MASK                              0x10
#define _PWM1DCL_PWM1DCL5_POSN                              0x5
#define _PWM1DCL_PWM1DCL5_POSITION                          0x5
#define _PWM1DCL_PWM1DCL5_SIZE                              0x1
#define _PWM1DCL_PWM1DCL5_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL5_MASK                              0x20
#define _PWM1DCL_PWM1DCL6_POSN                              0x6
#define _PWM1DCL_PWM1DCL6_POSITION                          0x6
#define _PWM1DCL_PWM1DCL6_SIZE                              0x1
#define _PWM1DCL_PWM1DCL6_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL6_MASK                              0x40
#define _PWM1DCL_PWM1DCL7_POSN                              0x7
#define _PWM1DCL_PWM1DCL7_POSITION                          0x7
#define _PWM1DCL_PWM1DCL7_SIZE                              0x1
#define _PWM1DCL_PWM1DCL7_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL7_MASK                              0x80
#define _PWM1DCL_PWM1DCL_POSN                               0x0
#define _PWM1DCL_PWM1DCL_POSITION                           0x0
#define _PWM1DCL_PWM1DCL_SIZE                               0x8
#define _PWM1DCL_PWM1DCL_LENGTH                             0x8
#define _PWM1DCL_PWM1DCL_MASK                               0xFF

// Register: PWM1DCH
#define PWM1DCH PWM1DCH
extern volatile unsigned char           PWM1DCH             __at(0xD94);
#ifndef _LIB_BUILD
asm("PWM1DCH equ 0D94h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :8;
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
    struct {
        unsigned PWM1DCH                :8;
    };
} PWM1DCHbits_t;
extern volatile PWM1DCHbits_t PWM1DCHbits __at(0xD94);
// bitfield macros
#define _PWM1DCH_DC_POSN                                    0x0
#define _PWM1DCH_DC_POSITION                                0x0
#define _PWM1DCH_DC_SIZE                                    0x8
#define _PWM1DCH_DC_LENGTH                                  0x8
#define _PWM1DCH_DC_MASK                                    0xFF
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
#define _PWM1DCH_PWM1DCH_POSN                               0x0
#define _PWM1DCH_PWM1DCH_POSITION                           0x0
#define _PWM1DCH_PWM1DCH_SIZE                               0x8
#define _PWM1DCH_PWM1DCH_LENGTH                             0x8
#define _PWM1DCH_PWM1DCH_MASK                               0xFF

// Register: PWM1PR
#define PWM1PR PWM1PR
extern volatile unsigned short          PWM1PR              __at(0xD95);
#ifndef _LIB_BUILD
asm("PWM1PR equ 0D95h");
#endif

// Register: PWM1PRL
#define PWM1PRL PWM1PRL
extern volatile unsigned char           PWM1PRL             __at(0xD95);
#ifndef _LIB_BUILD
asm("PWM1PRL equ 0D95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned PWM1PRL0               :1;
        unsigned PWM1PRL1               :1;
        unsigned PWM1PRL2               :1;
        unsigned PWM1PRL3               :1;
        unsigned PWM1PRL4               :1;
        unsigned PWM1PRL5               :1;
        unsigned PWM1PRL6               :1;
        unsigned PWM1PRL7               :1;
    };
    struct {
        unsigned PWM1PRL                :8;
    };
} PWM1PRLbits_t;
extern volatile PWM1PRLbits_t PWM1PRLbits __at(0xD95);
// bitfield macros
#define _PWM1PRL_PR_POSN                                    0x0
#define _PWM1PRL_PR_POSITION                                0x0
#define _PWM1PRL_PR_SIZE                                    0x8
#define _PWM1PRL_PR_LENGTH                                  0x8
#define _PWM1PRL_PR_MASK                                    0xFF
#define _PWM1PRL_PWM1PRL0_POSN                              0x0
#define _PWM1PRL_PWM1PRL0_POSITION                          0x0
#define _PWM1PRL_PWM1PRL0_SIZE                              0x1
#define _PWM1PRL_PWM1PRL0_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL0_MASK                              0x1
#define _PWM1PRL_PWM1PRL1_POSN                              0x1
#define _PWM1PRL_PWM1PRL1_POSITION                          0x1
#define _PWM1PRL_PWM1PRL1_SIZE                              0x1
#define _PWM1PRL_PWM1PRL1_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL1_MASK                              0x2
#define _PWM1PRL_PWM1PRL2_POSN                              0x2
#define _PWM1PRL_PWM1PRL2_POSITION                          0x2
#define _PWM1PRL_PWM1PRL2_SIZE                              0x1
#define _PWM1PRL_PWM1PRL2_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL2_MASK                              0x4
#define _PWM1PRL_PWM1PRL3_POSN                              0x3
#define _PWM1PRL_PWM1PRL3_POSITION                          0x3
#define _PWM1PRL_PWM1PRL3_SIZE                              0x1
#define _PWM1PRL_PWM1PRL3_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL3_MASK                              0x8
#define _PWM1PRL_PWM1PRL4_POSN                              0x4
#define _PWM1PRL_PWM1PRL4_POSITION                          0x4
#define _PWM1PRL_PWM1PRL4_SIZE                              0x1
#define _PWM1PRL_PWM1PRL4_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL4_MASK                              0x10
#define _PWM1PRL_PWM1PRL5_POSN                              0x5
#define _PWM1PRL_PWM1PRL5_POSITION                          0x5
#define _PWM1PRL_PWM1PRL5_SIZE                              0x1
#define _PWM1PRL_PWM1PRL5_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL5_MASK                              0x20
#define _PWM1PRL_PWM1PRL6_POSN                              0x6
#define _PWM1PRL_PWM1PRL6_POSITION                          0x6
#define _PWM1PRL_PWM1PRL6_SIZE                              0x1
#define _PWM1PRL_PWM1PRL6_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL6_MASK                              0x40
#define _PWM1PRL_PWM1PRL7_POSN                              0x7
#define _PWM1PRL_PWM1PRL7_POSITION                          0x7
#define _PWM1PRL_PWM1PRL7_SIZE                              0x1
#define _PWM1PRL_PWM1PRL7_LENGTH                            0x1
#define _PWM1PRL_PWM1PRL7_MASK                              0x80
#define _PWM1PRL_PWM1PRL_POSN                               0x0
#define _PWM1PRL_PWM1PRL_POSITION                           0x0
#define _PWM1PRL_PWM1PRL_SIZE                               0x8
#define _PWM1PRL_PWM1PRL_LENGTH                             0x8
#define _PWM1PRL_PWM1PRL_MASK                               0xFF

// Register: PWM1PRH
#define PWM1PRH PWM1PRH
extern volatile unsigned char           PWM1PRH             __at(0xD96);
#ifndef _LIB_BUILD
asm("PWM1PRH equ 0D96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned PWM1PRH0               :1;
        unsigned PWM1PRH1               :1;
        unsigned PWM1PRH2               :1;
        unsigned PWM1PRH3               :1;
        unsigned PWM1PRH4               :1;
        unsigned PWM1PRH5               :1;
        unsigned PWM1PRH6               :1;
        unsigned PWM1PRH7               :1;
    };
    struct {
        unsigned PWM1PRH                :8;
    };
} PWM1PRHbits_t;
extern volatile PWM1PRHbits_t PWM1PRHbits __at(0xD96);
// bitfield macros
#define _PWM1PRH_PR_POSN                                    0x0
#define _PWM1PRH_PR_POSITION                                0x0
#define _PWM1PRH_PR_SIZE                                    0x8
#define _PWM1PRH_PR_LENGTH                                  0x8
#define _PWM1PRH_PR_MASK                                    0xFF
#define _PWM1PRH_PWM1PRH0_POSN                              0x0
#define _PWM1PRH_PWM1PRH0_POSITION                          0x0
#define _PWM1PRH_PWM1PRH0_SIZE                              0x1
#define _PWM1PRH_PWM1PRH0_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH0_MASK                              0x1
#define _PWM1PRH_PWM1PRH1_POSN                              0x1
#define _PWM1PRH_PWM1PRH1_POSITION                          0x1
#define _PWM1PRH_PWM1PRH1_SIZE                              0x1
#define _PWM1PRH_PWM1PRH1_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH1_MASK                              0x2
#define _PWM1PRH_PWM1PRH2_POSN                              0x2
#define _PWM1PRH_PWM1PRH2_POSITION                          0x2
#define _PWM1PRH_PWM1PRH2_SIZE                              0x1
#define _PWM1PRH_PWM1PRH2_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH2_MASK                              0x4
#define _PWM1PRH_PWM1PRH3_POSN                              0x3
#define _PWM1PRH_PWM1PRH3_POSITION                          0x3
#define _PWM1PRH_PWM1PRH3_SIZE                              0x1
#define _PWM1PRH_PWM1PRH3_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH3_MASK                              0x8
#define _PWM1PRH_PWM1PRH4_POSN                              0x4
#define _PWM1PRH_PWM1PRH4_POSITION                          0x4
#define _PWM1PRH_PWM1PRH4_SIZE                              0x1
#define _PWM1PRH_PWM1PRH4_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH4_MASK                              0x10
#define _PWM1PRH_PWM1PRH5_POSN                              0x5
#define _PWM1PRH_PWM1PRH5_POSITION                          0x5
#define _PWM1PRH_PWM1PRH5_SIZE                              0x1
#define _PWM1PRH_PWM1PRH5_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH5_MASK                              0x20
#define _PWM1PRH_PWM1PRH6_POSN                              0x6
#define _PWM1PRH_PWM1PRH6_POSITION                          0x6
#define _PWM1PRH_PWM1PRH6_SIZE                              0x1
#define _PWM1PRH_PWM1PRH6_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH6_MASK                              0x40
#define _PWM1PRH_PWM1PRH7_POSN                              0x7
#define _PWM1PRH_PWM1PRH7_POSITION                          0x7
#define _PWM1PRH_PWM1PRH7_SIZE                              0x1
#define _PWM1PRH_PWM1PRH7_LENGTH                            0x1
#define _PWM1PRH_PWM1PRH7_MASK                              0x80
#define _PWM1PRH_PWM1PRH_POSN                               0x0
#define _PWM1PRH_PWM1PRH_POSITION                           0x0
#define _PWM1PRH_PWM1PRH_SIZE                               0x8
#define _PWM1PRH_PWM1PRH_LENGTH                             0x8
#define _PWM1PRH_PWM1PRH_MASK                               0xFF

// Register: PWM1OF
#define PWM1OF PWM1OF
extern volatile unsigned short          PWM1OF              __at(0xD97);
#ifndef _LIB_BUILD
asm("PWM1OF equ 0D97h");
#endif

// Register: PWM1OFL
#define PWM1OFL PWM1OFL
extern volatile unsigned char           PWM1OFL             __at(0xD97);
#ifndef _LIB_BUILD
asm("PWM1OFL equ 0D97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OF                     :8;
    };
    struct {
        unsigned PWM1OFL0               :1;
        unsigned PWM1OFL1               :1;
        unsigned PWM1OFL2               :1;
        unsigned PWM1OFL3               :1;
        unsigned PWM1OFL4               :1;
        unsigned PWM1OFL5               :1;
        unsigned PWM1OFL6               :1;
        unsigned PWM1OFL7               :1;
    };
    struct {
        unsigned PWM1OFL                :8;
    };
} PWM1OFLbits_t;
extern volatile PWM1OFLbits_t PWM1OFLbits __at(0xD97);
// bitfield macros
#define _PWM1OFL_OF_POSN                                    0x0
#define _PWM1OFL_OF_POSITION                                0x0
#define _PWM1OFL_OF_SIZE                                    0x8
#define _PWM1OFL_OF_LENGTH                                  0x8
#define _PWM1OFL_OF_MASK                                    0xFF
#define _PWM1OFL_PWM1OFL0_POSN                              0x0
#define _PWM1OFL_PWM1OFL0_POSITION                          0x0
#define _PWM1OFL_PWM1OFL0_SIZE                              0x1
#define _PWM1OFL_PWM1OFL0_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL0_MASK                              0x1
#define _PWM1OFL_PWM1OFL1_POSN                              0x1
#define _PWM1OFL_PWM1OFL1_POSITION                          0x1
#define _PWM1OFL_PWM1OFL1_SIZE                              0x1
#define _PWM1OFL_PWM1OFL1_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL1_MASK                              0x2
#define _PWM1OFL_PWM1OFL2_POSN                              0x2
#define _PWM1OFL_PWM1OFL2_POSITION                          0x2
#define _PWM1OFL_PWM1OFL2_SIZE                              0x1
#define _PWM1OFL_PWM1OFL2_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL2_MASK                              0x4
#define _PWM1OFL_PWM1OFL3_POSN                              0x3
#define _PWM1OFL_PWM1OFL3_POSITION                          0x3
#define _PWM1OFL_PWM1OFL3_SIZE                              0x1
#define _PWM1OFL_PWM1OFL3_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL3_MASK                              0x8
#define _PWM1OFL_PWM1OFL4_POSN                              0x4
#define _PWM1OFL_PWM1OFL4_POSITION                          0x4
#define _PWM1OFL_PWM1OFL4_SIZE                              0x1
#define _PWM1OFL_PWM1OFL4_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL4_MASK                              0x10
#define _PWM1OFL_PWM1OFL5_POSN                              0x5
#define _PWM1OFL_PWM1OFL5_POSITION                          0x5
#define _PWM1OFL_PWM1OFL5_SIZE                              0x1
#define _PWM1OFL_PWM1OFL5_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL5_MASK                              0x20
#define _PWM1OFL_PWM1OFL6_POSN                              0x6
#define _PWM1OFL_PWM1OFL6_POSITION                          0x6
#define _PWM1OFL_PWM1OFL6_SIZE                              0x1
#define _PWM1OFL_PWM1OFL6_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL6_MASK                              0x40
#define _PWM1OFL_PWM1OFL7_POSN                              0x7
#define _PWM1OFL_PWM1OFL7_POSITION                          0x7
#define _PWM1OFL_PWM1OFL7_SIZE                              0x1
#define _PWM1OFL_PWM1OFL7_LENGTH                            0x1
#define _PWM1OFL_PWM1OFL7_MASK                              0x80
#define _PWM1OFL_PWM1OFL_POSN                               0x0
#define _PWM1OFL_PWM1OFL_POSITION                           0x0
#define _PWM1OFL_PWM1OFL_SIZE                               0x8
#define _PWM1OFL_PWM1OFL_LENGTH                             0x8
#define _PWM1OFL_PWM1OFL_MASK                               0xFF

// Register: PWM1OFH
#define PWM1OFH PWM1OFH
extern volatile unsigned char           PWM1OFH             __at(0xD98);
#ifndef _LIB_BUILD
asm("PWM1OFH equ 0D98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OF                     :8;
    };
    struct {
        unsigned PWM1OFH0               :1;
        unsigned PWM1OFH1               :1;
        unsigned PWM1OFH2               :1;
        unsigned PWM1OFH3               :1;
        unsigned PWM1OFH4               :1;
        unsigned PWM1OFH5               :1;
        unsigned PWM1OFH6               :1;
        unsigned PWM1OFH7               :1;
    };
    struct {
        unsigned PWM1OFH                :8;
    };
} PWM1OFHbits_t;
extern volatile PWM1OFHbits_t PWM1OFHbits __at(0xD98);
// bitfield macros
#define _PWM1OFH_OF_POSN                                    0x0
#define _PWM1OFH_OF_POSITION                                0x0
#define _PWM1OFH_OF_SIZE                                    0x8
#define _PWM1OFH_OF_LENGTH                                  0x8
#define _PWM1OFH_OF_MASK                                    0xFF
#define _PWM1OFH_PWM1OFH0_POSN                              0x0
#define _PWM1OFH_PWM1OFH0_POSITION                          0x0
#define _PWM1OFH_PWM1OFH0_SIZE                              0x1
#define _PWM1OFH_PWM1OFH0_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH0_MASK                              0x1
#define _PWM1OFH_PWM1OFH1_POSN                              0x1
#define _PWM1OFH_PWM1OFH1_POSITION                          0x1
#define _PWM1OFH_PWM1OFH1_SIZE                              0x1
#define _PWM1OFH_PWM1OFH1_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH1_MASK                              0x2
#define _PWM1OFH_PWM1OFH2_POSN                              0x2
#define _PWM1OFH_PWM1OFH2_POSITION                          0x2
#define _PWM1OFH_PWM1OFH2_SIZE                              0x1
#define _PWM1OFH_PWM1OFH2_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH2_MASK                              0x4
#define _PWM1OFH_PWM1OFH3_POSN                              0x3
#define _PWM1OFH_PWM1OFH3_POSITION                          0x3
#define _PWM1OFH_PWM1OFH3_SIZE                              0x1
#define _PWM1OFH_PWM1OFH3_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH3_MASK                              0x8
#define _PWM1OFH_PWM1OFH4_POSN                              0x4
#define _PWM1OFH_PWM1OFH4_POSITION                          0x4
#define _PWM1OFH_PWM1OFH4_SIZE                              0x1
#define _PWM1OFH_PWM1OFH4_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH4_MASK                              0x10
#define _PWM1OFH_PWM1OFH5_POSN                              0x5
#define _PWM1OFH_PWM1OFH5_POSITION                          0x5
#define _PWM1OFH_PWM1OFH5_SIZE                              0x1
#define _PWM1OFH_PWM1OFH5_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH5_MASK                              0x20
#define _PWM1OFH_PWM1OFH6_POSN                              0x6
#define _PWM1OFH_PWM1OFH6_POSITION                          0x6
#define _PWM1OFH_PWM1OFH6_SIZE                              0x1
#define _PWM1OFH_PWM1OFH6_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH6_MASK                              0x40
#define _PWM1OFH_PWM1OFH7_POSN                              0x7
#define _PWM1OFH_PWM1OFH7_POSITION                          0x7
#define _PWM1OFH_PWM1OFH7_SIZE                              0x1
#define _PWM1OFH_PWM1OFH7_LENGTH                            0x1
#define _PWM1OFH_PWM1OFH7_MASK                              0x80
#define _PWM1OFH_PWM1OFH_POSN                               0x0
#define _PWM1OFH_PWM1OFH_POSITION                           0x0
#define _PWM1OFH_PWM1OFH_SIZE                               0x8
#define _PWM1OFH_PWM1OFH_LENGTH                             0x8
#define _PWM1OFH_PWM1OFH_MASK                               0xFF

// Register: PWM1TMR
#define PWM1TMR PWM1TMR
extern volatile unsigned short          PWM1TMR             __at(0xD99);
#ifndef _LIB_BUILD
asm("PWM1TMR equ 0D99h");
#endif

// Register: PWM1TMRL
#define PWM1TMRL PWM1TMRL
extern volatile unsigned char           PWM1TMRL            __at(0xD99);
#ifndef _LIB_BUILD
asm("PWM1TMRL equ 0D99h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned PWM1TMRL0              :1;
        unsigned PWM1TMRL1              :1;
        unsigned PWM1TMRL2              :1;
        unsigned PWM1TMRL3              :1;
        unsigned PWM1TMRL4              :1;
        unsigned PWM1TMRL5              :1;
        unsigned PWM1TMRL6              :1;
        unsigned PWM1TMRL7              :1;
    };
    struct {
        unsigned PWM1TMRL               :8;
    };
} PWM1TMRLbits_t;
extern volatile PWM1TMRLbits_t PWM1TMRLbits __at(0xD99);
// bitfield macros
#define _PWM1TMRL_TMR_POSN                                  0x0
#define _PWM1TMRL_TMR_POSITION                              0x0
#define _PWM1TMRL_TMR_SIZE                                  0x8
#define _PWM1TMRL_TMR_LENGTH                                0x8
#define _PWM1TMRL_TMR_MASK                                  0xFF
#define _PWM1TMRL_PWM1TMRL0_POSN                            0x0
#define _PWM1TMRL_PWM1TMRL0_POSITION                        0x0
#define _PWM1TMRL_PWM1TMRL0_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL0_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL0_MASK                            0x1
#define _PWM1TMRL_PWM1TMRL1_POSN                            0x1
#define _PWM1TMRL_PWM1TMRL1_POSITION                        0x1
#define _PWM1TMRL_PWM1TMRL1_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL1_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL1_MASK                            0x2
#define _PWM1TMRL_PWM1TMRL2_POSN                            0x2
#define _PWM1TMRL_PWM1TMRL2_POSITION                        0x2
#define _PWM1TMRL_PWM1TMRL2_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL2_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL2_MASK                            0x4
#define _PWM1TMRL_PWM1TMRL3_POSN                            0x3
#define _PWM1TMRL_PWM1TMRL3_POSITION                        0x3
#define _PWM1TMRL_PWM1TMRL3_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL3_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL3_MASK                            0x8
#define _PWM1TMRL_PWM1TMRL4_POSN                            0x4
#define _PWM1TMRL_PWM1TMRL4_POSITION                        0x4
#define _PWM1TMRL_PWM1TMRL4_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL4_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL4_MASK                            0x10
#define _PWM1TMRL_PWM1TMRL5_POSN                            0x5
#define _PWM1TMRL_PWM1TMRL5_POSITION                        0x5
#define _PWM1TMRL_PWM1TMRL5_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL5_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL5_MASK                            0x20
#define _PWM1TMRL_PWM1TMRL6_POSN                            0x6
#define _PWM1TMRL_PWM1TMRL6_POSITION                        0x6
#define _PWM1TMRL_PWM1TMRL6_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL6_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL6_MASK                            0x40
#define _PWM1TMRL_PWM1TMRL7_POSN                            0x7
#define _PWM1TMRL_PWM1TMRL7_POSITION                        0x7
#define _PWM1TMRL_PWM1TMRL7_SIZE                            0x1
#define _PWM1TMRL_PWM1TMRL7_LENGTH                          0x1
#define _PWM1TMRL_PWM1TMRL7_MASK                            0x80
#define _PWM1TMRL_PWM1TMRL_POSN                             0x0
#define _PWM1TMRL_PWM1TMRL_POSITION                         0x0
#define _PWM1TMRL_PWM1TMRL_SIZE                             0x8
#define _PWM1TMRL_PWM1TMRL_LENGTH                           0x8
#define _PWM1TMRL_PWM1TMRL_MASK                             0xFF

// Register: PWM1TMRH
#define PWM1TMRH PWM1TMRH
extern volatile unsigned char           PWM1TMRH            __at(0xD9A);
#ifndef _LIB_BUILD
asm("PWM1TMRH equ 0D9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned PWM1TMRH0              :1;
        unsigned PWM1TMRH1              :1;
        unsigned PWM1TMRH2              :1;
        unsigned PWM1TMRH3              :1;
        unsigned PWM1TMRH4              :1;
        unsigned PWM1TMRH5              :1;
        unsigned PWM1TMRH6              :1;
        unsigned PWM1TMRH7              :1;
    };
    struct {
        unsigned PWM1TMRH               :8;
    };
} PWM1TMRHbits_t;
extern volatile PWM1TMRHbits_t PWM1TMRHbits __at(0xD9A);
// bitfield macros
#define _PWM1TMRH_TMR_POSN                                  0x0
#define _PWM1TMRH_TMR_POSITION                              0x0
#define _PWM1TMRH_TMR_SIZE                                  0x8
#define _PWM1TMRH_TMR_LENGTH                                0x8
#define _PWM1TMRH_TMR_MASK                                  0xFF
#define _PWM1TMRH_PWM1TMRH0_POSN                            0x0
#define _PWM1TMRH_PWM1TMRH0_POSITION                        0x0
#define _PWM1TMRH_PWM1TMRH0_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH0_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH0_MASK                            0x1
#define _PWM1TMRH_PWM1TMRH1_POSN                            0x1
#define _PWM1TMRH_PWM1TMRH1_POSITION                        0x1
#define _PWM1TMRH_PWM1TMRH1_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH1_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH1_MASK                            0x2
#define _PWM1TMRH_PWM1TMRH2_POSN                            0x2
#define _PWM1TMRH_PWM1TMRH2_POSITION                        0x2
#define _PWM1TMRH_PWM1TMRH2_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH2_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH2_MASK                            0x4
#define _PWM1TMRH_PWM1TMRH3_POSN                            0x3
#define _PWM1TMRH_PWM1TMRH3_POSITION                        0x3
#define _PWM1TMRH_PWM1TMRH3_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH3_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH3_MASK                            0x8
#define _PWM1TMRH_PWM1TMRH4_POSN                            0x4
#define _PWM1TMRH_PWM1TMRH4_POSITION                        0x4
#define _PWM1TMRH_PWM1TMRH4_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH4_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH4_MASK                            0x10
#define _PWM1TMRH_PWM1TMRH5_POSN                            0x5
#define _PWM1TMRH_PWM1TMRH5_POSITION                        0x5
#define _PWM1TMRH_PWM1TMRH5_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH5_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH5_MASK                            0x20
#define _PWM1TMRH_PWM1TMRH6_POSN                            0x6
#define _PWM1TMRH_PWM1TMRH6_POSITION                        0x6
#define _PWM1TMRH_PWM1TMRH6_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH6_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH6_MASK                            0x40
#define _PWM1TMRH_PWM1TMRH7_POSN                            0x7
#define _PWM1TMRH_PWM1TMRH7_POSITION                        0x7
#define _PWM1TMRH_PWM1TMRH7_SIZE                            0x1
#define _PWM1TMRH_PWM1TMRH7_LENGTH                          0x1
#define _PWM1TMRH_PWM1TMRH7_MASK                            0x80
#define _PWM1TMRH_PWM1TMRH_POSN                             0x0
#define _PWM1TMRH_PWM1TMRH_POSITION                         0x0
#define _PWM1TMRH_PWM1TMRH_SIZE                             0x8
#define _PWM1TMRH_PWM1TMRH_LENGTH                           0x8
#define _PWM1TMRH_PWM1TMRH_MASK                             0xFF

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0xD9B);
#ifndef _LIB_BUILD
asm("PWM1CON equ 0D9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned MODE                   :2;
        unsigned POL                    :1;
        unsigned OUT                    :1;
        unsigned OE                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned PWM1MODE0              :1;
        unsigned PWM1MODE1              :1;
    };
    struct {
        unsigned                        :2;
        unsigned PWM1MODE               :2;
        unsigned PWM1POL                :1;
        unsigned PWM1OUT                :1;
        unsigned PWM1OE                 :1;
        unsigned PWM1EN                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0xD9B);
// bitfield macros
#define _PWM1CON_MODE_POSN                                  0x2
#define _PWM1CON_MODE_POSITION                              0x2
#define _PWM1CON_MODE_SIZE                                  0x2
#define _PWM1CON_MODE_LENGTH                                0x2
#define _PWM1CON_MODE_MASK                                  0xC
#define _PWM1CON_POL_POSN                                   0x4
#define _PWM1CON_POL_POSITION                               0x4
#define _PWM1CON_POL_SIZE                                   0x1
#define _PWM1CON_POL_LENGTH                                 0x1
#define _PWM1CON_POL_MASK                                   0x10
#define _PWM1CON_OUT_POSN                                   0x5
#define _PWM1CON_OUT_POSITION                               0x5
#define _PWM1CON_OUT_SIZE                                   0x1
#define _PWM1CON_OUT_LENGTH                                 0x1
#define _PWM1CON_OUT_MASK                                   0x20
#define _PWM1CON_OE_POSN                                    0x6
#define _PWM1CON_OE_POSITION                                0x6
#define _PWM1CON_OE_SIZE                                    0x1
#define _PWM1CON_OE_LENGTH                                  0x1
#define _PWM1CON_OE_MASK                                    0x40
#define _PWM1CON_EN_POSN                                    0x7
#define _PWM1CON_EN_POSITION                                0x7
#define _PWM1CON_EN_SIZE                                    0x1
#define _PWM1CON_EN_LENGTH                                  0x1
#define _PWM1CON_EN_MASK                                    0x80
#define _PWM1CON_PWM1MODE0_POSN                             0x2
#define _PWM1CON_PWM1MODE0_POSITION                         0x2
#define _PWM1CON_PWM1MODE0_SIZE                             0x1
#define _PWM1CON_PWM1MODE0_LENGTH                           0x1
#define _PWM1CON_PWM1MODE0_MASK                             0x4
#define _PWM1CON_PWM1MODE1_POSN                             0x3
#define _PWM1CON_PWM1MODE1_POSITION                         0x3
#define _PWM1CON_PWM1MODE1_SIZE                             0x1
#define _PWM1CON_PWM1MODE1_LENGTH                           0x1
#define _PWM1CON_PWM1MODE1_MASK                             0x8
#define _PWM1CON_PWM1MODE_POSN                              0x2
#define _PWM1CON_PWM1MODE_POSITION                          0x2
#define _PWM1CON_PWM1MODE_SIZE                              0x2
#define _PWM1CON_PWM1MODE_LENGTH                            0x2
#define _PWM1CON_PWM1MODE_MASK                              0xC
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
#define _PWM1CON_MODE0_POSN                                 0x2
#define _PWM1CON_MODE0_POSITION                             0x2
#define _PWM1CON_MODE0_SIZE                                 0x1
#define _PWM1CON_MODE0_LENGTH                               0x1
#define _PWM1CON_MODE0_MASK                                 0x4
#define _PWM1CON_MODE1_POSN                                 0x3
#define _PWM1CON_MODE1_POSITION                             0x3
#define _PWM1CON_MODE1_SIZE                                 0x1
#define _PWM1CON_MODE1_LENGTH                               0x1
#define _PWM1CON_MODE1_MASK                                 0x8

// Register: PWM1INTE
#define PWM1INTE PWM1INTE
extern volatile unsigned char           PWM1INTE            __at(0xD9C);
#ifndef _LIB_BUILD
asm("PWM1INTE equ 0D9Ch");
#endif
// aliases
extern volatile unsigned char           PWM1INTCON          __at(0xD9C);
#ifndef _LIB_BUILD
asm("PWM1INTCON equ 0D9Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRIE                   :1;
        unsigned DCIE                   :1;
        unsigned PHIE                   :1;
        unsigned OFIE                   :1;
    };
    struct {
        unsigned PWM1PRIE               :1;
        unsigned PWM1DCIE               :1;
        unsigned PWM1PHIE               :1;
        unsigned PWM1OFIE               :1;
    };
} PWM1INTEbits_t;
extern volatile PWM1INTEbits_t PWM1INTEbits __at(0xD9C);
// bitfield macros
#define _PWM1INTE_PRIE_POSN                                 0x0
#define _PWM1INTE_PRIE_POSITION                             0x0
#define _PWM1INTE_PRIE_SIZE                                 0x1
#define _PWM1INTE_PRIE_LENGTH                               0x1
#define _PWM1INTE_PRIE_MASK                                 0x1
#define _PWM1INTE_DCIE_POSN                                 0x1
#define _PWM1INTE_DCIE_POSITION                             0x1
#define _PWM1INTE_DCIE_SIZE                                 0x1
#define _PWM1INTE_DCIE_LENGTH                               0x1
#define _PWM1INTE_DCIE_MASK                                 0x2
#define _PWM1INTE_PHIE_POSN                                 0x2
#define _PWM1INTE_PHIE_POSITION                             0x2
#define _PWM1INTE_PHIE_SIZE                                 0x1
#define _PWM1INTE_PHIE_LENGTH                               0x1
#define _PWM1INTE_PHIE_MASK                                 0x4
#define _PWM1INTE_OFIE_POSN                                 0x3
#define _PWM1INTE_OFIE_POSITION                             0x3
#define _PWM1INTE_OFIE_SIZE                                 0x1
#define _PWM1INTE_OFIE_LENGTH                               0x1
#define _PWM1INTE_OFIE_MASK                                 0x8
#define _PWM1INTE_PWM1PRIE_POSN                             0x0
#define _PWM1INTE_PWM1PRIE_POSITION                         0x0
#define _PWM1INTE_PWM1PRIE_SIZE                             0x1
#define _PWM1INTE_PWM1PRIE_LENGTH                           0x1
#define _PWM1INTE_PWM1PRIE_MASK                             0x1
#define _PWM1INTE_PWM1DCIE_POSN                             0x1
#define _PWM1INTE_PWM1DCIE_POSITION                         0x1
#define _PWM1INTE_PWM1DCIE_SIZE                             0x1
#define _PWM1INTE_PWM1DCIE_LENGTH                           0x1
#define _PWM1INTE_PWM1DCIE_MASK                             0x2
#define _PWM1INTE_PWM1PHIE_POSN                             0x2
#define _PWM1INTE_PWM1PHIE_POSITION                         0x2
#define _PWM1INTE_PWM1PHIE_SIZE                             0x1
#define _PWM1INTE_PWM1PHIE_LENGTH                           0x1
#define _PWM1INTE_PWM1PHIE_MASK                             0x4
#define _PWM1INTE_PWM1OFIE_POSN                             0x3
#define _PWM1INTE_PWM1OFIE_POSITION                         0x3
#define _PWM1INTE_PWM1OFIE_SIZE                             0x1
#define _PWM1INTE_PWM1OFIE_LENGTH                           0x1
#define _PWM1INTE_PWM1OFIE_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned PRIE                   :1;
        unsigned DCIE                   :1;
        unsigned PHIE                   :1;
        unsigned OFIE                   :1;
    };
    struct {
        unsigned PWM1PRIE               :1;
        unsigned PWM1DCIE               :1;
        unsigned PWM1PHIE               :1;
        unsigned PWM1OFIE               :1;
    };
} PWM1INTCONbits_t;
extern volatile PWM1INTCONbits_t PWM1INTCONbits __at(0xD9C);
// bitfield macros
#define _PWM1INTCON_PRIE_POSN                               0x0
#define _PWM1INTCON_PRIE_POSITION                           0x0
#define _PWM1INTCON_PRIE_SIZE                               0x1
#define _PWM1INTCON_PRIE_LENGTH                             0x1
#define _PWM1INTCON_PRIE_MASK                               0x1
#define _PWM1INTCON_DCIE_POSN                               0x1
#define _PWM1INTCON_DCIE_POSITION                           0x1
#define _PWM1INTCON_DCIE_SIZE                               0x1
#define _PWM1INTCON_DCIE_LENGTH                             0x1
#define _PWM1INTCON_DCIE_MASK                               0x2
#define _PWM1INTCON_PHIE_POSN                               0x2
#define _PWM1INTCON_PHIE_POSITION                           0x2
#define _PWM1INTCON_PHIE_SIZE                               0x1
#define _PWM1INTCON_PHIE_LENGTH                             0x1
#define _PWM1INTCON_PHIE_MASK                               0x4
#define _PWM1INTCON_OFIE_POSN                               0x3
#define _PWM1INTCON_OFIE_POSITION                           0x3
#define _PWM1INTCON_OFIE_SIZE                               0x1
#define _PWM1INTCON_OFIE_LENGTH                             0x1
#define _PWM1INTCON_OFIE_MASK                               0x8
#define _PWM1INTCON_PWM1PRIE_POSN                           0x0
#define _PWM1INTCON_PWM1PRIE_POSITION                       0x0
#define _PWM1INTCON_PWM1PRIE_SIZE                           0x1
#define _PWM1INTCON_PWM1PRIE_LENGTH                         0x1
#define _PWM1INTCON_PWM1PRIE_MASK                           0x1
#define _PWM1INTCON_PWM1DCIE_POSN                           0x1
#define _PWM1INTCON_PWM1DCIE_POSITION                       0x1
#define _PWM1INTCON_PWM1DCIE_SIZE                           0x1
#define _PWM1INTCON_PWM1DCIE_LENGTH                         0x1
#define _PWM1INTCON_PWM1DCIE_MASK                           0x2
#define _PWM1INTCON_PWM1PHIE_POSN                           0x2
#define _PWM1INTCON_PWM1PHIE_POSITION                       0x2
#define _PWM1INTCON_PWM1PHIE_SIZE                           0x1
#define _PWM1INTCON_PWM1PHIE_LENGTH                         0x1
#define _PWM1INTCON_PWM1PHIE_MASK                           0x4
#define _PWM1INTCON_PWM1OFIE_POSN                           0x3
#define _PWM1INTCON_PWM1OFIE_POSITION                       0x3
#define _PWM1INTCON_PWM1OFIE_SIZE                           0x1
#define _PWM1INTCON_PWM1OFIE_LENGTH                         0x1
#define _PWM1INTCON_PWM1OFIE_MASK                           0x8

// Register: PWM1INTF
#define PWM1INTF PWM1INTF
extern volatile unsigned char           PWM1INTF            __at(0xD9D);
#ifndef _LIB_BUILD
asm("PWM1INTF equ 0D9Dh");
#endif
// aliases
extern volatile unsigned char           PWM1INTFLG          __at(0xD9D);
#ifndef _LIB_BUILD
asm("PWM1INTFLG equ 0D9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRIF                   :1;
        unsigned DCIF                   :1;
        unsigned PHIF                   :1;
        unsigned OFIF                   :1;
    };
    struct {
        unsigned PWM1PRIF               :1;
        unsigned PWM1DCIF               :1;
        unsigned PWM1PHIF               :1;
        unsigned PWM1OFIF               :1;
    };
} PWM1INTFbits_t;
extern volatile PWM1INTFbits_t PWM1INTFbits __at(0xD9D);
// bitfield macros
#define _PWM1INTF_PRIF_POSN                                 0x0
#define _PWM1INTF_PRIF_POSITION                             0x0
#define _PWM1INTF_PRIF_SIZE                                 0x1
#define _PWM1INTF_PRIF_LENGTH                               0x1
#define _PWM1INTF_PRIF_MASK                                 0x1
#define _PWM1INTF_DCIF_POSN                                 0x1
#define _PWM1INTF_DCIF_POSITION                             0x1
#define _PWM1INTF_DCIF_SIZE                                 0x1
#define _PWM1INTF_DCIF_LENGTH                               0x1
#define _PWM1INTF_DCIF_MASK                                 0x2
#define _PWM1INTF_PHIF_POSN                                 0x2
#define _PWM1INTF_PHIF_POSITION                             0x2
#define _PWM1INTF_PHIF_SIZE                                 0x1
#define _PWM1INTF_PHIF_LENGTH                               0x1
#define _PWM1INTF_PHIF_MASK                                 0x4
#define _PWM1INTF_OFIF_POSN                                 0x3
#define _PWM1INTF_OFIF_POSITION                             0x3
#define _PWM1INTF_OFIF_SIZE                                 0x1
#define _PWM1INTF_OFIF_LENGTH                               0x1
#define _PWM1INTF_OFIF_MASK                                 0x8
#define _PWM1INTF_PWM1PRIF_POSN                             0x0
#define _PWM1INTF_PWM1PRIF_POSITION                         0x0
#define _PWM1INTF_PWM1PRIF_SIZE                             0x1
#define _PWM1INTF_PWM1PRIF_LENGTH                           0x1
#define _PWM1INTF_PWM1PRIF_MASK                             0x1
#define _PWM1INTF_PWM1DCIF_POSN                             0x1
#define _PWM1INTF_PWM1DCIF_POSITION                         0x1
#define _PWM1INTF_PWM1DCIF_SIZE                             0x1
#define _PWM1INTF_PWM1DCIF_LENGTH                           0x1
#define _PWM1INTF_PWM1DCIF_MASK                             0x2
#define _PWM1INTF_PWM1PHIF_POSN                             0x2
#define _PWM1INTF_PWM1PHIF_POSITION                         0x2
#define _PWM1INTF_PWM1PHIF_SIZE                             0x1
#define _PWM1INTF_PWM1PHIF_LENGTH                           0x1
#define _PWM1INTF_PWM1PHIF_MASK                             0x4
#define _PWM1INTF_PWM1OFIF_POSN                             0x3
#define _PWM1INTF_PWM1OFIF_POSITION                         0x3
#define _PWM1INTF_PWM1OFIF_SIZE                             0x1
#define _PWM1INTF_PWM1OFIF_LENGTH                           0x1
#define _PWM1INTF_PWM1OFIF_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned PRIF                   :1;
        unsigned DCIF                   :1;
        unsigned PHIF                   :1;
        unsigned OFIF                   :1;
    };
    struct {
        unsigned PWM1PRIF               :1;
        unsigned PWM1DCIF               :1;
        unsigned PWM1PHIF               :1;
        unsigned PWM1OFIF               :1;
    };
} PWM1INTFLGbits_t;
extern volatile PWM1INTFLGbits_t PWM1INTFLGbits __at(0xD9D);
// bitfield macros
#define _PWM1INTFLG_PRIF_POSN                               0x0
#define _PWM1INTFLG_PRIF_POSITION                           0x0
#define _PWM1INTFLG_PRIF_SIZE                               0x1
#define _PWM1INTFLG_PRIF_LENGTH                             0x1
#define _PWM1INTFLG_PRIF_MASK                               0x1
#define _PWM1INTFLG_DCIF_POSN                               0x1
#define _PWM1INTFLG_DCIF_POSITION                           0x1
#define _PWM1INTFLG_DCIF_SIZE                               0x1
#define _PWM1INTFLG_DCIF_LENGTH                             0x1
#define _PWM1INTFLG_DCIF_MASK                               0x2
#define _PWM1INTFLG_PHIF_POSN                               0x2
#define _PWM1INTFLG_PHIF_POSITION                           0x2
#define _PWM1INTFLG_PHIF_SIZE                               0x1
#define _PWM1INTFLG_PHIF_LENGTH                             0x1
#define _PWM1INTFLG_PHIF_MASK                               0x4
#define _PWM1INTFLG_OFIF_POSN                               0x3
#define _PWM1INTFLG_OFIF_POSITION                           0x3
#define _PWM1INTFLG_OFIF_SIZE                               0x1
#define _PWM1INTFLG_OFIF_LENGTH                             0x1
#define _PWM1INTFLG_OFIF_MASK                               0x8
#define _PWM1INTFLG_PWM1PRIF_POSN                           0x0
#define _PWM1INTFLG_PWM1PRIF_POSITION                       0x0
#define _PWM1INTFLG_PWM1PRIF_SIZE                           0x1
#define _PWM1INTFLG_PWM1PRIF_LENGTH                         0x1
#define _PWM1INTFLG_PWM1PRIF_MASK                           0x1
#define _PWM1INTFLG_PWM1DCIF_POSN                           0x1
#define _PWM1INTFLG_PWM1DCIF_POSITION                       0x1
#define _PWM1INTFLG_PWM1DCIF_SIZE                           0x1
#define _PWM1INTFLG_PWM1DCIF_LENGTH                         0x1
#define _PWM1INTFLG_PWM1DCIF_MASK                           0x2
#define _PWM1INTFLG_PWM1PHIF_POSN                           0x2
#define _PWM1INTFLG_PWM1PHIF_POSITION                       0x2
#define _PWM1INTFLG_PWM1PHIF_SIZE                           0x1
#define _PWM1INTFLG_PWM1PHIF_LENGTH                         0x1
#define _PWM1INTFLG_PWM1PHIF_MASK                           0x4
#define _PWM1INTFLG_PWM1OFIF_POSN                           0x3
#define _PWM1INTFLG_PWM1OFIF_POSITION                       0x3
#define _PWM1INTFLG_PWM1OFIF_SIZE                           0x1
#define _PWM1INTFLG_PWM1OFIF_LENGTH                         0x1
#define _PWM1INTFLG_PWM1OFIF_MASK                           0x8

// Register: PWM1CLKCON
#define PWM1CLKCON PWM1CLKCON
extern volatile unsigned char           PWM1CLKCON          __at(0xD9E);
#ifndef _LIB_BUILD
asm("PWM1CLKCON equ 0D9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :2;
        unsigned                        :2;
        unsigned PS                     :3;
    };
    struct {
        unsigned PWM1CS0                :1;
        unsigned PWM1CS1                :1;
        unsigned                        :2;
        unsigned PWM1PS0                :1;
        unsigned PWM1PS1                :1;
        unsigned PWM1PS2                :1;
    };
    struct {
        unsigned PWM1CS                 :3;
        unsigned                        :1;
        unsigned PWM1PS                 :3;
    };
    struct {
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned                        :2;
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
    };
} PWM1CLKCONbits_t;
extern volatile PWM1CLKCONbits_t PWM1CLKCONbits __at(0xD9E);
// bitfield macros
#define _PWM1CLKCON_CS_POSN                                 0x0
#define _PWM1CLKCON_CS_POSITION                             0x0
#define _PWM1CLKCON_CS_SIZE                                 0x2
#define _PWM1CLKCON_CS_LENGTH                               0x2
#define _PWM1CLKCON_CS_MASK                                 0x3
#define _PWM1CLKCON_PS_POSN                                 0x4
#define _PWM1CLKCON_PS_POSITION                             0x4
#define _PWM1CLKCON_PS_SIZE                                 0x3
#define _PWM1CLKCON_PS_LENGTH                               0x3
#define _PWM1CLKCON_PS_MASK                                 0x70
#define _PWM1CLKCON_PWM1CS0_POSN                            0x0
#define _PWM1CLKCON_PWM1CS0_POSITION                        0x0
#define _PWM1CLKCON_PWM1CS0_SIZE                            0x1
#define _PWM1CLKCON_PWM1CS0_LENGTH                          0x1
#define _PWM1CLKCON_PWM1CS0_MASK                            0x1
#define _PWM1CLKCON_PWM1CS1_POSN                            0x1
#define _PWM1CLKCON_PWM1CS1_POSITION                        0x1
#define _PWM1CLKCON_PWM1CS1_SIZE                            0x1
#define _PWM1CLKCON_PWM1CS1_LENGTH                          0x1
#define _PWM1CLKCON_PWM1CS1_MASK                            0x2
#define _PWM1CLKCON_PWM1PS0_POSN                            0x4
#define _PWM1CLKCON_PWM1PS0_POSITION                        0x4
#define _PWM1CLKCON_PWM1PS0_SIZE                            0x1
#define _PWM1CLKCON_PWM1PS0_LENGTH                          0x1
#define _PWM1CLKCON_PWM1PS0_MASK                            0x10
#define _PWM1CLKCON_PWM1PS1_POSN                            0x5
#define _PWM1CLKCON_PWM1PS1_POSITION                        0x5
#define _PWM1CLKCON_PWM1PS1_SIZE                            0x1
#define _PWM1CLKCON_PWM1PS1_LENGTH                          0x1
#define _PWM1CLKCON_PWM1PS1_MASK                            0x20
#define _PWM1CLKCON_PWM1PS2_POSN                            0x6
#define _PWM1CLKCON_PWM1PS2_POSITION                        0x6
#define _PWM1CLKCON_PWM1PS2_SIZE                            0x1
#define _PWM1CLKCON_PWM1PS2_LENGTH                          0x1
#define _PWM1CLKCON_PWM1PS2_MASK                            0x40
#define _PWM1CLKCON_PWM1CS_POSN                             0x0
#define _PWM1CLKCON_PWM1CS_POSITION                         0x0
#define _PWM1CLKCON_PWM1CS_SIZE                             0x3
#define _PWM1CLKCON_PWM1CS_LENGTH                           0x3
#define _PWM1CLKCON_PWM1CS_MASK                             0x7
#define _PWM1CLKCON_PWM1PS_POSN                             0x4
#define _PWM1CLKCON_PWM1PS_POSITION                         0x4
#define _PWM1CLKCON_PWM1PS_SIZE                             0x3
#define _PWM1CLKCON_PWM1PS_LENGTH                           0x3
#define _PWM1CLKCON_PWM1PS_MASK                             0x70
#define _PWM1CLKCON_CS0_POSN                                0x0
#define _PWM1CLKCON_CS0_POSITION                            0x0
#define _PWM1CLKCON_CS0_SIZE                                0x1
#define _PWM1CLKCON_CS0_LENGTH                              0x1
#define _PWM1CLKCON_CS0_MASK                                0x1
#define _PWM1CLKCON_CS1_POSN                                0x1
#define _PWM1CLKCON_CS1_POSITION                            0x1
#define _PWM1CLKCON_CS1_SIZE                                0x1
#define _PWM1CLKCON_CS1_LENGTH                              0x1
#define _PWM1CLKCON_CS1_MASK                                0x2
#define _PWM1CLKCON_PS0_POSN                                0x4
#define _PWM1CLKCON_PS0_POSITION                            0x4
#define _PWM1CLKCON_PS0_SIZE                                0x1
#define _PWM1CLKCON_PS0_LENGTH                              0x1
#define _PWM1CLKCON_PS0_MASK                                0x10
#define _PWM1CLKCON_PS1_POSN                                0x5
#define _PWM1CLKCON_PS1_POSITION                            0x5
#define _PWM1CLKCON_PS1_SIZE                                0x1
#define _PWM1CLKCON_PS1_LENGTH                              0x1
#define _PWM1CLKCON_PS1_MASK                                0x20
#define _PWM1CLKCON_PS2_POSN                                0x6
#define _PWM1CLKCON_PS2_POSITION                            0x6
#define _PWM1CLKCON_PS2_SIZE                                0x1
#define _PWM1CLKCON_PS2_LENGTH                              0x1
#define _PWM1CLKCON_PS2_MASK                                0x40

// Register: PWM1LDCON
#define PWM1LDCON PWM1LDCON
extern volatile unsigned char           PWM1LDCON           __at(0xD9F);
#ifndef _LIB_BUILD
asm("PWM1LDCON equ 0D9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDS                    :2;
        unsigned                        :4;
        unsigned LDT                    :1;
        unsigned LDA                    :1;
    };
    struct {
        unsigned PWM1LDS0               :1;
        unsigned PWM1LDS1               :1;
    };
    struct {
        unsigned PWM1LDS                :2;
        unsigned                        :4;
        unsigned PWM1LDM                :1;
        unsigned PWM1LD                 :1;
    };
    struct {
        unsigned LDS0                   :1;
        unsigned LDS1                   :1;
    };
} PWM1LDCONbits_t;
extern volatile PWM1LDCONbits_t PWM1LDCONbits __at(0xD9F);
// bitfield macros
#define _PWM1LDCON_LDS_POSN                                 0x0
#define _PWM1LDCON_LDS_POSITION                             0x0
#define _PWM1LDCON_LDS_SIZE                                 0x2
#define _PWM1LDCON_LDS_LENGTH                               0x2
#define _PWM1LDCON_LDS_MASK                                 0x3
#define _PWM1LDCON_LDT_POSN                                 0x6
#define _PWM1LDCON_LDT_POSITION                             0x6
#define _PWM1LDCON_LDT_SIZE                                 0x1
#define _PWM1LDCON_LDT_LENGTH                               0x1
#define _PWM1LDCON_LDT_MASK                                 0x40
#define _PWM1LDCON_LDA_POSN                                 0x7
#define _PWM1LDCON_LDA_POSITION                             0x7
#define _PWM1LDCON_LDA_SIZE                                 0x1
#define _PWM1LDCON_LDA_LENGTH                               0x1
#define _PWM1LDCON_LDA_MASK                                 0x80
#define _PWM1LDCON_PWM1LDS0_POSN                            0x0
#define _PWM1LDCON_PWM1LDS0_POSITION                        0x0
#define _PWM1LDCON_PWM1LDS0_SIZE                            0x1
#define _PWM1LDCON_PWM1LDS0_LENGTH                          0x1
#define _PWM1LDCON_PWM1LDS0_MASK                            0x1
#define _PWM1LDCON_PWM1LDS1_POSN                            0x1
#define _PWM1LDCON_PWM1LDS1_POSITION                        0x1
#define _PWM1LDCON_PWM1LDS1_SIZE                            0x1
#define _PWM1LDCON_PWM1LDS1_LENGTH                          0x1
#define _PWM1LDCON_PWM1LDS1_MASK                            0x2
#define _PWM1LDCON_PWM1LDS_POSN                             0x0
#define _PWM1LDCON_PWM1LDS_POSITION                         0x0
#define _PWM1LDCON_PWM1LDS_SIZE                             0x2
#define _PWM1LDCON_PWM1LDS_LENGTH                           0x2
#define _PWM1LDCON_PWM1LDS_MASK                             0x3
#define _PWM1LDCON_PWM1LDM_POSN                             0x6
#define _PWM1LDCON_PWM1LDM_POSITION                         0x6
#define _PWM1LDCON_PWM1LDM_SIZE                             0x1
#define _PWM1LDCON_PWM1LDM_LENGTH                           0x1
#define _PWM1LDCON_PWM1LDM_MASK                             0x40
#define _PWM1LDCON_PWM1LD_POSN                              0x7
#define _PWM1LDCON_PWM1LD_POSITION                          0x7
#define _PWM1LDCON_PWM1LD_SIZE                              0x1
#define _PWM1LDCON_PWM1LD_LENGTH                            0x1
#define _PWM1LDCON_PWM1LD_MASK                              0x80
#define _PWM1LDCON_LDS0_POSN                                0x0
#define _PWM1LDCON_LDS0_POSITION                            0x0
#define _PWM1LDCON_LDS0_SIZE                                0x1
#define _PWM1LDCON_LDS0_LENGTH                              0x1
#define _PWM1LDCON_LDS0_MASK                                0x1
#define _PWM1LDCON_LDS1_POSN                                0x1
#define _PWM1LDCON_LDS1_POSITION                            0x1
#define _PWM1LDCON_LDS1_SIZE                                0x1
#define _PWM1LDCON_LDS1_LENGTH                              0x1
#define _PWM1LDCON_LDS1_MASK                                0x2

// Register: PWM1OFCON
#define PWM1OFCON PWM1OFCON
extern volatile unsigned char           PWM1OFCON           __at(0xDA0);
#ifndef _LIB_BUILD
asm("PWM1OFCON equ 0DA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OFS                    :2;
        unsigned                        :2;
        unsigned OFO                    :1;
        unsigned OFM                    :2;
    };
    struct {
        unsigned PWM1OFS0               :1;
        unsigned PWM1OFS1               :1;
        unsigned                        :3;
        unsigned PWM1OFM0               :1;
        unsigned PWM1OFM1               :1;
    };
    struct {
        unsigned PWM1OFS                :2;
        unsigned                        :2;
        unsigned PWM1OFMC               :1;
        unsigned PWM1OFM                :2;
    };
    struct {
        unsigned OFS0                   :1;
        unsigned OFS1                   :1;
        unsigned                        :3;
        unsigned OFM0                   :1;
        unsigned OFM1                   :1;
    };
} PWM1OFCONbits_t;
extern volatile PWM1OFCONbits_t PWM1OFCONbits __at(0xDA0);
// bitfield macros
#define _PWM1OFCON_OFS_POSN                                 0x0
#define _PWM1OFCON_OFS_POSITION                             0x0
#define _PWM1OFCON_OFS_SIZE                                 0x2
#define _PWM1OFCON_OFS_LENGTH                               0x2
#define _PWM1OFCON_OFS_MASK                                 0x3
#define _PWM1OFCON_OFO_POSN                                 0x4
#define _PWM1OFCON_OFO_POSITION                             0x4
#define _PWM1OFCON_OFO_SIZE                                 0x1
#define _PWM1OFCON_OFO_LENGTH                               0x1
#define _PWM1OFCON_OFO_MASK                                 0x10
#define _PWM1OFCON_OFM_POSN                                 0x5
#define _PWM1OFCON_OFM_POSITION                             0x5
#define _PWM1OFCON_OFM_SIZE                                 0x2
#define _PWM1OFCON_OFM_LENGTH                               0x2
#define _PWM1OFCON_OFM_MASK                                 0x60
#define _PWM1OFCON_PWM1OFS0_POSN                            0x0
#define _PWM1OFCON_PWM1OFS0_POSITION                        0x0
#define _PWM1OFCON_PWM1OFS0_SIZE                            0x1
#define _PWM1OFCON_PWM1OFS0_LENGTH                          0x1
#define _PWM1OFCON_PWM1OFS0_MASK                            0x1
#define _PWM1OFCON_PWM1OFS1_POSN                            0x1
#define _PWM1OFCON_PWM1OFS1_POSITION                        0x1
#define _PWM1OFCON_PWM1OFS1_SIZE                            0x1
#define _PWM1OFCON_PWM1OFS1_LENGTH                          0x1
#define _PWM1OFCON_PWM1OFS1_MASK                            0x2
#define _PWM1OFCON_PWM1OFM0_POSN                            0x5
#define _PWM1OFCON_PWM1OFM0_POSITION                        0x5
#define _PWM1OFCON_PWM1OFM0_SIZE                            0x1
#define _PWM1OFCON_PWM1OFM0_LENGTH                          0x1
#define _PWM1OFCON_PWM1OFM0_MASK                            0x20
#define _PWM1OFCON_PWM1OFM1_POSN                            0x6
#define _PWM1OFCON_PWM1OFM1_POSITION                        0x6
#define _PWM1OFCON_PWM1OFM1_SIZE                            0x1
#define _PWM1OFCON_PWM1OFM1_LENGTH                          0x1
#define _PWM1OFCON_PWM1OFM1_MASK                            0x40
#define _PWM1OFCON_PWM1OFS_POSN                             0x0
#define _PWM1OFCON_PWM1OFS_POSITION                         0x0
#define _PWM1OFCON_PWM1OFS_SIZE                             0x2
#define _PWM1OFCON_PWM1OFS_LENGTH                           0x2
#define _PWM1OFCON_PWM1OFS_MASK                             0x3
#define _PWM1OFCON_PWM1OFMC_POSN                            0x4
#define _PWM1OFCON_PWM1OFMC_POSITION                        0x4
#define _PWM1OFCON_PWM1OFMC_SIZE                            0x1
#define _PWM1OFCON_PWM1OFMC_LENGTH                          0x1
#define _PWM1OFCON_PWM1OFMC_MASK                            0x10
#define _PWM1OFCON_PWM1OFM_POSN                             0x5
#define _PWM1OFCON_PWM1OFM_POSITION                         0x5
#define _PWM1OFCON_PWM1OFM_SIZE                             0x2
#define _PWM1OFCON_PWM1OFM_LENGTH                           0x2
#define _PWM1OFCON_PWM1OFM_MASK                             0x60
#define _PWM1OFCON_OFS0_POSN                                0x0
#define _PWM1OFCON_OFS0_POSITION                            0x0
#define _PWM1OFCON_OFS0_SIZE                                0x1
#define _PWM1OFCON_OFS0_LENGTH                              0x1
#define _PWM1OFCON_OFS0_MASK                                0x1
#define _PWM1OFCON_OFS1_POSN                                0x1
#define _PWM1OFCON_OFS1_POSITION                            0x1
#define _PWM1OFCON_OFS1_SIZE                                0x1
#define _PWM1OFCON_OFS1_LENGTH                              0x1
#define _PWM1OFCON_OFS1_MASK                                0x2
#define _PWM1OFCON_OFM0_POSN                                0x5
#define _PWM1OFCON_OFM0_POSITION                            0x5
#define _PWM1OFCON_OFM0_SIZE                                0x1
#define _PWM1OFCON_OFM0_LENGTH                              0x1
#define _PWM1OFCON_OFM0_MASK                                0x20
#define _PWM1OFCON_OFM1_POSN                                0x6
#define _PWM1OFCON_OFM1_POSITION                            0x6
#define _PWM1OFCON_OFM1_SIZE                                0x1
#define _PWM1OFCON_OFM1_LENGTH                              0x1
#define _PWM1OFCON_OFM1_MASK                                0x40

// Register: PWM2PH
#define PWM2PH PWM2PH
extern volatile unsigned short          PWM2PH              __at(0xDA1);
#ifndef _LIB_BUILD
asm("PWM2PH equ 0DA1h");
#endif

// Register: PWM2PHL
#define PWM2PHL PWM2PHL
extern volatile unsigned char           PWM2PHL             __at(0xDA1);
#ifndef _LIB_BUILD
asm("PWM2PHL equ 0DA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :8;
    };
    struct {
        unsigned PWM2PHL0               :1;
        unsigned PWM2PHL1               :1;
        unsigned PWM2PHL2               :1;
        unsigned PWM2PHL3               :1;
        unsigned PWM2PHL4               :1;
        unsigned PWM2PHL5               :1;
        unsigned PWM2PHL6               :1;
        unsigned PWM2PHL7               :1;
    };
    struct {
        unsigned PWM2PHL                :8;
    };
} PWM2PHLbits_t;
extern volatile PWM2PHLbits_t PWM2PHLbits __at(0xDA1);
// bitfield macros
#define _PWM2PHL_PH_POSN                                    0x0
#define _PWM2PHL_PH_POSITION                                0x0
#define _PWM2PHL_PH_SIZE                                    0x8
#define _PWM2PHL_PH_LENGTH                                  0x8
#define _PWM2PHL_PH_MASK                                    0xFF
#define _PWM2PHL_PWM2PHL0_POSN                              0x0
#define _PWM2PHL_PWM2PHL0_POSITION                          0x0
#define _PWM2PHL_PWM2PHL0_SIZE                              0x1
#define _PWM2PHL_PWM2PHL0_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL0_MASK                              0x1
#define _PWM2PHL_PWM2PHL1_POSN                              0x1
#define _PWM2PHL_PWM2PHL1_POSITION                          0x1
#define _PWM2PHL_PWM2PHL1_SIZE                              0x1
#define _PWM2PHL_PWM2PHL1_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL1_MASK                              0x2
#define _PWM2PHL_PWM2PHL2_POSN                              0x2
#define _PWM2PHL_PWM2PHL2_POSITION                          0x2
#define _PWM2PHL_PWM2PHL2_SIZE                              0x1
#define _PWM2PHL_PWM2PHL2_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL2_MASK                              0x4
#define _PWM2PHL_PWM2PHL3_POSN                              0x3
#define _PWM2PHL_PWM2PHL3_POSITION                          0x3
#define _PWM2PHL_PWM2PHL3_SIZE                              0x1
#define _PWM2PHL_PWM2PHL3_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL3_MASK                              0x8
#define _PWM2PHL_PWM2PHL4_POSN                              0x4
#define _PWM2PHL_PWM2PHL4_POSITION                          0x4
#define _PWM2PHL_PWM2PHL4_SIZE                              0x1
#define _PWM2PHL_PWM2PHL4_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL4_MASK                              0x10
#define _PWM2PHL_PWM2PHL5_POSN                              0x5
#define _PWM2PHL_PWM2PHL5_POSITION                          0x5
#define _PWM2PHL_PWM2PHL5_SIZE                              0x1
#define _PWM2PHL_PWM2PHL5_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL5_MASK                              0x20
#define _PWM2PHL_PWM2PHL6_POSN                              0x6
#define _PWM2PHL_PWM2PHL6_POSITION                          0x6
#define _PWM2PHL_PWM2PHL6_SIZE                              0x1
#define _PWM2PHL_PWM2PHL6_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL6_MASK                              0x40
#define _PWM2PHL_PWM2PHL7_POSN                              0x7
#define _PWM2PHL_PWM2PHL7_POSITION                          0x7
#define _PWM2PHL_PWM2PHL7_SIZE                              0x1
#define _PWM2PHL_PWM2PHL7_LENGTH                            0x1
#define _PWM2PHL_PWM2PHL7_MASK                              0x80
#define _PWM2PHL_PWM2PHL_POSN                               0x0
#define _PWM2PHL_PWM2PHL_POSITION                           0x0
#define _PWM2PHL_PWM2PHL_SIZE                               0x8
#define _PWM2PHL_PWM2PHL_LENGTH                             0x8
#define _PWM2PHL_PWM2PHL_MASK                               0xFF

// Register: PWM2PHH
#define PWM2PHH PWM2PHH
extern volatile unsigned char           PWM2PHH             __at(0xDA2);
#ifndef _LIB_BUILD
asm("PWM2PHH equ 0DA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :8;
    };
    struct {
        unsigned PWM2PHH0               :1;
        unsigned PWM2PHH1               :1;
        unsigned PWM2PHH2               :1;
        unsigned PWM2PHH3               :1;
        unsigned PWM2PHH4               :1;
        unsigned PWM2PHH5               :1;
        unsigned PWM2PHH6               :1;
        unsigned PWM2PHH7               :1;
    };
    struct {
        unsigned PWM2PHH                :8;
    };
} PWM2PHHbits_t;
extern volatile PWM2PHHbits_t PWM2PHHbits __at(0xDA2);
// bitfield macros
#define _PWM2PHH_PH_POSN                                    0x0
#define _PWM2PHH_PH_POSITION                                0x0
#define _PWM2PHH_PH_SIZE                                    0x8
#define _PWM2PHH_PH_LENGTH                                  0x8
#define _PWM2PHH_PH_MASK                                    0xFF
#define _PWM2PHH_PWM2PHH0_POSN                              0x0
#define _PWM2PHH_PWM2PHH0_POSITION                          0x0
#define _PWM2PHH_PWM2PHH0_SIZE                              0x1
#define _PWM2PHH_PWM2PHH0_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH0_MASK                              0x1
#define _PWM2PHH_PWM2PHH1_POSN                              0x1
#define _PWM2PHH_PWM2PHH1_POSITION                          0x1
#define _PWM2PHH_PWM2PHH1_SIZE                              0x1
#define _PWM2PHH_PWM2PHH1_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH1_MASK                              0x2
#define _PWM2PHH_PWM2PHH2_POSN                              0x2
#define _PWM2PHH_PWM2PHH2_POSITION                          0x2
#define _PWM2PHH_PWM2PHH2_SIZE                              0x1
#define _PWM2PHH_PWM2PHH2_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH2_MASK                              0x4
#define _PWM2PHH_PWM2PHH3_POSN                              0x3
#define _PWM2PHH_PWM2PHH3_POSITION                          0x3
#define _PWM2PHH_PWM2PHH3_SIZE                              0x1
#define _PWM2PHH_PWM2PHH3_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH3_MASK                              0x8
#define _PWM2PHH_PWM2PHH4_POSN                              0x4
#define _PWM2PHH_PWM2PHH4_POSITION                          0x4
#define _PWM2PHH_PWM2PHH4_SIZE                              0x1
#define _PWM2PHH_PWM2PHH4_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH4_MASK                              0x10
#define _PWM2PHH_PWM2PHH5_POSN                              0x5
#define _PWM2PHH_PWM2PHH5_POSITION                          0x5
#define _PWM2PHH_PWM2PHH5_SIZE                              0x1
#define _PWM2PHH_PWM2PHH5_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH5_MASK                              0x20
#define _PWM2PHH_PWM2PHH6_POSN                              0x6
#define _PWM2PHH_PWM2PHH6_POSITION                          0x6
#define _PWM2PHH_PWM2PHH6_SIZE                              0x1
#define _PWM2PHH_PWM2PHH6_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH6_MASK                              0x40
#define _PWM2PHH_PWM2PHH7_POSN                              0x7
#define _PWM2PHH_PWM2PHH7_POSITION                          0x7
#define _PWM2PHH_PWM2PHH7_SIZE                              0x1
#define _PWM2PHH_PWM2PHH7_LENGTH                            0x1
#define _PWM2PHH_PWM2PHH7_MASK                              0x80
#define _PWM2PHH_PWM2PHH_POSN                               0x0
#define _PWM2PHH_PWM2PHH_POSITION                           0x0
#define _PWM2PHH_PWM2PHH_SIZE                               0x8
#define _PWM2PHH_PWM2PHH_LENGTH                             0x8
#define _PWM2PHH_PWM2PHH_MASK                               0xFF

// Register: PWM2DC
#define PWM2DC PWM2DC
extern volatile unsigned short          PWM2DC              __at(0xDA3);
#ifndef _LIB_BUILD
asm("PWM2DC equ 0DA3h");
#endif

// Register: PWM2DCL
#define PWM2DCL PWM2DCL
extern volatile unsigned char           PWM2DCL             __at(0xDA3);
#ifndef _LIB_BUILD
asm("PWM2DCL equ 0DA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :8;
    };
    struct {
        unsigned PWM2DCL0               :1;
        unsigned PWM2DCL1               :1;
        unsigned PWM2DCL2               :1;
        unsigned PWM2DCL3               :1;
        unsigned PWM2DCL4               :1;
        unsigned PWM2DCL5               :1;
        unsigned PWM2DCL6               :1;
        unsigned PWM2DCL7               :1;
    };
    struct {
        unsigned PWM2DCL                :8;
    };
} PWM2DCLbits_t;
extern volatile PWM2DCLbits_t PWM2DCLbits __at(0xDA3);
// bitfield macros
#define _PWM2DCL_DC_POSN                                    0x0
#define _PWM2DCL_DC_POSITION                                0x0
#define _PWM2DCL_DC_SIZE                                    0x8
#define _PWM2DCL_DC_LENGTH                                  0x8
#define _PWM2DCL_DC_MASK                                    0xFF
#define _PWM2DCL_PWM2DCL0_POSN                              0x0
#define _PWM2DCL_PWM2DCL0_POSITION                          0x0
#define _PWM2DCL_PWM2DCL0_SIZE                              0x1
#define _PWM2DCL_PWM2DCL0_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL0_MASK                              0x1
#define _PWM2DCL_PWM2DCL1_POSN                              0x1
#define _PWM2DCL_PWM2DCL1_POSITION                          0x1
#define _PWM2DCL_PWM2DCL1_SIZE                              0x1
#define _PWM2DCL_PWM2DCL1_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL1_MASK                              0x2
#define _PWM2DCL_PWM2DCL2_POSN                              0x2
#define _PWM2DCL_PWM2DCL2_POSITION                          0x2
#define _PWM2DCL_PWM2DCL2_SIZE                              0x1
#define _PWM2DCL_PWM2DCL2_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL2_MASK                              0x4
#define _PWM2DCL_PWM2DCL3_POSN                              0x3
#define _PWM2DCL_PWM2DCL3_POSITION                          0x3
#define _PWM2DCL_PWM2DCL3_SIZE                              0x1
#define _PWM2DCL_PWM2DCL3_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL3_MASK                              0x8
#define _PWM2DCL_PWM2DCL4_POSN                              0x4
#define _PWM2DCL_PWM2DCL4_POSITION                          0x4
#define _PWM2DCL_PWM2DCL4_SIZE                              0x1
#define _PWM2DCL_PWM2DCL4_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL4_MASK                              0x10
#define _PWM2DCL_PWM2DCL5_POSN                              0x5
#define _PWM2DCL_PWM2DCL5_POSITION                          0x5
#define _PWM2DCL_PWM2DCL5_SIZE                              0x1
#define _PWM2DCL_PWM2DCL5_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL5_MASK                              0x20
#define _PWM2DCL_PWM2DCL6_POSN                              0x6
#define _PWM2DCL_PWM2DCL6_POSITION                          0x6
#define _PWM2DCL_PWM2DCL6_SIZE                              0x1
#define _PWM2DCL_PWM2DCL6_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL6_MASK                              0x40
#define _PWM2DCL_PWM2DCL7_POSN                              0x7
#define _PWM2DCL_PWM2DCL7_POSITION                          0x7
#define _PWM2DCL_PWM2DCL7_SIZE                              0x1
#define _PWM2DCL_PWM2DCL7_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL7_MASK                              0x80
#define _PWM2DCL_PWM2DCL_POSN                               0x0
#define _PWM2DCL_PWM2DCL_POSITION                           0x0
#define _PWM2DCL_PWM2DCL_SIZE                               0x8
#define _PWM2DCL_PWM2DCL_LENGTH                             0x8
#define _PWM2DCL_PWM2DCL_MASK                               0xFF

// Register: PWM2DCH
#define PWM2DCH PWM2DCH
extern volatile unsigned char           PWM2DCH             __at(0xDA4);
#ifndef _LIB_BUILD
asm("PWM2DCH equ 0DA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :8;
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
    struct {
        unsigned PWM2DCH                :8;
    };
} PWM2DCHbits_t;
extern volatile PWM2DCHbits_t PWM2DCHbits __at(0xDA4);
// bitfield macros
#define _PWM2DCH_DC_POSN                                    0x0
#define _PWM2DCH_DC_POSITION                                0x0
#define _PWM2DCH_DC_SIZE                                    0x8
#define _PWM2DCH_DC_LENGTH                                  0x8
#define _PWM2DCH_DC_MASK                                    0xFF
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
#define _PWM2DCH_PWM2DCH_POSN                               0x0
#define _PWM2DCH_PWM2DCH_POSITION                           0x0
#define _PWM2DCH_PWM2DCH_SIZE                               0x8
#define _PWM2DCH_PWM2DCH_LENGTH                             0x8
#define _PWM2DCH_PWM2DCH_MASK                               0xFF

// Register: PWM2PR
#define PWM2PR PWM2PR
extern volatile unsigned short          PWM2PR              __at(0xDA5);
#ifndef _LIB_BUILD
asm("PWM2PR equ 0DA5h");
#endif

// Register: PWM2PRL
#define PWM2PRL PWM2PRL
extern volatile unsigned char           PWM2PRL             __at(0xDA5);
#ifndef _LIB_BUILD
asm("PWM2PRL equ 0DA5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned PWM2PRL0               :1;
        unsigned PWM2PRL1               :1;
        unsigned PWM2PRL2               :1;
        unsigned PWM2PRL3               :1;
        unsigned PWM2PRL4               :1;
        unsigned PWM2PRL5               :1;
        unsigned PWM2PRL6               :1;
        unsigned PWM2PRL7               :1;
    };
    struct {
        unsigned PWM2PRL                :8;
    };
} PWM2PRLbits_t;
extern volatile PWM2PRLbits_t PWM2PRLbits __at(0xDA5);
// bitfield macros
#define _PWM2PRL_PR_POSN                                    0x0
#define _PWM2PRL_PR_POSITION                                0x0
#define _PWM2PRL_PR_SIZE                                    0x8
#define _PWM2PRL_PR_LENGTH                                  0x8
#define _PWM2PRL_PR_MASK                                    0xFF
#define _PWM2PRL_PWM2PRL0_POSN                              0x0
#define _PWM2PRL_PWM2PRL0_POSITION                          0x0
#define _PWM2PRL_PWM2PRL0_SIZE                              0x1
#define _PWM2PRL_PWM2PRL0_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL0_MASK                              0x1
#define _PWM2PRL_PWM2PRL1_POSN                              0x1
#define _PWM2PRL_PWM2PRL1_POSITION                          0x1
#define _PWM2PRL_PWM2PRL1_SIZE                              0x1
#define _PWM2PRL_PWM2PRL1_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL1_MASK                              0x2
#define _PWM2PRL_PWM2PRL2_POSN                              0x2
#define _PWM2PRL_PWM2PRL2_POSITION                          0x2
#define _PWM2PRL_PWM2PRL2_SIZE                              0x1
#define _PWM2PRL_PWM2PRL2_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL2_MASK                              0x4
#define _PWM2PRL_PWM2PRL3_POSN                              0x3
#define _PWM2PRL_PWM2PRL3_POSITION                          0x3
#define _PWM2PRL_PWM2PRL3_SIZE                              0x1
#define _PWM2PRL_PWM2PRL3_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL3_MASK                              0x8
#define _PWM2PRL_PWM2PRL4_POSN                              0x4
#define _PWM2PRL_PWM2PRL4_POSITION                          0x4
#define _PWM2PRL_PWM2PRL4_SIZE                              0x1
#define _PWM2PRL_PWM2PRL4_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL4_MASK                              0x10
#define _PWM2PRL_PWM2PRL5_POSN                              0x5
#define _PWM2PRL_PWM2PRL5_POSITION                          0x5
#define _PWM2PRL_PWM2PRL5_SIZE                              0x1
#define _PWM2PRL_PWM2PRL5_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL5_MASK                              0x20
#define _PWM2PRL_PWM2PRL6_POSN                              0x6
#define _PWM2PRL_PWM2PRL6_POSITION                          0x6
#define _PWM2PRL_PWM2PRL6_SIZE                              0x1
#define _PWM2PRL_PWM2PRL6_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL6_MASK                              0x40
#define _PWM2PRL_PWM2PRL7_POSN                              0x7
#define _PWM2PRL_PWM2PRL7_POSITION                          0x7
#define _PWM2PRL_PWM2PRL7_SIZE                              0x1
#define _PWM2PRL_PWM2PRL7_LENGTH                            0x1
#define _PWM2PRL_PWM2PRL7_MASK                              0x80
#define _PWM2PRL_PWM2PRL_POSN                               0x0
#define _PWM2PRL_PWM2PRL_POSITION                           0x0
#define _PWM2PRL_PWM2PRL_SIZE                               0x8
#define _PWM2PRL_PWM2PRL_LENGTH                             0x8
#define _PWM2PRL_PWM2PRL_MASK                               0xFF

// Register: PWM2PRH
#define PWM2PRH PWM2PRH
extern volatile unsigned char           PWM2PRH             __at(0xDA6);
#ifndef _LIB_BUILD
asm("PWM2PRH equ 0DA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned PWM2PRH0               :1;
        unsigned PWM2PRH1               :1;
        unsigned PWM2PRH2               :1;
        unsigned PWM2PRH3               :1;
        unsigned PWM2PRH4               :1;
        unsigned PWM2PRH5               :1;
        unsigned PWM2PRH6               :1;
        unsigned PWM2PRH7               :1;
    };
    struct {
        unsigned PWM2PRH                :8;
    };
} PWM2PRHbits_t;
extern volatile PWM2PRHbits_t PWM2PRHbits __at(0xDA6);
// bitfield macros
#define _PWM2PRH_PR_POSN                                    0x0
#define _PWM2PRH_PR_POSITION                                0x0
#define _PWM2PRH_PR_SIZE                                    0x8
#define _PWM2PRH_PR_LENGTH                                  0x8
#define _PWM2PRH_PR_MASK                                    0xFF
#define _PWM2PRH_PWM2PRH0_POSN                              0x0
#define _PWM2PRH_PWM2PRH0_POSITION                          0x0
#define _PWM2PRH_PWM2PRH0_SIZE                              0x1
#define _PWM2PRH_PWM2PRH0_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH0_MASK                              0x1
#define _PWM2PRH_PWM2PRH1_POSN                              0x1
#define _PWM2PRH_PWM2PRH1_POSITION                          0x1
#define _PWM2PRH_PWM2PRH1_SIZE                              0x1
#define _PWM2PRH_PWM2PRH1_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH1_MASK                              0x2
#define _PWM2PRH_PWM2PRH2_POSN                              0x2
#define _PWM2PRH_PWM2PRH2_POSITION                          0x2
#define _PWM2PRH_PWM2PRH2_SIZE                              0x1
#define _PWM2PRH_PWM2PRH2_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH2_MASK                              0x4
#define _PWM2PRH_PWM2PRH3_POSN                              0x3
#define _PWM2PRH_PWM2PRH3_POSITION                          0x3
#define _PWM2PRH_PWM2PRH3_SIZE                              0x1
#define _PWM2PRH_PWM2PRH3_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH3_MASK                              0x8
#define _PWM2PRH_PWM2PRH4_POSN                              0x4
#define _PWM2PRH_PWM2PRH4_POSITION                          0x4
#define _PWM2PRH_PWM2PRH4_SIZE                              0x1
#define _PWM2PRH_PWM2PRH4_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH4_MASK                              0x10
#define _PWM2PRH_PWM2PRH5_POSN                              0x5
#define _PWM2PRH_PWM2PRH5_POSITION                          0x5
#define _PWM2PRH_PWM2PRH5_SIZE                              0x1
#define _PWM2PRH_PWM2PRH5_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH5_MASK                              0x20
#define _PWM2PRH_PWM2PRH6_POSN                              0x6
#define _PWM2PRH_PWM2PRH6_POSITION                          0x6
#define _PWM2PRH_PWM2PRH6_SIZE                              0x1
#define _PWM2PRH_PWM2PRH6_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH6_MASK                              0x40
#define _PWM2PRH_PWM2PRH7_POSN                              0x7
#define _PWM2PRH_PWM2PRH7_POSITION                          0x7
#define _PWM2PRH_PWM2PRH7_SIZE                              0x1
#define _PWM2PRH_PWM2PRH7_LENGTH                            0x1
#define _PWM2PRH_PWM2PRH7_MASK                              0x80
#define _PWM2PRH_PWM2PRH_POSN                               0x0
#define _PWM2PRH_PWM2PRH_POSITION                           0x0
#define _PWM2PRH_PWM2PRH_SIZE                               0x8
#define _PWM2PRH_PWM2PRH_LENGTH                             0x8
#define _PWM2PRH_PWM2PRH_MASK                               0xFF

// Register: PWM2OF
#define PWM2OF PWM2OF
extern volatile unsigned short          PWM2OF              __at(0xDA7);
#ifndef _LIB_BUILD
asm("PWM2OF equ 0DA7h");
#endif

// Register: PWM2OFL
#define PWM2OFL PWM2OFL
extern volatile unsigned char           PWM2OFL             __at(0xDA7);
#ifndef _LIB_BUILD
asm("PWM2OFL equ 0DA7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OF                     :8;
    };
    struct {
        unsigned PWM2OFL0               :1;
        unsigned PWM2OFL1               :1;
        unsigned PWM2OFL2               :1;
        unsigned PWM2OFL3               :1;
        unsigned PWM2OFL4               :1;
        unsigned PWM2OFL5               :1;
        unsigned PWM2OFL6               :1;
        unsigned PWM2OFL7               :1;
    };
    struct {
        unsigned PWM2OFL                :8;
    };
} PWM2OFLbits_t;
extern volatile PWM2OFLbits_t PWM2OFLbits __at(0xDA7);
// bitfield macros
#define _PWM2OFL_OF_POSN                                    0x0
#define _PWM2OFL_OF_POSITION                                0x0
#define _PWM2OFL_OF_SIZE                                    0x8
#define _PWM2OFL_OF_LENGTH                                  0x8
#define _PWM2OFL_OF_MASK                                    0xFF
#define _PWM2OFL_PWM2OFL0_POSN                              0x0
#define _PWM2OFL_PWM2OFL0_POSITION                          0x0
#define _PWM2OFL_PWM2OFL0_SIZE                              0x1
#define _PWM2OFL_PWM2OFL0_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL0_MASK                              0x1
#define _PWM2OFL_PWM2OFL1_POSN                              0x1
#define _PWM2OFL_PWM2OFL1_POSITION                          0x1
#define _PWM2OFL_PWM2OFL1_SIZE                              0x1
#define _PWM2OFL_PWM2OFL1_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL1_MASK                              0x2
#define _PWM2OFL_PWM2OFL2_POSN                              0x2
#define _PWM2OFL_PWM2OFL2_POSITION                          0x2
#define _PWM2OFL_PWM2OFL2_SIZE                              0x1
#define _PWM2OFL_PWM2OFL2_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL2_MASK                              0x4
#define _PWM2OFL_PWM2OFL3_POSN                              0x3
#define _PWM2OFL_PWM2OFL3_POSITION                          0x3
#define _PWM2OFL_PWM2OFL3_SIZE                              0x1
#define _PWM2OFL_PWM2OFL3_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL3_MASK                              0x8
#define _PWM2OFL_PWM2OFL4_POSN                              0x4
#define _PWM2OFL_PWM2OFL4_POSITION                          0x4
#define _PWM2OFL_PWM2OFL4_SIZE                              0x1
#define _PWM2OFL_PWM2OFL4_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL4_MASK                              0x10
#define _PWM2OFL_PWM2OFL5_POSN                              0x5
#define _PWM2OFL_PWM2OFL5_POSITION                          0x5
#define _PWM2OFL_PWM2OFL5_SIZE                              0x1
#define _PWM2OFL_PWM2OFL5_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL5_MASK                              0x20
#define _PWM2OFL_PWM2OFL6_POSN                              0x6
#define _PWM2OFL_PWM2OFL6_POSITION                          0x6
#define _PWM2OFL_PWM2OFL6_SIZE                              0x1
#define _PWM2OFL_PWM2OFL6_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL6_MASK                              0x40
#define _PWM2OFL_PWM2OFL7_POSN                              0x7
#define _PWM2OFL_PWM2OFL7_POSITION                          0x7
#define _PWM2OFL_PWM2OFL7_SIZE                              0x1
#define _PWM2OFL_PWM2OFL7_LENGTH                            0x1
#define _PWM2OFL_PWM2OFL7_MASK                              0x80
#define _PWM2OFL_PWM2OFL_POSN                               0x0
#define _PWM2OFL_PWM2OFL_POSITION                           0x0
#define _PWM2OFL_PWM2OFL_SIZE                               0x8
#define _PWM2OFL_PWM2OFL_LENGTH                             0x8
#define _PWM2OFL_PWM2OFL_MASK                               0xFF

// Register: PWM2OFH
#define PWM2OFH PWM2OFH
extern volatile unsigned char           PWM2OFH             __at(0xDA8);
#ifndef _LIB_BUILD
asm("PWM2OFH equ 0DA8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OF                     :8;
    };
    struct {
        unsigned PWM2OFH0               :1;
        unsigned PWM2OFH1               :1;
        unsigned PWM2OFH2               :1;
        unsigned PWM2OFH3               :1;
        unsigned PWM2OFH4               :1;
        unsigned PWM2OFH5               :1;
        unsigned PWM2OFH6               :1;
        unsigned PWM2OFH7               :1;
    };
    struct {
        unsigned PWM2OFH                :8;
    };
} PWM2OFHbits_t;
extern volatile PWM2OFHbits_t PWM2OFHbits __at(0xDA8);
// bitfield macros
#define _PWM2OFH_OF_POSN                                    0x0
#define _PWM2OFH_OF_POSITION                                0x0
#define _PWM2OFH_OF_SIZE                                    0x8
#define _PWM2OFH_OF_LENGTH                                  0x8
#define _PWM2OFH_OF_MASK                                    0xFF
#define _PWM2OFH_PWM2OFH0_POSN                              0x0
#define _PWM2OFH_PWM2OFH0_POSITION                          0x0
#define _PWM2OFH_PWM2OFH0_SIZE                              0x1
#define _PWM2OFH_PWM2OFH0_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH0_MASK                              0x1
#define _PWM2OFH_PWM2OFH1_POSN                              0x1
#define _PWM2OFH_PWM2OFH1_POSITION                          0x1
#define _PWM2OFH_PWM2OFH1_SIZE                              0x1
#define _PWM2OFH_PWM2OFH1_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH1_MASK                              0x2
#define _PWM2OFH_PWM2OFH2_POSN                              0x2
#define _PWM2OFH_PWM2OFH2_POSITION                          0x2
#define _PWM2OFH_PWM2OFH2_SIZE                              0x1
#define _PWM2OFH_PWM2OFH2_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH2_MASK                              0x4
#define _PWM2OFH_PWM2OFH3_POSN                              0x3
#define _PWM2OFH_PWM2OFH3_POSITION                          0x3
#define _PWM2OFH_PWM2OFH3_SIZE                              0x1
#define _PWM2OFH_PWM2OFH3_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH3_MASK                              0x8
#define _PWM2OFH_PWM2OFH4_POSN                              0x4
#define _PWM2OFH_PWM2OFH4_POSITION                          0x4
#define _PWM2OFH_PWM2OFH4_SIZE                              0x1
#define _PWM2OFH_PWM2OFH4_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH4_MASK                              0x10
#define _PWM2OFH_PWM2OFH5_POSN                              0x5
#define _PWM2OFH_PWM2OFH5_POSITION                          0x5
#define _PWM2OFH_PWM2OFH5_SIZE                              0x1
#define _PWM2OFH_PWM2OFH5_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH5_MASK                              0x20
#define _PWM2OFH_PWM2OFH6_POSN                              0x6
#define _PWM2OFH_PWM2OFH6_POSITION                          0x6
#define _PWM2OFH_PWM2OFH6_SIZE                              0x1
#define _PWM2OFH_PWM2OFH6_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH6_MASK                              0x40
#define _PWM2OFH_PWM2OFH7_POSN                              0x7
#define _PWM2OFH_PWM2OFH7_POSITION                          0x7
#define _PWM2OFH_PWM2OFH7_SIZE                              0x1
#define _PWM2OFH_PWM2OFH7_LENGTH                            0x1
#define _PWM2OFH_PWM2OFH7_MASK                              0x80
#define _PWM2OFH_PWM2OFH_POSN                               0x0
#define _PWM2OFH_PWM2OFH_POSITION                           0x0
#define _PWM2OFH_PWM2OFH_SIZE                               0x8
#define _PWM2OFH_PWM2OFH_LENGTH                             0x8
#define _PWM2OFH_PWM2OFH_MASK                               0xFF

// Register: PWM2TMR
#define PWM2TMR PWM2TMR
extern volatile unsigned short          PWM2TMR             __at(0xDA9);
#ifndef _LIB_BUILD
asm("PWM2TMR equ 0DA9h");
#endif

// Register: PWM2TMRL
#define PWM2TMRL PWM2TMRL
extern volatile unsigned char           PWM2TMRL            __at(0xDA9);
#ifndef _LIB_BUILD
asm("PWM2TMRL equ 0DA9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned PWM2TMRL0              :1;
        unsigned PWM2TMRL1              :1;
        unsigned PWM2TMRL2              :1;
        unsigned PWM2TMRL3              :1;
        unsigned PWM2TMRL4              :1;
        unsigned PWM2TMRL5              :1;
        unsigned PWM2TMRL6              :1;
        unsigned PWM2TMRL7              :1;
    };
    struct {
        unsigned PWM2TMRL               :8;
    };
} PWM2TMRLbits_t;
extern volatile PWM2TMRLbits_t PWM2TMRLbits __at(0xDA9);
// bitfield macros
#define _PWM2TMRL_TMR_POSN                                  0x0
#define _PWM2TMRL_TMR_POSITION                              0x0
#define _PWM2TMRL_TMR_SIZE                                  0x8
#define _PWM2TMRL_TMR_LENGTH                                0x8
#define _PWM2TMRL_TMR_MASK                                  0xFF
#define _PWM2TMRL_PWM2TMRL0_POSN                            0x0
#define _PWM2TMRL_PWM2TMRL0_POSITION                        0x0
#define _PWM2TMRL_PWM2TMRL0_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL0_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL0_MASK                            0x1
#define _PWM2TMRL_PWM2TMRL1_POSN                            0x1
#define _PWM2TMRL_PWM2TMRL1_POSITION                        0x1
#define _PWM2TMRL_PWM2TMRL1_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL1_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL1_MASK                            0x2
#define _PWM2TMRL_PWM2TMRL2_POSN                            0x2
#define _PWM2TMRL_PWM2TMRL2_POSITION                        0x2
#define _PWM2TMRL_PWM2TMRL2_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL2_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL2_MASK                            0x4
#define _PWM2TMRL_PWM2TMRL3_POSN                            0x3
#define _PWM2TMRL_PWM2TMRL3_POSITION                        0x3
#define _PWM2TMRL_PWM2TMRL3_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL3_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL3_MASK                            0x8
#define _PWM2TMRL_PWM2TMRL4_POSN                            0x4
#define _PWM2TMRL_PWM2TMRL4_POSITION                        0x4
#define _PWM2TMRL_PWM2TMRL4_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL4_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL4_MASK                            0x10
#define _PWM2TMRL_PWM2TMRL5_POSN                            0x5
#define _PWM2TMRL_PWM2TMRL5_POSITION                        0x5
#define _PWM2TMRL_PWM2TMRL5_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL5_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL5_MASK                            0x20
#define _PWM2TMRL_PWM2TMRL6_POSN                            0x6
#define _PWM2TMRL_PWM2TMRL6_POSITION                        0x6
#define _PWM2TMRL_PWM2TMRL6_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL6_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL6_MASK                            0x40
#define _PWM2TMRL_PWM2TMRL7_POSN                            0x7
#define _PWM2TMRL_PWM2TMRL7_POSITION                        0x7
#define _PWM2TMRL_PWM2TMRL7_SIZE                            0x1
#define _PWM2TMRL_PWM2TMRL7_LENGTH                          0x1
#define _PWM2TMRL_PWM2TMRL7_MASK                            0x80
#define _PWM2TMRL_PWM2TMRL_POSN                             0x0
#define _PWM2TMRL_PWM2TMRL_POSITION                         0x0
#define _PWM2TMRL_PWM2TMRL_SIZE                             0x8
#define _PWM2TMRL_PWM2TMRL_LENGTH                           0x8
#define _PWM2TMRL_PWM2TMRL_MASK                             0xFF

// Register: PWM2TMRH
#define PWM2TMRH PWM2TMRH
extern volatile unsigned char           PWM2TMRH            __at(0xDAA);
#ifndef _LIB_BUILD
asm("PWM2TMRH equ 0DAAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned PWM2TMRH0              :1;
        unsigned PWM2TMRH1              :1;
        unsigned PWM2TMRH2              :1;
        unsigned PWM2TMRH3              :1;
        unsigned PWM2TMRH4              :1;
        unsigned PWM2TMRH5              :1;
        unsigned PWM2TMRH6              :1;
        unsigned PWM2TMRH7              :1;
    };
    struct {
        unsigned PWM2TMRH               :8;
    };
} PWM2TMRHbits_t;
extern volatile PWM2TMRHbits_t PWM2TMRHbits __at(0xDAA);
// bitfield macros
#define _PWM2TMRH_TMR_POSN                                  0x0
#define _PWM2TMRH_TMR_POSITION                              0x0
#define _PWM2TMRH_TMR_SIZE                                  0x8
#define _PWM2TMRH_TMR_LENGTH                                0x8
#define _PWM2TMRH_TMR_MASK                                  0xFF
#define _PWM2TMRH_PWM2TMRH0_POSN                            0x0
#define _PWM2TMRH_PWM2TMRH0_POSITION                        0x0
#define _PWM2TMRH_PWM2TMRH0_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH0_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH0_MASK                            0x1
#define _PWM2TMRH_PWM2TMRH1_POSN                            0x1
#define _PWM2TMRH_PWM2TMRH1_POSITION                        0x1
#define _PWM2TMRH_PWM2TMRH1_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH1_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH1_MASK                            0x2
#define _PWM2TMRH_PWM2TMRH2_POSN                            0x2
#define _PWM2TMRH_PWM2TMRH2_POSITION                        0x2
#define _PWM2TMRH_PWM2TMRH2_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH2_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH2_MASK                            0x4
#define _PWM2TMRH_PWM2TMRH3_POSN                            0x3
#define _PWM2TMRH_PWM2TMRH3_POSITION                        0x3
#define _PWM2TMRH_PWM2TMRH3_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH3_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH3_MASK                            0x8
#define _PWM2TMRH_PWM2TMRH4_POSN                            0x4
#define _PWM2TMRH_PWM2TMRH4_POSITION                        0x4
#define _PWM2TMRH_PWM2TMRH4_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH4_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH4_MASK                            0x10
#define _PWM2TMRH_PWM2TMRH5_POSN                            0x5
#define _PWM2TMRH_PWM2TMRH5_POSITION                        0x5
#define _PWM2TMRH_PWM2TMRH5_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH5_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH5_MASK                            0x20
#define _PWM2TMRH_PWM2TMRH6_POSN                            0x6
#define _PWM2TMRH_PWM2TMRH6_POSITION                        0x6
#define _PWM2TMRH_PWM2TMRH6_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH6_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH6_MASK                            0x40
#define _PWM2TMRH_PWM2TMRH7_POSN                            0x7
#define _PWM2TMRH_PWM2TMRH7_POSITION                        0x7
#define _PWM2TMRH_PWM2TMRH7_SIZE                            0x1
#define _PWM2TMRH_PWM2TMRH7_LENGTH                          0x1
#define _PWM2TMRH_PWM2TMRH7_MASK                            0x80
#define _PWM2TMRH_PWM2TMRH_POSN                             0x0
#define _PWM2TMRH_PWM2TMRH_POSITION                         0x0
#define _PWM2TMRH_PWM2TMRH_SIZE                             0x8
#define _PWM2TMRH_PWM2TMRH_LENGTH                           0x8
#define _PWM2TMRH_PWM2TMRH_MASK                             0xFF

// Register: PWM2CON
#define PWM2CON PWM2CON
extern volatile unsigned char           PWM2CON             __at(0xDAB);
#ifndef _LIB_BUILD
asm("PWM2CON equ 0DABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned MODE                   :2;
        unsigned POL                    :1;
        unsigned OUT                    :1;
        unsigned OE                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned PWM2MODE0              :1;
        unsigned PWM2MODE1              :1;
    };
    struct {
        unsigned                        :2;
        unsigned PWM2MODE               :2;
        unsigned PWM2POL                :1;
        unsigned PWM2OUT                :1;
        unsigned PWM2OE                 :1;
        unsigned PWM2EN                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
    };
} PWM2CONbits_t;
extern volatile PWM2CONbits_t PWM2CONbits __at(0xDAB);
// bitfield macros
#define _PWM2CON_MODE_POSN                                  0x2
#define _PWM2CON_MODE_POSITION                              0x2
#define _PWM2CON_MODE_SIZE                                  0x2
#define _PWM2CON_MODE_LENGTH                                0x2
#define _PWM2CON_MODE_MASK                                  0xC
#define _PWM2CON_POL_POSN                                   0x4
#define _PWM2CON_POL_POSITION                               0x4
#define _PWM2CON_POL_SIZE                                   0x1
#define _PWM2CON_POL_LENGTH                                 0x1
#define _PWM2CON_POL_MASK                                   0x10
#define _PWM2CON_OUT_POSN                                   0x5
#define _PWM2CON_OUT_POSITION                               0x5
#define _PWM2CON_OUT_SIZE                                   0x1
#define _PWM2CON_OUT_LENGTH                                 0x1
#define _PWM2CON_OUT_MASK                                   0x20
#define _PWM2CON_OE_POSN                                    0x6
#define _PWM2CON_OE_POSITION                                0x6
#define _PWM2CON_OE_SIZE                                    0x1
#define _PWM2CON_OE_LENGTH                                  0x1
#define _PWM2CON_OE_MASK                                    0x40
#define _PWM2CON_EN_POSN                                    0x7
#define _PWM2CON_EN_POSITION                                0x7
#define _PWM2CON_EN_SIZE                                    0x1
#define _PWM2CON_EN_LENGTH                                  0x1
#define _PWM2CON_EN_MASK                                    0x80
#define _PWM2CON_PWM2MODE0_POSN                             0x2
#define _PWM2CON_PWM2MODE0_POSITION                         0x2
#define _PWM2CON_PWM2MODE0_SIZE                             0x1
#define _PWM2CON_PWM2MODE0_LENGTH                           0x1
#define _PWM2CON_PWM2MODE0_MASK                             0x4
#define _PWM2CON_PWM2MODE1_POSN                             0x3
#define _PWM2CON_PWM2MODE1_POSITION                         0x3
#define _PWM2CON_PWM2MODE1_SIZE                             0x1
#define _PWM2CON_PWM2MODE1_LENGTH                           0x1
#define _PWM2CON_PWM2MODE1_MASK                             0x8
#define _PWM2CON_PWM2MODE_POSN                              0x2
#define _PWM2CON_PWM2MODE_POSITION                          0x2
#define _PWM2CON_PWM2MODE_SIZE                              0x2
#define _PWM2CON_PWM2MODE_LENGTH                            0x2
#define _PWM2CON_PWM2MODE_MASK                              0xC
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
#define _PWM2CON_MODE0_POSN                                 0x2
#define _PWM2CON_MODE0_POSITION                             0x2
#define _PWM2CON_MODE0_SIZE                                 0x1
#define _PWM2CON_MODE0_LENGTH                               0x1
#define _PWM2CON_MODE0_MASK                                 0x4
#define _PWM2CON_MODE1_POSN                                 0x3
#define _PWM2CON_MODE1_POSITION                             0x3
#define _PWM2CON_MODE1_SIZE                                 0x1
#define _PWM2CON_MODE1_LENGTH                               0x1
#define _PWM2CON_MODE1_MASK                                 0x8

// Register: PWM2INTE
#define PWM2INTE PWM2INTE
extern volatile unsigned char           PWM2INTE            __at(0xDAC);
#ifndef _LIB_BUILD
asm("PWM2INTE equ 0DACh");
#endif
// aliases
extern volatile unsigned char           PWM2INTCON          __at(0xDAC);
#ifndef _LIB_BUILD
asm("PWM2INTCON equ 0DACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRIE                   :1;
        unsigned DCIE                   :1;
        unsigned PHIE                   :1;
        unsigned OFIE                   :1;
    };
    struct {
        unsigned PWM2PRIE               :1;
        unsigned PWM2DCIE               :1;
        unsigned PWM2PHIE               :1;
        unsigned PWM2OFIE               :1;
    };
} PWM2INTEbits_t;
extern volatile PWM2INTEbits_t PWM2INTEbits __at(0xDAC);
// bitfield macros
#define _PWM2INTE_PRIE_POSN                                 0x0
#define _PWM2INTE_PRIE_POSITION                             0x0
#define _PWM2INTE_PRIE_SIZE                                 0x1
#define _PWM2INTE_PRIE_LENGTH                               0x1
#define _PWM2INTE_PRIE_MASK                                 0x1
#define _PWM2INTE_DCIE_POSN                                 0x1
#define _PWM2INTE_DCIE_POSITION                             0x1
#define _PWM2INTE_DCIE_SIZE                                 0x1
#define _PWM2INTE_DCIE_LENGTH                               0x1
#define _PWM2INTE_DCIE_MASK                                 0x2
#define _PWM2INTE_PHIE_POSN                                 0x2
#define _PWM2INTE_PHIE_POSITION                             0x2
#define _PWM2INTE_PHIE_SIZE                                 0x1
#define _PWM2INTE_PHIE_LENGTH                               0x1
#define _PWM2INTE_PHIE_MASK                                 0x4
#define _PWM2INTE_OFIE_POSN                                 0x3
#define _PWM2INTE_OFIE_POSITION                             0x3
#define _PWM2INTE_OFIE_SIZE                                 0x1
#define _PWM2INTE_OFIE_LENGTH                               0x1
#define _PWM2INTE_OFIE_MASK                                 0x8
#define _PWM2INTE_PWM2PRIE_POSN                             0x0
#define _PWM2INTE_PWM2PRIE_POSITION                         0x0
#define _PWM2INTE_PWM2PRIE_SIZE                             0x1
#define _PWM2INTE_PWM2PRIE_LENGTH                           0x1
#define _PWM2INTE_PWM2PRIE_MASK                             0x1
#define _PWM2INTE_PWM2DCIE_POSN                             0x1
#define _PWM2INTE_PWM2DCIE_POSITION                         0x1
#define _PWM2INTE_PWM2DCIE_SIZE                             0x1
#define _PWM2INTE_PWM2DCIE_LENGTH                           0x1
#define _PWM2INTE_PWM2DCIE_MASK                             0x2
#define _PWM2INTE_PWM2PHIE_POSN                             0x2
#define _PWM2INTE_PWM2PHIE_POSITION                         0x2
#define _PWM2INTE_PWM2PHIE_SIZE                             0x1
#define _PWM2INTE_PWM2PHIE_LENGTH                           0x1
#define _PWM2INTE_PWM2PHIE_MASK                             0x4
#define _PWM2INTE_PWM2OFIE_POSN                             0x3
#define _PWM2INTE_PWM2OFIE_POSITION                         0x3
#define _PWM2INTE_PWM2OFIE_SIZE                             0x1
#define _PWM2INTE_PWM2OFIE_LENGTH                           0x1
#define _PWM2INTE_PWM2OFIE_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned PRIE                   :1;
        unsigned DCIE                   :1;
        unsigned PHIE                   :1;
        unsigned OFIE                   :1;
    };
    struct {
        unsigned PWM2PRIE               :1;
        unsigned PWM2DCIE               :1;
        unsigned PWM2PHIE               :1;
        unsigned PWM2OFIE               :1;
    };
} PWM2INTCONbits_t;
extern volatile PWM2INTCONbits_t PWM2INTCONbits __at(0xDAC);
// bitfield macros
#define _PWM2INTCON_PRIE_POSN                               0x0
#define _PWM2INTCON_PRIE_POSITION                           0x0
#define _PWM2INTCON_PRIE_SIZE                               0x1
#define _PWM2INTCON_PRIE_LENGTH                             0x1
#define _PWM2INTCON_PRIE_MASK                               0x1
#define _PWM2INTCON_DCIE_POSN                               0x1
#define _PWM2INTCON_DCIE_POSITION                           0x1
#define _PWM2INTCON_DCIE_SIZE                               0x1
#define _PWM2INTCON_DCIE_LENGTH                             0x1
#define _PWM2INTCON_DCIE_MASK                               0x2
#define _PWM2INTCON_PHIE_POSN                               0x2
#define _PWM2INTCON_PHIE_POSITION                           0x2
#define _PWM2INTCON_PHIE_SIZE                               0x1
#define _PWM2INTCON_PHIE_LENGTH                             0x1
#define _PWM2INTCON_PHIE_MASK                               0x4
#define _PWM2INTCON_OFIE_POSN                               0x3
#define _PWM2INTCON_OFIE_POSITION                           0x3
#define _PWM2INTCON_OFIE_SIZE                               0x1
#define _PWM2INTCON_OFIE_LENGTH                             0x1
#define _PWM2INTCON_OFIE_MASK                               0x8
#define _PWM2INTCON_PWM2PRIE_POSN                           0x0
#define _PWM2INTCON_PWM2PRIE_POSITION                       0x0
#define _PWM2INTCON_PWM2PRIE_SIZE                           0x1
#define _PWM2INTCON_PWM2PRIE_LENGTH                         0x1
#define _PWM2INTCON_PWM2PRIE_MASK                           0x1
#define _PWM2INTCON_PWM2DCIE_POSN                           0x1
#define _PWM2INTCON_PWM2DCIE_POSITION                       0x1
#define _PWM2INTCON_PWM2DCIE_SIZE                           0x1
#define _PWM2INTCON_PWM2DCIE_LENGTH                         0x1
#define _PWM2INTCON_PWM2DCIE_MASK                           0x2
#define _PWM2INTCON_PWM2PHIE_POSN                           0x2
#define _PWM2INTCON_PWM2PHIE_POSITION                       0x2
#define _PWM2INTCON_PWM2PHIE_SIZE                           0x1
#define _PWM2INTCON_PWM2PHIE_LENGTH                         0x1
#define _PWM2INTCON_PWM2PHIE_MASK                           0x4
#define _PWM2INTCON_PWM2OFIE_POSN                           0x3
#define _PWM2INTCON_PWM2OFIE_POSITION                       0x3
#define _PWM2INTCON_PWM2OFIE_SIZE                           0x1
#define _PWM2INTCON_PWM2OFIE_LENGTH                         0x1
#define _PWM2INTCON_PWM2OFIE_MASK                           0x8

// Register: PWM2INTF
#define PWM2INTF PWM2INTF
extern volatile unsigned char           PWM2INTF            __at(0xDAD);
#ifndef _LIB_BUILD
asm("PWM2INTF equ 0DADh");
#endif
// aliases
extern volatile unsigned char           PWM2INTFLG          __at(0xDAD);
#ifndef _LIB_BUILD
asm("PWM2INTFLG equ 0DADh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRIF                   :1;
        unsigned DCIF                   :1;
        unsigned PHIF                   :1;
        unsigned OFIF                   :1;
    };
    struct {
        unsigned PWM2PRIF               :1;
        unsigned PWM2DCIF               :1;
        unsigned PWM2PHIF               :1;
        unsigned PWM2OFIF               :1;
    };
} PWM2INTFbits_t;
extern volatile PWM2INTFbits_t PWM2INTFbits __at(0xDAD);
// bitfield macros
#define _PWM2INTF_PRIF_POSN                                 0x0
#define _PWM2INTF_PRIF_POSITION                             0x0
#define _PWM2INTF_PRIF_SIZE                                 0x1
#define _PWM2INTF_PRIF_LENGTH                               0x1
#define _PWM2INTF_PRIF_MASK                                 0x1
#define _PWM2INTF_DCIF_POSN                                 0x1
#define _PWM2INTF_DCIF_POSITION                             0x1
#define _PWM2INTF_DCIF_SIZE                                 0x1
#define _PWM2INTF_DCIF_LENGTH                               0x1
#define _PWM2INTF_DCIF_MASK                                 0x2
#define _PWM2INTF_PHIF_POSN                                 0x2
#define _PWM2INTF_PHIF_POSITION                             0x2
#define _PWM2INTF_PHIF_SIZE                                 0x1
#define _PWM2INTF_PHIF_LENGTH                               0x1
#define _PWM2INTF_PHIF_MASK                                 0x4
#define _PWM2INTF_OFIF_POSN                                 0x3
#define _PWM2INTF_OFIF_POSITION                             0x3
#define _PWM2INTF_OFIF_SIZE                                 0x1
#define _PWM2INTF_OFIF_LENGTH                               0x1
#define _PWM2INTF_OFIF_MASK                                 0x8
#define _PWM2INTF_PWM2PRIF_POSN                             0x0
#define _PWM2INTF_PWM2PRIF_POSITION                         0x0
#define _PWM2INTF_PWM2PRIF_SIZE                             0x1
#define _PWM2INTF_PWM2PRIF_LENGTH                           0x1
#define _PWM2INTF_PWM2PRIF_MASK                             0x1
#define _PWM2INTF_PWM2DCIF_POSN                             0x1
#define _PWM2INTF_PWM2DCIF_POSITION                         0x1
#define _PWM2INTF_PWM2DCIF_SIZE                             0x1
#define _PWM2INTF_PWM2DCIF_LENGTH                           0x1
#define _PWM2INTF_PWM2DCIF_MASK                             0x2
#define _PWM2INTF_PWM2PHIF_POSN                             0x2
#define _PWM2INTF_PWM2PHIF_POSITION                         0x2
#define _PWM2INTF_PWM2PHIF_SIZE                             0x1
#define _PWM2INTF_PWM2PHIF_LENGTH                           0x1
#define _PWM2INTF_PWM2PHIF_MASK                             0x4
#define _PWM2INTF_PWM2OFIF_POSN                             0x3
#define _PWM2INTF_PWM2OFIF_POSITION                         0x3
#define _PWM2INTF_PWM2OFIF_SIZE                             0x1
#define _PWM2INTF_PWM2OFIF_LENGTH                           0x1
#define _PWM2INTF_PWM2OFIF_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned PRIF                   :1;
        unsigned DCIF                   :1;
        unsigned PHIF                   :1;
        unsigned OFIF                   :1;
    };
    struct {
        unsigned PWM2PRIF               :1;
        unsigned PWM2DCIF               :1;
        unsigned PWM2PHIF               :1;
        unsigned PWM2OFIF               :1;
    };
} PWM2INTFLGbits_t;
extern volatile PWM2INTFLGbits_t PWM2INTFLGbits __at(0xDAD);
// bitfield macros
#define _PWM2INTFLG_PRIF_POSN                               0x0
#define _PWM2INTFLG_PRIF_POSITION                           0x0
#define _PWM2INTFLG_PRIF_SIZE                               0x1
#define _PWM2INTFLG_PRIF_LENGTH                             0x1
#define _PWM2INTFLG_PRIF_MASK                               0x1
#define _PWM2INTFLG_DCIF_POSN                               0x1
#define _PWM2INTFLG_DCIF_POSITION                           0x1
#define _PWM2INTFLG_DCIF_SIZE                               0x1
#define _PWM2INTFLG_DCIF_LENGTH                             0x1
#define _PWM2INTFLG_DCIF_MASK                               0x2
#define _PWM2INTFLG_PHIF_POSN                               0x2
#define _PWM2INTFLG_PHIF_POSITION                           0x2
#define _PWM2INTFLG_PHIF_SIZE                               0x1
#define _PWM2INTFLG_PHIF_LENGTH                             0x1
#define _PWM2INTFLG_PHIF_MASK                               0x4
#define _PWM2INTFLG_OFIF_POSN                               0x3
#define _PWM2INTFLG_OFIF_POSITION                           0x3
#define _PWM2INTFLG_OFIF_SIZE                               0x1
#define _PWM2INTFLG_OFIF_LENGTH                             0x1
#define _PWM2INTFLG_OFIF_MASK                               0x8
#define _PWM2INTFLG_PWM2PRIF_POSN                           0x0
#define _PWM2INTFLG_PWM2PRIF_POSITION                       0x0
#define _PWM2INTFLG_PWM2PRIF_SIZE                           0x1
#define _PWM2INTFLG_PWM2PRIF_LENGTH                         0x1
#define _PWM2INTFLG_PWM2PRIF_MASK                           0x1
#define _PWM2INTFLG_PWM2DCIF_POSN                           0x1
#define _PWM2INTFLG_PWM2DCIF_POSITION                       0x1
#define _PWM2INTFLG_PWM2DCIF_SIZE                           0x1
#define _PWM2INTFLG_PWM2DCIF_LENGTH                         0x1
#define _PWM2INTFLG_PWM2DCIF_MASK                           0x2
#define _PWM2INTFLG_PWM2PHIF_POSN                           0x2
#define _PWM2INTFLG_PWM2PHIF_POSITION                       0x2
#define _PWM2INTFLG_PWM2PHIF_SIZE                           0x1
#define _PWM2INTFLG_PWM2PHIF_LENGTH                         0x1
#define _PWM2INTFLG_PWM2PHIF_MASK                           0x4
#define _PWM2INTFLG_PWM2OFIF_POSN                           0x3
#define _PWM2INTFLG_PWM2OFIF_POSITION                       0x3
#define _PWM2INTFLG_PWM2OFIF_SIZE                           0x1
#define _PWM2INTFLG_PWM2OFIF_LENGTH                         0x1
#define _PWM2INTFLG_PWM2OFIF_MASK                           0x8

// Register: PWM2CLKCON
#define PWM2CLKCON PWM2CLKCON
extern volatile unsigned char           PWM2CLKCON          __at(0xDAE);
#ifndef _LIB_BUILD
asm("PWM2CLKCON equ 0DAEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :2;
        unsigned                        :2;
        unsigned PS                     :3;
    };
    struct {
        unsigned PWM2CS0                :1;
        unsigned PWM2CS1                :1;
        unsigned                        :2;
        unsigned PWM2PS0                :1;
        unsigned PWM2PS1                :1;
        unsigned PWM2PS2                :1;
    };
    struct {
        unsigned PWM2CS                 :3;
        unsigned                        :1;
        unsigned PWM2PS                 :3;
    };
    struct {
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned                        :2;
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
    };
} PWM2CLKCONbits_t;
extern volatile PWM2CLKCONbits_t PWM2CLKCONbits __at(0xDAE);
// bitfield macros
#define _PWM2CLKCON_CS_POSN                                 0x0
#define _PWM2CLKCON_CS_POSITION                             0x0
#define _PWM2CLKCON_CS_SIZE                                 0x2
#define _PWM2CLKCON_CS_LENGTH                               0x2
#define _PWM2CLKCON_CS_MASK                                 0x3
#define _PWM2CLKCON_PS_POSN                                 0x4
#define _PWM2CLKCON_PS_POSITION                             0x4
#define _PWM2CLKCON_PS_SIZE                                 0x3
#define _PWM2CLKCON_PS_LENGTH                               0x3
#define _PWM2CLKCON_PS_MASK                                 0x70
#define _PWM2CLKCON_PWM2CS0_POSN                            0x0
#define _PWM2CLKCON_PWM2CS0_POSITION                        0x0
#define _PWM2CLKCON_PWM2CS0_SIZE                            0x1
#define _PWM2CLKCON_PWM2CS0_LENGTH                          0x1
#define _PWM2CLKCON_PWM2CS0_MASK                            0x1
#define _PWM2CLKCON_PWM2CS1_POSN                            0x1
#define _PWM2CLKCON_PWM2CS1_POSITION                        0x1
#define _PWM2CLKCON_PWM2CS1_SIZE                            0x1
#define _PWM2CLKCON_PWM2CS1_LENGTH                          0x1
#define _PWM2CLKCON_PWM2CS1_MASK                            0x2
#define _PWM2CLKCON_PWM2PS0_POSN                            0x4
#define _PWM2CLKCON_PWM2PS0_POSITION                        0x4
#define _PWM2CLKCON_PWM2PS0_SIZE                            0x1
#define _PWM2CLKCON_PWM2PS0_LENGTH                          0x1
#define _PWM2CLKCON_PWM2PS0_MASK                            0x10
#define _PWM2CLKCON_PWM2PS1_POSN                            0x5
#define _PWM2CLKCON_PWM2PS1_POSITION                        0x5
#define _PWM2CLKCON_PWM2PS1_SIZE                            0x1
#define _PWM2CLKCON_PWM2PS1_LENGTH                          0x1
#define _PWM2CLKCON_PWM2PS1_MASK                            0x20
#define _PWM2CLKCON_PWM2PS2_POSN                            0x6
#define _PWM2CLKCON_PWM2PS2_POSITION                        0x6
#define _PWM2CLKCON_PWM2PS2_SIZE                            0x1
#define _PWM2CLKCON_PWM2PS2_LENGTH                          0x1
#define _PWM2CLKCON_PWM2PS2_MASK                            0x40
#define _PWM2CLKCON_PWM2CS_POSN                             0x0
#define _PWM2CLKCON_PWM2CS_POSITION                         0x0
#define _PWM2CLKCON_PWM2CS_SIZE                             0x3
#define _PWM2CLKCON_PWM2CS_LENGTH                           0x3
#define _PWM2CLKCON_PWM2CS_MASK                             0x7
#define _PWM2CLKCON_PWM2PS_POSN                             0x4
#define _PWM2CLKCON_PWM2PS_POSITION                         0x4
#define _PWM2CLKCON_PWM2PS_SIZE                             0x3
#define _PWM2CLKCON_PWM2PS_LENGTH                           0x3
#define _PWM2CLKCON_PWM2PS_MASK                             0x70
#define _PWM2CLKCON_CS0_POSN                                0x0
#define _PWM2CLKCON_CS0_POSITION                            0x0
#define _PWM2CLKCON_CS0_SIZE                                0x1
#define _PWM2CLKCON_CS0_LENGTH                              0x1
#define _PWM2CLKCON_CS0_MASK                                0x1
#define _PWM2CLKCON_CS1_POSN                                0x1
#define _PWM2CLKCON_CS1_POSITION                            0x1
#define _PWM2CLKCON_CS1_SIZE                                0x1
#define _PWM2CLKCON_CS1_LENGTH                              0x1
#define _PWM2CLKCON_CS1_MASK                                0x2
#define _PWM2CLKCON_PS0_POSN                                0x4
#define _PWM2CLKCON_PS0_POSITION                            0x4
#define _PWM2CLKCON_PS0_SIZE                                0x1
#define _PWM2CLKCON_PS0_LENGTH                              0x1
#define _PWM2CLKCON_PS0_MASK                                0x10
#define _PWM2CLKCON_PS1_POSN                                0x5
#define _PWM2CLKCON_PS1_POSITION                            0x5
#define _PWM2CLKCON_PS1_SIZE                                0x1
#define _PWM2CLKCON_PS1_LENGTH                              0x1
#define _PWM2CLKCON_PS1_MASK                                0x20
#define _PWM2CLKCON_PS2_POSN                                0x6
#define _PWM2CLKCON_PS2_POSITION                            0x6
#define _PWM2CLKCON_PS2_SIZE                                0x1
#define _PWM2CLKCON_PS2_LENGTH                              0x1
#define _PWM2CLKCON_PS2_MASK                                0x40

// Register: PWM2LDCON
#define PWM2LDCON PWM2LDCON
extern volatile unsigned char           PWM2LDCON           __at(0xDAF);
#ifndef _LIB_BUILD
asm("PWM2LDCON equ 0DAFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDS                    :2;
        unsigned                        :4;
        unsigned LDT                    :1;
        unsigned LDA                    :1;
    };
    struct {
        unsigned PWM2LDS0               :1;
        unsigned PWM2LDS1               :1;
    };
    struct {
        unsigned PWM2LDS                :2;
        unsigned                        :4;
        unsigned PWM2LDM                :1;
        unsigned PWM2LD                 :1;
    };
    struct {
        unsigned LDS0                   :1;
        unsigned LDS1                   :1;
    };
} PWM2LDCONbits_t;
extern volatile PWM2LDCONbits_t PWM2LDCONbits __at(0xDAF);
// bitfield macros
#define _PWM2LDCON_LDS_POSN                                 0x0
#define _PWM2LDCON_LDS_POSITION                             0x0
#define _PWM2LDCON_LDS_SIZE                                 0x2
#define _PWM2LDCON_LDS_LENGTH                               0x2
#define _PWM2LDCON_LDS_MASK                                 0x3
#define _PWM2LDCON_LDT_POSN                                 0x6
#define _PWM2LDCON_LDT_POSITION                             0x6
#define _PWM2LDCON_LDT_SIZE                                 0x1
#define _PWM2LDCON_LDT_LENGTH                               0x1
#define _PWM2LDCON_LDT_MASK                                 0x40
#define _PWM2LDCON_LDA_POSN                                 0x7
#define _PWM2LDCON_LDA_POSITION                             0x7
#define _PWM2LDCON_LDA_SIZE                                 0x1
#define _PWM2LDCON_LDA_LENGTH                               0x1
#define _PWM2LDCON_LDA_MASK                                 0x80
#define _PWM2LDCON_PWM2LDS0_POSN                            0x0
#define _PWM2LDCON_PWM2LDS0_POSITION                        0x0
#define _PWM2LDCON_PWM2LDS0_SIZE                            0x1
#define _PWM2LDCON_PWM2LDS0_LENGTH                          0x1
#define _PWM2LDCON_PWM2LDS0_MASK                            0x1
#define _PWM2LDCON_PWM2LDS1_POSN                            0x1
#define _PWM2LDCON_PWM2LDS1_POSITION                        0x1
#define _PWM2LDCON_PWM2LDS1_SIZE                            0x1
#define _PWM2LDCON_PWM2LDS1_LENGTH                          0x1
#define _PWM2LDCON_PWM2LDS1_MASK                            0x2
#define _PWM2LDCON_PWM2LDS_POSN                             0x0
#define _PWM2LDCON_PWM2LDS_POSITION                         0x0
#define _PWM2LDCON_PWM2LDS_SIZE                             0x2
#define _PWM2LDCON_PWM2LDS_LENGTH                           0x2
#define _PWM2LDCON_PWM2LDS_MASK                             0x3
#define _PWM2LDCON_PWM2LDM_POSN                             0x6
#define _PWM2LDCON_PWM2LDM_POSITION                         0x6
#define _PWM2LDCON_PWM2LDM_SIZE                             0x1
#define _PWM2LDCON_PWM2LDM_LENGTH                           0x1
#define _PWM2LDCON_PWM2LDM_MASK                             0x40
#define _PWM2LDCON_PWM2LD_POSN                              0x7
#define _PWM2LDCON_PWM2LD_POSITION                          0x7
#define _PWM2LDCON_PWM2LD_SIZE                              0x1
#define _PWM2LDCON_PWM2LD_LENGTH                            0x1
#define _PWM2LDCON_PWM2LD_MASK                              0x80
#define _PWM2LDCON_LDS0_POSN                                0x0
#define _PWM2LDCON_LDS0_POSITION                            0x0
#define _PWM2LDCON_LDS0_SIZE                                0x1
#define _PWM2LDCON_LDS0_LENGTH                              0x1
#define _PWM2LDCON_LDS0_MASK                                0x1
#define _PWM2LDCON_LDS1_POSN                                0x1
#define _PWM2LDCON_LDS1_POSITION                            0x1
#define _PWM2LDCON_LDS1_SIZE                                0x1
#define _PWM2LDCON_LDS1_LENGTH                              0x1
#define _PWM2LDCON_LDS1_MASK                                0x2

// Register: PWM2OFCON
#define PWM2OFCON PWM2OFCON
extern volatile unsigned char           PWM2OFCON           __at(0xDB0);
#ifndef _LIB_BUILD
asm("PWM2OFCON equ 0DB0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OFS                    :2;
        unsigned                        :2;
        unsigned OFO                    :1;
        unsigned OFM                    :2;
    };
    struct {
        unsigned PWM2OFS0               :1;
        unsigned PWM2OFS1               :1;
        unsigned                        :3;
        unsigned PWM2OFM0               :1;
        unsigned PWM2OFM1               :1;
    };
    struct {
        unsigned PWM2OFS                :2;
        unsigned                        :2;
        unsigned PWM2OFMC               :1;
        unsigned PWM2OFM                :2;
    };
    struct {
        unsigned OFS0                   :1;
        unsigned OFS1                   :1;
        unsigned                        :3;
        unsigned OFM0                   :1;
        unsigned OFM1                   :1;
    };
} PWM2OFCONbits_t;
extern volatile PWM2OFCONbits_t PWM2OFCONbits __at(0xDB0);
// bitfield macros
#define _PWM2OFCON_OFS_POSN                                 0x0
#define _PWM2OFCON_OFS_POSITION                             0x0
#define _PWM2OFCON_OFS_SIZE                                 0x2
#define _PWM2OFCON_OFS_LENGTH                               0x2
#define _PWM2OFCON_OFS_MASK                                 0x3
#define _PWM2OFCON_OFO_POSN                                 0x4
#define _PWM2OFCON_OFO_POSITION                             0x4
#define _PWM2OFCON_OFO_SIZE                                 0x1
#define _PWM2OFCON_OFO_LENGTH                               0x1
#define _PWM2OFCON_OFO_MASK                                 0x10
#define _PWM2OFCON_OFM_POSN                                 0x5
#define _PWM2OFCON_OFM_POSITION                             0x5
#define _PWM2OFCON_OFM_SIZE                                 0x2
#define _PWM2OFCON_OFM_LENGTH                               0x2
#define _PWM2OFCON_OFM_MASK                                 0x60
#define _PWM2OFCON_PWM2OFS0_POSN                            0x0
#define _PWM2OFCON_PWM2OFS0_POSITION                        0x0
#define _PWM2OFCON_PWM2OFS0_SIZE                            0x1
#define _PWM2OFCON_PWM2OFS0_LENGTH                          0x1
#define _PWM2OFCON_PWM2OFS0_MASK                            0x1
#define _PWM2OFCON_PWM2OFS1_POSN                            0x1
#define _PWM2OFCON_PWM2OFS1_POSITION                        0x1
#define _PWM2OFCON_PWM2OFS1_SIZE                            0x1
#define _PWM2OFCON_PWM2OFS1_LENGTH                          0x1
#define _PWM2OFCON_PWM2OFS1_MASK                            0x2
#define _PWM2OFCON_PWM2OFM0_POSN                            0x5
#define _PWM2OFCON_PWM2OFM0_POSITION                        0x5
#define _PWM2OFCON_PWM2OFM0_SIZE                            0x1
#define _PWM2OFCON_PWM2OFM0_LENGTH                          0x1
#define _PWM2OFCON_PWM2OFM0_MASK                            0x20
#define _PWM2OFCON_PWM2OFM1_POSN                            0x6
#define _PWM2OFCON_PWM2OFM1_POSITION                        0x6
#define _PWM2OFCON_PWM2OFM1_SIZE                            0x1
#define _PWM2OFCON_PWM2OFM1_LENGTH                          0x1
#define _PWM2OFCON_PWM2OFM1_MASK                            0x40
#define _PWM2OFCON_PWM2OFS_POSN                             0x0
#define _PWM2OFCON_PWM2OFS_POSITION                         0x0
#define _PWM2OFCON_PWM2OFS_SIZE                             0x2
#define _PWM2OFCON_PWM2OFS_LENGTH                           0x2
#define _PWM2OFCON_PWM2OFS_MASK                             0x3
#define _PWM2OFCON_PWM2OFMC_POSN                            0x4
#define _PWM2OFCON_PWM2OFMC_POSITION                        0x4
#define _PWM2OFCON_PWM2OFMC_SIZE                            0x1
#define _PWM2OFCON_PWM2OFMC_LENGTH                          0x1
#define _PWM2OFCON_PWM2OFMC_MASK                            0x10
#define _PWM2OFCON_PWM2OFM_POSN                             0x5
#define _PWM2OFCON_PWM2OFM_POSITION                         0x5
#define _PWM2OFCON_PWM2OFM_SIZE                             0x2
#define _PWM2OFCON_PWM2OFM_LENGTH                           0x2
#define _PWM2OFCON_PWM2OFM_MASK                             0x60
#define _PWM2OFCON_OFS0_POSN                                0x0
#define _PWM2OFCON_OFS0_POSITION                            0x0
#define _PWM2OFCON_OFS0_SIZE                                0x1
#define _PWM2OFCON_OFS0_LENGTH                              0x1
#define _PWM2OFCON_OFS0_MASK                                0x1
#define _PWM2OFCON_OFS1_POSN                                0x1
#define _PWM2OFCON_OFS1_POSITION                            0x1
#define _PWM2OFCON_OFS1_SIZE                                0x1
#define _PWM2OFCON_OFS1_LENGTH                              0x1
#define _PWM2OFCON_OFS1_MASK                                0x2
#define _PWM2OFCON_OFM0_POSN                                0x5
#define _PWM2OFCON_OFM0_POSITION                            0x5
#define _PWM2OFCON_OFM0_SIZE                                0x1
#define _PWM2OFCON_OFM0_LENGTH                              0x1
#define _PWM2OFCON_OFM0_MASK                                0x20
#define _PWM2OFCON_OFM1_POSN                                0x6
#define _PWM2OFCON_OFM1_POSITION                            0x6
#define _PWM2OFCON_OFM1_SIZE                                0x1
#define _PWM2OFCON_OFM1_LENGTH                              0x1
#define _PWM2OFCON_OFM1_MASK                                0x40

// Register: PWM3PH
#define PWM3PH PWM3PH
extern volatile unsigned short          PWM3PH              __at(0xDB1);
#ifndef _LIB_BUILD
asm("PWM3PH equ 0DB1h");
#endif

// Register: PWM3PHL
#define PWM3PHL PWM3PHL
extern volatile unsigned char           PWM3PHL             __at(0xDB1);
#ifndef _LIB_BUILD
asm("PWM3PHL equ 0DB1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :8;
    };
    struct {
        unsigned PWM3PHL0               :1;
        unsigned PWM3PHL1               :1;
        unsigned PWM3PHL2               :1;
        unsigned PWM3PHL3               :1;
        unsigned PWM3PHL4               :1;
        unsigned PWM3PHL5               :1;
        unsigned PWM3PHL6               :1;
        unsigned PWM3PHL7               :1;
    };
    struct {
        unsigned PWM3PHL                :8;
    };
} PWM3PHLbits_t;
extern volatile PWM3PHLbits_t PWM3PHLbits __at(0xDB1);
// bitfield macros
#define _PWM3PHL_PH_POSN                                    0x0
#define _PWM3PHL_PH_POSITION                                0x0
#define _PWM3PHL_PH_SIZE                                    0x8
#define _PWM3PHL_PH_LENGTH                                  0x8
#define _PWM3PHL_PH_MASK                                    0xFF
#define _PWM3PHL_PWM3PHL0_POSN                              0x0
#define _PWM3PHL_PWM3PHL0_POSITION                          0x0
#define _PWM3PHL_PWM3PHL0_SIZE                              0x1
#define _PWM3PHL_PWM3PHL0_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL0_MASK                              0x1
#define _PWM3PHL_PWM3PHL1_POSN                              0x1
#define _PWM3PHL_PWM3PHL1_POSITION                          0x1
#define _PWM3PHL_PWM3PHL1_SIZE                              0x1
#define _PWM3PHL_PWM3PHL1_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL1_MASK                              0x2
#define _PWM3PHL_PWM3PHL2_POSN                              0x2
#define _PWM3PHL_PWM3PHL2_POSITION                          0x2
#define _PWM3PHL_PWM3PHL2_SIZE                              0x1
#define _PWM3PHL_PWM3PHL2_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL2_MASK                              0x4
#define _PWM3PHL_PWM3PHL3_POSN                              0x3
#define _PWM3PHL_PWM3PHL3_POSITION                          0x3
#define _PWM3PHL_PWM3PHL3_SIZE                              0x1
#define _PWM3PHL_PWM3PHL3_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL3_MASK                              0x8
#define _PWM3PHL_PWM3PHL4_POSN                              0x4
#define _PWM3PHL_PWM3PHL4_POSITION                          0x4
#define _PWM3PHL_PWM3PHL4_SIZE                              0x1
#define _PWM3PHL_PWM3PHL4_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL4_MASK                              0x10
#define _PWM3PHL_PWM3PHL5_POSN                              0x5
#define _PWM3PHL_PWM3PHL5_POSITION                          0x5
#define _PWM3PHL_PWM3PHL5_SIZE                              0x1
#define _PWM3PHL_PWM3PHL5_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL5_MASK                              0x20
#define _PWM3PHL_PWM3PHL6_POSN                              0x6
#define _PWM3PHL_PWM3PHL6_POSITION                          0x6
#define _PWM3PHL_PWM3PHL6_SIZE                              0x1
#define _PWM3PHL_PWM3PHL6_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL6_MASK                              0x40
#define _PWM3PHL_PWM3PHL7_POSN                              0x7
#define _PWM3PHL_PWM3PHL7_POSITION                          0x7
#define _PWM3PHL_PWM3PHL7_SIZE                              0x1
#define _PWM3PHL_PWM3PHL7_LENGTH                            0x1
#define _PWM3PHL_PWM3PHL7_MASK                              0x80
#define _PWM3PHL_PWM3PHL_POSN                               0x0
#define _PWM3PHL_PWM3PHL_POSITION                           0x0
#define _PWM3PHL_PWM3PHL_SIZE                               0x8
#define _PWM3PHL_PWM3PHL_LENGTH                             0x8
#define _PWM3PHL_PWM3PHL_MASK                               0xFF

// Register: PWM3PHH
#define PWM3PHH PWM3PHH
extern volatile unsigned char           PWM3PHH             __at(0xDB2);
#ifndef _LIB_BUILD
asm("PWM3PHH equ 0DB2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :8;
    };
    struct {
        unsigned PWM3PHH0               :1;
        unsigned PWM3PHH1               :1;
        unsigned PWM3PHH2               :1;
        unsigned PWM3PHH3               :1;
        unsigned PWM3PHH4               :1;
        unsigned PWM3PHH5               :1;
        unsigned PWM3PHH6               :1;
        unsigned PWM3PHH7               :1;
    };
    struct {
        unsigned PWM3PHH                :8;
    };
} PWM3PHHbits_t;
extern volatile PWM3PHHbits_t PWM3PHHbits __at(0xDB2);
// bitfield macros
#define _PWM3PHH_PH_POSN                                    0x0
#define _PWM3PHH_PH_POSITION                                0x0
#define _PWM3PHH_PH_SIZE                                    0x8
#define _PWM3PHH_PH_LENGTH                                  0x8
#define _PWM3PHH_PH_MASK                                    0xFF
#define _PWM3PHH_PWM3PHH0_POSN                              0x0
#define _PWM3PHH_PWM3PHH0_POSITION                          0x0
#define _PWM3PHH_PWM3PHH0_SIZE                              0x1
#define _PWM3PHH_PWM3PHH0_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH0_MASK                              0x1
#define _PWM3PHH_PWM3PHH1_POSN                              0x1
#define _PWM3PHH_PWM3PHH1_POSITION                          0x1
#define _PWM3PHH_PWM3PHH1_SIZE                              0x1
#define _PWM3PHH_PWM3PHH1_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH1_MASK                              0x2
#define _PWM3PHH_PWM3PHH2_POSN                              0x2
#define _PWM3PHH_PWM3PHH2_POSITION                          0x2
#define _PWM3PHH_PWM3PHH2_SIZE                              0x1
#define _PWM3PHH_PWM3PHH2_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH2_MASK                              0x4
#define _PWM3PHH_PWM3PHH3_POSN                              0x3
#define _PWM3PHH_PWM3PHH3_POSITION                          0x3
#define _PWM3PHH_PWM3PHH3_SIZE                              0x1
#define _PWM3PHH_PWM3PHH3_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH3_MASK                              0x8
#define _PWM3PHH_PWM3PHH4_POSN                              0x4
#define _PWM3PHH_PWM3PHH4_POSITION                          0x4
#define _PWM3PHH_PWM3PHH4_SIZE                              0x1
#define _PWM3PHH_PWM3PHH4_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH4_MASK                              0x10
#define _PWM3PHH_PWM3PHH5_POSN                              0x5
#define _PWM3PHH_PWM3PHH5_POSITION                          0x5
#define _PWM3PHH_PWM3PHH5_SIZE                              0x1
#define _PWM3PHH_PWM3PHH5_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH5_MASK                              0x20
#define _PWM3PHH_PWM3PHH6_POSN                              0x6
#define _PWM3PHH_PWM3PHH6_POSITION                          0x6
#define _PWM3PHH_PWM3PHH6_SIZE                              0x1
#define _PWM3PHH_PWM3PHH6_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH6_MASK                              0x40
#define _PWM3PHH_PWM3PHH7_POSN                              0x7
#define _PWM3PHH_PWM3PHH7_POSITION                          0x7
#define _PWM3PHH_PWM3PHH7_SIZE                              0x1
#define _PWM3PHH_PWM3PHH7_LENGTH                            0x1
#define _PWM3PHH_PWM3PHH7_MASK                              0x80
#define _PWM3PHH_PWM3PHH_POSN                               0x0
#define _PWM3PHH_PWM3PHH_POSITION                           0x0
#define _PWM3PHH_PWM3PHH_SIZE                               0x8
#define _PWM3PHH_PWM3PHH_LENGTH                             0x8
#define _PWM3PHH_PWM3PHH_MASK                               0xFF

// Register: PWM3DC
#define PWM3DC PWM3DC
extern volatile unsigned short          PWM3DC              __at(0xDB3);
#ifndef _LIB_BUILD
asm("PWM3DC equ 0DB3h");
#endif

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
extern volatile unsigned char           PWM3DCL             __at(0xDB3);
#ifndef _LIB_BUILD
asm("PWM3DCL equ 0DB3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :8;
    };
    struct {
        unsigned PWM3DCL0               :1;
        unsigned PWM3DCL1               :1;
        unsigned PWM3DCL2               :1;
        unsigned PWM3DCL3               :1;
        unsigned PWM3DCL4               :1;
        unsigned PWM3DCL5               :1;
        unsigned PWM3DCL6               :1;
        unsigned PWM3DCL7               :1;
    };
    struct {
        unsigned PWM3DCL                :8;
    };
} PWM3DCLbits_t;
extern volatile PWM3DCLbits_t PWM3DCLbits __at(0xDB3);
// bitfield macros
#define _PWM3DCL_DC_POSN                                    0x0
#define _PWM3DCL_DC_POSITION                                0x0
#define _PWM3DCL_DC_SIZE                                    0x8
#define _PWM3DCL_DC_LENGTH                                  0x8
#define _PWM3DCL_DC_MASK                                    0xFF
#define _PWM3DCL_PWM3DCL0_POSN                              0x0
#define _PWM3DCL_PWM3DCL0_POSITION                          0x0
#define _PWM3DCL_PWM3DCL0_SIZE                              0x1
#define _PWM3DCL_PWM3DCL0_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL0_MASK                              0x1
#define _PWM3DCL_PWM3DCL1_POSN                              0x1
#define _PWM3DCL_PWM3DCL1_POSITION                          0x1
#define _PWM3DCL_PWM3DCL1_SIZE                              0x1
#define _PWM3DCL_PWM3DCL1_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL1_MASK                              0x2
#define _PWM3DCL_PWM3DCL2_POSN                              0x2
#define _PWM3DCL_PWM3DCL2_POSITION                          0x2
#define _PWM3DCL_PWM3DCL2_SIZE                              0x1
#define _PWM3DCL_PWM3DCL2_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL2_MASK                              0x4
#define _PWM3DCL_PWM3DCL3_POSN                              0x3
#define _PWM3DCL_PWM3DCL3_POSITION                          0x3
#define _PWM3DCL_PWM3DCL3_SIZE                              0x1
#define _PWM3DCL_PWM3DCL3_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL3_MASK                              0x8
#define _PWM3DCL_PWM3DCL4_POSN                              0x4
#define _PWM3DCL_PWM3DCL4_POSITION                          0x4
#define _PWM3DCL_PWM3DCL4_SIZE                              0x1
#define _PWM3DCL_PWM3DCL4_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL4_MASK                              0x10
#define _PWM3DCL_PWM3DCL5_POSN                              0x5
#define _PWM3DCL_PWM3DCL5_POSITION                          0x5
#define _PWM3DCL_PWM3DCL5_SIZE                              0x1
#define _PWM3DCL_PWM3DCL5_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL5_MASK                              0x20
#define _PWM3DCL_PWM3DCL6_POSN                              0x6
#define _PWM3DCL_PWM3DCL6_POSITION                          0x6
#define _PWM3DCL_PWM3DCL6_SIZE                              0x1
#define _PWM3DCL_PWM3DCL6_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL6_MASK                              0x40
#define _PWM3DCL_PWM3DCL7_POSN                              0x7
#define _PWM3DCL_PWM3DCL7_POSITION                          0x7
#define _PWM3DCL_PWM3DCL7_SIZE                              0x1
#define _PWM3DCL_PWM3DCL7_LENGTH                            0x1
#define _PWM3DCL_PWM3DCL7_MASK                              0x80
#define _PWM3DCL_PWM3DCL_POSN                               0x0
#define _PWM3DCL_PWM3DCL_POSITION                           0x0
#define _PWM3DCL_PWM3DCL_SIZE                               0x8
#define _PWM3DCL_PWM3DCL_LENGTH                             0x8
#define _PWM3DCL_PWM3DCL_MASK                               0xFF

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
extern volatile unsigned char           PWM3DCH             __at(0xDB4);
#ifndef _LIB_BUILD
asm("PWM3DCH equ 0DB4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :8;
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
    struct {
        unsigned PWM3DCH                :8;
    };
} PWM3DCHbits_t;
extern volatile PWM3DCHbits_t PWM3DCHbits __at(0xDB4);
// bitfield macros
#define _PWM3DCH_DC_POSN                                    0x0
#define _PWM3DCH_DC_POSITION                                0x0
#define _PWM3DCH_DC_SIZE                                    0x8
#define _PWM3DCH_DC_LENGTH                                  0x8
#define _PWM3DCH_DC_MASK                                    0xFF
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
#define _PWM3DCH_PWM3DCH_POSN                               0x0
#define _PWM3DCH_PWM3DCH_POSITION                           0x0
#define _PWM3DCH_PWM3DCH_SIZE                               0x8
#define _PWM3DCH_PWM3DCH_LENGTH                             0x8
#define _PWM3DCH_PWM3DCH_MASK                               0xFF

// Register: PWM3PR
#define PWM3PR PWM3PR
extern volatile unsigned short          PWM3PR              __at(0xDB5);
#ifndef _LIB_BUILD
asm("PWM3PR equ 0DB5h");
#endif

// Register: PWM3PRL
#define PWM3PRL PWM3PRL
extern volatile unsigned char           PWM3PRL             __at(0xDB5);
#ifndef _LIB_BUILD
asm("PWM3PRL equ 0DB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned PWM3PRL0               :1;
        unsigned PWM3PRL1               :1;
        unsigned PWM3PRL2               :1;
        unsigned PWM3PRL3               :1;
        unsigned PWM3PRL4               :1;
        unsigned PWM3PRL5               :1;
        unsigned PWM3PRL6               :1;
        unsigned PWM3PRL7               :1;
    };
    struct {
        unsigned PWM3PRL                :8;
    };
} PWM3PRLbits_t;
extern volatile PWM3PRLbits_t PWM3PRLbits __at(0xDB5);
// bitfield macros
#define _PWM3PRL_PR_POSN                                    0x0
#define _PWM3PRL_PR_POSITION                                0x0
#define _PWM3PRL_PR_SIZE                                    0x8
#define _PWM3PRL_PR_LENGTH                                  0x8
#define _PWM3PRL_PR_MASK                                    0xFF
#define _PWM3PRL_PWM3PRL0_POSN                              0x0
#define _PWM3PRL_PWM3PRL0_POSITION                          0x0
#define _PWM3PRL_PWM3PRL0_SIZE                              0x1
#define _PWM3PRL_PWM3PRL0_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL0_MASK                              0x1
#define _PWM3PRL_PWM3PRL1_POSN                              0x1
#define _PWM3PRL_PWM3PRL1_POSITION                          0x1
#define _PWM3PRL_PWM3PRL1_SIZE                              0x1
#define _PWM3PRL_PWM3PRL1_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL1_MASK                              0x2
#define _PWM3PRL_PWM3PRL2_POSN                              0x2
#define _PWM3PRL_PWM3PRL2_POSITION                          0x2
#define _PWM3PRL_PWM3PRL2_SIZE                              0x1
#define _PWM3PRL_PWM3PRL2_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL2_MASK                              0x4
#define _PWM3PRL_PWM3PRL3_POSN                              0x3
#define _PWM3PRL_PWM3PRL3_POSITION                          0x3
#define _PWM3PRL_PWM3PRL3_SIZE                              0x1
#define _PWM3PRL_PWM3PRL3_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL3_MASK                              0x8
#define _PWM3PRL_PWM3PRL4_POSN                              0x4
#define _PWM3PRL_PWM3PRL4_POSITION                          0x4
#define _PWM3PRL_PWM3PRL4_SIZE                              0x1
#define _PWM3PRL_PWM3PRL4_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL4_MASK                              0x10
#define _PWM3PRL_PWM3PRL5_POSN                              0x5
#define _PWM3PRL_PWM3PRL5_POSITION                          0x5
#define _PWM3PRL_PWM3PRL5_SIZE                              0x1
#define _PWM3PRL_PWM3PRL5_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL5_MASK                              0x20
#define _PWM3PRL_PWM3PRL6_POSN                              0x6
#define _PWM3PRL_PWM3PRL6_POSITION                          0x6
#define _PWM3PRL_PWM3PRL6_SIZE                              0x1
#define _PWM3PRL_PWM3PRL6_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL6_MASK                              0x40
#define _PWM3PRL_PWM3PRL7_POSN                              0x7
#define _PWM3PRL_PWM3PRL7_POSITION                          0x7
#define _PWM3PRL_PWM3PRL7_SIZE                              0x1
#define _PWM3PRL_PWM3PRL7_LENGTH                            0x1
#define _PWM3PRL_PWM3PRL7_MASK                              0x80
#define _PWM3PRL_PWM3PRL_POSN                               0x0
#define _PWM3PRL_PWM3PRL_POSITION                           0x0
#define _PWM3PRL_PWM3PRL_SIZE                               0x8
#define _PWM3PRL_PWM3PRL_LENGTH                             0x8
#define _PWM3PRL_PWM3PRL_MASK                               0xFF

// Register: PWM3PRH
#define PWM3PRH PWM3PRH
extern volatile unsigned char           PWM3PRH             __at(0xDB6);
#ifndef _LIB_BUILD
asm("PWM3PRH equ 0DB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned PWM3PRH0               :1;
        unsigned PWM3PRH1               :1;
        unsigned PWM3PRH2               :1;
        unsigned PWM3PRH3               :1;
        unsigned PWM3PRH4               :1;
        unsigned PWM3PRH5               :1;
        unsigned PWM3PRH6               :1;
        unsigned PWM3PRH7               :1;
    };
    struct {
        unsigned PWM3PRH                :8;
    };
} PWM3PRHbits_t;
extern volatile PWM3PRHbits_t PWM3PRHbits __at(0xDB6);
// bitfield macros
#define _PWM3PRH_PR_POSN                                    0x0
#define _PWM3PRH_PR_POSITION                                0x0
#define _PWM3PRH_PR_SIZE                                    0x8
#define _PWM3PRH_PR_LENGTH                                  0x8
#define _PWM3PRH_PR_MASK                                    0xFF
#define _PWM3PRH_PWM3PRH0_POSN                              0x0
#define _PWM3PRH_PWM3PRH0_POSITION                          0x0
#define _PWM3PRH_PWM3PRH0_SIZE                              0x1
#define _PWM3PRH_PWM3PRH0_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH0_MASK                              0x1
#define _PWM3PRH_PWM3PRH1_POSN                              0x1
#define _PWM3PRH_PWM3PRH1_POSITION                          0x1
#define _PWM3PRH_PWM3PRH1_SIZE                              0x1
#define _PWM3PRH_PWM3PRH1_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH1_MASK                              0x2
#define _PWM3PRH_PWM3PRH2_POSN                              0x2
#define _PWM3PRH_PWM3PRH2_POSITION                          0x2
#define _PWM3PRH_PWM3PRH2_SIZE                              0x1
#define _PWM3PRH_PWM3PRH2_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH2_MASK                              0x4
#define _PWM3PRH_PWM3PRH3_POSN                              0x3
#define _PWM3PRH_PWM3PRH3_POSITION                          0x3
#define _PWM3PRH_PWM3PRH3_SIZE                              0x1
#define _PWM3PRH_PWM3PRH3_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH3_MASK                              0x8
#define _PWM3PRH_PWM3PRH4_POSN                              0x4
#define _PWM3PRH_PWM3PRH4_POSITION                          0x4
#define _PWM3PRH_PWM3PRH4_SIZE                              0x1
#define _PWM3PRH_PWM3PRH4_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH4_MASK                              0x10
#define _PWM3PRH_PWM3PRH5_POSN                              0x5
#define _PWM3PRH_PWM3PRH5_POSITION                          0x5
#define _PWM3PRH_PWM3PRH5_SIZE                              0x1
#define _PWM3PRH_PWM3PRH5_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH5_MASK                              0x20
#define _PWM3PRH_PWM3PRH6_POSN                              0x6
#define _PWM3PRH_PWM3PRH6_POSITION                          0x6
#define _PWM3PRH_PWM3PRH6_SIZE                              0x1
#define _PWM3PRH_PWM3PRH6_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH6_MASK                              0x40
#define _PWM3PRH_PWM3PRH7_POSN                              0x7
#define _PWM3PRH_PWM3PRH7_POSITION                          0x7
#define _PWM3PRH_PWM3PRH7_SIZE                              0x1
#define _PWM3PRH_PWM3PRH7_LENGTH                            0x1
#define _PWM3PRH_PWM3PRH7_MASK                              0x80
#define _PWM3PRH_PWM3PRH_POSN                               0x0
#define _PWM3PRH_PWM3PRH_POSITION                           0x0
#define _PWM3PRH_PWM3PRH_SIZE                               0x8
#define _PWM3PRH_PWM3PRH_LENGTH                             0x8
#define _PWM3PRH_PWM3PRH_MASK                               0xFF

// Register: PWM3OF
#define PWM3OF PWM3OF
extern volatile unsigned short          PWM3OF              __at(0xDB7);
#ifndef _LIB_BUILD
asm("PWM3OF equ 0DB7h");
#endif

// Register: PWM3OFL
#define PWM3OFL PWM3OFL
extern volatile unsigned char           PWM3OFL             __at(0xDB7);
#ifndef _LIB_BUILD
asm("PWM3OFL equ 0DB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OF                     :8;
    };
    struct {
        unsigned PWM3OFL0               :1;
        unsigned PWM3OFL1               :1;
        unsigned PWM3OFL2               :1;
        unsigned PWM3OFL3               :1;
        unsigned PWM3OFL4               :1;
        unsigned PWM3OFL5               :1;
        unsigned PWM3OFL6               :1;
        unsigned PWM3OFL7               :1;
    };
    struct {
        unsigned PWM3OFL                :8;
    };
} PWM3OFLbits_t;
extern volatile PWM3OFLbits_t PWM3OFLbits __at(0xDB7);
// bitfield macros
#define _PWM3OFL_OF_POSN                                    0x0
#define _PWM3OFL_OF_POSITION                                0x0
#define _PWM3OFL_OF_SIZE                                    0x8
#define _PWM3OFL_OF_LENGTH                                  0x8
#define _PWM3OFL_OF_MASK                                    0xFF
#define _PWM3OFL_PWM3OFL0_POSN                              0x0
#define _PWM3OFL_PWM3OFL0_POSITION                          0x0
#define _PWM3OFL_PWM3OFL0_SIZE                              0x1
#define _PWM3OFL_PWM3OFL0_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL0_MASK                              0x1
#define _PWM3OFL_PWM3OFL1_POSN                              0x1
#define _PWM3OFL_PWM3OFL1_POSITION                          0x1
#define _PWM3OFL_PWM3OFL1_SIZE                              0x1
#define _PWM3OFL_PWM3OFL1_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL1_MASK                              0x2
#define _PWM3OFL_PWM3OFL2_POSN                              0x2
#define _PWM3OFL_PWM3OFL2_POSITION                          0x2
#define _PWM3OFL_PWM3OFL2_SIZE                              0x1
#define _PWM3OFL_PWM3OFL2_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL2_MASK                              0x4
#define _PWM3OFL_PWM3OFL3_POSN                              0x3
#define _PWM3OFL_PWM3OFL3_POSITION                          0x3
#define _PWM3OFL_PWM3OFL3_SIZE                              0x1
#define _PWM3OFL_PWM3OFL3_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL3_MASK                              0x8
#define _PWM3OFL_PWM3OFL4_POSN                              0x4
#define _PWM3OFL_PWM3OFL4_POSITION                          0x4
#define _PWM3OFL_PWM3OFL4_SIZE                              0x1
#define _PWM3OFL_PWM3OFL4_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL4_MASK                              0x10
#define _PWM3OFL_PWM3OFL5_POSN                              0x5
#define _PWM3OFL_PWM3OFL5_POSITION                          0x5
#define _PWM3OFL_PWM3OFL5_SIZE                              0x1
#define _PWM3OFL_PWM3OFL5_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL5_MASK                              0x20
#define _PWM3OFL_PWM3OFL6_POSN                              0x6
#define _PWM3OFL_PWM3OFL6_POSITION                          0x6
#define _PWM3OFL_PWM3OFL6_SIZE                              0x1
#define _PWM3OFL_PWM3OFL6_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL6_MASK                              0x40
#define _PWM3OFL_PWM3OFL7_POSN                              0x7
#define _PWM3OFL_PWM3OFL7_POSITION                          0x7
#define _PWM3OFL_PWM3OFL7_SIZE                              0x1
#define _PWM3OFL_PWM3OFL7_LENGTH                            0x1
#define _PWM3OFL_PWM3OFL7_MASK                              0x80
#define _PWM3OFL_PWM3OFL_POSN                               0x0
#define _PWM3OFL_PWM3OFL_POSITION                           0x0
#define _PWM3OFL_PWM3OFL_SIZE                               0x8
#define _PWM3OFL_PWM3OFL_LENGTH                             0x8
#define _PWM3OFL_PWM3OFL_MASK                               0xFF

// Register: PWM3OFH
#define PWM3OFH PWM3OFH
extern volatile unsigned char           PWM3OFH             __at(0xDB8);
#ifndef _LIB_BUILD
asm("PWM3OFH equ 0DB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OF                     :8;
    };
    struct {
        unsigned PWM3OFH0               :1;
        unsigned PWM3OFH1               :1;
        unsigned PWM3OFH2               :1;
        unsigned PWM3OFH3               :1;
        unsigned PWM3OFH4               :1;
        unsigned PWM3OFH5               :1;
        unsigned PWM3OFH6               :1;
        unsigned PWM3OFH7               :1;
    };
    struct {
        unsigned PWM3OFH                :8;
    };
} PWM3OFHbits_t;
extern volatile PWM3OFHbits_t PWM3OFHbits __at(0xDB8);
// bitfield macros
#define _PWM3OFH_OF_POSN                                    0x0
#define _PWM3OFH_OF_POSITION                                0x0
#define _PWM3OFH_OF_SIZE                                    0x8
#define _PWM3OFH_OF_LENGTH                                  0x8
#define _PWM3OFH_OF_MASK                                    0xFF
#define _PWM3OFH_PWM3OFH0_POSN                              0x0
#define _PWM3OFH_PWM3OFH0_POSITION                          0x0
#define _PWM3OFH_PWM3OFH0_SIZE                              0x1
#define _PWM3OFH_PWM3OFH0_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH0_MASK                              0x1
#define _PWM3OFH_PWM3OFH1_POSN                              0x1
#define _PWM3OFH_PWM3OFH1_POSITION                          0x1
#define _PWM3OFH_PWM3OFH1_SIZE                              0x1
#define _PWM3OFH_PWM3OFH1_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH1_MASK                              0x2
#define _PWM3OFH_PWM3OFH2_POSN                              0x2
#define _PWM3OFH_PWM3OFH2_POSITION                          0x2
#define _PWM3OFH_PWM3OFH2_SIZE                              0x1
#define _PWM3OFH_PWM3OFH2_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH2_MASK                              0x4
#define _PWM3OFH_PWM3OFH3_POSN                              0x3
#define _PWM3OFH_PWM3OFH3_POSITION                          0x3
#define _PWM3OFH_PWM3OFH3_SIZE                              0x1
#define _PWM3OFH_PWM3OFH3_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH3_MASK                              0x8
#define _PWM3OFH_PWM3OFH4_POSN                              0x4
#define _PWM3OFH_PWM3OFH4_POSITION                          0x4
#define _PWM3OFH_PWM3OFH4_SIZE                              0x1
#define _PWM3OFH_PWM3OFH4_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH4_MASK                              0x10
#define _PWM3OFH_PWM3OFH5_POSN                              0x5
#define _PWM3OFH_PWM3OFH5_POSITION                          0x5
#define _PWM3OFH_PWM3OFH5_SIZE                              0x1
#define _PWM3OFH_PWM3OFH5_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH5_MASK                              0x20
#define _PWM3OFH_PWM3OFH6_POSN                              0x6
#define _PWM3OFH_PWM3OFH6_POSITION                          0x6
#define _PWM3OFH_PWM3OFH6_SIZE                              0x1
#define _PWM3OFH_PWM3OFH6_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH6_MASK                              0x40
#define _PWM3OFH_PWM3OFH7_POSN                              0x7
#define _PWM3OFH_PWM3OFH7_POSITION                          0x7
#define _PWM3OFH_PWM3OFH7_SIZE                              0x1
#define _PWM3OFH_PWM3OFH7_LENGTH                            0x1
#define _PWM3OFH_PWM3OFH7_MASK                              0x80
#define _PWM3OFH_PWM3OFH_POSN                               0x0
#define _PWM3OFH_PWM3OFH_POSITION                           0x0
#define _PWM3OFH_PWM3OFH_SIZE                               0x8
#define _PWM3OFH_PWM3OFH_LENGTH                             0x8
#define _PWM3OFH_PWM3OFH_MASK                               0xFF

// Register: PWM3TMR
#define PWM3TMR PWM3TMR
extern volatile unsigned short          PWM3TMR             __at(0xDB9);
#ifndef _LIB_BUILD
asm("PWM3TMR equ 0DB9h");
#endif

// Register: PWM3TMRL
#define PWM3TMRL PWM3TMRL
extern volatile unsigned char           PWM3TMRL            __at(0xDB9);
#ifndef _LIB_BUILD
asm("PWM3TMRL equ 0DB9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned PWM3TMRL0              :1;
        unsigned PWM3TMRL1              :1;
        unsigned PWM3TMRL2              :1;
        unsigned PWM3TMRL3              :1;
        unsigned PWM3TMRL4              :1;
        unsigned PWM3TMRL5              :1;
        unsigned PWM3TMRL6              :1;
        unsigned PWM3TMRL7              :1;
    };
    struct {
        unsigned PWM3TMRL               :8;
    };
} PWM3TMRLbits_t;
extern volatile PWM3TMRLbits_t PWM3TMRLbits __at(0xDB9);
// bitfield macros
#define _PWM3TMRL_TMR_POSN                                  0x0
#define _PWM3TMRL_TMR_POSITION                              0x0
#define _PWM3TMRL_TMR_SIZE                                  0x8
#define _PWM3TMRL_TMR_LENGTH                                0x8
#define _PWM3TMRL_TMR_MASK                                  0xFF
#define _PWM3TMRL_PWM3TMRL0_POSN                            0x0
#define _PWM3TMRL_PWM3TMRL0_POSITION                        0x0
#define _PWM3TMRL_PWM3TMRL0_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL0_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL0_MASK                            0x1
#define _PWM3TMRL_PWM3TMRL1_POSN                            0x1
#define _PWM3TMRL_PWM3TMRL1_POSITION                        0x1
#define _PWM3TMRL_PWM3TMRL1_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL1_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL1_MASK                            0x2
#define _PWM3TMRL_PWM3TMRL2_POSN                            0x2
#define _PWM3TMRL_PWM3TMRL2_POSITION                        0x2
#define _PWM3TMRL_PWM3TMRL2_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL2_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL2_MASK                            0x4
#define _PWM3TMRL_PWM3TMRL3_POSN                            0x3
#define _PWM3TMRL_PWM3TMRL3_POSITION                        0x3
#define _PWM3TMRL_PWM3TMRL3_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL3_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL3_MASK                            0x8
#define _PWM3TMRL_PWM3TMRL4_POSN                            0x4
#define _PWM3TMRL_PWM3TMRL4_POSITION                        0x4
#define _PWM3TMRL_PWM3TMRL4_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL4_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL4_MASK                            0x10
#define _PWM3TMRL_PWM3TMRL5_POSN                            0x5
#define _PWM3TMRL_PWM3TMRL5_POSITION                        0x5
#define _PWM3TMRL_PWM3TMRL5_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL5_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL5_MASK                            0x20
#define _PWM3TMRL_PWM3TMRL6_POSN                            0x6
#define _PWM3TMRL_PWM3TMRL6_POSITION                        0x6
#define _PWM3TMRL_PWM3TMRL6_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL6_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL6_MASK                            0x40
#define _PWM3TMRL_PWM3TMRL7_POSN                            0x7
#define _PWM3TMRL_PWM3TMRL7_POSITION                        0x7
#define _PWM3TMRL_PWM3TMRL7_SIZE                            0x1
#define _PWM3TMRL_PWM3TMRL7_LENGTH                          0x1
#define _PWM3TMRL_PWM3TMRL7_MASK                            0x80
#define _PWM3TMRL_PWM3TMRL_POSN                             0x0
#define _PWM3TMRL_PWM3TMRL_POSITION                         0x0
#define _PWM3TMRL_PWM3TMRL_SIZE                             0x8
#define _PWM3TMRL_PWM3TMRL_LENGTH                           0x8
#define _PWM3TMRL_PWM3TMRL_MASK                             0xFF

// Register: PWM3TMRH
#define PWM3TMRH PWM3TMRH
extern volatile unsigned char           PWM3TMRH            __at(0xDBA);
#ifndef _LIB_BUILD
asm("PWM3TMRH equ 0DBAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned PWM3TMRH0              :1;
        unsigned PWM3TMRH1              :1;
        unsigned PWM3TMRH2              :1;
        unsigned PWM3TMRH3              :1;
        unsigned PWM3TMRH4              :1;
        unsigned PWM3TMRH5              :1;
        unsigned PWM3TMRH6              :1;
        unsigned PWM3TMRH7              :1;
    };
    struct {
        unsigned PWM3TMRH               :8;
    };
} PWM3TMRHbits_t;
extern volatile PWM3TMRHbits_t PWM3TMRHbits __at(0xDBA);
// bitfield macros
#define _PWM3TMRH_TMR_POSN                                  0x0
#define _PWM3TMRH_TMR_POSITION                              0x0
#define _PWM3TMRH_TMR_SIZE                                  0x8
#define _PWM3TMRH_TMR_LENGTH                                0x8
#define _PWM3TMRH_TMR_MASK                                  0xFF
#define _PWM3TMRH_PWM3TMRH0_POSN                            0x0
#define _PWM3TMRH_PWM3TMRH0_POSITION                        0x0
#define _PWM3TMRH_PWM3TMRH0_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH0_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH0_MASK                            0x1
#define _PWM3TMRH_PWM3TMRH1_POSN                            0x1
#define _PWM3TMRH_PWM3TMRH1_POSITION                        0x1
#define _PWM3TMRH_PWM3TMRH1_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH1_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH1_MASK                            0x2
#define _PWM3TMRH_PWM3TMRH2_POSN                            0x2
#define _PWM3TMRH_PWM3TMRH2_POSITION                        0x2
#define _PWM3TMRH_PWM3TMRH2_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH2_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH2_MASK                            0x4
#define _PWM3TMRH_PWM3TMRH3_POSN                            0x3
#define _PWM3TMRH_PWM3TMRH3_POSITION                        0x3
#define _PWM3TMRH_PWM3TMRH3_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH3_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH3_MASK                            0x8
#define _PWM3TMRH_PWM3TMRH4_POSN                            0x4
#define _PWM3TMRH_PWM3TMRH4_POSITION                        0x4
#define _PWM3TMRH_PWM3TMRH4_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH4_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH4_MASK                            0x10
#define _PWM3TMRH_PWM3TMRH5_POSN                            0x5
#define _PWM3TMRH_PWM3TMRH5_POSITION                        0x5
#define _PWM3TMRH_PWM3TMRH5_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH5_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH5_MASK                            0x20
#define _PWM3TMRH_PWM3TMRH6_POSN                            0x6
#define _PWM3TMRH_PWM3TMRH6_POSITION                        0x6
#define _PWM3TMRH_PWM3TMRH6_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH6_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH6_MASK                            0x40
#define _PWM3TMRH_PWM3TMRH7_POSN                            0x7
#define _PWM3TMRH_PWM3TMRH7_POSITION                        0x7
#define _PWM3TMRH_PWM3TMRH7_SIZE                            0x1
#define _PWM3TMRH_PWM3TMRH7_LENGTH                          0x1
#define _PWM3TMRH_PWM3TMRH7_MASK                            0x80
#define _PWM3TMRH_PWM3TMRH_POSN                             0x0
#define _PWM3TMRH_PWM3TMRH_POSITION                         0x0
#define _PWM3TMRH_PWM3TMRH_SIZE                             0x8
#define _PWM3TMRH_PWM3TMRH_LENGTH                           0x8
#define _PWM3TMRH_PWM3TMRH_MASK                             0xFF

// Register: PWM3CON
#define PWM3CON PWM3CON
extern volatile unsigned char           PWM3CON             __at(0xDBB);
#ifndef _LIB_BUILD
asm("PWM3CON equ 0DBBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned MODE                   :2;
        unsigned POL                    :1;
        unsigned OUT                    :1;
        unsigned OE                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned PWM3MODE0              :1;
        unsigned PWM3MODE1              :1;
    };
    struct {
        unsigned                        :2;
        unsigned PWM3MODE               :2;
        unsigned PWM3POL                :1;
        unsigned PWM3OUT                :1;
        unsigned PWM3OE                 :1;
        unsigned PWM3EN                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
    };
} PWM3CONbits_t;
extern volatile PWM3CONbits_t PWM3CONbits __at(0xDBB);
// bitfield macros
#define _PWM3CON_MODE_POSN                                  0x2
#define _PWM3CON_MODE_POSITION                              0x2
#define _PWM3CON_MODE_SIZE                                  0x2
#define _PWM3CON_MODE_LENGTH                                0x2
#define _PWM3CON_MODE_MASK                                  0xC
#define _PWM3CON_POL_POSN                                   0x4
#define _PWM3CON_POL_POSITION                               0x4
#define _PWM3CON_POL_SIZE                                   0x1
#define _PWM3CON_POL_LENGTH                                 0x1
#define _PWM3CON_POL_MASK                                   0x10
#define _PWM3CON_OUT_POSN                                   0x5
#define _PWM3CON_OUT_POSITION                               0x5
#define _PWM3CON_OUT_SIZE                                   0x1
#define _PWM3CON_OUT_LENGTH                                 0x1
#define _PWM3CON_OUT_MASK                                   0x20
#define _PWM3CON_OE_POSN                                    0x6
#define _PWM3CON_OE_POSITION                                0x6
#define _PWM3CON_OE_SIZE                                    0x1
#define _PWM3CON_OE_LENGTH                                  0x1
#define _PWM3CON_OE_MASK                                    0x40
#define _PWM3CON_EN_POSN                                    0x7
#define _PWM3CON_EN_POSITION                                0x7
#define _PWM3CON_EN_SIZE                                    0x1
#define _PWM3CON_EN_LENGTH                                  0x1
#define _PWM3CON_EN_MASK                                    0x80
#define _PWM3CON_PWM3MODE0_POSN                             0x2
#define _PWM3CON_PWM3MODE0_POSITION                         0x2
#define _PWM3CON_PWM3MODE0_SIZE                             0x1
#define _PWM3CON_PWM3MODE0_LENGTH                           0x1
#define _PWM3CON_PWM3MODE0_MASK                             0x4
#define _PWM3CON_PWM3MODE1_POSN                             0x3
#define _PWM3CON_PWM3MODE1_POSITION                         0x3
#define _PWM3CON_PWM3MODE1_SIZE                             0x1
#define _PWM3CON_PWM3MODE1_LENGTH                           0x1
#define _PWM3CON_PWM3MODE1_MASK                             0x8
#define _PWM3CON_PWM3MODE_POSN                              0x2
#define _PWM3CON_PWM3MODE_POSITION                          0x2
#define _PWM3CON_PWM3MODE_SIZE                              0x2
#define _PWM3CON_PWM3MODE_LENGTH                            0x2
#define _PWM3CON_PWM3MODE_MASK                              0xC
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
#define _PWM3CON_MODE0_POSN                                 0x2
#define _PWM3CON_MODE0_POSITION                             0x2
#define _PWM3CON_MODE0_SIZE                                 0x1
#define _PWM3CON_MODE0_LENGTH                               0x1
#define _PWM3CON_MODE0_MASK                                 0x4
#define _PWM3CON_MODE1_POSN                                 0x3
#define _PWM3CON_MODE1_POSITION                             0x3
#define _PWM3CON_MODE1_SIZE                                 0x1
#define _PWM3CON_MODE1_LENGTH                               0x1
#define _PWM3CON_MODE1_MASK                                 0x8

// Register: PWM3INTE
#define PWM3INTE PWM3INTE
extern volatile unsigned char           PWM3INTE            __at(0xDBC);
#ifndef _LIB_BUILD
asm("PWM3INTE equ 0DBCh");
#endif
// aliases
extern volatile unsigned char           PWM3INTCON          __at(0xDBC);
#ifndef _LIB_BUILD
asm("PWM3INTCON equ 0DBCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRIE                   :1;
        unsigned DCIE                   :1;
        unsigned PHIE                   :1;
        unsigned OFIE                   :1;
    };
    struct {
        unsigned PWM3PRIE               :1;
        unsigned PWM3DCIE               :1;
        unsigned PWM3PHIE               :1;
        unsigned PWM3OFIE               :1;
    };
} PWM3INTEbits_t;
extern volatile PWM3INTEbits_t PWM3INTEbits __at(0xDBC);
// bitfield macros
#define _PWM3INTE_PRIE_POSN                                 0x0
#define _PWM3INTE_PRIE_POSITION                             0x0
#define _PWM3INTE_PRIE_SIZE                                 0x1
#define _PWM3INTE_PRIE_LENGTH                               0x1
#define _PWM3INTE_PRIE_MASK                                 0x1
#define _PWM3INTE_DCIE_POSN                                 0x1
#define _PWM3INTE_DCIE_POSITION                             0x1
#define _PWM3INTE_DCIE_SIZE                                 0x1
#define _PWM3INTE_DCIE_LENGTH                               0x1
#define _PWM3INTE_DCIE_MASK                                 0x2
#define _PWM3INTE_PHIE_POSN                                 0x2
#define _PWM3INTE_PHIE_POSITION                             0x2
#define _PWM3INTE_PHIE_SIZE                                 0x1
#define _PWM3INTE_PHIE_LENGTH                               0x1
#define _PWM3INTE_PHIE_MASK                                 0x4
#define _PWM3INTE_OFIE_POSN                                 0x3
#define _PWM3INTE_OFIE_POSITION                             0x3
#define _PWM3INTE_OFIE_SIZE                                 0x1
#define _PWM3INTE_OFIE_LENGTH                               0x1
#define _PWM3INTE_OFIE_MASK                                 0x8
#define _PWM3INTE_PWM3PRIE_POSN                             0x0
#define _PWM3INTE_PWM3PRIE_POSITION                         0x0
#define _PWM3INTE_PWM3PRIE_SIZE                             0x1
#define _PWM3INTE_PWM3PRIE_LENGTH                           0x1
#define _PWM3INTE_PWM3PRIE_MASK                             0x1
#define _PWM3INTE_PWM3DCIE_POSN                             0x1
#define _PWM3INTE_PWM3DCIE_POSITION                         0x1
#define _PWM3INTE_PWM3DCIE_SIZE                             0x1
#define _PWM3INTE_PWM3DCIE_LENGTH                           0x1
#define _PWM3INTE_PWM3DCIE_MASK                             0x2
#define _PWM3INTE_PWM3PHIE_POSN                             0x2
#define _PWM3INTE_PWM3PHIE_POSITION                         0x2
#define _PWM3INTE_PWM3PHIE_SIZE                             0x1
#define _PWM3INTE_PWM3PHIE_LENGTH                           0x1
#define _PWM3INTE_PWM3PHIE_MASK                             0x4
#define _PWM3INTE_PWM3OFIE_POSN                             0x3
#define _PWM3INTE_PWM3OFIE_POSITION                         0x3
#define _PWM3INTE_PWM3OFIE_SIZE                             0x1
#define _PWM3INTE_PWM3OFIE_LENGTH                           0x1
#define _PWM3INTE_PWM3OFIE_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned PRIE                   :1;
        unsigned DCIE                   :1;
        unsigned PHIE                   :1;
        unsigned OFIE                   :1;
    };
    struct {
        unsigned PWM3PRIE               :1;
        unsigned PWM3DCIE               :1;
        unsigned PWM3PHIE               :1;
        unsigned PWM3OFIE               :1;
    };
} PWM3INTCONbits_t;
extern volatile PWM3INTCONbits_t PWM3INTCONbits __at(0xDBC);
// bitfield macros
#define _PWM3INTCON_PRIE_POSN                               0x0
#define _PWM3INTCON_PRIE_POSITION                           0x0
#define _PWM3INTCON_PRIE_SIZE                               0x1
#define _PWM3INTCON_PRIE_LENGTH                             0x1
#define _PWM3INTCON_PRIE_MASK                               0x1
#define _PWM3INTCON_DCIE_POSN                               0x1
#define _PWM3INTCON_DCIE_POSITION                           0x1
#define _PWM3INTCON_DCIE_SIZE                               0x1
#define _PWM3INTCON_DCIE_LENGTH                             0x1
#define _PWM3INTCON_DCIE_MASK                               0x2
#define _PWM3INTCON_PHIE_POSN                               0x2
#define _PWM3INTCON_PHIE_POSITION                           0x2
#define _PWM3INTCON_PHIE_SIZE                               0x1
#define _PWM3INTCON_PHIE_LENGTH                             0x1
#define _PWM3INTCON_PHIE_MASK                               0x4
#define _PWM3INTCON_OFIE_POSN                               0x3
#define _PWM3INTCON_OFIE_POSITION                           0x3
#define _PWM3INTCON_OFIE_SIZE                               0x1
#define _PWM3INTCON_OFIE_LENGTH                             0x1
#define _PWM3INTCON_OFIE_MASK                               0x8
#define _PWM3INTCON_PWM3PRIE_POSN                           0x0
#define _PWM3INTCON_PWM3PRIE_POSITION                       0x0
#define _PWM3INTCON_PWM3PRIE_SIZE                           0x1
#define _PWM3INTCON_PWM3PRIE_LENGTH                         0x1
#define _PWM3INTCON_PWM3PRIE_MASK                           0x1
#define _PWM3INTCON_PWM3DCIE_POSN                           0x1
#define _PWM3INTCON_PWM3DCIE_POSITION                       0x1
#define _PWM3INTCON_PWM3DCIE_SIZE                           0x1
#define _PWM3INTCON_PWM3DCIE_LENGTH                         0x1
#define _PWM3INTCON_PWM3DCIE_MASK                           0x2
#define _PWM3INTCON_PWM3PHIE_POSN                           0x2
#define _PWM3INTCON_PWM3PHIE_POSITION                       0x2
#define _PWM3INTCON_PWM3PHIE_SIZE                           0x1
#define _PWM3INTCON_PWM3PHIE_LENGTH                         0x1
#define _PWM3INTCON_PWM3PHIE_MASK                           0x4
#define _PWM3INTCON_PWM3OFIE_POSN                           0x3
#define _PWM3INTCON_PWM3OFIE_POSITION                       0x3
#define _PWM3INTCON_PWM3OFIE_SIZE                           0x1
#define _PWM3INTCON_PWM3OFIE_LENGTH                         0x1
#define _PWM3INTCON_PWM3OFIE_MASK                           0x8

// Register: PWM3INTF
#define PWM3INTF PWM3INTF
extern volatile unsigned char           PWM3INTF            __at(0xDBD);
#ifndef _LIB_BUILD
asm("PWM3INTF equ 0DBDh");
#endif
// aliases
extern volatile unsigned char           PWM3INTFLG          __at(0xDBD);
#ifndef _LIB_BUILD
asm("PWM3INTFLG equ 0DBDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRIF                   :1;
        unsigned DCIF                   :1;
        unsigned PHIF                   :1;
        unsigned OFIF                   :1;
    };
    struct {
        unsigned PWM3PRIF               :1;
        unsigned PWM3DCIF               :1;
        unsigned PWM3PHIF               :1;
        unsigned PWM3OFIF               :1;
    };
} PWM3INTFbits_t;
extern volatile PWM3INTFbits_t PWM3INTFbits __at(0xDBD);
// bitfield macros
#define _PWM3INTF_PRIF_POSN                                 0x0
#define _PWM3INTF_PRIF_POSITION                             0x0
#define _PWM3INTF_PRIF_SIZE                                 0x1
#define _PWM3INTF_PRIF_LENGTH                               0x1
#define _PWM3INTF_PRIF_MASK                                 0x1
#define _PWM3INTF_DCIF_POSN                                 0x1
#define _PWM3INTF_DCIF_POSITION                             0x1
#define _PWM3INTF_DCIF_SIZE                                 0x1
#define _PWM3INTF_DCIF_LENGTH                               0x1
#define _PWM3INTF_DCIF_MASK                                 0x2
#define _PWM3INTF_PHIF_POSN                                 0x2
#define _PWM3INTF_PHIF_POSITION                             0x2
#define _PWM3INTF_PHIF_SIZE                                 0x1
#define _PWM3INTF_PHIF_LENGTH                               0x1
#define _PWM3INTF_PHIF_MASK                                 0x4
#define _PWM3INTF_OFIF_POSN                                 0x3
#define _PWM3INTF_OFIF_POSITION                             0x3
#define _PWM3INTF_OFIF_SIZE                                 0x1
#define _PWM3INTF_OFIF_LENGTH                               0x1
#define _PWM3INTF_OFIF_MASK                                 0x8
#define _PWM3INTF_PWM3PRIF_POSN                             0x0
#define _PWM3INTF_PWM3PRIF_POSITION                         0x0
#define _PWM3INTF_PWM3PRIF_SIZE                             0x1
#define _PWM3INTF_PWM3PRIF_LENGTH                           0x1
#define _PWM3INTF_PWM3PRIF_MASK                             0x1
#define _PWM3INTF_PWM3DCIF_POSN                             0x1
#define _PWM3INTF_PWM3DCIF_POSITION                         0x1
#define _PWM3INTF_PWM3DCIF_SIZE                             0x1
#define _PWM3INTF_PWM3DCIF_LENGTH                           0x1
#define _PWM3INTF_PWM3DCIF_MASK                             0x2
#define _PWM3INTF_PWM3PHIF_POSN                             0x2
#define _PWM3INTF_PWM3PHIF_POSITION                         0x2
#define _PWM3INTF_PWM3PHIF_SIZE                             0x1
#define _PWM3INTF_PWM3PHIF_LENGTH                           0x1
#define _PWM3INTF_PWM3PHIF_MASK                             0x4
#define _PWM3INTF_PWM3OFIF_POSN                             0x3
#define _PWM3INTF_PWM3OFIF_POSITION                         0x3
#define _PWM3INTF_PWM3OFIF_SIZE                             0x1
#define _PWM3INTF_PWM3OFIF_LENGTH                           0x1
#define _PWM3INTF_PWM3OFIF_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned PRIF                   :1;
        unsigned DCIF                   :1;
        unsigned PHIF                   :1;
        unsigned OFIF                   :1;
    };
    struct {
        unsigned PWM3PRIF               :1;
        unsigned PWM3DCIF               :1;
        unsigned PWM3PHIF               :1;
        unsigned PWM3OFIF               :1;
    };
} PWM3INTFLGbits_t;
extern volatile PWM3INTFLGbits_t PWM3INTFLGbits __at(0xDBD);
// bitfield macros
#define _PWM3INTFLG_PRIF_POSN                               0x0
#define _PWM3INTFLG_PRIF_POSITION                           0x0
#define _PWM3INTFLG_PRIF_SIZE                               0x1
#define _PWM3INTFLG_PRIF_LENGTH                             0x1
#define _PWM3INTFLG_PRIF_MASK                               0x1
#define _PWM3INTFLG_DCIF_POSN                               0x1
#define _PWM3INTFLG_DCIF_POSITION                           0x1
#define _PWM3INTFLG_DCIF_SIZE                               0x1
#define _PWM3INTFLG_DCIF_LENGTH                             0x1
#define _PWM3INTFLG_DCIF_MASK                               0x2
#define _PWM3INTFLG_PHIF_POSN                               0x2
#define _PWM3INTFLG_PHIF_POSITION                           0x2
#define _PWM3INTFLG_PHIF_SIZE                               0x1
#define _PWM3INTFLG_PHIF_LENGTH                             0x1
#define _PWM3INTFLG_PHIF_MASK                               0x4
#define _PWM3INTFLG_OFIF_POSN                               0x3
#define _PWM3INTFLG_OFIF_POSITION                           0x3
#define _PWM3INTFLG_OFIF_SIZE                               0x1
#define _PWM3INTFLG_OFIF_LENGTH                             0x1
#define _PWM3INTFLG_OFIF_MASK                               0x8
#define _PWM3INTFLG_PWM3PRIF_POSN                           0x0
#define _PWM3INTFLG_PWM3PRIF_POSITION                       0x0
#define _PWM3INTFLG_PWM3PRIF_SIZE                           0x1
#define _PWM3INTFLG_PWM3PRIF_LENGTH                         0x1
#define _PWM3INTFLG_PWM3PRIF_MASK                           0x1
#define _PWM3INTFLG_PWM3DCIF_POSN                           0x1
#define _PWM3INTFLG_PWM3DCIF_POSITION                       0x1
#define _PWM3INTFLG_PWM3DCIF_SIZE                           0x1
#define _PWM3INTFLG_PWM3DCIF_LENGTH                         0x1
#define _PWM3INTFLG_PWM3DCIF_MASK                           0x2
#define _PWM3INTFLG_PWM3PHIF_POSN                           0x2
#define _PWM3INTFLG_PWM3PHIF_POSITION                       0x2
#define _PWM3INTFLG_PWM3PHIF_SIZE                           0x1
#define _PWM3INTFLG_PWM3PHIF_LENGTH                         0x1
#define _PWM3INTFLG_PWM3PHIF_MASK                           0x4
#define _PWM3INTFLG_PWM3OFIF_POSN                           0x3
#define _PWM3INTFLG_PWM3OFIF_POSITION                       0x3
#define _PWM3INTFLG_PWM3OFIF_SIZE                           0x1
#define _PWM3INTFLG_PWM3OFIF_LENGTH                         0x1
#define _PWM3INTFLG_PWM3OFIF_MASK                           0x8

// Register: PWM3CLKCON
#define PWM3CLKCON PWM3CLKCON
extern volatile unsigned char           PWM3CLKCON          __at(0xDBE);
#ifndef _LIB_BUILD
asm("PWM3CLKCON equ 0DBEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :2;
        unsigned                        :2;
        unsigned PS                     :3;
    };
    struct {
        unsigned PWM3CS0                :1;
        unsigned PWM3CS1                :1;
        unsigned                        :2;
        unsigned PWM3PS0                :1;
        unsigned PWM3PS1                :1;
        unsigned PWM3PS2                :1;
    };
    struct {
        unsigned PWM3CS                 :3;
        unsigned                        :1;
        unsigned PWM3PS                 :3;
    };
    struct {
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned                        :2;
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
    };
} PWM3CLKCONbits_t;
extern volatile PWM3CLKCONbits_t PWM3CLKCONbits __at(0xDBE);
// bitfield macros
#define _PWM3CLKCON_CS_POSN                                 0x0
#define _PWM3CLKCON_CS_POSITION                             0x0
#define _PWM3CLKCON_CS_SIZE                                 0x2
#define _PWM3CLKCON_CS_LENGTH                               0x2
#define _PWM3CLKCON_CS_MASK                                 0x3
#define _PWM3CLKCON_PS_POSN                                 0x4
#define _PWM3CLKCON_PS_POSITION                             0x4
#define _PWM3CLKCON_PS_SIZE                                 0x3
#define _PWM3CLKCON_PS_LENGTH                               0x3
#define _PWM3CLKCON_PS_MASK                                 0x70
#define _PWM3CLKCON_PWM3CS0_POSN                            0x0
#define _PWM3CLKCON_PWM3CS0_POSITION                        0x0
#define _PWM3CLKCON_PWM3CS0_SIZE                            0x1
#define _PWM3CLKCON_PWM3CS0_LENGTH                          0x1
#define _PWM3CLKCON_PWM3CS0_MASK                            0x1
#define _PWM3CLKCON_PWM3CS1_POSN                            0x1
#define _PWM3CLKCON_PWM3CS1_POSITION                        0x1
#define _PWM3CLKCON_PWM3CS1_SIZE                            0x1
#define _PWM3CLKCON_PWM3CS1_LENGTH                          0x1
#define _PWM3CLKCON_PWM3CS1_MASK                            0x2
#define _PWM3CLKCON_PWM3PS0_POSN                            0x4
#define _PWM3CLKCON_PWM3PS0_POSITION                        0x4
#define _PWM3CLKCON_PWM3PS0_SIZE                            0x1
#define _PWM3CLKCON_PWM3PS0_LENGTH                          0x1
#define _PWM3CLKCON_PWM3PS0_MASK                            0x10
#define _PWM3CLKCON_PWM3PS1_POSN                            0x5
#define _PWM3CLKCON_PWM3PS1_POSITION                        0x5
#define _PWM3CLKCON_PWM3PS1_SIZE                            0x1
#define _PWM3CLKCON_PWM3PS1_LENGTH                          0x1
#define _PWM3CLKCON_PWM3PS1_MASK                            0x20
#define _PWM3CLKCON_PWM3PS2_POSN                            0x6
#define _PWM3CLKCON_PWM3PS2_POSITION                        0x6
#define _PWM3CLKCON_PWM3PS2_SIZE                            0x1
#define _PWM3CLKCON_PWM3PS2_LENGTH                          0x1
#define _PWM3CLKCON_PWM3PS2_MASK                            0x40
#define _PWM3CLKCON_PWM3CS_POSN                             0x0
#define _PWM3CLKCON_PWM3CS_POSITION                         0x0
#define _PWM3CLKCON_PWM3CS_SIZE                             0x3
#define _PWM3CLKCON_PWM3CS_LENGTH                           0x3
#define _PWM3CLKCON_PWM3CS_MASK                             0x7
#define _PWM3CLKCON_PWM3PS_POSN                             0x4
#define _PWM3CLKCON_PWM3PS_POSITION                         0x4
#define _PWM3CLKCON_PWM3PS_SIZE                             0x3
#define _PWM3CLKCON_PWM3PS_LENGTH                           0x3
#define _PWM3CLKCON_PWM3PS_MASK                             0x70
#define _PWM3CLKCON_CS0_POSN                                0x0
#define _PWM3CLKCON_CS0_POSITION                            0x0
#define _PWM3CLKCON_CS0_SIZE                                0x1
#define _PWM3CLKCON_CS0_LENGTH                              0x1
#define _PWM3CLKCON_CS0_MASK                                0x1
#define _PWM3CLKCON_CS1_POSN                                0x1
#define _PWM3CLKCON_CS1_POSITION                            0x1
#define _PWM3CLKCON_CS1_SIZE                                0x1
#define _PWM3CLKCON_CS1_LENGTH                              0x1
#define _PWM3CLKCON_CS1_MASK                                0x2
#define _PWM3CLKCON_PS0_POSN                                0x4
#define _PWM3CLKCON_PS0_POSITION                            0x4
#define _PWM3CLKCON_PS0_SIZE                                0x1
#define _PWM3CLKCON_PS0_LENGTH                              0x1
#define _PWM3CLKCON_PS0_MASK                                0x10
#define _PWM3CLKCON_PS1_POSN                                0x5
#define _PWM3CLKCON_PS1_POSITION                            0x5
#define _PWM3CLKCON_PS1_SIZE                                0x1
#define _PWM3CLKCON_PS1_LENGTH                              0x1
#define _PWM3CLKCON_PS1_MASK                                0x20
#define _PWM3CLKCON_PS2_POSN                                0x6
#define _PWM3CLKCON_PS2_POSITION                            0x6
#define _PWM3CLKCON_PS2_SIZE                                0x1
#define _PWM3CLKCON_PS2_LENGTH                              0x1
#define _PWM3CLKCON_PS2_MASK                                0x40

// Register: PWM3LDCON
#define PWM3LDCON PWM3LDCON
extern volatile unsigned char           PWM3LDCON           __at(0xDBF);
#ifndef _LIB_BUILD
asm("PWM3LDCON equ 0DBFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDS                    :2;
        unsigned                        :4;
        unsigned LDT                    :1;
        unsigned LDA                    :1;
    };
    struct {
        unsigned PWM3LDS0               :1;
        unsigned PWM3LDS1               :1;
    };
    struct {
        unsigned PWM3LDS                :2;
        unsigned                        :4;
        unsigned PWM3LDM                :1;
        unsigned PWM3LD                 :1;
    };
    struct {
        unsigned LDS0                   :1;
        unsigned LDS1                   :1;
    };
} PWM3LDCONbits_t;
extern volatile PWM3LDCONbits_t PWM3LDCONbits __at(0xDBF);
// bitfield macros
#define _PWM3LDCON_LDS_POSN                                 0x0
#define _PWM3LDCON_LDS_POSITION                             0x0
#define _PWM3LDCON_LDS_SIZE                                 0x2
#define _PWM3LDCON_LDS_LENGTH                               0x2
#define _PWM3LDCON_LDS_MASK                                 0x3
#define _PWM3LDCON_LDT_POSN                                 0x6
#define _PWM3LDCON_LDT_POSITION                             0x6
#define _PWM3LDCON_LDT_SIZE                                 0x1
#define _PWM3LDCON_LDT_LENGTH                               0x1
#define _PWM3LDCON_LDT_MASK                                 0x40
#define _PWM3LDCON_LDA_POSN                                 0x7
#define _PWM3LDCON_LDA_POSITION                             0x7
#define _PWM3LDCON_LDA_SIZE                                 0x1
#define _PWM3LDCON_LDA_LENGTH                               0x1
#define _PWM3LDCON_LDA_MASK                                 0x80
#define _PWM3LDCON_PWM3LDS0_POSN                            0x0
#define _PWM3LDCON_PWM3LDS0_POSITION                        0x0
#define _PWM3LDCON_PWM3LDS0_SIZE                            0x1
#define _PWM3LDCON_PWM3LDS0_LENGTH                          0x1
#define _PWM3LDCON_PWM3LDS0_MASK                            0x1
#define _PWM3LDCON_PWM3LDS1_POSN                            0x1
#define _PWM3LDCON_PWM3LDS1_POSITION                        0x1
#define _PWM3LDCON_PWM3LDS1_SIZE                            0x1
#define _PWM3LDCON_PWM3LDS1_LENGTH                          0x1
#define _PWM3LDCON_PWM3LDS1_MASK                            0x2
#define _PWM3LDCON_PWM3LDS_POSN                             0x0
#define _PWM3LDCON_PWM3LDS_POSITION                         0x0
#define _PWM3LDCON_PWM3LDS_SIZE                             0x2
#define _PWM3LDCON_PWM3LDS_LENGTH                           0x2
#define _PWM3LDCON_PWM3LDS_MASK                             0x3
#define _PWM3LDCON_PWM3LDM_POSN                             0x6
#define _PWM3LDCON_PWM3LDM_POSITION                         0x6
#define _PWM3LDCON_PWM3LDM_SIZE                             0x1
#define _PWM3LDCON_PWM3LDM_LENGTH                           0x1
#define _PWM3LDCON_PWM3LDM_MASK                             0x40
#define _PWM3LDCON_PWM3LD_POSN                              0x7
#define _PWM3LDCON_PWM3LD_POSITION                          0x7
#define _PWM3LDCON_PWM3LD_SIZE                              0x1
#define _PWM3LDCON_PWM3LD_LENGTH                            0x1
#define _PWM3LDCON_PWM3LD_MASK                              0x80
#define _PWM3LDCON_LDS0_POSN                                0x0
#define _PWM3LDCON_LDS0_POSITION                            0x0
#define _PWM3LDCON_LDS0_SIZE                                0x1
#define _PWM3LDCON_LDS0_LENGTH                              0x1
#define _PWM3LDCON_LDS0_MASK                                0x1
#define _PWM3LDCON_LDS1_POSN                                0x1
#define _PWM3LDCON_LDS1_POSITION                            0x1
#define _PWM3LDCON_LDS1_SIZE                                0x1
#define _PWM3LDCON_LDS1_LENGTH                              0x1
#define _PWM3LDCON_LDS1_MASK                                0x2

// Register: PWM3OFCON
#define PWM3OFCON PWM3OFCON
extern volatile unsigned char           PWM3OFCON           __at(0xDC0);
#ifndef _LIB_BUILD
asm("PWM3OFCON equ 0DC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OFS                    :2;
        unsigned                        :2;
        unsigned OFO                    :1;
        unsigned OFM                    :2;
    };
    struct {
        unsigned PWM3OFS0               :1;
        unsigned PWM3OFS1               :1;
        unsigned                        :3;
        unsigned PWM3OFM0               :1;
        unsigned PWM3OFM1               :1;
    };
    struct {
        unsigned PWM3OFS                :2;
        unsigned                        :2;
        unsigned PWM3OFMC               :1;
        unsigned PWM3OFM                :2;
    };
    struct {
        unsigned OFS0                   :1;
        unsigned OFS1                   :1;
        unsigned                        :3;
        unsigned OFM0                   :1;
        unsigned OFM1                   :1;
    };
} PWM3OFCONbits_t;
extern volatile PWM3OFCONbits_t PWM3OFCONbits __at(0xDC0);
// bitfield macros
#define _PWM3OFCON_OFS_POSN                                 0x0
#define _PWM3OFCON_OFS_POSITION                             0x0
#define _PWM3OFCON_OFS_SIZE                                 0x2
#define _PWM3OFCON_OFS_LENGTH                               0x2
#define _PWM3OFCON_OFS_MASK                                 0x3
#define _PWM3OFCON_OFO_POSN                                 0x4
#define _PWM3OFCON_OFO_POSITION                             0x4
#define _PWM3OFCON_OFO_SIZE                                 0x1
#define _PWM3OFCON_OFO_LENGTH                               0x1
#define _PWM3OFCON_OFO_MASK                                 0x10
#define _PWM3OFCON_OFM_POSN                                 0x5
#define _PWM3OFCON_OFM_POSITION                             0x5
#define _PWM3OFCON_OFM_SIZE                                 0x2
#define _PWM3OFCON_OFM_LENGTH                               0x2
#define _PWM3OFCON_OFM_MASK                                 0x60
#define _PWM3OFCON_PWM3OFS0_POSN                            0x0
#define _PWM3OFCON_PWM3OFS0_POSITION                        0x0
#define _PWM3OFCON_PWM3OFS0_SIZE                            0x1
#define _PWM3OFCON_PWM3OFS0_LENGTH                          0x1
#define _PWM3OFCON_PWM3OFS0_MASK                            0x1
#define _PWM3OFCON_PWM3OFS1_POSN                            0x1
#define _PWM3OFCON_PWM3OFS1_POSITION                        0x1
#define _PWM3OFCON_PWM3OFS1_SIZE                            0x1
#define _PWM3OFCON_PWM3OFS1_LENGTH                          0x1
#define _PWM3OFCON_PWM3OFS1_MASK                            0x2
#define _PWM3OFCON_PWM3OFM0_POSN                            0x5
#define _PWM3OFCON_PWM3OFM0_POSITION                        0x5
#define _PWM3OFCON_PWM3OFM0_SIZE                            0x1
#define _PWM3OFCON_PWM3OFM0_LENGTH                          0x1
#define _PWM3OFCON_PWM3OFM0_MASK                            0x20
#define _PWM3OFCON_PWM3OFM1_POSN                            0x6
#define _PWM3OFCON_PWM3OFM1_POSITION                        0x6
#define _PWM3OFCON_PWM3OFM1_SIZE                            0x1
#define _PWM3OFCON_PWM3OFM1_LENGTH                          0x1
#define _PWM3OFCON_PWM3OFM1_MASK                            0x40
#define _PWM3OFCON_PWM3OFS_POSN                             0x0
#define _PWM3OFCON_PWM3OFS_POSITION                         0x0
#define _PWM3OFCON_PWM3OFS_SIZE                             0x2
#define _PWM3OFCON_PWM3OFS_LENGTH                           0x2
#define _PWM3OFCON_PWM3OFS_MASK                             0x3
#define _PWM3OFCON_PWM3OFMC_POSN                            0x4
#define _PWM3OFCON_PWM3OFMC_POSITION                        0x4
#define _PWM3OFCON_PWM3OFMC_SIZE                            0x1
#define _PWM3OFCON_PWM3OFMC_LENGTH                          0x1
#define _PWM3OFCON_PWM3OFMC_MASK                            0x10
#define _PWM3OFCON_PWM3OFM_POSN                             0x5
#define _PWM3OFCON_PWM3OFM_POSITION                         0x5
#define _PWM3OFCON_PWM3OFM_SIZE                             0x2
#define _PWM3OFCON_PWM3OFM_LENGTH                           0x2
#define _PWM3OFCON_PWM3OFM_MASK                             0x60
#define _PWM3OFCON_OFS0_POSN                                0x0
#define _PWM3OFCON_OFS0_POSITION                            0x0
#define _PWM3OFCON_OFS0_SIZE                                0x1
#define _PWM3OFCON_OFS0_LENGTH                              0x1
#define _PWM3OFCON_OFS0_MASK                                0x1
#define _PWM3OFCON_OFS1_POSN                                0x1
#define _PWM3OFCON_OFS1_POSITION                            0x1
#define _PWM3OFCON_OFS1_SIZE                                0x1
#define _PWM3OFCON_OFS1_LENGTH                              0x1
#define _PWM3OFCON_OFS1_MASK                                0x2
#define _PWM3OFCON_OFM0_POSN                                0x5
#define _PWM3OFCON_OFM0_POSITION                            0x5
#define _PWM3OFCON_OFM0_SIZE                                0x1
#define _PWM3OFCON_OFM0_LENGTH                              0x1
#define _PWM3OFCON_OFM0_MASK                                0x20
#define _PWM3OFCON_OFM1_POSN                                0x6
#define _PWM3OFCON_OFM1_POSITION                            0x6
#define _PWM3OFCON_OFM1_SIZE                                0x1
#define _PWM3OFCON_OFM1_LENGTH                              0x1
#define _PWM3OFCON_OFM1_MASK                                0x40

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

// Register: FSR0_SHAD
#define FSR0_SHAD FSR0_SHAD
extern volatile unsigned short          FSR0_SHAD           __at(0xFE8);
#ifndef _LIB_BUILD
asm("FSR0_SHAD equ 0FE8h");
#endif

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

// Register: FSR1_SHAD
#define FSR1_SHAD FSR1_SHAD
extern volatile unsigned short          FSR1_SHAD           __at(0xFEA);
#ifndef _LIB_BUILD
asm("FSR1_SHAD equ 0FEAh");
#endif

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

// Register: TOS
#define TOS TOS
extern volatile unsigned short          TOS                 __at(0xFEE);
#ifndef _LIB_BUILD
asm("TOS equ 0FEEh");
#endif

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
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// FVRCON<CDAFVR0>
extern volatile __bit                   CDAFVR0             __at(0x8BA);	// @ (0x117 * 8 + 2)
#define                                 CDAFVR0_bit         _BIT_ACCESS(FVRCON,2)
// FVRCON<CDAFVR1>
extern volatile __bit                   CDAFVR1             __at(0x8BB);	// @ (0x117 * 8 + 3)
#define                                 CDAFVR1_bit         _BIT_ACCESS(FVRCON,3)
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
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
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
// APFCON<CWGASEL>
extern volatile __bit                   CWGASEL             __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 CWGASEL_bit         _BIT_ACCESS(APFCON,6)
// APFCON<CWGBSEL>
extern volatile __bit                   CWGBSEL             __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 CWGBSEL_bit         _BIT_ACCESS(APFCON,5)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// DACCON0<DACEN>
extern volatile __bit                   DACEN               __at(0x8C7);	// @ (0x118 * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(DACCON0,7)
// DACCON0<DACLPS>
extern volatile __bit                   DACLPS              __at(0x8C6);	// @ (0x118 * 8 + 6)
#define                                 DACLPS_bit          _BIT_ACCESS(DACCON0,6)
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
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
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
// CWG1CON2<G1ASDSC1>
extern volatile __bit                   G1ASDSC1            __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 G1ASDSC1_bit        _BIT_ACCESS(CWG1CON2,2)
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
// OSCSTAT<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCSTAT,1)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// CMOUT<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 MC1OUT_bit          _BIT_ACCESS(CMOUT,0)
// OSCSTAT<MFIOFR>
extern volatile __bit                   MFIOFR              __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 MFIOFR_bit          _BIT_ACCESS(OSCSTAT,2)
// PWMEN<MPWM1EN>
extern volatile __bit                   MPWM1EN             __at(0x6C70);	// @ (0xD8E * 8 + 0)
#define                                 MPWM1EN_bit         _BIT_ACCESS(PWMEN,0)
// PWMLD<MPWM1LD>
extern volatile __bit                   MPWM1LD             __at(0x6C78);	// @ (0xD8F * 8 + 0)
#define                                 MPWM1LD_bit         _BIT_ACCESS(PWMLD,0)
// PWMOUT<MPWM1OUT>
extern volatile __bit                   MPWM1OUT            __at(0x6C80);	// @ (0xD90 * 8 + 0)
#define                                 MPWM1OUT_bit        _BIT_ACCESS(PWMOUT,0)
// PWMEN<MPWM2EN>
extern volatile __bit                   MPWM2EN             __at(0x6C71);	// @ (0xD8E * 8 + 1)
#define                                 MPWM2EN_bit         _BIT_ACCESS(PWMEN,1)
// PWMLD<MPWM2LD>
extern volatile __bit                   MPWM2LD             __at(0x6C79);	// @ (0xD8F * 8 + 1)
#define                                 MPWM2LD_bit         _BIT_ACCESS(PWMLD,1)
// PWMOUT<MPWM2OUT>
extern volatile __bit                   MPWM2OUT            __at(0x6C81);	// @ (0xD90 * 8 + 1)
#define                                 MPWM2OUT_bit        _BIT_ACCESS(PWMOUT,1)
// PWMEN<MPWM3EN>
extern volatile __bit                   MPWM3EN             __at(0x6C72);	// @ (0xD8E * 8 + 2)
#define                                 MPWM3EN_bit         _BIT_ACCESS(PWMEN,2)
// PWMLD<MPWM3LD>
extern volatile __bit                   MPWM3LD             __at(0x6C7A);	// @ (0xD8F * 8 + 2)
#define                                 MPWM3LD_bit         _BIT_ACCESS(PWMLD,2)
// PWMOUT<MPWM3OUT>
extern volatile __bit                   MPWM3OUT            __at(0x6C82);	// @ (0xD90 * 8 + 2)
#define                                 MPWM3OUT_bit        _BIT_ACCESS(PWMOUT,2)
// ODCONA<ODA0>
extern volatile __bit                   ODA0                __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 ODA0_bit            _BIT_ACCESS(ODCONA,0)
// ODCONA<ODA1>
extern volatile __bit                   ODA1                __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 ODA1_bit            _BIT_ACCESS(ODCONA,1)
// ODCONA<ODA2>
extern volatile __bit                   ODA2                __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 ODA2_bit            _BIT_ACCESS(ODCONA,2)
// ODCONA<ODA4>
extern volatile __bit                   ODA4                __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 ODA4_bit            _BIT_ACCESS(ODCONA,4)
// ODCONA<ODA5>
extern volatile __bit                   ODA5                __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 ODA5_bit            _BIT_ACCESS(ODCONA,5)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// OSCSTAT<OSTS>
extern volatile __bit                   OSTS                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OSTS_bit            _BIT_ACCESS(OSCSTAT,5)
// APFCON<P1SEL>
extern volatile __bit                   P1SEL               __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 P1SEL_bit           _BIT_ACCESS(APFCON,0)
// APFCON<P2SEL>
extern volatile __bit                   P2SEL               __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 P2SEL_bit           _BIT_ACCESS(APFCON,1)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// OSCSTAT<PLLR>
extern volatile __bit                   PLLR                __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 PLLR_bit            _BIT_ACCESS(OSCSTAT,6)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// PWM1CLKCON<PWM1CS0>
extern volatile __bit                   PWM1CS0             __at(0x6CF0);	// @ (0xD9E * 8 + 0)
#define                                 PWM1CS0_bit         _BIT_ACCESS(PWM1CLKCON,0)
// PWM1CLKCON<PWM1CS1>
extern volatile __bit                   PWM1CS1             __at(0x6CF1);	// @ (0xD9E * 8 + 1)
#define                                 PWM1CS1_bit         _BIT_ACCESS(PWM1CLKCON,1)
// PWM1DCH<PWM1DCH0>
extern volatile __bit                   PWM1DCH0            __at(0x6CA0);	// @ (0xD94 * 8 + 0)
#define                                 PWM1DCH0_bit        _BIT_ACCESS(PWM1DCH,0)
// PWM1DCH<PWM1DCH1>
extern volatile __bit                   PWM1DCH1            __at(0x6CA1);	// @ (0xD94 * 8 + 1)
#define                                 PWM1DCH1_bit        _BIT_ACCESS(PWM1DCH,1)
// PWM1DCH<PWM1DCH2>
extern volatile __bit                   PWM1DCH2            __at(0x6CA2);	// @ (0xD94 * 8 + 2)
#define                                 PWM1DCH2_bit        _BIT_ACCESS(PWM1DCH,2)
// PWM1DCH<PWM1DCH3>
extern volatile __bit                   PWM1DCH3            __at(0x6CA3);	// @ (0xD94 * 8 + 3)
#define                                 PWM1DCH3_bit        _BIT_ACCESS(PWM1DCH,3)
// PWM1DCH<PWM1DCH4>
extern volatile __bit                   PWM1DCH4            __at(0x6CA4);	// @ (0xD94 * 8 + 4)
#define                                 PWM1DCH4_bit        _BIT_ACCESS(PWM1DCH,4)
// PWM1DCH<PWM1DCH5>
extern volatile __bit                   PWM1DCH5            __at(0x6CA5);	// @ (0xD94 * 8 + 5)
#define                                 PWM1DCH5_bit        _BIT_ACCESS(PWM1DCH,5)
// PWM1DCH<PWM1DCH6>
extern volatile __bit                   PWM1DCH6            __at(0x6CA6);	// @ (0xD94 * 8 + 6)
#define                                 PWM1DCH6_bit        _BIT_ACCESS(PWM1DCH,6)
// PWM1DCH<PWM1DCH7>
extern volatile __bit                   PWM1DCH7            __at(0x6CA7);	// @ (0xD94 * 8 + 7)
#define                                 PWM1DCH7_bit        _BIT_ACCESS(PWM1DCH,7)
// PWM1INTE<PWM1DCIE>
extern volatile __bit                   PWM1DCIE            __at(0x6CE1);	// @ (0xD9C * 8 + 1)
#define                                 PWM1DCIE_bit        _BIT_ACCESS(PWM1INTE,1)
// PWM1INTF<PWM1DCIF>
extern volatile __bit                   PWM1DCIF            __at(0x6CE9);	// @ (0xD9D * 8 + 1)
#define                                 PWM1DCIF_bit        _BIT_ACCESS(PWM1INTF,1)
// PWM1DCL<PWM1DCL0>
extern volatile __bit                   PWM1DCL0            __at(0x6C98);	// @ (0xD93 * 8 + 0)
#define                                 PWM1DCL0_bit        _BIT_ACCESS(PWM1DCL,0)
// PWM1DCL<PWM1DCL1>
extern volatile __bit                   PWM1DCL1            __at(0x6C99);	// @ (0xD93 * 8 + 1)
#define                                 PWM1DCL1_bit        _BIT_ACCESS(PWM1DCL,1)
// PWM1DCL<PWM1DCL2>
extern volatile __bit                   PWM1DCL2            __at(0x6C9A);	// @ (0xD93 * 8 + 2)
#define                                 PWM1DCL2_bit        _BIT_ACCESS(PWM1DCL,2)
// PWM1DCL<PWM1DCL3>
extern volatile __bit                   PWM1DCL3            __at(0x6C9B);	// @ (0xD93 * 8 + 3)
#define                                 PWM1DCL3_bit        _BIT_ACCESS(PWM1DCL,3)
// PWM1DCL<PWM1DCL4>
extern volatile __bit                   PWM1DCL4            __at(0x6C9C);	// @ (0xD93 * 8 + 4)
#define                                 PWM1DCL4_bit        _BIT_ACCESS(PWM1DCL,4)
// PWM1DCL<PWM1DCL5>
extern volatile __bit                   PWM1DCL5            __at(0x6C9D);	// @ (0xD93 * 8 + 5)
#define                                 PWM1DCL5_bit        _BIT_ACCESS(PWM1DCL,5)
// PWM1DCL<PWM1DCL6>
extern volatile __bit                   PWM1DCL6            __at(0x6C9E);	// @ (0xD93 * 8 + 6)
#define                                 PWM1DCL6_bit        _BIT_ACCESS(PWM1DCL,6)
// PWM1DCL<PWM1DCL7>
extern volatile __bit                   PWM1DCL7            __at(0x6C9F);	// @ (0xD93 * 8 + 7)
#define                                 PWM1DCL7_bit        _BIT_ACCESS(PWM1DCL,7)
// PWM1CON<PWM1EN>
extern volatile __bit                   PWM1EN              __at(0x6CDF);	// @ (0xD9B * 8 + 7)
#define                                 PWM1EN_bit          _BIT_ACCESS(PWM1CON,7)
// PWMEN<PWM1EN_A>
extern volatile __bit                   PWM1EN_A            __at(0x6C70);	// @ (0xD8E * 8 + 0)
#define                                 PWM1EN_A_bit        _BIT_ACCESS(PWMEN,0)
// PIE3<PWM1IE>
extern volatile __bit                   PWM1IE              __at(0x49C);	// @ (0x93 * 8 + 4)
#define                                 PWM1IE_bit          _BIT_ACCESS(PIE3,4)
// PIR3<PWM1IF>
extern volatile __bit                   PWM1IF              __at(0x9C);	// @ (0x13 * 8 + 4)
#define                                 PWM1IF_bit          _BIT_ACCESS(PIR3,4)
// PWM1LDCON<PWM1LD>
extern volatile __bit                   PWM1LD              __at(0x6CFF);	// @ (0xD9F * 8 + 7)
#define                                 PWM1LD_bit          _BIT_ACCESS(PWM1LDCON,7)
// PWMLD<PWM1LDA_A>
extern volatile __bit                   PWM1LDA_A           __at(0x6C78);	// @ (0xD8F * 8 + 0)
#define                                 PWM1LDA_A_bit       _BIT_ACCESS(PWMLD,0)
// PWM1LDCON<PWM1LDM>
extern volatile __bit                   PWM1LDM             __at(0x6CFE);	// @ (0xD9F * 8 + 6)
#define                                 PWM1LDM_bit         _BIT_ACCESS(PWM1LDCON,6)
// PWM1LDCON<PWM1LDS0>
extern volatile __bit                   PWM1LDS0            __at(0x6CF8);	// @ (0xD9F * 8 + 0)
#define                                 PWM1LDS0_bit        _BIT_ACCESS(PWM1LDCON,0)
// PWM1LDCON<PWM1LDS1>
extern volatile __bit                   PWM1LDS1            __at(0x6CF9);	// @ (0xD9F * 8 + 1)
#define                                 PWM1LDS1_bit        _BIT_ACCESS(PWM1LDCON,1)
// PWM1CON<PWM1MODE0>
extern volatile __bit                   PWM1MODE0           __at(0x6CDA);	// @ (0xD9B * 8 + 2)
#define                                 PWM1MODE0_bit       _BIT_ACCESS(PWM1CON,2)
// PWM1CON<PWM1MODE1>
extern volatile __bit                   PWM1MODE1           __at(0x6CDB);	// @ (0xD9B * 8 + 3)
#define                                 PWM1MODE1_bit       _BIT_ACCESS(PWM1CON,3)
// PWM1CON<PWM1OE>
extern volatile __bit                   PWM1OE              __at(0x6CDE);	// @ (0xD9B * 8 + 6)
#define                                 PWM1OE_bit          _BIT_ACCESS(PWM1CON,6)
// PWM1OFH<PWM1OFH0>
extern volatile __bit                   PWM1OFH0            __at(0x6CC0);	// @ (0xD98 * 8 + 0)
#define                                 PWM1OFH0_bit        _BIT_ACCESS(PWM1OFH,0)
// PWM1OFH<PWM1OFH1>
extern volatile __bit                   PWM1OFH1            __at(0x6CC1);	// @ (0xD98 * 8 + 1)
#define                                 PWM1OFH1_bit        _BIT_ACCESS(PWM1OFH,1)
// PWM1OFH<PWM1OFH2>
extern volatile __bit                   PWM1OFH2            __at(0x6CC2);	// @ (0xD98 * 8 + 2)
#define                                 PWM1OFH2_bit        _BIT_ACCESS(PWM1OFH,2)
// PWM1OFH<PWM1OFH3>
extern volatile __bit                   PWM1OFH3            __at(0x6CC3);	// @ (0xD98 * 8 + 3)
#define                                 PWM1OFH3_bit        _BIT_ACCESS(PWM1OFH,3)
// PWM1OFH<PWM1OFH4>
extern volatile __bit                   PWM1OFH4            __at(0x6CC4);	// @ (0xD98 * 8 + 4)
#define                                 PWM1OFH4_bit        _BIT_ACCESS(PWM1OFH,4)
// PWM1OFH<PWM1OFH5>
extern volatile __bit                   PWM1OFH5            __at(0x6CC5);	// @ (0xD98 * 8 + 5)
#define                                 PWM1OFH5_bit        _BIT_ACCESS(PWM1OFH,5)
// PWM1OFH<PWM1OFH6>
extern volatile __bit                   PWM1OFH6            __at(0x6CC6);	// @ (0xD98 * 8 + 6)
#define                                 PWM1OFH6_bit        _BIT_ACCESS(PWM1OFH,6)
// PWM1OFH<PWM1OFH7>
extern volatile __bit                   PWM1OFH7            __at(0x6CC7);	// @ (0xD98 * 8 + 7)
#define                                 PWM1OFH7_bit        _BIT_ACCESS(PWM1OFH,7)
// PWM1INTE<PWM1OFIE>
extern volatile __bit                   PWM1OFIE            __at(0x6CE3);	// @ (0xD9C * 8 + 3)
#define                                 PWM1OFIE_bit        _BIT_ACCESS(PWM1INTE,3)
// PWM1INTF<PWM1OFIF>
extern volatile __bit                   PWM1OFIF            __at(0x6CEB);	// @ (0xD9D * 8 + 3)
#define                                 PWM1OFIF_bit        _BIT_ACCESS(PWM1INTF,3)
// PWM1OFL<PWM1OFL0>
extern volatile __bit                   PWM1OFL0            __at(0x6CB8);	// @ (0xD97 * 8 + 0)
#define                                 PWM1OFL0_bit        _BIT_ACCESS(PWM1OFL,0)
// PWM1OFL<PWM1OFL1>
extern volatile __bit                   PWM1OFL1            __at(0x6CB9);	// @ (0xD97 * 8 + 1)
#define                                 PWM1OFL1_bit        _BIT_ACCESS(PWM1OFL,1)
// PWM1OFL<PWM1OFL2>
extern volatile __bit                   PWM1OFL2            __at(0x6CBA);	// @ (0xD97 * 8 + 2)
#define                                 PWM1OFL2_bit        _BIT_ACCESS(PWM1OFL,2)
// PWM1OFL<PWM1OFL3>
extern volatile __bit                   PWM1OFL3            __at(0x6CBB);	// @ (0xD97 * 8 + 3)
#define                                 PWM1OFL3_bit        _BIT_ACCESS(PWM1OFL,3)
// PWM1OFL<PWM1OFL4>
extern volatile __bit                   PWM1OFL4            __at(0x6CBC);	// @ (0xD97 * 8 + 4)
#define                                 PWM1OFL4_bit        _BIT_ACCESS(PWM1OFL,4)
// PWM1OFL<PWM1OFL5>
extern volatile __bit                   PWM1OFL5            __at(0x6CBD);	// @ (0xD97 * 8 + 5)
#define                                 PWM1OFL5_bit        _BIT_ACCESS(PWM1OFL,5)
// PWM1OFL<PWM1OFL6>
extern volatile __bit                   PWM1OFL6            __at(0x6CBE);	// @ (0xD97 * 8 + 6)
#define                                 PWM1OFL6_bit        _BIT_ACCESS(PWM1OFL,6)
// PWM1OFL<PWM1OFL7>
extern volatile __bit                   PWM1OFL7            __at(0x6CBF);	// @ (0xD97 * 8 + 7)
#define                                 PWM1OFL7_bit        _BIT_ACCESS(PWM1OFL,7)
// PWM1OFCON<PWM1OFM0>
extern volatile __bit                   PWM1OFM0            __at(0x6D05);	// @ (0xDA0 * 8 + 5)
#define                                 PWM1OFM0_bit        _BIT_ACCESS(PWM1OFCON,5)
// PWM1OFCON<PWM1OFM1>
extern volatile __bit                   PWM1OFM1            __at(0x6D06);	// @ (0xDA0 * 8 + 6)
#define                                 PWM1OFM1_bit        _BIT_ACCESS(PWM1OFCON,6)
// PWM1OFCON<PWM1OFMC>
extern volatile __bit                   PWM1OFMC            __at(0x6D04);	// @ (0xDA0 * 8 + 4)
#define                                 PWM1OFMC_bit        _BIT_ACCESS(PWM1OFCON,4)
// PWM1OFCON<PWM1OFS0>
extern volatile __bit                   PWM1OFS0            __at(0x6D00);	// @ (0xDA0 * 8 + 0)
#define                                 PWM1OFS0_bit        _BIT_ACCESS(PWM1OFCON,0)
// PWM1OFCON<PWM1OFS1>
extern volatile __bit                   PWM1OFS1            __at(0x6D01);	// @ (0xDA0 * 8 + 1)
#define                                 PWM1OFS1_bit        _BIT_ACCESS(PWM1OFCON,1)
// PWM1CON<PWM1OUT>
extern volatile __bit                   PWM1OUT             __at(0x6CDD);	// @ (0xD9B * 8 + 5)
#define                                 PWM1OUT_bit         _BIT_ACCESS(PWM1CON,5)
// PWMOUT<PWM1OUT_A>
extern volatile __bit                   PWM1OUT_A           __at(0x6C80);	// @ (0xD90 * 8 + 0)
#define                                 PWM1OUT_A_bit       _BIT_ACCESS(PWMOUT,0)
// PWM1PHH<PWM1PHH0>
extern volatile __bit                   PWM1PHH0            __at(0x6C90);	// @ (0xD92 * 8 + 0)
#define                                 PWM1PHH0_bit        _BIT_ACCESS(PWM1PHH,0)
// PWM1PHH<PWM1PHH1>
extern volatile __bit                   PWM1PHH1            __at(0x6C91);	// @ (0xD92 * 8 + 1)
#define                                 PWM1PHH1_bit        _BIT_ACCESS(PWM1PHH,1)
// PWM1PHH<PWM1PHH2>
extern volatile __bit                   PWM1PHH2            __at(0x6C92);	// @ (0xD92 * 8 + 2)
#define                                 PWM1PHH2_bit        _BIT_ACCESS(PWM1PHH,2)
// PWM1PHH<PWM1PHH3>
extern volatile __bit                   PWM1PHH3            __at(0x6C93);	// @ (0xD92 * 8 + 3)
#define                                 PWM1PHH3_bit        _BIT_ACCESS(PWM1PHH,3)
// PWM1PHH<PWM1PHH4>
extern volatile __bit                   PWM1PHH4            __at(0x6C94);	// @ (0xD92 * 8 + 4)
#define                                 PWM1PHH4_bit        _BIT_ACCESS(PWM1PHH,4)
// PWM1PHH<PWM1PHH5>
extern volatile __bit                   PWM1PHH5            __at(0x6C95);	// @ (0xD92 * 8 + 5)
#define                                 PWM1PHH5_bit        _BIT_ACCESS(PWM1PHH,5)
// PWM1PHH<PWM1PHH6>
extern volatile __bit                   PWM1PHH6            __at(0x6C96);	// @ (0xD92 * 8 + 6)
#define                                 PWM1PHH6_bit        _BIT_ACCESS(PWM1PHH,6)
// PWM1PHH<PWM1PHH7>
extern volatile __bit                   PWM1PHH7            __at(0x6C97);	// @ (0xD92 * 8 + 7)
#define                                 PWM1PHH7_bit        _BIT_ACCESS(PWM1PHH,7)
// PWM1INTE<PWM1PHIE>
extern volatile __bit                   PWM1PHIE            __at(0x6CE2);	// @ (0xD9C * 8 + 2)
#define                                 PWM1PHIE_bit        _BIT_ACCESS(PWM1INTE,2)
// PWM1INTF<PWM1PHIF>
extern volatile __bit                   PWM1PHIF            __at(0x6CEA);	// @ (0xD9D * 8 + 2)
#define                                 PWM1PHIF_bit        _BIT_ACCESS(PWM1INTF,2)
// PWM1PHL<PWM1PHL0>
extern volatile __bit                   PWM1PHL0            __at(0x6C88);	// @ (0xD91 * 8 + 0)
#define                                 PWM1PHL0_bit        _BIT_ACCESS(PWM1PHL,0)
// PWM1PHL<PWM1PHL1>
extern volatile __bit                   PWM1PHL1            __at(0x6C89);	// @ (0xD91 * 8 + 1)
#define                                 PWM1PHL1_bit        _BIT_ACCESS(PWM1PHL,1)
// PWM1PHL<PWM1PHL2>
extern volatile __bit                   PWM1PHL2            __at(0x6C8A);	// @ (0xD91 * 8 + 2)
#define                                 PWM1PHL2_bit        _BIT_ACCESS(PWM1PHL,2)
// PWM1PHL<PWM1PHL3>
extern volatile __bit                   PWM1PHL3            __at(0x6C8B);	// @ (0xD91 * 8 + 3)
#define                                 PWM1PHL3_bit        _BIT_ACCESS(PWM1PHL,3)
// PWM1PHL<PWM1PHL4>
extern volatile __bit                   PWM1PHL4            __at(0x6C8C);	// @ (0xD91 * 8 + 4)
#define                                 PWM1PHL4_bit        _BIT_ACCESS(PWM1PHL,4)
// PWM1PHL<PWM1PHL5>
extern volatile __bit                   PWM1PHL5            __at(0x6C8D);	// @ (0xD91 * 8 + 5)
#define                                 PWM1PHL5_bit        _BIT_ACCESS(PWM1PHL,5)
// PWM1PHL<PWM1PHL6>
extern volatile __bit                   PWM1PHL6            __at(0x6C8E);	// @ (0xD91 * 8 + 6)
#define                                 PWM1PHL6_bit        _BIT_ACCESS(PWM1PHL,6)
// PWM1PHL<PWM1PHL7>
extern volatile __bit                   PWM1PHL7            __at(0x6C8F);	// @ (0xD91 * 8 + 7)
#define                                 PWM1PHL7_bit        _BIT_ACCESS(PWM1PHL,7)
// PWM1CON<PWM1POL>
extern volatile __bit                   PWM1POL             __at(0x6CDC);	// @ (0xD9B * 8 + 4)
#define                                 PWM1POL_bit         _BIT_ACCESS(PWM1CON,4)
// PWM1PRH<PWM1PRH0>
extern volatile __bit                   PWM1PRH0            __at(0x6CB0);	// @ (0xD96 * 8 + 0)
#define                                 PWM1PRH0_bit        _BIT_ACCESS(PWM1PRH,0)
// PWM1PRH<PWM1PRH1>
extern volatile __bit                   PWM1PRH1            __at(0x6CB1);	// @ (0xD96 * 8 + 1)
#define                                 PWM1PRH1_bit        _BIT_ACCESS(PWM1PRH,1)
// PWM1PRH<PWM1PRH2>
extern volatile __bit                   PWM1PRH2            __at(0x6CB2);	// @ (0xD96 * 8 + 2)
#define                                 PWM1PRH2_bit        _BIT_ACCESS(PWM1PRH,2)
// PWM1PRH<PWM1PRH3>
extern volatile __bit                   PWM1PRH3            __at(0x6CB3);	// @ (0xD96 * 8 + 3)
#define                                 PWM1PRH3_bit        _BIT_ACCESS(PWM1PRH,3)
// PWM1PRH<PWM1PRH4>
extern volatile __bit                   PWM1PRH4            __at(0x6CB4);	// @ (0xD96 * 8 + 4)
#define                                 PWM1PRH4_bit        _BIT_ACCESS(PWM1PRH,4)
// PWM1PRH<PWM1PRH5>
extern volatile __bit                   PWM1PRH5            __at(0x6CB5);	// @ (0xD96 * 8 + 5)
#define                                 PWM1PRH5_bit        _BIT_ACCESS(PWM1PRH,5)
// PWM1PRH<PWM1PRH6>
extern volatile __bit                   PWM1PRH6            __at(0x6CB6);	// @ (0xD96 * 8 + 6)
#define                                 PWM1PRH6_bit        _BIT_ACCESS(PWM1PRH,6)
// PWM1PRH<PWM1PRH7>
extern volatile __bit                   PWM1PRH7            __at(0x6CB7);	// @ (0xD96 * 8 + 7)
#define                                 PWM1PRH7_bit        _BIT_ACCESS(PWM1PRH,7)
// PWM1INTE<PWM1PRIE>
extern volatile __bit                   PWM1PRIE            __at(0x6CE0);	// @ (0xD9C * 8 + 0)
#define                                 PWM1PRIE_bit        _BIT_ACCESS(PWM1INTE,0)
// PWM1INTF<PWM1PRIF>
extern volatile __bit                   PWM1PRIF            __at(0x6CE8);	// @ (0xD9D * 8 + 0)
#define                                 PWM1PRIF_bit        _BIT_ACCESS(PWM1INTF,0)
// PWM1PRL<PWM1PRL0>
extern volatile __bit                   PWM1PRL0            __at(0x6CA8);	// @ (0xD95 * 8 + 0)
#define                                 PWM1PRL0_bit        _BIT_ACCESS(PWM1PRL,0)
// PWM1PRL<PWM1PRL1>
extern volatile __bit                   PWM1PRL1            __at(0x6CA9);	// @ (0xD95 * 8 + 1)
#define                                 PWM1PRL1_bit        _BIT_ACCESS(PWM1PRL,1)
// PWM1PRL<PWM1PRL2>
extern volatile __bit                   PWM1PRL2            __at(0x6CAA);	// @ (0xD95 * 8 + 2)
#define                                 PWM1PRL2_bit        _BIT_ACCESS(PWM1PRL,2)
// PWM1PRL<PWM1PRL3>
extern volatile __bit                   PWM1PRL3            __at(0x6CAB);	// @ (0xD95 * 8 + 3)
#define                                 PWM1PRL3_bit        _BIT_ACCESS(PWM1PRL,3)
// PWM1PRL<PWM1PRL4>
extern volatile __bit                   PWM1PRL4            __at(0x6CAC);	// @ (0xD95 * 8 + 4)
#define                                 PWM1PRL4_bit        _BIT_ACCESS(PWM1PRL,4)
// PWM1PRL<PWM1PRL5>
extern volatile __bit                   PWM1PRL5            __at(0x6CAD);	// @ (0xD95 * 8 + 5)
#define                                 PWM1PRL5_bit        _BIT_ACCESS(PWM1PRL,5)
// PWM1PRL<PWM1PRL6>
extern volatile __bit                   PWM1PRL6            __at(0x6CAE);	// @ (0xD95 * 8 + 6)
#define                                 PWM1PRL6_bit        _BIT_ACCESS(PWM1PRL,6)
// PWM1PRL<PWM1PRL7>
extern volatile __bit                   PWM1PRL7            __at(0x6CAF);	// @ (0xD95 * 8 + 7)
#define                                 PWM1PRL7_bit        _BIT_ACCESS(PWM1PRL,7)
// PWM1CLKCON<PWM1PS0>
extern volatile __bit                   PWM1PS0             __at(0x6CF4);	// @ (0xD9E * 8 + 4)
#define                                 PWM1PS0_bit         _BIT_ACCESS(PWM1CLKCON,4)
// PWM1CLKCON<PWM1PS1>
extern volatile __bit                   PWM1PS1             __at(0x6CF5);	// @ (0xD9E * 8 + 5)
#define                                 PWM1PS1_bit         _BIT_ACCESS(PWM1CLKCON,5)
// PWM1CLKCON<PWM1PS2>
extern volatile __bit                   PWM1PS2             __at(0x6CF6);	// @ (0xD9E * 8 + 6)
#define                                 PWM1PS2_bit         _BIT_ACCESS(PWM1CLKCON,6)
// PWM1TMRH<PWM1TMRH0>
extern volatile __bit                   PWM1TMRH0           __at(0x6CD0);	// @ (0xD9A * 8 + 0)
#define                                 PWM1TMRH0_bit       _BIT_ACCESS(PWM1TMRH,0)
// PWM1TMRH<PWM1TMRH1>
extern volatile __bit                   PWM1TMRH1           __at(0x6CD1);	// @ (0xD9A * 8 + 1)
#define                                 PWM1TMRH1_bit       _BIT_ACCESS(PWM1TMRH,1)
// PWM1TMRH<PWM1TMRH2>
extern volatile __bit                   PWM1TMRH2           __at(0x6CD2);	// @ (0xD9A * 8 + 2)
#define                                 PWM1TMRH2_bit       _BIT_ACCESS(PWM1TMRH,2)
// PWM1TMRH<PWM1TMRH3>
extern volatile __bit                   PWM1TMRH3           __at(0x6CD3);	// @ (0xD9A * 8 + 3)
#define                                 PWM1TMRH3_bit       _BIT_ACCESS(PWM1TMRH,3)
// PWM1TMRH<PWM1TMRH4>
extern volatile __bit                   PWM1TMRH4           __at(0x6CD4);	// @ (0xD9A * 8 + 4)
#define                                 PWM1TMRH4_bit       _BIT_ACCESS(PWM1TMRH,4)
// PWM1TMRH<PWM1TMRH5>
extern volatile __bit                   PWM1TMRH5           __at(0x6CD5);	// @ (0xD9A * 8 + 5)
#define                                 PWM1TMRH5_bit       _BIT_ACCESS(PWM1TMRH,5)
// PWM1TMRH<PWM1TMRH6>
extern volatile __bit                   PWM1TMRH6           __at(0x6CD6);	// @ (0xD9A * 8 + 6)
#define                                 PWM1TMRH6_bit       _BIT_ACCESS(PWM1TMRH,6)
// PWM1TMRH<PWM1TMRH7>
extern volatile __bit                   PWM1TMRH7           __at(0x6CD7);	// @ (0xD9A * 8 + 7)
#define                                 PWM1TMRH7_bit       _BIT_ACCESS(PWM1TMRH,7)
// PWM1TMRL<PWM1TMRL0>
extern volatile __bit                   PWM1TMRL0           __at(0x6CC8);	// @ (0xD99 * 8 + 0)
#define                                 PWM1TMRL0_bit       _BIT_ACCESS(PWM1TMRL,0)
// PWM1TMRL<PWM1TMRL1>
extern volatile __bit                   PWM1TMRL1           __at(0x6CC9);	// @ (0xD99 * 8 + 1)
#define                                 PWM1TMRL1_bit       _BIT_ACCESS(PWM1TMRL,1)
// PWM1TMRL<PWM1TMRL2>
extern volatile __bit                   PWM1TMRL2           __at(0x6CCA);	// @ (0xD99 * 8 + 2)
#define                                 PWM1TMRL2_bit       _BIT_ACCESS(PWM1TMRL,2)
// PWM1TMRL<PWM1TMRL3>
extern volatile __bit                   PWM1TMRL3           __at(0x6CCB);	// @ (0xD99 * 8 + 3)
#define                                 PWM1TMRL3_bit       _BIT_ACCESS(PWM1TMRL,3)
// PWM1TMRL<PWM1TMRL4>
extern volatile __bit                   PWM1TMRL4           __at(0x6CCC);	// @ (0xD99 * 8 + 4)
#define                                 PWM1TMRL4_bit       _BIT_ACCESS(PWM1TMRL,4)
// PWM1TMRL<PWM1TMRL5>
extern volatile __bit                   PWM1TMRL5           __at(0x6CCD);	// @ (0xD99 * 8 + 5)
#define                                 PWM1TMRL5_bit       _BIT_ACCESS(PWM1TMRL,5)
// PWM1TMRL<PWM1TMRL6>
extern volatile __bit                   PWM1TMRL6           __at(0x6CCE);	// @ (0xD99 * 8 + 6)
#define                                 PWM1TMRL6_bit       _BIT_ACCESS(PWM1TMRL,6)
// PWM1TMRL<PWM1TMRL7>
extern volatile __bit                   PWM1TMRL7           __at(0x6CCF);	// @ (0xD99 * 8 + 7)
#define                                 PWM1TMRL7_bit       _BIT_ACCESS(PWM1TMRL,7)
// PWM2CLKCON<PWM2CS0>
extern volatile __bit                   PWM2CS0             __at(0x6D70);	// @ (0xDAE * 8 + 0)
#define                                 PWM2CS0_bit         _BIT_ACCESS(PWM2CLKCON,0)
// PWM2CLKCON<PWM2CS1>
extern volatile __bit                   PWM2CS1             __at(0x6D71);	// @ (0xDAE * 8 + 1)
#define                                 PWM2CS1_bit         _BIT_ACCESS(PWM2CLKCON,1)
// PWM2DCH<PWM2DCH0>
extern volatile __bit                   PWM2DCH0            __at(0x6D20);	// @ (0xDA4 * 8 + 0)
#define                                 PWM2DCH0_bit        _BIT_ACCESS(PWM2DCH,0)
// PWM2DCH<PWM2DCH1>
extern volatile __bit                   PWM2DCH1            __at(0x6D21);	// @ (0xDA4 * 8 + 1)
#define                                 PWM2DCH1_bit        _BIT_ACCESS(PWM2DCH,1)
// PWM2DCH<PWM2DCH2>
extern volatile __bit                   PWM2DCH2            __at(0x6D22);	// @ (0xDA4 * 8 + 2)
#define                                 PWM2DCH2_bit        _BIT_ACCESS(PWM2DCH,2)
// PWM2DCH<PWM2DCH3>
extern volatile __bit                   PWM2DCH3            __at(0x6D23);	// @ (0xDA4 * 8 + 3)
#define                                 PWM2DCH3_bit        _BIT_ACCESS(PWM2DCH,3)
// PWM2DCH<PWM2DCH4>
extern volatile __bit                   PWM2DCH4            __at(0x6D24);	// @ (0xDA4 * 8 + 4)
#define                                 PWM2DCH4_bit        _BIT_ACCESS(PWM2DCH,4)
// PWM2DCH<PWM2DCH5>
extern volatile __bit                   PWM2DCH5            __at(0x6D25);	// @ (0xDA4 * 8 + 5)
#define                                 PWM2DCH5_bit        _BIT_ACCESS(PWM2DCH,5)
// PWM2DCH<PWM2DCH6>
extern volatile __bit                   PWM2DCH6            __at(0x6D26);	// @ (0xDA4 * 8 + 6)
#define                                 PWM2DCH6_bit        _BIT_ACCESS(PWM2DCH,6)
// PWM2DCH<PWM2DCH7>
extern volatile __bit                   PWM2DCH7            __at(0x6D27);	// @ (0xDA4 * 8 + 7)
#define                                 PWM2DCH7_bit        _BIT_ACCESS(PWM2DCH,7)
// PWM2INTE<PWM2DCIE>
extern volatile __bit                   PWM2DCIE            __at(0x6D61);	// @ (0xDAC * 8 + 1)
#define                                 PWM2DCIE_bit        _BIT_ACCESS(PWM2INTE,1)
// PWM2INTF<PWM2DCIF>
extern volatile __bit                   PWM2DCIF            __at(0x6D69);	// @ (0xDAD * 8 + 1)
#define                                 PWM2DCIF_bit        _BIT_ACCESS(PWM2INTF,1)
// PWM2DCL<PWM2DCL0>
extern volatile __bit                   PWM2DCL0            __at(0x6D18);	// @ (0xDA3 * 8 + 0)
#define                                 PWM2DCL0_bit        _BIT_ACCESS(PWM2DCL,0)
// PWM2DCL<PWM2DCL1>
extern volatile __bit                   PWM2DCL1            __at(0x6D19);	// @ (0xDA3 * 8 + 1)
#define                                 PWM2DCL1_bit        _BIT_ACCESS(PWM2DCL,1)
// PWM2DCL<PWM2DCL2>
extern volatile __bit                   PWM2DCL2            __at(0x6D1A);	// @ (0xDA3 * 8 + 2)
#define                                 PWM2DCL2_bit        _BIT_ACCESS(PWM2DCL,2)
// PWM2DCL<PWM2DCL3>
extern volatile __bit                   PWM2DCL3            __at(0x6D1B);	// @ (0xDA3 * 8 + 3)
#define                                 PWM2DCL3_bit        _BIT_ACCESS(PWM2DCL,3)
// PWM2DCL<PWM2DCL4>
extern volatile __bit                   PWM2DCL4            __at(0x6D1C);	// @ (0xDA3 * 8 + 4)
#define                                 PWM2DCL4_bit        _BIT_ACCESS(PWM2DCL,4)
// PWM2DCL<PWM2DCL5>
extern volatile __bit                   PWM2DCL5            __at(0x6D1D);	// @ (0xDA3 * 8 + 5)
#define                                 PWM2DCL5_bit        _BIT_ACCESS(PWM2DCL,5)
// PWM2DCL<PWM2DCL6>
extern volatile __bit                   PWM2DCL6            __at(0x6D1E);	// @ (0xDA3 * 8 + 6)
#define                                 PWM2DCL6_bit        _BIT_ACCESS(PWM2DCL,6)
// PWM2DCL<PWM2DCL7>
extern volatile __bit                   PWM2DCL7            __at(0x6D1F);	// @ (0xDA3 * 8 + 7)
#define                                 PWM2DCL7_bit        _BIT_ACCESS(PWM2DCL,7)
// PWM2CON<PWM2EN>
extern volatile __bit                   PWM2EN              __at(0x6D5F);	// @ (0xDAB * 8 + 7)
#define                                 PWM2EN_bit          _BIT_ACCESS(PWM2CON,7)
// PWMEN<PWM2EN_A>
extern volatile __bit                   PWM2EN_A            __at(0x6C71);	// @ (0xD8E * 8 + 1)
#define                                 PWM2EN_A_bit        _BIT_ACCESS(PWMEN,1)
// PIE3<PWM2IE>
extern volatile __bit                   PWM2IE              __at(0x49D);	// @ (0x93 * 8 + 5)
#define                                 PWM2IE_bit          _BIT_ACCESS(PIE3,5)
// PIR3<PWM2IF>
extern volatile __bit                   PWM2IF              __at(0x9D);	// @ (0x13 * 8 + 5)
#define                                 PWM2IF_bit          _BIT_ACCESS(PIR3,5)
// PWM2LDCON<PWM2LD>
extern volatile __bit                   PWM2LD              __at(0x6D7F);	// @ (0xDAF * 8 + 7)
#define                                 PWM2LD_bit          _BIT_ACCESS(PWM2LDCON,7)
// PWMLD<PWM2LDA_A>
extern volatile __bit                   PWM2LDA_A           __at(0x6C79);	// @ (0xD8F * 8 + 1)
#define                                 PWM2LDA_A_bit       _BIT_ACCESS(PWMLD,1)
// PWM2LDCON<PWM2LDM>
extern volatile __bit                   PWM2LDM             __at(0x6D7E);	// @ (0xDAF * 8 + 6)
#define                                 PWM2LDM_bit         _BIT_ACCESS(PWM2LDCON,6)
// PWM2LDCON<PWM2LDS0>
extern volatile __bit                   PWM2LDS0            __at(0x6D78);	// @ (0xDAF * 8 + 0)
#define                                 PWM2LDS0_bit        _BIT_ACCESS(PWM2LDCON,0)
// PWM2LDCON<PWM2LDS1>
extern volatile __bit                   PWM2LDS1            __at(0x6D79);	// @ (0xDAF * 8 + 1)
#define                                 PWM2LDS1_bit        _BIT_ACCESS(PWM2LDCON,1)
// PWM2CON<PWM2MODE0>
extern volatile __bit                   PWM2MODE0           __at(0x6D5A);	// @ (0xDAB * 8 + 2)
#define                                 PWM2MODE0_bit       _BIT_ACCESS(PWM2CON,2)
// PWM2CON<PWM2MODE1>
extern volatile __bit                   PWM2MODE1           __at(0x6D5B);	// @ (0xDAB * 8 + 3)
#define                                 PWM2MODE1_bit       _BIT_ACCESS(PWM2CON,3)
// PWM2CON<PWM2OE>
extern volatile __bit                   PWM2OE              __at(0x6D5E);	// @ (0xDAB * 8 + 6)
#define                                 PWM2OE_bit          _BIT_ACCESS(PWM2CON,6)
// PWM2OFH<PWM2OFH0>
extern volatile __bit                   PWM2OFH0            __at(0x6D40);	// @ (0xDA8 * 8 + 0)
#define                                 PWM2OFH0_bit        _BIT_ACCESS(PWM2OFH,0)
// PWM2OFH<PWM2OFH1>
extern volatile __bit                   PWM2OFH1            __at(0x6D41);	// @ (0xDA8 * 8 + 1)
#define                                 PWM2OFH1_bit        _BIT_ACCESS(PWM2OFH,1)
// PWM2OFH<PWM2OFH2>
extern volatile __bit                   PWM2OFH2            __at(0x6D42);	// @ (0xDA8 * 8 + 2)
#define                                 PWM2OFH2_bit        _BIT_ACCESS(PWM2OFH,2)
// PWM2OFH<PWM2OFH3>
extern volatile __bit                   PWM2OFH3            __at(0x6D43);	// @ (0xDA8 * 8 + 3)
#define                                 PWM2OFH3_bit        _BIT_ACCESS(PWM2OFH,3)
// PWM2OFH<PWM2OFH4>
extern volatile __bit                   PWM2OFH4            __at(0x6D44);	// @ (0xDA8 * 8 + 4)
#define                                 PWM2OFH4_bit        _BIT_ACCESS(PWM2OFH,4)
// PWM2OFH<PWM2OFH5>
extern volatile __bit                   PWM2OFH5            __at(0x6D45);	// @ (0xDA8 * 8 + 5)
#define                                 PWM2OFH5_bit        _BIT_ACCESS(PWM2OFH,5)
// PWM2OFH<PWM2OFH6>
extern volatile __bit                   PWM2OFH6            __at(0x6D46);	// @ (0xDA8 * 8 + 6)
#define                                 PWM2OFH6_bit        _BIT_ACCESS(PWM2OFH,6)
// PWM2OFH<PWM2OFH7>
extern volatile __bit                   PWM2OFH7            __at(0x6D47);	// @ (0xDA8 * 8 + 7)
#define                                 PWM2OFH7_bit        _BIT_ACCESS(PWM2OFH,7)
// PWM2INTE<PWM2OFIE>
extern volatile __bit                   PWM2OFIE            __at(0x6D63);	// @ (0xDAC * 8 + 3)
#define                                 PWM2OFIE_bit        _BIT_ACCESS(PWM2INTE,3)
// PWM2INTF<PWM2OFIF>
extern volatile __bit                   PWM2OFIF            __at(0x6D6B);	// @ (0xDAD * 8 + 3)
#define                                 PWM2OFIF_bit        _BIT_ACCESS(PWM2INTF,3)
// PWM2OFL<PWM2OFL0>
extern volatile __bit                   PWM2OFL0            __at(0x6D38);	// @ (0xDA7 * 8 + 0)
#define                                 PWM2OFL0_bit        _BIT_ACCESS(PWM2OFL,0)
// PWM2OFL<PWM2OFL1>
extern volatile __bit                   PWM2OFL1            __at(0x6D39);	// @ (0xDA7 * 8 + 1)
#define                                 PWM2OFL1_bit        _BIT_ACCESS(PWM2OFL,1)
// PWM2OFL<PWM2OFL2>
extern volatile __bit                   PWM2OFL2            __at(0x6D3A);	// @ (0xDA7 * 8 + 2)
#define                                 PWM2OFL2_bit        _BIT_ACCESS(PWM2OFL,2)
// PWM2OFL<PWM2OFL3>
extern volatile __bit                   PWM2OFL3            __at(0x6D3B);	// @ (0xDA7 * 8 + 3)
#define                                 PWM2OFL3_bit        _BIT_ACCESS(PWM2OFL,3)
// PWM2OFL<PWM2OFL4>
extern volatile __bit                   PWM2OFL4            __at(0x6D3C);	// @ (0xDA7 * 8 + 4)
#define                                 PWM2OFL4_bit        _BIT_ACCESS(PWM2OFL,4)
// PWM2OFL<PWM2OFL5>
extern volatile __bit                   PWM2OFL5            __at(0x6D3D);	// @ (0xDA7 * 8 + 5)
#define                                 PWM2OFL5_bit        _BIT_ACCESS(PWM2OFL,5)
// PWM2OFL<PWM2OFL6>
extern volatile __bit                   PWM2OFL6            __at(0x6D3E);	// @ (0xDA7 * 8 + 6)
#define                                 PWM2OFL6_bit        _BIT_ACCESS(PWM2OFL,6)
// PWM2OFL<PWM2OFL7>
extern volatile __bit                   PWM2OFL7            __at(0x6D3F);	// @ (0xDA7 * 8 + 7)
#define                                 PWM2OFL7_bit        _BIT_ACCESS(PWM2OFL,7)
// PWM2OFCON<PWM2OFM0>
extern volatile __bit                   PWM2OFM0            __at(0x6D85);	// @ (0xDB0 * 8 + 5)
#define                                 PWM2OFM0_bit        _BIT_ACCESS(PWM2OFCON,5)
// PWM2OFCON<PWM2OFM1>
extern volatile __bit                   PWM2OFM1            __at(0x6D86);	// @ (0xDB0 * 8 + 6)
#define                                 PWM2OFM1_bit        _BIT_ACCESS(PWM2OFCON,6)
// PWM2OFCON<PWM2OFMC>
extern volatile __bit                   PWM2OFMC            __at(0x6D84);	// @ (0xDB0 * 8 + 4)
#define                                 PWM2OFMC_bit        _BIT_ACCESS(PWM2OFCON,4)
// PWM2OFCON<PWM2OFS0>
extern volatile __bit                   PWM2OFS0            __at(0x6D80);	// @ (0xDB0 * 8 + 0)
#define                                 PWM2OFS0_bit        _BIT_ACCESS(PWM2OFCON,0)
// PWM2OFCON<PWM2OFS1>
extern volatile __bit                   PWM2OFS1            __at(0x6D81);	// @ (0xDB0 * 8 + 1)
#define                                 PWM2OFS1_bit        _BIT_ACCESS(PWM2OFCON,1)
// PWM2CON<PWM2OUT>
extern volatile __bit                   PWM2OUT             __at(0x6D5D);	// @ (0xDAB * 8 + 5)
#define                                 PWM2OUT_bit         _BIT_ACCESS(PWM2CON,5)
// PWMOUT<PWM2OUT_A>
extern volatile __bit                   PWM2OUT_A           __at(0x6C81);	// @ (0xD90 * 8 + 1)
#define                                 PWM2OUT_A_bit       _BIT_ACCESS(PWMOUT,1)
// PWM2PHH<PWM2PHH0>
extern volatile __bit                   PWM2PHH0            __at(0x6D10);	// @ (0xDA2 * 8 + 0)
#define                                 PWM2PHH0_bit        _BIT_ACCESS(PWM2PHH,0)
// PWM2PHH<PWM2PHH1>
extern volatile __bit                   PWM2PHH1            __at(0x6D11);	// @ (0xDA2 * 8 + 1)
#define                                 PWM2PHH1_bit        _BIT_ACCESS(PWM2PHH,1)
// PWM2PHH<PWM2PHH2>
extern volatile __bit                   PWM2PHH2            __at(0x6D12);	// @ (0xDA2 * 8 + 2)
#define                                 PWM2PHH2_bit        _BIT_ACCESS(PWM2PHH,2)
// PWM2PHH<PWM2PHH3>
extern volatile __bit                   PWM2PHH3            __at(0x6D13);	// @ (0xDA2 * 8 + 3)
#define                                 PWM2PHH3_bit        _BIT_ACCESS(PWM2PHH,3)
// PWM2PHH<PWM2PHH4>
extern volatile __bit                   PWM2PHH4            __at(0x6D14);	// @ (0xDA2 * 8 + 4)
#define                                 PWM2PHH4_bit        _BIT_ACCESS(PWM2PHH,4)
// PWM2PHH<PWM2PHH5>
extern volatile __bit                   PWM2PHH5            __at(0x6D15);	// @ (0xDA2 * 8 + 5)
#define                                 PWM2PHH5_bit        _BIT_ACCESS(PWM2PHH,5)
// PWM2PHH<PWM2PHH6>
extern volatile __bit                   PWM2PHH6            __at(0x6D16);	// @ (0xDA2 * 8 + 6)
#define                                 PWM2PHH6_bit        _BIT_ACCESS(PWM2PHH,6)
// PWM2PHH<PWM2PHH7>
extern volatile __bit                   PWM2PHH7            __at(0x6D17);	// @ (0xDA2 * 8 + 7)
#define                                 PWM2PHH7_bit        _BIT_ACCESS(PWM2PHH,7)
// PWM2INTE<PWM2PHIE>
extern volatile __bit                   PWM2PHIE            __at(0x6D62);	// @ (0xDAC * 8 + 2)
#define                                 PWM2PHIE_bit        _BIT_ACCESS(PWM2INTE,2)
// PWM2INTF<PWM2PHIF>
extern volatile __bit                   PWM2PHIF            __at(0x6D6A);	// @ (0xDAD * 8 + 2)
#define                                 PWM2PHIF_bit        _BIT_ACCESS(PWM2INTF,2)
// PWM2PHL<PWM2PHL0>
extern volatile __bit                   PWM2PHL0            __at(0x6D08);	// @ (0xDA1 * 8 + 0)
#define                                 PWM2PHL0_bit        _BIT_ACCESS(PWM2PHL,0)
// PWM2PHL<PWM2PHL1>
extern volatile __bit                   PWM2PHL1            __at(0x6D09);	// @ (0xDA1 * 8 + 1)
#define                                 PWM2PHL1_bit        _BIT_ACCESS(PWM2PHL,1)
// PWM2PHL<PWM2PHL2>
extern volatile __bit                   PWM2PHL2            __at(0x6D0A);	// @ (0xDA1 * 8 + 2)
#define                                 PWM2PHL2_bit        _BIT_ACCESS(PWM2PHL,2)
// PWM2PHL<PWM2PHL3>
extern volatile __bit                   PWM2PHL3            __at(0x6D0B);	// @ (0xDA1 * 8 + 3)
#define                                 PWM2PHL3_bit        _BIT_ACCESS(PWM2PHL,3)
// PWM2PHL<PWM2PHL4>
extern volatile __bit                   PWM2PHL4            __at(0x6D0C);	// @ (0xDA1 * 8 + 4)
#define                                 PWM2PHL4_bit        _BIT_ACCESS(PWM2PHL,4)
// PWM2PHL<PWM2PHL5>
extern volatile __bit                   PWM2PHL5            __at(0x6D0D);	// @ (0xDA1 * 8 + 5)
#define                                 PWM2PHL5_bit        _BIT_ACCESS(PWM2PHL,5)
// PWM2PHL<PWM2PHL6>
extern volatile __bit                   PWM2PHL6            __at(0x6D0E);	// @ (0xDA1 * 8 + 6)
#define                                 PWM2PHL6_bit        _BIT_ACCESS(PWM2PHL,6)
// PWM2PHL<PWM2PHL7>
extern volatile __bit                   PWM2PHL7            __at(0x6D0F);	// @ (0xDA1 * 8 + 7)
#define                                 PWM2PHL7_bit        _BIT_ACCESS(PWM2PHL,7)
// PWM2CON<PWM2POL>
extern volatile __bit                   PWM2POL             __at(0x6D5C);	// @ (0xDAB * 8 + 4)
#define                                 PWM2POL_bit         _BIT_ACCESS(PWM2CON,4)
// PWM2PRH<PWM2PRH0>
extern volatile __bit                   PWM2PRH0            __at(0x6D30);	// @ (0xDA6 * 8 + 0)
#define                                 PWM2PRH0_bit        _BIT_ACCESS(PWM2PRH,0)
// PWM2PRH<PWM2PRH1>
extern volatile __bit                   PWM2PRH1            __at(0x6D31);	// @ (0xDA6 * 8 + 1)
#define                                 PWM2PRH1_bit        _BIT_ACCESS(PWM2PRH,1)
// PWM2PRH<PWM2PRH2>
extern volatile __bit                   PWM2PRH2            __at(0x6D32);	// @ (0xDA6 * 8 + 2)
#define                                 PWM2PRH2_bit        _BIT_ACCESS(PWM2PRH,2)
// PWM2PRH<PWM2PRH3>
extern volatile __bit                   PWM2PRH3            __at(0x6D33);	// @ (0xDA6 * 8 + 3)
#define                                 PWM2PRH3_bit        _BIT_ACCESS(PWM2PRH,3)
// PWM2PRH<PWM2PRH4>
extern volatile __bit                   PWM2PRH4            __at(0x6D34);	// @ (0xDA6 * 8 + 4)
#define                                 PWM2PRH4_bit        _BIT_ACCESS(PWM2PRH,4)
// PWM2PRH<PWM2PRH5>
extern volatile __bit                   PWM2PRH5            __at(0x6D35);	// @ (0xDA6 * 8 + 5)
#define                                 PWM2PRH5_bit        _BIT_ACCESS(PWM2PRH,5)
// PWM2PRH<PWM2PRH6>
extern volatile __bit                   PWM2PRH6            __at(0x6D36);	// @ (0xDA6 * 8 + 6)
#define                                 PWM2PRH6_bit        _BIT_ACCESS(PWM2PRH,6)
// PWM2PRH<PWM2PRH7>
extern volatile __bit                   PWM2PRH7            __at(0x6D37);	// @ (0xDA6 * 8 + 7)
#define                                 PWM2PRH7_bit        _BIT_ACCESS(PWM2PRH,7)
// PWM2INTE<PWM2PRIE>
extern volatile __bit                   PWM2PRIE            __at(0x6D60);	// @ (0xDAC * 8 + 0)
#define                                 PWM2PRIE_bit        _BIT_ACCESS(PWM2INTE,0)
// PWM2INTF<PWM2PRIF>
extern volatile __bit                   PWM2PRIF            __at(0x6D68);	// @ (0xDAD * 8 + 0)
#define                                 PWM2PRIF_bit        _BIT_ACCESS(PWM2INTF,0)
// PWM2PRL<PWM2PRL0>
extern volatile __bit                   PWM2PRL0            __at(0x6D28);	// @ (0xDA5 * 8 + 0)
#define                                 PWM2PRL0_bit        _BIT_ACCESS(PWM2PRL,0)
// PWM2PRL<PWM2PRL1>
extern volatile __bit                   PWM2PRL1            __at(0x6D29);	// @ (0xDA5 * 8 + 1)
#define                                 PWM2PRL1_bit        _BIT_ACCESS(PWM2PRL,1)
// PWM2PRL<PWM2PRL2>
extern volatile __bit                   PWM2PRL2            __at(0x6D2A);	// @ (0xDA5 * 8 + 2)
#define                                 PWM2PRL2_bit        _BIT_ACCESS(PWM2PRL,2)
// PWM2PRL<PWM2PRL3>
extern volatile __bit                   PWM2PRL3            __at(0x6D2B);	// @ (0xDA5 * 8 + 3)
#define                                 PWM2PRL3_bit        _BIT_ACCESS(PWM2PRL,3)
// PWM2PRL<PWM2PRL4>
extern volatile __bit                   PWM2PRL4            __at(0x6D2C);	// @ (0xDA5 * 8 + 4)
#define                                 PWM2PRL4_bit        _BIT_ACCESS(PWM2PRL,4)
// PWM2PRL<PWM2PRL5>
extern volatile __bit                   PWM2PRL5            __at(0x6D2D);	// @ (0xDA5 * 8 + 5)
#define                                 PWM2PRL5_bit        _BIT_ACCESS(PWM2PRL,5)
// PWM2PRL<PWM2PRL6>
extern volatile __bit                   PWM2PRL6            __at(0x6D2E);	// @ (0xDA5 * 8 + 6)
#define                                 PWM2PRL6_bit        _BIT_ACCESS(PWM2PRL,6)
// PWM2PRL<PWM2PRL7>
extern volatile __bit                   PWM2PRL7            __at(0x6D2F);	// @ (0xDA5 * 8 + 7)
#define                                 PWM2PRL7_bit        _BIT_ACCESS(PWM2PRL,7)
// PWM2CLKCON<PWM2PS0>
extern volatile __bit                   PWM2PS0             __at(0x6D74);	// @ (0xDAE * 8 + 4)
#define                                 PWM2PS0_bit         _BIT_ACCESS(PWM2CLKCON,4)
// PWM2CLKCON<PWM2PS1>
extern volatile __bit                   PWM2PS1             __at(0x6D75);	// @ (0xDAE * 8 + 5)
#define                                 PWM2PS1_bit         _BIT_ACCESS(PWM2CLKCON,5)
// PWM2CLKCON<PWM2PS2>
extern volatile __bit                   PWM2PS2             __at(0x6D76);	// @ (0xDAE * 8 + 6)
#define                                 PWM2PS2_bit         _BIT_ACCESS(PWM2CLKCON,6)
// PWM2TMRH<PWM2TMRH0>
extern volatile __bit                   PWM2TMRH0           __at(0x6D50);	// @ (0xDAA * 8 + 0)
#define                                 PWM2TMRH0_bit       _BIT_ACCESS(PWM2TMRH,0)
// PWM2TMRH<PWM2TMRH1>
extern volatile __bit                   PWM2TMRH1           __at(0x6D51);	// @ (0xDAA * 8 + 1)
#define                                 PWM2TMRH1_bit       _BIT_ACCESS(PWM2TMRH,1)
// PWM2TMRH<PWM2TMRH2>
extern volatile __bit                   PWM2TMRH2           __at(0x6D52);	// @ (0xDAA * 8 + 2)
#define                                 PWM2TMRH2_bit       _BIT_ACCESS(PWM2TMRH,2)
// PWM2TMRH<PWM2TMRH3>
extern volatile __bit                   PWM2TMRH3           __at(0x6D53);	// @ (0xDAA * 8 + 3)
#define                                 PWM2TMRH3_bit       _BIT_ACCESS(PWM2TMRH,3)
// PWM2TMRH<PWM2TMRH4>
extern volatile __bit                   PWM2TMRH4           __at(0x6D54);	// @ (0xDAA * 8 + 4)
#define                                 PWM2TMRH4_bit       _BIT_ACCESS(PWM2TMRH,4)
// PWM2TMRH<PWM2TMRH5>
extern volatile __bit                   PWM2TMRH5           __at(0x6D55);	// @ (0xDAA * 8 + 5)
#define                                 PWM2TMRH5_bit       _BIT_ACCESS(PWM2TMRH,5)
// PWM2TMRH<PWM2TMRH6>
extern volatile __bit                   PWM2TMRH6           __at(0x6D56);	// @ (0xDAA * 8 + 6)
#define                                 PWM2TMRH6_bit       _BIT_ACCESS(PWM2TMRH,6)
// PWM2TMRH<PWM2TMRH7>
extern volatile __bit                   PWM2TMRH7           __at(0x6D57);	// @ (0xDAA * 8 + 7)
#define                                 PWM2TMRH7_bit       _BIT_ACCESS(PWM2TMRH,7)
// PWM2TMRL<PWM2TMRL0>
extern volatile __bit                   PWM2TMRL0           __at(0x6D48);	// @ (0xDA9 * 8 + 0)
#define                                 PWM2TMRL0_bit       _BIT_ACCESS(PWM2TMRL,0)
// PWM2TMRL<PWM2TMRL1>
extern volatile __bit                   PWM2TMRL1           __at(0x6D49);	// @ (0xDA9 * 8 + 1)
#define                                 PWM2TMRL1_bit       _BIT_ACCESS(PWM2TMRL,1)
// PWM2TMRL<PWM2TMRL2>
extern volatile __bit                   PWM2TMRL2           __at(0x6D4A);	// @ (0xDA9 * 8 + 2)
#define                                 PWM2TMRL2_bit       _BIT_ACCESS(PWM2TMRL,2)
// PWM2TMRL<PWM2TMRL3>
extern volatile __bit                   PWM2TMRL3           __at(0x6D4B);	// @ (0xDA9 * 8 + 3)
#define                                 PWM2TMRL3_bit       _BIT_ACCESS(PWM2TMRL,3)
// PWM2TMRL<PWM2TMRL4>
extern volatile __bit                   PWM2TMRL4           __at(0x6D4C);	// @ (0xDA9 * 8 + 4)
#define                                 PWM2TMRL4_bit       _BIT_ACCESS(PWM2TMRL,4)
// PWM2TMRL<PWM2TMRL5>
extern volatile __bit                   PWM2TMRL5           __at(0x6D4D);	// @ (0xDA9 * 8 + 5)
#define                                 PWM2TMRL5_bit       _BIT_ACCESS(PWM2TMRL,5)
// PWM2TMRL<PWM2TMRL6>
extern volatile __bit                   PWM2TMRL6           __at(0x6D4E);	// @ (0xDA9 * 8 + 6)
#define                                 PWM2TMRL6_bit       _BIT_ACCESS(PWM2TMRL,6)
// PWM2TMRL<PWM2TMRL7>
extern volatile __bit                   PWM2TMRL7           __at(0x6D4F);	// @ (0xDA9 * 8 + 7)
#define                                 PWM2TMRL7_bit       _BIT_ACCESS(PWM2TMRL,7)
// PWM3CLKCON<PWM3CS0>
extern volatile __bit                   PWM3CS0             __at(0x6DF0);	// @ (0xDBE * 8 + 0)
#define                                 PWM3CS0_bit         _BIT_ACCESS(PWM3CLKCON,0)
// PWM3CLKCON<PWM3CS1>
extern volatile __bit                   PWM3CS1             __at(0x6DF1);	// @ (0xDBE * 8 + 1)
#define                                 PWM3CS1_bit         _BIT_ACCESS(PWM3CLKCON,1)
// PWM3DCH<PWM3DCH0>
extern volatile __bit                   PWM3DCH0            __at(0x6DA0);	// @ (0xDB4 * 8 + 0)
#define                                 PWM3DCH0_bit        _BIT_ACCESS(PWM3DCH,0)
// PWM3DCH<PWM3DCH1>
extern volatile __bit                   PWM3DCH1            __at(0x6DA1);	// @ (0xDB4 * 8 + 1)
#define                                 PWM3DCH1_bit        _BIT_ACCESS(PWM3DCH,1)
// PWM3DCH<PWM3DCH2>
extern volatile __bit                   PWM3DCH2            __at(0x6DA2);	// @ (0xDB4 * 8 + 2)
#define                                 PWM3DCH2_bit        _BIT_ACCESS(PWM3DCH,2)
// PWM3DCH<PWM3DCH3>
extern volatile __bit                   PWM3DCH3            __at(0x6DA3);	// @ (0xDB4 * 8 + 3)
#define                                 PWM3DCH3_bit        _BIT_ACCESS(PWM3DCH,3)
// PWM3DCH<PWM3DCH4>
extern volatile __bit                   PWM3DCH4            __at(0x6DA4);	// @ (0xDB4 * 8 + 4)
#define                                 PWM3DCH4_bit        _BIT_ACCESS(PWM3DCH,4)
// PWM3DCH<PWM3DCH5>
extern volatile __bit                   PWM3DCH5            __at(0x6DA5);	// @ (0xDB4 * 8 + 5)
#define                                 PWM3DCH5_bit        _BIT_ACCESS(PWM3DCH,5)
// PWM3DCH<PWM3DCH6>
extern volatile __bit                   PWM3DCH6            __at(0x6DA6);	// @ (0xDB4 * 8 + 6)
#define                                 PWM3DCH6_bit        _BIT_ACCESS(PWM3DCH,6)
// PWM3DCH<PWM3DCH7>
extern volatile __bit                   PWM3DCH7            __at(0x6DA7);	// @ (0xDB4 * 8 + 7)
#define                                 PWM3DCH7_bit        _BIT_ACCESS(PWM3DCH,7)
// PWM3INTE<PWM3DCIE>
extern volatile __bit                   PWM3DCIE            __at(0x6DE1);	// @ (0xDBC * 8 + 1)
#define                                 PWM3DCIE_bit        _BIT_ACCESS(PWM3INTE,1)
// PWM3INTF<PWM3DCIF>
extern volatile __bit                   PWM3DCIF            __at(0x6DE9);	// @ (0xDBD * 8 + 1)
#define                                 PWM3DCIF_bit        _BIT_ACCESS(PWM3INTF,1)
// PWM3DCL<PWM3DCL0>
extern volatile __bit                   PWM3DCL0            __at(0x6D98);	// @ (0xDB3 * 8 + 0)
#define                                 PWM3DCL0_bit        _BIT_ACCESS(PWM3DCL,0)
// PWM3DCL<PWM3DCL1>
extern volatile __bit                   PWM3DCL1            __at(0x6D99);	// @ (0xDB3 * 8 + 1)
#define                                 PWM3DCL1_bit        _BIT_ACCESS(PWM3DCL,1)
// PWM3DCL<PWM3DCL2>
extern volatile __bit                   PWM3DCL2            __at(0x6D9A);	// @ (0xDB3 * 8 + 2)
#define                                 PWM3DCL2_bit        _BIT_ACCESS(PWM3DCL,2)
// PWM3DCL<PWM3DCL3>
extern volatile __bit                   PWM3DCL3            __at(0x6D9B);	// @ (0xDB3 * 8 + 3)
#define                                 PWM3DCL3_bit        _BIT_ACCESS(PWM3DCL,3)
// PWM3DCL<PWM3DCL4>
extern volatile __bit                   PWM3DCL4            __at(0x6D9C);	// @ (0xDB3 * 8 + 4)
#define                                 PWM3DCL4_bit        _BIT_ACCESS(PWM3DCL,4)
// PWM3DCL<PWM3DCL5>
extern volatile __bit                   PWM3DCL5            __at(0x6D9D);	// @ (0xDB3 * 8 + 5)
#define                                 PWM3DCL5_bit        _BIT_ACCESS(PWM3DCL,5)
// PWM3DCL<PWM3DCL6>
extern volatile __bit                   PWM3DCL6            __at(0x6D9E);	// @ (0xDB3 * 8 + 6)
#define                                 PWM3DCL6_bit        _BIT_ACCESS(PWM3DCL,6)
// PWM3DCL<PWM3DCL7>
extern volatile __bit                   PWM3DCL7            __at(0x6D9F);	// @ (0xDB3 * 8 + 7)
#define                                 PWM3DCL7_bit        _BIT_ACCESS(PWM3DCL,7)
// PWM3CON<PWM3EN>
extern volatile __bit                   PWM3EN              __at(0x6DDF);	// @ (0xDBB * 8 + 7)
#define                                 PWM3EN_bit          _BIT_ACCESS(PWM3CON,7)
// PWMEN<PWM3EN_A>
extern volatile __bit                   PWM3EN_A            __at(0x6C72);	// @ (0xD8E * 8 + 2)
#define                                 PWM3EN_A_bit        _BIT_ACCESS(PWMEN,2)
// PIE3<PWM3IE>
extern volatile __bit                   PWM3IE              __at(0x49E);	// @ (0x93 * 8 + 6)
#define                                 PWM3IE_bit          _BIT_ACCESS(PIE3,6)
// PIR3<PWM3IF>
extern volatile __bit                   PWM3IF              __at(0x9E);	// @ (0x13 * 8 + 6)
#define                                 PWM3IF_bit          _BIT_ACCESS(PIR3,6)
// PWM3LDCON<PWM3LD>
extern volatile __bit                   PWM3LD              __at(0x6DFF);	// @ (0xDBF * 8 + 7)
#define                                 PWM3LD_bit          _BIT_ACCESS(PWM3LDCON,7)
// PWMLD<PWM3LDA_A>
extern volatile __bit                   PWM3LDA_A           __at(0x6C7A);	// @ (0xD8F * 8 + 2)
#define                                 PWM3LDA_A_bit       _BIT_ACCESS(PWMLD,2)
// PWM3LDCON<PWM3LDM>
extern volatile __bit                   PWM3LDM             __at(0x6DFE);	// @ (0xDBF * 8 + 6)
#define                                 PWM3LDM_bit         _BIT_ACCESS(PWM3LDCON,6)
// PWM3LDCON<PWM3LDS0>
extern volatile __bit                   PWM3LDS0            __at(0x6DF8);	// @ (0xDBF * 8 + 0)
#define                                 PWM3LDS0_bit        _BIT_ACCESS(PWM3LDCON,0)
// PWM3LDCON<PWM3LDS1>
extern volatile __bit                   PWM3LDS1            __at(0x6DF9);	// @ (0xDBF * 8 + 1)
#define                                 PWM3LDS1_bit        _BIT_ACCESS(PWM3LDCON,1)
// PWM3CON<PWM3MODE0>
extern volatile __bit                   PWM3MODE0           __at(0x6DDA);	// @ (0xDBB * 8 + 2)
#define                                 PWM3MODE0_bit       _BIT_ACCESS(PWM3CON,2)
// PWM3CON<PWM3MODE1>
extern volatile __bit                   PWM3MODE1           __at(0x6DDB);	// @ (0xDBB * 8 + 3)
#define                                 PWM3MODE1_bit       _BIT_ACCESS(PWM3CON,3)
// PWM3CON<PWM3OE>
extern volatile __bit                   PWM3OE              __at(0x6DDE);	// @ (0xDBB * 8 + 6)
#define                                 PWM3OE_bit          _BIT_ACCESS(PWM3CON,6)
// PWM3OFH<PWM3OFH0>
extern volatile __bit                   PWM3OFH0            __at(0x6DC0);	// @ (0xDB8 * 8 + 0)
#define                                 PWM3OFH0_bit        _BIT_ACCESS(PWM3OFH,0)
// PWM3OFH<PWM3OFH1>
extern volatile __bit                   PWM3OFH1            __at(0x6DC1);	// @ (0xDB8 * 8 + 1)
#define                                 PWM3OFH1_bit        _BIT_ACCESS(PWM3OFH,1)
// PWM3OFH<PWM3OFH2>
extern volatile __bit                   PWM3OFH2            __at(0x6DC2);	// @ (0xDB8 * 8 + 2)
#define                                 PWM3OFH2_bit        _BIT_ACCESS(PWM3OFH,2)
// PWM3OFH<PWM3OFH3>
extern volatile __bit                   PWM3OFH3            __at(0x6DC3);	// @ (0xDB8 * 8 + 3)
#define                                 PWM3OFH3_bit        _BIT_ACCESS(PWM3OFH,3)
// PWM3OFH<PWM3OFH4>
extern volatile __bit                   PWM3OFH4            __at(0x6DC4);	// @ (0xDB8 * 8 + 4)
#define                                 PWM3OFH4_bit        _BIT_ACCESS(PWM3OFH,4)
// PWM3OFH<PWM3OFH5>
extern volatile __bit                   PWM3OFH5            __at(0x6DC5);	// @ (0xDB8 * 8 + 5)
#define                                 PWM3OFH5_bit        _BIT_ACCESS(PWM3OFH,5)
// PWM3OFH<PWM3OFH6>
extern volatile __bit                   PWM3OFH6            __at(0x6DC6);	// @ (0xDB8 * 8 + 6)
#define                                 PWM3OFH6_bit        _BIT_ACCESS(PWM3OFH,6)
// PWM3OFH<PWM3OFH7>
extern volatile __bit                   PWM3OFH7            __at(0x6DC7);	// @ (0xDB8 * 8 + 7)
#define                                 PWM3OFH7_bit        _BIT_ACCESS(PWM3OFH,7)
// PWM3INTE<PWM3OFIE>
extern volatile __bit                   PWM3OFIE            __at(0x6DE3);	// @ (0xDBC * 8 + 3)
#define                                 PWM3OFIE_bit        _BIT_ACCESS(PWM3INTE,3)
// PWM3INTF<PWM3OFIF>
extern volatile __bit                   PWM3OFIF            __at(0x6DEB);	// @ (0xDBD * 8 + 3)
#define                                 PWM3OFIF_bit        _BIT_ACCESS(PWM3INTF,3)
// PWM3OFL<PWM3OFL0>
extern volatile __bit                   PWM3OFL0            __at(0x6DB8);	// @ (0xDB7 * 8 + 0)
#define                                 PWM3OFL0_bit        _BIT_ACCESS(PWM3OFL,0)
// PWM3OFL<PWM3OFL1>
extern volatile __bit                   PWM3OFL1            __at(0x6DB9);	// @ (0xDB7 * 8 + 1)
#define                                 PWM3OFL1_bit        _BIT_ACCESS(PWM3OFL,1)
// PWM3OFL<PWM3OFL2>
extern volatile __bit                   PWM3OFL2            __at(0x6DBA);	// @ (0xDB7 * 8 + 2)
#define                                 PWM3OFL2_bit        _BIT_ACCESS(PWM3OFL,2)
// PWM3OFL<PWM3OFL3>
extern volatile __bit                   PWM3OFL3            __at(0x6DBB);	// @ (0xDB7 * 8 + 3)
#define                                 PWM3OFL3_bit        _BIT_ACCESS(PWM3OFL,3)
// PWM3OFL<PWM3OFL4>
extern volatile __bit                   PWM3OFL4            __at(0x6DBC);	// @ (0xDB7 * 8 + 4)
#define                                 PWM3OFL4_bit        _BIT_ACCESS(PWM3OFL,4)
// PWM3OFL<PWM3OFL5>
extern volatile __bit                   PWM3OFL5            __at(0x6DBD);	// @ (0xDB7 * 8 + 5)
#define                                 PWM3OFL5_bit        _BIT_ACCESS(PWM3OFL,5)
// PWM3OFL<PWM3OFL6>
extern volatile __bit                   PWM3OFL6            __at(0x6DBE);	// @ (0xDB7 * 8 + 6)
#define                                 PWM3OFL6_bit        _BIT_ACCESS(PWM3OFL,6)
// PWM3OFL<PWM3OFL7>
extern volatile __bit                   PWM3OFL7            __at(0x6DBF);	// @ (0xDB7 * 8 + 7)
#define                                 PWM3OFL7_bit        _BIT_ACCESS(PWM3OFL,7)
// PWM3OFCON<PWM3OFM0>
extern volatile __bit                   PWM3OFM0            __at(0x6E05);	// @ (0xDC0 * 8 + 5)
#define                                 PWM3OFM0_bit        _BIT_ACCESS(PWM3OFCON,5)
// PWM3OFCON<PWM3OFM1>
extern volatile __bit                   PWM3OFM1            __at(0x6E06);	// @ (0xDC0 * 8 + 6)
#define                                 PWM3OFM1_bit        _BIT_ACCESS(PWM3OFCON,6)
// PWM3OFCON<PWM3OFMC>
extern volatile __bit                   PWM3OFMC            __at(0x6E04);	// @ (0xDC0 * 8 + 4)
#define                                 PWM3OFMC_bit        _BIT_ACCESS(PWM3OFCON,4)
// PWM3OFCON<PWM3OFS0>
extern volatile __bit                   PWM3OFS0            __at(0x6E00);	// @ (0xDC0 * 8 + 0)
#define                                 PWM3OFS0_bit        _BIT_ACCESS(PWM3OFCON,0)
// PWM3OFCON<PWM3OFS1>
extern volatile __bit                   PWM3OFS1            __at(0x6E01);	// @ (0xDC0 * 8 + 1)
#define                                 PWM3OFS1_bit        _BIT_ACCESS(PWM3OFCON,1)
// PWM3CON<PWM3OUT>
extern volatile __bit                   PWM3OUT             __at(0x6DDD);	// @ (0xDBB * 8 + 5)
#define                                 PWM3OUT_bit         _BIT_ACCESS(PWM3CON,5)
// PWMOUT<PWM3OUT_A>
extern volatile __bit                   PWM3OUT_A           __at(0x6C82);	// @ (0xD90 * 8 + 2)
#define                                 PWM3OUT_A_bit       _BIT_ACCESS(PWMOUT,2)
// PWM3PHH<PWM3PHH0>
extern volatile __bit                   PWM3PHH0            __at(0x6D90);	// @ (0xDB2 * 8 + 0)
#define                                 PWM3PHH0_bit        _BIT_ACCESS(PWM3PHH,0)
// PWM3PHH<PWM3PHH1>
extern volatile __bit                   PWM3PHH1            __at(0x6D91);	// @ (0xDB2 * 8 + 1)
#define                                 PWM3PHH1_bit        _BIT_ACCESS(PWM3PHH,1)
// PWM3PHH<PWM3PHH2>
extern volatile __bit                   PWM3PHH2            __at(0x6D92);	// @ (0xDB2 * 8 + 2)
#define                                 PWM3PHH2_bit        _BIT_ACCESS(PWM3PHH,2)
// PWM3PHH<PWM3PHH3>
extern volatile __bit                   PWM3PHH3            __at(0x6D93);	// @ (0xDB2 * 8 + 3)
#define                                 PWM3PHH3_bit        _BIT_ACCESS(PWM3PHH,3)
// PWM3PHH<PWM3PHH4>
extern volatile __bit                   PWM3PHH4            __at(0x6D94);	// @ (0xDB2 * 8 + 4)
#define                                 PWM3PHH4_bit        _BIT_ACCESS(PWM3PHH,4)
// PWM3PHH<PWM3PHH5>
extern volatile __bit                   PWM3PHH5            __at(0x6D95);	// @ (0xDB2 * 8 + 5)
#define                                 PWM3PHH5_bit        _BIT_ACCESS(PWM3PHH,5)
// PWM3PHH<PWM3PHH6>
extern volatile __bit                   PWM3PHH6            __at(0x6D96);	// @ (0xDB2 * 8 + 6)
#define                                 PWM3PHH6_bit        _BIT_ACCESS(PWM3PHH,6)
// PWM3PHH<PWM3PHH7>
extern volatile __bit                   PWM3PHH7            __at(0x6D97);	// @ (0xDB2 * 8 + 7)
#define                                 PWM3PHH7_bit        _BIT_ACCESS(PWM3PHH,7)
// PWM3INTE<PWM3PHIE>
extern volatile __bit                   PWM3PHIE            __at(0x6DE2);	// @ (0xDBC * 8 + 2)
#define                                 PWM3PHIE_bit        _BIT_ACCESS(PWM3INTE,2)
// PWM3INTF<PWM3PHIF>
extern volatile __bit                   PWM3PHIF            __at(0x6DEA);	// @ (0xDBD * 8 + 2)
#define                                 PWM3PHIF_bit        _BIT_ACCESS(PWM3INTF,2)
// PWM3PHL<PWM3PHL0>
extern volatile __bit                   PWM3PHL0            __at(0x6D88);	// @ (0xDB1 * 8 + 0)
#define                                 PWM3PHL0_bit        _BIT_ACCESS(PWM3PHL,0)
// PWM3PHL<PWM3PHL1>
extern volatile __bit                   PWM3PHL1            __at(0x6D89);	// @ (0xDB1 * 8 + 1)
#define                                 PWM3PHL1_bit        _BIT_ACCESS(PWM3PHL,1)
// PWM3PHL<PWM3PHL2>
extern volatile __bit                   PWM3PHL2            __at(0x6D8A);	// @ (0xDB1 * 8 + 2)
#define                                 PWM3PHL2_bit        _BIT_ACCESS(PWM3PHL,2)
// PWM3PHL<PWM3PHL3>
extern volatile __bit                   PWM3PHL3            __at(0x6D8B);	// @ (0xDB1 * 8 + 3)
#define                                 PWM3PHL3_bit        _BIT_ACCESS(PWM3PHL,3)
// PWM3PHL<PWM3PHL4>
extern volatile __bit                   PWM3PHL4            __at(0x6D8C);	// @ (0xDB1 * 8 + 4)
#define                                 PWM3PHL4_bit        _BIT_ACCESS(PWM3PHL,4)
// PWM3PHL<PWM3PHL5>
extern volatile __bit                   PWM3PHL5            __at(0x6D8D);	// @ (0xDB1 * 8 + 5)
#define                                 PWM3PHL5_bit        _BIT_ACCESS(PWM3PHL,5)
// PWM3PHL<PWM3PHL6>
extern volatile __bit                   PWM3PHL6            __at(0x6D8E);	// @ (0xDB1 * 8 + 6)
#define                                 PWM3PHL6_bit        _BIT_ACCESS(PWM3PHL,6)
// PWM3PHL<PWM3PHL7>
extern volatile __bit                   PWM3PHL7            __at(0x6D8F);	// @ (0xDB1 * 8 + 7)
#define                                 PWM3PHL7_bit        _BIT_ACCESS(PWM3PHL,7)
// PWM3CON<PWM3POL>
extern volatile __bit                   PWM3POL             __at(0x6DDC);	// @ (0xDBB * 8 + 4)
#define                                 PWM3POL_bit         _BIT_ACCESS(PWM3CON,4)
// PWM3PRH<PWM3PRH0>
extern volatile __bit                   PWM3PRH0            __at(0x6DB0);	// @ (0xDB6 * 8 + 0)
#define                                 PWM3PRH0_bit        _BIT_ACCESS(PWM3PRH,0)
// PWM3PRH<PWM3PRH1>
extern volatile __bit                   PWM3PRH1            __at(0x6DB1);	// @ (0xDB6 * 8 + 1)
#define                                 PWM3PRH1_bit        _BIT_ACCESS(PWM3PRH,1)
// PWM3PRH<PWM3PRH2>
extern volatile __bit                   PWM3PRH2            __at(0x6DB2);	// @ (0xDB6 * 8 + 2)
#define                                 PWM3PRH2_bit        _BIT_ACCESS(PWM3PRH,2)
// PWM3PRH<PWM3PRH3>
extern volatile __bit                   PWM3PRH3            __at(0x6DB3);	// @ (0xDB6 * 8 + 3)
#define                                 PWM3PRH3_bit        _BIT_ACCESS(PWM3PRH,3)
// PWM3PRH<PWM3PRH4>
extern volatile __bit                   PWM3PRH4            __at(0x6DB4);	// @ (0xDB6 * 8 + 4)
#define                                 PWM3PRH4_bit        _BIT_ACCESS(PWM3PRH,4)
// PWM3PRH<PWM3PRH5>
extern volatile __bit                   PWM3PRH5            __at(0x6DB5);	// @ (0xDB6 * 8 + 5)
#define                                 PWM3PRH5_bit        _BIT_ACCESS(PWM3PRH,5)
// PWM3PRH<PWM3PRH6>
extern volatile __bit                   PWM3PRH6            __at(0x6DB6);	// @ (0xDB6 * 8 + 6)
#define                                 PWM3PRH6_bit        _BIT_ACCESS(PWM3PRH,6)
// PWM3PRH<PWM3PRH7>
extern volatile __bit                   PWM3PRH7            __at(0x6DB7);	// @ (0xDB6 * 8 + 7)
#define                                 PWM3PRH7_bit        _BIT_ACCESS(PWM3PRH,7)
// PWM3INTE<PWM3PRIE>
extern volatile __bit                   PWM3PRIE            __at(0x6DE0);	// @ (0xDBC * 8 + 0)
#define                                 PWM3PRIE_bit        _BIT_ACCESS(PWM3INTE,0)
// PWM3INTF<PWM3PRIF>
extern volatile __bit                   PWM3PRIF            __at(0x6DE8);	// @ (0xDBD * 8 + 0)
#define                                 PWM3PRIF_bit        _BIT_ACCESS(PWM3INTF,0)
// PWM3PRL<PWM3PRL0>
extern volatile __bit                   PWM3PRL0            __at(0x6DA8);	// @ (0xDB5 * 8 + 0)
#define                                 PWM3PRL0_bit        _BIT_ACCESS(PWM3PRL,0)
// PWM3PRL<PWM3PRL1>
extern volatile __bit                   PWM3PRL1            __at(0x6DA9);	// @ (0xDB5 * 8 + 1)
#define                                 PWM3PRL1_bit        _BIT_ACCESS(PWM3PRL,1)
// PWM3PRL<PWM3PRL2>
extern volatile __bit                   PWM3PRL2            __at(0x6DAA);	// @ (0xDB5 * 8 + 2)
#define                                 PWM3PRL2_bit        _BIT_ACCESS(PWM3PRL,2)
// PWM3PRL<PWM3PRL3>
extern volatile __bit                   PWM3PRL3            __at(0x6DAB);	// @ (0xDB5 * 8 + 3)
#define                                 PWM3PRL3_bit        _BIT_ACCESS(PWM3PRL,3)
// PWM3PRL<PWM3PRL4>
extern volatile __bit                   PWM3PRL4            __at(0x6DAC);	// @ (0xDB5 * 8 + 4)
#define                                 PWM3PRL4_bit        _BIT_ACCESS(PWM3PRL,4)
// PWM3PRL<PWM3PRL5>
extern volatile __bit                   PWM3PRL5            __at(0x6DAD);	// @ (0xDB5 * 8 + 5)
#define                                 PWM3PRL5_bit        _BIT_ACCESS(PWM3PRL,5)
// PWM3PRL<PWM3PRL6>
extern volatile __bit                   PWM3PRL6            __at(0x6DAE);	// @ (0xDB5 * 8 + 6)
#define                                 PWM3PRL6_bit        _BIT_ACCESS(PWM3PRL,6)
// PWM3PRL<PWM3PRL7>
extern volatile __bit                   PWM3PRL7            __at(0x6DAF);	// @ (0xDB5 * 8 + 7)
#define                                 PWM3PRL7_bit        _BIT_ACCESS(PWM3PRL,7)
// PWM3CLKCON<PWM3PS0>
extern volatile __bit                   PWM3PS0             __at(0x6DF4);	// @ (0xDBE * 8 + 4)
#define                                 PWM3PS0_bit         _BIT_ACCESS(PWM3CLKCON,4)
// PWM3CLKCON<PWM3PS1>
extern volatile __bit                   PWM3PS1             __at(0x6DF5);	// @ (0xDBE * 8 + 5)
#define                                 PWM3PS1_bit         _BIT_ACCESS(PWM3CLKCON,5)
// PWM3CLKCON<PWM3PS2>
extern volatile __bit                   PWM3PS2             __at(0x6DF6);	// @ (0xDBE * 8 + 6)
#define                                 PWM3PS2_bit         _BIT_ACCESS(PWM3CLKCON,6)
// PWM3TMRH<PWM3TMRH0>
extern volatile __bit                   PWM3TMRH0           __at(0x6DD0);	// @ (0xDBA * 8 + 0)
#define                                 PWM3TMRH0_bit       _BIT_ACCESS(PWM3TMRH,0)
// PWM3TMRH<PWM3TMRH1>
extern volatile __bit                   PWM3TMRH1           __at(0x6DD1);	// @ (0xDBA * 8 + 1)
#define                                 PWM3TMRH1_bit       _BIT_ACCESS(PWM3TMRH,1)
// PWM3TMRH<PWM3TMRH2>
extern volatile __bit                   PWM3TMRH2           __at(0x6DD2);	// @ (0xDBA * 8 + 2)
#define                                 PWM3TMRH2_bit       _BIT_ACCESS(PWM3TMRH,2)
// PWM3TMRH<PWM3TMRH3>
extern volatile __bit                   PWM3TMRH3           __at(0x6DD3);	// @ (0xDBA * 8 + 3)
#define                                 PWM3TMRH3_bit       _BIT_ACCESS(PWM3TMRH,3)
// PWM3TMRH<PWM3TMRH4>
extern volatile __bit                   PWM3TMRH4           __at(0x6DD4);	// @ (0xDBA * 8 + 4)
#define                                 PWM3TMRH4_bit       _BIT_ACCESS(PWM3TMRH,4)
// PWM3TMRH<PWM3TMRH5>
extern volatile __bit                   PWM3TMRH5           __at(0x6DD5);	// @ (0xDBA * 8 + 5)
#define                                 PWM3TMRH5_bit       _BIT_ACCESS(PWM3TMRH,5)
// PWM3TMRH<PWM3TMRH6>
extern volatile __bit                   PWM3TMRH6           __at(0x6DD6);	// @ (0xDBA * 8 + 6)
#define                                 PWM3TMRH6_bit       _BIT_ACCESS(PWM3TMRH,6)
// PWM3TMRH<PWM3TMRH7>
extern volatile __bit                   PWM3TMRH7           __at(0x6DD7);	// @ (0xDBA * 8 + 7)
#define                                 PWM3TMRH7_bit       _BIT_ACCESS(PWM3TMRH,7)
// PWM3TMRL<PWM3TMRL0>
extern volatile __bit                   PWM3TMRL0           __at(0x6DC8);	// @ (0xDB9 * 8 + 0)
#define                                 PWM3TMRL0_bit       _BIT_ACCESS(PWM3TMRL,0)
// PWM3TMRL<PWM3TMRL1>
extern volatile __bit                   PWM3TMRL1           __at(0x6DC9);	// @ (0xDB9 * 8 + 1)
#define                                 PWM3TMRL1_bit       _BIT_ACCESS(PWM3TMRL,1)
// PWM3TMRL<PWM3TMRL2>
extern volatile __bit                   PWM3TMRL2           __at(0x6DCA);	// @ (0xDB9 * 8 + 2)
#define                                 PWM3TMRL2_bit       _BIT_ACCESS(PWM3TMRL,2)
// PWM3TMRL<PWM3TMRL3>
extern volatile __bit                   PWM3TMRL3           __at(0x6DCB);	// @ (0xDB9 * 8 + 3)
#define                                 PWM3TMRL3_bit       _BIT_ACCESS(PWM3TMRL,3)
// PWM3TMRL<PWM3TMRL4>
extern volatile __bit                   PWM3TMRL4           __at(0x6DCC);	// @ (0xDB9 * 8 + 4)
#define                                 PWM3TMRL4_bit       _BIT_ACCESS(PWM3TMRL,4)
// PWM3TMRL<PWM3TMRL5>
extern volatile __bit                   PWM3TMRL5           __at(0x6DCD);	// @ (0xDB9 * 8 + 5)
#define                                 PWM3TMRL5_bit       _BIT_ACCESS(PWM3TMRL,5)
// PWM3TMRL<PWM3TMRL6>
extern volatile __bit                   PWM3TMRL6           __at(0x6DCE);	// @ (0xDB9 * 8 + 6)
#define                                 PWM3TMRL6_bit       _BIT_ACCESS(PWM3TMRL,6)
// PWM3TMRL<PWM3TMRL7>
extern volatile __bit                   PWM3TMRL7           __at(0x6DCF);	// @ (0xDB9 * 8 + 7)
#define                                 PWM3TMRL7_bit       _BIT_ACCESS(PWM3TMRL,7)
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
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// APFCON<RXDTSEL>
extern volatile __bit                   RXDTSEL             __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 RXDTSEL_bit         _BIT_ACCESS(APFCON,7)
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
// SLRCONA<SLRA0>
extern volatile __bit                   SLRA0               __at(0x1860);	// @ (0x30C * 8 + 0)
#define                                 SLRA0_bit           _BIT_ACCESS(SLRCONA,0)
// SLRCONA<SLRA1>
extern volatile __bit                   SLRA1               __at(0x1861);	// @ (0x30C * 8 + 1)
#define                                 SLRA1_bit           _BIT_ACCESS(SLRCONA,1)
// SLRCONA<SLRA2>
extern volatile __bit                   SLRA2               __at(0x1862);	// @ (0x30C * 8 + 2)
#define                                 SLRA2_bit           _BIT_ACCESS(SLRCONA,2)
// SLRCONA<SLRA4>
extern volatile __bit                   SLRA4               __at(0x1864);	// @ (0x30C * 8 + 4)
#define                                 SLRA4_bit           _BIT_ACCESS(SLRCONA,4)
// SLRCONA<SLRA5>
extern volatile __bit                   SLRA5               __at(0x1865);	// @ (0x30C * 8 + 5)
#define                                 SLRA5_bit           _BIT_ACCESS(SLRCONA,5)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xCEF);	// @ (0x19D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// OSCCON<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCCON,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
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
extern volatile __bit                   T1GSEL              __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 T1GSEL_bit          _BIT_ACCESS(APFCON,3)
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
// APFCON<TXCKSEL>
extern volatile __bit                   TXCKSEL             __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 TXCKSEL_bit         _BIT_ACCESS(APFCON,2)
// TXSTA<TXEN>
extern volatile __bit                   TXEN                __at(0xCF5);	// @ (0x19E * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA,5)
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

#endif // _PIC12LF1572_H_
