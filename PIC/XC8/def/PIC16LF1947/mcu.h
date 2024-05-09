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

#ifndef _PIC16LF1947_H_
#define _PIC16LF1947_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16LF1947
 */
#ifndef _XC_H_
#warning Header file pic16lf1947.h included directly. Use #include <xc.h> instead.
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
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned                        :1;
        unsigned AN4                    :1;
    };
    struct {
        unsigned CPS0                   :1;
        unsigned CPS1                   :1;
        unsigned CPS2                   :1;
        unsigned CPS3                   :1;
        unsigned                        :1;
        unsigned CPS4                   :1;
    };
    struct {
        unsigned SEG33                  :1;
        unsigned SEG18                  :1;
        unsigned SEG34                  :1;
        unsigned SEG35                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
        unsigned SEG36                  :1;
        unsigned SEG37                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
        unsigned T0CKI                  :1;
        unsigned                        :1;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned CLKOUT                 :1;
        unsigned CLKIN                  :1;
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
#define _PORTA_CPS0_POSN                                    0x0
#define _PORTA_CPS0_POSITION                                0x0
#define _PORTA_CPS0_SIZE                                    0x1
#define _PORTA_CPS0_LENGTH                                  0x1
#define _PORTA_CPS0_MASK                                    0x1
#define _PORTA_CPS1_POSN                                    0x1
#define _PORTA_CPS1_POSITION                                0x1
#define _PORTA_CPS1_SIZE                                    0x1
#define _PORTA_CPS1_LENGTH                                  0x1
#define _PORTA_CPS1_MASK                                    0x2
#define _PORTA_CPS2_POSN                                    0x2
#define _PORTA_CPS2_POSITION                                0x2
#define _PORTA_CPS2_SIZE                                    0x1
#define _PORTA_CPS2_LENGTH                                  0x1
#define _PORTA_CPS2_MASK                                    0x4
#define _PORTA_CPS3_POSN                                    0x3
#define _PORTA_CPS3_POSITION                                0x3
#define _PORTA_CPS3_SIZE                                    0x1
#define _PORTA_CPS3_LENGTH                                  0x1
#define _PORTA_CPS3_MASK                                    0x8
#define _PORTA_CPS4_POSN                                    0x5
#define _PORTA_CPS4_POSITION                                0x5
#define _PORTA_CPS4_SIZE                                    0x1
#define _PORTA_CPS4_LENGTH                                  0x1
#define _PORTA_CPS4_MASK                                    0x20
#define _PORTA_SEG33_POSN                                   0x0
#define _PORTA_SEG33_POSITION                               0x0
#define _PORTA_SEG33_SIZE                                   0x1
#define _PORTA_SEG33_LENGTH                                 0x1
#define _PORTA_SEG33_MASK                                   0x1
#define _PORTA_SEG18_POSN                                   0x1
#define _PORTA_SEG18_POSITION                               0x1
#define _PORTA_SEG18_SIZE                                   0x1
#define _PORTA_SEG18_LENGTH                                 0x1
#define _PORTA_SEG18_MASK                                   0x2
#define _PORTA_SEG34_POSN                                   0x2
#define _PORTA_SEG34_POSITION                               0x2
#define _PORTA_SEG34_SIZE                                   0x1
#define _PORTA_SEG34_LENGTH                                 0x1
#define _PORTA_SEG34_MASK                                   0x4
#define _PORTA_SEG35_POSN                                   0x3
#define _PORTA_SEG35_POSITION                               0x3
#define _PORTA_SEG35_SIZE                                   0x1
#define _PORTA_SEG35_LENGTH                                 0x1
#define _PORTA_SEG35_MASK                                   0x8
#define _PORTA_SEG14_POSN                                   0x4
#define _PORTA_SEG14_POSITION                               0x4
#define _PORTA_SEG14_SIZE                                   0x1
#define _PORTA_SEG14_LENGTH                                 0x1
#define _PORTA_SEG14_MASK                                   0x10
#define _PORTA_SEG15_POSN                                   0x5
#define _PORTA_SEG15_POSITION                               0x5
#define _PORTA_SEG15_SIZE                                   0x1
#define _PORTA_SEG15_LENGTH                                 0x1
#define _PORTA_SEG15_MASK                                   0x20
#define _PORTA_SEG36_POSN                                   0x6
#define _PORTA_SEG36_POSITION                               0x6
#define _PORTA_SEG36_SIZE                                   0x1
#define _PORTA_SEG36_LENGTH                                 0x1
#define _PORTA_SEG36_MASK                                   0x40
#define _PORTA_SEG37_POSN                                   0x7
#define _PORTA_SEG37_POSITION                               0x7
#define _PORTA_SEG37_SIZE                                   0x1
#define _PORTA_SEG37_LENGTH                                 0x1
#define _PORTA_SEG37_MASK                                   0x80
#define _PORTA_VREFM_POSN                                   0x2
#define _PORTA_VREFM_POSITION                               0x2
#define _PORTA_VREFM_SIZE                                   0x1
#define _PORTA_VREFM_LENGTH                                 0x1
#define _PORTA_VREFM_MASK                                   0x4
#define _PORTA_VREFP_POSN                                   0x3
#define _PORTA_VREFP_POSITION                               0x3
#define _PORTA_VREFP_SIZE                                   0x1
#define _PORTA_VREFP_LENGTH                                 0x1
#define _PORTA_VREFP_MASK                                   0x8
#define _PORTA_T0CKI_POSN                                   0x4
#define _PORTA_T0CKI_POSITION                               0x4
#define _PORTA_T0CKI_SIZE                                   0x1
#define _PORTA_T0CKI_LENGTH                                 0x1
#define _PORTA_T0CKI_MASK                                   0x10
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
        unsigned SEG30                  :1;
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG29                  :1;
        unsigned SEG38                  :1;
        unsigned SEG39                  :1;
    };
    struct {
        unsigned SRI                    :1;
        unsigned                        :4;
        unsigned T1G                    :1;
    };
    struct {
        unsigned FLT0                   :1;
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
#define _PORTB_SEG30_POSN                                   0x0
#define _PORTB_SEG30_POSITION                               0x0
#define _PORTB_SEG30_SIZE                                   0x1
#define _PORTB_SEG30_LENGTH                                 0x1
#define _PORTB_SEG30_MASK                                   0x1
#define _PORTB_SEG8_POSN                                    0x1
#define _PORTB_SEG8_POSITION                                0x1
#define _PORTB_SEG8_SIZE                                    0x1
#define _PORTB_SEG8_LENGTH                                  0x1
#define _PORTB_SEG8_MASK                                    0x2
#define _PORTB_SEG9_POSN                                    0x2
#define _PORTB_SEG9_POSITION                                0x2
#define _PORTB_SEG9_SIZE                                    0x1
#define _PORTB_SEG9_LENGTH                                  0x1
#define _PORTB_SEG9_MASK                                    0x4
#define _PORTB_SEG10_POSN                                   0x3
#define _PORTB_SEG10_POSITION                               0x3
#define _PORTB_SEG10_SIZE                                   0x1
#define _PORTB_SEG10_LENGTH                                 0x1
#define _PORTB_SEG10_MASK                                   0x8
#define _PORTB_SEG11_POSN                                   0x4
#define _PORTB_SEG11_POSITION                               0x4
#define _PORTB_SEG11_SIZE                                   0x1
#define _PORTB_SEG11_LENGTH                                 0x1
#define _PORTB_SEG11_MASK                                   0x10
#define _PORTB_SEG29_POSN                                   0x5
#define _PORTB_SEG29_POSITION                               0x5
#define _PORTB_SEG29_SIZE                                   0x1
#define _PORTB_SEG29_LENGTH                                 0x1
#define _PORTB_SEG29_MASK                                   0x20
#define _PORTB_SEG38_POSN                                   0x6
#define _PORTB_SEG38_POSITION                               0x6
#define _PORTB_SEG38_SIZE                                   0x1
#define _PORTB_SEG38_LENGTH                                 0x1
#define _PORTB_SEG38_MASK                                   0x40
#define _PORTB_SEG39_POSN                                   0x7
#define _PORTB_SEG39_POSITION                               0x7
#define _PORTB_SEG39_SIZE                                   0x1
#define _PORTB_SEG39_LENGTH                                 0x1
#define _PORTB_SEG39_MASK                                   0x80
#define _PORTB_SRI_POSN                                     0x0
#define _PORTB_SRI_POSITION                                 0x0
#define _PORTB_SRI_SIZE                                     0x1
#define _PORTB_SRI_LENGTH                                   0x1
#define _PORTB_SRI_MASK                                     0x1
#define _PORTB_T1G_POSN                                     0x5
#define _PORTB_T1G_POSITION                                 0x5
#define _PORTB_T1G_SIZE                                     0x1
#define _PORTB_T1G_LENGTH                                   0x1
#define _PORTB_T1G_MASK                                     0x20
#define _PORTB_FLT0_POSN                                    0x0
#define _PORTB_FLT0_POSITION                                0x0
#define _PORTB_FLT0_SIZE                                    0x1
#define _PORTB_FLT0_LENGTH                                  0x1
#define _PORTB_FLT0_MASK                                    0x1

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
        unsigned SEG40                  :1;
        unsigned SEG32                  :1;
        unsigned SEG13                  :1;
        unsigned SEG17                  :1;
        unsigned SEG16                  :1;
        unsigned SEG12                  :1;
        unsigned SEG27                  :1;
        unsigned SEG28                  :1;
    };
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned                        :1;
        unsigned SCK1                   :1;
        unsigned SDI1                   :1;
        unsigned SDO1                   :1;
        unsigned TX1                    :1;
        unsigned RX1                    :1;
    };
    struct {
        unsigned T1CKI                  :1;
        unsigned CCP2                   :1;
        unsigned CCP1                   :1;
        unsigned SCL1                   :1;
        unsigned SDA1                   :1;
        unsigned                        :1;
        unsigned CK1                    :1;
        unsigned DT1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned P2A                    :1;
        unsigned P1A                    :1;
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
#define _PORTC_SEG40_POSN                                   0x0
#define _PORTC_SEG40_POSITION                               0x0
#define _PORTC_SEG40_SIZE                                   0x1
#define _PORTC_SEG40_LENGTH                                 0x1
#define _PORTC_SEG40_MASK                                   0x1
#define _PORTC_SEG32_POSN                                   0x1
#define _PORTC_SEG32_POSITION                               0x1
#define _PORTC_SEG32_SIZE                                   0x1
#define _PORTC_SEG32_LENGTH                                 0x1
#define _PORTC_SEG32_MASK                                   0x2
#define _PORTC_SEG13_POSN                                   0x2
#define _PORTC_SEG13_POSITION                               0x2
#define _PORTC_SEG13_SIZE                                   0x1
#define _PORTC_SEG13_LENGTH                                 0x1
#define _PORTC_SEG13_MASK                                   0x4
#define _PORTC_SEG17_POSN                                   0x3
#define _PORTC_SEG17_POSITION                               0x3
#define _PORTC_SEG17_SIZE                                   0x1
#define _PORTC_SEG17_LENGTH                                 0x1
#define _PORTC_SEG17_MASK                                   0x8
#define _PORTC_SEG16_POSN                                   0x4
#define _PORTC_SEG16_POSITION                               0x4
#define _PORTC_SEG16_SIZE                                   0x1
#define _PORTC_SEG16_LENGTH                                 0x1
#define _PORTC_SEG16_MASK                                   0x10
#define _PORTC_SEG12_POSN                                   0x5
#define _PORTC_SEG12_POSITION                               0x5
#define _PORTC_SEG12_SIZE                                   0x1
#define _PORTC_SEG12_LENGTH                                 0x1
#define _PORTC_SEG12_MASK                                   0x20
#define _PORTC_SEG27_POSN                                   0x6
#define _PORTC_SEG27_POSITION                               0x6
#define _PORTC_SEG27_SIZE                                   0x1
#define _PORTC_SEG27_LENGTH                                 0x1
#define _PORTC_SEG27_MASK                                   0x40
#define _PORTC_SEG28_POSN                                   0x7
#define _PORTC_SEG28_POSITION                               0x7
#define _PORTC_SEG28_SIZE                                   0x1
#define _PORTC_SEG28_LENGTH                                 0x1
#define _PORTC_SEG28_MASK                                   0x80
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
#define _PORTC_SCK1_POSN                                    0x3
#define _PORTC_SCK1_POSITION                                0x3
#define _PORTC_SCK1_SIZE                                    0x1
#define _PORTC_SCK1_LENGTH                                  0x1
#define _PORTC_SCK1_MASK                                    0x8
#define _PORTC_SDI1_POSN                                    0x4
#define _PORTC_SDI1_POSITION                                0x4
#define _PORTC_SDI1_SIZE                                    0x1
#define _PORTC_SDI1_LENGTH                                  0x1
#define _PORTC_SDI1_MASK                                    0x10
#define _PORTC_SDO1_POSN                                    0x5
#define _PORTC_SDO1_POSITION                                0x5
#define _PORTC_SDO1_SIZE                                    0x1
#define _PORTC_SDO1_LENGTH                                  0x1
#define _PORTC_SDO1_MASK                                    0x20
#define _PORTC_TX1_POSN                                     0x6
#define _PORTC_TX1_POSITION                                 0x6
#define _PORTC_TX1_SIZE                                     0x1
#define _PORTC_TX1_LENGTH                                   0x1
#define _PORTC_TX1_MASK                                     0x40
#define _PORTC_RX1_POSN                                     0x7
#define _PORTC_RX1_POSITION                                 0x7
#define _PORTC_RX1_SIZE                                     0x1
#define _PORTC_RX1_LENGTH                                   0x1
#define _PORTC_RX1_MASK                                     0x80
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
#define _PORTC_SCL1_POSN                                    0x3
#define _PORTC_SCL1_POSITION                                0x3
#define _PORTC_SCL1_SIZE                                    0x1
#define _PORTC_SCL1_LENGTH                                  0x1
#define _PORTC_SCL1_MASK                                    0x8
#define _PORTC_SDA1_POSN                                    0x4
#define _PORTC_SDA1_POSITION                                0x4
#define _PORTC_SDA1_SIZE                                    0x1
#define _PORTC_SDA1_LENGTH                                  0x1
#define _PORTC_SDA1_MASK                                    0x10
#define _PORTC_CK1_POSN                                     0x6
#define _PORTC_CK1_POSITION                                 0x6
#define _PORTC_CK1_SIZE                                     0x1
#define _PORTC_CK1_LENGTH                                   0x1
#define _PORTC_CK1_MASK                                     0x40
#define _PORTC_DT1_POSN                                     0x7
#define _PORTC_DT1_POSITION                                 0x7
#define _PORTC_DT1_SIZE                                     0x1
#define _PORTC_DT1_LENGTH                                   0x1
#define _PORTC_DT1_MASK                                     0x80
#define _PORTC_P2A_POSN                                     0x1
#define _PORTC_P2A_POSITION                                 0x1
#define _PORTC_P2A_SIZE                                     0x1
#define _PORTC_P2A_LENGTH                                   0x1
#define _PORTC_P2A_MASK                                     0x2
#define _PORTC_P1A_POSN                                     0x2
#define _PORTC_P1A_POSITION                                 0x2
#define _PORTC_P1A_SIZE                                     0x1
#define _PORTC_P1A_LENGTH                                   0x1
#define _PORTC_P1A_MASK                                     0x4

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
        unsigned P2D                    :1;
        unsigned P2C                    :1;
        unsigned P2B                    :1;
        unsigned P3C                    :1;
        unsigned P3B                    :1;
        unsigned P1C                    :1;
        unsigned P1B                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned SDO2                   :1;
        unsigned SDI2                   :1;
        unsigned SCK2                   :1;
        unsigned nSS2                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SDA2                   :1;
        unsigned SCL2                   :1;
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
#define _PORTD_SEG0_POSN                                    0x0
#define _PORTD_SEG0_POSITION                                0x0
#define _PORTD_SEG0_SIZE                                    0x1
#define _PORTD_SEG0_LENGTH                                  0x1
#define _PORTD_SEG0_MASK                                    0x1
#define _PORTD_SEG1_POSN                                    0x1
#define _PORTD_SEG1_POSITION                                0x1
#define _PORTD_SEG1_SIZE                                    0x1
#define _PORTD_SEG1_LENGTH                                  0x1
#define _PORTD_SEG1_MASK                                    0x2
#define _PORTD_SEG2_POSN                                    0x2
#define _PORTD_SEG2_POSITION                                0x2
#define _PORTD_SEG2_SIZE                                    0x1
#define _PORTD_SEG2_LENGTH                                  0x1
#define _PORTD_SEG2_MASK                                    0x4
#define _PORTD_SEG3_POSN                                    0x3
#define _PORTD_SEG3_POSITION                                0x3
#define _PORTD_SEG3_SIZE                                    0x1
#define _PORTD_SEG3_LENGTH                                  0x1
#define _PORTD_SEG3_MASK                                    0x8
#define _PORTD_SEG4_POSN                                    0x4
#define _PORTD_SEG4_POSITION                                0x4
#define _PORTD_SEG4_SIZE                                    0x1
#define _PORTD_SEG4_LENGTH                                  0x1
#define _PORTD_SEG4_MASK                                    0x10
#define _PORTD_SEG5_POSN                                    0x5
#define _PORTD_SEG5_POSITION                                0x5
#define _PORTD_SEG5_SIZE                                    0x1
#define _PORTD_SEG5_LENGTH                                  0x1
#define _PORTD_SEG5_MASK                                    0x20
#define _PORTD_SEG6_POSN                                    0x6
#define _PORTD_SEG6_POSITION                                0x6
#define _PORTD_SEG6_SIZE                                    0x1
#define _PORTD_SEG6_LENGTH                                  0x1
#define _PORTD_SEG6_MASK                                    0x40
#define _PORTD_SEG7_POSN                                    0x7
#define _PORTD_SEG7_POSITION                                0x7
#define _PORTD_SEG7_SIZE                                    0x1
#define _PORTD_SEG7_LENGTH                                  0x1
#define _PORTD_SEG7_MASK                                    0x80
#define _PORTD_P2D_POSN                                     0x0
#define _PORTD_P2D_POSITION                                 0x0
#define _PORTD_P2D_SIZE                                     0x1
#define _PORTD_P2D_LENGTH                                   0x1
#define _PORTD_P2D_MASK                                     0x1
#define _PORTD_P2C_POSN                                     0x1
#define _PORTD_P2C_POSITION                                 0x1
#define _PORTD_P2C_SIZE                                     0x1
#define _PORTD_P2C_LENGTH                                   0x1
#define _PORTD_P2C_MASK                                     0x2
#define _PORTD_P2B_POSN                                     0x2
#define _PORTD_P2B_POSITION                                 0x2
#define _PORTD_P2B_SIZE                                     0x1
#define _PORTD_P2B_LENGTH                                   0x1
#define _PORTD_P2B_MASK                                     0x4
#define _PORTD_P3C_POSN                                     0x3
#define _PORTD_P3C_POSITION                                 0x3
#define _PORTD_P3C_SIZE                                     0x1
#define _PORTD_P3C_LENGTH                                   0x1
#define _PORTD_P3C_MASK                                     0x8
#define _PORTD_P3B_POSN                                     0x4
#define _PORTD_P3B_POSITION                                 0x4
#define _PORTD_P3B_SIZE                                     0x1
#define _PORTD_P3B_LENGTH                                   0x1
#define _PORTD_P3B_MASK                                     0x10
#define _PORTD_P1C_POSN                                     0x5
#define _PORTD_P1C_POSITION                                 0x5
#define _PORTD_P1C_SIZE                                     0x1
#define _PORTD_P1C_LENGTH                                   0x1
#define _PORTD_P1C_MASK                                     0x20
#define _PORTD_P1B_POSN                                     0x6
#define _PORTD_P1B_POSITION                                 0x6
#define _PORTD_P1B_SIZE                                     0x1
#define _PORTD_P1B_LENGTH                                   0x1
#define _PORTD_P1B_MASK                                     0x40
#define _PORTD_SDO2_POSN                                    0x4
#define _PORTD_SDO2_POSITION                                0x4
#define _PORTD_SDO2_SIZE                                    0x1
#define _PORTD_SDO2_LENGTH                                  0x1
#define _PORTD_SDO2_MASK                                    0x10
#define _PORTD_SDI2_POSN                                    0x5
#define _PORTD_SDI2_POSITION                                0x5
#define _PORTD_SDI2_SIZE                                    0x1
#define _PORTD_SDI2_LENGTH                                  0x1
#define _PORTD_SDI2_MASK                                    0x20
#define _PORTD_SCK2_POSN                                    0x6
#define _PORTD_SCK2_POSITION                                0x6
#define _PORTD_SCK2_SIZE                                    0x1
#define _PORTD_SCK2_LENGTH                                  0x1
#define _PORTD_SCK2_MASK                                    0x40
#define _PORTD_nSS2_POSN                                    0x7
#define _PORTD_nSS2_POSITION                                0x7
#define _PORTD_nSS2_SIZE                                    0x1
#define _PORTD_nSS2_LENGTH                                  0x1
#define _PORTD_nSS2_MASK                                    0x80
#define _PORTD_SDA2_POSN                                    0x5
#define _PORTD_SDA2_POSITION                                0x5
#define _PORTD_SDA2_SIZE                                    0x1
#define _PORTD_SDA2_LENGTH                                  0x1
#define _PORTD_SDA2_MASK                                    0x20
#define _PORTD_SCL2_POSN                                    0x6
#define _PORTD_SCL2_POSITION                                0x6
#define _PORTD_SCL2_SIZE                                    0x1
#define _PORTD_SCL2_LENGTH                                  0x1
#define _PORTD_SCL2_MASK                                    0x40

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
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
    struct {
        unsigned VLCD1                  :1;
        unsigned VLCD2                  :1;
        unsigned VLCD3                  :1;
        unsigned COM0                   :1;
        unsigned COM1                   :1;
        unsigned COM2                   :1;
        unsigned COM3                   :1;
        unsigned SEG31                  :1;
    };
    struct {
        unsigned P2D                    :1;
        unsigned P2C                    :1;
        unsigned P2B                    :1;
        unsigned P3C                    :1;
        unsigned P3B                    :1;
        unsigned P1C                    :1;
        unsigned P1B                    :1;
        unsigned P2A                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned CCP2                   :1;
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
#define _PORTE_VLCD1_POSN                                   0x0
#define _PORTE_VLCD1_POSITION                               0x0
#define _PORTE_VLCD1_SIZE                                   0x1
#define _PORTE_VLCD1_LENGTH                                 0x1
#define _PORTE_VLCD1_MASK                                   0x1
#define _PORTE_VLCD2_POSN                                   0x1
#define _PORTE_VLCD2_POSITION                               0x1
#define _PORTE_VLCD2_SIZE                                   0x1
#define _PORTE_VLCD2_LENGTH                                 0x1
#define _PORTE_VLCD2_MASK                                   0x2
#define _PORTE_VLCD3_POSN                                   0x2
#define _PORTE_VLCD3_POSITION                               0x2
#define _PORTE_VLCD3_SIZE                                   0x1
#define _PORTE_VLCD3_LENGTH                                 0x1
#define _PORTE_VLCD3_MASK                                   0x4
#define _PORTE_COM0_POSN                                    0x3
#define _PORTE_COM0_POSITION                                0x3
#define _PORTE_COM0_SIZE                                    0x1
#define _PORTE_COM0_LENGTH                                  0x1
#define _PORTE_COM0_MASK                                    0x8
#define _PORTE_COM1_POSN                                    0x4
#define _PORTE_COM1_POSITION                                0x4
#define _PORTE_COM1_SIZE                                    0x1
#define _PORTE_COM1_LENGTH                                  0x1
#define _PORTE_COM1_MASK                                    0x10
#define _PORTE_COM2_POSN                                    0x5
#define _PORTE_COM2_POSITION                                0x5
#define _PORTE_COM2_SIZE                                    0x1
#define _PORTE_COM2_LENGTH                                  0x1
#define _PORTE_COM2_MASK                                    0x20
#define _PORTE_COM3_POSN                                    0x6
#define _PORTE_COM3_POSITION                                0x6
#define _PORTE_COM3_SIZE                                    0x1
#define _PORTE_COM3_LENGTH                                  0x1
#define _PORTE_COM3_MASK                                    0x40
#define _PORTE_SEG31_POSN                                   0x7
#define _PORTE_SEG31_POSITION                               0x7
#define _PORTE_SEG31_SIZE                                   0x1
#define _PORTE_SEG31_LENGTH                                 0x1
#define _PORTE_SEG31_MASK                                   0x80
#define _PORTE_P2D_POSN                                     0x0
#define _PORTE_P2D_POSITION                                 0x0
#define _PORTE_P2D_SIZE                                     0x1
#define _PORTE_P2D_LENGTH                                   0x1
#define _PORTE_P2D_MASK                                     0x1
#define _PORTE_P2C_POSN                                     0x1
#define _PORTE_P2C_POSITION                                 0x1
#define _PORTE_P2C_SIZE                                     0x1
#define _PORTE_P2C_LENGTH                                   0x1
#define _PORTE_P2C_MASK                                     0x2
#define _PORTE_P2B_POSN                                     0x2
#define _PORTE_P2B_POSITION                                 0x2
#define _PORTE_P2B_SIZE                                     0x1
#define _PORTE_P2B_LENGTH                                   0x1
#define _PORTE_P2B_MASK                                     0x4
#define _PORTE_P3C_POSN                                     0x3
#define _PORTE_P3C_POSITION                                 0x3
#define _PORTE_P3C_SIZE                                     0x1
#define _PORTE_P3C_LENGTH                                   0x1
#define _PORTE_P3C_MASK                                     0x8
#define _PORTE_P3B_POSN                                     0x4
#define _PORTE_P3B_POSITION                                 0x4
#define _PORTE_P3B_SIZE                                     0x1
#define _PORTE_P3B_LENGTH                                   0x1
#define _PORTE_P3B_MASK                                     0x10
#define _PORTE_P1C_POSN                                     0x5
#define _PORTE_P1C_POSITION                                 0x5
#define _PORTE_P1C_SIZE                                     0x1
#define _PORTE_P1C_LENGTH                                   0x1
#define _PORTE_P1C_MASK                                     0x20
#define _PORTE_P1B_POSN                                     0x6
#define _PORTE_P1B_POSITION                                 0x6
#define _PORTE_P1B_SIZE                                     0x1
#define _PORTE_P1B_LENGTH                                   0x1
#define _PORTE_P1B_MASK                                     0x40
#define _PORTE_P2A_POSN                                     0x7
#define _PORTE_P2A_POSITION                                 0x7
#define _PORTE_P2A_SIZE                                     0x1
#define _PORTE_P2A_LENGTH                                   0x1
#define _PORTE_P2A_MASK                                     0x80
#define _PORTE_CCP2_POSN                                    0x7
#define _PORTE_CCP2_POSITION                                0x7
#define _PORTE_CCP2_SIZE                                    0x1
#define _PORTE_CCP2_LENGTH                                  0x1
#define _PORTE_CCP2_MASK                                    0x80

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
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
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
#define _PIR1_TX1IF_POSN                                    0x4
#define _PIR1_TX1IF_POSITION                                0x4
#define _PIR1_TX1IF_SIZE                                    0x1
#define _PIR1_TX1IF_LENGTH                                  0x1
#define _PIR1_TX1IF_MASK                                    0x10
#define _PIR1_RC1IF_POSN                                    0x5
#define _PIR1_RC1IF_POSITION                                0x5
#define _PIR1_RC1IF_SIZE                                    0x1
#define _PIR1_RC1IF_LENGTH                                  0x1
#define _PIR1_RC1IF_MASK                                    0x20
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
#define _PIR2_C3IF_POSN                                     0x1
#define _PIR2_C3IF_POSITION                                 0x1
#define _PIR2_C3IF_SIZE                                     0x1
#define _PIR2_C3IF_LENGTH                                   0x1
#define _PIR2_C3IF_MASK                                     0x2
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

// Register: PIR4
#define PIR4 PIR4
extern volatile unsigned char           PIR4                __at(0x014);
#ifndef _LIB_BUILD
asm("PIR4 equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2IF                 :1;
        unsigned BCL2IF                 :1;
        unsigned                        :2;
        unsigned TX2IF                  :1;
        unsigned RC2IF                  :1;
    };
} PIR4bits_t;
extern volatile PIR4bits_t PIR4bits __at(0x014);
// bitfield macros
#define _PIR4_SSP2IF_POSN                                   0x0
#define _PIR4_SSP2IF_POSITION                               0x0
#define _PIR4_SSP2IF_SIZE                                   0x1
#define _PIR4_SSP2IF_LENGTH                                 0x1
#define _PIR4_SSP2IF_MASK                                   0x1
#define _PIR4_BCL2IF_POSN                                   0x1
#define _PIR4_BCL2IF_POSITION                               0x1
#define _PIR4_BCL2IF_SIZE                                   0x1
#define _PIR4_BCL2IF_LENGTH                                 0x1
#define _PIR4_BCL2IF_MASK                                   0x2
#define _PIR4_TX2IF_POSN                                    0x4
#define _PIR4_TX2IF_POSITION                                0x4
#define _PIR4_TX2IF_SIZE                                    0x1
#define _PIR4_TX2IF_LENGTH                                  0x1
#define _PIR4_TX2IF_MASK                                    0x10
#define _PIR4_RC2IF_POSN                                    0x5
#define _PIR4_RC2IF_POSITION                                0x5
#define _PIR4_RC2IF_SIZE                                    0x1
#define _PIR4_RC2IF_LENGTH                                  0x1
#define _PIR4_RC2IF_MASK                                    0x20

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
        unsigned                        :2;
        unsigned CPSRM                  :1;
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
#define _CPSCON0_CPSRM_POSN                                 0x6
#define _CPSCON0_CPSRM_POSITION                             0x6
#define _CPSCON0_CPSRM_SIZE                                 0x1
#define _CPSCON0_CPSRM_LENGTH                               0x1
#define _CPSCON0_CPSRM_MASK                                 0x40
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
        unsigned CPSCH                  :5;
    };
    struct {
        unsigned CPSCH0                 :1;
        unsigned CPSCH1                 :1;
        unsigned CPSCH2                 :1;
        unsigned CPSCH3                 :1;
        unsigned CPSCH4                 :1;
    };
} CPSCON1bits_t;
extern volatile CPSCON1bits_t CPSCON1bits __at(0x01F);
// bitfield macros
#define _CPSCON1_CPSCH_POSN                                 0x0
#define _CPSCON1_CPSCH_POSITION                             0x0
#define _CPSCON1_CPSCH_SIZE                                 0x5
#define _CPSCON1_CPSCH_LENGTH                               0x5
#define _CPSCON1_CPSCH_MASK                                 0x1F
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
#define _CPSCON1_CPSCH3_POSN                                0x3
#define _CPSCON1_CPSCH3_POSITION                            0x3
#define _CPSCON1_CPSCH3_SIZE                                0x1
#define _CPSCON1_CPSCH3_LENGTH                              0x1
#define _CPSCON1_CPSCH3_MASK                                0x8
#define _CPSCON1_CPSCH4_POSN                                0x4
#define _CPSCON1_CPSCH4_POSITION                            0x4
#define _CPSCON1_CPSCH4_SIZE                                0x1
#define _CPSCON1_CPSCH4_LENGTH                              0x1
#define _CPSCON1_CPSCH4_MASK                                0x10

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
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
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
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
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
#define _PIE1_TX1IE_POSN                                    0x4
#define _PIE1_TX1IE_POSITION                                0x4
#define _PIE1_TX1IE_SIZE                                    0x1
#define _PIE1_TX1IE_LENGTH                                  0x1
#define _PIE1_TX1IE_MASK                                    0x10
#define _PIE1_RC1IE_POSN                                    0x5
#define _PIE1_RC1IE_POSITION                                0x5
#define _PIE1_RC1IE_SIZE                                    0x1
#define _PIE1_RC1IE_LENGTH                                  0x1
#define _PIE1_RC1IE_MASK                                    0x20
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
#define _PIE2_C3IE_POSN                                     0x1
#define _PIE2_C3IE_POSITION                                 0x1
#define _PIE2_C3IE_SIZE                                     0x1
#define _PIE2_C3IE_LENGTH                                   0x1
#define _PIE2_C3IE_MASK                                     0x2
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

