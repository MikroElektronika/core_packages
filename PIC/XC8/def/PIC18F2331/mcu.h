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

#ifndef _PIC18F2331_H_
#define _PIC18F2331_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F2331
 */
#ifndef _XC_H_
#warning Header file pic18f2331.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: DFLTCON
#define DFLTCON DFLTCON
extern volatile unsigned char           DFLTCON             __at(0xF60);
#ifndef _LIB_BUILD
asm("DFLTCON equ 0F60h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FLTCK                  :3;
        unsigned FLT1EN                 :1;
        unsigned FLT2EN                 :1;
        unsigned FLT3EN                 :1;
        unsigned FLT4EN                 :1;
    };
    struct {
        unsigned FLTCK0                 :1;
        unsigned FLTCK1                 :1;
        unsigned FLTCK2                 :1;
    };
} DFLTCONbits_t;
extern volatile DFLTCONbits_t DFLTCONbits __at(0xF60);
// bitfield macros
#define _DFLTCON_FLTCK_POSN                                 0x0
#define _DFLTCON_FLTCK_POSITION                             0x0
#define _DFLTCON_FLTCK_SIZE                                 0x3
#define _DFLTCON_FLTCK_LENGTH                               0x3
#define _DFLTCON_FLTCK_MASK                                 0x7
#define _DFLTCON_FLT1EN_POSN                                0x3
#define _DFLTCON_FLT1EN_POSITION                            0x3
#define _DFLTCON_FLT1EN_SIZE                                0x1
#define _DFLTCON_FLT1EN_LENGTH                              0x1
#define _DFLTCON_FLT1EN_MASK                                0x8
#define _DFLTCON_FLT2EN_POSN                                0x4
#define _DFLTCON_FLT2EN_POSITION                            0x4
#define _DFLTCON_FLT2EN_SIZE                                0x1
#define _DFLTCON_FLT2EN_LENGTH                              0x1
#define _DFLTCON_FLT2EN_MASK                                0x10
#define _DFLTCON_FLT3EN_POSN                                0x5
#define _DFLTCON_FLT3EN_POSITION                            0x5
#define _DFLTCON_FLT3EN_SIZE                                0x1
#define _DFLTCON_FLT3EN_LENGTH                              0x1
#define _DFLTCON_FLT3EN_MASK                                0x20
#define _DFLTCON_FLT4EN_POSN                                0x6
#define _DFLTCON_FLT4EN_POSITION                            0x6
#define _DFLTCON_FLT4EN_SIZE                                0x1
#define _DFLTCON_FLT4EN_LENGTH                              0x1
#define _DFLTCON_FLT4EN_MASK                                0x40
#define _DFLTCON_FLTCK0_POSN                                0x0
#define _DFLTCON_FLTCK0_POSITION                            0x0
#define _DFLTCON_FLTCK0_SIZE                                0x1
#define _DFLTCON_FLTCK0_LENGTH                              0x1
#define _DFLTCON_FLTCK0_MASK                                0x1
#define _DFLTCON_FLTCK1_POSN                                0x1
#define _DFLTCON_FLTCK1_POSITION                            0x1
#define _DFLTCON_FLTCK1_SIZE                                0x1
#define _DFLTCON_FLTCK1_LENGTH                              0x1
#define _DFLTCON_FLTCK1_MASK                                0x2
#define _DFLTCON_FLTCK2_POSN                                0x2
#define _DFLTCON_FLTCK2_POSITION                            0x2
#define _DFLTCON_FLTCK2_SIZE                                0x1
#define _DFLTCON_FLTCK2_LENGTH                              0x1
#define _DFLTCON_FLTCK2_MASK                                0x4

// Register: CAP3CON
#define CAP3CON CAP3CON
extern volatile unsigned char           CAP3CON             __at(0xF61);
#ifndef _LIB_BUILD
asm("CAP3CON equ 0F61h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CAP3M                  :4;
        unsigned                        :1;
        unsigned CAP3TMR                :1;
        unsigned CAP3REN                :1;
    };
    struct {
        unsigned CAP3M0                 :1;
        unsigned CAP3M1                 :1;
        unsigned CAP3M2                 :1;
        unsigned CAP3M3                 :1;
    };
} CAP3CONbits_t;
extern volatile CAP3CONbits_t CAP3CONbits __at(0xF61);
// bitfield macros
#define _CAP3CON_CAP3M_POSN                                 0x0
#define _CAP3CON_CAP3M_POSITION                             0x0
#define _CAP3CON_CAP3M_SIZE                                 0x4
#define _CAP3CON_CAP3M_LENGTH                               0x4
#define _CAP3CON_CAP3M_MASK                                 0xF
#define _CAP3CON_CAP3TMR_POSN                               0x5
#define _CAP3CON_CAP3TMR_POSITION                           0x5
#define _CAP3CON_CAP3TMR_SIZE                               0x1
#define _CAP3CON_CAP3TMR_LENGTH                             0x1
#define _CAP3CON_CAP3TMR_MASK                               0x20
#define _CAP3CON_CAP3REN_POSN                               0x6
#define _CAP3CON_CAP3REN_POSITION                           0x6
#define _CAP3CON_CAP3REN_SIZE                               0x1
#define _CAP3CON_CAP3REN_LENGTH                             0x1
#define _CAP3CON_CAP3REN_MASK                               0x40
#define _CAP3CON_CAP3M0_POSN                                0x0
#define _CAP3CON_CAP3M0_POSITION                            0x0
#define _CAP3CON_CAP3M0_SIZE                                0x1
#define _CAP3CON_CAP3M0_LENGTH                              0x1
#define _CAP3CON_CAP3M0_MASK                                0x1
#define _CAP3CON_CAP3M1_POSN                                0x1
#define _CAP3CON_CAP3M1_POSITION                            0x1
#define _CAP3CON_CAP3M1_SIZE                                0x1
#define _CAP3CON_CAP3M1_LENGTH                              0x1
#define _CAP3CON_CAP3M1_MASK                                0x2
#define _CAP3CON_CAP3M2_POSN                                0x2
#define _CAP3CON_CAP3M2_POSITION                            0x2
#define _CAP3CON_CAP3M2_SIZE                                0x1
#define _CAP3CON_CAP3M2_LENGTH                              0x1
#define _CAP3CON_CAP3M2_MASK                                0x4
#define _CAP3CON_CAP3M3_POSN                                0x3
#define _CAP3CON_CAP3M3_POSITION                            0x3
#define _CAP3CON_CAP3M3_SIZE                                0x1
#define _CAP3CON_CAP3M3_LENGTH                              0x1
#define _CAP3CON_CAP3M3_MASK                                0x8

// Register: CAP2CON
#define CAP2CON CAP2CON
extern volatile unsigned char           CAP2CON             __at(0xF62);
#ifndef _LIB_BUILD
asm("CAP2CON equ 0F62h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CAP2M                  :4;
        unsigned                        :1;
        unsigned CAP2TMR                :1;
        unsigned CAP2REN                :1;
    };
    struct {
        unsigned CAP2M0                 :1;
        unsigned CAP2M1                 :1;
        unsigned CAP2M2                 :1;
        unsigned CAP2M3                 :1;
    };
} CAP2CONbits_t;
extern volatile CAP2CONbits_t CAP2CONbits __at(0xF62);
// bitfield macros
#define _CAP2CON_CAP2M_POSN                                 0x0
#define _CAP2CON_CAP2M_POSITION                             0x0
#define _CAP2CON_CAP2M_SIZE                                 0x4
#define _CAP2CON_CAP2M_LENGTH                               0x4
#define _CAP2CON_CAP2M_MASK                                 0xF
#define _CAP2CON_CAP2TMR_POSN                               0x5
#define _CAP2CON_CAP2TMR_POSITION                           0x5
#define _CAP2CON_CAP2TMR_SIZE                               0x1
#define _CAP2CON_CAP2TMR_LENGTH                             0x1
#define _CAP2CON_CAP2TMR_MASK                               0x20
#define _CAP2CON_CAP2REN_POSN                               0x6
#define _CAP2CON_CAP2REN_POSITION                           0x6
#define _CAP2CON_CAP2REN_SIZE                               0x1
#define _CAP2CON_CAP2REN_LENGTH                             0x1
#define _CAP2CON_CAP2REN_MASK                               0x40
#define _CAP2CON_CAP2M0_POSN                                0x0
#define _CAP2CON_CAP2M0_POSITION                            0x0
#define _CAP2CON_CAP2M0_SIZE                                0x1
#define _CAP2CON_CAP2M0_LENGTH                              0x1
#define _CAP2CON_CAP2M0_MASK                                0x1
#define _CAP2CON_CAP2M1_POSN                                0x1
#define _CAP2CON_CAP2M1_POSITION                            0x1
#define _CAP2CON_CAP2M1_SIZE                                0x1
#define _CAP2CON_CAP2M1_LENGTH                              0x1
#define _CAP2CON_CAP2M1_MASK                                0x2
#define _CAP2CON_CAP2M2_POSN                                0x2
#define _CAP2CON_CAP2M2_POSITION                            0x2
#define _CAP2CON_CAP2M2_SIZE                                0x1
#define _CAP2CON_CAP2M2_LENGTH                              0x1
#define _CAP2CON_CAP2M2_MASK                                0x4
#define _CAP2CON_CAP2M3_POSN                                0x3
#define _CAP2CON_CAP2M3_POSITION                            0x3
#define _CAP2CON_CAP2M3_SIZE                                0x1
#define _CAP2CON_CAP2M3_LENGTH                              0x1
#define _CAP2CON_CAP2M3_MASK                                0x8

// Register: CAP1CON
#define CAP1CON CAP1CON
extern volatile unsigned char           CAP1CON             __at(0xF63);
#ifndef _LIB_BUILD
asm("CAP1CON equ 0F63h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CAP1M                  :4;
        unsigned                        :1;
        unsigned CAP1TMR                :1;
        unsigned CAP1REN                :1;
    };
    struct {
        unsigned CAP1M0                 :1;
        unsigned CAP1M1                 :1;
        unsigned CAP1M2                 :1;
        unsigned CAP1M3                 :1;
    };
} CAP1CONbits_t;
extern volatile CAP1CONbits_t CAP1CONbits __at(0xF63);
// bitfield macros
#define _CAP1CON_CAP1M_POSN                                 0x0
#define _CAP1CON_CAP1M_POSITION                             0x0
#define _CAP1CON_CAP1M_SIZE                                 0x4
#define _CAP1CON_CAP1M_LENGTH                               0x4
#define _CAP1CON_CAP1M_MASK                                 0xF
#define _CAP1CON_CAP1TMR_POSN                               0x5
#define _CAP1CON_CAP1TMR_POSITION                           0x5
#define _CAP1CON_CAP1TMR_SIZE                               0x1
#define _CAP1CON_CAP1TMR_LENGTH                             0x1
#define _CAP1CON_CAP1TMR_MASK                               0x20
#define _CAP1CON_CAP1REN_POSN                               0x6
#define _CAP1CON_CAP1REN_POSITION                           0x6
#define _CAP1CON_CAP1REN_SIZE                               0x1
#define _CAP1CON_CAP1REN_LENGTH                             0x1
#define _CAP1CON_CAP1REN_MASK                               0x40
#define _CAP1CON_CAP1M0_POSN                                0x0
#define _CAP1CON_CAP1M0_POSITION                            0x0
#define _CAP1CON_CAP1M0_SIZE                                0x1
#define _CAP1CON_CAP1M0_LENGTH                              0x1
#define _CAP1CON_CAP1M0_MASK                                0x1
#define _CAP1CON_CAP1M1_POSN                                0x1
#define _CAP1CON_CAP1M1_POSITION                            0x1
#define _CAP1CON_CAP1M1_SIZE                                0x1
#define _CAP1CON_CAP1M1_LENGTH                              0x1
#define _CAP1CON_CAP1M1_MASK                                0x2
#define _CAP1CON_CAP1M2_POSN                                0x2
#define _CAP1CON_CAP1M2_POSITION                            0x2
#define _CAP1CON_CAP1M2_SIZE                                0x1
#define _CAP1CON_CAP1M2_LENGTH                              0x1
#define _CAP1CON_CAP1M2_MASK                                0x4
#define _CAP1CON_CAP1M3_POSN                                0x3
#define _CAP1CON_CAP1M3_POSITION                            0x3
#define _CAP1CON_CAP1M3_SIZE                                0x1
#define _CAP1CON_CAP1M3_LENGTH                              0x1
#define _CAP1CON_CAP1M3_MASK                                0x8

// Register: CAP3BUFL
#define CAP3BUFL CAP3BUFL
extern volatile unsigned char           CAP3BUFL            __at(0xF64);
#ifndef _LIB_BUILD
asm("CAP3BUFL equ 0F64h");
#endif
// aliases
extern volatile unsigned char           MAXCNTL             __at(0xF64);
#ifndef _LIB_BUILD
asm("MAXCNTL equ 0F64h");
#endif

// Register: CAP3BUFH
#define CAP3BUFH CAP3BUFH
extern volatile unsigned char           CAP3BUFH            __at(0xF65);
#ifndef _LIB_BUILD
asm("CAP3BUFH equ 0F65h");
#endif
// aliases
extern volatile unsigned char           MAXCNTH             __at(0xF65);
#ifndef _LIB_BUILD
asm("MAXCNTH equ 0F65h");
#endif

// Register: CAP2BUFL
#define CAP2BUFL CAP2BUFL
extern volatile unsigned char           CAP2BUFL            __at(0xF66);
#ifndef _LIB_BUILD
asm("CAP2BUFL equ 0F66h");
#endif
// aliases
extern volatile unsigned char           POSCNTL             __at(0xF66);
#ifndef _LIB_BUILD
asm("POSCNTL equ 0F66h");
#endif

// Register: CAP2BUFH
#define CAP2BUFH CAP2BUFH
extern volatile unsigned char           CAP2BUFH            __at(0xF67);
#ifndef _LIB_BUILD
asm("CAP2BUFH equ 0F67h");
#endif
// aliases
extern volatile unsigned char           POSCNTH             __at(0xF67);
#ifndef _LIB_BUILD
asm("POSCNTH equ 0F67h");
#endif

// Register: CAP1BUFL
#define CAP1BUFL CAP1BUFL
extern volatile unsigned char           CAP1BUFL            __at(0xF68);
#ifndef _LIB_BUILD
asm("CAP1BUFL equ 0F68h");
#endif
// aliases
extern volatile unsigned char           VELRL               __at(0xF68);
#ifndef _LIB_BUILD
asm("VELRL equ 0F68h");
#endif

// Register: CAP1BUFH
#define CAP1BUFH CAP1BUFH
extern volatile unsigned char           CAP1BUFH            __at(0xF69);
#ifndef _LIB_BUILD
asm("CAP1BUFH equ 0F69h");
#endif
// aliases
extern volatile unsigned char           VELRH               __at(0xF69);
#ifndef _LIB_BUILD
asm("VELRH equ 0F69h");
#endif

// Register: OVDCONS
#define OVDCONS OVDCONS
extern volatile unsigned char           OVDCONS             __at(0xF6A);
#ifndef _LIB_BUILD
asm("OVDCONS equ 0F6Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POUT                   :8;
    };
    struct {
        unsigned POUT0                  :1;
        unsigned POUT1                  :1;
        unsigned POUT2                  :1;
        unsigned POUT3                  :1;
        unsigned POUT4                  :1;
        unsigned POUT5                  :1;
        unsigned POUT6                  :1;
        unsigned POUT7                  :1;
    };
} OVDCONSbits_t;
extern volatile OVDCONSbits_t OVDCONSbits __at(0xF6A);
// bitfield macros
#define _OVDCONS_POUT_POSN                                  0x0
#define _OVDCONS_POUT_POSITION                              0x0
#define _OVDCONS_POUT_SIZE                                  0x8
#define _OVDCONS_POUT_LENGTH                                0x8
#define _OVDCONS_POUT_MASK                                  0xFF
#define _OVDCONS_POUT0_POSN                                 0x0
#define _OVDCONS_POUT0_POSITION                             0x0
#define _OVDCONS_POUT0_SIZE                                 0x1
#define _OVDCONS_POUT0_LENGTH                               0x1
#define _OVDCONS_POUT0_MASK                                 0x1
#define _OVDCONS_POUT1_POSN                                 0x1
#define _OVDCONS_POUT1_POSITION                             0x1
#define _OVDCONS_POUT1_SIZE                                 0x1
#define _OVDCONS_POUT1_LENGTH                               0x1
#define _OVDCONS_POUT1_MASK                                 0x2
#define _OVDCONS_POUT2_POSN                                 0x2
#define _OVDCONS_POUT2_POSITION                             0x2
#define _OVDCONS_POUT2_SIZE                                 0x1
#define _OVDCONS_POUT2_LENGTH                               0x1
#define _OVDCONS_POUT2_MASK                                 0x4
#define _OVDCONS_POUT3_POSN                                 0x3
#define _OVDCONS_POUT3_POSITION                             0x3
#define _OVDCONS_POUT3_SIZE                                 0x1
#define _OVDCONS_POUT3_LENGTH                               0x1
#define _OVDCONS_POUT3_MASK                                 0x8
#define _OVDCONS_POUT4_POSN                                 0x4
#define _OVDCONS_POUT4_POSITION                             0x4
#define _OVDCONS_POUT4_SIZE                                 0x1
#define _OVDCONS_POUT4_LENGTH                               0x1
#define _OVDCONS_POUT4_MASK                                 0x10
#define _OVDCONS_POUT5_POSN                                 0x5
#define _OVDCONS_POUT5_POSITION                             0x5
#define _OVDCONS_POUT5_SIZE                                 0x1
#define _OVDCONS_POUT5_LENGTH                               0x1
#define _OVDCONS_POUT5_MASK                                 0x20
#define _OVDCONS_POUT6_POSN                                 0x6
#define _OVDCONS_POUT6_POSITION                             0x6
#define _OVDCONS_POUT6_SIZE                                 0x1
#define _OVDCONS_POUT6_LENGTH                               0x1
#define _OVDCONS_POUT6_MASK                                 0x40
#define _OVDCONS_POUT7_POSN                                 0x7
#define _OVDCONS_POUT7_POSITION                             0x7
#define _OVDCONS_POUT7_SIZE                                 0x1
#define _OVDCONS_POUT7_LENGTH                               0x1
#define _OVDCONS_POUT7_MASK                                 0x80

// Register: OVDCOND
#define OVDCOND OVDCOND
extern volatile unsigned char           OVDCOND             __at(0xF6B);
#ifndef _LIB_BUILD
asm("OVDCOND equ 0F6Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POVD                   :8;
    };
    struct {
        unsigned POVD0                  :1;
        unsigned POVD1                  :1;
        unsigned POVD2                  :1;
        unsigned POVD3                  :1;
        unsigned POVD4                  :1;
        unsigned POVD5                  :1;
        unsigned POVD6                  :1;
        unsigned POVD7                  :1;
    };
} OVDCONDbits_t;
extern volatile OVDCONDbits_t OVDCONDbits __at(0xF6B);
// bitfield macros
#define _OVDCOND_POVD_POSN                                  0x0
#define _OVDCOND_POVD_POSITION                              0x0
#define _OVDCOND_POVD_SIZE                                  0x8
#define _OVDCOND_POVD_LENGTH                                0x8
#define _OVDCOND_POVD_MASK                                  0xFF
#define _OVDCOND_POVD0_POSN                                 0x0
#define _OVDCOND_POVD0_POSITION                             0x0
#define _OVDCOND_POVD0_SIZE                                 0x1
#define _OVDCOND_POVD0_LENGTH                               0x1
#define _OVDCOND_POVD0_MASK                                 0x1
#define _OVDCOND_POVD1_POSN                                 0x1
#define _OVDCOND_POVD1_POSITION                             0x1
#define _OVDCOND_POVD1_SIZE                                 0x1
#define _OVDCOND_POVD1_LENGTH                               0x1
#define _OVDCOND_POVD1_MASK                                 0x2
#define _OVDCOND_POVD2_POSN                                 0x2
#define _OVDCOND_POVD2_POSITION                             0x2
#define _OVDCOND_POVD2_SIZE                                 0x1
#define _OVDCOND_POVD2_LENGTH                               0x1
#define _OVDCOND_POVD2_MASK                                 0x4
#define _OVDCOND_POVD3_POSN                                 0x3
#define _OVDCOND_POVD3_POSITION                             0x3
#define _OVDCOND_POVD3_SIZE                                 0x1
#define _OVDCOND_POVD3_LENGTH                               0x1
#define _OVDCOND_POVD3_MASK                                 0x8
#define _OVDCOND_POVD4_POSN                                 0x4
#define _OVDCOND_POVD4_POSITION                             0x4
#define _OVDCOND_POVD4_SIZE                                 0x1
#define _OVDCOND_POVD4_LENGTH                               0x1
#define _OVDCOND_POVD4_MASK                                 0x10
#define _OVDCOND_POVD5_POSN                                 0x5
#define _OVDCOND_POVD5_POSITION                             0x5
#define _OVDCOND_POVD5_SIZE                                 0x1
#define _OVDCOND_POVD5_LENGTH                               0x1
#define _OVDCOND_POVD5_MASK                                 0x20
#define _OVDCOND_POVD6_POSN                                 0x6
#define _OVDCOND_POVD6_POSITION                             0x6
#define _OVDCOND_POVD6_SIZE                                 0x1
#define _OVDCOND_POVD6_LENGTH                               0x1
#define _OVDCOND_POVD6_MASK                                 0x40
#define _OVDCOND_POVD7_POSN                                 0x7
#define _OVDCOND_POVD7_POSITION                             0x7
#define _OVDCOND_POVD7_SIZE                                 0x1
#define _OVDCOND_POVD7_LENGTH                               0x1
#define _OVDCOND_POVD7_MASK                                 0x80

// Register: FLTCONFIG
#define FLTCONFIG FLTCONFIG
extern volatile unsigned char           FLTCONFIG           __at(0xF6C);
#ifndef _LIB_BUILD
asm("FLTCONFIG equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FLTAEN                 :1;
        unsigned FLTAMOD                :1;
        unsigned FLTAS                  :1;
        unsigned FLTCON                 :1;
        unsigned FLTBEN                 :1;
        unsigned FLTBMOD                :1;
        unsigned FLTBS                  :1;
        unsigned BRFEN                  :1;
    };
} FLTCONFIGbits_t;
extern volatile FLTCONFIGbits_t FLTCONFIGbits __at(0xF6C);
// bitfield macros
#define _FLTCONFIG_FLTAEN_POSN                              0x0
#define _FLTCONFIG_FLTAEN_POSITION                          0x0
#define _FLTCONFIG_FLTAEN_SIZE                              0x1
#define _FLTCONFIG_FLTAEN_LENGTH                            0x1
#define _FLTCONFIG_FLTAEN_MASK                              0x1
#define _FLTCONFIG_FLTAMOD_POSN                             0x1
#define _FLTCONFIG_FLTAMOD_POSITION                         0x1
#define _FLTCONFIG_FLTAMOD_SIZE                             0x1
#define _FLTCONFIG_FLTAMOD_LENGTH                           0x1
#define _FLTCONFIG_FLTAMOD_MASK                             0x2
#define _FLTCONFIG_FLTAS_POSN                               0x2
#define _FLTCONFIG_FLTAS_POSITION                           0x2
#define _FLTCONFIG_FLTAS_SIZE                               0x1
#define _FLTCONFIG_FLTAS_LENGTH                             0x1
#define _FLTCONFIG_FLTAS_MASK                               0x4
#define _FLTCONFIG_FLTCON_POSN                              0x3
#define _FLTCONFIG_FLTCON_POSITION                          0x3
#define _FLTCONFIG_FLTCON_SIZE                              0x1
#define _FLTCONFIG_FLTCON_LENGTH                            0x1
#define _FLTCONFIG_FLTCON_MASK                              0x8
#define _FLTCONFIG_FLTBEN_POSN                              0x4
#define _FLTCONFIG_FLTBEN_POSITION                          0x4
#define _FLTCONFIG_FLTBEN_SIZE                              0x1
#define _FLTCONFIG_FLTBEN_LENGTH                            0x1
#define _FLTCONFIG_FLTBEN_MASK                              0x10
#define _FLTCONFIG_FLTBMOD_POSN                             0x5
#define _FLTCONFIG_FLTBMOD_POSITION                         0x5
#define _FLTCONFIG_FLTBMOD_SIZE                             0x1
#define _FLTCONFIG_FLTBMOD_LENGTH                           0x1
#define _FLTCONFIG_FLTBMOD_MASK                             0x20
#define _FLTCONFIG_FLTBS_POSN                               0x6
#define _FLTCONFIG_FLTBS_POSITION                           0x6
#define _FLTCONFIG_FLTBS_SIZE                               0x1
#define _FLTCONFIG_FLTBS_LENGTH                             0x1
#define _FLTCONFIG_FLTBS_MASK                               0x40
#define _FLTCONFIG_BRFEN_POSN                               0x7
#define _FLTCONFIG_BRFEN_POSITION                           0x7
#define _FLTCONFIG_BRFEN_SIZE                               0x1
#define _FLTCONFIG_BRFEN_LENGTH                             0x1
#define _FLTCONFIG_BRFEN_MASK                               0x80

// Register: DTCON
#define DTCON DTCON
extern volatile unsigned char           DTCON               __at(0xF6D);
#ifndef _LIB_BUILD
asm("DTCON equ 0F6Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DTA                    :6;
        unsigned DTAPS                  :2;
    };
    struct {
        unsigned DT0                    :1;
        unsigned DT1                    :1;
        unsigned DT2                    :1;
        unsigned DT3                    :1;
        unsigned DT4                    :1;
        unsigned DT5                    :1;
        unsigned DTPS0                  :1;
        unsigned DTPS1                  :1;
    };
    struct {
        unsigned DTA0                   :1;
        unsigned DTA1                   :1;
        unsigned DTA2                   :1;
        unsigned DTA3                   :1;
        unsigned DTA4                   :1;
        unsigned DTA5                   :1;
        unsigned DTAPS0                 :1;
        unsigned DTAPS1                 :1;
    };
} DTCONbits_t;
extern volatile DTCONbits_t DTCONbits __at(0xF6D);
// bitfield macros
#define _DTCON_DTA_POSN                                     0x0
#define _DTCON_DTA_POSITION                                 0x0
#define _DTCON_DTA_SIZE                                     0x6
#define _DTCON_DTA_LENGTH                                   0x6
#define _DTCON_DTA_MASK                                     0x3F
#define _DTCON_DTAPS_POSN                                   0x6
#define _DTCON_DTAPS_POSITION                               0x6
#define _DTCON_DTAPS_SIZE                                   0x2
#define _DTCON_DTAPS_LENGTH                                 0x2
#define _DTCON_DTAPS_MASK                                   0xC0
#define _DTCON_DT0_POSN                                     0x0
#define _DTCON_DT0_POSITION                                 0x0
#define _DTCON_DT0_SIZE                                     0x1
#define _DTCON_DT0_LENGTH                                   0x1
#define _DTCON_DT0_MASK                                     0x1
#define _DTCON_DT1_POSN                                     0x1
#define _DTCON_DT1_POSITION                                 0x1
#define _DTCON_DT1_SIZE                                     0x1
#define _DTCON_DT1_LENGTH                                   0x1
#define _DTCON_DT1_MASK                                     0x2
#define _DTCON_DT2_POSN                                     0x2
#define _DTCON_DT2_POSITION                                 0x2
#define _DTCON_DT2_SIZE                                     0x1
#define _DTCON_DT2_LENGTH                                   0x1
#define _DTCON_DT2_MASK                                     0x4
#define _DTCON_DT3_POSN                                     0x3
#define _DTCON_DT3_POSITION                                 0x3
#define _DTCON_DT3_SIZE                                     0x1
#define _DTCON_DT3_LENGTH                                   0x1
#define _DTCON_DT3_MASK                                     0x8
#define _DTCON_DT4_POSN                                     0x4
#define _DTCON_DT4_POSITION                                 0x4
#define _DTCON_DT4_SIZE                                     0x1
#define _DTCON_DT4_LENGTH                                   0x1
#define _DTCON_DT4_MASK                                     0x10
#define _DTCON_DT5_POSN                                     0x5
#define _DTCON_DT5_POSITION                                 0x5
#define _DTCON_DT5_SIZE                                     0x1
#define _DTCON_DT5_LENGTH                                   0x1
#define _DTCON_DT5_MASK                                     0x20
#define _DTCON_DTPS0_POSN                                   0x6
#define _DTCON_DTPS0_POSITION                               0x6
#define _DTCON_DTPS0_SIZE                                   0x1
#define _DTCON_DTPS0_LENGTH                                 0x1
#define _DTCON_DTPS0_MASK                                   0x40
#define _DTCON_DTPS1_POSN                                   0x7
#define _DTCON_DTPS1_POSITION                               0x7
#define _DTCON_DTPS1_SIZE                                   0x1
#define _DTCON_DTPS1_LENGTH                                 0x1
#define _DTCON_DTPS1_MASK                                   0x80
#define _DTCON_DTA0_POSN                                    0x0
#define _DTCON_DTA0_POSITION                                0x0
#define _DTCON_DTA0_SIZE                                    0x1
#define _DTCON_DTA0_LENGTH                                  0x1
#define _DTCON_DTA0_MASK                                    0x1
#define _DTCON_DTA1_POSN                                    0x1
#define _DTCON_DTA1_POSITION                                0x1
#define _DTCON_DTA1_SIZE                                    0x1
#define _DTCON_DTA1_LENGTH                                  0x1
#define _DTCON_DTA1_MASK                                    0x2
#define _DTCON_DTA2_POSN                                    0x2
#define _DTCON_DTA2_POSITION                                0x2
#define _DTCON_DTA2_SIZE                                    0x1
#define _DTCON_DTA2_LENGTH                                  0x1
#define _DTCON_DTA2_MASK                                    0x4
#define _DTCON_DTA3_POSN                                    0x3
#define _DTCON_DTA3_POSITION                                0x3
#define _DTCON_DTA3_SIZE                                    0x1
#define _DTCON_DTA3_LENGTH                                  0x1
#define _DTCON_DTA3_MASK                                    0x8
#define _DTCON_DTA4_POSN                                    0x4
#define _DTCON_DTA4_POSITION                                0x4
#define _DTCON_DTA4_SIZE                                    0x1
#define _DTCON_DTA4_LENGTH                                  0x1
#define _DTCON_DTA4_MASK                                    0x10
#define _DTCON_DTA5_POSN                                    0x5
#define _DTCON_DTA5_POSITION                                0x5
#define _DTCON_DTA5_SIZE                                    0x1
#define _DTCON_DTA5_LENGTH                                  0x1
#define _DTCON_DTA5_MASK                                    0x20
#define _DTCON_DTAPS0_POSN                                  0x6
#define _DTCON_DTAPS0_POSITION                              0x6
#define _DTCON_DTAPS0_SIZE                                  0x1
#define _DTCON_DTAPS0_LENGTH                                0x1
#define _DTCON_DTAPS0_MASK                                  0x40
#define _DTCON_DTAPS1_POSN                                  0x7
#define _DTCON_DTAPS1_POSITION                              0x7
#define _DTCON_DTAPS1_SIZE                                  0x1
#define _DTCON_DTAPS1_LENGTH                                0x1
#define _DTCON_DTAPS1_MASK                                  0x80

// Register: PWMCON1
#define PWMCON1 PWMCON1
extern volatile unsigned char           PWMCON1             __at(0xF6E);
#ifndef _LIB_BUILD
asm("PWMCON1 equ 0F6Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OSYNC                  :1;
        unsigned UDIS                   :1;
        unsigned                        :1;
        unsigned SEVTDIR                :1;
        unsigned SEVOPS                 :4;
    };
    struct {
        unsigned                        :4;
        unsigned SEVOPS0                :1;
        unsigned SEVOPS1                :1;
        unsigned SEVOPS2                :1;
        unsigned SEVOPS3                :1;
    };
} PWMCON1bits_t;
extern volatile PWMCON1bits_t PWMCON1bits __at(0xF6E);
// bitfield macros
#define _PWMCON1_OSYNC_POSN                                 0x0
#define _PWMCON1_OSYNC_POSITION                             0x0
#define _PWMCON1_OSYNC_SIZE                                 0x1
#define _PWMCON1_OSYNC_LENGTH                               0x1
#define _PWMCON1_OSYNC_MASK                                 0x1
#define _PWMCON1_UDIS_POSN                                  0x1
#define _PWMCON1_UDIS_POSITION                              0x1
#define _PWMCON1_UDIS_SIZE                                  0x1
#define _PWMCON1_UDIS_LENGTH                                0x1
#define _PWMCON1_UDIS_MASK                                  0x2
#define _PWMCON1_SEVTDIR_POSN                               0x3
#define _PWMCON1_SEVTDIR_POSITION                           0x3
#define _PWMCON1_SEVTDIR_SIZE                               0x1
#define _PWMCON1_SEVTDIR_LENGTH                             0x1
#define _PWMCON1_SEVTDIR_MASK                               0x8
#define _PWMCON1_SEVOPS_POSN                                0x4
#define _PWMCON1_SEVOPS_POSITION                            0x4
#define _PWMCON1_SEVOPS_SIZE                                0x4
#define _PWMCON1_SEVOPS_LENGTH                              0x4
#define _PWMCON1_SEVOPS_MASK                                0xF0
#define _PWMCON1_SEVOPS0_POSN                               0x4
#define _PWMCON1_SEVOPS0_POSITION                           0x4
#define _PWMCON1_SEVOPS0_SIZE                               0x1
#define _PWMCON1_SEVOPS0_LENGTH                             0x1
#define _PWMCON1_SEVOPS0_MASK                               0x10
#define _PWMCON1_SEVOPS1_POSN                               0x5
#define _PWMCON1_SEVOPS1_POSITION                           0x5
#define _PWMCON1_SEVOPS1_SIZE                               0x1
#define _PWMCON1_SEVOPS1_LENGTH                             0x1
#define _PWMCON1_SEVOPS1_MASK                               0x20
#define _PWMCON1_SEVOPS2_POSN                               0x6
#define _PWMCON1_SEVOPS2_POSITION                           0x6
#define _PWMCON1_SEVOPS2_SIZE                               0x1
#define _PWMCON1_SEVOPS2_LENGTH                             0x1
#define _PWMCON1_SEVOPS2_MASK                               0x40
#define _PWMCON1_SEVOPS3_POSN                               0x7
#define _PWMCON1_SEVOPS3_POSITION                           0x7
#define _PWMCON1_SEVOPS3_SIZE                               0x1
#define _PWMCON1_SEVOPS3_LENGTH                             0x1
#define _PWMCON1_SEVOPS3_MASK                               0x80