// Register: PIE4
#define PIE4 PIE4
extern volatile unsigned char           PIE4                __at(0x094);
#ifndef _LIB_BUILD
asm("PIE4 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP2IE                 :1;
        unsigned BCL2IE                 :1;
        unsigned                        :2;
        unsigned TX2IE                  :1;
        unsigned RC2IE                  :1;
    };
} PIE4bits_t;
extern volatile PIE4bits_t PIE4bits __at(0x094);
// bitfield macros
#define _PIE4_SSP2IE_POSN                                   0x0
#define _PIE4_SSP2IE_POSITION                               0x0
#define _PIE4_SSP2IE_SIZE                                   0x1
#define _PIE4_SSP2IE_LENGTH                                 0x1
#define _PIE4_SSP2IE_MASK                                   0x1
#define _PIE4_BCL2IE_POSN                                   0x1
#define _PIE4_BCL2IE_POSITION                               0x1
#define _PIE4_BCL2IE_SIZE                                   0x1
#define _PIE4_BCL2IE_LENGTH                                 0x1
#define _PIE4_BCL2IE_MASK                                   0x2
#define _PIE4_TX2IE_POSN                                    0x4
#define _PIE4_TX2IE_POSITION                                0x4
#define _PIE4_TX2IE_SIZE                                    0x1
#define _PIE4_TX2IE_LENGTH                                  0x1
#define _PIE4_TX2IE_MASK                                    0x10
#define _PIE4_RC2IE_POSN                                    0x5
#define _PIE4_RC2IE_POSITION                                0x5
#define _PIE4_RC2IE_SIZE                                    0x1
#define _PIE4_RC2IE_LENGTH                                  0x1
#define _PIE4_RC2IE_MASK                                    0x20

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
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned INTEDG                 :1;
        unsigned nWPUEN                 :1;
    };
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
        unsigned                        :1;
        unsigned TMR0SE                 :1;
        unsigned TMR0CS                 :1;
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
    struct {
        unsigned LATD                   :8;
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
#define _LATD_LATD_POSN                                     0x0
#define _LATD_LATD_POSITION                                 0x0
#define _LATD_LATD_SIZE                                     0x8
#define _LATD_LATD_LENGTH                                   0x8
#define _LATD_LATD_MASK                                     0xFF

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
        unsigned LATE3                  :1;
        unsigned LATE4                  :1;
        unsigned LATE5                  :1;
        unsigned LATE6                  :1;
        unsigned LATE7                  :1;
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
#define _LATE_LATE3_POSN                                    0x3
#define _LATE_LATE3_POSITION                                0x3
#define _LATE_LATE3_SIZE                                    0x1
#define _LATE_LATE3_LENGTH                                  0x1
#define _LATE_LATE3_MASK                                    0x8
#define _LATE_LATE4_POSN                                    0x4
#define _LATE_LATE4_POSITION                                0x4
#define _LATE_LATE4_SIZE                                    0x1
#define _LATE_LATE4_LENGTH                                  0x1
#define _LATE_LATE4_MASK                                    0x10
#define _LATE_LATE5_POSN                                    0x5
#define _LATE_LATE5_POSITION                                0x5
#define _LATE_LATE5_SIZE                                    0x1
#define _LATE_LATE5_LENGTH                                  0x1
#define _LATE_LATE5_MASK                                    0x20
#define _LATE_LATE6_POSN                                    0x6
#define _LATE_LATE6_POSITION                                0x6
#define _LATE_LATE6_SIZE                                    0x1
#define _LATE_LATE6_LENGTH                                  0x1
#define _LATE_LATE6_MASK                                    0x40
#define _LATE_LATE7_POSN                                    0x7
#define _LATE_LATE7_POSITION                                0x7
#define _LATE_LATE7_SIZE                                    0x1
#define _LATE_LATE7_LENGTH                                  0x1
#define _LATE_LATE7_MASK                                    0x80

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
        unsigned P1BSEL                 :1;
        unsigned P1CSEL                 :1;
        unsigned CCP2SEL                :1;
        unsigned P2BSEL                 :1;
        unsigned P2CSEL                 :1;
        unsigned P2DSEL                 :1;
        unsigned P3BSEL                 :1;
        unsigned P3CSEL                 :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x11D);
// bitfield macros
#define _APFCON_P1BSEL_POSN                                 0x0
#define _APFCON_P1BSEL_POSITION                             0x0
#define _APFCON_P1BSEL_SIZE                                 0x1
#define _APFCON_P1BSEL_LENGTH                               0x1
#define _APFCON_P1BSEL_MASK                                 0x1
#define _APFCON_P1CSEL_POSN                                 0x1
#define _APFCON_P1CSEL_POSITION                             0x1
#define _APFCON_P1CSEL_SIZE                                 0x1
#define _APFCON_P1CSEL_LENGTH                               0x1
#define _APFCON_P1CSEL_MASK                                 0x2
#define _APFCON_CCP2SEL_POSN                                0x2
#define _APFCON_CCP2SEL_POSITION                            0x2
#define _APFCON_CCP2SEL_SIZE                                0x1
#define _APFCON_CCP2SEL_LENGTH                              0x1
#define _APFCON_CCP2SEL_MASK                                0x4
#define _APFCON_P2BSEL_POSN                                 0x3
#define _APFCON_P2BSEL_POSITION                             0x3
#define _APFCON_P2BSEL_SIZE                                 0x1
#define _APFCON_P2BSEL_LENGTH                               0x1
#define _APFCON_P2BSEL_MASK                                 0x8
#define _APFCON_P2CSEL_POSN                                 0x4
#define _APFCON_P2CSEL_POSITION                             0x4
#define _APFCON_P2CSEL_SIZE                                 0x1
#define _APFCON_P2CSEL_LENGTH                               0x1
#define _APFCON_P2CSEL_MASK                                 0x10
#define _APFCON_P2DSEL_POSN                                 0x5
#define _APFCON_P2DSEL_POSITION                             0x5
#define _APFCON_P2DSEL_SIZE                                 0x1
#define _APFCON_P2DSEL_LENGTH                               0x1
#define _APFCON_P2DSEL_MASK                                 0x20
#define _APFCON_P3BSEL_POSN                                 0x6
#define _APFCON_P3BSEL_POSITION                             0x6
#define _APFCON_P3BSEL_SIZE                                 0x1
#define _APFCON_P3BSEL_LENGTH                               0x1
#define _APFCON_P3BSEL_MASK                                 0x40
#define _APFCON_P3CSEL_POSN                                 0x7
#define _APFCON_P3CSEL_POSITION                             0x7
#define _APFCON_P3CSEL_SIZE                                 0x1
#define _APFCON_P3CSEL_LENGTH                               0x1
#define _APFCON_P3CSEL_MASK                                 0x80

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
        unsigned                        :1;
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
        unsigned C3NCH                  :2;
        unsigned                        :2;
        unsigned C3PCH                  :2;
        unsigned C3INTN                 :1;
        unsigned C3INTP                 :1;
    };
    struct {
        unsigned C3NCH0                 :1;
        unsigned C3NCH1                 :1;
        unsigned                        :2;
        unsigned C3PCH0                 :1;
        unsigned C3PCH1                 :1;
    };
} CM3CON1bits_t;
extern volatile CM3CON1bits_t CM3CON1bits __at(0x11F);
// bitfield macros
#define _CM3CON1_C3NCH_POSN                                 0x0
#define _CM3CON1_C3NCH_POSITION                             0x0
#define _CM3CON1_C3NCH_SIZE                                 0x2
#define _CM3CON1_C3NCH_LENGTH                               0x2
#define _CM3CON1_C3NCH_MASK                                 0x3
#define _CM3CON1_C3PCH_POSN                                 0x4
#define _CM3CON1_C3PCH_POSITION                             0x4
#define _CM3CON1_C3PCH_SIZE                                 0x2
#define _CM3CON1_C3PCH_LENGTH                               0x2
#define _CM3CON1_C3PCH_MASK                                 0x30
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
#define _CM3CON1_C3PCH0_POSN                                0x4
#define _CM3CON1_C3PCH0_POSITION                            0x4
#define _CM3CON1_C3PCH0_SIZE                                0x1
#define _CM3CON1_C3PCH0_LENGTH                              0x1
#define _CM3CON1_C3PCH0_MASK                                0x10
#define _CM3CON1_C3PCH1_POSN                                0x5
#define _CM3CON1_C3PCH1_POSITION                            0x5
#define _CM3CON1_C3PCH1_SIZE                                0x1
#define _CM3CON1_C3PCH1_LENGTH                              0x1
#define _CM3CON1_C3PCH1_MASK                                0x20

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
        unsigned ANSELE                 :3;
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
#define _ANSELE_ANSELE_SIZE                                 0x3
#define _ANSELE_ANSELE_LENGTH                               0x3
#define _ANSELE_ANSELE_MASK                                 0x7

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
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG                  :8;
    };
} RC1REGbits_t;
extern volatile RC1REGbits_t RC1REGbits __at(0x199);
// bitfield macros
#define _RC1REG_RCREG_POSN                                  0x0
#define _RC1REG_RCREG_POSITION                              0x0
#define _RC1REG_RCREG_SIZE                                  0x8
#define _RC1REG_RCREG_LENGTH                                0x8
#define _RC1REG_RCREG_MASK                                  0xFF
// alias bitfield definitions
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

// Register: TX1REG
#define TX1REG TX1REG
extern volatile unsigned char           TX1REG              __at(0x19A);
#ifndef _LIB_BUILD
asm("TX1REG equ 019Ah");
#endif
// aliases
extern volatile unsigned char           TXREG               __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG                  :8;
    };
} TX1REGbits_t;
extern volatile TX1REGbits_t TX1REGbits __at(0x19A);
// bitfield macros
#define _TX1REG_TXREG_POSN                                  0x0
#define _TX1REG_TXREG_POSITION                              0x0
#define _TX1REG_TXREG_SIZE                                  0x8
#define _TX1REG_TXREG_LENGTH                                0x8
#define _TX1REG_TXREG_MASK                                  0xFF
// alias bitfield definitions
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

// Register: RC1STA
#define RC1STA RC1STA
extern volatile unsigned char           RC1STA              __at(0x19D);
#ifndef _LIB_BUILD
asm("RC1STA equ 019Dh");
#endif
// aliases
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
// alias bitfield definitions
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
// alias bitfield definitions
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
// alias bitfield definitions
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

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
extern volatile unsigned char           SSP2BUF             __at(0x219);
#ifndef _LIB_BUILD
asm("SSP2BUF equ 0219h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP2BUFbits_t;
extern volatile SSP2BUFbits_t SSP2BUFbits __at(0x219);
// bitfield macros
#define _SSP2BUF_SSPBUF_POSN                                0x0
#define _SSP2BUF_SSPBUF_POSITION                            0x0
#define _SSP2BUF_SSPBUF_SIZE                                0x8
#define _SSP2BUF_SSPBUF_LENGTH                              0x8
#define _SSP2BUF_SSPBUF_MASK                                0xFF

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
extern volatile unsigned char           SSP2ADD             __at(0x21A);
#ifndef _LIB_BUILD
asm("SSP2ADD equ 021Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSP2ADDbits_t;
extern volatile SSP2ADDbits_t SSP2ADDbits __at(0x21A);
// bitfield macros
#define _SSP2ADD_SSPADD_POSN                                0x0
#define _SSP2ADD_SSPADD_POSITION                            0x0
#define _SSP2ADD_SSPADD_SIZE                                0x8
#define _SSP2ADD_SSPADD_LENGTH                              0x8
#define _SSP2ADD_SSPADD_MASK                                0xFF

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
extern volatile unsigned char           SSP2MSK             __at(0x21B);
#ifndef _LIB_BUILD
asm("SSP2MSK equ 021Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSP2MSKbits_t;
extern volatile SSP2MSKbits_t SSP2MSKbits __at(0x21B);
// bitfield macros
#define _SSP2MSK_SSPMSK_POSN                                0x0
#define _SSP2MSK_SSPMSK_POSITION                            0x0
#define _SSP2MSK_SSPMSK_SIZE                                0x8
#define _SSP2MSK_SSPMSK_LENGTH                              0x8
#define _SSP2MSK_SSPMSK_MASK                                0xFF

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

// Register: PORTF
#define PORTF PORTF
extern volatile unsigned char           PORTF               __at(0x28C);
#ifndef _LIB_BUILD
asm("PORTF equ 028Ch");
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
    struct {
        unsigned AN16                   :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN10                   :1;
        unsigned AN11                   :1;
        unsigned AN5                    :1;
    };
    struct {
        unsigned SEG41                  :1;
        unsigned SEG19                  :1;
        unsigned SEG20                  :1;
        unsigned SEG21                  :1;
        unsigned SEG22                  :1;
        unsigned SEG23                  :1;
        unsigned SEG24                  :1;
        unsigned SEG25                  :1;
    };
    struct {
        unsigned CPS16                  :1;
        unsigned CPS6                   :1;
        unsigned CPS7                   :1;
        unsigned CPS8                   :1;
        unsigned CPS9                   :1;
        unsigned CPS10                  :1;
        unsigned CPS11                  :1;
        unsigned CPS5                   :1;
    };
    struct {
        unsigned C1IN0N                 :1;
        unsigned C2OUT                  :1;
        unsigned C1OUT                  :1;
        unsigned C1IN2N                 :1;
        unsigned C2INP                  :1;
        unsigned C1IN1N                 :1;
        unsigned C1INP                  :1;
        unsigned C1IN3N                 :1;
    };
    struct {
        unsigned C2IN0N                 :1;
        unsigned SRNQ                   :1;
        unsigned SRQ                    :1;
        unsigned C2IN2N                 :1;
        unsigned                        :1;
        unsigned C2IN1N                 :1;
        unsigned                        :1;
        unsigned C2IN3N                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned C3IN2N                 :1;
        unsigned                        :1;
        unsigned DACOUT                 :1;
        unsigned                        :1;
        unsigned C3IN3N                 :1;
    };
} PORTFbits_t;
extern volatile PORTFbits_t PORTFbits __at(0x28C);
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
#define _PORTF_AN16_POSN                                    0x0
#define _PORTF_AN16_POSITION                                0x0
#define _PORTF_AN16_SIZE                                    0x1
#define _PORTF_AN16_LENGTH                                  0x1
#define _PORTF_AN16_MASK                                    0x1
#define _PORTF_AN6_POSN                                     0x1
#define _PORTF_AN6_POSITION                                 0x1
#define _PORTF_AN6_SIZE                                     0x1
#define _PORTF_AN6_LENGTH                                   0x1
#define _PORTF_AN6_MASK                                     0x2
#define _PORTF_AN7_POSN                                     0x2
#define _PORTF_AN7_POSITION                                 0x2
#define _PORTF_AN7_SIZE                                     0x1
#define _PORTF_AN7_LENGTH                                   0x1
#define _PORTF_AN7_MASK                                     0x4
#define _PORTF_AN8_POSN                                     0x3
#define _PORTF_AN8_POSITION                                 0x3
#define _PORTF_AN8_SIZE                                     0x1
#define _PORTF_AN8_LENGTH                                   0x1
#define _PORTF_AN8_MASK                                     0x8
#define _PORTF_AN9_POSN                                     0x4
#define _PORTF_AN9_POSITION                                 0x4
#define _PORTF_AN9_SIZE                                     0x1
#define _PORTF_AN9_LENGTH                                   0x1
#define _PORTF_AN9_MASK                                     0x10
#define _PORTF_AN10_POSN                                    0x5
#define _PORTF_AN10_POSITION                                0x5
#define _PORTF_AN10_SIZE                                    0x1
#define _PORTF_AN10_LENGTH                                  0x1
#define _PORTF_AN10_MASK                                    0x20
#define _PORTF_AN11_POSN                                    0x6
#define _PORTF_AN11_POSITION                                0x6
#define _PORTF_AN11_SIZE                                    0x1
#define _PORTF_AN11_LENGTH                                  0x1
#define _PORTF_AN11_MASK                                    0x40
#define _PORTF_AN5_POSN                                     0x7
#define _PORTF_AN5_POSITION                                 0x7
#define _PORTF_AN5_SIZE                                     0x1
#define _PORTF_AN5_LENGTH                                   0x1
#define _PORTF_AN5_MASK                                     0x80
#define _PORTF_SEG41_POSN                                   0x0
#define _PORTF_SEG41_POSITION                               0x0
#define _PORTF_SEG41_SIZE                                   0x1
#define _PORTF_SEG41_LENGTH                                 0x1
#define _PORTF_SEG41_MASK                                   0x1
#define _PORTF_SEG19_POSN                                   0x1
#define _PORTF_SEG19_POSITION                               0x1
#define _PORTF_SEG19_SIZE                                   0x1
#define _PORTF_SEG19_LENGTH                                 0x1
#define _PORTF_SEG19_MASK                                   0x2
#define _PORTF_SEG20_POSN                                   0x2
#define _PORTF_SEG20_POSITION                               0x2
#define _PORTF_SEG20_SIZE                                   0x1
#define _PORTF_SEG20_LENGTH                                 0x1
#define _PORTF_SEG20_MASK                                   0x4
#define _PORTF_SEG21_POSN                                   0x3
#define _PORTF_SEG21_POSITION                               0x3
#define _PORTF_SEG21_SIZE                                   0x1
#define _PORTF_SEG21_LENGTH                                 0x1
#define _PORTF_SEG21_MASK                                   0x8
#define _PORTF_SEG22_POSN                                   0x4
#define _PORTF_SEG22_POSITION                               0x4
#define _PORTF_SEG22_SIZE                                   0x1
#define _PORTF_SEG22_LENGTH                                 0x1
#define _PORTF_SEG22_MASK                                   0x10
#define _PORTF_SEG23_POSN                                   0x5
#define _PORTF_SEG23_POSITION                               0x5
#define _PORTF_SEG23_SIZE                                   0x1
#define _PORTF_SEG23_LENGTH                                 0x1
#define _PORTF_SEG23_MASK                                   0x20
#define _PORTF_SEG24_POSN                                   0x6
#define _PORTF_SEG24_POSITION                               0x6
#define _PORTF_SEG24_SIZE                                   0x1
#define _PORTF_SEG24_LENGTH                                 0x1
#define _PORTF_SEG24_MASK                                   0x40
#define _PORTF_SEG25_POSN                                   0x7
#define _PORTF_SEG25_POSITION                               0x7
#define _PORTF_SEG25_SIZE                                   0x1
#define _PORTF_SEG25_LENGTH                                 0x1
#define _PORTF_SEG25_MASK                                   0x80
#define _PORTF_CPS16_POSN                                   0x0
#define _PORTF_CPS16_POSITION                               0x0
#define _PORTF_CPS16_SIZE                                   0x1
#define _PORTF_CPS16_LENGTH                                 0x1
#define _PORTF_CPS16_MASK                                   0x1
#define _PORTF_CPS6_POSN                                    0x1
#define _PORTF_CPS6_POSITION                                0x1
#define _PORTF_CPS6_SIZE                                    0x1
#define _PORTF_CPS6_LENGTH                                  0x1
#define _PORTF_CPS6_MASK                                    0x2
#define _PORTF_CPS7_POSN                                    0x2
#define _PORTF_CPS7_POSITION                                0x2
#define _PORTF_CPS7_SIZE                                    0x1
#define _PORTF_CPS7_LENGTH                                  0x1
#define _PORTF_CPS7_MASK                                    0x4
#define _PORTF_CPS8_POSN                                    0x3
#define _PORTF_CPS8_POSITION                                0x3
#define _PORTF_CPS8_SIZE                                    0x1
#define _PORTF_CPS8_LENGTH                                  0x1
#define _PORTF_CPS8_MASK                                    0x8
#define _PORTF_CPS9_POSN                                    0x4
#define _PORTF_CPS9_POSITION                                0x4
#define _PORTF_CPS9_SIZE                                    0x1
#define _PORTF_CPS9_LENGTH                                  0x1
#define _PORTF_CPS9_MASK                                    0x10
#define _PORTF_CPS10_POSN                                   0x5
#define _PORTF_CPS10_POSITION                               0x5
#define _PORTF_CPS10_SIZE                                   0x1
#define _PORTF_CPS10_LENGTH                                 0x1
#define _PORTF_CPS10_MASK                                   0x20
#define _PORTF_CPS11_POSN                                   0x6
#define _PORTF_CPS11_POSITION                               0x6
#define _PORTF_CPS11_SIZE                                   0x1
#define _PORTF_CPS11_LENGTH                                 0x1
#define _PORTF_CPS11_MASK                                   0x40
#define _PORTF_CPS5_POSN                                    0x7
#define _PORTF_CPS5_POSITION                                0x7
#define _PORTF_CPS5_SIZE                                    0x1
#define _PORTF_CPS5_LENGTH                                  0x1
#define _PORTF_CPS5_MASK                                    0x80
#define _PORTF_C1IN0N_POSN                                  0x0
#define _PORTF_C1IN0N_POSITION                              0x0
#define _PORTF_C1IN0N_SIZE                                  0x1
#define _PORTF_C1IN0N_LENGTH                                0x1
#define _PORTF_C1IN0N_MASK                                  0x1
#define _PORTF_C2OUT_POSN                                   0x1
#define _PORTF_C2OUT_POSITION                               0x1
#define _PORTF_C2OUT_SIZE                                   0x1
#define _PORTF_C2OUT_LENGTH                                 0x1
#define _PORTF_C2OUT_MASK                                   0x2
#define _PORTF_C1OUT_POSN                                   0x2
#define _PORTF_C1OUT_POSITION                               0x2
#define _PORTF_C1OUT_SIZE                                   0x1
#define _PORTF_C1OUT_LENGTH                                 0x1
#define _PORTF_C1OUT_MASK                                   0x4
#define _PORTF_C1IN2N_POSN                                  0x3
#define _PORTF_C1IN2N_POSITION                              0x3
#define _PORTF_C1IN2N_SIZE                                  0x1
#define _PORTF_C1IN2N_LENGTH                                0x1
#define _PORTF_C1IN2N_MASK                                  0x8
#define _PORTF_C2INP_POSN                                   0x4
#define _PORTF_C2INP_POSITION                               0x4
#define _PORTF_C2INP_SIZE                                   0x1
#define _PORTF_C2INP_LENGTH                                 0x1
#define _PORTF_C2INP_MASK                                   0x10
#define _PORTF_C1IN1N_POSN                                  0x5
#define _PORTF_C1IN1N_POSITION                              0x5
#define _PORTF_C1IN1N_SIZE                                  0x1
#define _PORTF_C1IN1N_LENGTH                                0x1
#define _PORTF_C1IN1N_MASK                                  0x20
#define _PORTF_C1INP_POSN                                   0x6
#define _PORTF_C1INP_POSITION                               0x6
#define _PORTF_C1INP_SIZE                                   0x1
#define _PORTF_C1INP_LENGTH                                 0x1
#define _PORTF_C1INP_MASK                                   0x40
#define _PORTF_C1IN3N_POSN                                  0x7
#define _PORTF_C1IN3N_POSITION                              0x7
#define _PORTF_C1IN3N_SIZE                                  0x1
#define _PORTF_C1IN3N_LENGTH                                0x1
#define _PORTF_C1IN3N_MASK                                  0x80
#define _PORTF_C2IN0N_POSN                                  0x0
#define _PORTF_C2IN0N_POSITION                              0x0
#define _PORTF_C2IN0N_SIZE                                  0x1
#define _PORTF_C2IN0N_LENGTH                                0x1
#define _PORTF_C2IN0N_MASK                                  0x1
#define _PORTF_SRNQ_POSN                                    0x1
#define _PORTF_SRNQ_POSITION                                0x1
#define _PORTF_SRNQ_SIZE                                    0x1
#define _PORTF_SRNQ_LENGTH                                  0x1
#define _PORTF_SRNQ_MASK                                    0x2
#define _PORTF_SRQ_POSN                                     0x2
#define _PORTF_SRQ_POSITION                                 0x2
#define _PORTF_SRQ_SIZE                                     0x1
#define _PORTF_SRQ_LENGTH                                   0x1
#define _PORTF_SRQ_MASK                                     0x4
#define _PORTF_C2IN2N_POSN                                  0x3
#define _PORTF_C2IN2N_POSITION                              0x3
#define _PORTF_C2IN2N_SIZE                                  0x1
#define _PORTF_C2IN2N_LENGTH                                0x1
#define _PORTF_C2IN2N_MASK                                  0x8
#define _PORTF_C2IN1N_POSN                                  0x5
#define _PORTF_C2IN1N_POSITION                              0x5
#define _PORTF_C2IN1N_SIZE                                  0x1
#define _PORTF_C2IN1N_LENGTH                                0x1
#define _PORTF_C2IN1N_MASK                                  0x20
#define _PORTF_C2IN3N_POSN                                  0x7
#define _PORTF_C2IN3N_POSITION                              0x7
#define _PORTF_C2IN3N_SIZE                                  0x1
#define _PORTF_C2IN3N_LENGTH                                0x1
#define _PORTF_C2IN3N_MASK                                  0x80
#define _PORTF_C3IN2N_POSN                                  0x3
#define _PORTF_C3IN2N_POSITION                              0x3
#define _PORTF_C3IN2N_SIZE                                  0x1
#define _PORTF_C3IN2N_LENGTH                                0x1
#define _PORTF_C3IN2N_MASK                                  0x8
#define _PORTF_DACOUT_POSN                                  0x5
#define _PORTF_DACOUT_POSITION                              0x5
#define _PORTF_DACOUT_SIZE                                  0x1
#define _PORTF_DACOUT_LENGTH                                0x1
#define _PORTF_DACOUT_MASK                                  0x20
#define _PORTF_C3IN3N_POSN                                  0x7
#define _PORTF_C3IN3N_POSITION                              0x7
#define _PORTF_C3IN3N_SIZE                                  0x1
#define _PORTF_C3IN3N_LENGTH                                0x1
#define _PORTF_C3IN3N_MASK                                  0x80

// Register: PORTG
#define PORTG PORTG
extern volatile unsigned char           PORTG               __at(0x28D);
#ifndef _LIB_BUILD
asm("PORTG equ 028Dh");
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
    };
    struct {
        unsigned                        :1;
        unsigned AN15                   :1;
        unsigned AN14                   :1;
        unsigned AN13                   :1;
        unsigned AN12                   :1;
        unsigned nMCLR                  :1;
    };
    struct {
        unsigned SEG42                  :1;
        unsigned SEG43                  :1;
        unsigned SEG44                  :1;
        unsigned SEG45                  :1;
        unsigned SEG26                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned CPS15                  :1;
        unsigned CPS14                  :1;
        unsigned CPS13                  :1;
        unsigned CPS12                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned C3OUT                  :1;
        unsigned C3INP                  :1;
        unsigned C3IN0N                 :1;
        unsigned C3IN1N                 :1;
    };
    struct {
        unsigned CCP3                   :1;
        unsigned TX2                    :1;
        unsigned RX2                    :1;
        unsigned CCP4                   :1;
        unsigned CCP5                   :1;
    };
    struct {
        unsigned P3A                    :1;
        unsigned CK2                    :1;
        unsigned DT2                    :1;
        unsigned P3D                    :1;
        unsigned P1D                    :1;
    };
} PORTGbits_t;
extern volatile PORTGbits_t PORTGbits __at(0x28D);
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
#define _PORTG_AN15_POSN                                    0x1
#define _PORTG_AN15_POSITION                                0x1
#define _PORTG_AN15_SIZE                                    0x1
#define _PORTG_AN15_LENGTH                                  0x1
#define _PORTG_AN15_MASK                                    0x2
#define _PORTG_AN14_POSN                                    0x2
#define _PORTG_AN14_POSITION                                0x2
#define _PORTG_AN14_SIZE                                    0x1
#define _PORTG_AN14_LENGTH                                  0x1
#define _PORTG_AN14_MASK                                    0x4
#define _PORTG_AN13_POSN                                    0x3
#define _PORTG_AN13_POSITION                                0x3
#define _PORTG_AN13_SIZE                                    0x1
#define _PORTG_AN13_LENGTH                                  0x1
#define _PORTG_AN13_MASK                                    0x8
#define _PORTG_AN12_POSN                                    0x4
#define _PORTG_AN12_POSITION                                0x4
#define _PORTG_AN12_SIZE                                    0x1
#define _PORTG_AN12_LENGTH                                  0x1
#define _PORTG_AN12_MASK                                    0x10
#define _PORTG_nMCLR_POSN                                   0x5
#define _PORTG_nMCLR_POSITION                               0x5
#define _PORTG_nMCLR_SIZE                                   0x1
#define _PORTG_nMCLR_LENGTH                                 0x1
#define _PORTG_nMCLR_MASK                                   0x20
#define _PORTG_SEG42_POSN                                   0x0
#define _PORTG_SEG42_POSITION                               0x0
#define _PORTG_SEG42_SIZE                                   0x1
#define _PORTG_SEG42_LENGTH                                 0x1
#define _PORTG_SEG42_MASK                                   0x1
#define _PORTG_SEG43_POSN                                   0x1
#define _PORTG_SEG43_POSITION                               0x1
#define _PORTG_SEG43_SIZE                                   0x1
#define _PORTG_SEG43_LENGTH                                 0x1
#define _PORTG_SEG43_MASK                                   0x2
#define _PORTG_SEG44_POSN                                   0x2
#define _PORTG_SEG44_POSITION                               0x2
#define _PORTG_SEG44_SIZE                                   0x1
#define _PORTG_SEG44_LENGTH                                 0x1
#define _PORTG_SEG44_MASK                                   0x4
#define _PORTG_SEG45_POSN                                   0x3
#define _PORTG_SEG45_POSITION                               0x3
#define _PORTG_SEG45_SIZE                                   0x1
#define _PORTG_SEG45_LENGTH                                 0x1
#define _PORTG_SEG45_MASK                                   0x8
#define _PORTG_SEG26_POSN                                   0x4
#define _PORTG_SEG26_POSITION                               0x4
#define _PORTG_SEG26_SIZE                                   0x1
#define _PORTG_SEG26_LENGTH                                 0x1
#define _PORTG_SEG26_MASK                                   0x10
#define _PORTG_CPS15_POSN                                   0x1
#define _PORTG_CPS15_POSITION                               0x1
#define _PORTG_CPS15_SIZE                                   0x1
#define _PORTG_CPS15_LENGTH                                 0x1
#define _PORTG_CPS15_MASK                                   0x2
#define _PORTG_CPS14_POSN                                   0x2
#define _PORTG_CPS14_POSITION                               0x2
#define _PORTG_CPS14_SIZE                                   0x1
#define _PORTG_CPS14_LENGTH                                 0x1
#define _PORTG_CPS14_MASK                                   0x4
#define _PORTG_CPS13_POSN                                   0x3
#define _PORTG_CPS13_POSITION                               0x3
#define _PORTG_CPS13_SIZE                                   0x1
#define _PORTG_CPS13_LENGTH                                 0x1
#define _PORTG_CPS13_MASK                                   0x8
#define _PORTG_CPS12_POSN                                   0x4
#define _PORTG_CPS12_POSITION                               0x4
#define _PORTG_CPS12_SIZE                                   0x1
#define _PORTG_CPS12_LENGTH                                 0x1
#define _PORTG_CPS12_MASK                                   0x10
#define _PORTG_C3OUT_POSN                                   0x1
#define _PORTG_C3OUT_POSITION                               0x1
#define _PORTG_C3OUT_SIZE                                   0x1
#define _PORTG_C3OUT_LENGTH                                 0x1
#define _PORTG_C3OUT_MASK                                   0x2
#define _PORTG_C3INP_POSN                                   0x2
#define _PORTG_C3INP_POSITION                               0x2
#define _PORTG_C3INP_SIZE                                   0x1
#define _PORTG_C3INP_LENGTH                                 0x1
#define _PORTG_C3INP_MASK                                   0x4
#define _PORTG_C3IN0N_POSN                                  0x3
#define _PORTG_C3IN0N_POSITION                              0x3
#define _PORTG_C3IN0N_SIZE                                  0x1
#define _PORTG_C3IN0N_LENGTH                                0x1
#define _PORTG_C3IN0N_MASK                                  0x8
#define _PORTG_C3IN1N_POSN                                  0x4
#define _PORTG_C3IN1N_POSITION                              0x4
#define _PORTG_C3IN1N_SIZE                                  0x1
#define _PORTG_C3IN1N_LENGTH                                0x1
#define _PORTG_C3IN1N_MASK                                  0x10
#define _PORTG_CCP3_POSN                                    0x0
#define _PORTG_CCP3_POSITION                                0x0
#define _PORTG_CCP3_SIZE                                    0x1
#define _PORTG_CCP3_LENGTH                                  0x1
#define _PORTG_CCP3_MASK                                    0x1
#define _PORTG_TX2_POSN                                     0x1
#define _PORTG_TX2_POSITION                                 0x1
#define _PORTG_TX2_SIZE                                     0x1
#define _PORTG_TX2_LENGTH                                   0x1
#define _PORTG_TX2_MASK                                     0x2
#define _PORTG_RX2_POSN                                     0x2
#define _PORTG_RX2_POSITION                                 0x2
#define _PORTG_RX2_SIZE                                     0x1
#define _PORTG_RX2_LENGTH                                   0x1
#define _PORTG_RX2_MASK                                     0x4
#define _PORTG_CCP4_POSN                                    0x3
#define _PORTG_CCP4_POSITION                                0x3
#define _PORTG_CCP4_SIZE                                    0x1
#define _PORTG_CCP4_LENGTH                                  0x1
#define _PORTG_CCP4_MASK                                    0x8
#define _PORTG_CCP5_POSN                                    0x4
#define _PORTG_CCP5_POSITION                                0x4
#define _PORTG_CCP5_SIZE                                    0x1
#define _PORTG_CCP5_LENGTH                                  0x1
#define _PORTG_CCP5_MASK                                    0x10
#define _PORTG_P3A_POSN                                     0x0
#define _PORTG_P3A_POSITION                                 0x0
#define _PORTG_P3A_SIZE                                     0x1
#define _PORTG_P3A_LENGTH                                   0x1
#define _PORTG_P3A_MASK                                     0x1
#define _PORTG_CK2_POSN                                     0x1
#define _PORTG_CK2_POSITION                                 0x1
#define _PORTG_CK2_SIZE                                     0x1
#define _PORTG_CK2_LENGTH                                   0x1
#define _PORTG_CK2_MASK                                     0x2
#define _PORTG_DT2_POSN                                     0x2
#define _PORTG_DT2_POSITION                                 0x2
#define _PORTG_DT2_SIZE                                     0x1
#define _PORTG_DT2_LENGTH                                   0x1
#define _PORTG_DT2_MASK                                     0x4
#define _PORTG_P3D_POSN                                     0x3
#define _PORTG_P3D_POSITION                                 0x3
#define _PORTG_P3D_SIZE                                     0x1
#define _PORTG_P3D_LENGTH                                   0x1
#define _PORTG_P3D_MASK                                     0x8
#define _PORTG_P1D_POSN                                     0x4
#define _PORTG_P1D_POSITION                                 0x4
#define _PORTG_P1D_SIZE                                     0x1
#define _PORTG_P1D_LENGTH                                   0x1
#define _PORTG_P1D_MASK                                     0x10

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