// Register: PWMCON0
#define PWMCON0 PWMCON0
extern volatile unsigned char           PWMCON0             __at(0xF6F);
#ifndef _LIB_BUILD
asm("PWMCON0 equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMOD                   :4;
        unsigned PWMEN                  :3;
    };
    struct {
        unsigned PMOD0                  :1;
        unsigned PMOD1                  :1;
        unsigned PMOD2                  :1;
        unsigned PMOD3                  :1;
        unsigned PWMEN0                 :1;
        unsigned PWMEN1                 :1;
        unsigned PWMEN2                 :1;
    };
} PWMCON0bits_t;
extern volatile PWMCON0bits_t PWMCON0bits __at(0xF6F);
// bitfield macros
#define _PWMCON0_PMOD_POSN                                  0x0
#define _PWMCON0_PMOD_POSITION                              0x0
#define _PWMCON0_PMOD_SIZE                                  0x4
#define _PWMCON0_PMOD_LENGTH                                0x4
#define _PWMCON0_PMOD_MASK                                  0xF
#define _PWMCON0_PWMEN_POSN                                 0x4
#define _PWMCON0_PWMEN_POSITION                             0x4
#define _PWMCON0_PWMEN_SIZE                                 0x3
#define _PWMCON0_PWMEN_LENGTH                               0x3
#define _PWMCON0_PWMEN_MASK                                 0x70
#define _PWMCON0_PMOD0_POSN                                 0x0
#define _PWMCON0_PMOD0_POSITION                             0x0
#define _PWMCON0_PMOD0_SIZE                                 0x1
#define _PWMCON0_PMOD0_LENGTH                               0x1
#define _PWMCON0_PMOD0_MASK                                 0x1
#define _PWMCON0_PMOD1_POSN                                 0x1
#define _PWMCON0_PMOD1_POSITION                             0x1
#define _PWMCON0_PMOD1_SIZE                                 0x1
#define _PWMCON0_PMOD1_LENGTH                               0x1
#define _PWMCON0_PMOD1_MASK                                 0x2
#define _PWMCON0_PMOD2_POSN                                 0x2
#define _PWMCON0_PMOD2_POSITION                             0x2
#define _PWMCON0_PMOD2_SIZE                                 0x1
#define _PWMCON0_PMOD2_LENGTH                               0x1
#define _PWMCON0_PMOD2_MASK                                 0x4
#define _PWMCON0_PMOD3_POSN                                 0x3
#define _PWMCON0_PMOD3_POSITION                             0x3
#define _PWMCON0_PMOD3_SIZE                                 0x1
#define _PWMCON0_PMOD3_LENGTH                               0x1
#define _PWMCON0_PMOD3_MASK                                 0x8
#define _PWMCON0_PWMEN0_POSN                                0x4
#define _PWMCON0_PWMEN0_POSITION                            0x4
#define _PWMCON0_PWMEN0_SIZE                                0x1
#define _PWMCON0_PWMEN0_LENGTH                              0x1
#define _PWMCON0_PWMEN0_MASK                                0x10
#define _PWMCON0_PWMEN1_POSN                                0x5
#define _PWMCON0_PWMEN1_POSITION                            0x5
#define _PWMCON0_PWMEN1_SIZE                                0x1
#define _PWMCON0_PWMEN1_LENGTH                              0x1
#define _PWMCON0_PWMEN1_MASK                                0x20
#define _PWMCON0_PWMEN2_POSN                                0x6
#define _PWMCON0_PWMEN2_POSITION                            0x6
#define _PWMCON0_PWMEN2_SIZE                                0x1
#define _PWMCON0_PWMEN2_LENGTH                              0x1
#define _PWMCON0_PWMEN2_MASK                                0x40

// Register: SEVTCMPH
#define SEVTCMPH SEVTCMPH
extern volatile unsigned char           SEVTCMPH            __at(0xF70);
#ifndef _LIB_BUILD
asm("SEVTCMPH equ 0F70h");
#endif

// Register: SEVTCMPL
#define SEVTCMPL SEVTCMPL
extern volatile unsigned char           SEVTCMPL            __at(0xF71);
#ifndef _LIB_BUILD
asm("SEVTCMPL equ 0F71h");
#endif

// Register: PDC2H
#define PDC2H PDC2H
extern volatile unsigned char           PDC2H               __at(0xF74);
#ifndef _LIB_BUILD
asm("PDC2H equ 0F74h");
#endif

// Register: PDC2L
#define PDC2L PDC2L
extern volatile unsigned char           PDC2L               __at(0xF75);
#ifndef _LIB_BUILD
asm("PDC2L equ 0F75h");
#endif

// Register: PDC1H
#define PDC1H PDC1H
extern volatile unsigned char           PDC1H               __at(0xF76);
#ifndef _LIB_BUILD
asm("PDC1H equ 0F76h");
#endif

// Register: PDC1L
#define PDC1L PDC1L
extern volatile unsigned char           PDC1L               __at(0xF77);
#ifndef _LIB_BUILD
asm("PDC1L equ 0F77h");
#endif

// Register: PDC0H
#define PDC0H PDC0H
extern volatile unsigned char           PDC0H               __at(0xF78);
#ifndef _LIB_BUILD
asm("PDC0H equ 0F78h");
#endif

// Register: PDC0L
#define PDC0L PDC0L
extern volatile unsigned char           PDC0L               __at(0xF79);
#ifndef _LIB_BUILD
asm("PDC0L equ 0F79h");
#endif

// Register: PTPERH
#define PTPERH PTPERH
extern volatile unsigned char           PTPERH              __at(0xF7A);
#ifndef _LIB_BUILD
asm("PTPERH equ 0F7Ah");
#endif

// Register: PTPERL
#define PTPERL PTPERL
extern volatile unsigned char           PTPERL              __at(0xF7B);
#ifndef _LIB_BUILD
asm("PTPERL equ 0F7Bh");
#endif

// Register: PTMRH
#define PTMRH PTMRH
extern volatile unsigned char           PTMRH               __at(0xF7C);
#ifndef _LIB_BUILD
asm("PTMRH equ 0F7Ch");
#endif

// Register: PTMRL
#define PTMRL PTMRL
extern volatile unsigned char           PTMRL               __at(0xF7D);
#ifndef _LIB_BUILD
asm("PTMRL equ 0F7Dh");
#endif

// Register: PTCON1
#define PTCON1 PTCON1
extern volatile unsigned char           PTCON1              __at(0xF7E);
#ifndef _LIB_BUILD
asm("PTCON1 equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PTDIR                  :1;
        unsigned PTEN                   :1;
    };
} PTCON1bits_t;
extern volatile PTCON1bits_t PTCON1bits __at(0xF7E);
// bitfield macros
#define _PTCON1_PTDIR_POSN                                  0x6
#define _PTCON1_PTDIR_POSITION                              0x6
#define _PTCON1_PTDIR_SIZE                                  0x1
#define _PTCON1_PTDIR_LENGTH                                0x1
#define _PTCON1_PTDIR_MASK                                  0x40
#define _PTCON1_PTEN_POSN                                   0x7
#define _PTCON1_PTEN_POSITION                               0x7
#define _PTCON1_PTEN_SIZE                                   0x1
#define _PTCON1_PTEN_LENGTH                                 0x1
#define _PTCON1_PTEN_MASK                                   0x80

// Register: PTCON0
#define PTCON0 PTCON0
extern volatile unsigned char           PTCON0              __at(0xF7F);
#ifndef _LIB_BUILD
asm("PTCON0 equ 0F7Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PTMOD                  :2;
        unsigned PTCKPS                 :2;
        unsigned PTOPS                  :4;
    };
    struct {
        unsigned PTMOD0                 :1;
        unsigned PTMOD1                 :1;
        unsigned PTCKPS0                :1;
        unsigned PTCKPS1                :1;
        unsigned PTOPS0                 :1;
        unsigned PTOPS1                 :1;
        unsigned PTOPS2                 :1;
        unsigned PTOPS3                 :1;
    };
} PTCON0bits_t;
extern volatile PTCON0bits_t PTCON0bits __at(0xF7F);
// bitfield macros
#define _PTCON0_PTMOD_POSN                                  0x0
#define _PTCON0_PTMOD_POSITION                              0x0
#define _PTCON0_PTMOD_SIZE                                  0x2
#define _PTCON0_PTMOD_LENGTH                                0x2
#define _PTCON0_PTMOD_MASK                                  0x3
#define _PTCON0_PTCKPS_POSN                                 0x2
#define _PTCON0_PTCKPS_POSITION                             0x2
#define _PTCON0_PTCKPS_SIZE                                 0x2
#define _PTCON0_PTCKPS_LENGTH                               0x2
#define _PTCON0_PTCKPS_MASK                                 0xC
#define _PTCON0_PTOPS_POSN                                  0x4
#define _PTCON0_PTOPS_POSITION                              0x4
#define _PTCON0_PTOPS_SIZE                                  0x4
#define _PTCON0_PTOPS_LENGTH                                0x4
#define _PTCON0_PTOPS_MASK                                  0xF0
#define _PTCON0_PTMOD0_POSN                                 0x0
#define _PTCON0_PTMOD0_POSITION                             0x0
#define _PTCON0_PTMOD0_SIZE                                 0x1
#define _PTCON0_PTMOD0_LENGTH                               0x1
#define _PTCON0_PTMOD0_MASK                                 0x1
#define _PTCON0_PTMOD1_POSN                                 0x1
#define _PTCON0_PTMOD1_POSITION                             0x1
#define _PTCON0_PTMOD1_SIZE                                 0x1
#define _PTCON0_PTMOD1_LENGTH                               0x1
#define _PTCON0_PTMOD1_MASK                                 0x2
#define _PTCON0_PTCKPS0_POSN                                0x2
#define _PTCON0_PTCKPS0_POSITION                            0x2
#define _PTCON0_PTCKPS0_SIZE                                0x1
#define _PTCON0_PTCKPS0_LENGTH                              0x1
#define _PTCON0_PTCKPS0_MASK                                0x4
#define _PTCON0_PTCKPS1_POSN                                0x3
#define _PTCON0_PTCKPS1_POSITION                            0x3
#define _PTCON0_PTCKPS1_SIZE                                0x1
#define _PTCON0_PTCKPS1_LENGTH                              0x1
#define _PTCON0_PTCKPS1_MASK                                0x8
#define _PTCON0_PTOPS0_POSN                                 0x4
#define _PTCON0_PTOPS0_POSITION                             0x4
#define _PTCON0_PTOPS0_SIZE                                 0x1
#define _PTCON0_PTOPS0_LENGTH                               0x1
#define _PTCON0_PTOPS0_MASK                                 0x10
#define _PTCON0_PTOPS1_POSN                                 0x5
#define _PTCON0_PTOPS1_POSITION                             0x5
#define _PTCON0_PTOPS1_SIZE                                 0x1
#define _PTCON0_PTOPS1_LENGTH                               0x1
#define _PTCON0_PTOPS1_MASK                                 0x20
#define _PTCON0_PTOPS2_POSN                                 0x6
#define _PTCON0_PTOPS2_POSITION                             0x6
#define _PTCON0_PTOPS2_SIZE                                 0x1
#define _PTCON0_PTOPS2_LENGTH                               0x1
#define _PTCON0_PTOPS2_MASK                                 0x40
#define _PTCON0_PTOPS3_POSN                                 0x7
#define _PTCON0_PTOPS3_POSITION                             0x7
#define _PTCON0_PTOPS3_SIZE                                 0x1
#define _PTCON0_PTOPS3_LENGTH                               0x1
#define _PTCON0_PTOPS3_MASK                                 0x80

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0xF80);
#ifndef _LIB_BUILD
asm("PORTA equ 0F80h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned                        :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned AN4                    :1;
        unsigned                        :1;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
        unsigned                        :2;
        unsigned CLKO                   :1;
        unsigned CLKI                   :1;
    };
    struct {
        unsigned ULPWUIN                :1;
        unsigned                        :6;
        unsigned RJPU                   :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0xF80);
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
#define _PORTA_AN4_POSN                                     0x4
#define _PORTA_AN4_POSITION                                 0x4
#define _PORTA_AN4_SIZE                                     0x1
#define _PORTA_AN4_LENGTH                                   0x1
#define _PORTA_AN4_MASK                                     0x10
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
#define _PORTA_CLKO_POSN                                    0x6
#define _PORTA_CLKO_POSITION                                0x6
#define _PORTA_CLKO_SIZE                                    0x1
#define _PORTA_CLKO_LENGTH                                  0x1
#define _PORTA_CLKO_MASK                                    0x40
#define _PORTA_CLKI_POSN                                    0x7
#define _PORTA_CLKI_POSITION                                0x7
#define _PORTA_CLKI_SIZE                                    0x1
#define _PORTA_CLKI_LENGTH                                  0x1
#define _PORTA_CLKI_MASK                                    0x80
#define _PORTA_ULPWUIN_POSN                                 0x0
#define _PORTA_ULPWUIN_POSITION                             0x0
#define _PORTA_ULPWUIN_SIZE                                 0x1
#define _PORTA_ULPWUIN_LENGTH                               0x1
#define _PORTA_ULPWUIN_MASK                                 0x1
#define _PORTA_RJPU_POSN                                    0x7
#define _PORTA_RJPU_POSITION                                0x7
#define _PORTA_RJPU_SIZE                                    0x1
#define _PORTA_RJPU_LENGTH                                  0x1
#define _PORTA_RJPU_MASK                                    0x80

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0xF81);
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
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
        unsigned                        :3;
        unsigned CCP2_PA2               :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0xF81);
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
#define _PORTB_CCP2_PA2_POSN                                0x3
#define _PORTB_CCP2_PA2_POSITION                            0x3
#define _PORTB_CCP2_PA2_SIZE                                0x1
#define _PORTB_CCP2_PA2_LENGTH                              0x1
#define _PORTB_CCP2_PA2_MASK                                0x8

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0xF82);
#ifndef _LIB_BUILD
asm("PORTC equ 0F82h");
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
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned CCP1                   :1;
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned TX                     :1;
        unsigned RX                     :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned CCP2                   :1;
        unsigned                        :1;
        unsigned T0CKI                  :1;
        unsigned SDA                    :1;
        unsigned SCK                    :1;
        unsigned CK                     :1;
        unsigned DT                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_FLTA               :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_FLTB               :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_SS                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned nFLTA                  :1;
        unsigned nFLTB                  :1;
        unsigned T5CKI                  :1;
        unsigned SDI                    :1;
        unsigned SCL                    :1;
        unsigned nSS                    :1;
        unsigned SDO                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned FLTA                   :1;
        unsigned FLTB                   :1;
        unsigned                        :3;
        unsigned SS                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned _PA2                    :1;  // Note: Changed by MikroE
        unsigned _PA1                    :1;  // Note: Changed by MikroE
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0xF82);
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
#define _PORTC_CCP1_POSN                                    0x2
#define _PORTC_CCP1_POSITION                                0x2
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x4
#define _PORTC_INT0_POSN                                    0x3
#define _PORTC_INT0_POSITION                                0x3
#define _PORTC_INT0_SIZE                                    0x1
#define _PORTC_INT0_LENGTH                                  0x1
#define _PORTC_INT0_MASK                                    0x8
#define _PORTC_INT1_POSN                                    0x4
#define _PORTC_INT1_POSITION                                0x4
#define _PORTC_INT1_SIZE                                    0x1
#define _PORTC_INT1_LENGTH                                  0x1
#define _PORTC_INT1_MASK                                    0x10
#define _PORTC_INT2_POSN                                    0x5
#define _PORTC_INT2_POSITION                                0x5
#define _PORTC_INT2_SIZE                                    0x1
#define _PORTC_INT2_LENGTH                                  0x1
#define _PORTC_INT2_MASK                                    0x20
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
#define _PORTC_T13CKI_POSN                                  0x0
#define _PORTC_T13CKI_POSITION                              0x0
#define _PORTC_T13CKI_SIZE                                  0x1
#define _PORTC_T13CKI_LENGTH                                0x1
#define _PORTC_T13CKI_MASK                                  0x1
#define _PORTC_CCP2_POSN                                    0x1
#define _PORTC_CCP2_POSITION                                0x1
#define _PORTC_CCP2_SIZE                                    0x1
#define _PORTC_CCP2_LENGTH                                  0x1
#define _PORTC_CCP2_MASK                                    0x2
#define _PORTC_T0CKI_POSN                                   0x3
#define _PORTC_T0CKI_POSITION                               0x3
#define _PORTC_T0CKI_SIZE                                   0x1
#define _PORTC_T0CKI_LENGTH                                 0x1
#define _PORTC_T0CKI_MASK                                   0x8
#define _PORTC_SDA_POSN                                     0x4
#define _PORTC_SDA_POSITION                                 0x4
#define _PORTC_SDA_SIZE                                     0x1
#define _PORTC_SDA_LENGTH                                   0x1
#define _PORTC_SDA_MASK                                     0x10
#define _PORTC_SCK_POSN                                     0x5
#define _PORTC_SCK_POSITION                                 0x5
#define _PORTC_SCK_SIZE                                     0x1
#define _PORTC_SCK_LENGTH                                   0x1
#define _PORTC_SCK_MASK                                     0x20
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
#define _PORTC_NOT_FLTA_POSN                                0x1
#define _PORTC_NOT_FLTA_POSITION                            0x1
#define _PORTC_NOT_FLTA_SIZE                                0x1
#define _PORTC_NOT_FLTA_LENGTH                              0x1
#define _PORTC_NOT_FLTA_MASK                                0x2
#define _PORTC_NOT_FLTB_POSN                                0x2
#define _PORTC_NOT_FLTB_POSITION                            0x2
#define _PORTC_NOT_FLTB_SIZE                                0x1
#define _PORTC_NOT_FLTB_LENGTH                              0x1
#define _PORTC_NOT_FLTB_MASK                                0x4
#define _PORTC_NOT_SS_POSN                                  0x6
#define _PORTC_NOT_SS_POSITION                              0x6
#define _PORTC_NOT_SS_SIZE                                  0x1
#define _PORTC_NOT_SS_LENGTH                                0x1
#define _PORTC_NOT_SS_MASK                                  0x40
#define _PORTC_nFLTA_POSN                                   0x1
#define _PORTC_nFLTA_POSITION                               0x1
#define _PORTC_nFLTA_SIZE                                   0x1
#define _PORTC_nFLTA_LENGTH                                 0x1
#define _PORTC_nFLTA_MASK                                   0x2
#define _PORTC_nFLTB_POSN                                   0x2
#define _PORTC_nFLTB_POSITION                               0x2
#define _PORTC_nFLTB_SIZE                                   0x1
#define _PORTC_nFLTB_LENGTH                                 0x1
#define _PORTC_nFLTB_MASK                                   0x4
#define _PORTC_T5CKI_POSN                                   0x3
#define _PORTC_T5CKI_POSITION                               0x3
#define _PORTC_T5CKI_SIZE                                   0x1
#define _PORTC_T5CKI_LENGTH                                 0x1
#define _PORTC_T5CKI_MASK                                   0x8
#define _PORTC_SDI_POSN                                     0x4
#define _PORTC_SDI_POSITION                                 0x4
#define _PORTC_SDI_SIZE                                     0x1
#define _PORTC_SDI_LENGTH                                   0x1
#define _PORTC_SDI_MASK                                     0x10
#define _PORTC_SCL_POSN                                     0x5
#define _PORTC_SCL_POSITION                                 0x5
#define _PORTC_SCL_SIZE                                     0x1
#define _PORTC_SCL_LENGTH                                   0x1
#define _PORTC_SCL_MASK                                     0x20
#define _PORTC_nSS_POSN                                     0x6
#define _PORTC_nSS_POSITION                                 0x6
#define _PORTC_nSS_SIZE                                     0x1
#define _PORTC_nSS_LENGTH                                   0x1
#define _PORTC_nSS_MASK                                     0x40
#define _PORTC_SDO_POSN                                     0x7
#define _PORTC_SDO_POSITION                                 0x7
#define _PORTC_SDO_SIZE                                     0x1
#define _PORTC_SDO_LENGTH                                   0x1
#define _PORTC_SDO_MASK                                     0x80
#define _PORTC_FLTA_POSN                                    0x1
#define _PORTC_FLTA_POSITION                                0x1
#define _PORTC_FLTA_SIZE                                    0x1
#define _PORTC_FLTA_LENGTH                                  0x1
#define _PORTC_FLTA_MASK                                    0x2
#define _PORTC_FLTB_POSN                                    0x2
#define _PORTC_FLTB_POSITION                                0x2
#define _PORTC_FLTB_SIZE                                    0x1
#define _PORTC_FLTB_LENGTH                                  0x1
#define _PORTC_FLTB_MASK                                    0x4
#define _PORTC_SS_POSN                                      0x6
#define _PORTC_SS_POSITION                                  0x6
#define _PORTC_SS_SIZE                                      0x1
#define _PORTC_SS_LENGTH                                    0x1
#define _PORTC_SS_MASK                                      0x40
#define _PORTC_PA2_POSN                                     0x1
#define _PORTC_PA2_POSITION                                 0x1
#define _PORTC_PA2_SIZE                                     0x1
#define _PORTC_PA2_LENGTH                                   0x1
#define _PORTC_PA2_MASK                                     0x2
#define _PORTC_PA1_POSN                                     0x2
#define _PORTC_PA1_POSITION                                 0x2
#define _PORTC_PA1_SIZE                                     0x1
#define _PORTC_PA1_LENGTH                                   0x1
#define _PORTC_PA1_MASK                                     0x4

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0xF84);
#ifndef _LIB_BUILD
asm("PORTE equ 0F84h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned RE3                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_MCLR               :1;
    };
    struct {
        unsigned                        :3;
        unsigned nMCLR                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned MCLR                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP9E                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned PC3E                   :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0xF84);
// bitfield macros
#define _PORTE_RE3_POSN                                     0x3
#define _PORTE_RE3_POSITION                                 0x3
#define _PORTE_RE3_SIZE                                     0x1
#define _PORTE_RE3_LENGTH                                   0x1
#define _PORTE_RE3_MASK                                     0x8
#define _PORTE_NOT_MCLR_POSN                                0x3
#define _PORTE_NOT_MCLR_POSITION                            0x3
#define _PORTE_NOT_MCLR_SIZE                                0x1
#define _PORTE_NOT_MCLR_LENGTH                              0x1
#define _PORTE_NOT_MCLR_MASK                                0x8
#define _PORTE_nMCLR_POSN                                   0x3
#define _PORTE_nMCLR_POSITION                               0x3
#define _PORTE_nMCLR_SIZE                                   0x1
#define _PORTE_nMCLR_LENGTH                                 0x1
#define _PORTE_nMCLR_MASK                                   0x8
#define _PORTE_MCLR_POSN                                    0x3
#define _PORTE_MCLR_POSITION                                0x3
#define _PORTE_MCLR_SIZE                                    0x1
#define _PORTE_MCLR_LENGTH                                  0x1
#define _PORTE_MCLR_MASK                                    0x8
#define _PORTE_CCP9E_POSN                                   0x3
#define _PORTE_CCP9E_POSITION                               0x3
#define _PORTE_CCP9E_SIZE                                   0x1
#define _PORTE_CCP9E_LENGTH                                 0x1
#define _PORTE_CCP9E_MASK                                   0x8
#define _PORTE_PC3E_POSN                                    0x3
#define _PORTE_PC3E_POSITION                                0x3
#define _PORTE_PC3E_SIZE                                    0x1
#define _PORTE_PC3E_LENGTH                                  0x1
#define _PORTE_PC3E_MASK                                    0x8

// Register: TMR5
#define TMR5 TMR5
extern volatile unsigned short          TMR5                __at(0xF87);
#ifndef _LIB_BUILD
asm("TMR5 equ 0F87h");
#endif

// Register: TMR5L
#define TMR5L TMR5L
extern volatile unsigned char           TMR5L               __at(0xF87);
#ifndef _LIB_BUILD
asm("TMR5L equ 0F87h");
#endif

// Register: TMR5H
#define TMR5H TMR5H
extern volatile unsigned char           TMR5H               __at(0xF88);
#ifndef _LIB_BUILD
asm("TMR5H equ 0F88h");
#endif

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0xF89);
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned                        :1;
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
    };
    struct {
        unsigned LA0                    :1;
        unsigned LA1                    :1;
        unsigned LA2                    :1;
        unsigned LA3                    :1;
        unsigned LA4                    :1;
        unsigned                        :1;
        unsigned LA6                    :1;
        unsigned LA7                    :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0xF89);
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
#define _LATA_LA0_POSN                                      0x0
#define _LATA_LA0_POSITION                                  0x0
#define _LATA_LA0_SIZE                                      0x1
#define _LATA_LA0_LENGTH                                    0x1
#define _LATA_LA0_MASK                                      0x1
#define _LATA_LA1_POSN                                      0x1
#define _LATA_LA1_POSITION                                  0x1
#define _LATA_LA1_SIZE                                      0x1
#define _LATA_LA1_LENGTH                                    0x1
#define _LATA_LA1_MASK                                      0x2
#define _LATA_LA2_POSN                                      0x2
#define _LATA_LA2_POSITION                                  0x2
#define _LATA_LA2_SIZE                                      0x1
#define _LATA_LA2_LENGTH                                    0x1
#define _LATA_LA2_MASK                                      0x4
#define _LATA_LA3_POSN                                      0x3
#define _LATA_LA3_POSITION                                  0x3
#define _LATA_LA3_SIZE                                      0x1
#define _LATA_LA3_LENGTH                                    0x1
#define _LATA_LA3_MASK                                      0x8
#define _LATA_LA4_POSN                                      0x4
#define _LATA_LA4_POSITION                                  0x4
#define _LATA_LA4_SIZE                                      0x1
#define _LATA_LA4_LENGTH                                    0x1
#define _LATA_LA4_MASK                                      0x10
#define _LATA_LA6_POSN                                      0x6
#define _LATA_LA6_POSITION                                  0x6
#define _LATA_LA6_SIZE                                      0x1
#define _LATA_LA6_LENGTH                                    0x1
#define _LATA_LA6_MASK                                      0x40
#define _LATA_LA7_POSN                                      0x7
#define _LATA_LA7_POSITION                                  0x7
#define _LATA_LA7_SIZE                                      0x1
#define _LATA_LA7_LENGTH                                    0x1
#define _LATA_LA7_MASK                                      0x80

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0xF8A);
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
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
        unsigned LB0                    :1;
        unsigned LB1                    :1;
        unsigned LB2                    :1;
        unsigned LB3                    :1;
        unsigned LB4                    :1;
        unsigned LB5                    :1;
        unsigned LB6                    :1;
        unsigned LB7                    :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0xF8A);
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
#define _LATB_LB0_POSN                                      0x0
#define _LATB_LB0_POSITION                                  0x0
#define _LATB_LB0_SIZE                                      0x1
#define _LATB_LB0_LENGTH                                    0x1
#define _LATB_LB0_MASK                                      0x1
#define _LATB_LB1_POSN                                      0x1
#define _LATB_LB1_POSITION                                  0x1
#define _LATB_LB1_SIZE                                      0x1
#define _LATB_LB1_LENGTH                                    0x1
#define _LATB_LB1_MASK                                      0x2
#define _LATB_LB2_POSN                                      0x2
#define _LATB_LB2_POSITION                                  0x2
#define _LATB_LB2_SIZE                                      0x1
#define _LATB_LB2_LENGTH                                    0x1
#define _LATB_LB2_MASK                                      0x4
#define _LATB_LB3_POSN                                      0x3
#define _LATB_LB3_POSITION                                  0x3
#define _LATB_LB3_SIZE                                      0x1
#define _LATB_LB3_LENGTH                                    0x1
#define _LATB_LB3_MASK                                      0x8
#define _LATB_LB4_POSN                                      0x4
#define _LATB_LB4_POSITION                                  0x4
#define _LATB_LB4_SIZE                                      0x1
#define _LATB_LB4_LENGTH                                    0x1
#define _LATB_LB4_MASK                                      0x10
#define _LATB_LB5_POSN                                      0x5
#define _LATB_LB5_POSITION                                  0x5
#define _LATB_LB5_SIZE                                      0x1
#define _LATB_LB5_LENGTH                                    0x1
#define _LATB_LB5_MASK                                      0x20
#define _LATB_LB6_POSN                                      0x6
#define _LATB_LB6_POSITION                                  0x6
#define _LATB_LB6_SIZE                                      0x1
#define _LATB_LB6_LENGTH                                    0x1
#define _LATB_LB6_MASK                                      0x40
#define _LATB_LB7_POSN                                      0x7
#define _LATB_LB7_POSITION                                  0x7
#define _LATB_LB7_SIZE                                      0x1
#define _LATB_LB7_LENGTH                                    0x1
#define _LATB_LB7_MASK                                      0x80

// Register: LATC
#define LATC LATC
extern volatile unsigned char           LATC                __at(0xF8B);
#ifndef _LIB_BUILD
asm("LATC equ 0F8Bh");
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
        unsigned LC0                    :1;
        unsigned LC1                    :1;
        unsigned LC2                    :1;
        unsigned LC3                    :1;
        unsigned LC4                    :1;
        unsigned LC5                    :1;
        unsigned LC6                    :1;
        unsigned LC7                    :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits __at(0xF8B);
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
#define _LATC_LC0_POSN                                      0x0
#define _LATC_LC0_POSITION                                  0x0
#define _LATC_LC0_SIZE                                      0x1
#define _LATC_LC0_LENGTH                                    0x1
#define _LATC_LC0_MASK                                      0x1
#define _LATC_LC1_POSN                                      0x1
#define _LATC_LC1_POSITION                                  0x1
#define _LATC_LC1_SIZE                                      0x1
#define _LATC_LC1_LENGTH                                    0x1
#define _LATC_LC1_MASK                                      0x2
#define _LATC_LC2_POSN                                      0x2
#define _LATC_LC2_POSITION                                  0x2
#define _LATC_LC2_SIZE                                      0x1
#define _LATC_LC2_LENGTH                                    0x1
#define _LATC_LC2_MASK                                      0x4
#define _LATC_LC3_POSN                                      0x3
#define _LATC_LC3_POSITION                                  0x3
#define _LATC_LC3_SIZE                                      0x1
#define _LATC_LC3_LENGTH                                    0x1
#define _LATC_LC3_MASK                                      0x8
#define _LATC_LC4_POSN                                      0x4
#define _LATC_LC4_POSITION                                  0x4
#define _LATC_LC4_SIZE                                      0x1
#define _LATC_LC4_LENGTH                                    0x1
#define _LATC_LC4_MASK                                      0x10
#define _LATC_LC5_POSN                                      0x5
#define _LATC_LC5_POSITION                                  0x5
#define _LATC_LC5_SIZE                                      0x1
#define _LATC_LC5_LENGTH                                    0x1
#define _LATC_LC5_MASK                                      0x20
#define _LATC_LC6_POSN                                      0x6
#define _LATC_LC6_POSITION                                  0x6
#define _LATC_LC6_SIZE                                      0x1
#define _LATC_LC6_LENGTH                                    0x1
#define _LATC_LC6_MASK                                      0x40
#define _LATC_LC7_POSN                                      0x7
#define _LATC_LC7_POSITION                                  0x7
#define _LATC_LC7_SIZE                                      0x1
#define _LATC_LC7_LENGTH                                    0x1
#define _LATC_LC7_MASK                                      0x80

// Register: PR5
#define _PR5 _PR5  // Note: Changed by MikroE
extern volatile unsigned short          _PR5                 __at(0xF90);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR5 equ 0F90h");  // Note: Changed by MikroE
#endif

// Register: PR5L
#define PR5L PR5L
extern volatile unsigned char           PR5L                __at(0xF90);
#ifndef _LIB_BUILD
asm("PR5L equ 0F90h");
#endif

// Register: PR5H
#define PR5H PR5H
extern volatile unsigned char           PR5H                __at(0xF91);
#ifndef _LIB_BUILD
asm("PR5H equ 0F91h");
#endif

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0xF92);
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
#endif
// aliases
extern volatile unsigned char           DDRA                __at(0xF92);
#ifndef _LIB_BUILD
asm("DDRA equ 0F92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned                        :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned                        :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0xF92);
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
#define _TRISA_RA0_POSN                                     0x0
#define _TRISA_RA0_POSITION                                 0x0
#define _TRISA_RA0_SIZE                                     0x1
#define _TRISA_RA0_LENGTH                                   0x1
#define _TRISA_RA0_MASK                                     0x1
#define _TRISA_RA1_POSN                                     0x1
#define _TRISA_RA1_POSITION                                 0x1
#define _TRISA_RA1_SIZE                                     0x1
#define _TRISA_RA1_LENGTH                                   0x1
#define _TRISA_RA1_MASK                                     0x2
#define _TRISA_RA2_POSN                                     0x2
#define _TRISA_RA2_POSITION                                 0x2
#define _TRISA_RA2_SIZE                                     0x1
#define _TRISA_RA2_LENGTH                                   0x1
#define _TRISA_RA2_MASK                                     0x4
#define _TRISA_RA3_POSN                                     0x3
#define _TRISA_RA3_POSITION                                 0x3
#define _TRISA_RA3_SIZE                                     0x1
#define _TRISA_RA3_LENGTH                                   0x1
#define _TRISA_RA3_MASK                                     0x8
#define _TRISA_RA4_POSN                                     0x4
#define _TRISA_RA4_POSITION                                 0x4
#define _TRISA_RA4_SIZE                                     0x1
#define _TRISA_RA4_LENGTH                                   0x1
#define _TRISA_RA4_MASK                                     0x10
#define _TRISA_RA6_POSN                                     0x6
#define _TRISA_RA6_POSITION                                 0x6
#define _TRISA_RA6_SIZE                                     0x1
#define _TRISA_RA6_LENGTH                                   0x1
#define _TRISA_RA6_MASK                                     0x40
#define _TRISA_RA7_POSN                                     0x7
#define _TRISA_RA7_POSITION                                 0x7
#define _TRISA_RA7_SIZE                                     0x1
#define _TRISA_RA7_LENGTH                                   0x1
#define _TRISA_RA7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned                        :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned                        :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} DDRAbits_t;
extern volatile DDRAbits_t DDRAbits __at(0xF92);
// bitfield macros
#define _DDRA_TRISA0_POSN                                   0x0
#define _DDRA_TRISA0_POSITION                               0x0
#define _DDRA_TRISA0_SIZE                                   0x1
#define _DDRA_TRISA0_LENGTH                                 0x1
#define _DDRA_TRISA0_MASK                                   0x1
#define _DDRA_TRISA1_POSN                                   0x1
#define _DDRA_TRISA1_POSITION                               0x1
#define _DDRA_TRISA1_SIZE                                   0x1
#define _DDRA_TRISA1_LENGTH                                 0x1
#define _DDRA_TRISA1_MASK                                   0x2
#define _DDRA_TRISA2_POSN                                   0x2
#define _DDRA_TRISA2_POSITION                               0x2
#define _DDRA_TRISA2_SIZE                                   0x1
#define _DDRA_TRISA2_LENGTH                                 0x1
#define _DDRA_TRISA2_MASK                                   0x4
#define _DDRA_TRISA3_POSN                                   0x3
#define _DDRA_TRISA3_POSITION                               0x3
#define _DDRA_TRISA3_SIZE                                   0x1
#define _DDRA_TRISA3_LENGTH                                 0x1
#define _DDRA_TRISA3_MASK                                   0x8
#define _DDRA_TRISA4_POSN                                   0x4
#define _DDRA_TRISA4_POSITION                               0x4
#define _DDRA_TRISA4_SIZE                                   0x1
#define _DDRA_TRISA4_LENGTH                                 0x1
#define _DDRA_TRISA4_MASK                                   0x10
#define _DDRA_TRISA6_POSN                                   0x6
#define _DDRA_TRISA6_POSITION                               0x6
#define _DDRA_TRISA6_SIZE                                   0x1
#define _DDRA_TRISA6_LENGTH                                 0x1
#define _DDRA_TRISA6_MASK                                   0x40
#define _DDRA_TRISA7_POSN                                   0x7
#define _DDRA_TRISA7_POSITION                               0x7
#define _DDRA_TRISA7_SIZE                                   0x1
#define _DDRA_TRISA7_LENGTH                                 0x1
#define _DDRA_TRISA7_MASK                                   0x80
#define _DDRA_RA0_POSN                                      0x0
#define _DDRA_RA0_POSITION                                  0x0
#define _DDRA_RA0_SIZE                                      0x1
#define _DDRA_RA0_LENGTH                                    0x1
#define _DDRA_RA0_MASK                                      0x1
#define _DDRA_RA1_POSN                                      0x1
#define _DDRA_RA1_POSITION                                  0x1
#define _DDRA_RA1_SIZE                                      0x1
#define _DDRA_RA1_LENGTH                                    0x1
#define _DDRA_RA1_MASK                                      0x2
#define _DDRA_RA2_POSN                                      0x2
#define _DDRA_RA2_POSITION                                  0x2
#define _DDRA_RA2_SIZE                                      0x1
#define _DDRA_RA2_LENGTH                                    0x1
#define _DDRA_RA2_MASK                                      0x4
#define _DDRA_RA3_POSN                                      0x3
#define _DDRA_RA3_POSITION                                  0x3
#define _DDRA_RA3_SIZE                                      0x1
#define _DDRA_RA3_LENGTH                                    0x1
#define _DDRA_RA3_MASK                                      0x8
#define _DDRA_RA4_POSN                                      0x4
#define _DDRA_RA4_POSITION                                  0x4
#define _DDRA_RA4_SIZE                                      0x1
#define _DDRA_RA4_LENGTH                                    0x1
#define _DDRA_RA4_MASK                                      0x10
#define _DDRA_RA6_POSN                                      0x6
#define _DDRA_RA6_POSITION                                  0x6
#define _DDRA_RA6_SIZE                                      0x1
#define _DDRA_RA6_LENGTH                                    0x1
#define _DDRA_RA6_MASK                                      0x40
#define _DDRA_RA7_POSN                                      0x7
#define _DDRA_RA7_POSITION                                  0x7
#define _DDRA_RA7_SIZE                                      0x1
#define _DDRA_RA7_LENGTH                                    0x1
#define _DDRA_RA7_MASK                                      0x80

// Register: TRISB
#define TRISB TRISB
extern volatile unsigned char           TRISB               __at(0xF93);
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
#endif
// aliases
extern volatile unsigned char           DDRB                __at(0xF93);
#ifndef _LIB_BUILD
asm("DDRB equ 0F93h");
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
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0xF93);
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
#define _TRISB_RB0_POSN                                     0x0
#define _TRISB_RB0_POSITION                                 0x0
#define _TRISB_RB0_SIZE                                     0x1
#define _TRISB_RB0_LENGTH                                   0x1
#define _TRISB_RB0_MASK                                     0x1
#define _TRISB_RB1_POSN                                     0x1
#define _TRISB_RB1_POSITION                                 0x1
#define _TRISB_RB1_SIZE                                     0x1
#define _TRISB_RB1_LENGTH                                   0x1
#define _TRISB_RB1_MASK                                     0x2
#define _TRISB_RB2_POSN                                     0x2
#define _TRISB_RB2_POSITION                                 0x2
#define _TRISB_RB2_SIZE                                     0x1
#define _TRISB_RB2_LENGTH                                   0x1
#define _TRISB_RB2_MASK                                     0x4
#define _TRISB_RB3_POSN                                     0x3
#define _TRISB_RB3_POSITION                                 0x3
#define _TRISB_RB3_SIZE                                     0x1
#define _TRISB_RB3_LENGTH                                   0x1
#define _TRISB_RB3_MASK                                     0x8
#define _TRISB_RB4_POSN                                     0x4
#define _TRISB_RB4_POSITION                                 0x4
#define _TRISB_RB4_SIZE                                     0x1
#define _TRISB_RB4_LENGTH                                   0x1
#define _TRISB_RB4_MASK                                     0x10
#define _TRISB_RB5_POSN                                     0x5
#define _TRISB_RB5_POSITION                                 0x5
#define _TRISB_RB5_SIZE                                     0x1
#define _TRISB_RB5_LENGTH                                   0x1
#define _TRISB_RB5_MASK                                     0x20
#define _TRISB_RB6_POSN                                     0x6
#define _TRISB_RB6_POSITION                                 0x6
#define _TRISB_RB6_SIZE                                     0x1
#define _TRISB_RB6_LENGTH                                   0x1
#define _TRISB_RB6_MASK                                     0x40
#define _TRISB_RB7_POSN                                     0x7
#define _TRISB_RB7_POSITION                                 0x7
#define _TRISB_RB7_SIZE                                     0x1
#define _TRISB_RB7_LENGTH                                   0x1
#define _TRISB_RB7_MASK                                     0x80
// alias bitfield definitions
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
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits_t;
extern volatile DDRBbits_t DDRBbits __at(0xF93);
// bitfield macros
#define _DDRB_TRISB0_POSN                                   0x0
#define _DDRB_TRISB0_POSITION                               0x0
#define _DDRB_TRISB0_SIZE                                   0x1
#define _DDRB_TRISB0_LENGTH                                 0x1
#define _DDRB_TRISB0_MASK                                   0x1
#define _DDRB_TRISB1_POSN                                   0x1
#define _DDRB_TRISB1_POSITION                               0x1
#define _DDRB_TRISB1_SIZE                                   0x1
#define _DDRB_TRISB1_LENGTH                                 0x1
#define _DDRB_TRISB1_MASK                                   0x2
#define _DDRB_TRISB2_POSN                                   0x2
#define _DDRB_TRISB2_POSITION                               0x2
#define _DDRB_TRISB2_SIZE                                   0x1
#define _DDRB_TRISB2_LENGTH                                 0x1
#define _DDRB_TRISB2_MASK                                   0x4
#define _DDRB_TRISB3_POSN                                   0x3
#define _DDRB_TRISB3_POSITION                               0x3
#define _DDRB_TRISB3_SIZE                                   0x1
#define _DDRB_TRISB3_LENGTH                                 0x1
#define _DDRB_TRISB3_MASK                                   0x8
#define _DDRB_TRISB4_POSN                                   0x4
#define _DDRB_TRISB4_POSITION                               0x4
#define _DDRB_TRISB4_SIZE                                   0x1
#define _DDRB_TRISB4_LENGTH                                 0x1
#define _DDRB_TRISB4_MASK                                   0x10
#define _DDRB_TRISB5_POSN                                   0x5
#define _DDRB_TRISB5_POSITION                               0x5
#define _DDRB_TRISB5_SIZE                                   0x1
#define _DDRB_TRISB5_LENGTH                                 0x1
#define _DDRB_TRISB5_MASK                                   0x20
#define _DDRB_TRISB6_POSN                                   0x6
#define _DDRB_TRISB6_POSITION                               0x6
#define _DDRB_TRISB6_SIZE                                   0x1
#define _DDRB_TRISB6_LENGTH                                 0x1
#define _DDRB_TRISB6_MASK                                   0x40
#define _DDRB_TRISB7_POSN                                   0x7
#define _DDRB_TRISB7_POSITION                               0x7
#define _DDRB_TRISB7_SIZE                                   0x1
#define _DDRB_TRISB7_LENGTH                                 0x1
#define _DDRB_TRISB7_MASK                                   0x80
#define _DDRB_RB0_POSN                                      0x0
#define _DDRB_RB0_POSITION                                  0x0
#define _DDRB_RB0_SIZE                                      0x1
#define _DDRB_RB0_LENGTH                                    0x1
#define _DDRB_RB0_MASK                                      0x1
#define _DDRB_RB1_POSN                                      0x1
#define _DDRB_RB1_POSITION                                  0x1
#define _DDRB_RB1_SIZE                                      0x1
#define _DDRB_RB1_LENGTH                                    0x1
#define _DDRB_RB1_MASK                                      0x2
#define _DDRB_RB2_POSN                                      0x2
#define _DDRB_RB2_POSITION                                  0x2
#define _DDRB_RB2_SIZE                                      0x1
#define _DDRB_RB2_LENGTH                                    0x1
#define _DDRB_RB2_MASK                                      0x4
#define _DDRB_RB3_POSN                                      0x3
#define _DDRB_RB3_POSITION                                  0x3
#define _DDRB_RB3_SIZE                                      0x1
#define _DDRB_RB3_LENGTH                                    0x1
#define _DDRB_RB3_MASK                                      0x8
#define _DDRB_RB4_POSN                                      0x4
#define _DDRB_RB4_POSITION                                  0x4
#define _DDRB_RB4_SIZE                                      0x1
#define _DDRB_RB4_LENGTH                                    0x1
#define _DDRB_RB4_MASK                                      0x10
#define _DDRB_RB5_POSN                                      0x5
#define _DDRB_RB5_POSITION                                  0x5
#define _DDRB_RB5_SIZE                                      0x1
#define _DDRB_RB5_LENGTH                                    0x1
#define _DDRB_RB5_MASK                                      0x20
#define _DDRB_RB6_POSN                                      0x6
#define _DDRB_RB6_POSITION                                  0x6
#define _DDRB_RB6_SIZE                                      0x1
#define _DDRB_RB6_LENGTH                                    0x1
#define _DDRB_RB6_MASK                                      0x40
#define _DDRB_RB7_POSN                                      0x7
#define _DDRB_RB7_POSITION                                  0x7
#define _DDRB_RB7_SIZE                                      0x1
#define _DDRB_RB7_LENGTH                                    0x1
#define _DDRB_RB7_MASK                                      0x80

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0xF94);
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
#endif
// aliases
extern volatile unsigned char           DDRC                __at(0xF94);
#ifndef _LIB_BUILD
asm("DDRC equ 0F94h");
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
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0xF94);
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
#define _TRISC_RC0_POSN                                     0x0
#define _TRISC_RC0_POSITION                                 0x0
#define _TRISC_RC0_SIZE                                     0x1
#define _TRISC_RC0_LENGTH                                   0x1
#define _TRISC_RC0_MASK                                     0x1
#define _TRISC_RC1_POSN                                     0x1
#define _TRISC_RC1_POSITION                                 0x1
#define _TRISC_RC1_SIZE                                     0x1
#define _TRISC_RC1_LENGTH                                   0x1
#define _TRISC_RC1_MASK                                     0x2
#define _TRISC_RC2_POSN                                     0x2
#define _TRISC_RC2_POSITION                                 0x2
#define _TRISC_RC2_SIZE                                     0x1
#define _TRISC_RC2_LENGTH                                   0x1
#define _TRISC_RC2_MASK                                     0x4
#define _TRISC_RC3_POSN                                     0x3
#define _TRISC_RC3_POSITION                                 0x3
#define _TRISC_RC3_SIZE                                     0x1
#define _TRISC_RC3_LENGTH                                   0x1
#define _TRISC_RC3_MASK                                     0x8
#define _TRISC_RC4_POSN                                     0x4
#define _TRISC_RC4_POSITION                                 0x4
#define _TRISC_RC4_SIZE                                     0x1
#define _TRISC_RC4_LENGTH                                   0x1
#define _TRISC_RC4_MASK                                     0x10
#define _TRISC_RC5_POSN                                     0x5
#define _TRISC_RC5_POSITION                                 0x5
#define _TRISC_RC5_SIZE                                     0x1
#define _TRISC_RC5_LENGTH                                   0x1
#define _TRISC_RC5_MASK                                     0x20
#define _TRISC_RC6_POSN                                     0x6
#define _TRISC_RC6_POSITION                                 0x6
#define _TRISC_RC6_SIZE                                     0x1
#define _TRISC_RC6_LENGTH                                   0x1
#define _TRISC_RC6_MASK                                     0x40
#define _TRISC_RC7_POSN                                     0x7
#define _TRISC_RC7_POSITION                                 0x7
#define _TRISC_RC7_SIZE                                     0x1
#define _TRISC_RC7_LENGTH                                   0x1
#define _TRISC_RC7_MASK                                     0x80
// alias bitfield definitions
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
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} DDRCbits_t;
extern volatile DDRCbits_t DDRCbits __at(0xF94);
// bitfield macros
#define _DDRC_TRISC0_POSN                                   0x0
#define _DDRC_TRISC0_POSITION                               0x0
#define _DDRC_TRISC0_SIZE                                   0x1
#define _DDRC_TRISC0_LENGTH                                 0x1
#define _DDRC_TRISC0_MASK                                   0x1
#define _DDRC_TRISC1_POSN                                   0x1
#define _DDRC_TRISC1_POSITION                               0x1
#define _DDRC_TRISC1_SIZE                                   0x1
#define _DDRC_TRISC1_LENGTH                                 0x1
#define _DDRC_TRISC1_MASK                                   0x2
#define _DDRC_TRISC2_POSN                                   0x2
#define _DDRC_TRISC2_POSITION                               0x2
#define _DDRC_TRISC2_SIZE                                   0x1
#define _DDRC_TRISC2_LENGTH                                 0x1
#define _DDRC_TRISC2_MASK                                   0x4
#define _DDRC_TRISC3_POSN                                   0x3
#define _DDRC_TRISC3_POSITION                               0x3
#define _DDRC_TRISC3_SIZE                                   0x1
#define _DDRC_TRISC3_LENGTH                                 0x1
#define _DDRC_TRISC3_MASK                                   0x8
#define _DDRC_TRISC4_POSN                                   0x4
#define _DDRC_TRISC4_POSITION                               0x4
#define _DDRC_TRISC4_SIZE                                   0x1
#define _DDRC_TRISC4_LENGTH                                 0x1
#define _DDRC_TRISC4_MASK                                   0x10
#define _DDRC_TRISC5_POSN                                   0x5
#define _DDRC_TRISC5_POSITION                               0x5
#define _DDRC_TRISC5_SIZE                                   0x1
#define _DDRC_TRISC5_LENGTH                                 0x1
#define _DDRC_TRISC5_MASK                                   0x20
#define _DDRC_TRISC6_POSN                                   0x6
#define _DDRC_TRISC6_POSITION                               0x6
#define _DDRC_TRISC6_SIZE                                   0x1
#define _DDRC_TRISC6_LENGTH                                 0x1
#define _DDRC_TRISC6_MASK                                   0x40
#define _DDRC_TRISC7_POSN                                   0x7
#define _DDRC_TRISC7_POSITION                               0x7
#define _DDRC_TRISC7_SIZE                                   0x1
#define _DDRC_TRISC7_LENGTH                                 0x1
#define _DDRC_TRISC7_MASK                                   0x80
#define _DDRC_RC0_POSN                                      0x0
#define _DDRC_RC0_POSITION                                  0x0
#define _DDRC_RC0_SIZE                                      0x1
#define _DDRC_RC0_LENGTH                                    0x1
#define _DDRC_RC0_MASK                                      0x1
#define _DDRC_RC1_POSN                                      0x1
#define _DDRC_RC1_POSITION                                  0x1
#define _DDRC_RC1_SIZE                                      0x1
#define _DDRC_RC1_LENGTH                                    0x1
#define _DDRC_RC1_MASK                                      0x2
#define _DDRC_RC2_POSN                                      0x2
#define _DDRC_RC2_POSITION                                  0x2
#define _DDRC_RC2_SIZE                                      0x1
#define _DDRC_RC2_LENGTH                                    0x1
#define _DDRC_RC2_MASK                                      0x4
#define _DDRC_RC3_POSN                                      0x3
#define _DDRC_RC3_POSITION                                  0x3
#define _DDRC_RC3_SIZE                                      0x1
#define _DDRC_RC3_LENGTH                                    0x1
#define _DDRC_RC3_MASK                                      0x8
#define _DDRC_RC4_POSN                                      0x4
#define _DDRC_RC4_POSITION                                  0x4
#define _DDRC_RC4_SIZE                                      0x1
#define _DDRC_RC4_LENGTH                                    0x1
#define _DDRC_RC4_MASK                                      0x10
#define _DDRC_RC5_POSN                                      0x5
#define _DDRC_RC5_POSITION                                  0x5
#define _DDRC_RC5_SIZE                                      0x1
#define _DDRC_RC5_LENGTH                                    0x1
#define _DDRC_RC5_MASK                                      0x20
#define _DDRC_RC6_POSN                                      0x6
#define _DDRC_RC6_POSITION                                  0x6
#define _DDRC_RC6_SIZE                                      0x1
#define _DDRC_RC6_LENGTH                                    0x1
#define _DDRC_RC6_MASK                                      0x40
#define _DDRC_RC7_POSN                                      0x7
#define _DDRC_RC7_POSITION                                  0x7
#define _DDRC_RC7_SIZE                                      0x1
#define _DDRC_RC7_LENGTH                                    0x1
#define _DDRC_RC7_MASK                                      0x80

// Register: ADCHS
#define ADCHS ADCHS
extern volatile unsigned char           ADCHS               __at(0xF99);
#ifndef _LIB_BUILD
asm("ADCHS equ 0F99h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SASEL                  :2;
        unsigned SCSEL                  :2;
        unsigned SBSEL                  :2;
        unsigned SDSEL                  :2;
    };
    struct {
        unsigned GASEL0                 :1;
        unsigned GASEL1                 :1;
        unsigned GCSEL0                 :1;
        unsigned GCSEL1                 :1;
        unsigned GBSEL0                 :1;
        unsigned GBSEL1                 :1;
        unsigned GDSEL0                 :1;
        unsigned GDSEL1                 :1;
    };
    struct {
        unsigned SASEL0                 :1;
        unsigned SASEL1                 :1;
        unsigned SCSEL0                 :1;
        unsigned SCSEL1                 :1;
        unsigned SBSEL0                 :1;
        unsigned SBSEL1                 :1;
        unsigned SDSEL0                 :1;
        unsigned SDSEL1                 :1;
    };
} ADCHSbits_t;
extern volatile ADCHSbits_t ADCHSbits __at(0xF99);
// bitfield macros
#define _ADCHS_SASEL_POSN                                   0x0
#define _ADCHS_SASEL_POSITION                               0x0
#define _ADCHS_SASEL_SIZE                                   0x2
#define _ADCHS_SASEL_LENGTH                                 0x2
#define _ADCHS_SASEL_MASK                                   0x3
#define _ADCHS_SCSEL_POSN                                   0x2
#define _ADCHS_SCSEL_POSITION                               0x2
#define _ADCHS_SCSEL_SIZE                                   0x2
#define _ADCHS_SCSEL_LENGTH                                 0x2
#define _ADCHS_SCSEL_MASK                                   0xC
#define _ADCHS_SBSEL_POSN                                   0x4
#define _ADCHS_SBSEL_POSITION                               0x4
#define _ADCHS_SBSEL_SIZE                                   0x2
#define _ADCHS_SBSEL_LENGTH                                 0x2
#define _ADCHS_SBSEL_MASK                                   0x30
#define _ADCHS_SDSEL_POSN                                   0x6
#define _ADCHS_SDSEL_POSITION                               0x6
#define _ADCHS_SDSEL_SIZE                                   0x2
#define _ADCHS_SDSEL_LENGTH                                 0x2
#define _ADCHS_SDSEL_MASK                                   0xC0
#define _ADCHS_GASEL0_POSN                                  0x0
#define _ADCHS_GASEL0_POSITION                              0x0
#define _ADCHS_GASEL0_SIZE                                  0x1
#define _ADCHS_GASEL0_LENGTH                                0x1
#define _ADCHS_GASEL0_MASK                                  0x1
#define _ADCHS_GASEL1_POSN                                  0x1
#define _ADCHS_GASEL1_POSITION                              0x1
#define _ADCHS_GASEL1_SIZE                                  0x1
#define _ADCHS_GASEL1_LENGTH                                0x1
#define _ADCHS_GASEL1_MASK                                  0x2
#define _ADCHS_GCSEL0_POSN                                  0x2
#define _ADCHS_GCSEL0_POSITION                              0x2
#define _ADCHS_GCSEL0_SIZE                                  0x1
#define _ADCHS_GCSEL0_LENGTH                                0x1
#define _ADCHS_GCSEL0_MASK                                  0x4
#define _ADCHS_GCSEL1_POSN                                  0x3
#define _ADCHS_GCSEL1_POSITION                              0x3
#define _ADCHS_GCSEL1_SIZE                                  0x1
#define _ADCHS_GCSEL1_LENGTH                                0x1
#define _ADCHS_GCSEL1_MASK                                  0x8
#define _ADCHS_GBSEL0_POSN                                  0x4
#define _ADCHS_GBSEL0_POSITION                              0x4
#define _ADCHS_GBSEL0_SIZE                                  0x1
#define _ADCHS_GBSEL0_LENGTH                                0x1
#define _ADCHS_GBSEL0_MASK                                  0x10
#define _ADCHS_GBSEL1_POSN                                  0x5
#define _ADCHS_GBSEL1_POSITION                              0x5
#define _ADCHS_GBSEL1_SIZE                                  0x1
#define _ADCHS_GBSEL1_LENGTH                                0x1
#define _ADCHS_GBSEL1_MASK                                  0x20
#define _ADCHS_GDSEL0_POSN                                  0x6
#define _ADCHS_GDSEL0_POSITION                              0x6
#define _ADCHS_GDSEL0_SIZE                                  0x1
#define _ADCHS_GDSEL0_LENGTH                                0x1
#define _ADCHS_GDSEL0_MASK                                  0x40
#define _ADCHS_GDSEL1_POSN                                  0x7
#define _ADCHS_GDSEL1_POSITION                              0x7
#define _ADCHS_GDSEL1_SIZE                                  0x1
#define _ADCHS_GDSEL1_LENGTH                                0x1
#define _ADCHS_GDSEL1_MASK                                  0x80
#define _ADCHS_SASEL0_POSN                                  0x0
#define _ADCHS_SASEL0_POSITION                              0x0
#define _ADCHS_SASEL0_SIZE                                  0x1
#define _ADCHS_SASEL0_LENGTH                                0x1
#define _ADCHS_SASEL0_MASK                                  0x1
#define _ADCHS_SASEL1_POSN                                  0x1
#define _ADCHS_SASEL1_POSITION                              0x1
#define _ADCHS_SASEL1_SIZE                                  0x1
#define _ADCHS_SASEL1_LENGTH                                0x1
#define _ADCHS_SASEL1_MASK                                  0x2
#define _ADCHS_SCSEL0_POSN                                  0x2
#define _ADCHS_SCSEL0_POSITION                              0x2
#define _ADCHS_SCSEL0_SIZE                                  0x1
#define _ADCHS_SCSEL0_LENGTH                                0x1
#define _ADCHS_SCSEL0_MASK                                  0x4
#define _ADCHS_SCSEL1_POSN                                  0x3
#define _ADCHS_SCSEL1_POSITION                              0x3
#define _ADCHS_SCSEL1_SIZE                                  0x1
#define _ADCHS_SCSEL1_LENGTH                                0x1
#define _ADCHS_SCSEL1_MASK                                  0x8
#define _ADCHS_SBSEL0_POSN                                  0x4
#define _ADCHS_SBSEL0_POSITION                              0x4
#define _ADCHS_SBSEL0_SIZE                                  0x1
#define _ADCHS_SBSEL0_LENGTH                                0x1
#define _ADCHS_SBSEL0_MASK                                  0x10
#define _ADCHS_SBSEL1_POSN                                  0x5
#define _ADCHS_SBSEL1_POSITION                              0x5
#define _ADCHS_SBSEL1_SIZE                                  0x1
#define _ADCHS_SBSEL1_LENGTH                                0x1
#define _ADCHS_SBSEL1_MASK                                  0x20
#define _ADCHS_SDSEL0_POSN                                  0x6
#define _ADCHS_SDSEL0_POSITION                              0x6
#define _ADCHS_SDSEL0_SIZE                                  0x1
#define _ADCHS_SDSEL0_LENGTH                                0x1
#define _ADCHS_SDSEL0_MASK                                  0x40
#define _ADCHS_SDSEL1_POSN                                  0x7
#define _ADCHS_SDSEL1_POSITION                              0x7
#define _ADCHS_SDSEL1_SIZE                                  0x1
#define _ADCHS_SDSEL1_LENGTH                                0x1
#define _ADCHS_SDSEL1_MASK                                  0x80

// Register: ADCON3
#define ADCON3 ADCON3
extern volatile unsigned char           ADCON3              __at(0xF9A);
#ifndef _LIB_BUILD
asm("ADCON3 equ 0F9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSRC                   :5;
        unsigned                        :1;
        unsigned ADRS                   :2;
    };
    struct {
        unsigned SSRC0                  :1;
        unsigned SSRC1                  :1;
        unsigned SSRC2                  :1;
        unsigned SSRC3                  :1;
        unsigned SSRC4                  :1;
        unsigned                        :1;
        unsigned ADRS0                  :1;
        unsigned ADRS1                  :1;
    };
} ADCON3bits_t;
extern volatile ADCON3bits_t ADCON3bits __at(0xF9A);
// bitfield macros
#define _ADCON3_SSRC_POSN                                   0x0
#define _ADCON3_SSRC_POSITION                               0x0
#define _ADCON3_SSRC_SIZE                                   0x5
#define _ADCON3_SSRC_LENGTH                                 0x5
#define _ADCON3_SSRC_MASK                                   0x1F
#define _ADCON3_ADRS_POSN                                   0x6
#define _ADCON3_ADRS_POSITION                               0x6
#define _ADCON3_ADRS_SIZE                                   0x2
#define _ADCON3_ADRS_LENGTH                                 0x2
#define _ADCON3_ADRS_MASK                                   0xC0
#define _ADCON3_SSRC0_POSN                                  0x0
#define _ADCON3_SSRC0_POSITION                              0x0
#define _ADCON3_SSRC0_SIZE                                  0x1
#define _ADCON3_SSRC0_LENGTH                                0x1
#define _ADCON3_SSRC0_MASK                                  0x1
#define _ADCON3_SSRC1_POSN                                  0x1
#define _ADCON3_SSRC1_POSITION                              0x1
#define _ADCON3_SSRC1_SIZE                                  0x1
#define _ADCON3_SSRC1_LENGTH                                0x1
#define _ADCON3_SSRC1_MASK                                  0x2
#define _ADCON3_SSRC2_POSN                                  0x2
#define _ADCON3_SSRC2_POSITION                              0x2
#define _ADCON3_SSRC2_SIZE                                  0x1
#define _ADCON3_SSRC2_LENGTH                                0x1
#define _ADCON3_SSRC2_MASK                                  0x4
#define _ADCON3_SSRC3_POSN                                  0x3
#define _ADCON3_SSRC3_POSITION                              0x3
#define _ADCON3_SSRC3_SIZE                                  0x1
#define _ADCON3_SSRC3_LENGTH                                0x1
#define _ADCON3_SSRC3_MASK                                  0x8
#define _ADCON3_SSRC4_POSN                                  0x4
#define _ADCON3_SSRC4_POSITION                              0x4
#define _ADCON3_SSRC4_SIZE                                  0x1
#define _ADCON3_SSRC4_LENGTH                                0x1
#define _ADCON3_SSRC4_MASK                                  0x10
#define _ADCON3_ADRS0_POSN                                  0x6
#define _ADCON3_ADRS0_POSITION                              0x6
#define _ADCON3_ADRS0_SIZE                                  0x1
#define _ADCON3_ADRS0_LENGTH                                0x1
#define _ADCON3_ADRS0_MASK                                  0x40
#define _ADCON3_ADRS1_POSN                                  0x7
#define _ADCON3_ADRS1_POSITION                              0x7
#define _ADCON3_ADRS1_SIZE                                  0x1
#define _ADCON3_ADRS1_LENGTH                                0x1
#define _ADCON3_ADRS1_MASK                                  0x80

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0xF9B);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
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
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0xF9B);
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

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0xF9D);
#ifndef _LIB_BUILD
asm("PIE1 equ 0F9Dh");
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
    struct {
        unsigned                        :4;
        unsigned TBIE                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0xF9D);
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
#define _PIE1_TBIE_POSN                                     0x4
#define _PIE1_TBIE_POSITION                                 0x4
#define _PIE1_TBIE_SIZE                                     0x1
#define _PIE1_TBIE_LENGTH                                   0x1
#define _PIE1_TBIE_MASK                                     0x10
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

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0xF9E);
#ifndef _LIB_BUILD
asm("PIR1 equ 0F9Eh");
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
    struct {
        unsigned                        :4;
        unsigned TBIF                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0xF9E);
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
#define _PIR1_TBIF_POSN                                     0x4
#define _PIR1_TBIF_POSITION                                 0x4
#define _PIR1_TBIF_SIZE                                     0x1
#define _PIR1_TBIF_LENGTH                                   0x1
#define _PIR1_TBIF_MASK                                     0x10
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

// Register: IPR1
#define IPR1 IPR1
extern volatile unsigned char           IPR1                __at(0xF9F);
#ifndef _LIB_BUILD
asm("IPR1 equ 0F9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IP                 :1;
        unsigned TMR2IP                 :1;
        unsigned CCP1IP                 :1;
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
        unsigned ADIP                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned TBIP                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IP                  :1;
        unsigned RC1IP                  :1;
    };
} IPR1bits_t;
extern volatile IPR1bits_t IPR1bits __at(0xF9F);
// bitfield macros
#define _IPR1_TMR1IP_POSN                                   0x0
#define _IPR1_TMR1IP_POSITION                               0x0
#define _IPR1_TMR1IP_SIZE                                   0x1
#define _IPR1_TMR1IP_LENGTH                                 0x1
#define _IPR1_TMR1IP_MASK                                   0x1
#define _IPR1_TMR2IP_POSN                                   0x1
#define _IPR1_TMR2IP_POSITION                               0x1
#define _IPR1_TMR2IP_SIZE                                   0x1
#define _IPR1_TMR2IP_LENGTH                                 0x1
#define _IPR1_TMR2IP_MASK                                   0x2
#define _IPR1_CCP1IP_POSN                                   0x2
#define _IPR1_CCP1IP_POSITION                               0x2
#define _IPR1_CCP1IP_SIZE                                   0x1
#define _IPR1_CCP1IP_LENGTH                                 0x1
#define _IPR1_CCP1IP_MASK                                   0x4
#define _IPR1_SSPIP_POSN                                    0x3
#define _IPR1_SSPIP_POSITION                                0x3
#define _IPR1_SSPIP_SIZE                                    0x1
#define _IPR1_SSPIP_LENGTH                                  0x1
#define _IPR1_SSPIP_MASK                                    0x8
#define _IPR1_TXIP_POSN                                     0x4
#define _IPR1_TXIP_POSITION                                 0x4
#define _IPR1_TXIP_SIZE                                     0x1
#define _IPR1_TXIP_LENGTH                                   0x1
#define _IPR1_TXIP_MASK                                     0x10
#define _IPR1_RCIP_POSN                                     0x5
#define _IPR1_RCIP_POSITION                                 0x5
#define _IPR1_RCIP_SIZE                                     0x1
#define _IPR1_RCIP_LENGTH                                   0x1
#define _IPR1_RCIP_MASK                                     0x20
#define _IPR1_ADIP_POSN                                     0x6
#define _IPR1_ADIP_POSITION                                 0x6
#define _IPR1_ADIP_SIZE                                     0x1
#define _IPR1_ADIP_LENGTH                                   0x1
#define _IPR1_ADIP_MASK                                     0x40
#define _IPR1_TBIP_POSN                                     0x4
#define _IPR1_TBIP_POSITION                                 0x4
#define _IPR1_TBIP_SIZE                                     0x1
#define _IPR1_TBIP_LENGTH                                   0x1
#define _IPR1_TBIP_MASK                                     0x10
#define _IPR1_TX1IP_POSN                                    0x4
#define _IPR1_TX1IP_POSITION                                0x4
#define _IPR1_TX1IP_SIZE                                    0x1
#define _IPR1_TX1IP_LENGTH                                  0x1
#define _IPR1_TX1IP_MASK                                    0x10
#define _IPR1_RC1IP_POSN                                    0x5
#define _IPR1_RC1IP_POSITION                                0x5
#define _IPR1_RC1IP_SIZE                                    0x1
#define _IPR1_RC1IP_LENGTH                                  0x1
#define _IPR1_RC1IP_MASK                                    0x20

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0xFA0);
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IE                 :1;
        unsigned                        :1;
        unsigned LVDIE                  :1;
        unsigned                        :1;
        unsigned EEIE                   :1;
        unsigned                        :2;
        unsigned OSFIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_LVDIE_POSN                                    0x2
#define _PIE2_LVDIE_POSITION                                0x2
#define _PIE2_LVDIE_SIZE                                    0x1
#define _PIE2_LVDIE_LENGTH                                  0x1
#define _PIE2_LVDIE_MASK                                    0x4
#define _PIE2_EEIE_POSN                                     0x4
#define _PIE2_EEIE_POSITION                                 0x4
#define _PIE2_EEIE_SIZE                                     0x1
#define _PIE2_EEIE_LENGTH                                   0x1
#define _PIE2_EEIE_MASK                                     0x10
#define _PIE2_OSFIE_POSN                                    0x7
#define _PIE2_OSFIE_POSITION                                0x7
#define _PIE2_OSFIE_SIZE                                    0x1
#define _PIE2_OSFIE_LENGTH                                  0x1
#define _PIE2_OSFIE_MASK                                    0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0xFA1);
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IF                 :1;
        unsigned                        :1;
        unsigned LVDIF                  :1;
        unsigned                        :1;
        unsigned EEIF                   :1;
        unsigned                        :2;
        unsigned OSFIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_LVDIF_POSN                                    0x2
#define _PIR2_LVDIF_POSITION                                0x2
#define _PIR2_LVDIF_SIZE                                    0x1
#define _PIR2_LVDIF_LENGTH                                  0x1
#define _PIR2_LVDIF_MASK                                    0x4
#define _PIR2_EEIF_POSN                                     0x4
#define _PIR2_EEIF_POSITION                                 0x4
#define _PIR2_EEIF_SIZE                                     0x1
#define _PIR2_EEIF_LENGTH                                   0x1
#define _PIR2_EEIF_MASK                                     0x10
#define _PIR2_OSFIF_POSN                                    0x7
#define _PIR2_OSFIF_POSITION                                0x7
#define _PIR2_OSFIF_SIZE                                    0x1
#define _PIR2_OSFIF_LENGTH                                  0x1
#define _PIR2_OSFIF_MASK                                    0x80

// Register: IPR2
#define IPR2 IPR2
extern volatile unsigned char           IPR2                __at(0xFA2);
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IP                 :1;
        unsigned                        :1;
        unsigned LVDIP                  :1;
        unsigned                        :1;
        unsigned EEIP                   :1;
        unsigned                        :2;
        unsigned OSFIP                  :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_CCP2IP_POSN                                   0x0