// Register: TRISF
#define TRISF TRISF
extern volatile unsigned char           TRISF               __at(0x30C);
#ifndef _LIB_BUILD
asm("TRISF equ 030Ch");
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
extern volatile TRISFbits_t TRISFbits __at(0x30C);
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
extern volatile unsigned char           TRISG               __at(0x30D);
#ifndef _LIB_BUILD
asm("TRISG equ 030Dh");
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
    };
} TRISGbits_t;
extern volatile TRISGbits_t TRISGbits __at(0x30D);
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
        unsigned CCP3M                  :4;
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
#define _CCP3CON_CCP3M_POSN                                 0x0
#define _CCP3CON_CCP3M_POSITION                             0x0
#define _CCP3CON_CCP3M_SIZE                                 0x4
#define _CCP3CON_CCP3M_LENGTH                               0x4
#define _CCP3CON_CCP3M_MASK                                 0xF
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

// Register: LATF
#define LATF LATF
extern volatile unsigned char           LATF                __at(0x38C);
#ifndef _LIB_BUILD
asm("LATF equ 038Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATF0                  :1;
        unsigned LATF1                  :1;
        unsigned LATF2                  :1;
        unsigned LATF3                  :1;
        unsigned LATF4                  :1;
        unsigned LATF5                  :1;
        unsigned LATF6                  :1;
        unsigned LATF7                  :1;
    };
} LATFbits_t;
extern volatile LATFbits_t LATFbits __at(0x38C);
// bitfield macros
#define _LATF_LATF0_POSN                                    0x0
#define _LATF_LATF0_POSITION                                0x0
#define _LATF_LATF0_SIZE                                    0x1
#define _LATF_LATF0_LENGTH                                  0x1
#define _LATF_LATF0_MASK                                    0x1
#define _LATF_LATF1_POSN                                    0x1
#define _LATF_LATF1_POSITION                                0x1
#define _LATF_LATF1_SIZE                                    0x1
#define _LATF_LATF1_LENGTH                                  0x1
#define _LATF_LATF1_MASK                                    0x2
#define _LATF_LATF2_POSN                                    0x2
#define _LATF_LATF2_POSITION                                0x2
#define _LATF_LATF2_SIZE                                    0x1
#define _LATF_LATF2_LENGTH                                  0x1
#define _LATF_LATF2_MASK                                    0x4
#define _LATF_LATF3_POSN                                    0x3
#define _LATF_LATF3_POSITION                                0x3
#define _LATF_LATF3_SIZE                                    0x1
#define _LATF_LATF3_LENGTH                                  0x1
#define _LATF_LATF3_MASK                                    0x8
#define _LATF_LATF4_POSN                                    0x4
#define _LATF_LATF4_POSITION                                0x4
#define _LATF_LATF4_SIZE                                    0x1
#define _LATF_LATF4_LENGTH                                  0x1
#define _LATF_LATF4_MASK                                    0x10
#define _LATF_LATF5_POSN                                    0x5
#define _LATF_LATF5_POSITION                                0x5
#define _LATF_LATF5_SIZE                                    0x1
#define _LATF_LATF5_LENGTH                                  0x1
#define _LATF_LATF5_MASK                                    0x20
#define _LATF_LATF6_POSN                                    0x6
#define _LATF_LATF6_POSITION                                0x6
#define _LATF_LATF6_SIZE                                    0x1
#define _LATF_LATF6_LENGTH                                  0x1
#define _LATF_LATF6_MASK                                    0x40
#define _LATF_LATF7_POSN                                    0x7
#define _LATF_LATF7_POSITION                                0x7
#define _LATF_LATF7_SIZE                                    0x1
#define _LATF_LATF7_LENGTH                                  0x1
#define _LATF_LATF7_MASK                                    0x80

// Register: LATG
#define LATG LATG
extern volatile unsigned char           LATG                __at(0x38D);
#ifndef _LIB_BUILD
asm("LATG equ 038Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATG0                  :1;
        unsigned LATG1                  :1;
        unsigned LATG2                  :1;
        unsigned LATG3                  :1;
        unsigned LATG4                  :1;
        unsigned LATG5                  :1;
    };
} LATGbits_t;
extern volatile LATGbits_t LATGbits __at(0x38D);
// bitfield macros
#define _LATG_LATG0_POSN                                    0x0
#define _LATG_LATG0_POSITION                                0x0
#define _LATG_LATG0_SIZE                                    0x1
#define _LATG_LATG0_LENGTH                                  0x1
#define _LATG_LATG0_MASK                                    0x1
#define _LATG_LATG1_POSN                                    0x1
#define _LATG_LATG1_POSITION                                0x1
#define _LATG_LATG1_SIZE                                    0x1
#define _LATG_LATG1_LENGTH                                  0x1
#define _LATG_LATG1_MASK                                    0x2
#define _LATG_LATG2_POSN                                    0x2
#define _LATG_LATG2_POSITION                                0x2
#define _LATG_LATG2_SIZE                                    0x1
#define _LATG_LATG2_LENGTH                                  0x1
#define _LATG_LATG2_MASK                                    0x4
#define _LATG_LATG3_POSN                                    0x3
#define _LATG_LATG3_POSITION                                0x3
#define _LATG_LATG3_SIZE                                    0x1
#define _LATG_LATG3_LENGTH                                  0x1
#define _LATG_LATG3_MASK                                    0x8
#define _LATG_LATG4_POSN                                    0x4
#define _LATG_LATG4_POSITION                                0x4
#define _LATG_LATG4_SIZE                                    0x1
#define _LATG_LATG4_LENGTH                                  0x1
#define _LATG_LATG4_MASK                                    0x10
#define _LATG_LATG5_POSN                                    0x5
#define _LATG_LATG5_POSITION                                0x5
#define _LATG_LATG5_SIZE                                    0x1
#define _LATG_LATG5_LENGTH                                  0x1
#define _LATG_LATG5_MASK                                    0x20

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

// Register: ANSELF
#define ANSELF ANSELF
extern volatile unsigned char           ANSELF              __at(0x40C);
#ifndef _LIB_BUILD
asm("ANSELF equ 040Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSF0                  :1;
        unsigned ANSF1                  :1;
        unsigned ANSF2                  :1;
        unsigned ANSF3                  :1;
        unsigned ANSF4                  :1;
        unsigned ANSF5                  :1;
        unsigned ANSF6                  :1;
        unsigned ANSF7                  :1;
    };
    struct {
        unsigned ANSELF                 :8;
    };
} ANSELFbits_t;
extern volatile ANSELFbits_t ANSELFbits __at(0x40C);
// bitfield macros
#define _ANSELF_ANSF0_POSN                                  0x0
#define _ANSELF_ANSF0_POSITION                              0x0
#define _ANSELF_ANSF0_SIZE                                  0x1
#define _ANSELF_ANSF0_LENGTH                                0x1
#define _ANSELF_ANSF0_MASK                                  0x1
#define _ANSELF_ANSF1_POSN                                  0x1
#define _ANSELF_ANSF1_POSITION                              0x1
#define _ANSELF_ANSF1_SIZE                                  0x1
#define _ANSELF_ANSF1_LENGTH                                0x1
#define _ANSELF_ANSF1_MASK                                  0x2
#define _ANSELF_ANSF2_POSN                                  0x2
#define _ANSELF_ANSF2_POSITION                              0x2
#define _ANSELF_ANSF2_SIZE                                  0x1
#define _ANSELF_ANSF2_LENGTH                                0x1
#define _ANSELF_ANSF2_MASK                                  0x4
#define _ANSELF_ANSF3_POSN                                  0x3
#define _ANSELF_ANSF3_POSITION                              0x3
#define _ANSELF_ANSF3_SIZE                                  0x1
#define _ANSELF_ANSF3_LENGTH                                0x1
#define _ANSELF_ANSF3_MASK                                  0x8
#define _ANSELF_ANSF4_POSN                                  0x4
#define _ANSELF_ANSF4_POSITION                              0x4
#define _ANSELF_ANSF4_SIZE                                  0x1
#define _ANSELF_ANSF4_LENGTH                                0x1
#define _ANSELF_ANSF4_MASK                                  0x10
#define _ANSELF_ANSF5_POSN                                  0x5
#define _ANSELF_ANSF5_POSITION                              0x5
#define _ANSELF_ANSF5_SIZE                                  0x1
#define _ANSELF_ANSF5_LENGTH                                0x1
#define _ANSELF_ANSF5_MASK                                  0x20
#define _ANSELF_ANSF6_POSN                                  0x6
#define _ANSELF_ANSF6_POSITION                              0x6
#define _ANSELF_ANSF6_SIZE                                  0x1
#define _ANSELF_ANSF6_LENGTH                                0x1
#define _ANSELF_ANSF6_MASK                                  0x40
#define _ANSELF_ANSF7_POSN                                  0x7
#define _ANSELF_ANSF7_POSITION                              0x7
#define _ANSELF_ANSF7_SIZE                                  0x1
#define _ANSELF_ANSF7_LENGTH                                0x1
#define _ANSELF_ANSF7_MASK                                  0x80
#define _ANSELF_ANSELF_POSN                                 0x0
#define _ANSELF_ANSELF_POSITION                             0x0
#define _ANSELF_ANSELF_SIZE                                 0x8
#define _ANSELF_ANSELF_LENGTH                               0x8
#define _ANSELF_ANSELF_MASK                                 0xFF

// Register: ANSELG
#define ANSELG ANSELG
extern volatile unsigned char           ANSELG              __at(0x40D);
#ifndef _LIB_BUILD
asm("ANSELG equ 040Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ANSG1                  :1;
        unsigned ANSG2                  :1;
        unsigned ANSG3                  :1;
        unsigned ANSG4                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned ANSELG                 :4;
    };
} ANSELGbits_t;
extern volatile ANSELGbits_t ANSELGbits __at(0x40D);
// bitfield macros
#define _ANSELG_ANSG1_POSN                                  0x1
#define _ANSELG_ANSG1_POSITION                              0x1
#define _ANSELG_ANSG1_SIZE                                  0x1
#define _ANSELG_ANSG1_LENGTH                                0x1
#define _ANSELG_ANSG1_MASK                                  0x2
#define _ANSELG_ANSG2_POSN                                  0x2
#define _ANSELG_ANSG2_POSITION                              0x2
#define _ANSELG_ANSG2_SIZE                                  0x1
#define _ANSELG_ANSG2_LENGTH                                0x1
#define _ANSELG_ANSG2_MASK                                  0x4
#define _ANSELG_ANSG3_POSN                                  0x3
#define _ANSELG_ANSG3_POSITION                              0x3
#define _ANSELG_ANSG3_SIZE                                  0x1
#define _ANSELG_ANSG3_LENGTH                                0x1
#define _ANSELG_ANSG3_MASK                                  0x8
#define _ANSELG_ANSG4_POSN                                  0x4
#define _ANSELG_ANSG4_POSITION                              0x4
#define _ANSELG_ANSG4_SIZE                                  0x1
#define _ANSELG_ANSG4_LENGTH                                0x1
#define _ANSELG_ANSG4_MASK                                  0x10
#define _ANSELG_ANSELG_POSN                                 0x1
#define _ANSELG_ANSELG_POSITION                             0x1
#define _ANSELG_ANSELG_SIZE                                 0x4
#define _ANSELG_ANSELG_LENGTH                               0x4
#define _ANSELG_ANSELG_MASK                                 0x1E

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

// Register: WPUG
#define WPUG WPUG
extern volatile unsigned char           WPUG                __at(0x48D);
#ifndef _LIB_BUILD
asm("WPUG equ 048Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned WPUG5                  :1;
    };
} WPUGbits_t;
extern volatile WPUGbits_t WPUGbits __at(0x48D);
// bitfield macros
#define _WPUG_WPUG5_POSN                                    0x5
#define _WPUG_WPUG5_POSITION                                0x5
#define _WPUG_WPUG5_SIZE                                    0x1
#define _WPUG_WPUG5_LENGTH                                  0x1
#define _WPUG_WPUG5_MASK                                    0x20

// Register: RC2REG
#define RC2REG RC2REG
extern volatile unsigned char           RC2REG              __at(0x491);
#ifndef _LIB_BUILD
asm("RC2REG equ 0491h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG                  :8;
    };
} RC2REGbits_t;
extern volatile RC2REGbits_t RC2REGbits __at(0x491);
// bitfield macros
#define _RC2REG_RCREG_POSN                                  0x0
#define _RC2REG_RCREG_POSITION                              0x0
#define _RC2REG_RCREG_SIZE                                  0x8
#define _RC2REG_RCREG_LENGTH                                0x8
#define _RC2REG_RCREG_MASK                                  0xFF

// Register: TX2REG
#define TX2REG TX2REG
extern volatile unsigned char           TX2REG              __at(0x492);
#ifndef _LIB_BUILD
asm("TX2REG equ 0492h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG                  :8;
    };
} TX2REGbits_t;
extern volatile TX2REGbits_t TX2REGbits __at(0x492);
// bitfield macros
#define _TX2REG_TXREG_POSN                                  0x0
#define _TX2REG_TXREG_POSITION                              0x0
#define _TX2REG_TXREG_SIZE                                  0x8
#define _TX2REG_TXREG_LENGTH                                0x8
#define _TX2REG_TXREG_MASK                                  0xFF

// Register: SP2BRGL
#define SP2BRGL SP2BRGL
extern volatile unsigned char           SP2BRGL             __at(0x493);
#ifndef _LIB_BUILD
asm("SP2BRGL equ 0493h");
#endif
// aliases
extern volatile unsigned char           SPBRG2              __at(0x493);
#ifndef _LIB_BUILD
asm("SPBRG2 equ 0493h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SP2BRGLbits_t;
extern volatile SP2BRGLbits_t SP2BRGLbits __at(0x493);
// bitfield macros
#define _SP2BRGL_SPBRGL_POSN                                0x0
#define _SP2BRGL_SPBRGL_POSITION                            0x0
#define _SP2BRGL_SPBRGL_SIZE                                0x8
#define _SP2BRGL_SPBRGL_LENGTH                              0x8
#define _SP2BRGL_SPBRGL_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SPBRG2bits_t;
extern volatile SPBRG2bits_t SPBRG2bits __at(0x493);
// bitfield macros
#define _SPBRG2_SPBRGL_POSN                                 0x0
#define _SPBRG2_SPBRGL_POSITION                             0x0
#define _SPBRG2_SPBRGL_SIZE                                 0x8
#define _SPBRG2_SPBRGL_LENGTH                               0x8
#define _SPBRG2_SPBRGL_MASK                                 0xFF

// Register: SP2BRGH
#define SP2BRGH SP2BRGH
extern volatile unsigned char           SP2BRGH             __at(0x494);
#ifndef _LIB_BUILD
asm("SP2BRGH equ 0494h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH                 :8;
    };
} SP2BRGHbits_t;
extern volatile SP2BRGHbits_t SP2BRGHbits __at(0x494);
// bitfield macros
#define _SP2BRGH_SPBRGH_POSN                                0x0
#define _SP2BRGH_SPBRGH_POSITION                            0x0
#define _SP2BRGH_SPBRGH_SIZE                                0x8
#define _SP2BRGH_SPBRGH_LENGTH                              0x8
#define _SP2BRGH_SPBRGH_MASK                                0xFF

// Register: RC2STA
#define RC2STA RC2STA
extern volatile unsigned char           RC2STA              __at(0x495);
#ifndef _LIB_BUILD
asm("RC2STA equ 0495h");
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
} RC2STAbits_t;
extern volatile RC2STAbits_t RC2STAbits __at(0x495);
// bitfield macros
#define _RC2STA_RX9D_POSN                                   0x0
#define _RC2STA_RX9D_POSITION                               0x0
#define _RC2STA_RX9D_SIZE                                   0x1
#define _RC2STA_RX9D_LENGTH                                 0x1
#define _RC2STA_RX9D_MASK                                   0x1
#define _RC2STA_OERR_POSN                                   0x1
#define _RC2STA_OERR_POSITION                               0x1
#define _RC2STA_OERR_SIZE                                   0x1
#define _RC2STA_OERR_LENGTH                                 0x1
#define _RC2STA_OERR_MASK                                   0x2
#define _RC2STA_FERR_POSN                                   0x2
#define _RC2STA_FERR_POSITION                               0x2
#define _RC2STA_FERR_SIZE                                   0x1
#define _RC2STA_FERR_LENGTH                                 0x1
#define _RC2STA_FERR_MASK                                   0x4
#define _RC2STA_ADDEN_POSN                                  0x3
#define _RC2STA_ADDEN_POSITION                              0x3
#define _RC2STA_ADDEN_SIZE                                  0x1
#define _RC2STA_ADDEN_LENGTH                                0x1
#define _RC2STA_ADDEN_MASK                                  0x8
#define _RC2STA_CREN_POSN                                   0x4
#define _RC2STA_CREN_POSITION                               0x4
#define _RC2STA_CREN_SIZE                                   0x1
#define _RC2STA_CREN_LENGTH                                 0x1
#define _RC2STA_CREN_MASK                                   0x10
#define _RC2STA_SREN_POSN                                   0x5
#define _RC2STA_SREN_POSITION                               0x5
#define _RC2STA_SREN_SIZE                                   0x1
#define _RC2STA_SREN_LENGTH                                 0x1
#define _RC2STA_SREN_MASK                                   0x20
#define _RC2STA_RX9_POSN                                    0x6
#define _RC2STA_RX9_POSITION                                0x6
#define _RC2STA_RX9_SIZE                                    0x1
#define _RC2STA_RX9_LENGTH                                  0x1
#define _RC2STA_RX9_MASK                                    0x40
#define _RC2STA_SPEN_POSN                                   0x7
#define _RC2STA_SPEN_POSITION                               0x7
#define _RC2STA_SPEN_SIZE                                   0x1
#define _RC2STA_SPEN_LENGTH                                 0x1
#define _RC2STA_SPEN_MASK                                   0x80