#define _IPR2_CCP2IP_POSITION                               0x0
#define _IPR2_CCP2IP_SIZE                                   0x1
#define _IPR2_CCP2IP_LENGTH                                 0x1
#define _IPR2_CCP2IP_MASK                                   0x1
#define _IPR2_LVDIP_POSN                                    0x2
#define _IPR2_LVDIP_POSITION                                0x2
#define _IPR2_LVDIP_SIZE                                    0x1
#define _IPR2_LVDIP_LENGTH                                  0x1
#define _IPR2_LVDIP_MASK                                    0x4
#define _IPR2_EEIP_POSN                                     0x4
#define _IPR2_EEIP_POSITION                                 0x4
#define _IPR2_EEIP_SIZE                                     0x1
#define _IPR2_EEIP_LENGTH                                   0x1
#define _IPR2_EEIP_MASK                                     0x10
#define _IPR2_OSFIP_POSN                                    0x7
#define _IPR2_OSFIP_POSITION                                0x7
#define _IPR2_OSFIP_SIZE                                    0x1
#define _IPR2_OSFIP_LENGTH                                  0x1
#define _IPR2_OSFIP_MASK                                    0x80

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0xFA3);
#ifndef _LIB_BUILD
asm("PIE3 equ 0FA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR5IE                 :1;
        unsigned IC1IE                  :1;
        unsigned IC2QEIE                :1;
        unsigned IC3DRIE                :1;
        unsigned PTIE                   :1;
    };
    struct {
        unsigned RXB0IE                 :1;
        unsigned RXB1IE                 :1;
        unsigned TXB0IE                 :1;
        unsigned TXB1IE                 :1;
        unsigned TXB2IE                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIE                 :1;
        unsigned                        :2;
        unsigned TXBNIE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0xFA3);
// bitfield macros
#define _PIE3_TMR5IE_POSN                                   0x0
#define _PIE3_TMR5IE_POSITION                               0x0
#define _PIE3_TMR5IE_SIZE                                   0x1
#define _PIE3_TMR5IE_LENGTH                                 0x1
#define _PIE3_TMR5IE_MASK                                   0x1
#define _PIE3_IC1IE_POSN                                    0x1
#define _PIE3_IC1IE_POSITION                                0x1
#define _PIE3_IC1IE_SIZE                                    0x1
#define _PIE3_IC1IE_LENGTH                                  0x1
#define _PIE3_IC1IE_MASK                                    0x2
#define _PIE3_IC2QEIE_POSN                                  0x2
#define _PIE3_IC2QEIE_POSITION                              0x2
#define _PIE3_IC2QEIE_SIZE                                  0x1
#define _PIE3_IC2QEIE_LENGTH                                0x1
#define _PIE3_IC2QEIE_MASK                                  0x4
#define _PIE3_IC3DRIE_POSN                                  0x3
#define _PIE3_IC3DRIE_POSITION                              0x3
#define _PIE3_IC3DRIE_SIZE                                  0x1
#define _PIE3_IC3DRIE_LENGTH                                0x1
#define _PIE3_IC3DRIE_MASK                                  0x8
#define _PIE3_PTIE_POSN                                     0x4
#define _PIE3_PTIE_POSITION                                 0x4
#define _PIE3_PTIE_SIZE                                     0x1
#define _PIE3_PTIE_LENGTH                                   0x1
#define _PIE3_PTIE_MASK                                     0x10
#define _PIE3_RXB0IE_POSN                                   0x0
#define _PIE3_RXB0IE_POSITION                               0x0
#define _PIE3_RXB0IE_SIZE                                   0x1
#define _PIE3_RXB0IE_LENGTH                                 0x1
#define _PIE3_RXB0IE_MASK                                   0x1
#define _PIE3_RXB1IE_POSN                                   0x1
#define _PIE3_RXB1IE_POSITION                               0x1
#define _PIE3_RXB1IE_SIZE                                   0x1
#define _PIE3_RXB1IE_LENGTH                                 0x1
#define _PIE3_RXB1IE_MASK                                   0x2
#define _PIE3_TXB0IE_POSN                                   0x2
#define _PIE3_TXB0IE_POSITION                               0x2
#define _PIE3_TXB0IE_SIZE                                   0x1
#define _PIE3_TXB0IE_LENGTH                                 0x1
#define _PIE3_TXB0IE_MASK                                   0x4
#define _PIE3_TXB1IE_POSN                                   0x3
#define _PIE3_TXB1IE_POSITION                               0x3
#define _PIE3_TXB1IE_SIZE                                   0x1
#define _PIE3_TXB1IE_LENGTH                                 0x1
#define _PIE3_TXB1IE_MASK                                   0x8
#define _PIE3_TXB2IE_POSN                                   0x4
#define _PIE3_TXB2IE_POSITION                               0x4
#define _PIE3_TXB2IE_SIZE                                   0x1
#define _PIE3_TXB2IE_LENGTH                                 0x1
#define _PIE3_TXB2IE_MASK                                   0x10
#define _PIE3_RXBNIE_POSN                                   0x1
#define _PIE3_RXBNIE_POSITION                               0x1
#define _PIE3_RXBNIE_SIZE                                   0x1
#define _PIE3_RXBNIE_LENGTH                                 0x1
#define _PIE3_RXBNIE_MASK                                   0x2
#define _PIE3_TXBNIE_POSN                                   0x4
#define _PIE3_TXBNIE_POSITION                               0x4
#define _PIE3_TXBNIE_SIZE                                   0x1
#define _PIE3_TXBNIE_LENGTH                                 0x1
#define _PIE3_TXBNIE_MASK                                   0x10

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0xFA4);
#ifndef _LIB_BUILD
asm("PIR3 equ 0FA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR5IF                 :1;
        unsigned IC1IF                  :1;
        unsigned IC2QEIF                :1;
        unsigned IC3DRIF                :1;
        unsigned PTIF                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIF                 :1;
        unsigned                        :2;
        unsigned TXBNIF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0xFA4);
// bitfield macros
#define _PIR3_TMR5IF_POSN                                   0x0
#define _PIR3_TMR5IF_POSITION                               0x0
#define _PIR3_TMR5IF_SIZE                                   0x1
#define _PIR3_TMR5IF_LENGTH                                 0x1
#define _PIR3_TMR5IF_MASK                                   0x1
#define _PIR3_IC1IF_POSN                                    0x1
#define _PIR3_IC1IF_POSITION                                0x1
#define _PIR3_IC1IF_SIZE                                    0x1
#define _PIR3_IC1IF_LENGTH                                  0x1
#define _PIR3_IC1IF_MASK                                    0x2
#define _PIR3_IC2QEIF_POSN                                  0x2
#define _PIR3_IC2QEIF_POSITION                              0x2
#define _PIR3_IC2QEIF_SIZE                                  0x1
#define _PIR3_IC2QEIF_LENGTH                                0x1
#define _PIR3_IC2QEIF_MASK                                  0x4
#define _PIR3_IC3DRIF_POSN                                  0x3
#define _PIR3_IC3DRIF_POSITION                              0x3
#define _PIR3_IC3DRIF_SIZE                                  0x1
#define _PIR3_IC3DRIF_LENGTH                                0x1
#define _PIR3_IC3DRIF_MASK                                  0x8
#define _PIR3_PTIF_POSN                                     0x4
#define _PIR3_PTIF_POSITION                                 0x4
#define _PIR3_PTIF_SIZE                                     0x1
#define _PIR3_PTIF_LENGTH                                   0x1
#define _PIR3_PTIF_MASK                                     0x10
#define _PIR3_RXBNIF_POSN                                   0x1
#define _PIR3_RXBNIF_POSITION                               0x1
#define _PIR3_RXBNIF_SIZE                                   0x1
#define _PIR3_RXBNIF_LENGTH                                 0x1
#define _PIR3_RXBNIF_MASK                                   0x2
#define _PIR3_TXBNIF_POSN                                   0x4
#define _PIR3_TXBNIF_POSITION                               0x4
#define _PIR3_TXBNIF_SIZE                                   0x1
#define _PIR3_TXBNIF_LENGTH                                 0x1
#define _PIR3_TXBNIF_MASK                                   0x10

// Register: IPR3
#define IPR3 IPR3
extern volatile unsigned char           IPR3                __at(0xFA5);
#ifndef _LIB_BUILD
asm("IPR3 equ 0FA5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR5IP                 :1;
        unsigned IC1IP                  :1;
        unsigned IC2QEIP                :1;
        unsigned IC3DRIP                :1;
        unsigned PTIP                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIP                 :1;
        unsigned                        :2;
        unsigned TXBNIP                 :1;
    };
} IPR3bits_t;
extern volatile IPR3bits_t IPR3bits __at(0xFA5);
// bitfield macros
#define _IPR3_TMR5IP_POSN                                   0x0
#define _IPR3_TMR5IP_POSITION                               0x0
#define _IPR3_TMR5IP_SIZE                                   0x1
#define _IPR3_TMR5IP_LENGTH                                 0x1
#define _IPR3_TMR5IP_MASK                                   0x1
#define _IPR3_IC1IP_POSN                                    0x1
#define _IPR3_IC1IP_POSITION                                0x1
#define _IPR3_IC1IP_SIZE                                    0x1
#define _IPR3_IC1IP_LENGTH                                  0x1
#define _IPR3_IC1IP_MASK                                    0x2
#define _IPR3_IC2QEIP_POSN                                  0x2
#define _IPR3_IC2QEIP_POSITION                              0x2
#define _IPR3_IC2QEIP_SIZE                                  0x1
#define _IPR3_IC2QEIP_LENGTH                                0x1
#define _IPR3_IC2QEIP_MASK                                  0x4
#define _IPR3_IC3DRIP_POSN                                  0x3
#define _IPR3_IC3DRIP_POSITION                              0x3
#define _IPR3_IC3DRIP_SIZE                                  0x1
#define _IPR3_IC3DRIP_LENGTH                                0x1
#define _IPR3_IC3DRIP_MASK                                  0x8
#define _IPR3_PTIP_POSN                                     0x4
#define _IPR3_PTIP_POSITION                                 0x4
#define _IPR3_PTIP_SIZE                                     0x1
#define _IPR3_PTIP_LENGTH                                   0x1
#define _IPR3_PTIP_MASK                                     0x10
#define _IPR3_RXBNIP_POSN                                   0x1
#define _IPR3_RXBNIP_POSITION                               0x1
#define _IPR3_RXBNIP_SIZE                                   0x1
#define _IPR3_RXBNIP_LENGTH                                 0x1
#define _IPR3_RXBNIP_MASK                                   0x2
#define _IPR3_TXBNIP_POSN                                   0x4
#define _IPR3_TXBNIP_POSITION                               0x4
#define _IPR3_TXBNIP_SIZE                                   0x1
#define _IPR3_TXBNIP_LENGTH                                 0x1
#define _IPR3_TXBNIP_MASK                                   0x10

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0xFA6);
#ifndef _LIB_BUILD
asm("EECON1 equ 0FA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned                        :1;
        unsigned CFGS                   :1;
        unsigned EEPGD                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned EEFS                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0xFA6);
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
#define _EECON1_EEFS_POSN                                   0x6
#define _EECON1_EEFS_POSITION                               0x6
#define _EECON1_EEFS_SIZE                                   0x1
#define _EECON1_EEFS_LENGTH                                 0x1
#define _EECON1_EEFS_MASK                                   0x40

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0xFA7);
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif

// Register: EEDATA
#define EEDATA EEDATA
extern volatile unsigned char           EEDATA              __at(0xFA8);
#ifndef _LIB_BUILD
asm("EEDATA equ 0FA8h");
#endif

// Register: EEADR
#define EEADR EEADR
extern volatile unsigned char           EEADR               __at(0xFA9);
#ifndef _LIB_BUILD
asm("EEADR equ 0FA9h");
#endif

// Register: BAUDCON
#define BAUDCON BAUDCON
extern volatile unsigned char           BAUDCON             __at(0xFAA);
#ifndef _LIB_BUILD
asm("BAUDCON equ 0FAAh");
#endif
// aliases
extern volatile unsigned char           BAUDCTL             __at(0xFAA);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0FAAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCONbits_t;
extern volatile BAUDCONbits_t BAUDCONbits __at(0xFAA);
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
#define _BAUDCON_TXCKP_POSN                                 0x4
#define _BAUDCON_TXCKP_POSITION                             0x4
#define _BAUDCON_TXCKP_SIZE                                 0x1
#define _BAUDCON_TXCKP_LENGTH                               0x1
#define _BAUDCON_TXCKP_MASK                                 0x10
#define _BAUDCON_RXDTP_POSN                                 0x5
#define _BAUDCON_RXDTP_POSITION                             0x5
#define _BAUDCON_RXDTP_SIZE                                 0x1
#define _BAUDCON_RXDTP_LENGTH                               0x1
#define _BAUDCON_RXDTP_MASK                                 0x20
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
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RCMT_POSN                                  0x6
#define _BAUDCON_RCMT_POSITION                              0x6
#define _BAUDCON_RCMT_SIZE                                  0x1
#define _BAUDCON_RCMT_LENGTH                                0x1
#define _BAUDCON_RCMT_MASK                                  0x40
#define _BAUDCON_RXCKP_POSN                                 0x5
#define _BAUDCON_RXCKP_POSITION                             0x5
#define _BAUDCON_RXCKP_SIZE                                 0x1
#define _BAUDCON_RXCKP_LENGTH                               0x1
#define _BAUDCON_RXCKP_MASK                                 0x20
#define _BAUDCON_W4E_POSN                                   0x1
#define _BAUDCON_W4E_POSITION                               0x1
#define _BAUDCON_W4E_SIZE                                   0x1
#define _BAUDCON_W4E_LENGTH                                 0x1
#define _BAUDCON_W4E_MASK                                   0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0xFAA);
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
#define _BAUDCTL_TXCKP_POSN                                 0x4
#define _BAUDCTL_TXCKP_POSITION                             0x4
#define _BAUDCTL_TXCKP_SIZE                                 0x1
#define _BAUDCTL_TXCKP_LENGTH                               0x1
#define _BAUDCTL_TXCKP_MASK                                 0x10
#define _BAUDCTL_RXDTP_POSN                                 0x5
#define _BAUDCTL_RXDTP_POSITION                             0x5
#define _BAUDCTL_RXDTP_SIZE                                 0x1
#define _BAUDCTL_RXDTP_LENGTH                               0x1
#define _BAUDCTL_RXDTP_MASK                                 0x20
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
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RCMT_POSN                                  0x6
#define _BAUDCTL_RCMT_POSITION                              0x6
#define _BAUDCTL_RCMT_SIZE                                  0x1
#define _BAUDCTL_RCMT_LENGTH                                0x1
#define _BAUDCTL_RCMT_MASK                                  0x40
#define _BAUDCTL_RXCKP_POSN                                 0x5
#define _BAUDCTL_RXCKP_POSITION                             0x5
#define _BAUDCTL_RXCKP_SIZE                                 0x1
#define _BAUDCTL_RXCKP_LENGTH                               0x1
#define _BAUDCTL_RXCKP_MASK                                 0x20
#define _BAUDCTL_W4E_POSN                                   0x1
#define _BAUDCTL_W4E_POSITION                               0x1
#define _BAUDCTL_W4E_SIZE                                   0x1
#define _BAUDCTL_W4E_LENGTH                                 0x1
#define _BAUDCTL_W4E_MASK                                   0x2

// Register: RCSTA
#define RCSTA RCSTA
extern volatile unsigned char           RCSTA               __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA1              __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
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
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
    };
    struct {
        unsigned RCD8                   :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0xFAB);
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
#define _RCSTA_ADEN_POSN                                    0x3
#define _RCSTA_ADEN_POSITION                                0x3
#define _RCSTA_ADEN_SIZE                                    0x1
#define _RCSTA_ADEN_LENGTH                                  0x1
#define _RCSTA_ADEN_MASK                                    0x8
#define _RCSTA_SRENA_POSN                                   0x5
#define _RCSTA_SRENA_POSITION                               0x5
#define _RCSTA_SRENA_SIZE                                   0x1
#define _RCSTA_SRENA_LENGTH                                 0x1
#define _RCSTA_SRENA_MASK                                   0x20
#define _RCSTA_RC8_9_POSN                                   0x6
#define _RCSTA_RC8_9_POSITION                               0x6
#define _RCSTA_RC8_9_SIZE                                   0x1
#define _RCSTA_RC8_9_LENGTH                                 0x1
#define _RCSTA_RC8_9_MASK                                   0x40
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
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
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
    };
    struct {
        unsigned RCD8                   :1;
    };
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits __at(0xFAB);
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
#define _RCSTA1_ADEN_POSN                                   0x3
#define _RCSTA1_ADEN_POSITION                               0x3
#define _RCSTA1_ADEN_SIZE                                   0x1
#define _RCSTA1_ADEN_LENGTH                                 0x1
#define _RCSTA1_ADEN_MASK                                   0x8
#define _RCSTA1_SRENA_POSN                                  0x5
#define _RCSTA1_SRENA_POSITION                              0x5
#define _RCSTA1_SRENA_SIZE                                  0x1
#define _RCSTA1_SRENA_LENGTH                                0x1
#define _RCSTA1_SRENA_MASK                                  0x20
#define _RCSTA1_RC8_9_POSN                                  0x6
#define _RCSTA1_RC8_9_POSITION                              0x6
#define _RCSTA1_RC8_9_SIZE                                  0x1
#define _RCSTA1_RC8_9_LENGTH                                0x1
#define _RCSTA1_RC8_9_MASK                                  0x40
#define _RCSTA1_RC9_POSN                                    0x6
#define _RCSTA1_RC9_POSITION                                0x6
#define _RCSTA1_RC9_SIZE                                    0x1
#define _RCSTA1_RC9_LENGTH                                  0x1
#define _RCSTA1_RC9_MASK                                    0x40
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1

// Register: TXSTA
#define TXSTA TXSTA
extern volatile unsigned char           TXSTA               __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA1              __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
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
        unsigned TX9D1                  :1;
        unsigned TRMT1                  :1;
        unsigned BRGH1                  :1;
        unsigned SENDB1                 :1;
        unsigned SYNC1                  :1;
        unsigned TXEN1                  :1;
        unsigned TX91                   :1;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned TXD8                   :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0xFAC);
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
#define _TXSTA_TX9D1_POSN                                   0x0
#define _TXSTA_TX9D1_POSITION                               0x0
#define _TXSTA_TX9D1_SIZE                                   0x1
#define _TXSTA_TX9D1_LENGTH                                 0x1
#define _TXSTA_TX9D1_MASK                                   0x1
#define _TXSTA_TRMT1_POSN                                   0x1
#define _TXSTA_TRMT1_POSITION                               0x1
#define _TXSTA_TRMT1_SIZE                                   0x1
#define _TXSTA_TRMT1_LENGTH                                 0x1
#define _TXSTA_TRMT1_MASK                                   0x2
#define _TXSTA_BRGH1_POSN                                   0x2
#define _TXSTA_BRGH1_POSITION                               0x2
#define _TXSTA_BRGH1_SIZE                                   0x1
#define _TXSTA_BRGH1_LENGTH                                 0x1
#define _TXSTA_BRGH1_MASK                                   0x4
#define _TXSTA_SENDB1_POSN                                  0x3
#define _TXSTA_SENDB1_POSITION                              0x3
#define _TXSTA_SENDB1_SIZE                                  0x1
#define _TXSTA_SENDB1_LENGTH                                0x1
#define _TXSTA_SENDB1_MASK                                  0x8
#define _TXSTA_SYNC1_POSN                                   0x4
#define _TXSTA_SYNC1_POSITION                               0x4
#define _TXSTA_SYNC1_SIZE                                   0x1
#define _TXSTA_SYNC1_LENGTH                                 0x1
#define _TXSTA_SYNC1_MASK                                   0x10
#define _TXSTA_TXEN1_POSN                                   0x5
#define _TXSTA_TXEN1_POSITION                               0x5
#define _TXSTA_TXEN1_SIZE                                   0x1
#define _TXSTA_TXEN1_LENGTH                                 0x1
#define _TXSTA_TXEN1_MASK                                   0x20
#define _TXSTA_TX91_POSN                                    0x6
#define _TXSTA_TX91_POSITION                                0x6
#define _TXSTA_TX91_SIZE                                    0x1
#define _TXSTA_TX91_LENGTH                                  0x1
#define _TXSTA_TX91_MASK                                    0x40
#define _TXSTA_CSRC1_POSN                                   0x7
#define _TXSTA_CSRC1_POSITION                               0x7
#define _TXSTA_CSRC1_SIZE                                   0x1
#define _TXSTA_CSRC1_LENGTH                                 0x1
#define _TXSTA_CSRC1_MASK                                   0x80
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
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
    struct {
        unsigned TX9D1                  :1;
        unsigned TRMT1                  :1;
        unsigned BRGH1                  :1;
        unsigned SENDB1                 :1;
        unsigned SYNC1                  :1;
        unsigned TXEN1                  :1;
        unsigned TX91                   :1;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned TXD8                   :1;
    };
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits __at(0xFAC);
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
#define _TXSTA1_TX9D1_POSN                                  0x0
#define _TXSTA1_TX9D1_POSITION                              0x0
#define _TXSTA1_TX9D1_SIZE                                  0x1
#define _TXSTA1_TX9D1_LENGTH                                0x1
#define _TXSTA1_TX9D1_MASK                                  0x1
#define _TXSTA1_TRMT1_POSN                                  0x1
#define _TXSTA1_TRMT1_POSITION                              0x1
#define _TXSTA1_TRMT1_SIZE                                  0x1
#define _TXSTA1_TRMT1_LENGTH                                0x1
#define _TXSTA1_TRMT1_MASK                                  0x2
#define _TXSTA1_BRGH1_POSN                                  0x2
#define _TXSTA1_BRGH1_POSITION                              0x2
#define _TXSTA1_BRGH1_SIZE                                  0x1
#define _TXSTA1_BRGH1_LENGTH                                0x1
#define _TXSTA1_BRGH1_MASK                                  0x4
#define _TXSTA1_SENDB1_POSN                                 0x3
#define _TXSTA1_SENDB1_POSITION                             0x3
#define _TXSTA1_SENDB1_SIZE                                 0x1
#define _TXSTA1_SENDB1_LENGTH                               0x1
#define _TXSTA1_SENDB1_MASK                                 0x8
#define _TXSTA1_SYNC1_POSN                                  0x4
#define _TXSTA1_SYNC1_POSITION                              0x4
#define _TXSTA1_SYNC1_SIZE                                  0x1
#define _TXSTA1_SYNC1_LENGTH                                0x1
#define _TXSTA1_SYNC1_MASK                                  0x10
#define _TXSTA1_TXEN1_POSN                                  0x5
#define _TXSTA1_TXEN1_POSITION                              0x5
#define _TXSTA1_TXEN1_SIZE                                  0x1
#define _TXSTA1_TXEN1_LENGTH                                0x1
#define _TXSTA1_TXEN1_MASK                                  0x20
#define _TXSTA1_TX91_POSN                                   0x6
#define _TXSTA1_TX91_POSITION                               0x6
#define _TXSTA1_TX91_SIZE                                   0x1
#define _TXSTA1_TX91_LENGTH                                 0x1
#define _TXSTA1_TX91_MASK                                   0x40
#define _TXSTA1_CSRC1_POSN                                  0x7
#define _TXSTA1_CSRC1_POSITION                              0x7
#define _TXSTA1_CSRC1_SIZE                                  0x1
#define _TXSTA1_CSRC1_LENGTH                                0x1
#define _TXSTA1_CSRC1_MASK                                  0x80
#define _TXSTA1_TX8_9_POSN                                  0x6
#define _TXSTA1_TX8_9_POSITION                              0x6
#define _TXSTA1_TX8_9_SIZE                                  0x1
#define _TXSTA1_TX8_9_LENGTH                                0x1
#define _TXSTA1_TX8_9_MASK                                  0x40
#define _TXSTA1_TXD8_POSN                                   0x0
#define _TXSTA1_TXD8_POSITION                               0x0
#define _TXSTA1_TXD8_SIZE                                   0x1
#define _TXSTA1_TXD8_LENGTH                                 0x1
#define _TXSTA1_TXD8_MASK                                   0x1

// Register: TXREG
#define TXREG TXREG
extern volatile unsigned char           TXREG               __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG1              __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif

// Register: RCREG
#define RCREG RCREG
extern volatile unsigned char           RCREG               __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG1              __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif

// Register: SPBRG
#define SPBRG SPBRG
extern volatile unsigned char           SPBRG               __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG1              __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif

// Register: SPBRGH
#define SPBRGH SPBRGH
extern volatile unsigned char           SPBRGH              __at(0xFB0);
#ifndef _LIB_BUILD
asm("SPBRGH equ 0FB0h");
#endif

// Register: QEICON
#define QEICON QEICON
extern volatile unsigned char           QEICON              __at(0xFB6);
#ifndef _LIB_BUILD
asm("QEICON equ 0FB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned UP_NOT_DOWN            :1;
    };
    struct {
        unsigned                        :7;
        unsigned NOT_VELM               :1;
    };
    struct {
        unsigned PDEC                   :2;
        unsigned QEIM                   :3;
        unsigned UP_nDOWN               :1;
        unsigned ERROR                  :1;
        unsigned nVELM                  :1;
    };
    struct {
        unsigned PDEC0                  :1;
        unsigned PDEC1                  :1;
        unsigned QEIM0                  :1;
        unsigned QEIM1                  :1;
        unsigned QEIM2                  :1;
        unsigned UP_DOWN                :1;
        unsigned                        :1;
        unsigned VELM                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned UP                     :1;
    };
    struct {
        unsigned                        :5;
        unsigned DOWN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_DOWN               :1;
    };
    struct {
        unsigned                        :5;
        unsigned nDOWN                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned UPDOWN                 :1;
    };
} QEICONbits_t;
extern volatile QEICONbits_t QEICONbits __at(0xFB6);
// bitfield macros
#define _QEICON_UP_NOT_DOWN_POSN                            0x5
#define _QEICON_UP_NOT_DOWN_POSITION                        0x5
#define _QEICON_UP_NOT_DOWN_SIZE                            0x1
#define _QEICON_UP_NOT_DOWN_LENGTH                          0x1
#define _QEICON_UP_NOT_DOWN_MASK                            0x20
#define _QEICON_NOT_VELM_POSN                               0x7
#define _QEICON_NOT_VELM_POSITION                           0x7
#define _QEICON_NOT_VELM_SIZE                               0x1
#define _QEICON_NOT_VELM_LENGTH                             0x1
#define _QEICON_NOT_VELM_MASK                               0x80
#define _QEICON_PDEC_POSN                                   0x0
#define _QEICON_PDEC_POSITION                               0x0
#define _QEICON_PDEC_SIZE                                   0x2
#define _QEICON_PDEC_LENGTH                                 0x2
#define _QEICON_PDEC_MASK                                   0x3
#define _QEICON_QEIM_POSN                                   0x2
#define _QEICON_QEIM_POSITION                               0x2
#define _QEICON_QEIM_SIZE                                   0x3
#define _QEICON_QEIM_LENGTH                                 0x3
#define _QEICON_QEIM_MASK                                   0x1C
#define _QEICON_UP_nDOWN_POSN                               0x5
#define _QEICON_UP_nDOWN_POSITION                           0x5
#define _QEICON_UP_nDOWN_SIZE                               0x1
#define _QEICON_UP_nDOWN_LENGTH                             0x1
#define _QEICON_UP_nDOWN_MASK                               0x20
#define _QEICON_ERROR_POSN                                  0x6
#define _QEICON_ERROR_POSITION                              0x6
#define _QEICON_ERROR_SIZE                                  0x1
#define _QEICON_ERROR_LENGTH                                0x1
#define _QEICON_ERROR_MASK                                  0x40
#define _QEICON_nVELM_POSN                                  0x7
#define _QEICON_nVELM_POSITION                              0x7
#define _QEICON_nVELM_SIZE                                  0x1
#define _QEICON_nVELM_LENGTH                                0x1
#define _QEICON_nVELM_MASK                                  0x80
#define _QEICON_PDEC0_POSN                                  0x0
#define _QEICON_PDEC0_POSITION                              0x0
#define _QEICON_PDEC0_SIZE                                  0x1
#define _QEICON_PDEC0_LENGTH                                0x1
#define _QEICON_PDEC0_MASK                                  0x1
#define _QEICON_PDEC1_POSN                                  0x1
#define _QEICON_PDEC1_POSITION                              0x1
#define _QEICON_PDEC1_SIZE                                  0x1
#define _QEICON_PDEC1_LENGTH                                0x1
#define _QEICON_PDEC1_MASK                                  0x2
#define _QEICON_QEIM0_POSN                                  0x2
#define _QEICON_QEIM0_POSITION                              0x2
#define _QEICON_QEIM0_SIZE                                  0x1
#define _QEICON_QEIM0_LENGTH                                0x1
#define _QEICON_QEIM0_MASK                                  0x4
#define _QEICON_QEIM1_POSN                                  0x3
#define _QEICON_QEIM1_POSITION                              0x3
#define _QEICON_QEIM1_SIZE                                  0x1
#define _QEICON_QEIM1_LENGTH                                0x1
#define _QEICON_QEIM1_MASK                                  0x8
#define _QEICON_QEIM2_POSN                                  0x4
#define _QEICON_QEIM2_POSITION                              0x4
#define _QEICON_QEIM2_SIZE                                  0x1
#define _QEICON_QEIM2_LENGTH                                0x1
#define _QEICON_QEIM2_MASK                                  0x10
#define _QEICON_UP_DOWN_POSN                                0x5
#define _QEICON_UP_DOWN_POSITION                            0x5
#define _QEICON_UP_DOWN_SIZE                                0x1
#define _QEICON_UP_DOWN_LENGTH                              0x1
#define _QEICON_UP_DOWN_MASK                                0x20
#define _QEICON_VELM_POSN                                   0x7
#define _QEICON_VELM_POSITION                               0x7
#define _QEICON_VELM_SIZE                                   0x1
#define _QEICON_VELM_LENGTH                                 0x1
#define _QEICON_VELM_MASK                                   0x80
#define _QEICON_UP_POSN                                     0x5
#define _QEICON_UP_POSITION                                 0x5
#define _QEICON_UP_SIZE                                     0x1
#define _QEICON_UP_LENGTH                                   0x1
#define _QEICON_UP_MASK                                     0x20
#define _QEICON_DOWN_POSN                                   0x5
#define _QEICON_DOWN_POSITION                               0x5
#define _QEICON_DOWN_SIZE                                   0x1
#define _QEICON_DOWN_LENGTH                                 0x1
#define _QEICON_DOWN_MASK                                   0x20
#define _QEICON_NOT_DOWN_POSN                               0x5
#define _QEICON_NOT_DOWN_POSITION                           0x5
#define _QEICON_NOT_DOWN_SIZE                               0x1
#define _QEICON_NOT_DOWN_LENGTH                             0x1
#define _QEICON_NOT_DOWN_MASK                               0x20
#define _QEICON_nDOWN_POSN                                  0x5
#define _QEICON_nDOWN_POSITION                              0x5
#define _QEICON_nDOWN_SIZE                                  0x1
#define _QEICON_nDOWN_LENGTH                                0x1
#define _QEICON_nDOWN_MASK                                  0x20
#define _QEICON_UPDOWN_POSN                                 0x5
#define _QEICON_UPDOWN_POSITION                             0x5
#define _QEICON_UPDOWN_SIZE                                 0x1
#define _QEICON_UPDOWN_LENGTH                               0x1
#define _QEICON_UPDOWN_MASK                                 0x20

// Register: T5CON
#define T5CON T5CON
extern volatile unsigned char           T5CON               __at(0xFB7);
#ifndef _LIB_BUILD
asm("T5CON equ 0FB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T5SYNC             :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RESEN              :1;
    };
    struct {
        unsigned TMR5ON                 :1;
        unsigned TMR5CS                 :1;
        unsigned nT5SYNC                :1;
        unsigned T5PS                   :2;
        unsigned T5MOD                  :1;
        unsigned nRESEN                 :1;
        unsigned T5SEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned T5SYNC                 :1;
        unsigned T5PS0                  :1;
        unsigned T5PS1                  :1;
        unsigned                        :1;
        unsigned RESEN                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RD165                  :1;
        unsigned                        :1;
        unsigned SOSCEN5                :1;
    };
} T5CONbits_t;
extern volatile T5CONbits_t T5CONbits __at(0xFB7);
// bitfield macros
#define _T5CON_NOT_T5SYNC_POSN                              0x2
#define _T5CON_NOT_T5SYNC_POSITION                          0x2
#define _T5CON_NOT_T5SYNC_SIZE                              0x1
#define _T5CON_NOT_T5SYNC_LENGTH                            0x1
#define _T5CON_NOT_T5SYNC_MASK                              0x4
#define _T5CON_NOT_RESEN_POSN                               0x6
#define _T5CON_NOT_RESEN_POSITION                           0x6
#define _T5CON_NOT_RESEN_SIZE                               0x1
#define _T5CON_NOT_RESEN_LENGTH                             0x1
#define _T5CON_NOT_RESEN_MASK                               0x40
#define _T5CON_TMR5ON_POSN                                  0x0
#define _T5CON_TMR5ON_POSITION                              0x0
#define _T5CON_TMR5ON_SIZE                                  0x1
#define _T5CON_TMR5ON_LENGTH                                0x1
#define _T5CON_TMR5ON_MASK                                  0x1
#define _T5CON_TMR5CS_POSN                                  0x1
#define _T5CON_TMR5CS_POSITION                              0x1
#define _T5CON_TMR5CS_SIZE                                  0x1
#define _T5CON_TMR5CS_LENGTH                                0x1
#define _T5CON_TMR5CS_MASK                                  0x2
#define _T5CON_nT5SYNC_POSN                                 0x2
#define _T5CON_nT5SYNC_POSITION                             0x2
#define _T5CON_nT5SYNC_SIZE                                 0x1
#define _T5CON_nT5SYNC_LENGTH                               0x1
#define _T5CON_nT5SYNC_MASK                                 0x4
#define _T5CON_T5PS_POSN                                    0x3
#define _T5CON_T5PS_POSITION                                0x3
#define _T5CON_T5PS_SIZE                                    0x2
#define _T5CON_T5PS_LENGTH                                  0x2
#define _T5CON_T5PS_MASK                                    0x18
#define _T5CON_T5MOD_POSN                                   0x5
#define _T5CON_T5MOD_POSITION                               0x5
#define _T5CON_T5MOD_SIZE                                   0x1
#define _T5CON_T5MOD_LENGTH                                 0x1
#define _T5CON_T5MOD_MASK                                   0x20
#define _T5CON_nRESEN_POSN                                  0x6
#define _T5CON_nRESEN_POSITION                              0x6
#define _T5CON_nRESEN_SIZE                                  0x1
#define _T5CON_nRESEN_LENGTH                                0x1
#define _T5CON_nRESEN_MASK                                  0x40
#define _T5CON_T5SEN_POSN                                   0x7
#define _T5CON_T5SEN_POSITION                               0x7
#define _T5CON_T5SEN_SIZE                                   0x1
#define _T5CON_T5SEN_LENGTH                                 0x1
#define _T5CON_T5SEN_MASK                                   0x80
#define _T5CON_T5SYNC_POSN                                  0x2
#define _T5CON_T5SYNC_POSITION                              0x2
#define _T5CON_T5SYNC_SIZE                                  0x1
#define _T5CON_T5SYNC_LENGTH                                0x1
#define _T5CON_T5SYNC_MASK                                  0x4
#define _T5CON_T5PS0_POSN                                   0x3
#define _T5CON_T5PS0_POSITION                               0x3
#define _T5CON_T5PS0_SIZE                                   0x1
#define _T5CON_T5PS0_LENGTH                                 0x1
#define _T5CON_T5PS0_MASK                                   0x8
#define _T5CON_T5PS1_POSN                                   0x4
#define _T5CON_T5PS1_POSITION                               0x4
#define _T5CON_T5PS1_SIZE                                   0x1
#define _T5CON_T5PS1_LENGTH                                 0x1
#define _T5CON_T5PS1_MASK                                   0x10
#define _T5CON_RESEN_POSN                                   0x6
#define _T5CON_RESEN_POSITION                               0x6
#define _T5CON_RESEN_SIZE                                   0x1
#define _T5CON_RESEN_LENGTH                                 0x1
#define _T5CON_RESEN_MASK                                   0x40
#define _T5CON_RD165_POSN                                   0x1
#define _T5CON_RD165_POSITION                               0x1
#define _T5CON_RD165_SIZE                                   0x1
#define _T5CON_RD165_LENGTH                                 0x1
#define _T5CON_RD165_MASK                                   0x2
#define _T5CON_SOSCEN5_POSN                                 0x3
#define _T5CON_SOSCEN5_POSITION                             0x3
#define _T5CON_SOSCEN5_SIZE                                 0x1
#define _T5CON_SOSCEN5_LENGTH                               0x1
#define _T5CON_SOSCEN5_MASK                                 0x8

// Register: ANSEL0
#define ANSEL0 ANSEL0
extern volatile unsigned char           ANSEL0              __at(0xFB8);
#ifndef _LIB_BUILD
asm("ANSEL0 equ 0FB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
    };
} ANSEL0bits_t;
extern volatile ANSEL0bits_t ANSEL0bits __at(0xFB8);
// bitfield macros
#define _ANSEL0_ANS0_POSN                                   0x0
#define _ANSEL0_ANS0_POSITION                               0x0
#define _ANSEL0_ANS0_SIZE                                   0x1
#define _ANSEL0_ANS0_LENGTH                                 0x1
#define _ANSEL0_ANS0_MASK                                   0x1
#define _ANSEL0_ANS1_POSN                                   0x1
#define _ANSEL0_ANS1_POSITION                               0x1
#define _ANSEL0_ANS1_SIZE                                   0x1
#define _ANSEL0_ANS1_LENGTH                                 0x1
#define _ANSEL0_ANS1_MASK                                   0x2
#define _ANSEL0_ANS2_POSN                                   0x2
#define _ANSEL0_ANS2_POSITION                               0x2
#define _ANSEL0_ANS2_SIZE                                   0x1
#define _ANSEL0_ANS2_LENGTH                                 0x1
#define _ANSEL0_ANS2_MASK                                   0x4
#define _ANSEL0_ANS3_POSN                                   0x3
#define _ANSEL0_ANS3_POSITION                               0x3
#define _ANSEL0_ANS3_SIZE                                   0x1
#define _ANSEL0_ANS3_LENGTH                                 0x1
#define _ANSEL0_ANS3_MASK                                   0x8
#define _ANSEL0_ANS4_POSN                                   0x4
#define _ANSEL0_ANS4_POSITION                               0x4
#define _ANSEL0_ANS4_SIZE                                   0x1
#define _ANSEL0_ANS4_LENGTH                                 0x1
#define _ANSEL0_ANS4_MASK                                   0x10

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0xFBA);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0FBAh");
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
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0xFBA);
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

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0xFBB);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0FBBh");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0xFBB);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0FBBh");
#endif

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0xFBC);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0FBCh");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0xFBD);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBDh");
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
    struct {
        unsigned                        :4;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0xFBD);
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

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0xFBE);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0FBEh");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0xFBE);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0FBEh");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0xFBF);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBFh");
#endif

// Register: ADCON2
#define ADCON2 ADCON2
extern volatile unsigned char           ADCON2              __at(0xFC0);
#ifndef _LIB_BUILD
asm("ADCON2 equ 0FC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :4;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
        unsigned ACQT3                  :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0xFC0);
// bitfield macros
#define _ADCON2_ADCS_POSN                                   0x0
#define _ADCON2_ADCS_POSITION                               0x0
#define _ADCON2_ADCS_SIZE                                   0x3
#define _ADCON2_ADCS_LENGTH                                 0x3
#define _ADCON2_ADCS_MASK                                   0x7
#define _ADCON2_ACQT_POSN                                   0x3
#define _ADCON2_ACQT_POSITION                               0x3
#define _ADCON2_ACQT_SIZE                                   0x4
#define _ADCON2_ACQT_LENGTH                                 0x4
#define _ADCON2_ACQT_MASK                                   0x78
#define _ADCON2_ADFM_POSN                                   0x7
#define _ADCON2_ADFM_POSITION                               0x7
#define _ADCON2_ADFM_SIZE                                   0x1
#define _ADCON2_ADFM_LENGTH                                 0x1
#define _ADCON2_ADFM_MASK                                   0x80
#define _ADCON2_ADCS0_POSN                                  0x0
#define _ADCON2_ADCS0_POSITION                              0x0
#define _ADCON2_ADCS0_SIZE                                  0x1
#define _ADCON2_ADCS0_LENGTH                                0x1
#define _ADCON2_ADCS0_MASK                                  0x1
#define _ADCON2_ADCS1_POSN                                  0x1
#define _ADCON2_ADCS1_POSITION                              0x1
#define _ADCON2_ADCS1_SIZE                                  0x1
#define _ADCON2_ADCS1_LENGTH                                0x1
#define _ADCON2_ADCS1_MASK                                  0x2
#define _ADCON2_ADCS2_POSN                                  0x2
#define _ADCON2_ADCS2_POSITION                              0x2
#define _ADCON2_ADCS2_SIZE                                  0x1
#define _ADCON2_ADCS2_LENGTH                                0x1
#define _ADCON2_ADCS2_MASK                                  0x4
#define _ADCON2_ACQT0_POSN                                  0x3
#define _ADCON2_ACQT0_POSITION                              0x3
#define _ADCON2_ACQT0_SIZE                                  0x1
#define _ADCON2_ACQT0_LENGTH                                0x1
#define _ADCON2_ACQT0_MASK                                  0x8
#define _ADCON2_ACQT1_POSN                                  0x4
#define _ADCON2_ACQT1_POSITION                              0x4
#define _ADCON2_ACQT1_SIZE                                  0x1
#define _ADCON2_ACQT1_LENGTH                                0x1
#define _ADCON2_ACQT1_MASK                                  0x10
#define _ADCON2_ACQT2_POSN                                  0x5
#define _ADCON2_ACQT2_POSITION                              0x5
#define _ADCON2_ACQT2_SIZE                                  0x1
#define _ADCON2_ACQT2_LENGTH                                0x1
#define _ADCON2_ACQT2_MASK                                  0x20
#define _ADCON2_ACQT3_POSN                                  0x6
#define _ADCON2_ACQT3_POSITION                              0x6
#define _ADCON2_ACQT3_SIZE                                  0x1
#define _ADCON2_ACQT3_LENGTH                                0x1
#define _ADCON2_ACQT3_MASK                                  0x40

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0xFC1);
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPNT                  :2;
        unsigned BFOVFL                 :1;
        unsigned BFEMT                  :1;
        unsigned FIFOEN                 :1;
        unsigned                        :1;
        unsigned VCFG                   :2;
    };
    struct {
        unsigned ADPNT0                 :1;
        unsigned ADPNT1                 :1;
        unsigned                        :4;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned FFOVFL                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
        unsigned VCFG01                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0xFC1);
// bitfield macros
#define _ADCON1_ADPNT_POSN                                  0x0
#define _ADCON1_ADPNT_POSITION                              0x0
#define _ADCON1_ADPNT_SIZE                                  0x2
#define _ADCON1_ADPNT_LENGTH                                0x2
#define _ADCON1_ADPNT_MASK                                  0x3
#define _ADCON1_BFOVFL_POSN                                 0x2
#define _ADCON1_BFOVFL_POSITION                             0x2
#define _ADCON1_BFOVFL_SIZE                                 0x1
#define _ADCON1_BFOVFL_LENGTH                               0x1
#define _ADCON1_BFOVFL_MASK                                 0x4
#define _ADCON1_BFEMT_POSN                                  0x3
#define _ADCON1_BFEMT_POSITION                              0x3
#define _ADCON1_BFEMT_SIZE                                  0x1
#define _ADCON1_BFEMT_LENGTH                                0x1
#define _ADCON1_BFEMT_MASK                                  0x8
#define _ADCON1_FIFOEN_POSN                                 0x4
#define _ADCON1_FIFOEN_POSITION                             0x4
#define _ADCON1_FIFOEN_SIZE                                 0x1
#define _ADCON1_FIFOEN_LENGTH                               0x1
#define _ADCON1_FIFOEN_MASK                                 0x10
#define _ADCON1_VCFG_POSN                                   0x6
#define _ADCON1_VCFG_POSITION                               0x6
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0xC0
#define _ADCON1_ADPNT0_POSN                                 0x0
#define _ADCON1_ADPNT0_POSITION                             0x0
#define _ADCON1_ADPNT0_SIZE                                 0x1
#define _ADCON1_ADPNT0_LENGTH                               0x1
#define _ADCON1_ADPNT0_MASK                                 0x1
#define _ADCON1_ADPNT1_POSN                                 0x1
#define _ADCON1_ADPNT1_POSITION                             0x1
#define _ADCON1_ADPNT1_SIZE                                 0x1
#define _ADCON1_ADPNT1_LENGTH                               0x1
#define _ADCON1_ADPNT1_MASK                                 0x2
#define _ADCON1_VCFG0_POSN                                  0x6
#define _ADCON1_VCFG0_POSITION                              0x6
#define _ADCON1_VCFG0_SIZE                                  0x1
#define _ADCON1_VCFG0_LENGTH                                0x1
#define _ADCON1_VCFG0_MASK                                  0x40
#define _ADCON1_VCFG1_POSN                                  0x7
#define _ADCON1_VCFG1_POSITION                              0x7
#define _ADCON1_VCFG1_SIZE                                  0x1
#define _ADCON1_VCFG1_LENGTH                                0x1
#define _ADCON1_VCFG1_MASK                                  0x80
#define _ADCON1_FFOVFL_POSN                                 0x2
#define _ADCON1_FFOVFL_POSITION                             0x2
#define _ADCON1_FFOVFL_SIZE                                 0x1
#define _ADCON1_FFOVFL_LENGTH                               0x1
#define _ADCON1_FFOVFL_MASK                                 0x4
#define _ADCON1_CHSN3_POSN                                  0x3
#define _ADCON1_CHSN3_POSITION                              0x3
#define _ADCON1_CHSN3_SIZE                                  0x1
#define _ADCON1_CHSN3_LENGTH                                0x1
#define _ADCON1_CHSN3_MASK                                  0x8
#define _ADCON1_VCFG01_POSN                                 0x4
#define _ADCON1_VCFG01_POSITION                             0x4
#define _ADCON1_VCFG01_SIZE                                 0x1
#define _ADCON1_VCFG01_LENGTH                               0x1
#define _ADCON1_VCFG01_MASK                                 0x10

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0xFC2);
#ifndef _LIB_BUILD
asm("ADCON0 equ 0FC2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned ACMOD                  :2;
        unsigned ACSCH                  :1;
        unsigned ACONV                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
        unsigned ACMOD0                 :1;
        unsigned ACMOD1                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GODONE                 :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0xFC2);
// bitfield macros
#define _ADCON0_GO_NOT_DONE_POSN                            0x1
#define _ADCON0_GO_NOT_DONE_POSITION                        0x1
#define _ADCON0_GO_NOT_DONE_SIZE                            0x1
#define _ADCON0_GO_NOT_DONE_LENGTH                          0x1
#define _ADCON0_GO_NOT_DONE_MASK                            0x2
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
#define _ADCON0_ACMOD_POSN                                  0x2
#define _ADCON0_ACMOD_POSITION                              0x2
#define _ADCON0_ACMOD_SIZE                                  0x2
#define _ADCON0_ACMOD_LENGTH                                0x2
#define _ADCON0_ACMOD_MASK                                  0xC
#define _ADCON0_ACSCH_POSN                                  0x4
#define _ADCON0_ACSCH_POSITION                              0x4
#define _ADCON0_ACSCH_SIZE                                  0x1
#define _ADCON0_ACSCH_LENGTH                                0x1
#define _ADCON0_ACSCH_MASK                                  0x10
#define _ADCON0_ACONV_POSN                                  0x5
#define _ADCON0_ACONV_POSITION                              0x5
#define _ADCON0_ACONV_SIZE                                  0x1
#define _ADCON0_ACONV_LENGTH                                0x1
#define _ADCON0_ACONV_MASK                                  0x20
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
#define _ADCON0_ACMOD0_POSN                                 0x2
#define _ADCON0_ACMOD0_POSITION                             0x2
#define _ADCON0_ACMOD0_SIZE                                 0x1
#define _ADCON0_ACMOD0_LENGTH                               0x1
#define _ADCON0_ACMOD0_MASK                                 0x4
#define _ADCON0_ACMOD1_POSN                                 0x3
#define _ADCON0_ACMOD1_POSITION                             0x3
#define _ADCON0_ACMOD1_SIZE                                 0x1
#define _ADCON0_ACMOD1_LENGTH                               0x1
#define _ADCON0_ACMOD1_MASK                                 0x8
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_NOT_DONE_POSN                               0x1
#define _ADCON0_NOT_DONE_POSITION                           0x1
#define _ADCON0_NOT_DONE_SIZE                               0x1
#define _ADCON0_NOT_DONE_LENGTH                             0x1
#define _ADCON0_NOT_DONE_MASK                               0x2
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GODONE_POSN                                 0x1
#define _ADCON0_GODONE_POSITION                             0x1
#define _ADCON0_GODONE_SIZE                                 0x1
#define _ADCON0_GODONE_LENGTH                               0x1
#define _ADCON0_GODONE_MASK                                 0x2

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0xFC3);
#ifndef _LIB_BUILD
asm("ADRES equ 0FC3h");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0xFC3);
#ifndef _LIB_BUILD
asm("ADRESL equ 0FC3h");
#endif

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0xFC4);
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif

// Register: SSPCON
#define SSPCON SSPCON
extern volatile unsigned char           SSPCON              __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSPCON equ 0FC6h");
#endif
// aliases
extern volatile unsigned char           SSPCON1             __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0FC6h");
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
extern volatile SSPCONbits_t SSPCONbits __at(0xFC6);
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
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0xFC6);
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

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
extern volatile unsigned char           SSPSTAT             __at(0xFC7);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0FC7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
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
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
        unsigned                        :2;
        unsigned NOT_A                  :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __at(0xFC7);
// bitfield macros
#define _SSPSTAT_R_NOT_W_POSN                               0x2
#define _SSPSTAT_R_NOT_W_POSITION                           0x2
#define _SSPSTAT_R_NOT_W_SIZE                               0x1
#define _SSPSTAT_R_NOT_W_LENGTH                             0x1
#define _SSPSTAT_R_NOT_W_MASK                               0x4
#define _SSPSTAT_D_NOT_A_POSN                               0x5
#define _SSPSTAT_D_NOT_A_POSITION                           0x5
#define _SSPSTAT_D_NOT_A_SIZE                               0x1
#define _SSPSTAT_D_NOT_A_LENGTH                             0x1
#define _SSPSTAT_D_NOT_A_MASK                               0x20
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
#define _SSPSTAT_NOT_WRITE_POSN                             0x2
#define _SSPSTAT_NOT_WRITE_POSITION                         0x2
#define _SSPSTAT_NOT_WRITE_SIZE                             0x1
#define _SSPSTAT_NOT_WRITE_LENGTH                           0x1
#define _SSPSTAT_NOT_WRITE_MASK                             0x4
#define _SSPSTAT_NOT_ADDRESS_POSN                           0x5
#define _SSPSTAT_NOT_ADDRESS_POSITION                       0x5
#define _SSPSTAT_NOT_ADDRESS_SIZE                           0x1
#define _SSPSTAT_NOT_ADDRESS_LENGTH                         0x1
#define _SSPSTAT_NOT_ADDRESS_MASK                           0x20
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
#define _SSPSTAT_RW_POSN                                    0x2
#define _SSPSTAT_RW_POSITION                                0x2
#define _SSPSTAT_RW_SIZE                                    0x1
#define _SSPSTAT_RW_LENGTH                                  0x1
#define _SSPSTAT_RW_MASK                                    0x4
#define _SSPSTAT_START_POSN                                 0x3
#define _SSPSTAT_START_POSITION                             0x3
#define _SSPSTAT_START_SIZE                                 0x1
#define _SSPSTAT_START_LENGTH                               0x1
#define _SSPSTAT_START_MASK                                 0x8
#define _SSPSTAT_STOP_POSN                                  0x4
#define _SSPSTAT_STOP_POSITION                              0x4
#define _SSPSTAT_STOP_SIZE                                  0x1
#define _SSPSTAT_STOP_LENGTH                                0x1
#define _SSPSTAT_STOP_MASK                                  0x10
#define _SSPSTAT_DA_POSN                                    0x5
#define _SSPSTAT_DA_POSITION                                0x5
#define _SSPSTAT_DA_SIZE                                    0x1
#define _SSPSTAT_DA_LENGTH                                  0x1
#define _SSPSTAT_DA_MASK                                    0x20
#define _SSPSTAT_NOT_W_POSN                                 0x2
#define _SSPSTAT_NOT_W_POSITION                             0x2
#define _SSPSTAT_NOT_W_SIZE                                 0x1
#define _SSPSTAT_NOT_W_LENGTH                               0x1
#define _SSPSTAT_NOT_W_MASK                                 0x4
#define _SSPSTAT_NOT_A_POSN                                 0x5
#define _SSPSTAT_NOT_A_POSITION                             0x5
#define _SSPSTAT_NOT_A_SIZE                                 0x1
#define _SSPSTAT_NOT_A_LENGTH                               0x1
#define _SSPSTAT_NOT_A_MASK                                 0x20

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif

// Register: SSPBUF
#define SSPBUF SSPBUF
extern volatile unsigned char           SSPBUF              __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0xFCA);
#ifndef _LIB_BUILD
asm("T2CON equ 0FCAh");
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
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
    struct {
        unsigned                        :3;
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0xFCA);
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

// Register: PR2
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0xFCB);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 0FCBh");  // Note: Changed by MikroE
#endif
// aliases
extern volatile unsigned char           MEMCON              __at(0xFCB);
#ifndef _LIB_BUILD
asm("MEMCON equ 0FCBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0xFCB);
// bitfield macros
#define _PR2_EBDIS_POSN                                     0x7
#define _PR2_EBDIS_POSITION                                 0x7
#define _PR2_EBDIS_SIZE                                     0x1
#define _PR2_EBDIS_LENGTH                                   0x1
#define _PR2_EBDIS_MASK                                     0x80
#define _PR2_WAIT0_POSN                                     0x4
#define _PR2_WAIT0_POSITION                                 0x4
#define _PR2_WAIT0_SIZE                                     0x1
#define _PR2_WAIT0_LENGTH                                   0x1
#define _PR2_WAIT0_MASK                                     0x10
#define _PR2_WAIT1_POSN                                     0x5
#define _PR2_WAIT1_POSITION                                 0x5
#define _PR2_WAIT1_SIZE                                     0x1
#define _PR2_WAIT1_LENGTH                                   0x1
#define _PR2_WAIT1_MASK                                     0x20
#define _PR2_WM0_POSN                                       0x0
#define _PR2_WM0_POSITION                                   0x0
#define _PR2_WM0_SIZE                                       0x1
#define _PR2_WM0_LENGTH                                     0x1
#define _PR2_WM0_MASK                                       0x1
#define _PR2_WM1_POSN                                       0x1
#define _PR2_WM1_POSITION                                   0x1
#define _PR2_WM1_SIZE                                       0x1
#define _PR2_WM1_LENGTH                                     0x1
#define _PR2_WM1_MASK                                       0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} MEMCONbits_t;
extern volatile MEMCONbits_t MEMCONbits __at(0xFCB);
// bitfield macros
#define _MEMCON_EBDIS_POSN                                  0x7
#define _MEMCON_EBDIS_POSITION                              0x7
#define _MEMCON_EBDIS_SIZE                                  0x1
#define _MEMCON_EBDIS_LENGTH                                0x1
#define _MEMCON_EBDIS_MASK                                  0x80
#define _MEMCON_WAIT0_POSN                                  0x4
#define _MEMCON_WAIT0_POSITION                              0x4
#define _MEMCON_WAIT0_SIZE                                  0x1
#define _MEMCON_WAIT0_LENGTH                                0x1
#define _MEMCON_WAIT0_MASK                                  0x10
#define _MEMCON_WAIT1_POSN                                  0x5
#define _MEMCON_WAIT1_POSITION                              0x5
#define _MEMCON_WAIT1_SIZE                                  0x1
#define _MEMCON_WAIT1_LENGTH                                0x1
#define _MEMCON_WAIT1_MASK                                  0x20
#define _MEMCON_WM0_POSN                                    0x0
#define _MEMCON_WM0_POSITION                                0x0
#define _MEMCON_WM0_SIZE                                    0x1
#define _MEMCON_WM0_LENGTH                                  0x1
#define _MEMCON_WM0_MASK                                    0x1
#define _MEMCON_WM1_POSN                                    0x1
#define _MEMCON_WM1_POSITION                                0x1
#define _MEMCON_WM1_SIZE                                    0x1
#define _MEMCON_WM1_LENGTH                                  0x1
#define _MEMCON_WM1_MASK                                    0x2

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0xFCC);
#ifndef _LIB_BUILD
asm("TMR2 equ 0FCCh");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0xFCD);
#ifndef _LIB_BUILD
asm("T1CON equ 0FCDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T1SYNC             :1;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned T1RUN                  :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
        unsigned                        :3;
        unsigned T1RD16                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0xFCD);
// bitfield macros
#define _T1CON_NOT_T1SYNC_POSN                              0x2
#define _T1CON_NOT_T1SYNC_POSITION                          0x2
#define _T1CON_NOT_T1SYNC_SIZE                              0x1
#define _T1CON_NOT_T1SYNC_LENGTH                            0x1
#define _T1CON_NOT_T1SYNC_MASK                              0x4
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
#define _T1CON_T1RUN_POSN                                   0x6
#define _T1CON_T1RUN_POSITION                               0x6
#define _T1CON_T1RUN_SIZE                                   0x1
#define _T1CON_T1RUN_LENGTH                                 0x1
#define _T1CON_T1RUN_MASK                                   0x40
#define _T1CON_RD16_POSN                                    0x7
#define _T1CON_RD16_POSITION                                0x7
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x80
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
#define _T1CON_T1INSYNC_POSN                                0x2
#define _T1CON_T1INSYNC_POSITION                            0x2
#define _T1CON_T1INSYNC_SIZE                                0x1
#define _T1CON_T1INSYNC_LENGTH                              0x1
#define _T1CON_T1INSYNC_MASK                                0x4
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
#define _T1CON_T1RD16_POSN                                  0x7
#define _T1CON_T1RD16_POSITION                              0x7
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x80

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0xFCE);
#ifndef _LIB_BUILD
asm("TMR1 equ 0FCEh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0xFCE);
#ifndef _LIB_BUILD
asm("TMR1L equ 0FCEh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0xFCF);
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif

// Register: RCON
#define RCON RCON
extern volatile unsigned char           RCON                __at(0xFD0);
#ifndef _LIB_BUILD
asm("RCON equ 0FD0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NOT_BOR                :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_POR                :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_PD                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_TO                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned NOT_RI                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned                        :2;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned NOT_IPEN               :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
        unsigned                        :2;
        unsigned nIPEN                  :1;
    };
} RCONbits_t;
extern volatile RCONbits_t RCONbits __at(0xFD0);
// bitfield macros
#define _RCON_NOT_BOR_POSN                                  0x0
#define _RCON_NOT_BOR_POSITION                              0x0
#define _RCON_NOT_BOR_SIZE                                  0x1
#define _RCON_NOT_BOR_LENGTH                                0x1
#define _RCON_NOT_BOR_MASK                                  0x1
#define _RCON_NOT_POR_POSN                                  0x1
#define _RCON_NOT_POR_POSITION                              0x1
#define _RCON_NOT_POR_SIZE                                  0x1
#define _RCON_NOT_POR_LENGTH                                0x1
#define _RCON_NOT_POR_MASK                                  0x2
#define _RCON_NOT_PD_POSN                                   0x2
#define _RCON_NOT_PD_POSITION                               0x2
#define _RCON_NOT_PD_SIZE                                   0x1
#define _RCON_NOT_PD_LENGTH                                 0x1
#define _RCON_NOT_PD_MASK                                   0x4
#define _RCON_NOT_TO_POSN                                   0x3
#define _RCON_NOT_TO_POSITION                               0x3
#define _RCON_NOT_TO_SIZE                                   0x1
#define _RCON_NOT_TO_LENGTH                                 0x1
#define _RCON_NOT_TO_MASK                                   0x8
#define _RCON_NOT_RI_POSN                                   0x4
#define _RCON_NOT_RI_POSITION                               0x4
#define _RCON_NOT_RI_SIZE                                   0x1
#define _RCON_NOT_RI_LENGTH                                 0x1
#define _RCON_NOT_RI_MASK                                   0x10
#define _RCON_nBOR_POSN                                     0x0
#define _RCON_nBOR_POSITION                                 0x0
#define _RCON_nBOR_SIZE                                     0x1
#define _RCON_nBOR_LENGTH                                   0x1
#define _RCON_nBOR_MASK                                     0x1
#define _RCON_nPOR_POSN                                     0x1
#define _RCON_nPOR_POSITION                                 0x1
#define _RCON_nPOR_SIZE                                     0x1
#define _RCON_nPOR_LENGTH                                   0x1
#define _RCON_nPOR_MASK                                     0x2
#define _RCON_nPD_POSN                                      0x2
#define _RCON_nPD_POSITION                                  0x2
#define _RCON_nPD_SIZE                                      0x1
#define _RCON_nPD_LENGTH                                    0x1
#define _RCON_nPD_MASK                                      0x4
#define _RCON_nTO_POSN                                      0x3
#define _RCON_nTO_POSITION                                  0x3
#define _RCON_nTO_SIZE                                      0x1
#define _RCON_nTO_LENGTH                                    0x1
#define _RCON_nTO_MASK                                      0x8
#define _RCON_nRI_POSN                                      0x4
#define _RCON_nRI_POSITION                                  0x4
#define _RCON_nRI_SIZE                                      0x1
#define _RCON_nRI_LENGTH                                    0x1
#define _RCON_nRI_MASK                                      0x10
#define _RCON_IPEN_POSN                                     0x7
#define _RCON_IPEN_POSITION                                 0x7
#define _RCON_IPEN_SIZE                                     0x1
#define _RCON_IPEN_LENGTH                                   0x1
#define _RCON_IPEN_MASK                                     0x80
#define _RCON_NOT_IPEN_POSN                                 0x7
#define _RCON_NOT_IPEN_POSITION                             0x7
#define _RCON_NOT_IPEN_SIZE                                 0x1
#define _RCON_NOT_IPEN_LENGTH                               0x1
#define _RCON_NOT_IPEN_MASK                                 0x80
#define _RCON_BOR_POSN                                      0x0
#define _RCON_BOR_POSITION                                  0x0
#define _RCON_BOR_SIZE                                      0x1
#define _RCON_BOR_LENGTH                                    0x1
#define _RCON_BOR_MASK                                      0x1
#define _RCON_POR_POSN                                      0x1
#define _RCON_POR_POSITION                                  0x1
#define _RCON_POR_SIZE                                      0x1
#define _RCON_POR_LENGTH                                    0x1
#define _RCON_POR_MASK                                      0x2
#define _RCON_PD_POSN                                       0x2
#define _RCON_PD_POSITION                                   0x2
#define _RCON_PD_SIZE                                       0x1
#define _RCON_PD_LENGTH                                     0x1
#define _RCON_PD_MASK                                       0x4
#define _RCON_TO_POSN                                       0x3
#define _RCON_TO_POSITION                                   0x3
#define _RCON_TO_SIZE                                       0x1
#define _RCON_TO_LENGTH                                     0x1
#define _RCON_TO_MASK                                       0x8
#define _RCON_RI_POSN                                       0x4
#define _RCON_RI_POSITION                                   0x4
#define _RCON_RI_SIZE                                       0x1
#define _RCON_RI_LENGTH                                     0x1
#define _RCON_RI_MASK                                       0x10
#define _RCON_nIPEN_POSN                                    0x7
#define _RCON_nIPEN_POSITION                                0x7
#define _RCON_nIPEN_SIZE                                    0x1
#define _RCON_nIPEN_LENGTH                                  0x1
#define _RCON_nIPEN_MASK                                    0x80

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0xFD1);
#ifndef _LIB_BUILD
asm("WDTCON equ 0FD1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned                        :6;
        unsigned WDTW                   :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0xFD1);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTW_POSN                                   0x7
#define _WDTCON_WDTW_POSITION                               0x7
#define _WDTCON_WDTW_SIZE                                   0x1
#define _WDTCON_WDTW_LENGTH                                 0x1
#define _WDTCON_WDTW_MASK                                   0x80

// Register: LVDCON
#define LVDCON LVDCON
extern volatile unsigned char           LVDCON              __at(0xFD2);
#ifndef _LIB_BUILD
asm("LVDCON equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LVDL                   :4;
        unsigned LVDEN                  :1;
        unsigned IRVST                  :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned                        :1;
        unsigned IVRST                  :1;
    };
} LVDCONbits_t;
extern volatile LVDCONbits_t LVDCONbits __at(0xFD2);
// bitfield macros
#define _LVDCON_LVDL_POSN                                   0x0
#define _LVDCON_LVDL_POSITION                               0x0
#define _LVDCON_LVDL_SIZE                                   0x4
#define _LVDCON_LVDL_LENGTH                                 0x4
#define _LVDCON_LVDL_MASK                                   0xF
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
#define _LVDCON_LVDL3_POSN                                  0x3
#define _LVDCON_LVDL3_POSITION                              0x3
#define _LVDCON_LVDL3_SIZE                                  0x1
#define _LVDCON_LVDL3_LENGTH                                0x1
#define _LVDCON_LVDL3_MASK                                  0x8
#define _LVDCON_IVRST_POSN                                  0x5
#define _LVDCON_IVRST_POSITION                              0x5
#define _LVDCON_IVRST_SIZE                                  0x1
#define _LVDCON_IVRST_LENGTH                                0x1
#define _LVDCON_IVRST_MASK                                  0x20

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0xFD3);
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :2;
        unsigned IOFS                   :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned                        :2;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned FLTS                   :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0xFD3);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x2
#define _OSCCON_SCS_LENGTH                                  0x2
#define _OSCCON_SCS_MASK                                    0x3
#define _OSCCON_IOFS_POSN                                   0x2
#define _OSCCON_IOFS_POSITION                               0x2
#define _OSCCON_IOFS_SIZE                                   0x1
#define _OSCCON_IOFS_LENGTH                                 0x1
#define _OSCCON_IOFS_MASK                                   0x4
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
#define _OSCCON_IDLEN_POSN                                  0x7
#define _OSCCON_IDLEN_POSITION                              0x7
#define _OSCCON_IDLEN_SIZE                                  0x1
#define _OSCCON_IDLEN_LENGTH                                0x1
#define _OSCCON_IDLEN_MASK                                  0x80
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
#define _OSCCON_FLTS_POSN                                   0x2
#define _OSCCON_FLTS_POSITION                               0x2
#define _OSCCON_FLTS_SIZE                                   0x1
#define _OSCCON_FLTS_LENGTH                                 0x1
#define _OSCCON_FLTS_MASK                                   0x4

// Register: T0CON
#define T0CON T0CON
extern volatile unsigned char           T0CON               __at(0xFD5);
#ifndef _LIB_BUILD
asm("T0CON equ 0FD5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0PS                   :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned T016BIT                :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
        unsigned T0PS3                  :1;
    };
} T0CONbits_t;
extern volatile T0CONbits_t T0CONbits __at(0xFD5);
// bitfield macros
#define _T0CON_T0PS_POSN                                    0x0
#define _T0CON_T0PS_POSITION                                0x0
#define _T0CON_T0PS_SIZE                                    0x3
#define _T0CON_T0PS_LENGTH                                  0x3
#define _T0CON_T0PS_MASK                                    0x7
#define _T0CON_PSA_POSN                                     0x3
#define _T0CON_PSA_POSITION                                 0x3
#define _T0CON_PSA_SIZE                                     0x1
#define _T0CON_PSA_LENGTH                                   0x1
#define _T0CON_PSA_MASK                                     0x8
#define _T0CON_T0SE_POSN                                    0x4
#define _T0CON_T0SE_POSITION                                0x4
#define _T0CON_T0SE_SIZE                                    0x1
#define _T0CON_T0SE_LENGTH                                  0x1
#define _T0CON_T0SE_MASK                                    0x10
#define _T0CON_T0CS_POSN                                    0x5
#define _T0CON_T0CS_POSITION                                0x5
#define _T0CON_T0CS_SIZE                                    0x1
#define _T0CON_T0CS_LENGTH                                  0x1
#define _T0CON_T0CS_MASK                                    0x20
#define _T0CON_T016BIT_POSN                                 0x6
#define _T0CON_T016BIT_POSITION                             0x6
#define _T0CON_T016BIT_SIZE                                 0x1
#define _T0CON_T016BIT_LENGTH                               0x1
#define _T0CON_T016BIT_MASK                                 0x40
#define _T0CON_TMR0ON_POSN                                  0x7
#define _T0CON_TMR0ON_POSITION                              0x7
#define _T0CON_TMR0ON_SIZE                                  0x1
#define _T0CON_TMR0ON_LENGTH                                0x1
#define _T0CON_TMR0ON_MASK                                  0x80
#define _T0CON_T0PS0_POSN                                   0x0
#define _T0CON_T0PS0_POSITION                               0x0
#define _T0CON_T0PS0_SIZE                                   0x1
#define _T0CON_T0PS0_LENGTH                                 0x1
#define _T0CON_T0PS0_MASK                                   0x1
#define _T0CON_T0PS1_POSN                                   0x1
#define _T0CON_T0PS1_POSITION                               0x1
#define _T0CON_T0PS1_SIZE                                   0x1
#define _T0CON_T0PS1_LENGTH                                 0x1
#define _T0CON_T0PS1_MASK                                   0x2
#define _T0CON_T0PS2_POSN                                   0x2
#define _T0CON_T0PS2_POSITION                               0x2
#define _T0CON_T0PS2_SIZE                                   0x1
#define _T0CON_T0PS2_LENGTH                                 0x1
#define _T0CON_T0PS2_MASK                                   0x4
#define _T0CON_T0PS3_POSN                                   0x3
#define _T0CON_T0PS3_POSITION                               0x3
#define _T0CON_T0PS3_SIZE                                   0x1
#define _T0CON_T0PS3_LENGTH                                 0x1
#define _T0CON_T0PS3_MASK                                   0x8

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned short          TMR0                __at(0xFD6);
#ifndef _LIB_BUILD
asm("TMR0 equ 0FD6h");
#endif