// Register: TX2STA
#define TX2STA TX2STA
extern volatile unsigned char           TX2STA              __at(0x496);
#ifndef _LIB_BUILD
asm("TX2STA equ 0496h");
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
} TX2STAbits_t;
extern volatile TX2STAbits_t TX2STAbits __at(0x496);
// bitfield macros
#define _TX2STA_TX9D_POSN                                   0x0
#define _TX2STA_TX9D_POSITION                               0x0
#define _TX2STA_TX9D_SIZE                                   0x1
#define _TX2STA_TX9D_LENGTH                                 0x1
#define _TX2STA_TX9D_MASK                                   0x1
#define _TX2STA_TRMT_POSN                                   0x1
#define _TX2STA_TRMT_POSITION                               0x1
#define _TX2STA_TRMT_SIZE                                   0x1
#define _TX2STA_TRMT_LENGTH                                 0x1
#define _TX2STA_TRMT_MASK                                   0x2
#define _TX2STA_BRGH_POSN                                   0x2
#define _TX2STA_BRGH_POSITION                               0x2
#define _TX2STA_BRGH_SIZE                                   0x1
#define _TX2STA_BRGH_LENGTH                                 0x1
#define _TX2STA_BRGH_MASK                                   0x4
#define _TX2STA_SENDB_POSN                                  0x3
#define _TX2STA_SENDB_POSITION                              0x3
#define _TX2STA_SENDB_SIZE                                  0x1
#define _TX2STA_SENDB_LENGTH                                0x1
#define _TX2STA_SENDB_MASK                                  0x8
#define _TX2STA_SYNC_POSN                                   0x4
#define _TX2STA_SYNC_POSITION                               0x4
#define _TX2STA_SYNC_SIZE                                   0x1
#define _TX2STA_SYNC_LENGTH                                 0x1
#define _TX2STA_SYNC_MASK                                   0x10
#define _TX2STA_TXEN_POSN                                   0x5
#define _TX2STA_TXEN_POSITION                               0x5
#define _TX2STA_TXEN_SIZE                                   0x1
#define _TX2STA_TXEN_LENGTH                                 0x1
#define _TX2STA_TXEN_MASK                                   0x20
#define _TX2STA_TX9_POSN                                    0x6
#define _TX2STA_TX9_POSITION                                0x6
#define _TX2STA_TX9_SIZE                                    0x1
#define _TX2STA_TX9_LENGTH                                  0x1
#define _TX2STA_TX9_MASK                                    0x40
#define _TX2STA_CSRC_POSN                                   0x7
#define _TX2STA_CSRC_POSITION                               0x7
#define _TX2STA_CSRC_SIZE                                   0x1
#define _TX2STA_CSRC_LENGTH                                 0x1
#define _TX2STA_CSRC_MASK                                   0x80

// Register: BAUD2CON
#define BAUD2CON BAUD2CON
extern volatile unsigned char           BAUD2CON            __at(0x497);
#ifndef _LIB_BUILD
asm("BAUD2CON equ 0497h");
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
} BAUD2CONbits_t;
extern volatile BAUD2CONbits_t BAUD2CONbits __at(0x497);
// bitfield macros
#define _BAUD2CON_ABDEN_POSN                                0x0
#define _BAUD2CON_ABDEN_POSITION                            0x0
#define _BAUD2CON_ABDEN_SIZE                                0x1
#define _BAUD2CON_ABDEN_LENGTH                              0x1
#define _BAUD2CON_ABDEN_MASK                                0x1
#define _BAUD2CON_WUE_POSN                                  0x1
#define _BAUD2CON_WUE_POSITION                              0x1
#define _BAUD2CON_WUE_SIZE                                  0x1
#define _BAUD2CON_WUE_LENGTH                                0x1
#define _BAUD2CON_WUE_MASK                                  0x2
#define _BAUD2CON_BRG16_POSN                                0x3
#define _BAUD2CON_BRG16_POSITION                            0x3
#define _BAUD2CON_BRG16_SIZE                                0x1
#define _BAUD2CON_BRG16_LENGTH                              0x1
#define _BAUD2CON_BRG16_MASK                                0x8
#define _BAUD2CON_SCKP_POSN                                 0x4
#define _BAUD2CON_SCKP_POSITION                             0x4
#define _BAUD2CON_SCKP_SIZE                                 0x1
#define _BAUD2CON_SCKP_LENGTH                               0x1
#define _BAUD2CON_SCKP_MASK                                 0x10
#define _BAUD2CON_RCIDL_POSN                                0x6
#define _BAUD2CON_RCIDL_POSITION                            0x6
#define _BAUD2CON_RCIDL_SIZE                                0x1
#define _BAUD2CON_RCIDL_LENGTH                              0x1
#define _BAUD2CON_RCIDL_MASK                                0x40
#define _BAUD2CON_ABDOVF_POSN                               0x7
#define _BAUD2CON_ABDOVF_POSITION                           0x7
#define _BAUD2CON_ABDOVF_SIZE                               0x1
#define _BAUD2CON_ABDOVF_LENGTH                             0x1
#define _BAUD2CON_ABDOVF_MASK                               0x80

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

// Register: LCDSE2
#define LCDSE2 LCDSE2
extern volatile unsigned char           LCDSE2              __at(0x79A);
#ifndef _LIB_BUILD
asm("LCDSE2 equ 079Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE16                   :1;
        unsigned SE17                   :1;
        unsigned SE18                   :1;
        unsigned SE19                   :1;
        unsigned SE20                   :1;
        unsigned SE21                   :1;
        unsigned SE22                   :1;
        unsigned SE23                   :1;
    };
} LCDSE2bits_t;
extern volatile LCDSE2bits_t LCDSE2bits __at(0x79A);
// bitfield macros
#define _LCDSE2_SE16_POSN                                   0x0
#define _LCDSE2_SE16_POSITION                               0x0
#define _LCDSE2_SE16_SIZE                                   0x1
#define _LCDSE2_SE16_LENGTH                                 0x1
#define _LCDSE2_SE16_MASK                                   0x1
#define _LCDSE2_SE17_POSN                                   0x1
#define _LCDSE2_SE17_POSITION                               0x1
#define _LCDSE2_SE17_SIZE                                   0x1
#define _LCDSE2_SE17_LENGTH                                 0x1
#define _LCDSE2_SE17_MASK                                   0x2
#define _LCDSE2_SE18_POSN                                   0x2
#define _LCDSE2_SE18_POSITION                               0x2
#define _LCDSE2_SE18_SIZE                                   0x1
#define _LCDSE2_SE18_LENGTH                                 0x1
#define _LCDSE2_SE18_MASK                                   0x4
#define _LCDSE2_SE19_POSN                                   0x3
#define _LCDSE2_SE19_POSITION                               0x3
#define _LCDSE2_SE19_SIZE                                   0x1
#define _LCDSE2_SE19_LENGTH                                 0x1
#define _LCDSE2_SE19_MASK                                   0x8
#define _LCDSE2_SE20_POSN                                   0x4
#define _LCDSE2_SE20_POSITION                               0x4
#define _LCDSE2_SE20_SIZE                                   0x1
#define _LCDSE2_SE20_LENGTH                                 0x1
#define _LCDSE2_SE20_MASK                                   0x10
#define _LCDSE2_SE21_POSN                                   0x5
#define _LCDSE2_SE21_POSITION                               0x5
#define _LCDSE2_SE21_SIZE                                   0x1
#define _LCDSE2_SE21_LENGTH                                 0x1
#define _LCDSE2_SE21_MASK                                   0x20
#define _LCDSE2_SE22_POSN                                   0x6
#define _LCDSE2_SE22_POSITION                               0x6
#define _LCDSE2_SE22_SIZE                                   0x1
#define _LCDSE2_SE22_LENGTH                                 0x1
#define _LCDSE2_SE22_MASK                                   0x40
#define _LCDSE2_SE23_POSN                                   0x7
#define _LCDSE2_SE23_POSITION                               0x7
#define _LCDSE2_SE23_SIZE                                   0x1
#define _LCDSE2_SE23_LENGTH                                 0x1
#define _LCDSE2_SE23_MASK                                   0x80

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
        unsigned SE27                   :1;
        unsigned SE28                   :1;
        unsigned SE29                   :1;
        unsigned SE30                   :1;
        unsigned SE31                   :1;
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
#define _LCDSE3_SE27_POSN                                   0x3
#define _LCDSE3_SE27_POSITION                               0x3
#define _LCDSE3_SE27_SIZE                                   0x1
#define _LCDSE3_SE27_LENGTH                                 0x1
#define _LCDSE3_SE27_MASK                                   0x8
#define _LCDSE3_SE28_POSN                                   0x4
#define _LCDSE3_SE28_POSITION                               0x4
#define _LCDSE3_SE28_SIZE                                   0x1
#define _LCDSE3_SE28_LENGTH                                 0x1
#define _LCDSE3_SE28_MASK                                   0x10
#define _LCDSE3_SE29_POSN                                   0x5
#define _LCDSE3_SE29_POSITION                               0x5
#define _LCDSE3_SE29_SIZE                                   0x1
#define _LCDSE3_SE29_LENGTH                                 0x1
#define _LCDSE3_SE29_MASK                                   0x20
#define _LCDSE3_SE30_POSN                                   0x6
#define _LCDSE3_SE30_POSITION                               0x6
#define _LCDSE3_SE30_SIZE                                   0x1
#define _LCDSE3_SE30_LENGTH                                 0x1
#define _LCDSE3_SE30_MASK                                   0x40
#define _LCDSE3_SE31_POSN                                   0x7
#define _LCDSE3_SE31_POSITION                               0x7
#define _LCDSE3_SE31_SIZE                                   0x1
#define _LCDSE3_SE31_LENGTH                                 0x1
#define _LCDSE3_SE31_MASK                                   0x80

// Register: LCDSE4
#define LCDSE4 LCDSE4
extern volatile unsigned char           LCDSE4              __at(0x79C);
#ifndef _LIB_BUILD
asm("LCDSE4 equ 079Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE32                   :1;
        unsigned SE33                   :1;
        unsigned SE34                   :1;
        unsigned SE35                   :1;
        unsigned SE36                   :1;
        unsigned SE37                   :1;
        unsigned SE38                   :1;
        unsigned SE39                   :1;
    };
} LCDSE4bits_t;
extern volatile LCDSE4bits_t LCDSE4bits __at(0x79C);
// bitfield macros
#define _LCDSE4_SE32_POSN                                   0x0
#define _LCDSE4_SE32_POSITION                               0x0
#define _LCDSE4_SE32_SIZE                                   0x1
#define _LCDSE4_SE32_LENGTH                                 0x1
#define _LCDSE4_SE32_MASK                                   0x1
#define _LCDSE4_SE33_POSN                                   0x1
#define _LCDSE4_SE33_POSITION                               0x1
#define _LCDSE4_SE33_SIZE                                   0x1
#define _LCDSE4_SE33_LENGTH                                 0x1
#define _LCDSE4_SE33_MASK                                   0x2
#define _LCDSE4_SE34_POSN                                   0x2
#define _LCDSE4_SE34_POSITION                               0x2
#define _LCDSE4_SE34_SIZE                                   0x1
#define _LCDSE4_SE34_LENGTH                                 0x1
#define _LCDSE4_SE34_MASK                                   0x4
#define _LCDSE4_SE35_POSN                                   0x3
#define _LCDSE4_SE35_POSITION                               0x3
#define _LCDSE4_SE35_SIZE                                   0x1
#define _LCDSE4_SE35_LENGTH                                 0x1
#define _LCDSE4_SE35_MASK                                   0x8
#define _LCDSE4_SE36_POSN                                   0x4
#define _LCDSE4_SE36_POSITION                               0x4
#define _LCDSE4_SE36_SIZE                                   0x1
#define _LCDSE4_SE36_LENGTH                                 0x1
#define _LCDSE4_SE36_MASK                                   0x10
#define _LCDSE4_SE37_POSN                                   0x5
#define _LCDSE4_SE37_POSITION                               0x5
#define _LCDSE4_SE37_SIZE                                   0x1
#define _LCDSE4_SE37_LENGTH                                 0x1
#define _LCDSE4_SE37_MASK                                   0x20
#define _LCDSE4_SE38_POSN                                   0x6
#define _LCDSE4_SE38_POSITION                               0x6
#define _LCDSE4_SE38_SIZE                                   0x1
#define _LCDSE4_SE38_LENGTH                                 0x1
#define _LCDSE4_SE38_MASK                                   0x40
#define _LCDSE4_SE39_POSN                                   0x7
#define _LCDSE4_SE39_POSITION                               0x7
#define _LCDSE4_SE39_SIZE                                   0x1
#define _LCDSE4_SE39_LENGTH                                 0x1
#define _LCDSE4_SE39_MASK                                   0x80

// Register: LCDSE5
#define LCDSE5 LCDSE5
extern volatile unsigned char           LCDSE5              __at(0x79D);
#ifndef _LIB_BUILD
asm("LCDSE5 equ 079Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SE40                   :1;
        unsigned SE41                   :1;
        unsigned SE42                   :1;
        unsigned SE43                   :1;
        unsigned SE44                   :1;
        unsigned SE45                   :1;
    };
} LCDSE5bits_t;
extern volatile LCDSE5bits_t LCDSE5bits __at(0x79D);
// bitfield macros
#define _LCDSE5_SE40_POSN                                   0x0
#define _LCDSE5_SE40_POSITION                               0x0
#define _LCDSE5_SE40_SIZE                                   0x1
#define _LCDSE5_SE40_LENGTH                                 0x1
#define _LCDSE5_SE40_MASK                                   0x1
#define _LCDSE5_SE41_POSN                                   0x1
#define _LCDSE5_SE41_POSITION                               0x1
#define _LCDSE5_SE41_SIZE                                   0x1
#define _LCDSE5_SE41_LENGTH                                 0x1
#define _LCDSE5_SE41_MASK                                   0x2
#define _LCDSE5_SE42_POSN                                   0x2
#define _LCDSE5_SE42_POSITION                               0x2
#define _LCDSE5_SE42_SIZE                                   0x1
#define _LCDSE5_SE42_LENGTH                                 0x1
#define _LCDSE5_SE42_MASK                                   0x4
#define _LCDSE5_SE43_POSN                                   0x3
#define _LCDSE5_SE43_POSITION                               0x3
#define _LCDSE5_SE43_SIZE                                   0x1
#define _LCDSE5_SE43_LENGTH                                 0x1
#define _LCDSE5_SE43_MASK                                   0x8
#define _LCDSE5_SE44_POSN                                   0x4
#define _LCDSE5_SE44_POSITION                               0x4
#define _LCDSE5_SE44_SIZE                                   0x1
#define _LCDSE5_SE44_LENGTH                                 0x1
#define _LCDSE5_SE44_MASK                                   0x10
#define _LCDSE5_SE45_POSN                                   0x5
#define _LCDSE5_SE45_POSITION                               0x5
#define _LCDSE5_SE45_SIZE                                   0x1
#define _LCDSE5_SE45_LENGTH                                 0x1
#define _LCDSE5_SE45_MASK                                   0x20

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

// Register: LCDDATA2
#define LCDDATA2 LCDDATA2
extern volatile unsigned char           LCDDATA2            __at(0x7A2);
#ifndef _LIB_BUILD
asm("LCDDATA2 equ 07A2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16COM0              :1;
        unsigned SEG17COM0              :1;
        unsigned SEG18COM0              :1;
        unsigned SEG19COM0              :1;
        unsigned SEG20COM0              :1;
        unsigned SEG21COM0              :1;
        unsigned SEG22COM0              :1;
        unsigned SEG23COM0              :1;
    };
} LCDDATA2bits_t;
extern volatile LCDDATA2bits_t LCDDATA2bits __at(0x7A2);
// bitfield macros
#define _LCDDATA2_SEG16COM0_POSN                            0x0
#define _LCDDATA2_SEG16COM0_POSITION                        0x0
#define _LCDDATA2_SEG16COM0_SIZE                            0x1
#define _LCDDATA2_SEG16COM0_LENGTH                          0x1
#define _LCDDATA2_SEG16COM0_MASK                            0x1
#define _LCDDATA2_SEG17COM0_POSN                            0x1
#define _LCDDATA2_SEG17COM0_POSITION                        0x1
#define _LCDDATA2_SEG17COM0_SIZE                            0x1
#define _LCDDATA2_SEG17COM0_LENGTH                          0x1
#define _LCDDATA2_SEG17COM0_MASK                            0x2
#define _LCDDATA2_SEG18COM0_POSN                            0x2
#define _LCDDATA2_SEG18COM0_POSITION                        0x2
#define _LCDDATA2_SEG18COM0_SIZE                            0x1
#define _LCDDATA2_SEG18COM0_LENGTH                          0x1
#define _LCDDATA2_SEG18COM0_MASK                            0x4
#define _LCDDATA2_SEG19COM0_POSN                            0x3
#define _LCDDATA2_SEG19COM0_POSITION                        0x3
#define _LCDDATA2_SEG19COM0_SIZE                            0x1
#define _LCDDATA2_SEG19COM0_LENGTH                          0x1
#define _LCDDATA2_SEG19COM0_MASK                            0x8
#define _LCDDATA2_SEG20COM0_POSN                            0x4
#define _LCDDATA2_SEG20COM0_POSITION                        0x4
#define _LCDDATA2_SEG20COM0_SIZE                            0x1
#define _LCDDATA2_SEG20COM0_LENGTH                          0x1
#define _LCDDATA2_SEG20COM0_MASK                            0x10
#define _LCDDATA2_SEG21COM0_POSN                            0x5
#define _LCDDATA2_SEG21COM0_POSITION                        0x5
#define _LCDDATA2_SEG21COM0_SIZE                            0x1
#define _LCDDATA2_SEG21COM0_LENGTH                          0x1
#define _LCDDATA2_SEG21COM0_MASK                            0x20
#define _LCDDATA2_SEG22COM0_POSN                            0x6
#define _LCDDATA2_SEG22COM0_POSITION                        0x6
#define _LCDDATA2_SEG22COM0_SIZE                            0x1
#define _LCDDATA2_SEG22COM0_LENGTH                          0x1
#define _LCDDATA2_SEG22COM0_MASK                            0x40
#define _LCDDATA2_SEG23COM0_POSN                            0x7
#define _LCDDATA2_SEG23COM0_POSITION                        0x7
#define _LCDDATA2_SEG23COM0_SIZE                            0x1
#define _LCDDATA2_SEG23COM0_LENGTH                          0x1
#define _LCDDATA2_SEG23COM0_MASK                            0x80

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

// Register: LCDDATA5
#define LCDDATA5 LCDDATA5
extern volatile unsigned char           LCDDATA5            __at(0x7A5);
#ifndef _LIB_BUILD
asm("LCDDATA5 equ 07A5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16COM1              :1;
        unsigned SEG17COM1              :1;
        unsigned SEG18COM1              :1;
        unsigned SEG19COM1              :1;
        unsigned SEG20COM1              :1;
        unsigned SEG21COM1              :1;
        unsigned SEG22COM1              :1;
        unsigned SEG23COM1              :1;
    };
} LCDDATA5bits_t;
extern volatile LCDDATA5bits_t LCDDATA5bits __at(0x7A5);
// bitfield macros
#define _LCDDATA5_SEG16COM1_POSN                            0x0
#define _LCDDATA5_SEG16COM1_POSITION                        0x0
#define _LCDDATA5_SEG16COM1_SIZE                            0x1
#define _LCDDATA5_SEG16COM1_LENGTH                          0x1
#define _LCDDATA5_SEG16COM1_MASK                            0x1
#define _LCDDATA5_SEG17COM1_POSN                            0x1
#define _LCDDATA5_SEG17COM1_POSITION                        0x1
#define _LCDDATA5_SEG17COM1_SIZE                            0x1
#define _LCDDATA5_SEG17COM1_LENGTH                          0x1
#define _LCDDATA5_SEG17COM1_MASK                            0x2
#define _LCDDATA5_SEG18COM1_POSN                            0x2
#define _LCDDATA5_SEG18COM1_POSITION                        0x2
#define _LCDDATA5_SEG18COM1_SIZE                            0x1
#define _LCDDATA5_SEG18COM1_LENGTH                          0x1
#define _LCDDATA5_SEG18COM1_MASK                            0x4
#define _LCDDATA5_SEG19COM1_POSN                            0x3
#define _LCDDATA5_SEG19COM1_POSITION                        0x3
#define _LCDDATA5_SEG19COM1_SIZE                            0x1
#define _LCDDATA5_SEG19COM1_LENGTH                          0x1
#define _LCDDATA5_SEG19COM1_MASK                            0x8
#define _LCDDATA5_SEG20COM1_POSN                            0x4
#define _LCDDATA5_SEG20COM1_POSITION                        0x4
#define _LCDDATA5_SEG20COM1_SIZE                            0x1
#define _LCDDATA5_SEG20COM1_LENGTH                          0x1
#define _LCDDATA5_SEG20COM1_MASK                            0x10
#define _LCDDATA5_SEG21COM1_POSN                            0x5
#define _LCDDATA5_SEG21COM1_POSITION                        0x5
#define _LCDDATA5_SEG21COM1_SIZE                            0x1
#define _LCDDATA5_SEG21COM1_LENGTH                          0x1
#define _LCDDATA5_SEG21COM1_MASK                            0x20
#define _LCDDATA5_SEG22COM1_POSN                            0x6
#define _LCDDATA5_SEG22COM1_POSITION                        0x6
#define _LCDDATA5_SEG22COM1_SIZE                            0x1
#define _LCDDATA5_SEG22COM1_LENGTH                          0x1
#define _LCDDATA5_SEG22COM1_MASK                            0x40
#define _LCDDATA5_SEG23COM1_POSN                            0x7
#define _LCDDATA5_SEG23COM1_POSITION                        0x7
#define _LCDDATA5_SEG23COM1_SIZE                            0x1
#define _LCDDATA5_SEG23COM1_LENGTH                          0x1
#define _LCDDATA5_SEG23COM1_MASK                            0x80

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

// Register: LCDDATA8
#define LCDDATA8 LCDDATA8
extern volatile unsigned char           LCDDATA8            __at(0x7A8);
#ifndef _LIB_BUILD
asm("LCDDATA8 equ 07A8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16COM2              :1;
        unsigned SEG17COM2              :1;
        unsigned SEG18COM2              :1;
        unsigned SEG19COM2              :1;
        unsigned SEG20COM2              :1;
        unsigned SEG21COM2              :1;
        unsigned SEG22COM2              :1;
        unsigned SEG23COM2              :1;
    };
} LCDDATA8bits_t;
extern volatile LCDDATA8bits_t LCDDATA8bits __at(0x7A8);
// bitfield macros
#define _LCDDATA8_SEG16COM2_POSN                            0x0
#define _LCDDATA8_SEG16COM2_POSITION                        0x0
#define _LCDDATA8_SEG16COM2_SIZE                            0x1
#define _LCDDATA8_SEG16COM2_LENGTH                          0x1
#define _LCDDATA8_SEG16COM2_MASK                            0x1
#define _LCDDATA8_SEG17COM2_POSN                            0x1
#define _LCDDATA8_SEG17COM2_POSITION                        0x1
#define _LCDDATA8_SEG17COM2_SIZE                            0x1
#define _LCDDATA8_SEG17COM2_LENGTH                          0x1
#define _LCDDATA8_SEG17COM2_MASK                            0x2
#define _LCDDATA8_SEG18COM2_POSN                            0x2
#define _LCDDATA8_SEG18COM2_POSITION                        0x2
#define _LCDDATA8_SEG18COM2_SIZE                            0x1
#define _LCDDATA8_SEG18COM2_LENGTH                          0x1
#define _LCDDATA8_SEG18COM2_MASK                            0x4
#define _LCDDATA8_SEG19COM2_POSN                            0x3
#define _LCDDATA8_SEG19COM2_POSITION                        0x3
#define _LCDDATA8_SEG19COM2_SIZE                            0x1
#define _LCDDATA8_SEG19COM2_LENGTH                          0x1
#define _LCDDATA8_SEG19COM2_MASK                            0x8
#define _LCDDATA8_SEG20COM2_POSN                            0x4
#define _LCDDATA8_SEG20COM2_POSITION                        0x4
#define _LCDDATA8_SEG20COM2_SIZE                            0x1
#define _LCDDATA8_SEG20COM2_LENGTH                          0x1
#define _LCDDATA8_SEG20COM2_MASK                            0x10
#define _LCDDATA8_SEG21COM2_POSN                            0x5
#define _LCDDATA8_SEG21COM2_POSITION                        0x5
#define _LCDDATA8_SEG21COM2_SIZE                            0x1
#define _LCDDATA8_SEG21COM2_LENGTH                          0x1
#define _LCDDATA8_SEG21COM2_MASK                            0x20
#define _LCDDATA8_SEG22COM2_POSN                            0x6
#define _LCDDATA8_SEG22COM2_POSITION                        0x6
#define _LCDDATA8_SEG22COM2_SIZE                            0x1
#define _LCDDATA8_SEG22COM2_LENGTH                          0x1
#define _LCDDATA8_SEG22COM2_MASK                            0x40
#define _LCDDATA8_SEG23COM2_POSN                            0x7
#define _LCDDATA8_SEG23COM2_POSITION                        0x7
#define _LCDDATA8_SEG23COM2_SIZE                            0x1
#define _LCDDATA8_SEG23COM2_LENGTH                          0x1
#define _LCDDATA8_SEG23COM2_MASK                            0x80

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

// Register: LCDDATA11
#define LCDDATA11 LCDDATA11
extern volatile unsigned char           LCDDATA11           __at(0x7AB);
#ifndef _LIB_BUILD
asm("LCDDATA11 equ 07ABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG16COM3              :1;
        unsigned SEG17COM3              :1;
        unsigned SEG18COM3              :1;
        unsigned SEG19COM3              :1;
        unsigned SEG20COM3              :1;
        unsigned SEG21COM3              :1;
        unsigned SEG22COM3              :1;
        unsigned SEG23COM3              :1;
    };
} LCDDATA11bits_t;
extern volatile LCDDATA11bits_t LCDDATA11bits __at(0x7AB);
// bitfield macros
#define _LCDDATA11_SEG16COM3_POSN                           0x0
#define _LCDDATA11_SEG16COM3_POSITION                       0x0
#define _LCDDATA11_SEG16COM3_SIZE                           0x1
#define _LCDDATA11_SEG16COM3_LENGTH                         0x1
#define _LCDDATA11_SEG16COM3_MASK                           0x1
#define _LCDDATA11_SEG17COM3_POSN                           0x1
#define _LCDDATA11_SEG17COM3_POSITION                       0x1
#define _LCDDATA11_SEG17COM3_SIZE                           0x1
#define _LCDDATA11_SEG17COM3_LENGTH                         0x1
#define _LCDDATA11_SEG17COM3_MASK                           0x2
#define _LCDDATA11_SEG18COM3_POSN                           0x2
#define _LCDDATA11_SEG18COM3_POSITION                       0x2
#define _LCDDATA11_SEG18COM3_SIZE                           0x1
#define _LCDDATA11_SEG18COM3_LENGTH                         0x1
#define _LCDDATA11_SEG18COM3_MASK                           0x4
#define _LCDDATA11_SEG19COM3_POSN                           0x3
#define _LCDDATA11_SEG19COM3_POSITION                       0x3
#define _LCDDATA11_SEG19COM3_SIZE                           0x1
#define _LCDDATA11_SEG19COM3_LENGTH                         0x1
#define _LCDDATA11_SEG19COM3_MASK                           0x8
#define _LCDDATA11_SEG20COM3_POSN                           0x4
#define _LCDDATA11_SEG20COM3_POSITION                       0x4
#define _LCDDATA11_SEG20COM3_SIZE                           0x1
#define _LCDDATA11_SEG20COM3_LENGTH                         0x1
#define _LCDDATA11_SEG20COM3_MASK                           0x10
#define _LCDDATA11_SEG21COM3_POSN                           0x5
#define _LCDDATA11_SEG21COM3_POSITION                       0x5
#define _LCDDATA11_SEG21COM3_SIZE                           0x1
#define _LCDDATA11_SEG21COM3_LENGTH                         0x1
#define _LCDDATA11_SEG21COM3_MASK                           0x20
#define _LCDDATA11_SEG22COM3_POSN                           0x6
#define _LCDDATA11_SEG22COM3_POSITION                       0x6
#define _LCDDATA11_SEG22COM3_SIZE                           0x1
#define _LCDDATA11_SEG22COM3_LENGTH                         0x1
#define _LCDDATA11_SEG22COM3_MASK                           0x40
#define _LCDDATA11_SEG23COM3_POSN                           0x7
#define _LCDDATA11_SEG23COM3_POSITION                       0x7
#define _LCDDATA11_SEG23COM3_SIZE                           0x1
#define _LCDDATA11_SEG23COM3_LENGTH                         0x1
#define _LCDDATA11_SEG23COM3_MASK                           0x80

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
        unsigned SEG27COM0              :1;
        unsigned SEG28COM0              :1;
        unsigned SEG29COM0              :1;
        unsigned SEG30COM0              :1;
        unsigned SEG31COM0              :1;
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
#define _LCDDATA12_SEG27COM0_POSN                           0x3
#define _LCDDATA12_SEG27COM0_POSITION                       0x3
#define _LCDDATA12_SEG27COM0_SIZE                           0x1
#define _LCDDATA12_SEG27COM0_LENGTH                         0x1
#define _LCDDATA12_SEG27COM0_MASK                           0x8
#define _LCDDATA12_SEG28COM0_POSN                           0x4
#define _LCDDATA12_SEG28COM0_POSITION                       0x4
#define _LCDDATA12_SEG28COM0_SIZE                           0x1
#define _LCDDATA12_SEG28COM0_LENGTH                         0x1
#define _LCDDATA12_SEG28COM0_MASK                           0x10
#define _LCDDATA12_SEG29COM0_POSN                           0x5
#define _LCDDATA12_SEG29COM0_POSITION                       0x5
#define _LCDDATA12_SEG29COM0_SIZE                           0x1
#define _LCDDATA12_SEG29COM0_LENGTH                         0x1
#define _LCDDATA12_SEG29COM0_MASK                           0x20
#define _LCDDATA12_SEG30COM0_POSN                           0x6
#define _LCDDATA12_SEG30COM0_POSITION                       0x6
#define _LCDDATA12_SEG30COM0_SIZE                           0x1
#define _LCDDATA12_SEG30COM0_LENGTH                         0x1
#define _LCDDATA12_SEG30COM0_MASK                           0x40
#define _LCDDATA12_SEG31COM0_POSN                           0x7
#define _LCDDATA12_SEG31COM0_POSITION                       0x7
#define _LCDDATA12_SEG31COM0_SIZE                           0x1
#define _LCDDATA12_SEG31COM0_LENGTH                         0x1
#define _LCDDATA12_SEG31COM0_MASK                           0x80