// Register: TMR0L
#define TMR0L TMR0L
extern volatile unsigned char           TMR0L               __at(0xFD6);
#ifndef _LIB_BUILD
asm("TMR0L equ 0FD6h");
#endif

// Register: TMR0H
#define TMR0H TMR0H
extern volatile unsigned char           TMR0H               __at(0xFD7);
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif

// Register: STATUS
#define STATUS STATUS
extern volatile unsigned char           STATUS              __at(0xFD8);
#ifndef _LIB_BUILD
asm("STATUS equ 0FD8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned OV                     :1;
        unsigned N                      :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
        unsigned OVERFLOW               :1;
        unsigned NEGATIVE               :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0xFD8);
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
#define _STATUS_OV_POSN                                     0x3
#define _STATUS_OV_POSITION                                 0x3
#define _STATUS_OV_SIZE                                     0x1
#define _STATUS_OV_LENGTH                                   0x1
#define _STATUS_OV_MASK                                     0x8
#define _STATUS_N_POSN                                      0x4
#define _STATUS_N_POSITION                                  0x4
#define _STATUS_N_SIZE                                      0x1
#define _STATUS_N_LENGTH                                    0x1
#define _STATUS_N_MASK                                      0x10
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
#define _STATUS_OVERFLOW_POSN                               0x3
#define _STATUS_OVERFLOW_POSITION                           0x3
#define _STATUS_OVERFLOW_SIZE                               0x1
#define _STATUS_OVERFLOW_LENGTH                             0x1
#define _STATUS_OVERFLOW_MASK                               0x8
#define _STATUS_NEGATIVE_POSN                               0x4
#define _STATUS_NEGATIVE_POSITION                           0x4
#define _STATUS_NEGATIVE_SIZE                               0x1
#define _STATUS_NEGATIVE_LENGTH                             0x1
#define _STATUS_NEGATIVE_MASK                               0x10

// Register: FSR2
#define FSR2 FSR2
extern volatile unsigned short          FSR2                __at(0xFD9);
#ifndef _LIB_BUILD
asm("FSR2 equ 0FD9h");
#endif

// Register: FSR2L
#define FSR2L FSR2L
extern volatile unsigned char           FSR2L               __at(0xFD9);
#ifndef _LIB_BUILD
asm("FSR2L equ 0FD9h");
#endif

// Register: FSR2H
#define FSR2H FSR2H
extern volatile unsigned char           FSR2H               __at(0xFDA);
#ifndef _LIB_BUILD
asm("FSR2H equ 0FDAh");
#endif

// Register: PLUSW2
#define PLUSW2 PLUSW2
extern volatile unsigned char           PLUSW2              __at(0xFDB);
#ifndef _LIB_BUILD
asm("PLUSW2 equ 0FDBh");
#endif

// Register: PREINC2
#define PREINC2 PREINC2
extern volatile unsigned char           PREINC2             __at(0xFDC);
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
extern volatile unsigned char           POSTDEC2            __at(0xFDD);
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif

// Register: POSTINC2
#define POSTINC2 POSTINC2
extern volatile unsigned char           POSTINC2            __at(0xFDE);
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif

// Register: INDF2
#define INDF2 INDF2
extern volatile unsigned char           INDF2               __at(0xFDF);
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif

// Register: BSR
#define BSR BSR
extern volatile unsigned char           BSR                 __at(0xFE0);
#ifndef _LIB_BUILD
asm("BSR equ 0FE0h");
#endif

// Register: FSR1
#define FSR1 FSR1
extern volatile unsigned short          FSR1                __at(0xFE1);
#ifndef _LIB_BUILD
asm("FSR1 equ 0FE1h");
#endif

// Register: FSR1L
#define FSR1L FSR1L
extern volatile unsigned char           FSR1L               __at(0xFE1);
#ifndef _LIB_BUILD
asm("FSR1L equ 0FE1h");
#endif

// Register: FSR1H
#define FSR1H FSR1H
extern volatile unsigned char           FSR1H               __at(0xFE2);
#ifndef _LIB_BUILD
asm("FSR1H equ 0FE2h");
#endif

// Register: PLUSW1
#define PLUSW1 PLUSW1
extern volatile unsigned char           PLUSW1              __at(0xFE3);
#ifndef _LIB_BUILD
asm("PLUSW1 equ 0FE3h");
#endif

// Register: PREINC1
#define PREINC1 PREINC1
extern volatile unsigned char           PREINC1             __at(0xFE4);
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
extern volatile unsigned char           POSTDEC1            __at(0xFE5);
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif

// Register: POSTINC1
#define POSTINC1 POSTINC1
extern volatile unsigned char           POSTINC1            __at(0xFE6);
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif

// Register: INDF1
#define INDF1 INDF1
extern volatile unsigned char           INDF1               __at(0xFE7);
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0xFE8);
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif

// Register: FSR0
#define FSR0 FSR0
extern volatile unsigned short          FSR0                __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0 equ 0FE9h");
#endif

// Register: FSR0L
#define FSR0L FSR0L
extern volatile unsigned char           FSR0L               __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0L equ 0FE9h");
#endif

// Register: FSR0H
#define FSR0H FSR0H
extern volatile unsigned char           FSR0H               __at(0xFEA);
#ifndef _LIB_BUILD
asm("FSR0H equ 0FEAh");
#endif

// Register: PLUSW0
#define PLUSW0 PLUSW0
extern volatile unsigned char           PLUSW0              __at(0xFEB);
#ifndef _LIB_BUILD
asm("PLUSW0 equ 0FEBh");
#endif

// Register: PREINC0
#define PREINC0 PREINC0
extern volatile unsigned char           PREINC0             __at(0xFEC);
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
extern volatile unsigned char           POSTDEC0            __at(0xFED);
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif

// Register: POSTINC0
#define POSTINC0 POSTINC0
extern volatile unsigned char           POSTINC0            __at(0xFEE);
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif

// Register: INDF0
#define INDF0 INDF0
extern volatile unsigned char           INDF0               __at(0xFEF);
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif

// Register: INTCON3
#define INTCON3 INTCON3
extern volatile unsigned char           INTCON3             __at(0xFF0);
#ifndef _LIB_BUILD
asm("INTCON3 equ 0FF0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INT1IF                 :1;
        unsigned INT2IF                 :1;
        unsigned                        :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned                        :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned                        :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned                        :1;
        unsigned INT1P                  :1;
        unsigned INT2P                  :1;
    };
} INTCON3bits_t;
extern volatile INTCON3bits_t INTCON3bits __at(0xFF0);
// bitfield macros
#define _INTCON3_INT1IF_POSN                                0x0
#define _INTCON3_INT1IF_POSITION                            0x0
#define _INTCON3_INT1IF_SIZE                                0x1
#define _INTCON3_INT1IF_LENGTH                              0x1
#define _INTCON3_INT1IF_MASK                                0x1
#define _INTCON3_INT2IF_POSN                                0x1
#define _INTCON3_INT2IF_POSITION                            0x1
#define _INTCON3_INT2IF_SIZE                                0x1
#define _INTCON3_INT2IF_LENGTH                              0x1
#define _INTCON3_INT2IF_MASK                                0x2
#define _INTCON3_INT1IE_POSN                                0x3
#define _INTCON3_INT1IE_POSITION                            0x3
#define _INTCON3_INT1IE_SIZE                                0x1
#define _INTCON3_INT1IE_LENGTH                              0x1
#define _INTCON3_INT1IE_MASK                                0x8
#define _INTCON3_INT2IE_POSN                                0x4
#define _INTCON3_INT2IE_POSITION                            0x4
#define _INTCON3_INT2IE_SIZE                                0x1
#define _INTCON3_INT2IE_LENGTH                              0x1
#define _INTCON3_INT2IE_MASK                                0x10
#define _INTCON3_INT1IP_POSN                                0x6
#define _INTCON3_INT1IP_POSITION                            0x6
#define _INTCON3_INT1IP_SIZE                                0x1
#define _INTCON3_INT1IP_LENGTH                              0x1
#define _INTCON3_INT1IP_MASK                                0x40
#define _INTCON3_INT2IP_POSN                                0x7
#define _INTCON3_INT2IP_POSITION                            0x7
#define _INTCON3_INT2IP_SIZE                                0x1
#define _INTCON3_INT2IP_LENGTH                              0x1
#define _INTCON3_INT2IP_MASK                                0x80
#define _INTCON3_INT1F_POSN                                 0x0
#define _INTCON3_INT1F_POSITION                             0x0
#define _INTCON3_INT1F_SIZE                                 0x1
#define _INTCON3_INT1F_LENGTH                               0x1
#define _INTCON3_INT1F_MASK                                 0x1
#define _INTCON3_INT2F_POSN                                 0x1
#define _INTCON3_INT2F_POSITION                             0x1
#define _INTCON3_INT2F_SIZE                                 0x1
#define _INTCON3_INT2F_LENGTH                               0x1
#define _INTCON3_INT2F_MASK                                 0x2
#define _INTCON3_INT1E_POSN                                 0x3
#define _INTCON3_INT1E_POSITION                             0x3
#define _INTCON3_INT1E_SIZE                                 0x1
#define _INTCON3_INT1E_LENGTH                               0x1
#define _INTCON3_INT1E_MASK                                 0x8
#define _INTCON3_INT2E_POSN                                 0x4
#define _INTCON3_INT2E_POSITION                             0x4
#define _INTCON3_INT2E_SIZE                                 0x1
#define _INTCON3_INT2E_LENGTH                               0x1
#define _INTCON3_INT2E_MASK                                 0x10
#define _INTCON3_INT1P_POSN                                 0x6
#define _INTCON3_INT1P_POSITION                             0x6
#define _INTCON3_INT1P_SIZE                                 0x1
#define _INTCON3_INT1P_LENGTH                               0x1
#define _INTCON3_INT1P_MASK                                 0x40
#define _INTCON3_INT2P_POSN                                 0x7
#define _INTCON3_INT2P_POSITION                             0x7
#define _INTCON3_INT2P_SIZE                                 0x1
#define _INTCON3_INT2P_LENGTH                               0x1
#define _INTCON3_INT2P_MASK                                 0x80

// Register: INTCON2
#define INTCON2 INTCON2
extern volatile unsigned char           INTCON2             __at(0xFF1);
#ifndef _LIB_BUILD
asm("INTCON2 equ 0FF1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned NOT_RBPU               :1;
    };
    struct {
        unsigned RBIP                   :1;
        unsigned                        :1;
        unsigned TMR0IP                 :1;
        unsigned                        :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned T0IP                   :1;
        unsigned                        :4;
        unsigned RBPU                   :1;
    };
} INTCON2bits_t;
extern volatile INTCON2bits_t INTCON2bits __at(0xFF1);
// bitfield macros
#define _INTCON2_NOT_RBPU_POSN                              0x7
#define _INTCON2_NOT_RBPU_POSITION                          0x7
#define _INTCON2_NOT_RBPU_SIZE                              0x1
#define _INTCON2_NOT_RBPU_LENGTH                            0x1
#define _INTCON2_NOT_RBPU_MASK                              0x80
#define _INTCON2_RBIP_POSN                                  0x0
#define _INTCON2_RBIP_POSITION                              0x0
#define _INTCON2_RBIP_SIZE                                  0x1
#define _INTCON2_RBIP_LENGTH                                0x1
#define _INTCON2_RBIP_MASK                                  0x1
#define _INTCON2_TMR0IP_POSN                                0x2
#define _INTCON2_TMR0IP_POSITION                            0x2
#define _INTCON2_TMR0IP_SIZE                                0x1
#define _INTCON2_TMR0IP_LENGTH                              0x1
#define _INTCON2_TMR0IP_MASK                                0x4
#define _INTCON2_INTEDG2_POSN                               0x4
#define _INTCON2_INTEDG2_POSITION                           0x4
#define _INTCON2_INTEDG2_SIZE                               0x1
#define _INTCON2_INTEDG2_LENGTH                             0x1
#define _INTCON2_INTEDG2_MASK                               0x10
#define _INTCON2_INTEDG1_POSN                               0x5
#define _INTCON2_INTEDG1_POSITION                           0x5
#define _INTCON2_INTEDG1_SIZE                               0x1
#define _INTCON2_INTEDG1_LENGTH                             0x1
#define _INTCON2_INTEDG1_MASK                               0x20
#define _INTCON2_INTEDG0_POSN                               0x6
#define _INTCON2_INTEDG0_POSITION                           0x6
#define _INTCON2_INTEDG0_SIZE                               0x1
#define _INTCON2_INTEDG0_LENGTH                             0x1
#define _INTCON2_INTEDG0_MASK                               0x40
#define _INTCON2_nRBPU_POSN                                 0x7
#define _INTCON2_nRBPU_POSITION                             0x7
#define _INTCON2_nRBPU_SIZE                                 0x1
#define _INTCON2_nRBPU_LENGTH                               0x1
#define _INTCON2_nRBPU_MASK                                 0x80
#define _INTCON2_T0IP_POSN                                  0x2
#define _INTCON2_T0IP_POSITION                              0x2
#define _INTCON2_T0IP_SIZE                                  0x1
#define _INTCON2_T0IP_LENGTH                                0x1
#define _INTCON2_T0IP_MASK                                  0x4
#define _INTCON2_RBPU_POSN                                  0x7
#define _INTCON2_RBPU_POSITION                              0x7
#define _INTCON2_RBPU_SIZE                                  0x1
#define _INTCON2_RBPU_LENGTH                                0x1
#define _INTCON2_RBPU_MASK                                  0x80

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0xFF2);
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT0F                  :1;
        unsigned T0IF                   :1;
        unsigned                        :1;
        unsigned INT0E                  :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0xFF2);
// bitfield macros
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
#define _INTCON_INT0IF_POSN                                 0x1
#define _INTCON_INT0IF_POSITION                             0x1
#define _INTCON_INT0IF_SIZE                                 0x1
#define _INTCON_INT0IF_LENGTH                               0x1
#define _INTCON_INT0IF_MASK                                 0x2
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
#define _INTCON_INT0IE_POSN                                 0x4
#define _INTCON_INT0IE_POSITION                             0x4
#define _INTCON_INT0IE_SIZE                                 0x1
#define _INTCON_INT0IE_LENGTH                               0x1
#define _INTCON_INT0IE_MASK                                 0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_GIEL_POSN                              0x6
#define _INTCON_PEIE_GIEL_POSITION                          0x6
#define _INTCON_PEIE_GIEL_SIZE                              0x1
#define _INTCON_PEIE_GIEL_LENGTH                            0x1
#define _INTCON_PEIE_GIEL_MASK                              0x40
#define _INTCON_GIE_GIEH_POSN                               0x7
#define _INTCON_GIE_GIEH_POSITION                           0x7
#define _INTCON_GIE_GIEH_SIZE                               0x1
#define _INTCON_GIE_GIEH_LENGTH                             0x1
#define _INTCON_GIE_GIEH_MASK                               0x80
#define _INTCON_INT0F_POSN                                  0x1
#define _INTCON_INT0F_POSITION                              0x1
#define _INTCON_INT0F_SIZE                                  0x1
#define _INTCON_INT0F_LENGTH                                0x1
#define _INTCON_INT0F_MASK                                  0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_INT0E_POSN                                  0x4
#define _INTCON_INT0E_POSITION                              0x4
#define _INTCON_INT0E_SIZE                                  0x1
#define _INTCON_INT0E_LENGTH                                0x1
#define _INTCON_INT0E_MASK                                  0x10
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
#define _INTCON_GIEL_POSN                                   0x6
#define _INTCON_GIEL_POSITION                               0x6
#define _INTCON_GIEL_SIZE                                   0x1
#define _INTCON_GIEL_LENGTH                                 0x1
#define _INTCON_GIEL_MASK                                   0x40
#define _INTCON_GIEH_POSN                                   0x7
#define _INTCON_GIEH_POSITION                               0x7
#define _INTCON_GIEH_SIZE                                   0x1
#define _INTCON_GIEH_LENGTH                                 0x1
#define _INTCON_GIEH_MASK                                   0x80

// Register: PROD
#define PROD PROD
extern volatile unsigned short          PROD                __at(0xFF3);
#ifndef _LIB_BUILD
asm("PROD equ 0FF3h");
#endif

// Register: PRODL
#define PRODL PRODL
extern volatile unsigned char           PRODL               __at(0xFF3);
#ifndef _LIB_BUILD
asm("PRODL equ 0FF3h");
#endif

// Register: PRODH
#define PRODH PRODH
extern volatile unsigned char           PRODH               __at(0xFF4);
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif

// Register: TABLAT
#define TABLAT TABLAT
extern volatile unsigned char           TABLAT              __at(0xFF5);
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif

// Register: TBLPTR
#define TBLPTR TBLPTR
#ifndef __CCI__
extern volatile __uint24                TBLPTR              __at(0xFF6);
#endif
#ifndef _LIB_BUILD
asm("TBLPTR equ 0FF6h");
#endif

// Register: TBLPTRL
#define TBLPTRL TBLPTRL
extern volatile unsigned char           TBLPTRL             __at(0xFF6);
#ifndef _LIB_BUILD
asm("TBLPTRL equ 0FF6h");
#endif

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
extern volatile unsigned char           TBLPTRH             __at(0xFF7);
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif

// Register: TBLPTRU
#define TBLPTRU TBLPTRU
extern volatile unsigned char           TBLPTRU             __at(0xFF8);
#ifndef _LIB_BUILD
asm("TBLPTRU equ 0FF8h");
#endif

// Register: PCLAT
#define PCLAT PCLAT
#ifndef __CCI__
extern volatile __uint24                PCLAT               __at(0xFF9);
#endif
#ifndef _LIB_BUILD
asm("PCLAT equ 0FF9h");
#endif
// aliases
#ifndef __CCI__
extern volatile __uint24                PC                  __at(0xFF9);
#endif
#ifndef _LIB_BUILD
asm("PC equ 0FF9h");
#endif

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0xFF9);
#ifndef _LIB_BUILD
asm("PCL equ 0FF9h");
#endif

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0xFFA);
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif

// Register: PCLATU
#define PCLATU PCLATU
extern volatile unsigned char           PCLATU              __at(0xFFB);
#ifndef _LIB_BUILD
asm("PCLATU equ 0FFBh");
#endif

// Register: STKPTR
#define STKPTR STKPTR
extern volatile unsigned char           STKPTR              __at(0xFFC);
#ifndef _LIB_BUILD
asm("STKPTR equ 0FFCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKFUL                 :1;
    };
    struct {
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
        unsigned                        :2;
        unsigned STKOVF                 :1;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits __at(0xFFC);
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F
#define _STKPTR_STKUNF_POSN                                 0x6
#define _STKPTR_STKUNF_POSITION                             0x6
#define _STKPTR_STKUNF_SIZE                                 0x1
#define _STKPTR_STKUNF_LENGTH                               0x1
#define _STKPTR_STKUNF_MASK                                 0x40
#define _STKPTR_STKFUL_POSN                                 0x7
#define _STKPTR_STKFUL_POSITION                             0x7
#define _STKPTR_STKFUL_SIZE                                 0x1
#define _STKPTR_STKFUL_LENGTH                               0x1
#define _STKPTR_STKFUL_MASK                                 0x80
#define _STKPTR_STKPTR0_POSN                                0x0
#define _STKPTR_STKPTR0_POSITION                            0x0
#define _STKPTR_STKPTR0_SIZE                                0x1
#define _STKPTR_STKPTR0_LENGTH                              0x1
#define _STKPTR_STKPTR0_MASK                                0x1
#define _STKPTR_STKPTR1_POSN                                0x1
#define _STKPTR_STKPTR1_POSITION                            0x1
#define _STKPTR_STKPTR1_SIZE                                0x1
#define _STKPTR_STKPTR1_LENGTH                              0x1
#define _STKPTR_STKPTR1_MASK                                0x2
#define _STKPTR_STKPTR2_POSN                                0x2
#define _STKPTR_STKPTR2_POSITION                            0x2
#define _STKPTR_STKPTR2_SIZE                                0x1
#define _STKPTR_STKPTR2_LENGTH                              0x1
#define _STKPTR_STKPTR2_MASK                                0x4
#define _STKPTR_STKPTR3_POSN                                0x3
#define _STKPTR_STKPTR3_POSITION                            0x3
#define _STKPTR_STKPTR3_SIZE                                0x1
#define _STKPTR_STKPTR3_LENGTH                              0x1
#define _STKPTR_STKPTR3_MASK                                0x8
#define _STKPTR_STKPTR4_POSN                                0x4
#define _STKPTR_STKPTR4_POSITION                            0x4
#define _STKPTR_STKPTR4_SIZE                                0x1
#define _STKPTR_STKPTR4_LENGTH                              0x1
#define _STKPTR_STKPTR4_MASK                                0x10
#define _STKPTR_STKOVF_POSN                                 0x7
#define _STKPTR_STKOVF_POSITION                             0x7
#define _STKPTR_STKOVF_SIZE                                 0x1
#define _STKPTR_STKOVF_LENGTH                               0x1
#define _STKPTR_STKOVF_MASK                                 0x80

// Register: TOS
#define TOS TOS
#ifndef __CCI__
extern volatile __uint24                TOS                 __at(0xFFD);
#endif
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0xFFD);
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0xFFE);
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif

// Register: TOSU
#define TOSU TOSU
extern volatile unsigned char           TOSU                __at(0xFFF);
#ifndef _LIB_BUILD
asm("TOSU equ 0FFFh");
#endif

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&0FFh)
#endif
#define _BIT_ACCESS(r,b) ___mkstr(BANKMASK(r)) "," ___mkstr(b)
#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr)&0FFFFFh)
#endif
// BAUDCON<ABDEN>
extern volatile __bit                   ABDEN               __at(0x7D50);	// @ (0xFAA * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON,0)
// BAUDCON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x7D57);	// @ (0xFAA * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON,7)
// ADCON0<ACMOD0>
extern volatile __bit                   ACMOD0              __at(0x7E12);	// @ (0xFC2 * 8 + 2)
#define                                 ACMOD0_bit          _BIT_ACCESS(ADCON0,2)
// ADCON0<ACMOD1>
extern volatile __bit                   ACMOD1              __at(0x7E13);	// @ (0xFC2 * 8 + 3)
#define                                 ACMOD1_bit          _BIT_ACCESS(ADCON0,3)
// ADCON0<ACONV>
extern volatile __bit                   ACONV               __at(0x7E15);	// @ (0xFC2 * 8 + 5)
#define                                 ACONV_bit           _BIT_ACCESS(ADCON0,5)
// ADCON2<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 ACQT0_bit           _BIT_ACCESS(ADCON2,3)
// ADCON2<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E04);	// @ (0xFC0 * 8 + 4)
#define                                 ACQT1_bit           _BIT_ACCESS(ADCON2,4)
// ADCON2<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ACQT2_bit           _BIT_ACCESS(ADCON2,5)
// ADCON2<ACQT3>
extern volatile __bit                   ACQT3               __at(0x7E06);	// @ (0xFC0 * 8 + 6)
#define                                 ACQT3_bit           _BIT_ACCESS(ADCON2,6)
// ADCON0<ACSCH>
extern volatile __bit                   ACSCH               __at(0x7E14);	// @ (0xFC2 * 8 + 4)
#define                                 ACSCH_bit           _BIT_ACCESS(ADCON0,4)
// ADCON2<ADCS0>
extern volatile __bit                   ADCS0               __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON2,0)
// ADCON2<ADCS1>
extern volatile __bit                   ADCS1               __at(0x7E01);	// @ (0xFC0 * 8 + 1)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON2,1)
// ADCON2<ADCS2>
extern volatile __bit                   ADCS2               __at(0x7E02);	// @ (0xFC0 * 8 + 2)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON2,2)
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
// RCSTA<ADEN>
extern volatile __bit                   ADEN                __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADEN_bit            _BIT_ACCESS(RCSTA,3)
// ADCON2<ADFM>
extern volatile __bit                   ADFM                __at(0x7E07);	// @ (0xFC0 * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON2,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x7CEE);	// @ (0xF9D * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x7CF6);	// @ (0xF9E * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// IPR1<ADIP>
extern volatile __bit                   ADIP                __at(0x7CFE);	// @ (0xF9F * 8 + 6)
#define                                 ADIP_bit            _BIT_ACCESS(IPR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x7E10);	// @ (0xFC2 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON1<ADPNT0>
extern volatile __bit                   ADPNT0              __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 ADPNT0_bit          _BIT_ACCESS(ADCON1,0)
// ADCON1<ADPNT1>
extern volatile __bit                   ADPNT1              __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 ADPNT1_bit          _BIT_ACCESS(ADCON1,1)
// ADCON3<ADRS0>
extern volatile __bit                   ADRS0               __at(0x7CD6);	// @ (0xF9A * 8 + 6)
#define                                 ADRS0_bit           _BIT_ACCESS(ADCON3,6)
// ADCON3<ADRS1>
extern volatile __bit                   ADRS1               __at(0x7CD7);	// @ (0xF9A * 8 + 7)
#define                                 ADRS1_bit           _BIT_ACCESS(ADCON3,7)
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,4)
// ANSEL0<ANS0>
extern volatile __bit                   ANS0                __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 ANS0_bit            _BIT_ACCESS(ANSEL0,0)
// ANSEL0<ANS1>
extern volatile __bit                   ANS1                __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 ANS1_bit            _BIT_ACCESS(ANSEL0,1)
// ANSEL0<ANS2>
extern volatile __bit                   ANS2                __at(0x7DC2);	// @ (0xFB8 * 8 + 2)
#define                                 ANS2_bit            _BIT_ACCESS(ANSEL0,2)
// ANSEL0<ANS3>
extern volatile __bit                   ANS3                __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL0,3)
// ANSEL0<ANS4>
extern volatile __bit                   ANS4                __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 ANS4_bit            _BIT_ACCESS(ANSEL0,4)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// ADCON1<BFEMT>
extern volatile __bit                   BFEMT               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 BFEMT_bit           _BIT_ACCESS(ADCON1,3)
// ADCON1<BFOVFL>
extern volatile __bit                   BFOVFL              __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 BFOVFL_bit          _BIT_ACCESS(ADCON1,2)
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             _BIT_ACCESS(RCON,0)
// FLTCONFIG<BRFEN>
extern volatile __bit                   BRFEN               __at(0x7B67);	// @ (0xF6C * 8 + 7)
#define                                 BRFEN_bit           _BIT_ACCESS(FLTCONFIG,7)
// BAUDCON<BRG16>
extern volatile __bit                   BRG16               __at(0x7D53);	// @ (0xFAA * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON,3)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// TXSTA<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH1_bit           _BIT_ACCESS(TXSTA,2)
// CAP1CON<CAP1M0>
extern volatile __bit                   CAP1M0              __at(0x7B18);	// @ (0xF63 * 8 + 0)
#define                                 CAP1M0_bit          _BIT_ACCESS(CAP1CON,0)
// CAP1CON<CAP1M1>
extern volatile __bit                   CAP1M1              __at(0x7B19);	// @ (0xF63 * 8 + 1)
#define                                 CAP1M1_bit          _BIT_ACCESS(CAP1CON,1)
// CAP1CON<CAP1M2>
extern volatile __bit                   CAP1M2              __at(0x7B1A);	// @ (0xF63 * 8 + 2)
#define                                 CAP1M2_bit          _BIT_ACCESS(CAP1CON,2)
// CAP1CON<CAP1M3>
extern volatile __bit                   CAP1M3              __at(0x7B1B);	// @ (0xF63 * 8 + 3)
#define                                 CAP1M3_bit          _BIT_ACCESS(CAP1CON,3)
// CAP1CON<CAP1REN>
extern volatile __bit                   CAP1REN             __at(0x7B1E);	// @ (0xF63 * 8 + 6)
#define                                 CAP1REN_bit         _BIT_ACCESS(CAP1CON,6)
// CAP1CON<CAP1TMR>
extern volatile __bit                   CAP1TMR             __at(0x7B1D);	// @ (0xF63 * 8 + 5)
#define                                 CAP1TMR_bit         _BIT_ACCESS(CAP1CON,5)
// CAP2CON<CAP2M0>
extern volatile __bit                   CAP2M0              __at(0x7B10);	// @ (0xF62 * 8 + 0)
#define                                 CAP2M0_bit          _BIT_ACCESS(CAP2CON,0)
// CAP2CON<CAP2M1>
extern volatile __bit                   CAP2M1              __at(0x7B11);	// @ (0xF62 * 8 + 1)
#define                                 CAP2M1_bit          _BIT_ACCESS(CAP2CON,1)
// CAP2CON<CAP2M2>
extern volatile __bit                   CAP2M2              __at(0x7B12);	// @ (0xF62 * 8 + 2)
#define                                 CAP2M2_bit          _BIT_ACCESS(CAP2CON,2)
// CAP2CON<CAP2M3>
extern volatile __bit                   CAP2M3              __at(0x7B13);	// @ (0xF62 * 8 + 3)
#define                                 CAP2M3_bit          _BIT_ACCESS(CAP2CON,3)
// CAP2CON<CAP2REN>
extern volatile __bit                   CAP2REN             __at(0x7B16);	// @ (0xF62 * 8 + 6)
#define                                 CAP2REN_bit         _BIT_ACCESS(CAP2CON,6)
// CAP2CON<CAP2TMR>
extern volatile __bit                   CAP2TMR             __at(0x7B15);	// @ (0xF62 * 8 + 5)
#define                                 CAP2TMR_bit         _BIT_ACCESS(CAP2CON,5)
// CAP3CON<CAP3M0>
extern volatile __bit                   CAP3M0              __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 CAP3M0_bit          _BIT_ACCESS(CAP3CON,0)
// CAP3CON<CAP3M1>
extern volatile __bit                   CAP3M1              __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 CAP3M1_bit          _BIT_ACCESS(CAP3CON,1)
// CAP3CON<CAP3M2>
extern volatile __bit                   CAP3M2              __at(0x7B0A);	// @ (0xF61 * 8 + 2)
#define                                 CAP3M2_bit          _BIT_ACCESS(CAP3CON,2)
// CAP3CON<CAP3M3>
extern volatile __bit                   CAP3M3              __at(0x7B0B);	// @ (0xF61 * 8 + 3)
#define                                 CAP3M3_bit          _BIT_ACCESS(CAP3CON,3)
// CAP3CON<CAP3REN>
extern volatile __bit                   CAP3REN             __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 CAP3REN_bit         _BIT_ACCESS(CAP3CON,6)
// CAP3CON<CAP3TMR>
extern volatile __bit                   CAP3TMR             __at(0x7B0D);	// @ (0xF61 * 8 + 5)
#define                                 CAP3TMR_bit         _BIT_ACCESS(CAP3CON,5)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x7CEA);	// @ (0xF9D * 8 + 2)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x7CF2);	// @ (0xF9E * 8 + 2)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,2)
// IPR1<CCP1IP>
extern volatile __bit                   CCP1IP              __at(0x7CFA);	// @ (0xF9F * 8 + 2)
#define                                 CCP1IP_bit          _BIT_ACCESS(IPR1,2)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0x7DE8);	// @ (0xFBD * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0x7DE9);	// @ (0xFBD * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0x7DEA);	// @ (0xFBD * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0x7DEB);	// @ (0xFBD * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// CCP1CON<CCP1X>
extern volatile __bit                   CCP1X               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 CCP1X_bit           _BIT_ACCESS(CCP1CON,5)
// CCP1CON<CCP1Y>
extern volatile __bit                   CCP1Y               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 CCP1Y_bit           _BIT_ACCESS(CCP1CON,4)
// PORTC<CCP2>
extern volatile __bit                   CCP2                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 CCP2_bit            _BIT_ACCESS(PORTC,1)
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x7D00);	// @ (0xFA0 * 8 + 0)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x7D08);	// @ (0xFA1 * 8 + 0)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR2,0)
// IPR2<CCP2IP>
extern volatile __bit                   CCP2IP              __at(0x7D10);	// @ (0xFA2 * 8 + 0)
#define                                 CCP2IP_bit          _BIT_ACCESS(IPR2,0)
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0x7DD0);	// @ (0xFBA * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x7DD1);	// @ (0xFBA * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x7DD2);	// @ (0xFBA * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x7DD3);	// @ (0xFBA * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// CCP2CON<CCP2X>
extern volatile __bit                   CCP2X               __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 CCP2X_bit           _BIT_ACCESS(CCP2CON,5)
// CCP2CON<CCP2Y>
extern volatile __bit                   CCP2Y               __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 CCP2Y_bit           _BIT_ACCESS(CCP2CON,4)
// PORTB<CCP2_PA2>
extern volatile __bit                   CCP2_PA2            __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CCP2_PA2_bit        _BIT_ACCESS(PORTB,3)
// PORTE<CCP9E>
extern volatile __bit                   CCP9E               __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 CCP9E_bit           _BIT_ACCESS(PORTE,3)
// EECON1<CFGS>
extern volatile __bit                   CFGS                __at(0x7D36);	// @ (0xFA6 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(EECON1,6)
// ADCON1<CHSN3>
extern volatile __bit                   CHSN3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 CHSN3_bit           _BIT_ACCESS(ADCON1,3)
// PORTC<CK>
extern volatile __bit                   CK                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK_bit              _BIT_ACCESS(PORTC,6)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON<CKP>
extern volatile __bit                   CKP                 __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON,4)
// PORTA<CLKI>
extern volatile __bit                   CLKI                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 CLKI_bit            _BIT_ACCESS(PORTA,7)
// PORTA<CLKO>
extern volatile __bit                   CLKO                __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 CLKO_bit            _BIT_ACCESS(PORTA,6)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// TXSTA<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA,7)
// SSPSTAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSPSTAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x7EC1);	// @ (0xFD8 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// QEICON<DOWN>
extern volatile __bit                   DOWN                __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 DOWN_bit            _BIT_ACCESS(QEICON,5)
// PORTC<DT>
extern volatile __bit                   DT                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT_bit              _BIT_ACCESS(PORTC,7)
// DTCON<DT0>
extern volatile __bit                   DT0                 __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 DT0_bit             _BIT_ACCESS(DTCON,0)
// DTCON<DT1>
extern volatile __bit                   DT1                 __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 DT1_bit             _BIT_ACCESS(DTCON,1)
// DTCON<DT2>
extern volatile __bit                   DT2                 __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 DT2_bit             _BIT_ACCESS(DTCON,2)
// DTCON<DT3>
extern volatile __bit                   DT3                 __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 DT3_bit             _BIT_ACCESS(DTCON,3)
// DTCON<DT4>
extern volatile __bit                   DT4                 __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 DT4_bit             _BIT_ACCESS(DTCON,4)
// DTCON<DT5>
extern volatile __bit                   DT5                 __at(0x7B6D);	// @ (0xF6D * 8 + 5)
#define                                 DT5_bit             _BIT_ACCESS(DTCON,5)
// DTCON<DTA0>
extern volatile __bit                   DTA0                __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 DTA0_bit            _BIT_ACCESS(DTCON,0)
// DTCON<DTA1>
extern volatile __bit                   DTA1                __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 DTA1_bit            _BIT_ACCESS(DTCON,1)
// DTCON<DTA2>
extern volatile __bit                   DTA2                __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 DTA2_bit            _BIT_ACCESS(DTCON,2)
// DTCON<DTA3>
extern volatile __bit                   DTA3                __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 DTA3_bit            _BIT_ACCESS(DTCON,3)
// DTCON<DTA4>
extern volatile __bit                   DTA4                __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 DTA4_bit            _BIT_ACCESS(DTCON,4)
// DTCON<DTA5>
extern volatile __bit                   DTA5                __at(0x7B6D);	// @ (0xF6D * 8 + 5)
#define                                 DTA5_bit            _BIT_ACCESS(DTCON,5)
// DTCON<DTAPS0>
extern volatile __bit                   DTAPS0              __at(0x7B6E);	// @ (0xF6D * 8 + 6)
#define                                 DTAPS0_bit          _BIT_ACCESS(DTCON,6)
// DTCON<DTAPS1>
extern volatile __bit                   DTAPS1              __at(0x7B6F);	// @ (0xF6D * 8 + 7)
#define                                 DTAPS1_bit          _BIT_ACCESS(DTCON,7)
// DTCON<DTPS0>
extern volatile __bit                   DTPS0               __at(0x7B6E);	// @ (0xF6D * 8 + 6)
#define                                 DTPS0_bit           _BIT_ACCESS(DTCON,6)
// DTCON<DTPS1>
extern volatile __bit                   DTPS1               __at(0x7B6F);	// @ (0xF6D * 8 + 7)
#define                                 DTPS1_bit           _BIT_ACCESS(DTCON,7)
// SSPSTAT<D_A>
extern volatile __bit                   D_A                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<D_NOT_A>
extern volatile __bit                   D_NOT_A             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_NOT_A_bit         _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// PR2<EBDIS>
extern volatile __bit                   EBDIS               __at(0x7E5F);	// @ (0xFCB * 8 + 7)
#define                                 EBDIS_bit           _BIT_ACCESS(_PR2,7)  // Note: Changed by MikroE
// EECON1<EEFS>
extern volatile __bit                   EEFS                __at(0x7D36);	// @ (0xFA6 * 8 + 6)
#define                                 EEFS_bit            _BIT_ACCESS(EECON1,6)
// PIE2<EEIE>
extern volatile __bit                   EEIE                __at(0x7D04);	// @ (0xFA0 * 8 + 4)
#define                                 EEIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<EEIF>
extern volatile __bit                   EEIF                __at(0x7D0C);	// @ (0xFA1 * 8 + 4)
#define                                 EEIF_bit            _BIT_ACCESS(PIR2,4)
// IPR2<EEIP>
extern volatile __bit                   EEIP                __at(0x7D14);	// @ (0xFA2 * 8 + 4)
#define                                 EEIP_bit            _BIT_ACCESS(IPR2,4)
// EECON1<EEPGD>
extern volatile __bit                   EEPGD               __at(0x7D37);	// @ (0xFA6 * 8 + 7)
#define                                 EEPGD_bit           _BIT_ACCESS(EECON1,7)
// QEICON<ERROR>
extern volatile __bit                   ERROR               __at(0x7DB6);	// @ (0xFB6 * 8 + 6)
#define                                 ERROR_bit           _BIT_ACCESS(QEICON,6)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// ADCON1<FFOVFL>
extern volatile __bit                   FFOVFL              __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 FFOVFL_bit          _BIT_ACCESS(ADCON1,2)
// ADCON1<FIFOEN>
extern volatile __bit                   FIFOEN              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 FIFOEN_bit          _BIT_ACCESS(ADCON1,4)
// DFLTCON<FLT1EN>
extern volatile __bit                   FLT1EN              __at(0x7B03);	// @ (0xF60 * 8 + 3)
#define                                 FLT1EN_bit          _BIT_ACCESS(DFLTCON,3)
// DFLTCON<FLT2EN>
extern volatile __bit                   FLT2EN              __at(0x7B04);	// @ (0xF60 * 8 + 4)
#define                                 FLT2EN_bit          _BIT_ACCESS(DFLTCON,4)
// DFLTCON<FLT3EN>
extern volatile __bit                   FLT3EN              __at(0x7B05);	// @ (0xF60 * 8 + 5)
#define                                 FLT3EN_bit          _BIT_ACCESS(DFLTCON,5)
// DFLTCON<FLT4EN>
extern volatile __bit                   FLT4EN              __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 FLT4EN_bit          _BIT_ACCESS(DFLTCON,6)
// PORTC<FLTA>
extern volatile __bit                   FLTA                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 FLTA_bit            _BIT_ACCESS(PORTC,1)
// FLTCONFIG<FLTAEN>
extern volatile __bit                   FLTAEN              __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 FLTAEN_bit          _BIT_ACCESS(FLTCONFIG,0)
// FLTCONFIG<FLTAMOD>
extern volatile __bit                   FLTAMOD             __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 FLTAMOD_bit         _BIT_ACCESS(FLTCONFIG,1)
// FLTCONFIG<FLTAS>
extern volatile __bit                   FLTAS               __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 FLTAS_bit           _BIT_ACCESS(FLTCONFIG,2)
// PORTC<FLTB>
extern volatile __bit                   FLTB                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 FLTB_bit            _BIT_ACCESS(PORTC,2)
// FLTCONFIG<FLTBEN>
extern volatile __bit                   FLTBEN              __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 FLTBEN_bit          _BIT_ACCESS(FLTCONFIG,4)
// FLTCONFIG<FLTBMOD>
extern volatile __bit                   FLTBMOD             __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 FLTBMOD_bit         _BIT_ACCESS(FLTCONFIG,5)
// FLTCONFIG<FLTBS>
extern volatile __bit                   FLTBS               __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 FLTBS_bit           _BIT_ACCESS(FLTCONFIG,6)
// DFLTCON<FLTCK0>
extern volatile __bit                   FLTCK0              __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 FLTCK0_bit          _BIT_ACCESS(DFLTCON,0)
// DFLTCON<FLTCK1>
extern volatile __bit                   FLTCK1              __at(0x7B01);	// @ (0xF60 * 8 + 1)
#define                                 FLTCK1_bit          _BIT_ACCESS(DFLTCON,1)
// DFLTCON<FLTCK2>
extern volatile __bit                   FLTCK2              __at(0x7B02);	// @ (0xF60 * 8 + 2)
#define                                 FLTCK2_bit          _BIT_ACCESS(DFLTCON,2)
// FLTCONFIG<FLTCON>
extern volatile __bit                   FLTCON              __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 FLTCON_bit          _BIT_ACCESS(FLTCONFIG,3)
// OSCCON<FLTS>
extern volatile __bit                   FLTS                __at(0x7E9A);	// @ (0xFD3 * 8 + 2)
#define                                 FLTS_bit            _BIT_ACCESS(OSCCON,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// ADCHS<GASEL0>
extern volatile __bit                   GASEL0              __at(0x7CC8);	// @ (0xF99 * 8 + 0)
#define                                 GASEL0_bit          _BIT_ACCESS(ADCHS,0)
// ADCHS<GASEL1>
extern volatile __bit                   GASEL1              __at(0x7CC9);	// @ (0xF99 * 8 + 1)
#define                                 GASEL1_bit          _BIT_ACCESS(ADCHS,1)
// ADCHS<GBSEL0>
extern volatile __bit                   GBSEL0              __at(0x7CCC);	// @ (0xF99 * 8 + 4)
#define                                 GBSEL0_bit          _BIT_ACCESS(ADCHS,4)
// ADCHS<GBSEL1>
extern volatile __bit                   GBSEL1              __at(0x7CCD);	// @ (0xF99 * 8 + 5)
#define                                 GBSEL1_bit          _BIT_ACCESS(ADCHS,5)
// ADCHS<GCSEL0>
extern volatile __bit                   GCSEL0              __at(0x7CCA);	// @ (0xF99 * 8 + 2)
#define                                 GCSEL0_bit          _BIT_ACCESS(ADCHS,2)
// ADCHS<GCSEL1>
extern volatile __bit                   GCSEL1              __at(0x7CCB);	// @ (0xF99 * 8 + 3)
#define                                 GCSEL1_bit          _BIT_ACCESS(ADCHS,3)
// ADCHS<GDSEL0>
extern volatile __bit                   GDSEL0              __at(0x7CCE);	// @ (0xF99 * 8 + 6)
#define                                 GDSEL0_bit          _BIT_ACCESS(ADCHS,6)
// ADCHS<GDSEL1>
extern volatile __bit                   GDSEL1              __at(0x7CCF);	// @ (0xF99 * 8 + 7)
#define                                 GDSEL1_bit          _BIT_ACCESS(ADCHS,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// INTCON<GIEH>
extern volatile __bit                   GIEH                __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIEH_bit            _BIT_ACCESS(INTCON,7)
// INTCON<GIEL>
extern volatile __bit                   GIEL                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 GIEL_bit            _BIT_ACCESS(INTCON,6)
// INTCON<GIE_GIEH>
extern volatile __bit                   GIE_GIEH            __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIE_GIEH_bit        _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GODONE>
extern volatile __bit                   GODONE              __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GODONE_bit          _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_NOT_DONE>
extern volatile __bit                   GO_NOT_DONE         __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_NOT_DONE_bit     _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// PIE3<IC1IE>
extern volatile __bit                   IC1IE               __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 IC1IE_bit           _BIT_ACCESS(PIE3,1)
// PIR3<IC1IF>
extern volatile __bit                   IC1IF               __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 IC1IF_bit           _BIT_ACCESS(PIR3,1)
// IPR3<IC1IP>
extern volatile __bit                   IC1IP               __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 IC1IP_bit           _BIT_ACCESS(IPR3,1)
// PIE3<IC2QEIE>
extern volatile __bit                   IC2QEIE             __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 IC2QEIE_bit         _BIT_ACCESS(PIE3,2)
// PIR3<IC2QEIF>
extern volatile __bit                   IC2QEIF             __at(0x7D22);	// @ (0xFA4 * 8 + 2)
#define                                 IC2QEIF_bit         _BIT_ACCESS(PIR3,2)
// IPR3<IC2QEIP>
extern volatile __bit                   IC2QEIP             __at(0x7D2A);	// @ (0xFA5 * 8 + 2)
#define                                 IC2QEIP_bit         _BIT_ACCESS(IPR3,2)
// PIE3<IC3DRIE>
extern volatile __bit                   IC3DRIE             __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 IC3DRIE_bit         _BIT_ACCESS(PIE3,3)
// PIR3<IC3DRIF>
extern volatile __bit                   IC3DRIF             __at(0x7D23);	// @ (0xFA4 * 8 + 3)
#define                                 IC3DRIF_bit         _BIT_ACCESS(PIR3,3)
// IPR3<IC3DRIP>
extern volatile __bit                   IC3DRIP             __at(0x7D2B);	// @ (0xFA5 * 8 + 3)
#define                                 IC3DRIP_bit         _BIT_ACCESS(IPR3,3)
// OSCCON<IDLEN>
extern volatile __bit                   IDLEN               __at(0x7E9F);	// @ (0xFD3 * 8 + 7)
#define                                 IDLEN_bit           _BIT_ACCESS(OSCCON,7)
// PORTC<INT0>
extern volatile __bit                   INT0                __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 INT0_bit            _BIT_ACCESS(PORTC,3)
// INTCON<INT0E>
extern volatile __bit                   INT0E               __at(0x7F94);	// @ (0xFF2 * 8 + 4)
#define                                 INT0E_bit           _BIT_ACCESS(INTCON,4)
// INTCON<INT0F>
extern volatile __bit                   INT0F               __at(0x7F91);	// @ (0xFF2 * 8 + 1)
#define                                 INT0F_bit           _BIT_ACCESS(INTCON,1)
// INTCON<INT0IE>
extern volatile __bit                   INT0IE              __at(0x7F94);	// @ (0xFF2 * 8 + 4)
#define                                 INT0IE_bit          _BIT_ACCESS(INTCON,4)
// INTCON<INT0IF>
extern volatile __bit                   INT0IF              __at(0x7F91);	// @ (0xFF2 * 8 + 1)
#define                                 INT0IF_bit          _BIT_ACCESS(INTCON,1)
// PORTC<INT1>
extern volatile __bit                   INT1                __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 INT1_bit            _BIT_ACCESS(PORTC,4)
// INTCON3<INT1E>
extern volatile __bit                   INT1E               __at(0x7F83);	// @ (0xFF0 * 8 + 3)
#define                                 INT1E_bit           _BIT_ACCESS(INTCON3,3)
// INTCON3<INT1F>
extern volatile __bit                   INT1F               __at(0x7F80);	// @ (0xFF0 * 8 + 0)
#define                                 INT1F_bit           _BIT_ACCESS(INTCON3,0)
// INTCON3<INT1IE>
extern volatile __bit                   INT1IE              __at(0x7F83);	// @ (0xFF0 * 8 + 3)
#define                                 INT1IE_bit          _BIT_ACCESS(INTCON3,3)
// INTCON3<INT1IF>
extern volatile __bit                   INT1IF              __at(0x7F80);	// @ (0xFF0 * 8 + 0)
#define                                 INT1IF_bit          _BIT_ACCESS(INTCON3,0)
// INTCON3<INT1IP>
extern volatile __bit                   INT1IP              __at(0x7F86);	// @ (0xFF0 * 8 + 6)
#define                                 INT1IP_bit          _BIT_ACCESS(INTCON3,6)
// INTCON3<INT1P>
extern volatile __bit                   INT1P               __at(0x7F86);	// @ (0xFF0 * 8 + 6)
#define                                 INT1P_bit           _BIT_ACCESS(INTCON3,6)
// PORTC<INT2>
extern volatile __bit                   INT2                __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 INT2_bit            _BIT_ACCESS(PORTC,5)
// INTCON3<INT2E>
extern volatile __bit                   INT2E               __at(0x7F84);	// @ (0xFF0 * 8 + 4)
#define                                 INT2E_bit           _BIT_ACCESS(INTCON3,4)
// INTCON3<INT2F>
extern volatile __bit                   INT2F               __at(0x7F81);	// @ (0xFF0 * 8 + 1)
#define                                 INT2F_bit           _BIT_ACCESS(INTCON3,1)
// INTCON3<INT2IE>
extern volatile __bit                   INT2IE              __at(0x7F84);	// @ (0xFF0 * 8 + 4)
#define                                 INT2IE_bit          _BIT_ACCESS(INTCON3,4)
// INTCON3<INT2IF>
extern volatile __bit                   INT2IF              __at(0x7F81);	// @ (0xFF0 * 8 + 1)
#define                                 INT2IF_bit          _BIT_ACCESS(INTCON3,1)
// INTCON3<INT2IP>
extern volatile __bit                   INT2IP              __at(0x7F87);	// @ (0xFF0 * 8 + 7)
#define                                 INT2IP_bit          _BIT_ACCESS(INTCON3,7)
// INTCON3<INT2P>
extern volatile __bit                   INT2P               __at(0x7F87);	// @ (0xFF0 * 8 + 7)
#define                                 INT2P_bit           _BIT_ACCESS(INTCON3,7)
// INTCON2<INTEDG0>
extern volatile __bit                   INTEDG0             __at(0x7F8E);	// @ (0xFF1 * 8 + 6)
#define                                 INTEDG0_bit         _BIT_ACCESS(INTCON2,6)
// INTCON2<INTEDG1>
extern volatile __bit                   INTEDG1             __at(0x7F8D);	// @ (0xFF1 * 8 + 5)
#define                                 INTEDG1_bit         _BIT_ACCESS(INTCON2,5)
// INTCON2<INTEDG2>
extern volatile __bit                   INTEDG2             __at(0x7F8C);	// @ (0xFF1 * 8 + 4)
#define                                 INTEDG2_bit         _BIT_ACCESS(INTCON2,4)
// OSCCON<IOFS>
extern volatile __bit                   IOFS                __at(0x7E9A);	// @ (0xFD3 * 8 + 2)
#define                                 IOFS_bit            _BIT_ACCESS(OSCCON,2)
// RCON<IPEN>
extern volatile __bit                   IPEN                __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 IPEN_bit            _BIT_ACCESS(RCON,7)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x7E9C);	// @ (0xFD3 * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x7E9D);	// @ (0xFD3 * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x7E9E);	// @ (0xFD3 * 8 + 6)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,6)
// LVDCON<IRVST>
extern volatile __bit                   IRVST               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 IRVST_bit           _BIT_ACCESS(LVDCON,5)
// LVDCON<IVRST>
extern volatile __bit                   IVRST               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 IVRST_bit           _BIT_ACCESS(LVDCON,5)
// LATA<LA0>
extern volatile __bit                   LA0                 __at(0x7C48);	// @ (0xF89 * 8 + 0)
#define                                 LA0_bit             _BIT_ACCESS(LATA,0)
// LATA<LA1>
extern volatile __bit                   LA1                 __at(0x7C49);	// @ (0xF89 * 8 + 1)
#define                                 LA1_bit             _BIT_ACCESS(LATA,1)
// LATA<LA2>
extern volatile __bit                   LA2                 __at(0x7C4A);	// @ (0xF89 * 8 + 2)
#define                                 LA2_bit             _BIT_ACCESS(LATA,2)
// LATA<LA3>
extern volatile __bit                   LA3                 __at(0x7C4B);	// @ (0xF89 * 8 + 3)
#define                                 LA3_bit             _BIT_ACCESS(LATA,3)
// LATA<LA4>
extern volatile __bit                   LA4                 __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LA4_bit             _BIT_ACCESS(LATA,4)
// LATA<LA6>
extern volatile __bit                   LA6                 __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 LA6_bit             _BIT_ACCESS(LATA,6)
// LATA<LA7>
extern volatile __bit                   LA7                 __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 LA7_bit             _BIT_ACCESS(LATA,7)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x7C48);	// @ (0xF89 * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x7C49);	// @ (0xF89 * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x7C4A);	// @ (0xF89 * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// LATA<LATA3>
extern volatile __bit                   LATA3               __at(0x7C4B);	// @ (0xF89 * 8 + 3)
#define                                 LATA3_bit           _BIT_ACCESS(LATA,3)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA6>
extern volatile __bit                   LATA6               __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 LATA6_bit           _BIT_ACCESS(LATA,6)
// LATA<LATA7>
extern volatile __bit                   LATA7               __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 LATA7_bit           _BIT_ACCESS(LATA,7)
// LATB<LATB0>
extern volatile __bit                   LATB0               __at(0x7C50);	// @ (0xF8A * 8 + 0)
#define                                 LATB0_bit           _BIT_ACCESS(LATB,0)
// LATB<LATB1>
extern volatile __bit                   LATB1               __at(0x7C51);	// @ (0xF8A * 8 + 1)
#define                                 LATB1_bit           _BIT_ACCESS(LATB,1)
// LATB<LATB2>
extern volatile __bit                   LATB2               __at(0x7C52);	// @ (0xF8A * 8 + 2)
#define                                 LATB2_bit           _BIT_ACCESS(LATB,2)
// LATB<LATB3>
extern volatile __bit                   LATB3               __at(0x7C53);	// @ (0xF8A * 8 + 3)
#define                                 LATB3_bit           _BIT_ACCESS(LATB,3)
// LATB<LATB4>
extern volatile __bit                   LATB4               __at(0x7C54);	// @ (0xF8A * 8 + 4)
#define                                 LATB4_bit           _BIT_ACCESS(LATB,4)
// LATB<LATB5>
extern volatile __bit                   LATB5               __at(0x7C55);	// @ (0xF8A * 8 + 5)
#define                                 LATB5_bit           _BIT_ACCESS(LATB,5)
// LATB<LATB6>
extern volatile __bit                   LATB6               __at(0x7C56);	// @ (0xF8A * 8 + 6)
#define                                 LATB6_bit           _BIT_ACCESS(LATB,6)
// LATB<LATB7>
extern volatile __bit                   LATB7               __at(0x7C57);	// @ (0xF8A * 8 + 7)
#define                                 LATB7_bit           _BIT_ACCESS(LATB,7)
// LATC<LATC0>
extern volatile __bit                   LATC0               __at(0x7C58);	// @ (0xF8B * 8 + 0)
#define                                 LATC0_bit           _BIT_ACCESS(LATC,0)
// LATC<LATC1>
extern volatile __bit                   LATC1               __at(0x7C59);	// @ (0xF8B * 8 + 1)
#define                                 LATC1_bit           _BIT_ACCESS(LATC,1)
// LATC<LATC2>
extern volatile __bit                   LATC2               __at(0x7C5A);	// @ (0xF8B * 8 + 2)
#define                                 LATC2_bit           _BIT_ACCESS(LATC,2)
// LATC<LATC3>
extern volatile __bit                   LATC3               __at(0x7C5B);	// @ (0xF8B * 8 + 3)
#define                                 LATC3_bit           _BIT_ACCESS(LATC,3)
// LATC<LATC4>
extern volatile __bit                   LATC4               __at(0x7C5C);	// @ (0xF8B * 8 + 4)
#define                                 LATC4_bit           _BIT_ACCESS(LATC,4)
// LATC<LATC5>
extern volatile __bit                   LATC5               __at(0x7C5D);	// @ (0xF8B * 8 + 5)
#define                                 LATC5_bit           _BIT_ACCESS(LATC,5)
// LATC<LATC6>
extern volatile __bit                   LATC6               __at(0x7C5E);	// @ (0xF8B * 8 + 6)
#define                                 LATC6_bit           _BIT_ACCESS(LATC,6)
// LATC<LATC7>
extern volatile __bit                   LATC7               __at(0x7C5F);	// @ (0xF8B * 8 + 7)
#define                                 LATC7_bit           _BIT_ACCESS(LATC,7)
// LATB<LB0>
extern volatile __bit                   LB0                 __at(0x7C50);	// @ (0xF8A * 8 + 0)
#define                                 LB0_bit             _BIT_ACCESS(LATB,0)
// LATB<LB1>
extern volatile __bit                   LB1                 __at(0x7C51);	// @ (0xF8A * 8 + 1)
#define                                 LB1_bit             _BIT_ACCESS(LATB,1)
// LATB<LB2>
extern volatile __bit                   LB2                 __at(0x7C52);	// @ (0xF8A * 8 + 2)
#define                                 LB2_bit             _BIT_ACCESS(LATB,2)
// LATB<LB3>
extern volatile __bit                   LB3                 __at(0x7C53);	// @ (0xF8A * 8 + 3)
#define                                 LB3_bit             _BIT_ACCESS(LATB,3)
// LATB<LB4>
extern volatile __bit                   LB4                 __at(0x7C54);	// @ (0xF8A * 8 + 4)
#define                                 LB4_bit             _BIT_ACCESS(LATB,4)
// LATB<LB5>
extern volatile __bit                   LB5                 __at(0x7C55);	// @ (0xF8A * 8 + 5)
#define                                 LB5_bit             _BIT_ACCESS(LATB,5)
// LATB<LB6>
extern volatile __bit                   LB6                 __at(0x7C56);	// @ (0xF8A * 8 + 6)
#define                                 LB6_bit             _BIT_ACCESS(LATB,6)
// LATB<LB7>
extern volatile __bit                   LB7                 __at(0x7C57);	// @ (0xF8A * 8 + 7)
#define                                 LB7_bit             _BIT_ACCESS(LATB,7)
// LATC<LC0>
extern volatile __bit                   LC0                 __at(0x7C58);	// @ (0xF8B * 8 + 0)
#define                                 LC0_bit             _BIT_ACCESS(LATC,0)
// LATC<LC1>
extern volatile __bit                   LC1                 __at(0x7C59);	// @ (0xF8B * 8 + 1)
#define                                 LC1_bit             _BIT_ACCESS(LATC,1)
// LATC<LC2>
extern volatile __bit                   LC2                 __at(0x7C5A);	// @ (0xF8B * 8 + 2)
#define                                 LC2_bit             _BIT_ACCESS(LATC,2)
// LATC<LC3>
extern volatile __bit                   LC3                 __at(0x7C5B);	// @ (0xF8B * 8 + 3)
#define                                 LC3_bit             _BIT_ACCESS(LATC,3)
// LATC<LC4>
extern volatile __bit                   LC4                 __at(0x7C5C);	// @ (0xF8B * 8 + 4)
#define                                 LC4_bit             _BIT_ACCESS(LATC,4)
// LATC<LC5>
extern volatile __bit                   LC5                 __at(0x7C5D);	// @ (0xF8B * 8 + 5)
#define                                 LC5_bit             _BIT_ACCESS(LATC,5)
// LATC<LC6>
extern volatile __bit                   LC6                 __at(0x7C5E);	// @ (0xF8B * 8 + 6)
#define                                 LC6_bit             _BIT_ACCESS(LATC,6)
// LATC<LC7>
extern volatile __bit                   LC7                 __at(0x7C5F);	// @ (0xF8B * 8 + 7)
#define                                 LC7_bit             _BIT_ACCESS(LATC,7)
// LVDCON<LVDEN>
extern volatile __bit                   LVDEN               __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 LVDEN_bit           _BIT_ACCESS(LVDCON,4)
// PIE2<LVDIE>
extern volatile __bit                   LVDIE               __at(0x7D02);	// @ (0xFA0 * 8 + 2)
#define                                 LVDIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<LVDIF>
extern volatile __bit                   LVDIF               __at(0x7D0A);	// @ (0xFA1 * 8 + 2)
#define                                 LVDIF_bit           _BIT_ACCESS(PIR2,2)
// IPR2<LVDIP>
extern volatile __bit                   LVDIP               __at(0x7D12);	// @ (0xFA2 * 8 + 2)
#define                                 LVDIP_bit           _BIT_ACCESS(IPR2,2)
// LVDCON<LVDL0>
extern volatile __bit                   LVDL0               __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 LVDL0_bit           _BIT_ACCESS(LVDCON,0)
// LVDCON<LVDL1>
extern volatile __bit                   LVDL1               __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 LVDL1_bit           _BIT_ACCESS(LVDCON,1)
// LVDCON<LVDL2>
extern volatile __bit                   LVDL2               __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 LVDL2_bit           _BIT_ACCESS(LVDCON,2)
// LVDCON<LVDL3>
extern volatile __bit                   LVDL3               __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 LVDL3_bit           _BIT_ACCESS(LVDCON,3)
// PORTE<MCLR>
extern volatile __bit                   MCLR                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 MCLR_bit            _BIT_ACCESS(PORTE,3)
// STATUS<NEGATIVE>
extern volatile __bit                   NEGATIVE            __at(0x7EC4);	// @ (0xFD8 * 8 + 4)
#define                                 NEGATIVE_bit        _BIT_ACCESS(STATUS,4)
// SSPSTAT<NOT_A>
extern volatile __bit                   NOT_A               __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_A_bit           _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<NOT_ADDRESS>
extern volatile __bit                   NOT_ADDRESS         __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_ADDRESS_bit     _BIT_ACCESS(SSPSTAT,5)
// RCON<NOT_BOR>
extern volatile __bit                   NOT_BOR             __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 NOT_BOR_bit         _BIT_ACCESS(RCON,0)
// ADCON0<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 NOT_DONE_bit        _BIT_ACCESS(ADCON0,1)
// QEICON<NOT_DOWN>
extern volatile __bit                   NOT_DOWN            __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 NOT_DOWN_bit        _BIT_ACCESS(QEICON,5)
// PORTC<NOT_FLTA>
extern volatile __bit                   NOT_FLTA            __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 NOT_FLTA_bit        _BIT_ACCESS(PORTC,1)
// PORTC<NOT_FLTB>
extern volatile __bit                   NOT_FLTB            __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 NOT_FLTB_bit        _BIT_ACCESS(PORTC,2)
// RCON<NOT_IPEN>
extern volatile __bit                   NOT_IPEN            __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 NOT_IPEN_bit        _BIT_ACCESS(RCON,7)
// PORTE<NOT_MCLR>
extern volatile __bit                   NOT_MCLR            __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 NOT_MCLR_bit        _BIT_ACCESS(PORTE,3)
// RCON<NOT_PD>
extern volatile __bit                   NOT_PD              __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 NOT_PD_bit          _BIT_ACCESS(RCON,2)
// RCON<NOT_POR>
extern volatile __bit                   NOT_POR             __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 NOT_POR_bit         _BIT_ACCESS(RCON,1)
// INTCON2<NOT_RBPU>
extern volatile __bit                   NOT_RBPU            __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 NOT_RBPU_bit        _BIT_ACCESS(INTCON2,7)
// T5CON<NOT_RESEN>
extern volatile __bit                   NOT_RESEN           __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 NOT_RESEN_bit       _BIT_ACCESS(T5CON,6)
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          _BIT_ACCESS(RCON,4)
// PORTC<NOT_SS>
extern volatile __bit                   NOT_SS              __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 NOT_SS_bit          _BIT_ACCESS(PORTC,6)
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// T5CON<NOT_T5SYNC>
extern volatile __bit                   NOT_T5SYNC          __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 NOT_T5SYNC_bit      _BIT_ACCESS(T5CON,2)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// QEICON<NOT_VELM>
extern volatile __bit                   NOT_VELM            __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 NOT_VELM_bit        _BIT_ACCESS(QEICON,7)
// SSPSTAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       _BIT_ACCESS(SSPSTAT,2)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// PORTA<OSC1>
extern volatile __bit                   OSC1                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 OSC1_bit            _BIT_ACCESS(PORTA,7)
// PORTA<OSC2>
extern volatile __bit                   OSC2                __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 OSC2_bit            _BIT_ACCESS(PORTA,6)
// PIE2<OSFIE>
extern volatile __bit                   OSFIE               __at(0x7D07);	// @ (0xFA0 * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<OSFIF>
extern volatile __bit                   OSFIF               __at(0x7D0F);	// @ (0xFA1 * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR2,7)
// IPR2<OSFIP>
extern volatile __bit                   OSFIP               __at(0x7D17);	// @ (0xFA2 * 8 + 7)
#define                                 OSFIP_bit           _BIT_ACCESS(IPR2,7)
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x7E9B);	// @ (0xFD3 * 8 + 3)
#define                                 OSTS_bit            _BIT_ACCESS(OSCCON,3)
// PWMCON1<OSYNC>
extern volatile __bit                   OSYNC               __at(0x7B70);	// @ (0xF6E * 8 + 0)
#define                                 OSYNC_bit           _BIT_ACCESS(PWMCON1,0)
// STATUS<OV>
extern volatile __bit                   OV                  __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OV_bit              _BIT_ACCESS(STATUS,3)
// STATUS<OVERFLOW>
extern volatile __bit                   OVERFLOW            __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OVERFLOW_bit        _BIT_ACCESS(STATUS,3)
// PORTC<PA1>
extern volatile __bit                   _PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)  // Note: Changed by MikroE
#define                                 PA1_bit             _BIT_ACCESS(PORTC,2)
// PORTC<PA2>
extern volatile __bit                   _PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)  // Note: Changed by MikroE
#define                                 PA2_bit             _BIT_ACCESS(PORTC,1)
// PORTE<PC3E>
extern volatile __bit                   PC3E                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 PC3E_bit            _BIT_ACCESS(PORTE,3)
// RCON<PD>
extern volatile __bit                   PD                  __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 PD_bit              _BIT_ACCESS(RCON,2)
// QEICON<PDEC0>
extern volatile __bit                   PDEC0               __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 PDEC0_bit           _BIT_ACCESS(QEICON,0)
// QEICON<PDEC1>
extern volatile __bit                   PDEC1               __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 PDEC1_bit           _BIT_ACCESS(QEICON,1)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// INTCON<PEIE_GIEL>
extern volatile __bit                   PEIE_GIEL           __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_GIEL_bit       _BIT_ACCESS(INTCON,6)
// PWMCON0<PMOD0>
extern volatile __bit                   PMOD0               __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 PMOD0_bit           _BIT_ACCESS(PWMCON0,0)
// PWMCON0<PMOD1>
extern volatile __bit                   PMOD1               __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 PMOD1_bit           _BIT_ACCESS(PWMCON0,1)
// PWMCON0<PMOD2>
extern volatile __bit                   PMOD2               __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 PMOD2_bit           _BIT_ACCESS(PWMCON0,2)
// PWMCON0<PMOD3>
extern volatile __bit                   PMOD3               __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 PMOD3_bit           _BIT_ACCESS(PWMCON0,3)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// OVDCONS<POUT0>
extern volatile __bit                   POUT0               __at(0x7B50);	// @ (0xF6A * 8 + 0)
#define                                 POUT0_bit           _BIT_ACCESS(OVDCONS,0)
// OVDCONS<POUT1>
extern volatile __bit                   POUT1               __at(0x7B51);	// @ (0xF6A * 8 + 1)
#define                                 POUT1_bit           _BIT_ACCESS(OVDCONS,1)
// OVDCONS<POUT2>
extern volatile __bit                   POUT2               __at(0x7B52);	// @ (0xF6A * 8 + 2)
#define                                 POUT2_bit           _BIT_ACCESS(OVDCONS,2)
// OVDCONS<POUT3>
extern volatile __bit                   POUT3               __at(0x7B53);	// @ (0xF6A * 8 + 3)
#define                                 POUT3_bit           _BIT_ACCESS(OVDCONS,3)
// OVDCONS<POUT4>
extern volatile __bit                   POUT4               __at(0x7B54);	// @ (0xF6A * 8 + 4)
#define                                 POUT4_bit           _BIT_ACCESS(OVDCONS,4)
// OVDCONS<POUT5>
extern volatile __bit                   POUT5               __at(0x7B55);	// @ (0xF6A * 8 + 5)
#define                                 POUT5_bit           _BIT_ACCESS(OVDCONS,5)
// OVDCONS<POUT6>
extern volatile __bit                   POUT6               __at(0x7B56);	// @ (0xF6A * 8 + 6)
#define                                 POUT6_bit           _BIT_ACCESS(OVDCONS,6)
// OVDCONS<POUT7>
extern volatile __bit                   POUT7               __at(0x7B57);	// @ (0xF6A * 8 + 7)
#define                                 POUT7_bit           _BIT_ACCESS(OVDCONS,7)
// OVDCOND<POVD0>
extern volatile __bit                   POVD0               __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 POVD0_bit           _BIT_ACCESS(OVDCOND,0)
// OVDCOND<POVD1>
extern volatile __bit                   POVD1               __at(0x7B59);	// @ (0xF6B * 8 + 1)
#define                                 POVD1_bit           _BIT_ACCESS(OVDCOND,1)
// OVDCOND<POVD2>
extern volatile __bit                   POVD2               __at(0x7B5A);	// @ (0xF6B * 8 + 2)
#define                                 POVD2_bit           _BIT_ACCESS(OVDCOND,2)
// OVDCOND<POVD3>
extern volatile __bit                   POVD3               __at(0x7B5B);	// @ (0xF6B * 8 + 3)
#define                                 POVD3_bit           _BIT_ACCESS(OVDCOND,3)
// OVDCOND<POVD4>
extern volatile __bit                   POVD4               __at(0x7B5C);	// @ (0xF6B * 8 + 4)
#define                                 POVD4_bit           _BIT_ACCESS(OVDCOND,4)
// OVDCOND<POVD5>
extern volatile __bit                   POVD5               __at(0x7B5D);	// @ (0xF6B * 8 + 5)
#define                                 POVD5_bit           _BIT_ACCESS(OVDCOND,5)
// OVDCOND<POVD6>
extern volatile __bit                   POVD6               __at(0x7B5E);	// @ (0xF6B * 8 + 6)
#define                                 POVD6_bit           _BIT_ACCESS(OVDCOND,6)
// OVDCOND<POVD7>
extern volatile __bit                   POVD7               __at(0x7B5F);	// @ (0xF6B * 8 + 7)
#define                                 POVD7_bit           _BIT_ACCESS(OVDCOND,7)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
// PTCON0<PTCKPS0>
extern volatile __bit                   PTCKPS0             __at(0x7BFA);	// @ (0xF7F * 8 + 2)
#define                                 PTCKPS0_bit         _BIT_ACCESS(PTCON0,2)
// PTCON0<PTCKPS1>
extern volatile __bit                   PTCKPS1             __at(0x7BFB);	// @ (0xF7F * 8 + 3)
#define                                 PTCKPS1_bit         _BIT_ACCESS(PTCON0,3)
// PTCON1<PTDIR>
extern volatile __bit                   PTDIR               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 PTDIR_bit           _BIT_ACCESS(PTCON1,6)
// PTCON1<PTEN>
extern volatile __bit                   PTEN                __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 PTEN_bit            _BIT_ACCESS(PTCON1,7)
// PIE3<PTIE>
extern volatile __bit                   PTIE                __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 PTIE_bit            _BIT_ACCESS(PIE3,4)
// PIR3<PTIF>
extern volatile __bit                   PTIF                __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 PTIF_bit            _BIT_ACCESS(PIR3,4)
// IPR3<PTIP>
extern volatile __bit                   PTIP                __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 PTIP_bit            _BIT_ACCESS(IPR3,4)
// PTCON0<PTMOD0>
extern volatile __bit                   PTMOD0              __at(0x7BF8);	// @ (0xF7F * 8 + 0)
#define                                 PTMOD0_bit          _BIT_ACCESS(PTCON0,0)
// PTCON0<PTMOD1>
extern volatile __bit                   PTMOD1              __at(0x7BF9);	// @ (0xF7F * 8 + 1)
#define                                 PTMOD1_bit          _BIT_ACCESS(PTCON0,1)
// PTCON0<PTOPS0>
extern volatile __bit                   PTOPS0              __at(0x7BFC);	// @ (0xF7F * 8 + 4)
#define                                 PTOPS0_bit          _BIT_ACCESS(PTCON0,4)
// PTCON0<PTOPS1>
extern volatile __bit                   PTOPS1              __at(0x7BFD);	// @ (0xF7F * 8 + 5)
#define                                 PTOPS1_bit          _BIT_ACCESS(PTCON0,5)
// PTCON0<PTOPS2>
extern volatile __bit                   PTOPS2              __at(0x7BFE);	// @ (0xF7F * 8 + 6)
#define                                 PTOPS2_bit          _BIT_ACCESS(PTCON0,6)
// PTCON0<PTOPS3>
extern volatile __bit                   PTOPS3              __at(0x7BFF);	// @ (0xF7F * 8 + 7)
#define                                 PTOPS3_bit          _BIT_ACCESS(PTCON0,7)
// PWMCON0<PWMEN0>
extern volatile __bit                   PWMEN0              __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 PWMEN0_bit          _BIT_ACCESS(PWMCON0,4)
// PWMCON0<PWMEN1>
extern volatile __bit                   PWMEN1              __at(0x7B7D);	// @ (0xF6F * 8 + 5)
#define                                 PWMEN1_bit          _BIT_ACCESS(PWMCON0,5)
// PWMCON0<PWMEN2>
extern volatile __bit                   PWMEN2              __at(0x7B7E);	// @ (0xF6F * 8 + 6)
#define                                 PWMEN2_bit          _BIT_ACCESS(PWMCON0,6)
// QEICON<QEIM0>
extern volatile __bit                   QEIM0               __at(0x7DB2);	// @ (0xFB6 * 8 + 2)
#define                                 QEIM0_bit           _BIT_ACCESS(QEICON,2)
// QEICON<QEIM1>
extern volatile __bit                   QEIM1               __at(0x7DB3);	// @ (0xFB6 * 8 + 3)
#define                                 QEIM1_bit           _BIT_ACCESS(QEICON,3)
// QEICON<QEIM2>
extern volatile __bit                   QEIM2               __at(0x7DB4);	// @ (0xFB6 * 8 + 4)
#define                                 QEIM2_bit           _BIT_ACCESS(QEICON,4)
// PORTA<RA0>
extern volatile __bit _DEPRECATED       RA0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit _DEPRECATED       RA1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit _DEPRECATED       RA2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit _DEPRECATED       RA3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit _DEPRECATED       RA4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA6>
extern volatile __bit _DEPRECATED       RA6                 __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTA,6)
// PORTA<RA7>
extern volatile __bit _DEPRECATED       RA7                 __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RA7_bit             _BIT_ACCESS(PORTA,7)
// PORTB<RB0>
extern volatile __bit _DEPRECATED       RB0                 __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit _DEPRECATED       RB1                 __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit _DEPRECATED       RB2                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit _DEPRECATED       RB3                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RB4>
extern volatile __bit _DEPRECATED       RB4                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit _DEPRECATED       RB5                 __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RB6>
extern volatile __bit _DEPRECATED       RB6                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit _DEPRECATED       RB7                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// INTCON<RBIE>
extern volatile __bit                   RBIE                __at(0x7F93);	// @ (0xFF2 * 8 + 3)
#define                                 RBIE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<RBIF>
extern volatile __bit                   RBIF                __at(0x7F90);	// @ (0xFF2 * 8 + 0)
#define                                 RBIF_bit            _BIT_ACCESS(INTCON,0)
// INTCON2<RBIP>
extern volatile __bit                   RBIP                __at(0x7F88);	// @ (0xFF1 * 8 + 0)
#define                                 RBIP_bit            _BIT_ACCESS(INTCON2,0)
// INTCON2<RBPU>
extern volatile __bit                   RBPU                __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 RBPU_bit            _BIT_ACCESS(INTCON2,7)
// PORTC<RC0>
extern volatile __bit _DEPRECATED       RC0                 __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit _DEPRECATED       RC1                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RC1IE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RC1IF_bit           _BIT_ACCESS(PIR1,5)
// IPR1<RC1IP>
extern volatile __bit                   RC1IP               __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RC1IP_bit           _BIT_ACCESS(IPR1,5)
// PORTC<RC2>
extern volatile __bit _DEPRECATED       RC2                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC3>
extern volatile __bit _DEPRECATED       RC3                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit _DEPRECATED       RC4                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit _DEPRECATED       RC5                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PORTC<RC6>
extern volatile __bit _DEPRECATED       RC6                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit _DEPRECATED       RC7                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// RCSTA<RC8_9>
extern volatile __bit                   RC8_9               __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RC8_9_bit           _BIT_ACCESS(RCSTA,6)
// RCSTA<RC9>
extern volatile __bit                   RC9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RC9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RCD8>
extern volatile __bit                   RCD8                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RCD8_bit            _BIT_ACCESS(RCSTA,0)
// BAUDCON<RCIDL>
extern volatile __bit                   RCIDL               __at(0x7D56);	// @ (0xFAA * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// IPR1<RCIP>
extern volatile __bit                   RCIP                __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RCIP_bit            _BIT_ACCESS(IPR1,5)
// BAUDCON<RCMT>
extern volatile __bit                   RCMT                __at(0x7D56);	// @ (0xFAA * 8 + 6)
#define                                 RCMT_bit            _BIT_ACCESS(BAUDCON,6)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0x7D30);	// @ (0xFA6 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
// T1CON<RD16>
extern volatile __bit                   RD16                __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 RD16_bit            _BIT_ACCESS(T1CON,7)
// T5CON<RD165>
extern volatile __bit                   RD165               __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 RD165_bit           _BIT_ACCESS(T5CON,1)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// SSPSTAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSPSTAT,2)
// T5CON<RESEN>
extern volatile __bit                   RESEN               __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 RESEN_bit           _BIT_ACCESS(T5CON,6)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// PORTA<RJPU>
extern volatile __bit                   RJPU                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RJPU_bit            _BIT_ACCESS(PORTA,7)
// SSPSTAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSPSTAT,2)
// PORTC<RX>
extern volatile __bit                   RX                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX_bit              _BIT_ACCESS(PORTC,7)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// PIE3<RXB0IE>
extern volatile __bit                   RXB0IE              __at(0x7D18);	// @ (0xFA3 * 8 + 0)
#define                                 RXB0IE_bit          _BIT_ACCESS(PIE3,0)
// PIE3<RXB1IE>
extern volatile __bit                   RXB1IE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 RXB1IE_bit          _BIT_ACCESS(PIE3,1)
// PIE3<RXBNIE>
extern volatile __bit                   RXBNIE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 RXBNIE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<RXBNIF>
extern volatile __bit                   RXBNIF              __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 RXBNIF_bit          _BIT_ACCESS(PIR3,1)
// IPR3<RXBNIP>
extern volatile __bit                   RXBNIP              __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 RXBNIP_bit          _BIT_ACCESS(IPR3,1)
// BAUDCON<RXCKP>
extern volatile __bit                   RXCKP               __at(0x7D55);	// @ (0xFAA * 8 + 5)
#define                                 RXCKP_bit           _BIT_ACCESS(BAUDCON,5)
// BAUDCON<RXDTP>
extern volatile __bit                   RXDTP               __at(0x7D55);	// @ (0xFAA * 8 + 5)
#define                                 RXDTP_bit           _BIT_ACCESS(BAUDCON,5)
// SSPSTAT<R_NOT_W>
extern volatile __bit                   R_NOT_W             __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_NOT_W_bit         _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_W>
extern volatile __bit                   R_W                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// ADCHS<SASEL0>
extern volatile __bit                   SASEL0              __at(0x7CC8);	// @ (0xF99 * 8 + 0)
#define                                 SASEL0_bit          _BIT_ACCESS(ADCHS,0)
// ADCHS<SASEL1>
extern volatile __bit                   SASEL1              __at(0x7CC9);	// @ (0xF99 * 8 + 1)
#define                                 SASEL1_bit          _BIT_ACCESS(ADCHS,1)
// ADCHS<SBSEL0>
extern volatile __bit                   SBSEL0              __at(0x7CCC);	// @ (0xF99 * 8 + 4)
#define                                 SBSEL0_bit          _BIT_ACCESS(ADCHS,4)
// ADCHS<SBSEL1>
extern volatile __bit                   SBSEL1              __at(0x7CCD);	// @ (0xF99 * 8 + 5)
#define                                 SBSEL1_bit          _BIT_ACCESS(ADCHS,5)
// PORTC<SCK>
extern volatile __bit                   SCK                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SCK_bit             _BIT_ACCESS(PORTC,5)
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0x7D54);	// @ (0xFAA * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// PORTC<SCL>
extern volatile __bit                   SCL                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SCL_bit             _BIT_ACCESS(PORTC,5)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// ADCHS<SCSEL0>
extern volatile __bit                   SCSEL0              __at(0x7CCA);	// @ (0xF99 * 8 + 2)
#define                                 SCSEL0_bit          _BIT_ACCESS(ADCHS,2)
// ADCHS<SCSEL1>
extern volatile __bit                   SCSEL1              __at(0x7CCB);	// @ (0xF99 * 8 + 3)
#define                                 SCSEL1_bit          _BIT_ACCESS(ADCHS,3)
// PORTC<SDA>
extern volatile __bit                   SDA                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDA_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDI>
extern volatile __bit                   SDI                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDI_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDO>
extern volatile __bit                   SDO                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 SDO_bit             _BIT_ACCESS(PORTC,7)
// ADCHS<SDSEL0>
extern volatile __bit                   SDSEL0              __at(0x7CCE);	// @ (0xF99 * 8 + 6)
#define                                 SDSEL0_bit          _BIT_ACCESS(ADCHS,6)
// ADCHS<SDSEL1>
extern volatile __bit                   SDSEL1              __at(0x7CCF);	// @ (0xF99 * 8 + 7)
#define                                 SDSEL1_bit          _BIT_ACCESS(ADCHS,7)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// TXSTA<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB1_bit          _BIT_ACCESS(TXSTA,3)
// PWMCON1<SEVOPS0>
extern volatile __bit                   SEVOPS0             __at(0x7B74);	// @ (0xF6E * 8 + 4)
#define                                 SEVOPS0_bit         _BIT_ACCESS(PWMCON1,4)
// PWMCON1<SEVOPS1>
extern volatile __bit                   SEVOPS1             __at(0x7B75);	// @ (0xF6E * 8 + 5)
#define                                 SEVOPS1_bit         _BIT_ACCESS(PWMCON1,5)
// PWMCON1<SEVOPS2>
extern volatile __bit                   SEVOPS2             __at(0x7B76);	// @ (0xF6E * 8 + 6)
#define                                 SEVOPS2_bit         _BIT_ACCESS(PWMCON1,6)
// PWMCON1<SEVOPS3>
extern volatile __bit                   SEVOPS3             __at(0x7B77);	// @ (0xF6E * 8 + 7)
#define                                 SEVOPS3_bit         _BIT_ACCESS(PWMCON1,7)
// PWMCON1<SEVTDIR>
extern volatile __bit                   SEVTDIR             __at(0x7B73);	// @ (0xF6E * 8 + 3)
#define                                 SEVTDIR_bit         _BIT_ACCESS(PWMCON1,3)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// T1CON<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN_bit          _BIT_ACCESS(T1CON,3)
// T5CON<SOSCEN5>
extern volatile __bit                   SOSCEN5             __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 SOSCEN5_bit         _BIT_ACCESS(T5CON,3)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// RCSTA<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA,5)
// PORTC<SS>
extern volatile __bit                   SS                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 SS_bit              _BIT_ACCESS(PORTC,6)
// SSPCON<SSPEN>
extern volatile __bit                   SSPEN               __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
// IPR1<SSPIP>
extern volatile __bit                   SSPIP               __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSPIP_bit           _BIT_ACCESS(IPR1,3)
// SSPCON<SSPM0>
extern volatile __bit                   SSPM0               __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSPCON,0)
// SSPCON<SSPM1>
extern volatile __bit                   SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSPCON,1)
// SSPCON<SSPM2>
extern volatile __bit                   SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSPCON,2)
// SSPCON<SSPM3>
extern volatile __bit                   SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON,3)
// SSPCON<SSPOV>
extern volatile __bit                   SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON,6)
// ADCON3<SSRC0>
extern volatile __bit                   SSRC0               __at(0x7CD0);	// @ (0xF9A * 8 + 0)
#define                                 SSRC0_bit           _BIT_ACCESS(ADCON3,0)
// ADCON3<SSRC1>
extern volatile __bit                   SSRC1               __at(0x7CD1);	// @ (0xF9A * 8 + 1)
#define                                 SSRC1_bit           _BIT_ACCESS(ADCON3,1)
// ADCON3<SSRC2>
extern volatile __bit                   SSRC2               __at(0x7CD2);	// @ (0xF9A * 8 + 2)
#define                                 SSRC2_bit           _BIT_ACCESS(ADCON3,2)
// ADCON3<SSRC3>
extern volatile __bit                   SSRC3               __at(0x7CD3);	// @ (0xF9A * 8 + 3)
#define                                 SSRC3_bit           _BIT_ACCESS(ADCON3,3)
// ADCON3<SSRC4>
extern volatile __bit                   SSRC4               __at(0x7CD4);	// @ (0xF9A * 8 + 4)
#define                                 SSRC4_bit           _BIT_ACCESS(ADCON3,4)
// SSPSTAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSPSTAT,3)
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKPTR0>
extern volatile __bit                   STKPTR0             __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 STKPTR0_bit         _BIT_ACCESS(STKPTR,0)
// STKPTR<STKPTR1>
extern volatile __bit                   STKPTR1             __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 STKPTR1_bit         _BIT_ACCESS(STKPTR,1)
// STKPTR<STKPTR2>
extern volatile __bit                   STKPTR2             __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 STKPTR2_bit         _BIT_ACCESS(STKPTR,2)
// STKPTR<STKPTR3>
extern volatile __bit                   STKPTR3             __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 STKPTR3_bit         _BIT_ACCESS(STKPTR,3)
// STKPTR<STKPTR4>
extern volatile __bit                   STKPTR4             __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 STKPTR4_bit         _BIT_ACCESS(STKPTR,4)
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(STKPTR,6)
// SSPSTAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSPSTAT,4)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA,4)
// TXSTA<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC1_bit           _BIT_ACCESS(TXSTA,4)
// T0CON<T016BIT>
extern volatile __bit                   T016BIT             __at(0x7EAE);	// @ (0xFD5 * 8 + 6)
#define                                 T016BIT_bit         _BIT_ACCESS(T0CON,6)
// PORTC<T0CKI>
extern volatile __bit                   T0CKI               __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 T0CKI_bit           _BIT_ACCESS(PORTC,3)
// T0CON<T0CS>
extern volatile __bit                   T0CS                __at(0x7EAD);	// @ (0xFD5 * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(T0CON,5)
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON,5)
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON,2)
// INTCON2<T0IP>
extern volatile __bit                   T0IP                __at(0x7F8A);	// @ (0xFF1 * 8 + 2)
#define                                 T0IP_bit            _BIT_ACCESS(INTCON2,2)
// T0CON<T0PS0>
extern volatile __bit                   T0PS0               __at(0x7EA8);	// @ (0xFD5 * 8 + 0)
#define                                 T0PS0_bit           _BIT_ACCESS(T0CON,0)
// T0CON<T0PS1>
extern volatile __bit                   T0PS1               __at(0x7EA9);	// @ (0xFD5 * 8 + 1)
#define                                 T0PS1_bit           _BIT_ACCESS(T0CON,1)
// T0CON<T0PS2>
extern volatile __bit                   T0PS2               __at(0x7EAA);	// @ (0xFD5 * 8 + 2)
#define                                 T0PS2_bit           _BIT_ACCESS(T0CON,2)
// T0CON<T0PS3>
extern volatile __bit                   T0PS3               __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 T0PS3_bit           _BIT_ACCESS(T0CON,3)
// T0CON<T0SE>
extern volatile __bit                   T0SE                __at(0x7EAC);	// @ (0xFD5 * 8 + 4)
#define                                 T0SE_bit            _BIT_ACCESS(T0CON,4)
// PORTC<T13CKI>
extern volatile __bit                   T13CKI              __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T13CKI_bit          _BIT_ACCESS(PORTC,0)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x7E6C);	// @ (0xFCD * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x7E6D);	// @ (0xFCD * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1INSYNC_bit        _BIT_ACCESS(T1CON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// PORTC<T1OSI>
extern volatile __bit                   T1OSI               __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 T1OSI_bit           _BIT_ACCESS(PORTC,1)
// PORTC<T1OSO>
extern volatile __bit                   T1OSO               __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T1OSO_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1RD16>
extern volatile __bit                   T1RD16              __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 T1RD16_bit          _BIT_ACCESS(T1CON,7)
// T1CON<T1RUN>
extern volatile __bit                   T1RUN               __at(0x7E6E);	// @ (0xFCD * 8 + 6)
#define                                 T1RUN_bit           _BIT_ACCESS(T1CON,6)
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1SYNC_bit          _BIT_ACCESS(T1CON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x7E50);	// @ (0xFCA * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x7E51);	// @ (0xFCA * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0x7E53);	// @ (0xFCA * 8 + 3)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,3)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0x7E54);	// @ (0xFCA * 8 + 4)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,4)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0x7E55);	// @ (0xFCA * 8 + 5)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,5)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0x7E56);	// @ (0xFCA * 8 + 6)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,6)
// PORTC<T5CKI>
extern volatile __bit                   T5CKI               __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 T5CKI_bit           _BIT_ACCESS(PORTC,3)
// T5CON<T5MOD>
extern volatile __bit                   T5MOD               __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 T5MOD_bit           _BIT_ACCESS(T5CON,5)
// T5CON<T5PS0>
extern volatile __bit                   T5PS0               __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 T5PS0_bit           _BIT_ACCESS(T5CON,3)
// T5CON<T5PS1>
extern volatile __bit                   T5PS1               __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 T5PS1_bit           _BIT_ACCESS(T5CON,4)
// T5CON<T5SEN>
extern volatile __bit                   T5SEN               __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 T5SEN_bit           _BIT_ACCESS(T5CON,7)
// T5CON<T5SYNC>
extern volatile __bit                   T5SYNC              __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 T5SYNC_bit          _BIT_ACCESS(T5CON,2)
// PIE1<TBIE>
extern volatile __bit                   TBIE                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TBIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TBIF>
extern volatile __bit                   TBIF                __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TBIF_bit            _BIT_ACCESS(PIR1,4)
// IPR1<TBIP>
extern volatile __bit                   TBIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TBIP_bit            _BIT_ACCESS(IPR1,4)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// INTCON2<TMR0IP>
extern volatile __bit                   TMR0IP              __at(0x7F8A);	// @ (0xFF1 * 8 + 2)
#define                                 TMR0IP_bit          _BIT_ACCESS(INTCON2,2)
// T0CON<TMR0ON>
extern volatile __bit                   TMR0ON              __at(0x7EAF);	// @ (0xFD5 * 8 + 7)
#define                                 TMR0ON_bit          _BIT_ACCESS(T0CON,7)
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x7E69);	// @ (0xFCD * 8 + 1)
#define                                 TMR1CS_bit          _BIT_ACCESS(T1CON,1)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x7CE8);	// @ (0xF9D * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x7CF0);	// @ (0xF9E * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// IPR1<TMR1IP>
extern volatile __bit                   TMR1IP              __at(0x7CF8);	// @ (0xF9F * 8 + 0)
#define                                 TMR1IP_bit          _BIT_ACCESS(IPR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x7E68);	// @ (0xFCD * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x7CE9);	// @ (0xF9D * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x7CF1);	// @ (0xF9E * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// IPR1<TMR2IP>
extern volatile __bit                   TMR2IP              __at(0x7CF9);	// @ (0xF9F * 8 + 1)
#define                                 TMR2IP_bit          _BIT_ACCESS(IPR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x7E52);	// @ (0xFCA * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T5CON<TMR5CS>
extern volatile __bit                   TMR5CS              __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 TMR5CS_bit          _BIT_ACCESS(T5CON,1)
// PIE3<TMR5IE>
extern volatile __bit                   TMR5IE              __at(0x7D18);	// @ (0xFA3 * 8 + 0)
#define                                 TMR5IE_bit          _BIT_ACCESS(PIE3,0)
// PIR3<TMR5IF>
extern volatile __bit                   TMR5IF              __at(0x7D20);	// @ (0xFA4 * 8 + 0)
#define                                 TMR5IF_bit          _BIT_ACCESS(PIR3,0)
// IPR3<TMR5IP>
extern volatile __bit                   TMR5IP              __at(0x7D28);	// @ (0xFA5 * 8 + 0)
#define                                 TMR5IP_bit          _BIT_ACCESS(IPR3,0)
// T5CON<TMR5ON>
extern volatile __bit                   TMR5ON              __at(0x7DB8);	// @ (0xFB7 * 8 + 0)
#define                                 TMR5ON_bit          _BIT_ACCESS(T5CON,0)
// RCON<TO>
extern volatile __bit                   TO                  __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 TO_bit              _BIT_ACCESS(RCON,3)
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0x7E53);	// @ (0xFCA * 8 + 3)
#define                                 TOUTPS0_bit         _BIT_ACCESS(T2CON,3)
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0x7E54);	// @ (0xFCA * 8 + 4)
#define                                 TOUTPS1_bit         _BIT_ACCESS(T2CON,4)
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0x7E55);	// @ (0xFCA * 8 + 5)
#define                                 TOUTPS2_bit         _BIT_ACCESS(T2CON,5)
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0x7E56);	// @ (0xFCA * 8 + 6)
#define                                 TOUTPS3_bit         _BIT_ACCESS(T2CON,6)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x7C90);	// @ (0xF92 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x7C91);	// @ (0xF92 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x7C92);	// @ (0xF92 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x7C93);	// @ (0xF92 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISA,3)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x7C94);	// @ (0xF92 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA6>
extern volatile __bit                   TRISA6              __at(0x7C96);	// @ (0xF92 * 8 + 6)
#define                                 TRISA6_bit          _BIT_ACCESS(TRISA,6)
// TRISA<TRISA7>
extern volatile __bit                   TRISA7              __at(0x7C97);	// @ (0xF92 * 8 + 7)
#define                                 TRISA7_bit          _BIT_ACCESS(TRISA,7)
// TRISB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x7C98);	// @ (0xF93 * 8 + 0)
#define                                 TRISB0_bit          _BIT_ACCESS(TRISB,0)
// TRISB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x7C99);	// @ (0xF93 * 8 + 1)
#define                                 TRISB1_bit          _BIT_ACCESS(TRISB,1)
// TRISB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x7C9A);	// @ (0xF93 * 8 + 2)
#define                                 TRISB2_bit          _BIT_ACCESS(TRISB,2)
// TRISB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x7C9B);	// @ (0xF93 * 8 + 3)
#define                                 TRISB3_bit          _BIT_ACCESS(TRISB,3)
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x7C9C);	// @ (0xF93 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISB,4)
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x7C9D);	// @ (0xF93 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISB,5)
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x7C9E);	// @ (0xF93 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISB,6)
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x7C9F);	// @ (0xF93 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISB,7)
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x7CA0);	// @ (0xF94 * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x7CA1);	// @ (0xF94 * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x7CA2);	// @ (0xF94 * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x7CA3);	// @ (0xF94 * 8 + 3)
#define                                 TRISC3_bit          _BIT_ACCESS(TRISC,3)
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x7CA4);	// @ (0xF94 * 8 + 4)
#define                                 TRISC4_bit          _BIT_ACCESS(TRISC,4)
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x7CA5);	// @ (0xF94 * 8 + 5)
#define                                 TRISC5_bit          _BIT_ACCESS(TRISC,5)
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x7CA6);	// @ (0xF94 * 8 + 6)
#define                                 TRISC6_bit          _BIT_ACCESS(TRISC,6)
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x7CA7);	// @ (0xF94 * 8 + 7)
#define                                 TRISC7_bit          _BIT_ACCESS(TRISC,7)
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// TXSTA<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT1_bit           _BIT_ACCESS(TXSTA,1)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x7CD8);	// @ (0xF9B * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x7CD9);	// @ (0xF9B * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x7CDA);	// @ (0xF9B * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x7CDB);	// @ (0xF9B * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x7CDC);	// @ (0xF9B * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// OSCTUNE<TUN5>
extern volatile __bit                   TUN5                __at(0x7CDD);	// @ (0xF9B * 8 + 5)
#define                                 TUN5_bit            _BIT_ACCESS(OSCTUNE,5)
// PORTC<TX>
extern volatile __bit                   TX                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 TX_bit              _BIT_ACCESS(PORTC,6)
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TX1IE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TX1IF_bit           _BIT_ACCESS(PIR1,4)
// IPR1<TX1IP>
extern volatile __bit                   TX1IP               __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TX1IP_bit           _BIT_ACCESS(IPR1,4)
// TXSTA<TX8_9>
extern volatile __bit                   TX8_9               __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX8_9_bit           _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9>
extern volatile __bit                   TX9                 __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA,6)
// TXSTA<TX91>
extern volatile __bit                   TX91                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX91_bit            _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9D>
extern volatile __bit                   TX9D                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TX9D1>
extern volatile __bit                   TX9D1               __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D1_bit           _BIT_ACCESS(TXSTA,0)
// PIE3<TXB0IE>
extern volatile __bit                   TXB0IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 TXB0IE_bit          _BIT_ACCESS(PIE3,2)
// PIE3<TXB1IE>
extern volatile __bit                   TXB1IE              __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 TXB1IE_bit          _BIT_ACCESS(PIE3,3)
// PIE3<TXB2IE>
extern volatile __bit                   TXB2IE              __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TXB2IE_bit          _BIT_ACCESS(PIE3,4)
// PIE3<TXBNIE>
extern volatile __bit                   TXBNIE              __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TXBNIE_bit          _BIT_ACCESS(PIE3,4)
// PIR3<TXBNIF>
extern volatile __bit                   TXBNIF              __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TXBNIF_bit          _BIT_ACCESS(PIR3,4)
// IPR3<TXBNIP>
extern volatile __bit                   TXBNIP              __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TXBNIP_bit          _BIT_ACCESS(IPR3,4)
// BAUDCON<TXCKP>
extern volatile __bit                   TXCKP               __at(0x7D54);	// @ (0xFAA * 8 + 4)
#define                                 TXCKP_bit           _BIT_ACCESS(BAUDCON,4)
// TXSTA<TXD8>
extern volatile __bit                   TXD8                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TXD8_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXEN>
extern volatile __bit                   TXEN                __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA,5)
// TXSTA<TXEN1>
extern volatile __bit                   TXEN1               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN1_bit           _BIT_ACCESS(TXSTA,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// IPR1<TXIP>
extern volatile __bit                   TXIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TXIP_bit            _BIT_ACCESS(IPR1,4)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// PWMCON1<UDIS>
extern volatile __bit                   UDIS                __at(0x7B71);	// @ (0xF6E * 8 + 1)
#define                                 UDIS_bit            _BIT_ACCESS(PWMCON1,1)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// QEICON<UP>
extern volatile __bit                   UP                  __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 UP_bit              _BIT_ACCESS(QEICON,5)
// QEICON<UPDOWN>
extern volatile __bit                   UPDOWN              __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 UPDOWN_bit          _BIT_ACCESS(QEICON,5)
// QEICON<UP_DOWN>
extern volatile __bit                   UP_DOWN             __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 UP_DOWN_bit         _BIT_ACCESS(QEICON,5)
// QEICON<UP_NOT_DOWN>
extern volatile __bit                   UP_NOT_DOWN         __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 UP_NOT_DOWN_bit     _BIT_ACCESS(QEICON,5)
// QEICON<UP_nDOWN>
extern volatile __bit                   UP_nDOWN            __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 UP_nDOWN_bit        _BIT_ACCESS(QEICON,5)
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0x7E0E);	// @ (0xFC1 * 8 + 6)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,6)
// ADCON1<VCFG01>
extern volatile __bit                   VCFG01              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG01_bit          _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0x7E0F);	// @ (0xFC1 * 8 + 7)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,7)
// QEICON<VELM>
extern volatile __bit                   VELM                __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 VELM_bit            _BIT_ACCESS(QEICON,7)
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREFM_bit           _BIT_ACCESS(PORTA,2)
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREFP_bit           _BIT_ACCESS(PORTA,3)
// BAUDCON<W4E>
extern volatile __bit                   W4E                 __at(0x7D51);	// @ (0xFAA * 8 + 1)
#define                                 W4E_bit             _BIT_ACCESS(BAUDCON,1)
// PR2<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 WAIT0_bit           _BIT_ACCESS(_PR2,4)  // Note: Changed by MikroE
// PR2<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 WAIT1_bit           _BIT_ACCESS(_PR2,5)  // Note: Changed by MikroE
// SSPCON<WCOL>
extern volatile __bit                   WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON,7)
// WDTCON<WDTW>
extern volatile __bit                   WDTW                __at(0x7E8F);	// @ (0xFD1 * 8 + 7)
#define                                 WDTW_bit            _BIT_ACCESS(WDTCON,7)
// PR2<WM0>
extern volatile __bit                   WM0                 __at(0x7E58);	// @ (0xFCB * 8 + 0)
#define                                 WM0_bit             _BIT_ACCESS(_PR2,0)  // Note: Changed by MikroE
// PR2<WM1>
extern volatile __bit                   WM1                 __at(0x7E59);	// @ (0xFCB * 8 + 1)
#define                                 WM1_bit             _BIT_ACCESS(_PR2,1)  // Note: Changed by MikroE
// EECON1<WR>
extern volatile __bit                   WR                  __at(0x7D31);	// @ (0xFA6 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0x7D32);	// @ (0xFA6 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0x7D33);	// @ (0xFA6 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
// BAUDCON<WUE>
extern volatile __bit                   WUE                 __at(0x7D51);	// @ (0xFAA * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x7EC2);	// @ (0xFD8 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSPSTAT<nA>
extern volatile __bit                   nA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSPSTAT,5)
// SSPSTAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSPSTAT,5)
// RCON<nBOR>
extern volatile __bit                   nBOR                __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(RCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// QEICON<nDOWN>
extern volatile __bit                   nDOWN               __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 nDOWN_bit           _BIT_ACCESS(QEICON,5)
// PORTC<nFLTA>
extern volatile __bit                   nFLTA               __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 nFLTA_bit           _BIT_ACCESS(PORTC,1)
// PORTC<nFLTB>
extern volatile __bit                   nFLTB               __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 nFLTB_bit           _BIT_ACCESS(PORTC,2)
// RCON<nIPEN>
extern volatile __bit                   nIPEN               __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 nIPEN_bit           _BIT_ACCESS(RCON,7)
// PORTE<nMCLR>
extern volatile __bit                   nMCLR               __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 nMCLR_bit           _BIT_ACCESS(PORTE,3)
// RCON<nPD>
extern volatile __bit                   nPD                 __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 nPD_bit             _BIT_ACCESS(RCON,2)
// RCON<nPOR>
extern volatile __bit                   nPOR                __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(RCON,1)
// INTCON2<nRBPU>
extern volatile __bit                   nRBPU               __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(INTCON2,7)
// T5CON<nRESEN>
extern volatile __bit                   nRESEN              __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 nRESEN_bit          _BIT_ACCESS(T5CON,6)
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             _BIT_ACCESS(RCON,4)
// PORTC<nSS>
extern volatile __bit                   nSS                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 nSS_bit             _BIT_ACCESS(PORTC,6)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// T5CON<nT5SYNC>
extern volatile __bit                   nT5SYNC             __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 nT5SYNC_bit         _BIT_ACCESS(T5CON,2)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// QEICON<nVELM>
extern volatile __bit                   nVELM               __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 nVELM_bit           _BIT_ACCESS(QEICON,7)
// SSPSTAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSPSTAT,2)

#endif // _PIC18F2331_H_