// Register: LCDDATA13
#define LCDDATA13 LCDDATA13
extern volatile unsigned char           LCDDATA13           __at(0x7AD);
#ifndef _LIB_BUILD
asm("LCDDATA13 equ 07ADh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG32COM0              :1;
        unsigned SEG33COM0              :1;
        unsigned SEG34COM0              :1;
        unsigned SEG35COM0              :1;
        unsigned SEG36COM0              :1;
        unsigned SEG37COM0              :1;
        unsigned SEG38COM0              :1;
        unsigned SEG39COM0              :1;
    };
} LCDDATA13bits_t;
extern volatile LCDDATA13bits_t LCDDATA13bits __at(0x7AD);
// bitfield macros
#define _LCDDATA13_SEG32COM0_POSN                           0x0
#define _LCDDATA13_SEG32COM0_POSITION                       0x0
#define _LCDDATA13_SEG32COM0_SIZE                           0x1
#define _LCDDATA13_SEG32COM0_LENGTH                         0x1
#define _LCDDATA13_SEG32COM0_MASK                           0x1
#define _LCDDATA13_SEG33COM0_POSN                           0x1
#define _LCDDATA13_SEG33COM0_POSITION                       0x1
#define _LCDDATA13_SEG33COM0_SIZE                           0x1
#define _LCDDATA13_SEG33COM0_LENGTH                         0x1
#define _LCDDATA13_SEG33COM0_MASK                           0x2
#define _LCDDATA13_SEG34COM0_POSN                           0x2
#define _LCDDATA13_SEG34COM0_POSITION                       0x2
#define _LCDDATA13_SEG34COM0_SIZE                           0x1
#define _LCDDATA13_SEG34COM0_LENGTH                         0x1
#define _LCDDATA13_SEG34COM0_MASK                           0x4
#define _LCDDATA13_SEG35COM0_POSN                           0x3
#define _LCDDATA13_SEG35COM0_POSITION                       0x3
#define _LCDDATA13_SEG35COM0_SIZE                           0x1
#define _LCDDATA13_SEG35COM0_LENGTH                         0x1
#define _LCDDATA13_SEG35COM0_MASK                           0x8
#define _LCDDATA13_SEG36COM0_POSN                           0x4
#define _LCDDATA13_SEG36COM0_POSITION                       0x4
#define _LCDDATA13_SEG36COM0_SIZE                           0x1
#define _LCDDATA13_SEG36COM0_LENGTH                         0x1
#define _LCDDATA13_SEG36COM0_MASK                           0x10
#define _LCDDATA13_SEG37COM0_POSN                           0x5
#define _LCDDATA13_SEG37COM0_POSITION                       0x5
#define _LCDDATA13_SEG37COM0_SIZE                           0x1
#define _LCDDATA13_SEG37COM0_LENGTH                         0x1
#define _LCDDATA13_SEG37COM0_MASK                           0x20
#define _LCDDATA13_SEG38COM0_POSN                           0x6
#define _LCDDATA13_SEG38COM0_POSITION                       0x6
#define _LCDDATA13_SEG38COM0_SIZE                           0x1
#define _LCDDATA13_SEG38COM0_LENGTH                         0x1
#define _LCDDATA13_SEG38COM0_MASK                           0x40
#define _LCDDATA13_SEG39COM0_POSN                           0x7
#define _LCDDATA13_SEG39COM0_POSITION                       0x7
#define _LCDDATA13_SEG39COM0_SIZE                           0x1
#define _LCDDATA13_SEG39COM0_LENGTH                         0x1
#define _LCDDATA13_SEG39COM0_MASK                           0x80

// Register: LCDDATA14
#define LCDDATA14 LCDDATA14
extern volatile unsigned char           LCDDATA14           __at(0x7AE);
#ifndef _LIB_BUILD
asm("LCDDATA14 equ 07AEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG40COM0              :1;
        unsigned SEG41COM0              :1;
        unsigned SEG42COM0              :1;
        unsigned SEG43COM0              :1;
        unsigned SEG44COM0              :1;
        unsigned SEG45COM0              :1;
    };
} LCDDATA14bits_t;
extern volatile LCDDATA14bits_t LCDDATA14bits __at(0x7AE);
// bitfield macros
#define _LCDDATA14_SEG40COM0_POSN                           0x0
#define _LCDDATA14_SEG40COM0_POSITION                       0x0
#define _LCDDATA14_SEG40COM0_SIZE                           0x1
#define _LCDDATA14_SEG40COM0_LENGTH                         0x1
#define _LCDDATA14_SEG40COM0_MASK                           0x1
#define _LCDDATA14_SEG41COM0_POSN                           0x1
#define _LCDDATA14_SEG41COM0_POSITION                       0x1
#define _LCDDATA14_SEG41COM0_SIZE                           0x1
#define _LCDDATA14_SEG41COM0_LENGTH                         0x1
#define _LCDDATA14_SEG41COM0_MASK                           0x2
#define _LCDDATA14_SEG42COM0_POSN                           0x2
#define _LCDDATA14_SEG42COM0_POSITION                       0x2
#define _LCDDATA14_SEG42COM0_SIZE                           0x1
#define _LCDDATA14_SEG42COM0_LENGTH                         0x1
#define _LCDDATA14_SEG42COM0_MASK                           0x4
#define _LCDDATA14_SEG43COM0_POSN                           0x3
#define _LCDDATA14_SEG43COM0_POSITION                       0x3
#define _LCDDATA14_SEG43COM0_SIZE                           0x1
#define _LCDDATA14_SEG43COM0_LENGTH                         0x1
#define _LCDDATA14_SEG43COM0_MASK                           0x8
#define _LCDDATA14_SEG44COM0_POSN                           0x4
#define _LCDDATA14_SEG44COM0_POSITION                       0x4
#define _LCDDATA14_SEG44COM0_SIZE                           0x1
#define _LCDDATA14_SEG44COM0_LENGTH                         0x1
#define _LCDDATA14_SEG44COM0_MASK                           0x10
#define _LCDDATA14_SEG45COM0_POSN                           0x5
#define _LCDDATA14_SEG45COM0_POSITION                       0x5
#define _LCDDATA14_SEG45COM0_SIZE                           0x1
#define _LCDDATA14_SEG45COM0_LENGTH                         0x1
#define _LCDDATA14_SEG45COM0_MASK                           0x20

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
        unsigned SEG27COM1              :1;
        unsigned SEG28COM1              :1;
        unsigned SEG29COM1              :1;
        unsigned SEG30COM1              :1;
        unsigned SEG31COM1              :1;
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
#define _LCDDATA15_SEG27COM1_POSN                           0x3
#define _LCDDATA15_SEG27COM1_POSITION                       0x3
#define _LCDDATA15_SEG27COM1_SIZE                           0x1
#define _LCDDATA15_SEG27COM1_LENGTH                         0x1
#define _LCDDATA15_SEG27COM1_MASK                           0x8
#define _LCDDATA15_SEG28COM1_POSN                           0x4
#define _LCDDATA15_SEG28COM1_POSITION                       0x4
#define _LCDDATA15_SEG28COM1_SIZE                           0x1
#define _LCDDATA15_SEG28COM1_LENGTH                         0x1
#define _LCDDATA15_SEG28COM1_MASK                           0x10
#define _LCDDATA15_SEG29COM1_POSN                           0x5
#define _LCDDATA15_SEG29COM1_POSITION                       0x5
#define _LCDDATA15_SEG29COM1_SIZE                           0x1
#define _LCDDATA15_SEG29COM1_LENGTH                         0x1
#define _LCDDATA15_SEG29COM1_MASK                           0x20
#define _LCDDATA15_SEG30COM1_POSN                           0x6
#define _LCDDATA15_SEG30COM1_POSITION                       0x6
#define _LCDDATA15_SEG30COM1_SIZE                           0x1
#define _LCDDATA15_SEG30COM1_LENGTH                         0x1
#define _LCDDATA15_SEG30COM1_MASK                           0x40
#define _LCDDATA15_SEG31COM1_POSN                           0x7
#define _LCDDATA15_SEG31COM1_POSITION                       0x7
#define _LCDDATA15_SEG31COM1_SIZE                           0x1
#define _LCDDATA15_SEG31COM1_LENGTH                         0x1
#define _LCDDATA15_SEG31COM1_MASK                           0x80

// Register: LCDDATA16
#define LCDDATA16 LCDDATA16
extern volatile unsigned char           LCDDATA16           __at(0x7B0);
#ifndef _LIB_BUILD
asm("LCDDATA16 equ 07B0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG32COM1              :1;
        unsigned SEG33COM1              :1;
        unsigned SEG34COM1              :1;
        unsigned SEG35COM1              :1;
        unsigned SEG36COM1              :1;
        unsigned SEG37COM1              :1;
        unsigned SEG38COM1              :1;
        unsigned SEG39COM1              :1;
    };
} LCDDATA16bits_t;
extern volatile LCDDATA16bits_t LCDDATA16bits __at(0x7B0);
// bitfield macros
#define _LCDDATA16_SEG32COM1_POSN                           0x0
#define _LCDDATA16_SEG32COM1_POSITION                       0x0
#define _LCDDATA16_SEG32COM1_SIZE                           0x1
#define _LCDDATA16_SEG32COM1_LENGTH                         0x1
#define _LCDDATA16_SEG32COM1_MASK                           0x1
#define _LCDDATA16_SEG33COM1_POSN                           0x1
#define _LCDDATA16_SEG33COM1_POSITION                       0x1
#define _LCDDATA16_SEG33COM1_SIZE                           0x1
#define _LCDDATA16_SEG33COM1_LENGTH                         0x1
#define _LCDDATA16_SEG33COM1_MASK                           0x2
#define _LCDDATA16_SEG34COM1_POSN                           0x2
#define _LCDDATA16_SEG34COM1_POSITION                       0x2
#define _LCDDATA16_SEG34COM1_SIZE                           0x1
#define _LCDDATA16_SEG34COM1_LENGTH                         0x1
#define _LCDDATA16_SEG34COM1_MASK                           0x4
#define _LCDDATA16_SEG35COM1_POSN                           0x3
#define _LCDDATA16_SEG35COM1_POSITION                       0x3
#define _LCDDATA16_SEG35COM1_SIZE                           0x1
#define _LCDDATA16_SEG35COM1_LENGTH                         0x1
#define _LCDDATA16_SEG35COM1_MASK                           0x8
#define _LCDDATA16_SEG36COM1_POSN                           0x4
#define _LCDDATA16_SEG36COM1_POSITION                       0x4
#define _LCDDATA16_SEG36COM1_SIZE                           0x1
#define _LCDDATA16_SEG36COM1_LENGTH                         0x1
#define _LCDDATA16_SEG36COM1_MASK                           0x10
#define _LCDDATA16_SEG37COM1_POSN                           0x5
#define _LCDDATA16_SEG37COM1_POSITION                       0x5
#define _LCDDATA16_SEG37COM1_SIZE                           0x1
#define _LCDDATA16_SEG37COM1_LENGTH                         0x1
#define _LCDDATA16_SEG37COM1_MASK                           0x20
#define _LCDDATA16_SEG38COM1_POSN                           0x6
#define _LCDDATA16_SEG38COM1_POSITION                       0x6
#define _LCDDATA16_SEG38COM1_SIZE                           0x1
#define _LCDDATA16_SEG38COM1_LENGTH                         0x1
#define _LCDDATA16_SEG38COM1_MASK                           0x40
#define _LCDDATA16_SEG39COM1_POSN                           0x7
#define _LCDDATA16_SEG39COM1_POSITION                       0x7
#define _LCDDATA16_SEG39COM1_SIZE                           0x1
#define _LCDDATA16_SEG39COM1_LENGTH                         0x1
#define _LCDDATA16_SEG39COM1_MASK                           0x80

// Register: LCDDATA17
#define LCDDATA17 LCDDATA17
extern volatile unsigned char           LCDDATA17           __at(0x7B1);
#ifndef _LIB_BUILD
asm("LCDDATA17 equ 07B1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG40COM1              :1;
        unsigned SEG41COM1              :1;
        unsigned SEG42COM1              :1;
        unsigned SEG43COM1              :1;
        unsigned SEG44COM1              :1;
        unsigned SEG45COM1              :1;
    };
} LCDDATA17bits_t;
extern volatile LCDDATA17bits_t LCDDATA17bits __at(0x7B1);
// bitfield macros
#define _LCDDATA17_SEG40COM1_POSN                           0x0
#define _LCDDATA17_SEG40COM1_POSITION                       0x0
#define _LCDDATA17_SEG40COM1_SIZE                           0x1
#define _LCDDATA17_SEG40COM1_LENGTH                         0x1
#define _LCDDATA17_SEG40COM1_MASK                           0x1
#define _LCDDATA17_SEG41COM1_POSN                           0x1
#define _LCDDATA17_SEG41COM1_POSITION                       0x1
#define _LCDDATA17_SEG41COM1_SIZE                           0x1
#define _LCDDATA17_SEG41COM1_LENGTH                         0x1
#define _LCDDATA17_SEG41COM1_MASK                           0x2
#define _LCDDATA17_SEG42COM1_POSN                           0x2
#define _LCDDATA17_SEG42COM1_POSITION                       0x2
#define _LCDDATA17_SEG42COM1_SIZE                           0x1
#define _LCDDATA17_SEG42COM1_LENGTH                         0x1
#define _LCDDATA17_SEG42COM1_MASK                           0x4
#define _LCDDATA17_SEG43COM1_POSN                           0x3
#define _LCDDATA17_SEG43COM1_POSITION                       0x3
#define _LCDDATA17_SEG43COM1_SIZE                           0x1
#define _LCDDATA17_SEG43COM1_LENGTH                         0x1
#define _LCDDATA17_SEG43COM1_MASK                           0x8
#define _LCDDATA17_SEG44COM1_POSN                           0x4
#define _LCDDATA17_SEG44COM1_POSITION                       0x4
#define _LCDDATA17_SEG44COM1_SIZE                           0x1
#define _LCDDATA17_SEG44COM1_LENGTH                         0x1
#define _LCDDATA17_SEG44COM1_MASK                           0x10
#define _LCDDATA17_SEG45COM1_POSN                           0x5
#define _LCDDATA17_SEG45COM1_POSITION                       0x5
#define _LCDDATA17_SEG45COM1_SIZE                           0x1
#define _LCDDATA17_SEG45COM1_LENGTH                         0x1
#define _LCDDATA17_SEG45COM1_MASK                           0x20

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
        unsigned SEG27COM2              :1;
        unsigned SEG28COM2              :1;
        unsigned SEG29COM2              :1;
        unsigned SEG30COM2              :1;
        unsigned SEG31COM2              :1;
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
#define _LCDDATA18_SEG27COM2_POSN                           0x3
#define _LCDDATA18_SEG27COM2_POSITION                       0x3
#define _LCDDATA18_SEG27COM2_SIZE                           0x1
#define _LCDDATA18_SEG27COM2_LENGTH                         0x1
#define _LCDDATA18_SEG27COM2_MASK                           0x8
#define _LCDDATA18_SEG28COM2_POSN                           0x4
#define _LCDDATA18_SEG28COM2_POSITION                       0x4
#define _LCDDATA18_SEG28COM2_SIZE                           0x1
#define _LCDDATA18_SEG28COM2_LENGTH                         0x1
#define _LCDDATA18_SEG28COM2_MASK                           0x10
#define _LCDDATA18_SEG29COM2_POSN                           0x5
#define _LCDDATA18_SEG29COM2_POSITION                       0x5
#define _LCDDATA18_SEG29COM2_SIZE                           0x1
#define _LCDDATA18_SEG29COM2_LENGTH                         0x1
#define _LCDDATA18_SEG29COM2_MASK                           0x20
#define _LCDDATA18_SEG30COM2_POSN                           0x6
#define _LCDDATA18_SEG30COM2_POSITION                       0x6
#define _LCDDATA18_SEG30COM2_SIZE                           0x1
#define _LCDDATA18_SEG30COM2_LENGTH                         0x1
#define _LCDDATA18_SEG30COM2_MASK                           0x40
#define _LCDDATA18_SEG31COM2_POSN                           0x7
#define _LCDDATA18_SEG31COM2_POSITION                       0x7
#define _LCDDATA18_SEG31COM2_SIZE                           0x1
#define _LCDDATA18_SEG31COM2_LENGTH                         0x1
#define _LCDDATA18_SEG31COM2_MASK                           0x80

// Register: LCDDATA19
#define LCDDATA19 LCDDATA19
extern volatile unsigned char           LCDDATA19           __at(0x7B3);
#ifndef _LIB_BUILD
asm("LCDDATA19 equ 07B3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG32COM2              :1;
        unsigned SEG33COM2              :1;
        unsigned SEG34COM2              :1;
        unsigned SEG35COM2              :1;
        unsigned SEG36COM2              :1;
        unsigned SEG37COM2              :1;
        unsigned SEG38COM2              :1;
        unsigned SEG39COM2              :1;
    };
} LCDDATA19bits_t;
extern volatile LCDDATA19bits_t LCDDATA19bits __at(0x7B3);
// bitfield macros
#define _LCDDATA19_SEG32COM2_POSN                           0x0
#define _LCDDATA19_SEG32COM2_POSITION                       0x0
#define _LCDDATA19_SEG32COM2_SIZE                           0x1
#define _LCDDATA19_SEG32COM2_LENGTH                         0x1
#define _LCDDATA19_SEG32COM2_MASK                           0x1
#define _LCDDATA19_SEG33COM2_POSN                           0x1
#define _LCDDATA19_SEG33COM2_POSITION                       0x1
#define _LCDDATA19_SEG33COM2_SIZE                           0x1
#define _LCDDATA19_SEG33COM2_LENGTH                         0x1
#define _LCDDATA19_SEG33COM2_MASK                           0x2
#define _LCDDATA19_SEG34COM2_POSN                           0x2
#define _LCDDATA19_SEG34COM2_POSITION                       0x2
#define _LCDDATA19_SEG34COM2_SIZE                           0x1
#define _LCDDATA19_SEG34COM2_LENGTH                         0x1
#define _LCDDATA19_SEG34COM2_MASK                           0x4
#define _LCDDATA19_SEG35COM2_POSN                           0x3
#define _LCDDATA19_SEG35COM2_POSITION                       0x3
#define _LCDDATA19_SEG35COM2_SIZE                           0x1
#define _LCDDATA19_SEG35COM2_LENGTH                         0x1
#define _LCDDATA19_SEG35COM2_MASK                           0x8
#define _LCDDATA19_SEG36COM2_POSN                           0x4
#define _LCDDATA19_SEG36COM2_POSITION                       0x4
#define _LCDDATA19_SEG36COM2_SIZE                           0x1
#define _LCDDATA19_SEG36COM2_LENGTH                         0x1
#define _LCDDATA19_SEG36COM2_MASK                           0x10
#define _LCDDATA19_SEG37COM2_POSN                           0x5
#define _LCDDATA19_SEG37COM2_POSITION                       0x5
#define _LCDDATA19_SEG37COM2_SIZE                           0x1
#define _LCDDATA19_SEG37COM2_LENGTH                         0x1
#define _LCDDATA19_SEG37COM2_MASK                           0x20
#define _LCDDATA19_SEG38COM2_POSN                           0x6
#define _LCDDATA19_SEG38COM2_POSITION                       0x6
#define _LCDDATA19_SEG38COM2_SIZE                           0x1
#define _LCDDATA19_SEG38COM2_LENGTH                         0x1
#define _LCDDATA19_SEG38COM2_MASK                           0x40
#define _LCDDATA19_SEG39COM2_POSN                           0x7
#define _LCDDATA19_SEG39COM2_POSITION                       0x7
#define _LCDDATA19_SEG39COM2_SIZE                           0x1
#define _LCDDATA19_SEG39COM2_LENGTH                         0x1
#define _LCDDATA19_SEG39COM2_MASK                           0x80

// Register: LCDDATA20
#define LCDDATA20 LCDDATA20
extern volatile unsigned char           LCDDATA20           __at(0x7B4);
#ifndef _LIB_BUILD
asm("LCDDATA20 equ 07B4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG40COM2              :1;
        unsigned SEG41COM2              :1;
        unsigned SEG42COM2              :1;
        unsigned SEG43COM2              :1;
        unsigned SEG44COM2              :1;
        unsigned SEG45COM2              :1;
    };
} LCDDATA20bits_t;
extern volatile LCDDATA20bits_t LCDDATA20bits __at(0x7B4);
// bitfield macros
#define _LCDDATA20_SEG40COM2_POSN                           0x0
#define _LCDDATA20_SEG40COM2_POSITION                       0x0
#define _LCDDATA20_SEG40COM2_SIZE                           0x1
#define _LCDDATA20_SEG40COM2_LENGTH                         0x1
#define _LCDDATA20_SEG40COM2_MASK                           0x1
#define _LCDDATA20_SEG41COM2_POSN                           0x1
#define _LCDDATA20_SEG41COM2_POSITION                       0x1
#define _LCDDATA20_SEG41COM2_SIZE                           0x1
#define _LCDDATA20_SEG41COM2_LENGTH                         0x1
#define _LCDDATA20_SEG41COM2_MASK                           0x2
#define _LCDDATA20_SEG42COM2_POSN                           0x2
#define _LCDDATA20_SEG42COM2_POSITION                       0x2
#define _LCDDATA20_SEG42COM2_SIZE                           0x1
#define _LCDDATA20_SEG42COM2_LENGTH                         0x1
#define _LCDDATA20_SEG42COM2_MASK                           0x4
#define _LCDDATA20_SEG43COM2_POSN                           0x3
#define _LCDDATA20_SEG43COM2_POSITION                       0x3
#define _LCDDATA20_SEG43COM2_SIZE                           0x1
#define _LCDDATA20_SEG43COM2_LENGTH                         0x1
#define _LCDDATA20_SEG43COM2_MASK                           0x8
#define _LCDDATA20_SEG44COM2_POSN                           0x4
#define _LCDDATA20_SEG44COM2_POSITION                       0x4
#define _LCDDATA20_SEG44COM2_SIZE                           0x1
#define _LCDDATA20_SEG44COM2_LENGTH                         0x1
#define _LCDDATA20_SEG44COM2_MASK                           0x10
#define _LCDDATA20_SEG45COM2_POSN                           0x5
#define _LCDDATA20_SEG45COM2_POSITION                       0x5
#define _LCDDATA20_SEG45COM2_SIZE                           0x1
#define _LCDDATA20_SEG45COM2_LENGTH                         0x1
#define _LCDDATA20_SEG45COM2_MASK                           0x20

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
        unsigned SEG27COM3              :1;
        unsigned SEG28COM3              :1;
        unsigned SEG29COM3              :1;
        unsigned SEG30COM3              :1;
        unsigned SEG31COM3              :1;
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
#define _LCDDATA21_SEG27COM3_POSN                           0x3
#define _LCDDATA21_SEG27COM3_POSITION                       0x3
#define _LCDDATA21_SEG27COM3_SIZE                           0x1
#define _LCDDATA21_SEG27COM3_LENGTH                         0x1
#define _LCDDATA21_SEG27COM3_MASK                           0x8
#define _LCDDATA21_SEG28COM3_POSN                           0x4
#define _LCDDATA21_SEG28COM3_POSITION                       0x4
#define _LCDDATA21_SEG28COM3_SIZE                           0x1
#define _LCDDATA21_SEG28COM3_LENGTH                         0x1
#define _LCDDATA21_SEG28COM3_MASK                           0x10
#define _LCDDATA21_SEG29COM3_POSN                           0x5
#define _LCDDATA21_SEG29COM3_POSITION                       0x5
#define _LCDDATA21_SEG29COM3_SIZE                           0x1
#define _LCDDATA21_SEG29COM3_LENGTH                         0x1
#define _LCDDATA21_SEG29COM3_MASK                           0x20
#define _LCDDATA21_SEG30COM3_POSN                           0x6
#define _LCDDATA21_SEG30COM3_POSITION                       0x6
#define _LCDDATA21_SEG30COM3_SIZE                           0x1
#define _LCDDATA21_SEG30COM3_LENGTH                         0x1
#define _LCDDATA21_SEG30COM3_MASK                           0x40
#define _LCDDATA21_SEG31COM3_POSN                           0x7
#define _LCDDATA21_SEG31COM3_POSITION                       0x7
#define _LCDDATA21_SEG31COM3_SIZE                           0x1
#define _LCDDATA21_SEG31COM3_LENGTH                         0x1
#define _LCDDATA21_SEG31COM3_MASK                           0x80

// Register: LCDDATA22
#define LCDDATA22 LCDDATA22
extern volatile unsigned char           LCDDATA22           __at(0x7B6);
#ifndef _LIB_BUILD
asm("LCDDATA22 equ 07B6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG32COM3              :1;
        unsigned SEG33COM3              :1;
        unsigned SEG34COM3              :1;
        unsigned SEG35COM3              :1;
        unsigned SEG36COM3              :1;
        unsigned SEG37COM3              :1;
        unsigned SEG38COM3              :1;
        unsigned SEG39COM3              :1;
    };
} LCDDATA22bits_t;
extern volatile LCDDATA22bits_t LCDDATA22bits __at(0x7B6);
// bitfield macros
#define _LCDDATA22_SEG32COM3_POSN                           0x0
#define _LCDDATA22_SEG32COM3_POSITION                       0x0
#define _LCDDATA22_SEG32COM3_SIZE                           0x1
#define _LCDDATA22_SEG32COM3_LENGTH                         0x1
#define _LCDDATA22_SEG32COM3_MASK                           0x1
#define _LCDDATA22_SEG33COM3_POSN                           0x1
#define _LCDDATA22_SEG33COM3_POSITION                       0x1
#define _LCDDATA22_SEG33COM3_SIZE                           0x1
#define _LCDDATA22_SEG33COM3_LENGTH                         0x1
#define _LCDDATA22_SEG33COM3_MASK                           0x2
#define _LCDDATA22_SEG34COM3_POSN                           0x2
#define _LCDDATA22_SEG34COM3_POSITION                       0x2
#define _LCDDATA22_SEG34COM3_SIZE                           0x1
#define _LCDDATA22_SEG34COM3_LENGTH                         0x1
#define _LCDDATA22_SEG34COM3_MASK                           0x4
#define _LCDDATA22_SEG35COM3_POSN                           0x3
#define _LCDDATA22_SEG35COM3_POSITION                       0x3
#define _LCDDATA22_SEG35COM3_SIZE                           0x1
#define _LCDDATA22_SEG35COM3_LENGTH                         0x1
#define _LCDDATA22_SEG35COM3_MASK                           0x8
#define _LCDDATA22_SEG36COM3_POSN                           0x4
#define _LCDDATA22_SEG36COM3_POSITION                       0x4
#define _LCDDATA22_SEG36COM3_SIZE                           0x1
#define _LCDDATA22_SEG36COM3_LENGTH                         0x1
#define _LCDDATA22_SEG36COM3_MASK                           0x10
#define _LCDDATA22_SEG37COM3_POSN                           0x5
#define _LCDDATA22_SEG37COM3_POSITION                       0x5
#define _LCDDATA22_SEG37COM3_SIZE                           0x1
#define _LCDDATA22_SEG37COM3_LENGTH                         0x1
#define _LCDDATA22_SEG37COM3_MASK                           0x20
#define _LCDDATA22_SEG38COM3_POSN                           0x6
#define _LCDDATA22_SEG38COM3_POSITION                       0x6
#define _LCDDATA22_SEG38COM3_SIZE                           0x1
#define _LCDDATA22_SEG38COM3_LENGTH                         0x1
#define _LCDDATA22_SEG38COM3_MASK                           0x40
#define _LCDDATA22_SEG39COM3_POSN                           0x7
#define _LCDDATA22_SEG39COM3_POSITION                       0x7
#define _LCDDATA22_SEG39COM3_SIZE                           0x1
#define _LCDDATA22_SEG39COM3_LENGTH                         0x1
#define _LCDDATA22_SEG39COM3_MASK                           0x80

// Register: LCDDATA23
#define LCDDATA23 LCDDATA23
extern volatile unsigned char           LCDDATA23           __at(0x7B7);
#ifndef _LIB_BUILD
asm("LCDDATA23 equ 07B7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEG40COM3              :1;
        unsigned SEG41COM3              :1;
        unsigned SEG42COM3              :1;
        unsigned SEG43COM3              :1;
        unsigned SEG44COM3              :1;
        unsigned SEG45COM3              :1;
    };
} LCDDATA23bits_t;
extern volatile LCDDATA23bits_t LCDDATA23bits __at(0x7B7);
// bitfield macros
#define _LCDDATA23_SEG40COM3_POSN                           0x0
#define _LCDDATA23_SEG40COM3_POSITION                       0x0
#define _LCDDATA23_SEG40COM3_SIZE                           0x1
#define _LCDDATA23_SEG40COM3_LENGTH                         0x1
#define _LCDDATA23_SEG40COM3_MASK                           0x1
#define _LCDDATA23_SEG41COM3_POSN                           0x1
#define _LCDDATA23_SEG41COM3_POSITION                       0x1
#define _LCDDATA23_SEG41COM3_SIZE                           0x1
#define _LCDDATA23_SEG41COM3_LENGTH                         0x1
#define _LCDDATA23_SEG41COM3_MASK                           0x2
#define _LCDDATA23_SEG42COM3_POSN                           0x2
#define _LCDDATA23_SEG42COM3_POSITION                       0x2
#define _LCDDATA23_SEG42COM3_SIZE                           0x1
#define _LCDDATA23_SEG42COM3_LENGTH                         0x1
#define _LCDDATA23_SEG42COM3_MASK                           0x4
#define _LCDDATA23_SEG43COM3_POSN                           0x3
#define _LCDDATA23_SEG43COM3_POSITION                       0x3
#define _LCDDATA23_SEG43COM3_SIZE                           0x1
#define _LCDDATA23_SEG43COM3_LENGTH                         0x1
#define _LCDDATA23_SEG43COM3_MASK                           0x8
#define _LCDDATA23_SEG44COM3_POSN                           0x4
#define _LCDDATA23_SEG44COM3_POSITION                       0x4
#define _LCDDATA23_SEG44COM3_SIZE                           0x1
#define _LCDDATA23_SEG44COM3_LENGTH                         0x1
#define _LCDDATA23_SEG44COM3_MASK                           0x10
#define _LCDDATA23_SEG45COM3_POSN                           0x5
#define _LCDDATA23_SEG45COM3_POSITION                       0x5
#define _LCDDATA23_SEG45COM3_SIZE                           0x1
#define _LCDDATA23_SEG45COM3_LENGTH                         0x1
#define _LCDDATA23_SEG45COM3_MASK                           0x20

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
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x60);	// @ (0xC * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x61);	// @ (0xC * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTF<AN10>
extern volatile __bit                   AN10                __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 AN10_bit            _BIT_ACCESS(PORTF,5)
// PORTF<AN11>
extern volatile __bit                   AN11                __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 AN11_bit            _BIT_ACCESS(PORTF,6)
// PORTG<AN12>
extern volatile __bit                   AN12                __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 AN12_bit            _BIT_ACCESS(PORTG,4)
// PORTG<AN13>
extern volatile __bit                   AN13                __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 AN13_bit            _BIT_ACCESS(PORTG,3)
// PORTG<AN14>
extern volatile __bit                   AN14                __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 AN14_bit            _BIT_ACCESS(PORTG,2)
// PORTG<AN15>
extern volatile __bit                   AN15                __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 AN15_bit            _BIT_ACCESS(PORTG,1)
// PORTF<AN16>
extern volatile __bit                   AN16                __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 AN16_bit            _BIT_ACCESS(PORTF,0)
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x62);	// @ (0xC * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x63);	// @ (0xC * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x65);	// @ (0xC * 8 + 5)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,5)
// PORTF<AN5>
extern volatile __bit                   AN5                 __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 AN5_bit             _BIT_ACCESS(PORTF,7)
// PORTF<AN6>
extern volatile __bit                   AN6                 __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 AN6_bit             _BIT_ACCESS(PORTF,1)
// PORTF<AN7>
extern volatile __bit                   AN7                 __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 AN7_bit             _BIT_ACCESS(PORTF,2)
// PORTF<AN8>
extern volatile __bit                   AN8                 __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 AN8_bit             _BIT_ACCESS(PORTF,3)
// PORTF<AN9>
extern volatile __bit                   AN9                 __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 AN9_bit             _BIT_ACCESS(PORTF,4)
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
// ANSELE<ANSE0>
extern volatile __bit                   ANSE0               __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 ANSE0_bit           _BIT_ACCESS(ANSELE,0)
// ANSELE<ANSE1>
extern volatile __bit                   ANSE1               __at(0xC81);	// @ (0x190 * 8 + 1)
#define                                 ANSE1_bit           _BIT_ACCESS(ANSELE,1)
// ANSELE<ANSE2>
extern volatile __bit                   ANSE2               __at(0xC82);	// @ (0x190 * 8 + 2)
#define                                 ANSE2_bit           _BIT_ACCESS(ANSELE,2)
// ANSELF<ANSF0>
extern volatile __bit                   ANSF0               __at(0x2060);	// @ (0x40C * 8 + 0)
#define                                 ANSF0_bit           _BIT_ACCESS(ANSELF,0)
// ANSELF<ANSF1>
extern volatile __bit                   ANSF1               __at(0x2061);	// @ (0x40C * 8 + 1)
#define                                 ANSF1_bit           _BIT_ACCESS(ANSELF,1)
// ANSELF<ANSF2>
extern volatile __bit                   ANSF2               __at(0x2062);	// @ (0x40C * 8 + 2)
#define                                 ANSF2_bit           _BIT_ACCESS(ANSELF,2)
// ANSELF<ANSF3>
extern volatile __bit                   ANSF3               __at(0x2063);	// @ (0x40C * 8 + 3)
#define                                 ANSF3_bit           _BIT_ACCESS(ANSELF,3)
// ANSELF<ANSF4>
extern volatile __bit                   ANSF4               __at(0x2064);	// @ (0x40C * 8 + 4)
#define                                 ANSF4_bit           _BIT_ACCESS(ANSELF,4)
// ANSELF<ANSF5>
extern volatile __bit                   ANSF5               __at(0x2065);	// @ (0x40C * 8 + 5)
#define                                 ANSF5_bit           _BIT_ACCESS(ANSELF,5)
// ANSELF<ANSF6>
extern volatile __bit                   ANSF6               __at(0x2066);	// @ (0x40C * 8 + 6)
#define                                 ANSF6_bit           _BIT_ACCESS(ANSELF,6)
// ANSELF<ANSF7>
extern volatile __bit                   ANSF7               __at(0x2067);	// @ (0x40C * 8 + 7)
#define                                 ANSF7_bit           _BIT_ACCESS(ANSELF,7)
// ANSELG<ANSG1>
extern volatile __bit                   ANSG1               __at(0x2069);	// @ (0x40D * 8 + 1)
#define                                 ANSG1_bit           _BIT_ACCESS(ANSELG,1)
// ANSELG<ANSG2>
extern volatile __bit                   ANSG2               __at(0x206A);	// @ (0x40D * 8 + 2)
#define                                 ANSG2_bit           _BIT_ACCESS(ANSELG,2)
// ANSELG<ANSG3>
extern volatile __bit                   ANSG3               __at(0x206B);	// @ (0x40D * 8 + 3)
#define                                 ANSG3_bit           _BIT_ACCESS(ANSELG,3)
// ANSELG<ANSG4>
extern volatile __bit                   ANSG4               __at(0x206C);	// @ (0x40D * 8 + 4)
#define                                 ANSG4_bit           _BIT_ACCESS(ANSELG,4)
// PIE4<BCL2IE>
extern volatile __bit                   BCL2IE              __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 BCL2IE_bit          _BIT_ACCESS(PIE4,1)
// PIR4<BCL2IF>
extern volatile __bit                   BCL2IF              __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 BCL2IF_bit          _BIT_ACCESS(PIR4,1)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// LCDPS<BIASMD>
extern volatile __bit                   BIASMD              __at(0x3C96);	// @ (0x792 * 8 + 6)
#define                                 BIASMD_bit          _BIT_ACCESS(LCDPS,6)
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
// CM1CON0<C1HYS>
extern volatile __bit                   C1HYS               __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 C1HYS_bit           _BIT_ACCESS(CM1CON0,1)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x495);	// @ (0x92 * 8 + 5)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,5)
// PORTF<C1IN0N>
extern volatile __bit                   C1IN0N              __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 C1IN0N_bit          _BIT_ACCESS(PORTF,0)
// PORTF<C1IN1N>
extern volatile __bit                   C1IN1N              __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 C1IN1N_bit          _BIT_ACCESS(PORTF,5)
// PORTF<C1IN2N>
extern volatile __bit                   C1IN2N              __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 C1IN2N_bit          _BIT_ACCESS(PORTF,3)
// PORTF<C1IN3N>
extern volatile __bit                   C1IN3N              __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 C1IN3N_bit          _BIT_ACCESS(PORTF,7)
// PORTF<C1INP>
extern volatile __bit                   C1INP               __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 C1INP_bit           _BIT_ACCESS(PORTF,6)
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
// PORTF<C2IN0N>
extern volatile __bit                   C2IN0N              __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 C2IN0N_bit          _BIT_ACCESS(PORTF,0)
// PORTF<C2IN1N>
extern volatile __bit                   C2IN1N              __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 C2IN1N_bit          _BIT_ACCESS(PORTF,5)
// PORTF<C2IN2N>
extern volatile __bit                   C2IN2N              __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 C2IN2N_bit          _BIT_ACCESS(PORTF,3)
// PORTF<C2IN3N>
extern volatile __bit                   C2IN3N              __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 C2IN3N_bit          _BIT_ACCESS(PORTF,7)
// PORTF<C2INP>
extern volatile __bit                   C2INP               __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 C2INP_bit           _BIT_ACCESS(PORTF,4)
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
// CM3CON0<C3HYS>
extern volatile __bit                   C3HYS               __at(0x8F1);	// @ (0x11E * 8 + 1)
#define                                 C3HYS_bit           _BIT_ACCESS(CM3CON0,1)
// PIE2<C3IE>
extern volatile __bit                   C3IE                __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 C3IE_bit            _BIT_ACCESS(PIE2,1)
// PIR2<C3IF>
extern volatile __bit                   C3IF                __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 C3IF_bit            _BIT_ACCESS(PIR2,1)
// PORTG<C3IN0N>
extern volatile __bit                   C3IN0N              __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 C3IN0N_bit          _BIT_ACCESS(PORTG,3)
// PORTG<C3IN1N>
extern volatile __bit                   C3IN1N              __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 C3IN1N_bit          _BIT_ACCESS(PORTG,4)
// PORTF<C3IN2N>
extern volatile __bit                   C3IN2N              __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 C3IN2N_bit          _BIT_ACCESS(PORTF,3)
// PORTF<C3IN3N>
extern volatile __bit                   C3IN3N              __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 C3IN3N_bit          _BIT_ACCESS(PORTF,7)
// PORTG<C3INP>
extern volatile __bit                   C3INP               __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 C3INP_bit           _BIT_ACCESS(PORTG,2)
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
// CM3CON0<C3OE>
extern volatile __bit                   C3OE                __at(0x8F5);	// @ (0x11E * 8 + 5)
#define                                 C3OE_bit            _BIT_ACCESS(CM3CON0,5)
// CM3CON0<C3ON>
extern volatile __bit                   C3ON                __at(0x8F7);	// @ (0x11E * 8 + 7)
#define                                 C3ON_bit            _BIT_ACCESS(CM3CON0,7)
// CM3CON1<C3PCH0>
extern volatile __bit                   C3PCH0              __at(0x8FC);	// @ (0x11F * 8 + 4)
#define                                 C3PCH0_bit          _BIT_ACCESS(CM3CON1,4)
// CM3CON1<C3PCH1>
extern volatile __bit                   C3PCH1              __at(0x8FD);	// @ (0x11F * 8 + 5)
#define                                 C3PCH1_bit          _BIT_ACCESS(CM3CON1,5)
// CM3CON0<C3POL>
extern volatile __bit                   C3POL               __at(0x8F4);	// @ (0x11E * 8 + 4)
#define                                 C3POL_bit           _BIT_ACCESS(CM3CON0,4)
// CM3CON0<C3SP>
extern volatile __bit                   C3SP                __at(0x8F2);	// @ (0x11E * 8 + 2)
#define                                 C3SP_bit            _BIT_ACCESS(CM3CON0,2)
// CM3CON0<C3SYNC>
extern volatile __bit                   C3SYNC              __at(0x8F0);	// @ (0x11E * 8 + 0)
#define                                 C3SYNC_bit          _BIT_ACCESS(CM3CON0,0)
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
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x72);	// @ (0xE * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
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
extern volatile __bit                   CCP2SEL             __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 CCP2SEL_bit         _BIT_ACCESS(APFCON,2)
// PORTG<CCP3>
extern volatile __bit                   CCP3                __at(0x1468);	// @ (0x28D * 8 + 0)
#define                                 CCP3_bit            _BIT_ACCESS(PORTG,0)
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
// PORTG<CCP4>
extern volatile __bit                   CCP4                __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 CCP4_bit            _BIT_ACCESS(PORTG,3)
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
// PORTG<CCP5>
extern volatile __bit                   CCP5                __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 CCP5_bit            _BIT_ACCESS(PORTG,4)
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
// PORTC<CK1>
extern volatile __bit                   CK1                 __at(0x76);	// @ (0xE * 8 + 6)
#define                                 CK1_bit             _BIT_ACCESS(PORTC,6)
// PORTG<CK2>
extern volatile __bit                   CK2                 __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 CK2_bit             _BIT_ACCESS(PORTG,1)
// PORTA<CLKIN>
extern volatile __bit                   CLKIN               __at(0x67);	// @ (0xC * 8 + 7)
#define                                 CLKIN_bit           _BIT_ACCESS(PORTA,7)
// PORTA<CLKOUT>
extern volatile __bit                   CLKOUT              __at(0x66);	// @ (0xC * 8 + 6)
#define                                 CLKOUT_bit          _BIT_ACCESS(PORTA,6)
// PORTE<COM0>
extern volatile __bit                   COM0                __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 COM0_bit            _BIT_ACCESS(PORTE,3)
// PORTE<COM1>
extern volatile __bit                   COM1                __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 COM1_bit            _BIT_ACCESS(PORTE,4)
// PORTE<COM2>
extern volatile __bit                   COM2                __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 COM2_bit            _BIT_ACCESS(PORTE,5)
// PORTE<COM3>
extern volatile __bit                   COM3                __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 COM3_bit            _BIT_ACCESS(PORTE,6)
// PORTA<CPS0>
extern volatile __bit                   CPS0                __at(0x60);	// @ (0xC * 8 + 0)
#define                                 CPS0_bit            _BIT_ACCESS(PORTA,0)
// PORTA<CPS1>
extern volatile __bit                   CPS1                __at(0x61);	// @ (0xC * 8 + 1)
#define                                 CPS1_bit            _BIT_ACCESS(PORTA,1)
// PORTF<CPS10>
extern volatile __bit                   CPS10               __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 CPS10_bit           _BIT_ACCESS(PORTF,5)
// PORTF<CPS11>
extern volatile __bit                   CPS11               __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 CPS11_bit           _BIT_ACCESS(PORTF,6)
// PORTG<CPS12>
extern volatile __bit                   CPS12               __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 CPS12_bit           _BIT_ACCESS(PORTG,4)
// PORTG<CPS13>
extern volatile __bit                   CPS13               __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 CPS13_bit           _BIT_ACCESS(PORTG,3)
// PORTG<CPS14>
extern volatile __bit                   CPS14               __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 CPS14_bit           _BIT_ACCESS(PORTG,2)
// PORTG<CPS15>
extern volatile __bit                   CPS15               __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 CPS15_bit           _BIT_ACCESS(PORTG,1)
// PORTF<CPS16>
extern volatile __bit                   CPS16               __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 CPS16_bit           _BIT_ACCESS(PORTF,0)
// PORTA<CPS2>
extern volatile __bit                   CPS2                __at(0x62);	// @ (0xC * 8 + 2)
#define                                 CPS2_bit            _BIT_ACCESS(PORTA,2)
// PORTA<CPS3>
extern volatile __bit                   CPS3                __at(0x63);	// @ (0xC * 8 + 3)
#define                                 CPS3_bit            _BIT_ACCESS(PORTA,3)
// PORTA<CPS4>
extern volatile __bit                   CPS4                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 CPS4_bit            _BIT_ACCESS(PORTA,5)
// PORTF<CPS5>
extern volatile __bit                   CPS5                __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 CPS5_bit            _BIT_ACCESS(PORTF,7)
// PORTF<CPS6>
extern volatile __bit                   CPS6                __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 CPS6_bit            _BIT_ACCESS(PORTF,1)
// PORTF<CPS7>
extern volatile __bit                   CPS7                __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 CPS7_bit            _BIT_ACCESS(PORTF,2)
// PORTF<CPS8>
extern volatile __bit                   CPS8                __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 CPS8_bit            _BIT_ACCESS(PORTF,3)
// PORTF<CPS9>
extern volatile __bit                   CPS9                __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 CPS9_bit            _BIT_ACCESS(PORTF,4)
// CPSCON1<CPSCH0>
extern volatile __bit                   CPSCH0              __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 CPSCH0_bit          _BIT_ACCESS(CPSCON1,0)
// CPSCON1<CPSCH1>
extern volatile __bit                   CPSCH1              __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 CPSCH1_bit          _BIT_ACCESS(CPSCON1,1)
// CPSCON1<CPSCH2>
extern volatile __bit                   CPSCH2              __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CPSCH2_bit          _BIT_ACCESS(CPSCON1,2)
// CPSCON1<CPSCH3>
extern volatile __bit                   CPSCH3              __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CPSCH3_bit          _BIT_ACCESS(CPSCON1,3)
// CPSCON1<CPSCH4>
extern volatile __bit                   CPSCH4              __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CPSCH4_bit          _BIT_ACCESS(CPSCON1,4)
// CPSCON0<CPSON>
extern volatile __bit                   CPSON               __at(0xF7);	// @ (0x1E * 8 + 7)
#define                                 CPSON_bit           _BIT_ACCESS(CPSCON0,7)
// CPSCON0<CPSOUT>
extern volatile __bit                   CPSOUT              __at(0xF1);	// @ (0x1E * 8 + 1)
#define                                 CPSOUT_bit          _BIT_ACCESS(CPSCON0,1)
// CPSCON0<CPSRM>
extern volatile __bit                   CPSRM               __at(0xF6);	// @ (0x1E * 8 + 6)
#define                                 CPSRM_bit           _BIT_ACCESS(CPSCON0,6)
// CPSCON0<CPSRNG0>
extern volatile __bit                   CPSRNG0             __at(0xF2);	// @ (0x1E * 8 + 2)
#define                                 CPSRNG0_bit         _BIT_ACCESS(CPSCON0,2)
// CPSCON0<CPSRNG1>
extern volatile __bit                   CPSRNG1             __at(0xF3);	// @ (0x1E * 8 + 3)
#define                                 CPSRNG1_bit         _BIT_ACCESS(CPSCON0,3)
// LCDCON<CS0>
extern volatile __bit                   CS0                 __at(0x3C8A);	// @ (0x791 * 8 + 2)
#define                                 CS0_bit             _BIT_ACCESS(LCDCON,2)
// LCDCON<CS1>
extern volatile __bit                   CS1                 __at(0x3C8B);	// @ (0x791 * 8 + 3)
#define                                 CS1_bit             _BIT_ACCESS(LCDCON,3)
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
// PORTF<DACOUT>
extern volatile __bit                   DACOUT              __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 DACOUT_bit          _BIT_ACCESS(PORTF,5)
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
// PORTC<DT1>
extern volatile __bit                   DT1                 __at(0x77);	// @ (0xE * 8 + 7)
#define                                 DT1_bit             _BIT_ACCESS(PORTC,7)
// PORTG<DT2>
extern volatile __bit                   DT2                 __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 DT2_bit             _BIT_ACCESS(PORTG,2)
// PIE2<EEIE>
extern volatile __bit                   EEIE                __at(0x494);	// @ (0x92 * 8 + 4)
#define                                 EEIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<EEIF>
extern volatile __bit                   EEIF                __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 EEIF_bit            _BIT_ACCESS(PIR2,4)
// EECON1<EEPGD>
extern volatile __bit                   EEPGD               __at(0xCAF);	// @ (0x195 * 8 + 7)
#define                                 EEPGD_bit           _BIT_ACCESS(EECON1,7)
// PORTB<FLT0>
extern volatile __bit                   FLT0                __at(0x68);	// @ (0xD * 8 + 0)
#define                                 FLT0_bit            _BIT_ACCESS(PORTB,0)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
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
// LATE<LATE3>
extern volatile __bit                   LATE3               __at(0x883);	// @ (0x110 * 8 + 3)
#define                                 LATE3_bit           _BIT_ACCESS(LATE,3)
// LATE<LATE4>
extern volatile __bit                   LATE4               __at(0x884);	// @ (0x110 * 8 + 4)
#define                                 LATE4_bit           _BIT_ACCESS(LATE,4)
// LATE<LATE5>
extern volatile __bit                   LATE5               __at(0x885);	// @ (0x110 * 8 + 5)
#define                                 LATE5_bit           _BIT_ACCESS(LATE,5)
// LATE<LATE6>
extern volatile __bit                   LATE6               __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 LATE6_bit           _BIT_ACCESS(LATE,6)
// LATE<LATE7>
extern volatile __bit                   LATE7               __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 LATE7_bit           _BIT_ACCESS(LATE,7)
// LATF<LATF0>
extern volatile __bit                   LATF0               __at(0x1C60);	// @ (0x38C * 8 + 0)
#define                                 LATF0_bit           _BIT_ACCESS(LATF,0)
// LATF<LATF1>
extern volatile __bit                   LATF1               __at(0x1C61);	// @ (0x38C * 8 + 1)
#define                                 LATF1_bit           _BIT_ACCESS(LATF,1)
// LATF<LATF2>
extern volatile __bit                   LATF2               __at(0x1C62);	// @ (0x38C * 8 + 2)
#define                                 LATF2_bit           _BIT_ACCESS(LATF,2)
// LATF<LATF3>
extern volatile __bit                   LATF3               __at(0x1C63);	// @ (0x38C * 8 + 3)
#define                                 LATF3_bit           _BIT_ACCESS(LATF,3)
// LATF<LATF4>
extern volatile __bit                   LATF4               __at(0x1C64);	// @ (0x38C * 8 + 4)
#define                                 LATF4_bit           _BIT_ACCESS(LATF,4)
// LATF<LATF5>
extern volatile __bit                   LATF5               __at(0x1C65);	// @ (0x38C * 8 + 5)
#define                                 LATF5_bit           _BIT_ACCESS(LATF,5)
// LATF<LATF6>
extern volatile __bit                   LATF6               __at(0x1C66);	// @ (0x38C * 8 + 6)
#define                                 LATF6_bit           _BIT_ACCESS(LATF,6)
// LATF<LATF7>
extern volatile __bit                   LATF7               __at(0x1C67);	// @ (0x38C * 8 + 7)
#define                                 LATF7_bit           _BIT_ACCESS(LATF,7)
// LATG<LATG0>
extern volatile __bit                   LATG0               __at(0x1C68);	// @ (0x38D * 8 + 0)
#define                                 LATG0_bit           _BIT_ACCESS(LATG,0)
// LATG<LATG1>
extern volatile __bit                   LATG1               __at(0x1C69);	// @ (0x38D * 8 + 1)
#define                                 LATG1_bit           _BIT_ACCESS(LATG,1)
// LATG<LATG2>
extern volatile __bit                   LATG2               __at(0x1C6A);	// @ (0x38D * 8 + 2)
#define                                 LATG2_bit           _BIT_ACCESS(LATG,2)
// LATG<LATG3>
extern volatile __bit                   LATG3               __at(0x1C6B);	// @ (0x38D * 8 + 3)
#define                                 LATG3_bit           _BIT_ACCESS(LATG,3)
// LATG<LATG4>
extern volatile __bit                   LATG4               __at(0x1C6C);	// @ (0x38D * 8 + 4)
#define                                 LATG4_bit           _BIT_ACCESS(LATG,4)
// LATG<LATG5>
extern volatile __bit                   LATG5               __at(0x1C6D);	// @ (0x38D * 8 + 5)
#define                                 LATG5_bit           _BIT_ACCESS(LATG,5)
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
// CMOUT<MC3OUT>
extern volatile __bit                   MC3OUT              __at(0x8AA);	// @ (0x115 * 8 + 2)
#define                                 MC3OUT_bit          _BIT_ACCESS(CMOUT,2)
// OSCSTAT<MFIOFR>
extern volatile __bit                   MFIOFR              __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 MFIOFR_bit          _BIT_ACCESS(OSCSTAT,2)
// PORTA<OSC1>
extern volatile __bit                   OSC1                __at(0x67);	// @ (0xC * 8 + 7)
#define                                 OSC1_bit            _BIT_ACCESS(PORTA,7)
// PORTA<OSC2>
extern volatile __bit                   OSC2                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 OSC2_bit            _BIT_ACCESS(PORTA,6)
// PIE2<OSFIE>
extern volatile __bit                   OSFIE               __at(0x497);	// @ (0x92 * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<OSFIF>
extern volatile __bit                   OSFIF               __at(0x97);	// @ (0x12 * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR2,7)
// OSCSTAT<OSTS>
extern volatile __bit                   OSTS                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OSTS_bit            _BIT_ACCESS(OSCSTAT,5)
// PORTC<P1A>
extern volatile __bit                   P1A                 __at(0x72);	// @ (0xE * 8 + 2)
#define                                 P1A_bit             _BIT_ACCESS(PORTC,2)
// APFCON<P1BSEL>
extern volatile __bit                   P1BSEL              __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 P1BSEL_bit          _BIT_ACCESS(APFCON,0)
// APFCON<P1CSEL>
extern volatile __bit                   P1CSEL              __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 P1CSEL_bit          _BIT_ACCESS(APFCON,1)
// PORTG<P1D>
extern volatile __bit                   P1D                 __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 P1D_bit             _BIT_ACCESS(PORTG,4)
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
extern volatile __bit                   P2BSEL              __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 P2BSEL_bit          _BIT_ACCESS(APFCON,3)
// APFCON<P2CSEL>
extern volatile __bit                   P2CSEL              __at(0x8EC);	// @ (0x11D * 8 + 4)
#define                                 P2CSEL_bit          _BIT_ACCESS(APFCON,4)
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
// APFCON<P2DSEL>
extern volatile __bit                   P2DSEL              __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 P2DSEL_bit          _BIT_ACCESS(APFCON,5)
// CCP2CON<P2M0>
extern volatile __bit                   P2M0                __at(0x14D6);	// @ (0x29A * 8 + 6)
#define                                 P2M0_bit            _BIT_ACCESS(CCP2CON,6)
// CCP2CON<P2M1>
extern volatile __bit                   P2M1                __at(0x14D7);	// @ (0x29A * 8 + 7)
#define                                 P2M1_bit            _BIT_ACCESS(CCP2CON,7)
// PWM2CON<P2RSEN>
extern volatile __bit                   P2RSEN              __at(0x14DF);	// @ (0x29B * 8 + 7)
#define                                 P2RSEN_bit          _BIT_ACCESS(PWM2CON,7)
// PORTG<P3A>
extern volatile __bit                   P3A                 __at(0x1468);	// @ (0x28D * 8 + 0)
#define                                 P3A_bit             _BIT_ACCESS(PORTG,0)
// APFCON<P3BSEL>
extern volatile __bit                   P3BSEL              __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 P3BSEL_bit          _BIT_ACCESS(APFCON,6)
// APFCON<P3CSEL>
extern volatile __bit                   P3CSEL              __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 P3CSEL_bit          _BIT_ACCESS(APFCON,7)
// PORTG<P3D>
extern volatile __bit                   P3D                 __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 P3D_bit             _BIT_ACCESS(PORTG,3)
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
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
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
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RC1IE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RC1IF_bit           _BIT_ACCESS(PIR1,5)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x72);	// @ (0xE * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PIE4<RC2IE>
extern volatile __bit                   RC2IE               __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 RC2IE_bit           _BIT_ACCESS(PIE4,5)
// PIR4<RC2IF>
extern volatile __bit                   RC2IF               __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 RC2IF_bit           _BIT_ACCESS(PIR4,5)
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
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
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
// PORTE<RE4>
extern volatile __bit                   RE4                 __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 RE4_bit             _BIT_ACCESS(PORTE,4)
// PORTE<RE5>
extern volatile __bit                   RE5                 __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 RE5_bit             _BIT_ACCESS(PORTE,5)
// PORTE<RE6>
extern volatile __bit                   RE6                 __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 RE6_bit             _BIT_ACCESS(PORTE,6)
// PORTE<RE7>
extern volatile __bit                   RE7                 __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 RE7_bit             _BIT_ACCESS(PORTE,7)
// PORTF<RF0>
extern volatile __bit                   RF0                 __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 RF0_bit             _BIT_ACCESS(PORTF,0)
// PORTF<RF1>
extern volatile __bit                   RF1                 __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 RF1_bit             _BIT_ACCESS(PORTF,1)
// PORTF<RF2>
extern volatile __bit                   RF2                 __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 RF2_bit             _BIT_ACCESS(PORTF,2)
// PORTF<RF3>
extern volatile __bit                   RF3                 __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 RF3_bit             _BIT_ACCESS(PORTF,3)
// PORTF<RF4>
extern volatile __bit                   RF4                 __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 RF4_bit             _BIT_ACCESS(PORTF,4)
// PORTF<RF5>
extern volatile __bit                   RF5                 __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 RF5_bit             _BIT_ACCESS(PORTF,5)
// PORTF<RF6>
extern volatile __bit                   RF6                 __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 RF6_bit             _BIT_ACCESS(PORTF,6)
// PORTF<RF7>
extern volatile __bit                   RF7                 __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 RF7_bit             _BIT_ACCESS(PORTF,7)
// PORTG<RG0>
extern volatile __bit                   RG0                 __at(0x1468);	// @ (0x28D * 8 + 0)
#define                                 RG0_bit             _BIT_ACCESS(PORTG,0)
// PORTG<RG1>
extern volatile __bit                   RG1                 __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 RG1_bit             _BIT_ACCESS(PORTG,1)
// PORTG<RG2>
extern volatile __bit                   RG2                 __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 RG2_bit             _BIT_ACCESS(PORTG,2)
// PORTG<RG3>
extern volatile __bit                   RG3                 __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 RG3_bit             _BIT_ACCESS(PORTG,3)
// PORTG<RG4>
extern volatile __bit                   RG4                 __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 RG4_bit             _BIT_ACCESS(PORTG,4)
// PORTG<RG5>
extern volatile __bit                   RG5                 __at(0x146D);	// @ (0x28D * 8 + 5)
#define                                 RG5_bit             _BIT_ACCESS(PORTG,5)
// PORTC<RX1>
extern volatile __bit                   RX1                 __at(0x77);	// @ (0xE * 8 + 7)
#define                                 RX1_bit             _BIT_ACCESS(PORTC,7)
// PORTG<RX2>
extern volatile __bit                   RX2                 __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 RX2_bit             _BIT_ACCESS(PORTG,2)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// PORTC<SCK1>
extern volatile __bit                   SCK1                __at(0x73);	// @ (0xE * 8 + 3)
#define                                 SCK1_bit            _BIT_ACCESS(PORTC,3)
// PORTD<SCK2>
extern volatile __bit                   SCK2                __at(0x7E);	// @ (0xF * 8 + 6)
#define                                 SCK2_bit            _BIT_ACCESS(PORTD,6)
// PORTC<SCL1>
extern volatile __bit                   SCL1                __at(0x73);	// @ (0xE * 8 + 3)
#define                                 SCL1_bit            _BIT_ACCESS(PORTC,3)
// PORTD<SCL2>
extern volatile __bit                   SCL2                __at(0x7E);	// @ (0xF * 8 + 6)
#define                                 SCL2_bit            _BIT_ACCESS(PORTD,6)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// PORTC<SDA1>
extern volatile __bit                   SDA1                __at(0x74);	// @ (0xE * 8 + 4)
#define                                 SDA1_bit            _BIT_ACCESS(PORTC,4)
// PORTD<SDA2>
extern volatile __bit                   SDA2                __at(0x7D);	// @ (0xF * 8 + 5)
#define                                 SDA2_bit            _BIT_ACCESS(PORTD,5)
// PORTC<SDI1>
extern volatile __bit                   SDI1                __at(0x74);	// @ (0xE * 8 + 4)
#define                                 SDI1_bit            _BIT_ACCESS(PORTC,4)
// PORTD<SDI2>
extern volatile __bit                   SDI2                __at(0x7D);	// @ (0xF * 8 + 5)
#define                                 SDI2_bit            _BIT_ACCESS(PORTD,5)
// PORTC<SDO1>
extern volatile __bit                   SDO1                __at(0x75);	// @ (0xE * 8 + 5)
#define                                 SDO1_bit            _BIT_ACCESS(PORTC,5)
// PORTD<SDO2>
extern volatile __bit                   SDO2                __at(0x7C);	// @ (0xF * 8 + 4)
#define                                 SDO2_bit            _BIT_ACCESS(PORTD,4)
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
// LCDSE2<SE16>
extern volatile __bit                   SE16                __at(0x3CD0);	// @ (0x79A * 8 + 0)
#define                                 SE16_bit            _BIT_ACCESS(LCDSE2,0)
// LCDSE2<SE17>
extern volatile __bit                   SE17                __at(0x3CD1);	// @ (0x79A * 8 + 1)
#define                                 SE17_bit            _BIT_ACCESS(LCDSE2,1)
// LCDSE2<SE18>
extern volatile __bit                   SE18                __at(0x3CD2);	// @ (0x79A * 8 + 2)
#define                                 SE18_bit            _BIT_ACCESS(LCDSE2,2)
// LCDSE2<SE19>
extern volatile __bit                   SE19                __at(0x3CD3);	// @ (0x79A * 8 + 3)
#define                                 SE19_bit            _BIT_ACCESS(LCDSE2,3)
// LCDSE0<SE2>
extern volatile __bit                   SE2                 __at(0x3CC2);	// @ (0x798 * 8 + 2)
#define                                 SE2_bit             _BIT_ACCESS(LCDSE0,2)
// LCDSE2<SE20>
extern volatile __bit                   SE20                __at(0x3CD4);	// @ (0x79A * 8 + 4)
#define                                 SE20_bit            _BIT_ACCESS(LCDSE2,4)
// LCDSE2<SE21>
extern volatile __bit                   SE21                __at(0x3CD5);	// @ (0x79A * 8 + 5)
#define                                 SE21_bit            _BIT_ACCESS(LCDSE2,5)
// LCDSE2<SE22>
extern volatile __bit                   SE22                __at(0x3CD6);	// @ (0x79A * 8 + 6)
#define                                 SE22_bit            _BIT_ACCESS(LCDSE2,6)
// LCDSE2<SE23>
extern volatile __bit                   SE23                __at(0x3CD7);	// @ (0x79A * 8 + 7)
#define                                 SE23_bit            _BIT_ACCESS(LCDSE2,7)
// LCDSE3<SE24>
extern volatile __bit                   SE24                __at(0x3CD8);	// @ (0x79B * 8 + 0)
#define                                 SE24_bit            _BIT_ACCESS(LCDSE3,0)
// LCDSE3<SE25>
extern volatile __bit                   SE25                __at(0x3CD9);	// @ (0x79B * 8 + 1)
#define                                 SE25_bit            _BIT_ACCESS(LCDSE3,1)
// LCDSE3<SE26>
extern volatile __bit                   SE26                __at(0x3CDA);	// @ (0x79B * 8 + 2)
#define                                 SE26_bit            _BIT_ACCESS(LCDSE3,2)
// LCDSE3<SE27>
extern volatile __bit                   SE27                __at(0x3CDB);	// @ (0x79B * 8 + 3)
#define                                 SE27_bit            _BIT_ACCESS(LCDSE3,3)
// LCDSE3<SE28>
extern volatile __bit                   SE28                __at(0x3CDC);	// @ (0x79B * 8 + 4)
#define                                 SE28_bit            _BIT_ACCESS(LCDSE3,4)
// LCDSE3<SE29>
extern volatile __bit                   SE29                __at(0x3CDD);	// @ (0x79B * 8 + 5)
#define                                 SE29_bit            _BIT_ACCESS(LCDSE3,5)
// LCDSE0<SE3>
extern volatile __bit                   SE3                 __at(0x3CC3);	// @ (0x798 * 8 + 3)
#define                                 SE3_bit             _BIT_ACCESS(LCDSE0,3)
// LCDSE3<SE30>
extern volatile __bit                   SE30                __at(0x3CDE);	// @ (0x79B * 8 + 6)
#define                                 SE30_bit            _BIT_ACCESS(LCDSE3,6)
// LCDSE3<SE31>
extern volatile __bit                   SE31                __at(0x3CDF);	// @ (0x79B * 8 + 7)
#define                                 SE31_bit            _BIT_ACCESS(LCDSE3,7)
// LCDSE4<SE32>
extern volatile __bit                   SE32                __at(0x3CE0);	// @ (0x79C * 8 + 0)
#define                                 SE32_bit            _BIT_ACCESS(LCDSE4,0)
// LCDSE4<SE33>
extern volatile __bit                   SE33                __at(0x3CE1);	// @ (0x79C * 8 + 1)
#define                                 SE33_bit            _BIT_ACCESS(LCDSE4,1)
// LCDSE4<SE34>
extern volatile __bit                   SE34                __at(0x3CE2);	// @ (0x79C * 8 + 2)
#define                                 SE34_bit            _BIT_ACCESS(LCDSE4,2)
// LCDSE4<SE35>
extern volatile __bit                   SE35                __at(0x3CE3);	// @ (0x79C * 8 + 3)
#define                                 SE35_bit            _BIT_ACCESS(LCDSE4,3)
// LCDSE4<SE36>
extern volatile __bit                   SE36                __at(0x3CE4);	// @ (0x79C * 8 + 4)
#define                                 SE36_bit            _BIT_ACCESS(LCDSE4,4)
// LCDSE4<SE37>
extern volatile __bit                   SE37                __at(0x3CE5);	// @ (0x79C * 8 + 5)
#define                                 SE37_bit            _BIT_ACCESS(LCDSE4,5)
// LCDSE4<SE38>
extern volatile __bit                   SE38                __at(0x3CE6);	// @ (0x79C * 8 + 6)
#define                                 SE38_bit            _BIT_ACCESS(LCDSE4,6)
// LCDSE4<SE39>
extern volatile __bit                   SE39                __at(0x3CE7);	// @ (0x79C * 8 + 7)
#define                                 SE39_bit            _BIT_ACCESS(LCDSE4,7)
// LCDSE0<SE4>
extern volatile __bit                   SE4                 __at(0x3CC4);	// @ (0x798 * 8 + 4)
#define                                 SE4_bit             _BIT_ACCESS(LCDSE0,4)
// LCDSE5<SE40>
extern volatile __bit                   SE40                __at(0x3CE8);	// @ (0x79D * 8 + 0)
#define                                 SE40_bit            _BIT_ACCESS(LCDSE5,0)
// LCDSE5<SE41>
extern volatile __bit                   SE41                __at(0x3CE9);	// @ (0x79D * 8 + 1)
#define                                 SE41_bit            _BIT_ACCESS(LCDSE5,1)
// LCDSE5<SE42>
extern volatile __bit                   SE42                __at(0x3CEA);	// @ (0x79D * 8 + 2)
#define                                 SE42_bit            _BIT_ACCESS(LCDSE5,2)
// LCDSE5<SE43>
extern volatile __bit                   SE43                __at(0x3CEB);	// @ (0x79D * 8 + 3)
#define                                 SE43_bit            _BIT_ACCESS(LCDSE5,3)
// LCDSE5<SE44>
extern volatile __bit                   SE44                __at(0x3CEC);	// @ (0x79D * 8 + 4)
#define                                 SE44_bit            _BIT_ACCESS(LCDSE5,4)
// LCDSE5<SE45>
extern volatile __bit                   SE45                __at(0x3CED);	// @ (0x79D * 8 + 5)
#define                                 SE45_bit            _BIT_ACCESS(LCDSE5,5)
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
// PORTD<SEG0>
extern volatile __bit                   SEG0                __at(0x78);	// @ (0xF * 8 + 0)
#define                                 SEG0_bit            _BIT_ACCESS(PORTD,0)
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
// PORTD<SEG1>
extern volatile __bit                   SEG1                __at(0x79);	// @ (0xF * 8 + 1)
#define                                 SEG1_bit            _BIT_ACCESS(PORTD,1)
// PORTB<SEG10>
extern volatile __bit                   SEG10               __at(0x6B);	// @ (0xD * 8 + 3)
#define                                 SEG10_bit           _BIT_ACCESS(PORTB,3)
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
// PORTB<SEG11>
extern volatile __bit                   SEG11               __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 SEG11_bit           _BIT_ACCESS(PORTB,4)
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
// PORTC<SEG12>
extern volatile __bit                   SEG12               __at(0x75);	// @ (0xE * 8 + 5)
#define                                 SEG12_bit           _BIT_ACCESS(PORTC,5)
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
// PORTC<SEG13>
extern volatile __bit                   SEG13               __at(0x72);	// @ (0xE * 8 + 2)
#define                                 SEG13_bit           _BIT_ACCESS(PORTC,2)
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
// PORTA<SEG14>
extern volatile __bit                   SEG14               __at(0x64);	// @ (0xC * 8 + 4)
#define                                 SEG14_bit           _BIT_ACCESS(PORTA,4)
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
// PORTA<SEG15>
extern volatile __bit                   SEG15               __at(0x65);	// @ (0xC * 8 + 5)
#define                                 SEG15_bit           _BIT_ACCESS(PORTA,5)
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
// PORTC<SEG16>
extern volatile __bit                   SEG16               __at(0x74);	// @ (0xE * 8 + 4)
#define                                 SEG16_bit           _BIT_ACCESS(PORTC,4)
// LCDDATA2<SEG16COM0>
extern volatile __bit                   SEG16COM0           __at(0x3D10);	// @ (0x7A2 * 8 + 0)
#define                                 SEG16COM0_bit       _BIT_ACCESS(LCDDATA2,0)
// LCDDATA5<SEG16COM1>
extern volatile __bit                   SEG16COM1           __at(0x3D28);	// @ (0x7A5 * 8 + 0)
#define                                 SEG16COM1_bit       _BIT_ACCESS(LCDDATA5,0)
// LCDDATA8<SEG16COM2>
extern volatile __bit                   SEG16COM2           __at(0x3D40);	// @ (0x7A8 * 8 + 0)
#define                                 SEG16COM2_bit       _BIT_ACCESS(LCDDATA8,0)
// LCDDATA11<SEG16COM3>
extern volatile __bit                   SEG16COM3           __at(0x3D58);	// @ (0x7AB * 8 + 0)
#define                                 SEG16COM3_bit       _BIT_ACCESS(LCDDATA11,0)
// PORTC<SEG17>
extern volatile __bit                   SEG17               __at(0x73);	// @ (0xE * 8 + 3)
#define                                 SEG17_bit           _BIT_ACCESS(PORTC,3)
// LCDDATA2<SEG17COM0>
extern volatile __bit                   SEG17COM0           __at(0x3D11);	// @ (0x7A2 * 8 + 1)
#define                                 SEG17COM0_bit       _BIT_ACCESS(LCDDATA2,1)
// LCDDATA5<SEG17COM1>
extern volatile __bit                   SEG17COM1           __at(0x3D29);	// @ (0x7A5 * 8 + 1)
#define                                 SEG17COM1_bit       _BIT_ACCESS(LCDDATA5,1)
// LCDDATA8<SEG17COM2>
extern volatile __bit                   SEG17COM2           __at(0x3D41);	// @ (0x7A8 * 8 + 1)
#define                                 SEG17COM2_bit       _BIT_ACCESS(LCDDATA8,1)
// LCDDATA11<SEG17COM3>
extern volatile __bit                   SEG17COM3           __at(0x3D59);	// @ (0x7AB * 8 + 1)
#define                                 SEG17COM3_bit       _BIT_ACCESS(LCDDATA11,1)
// PORTA<SEG18>
extern volatile __bit                   SEG18               __at(0x61);	// @ (0xC * 8 + 1)
#define                                 SEG18_bit           _BIT_ACCESS(PORTA,1)
// LCDDATA2<SEG18COM0>
extern volatile __bit                   SEG18COM0           __at(0x3D12);	// @ (0x7A2 * 8 + 2)
#define                                 SEG18COM0_bit       _BIT_ACCESS(LCDDATA2,2)
// LCDDATA5<SEG18COM1>
extern volatile __bit                   SEG18COM1           __at(0x3D2A);	// @ (0x7A5 * 8 + 2)
#define                                 SEG18COM1_bit       _BIT_ACCESS(LCDDATA5,2)
// LCDDATA8<SEG18COM2>
extern volatile __bit                   SEG18COM2           __at(0x3D42);	// @ (0x7A8 * 8 + 2)
#define                                 SEG18COM2_bit       _BIT_ACCESS(LCDDATA8,2)
// LCDDATA11<SEG18COM3>
extern volatile __bit                   SEG18COM3           __at(0x3D5A);	// @ (0x7AB * 8 + 2)
#define                                 SEG18COM3_bit       _BIT_ACCESS(LCDDATA11,2)
// PORTF<SEG19>
extern volatile __bit                   SEG19               __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 SEG19_bit           _BIT_ACCESS(PORTF,1)
// LCDDATA2<SEG19COM0>
extern volatile __bit                   SEG19COM0           __at(0x3D13);	// @ (0x7A2 * 8 + 3)
#define                                 SEG19COM0_bit       _BIT_ACCESS(LCDDATA2,3)
// LCDDATA5<SEG19COM1>
extern volatile __bit                   SEG19COM1           __at(0x3D2B);	// @ (0x7A5 * 8 + 3)
#define                                 SEG19COM1_bit       _BIT_ACCESS(LCDDATA5,3)
// LCDDATA8<SEG19COM2>
extern volatile __bit                   SEG19COM2           __at(0x3D43);	// @ (0x7A8 * 8 + 3)
#define                                 SEG19COM2_bit       _BIT_ACCESS(LCDDATA8,3)
// LCDDATA11<SEG19COM3>
extern volatile __bit                   SEG19COM3           __at(0x3D5B);	// @ (0x7AB * 8 + 3)
#define                                 SEG19COM3_bit       _BIT_ACCESS(LCDDATA11,3)
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
// PORTD<SEG2>
extern volatile __bit                   SEG2                __at(0x7A);	// @ (0xF * 8 + 2)
#define                                 SEG2_bit            _BIT_ACCESS(PORTD,2)
// PORTF<SEG20>
extern volatile __bit                   SEG20               __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 SEG20_bit           _BIT_ACCESS(PORTF,2)
// LCDDATA2<SEG20COM0>
extern volatile __bit                   SEG20COM0           __at(0x3D14);	// @ (0x7A2 * 8 + 4)
#define                                 SEG20COM0_bit       _BIT_ACCESS(LCDDATA2,4)
// LCDDATA5<SEG20COM1>
extern volatile __bit                   SEG20COM1           __at(0x3D2C);	// @ (0x7A5 * 8 + 4)
#define                                 SEG20COM1_bit       _BIT_ACCESS(LCDDATA5,4)
// LCDDATA8<SEG20COM2>
extern volatile __bit                   SEG20COM2           __at(0x3D44);	// @ (0x7A8 * 8 + 4)
#define                                 SEG20COM2_bit       _BIT_ACCESS(LCDDATA8,4)
// LCDDATA11<SEG20COM3>
extern volatile __bit                   SEG20COM3           __at(0x3D5C);	// @ (0x7AB * 8 + 4)
#define                                 SEG20COM3_bit       _BIT_ACCESS(LCDDATA11,4)
// PORTF<SEG21>
extern volatile __bit                   SEG21               __at(0x1463);	// @ (0x28C * 8 + 3)
#define                                 SEG21_bit           _BIT_ACCESS(PORTF,3)
// LCDDATA2<SEG21COM0>
extern volatile __bit                   SEG21COM0           __at(0x3D15);	// @ (0x7A2 * 8 + 5)
#define                                 SEG21COM0_bit       _BIT_ACCESS(LCDDATA2,5)
// LCDDATA5<SEG21COM1>
extern volatile __bit                   SEG21COM1           __at(0x3D2D);	// @ (0x7A5 * 8 + 5)
#define                                 SEG21COM1_bit       _BIT_ACCESS(LCDDATA5,5)
// LCDDATA8<SEG21COM2>
extern volatile __bit                   SEG21COM2           __at(0x3D45);	// @ (0x7A8 * 8 + 5)
#define                                 SEG21COM2_bit       _BIT_ACCESS(LCDDATA8,5)
// LCDDATA11<SEG21COM3>
extern volatile __bit                   SEG21COM3           __at(0x3D5D);	// @ (0x7AB * 8 + 5)
#define                                 SEG21COM3_bit       _BIT_ACCESS(LCDDATA11,5)
// PORTF<SEG22>
extern volatile __bit                   SEG22               __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 SEG22_bit           _BIT_ACCESS(PORTF,4)
// LCDDATA2<SEG22COM0>
extern volatile __bit                   SEG22COM0           __at(0x3D16);	// @ (0x7A2 * 8 + 6)
#define                                 SEG22COM0_bit       _BIT_ACCESS(LCDDATA2,6)
// LCDDATA5<SEG22COM1>
extern volatile __bit                   SEG22COM1           __at(0x3D2E);	// @ (0x7A5 * 8 + 6)
#define                                 SEG22COM1_bit       _BIT_ACCESS(LCDDATA5,6)
// LCDDATA8<SEG22COM2>
extern volatile __bit                   SEG22COM2           __at(0x3D46);	// @ (0x7A8 * 8 + 6)
#define                                 SEG22COM2_bit       _BIT_ACCESS(LCDDATA8,6)
// LCDDATA11<SEG22COM3>
extern volatile __bit                   SEG22COM3           __at(0x3D5E);	// @ (0x7AB * 8 + 6)
#define                                 SEG22COM3_bit       _BIT_ACCESS(LCDDATA11,6)
// PORTF<SEG23>
extern volatile __bit                   SEG23               __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 SEG23_bit           _BIT_ACCESS(PORTF,5)
// LCDDATA2<SEG23COM0>
extern volatile __bit                   SEG23COM0           __at(0x3D17);	// @ (0x7A2 * 8 + 7)
#define                                 SEG23COM0_bit       _BIT_ACCESS(LCDDATA2,7)
// LCDDATA5<SEG23COM1>
extern volatile __bit                   SEG23COM1           __at(0x3D2F);	// @ (0x7A5 * 8 + 7)
#define                                 SEG23COM1_bit       _BIT_ACCESS(LCDDATA5,7)
// LCDDATA8<SEG23COM2>
extern volatile __bit                   SEG23COM2           __at(0x3D47);	// @ (0x7A8 * 8 + 7)
#define                                 SEG23COM2_bit       _BIT_ACCESS(LCDDATA8,7)
// LCDDATA11<SEG23COM3>
extern volatile __bit                   SEG23COM3           __at(0x3D5F);	// @ (0x7AB * 8 + 7)
#define                                 SEG23COM3_bit       _BIT_ACCESS(LCDDATA11,7)
// PORTF<SEG24>
extern volatile __bit                   SEG24               __at(0x1466);	// @ (0x28C * 8 + 6)
#define                                 SEG24_bit           _BIT_ACCESS(PORTF,6)
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
// PORTF<SEG25>
extern volatile __bit                   SEG25               __at(0x1467);	// @ (0x28C * 8 + 7)
#define                                 SEG25_bit           _BIT_ACCESS(PORTF,7)
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
// PORTG<SEG26>
extern volatile __bit                   SEG26               __at(0x146C);	// @ (0x28D * 8 + 4)
#define                                 SEG26_bit           _BIT_ACCESS(PORTG,4)
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
// PORTC<SEG27>
extern volatile __bit                   SEG27               __at(0x76);	// @ (0xE * 8 + 6)
#define                                 SEG27_bit           _BIT_ACCESS(PORTC,6)
// LCDDATA12<SEG27COM0>
extern volatile __bit                   SEG27COM0           __at(0x3D63);	// @ (0x7AC * 8 + 3)
#define                                 SEG27COM0_bit       _BIT_ACCESS(LCDDATA12,3)
// LCDDATA15<SEG27COM1>
extern volatile __bit                   SEG27COM1           __at(0x3D7B);	// @ (0x7AF * 8 + 3)
#define                                 SEG27COM1_bit       _BIT_ACCESS(LCDDATA15,3)
// LCDDATA18<SEG27COM2>
extern volatile __bit                   SEG27COM2           __at(0x3D93);	// @ (0x7B2 * 8 + 3)
#define                                 SEG27COM2_bit       _BIT_ACCESS(LCDDATA18,3)
// LCDDATA21<SEG27COM3>
extern volatile __bit                   SEG27COM3           __at(0x3DAB);	// @ (0x7B5 * 8 + 3)
#define                                 SEG27COM3_bit       _BIT_ACCESS(LCDDATA21,3)
// PORTC<SEG28>
extern volatile __bit                   SEG28               __at(0x77);	// @ (0xE * 8 + 7)
#define                                 SEG28_bit           _BIT_ACCESS(PORTC,7)
// LCDDATA12<SEG28COM0>
extern volatile __bit                   SEG28COM0           __at(0x3D64);	// @ (0x7AC * 8 + 4)
#define                                 SEG28COM0_bit       _BIT_ACCESS(LCDDATA12,4)
// LCDDATA15<SEG28COM1>
extern volatile __bit                   SEG28COM1           __at(0x3D7C);	// @ (0x7AF * 8 + 4)
#define                                 SEG28COM1_bit       _BIT_ACCESS(LCDDATA15,4)
// LCDDATA18<SEG28COM2>
extern volatile __bit                   SEG28COM2           __at(0x3D94);	// @ (0x7B2 * 8 + 4)
#define                                 SEG28COM2_bit       _BIT_ACCESS(LCDDATA18,4)
// LCDDATA21<SEG28COM3>
extern volatile __bit                   SEG28COM3           __at(0x3DAC);	// @ (0x7B5 * 8 + 4)
#define                                 SEG28COM3_bit       _BIT_ACCESS(LCDDATA21,4)
// PORTB<SEG29>
extern volatile __bit                   SEG29               __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 SEG29_bit           _BIT_ACCESS(PORTB,5)
// LCDDATA12<SEG29COM0>
extern volatile __bit                   SEG29COM0           __at(0x3D65);	// @ (0x7AC * 8 + 5)
#define                                 SEG29COM0_bit       _BIT_ACCESS(LCDDATA12,5)
// LCDDATA15<SEG29COM1>
extern volatile __bit                   SEG29COM1           __at(0x3D7D);	// @ (0x7AF * 8 + 5)
#define                                 SEG29COM1_bit       _BIT_ACCESS(LCDDATA15,5)
// LCDDATA18<SEG29COM2>
extern volatile __bit                   SEG29COM2           __at(0x3D95);	// @ (0x7B2 * 8 + 5)
#define                                 SEG29COM2_bit       _BIT_ACCESS(LCDDATA18,5)
// LCDDATA21<SEG29COM3>
extern volatile __bit                   SEG29COM3           __at(0x3DAD);	// @ (0x7B5 * 8 + 5)
#define                                 SEG29COM3_bit       _BIT_ACCESS(LCDDATA21,5)
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
// PORTD<SEG3>
extern volatile __bit                   SEG3                __at(0x7B);	// @ (0xF * 8 + 3)
#define                                 SEG3_bit            _BIT_ACCESS(PORTD,3)
// PORTB<SEG30>
extern volatile __bit                   SEG30               __at(0x68);	// @ (0xD * 8 + 0)
#define                                 SEG30_bit           _BIT_ACCESS(PORTB,0)
// LCDDATA12<SEG30COM0>
extern volatile __bit                   SEG30COM0           __at(0x3D66);	// @ (0x7AC * 8 + 6)
#define                                 SEG30COM0_bit       _BIT_ACCESS(LCDDATA12,6)
// LCDDATA15<SEG30COM1>
extern volatile __bit                   SEG30COM1           __at(0x3D7E);	// @ (0x7AF * 8 + 6)
#define                                 SEG30COM1_bit       _BIT_ACCESS(LCDDATA15,6)
// LCDDATA18<SEG30COM2>
extern volatile __bit                   SEG30COM2           __at(0x3D96);	// @ (0x7B2 * 8 + 6)
#define                                 SEG30COM2_bit       _BIT_ACCESS(LCDDATA18,6)
// LCDDATA21<SEG30COM3>
extern volatile __bit                   SEG30COM3           __at(0x3DAE);	// @ (0x7B5 * 8 + 6)
#define                                 SEG30COM3_bit       _BIT_ACCESS(LCDDATA21,6)
// PORTE<SEG31>
extern volatile __bit                   SEG31               __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 SEG31_bit           _BIT_ACCESS(PORTE,7)
// LCDDATA12<SEG31COM0>
extern volatile __bit                   SEG31COM0           __at(0x3D67);	// @ (0x7AC * 8 + 7)
#define                                 SEG31COM0_bit       _BIT_ACCESS(LCDDATA12,7)
// LCDDATA15<SEG31COM1>
extern volatile __bit                   SEG31COM1           __at(0x3D7F);	// @ (0x7AF * 8 + 7)
#define                                 SEG31COM1_bit       _BIT_ACCESS(LCDDATA15,7)
// LCDDATA18<SEG31COM2>
extern volatile __bit                   SEG31COM2           __at(0x3D97);	// @ (0x7B2 * 8 + 7)
#define                                 SEG31COM2_bit       _BIT_ACCESS(LCDDATA18,7)
// LCDDATA21<SEG31COM3>
extern volatile __bit                   SEG31COM3           __at(0x3DAF);	// @ (0x7B5 * 8 + 7)
#define                                 SEG31COM3_bit       _BIT_ACCESS(LCDDATA21,7)
// PORTC<SEG32>
extern volatile __bit                   SEG32               __at(0x71);	// @ (0xE * 8 + 1)
#define                                 SEG32_bit           _BIT_ACCESS(PORTC,1)
// LCDDATA13<SEG32COM0>
extern volatile __bit                   SEG32COM0           __at(0x3D68);	// @ (0x7AD * 8 + 0)
#define                                 SEG32COM0_bit       _BIT_ACCESS(LCDDATA13,0)
// LCDDATA16<SEG32COM1>
extern volatile __bit                   SEG32COM1           __at(0x3D80);	// @ (0x7B0 * 8 + 0)
#define                                 SEG32COM1_bit       _BIT_ACCESS(LCDDATA16,0)
// LCDDATA19<SEG32COM2>
extern volatile __bit                   SEG32COM2           __at(0x3D98);	// @ (0x7B3 * 8 + 0)
#define                                 SEG32COM2_bit       _BIT_ACCESS(LCDDATA19,0)
// LCDDATA22<SEG32COM3>
extern volatile __bit                   SEG32COM3           __at(0x3DB0);	// @ (0x7B6 * 8 + 0)
#define                                 SEG32COM3_bit       _BIT_ACCESS(LCDDATA22,0)
// PORTA<SEG33>
extern volatile __bit                   SEG33               __at(0x60);	// @ (0xC * 8 + 0)
#define                                 SEG33_bit           _BIT_ACCESS(PORTA,0)
// LCDDATA13<SEG33COM0>
extern volatile __bit                   SEG33COM0           __at(0x3D69);	// @ (0x7AD * 8 + 1)
#define                                 SEG33COM0_bit       _BIT_ACCESS(LCDDATA13,1)
// LCDDATA16<SEG33COM1>
extern volatile __bit                   SEG33COM1           __at(0x3D81);	// @ (0x7B0 * 8 + 1)
#define                                 SEG33COM1_bit       _BIT_ACCESS(LCDDATA16,1)
// LCDDATA19<SEG33COM2>
extern volatile __bit                   SEG33COM2           __at(0x3D99);	// @ (0x7B3 * 8 + 1)
#define                                 SEG33COM2_bit       _BIT_ACCESS(LCDDATA19,1)
// LCDDATA22<SEG33COM3>
extern volatile __bit                   SEG33COM3           __at(0x3DB1);	// @ (0x7B6 * 8 + 1)
#define                                 SEG33COM3_bit       _BIT_ACCESS(LCDDATA22,1)
// PORTA<SEG34>
extern volatile __bit                   SEG34               __at(0x62);	// @ (0xC * 8 + 2)
#define                                 SEG34_bit           _BIT_ACCESS(PORTA,2)
// LCDDATA13<SEG34COM0>
extern volatile __bit                   SEG34COM0           __at(0x3D6A);	// @ (0x7AD * 8 + 2)
#define                                 SEG34COM0_bit       _BIT_ACCESS(LCDDATA13,2)
// LCDDATA16<SEG34COM1>
extern volatile __bit                   SEG34COM1           __at(0x3D82);	// @ (0x7B0 * 8 + 2)
#define                                 SEG34COM1_bit       _BIT_ACCESS(LCDDATA16,2)
// LCDDATA19<SEG34COM2>
extern volatile __bit                   SEG34COM2           __at(0x3D9A);	// @ (0x7B3 * 8 + 2)
#define                                 SEG34COM2_bit       _BIT_ACCESS(LCDDATA19,2)
// LCDDATA22<SEG34COM3>
extern volatile __bit                   SEG34COM3           __at(0x3DB2);	// @ (0x7B6 * 8 + 2)
#define                                 SEG34COM3_bit       _BIT_ACCESS(LCDDATA22,2)
// PORTA<SEG35>
extern volatile __bit                   SEG35               __at(0x63);	// @ (0xC * 8 + 3)
#define                                 SEG35_bit           _BIT_ACCESS(PORTA,3)
// LCDDATA13<SEG35COM0>
extern volatile __bit                   SEG35COM0           __at(0x3D6B);	// @ (0x7AD * 8 + 3)
#define                                 SEG35COM0_bit       _BIT_ACCESS(LCDDATA13,3)
// LCDDATA16<SEG35COM1>
extern volatile __bit                   SEG35COM1           __at(0x3D83);	// @ (0x7B0 * 8 + 3)
#define                                 SEG35COM1_bit       _BIT_ACCESS(LCDDATA16,3)
// LCDDATA19<SEG35COM2>
extern volatile __bit                   SEG35COM2           __at(0x3D9B);	// @ (0x7B3 * 8 + 3)
#define                                 SEG35COM2_bit       _BIT_ACCESS(LCDDATA19,3)
// LCDDATA22<SEG35COM3>
extern volatile __bit                   SEG35COM3           __at(0x3DB3);	// @ (0x7B6 * 8 + 3)
#define                                 SEG35COM3_bit       _BIT_ACCESS(LCDDATA22,3)
// PORTA<SEG36>
extern volatile __bit                   SEG36               __at(0x66);	// @ (0xC * 8 + 6)
#define                                 SEG36_bit           _BIT_ACCESS(PORTA,6)
// LCDDATA13<SEG36COM0>
extern volatile __bit                   SEG36COM0           __at(0x3D6C);	// @ (0x7AD * 8 + 4)
#define                                 SEG36COM0_bit       _BIT_ACCESS(LCDDATA13,4)
// LCDDATA16<SEG36COM1>
extern volatile __bit                   SEG36COM1           __at(0x3D84);	// @ (0x7B0 * 8 + 4)
#define                                 SEG36COM1_bit       _BIT_ACCESS(LCDDATA16,4)
// LCDDATA19<SEG36COM2>
extern volatile __bit                   SEG36COM2           __at(0x3D9C);	// @ (0x7B3 * 8 + 4)
#define                                 SEG36COM2_bit       _BIT_ACCESS(LCDDATA19,4)
// LCDDATA22<SEG36COM3>
extern volatile __bit                   SEG36COM3           __at(0x3DB4);	// @ (0x7B6 * 8 + 4)
#define                                 SEG36COM3_bit       _BIT_ACCESS(LCDDATA22,4)
// PORTA<SEG37>
extern volatile __bit                   SEG37               __at(0x67);	// @ (0xC * 8 + 7)
#define                                 SEG37_bit           _BIT_ACCESS(PORTA,7)
// LCDDATA13<SEG37COM0>
extern volatile __bit                   SEG37COM0           __at(0x3D6D);	// @ (0x7AD * 8 + 5)
#define                                 SEG37COM0_bit       _BIT_ACCESS(LCDDATA13,5)
// LCDDATA16<SEG37COM1>
extern volatile __bit                   SEG37COM1           __at(0x3D85);	// @ (0x7B0 * 8 + 5)
#define                                 SEG37COM1_bit       _BIT_ACCESS(LCDDATA16,5)
// LCDDATA19<SEG37COM2>
extern volatile __bit                   SEG37COM2           __at(0x3D9D);	// @ (0x7B3 * 8 + 5)
#define                                 SEG37COM2_bit       _BIT_ACCESS(LCDDATA19,5)
// LCDDATA22<SEG37COM3>
extern volatile __bit                   SEG37COM3           __at(0x3DB5);	// @ (0x7B6 * 8 + 5)
#define                                 SEG37COM3_bit       _BIT_ACCESS(LCDDATA22,5)
// PORTB<SEG38>
extern volatile __bit                   SEG38               __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 SEG38_bit           _BIT_ACCESS(PORTB,6)
// LCDDATA13<SEG38COM0>
extern volatile __bit                   SEG38COM0           __at(0x3D6E);	// @ (0x7AD * 8 + 6)
#define                                 SEG38COM0_bit       _BIT_ACCESS(LCDDATA13,6)
// LCDDATA16<SEG38COM1>
extern volatile __bit                   SEG38COM1           __at(0x3D86);	// @ (0x7B0 * 8 + 6)
#define                                 SEG38COM1_bit       _BIT_ACCESS(LCDDATA16,6)
// LCDDATA19<SEG38COM2>
extern volatile __bit                   SEG38COM2           __at(0x3D9E);	// @ (0x7B3 * 8 + 6)
#define                                 SEG38COM2_bit       _BIT_ACCESS(LCDDATA19,6)
// LCDDATA22<SEG38COM3>
extern volatile __bit                   SEG38COM3           __at(0x3DB6);	// @ (0x7B6 * 8 + 6)
#define                                 SEG38COM3_bit       _BIT_ACCESS(LCDDATA22,6)
// PORTB<SEG39>
extern volatile __bit                   SEG39               __at(0x6F);	// @ (0xD * 8 + 7)
#define                                 SEG39_bit           _BIT_ACCESS(PORTB,7)
// LCDDATA13<SEG39COM0>
extern volatile __bit                   SEG39COM0           __at(0x3D6F);	// @ (0x7AD * 8 + 7)
#define                                 SEG39COM0_bit       _BIT_ACCESS(LCDDATA13,7)
// LCDDATA16<SEG39COM1>
extern volatile __bit                   SEG39COM1           __at(0x3D87);	// @ (0x7B0 * 8 + 7)
#define                                 SEG39COM1_bit       _BIT_ACCESS(LCDDATA16,7)
// LCDDATA19<SEG39COM2>
extern volatile __bit                   SEG39COM2           __at(0x3D9F);	// @ (0x7B3 * 8 + 7)
#define                                 SEG39COM2_bit       _BIT_ACCESS(LCDDATA19,7)
// LCDDATA22<SEG39COM3>
extern volatile __bit                   SEG39COM3           __at(0x3DB7);	// @ (0x7B6 * 8 + 7)
#define                                 SEG39COM3_bit       _BIT_ACCESS(LCDDATA22,7)
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
// PORTD<SEG4>
extern volatile __bit                   SEG4                __at(0x7C);	// @ (0xF * 8 + 4)
#define                                 SEG4_bit            _BIT_ACCESS(PORTD,4)
// PORTC<SEG40>
extern volatile __bit                   SEG40               __at(0x70);	// @ (0xE * 8 + 0)
#define                                 SEG40_bit           _BIT_ACCESS(PORTC,0)
// LCDDATA14<SEG40COM0>
extern volatile __bit                   SEG40COM0           __at(0x3D70);	// @ (0x7AE * 8 + 0)
#define                                 SEG40COM0_bit       _BIT_ACCESS(LCDDATA14,0)
// LCDDATA17<SEG40COM1>
extern volatile __bit                   SEG40COM1           __at(0x3D88);	// @ (0x7B1 * 8 + 0)
#define                                 SEG40COM1_bit       _BIT_ACCESS(LCDDATA17,0)
// LCDDATA20<SEG40COM2>
extern volatile __bit                   SEG40COM2           __at(0x3DA0);	// @ (0x7B4 * 8 + 0)
#define                                 SEG40COM2_bit       _BIT_ACCESS(LCDDATA20,0)
// LCDDATA23<SEG40COM3>
extern volatile __bit                   SEG40COM3           __at(0x3DB8);	// @ (0x7B7 * 8 + 0)
#define                                 SEG40COM3_bit       _BIT_ACCESS(LCDDATA23,0)
// PORTF<SEG41>
extern volatile __bit                   SEG41               __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 SEG41_bit           _BIT_ACCESS(PORTF,0)
// LCDDATA14<SEG41COM0>
extern volatile __bit                   SEG41COM0           __at(0x3D71);	// @ (0x7AE * 8 + 1)
#define                                 SEG41COM0_bit       _BIT_ACCESS(LCDDATA14,1)
// LCDDATA17<SEG41COM1>
extern volatile __bit                   SEG41COM1           __at(0x3D89);	// @ (0x7B1 * 8 + 1)
#define                                 SEG41COM1_bit       _BIT_ACCESS(LCDDATA17,1)
// LCDDATA20<SEG41COM2>
extern volatile __bit                   SEG41COM2           __at(0x3DA1);	// @ (0x7B4 * 8 + 1)
#define                                 SEG41COM2_bit       _BIT_ACCESS(LCDDATA20,1)
// LCDDATA23<SEG41COM3>
extern volatile __bit                   SEG41COM3           __at(0x3DB9);	// @ (0x7B7 * 8 + 1)
#define                                 SEG41COM3_bit       _BIT_ACCESS(LCDDATA23,1)
// PORTG<SEG42>
extern volatile __bit                   SEG42               __at(0x1468);	// @ (0x28D * 8 + 0)
#define                                 SEG42_bit           _BIT_ACCESS(PORTG,0)
// LCDDATA14<SEG42COM0>
extern volatile __bit                   SEG42COM0           __at(0x3D72);	// @ (0x7AE * 8 + 2)
#define                                 SEG42COM0_bit       _BIT_ACCESS(LCDDATA14,2)
// LCDDATA17<SEG42COM1>
extern volatile __bit                   SEG42COM1           __at(0x3D8A);	// @ (0x7B1 * 8 + 2)
#define                                 SEG42COM1_bit       _BIT_ACCESS(LCDDATA17,2)
// LCDDATA20<SEG42COM2>
extern volatile __bit                   SEG42COM2           __at(0x3DA2);	// @ (0x7B4 * 8 + 2)
#define                                 SEG42COM2_bit       _BIT_ACCESS(LCDDATA20,2)
// LCDDATA23<SEG42COM3>
extern volatile __bit                   SEG42COM3           __at(0x3DBA);	// @ (0x7B7 * 8 + 2)
#define                                 SEG42COM3_bit       _BIT_ACCESS(LCDDATA23,2)
// PORTG<SEG43>
extern volatile __bit                   SEG43               __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 SEG43_bit           _BIT_ACCESS(PORTG,1)
// LCDDATA14<SEG43COM0>
extern volatile __bit                   SEG43COM0           __at(0x3D73);	// @ (0x7AE * 8 + 3)
#define                                 SEG43COM0_bit       _BIT_ACCESS(LCDDATA14,3)
// LCDDATA17<SEG43COM1>
extern volatile __bit                   SEG43COM1           __at(0x3D8B);	// @ (0x7B1 * 8 + 3)
#define                                 SEG43COM1_bit       _BIT_ACCESS(LCDDATA17,3)
// LCDDATA20<SEG43COM2>
extern volatile __bit                   SEG43COM2           __at(0x3DA3);	// @ (0x7B4 * 8 + 3)
#define                                 SEG43COM2_bit       _BIT_ACCESS(LCDDATA20,3)
// LCDDATA23<SEG43COM3>
extern volatile __bit                   SEG43COM3           __at(0x3DBB);	// @ (0x7B7 * 8 + 3)
#define                                 SEG43COM3_bit       _BIT_ACCESS(LCDDATA23,3)
// PORTG<SEG44>
extern volatile __bit                   SEG44               __at(0x146A);	// @ (0x28D * 8 + 2)
#define                                 SEG44_bit           _BIT_ACCESS(PORTG,2)
// LCDDATA14<SEG44COM0>
extern volatile __bit                   SEG44COM0           __at(0x3D74);	// @ (0x7AE * 8 + 4)
#define                                 SEG44COM0_bit       _BIT_ACCESS(LCDDATA14,4)
// LCDDATA17<SEG44COM1>
extern volatile __bit                   SEG44COM1           __at(0x3D8C);	// @ (0x7B1 * 8 + 4)
#define                                 SEG44COM1_bit       _BIT_ACCESS(LCDDATA17,4)
// LCDDATA20<SEG44COM2>
extern volatile __bit                   SEG44COM2           __at(0x3DA4);	// @ (0x7B4 * 8 + 4)
#define                                 SEG44COM2_bit       _BIT_ACCESS(LCDDATA20,4)
// LCDDATA23<SEG44COM3>
extern volatile __bit                   SEG44COM3           __at(0x3DBC);	// @ (0x7B7 * 8 + 4)
#define                                 SEG44COM3_bit       _BIT_ACCESS(LCDDATA23,4)
// PORTG<SEG45>
extern volatile __bit                   SEG45               __at(0x146B);	// @ (0x28D * 8 + 3)
#define                                 SEG45_bit           _BIT_ACCESS(PORTG,3)
// LCDDATA14<SEG45COM0>
extern volatile __bit                   SEG45COM0           __at(0x3D75);	// @ (0x7AE * 8 + 5)
#define                                 SEG45COM0_bit       _BIT_ACCESS(LCDDATA14,5)
// LCDDATA17<SEG45COM1>
extern volatile __bit                   SEG45COM1           __at(0x3D8D);	// @ (0x7B1 * 8 + 5)
#define                                 SEG45COM1_bit       _BIT_ACCESS(LCDDATA17,5)
// LCDDATA20<SEG45COM2>
extern volatile __bit                   SEG45COM2           __at(0x3DA5);	// @ (0x7B4 * 8 + 5)
#define                                 SEG45COM2_bit       _BIT_ACCESS(LCDDATA20,5)
// LCDDATA23<SEG45COM3>
extern volatile __bit                   SEG45COM3           __at(0x3DBD);	// @ (0x7B7 * 8 + 5)
#define                                 SEG45COM3_bit       _BIT_ACCESS(LCDDATA23,5)
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
// PORTD<SEG5>
extern volatile __bit                   SEG5                __at(0x7D);	// @ (0xF * 8 + 5)
#define                                 SEG5_bit            _BIT_ACCESS(PORTD,5)
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
// PORTD<SEG6>
extern volatile __bit                   SEG6                __at(0x7E);	// @ (0xF * 8 + 6)
#define                                 SEG6_bit            _BIT_ACCESS(PORTD,6)
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
// PORTD<SEG7>
extern volatile __bit                   SEG7                __at(0x7F);	// @ (0xF * 8 + 7)
#define                                 SEG7_bit            _BIT_ACCESS(PORTD,7)
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
// PORTB<SEG8>
extern volatile __bit                   SEG8                __at(0x69);	// @ (0xD * 8 + 1)
#define                                 SEG8_bit            _BIT_ACCESS(PORTB,1)
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
// PORTB<SEG9>
extern volatile __bit                   SEG9                __at(0x6A);	// @ (0xD * 8 + 2)
#define                                 SEG9_bit            _BIT_ACCESS(PORTB,2)
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
// PORTB<SRI>
extern volatile __bit                   SRI                 __at(0x68);	// @ (0xD * 8 + 0)
#define                                 SRI_bit             _BIT_ACCESS(PORTB,0)
// SRCON0<SRLEN>
extern volatile __bit                   SRLEN               __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 SRLEN_bit           _BIT_ACCESS(SRCON0,7)
// PORTF<SRNQ>
extern volatile __bit                   SRNQ                __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 SRNQ_bit            _BIT_ACCESS(PORTF,1)
// SRCON0<SRNQEN>
extern volatile __bit                   SRNQEN              __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 SRNQEN_bit          _BIT_ACCESS(SRCON0,2)
// SRCON0<SRPR>
extern volatile __bit                   SRPR                __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 SRPR_bit            _BIT_ACCESS(SRCON0,0)
// SRCON0<SRPS>
extern volatile __bit                   SRPS                __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 SRPS_bit            _BIT_ACCESS(SRCON0,1)
// PORTF<SRQ>
extern volatile __bit                   SRQ                 __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 SRQ_bit             _BIT_ACCESS(PORTF,2)
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
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// PIE4<SSP2IE>
extern volatile __bit                   SSP2IE              __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 SSP2IE_bit          _BIT_ACCESS(PIE4,0)
// PIR4<SSP2IF>
extern volatile __bit                   SSP2IF              __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 SSP2IF_bit          _BIT_ACCESS(PIR4,0)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
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
// PORTA<T0CKI>
extern volatile __bit                   T0CKI               __at(0x64);	// @ (0xC * 8 + 4)
#define                                 T0CKI_bit           _BIT_ACCESS(PORTA,4)
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
// PORTC<T1CKI>
extern volatile __bit                   T1CKI               __at(0x70);	// @ (0xE * 8 + 0)
#define                                 T1CKI_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// PORTB<T1G>
extern volatile __bit                   T1G                 __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 T1G_bit             _BIT_ACCESS(PORTB,5)
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
// PORTC<T1OSI>
extern volatile __bit                   T1OSI               __at(0x71);	// @ (0xE * 8 + 1)
#define                                 T1OSI_bit           _BIT_ACCESS(PORTC,1)
// PORTC<T1OSO>
extern volatile __bit                   T1OSO               __at(0x70);	// @ (0xE * 8 + 0)
#define                                 T1OSO_bit           _BIT_ACCESS(PORTC,0)
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
// TRISE<TRISE4>
extern volatile __bit                   TRISE4              __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 TRISE4_bit          _BIT_ACCESS(TRISE,4)
// TRISE<TRISE5>
extern volatile __bit                   TRISE5              __at(0x485);	// @ (0x90 * 8 + 5)
#define                                 TRISE5_bit          _BIT_ACCESS(TRISE,5)
// TRISE<TRISE6>
extern volatile __bit                   TRISE6              __at(0x486);	// @ (0x90 * 8 + 6)
#define                                 TRISE6_bit          _BIT_ACCESS(TRISE,6)
// TRISE<TRISE7>
extern volatile __bit                   TRISE7              __at(0x487);	// @ (0x90 * 8 + 7)
#define                                 TRISE7_bit          _BIT_ACCESS(TRISE,7)
// TRISF<TRISF0>
extern volatile __bit                   TRISF0              __at(0x1860);	// @ (0x30C * 8 + 0)
#define                                 TRISF0_bit          _BIT_ACCESS(TRISF,0)
// TRISF<TRISF1>
extern volatile __bit                   TRISF1              __at(0x1861);	// @ (0x30C * 8 + 1)
#define                                 TRISF1_bit          _BIT_ACCESS(TRISF,1)
// TRISF<TRISF2>
extern volatile __bit                   TRISF2              __at(0x1862);	// @ (0x30C * 8 + 2)
#define                                 TRISF2_bit          _BIT_ACCESS(TRISF,2)
// TRISF<TRISF3>
extern volatile __bit                   TRISF3              __at(0x1863);	// @ (0x30C * 8 + 3)
#define                                 TRISF3_bit          _BIT_ACCESS(TRISF,3)
// TRISF<TRISF4>
extern volatile __bit                   TRISF4              __at(0x1864);	// @ (0x30C * 8 + 4)
#define                                 TRISF4_bit          _BIT_ACCESS(TRISF,4)
// TRISF<TRISF5>
extern volatile __bit                   TRISF5              __at(0x1865);	// @ (0x30C * 8 + 5)
#define                                 TRISF5_bit          _BIT_ACCESS(TRISF,5)
// TRISF<TRISF6>
extern volatile __bit                   TRISF6              __at(0x1866);	// @ (0x30C * 8 + 6)
#define                                 TRISF6_bit          _BIT_ACCESS(TRISF,6)
// TRISF<TRISF7>
extern volatile __bit                   TRISF7              __at(0x1867);	// @ (0x30C * 8 + 7)
#define                                 TRISF7_bit          _BIT_ACCESS(TRISF,7)
// TRISG<TRISG0>
extern volatile __bit                   TRISG0              __at(0x1868);	// @ (0x30D * 8 + 0)
#define                                 TRISG0_bit          _BIT_ACCESS(TRISG,0)
// TRISG<TRISG1>
extern volatile __bit                   TRISG1              __at(0x1869);	// @ (0x30D * 8 + 1)
#define                                 TRISG1_bit          _BIT_ACCESS(TRISG,1)
// TRISG<TRISG2>
extern volatile __bit                   TRISG2              __at(0x186A);	// @ (0x30D * 8 + 2)
#define                                 TRISG2_bit          _BIT_ACCESS(TRISG,2)
// TRISG<TRISG3>
extern volatile __bit                   TRISG3              __at(0x186B);	// @ (0x30D * 8 + 3)
#define                                 TRISG3_bit          _BIT_ACCESS(TRISG,3)
// TRISG<TRISG4>
extern volatile __bit                   TRISG4              __at(0x186C);	// @ (0x30D * 8 + 4)
#define                                 TRISG4_bit          _BIT_ACCESS(TRISG,4)
// TRISG<TRISG5>
extern volatile __bit                   TRISG5              __at(0x186D);	// @ (0x30D * 8 + 5)
#define                                 TRISG5_bit          _BIT_ACCESS(TRISG,5)
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
// PORTC<TX1>
extern volatile __bit                   TX1                 __at(0x76);	// @ (0xE * 8 + 6)
#define                                 TX1_bit             _BIT_ACCESS(PORTC,6)
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TX1IE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TX1IF_bit           _BIT_ACCESS(PIR1,4)
// PORTG<TX2>
extern volatile __bit                   TX2                 __at(0x1469);	// @ (0x28D * 8 + 1)
#define                                 TX2_bit             _BIT_ACCESS(PORTG,1)
// PIE4<TX2IE>
extern volatile __bit                   TX2IE               __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 TX2IE_bit           _BIT_ACCESS(PIE4,4)
// PIR4<TX2IF>
extern volatile __bit                   TX2IF               __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 TX2IF_bit           _BIT_ACCESS(PIR4,4)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// PORTE<VLCD1>
extern volatile __bit                   VLCD1               __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 VLCD1_bit           _BIT_ACCESS(PORTE,0)
// LCDREF<VLCD1PE>
extern volatile __bit                   VLCD1PE             __at(0x3C99);	// @ (0x793 * 8 + 1)
#define                                 VLCD1PE_bit         _BIT_ACCESS(LCDREF,1)
// PORTE<VLCD2>
extern volatile __bit                   VLCD2               __at(0x81);	// @ (0x10 * 8 + 1)
#define                                 VLCD2_bit           _BIT_ACCESS(PORTE,1)
// LCDREF<VLCD2PE>
extern volatile __bit                   VLCD2PE             __at(0x3C9A);	// @ (0x793 * 8 + 2)
#define                                 VLCD2PE_bit         _BIT_ACCESS(LCDREF,2)
// PORTE<VLCD3>
extern volatile __bit                   VLCD3               __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 VLCD3_bit           _BIT_ACCESS(PORTE,2)
// LCDREF<VLCD3PE>
extern volatile __bit                   VLCD3PE             __at(0x3C9B);	// @ (0x793 * 8 + 3)
#define                                 VLCD3PE_bit         _BIT_ACCESS(LCDREF,3)
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x62);	// @ (0xC * 8 + 2)
#define                                 VREFM_bit           _BIT_ACCESS(PORTA,2)
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x63);	// @ (0xC * 8 + 3)
#define                                 VREFP_bit           _BIT_ACCESS(PORTA,3)
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
// WPUG<WPUG5>
extern volatile __bit                   WPUG5               __at(0x246D);	// @ (0x48D * 8 + 5)
#define                                 WPUG5_bit           _BIT_ACCESS(WPUG,5)
// EECON1<WR>
extern volatile __bit                   WR                  __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
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
// PORTG<nMCLR>
extern volatile __bit                   nMCLR               __at(0x146D);	// @ (0x28D * 8 + 5)
#define                                 nMCLR_bit           _BIT_ACCESS(PORTG,5)
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
// PORTD<nSS2>
extern volatile __bit                   nSS2                __at(0x7F);	// @ (0xF * 8 + 7)
#define                                 nSS2_bit            _BIT_ACCESS(PORTD,7)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC16LF1947_H_
